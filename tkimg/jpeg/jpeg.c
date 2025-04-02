/*
 * jpeg.c
 *
 * JPEG photo image type, Tcl/Tk package.
 *
 * A photo image handler for JFIF image data.
 *
 * For a list of available format options see functions CommonRead and
 * CommonWrite and the documentation img-jpeg.
 *
 * Copyright (c) 2002-2024 Andreas Kupries <andreas_kupries@users.sourceforge.net>
 * Copyright (c) 1997-2024 Jan Nijtmans    <nijtmans@users.sourceforge.net>
 *
 * See the file "license.terms" for information on usage and redistribution
 * of this file, and for a DISCLAIMER OF ALL WARRANTIES.
 *
 */

#ifdef _WIN32
#   include <windows.h>
#   define HAVE_BOOLEAN
#endif

#ifndef FALSE
#define FALSE   0
#endif
#ifndef TRUE
#define TRUE    1
#endif

#include "tkimg.h"
#ifdef USE_TCL_STUBS
#include "jpegtcl.h"
#else
#include "jpeglib.h"
#include "jerror.h"
#endif

static int SetupJPegLibrary(Tcl_Interp *interp);

#define MORE_INITIALIZATION \
    if (SetupJPegLibrary (interp) != TCL_OK) { return TCL_ERROR; }

/* Force usage of Tk_CreatePhotoImageFormatVersion3
   supporting image matadata introduced in Tk8.7.
   Must be specified before inclusion of init.c.
*/
#define USE_FORMAT_VERSION3 1

/*
 * Generic initialization code, parameterized via CPACKAGE and PACKAGE.
 */
#include "init.c"

/* system includes */
#include <stdlib.h>
#include <string.h>
#include <setjmp.h>

/*
 * Declarations for libjpeg source and destination managers to handle
 * reading and writing binary strings and Tcl_Channel's.
 */

#define STRING_BUF_SIZE  4096       /* choose any convenient size */

typedef struct source_mgr {         /* Source manager for reading from string */
    struct jpeg_source_mgr pub;     /* Public fields */
    tkimg_Stream handle;            /* File or binary stream */
    JOCTET buffer[STRING_BUF_SIZE]; /* Buffer for a chunk of decoded data */
} *src_ptr;

typedef struct destination_mgr {     /* Manager for string output */
    struct jpeg_destination_mgr pub; /* Public fields */
    tkimg_Stream handle;             /* File or binary stream */
    JOCTET buffer[STRING_BUF_SIZE];  /* Buffer for a chunk of decoded data */
} *dest_ptr;

/*
 * Other declarations
 */

struct my_error_mgr {           /* Extended libjpeg error manager */
    struct jpeg_error_mgr pub;  /* public fields */
    jmp_buf setjmp_buffer;      /* for return to caller from error exit */
};

/* Format options structure for use with ParseFormatOpts */
typedef struct {
    int verbose;
    int fast;
    int grayscale;
    int optimize;
    int progressive;
    int quality;
    int smooth;
    double xres;
    double yres;
} FMTOPT;

/*
 * Prototypes for local procedures defined in this file:
 */

static int CommonMatch(
    j_decompress_ptr cinfo,
    tkimg_Stream *handle,
    int *widthPtr, int *heightPtr,
    double *xdpiPtr, double *ydpiPtr
);
static int CommonRead(
    Tcl_Interp *interp,
    const char *fileName,
    j_decompress_ptr cinfo,
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
    j_compress_ptr cinfo,
    Tcl_Obj *format,
    Tk_PhotoImageBlock *blockPtr,
    Tcl_Obj *metadataIn
);

static void    my_jpeg_obj_src(j_decompress_ptr, Tcl_Obj *);
static void    my_jpeg_channel_src(j_decompress_ptr, Tcl_Channel);
static boolean fill_input_buffer(j_decompress_ptr);
static void    skip_input_data(j_decompress_ptr, long);
static void    dummy_source(j_decompress_ptr);
static void    my_jpeg_string_dest(j_compress_ptr);
static void    my_jpeg_channel_dest(j_compress_ptr, Tcl_Channel);
static void    my_init_destination(j_compress_ptr);
static boolean my_empty_output_buffer(j_compress_ptr);
static void    my_term_destination(j_compress_ptr);
static void    my_error_exit(j_common_ptr cinfo);
static void    my_output_message(j_common_ptr cinfo);
static void    append_jpeg_message(Tcl_Interp *interp, j_common_ptr cinfo);

static void printImgInfo(
    int width, int height,
    int hdpi, int vdpi,
    const char *fileName,
    const char *msg
) {
    Tcl_Channel outChan;
    char str[256];

    outChan = Tcl_GetStdChannel (TCL_STDOUT);
    if (!outChan) {
        return;
    }

    tkimg_snprintf(str, 256, "%s %s\n", msg, fileName);                     IMGOUT;
    tkimg_snprintf(str, 256, "\tSize in pixel: %d x %d\n", width, height);  IMGOUT;
    tkimg_snprintf(str, 256, "\tDots per inch: %d x %d\n", hdpi, vdpi);     IMGOUT;
    Tcl_Flush(outChan);
}

static int ParseFormatOpts(
    Tcl_Interp *interp,
    Tcl_Obj *format,
    FMTOPT *opts,
    int mode
) {
    static const char *const readOptions[] = {
        "-verbose", "-fast", "-grayscale", NULL
    };
    enum readEnums {
        R_VERBOSE, R_FAST, R_GRAYSCALE
    };
    static const char *const writeOptions[] = {
        "-verbose", "-grayscale", "-optimize", "-progressive", "-quality",
        "-smooth", "-resolution", "-xresolution", "-yresolution", NULL
    };
    enum writeEnums {
        W_VERBOSE, W_GRAYSCALE, W_OPTIMIZE, W_PROGRESSIVE, W_QUALITY,
        W_SMOOTH, W_RESOLUTION, W_XRESOLUTION, W_YRESOLUTION
    };
    Tcl_Size objc, i;
    int index;
    char *optionStr;
    Tcl_Obj **objv;
    int boolVal;
    int intVal;
    double doubleVal;

    /* Initialize options with default values. */
    opts->verbose     = 0;
    opts->fast        = 0;
    opts->grayscale   = 0;
    opts->optimize    = 0;
    opts->progressive = 0;
    opts->quality     = 0;
    opts->smooth      = 0;
    opts->xres        = (double)IMG_DEFAULT_DPI;
    opts->yres        = (double)IMG_DEFAULT_DPI;

    if (tkimg_ListObjGetElements(interp, format, &objc, &objv) == TCL_ERROR) {
        return TCL_ERROR;
    }
    for (i=1; i<objc; i++) {
        if (mode == IMG_READ) {
            if (Tcl_GetIndexFromObj(interp, objv[i], readOptions,
                    "format option", 0, &index) == TCL_ERROR) {
                return TCL_ERROR;
            }
            if (index != R_FAST && index != R_GRAYSCALE) {
                if (++i >= objc) {
                    Tcl_SetObjResult(interp, Tcl_ObjPrintf(
                        "No value specified for option \"%s\".", Tcl_GetString(objv[--i])));
                    return TCL_ERROR;
                }
            }
        } else {
            if (Tcl_GetIndexFromObj(interp, objv[i], writeOptions,
                    "format option", 0, &index) == TCL_ERROR) {
                return TCL_ERROR;
            }
            if (index != W_GRAYSCALE && index != W_OPTIMIZE && index != W_PROGRESSIVE) {
                if (++i >= objc) {
                    Tcl_SetObjResult(interp, Tcl_ObjPrintf(
                        "No value specified for option \"%s\".", Tcl_GetString(objv[--i])));
                    return TCL_ERROR;
                }
            }
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
                case R_FAST: {
                    opts->fast = 1;
                    break;
                }
                case R_GRAYSCALE: {
                    opts->grayscale = 1;
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
                case W_GRAYSCALE: {
                    opts->grayscale = 1;
                    break;
                }
                case W_OPTIMIZE: {
                    opts->optimize = 1;
                    break;
                }
                case W_PROGRESSIVE: {
                    opts->progressive = 1;
                    break;
                }
                case W_QUALITY: {
                    if (Tcl_GetIntFromObj(interp, objv[i], &intVal) == TCL_ERROR || intVal < 0) {
                        Tcl_SetObjResult(interp, Tcl_ObjPrintf(
                            "Invalid quality value \"%s\": must be an integer value greater or equal to zero.",
                            optionStr));
                        return TCL_ERROR;
                    }
                    opts->quality = intVal;
                    break;
                }
                case W_SMOOTH: {
                    if (Tcl_GetIntFromObj(interp, objv[i], &intVal) == TCL_ERROR || intVal < 0) {
                        Tcl_SetObjResult(interp, Tcl_ObjPrintf(
                            "Invalid smooth value \"%s\": must be an integer value greater or equal to zero.",
                            optionStr));
                        return TCL_ERROR;
                    }
                    opts->smooth = intVal;
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
            }
        }
    }
    return TCL_OK;
}

static int SetupJPegLibrary(
    Tcl_Interp *interp
) {
    struct jpeg_compress_struct *cinfo; /* libjpeg's parameter structure */
    struct my_error_mgr jerror; /* for controlling libjpeg error handling */
    int i;

#ifdef USE_TCL_STUBS
    if (!Jpegtcl_InitStubs(interp, JPEGTCL_VERSION, 0)) {
        return TCL_ERROR;
    }
#endif

    /* The followin code tries to determine if the JPEG library is
       valid at all. The library might be configured differently,
       which will produce core dumps. Also it might be that
       fields appear in different places in jpeg_compress_struct
       or jpeg_decompress_struct. This will make the library totally
       unusable. In stead of a core-dump, we better have a proper
       error message */

    /* overallocat size, so we don't get a core-dump if the library
       thinks that the structure is much larger */

    cinfo = (struct jpeg_compress_struct *) attemptckalloc(8*sizeof(struct jpeg_compress_struct));
    if (cinfo == NULL) {
        Tcl_AppendResult (interp, "Unable to allocate memory for image data.", (char *) NULL);
        return TCL_ERROR;
    }
    cinfo->err = jpeg_std_error(&jerror.pub);
    jerror.pub.error_exit = my_error_exit;
    jerror.pub.output_message = my_output_message;
    /* Establish the setjmp return context for my_error_exit to use. */
    if (SETJMP(jerror.setjmp_buffer)) {
      /* If we get here, the JPEG library is invalid. */
      jpeg_destroy_compress(cinfo);
      ckfree((char *)cinfo);

      if (interp) {
        Tcl_AppendResult(interp, "Could not use \"", "jpegtcl",
                "\": please upgrade to at least version 6a", (char *) NULL);
      }
      return TCL_ERROR;
    }

    /* Now we can initialize libjpeg. */
    ((char *) cinfo)[sizeof(struct jpeg_compress_struct)] = 53;
    jpeg_create_compress(cinfo);
    if (((char *) cinfo)[sizeof(struct jpeg_compress_struct)] != 53) {
        /* Oops. The library changed this value, which is outside the
         * structure. Definitely, the library is invalid!!!! */
        ERREXIT(cinfo, JMSG_NOMESSAGE);
    }

    /* Set up JPEG compression parameters. */
    cinfo->image_width = 16;
    cinfo->image_height = 16;
    cinfo->input_components = 3;
    cinfo->in_color_space = JCS_RGB;
    cinfo->data_precision = -1;
    cinfo->optimize_coding = TRUE;
    cinfo->dct_method = -1;
    cinfo->X_density = 0;
    cinfo->Y_density = 0;
    jpeg_set_defaults(cinfo);

    if ((cinfo->data_precision != BITS_IN_JSAMPLE) ||
            (cinfo->optimize_coding != FALSE) ||
            (cinfo->dct_method != JDCT_DEFAULT) ||
            (cinfo->X_density != 1) ||
            (cinfo->Y_density != 1)) {
        ERREXIT(cinfo, JMSG_NOMESSAGE);
    }
    for (i = 0; i < NUM_ARITH_TBLS; i++) {
        if ((cinfo->arith_dc_L[i] != 0) ||
                (cinfo->arith_dc_U[i] != 1) ||
                (cinfo->arith_ac_K[i] != 5)) {
            ERREXIT(cinfo, JMSG_NOMESSAGE);
        }
    }
    jpeg_destroy_compress(cinfo);
    ckfree((char *) cinfo);
    return TCL_OK;
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
    int retVal;
    double xdpi, ydpi;
    struct jpeg_decompress_struct cinfo; /* libjpeg's parameter structure */
    struct my_error_mgr jerror; /* for controlling libjpeg error handling */
    tkimg_Stream handle;
    memset(&handle, 0, sizeof (tkimg_Stream));

    /* Initialize JPEG error handler */
    /* We set up the normal JPEG error routines, then override error_exit. */
    cinfo.err = jpeg_std_error(&jerror.pub);
    jerror.pub.error_exit = my_error_exit;
    jerror.pub.output_message = my_output_message;

    /* Establish the setjmp return context for my_error_exit to use. */
    if (SETJMP(jerror.setjmp_buffer)) {
      /* If we get here, the JPEG code has signaled an error. */
      jpeg_destroy_decompress(&cinfo);
      return 0;
    }

    /* Now we can initialize libjpeg. */
    jpeg_CreateDecompress(&cinfo, JPEG_LIB_VERSION,
                        (size_t) sizeof(struct jpeg_decompress_struct));
    my_jpeg_channel_src(&cinfo, chan);

    tkimg_ReadInitFile(&handle, chan);

    retVal = CommonMatch(&cinfo, &handle, widthPtr, heightPtr, &xdpi, &ydpi);
    if (retVal && xdpi >= 0.0 && ydpi >= 0.0) {
        if (TCL_ERROR == tkimg_SetResolution( metadataOut, xdpi, ydpi)) {
            return 0;
        }
    }
    /* Reclaim libjpeg's internal resources. */
    jpeg_destroy_decompress(&cinfo);

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
    int retVal;
    double xdpi, ydpi;
    struct jpeg_decompress_struct cinfo; /* libjpeg's parameter structure */
    struct my_error_mgr jerror; /* for controlling libjpeg error handling */
    tkimg_Stream handle;
    memset(&handle, 0, sizeof (tkimg_Stream));

    /* Initialize JPEG error handler */
    /* We set up the normal JPEG error routines, then override error_exit. */
    cinfo.err = jpeg_std_error(&jerror.pub);
    jerror.pub.error_exit = my_error_exit;
    jerror.pub.output_message = my_output_message;

    /* Establish the setjmp return context for my_error_exit to use. */
    if (SETJMP(jerror.setjmp_buffer)) {
      /* If we get here, the JPEG code has signaled an error. */
      jpeg_destroy_decompress(&cinfo);
      return 0;
    }

    /* Now we can initialize libjpeg. */
    jpeg_CreateDecompress(&cinfo, JPEG_LIB_VERSION,
                        (size_t) sizeof(struct jpeg_decompress_struct));
    my_jpeg_obj_src(&cinfo, dataObj);

    if (!tkimg_ReadInitString(&handle, dataObj)) {
        return 0;
    }
    retVal = CommonMatch(&cinfo, &handle, widthPtr, heightPtr, &xdpi, &ydpi);
    if (retVal && xdpi >= 0.0 && ydpi >= 0.0) {
        if (TCL_ERROR == tkimg_SetResolution( metadataOut, xdpi, ydpi)) {
            return 0;
        }
    }

    /* Reclaim libjpeg's internal resources. */
    jpeg_destroy_decompress(&cinfo);

    return retVal;
}

#if HAVE_FORMAT_VERSION3 == 0
/*
 *----------------------------------------------------------------------
 *
 * FileMatch --
 *
 *      This procedure is invoked by the photo image type to see if
 *      a channel contains image data in JPEG format.
 *
 * Results:
 *      The return value is >0 if the first characters in channel "chan"
 *      look like JPEG data, and 0 otherwise.  For a valid file, the
 *      image dimensions are determined.
 *
 * Side effects:
 *      The access position in f may change.
 *
 *----------------------------------------------------------------------
 */

static int FileMatch(
    Tcl_Channel chan,           /* The image channel, open for reading. */
    const char *fileName,       /* The name of the image file. */
    Tcl_Obj *format,            /* User-specified format string, or NULL. */
    int *widthPtr,              /* The dimensions of the image are */
    int *heightPtr,             /* returned here if the file is a valid
                                 * JPEG file. */
    Tcl_Interp *interp
) {
    return FileMatchVersion3(
           interp, chan, fileName, format, NULL,
           widthPtr, heightPtr, NULL);
}

/*
 *----------------------------------------------------------------------
 *
 * StringMatch --
 *
 *      This procedure is invoked by the photo image type to see if
 *      a string contains image data in JPEG format.
 *
 * Results:
 *      The return value is >0 if the first characters in the string look
 *      like JPEG data, and 0 otherwise.  For a valid image, the image
 *      dimensions are determined.
 *
 * Side effects:
 *  the size of the image is placed in widthPtr and heightPtr.
 *
 *----------------------------------------------------------------------
 */

static int StringMatch(
    Tcl_Obj *dataObj,           /* the object containing the image data */
    Tcl_Obj *format,            /* User-specified format object, or NULL. */
    int *widthPtr,              /* The dimensions of the image are */
    int *heightPtr,             /* returned here if the string is a valid
                                 * JPEG image. */
    Tcl_Interp *interp
) {
    return StringMatchVersion3(
           interp, dataObj, format, NULL,
           widthPtr, heightPtr, NULL);
}
#endif

/*
 *----------------------------------------------------------------------
 *
 * CommonMatch --
 *
 *      This procedure is invoked by the photo image type to see if
 *      a string contains image data in JPEG format.
 *
 * Results:
 *      The return value is >0 if the first characters in the string look
 *      like JPEG data, and 0 otherwise.  For a valid image, the image
 *      dimensions are determined.
 *
 * Side effects:
 *  the size of the image is placed in widthPtr and heightPtr.
 *
 *----------------------------------------------------------------------
 */

static int CommonMatch(
    j_decompress_ptr cinfo,     /* Already-constructed decompress struct. */
    tkimg_Stream *handle,        /* the "file" handle */
    int *widthPtr,              /* The dimensions of the image are */
    int *heightPtr,             /* returned here if the string is a valid
                                 * JPEG image. */
    double *xdpiPtr,
    double *ydpiPtr
) {
    /* Ready to read header data. */
    if (jpeg_read_header(cinfo, TRUE) != JPEG_HEADER_OK) {
        return 0;
    }

    jpeg_start_decompress(cinfo);

    *widthPtr  = (int) cinfo->output_width;
    *heightPtr = (int) cinfo->output_height;

    *xdpiPtr = -1.0;
    *ydpiPtr = -1.0;
    if (cinfo->X_density != 0 && cinfo->Y_density != 0) {
        if (cinfo->density_unit == 1) {
            /* dots per inch */
            *xdpiPtr = cinfo->X_density;
            *ydpiPtr = cinfo->Y_density;
        } else if (cinfo->density_unit == 2) {
            /* dots per cm */
            *xdpiPtr = cinfo->X_density * 2.54;
            *ydpiPtr = cinfo->Y_density * 2.54;
        }
    }
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
    struct jpeg_decompress_struct cinfo; /* libjpeg's parameter structure */
    struct my_error_mgr jerror; /* for controlling libjpeg error handling */
    int result;

    /* Initialize JPEG error handler */
    /* We set up the normal JPEG error routines, then override error_exit. */
    cinfo.err = jpeg_std_error(&jerror.pub);
    jerror.pub.error_exit = my_error_exit;
    jerror.pub.output_message = my_output_message;

    /* Establish the setjmp return context for my_error_exit to use. */
    if (SETJMP(jerror.setjmp_buffer)) {
      /* If we get here, the JPEG code has signaled an error. */
      Tcl_AppendResult(interp, "Could not read JPEG file: ", (char *) NULL);
      append_jpeg_message(interp, (j_common_ptr) &cinfo);
      jpeg_destroy_decompress(&cinfo);
      return TCL_ERROR;
    }

    /* Now we can initialize libjpeg. */
    jpeg_CreateDecompress(&cinfo, JPEG_LIB_VERSION,
                        (size_t) sizeof(struct jpeg_decompress_struct));
    my_jpeg_channel_src(&cinfo, chan);

    /* Share code with StringRead. */
    result = CommonRead(
             interp, fileName, &cinfo, format, imageHandle,
             destX, destY, width, height, srcX, srcY, metadataOut);

    /* Reclaim libjpeg's internal resources. */
    jpeg_destroy_decompress(&cinfo);

    return result;
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
    struct jpeg_decompress_struct cinfo; /* libjpeg's parameter structure */
    struct my_error_mgr jerror; /* for controlling libjpeg error handling */
    int result;

    /* Initialize JPEG error handler */
    /* We set up the normal JPEG error routines, then override error_exit. */
    cinfo.err = jpeg_std_error(&jerror.pub);
    jerror.pub.error_exit = my_error_exit;
    jerror.pub.output_message = my_output_message;

    /* Establish the setjmp return context for my_error_exit to use. */
    if (SETJMP(jerror.setjmp_buffer)) {
      /* If we get here, the JPEG code has signaled an error. */
      Tcl_AppendResult(interp, "Could not read JPEG string: ", (char *) NULL);
      append_jpeg_message(interp, (j_common_ptr) &cinfo);
      jpeg_destroy_decompress(&cinfo);
      return TCL_ERROR;
    }

    /* Now we can initialize libjpeg. */
    jpeg_CreateDecompress(&cinfo, JPEG_LIB_VERSION,
                        (size_t) sizeof(struct jpeg_decompress_struct));
    my_jpeg_obj_src(&cinfo, dataObj);

    /* Share code with FileRead. */
    result = CommonRead(
             interp, "InlineData", &cinfo, format, imageHandle,
             destX, destY, width, height, srcX, srcY, metadataOut);

    /* Reclaim libjpeg's internal resources. */
    jpeg_destroy_decompress(&cinfo);

    return result;
}

#if HAVE_FORMAT_VERSION3 == 0
/*
 *----------------------------------------------------------------------
 *
 * FileRead --
 *
 *      This procedure is called by the photo image type to read
 *      JPEG format data from a channel, and give it to
 *      the photo image.
 *
 * Results:
 *      A standard TCL completion code.  If TCL_ERROR is returned
 *      then an error message is left in interp->result.
 *
 * Side effects:
 *      New data is added to the image given by imageHandle.
 *
 *----------------------------------------------------------------------
 */

static int FileRead(
    Tcl_Interp *interp,         /* Interpreter to use for reporting errors. */
    Tcl_Channel chan,           /* The image channel, open for reading. */
    const char *fileName,       /* The name of the image file. */
    Tcl_Obj *format,            /* User-specified format string, or NULL. */
    Tk_PhotoHandle imageHandle, /* The photo image to write into. */
    int destX, int destY,       /* Coordinates of top-left pixel in
                                 * photo image to be written to. */
    int width, int height,      /* Dimensions of block of photo image to
                                 * be written to. */
    int srcX, int srcY          /* Coordinates of top-left pixel to be used
                                 * in image being read. */
) {
    return FileReadVersion3(
           interp, chan, fileName, format, NULL, imageHandle,
           destX, destY, width, height, srcX, srcY, NULL);
}

/*
 *----------------------------------------------------------------------
 *
 * StringRead --
 *
 *      This procedure is called by the photo image type to read
 *      JPEG format data from a base64 encoded string, and give it to
 *      the photo image.
 *
 * Results:
 *      A standard TCL completion code.  If TCL_ERROR is returned
 *      then an error message is left in interp->result.
 *
 * Side effects:
 *      New data is added to the image given by imageHandle.
 *
 *----------------------------------------------------------------------
 */

static int StringRead(
    Tcl_Interp *interp,         /* Interpreter to use for reporting errors. */
    Tcl_Obj *dataObj,           /* Object containing the image data. */
    Tcl_Obj *format,            /* User-specified format object, or NULL. */
    Tk_PhotoHandle imageHandle, /* The photo image to write into. */
    int destX, int destY,       /* Coordinates of top-left pixel in
                                 * photo image to be written to. */
    int width, int height,      /* Dimensions of block of photo image to
                                 * be written to. */
    int srcX, int srcY          /* Coordinates of top-left pixel to be used
                                 * in image being read. */
) {
    return StringReadVersion3(
           interp, dataObj, format, NULL, imageHandle,
           destX, destY, width, height, srcX, srcY, NULL);
}
#endif

/*
 *----------------------------------------------------------------------
 *
 * CommonRead --
 *
 *      The common guts of FileRead and StringRead.
 *      The decompress struct has already been set up and the
 *      appropriate data source manager initialized.
 *      The caller should do jpeg_destroy_decompress upon return.
 *
 *----------------------------------------------------------------------
 */
static int CommonRead(
    Tcl_Interp *interp,         /* Interpreter to use for reporting errors. */
    const char *fileName,       /* Image file name */
    j_decompress_ptr cinfo,     /* Already-constructed decompress struct. */
    Tcl_Obj *format,            /* User-specified format string, or NULL. */
    Tk_PhotoHandle imageHandle, /* The photo image to write into. */
    int destX, int destY,       /* Coordinates of top-left pixel in
                                 * photo image to be written to. */
    int width, int height,      /* Dimensions of block of photo image to
                                 * be written to. */
    int srcX, int srcY,         /* Coordinates of top-left pixel to be used
                                 * in image being read. */
    Tcl_Obj *metadataOut
) {
    int fileWidth, fileHeight, stopY, curY, outY, outWidth, outHeight;
    double xdpi, ydpi;
    Tk_PhotoImageBlock block;
    JSAMPARRAY buffer;          /* Output row buffer */
    FMTOPT opts;

    /* Ready to read header data. */
    jpeg_read_header(cinfo, TRUE);

    /* This code only supports 8-bit-precision JPEG files. */
    if ((cinfo->data_precision != 8) ||
            (sizeof(JSAMPLE) != sizeof(unsigned char))) {
        Tcl_AppendResult(interp, "Unsupported JPEG precision", (char *) NULL);
        return TCL_ERROR;
    }

    if (ParseFormatOpts(interp, format, &opts, IMG_READ) == TCL_ERROR) {
        return TCL_ERROR;
    }

    if (opts.fast) {
        cinfo->two_pass_quantize   = FALSE;
        cinfo->dither_mode         = JDITHER_ORDERED;
        cinfo->dct_method          = JDCT_FASTEST;
        cinfo->do_fancy_upsampling = FALSE;
    }
    if (opts.grayscale) {
        cinfo->out_color_space = JCS_GRAYSCALE;
    }

    jpeg_start_decompress(cinfo);

    /* Check dimensions. */
    fileWidth = (int) cinfo->output_width;
    fileHeight = (int) cinfo->output_height;
    if ((srcX + width) > fileWidth) {
        outWidth = fileWidth - srcX;
    } else {
        outWidth = width;
    }
    if ((srcY + height) > fileHeight) {
        outHeight = fileHeight - srcY;
    } else {
        outHeight = height;
    }
    if ((outWidth <= 0) || (outHeight <= 0)
        || (srcX >= fileWidth) || (srcY >= fileHeight)) {
        Tcl_AppendResult(interp, "Width or height are negative", (char *) NULL);
        return TCL_ERROR;
    }

    /* Check colorspace. */
    switch (cinfo->out_color_space) {
    case JCS_GRAYSCALE:
        /* a single-sample grayscale pixel is expanded into equal R,G,B values */
        block.pixelSize = 1;
        block.offset[0] = 0;
        block.offset[1] = 0;
        block.offset[2] = 0;
        break;
    case JCS_RGB:
        /* note: this pixel layout assumes default configuration of libjpeg. */
        block.pixelSize = 3;
        block.offset[0] = 0;
        block.offset[1] = 1;
        block.offset[2] = 2;
        break;
    default:
        Tcl_AppendResult(interp, "Unsupported JPEG color space", (char *) NULL);
        return TCL_ERROR;
    }
    block.width = outWidth;
    block.height = 1;
    block.pitch = block.pixelSize * fileWidth;
    block.offset[3] = block.offset[0];
    xdpi = -1.0;
    ydpi = -1.0;
    if (cinfo->X_density != 0 && cinfo->Y_density != 0) {
        if (cinfo->density_unit == 1) {
            /* dots per inch */
            xdpi = cinfo->X_density;
            ydpi = cinfo->Y_density;
        } else if (cinfo->density_unit == 2) {
            /* dots per cm */
            xdpi = cinfo->X_density * 2.54;
            ydpi = cinfo->Y_density * 2.54;
        }
    }
    if (xdpi >= 0.0 && ydpi >= 0.0) {
        if (TCL_ERROR == tkimg_SetResolution( metadataOut, xdpi, ydpi)) {
            return TCL_ERROR;
        }
    }

    if (opts.verbose) {
        printImgInfo (fileWidth, fileHeight, (int)(xdpi + 0.5), (int)(ydpi + 0.5),
                      fileName, "Reading image:");
    }

    if (Tk_PhotoExpand(interp, imageHandle, destX + outWidth, destY + outHeight) == TCL_ERROR) {
        jpeg_abort_decompress(cinfo);
        return TCL_ERROR;
    }

    /* Make a temporary one-row-high sample array */
    buffer = (*cinfo->mem->alloc_sarray)
                ((j_common_ptr) cinfo, JPOOL_IMAGE,
                 cinfo->output_width * cinfo->output_components, 1);
    block.pixelPtr = (unsigned char *) buffer[0] + srcX * block.pixelSize;

    /* Read as much of the data as we need to */
    stopY = srcY + outHeight;
    outY = destY;
    for (curY = 0; curY < stopY; curY++) {
      jpeg_read_scanlines(cinfo, buffer, 1);
      if (curY >= srcY) {
        if (Tk_PhotoPutBlock(interp, imageHandle, &block, destX, outY, outWidth, 1, TK_PHOTO_COMPOSITE_SET) == TCL_ERROR) {
            jpeg_abort_decompress(cinfo);
            return TCL_ERROR;
        }
        outY++;
      }
    }

    /* Do normal cleanup if we read the whole image; else early abort */
    if (cinfo->output_scanline == cinfo->output_height)
        jpeg_finish_decompress(cinfo);
    else
        jpeg_abort_decompress(cinfo);

    return TCL_OK;
}

static int FileWriteVersion3(
    Tcl_Interp *interp,
    const char *fileName,
    Tcl_Obj *format,
    Tcl_Obj *metadataIn,
    Tk_PhotoImageBlock *blockPtr
) {
    struct jpeg_compress_struct cinfo; /* libjpeg's parameter structure */
    struct my_error_mgr jerror; /* for controlling libjpeg error handling */
    Tcl_Channel chan;
    int result;

    chan = tkimg_OpenFileChannel(interp, fileName, "w");
    if (!chan) {
        return TCL_ERROR;
    }

    /* Initialize JPEG error handler */
    /* We set up the normal JPEG error routines, then override error_exit. */
    cinfo.err = jpeg_std_error(&jerror.pub);
    jerror.pub.error_exit = my_error_exit;
    jerror.pub.output_message = my_output_message;

    /* Establish the setjmp return context for my_error_exit to use. */
    if (SETJMP(jerror.setjmp_buffer)) {
      /* If we get here, the JPEG code has signaled an error. */
      Tcl_AppendResult(interp, "Could not write JPEG file \"", fileName,
                       "\": ", (char *) NULL);
      append_jpeg_message(interp, (j_common_ptr) &cinfo);
      jpeg_destroy_compress(&cinfo);
      Tcl_Close(interp, chan);
      return TCL_ERROR;
    }

    /* Now we can initialize libjpeg. */
    jpeg_create_compress(&cinfo);
    my_jpeg_channel_dest(&cinfo, chan);

    result = CommonWrite(interp, fileName, &cinfo, format, blockPtr, metadataIn);

    jpeg_destroy_compress(&cinfo);
    if (Tcl_Close(interp, chan) == TCL_ERROR) {
        return TCL_ERROR;
    }
    return result;
}

static int StringWriteVersion3(
    Tcl_Interp *interp,
    Tcl_Obj *format,
    Tcl_Obj *metadataIn,
    Tk_PhotoImageBlock *blockPtr
) {
    struct jpeg_compress_struct cinfo;  /* libjpeg's parameter structure */
    struct my_error_mgr         jerror; /* for controlling libjpeg error handling */
    int result;

    /* Initialize JPEG error handler */
    /* We set up the normal JPEG error routines, then override error_exit. */
    cinfo.err = jpeg_std_error(&jerror.pub);
    jerror.pub.error_exit = my_error_exit;
    jerror.pub.output_message = my_output_message;

    /* Establish the setjmp return context for my_error_exit to use. */
    if (SETJMP(jerror.setjmp_buffer)) {
        /* If we get here, the JPEG code has signaled an error. */
        Tcl_AppendResult(interp, "Could not write JPEG string: ", (char *) NULL);
        append_jpeg_message(interp, (j_common_ptr) &cinfo);
        jpeg_destroy_compress(&cinfo);
        return TCL_ERROR;
    }

    /* Now we can initialize libjpeg. */
    jpeg_create_compress(&cinfo);
    /* tkimg_WriteInitString is called in function below. */
    my_jpeg_string_dest(&cinfo);

    result = CommonWrite(interp, "InlineData", &cinfo, format, blockPtr, metadataIn);

    if (result == TCL_OK) {
        dest_ptr dest = (dest_ptr) cinfo.dest;
        Tcl_SetObjResult(interp, dest->handle.byteObj);
    }
    jpeg_destroy_compress(&cinfo);
    return result;
}

#if HAVE_FORMAT_VERSION3 == 0
/*
 *----------------------------------------------------------------------
 *
 * FileWrite --
 *
 *      This procedure is invoked to write image data to a file in JPEG
 *      format.
 *
 * Results:
 *      A standard TCL completion code.  If TCL_ERROR is returned
 *      then an error message is left in interp->result.
 *
 * Side effects:
 *      Data is written to the file given by "fileName".
 *
 *----------------------------------------------------------------------
 */

static int FileWrite(
    Tcl_Interp *interp,
    const char *fileName,
    Tcl_Obj *format,
    Tk_PhotoImageBlock *blockPtr
) {
    return FileWriteVersion3(interp, fileName, format, NULL, blockPtr);
}

/*
 *----------------------------------------------------------------------
 *
 * StringWrite --
 *
 *      This procedure is called by the photo image type to write
 *      JPEG format data to a base-64 encoded string from the photo block.
 *
 * Results:
 *      A standard TCL completion code.  If TCL_ERROR is returned
 *      then an error message is left in interp->result.
 *
 * Side effects:
 *      None.
 *
 *----------------------------------------------------------------------
 */

static int StringWrite(
    Tcl_Interp *interp,
    Tcl_Obj *format,
    Tk_PhotoImageBlock *blockPtr
) {
    return StringWriteVersion3(interp, format, NULL, blockPtr);
}
#endif

/*
 *----------------------------------------------------------------------
 *
 * CommonWrite --
 *
 *      The common guts of FileWrite and StringWrite.
 *      The compress struct has already been set up and the
 *      appropriate data destination manager initialized.
 *      The caller should do jpeg_destroy_compress upon return,
 *      and also close the destination as necessary.
 *
 *----------------------------------------------------------------------
 */

static int
CommonWrite(
    Tcl_Interp *interp,
    const char *fileName,
    j_compress_ptr cinfo,
    Tcl_Obj *format,
    Tk_PhotoImageBlock *blockPtr,
    Tcl_Obj *metadataIn
) {
    JSAMPROW row_pointer[1];    /* pointer to original data scanlines */
    JSAMPARRAY buffer;          /* Intermediate row buffer */
    JSAMPROW bufferPtr;
    int w, h;
    double xdpi, ydpi;
    int greenOffset, blueOffset, alphaOffset;
    unsigned char *pixelPtr, *pixLinePtr;
    FMTOPT opts;

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

    /* Set up JPEG compression parameters. */
    cinfo->image_width = blockPtr->width;
    cinfo->image_height = blockPtr->height;
    cinfo->input_components = 3;
    cinfo->in_color_space = JCS_RGB;

    jpeg_set_defaults(cinfo);

    if (TCL_ERROR == tkimg_GetResolution(interp, metadataIn, &xdpi, &ydpi)) {
        return TCL_ERROR;
    }

    cinfo->X_density    = (UINT16)xdpi;
    cinfo->Y_density    = (UINT16)ydpi;
    cinfo->density_unit = 1; /* dots per inch */

    if (ParseFormatOpts(interp, format, &opts, IMG_WRITE) == TCL_ERROR) {
        return TCL_ERROR;
    }

    /* Set cinfo according to format options. */
    if (opts.progressive) {
#ifdef USE_JPEGTCL_STUBS
        if (jpeg_simple_progression != NULL) {
            /* Select simple progressive mode. */
            jpeg_simple_progression(cinfo);
        }
#else
        jpeg_simple_progression(cinfo);
#endif
    }
    if (opts.quality > 0) {
        jpeg_set_quality(cinfo, opts.quality, FALSE);
    }
    cinfo->optimize_coding  = opts.optimize;
    if (opts.smooth > 0) {
        cinfo->smoothing_factor = opts.smooth;
    }

    cinfo->X_density    = (UINT16)opts.xres;
    cinfo->Y_density    = (UINT16)opts.yres;
    cinfo->density_unit = 1; /* Dots per inch */


    pixLinePtr = blockPtr->pixelPtr + blockPtr->offset[0];
    greenOffset = blockPtr->offset[1] - blockPtr->offset[0];
    blueOffset = blockPtr->offset[2] - blockPtr->offset[0];
    if (
#ifdef USE_JPEGTCL_STUBS
        (jpeg_set_colorspace != NULL) &&
#endif
            (opts.grayscale || (!greenOffset && !blueOffset))) {
        /* Generate monochrome JPEG file if source block is grayscale. */
        jpeg_set_colorspace(cinfo, JCS_GRAYSCALE);
    }

    jpeg_start_compress(cinfo, TRUE);

    /* note: we assume libjpeg is configured for standard RGB pixel order. */
    if ((greenOffset == 1) && (blueOffset == 2)
        && (blockPtr->pixelSize == 3)) {
        /* No need to reformat pixels before passing data to libjpeg */
        for (h = blockPtr->height; h > 0; h--) {
            row_pointer[0] = (JSAMPROW) pixLinePtr;
            jpeg_write_scanlines(cinfo, row_pointer, 1);
            pixLinePtr += blockPtr->pitch;
        }
    } else {
        /* Must convert data format.  Create a one-scanline work buffer. */
        buffer = (*cinfo->mem->alloc_sarray)
          ((j_common_ptr) cinfo, JPOOL_IMAGE,
           cinfo->image_width * cinfo->input_components, 1);
        for (h = blockPtr->height; h > 0; h--) {
            pixelPtr = pixLinePtr;
            bufferPtr = buffer[0];
            for (w = blockPtr->width; w > 0; w--) {
                if (alphaOffset && !pixelPtr[alphaOffset]) {
                    /* if pixel is transparant, better use gray
                     * than the default black.
                     */
                    *bufferPtr++ = 0xd9;
                    *bufferPtr++ = 0xd9;
                    *bufferPtr++ = 0xd9;
                } else {
                    *bufferPtr++ = pixelPtr[0];
                    *bufferPtr++ = pixelPtr[greenOffset];
                    *bufferPtr++ = pixelPtr[blueOffset];
                }
                pixelPtr += blockPtr->pixelSize;
            }
            jpeg_write_scanlines(cinfo, buffer, 1);
            pixLinePtr += blockPtr->pitch;
        }
    }

    jpeg_finish_compress(cinfo);

    if (opts.verbose) {
        printImgInfo (cinfo->image_width, cinfo->image_height,
                      cinfo->X_density, cinfo->Y_density,
                      fileName, "Saving image:");
    }
    return TCL_OK;
}

/*
 * libjpeg source manager for reading from base64-encoded strings
 * and from Tcl_Channels.
 */

static void my_jpeg_obj_src(
    j_decompress_ptr cinfo,
    Tcl_Obj *dataObj
) {
    src_ptr src;

    src = (src_ptr)
        (*cinfo->mem->alloc_small) ((j_common_ptr) cinfo, JPOOL_PERMANENT,
                                  sizeof(struct source_mgr));
    memset(src, 0, sizeof(struct source_mgr));
    cinfo->src = (struct jpeg_source_mgr *) src;

    src->pub.init_source = dummy_source;
    src->pub.fill_input_buffer = fill_input_buffer;
    src->pub.skip_input_data = skip_input_data;
    src->pub.resync_to_restart = jpeg_resync_to_restart; /* use default method */
    src->pub.term_source = dummy_source;

    tkimg_ReadInitString(&src->handle, dataObj);

    src->pub.bytes_in_buffer = 0; /* forces fill_input_buffer on first read */
    src->pub.next_input_byte = NULL; /* until buffer loaded */
}

static boolean fill_input_buffer(
    j_decompress_ptr cinfo
) {
  src_ptr src = (src_ptr) cinfo->src;
  int nbytes;

  nbytes = tkimg_Read(&src->handle, (char *) src->buffer, STRING_BUF_SIZE);

  if (nbytes <= 0) {
    /* Insert a fake EOI marker */
    src->buffer[0] = (JOCTET) 0xFF;
    src->buffer[1] = (JOCTET) JPEG_EOI;
    nbytes = 2;
  }

  src->pub.next_input_byte = src->buffer;
  src->pub.bytes_in_buffer = nbytes;

  return TRUE;
}

static void skip_input_data(
    j_decompress_ptr cinfo,
    long num_bytes
) {
  src_ptr src = (src_ptr) cinfo->src;

  if (num_bytes > 0) {
    while (num_bytes > (long) src->pub.bytes_in_buffer) {
      num_bytes -= (long) src->pub.bytes_in_buffer;
      fill_input_buffer(cinfo);
    }
    src->pub.next_input_byte += (size_t) num_bytes;
    src->pub.bytes_in_buffer -= (size_t) num_bytes;
  }
}

static void dummy_source(
    j_decompress_ptr cinfo
) {
  /* no work necessary here */
}

/*
 * libjpeg source manager for reading from channels.
 */
static void my_jpeg_channel_src(
    j_decompress_ptr cinfo,
    Tcl_Channel chan
) {
  src_ptr src;

  src = (src_ptr)
      (*cinfo->mem->alloc_small) ((j_common_ptr) cinfo, JPOOL_PERMANENT,
                                  sizeof(struct source_mgr));
  memset(src, 0, sizeof(struct source_mgr));
  cinfo->src = (struct jpeg_source_mgr *) src;

  src->pub.init_source = dummy_source;
  src->pub.fill_input_buffer = fill_input_buffer;
  src->pub.skip_input_data = skip_input_data;
  src->pub.resync_to_restart = jpeg_resync_to_restart; /* use default method */
  src->pub.term_source = dummy_source;

  tkimg_ReadInitFile(&src->handle, chan);

  src->pub.bytes_in_buffer = 0; /* forces fill_input_buffer on first read */
  src->pub.next_input_byte = NULL; /* until buffer loaded */
}


/*
 * libjpeg destination manager for writing to base64-encoded strings
 * and Tcl_Channel's.
 */

static void my_jpeg_string_dest(
    j_compress_ptr cinfo
) {
  dest_ptr dest;

  if (cinfo->dest == NULL) {    /* first time for this JPEG object? */
    cinfo->dest = (struct jpeg_destination_mgr *)
      (*cinfo->mem->alloc_small) ((j_common_ptr) cinfo, JPOOL_PERMANENT,
                                  sizeof(struct destination_mgr));
  }
  memset(cinfo->dest, 0, sizeof(struct destination_mgr));

  dest = (dest_ptr) cinfo->dest;
  dest->pub.init_destination = my_init_destination;
  dest->pub.empty_output_buffer = my_empty_output_buffer;
  dest->pub.term_destination = my_term_destination;
  tkimg_WriteInitString(&dest->handle);
}

static void my_jpeg_channel_dest(
    j_compress_ptr cinfo,
    Tcl_Channel chan
) {
  dest_ptr dest;

  if (cinfo->dest == NULL) {    /* first time for this JPEG object? */
    cinfo->dest = (struct jpeg_destination_mgr *)
      (*cinfo->mem->alloc_small) ((j_common_ptr) cinfo, JPOOL_PERMANENT,
                                  sizeof(struct destination_mgr));
  }
  memset(cinfo->dest, 0, sizeof(struct destination_mgr));

  dest = (dest_ptr) cinfo->dest;
  dest->pub.init_destination = my_init_destination;
  dest->pub.empty_output_buffer = my_empty_output_buffer;
  dest->pub.term_destination = my_term_destination;
  tkimg_WriteInitFile(&dest->handle, chan);
}

static void my_init_destination(
    j_compress_ptr cinfo
) {
  dest_ptr dest = (dest_ptr) cinfo->dest;
  dest->pub.next_output_byte = dest->buffer;
  dest->pub.free_in_buffer = STRING_BUF_SIZE;
}

static boolean my_empty_output_buffer(
    j_compress_ptr cinfo
) {
  dest_ptr dest = (dest_ptr) cinfo->dest;
  if (tkimg_Write(&dest->handle, (char *) dest->buffer, STRING_BUF_SIZE)
        != STRING_BUF_SIZE)
    ERREXIT(cinfo, JERR_FILE_WRITE);

  dest->pub.next_output_byte = dest->buffer;
  dest->pub.free_in_buffer = STRING_BUF_SIZE;

  return TRUE;
}

static void my_term_destination(
    j_compress_ptr cinfo
) {
  dest_ptr dest = (dest_ptr) cinfo->dest;
  int datacount = STRING_BUF_SIZE - (int) dest->pub.free_in_buffer;

  /* Write any data remaining in the buffer */
  if (datacount > 0) {
    if (tkimg_Write(&dest->handle, (char *) dest->buffer, datacount)
        != datacount)
      ERREXIT(cinfo, JERR_FILE_WRITE);
  }
  /* Empty any partial-byte from the base64 encoder */
}

/*
 * Error handler to replace (or extend, really) libjpeg's default handler
 */

static void my_error_exit(
    j_common_ptr cinfo
) {
  struct my_error_mgr *myerr = (struct my_error_mgr *) cinfo->err;
  /* Exit back to outer level */
  LONGJMP(myerr->setjmp_buffer, 1);
}

static void append_jpeg_message(
    Tcl_Interp *interp,
    j_common_ptr cinfo
) {
  /* Append libjpeg error message to interp->result */
  char buffer[JMSG_LENGTH_MAX];
  (*cinfo->err->format_message) (cinfo, buffer);
  Tcl_AppendResult(interp, buffer, (char *) NULL);
}

static void my_output_message(
    j_common_ptr cinfo
) {
  /* Override libjpeg's output_message to do nothing.
   * This ensures that warning messages will not appear on stderr,
   * even for a corrupted JPEG file.  Too bad there's no way
   * to report a "warning" message to the calling Tcl script.
   */
}
