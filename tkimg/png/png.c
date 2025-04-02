/*
 * png.c
 *
 * PNG photo image type, Tcl/Tk package.
 *
 * A photo image handler for the Portable Network Graphics image format.
 *
 * For a list of available format options see function ParseFormatOpts
 * and the documentation img-png.
 *
 * Copyright (c) 1997-2024 Jan Nijtmans    <nijtmans@users.sourceforge.net>
 * Copyright (c) 2002-2024 Andreas Kupries <andreas_kupries@users.sourceforge.net>
 * Copyright (c) 2003-2024 Paul Obermeier  <obermeier@users.sourceforge.net>
 *
 * See the file "license.terms" for information on usage and redistribution
 * of this file, and for a DISCLAIMER OF ALL WARRANTIES.
 *
 */

#include "pngtcl.h"
#include <string.h>
#include <stdlib.h>

static int SetupPngLibrary(Tcl_Interp *interp);

#define MORE_INITIALIZATION \
    if (SetupPngLibrary (interp) != TCL_OK) { return TCL_ERROR; }

/* Force usage of Tk_CreatePhotoImageFormatVersion3
   supporting image matadata introduced in Tk8.7.
   Must be specified before inclusion of init.c.
*/
#define USE_FORMAT_VERSION3 1

/*
 * Generic initialization code, parameterized via CPACKAGE and PACKAGE.
 */

#include "init.c"

#define COMPRESS_THRESHOLD 1024
#define MAX_TAGS 10

typedef struct png_text_struct_compat
{
   png_text compat;
   png_size_t itxt_length; /* length of the itxt string */
   png_charp lang;         /* language code, 0-79 characters
                              or a NULL pointer */
   png_charp lang_key;     /* keyword translated UTF-8 string, 0 or more
                              chars or a NULL pointer */
} png_text_compat;

typedef struct cleanup_info {
    Tcl_Interp *interp;
    jmp_buf jmpbuf;
} cleanup_info;

typedef struct {
    int      verbose;        /* Read/Write option -verbose */
    int      withalpha;      /* Read/Write option -withalpha */
    float    alpha;          /* Read  option -alpha */
    float    gamma;          /* Read  option -gamma */
    double   xres;           /* Write option -resolution or -xresolution */
    double   yres;           /* Write option -resolution or -yresolution */
    png_text tags[MAX_TAGS]; /* Write option -tag */
    int      numTags;
} FMTOPT;

/*
 * Prototypes for local procedures defined in this file:
 */

static int CommonMatch(
    png_structp png_ptr,
    tkimg_Stream *handle,
    int *widthPtr, int *heightPtr,
    double *xdpiPtr, double *ydpiPtr
);
static int CommonRead(
    png_structp png_ptr,
    Tcl_Interp* interp,
    const char *fileName,
    Tcl_Obj *format,
    Tk_PhotoHandle imageHandle,
    int destX, int destY,
    int width, int height,
    int srcX, int srcY,
    Tcl_Obj *metadataOut
);
static int CommonWrite(
    Tcl_Interp *interp,
    const char *fileName,
    png_structp png_ptr,
    png_infop info_ptr,
    Tcl_Obj *format,
    Tk_PhotoImageBlock *blockPtr,
    Tcl_Obj *metadataIn
);

static void tk_png_error(png_structp, png_const_charp);
static void tk_png_warning(png_structp, png_const_charp);

/*
 * These functions are used for all Input/Output.
 */

static void tk_png_read(png_structp, png_bytep, png_size_t);
static void tk_png_write(png_structp, png_bytep, png_size_t);
static void tk_png_flush(png_structp);

static void PrintReadInfo (int width, int height, double hdpi, double vdpi,
                           int nchans, int bits, double fileGamma,
                           const char *fileName, const char *msg)
{
    Tcl_Channel outChan;
    char str[256];

    outChan = Tcl_GetStdChannel (TCL_STDOUT);
    if (!outChan) {
        return;
    }
    tkimg_snprintf(str, 256, "%s %s\n", msg, fileName);                        IMGOUT;
    tkimg_snprintf(str, 256, "\tSize in pixel   : %d x %d\n", width, height);  IMGOUT;
    tkimg_snprintf(str, 256, "\tDots per inch   : %.0f x %.0f\n", hdpi, vdpi); IMGOUT;
    tkimg_snprintf(str, 256, "\tNum channels    : %d\n", nchans);              IMGOUT;
    tkimg_snprintf(str, 256, "\tBits per channel: %d\n", bits);                IMGOUT;
    if (fileGamma < 0.0) {
        tkimg_snprintf(str, 256, "\tFile gamma      : %s\n", "None");          IMGOUT;
    } else {
        tkimg_snprintf(str, 256, "\tFile gamma      : %f\n", fileGamma);       IMGOUT;
    }
    Tcl_Flush(outChan);
}

static void PrintSaveInfo (int width, int height, png_uint_32 hdpi, png_uint_32 vdpi,
                           FMTOPT *opts, const char *fileName, const char *msg)
{
    Tcl_Channel outChan;
    int i;
    char str[256];

    outChan = Tcl_GetStdChannel (TCL_STDOUT);
    if (!outChan) {
        return;
    }
    tkimg_snprintf(str, 256, "%s %s\n", msg, fileName);                     IMGOUT;
    tkimg_snprintf(str, 256, "\tSize in pixel: %d x %d\n", width, height);  IMGOUT;
    tkimg_snprintf(str, 256, "\tDots per inch: %d x %d\n", hdpi, vdpi);     IMGOUT;
    if (opts->numTags > 0) {
        tkimg_snprintf(str, 256, "\tTags:\n");                              IMGOUT;
        for (i=0; i<opts->numTags; i++) {
            tkimg_snprintf(str, 256, "\t  %s: %s\n", 
                opts->tags[i].key, opts->tags[i].text);                     IMGOUT;
        }
    }
    Tcl_Flush(outChan);
}

static int ParseFormatOpts(
    Tcl_Interp *interp,
    Tcl_Obj *format,
    FMTOPT *opts,
    int mode
) {
    static const char *const readOptions[] = {
        "-verbose", "-alpha", "-gamma", "-withalpha", "-matte", NULL
    };
    enum readEnums {
        R_VERBOSE, R_ALPHA, R_GAMMA, R_WITHALPHA, R_MATTE
    };
    static const char *const writeOptions[] = {
        "-verbose", "-resolution", "-xresolution", "-yresolution", "-tag", "-withalpha", "-matte", NULL
    };
    enum writeEnums {
        W_VERBOSE, W_RESOLUTION, W_XRESOLUTION, W_YRESOLUTION, W_TAG, W_WITHALPHA, W_MATTE
    };
    Tcl_Size objc, i;
    int index;
    char *optionStr;
    Tcl_Obj **objv;
    int numTags = 0;
    int boolVal;
    double doubleVal;

    opts->verbose   = 0;
    opts->alpha     = -1.0;
    opts->gamma     = 1.0;
    opts->withalpha = 1;
    opts->xres      = (double)IMG_DEFAULT_DPI;
    opts->yres      = (double)IMG_DEFAULT_DPI;
    opts->numTags   = 0;

    if (tkimg_ListObjGetElements(interp, format, &objc, &objv) == TCL_ERROR) {
        return TCL_ERROR;
    }
    for (i=1; i<objc; i++) {
        if (mode == IMG_READ) {
            if (Tcl_GetIndexFromObj(interp, objv[i], readOptions,
                    "format option", 0, &index) == TCL_ERROR) {
                return TCL_ERROR;
            }
        } else {
            if (Tcl_GetIndexFromObj(interp, objv[i], writeOptions,
                    "format option", 0, &index) == TCL_ERROR) {
                return TCL_ERROR;
            }
        }
        if (++i >= objc) {
            Tcl_SetObjResult(interp, Tcl_ObjPrintf(
                "No value specified for option \"%s\".", Tcl_GetString(objv[--i])));
            return TCL_ERROR;
        }
        optionStr = Tcl_GetString(objv[i]);
        if (mode == IMG_READ) {
            switch (index) {
                case R_VERBOSE: {
                    if (Tcl_GetBoolean(interp, optionStr, &boolVal) == TCL_ERROR) {
                        Tcl_SetObjResult(interp, Tcl_ObjPrintf(
                            "Invalid verbose mode \"%s\": must be 1 or 0, on or off, true or false.",
                            optionStr));
                        return TCL_ERROR;
                    }
                    opts->verbose = boolVal;
                    break;
                }
                case R_ALPHA: {
                    if (Tcl_GetDouble(interp, optionStr, &doubleVal) == TCL_ERROR || doubleVal < 0.0) {
                        Tcl_SetObjResult(interp, Tcl_ObjPrintf(
                            "Invalid alpha value \"%s\": must be a double value greater or equal to zero.",
                            optionStr));
                        return TCL_ERROR;
                    }
                    opts->alpha = doubleVal;
                    if (opts->alpha < 0.0 ) opts->alpha = 0.0;
                    if (opts->alpha > 1.0 ) opts->alpha = 1.0;
                    break;
                }
                case R_GAMMA: {
                    if (Tcl_GetDouble(interp, optionStr, &doubleVal) == TCL_ERROR || doubleVal < 0.0) {
                         Tcl_SetObjResult(interp, Tcl_ObjPrintf(
                            "Invalid gamma value \"%s\": must be a double value greater or equal to zero.",
                            optionStr));
                        return TCL_ERROR;
                    }
                    if (doubleVal >= 0.0) {
                        opts->gamma = doubleVal;
                    }
                    break;
                }
                case R_WITHALPHA:
                case R_MATTE: {
                    if (Tcl_GetBoolean(interp, optionStr, &boolVal) == TCL_ERROR) {
                        Tcl_SetObjResult(interp, Tcl_ObjPrintf(
                            "Invalid withalpha mode \"%s\": must be 1 or 0, on or off, true or false.",
                            optionStr));
                        return TCL_ERROR;
                    }
                    opts->withalpha = boolVal;
                    break;
                }
            }
        } else {
            switch (index) {
                case W_VERBOSE: {
                    if (Tcl_GetBoolean(interp, optionStr, &boolVal) == TCL_ERROR) {
                        Tcl_SetObjResult(interp, Tcl_ObjPrintf(
                            "Invalid verbose mode \"%s\": must be 1 or 0, on or off, true or false.",
                            optionStr));
                        return TCL_ERROR;
                    }
                    opts->verbose = boolVal;
                    break;
                }
                case W_RESOLUTION: {
                    if (tkimg_GetDistanceValue (interp, optionStr, &doubleVal) == TCL_ERROR) {
                        Tcl_AppendResult (interp, " specified for x resolution.", (char *) NULL);
                        return TCL_ERROR;
                    }
                    opts->xres = doubleVal;
                    opts->yres = doubleVal;
                    if (i+1 >= objc) {
                        /* No more parameters available. */
                        break;
                    }
                    optionStr = Tcl_GetString(objv[i+1]);
                    if (optionStr[0] == '-' ) {
                        /* Next parameter is an option. */
                        break;
                    }
                    if (tkimg_GetDistanceValue (interp, optionStr, &doubleVal) == TCL_ERROR) {
                        Tcl_AppendResult (interp, " specified for y resolution.", (char *) NULL);
                        return TCL_ERROR;
                    }
                    opts->yres = doubleVal;
                    i++;
                    break;
                }
                case W_XRESOLUTION: {
                    if (tkimg_GetDistanceValue (interp, optionStr, &doubleVal) == TCL_ERROR) {
                        Tcl_AppendResult (interp, " specified for x resolution.", (char *) NULL);
                        return TCL_ERROR;
                    }
                    opts->xres = doubleVal;
                    break;
                }
                case W_YRESOLUTION: {
                    if (tkimg_GetDistanceValue (interp, optionStr, &doubleVal) == TCL_ERROR) {
                        Tcl_AppendResult (interp, " specified for y resolution.", (char *) NULL);
                        return TCL_ERROR;
                    }
                    opts->yres = doubleVal;
                    break;
                }
                case W_TAG: {
                    if (numTags >= MAX_TAGS) {
                        Tcl_SetObjResult(interp, Tcl_ObjPrintf("Maximum number of tags (10) exceeded."));
                        return TCL_ERROR;
                    }
                    if (++i >= objc) {
                        Tcl_SetObjResult(interp, Tcl_ObjPrintf(
                            "No value specified for key \"%s\".", optionStr));
                        return TCL_ERROR;
                    }
                    opts->tags[numTags].key  = optionStr;
                    opts->tags[numTags].text = Tcl_GetString(objv[i]);
                    opts->tags[numTags].text_length = strlen (opts->tags[numTags].text);
                    if (opts->tags[numTags].text_length > COMPRESS_THRESHOLD) {
                        opts->tags[numTags].compression = PNG_TEXT_COMPRESSION_zTXt;
                    } else {
                        opts->tags[numTags].compression = PNG_TEXT_COMPRESSION_NONE;
                    }
                    numTags++;
                    break;
                }
                case W_WITHALPHA:
                case W_MATTE: {
                    if (Tcl_GetBoolean(interp, optionStr, &boolVal) == TCL_ERROR) {
                        Tcl_SetObjResult(interp, Tcl_ObjPrintf(
                            "Invalid withalpha mode \"%s\": must be 1 or 0, on or off, true or false.",
                            optionStr));
                        return TCL_ERROR;
                    }
                    opts->withalpha = boolVal;
                    break;
                }
            }
        }
    }
    opts->numTags = numTags;
    return TCL_OK;
}

/*
 *
 */

static int SetupPngLibrary(
    Tcl_Interp *interp
) {
    if (!Pngtcl_InitStubs(interp, PNGTCL_VERSION, 0)) {
        return TCL_ERROR;
    }
    return TCL_OK;
}

static void tk_png_error(
    png_structp png_ptr,
    png_const_charp error_msg
) {
    cleanup_info *info = (cleanup_info *) png_get_error_ptr(png_ptr);
    Tcl_AppendResult(info->interp, error_msg, (char *) NULL);
    LONGJMP(info->jmpbuf,1);
}

static void tk_png_warning(
    png_structp png_ptr,
    png_const_charp error_msg
) {
    return;
}

static void tk_png_read(
    png_structp png_ptr,
    png_bytep data,
    png_size_t length
) {
    if (tkimg_Read((tkimg_Stream *) png_get_progressive_ptr(png_ptr),
            (char *) data, (Tcl_Size) length) != (int) length) {
        png_error(png_ptr, "Read Error");
    }
}

static void tk_png_write(
    png_structp png_ptr,
    png_bytep data,
    png_size_t length
) {
    if (tkimg_Write((tkimg_Stream *) png_get_progressive_ptr(png_ptr),
            (char *) data, (Tcl_Size) length) != (int) length) {
        png_error(png_ptr, "Write Error");
    }
}

static void tk_png_flush(
    png_structp png_ptr
) {
}

static int FileMatchVersion3(
    Tcl_Interp *interp,
    Tcl_Channel chan,
    const char *fileName,
    Tcl_Obj *format,
    Tcl_Obj *metadataIn,
    int *widthPtr, int *heightPtr,
    Tcl_Obj *metadataOut
) {
    png_structp png_ptr;
    cleanup_info cleanup;
    int retVal;
    double xdpi, ydpi;
    tkimg_Stream handle;
    memset(&handle, 0, sizeof (tkimg_Stream));

    tkimg_ReadInitFile(&handle, chan);

    cleanup.interp = interp;

    png_ptr=png_create_read_struct(PNG_LIBPNG_VER_STRING,
            (png_voidp) &cleanup, tk_png_error, tk_png_warning);
    if (!png_ptr) {
        return 0;
    }

    png_set_read_fn(png_ptr, (png_voidp) &handle, tk_png_read);

    retVal = CommonMatch(png_ptr, &handle, widthPtr, heightPtr, &xdpi, &ydpi);
    if (retVal && xdpi >= 0.0 && ydpi >= 0.0) {
        if (TCL_ERROR == tkimg_SetResolution( metadataOut, xdpi, ydpi)) {
            return 0;
        }
    }
    return retVal;
}

static int StringMatchVersion3(
    Tcl_Interp *interp,
    Tcl_Obj *dataObj,
    Tcl_Obj *format,
    Tcl_Obj *metadataIn,
    int *widthPtr, int *heightPtr,
    Tcl_Obj *metadataOut
) {
    png_structp png_ptr;
    cleanup_info cleanup;
    int retVal;
    double xdpi, ydpi;
    tkimg_Stream handle;
    memset(&handle, 0, sizeof (tkimg_Stream));

    cleanup.interp = interp;

    png_ptr=png_create_read_struct(PNG_LIBPNG_VER_STRING,
            (png_voidp) &cleanup, tk_png_error, tk_png_warning);
    if (!png_ptr) {
        return 0;
    }

    if (!tkimg_ReadInitString(&handle, dataObj)) {
        png_destroy_read_struct(&png_ptr, NULL, NULL);
        return 0;
    }

    png_set_read_fn(png_ptr,(png_voidp) &handle, tk_png_read);

    retVal = CommonMatch(png_ptr, &handle, widthPtr, heightPtr, &xdpi, &ydpi);
    if (retVal && xdpi >= 0.0 && ydpi >= 0.0) {
        if (TCL_ERROR == tkimg_SetResolution(metadataOut, xdpi, ydpi)) {
            return 0;
        }
    }
    return retVal;
}

#if HAVE_FORMAT_VERSION3 == 0
static int FileMatch(
    Tcl_Channel chan,
    const char *fileName,
    Tcl_Obj *format,
    int *widthPtr,
    int *heightPtr,
    Tcl_Interp *interp
) {
    return FileMatchVersion3(
           interp, chan, fileName, format, NULL,
            widthPtr, heightPtr, NULL);
}

static int StringMatch(
    Tcl_Obj *dataObj,
    Tcl_Obj *format,
    int *widthPtr,
    int *heightPtr,
    Tcl_Interp *interp
) {
    return StringMatchVersion3(interp, dataObj, format, NULL, widthPtr, heightPtr, NULL);
}
#endif

static int CommonMatch(
    png_structp png_ptr,
    tkimg_Stream *handle,
    int *widthPtr, int *heightPtr,
    double *xdpiPtr, double *ydpiPtr
) {
    png_infop info_ptr;
    png_uint_32 info_width, info_height;
    png_uint_32 xres = 0, yres = 0;
    double xdpi = -1.0, ydpi = -1.0;
    int resUnit = 0;

    info_ptr=png_create_info_struct(png_ptr);
    if (!info_ptr) {
        png_destroy_read_struct(&png_ptr, NULL, NULL);
        return 0;
    }

    if (SETJMP((((cleanup_info *) png_get_error_ptr(png_ptr))->jmpbuf))) {
        png_destroy_read_struct(&png_ptr, &info_ptr, NULL);
        return 0;
    }

    png_read_info(png_ptr, info_ptr);

    if ( ! png_get_IHDR(png_ptr, info_ptr, &info_width, &info_height, NULL, NULL, NULL, NULL, NULL)) {
        png_destroy_read_struct(&png_ptr, &info_ptr, NULL);
        return 0;
    }
    *widthPtr  = (int) info_width;
    *heightPtr = (int) info_height;

    if (PNG_INFO_pHYs == png_get_pHYs(png_ptr, info_ptr, &xres, &yres, &resUnit)) {
        xdpi = xres;
        ydpi = yres;
        if (resUnit == PNG_RESOLUTION_METER) {
            xdpi = (int) ((double)xres * 0.0254 + 0.5);
            ydpi = (int) ((double)yres * 0.0254 + 0.5);
        }
    }
    if (xdpi == 0.0) {
        xdpi = -1.0;
    }
    if (ydpi == 0.0) {
        ydpi = -1.0;
    }
    *xdpiPtr = xdpi;
    *ydpiPtr = ydpi;

    png_destroy_read_struct(&png_ptr, &info_ptr, NULL);
    return 1;
}

static int FileReadVersion3(
    Tcl_Interp *interp,
    Tcl_Channel chan,
    const char *fileName,
    Tcl_Obj *format,
    Tcl_Obj *metadataIn,
    Tk_PhotoHandle imageHandle,
    int destX, int destY,
    int width, int height,
    int srcX, int srcY,
    Tcl_Obj *metadataOut
) {
    png_structp png_ptr;
    cleanup_info cleanup;
    tkimg_Stream handle;
    memset(&handle, 0, sizeof (tkimg_Stream));

    tkimg_ReadInitFile(&handle, chan);

    cleanup.interp = interp;

    png_ptr=png_create_read_struct(PNG_LIBPNG_VER_STRING,
            (png_voidp) &cleanup,tk_png_error,tk_png_warning);
    if (!png_ptr) return TCL_ERROR;

    png_set_read_fn(png_ptr, (png_voidp) &handle, tk_png_read);

    return CommonRead(png_ptr, interp, fileName, format, imageHandle, destX, destY,
            width, height, srcX, srcY, metadataOut);
}

static int StringReadVersion3(
    Tcl_Interp *interp,
    Tcl_Obj *dataObj,
    Tcl_Obj *format,
    Tcl_Obj *metadataIn,
    Tk_PhotoHandle imageHandle,
    int destX, int destY,
    int width, int height,
    int srcX, int srcY,
    Tcl_Obj *metadataOut
) {
    png_structp png_ptr;
    cleanup_info cleanup;
    tkimg_Stream handle;
    memset(&handle, 0, sizeof (tkimg_Stream));

    cleanup.interp = interp;

    png_ptr=png_create_read_struct(PNG_LIBPNG_VER_STRING,
            (png_voidp) &cleanup,tk_png_error,tk_png_warning);
    if (!png_ptr) return TCL_ERROR;

    if (!tkimg_ReadInitString(&handle, dataObj)) {
        return 0;
    }

    png_set_read_fn(png_ptr,(png_voidp) &handle, tk_png_read);

    return CommonRead(png_ptr, interp, "InlineData", format, imageHandle, destX, destY,
            width, height, srcX, srcY, metadataOut);
}

#if HAVE_FORMAT_VERSION3 == 0
static int FileRead(
    Tcl_Interp *interp,
    Tcl_Channel chan,
    const char *fileName,
    Tcl_Obj *format,
    Tk_PhotoHandle imageHandle,
    int destX, int destY,
    int width, int height,
    int srcX, int srcY
) {
    return FileReadVersion3(
           interp, chan, fileName, format, NULL, imageHandle,
           destX, destY, width, height, srcX, srcY, NULL);
}

static int StringRead(
    Tcl_Interp *interp,
    Tcl_Obj *dataObj,
    Tcl_Obj *format,
    Tk_PhotoHandle imageHandle,
    int destX, int destY,
    int width, int height,
    int srcX, int srcY
) {
    return StringReadVersion3(
           interp, dataObj, format, NULL, imageHandle,
           destX, destY, width, height, srcX, srcY, NULL);
}
#endif

static int CommonRead(
    png_structp png_ptr,
    Tcl_Interp *interp,
    const char *fileName,
    Tcl_Obj *format,
    Tk_PhotoHandle imageHandle,
    int destX, int destY,
    int width, int height,
    int srcX, int srcY,
    Tcl_Obj *metadataOut
) {
    png_infop info_ptr;
    png_infop end_info;
    char **png_data = NULL;
    Tk_PhotoImageBlock block;
    unsigned int i;
    png_uint_32 info_width, info_height;
    png_uint_32 xres = 0, yres = 0;
    double xdpi = -1.0, ydpi = -1.0;
    int resUnit = 0;
    int bit_depth, color_type, interlace_type;
    int intent;
    int result = TCL_OK;
    double fileGamma = -1.0;
    int useAlpha = 0;
    int addAlpha = 0;
    FMTOPT opts;

    if (ParseFormatOpts(interp, format, &opts, IMG_READ) == TCL_ERROR) {
        png_destroy_read_struct(&png_ptr,NULL,NULL);
        return TCL_ERROR;
    }

    info_ptr=png_create_info_struct(png_ptr);
    if (!info_ptr) {
        png_destroy_read_struct(&png_ptr,NULL,NULL);
        return TCL_ERROR;
    }

    end_info=png_create_info_struct(png_ptr);
    if (!end_info) {
        png_destroy_read_struct(&png_ptr,&info_ptr,NULL);
        return TCL_ERROR;
    }

    if (SETJMP((((cleanup_info *) png_get_error_ptr(png_ptr))->jmpbuf))) {
        if (png_data) {
            ckfree((char *)png_data);
        }
        png_destroy_read_struct(&png_ptr, &info_ptr, &end_info);
        return TCL_ERROR;
    }

    png_read_info(png_ptr,info_ptr);

    png_get_IHDR(png_ptr, info_ptr, &info_width, &info_height, &bit_depth,
        &color_type, &interlace_type, (int *) NULL, (int *) NULL);

    if ((srcX + width) > (int) info_width) {
        width = info_width - srcX;
    }
    if ((srcY + height) > (int) info_height) {
        height = info_height - srcY;
    }
    if ((width <= 0) || (height <= 0)
        || (srcX >= (int) info_width)
        || (srcY >= (int) info_height)) {
        png_destroy_read_struct(&png_ptr,&info_ptr,&end_info);
        Tcl_AppendResult(interp, "Width or height are negative", (char *) NULL);
        return TCL_ERROR;
    }

    if (Tk_PhotoExpand(interp, imageHandle, destX + width, destY + height) == TCL_ERROR) {
        png_destroy_read_struct(&png_ptr,&info_ptr,&end_info);
        return TCL_ERROR;
    }

    Tk_PhotoGetImage(imageHandle, &block);

#ifdef PNG_READ_SCALE_16_TO_8_SUPPORTED
    png_set_scale_16(png_ptr);
#endif

    png_set_expand(png_ptr);

    if (png_get_sRGB(png_ptr, info_ptr, &intent)) {
        png_set_sRGB(png_ptr, info_ptr, intent);
    } else {
        if (opts.gamma < 0.0) {
            /* No gamma specified on the command line.
             * Check, if a gamma value is specified in the file.
             */
            if (png_get_gAMA(png_ptr, info_ptr, &fileGamma)) {
                png_set_gamma(png_ptr, 1.0, fileGamma);
            }
        } else {
            png_set_gamma(png_ptr, 1.0, opts.gamma);
        }
    }

    if ((color_type & PNG_COLOR_MASK_ALPHA)
        || png_get_valid(png_ptr, info_ptr, PNG_INFO_tRNS)) {
        /* Image has an alpha channel.
           Check, if we don't want to use the alpha channel (withalpha == false) */
        if (!opts.withalpha) {
            png_set_strip_alpha (png_ptr);
        }
    } else {
        /* Image has no alpha channel.
           If a valid alpha multiply has been specified, add an alpha channel to the image.
           The withalpha flag is ignored. */
        if (opts.alpha >= 0.0) {
            png_set_add_alpha(png_ptr, (unsigned int)(opts.alpha*255), PNG_FILLER_AFTER);
        }
    }


    if (PNG_INFO_pHYs == png_get_pHYs(png_ptr, info_ptr, &xres, &yres, &resUnit)) {
        xdpi = xres;
        ydpi = yres;
        if (resUnit == PNG_RESOLUTION_METER) {
            xdpi = (int) ((double)xres * 0.0254 + 0.5);
            ydpi = (int) ((double)yres * 0.0254 + 0.5);
        }
    }
    if (xdpi == 0.0) {
        xdpi = -1.0;
    }
    if (ydpi == 0.0) {
        ydpi = -1.0;
    }

    if (xdpi >= 0.0 && ydpi >= 0.0) {
        if (TCL_ERROR == tkimg_SetResolution( metadataOut, xdpi, ydpi)) {
            return TCL_ERROR;
        }
    }

    if (opts.verbose) {
        PrintReadInfo (info_width, info_height, xdpi, ydpi, png_get_channels(png_ptr, info_ptr),
                       bit_depth, fileGamma, fileName, "Reading image:");
    }

    /* Note: png_read_update_info may only be called once per info_ptr !! */
    png_read_update_info(png_ptr, info_ptr);

    block.pixelSize = png_get_channels(png_ptr, info_ptr);
    block.pitch = png_get_rowbytes(png_ptr, info_ptr);

    if ((color_type & PNG_COLOR_MASK_COLOR) == 0) {
        /* grayscale image */
        block.offset[1] = 0;
        block.offset[2] = 0;
    }
    block.width = width;
    block.height = height;

    if ((color_type & PNG_COLOR_MASK_ALPHA)
        || png_get_valid(png_ptr, info_ptr, PNG_INFO_tRNS)) {
        /* Image has an alpha channel.
           Check, if we don't want to use the alpha channel (withalpha == false) */
        if (!opts.withalpha) {
            block.offset[3] = 0;
        } else {
            block.offset[3] = block.pixelSize - 1;
            if ( opts.alpha >= 0.0) {
                useAlpha = 1;
            }
        }
    } else {
        /* Image has no alpha channel.
           If a valid alpha multiply has been specified, add an alpha channel to the image.
           The withalpha flag is ignored. */
        if ( opts.alpha >= 0.0) {
            addAlpha = 1;
        } else {
            block.offset[3] = 0;
        }
    }

    if (addAlpha) {
        block.offset[3] = block.pixelSize - 1;
    }

    png_data = (char **) attemptckalloc(sizeof(char *) * info_height + info_height * block.pitch);
    if (png_data == NULL) {
        png_destroy_read_struct(&png_ptr,&info_ptr,&end_info);
        Tcl_AppendResult (interp, "Unable to allocate memory for image data.", (char *) NULL);
        return TCL_ERROR;
    }

    for(i=0;i<info_height;i++) {
        png_data[i] = ((char *) png_data) + (sizeof(char *) * info_height + i * block.pitch);
    }

    png_read_image(png_ptr,(png_bytepp) png_data);

    block.pixelPtr=(unsigned char *) (png_data[srcY]+srcX*block.pixelSize);

    if (useAlpha) {
        unsigned char * alphaPtr = block.pixelPtr + block.offset[3];
        for(i=0; i<(unsigned int)(height*width); i++) {
            *alphaPtr = opts.alpha * *alphaPtr;
            alphaPtr += block.offset[3] + 1 ;
        }
    }

    if (Tk_PhotoPutBlock(
        interp, imageHandle, &block,
        destX, destY, width, height,
        block.offset[3]? TK_PHOTO_COMPOSITE_OVERLAY: TK_PHOTO_COMPOSITE_SET) == TCL_ERROR) {
        result = TCL_ERROR;
    }

    ckfree((char *) png_data);
    png_destroy_read_struct(&png_ptr,&info_ptr,&end_info);
    return result;
}

static int FileWriteVersion3(
    Tcl_Interp *interp,
    const char *fileName,
    Tcl_Obj *format,
    Tcl_Obj *metadataIn,
    Tk_PhotoImageBlock *blockPtr
) {
    png_structp png_ptr;
    png_infop info_ptr;
    int result;
    cleanup_info cleanup;
    Tcl_Channel chan = (Tcl_Channel) NULL;
    tkimg_Stream handle;
    memset(&handle, 0, sizeof (tkimg_Stream));

    chan = tkimg_OpenFileChannel(interp, fileName, "w");
    if (!chan) {
        return TCL_ERROR;
    }

    tkimg_WriteInitFile(&handle, chan);

    cleanup.interp = interp;

    png_ptr=png_create_write_struct(PNG_LIBPNG_VER_STRING,
            (png_voidp) &cleanup,tk_png_error,tk_png_warning);
    if (!png_ptr) {
        Tcl_Close(NULL, chan);
        return TCL_ERROR;
    }

    info_ptr=png_create_info_struct(png_ptr);
    if (!info_ptr) {
        png_destroy_write_struct(&png_ptr,NULL);
        Tcl_Close(NULL, chan);
        return TCL_ERROR;
    }

    png_set_write_fn(png_ptr,(png_voidp) &handle, tk_png_write, tk_png_flush);

    result = CommonWrite(interp, fileName, png_ptr, info_ptr, format, blockPtr, metadataIn);
    Tcl_Close(NULL, chan);
    return result;
}

static int StringWriteVersion3(
    Tcl_Interp *interp,
    Tcl_Obj *format,
    Tcl_Obj *metadataIn,
    Tk_PhotoImageBlock *blockPtr
) {
    int result;
    png_structp png_ptr;
    png_infop info_ptr;
    cleanup_info cleanup;
    tkimg_Stream handle;
    memset(&handle, 0, sizeof (tkimg_Stream));

    cleanup.interp = interp;

    png_ptr=png_create_write_struct(PNG_LIBPNG_VER_STRING,
            (png_voidp) &cleanup, tk_png_error, tk_png_warning);
    if (!png_ptr) {
        return TCL_ERROR;
    }

    info_ptr = png_create_info_struct(png_ptr);
    if (!info_ptr) {
        png_destroy_write_struct(&png_ptr,NULL);
        return TCL_ERROR;
    }

    png_set_write_fn(png_ptr, (png_voidp) &handle, tk_png_write, tk_png_flush);

    tkimg_WriteInitString(&handle);

    result = CommonWrite(interp, "InlineData", png_ptr, info_ptr, format, blockPtr, metadataIn);

    if (result == TCL_OK) {
        Tcl_SetObjResult(interp, handle.byteObj);
    }
    return result;
}

#if HAVE_FORMAT_VERSION3 == 0
static int FileWrite(
    Tcl_Interp *interp,
    const char *fileName,
    Tcl_Obj *format,
    Tk_PhotoImageBlock *blockPtr
) {
    return FileWriteVersion3(interp, fileName, format, NULL, blockPtr);
}

static int StringWrite(
    Tcl_Interp *interp,
    Tcl_Obj *format,
    Tk_PhotoImageBlock *blockPtr
) {
    return StringWriteVersion3(interp, format, NULL, blockPtr);
}
#endif

static int CommonWrite(
    Tcl_Interp *interp,
    const char *fileName,
    png_structp png_ptr,
    png_infop info_ptr,
    Tcl_Obj *format,
    Tk_PhotoImageBlock *blockPtr,
    Tcl_Obj *metadataIn
) {
    int greenOffset, blueOffset, alphaOffset;
    int i, pass, number_passes, color_type;
    int newPixelSize;
    png_bytep row_pointers = (png_bytep) NULL;

    FMTOPT opts;
    unsigned int xres, yres;
    double xdpi = 0.0, ydpi = 0.0;

    if (ParseFormatOpts(interp, format, &opts, IMG_WRITE) == TCL_ERROR) {
        png_destroy_write_struct(&png_ptr,&info_ptr);
        return TCL_ERROR;
    }

    if (SETJMP((((cleanup_info *) png_get_error_ptr(png_ptr))->jmpbuf))) {
        if (row_pointers) {
            ckfree((char *) row_pointers);
        }
        png_destroy_write_struct(&png_ptr,&info_ptr);
        return TCL_ERROR;
    }
    greenOffset = blockPtr->offset[1] - blockPtr->offset[0];
    blueOffset = blockPtr->offset[2] - blockPtr->offset[0];
    alphaOffset = blockPtr->offset[0];
    if (alphaOffset < blockPtr->offset[2]) {
        alphaOffset = blockPtr->offset[2];
    }
    if (++alphaOffset < blockPtr->pixelSize) {
        alphaOffset -= blockPtr->offset[0];
    } else {
        alphaOffset = 0;
    }

    if (greenOffset || blueOffset) {
        color_type = PNG_COLOR_TYPE_RGB;
        newPixelSize = 3;
    } else {
        color_type = PNG_COLOR_TYPE_GRAY;
        newPixelSize = 1;
    }
    if (alphaOffset && opts.withalpha) {
        color_type |= PNG_COLOR_MASK_ALPHA;
        newPixelSize++;
    }

    png_set_IHDR(png_ptr, info_ptr, blockPtr->width, blockPtr->height, 8,
            color_type, PNG_INTERLACE_ADAM7, PNG_COMPRESSION_TYPE_BASE,
            PNG_FILTER_TYPE_BASE);

    if (TCL_ERROR == tkimg_GetResolution(interp, metadataIn, &xdpi, &ydpi)) {
        png_destroy_write_struct(&png_ptr,&info_ptr);
        return TCL_ERROR;
    }

    if (opts.xres != IMG_DEFAULT_DPI && opts.yres != IMG_DEFAULT_DPI) {
        /* Resolution values specified in the format string (-xresolution, -yresolution)
           overwrite the values specified with option -metadata. */
        xdpi = opts.xres;
        ydpi = opts.yres;
    }
    xres = (unsigned int)(xdpi / 0.0254 + 0.5);
    yres = (unsigned int)(ydpi / 0.0254 + 0.5);

    png_set_pHYs(png_ptr, info_ptr, xres, yres, PNG_RESOLUTION_METER);

    png_set_text(png_ptr, info_ptr, opts.tags, opts.numTags);
    png_write_info(png_ptr,info_ptr);

    number_passes = png_set_interlace_handling(png_ptr);

    if (blockPtr->pixelSize != newPixelSize) {
        int j, oldPixelSize;
        png_bytep src, dst;
        oldPixelSize = blockPtr->pixelSize;
        row_pointers = (png_bytep) attemptckalloc(blockPtr->width * newPixelSize);
        if (row_pointers == NULL) {
            png_destroy_write_struct(&png_ptr,&info_ptr);
            Tcl_AppendResult (interp, "Unable to allocate memory for image data.", (char *) NULL);
            return TCL_ERROR;
        }
        for (pass = 0; pass < number_passes; pass++) {
            for(i=0; i<blockPtr->height; i++) {
                src = (png_bytep) blockPtr->pixelPtr
                        + i * blockPtr->pitch + blockPtr->offset[0];
                dst = row_pointers;
                for (j = blockPtr->width; j > 0; j--) {
                    memcpy(dst, src, newPixelSize);
                    src += oldPixelSize;
                    dst += newPixelSize;
                }
                png_write_row(png_ptr, row_pointers);
            }
        }
        ckfree((char *) row_pointers);
        row_pointers = NULL;
    } else {
        for (pass = 0; pass < number_passes; pass++) {
            for(i=0; i<blockPtr->height; i++) {
                png_write_row(png_ptr, (png_bytep) blockPtr->pixelPtr
                        + i * blockPtr->pitch + blockPtr->offset[0]);
            }
        }
    }
    png_write_end(png_ptr,NULL);
    png_destroy_write_struct(&png_ptr,&info_ptr);

    if (opts.verbose) {
        PrintSaveInfo (blockPtr->width, blockPtr->height, (unsigned int)xdpi, (unsigned int)ydpi,
                       &opts, fileName, "Saving image:");
    }

    return TCL_OK;
}
