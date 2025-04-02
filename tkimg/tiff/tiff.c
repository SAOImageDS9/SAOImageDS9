/*
 * tiff.c
 *
 * TIFF photo image type, Tcl/Tk package.
 *
 * A photo image handler for the Tagged Image File Format.
 *
 * For a list of available format options see function ParseFormatOpts
 * and the documentation img-tiff.
 *
 * Copyright (c) 1997-2024 Jan Nijtmans    <nijtmans@users.sourceforge.net>
 * Copyright (c) 2002-2024 Andreas Kupries <andreas_kupries@users.sourceforge.net>
 * Copyright (c) 2003-2024 Paul Obermeier  <obermeier@users.sourceforge.net>
 *
 * See the file "license.terms" for information on usage and redistribution
 * of this file, and for a DISCLAIMER OF ALL WARRANTIES.
 *
 */

#ifdef _WIN32
#   define HAVE_BOOLEAN
#   include <Windows.h>
#endif
#include "tkimg.h"
#include "tifftcl.h"
#include "zlibtcl.h"

#ifdef HAVE_STDLIB_H
#undef HAVE_STDLIB_H
#endif
#include "jpegtcl.h"

static int SetupTiffLibrary(Tcl_Interp *interp);

#define MORE_INITIALIZATION \
    if (SetupTiffLibrary (interp) != TCL_OK) { return TCL_ERROR; }

/* Force usage of Tk_CreatePhotoImageFormatVersion3
   supporting image matadata introduced in Tk8.7.
   Must be specified before inclusion of init.c.
*/
#define USE_FORMAT_VERSION3 1

/*
 * Generic initialization code, parameterized via CPACKAGE and PACKAGE.
 */

#include "init.c"

#include "tiffInt.h"

extern DLLIMPORT int unlink(const char *);

/* Format options structure for use with ParseFormatOpts */
typedef struct {
    int    pageIndex;    /* Read option -index */
    int    verbose;      /* Read/Write option -verbose */
    int    compression;  /* Write option -compression */
    char   byteorder[3]; /* Write option -byteorder */
    double xres;         /* Write option -resolution or -xresolution */
    double yres;         /* Write option -resolution or -yresolution */
} FMTOPT;

/*
 * Prototypes for local procedures defined in this file:
 */
static int CommonMatch(
    TIFF *tif,
    tkimg_Stream *handle,
    int *widthPtr, int *heightPtr,
    double *xdpiPtr, double *ydpiPtr,
    int *numPagesPtr,
    int pageIndex
);
static int CommonRead(
    Tcl_Interp *interp,
    TIFF *tif,
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
    TIFF *tif,
    const char *fileName,
    FMTOPT *opts,
    Tk_PhotoImageBlock *blockPtr,
    Tcl_Obj *metadataIn
);

static int ParseFormatOpts(Tcl_Interp *interp, Tcl_Obj *format, FMTOPT *opts, int mode);

static void _TIFFerr(const char *, const char *, va_list);
static void _TIFFwarn(const char *, const char *, va_list);

/*
 * The functions for the TIFF input handler
 */

static int mapDummy(thandle_t, tdata_t *, toff_t *);
static void unMapDummy(thandle_t, tdata_t, toff_t);
static int closeDummy(thandle_t);
static tsize_t writeDummy(thandle_t, tdata_t, tsize_t);

static tsize_t readMFile(thandle_t, tdata_t, tsize_t);
static toff_t seekMFile(thandle_t, toff_t, int);
static toff_t sizeMFile(thandle_t);

static tsize_t readString(thandle_t, tdata_t, tsize_t);
static tsize_t writeString(thandle_t, tdata_t, tsize_t);
static toff_t seekString(thandle_t, toff_t, int);
static toff_t sizeString(thandle_t);

static char *errorMessage = NULL;

static void printImgInfo (int pageIndex, uint32_t width, uint32_t height, float hdpi, float vdpi,
                          const char *fileName, const char *msg)
{
    Tcl_Channel outChan;
    char str[256];

    outChan = Tcl_GetStdChannel (TCL_STDOUT);
    if (!outChan) {
        return;
    }

    tkimg_snprintf(str, 256, "%s %s\n", msg, fileName);                         IMGOUT;
    tkimg_snprintf(str, 256, "\tSize in pixel: %d x %d\n",     width, height);  IMGOUT;
    tkimg_snprintf(str, 256, "\tDots per inch: %.0f x %.0f\n", hdpi, vdpi);     IMGOUT;
    tkimg_snprintf(str, 256, "\tPage index   : %d\n",          pageIndex);      IMGOUT;
    Tcl_Flush(outChan);
}

static int
SetupTiffLibrary (Tcl_Interp *interp)
{
    static int initialized = 0;

    if (!Tifftcl_InitStubs(interp, TIFFTCL_VERSION, 0)) {
        return TCL_ERROR;
    }

    if (errorMessage) {
        ckfree(errorMessage);
        errorMessage = NULL;
    }
    if (TIFFSetErrorHandler != NULL) {
        TIFFSetErrorHandler(_TIFFerr);
    }
    if (TIFFSetWarningHandler != NULL) {
        TIFFSetWarningHandler(_TIFFwarn);
    }

    /*
     * Initialize jpeg and zlib too, for use by the CODEC's we register
     * with the base TIFF library in this package.
     */

    if (!Jpegtcl_InitStubs(interp, JPEGTCL_VERSION, 0)) {
        return TCL_ERROR;
    }

    if (!initialized) {
        initialized = 1;
        if (!Zlibtcl_InitStubs(interp, ZLIBTCL_VERSION, 0)) {
            return TCL_ERROR;
        }
        TIFFRegisterCODEC (COMPRESSION_DEFLATE,  "Deflate",  TkimgTIFFInitZip);
        TIFFRegisterCODEC (COMPRESSION_ADOBE_DEFLATE, "AdobeDeflate", TkimgTIFFInitZip);

        if (!Jpegtcl_InitStubs(interp, JPEGTCL_VERSION, 0)) {
            return TCL_ERROR;
        }
        TIFFRegisterCODEC (COMPRESSION_JPEG,     "JPEG",     TkimgTIFFInitJpeg);
        TIFFRegisterCODEC (COMPRESSION_PIXARLOG, "PixarLog", TkimgTIFFInitPixar);
    }
    return TCL_OK;
}

static void
_TIFFerr(
     const char *module,
     const char *fmt,
     va_list     ap
) {
    char buf [2048];
    char *cp = buf;

    if (module != NULL) {
        tkimg_snprintf(cp, 2048, "%s: ", module);
        cp += strlen(module) + 2;
    }

    tkimg_vsnprintf(cp, 2048 - (cp - buf), fmt, ap);
    if (errorMessage) {
        ckfree(errorMessage);
        errorMessage = NULL;
    }
    if (strstr(buf, "Null count for")) {
        /* Ignore error messages: Null count for "Tag 34391" (type 1, writecount -3, passcount 1)
         * which are generated since TIFF version 4.0 and are due to old Photoshop private tags.
         */
        return;
    }
    errorMessage = (char *) ckalloc(strlen(buf)+1);
    strcpy(errorMessage, buf);
}

/* warnings are not processed in Tcl */
static void
_TIFFwarn(
     const char *module,
     const char *fmt,
     va_list     ap
) {
}

static int
mapDummy(
    thandle_t fd,
    tdata_t *base,
    toff_t *size
) {
    return (toff_t) 0;
}

static void
unMapDummy(
    thandle_t fd,
    tdata_t base,
    toff_t size
) {
}

static int
closeDummy(thandle_t fd)
{
    return 0;
}

static tsize_t
writeDummy(
    thandle_t fd,
    tdata_t data,
    tsize_t size
) {
   return size;
}

static tsize_t
readMFile(
    thandle_t fd,
    tdata_t data,
    tsize_t size
) {
    return (tsize_t) tkimg_Read((tkimg_Stream *) fd, (char *) data, size) ;
}

static toff_t
seekMFile(
    thandle_t fd,
    toff_t off,
    int whence
) {
    return Tcl_Seek(((tkimg_Stream *) fd)->channel, (int) off, whence);
}

static toff_t
sizeMFile(thandle_t fd)
{
    int fsize;

    fsize = Tcl_Seek(((tkimg_Stream *) fd)->channel, (int) 0, SEEK_END);
    return fsize < 0 ? 0 : (toff_t) fsize;
}

static tsize_t
readString(
    thandle_t fd,
    tdata_t data,
    tsize_t size
) {
    tkimg_Stream *handle = (tkimg_Stream *) fd;

    if ((size + handle->position) > handle->length) {
        /* Avoid unsigned underflow. */
        if (handle->position > handle->length) {
            size = 0;
        } else {
            size = handle->length - handle->position;
        }
    }
    if (size) {
        memcpy((char *) data, handle->data + handle->position, (size_t) size);
        handle->position += size;
    }
    return size;
}

static tsize_t
writeString(
    thandle_t fd,
    tdata_t data,
    tsize_t size
) {
    tkimg_Stream *handle = (tkimg_Stream *) fd;
    unsigned char *destPtr = Tcl_GetByteArrayFromObj(handle->byteObj, (Tcl_Size *)NULL);

    if (handle->position + size > handle->length) {
        handle->length = handle->position + size;
        destPtr = Tcl_SetByteArrayLength(handle->byteObj, handle->length);
    }
    memcpy(destPtr + handle->position, (char *) data, (size_t) size);
    handle->position += size;
    return size;
}

static toff_t
seekString(
    thandle_t fd,
    toff_t off,
    int whence
) {
    tkimg_Stream *handle = (tkimg_Stream *) fd;

    switch (whence) {
        case SEEK_SET:
            handle->position = (int) off;
            break;
        case SEEK_CUR:
            handle->position += (int) off;
            break;
        case SEEK_END:
            handle->position = handle->length + (int) off;
            break;
    }
    if (handle->position < 0) {
        handle->position = 0;
        return -1;
    }
    return (toff_t) handle->position;
}

static toff_t
sizeString(thandle_t fd)
{
    return ((tkimg_Stream *) fd)->length;
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
    FMTOPT opts;
    TIFF *tif;
    int retVal = 1;
    double xdpi, ydpi;
    int pageIndex = 0;
    int numPages;
    tkimg_Stream handle;
    memset(&handle, 0, sizeof (tkimg_Stream));

    if (ParseFormatOpts(interp, format, &opts, IMG_READ) == TCL_OK) {
        pageIndex = opts.pageIndex;
    }

    tkimg_ReadInitFile(&handle, chan);

    tif = TIFFClientOpen(fileName, "r", (thandle_t) &handle,
            readMFile, writeDummy, seekMFile, closeDummy,
            sizeMFile, mapDummy, unMapDummy);
    if (tif) {
        retVal = CommonMatch(tif, &handle, widthPtr, heightPtr, &xdpi, &ydpi, &numPages, pageIndex);
        if (retVal && xdpi >= 0.0 && ydpi >= 0.0) {
            if (TCL_ERROR == tkimg_SetResolution( metadataOut, xdpi, ydpi)) {
                retVal = 0;
            }
        }
        if (retVal && numPages >= 1) {
            if (TCL_ERROR == tkimg_SetNumPages( metadataOut, numPages)) {
                retVal = 0;
            }
        }
        TIFFClose(tif);
    } else {
        retVal = 0;
    }
    if (errorMessage) {
        ckfree(errorMessage);
        errorMessage = NULL;
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
    FMTOPT opts;
    TIFF *tif;
    int retVal = 1;
    double xdpi, ydpi;
    int pageIndex = 0;
    int numPages;
    tkimg_Stream handle;
    memset(&handle, 0, sizeof (tkimg_Stream));

    if (ParseFormatOpts(interp, format, &opts, IMG_READ) == TCL_OK) {
        pageIndex = opts.pageIndex;
    }

    if (!tkimg_ReadInitString(&handle, dataObj)) {
        return 0;
    }

    tif = TIFFClientOpen("inline data", "r", (thandle_t) &handle,
            readString, writeString, seekString, closeDummy,
            sizeString, mapDummy, unMapDummy);
    if (tif) {
        retVal = CommonMatch(tif, &handle, widthPtr, heightPtr, &xdpi, &ydpi, &numPages, pageIndex);
        if (retVal && xdpi >= 0.0 && ydpi >= 0.0) {
            if (TCL_ERROR == tkimg_SetResolution (metadataOut, xdpi, ydpi)) {
                return 0;
            }
        }
        if (retVal && numPages >= 1) {
            if (TCL_ERROR == tkimg_SetNumPages (metadataOut, numPages)) {
                retVal = 0;
            }
        }
        TIFFClose(tif);
    } else {
        retVal = 0;
    }
    if (errorMessage) {
        ckfree(errorMessage);
        errorMessage = NULL;
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
    TIFF *tif,
    tkimg_Stream *handle,
    int *widthPtr, int *heightPtr,
    double *xdpiPtr, double *ydpiPtr,
    int *numPagesPtr,
    int pageIndex
) {
    uint32_t w, h;
    float xres = 0.0f, yres = 0.0f;
    uint16_t resUnit;
    uint16_t numPages = 0;
    int curIndex;

    curIndex = pageIndex;
    while (curIndex-- != 0) {
        if (TIFFReadDirectory(tif) != 1) {
            return 0;
        }
        numPages++;
    }

    if ((1 != TIFFGetField (tif, TIFFTAG_IMAGEWIDTH,  &w)) ||
        (1 != TIFFGetField (tif, TIFFTAG_IMAGELENGTH, &h))) {
        return 0;
    }

    if (1 != TIFFGetField (tif, TIFFTAG_RESOLUTIONUNIT, &resUnit)) {
        resUnit = RESUNIT_INCH;
    }
    if (resUnit == RESUNIT_INCH || resUnit == RESUNIT_CENTIMETER) {
        if ((1 != TIFFGetField (tif, TIFFTAG_XRESOLUTION, &xres)) ||
            (1 != TIFFGetField (tif, TIFFTAG_YRESOLUTION, &yres))) {
            xres = -1.0f;
            yres = -1.0f;
        } else {
            if (resUnit == RESUNIT_CENTIMETER) {
                xres *= 2.54f;
                yres *= 2.54f;
            }
        }
    }
    if (xres == 0.0f) {
        xres = -1.0f;
    }
    if (yres == 0.0f) {
        yres = -1.0f;
    }

    do {
        numPages++;
    } while (TIFFReadDirectory(tif));

    *widthPtr  = w;
    *heightPtr = h;
    *xdpiPtr = xres;
    *ydpiPtr = yres;
    *numPagesPtr = numPages;
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
    TIFF *tif;
    int  retVal;
    tkimg_Stream handle;
    memset(&handle, 0, sizeof (tkimg_Stream));

    tkimg_ReadInitFile(&handle, chan);

    tif = TIFFClientOpen(fileName, "r", (thandle_t) &handle,
            readMFile, writeDummy, seekMFile, closeDummy,
            sizeMFile, mapDummy, unMapDummy);
    if (tif) {
        retVal = CommonRead(interp, tif, fileName, format, imageHandle,
                 destX, destY, width, height, srcX, srcY, metadataOut);
        TIFFClose(tif);
    } else {
        retVal = TCL_ERROR;
    }
    if (retVal == TCL_ERROR) {
        if (strlen (Tcl_GetStringResult(interp)) == 0 && errorMessage) {
            Tcl_AppendResult(interp, errorMessage, (char *) NULL);
            ckfree(errorMessage);
            errorMessage = NULL;
        }
    }
    return retVal;
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
    TIFF *tif;
    int  retVal;
    tkimg_Stream handle;
    memset(&handle, 0, sizeof (tkimg_Stream));

    if (!tkimg_ReadInitString(&handle, dataObj)) {
        return 0;
    }

    tif = TIFFClientOpen("inline data", "r", (thandle_t) &handle,
            readString, writeDummy, seekString, closeDummy,
            sizeString, mapDummy, unMapDummy);
    if (tif) {
        retVal = CommonRead(interp, tif, "InlineData", format, imageHandle,
                 destX, destY, width, height, srcX, srcY, metadataOut);
        TIFFClose(tif);
    } else {
        retVal = TCL_ERROR;
    }
    if (retVal == TCL_ERROR) {
        if (strlen (Tcl_GetStringResult(interp)) == 0 && errorMessage) {
            Tcl_AppendResult(interp, errorMessage, (char *) NULL);
            ckfree(errorMessage);
            errorMessage = NULL;
        }
    }
    return retVal;
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
    Tcl_Interp *interp,
    TIFF *tif,
    const char *fileName,
    Tcl_Obj *format,
    Tk_PhotoHandle imageHandle,
    int destX, int destY,
    int width, int height,
    int srcX, int srcY,
    Tcl_Obj *metadataOut
) {
    Tk_PhotoImageBlock block;
    uint32_t w, h;
    float xres = 0.0f, yres = 0.0f;
    uint16_t resUnit;
    size_t npixels;
    uint32_t *raster;
    int pageIndex = 0;
    FMTOPT opts;

    if (ParseFormatOpts(interp, format, &opts, IMG_READ) == TCL_ERROR) {
        return TCL_ERROR;
    }
    pageIndex = opts.pageIndex;
    while (pageIndex-- != 0) {
        if (TIFFReadDirectory(tif) != 1) {
            Tcl_AppendResult(interp,"no image data for this index",
                    (char *) NULL);
            return TCL_ERROR;
        }
    }

#ifdef WORDS_BIGENDIAN
    block.offset[0] = 3;
    block.offset[1] = 2;
    block.offset[2] = 1;
    block.offset[3] = 0;
#else
    block.offset[0] = 0;
    block.offset[1] = 1;
    block.offset[2] = 2;
    block.offset[3] = 3;
#endif
    block.pixelSize = sizeof (uint32_t);

    TIFFGetField(tif, TIFFTAG_IMAGEWIDTH,  &w);
    TIFFGetField(tif, TIFFTAG_IMAGELENGTH, &h);
    npixels = (size_t)w * (size_t)h;

    if (1 != TIFFGetField (tif, TIFFTAG_RESOLUTIONUNIT, &resUnit)) {
        resUnit = RESUNIT_INCH;
    }
    if (resUnit == RESUNIT_INCH || resUnit == RESUNIT_CENTIMETER) {
        if ((1 != TIFFGetField (tif, TIFFTAG_XRESOLUTION, &xres)) ||
            (1 != TIFFGetField (tif, TIFFTAG_YRESOLUTION, &yres))) {
            xres = -1.0f;
            yres = -1.0f;
        } else {
            if (resUnit == RESUNIT_CENTIMETER) {
                xres *= 2.54f;
                yres *= 2.54f;
            }
        }
    }
    if (xres == 0.0f) {
        xres = -1.0f;
    }
    if (yres == 0.0f) {
        yres = -1.0f;
    }
    if (xres >= 0.0f && yres >= 0.0f) {
        if (TCL_ERROR == tkimg_SetResolution( metadataOut, (double)xres, (double)yres)) {
            return TCL_ERROR;
        }
    }

    if (opts.verbose) {
        printImgInfo (opts.pageIndex, w, h, xres, yres, fileName, "Reading image:");
    }
    if (npixels * sizeof (uint32_t) >= UINT_MAX) {
        Tcl_AppendResult(interp,"Image size too large", (char *) NULL);
        return TCL_ERROR;
    }
    
    raster = (uint32_t*) TkimgTIFFmalloc(npixels * sizeof (uint32_t));
    if (raster == NULL) {
        Tcl_AppendResult(interp, "Cannot allocate raster memory", (char *) NULL);
        return TCL_ERROR;
    }
    block.width  = width;
    block.height = height;
    block.pitch  = - (block.pixelSize * (int) w);
    block.pixelPtr = ((unsigned char *) raster) + ((1-h) * block.pitch);

    if (!TIFFReadRGBAImage(tif, w, h, raster, 0) || errorMessage) {
        if (errorMessage) {
            Tcl_AppendResult(interp, errorMessage, (char *) NULL);
            ckfree(errorMessage);
            errorMessage = NULL;
        }
        TkimgTIFFfree (raster);
        return TCL_ERROR;
    }
    if (Tk_PhotoExpand(interp, imageHandle, width, height) == TCL_ERROR) {
        TkimgTIFFfree (raster);
        return TCL_ERROR;
    }

    block.pixelPtr += srcY * block.pitch + srcX * block.pixelSize;
    block.offset[3] = block.offset[0]; /* don't use transparency */
    if (Tk_PhotoPutBlock(interp, imageHandle, &block, destX,
                        destY, width, height, TK_PHOTO_COMPOSITE_SET) == TCL_ERROR) {
        TkimgTIFFfree (raster);
        return TCL_ERROR;
    }

    TkimgTIFFfree (raster);
    return TCL_OK;
}

static int FileWriteVersion3(
    Tcl_Interp *interp,
    const char *fileName,
    Tcl_Obj *format,
    Tcl_Obj *metadataIn,
    Tk_PhotoImageBlock *blockPtr
) {
    TIFF *tif;
    int result;
    Tcl_DString nameBuffer;
    const char *fullname;
    FMTOPT opts;

    if (!(fullname=Tcl_TranslateFileName(interp, fileName, &nameBuffer))) {
        return TCL_ERROR;
    }

    if (ParseFormatOpts(interp, format, &opts, IMG_WRITE) == TCL_ERROR) {
        Tcl_DStringFree(&nameBuffer);
        return TCL_ERROR;
    }

    if (!(tif = TIFFOpen(fullname, opts.byteorder))) {
        Tcl_AppendResult(interp, fileName, ": ", Tcl_PosixError(interp),
                (char *)NULL);
        Tcl_DStringFree(&nameBuffer);
        return TCL_ERROR;
    }

    Tcl_DStringFree(&nameBuffer);

    result = CommonWrite(interp, tif, fileName, &opts, blockPtr, metadataIn);
    TIFFClose(tif);
    return result;
}

static int StringWriteVersion3(
    Tcl_Interp *interp,
    Tcl_Obj *format,
    Tcl_Obj *metadataIn,
    Tk_PhotoImageBlock *blockPtr
) {
    int result;
    TIFF *tif;
    FMTOPT opts;
    tkimg_Stream handle;
    memset(&handle, 0, sizeof (tkimg_Stream));

    if (ParseFormatOpts(interp, format, &opts, IMG_WRITE) == TCL_ERROR) {
        return TCL_ERROR;
    }

    tkimg_WriteInitString(&handle);

    tif = TIFFClientOpen("inline data", opts.byteorder, (thandle_t) &handle,
            readString, writeString, seekString, closeDummy,
            sizeString, mapDummy, unMapDummy);

    result = CommonWrite(interp, tif, "InlineData", &opts, blockPtr, metadataIn);
    TIFFClose(tif);

    if (result != TCL_OK) {
        Tcl_AppendResult(interp, errorMessage, (char *) NULL);
        ckfree(errorMessage);
        errorMessage = NULL;
        return TCL_ERROR;
    }

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

static int ParseFormatOpts(
    Tcl_Interp *interp,
    Tcl_Obj *format,
    FMTOPT *opts,
    int mode
) {
    static const char *const readOptions[] = {
      "-verbose", "-index", NULL
    };
    enum readEnums {
        R_VERBOSE, R_INDEX
    };
    static const char *const writeOptions[] = {
      "-verbose", "-compression", "-byteorder", "-resolution", "-xresolution", "-yresolution", NULL
    };
    enum writeEnums {
        W_VERBOSE, W_COMPRESSION, W_BYTEORDER, W_RESOLUTION, W_XRESOLUTION, W_YRESOLUTION
    };
    Tcl_Size objc, i;
    int index;
    char *optionStr;
    Tcl_Obj **objv;
    int intVal;
    double doubleVal;
    int boolVal;

    /* Initialize options with default values. */
    opts->verbose      = 0;
    opts->pageIndex    = 0;
    opts->compression  = COMPRESSION_NONE;
    opts->byteorder[0] = 'w';
    opts->byteorder[1] = '\0';
    opts->xres         = (double)IMG_DEFAULT_DPI;
    opts->yres         = (double)IMG_DEFAULT_DPI;

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
                case R_INDEX: {
                    if (Tcl_GetInt (interp, optionStr, &intVal) == TCL_ERROR) {
                        Tcl_SetObjResult(interp, Tcl_ObjPrintf(
                            "Invalid index value \"%s\": must be an integer value greater or equal to zero.",
                            optionStr));
                        return TCL_ERROR;
                    }
                    opts->pageIndex = intVal;
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
                case W_COMPRESSION: {
                    if (!strncmp (optionStr, "none", strlen ("none"))) {
                        opts->compression = COMPRESSION_NONE;
                    } else if (!strncmp (optionStr, "deflate", strlen ("deflate"))) {
                        opts->compression = COMPRESSION_DEFLATE;
                    } else if (!strncmp (optionStr, "jpeg",strlen ("jpeg"))) {
                        opts->compression = COMPRESSION_JPEG;
                    } else if (!strncmp (optionStr, "logluv", strlen ("logluv"))) {
                        opts->compression = COMPRESSION_SGILOG;
                    } else if (!strncmp (optionStr, "lzw", strlen ("lzw"))) {
                        opts->compression = COMPRESSION_LZW;
                    } else if (!strncmp (optionStr, "packbits", strlen ("packbits"))) {
                        opts->compression = COMPRESSION_PACKBITS;
                    } else if (!strncmp (optionStr, "pixarlog", strlen ("pixarlog"))) {
                        opts->compression = COMPRESSION_PIXARLOG;
                    } else {
                        Tcl_SetObjResult(interp, Tcl_ObjPrintf(
                            "Invalid compression mode \"%s\": "
                            "must be deflate, jpeg, logluv, lzw, packbits, pixarlog or none.",
                            optionStr));
                        return TCL_ERROR;
                    }
                    break;
                }
                case W_BYTEORDER: {
                    if (!strncmp (optionStr, "none", strlen ("none"))) {
                        strcpy (opts->byteorder, "w");
                    } else if (!strncmp (optionStr, "smallendian", strlen ("smallendian"))) {
                        strcpy (opts->byteorder, "wl");
                    } else if (!strncmp (optionStr,"littleendian", strlen ("littleendian"))) {
                        strcpy (opts->byteorder, "wl");
                    } else if (!strncmp (optionStr,"bigendian", strlen ("bigendian"))) {
                        strcpy (opts->byteorder, "wb");
                    } else if (!strncmp (optionStr,"network", strlen ("network"))) {
                        strcpy (opts->byteorder, "wb");
                    } else {
                        Tcl_SetObjResult(interp, Tcl_ObjPrintf(
                            "Invalid byteorder \"%s\": "
                             "must be bigendian, littleendian, network, smallendian or none.",
                            optionStr));
                        return TCL_ERROR;
                    }
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

static int CommonWrite(
    Tcl_Interp *interp,
    TIFF *tif,
    const char *fileName,
    FMTOPT *opts,
    Tk_PhotoImageBlock *blockPtr,
    Tcl_Obj *metadataIn
) {
    int numsamples;
    unsigned char *data = NULL;
    double xdpi, ydpi;
    float xres, yres;

    TIFFSetField(tif, TIFFTAG_IMAGEWIDTH,  blockPtr->width);
    TIFFSetField(tif, TIFFTAG_IMAGELENGTH, blockPtr->height);
    TIFFSetField(tif, TIFFTAG_COMPRESSION, opts->compression);

    TIFFSetField(tif, TIFFTAG_PLANARCONFIG,    PLANARCONFIG_CONTIG);
    TIFFSetField(tif, TIFFTAG_SAMPLESPERPIXEL, 1);
    TIFFSetField(tif, TIFFTAG_ORIENTATION,     ORIENTATION_TOPLEFT);
    TIFFSetField(tif, TIFFTAG_ROWSPERSTRIP,    blockPtr->height);

    TIFFSetField(tif, TIFFTAG_RESOLUTIONUNIT, RESUNIT_INCH);

    if (TCL_ERROR == tkimg_GetResolution(interp, metadataIn, &xdpi, &ydpi)) {
        return TCL_ERROR;
    }

    if (opts->xres != IMG_DEFAULT_DPI && opts->yres != IMG_DEFAULT_DPI) {
        /* Resolution values specified in the format string (-xresolution, -yresolution)
           overwrite the values specified with option -metadata. */
        xdpi = (float)opts->xres;
        ydpi = (float)opts->yres;
    }
    xres = (float)xdpi;
    yres = (float)ydpi;

    TIFFSetField(tif, TIFFTAG_XRESOLUTION, xres);
    TIFFSetField(tif, TIFFTAG_YRESOLUTION, yres);

    TIFFSetField(tif, TIFFTAG_BITSPERSAMPLE, 8);
    if ((blockPtr->offset[0] == blockPtr->offset[1]) &&
         (blockPtr->offset[0] == blockPtr->offset[2])) {
        numsamples = 1;
        TIFFSetField(tif, TIFFTAG_SAMPLESPERPIXEL, 1);
        TIFFSetField(tif, TIFFTAG_PHOTOMETRIC,     PHOTOMETRIC_MINISBLACK);
    } else {
        numsamples = 3;
        TIFFSetField(tif, TIFFTAG_SAMPLESPERPIXEL, 3);
        TIFFSetField(tif, TIFFTAG_PHOTOMETRIC,     PHOTOMETRIC_RGB);
    }

    if ((blockPtr->pitch == numsamples * blockPtr->width)
            && (blockPtr->pixelSize == numsamples)) {
        data = blockPtr->pixelPtr;
    } else {
        unsigned char *srcPtr, *dstPtr, *rowPtr;
        int greenOffset, blueOffset, alphaOffset, x, y;
        dstPtr = data = (unsigned char *) attemptckalloc(numsamples *
                blockPtr->width * blockPtr->height);
        if (dstPtr == NULL) {
            Tcl_AppendResult (interp, "Unable to allocate memory for image data.", (char *) NULL);
            return TCL_ERROR;
        }
        rowPtr = blockPtr->pixelPtr + blockPtr->offset[0];
        greenOffset = blockPtr->offset[1] - blockPtr->offset[0];
        blueOffset = blockPtr->offset[2] - blockPtr->offset[0];
        alphaOffset =  blockPtr->offset[0];
        if (alphaOffset < blockPtr->offset[2]) {
            alphaOffset = blockPtr->offset[2];
        }
        if (++alphaOffset < blockPtr->pixelSize) {
            alphaOffset -= blockPtr->offset[0];
        } else {
            alphaOffset = 0;
        }
        if (blueOffset || greenOffset) {
            for (y = blockPtr->height; y > 0; y--) {
                srcPtr = rowPtr;
                for (x = blockPtr->width; x>0; x--) {
                    if (alphaOffset && !srcPtr[alphaOffset]) {
                        *dstPtr++ = 0xd9;
                        *dstPtr++ = 0xd9;
                        *dstPtr++ = 0xd9;
                    } else {
                        *dstPtr++ = srcPtr[0];
                        *dstPtr++ = srcPtr[greenOffset];
                        *dstPtr++ = srcPtr[blueOffset];
                    }
                    srcPtr += blockPtr->pixelSize;
                }
                rowPtr += blockPtr->pitch;
            }
        } else {
            for (y = blockPtr->height; y > 0; y--) {
                srcPtr = rowPtr;
                for (x = blockPtr->width; x>0; x--) {
                    *dstPtr++ = srcPtr[0];
                    srcPtr += blockPtr->pixelSize;
                }
                rowPtr += blockPtr->pitch;
            }
        }
    }

    TIFFWriteEncodedStrip(tif, 0, data,
            numsamples * blockPtr->width * blockPtr->height);
    if (data != blockPtr->pixelPtr) {
        ckfree((char *) data);
    }

    if (opts->verbose) {
        printImgInfo (-1, blockPtr->width, blockPtr->height, xres, yres, fileName, "Saving image:");
    }

    return TCL_OK;
}

void
TkimgTIFFfree(tdata_t data)
{
    if (_TIFFfree) {
        _TIFFfree(data);
    } else {
        ckfree((char *) data);
    }
}

tdata_t
TkimgTIFFmalloc(tsize_t size)
{
    if (_TIFFmalloc) {
        return _TIFFmalloc(size);
    } else {
        return attemptckalloc(size);
    }
}

tdata_t
TkimgTIFFrealloc(
    tdata_t data,
    tsize_t size
) {
    if (_TIFFrealloc) {
        return _TIFFrealloc(data, size);
    } else {
        return attemptckrealloc(data, size);
    }
}
