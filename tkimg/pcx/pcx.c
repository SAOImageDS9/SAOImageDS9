/*
 * pcx.c
 *
 * PCX photo image type, Tcl/Tk package.
 *
 * A photo image handler for  PaintBrush's PCX image format.
 *
 * For a list of available format options see function ParseFormatOpts
 * and the documentation img-pcx.
 *
 * Copyright (c) 2001-2024 Paul Obermeier <obermeier@users.sourceforge.net>
 *
 * See the file "license.terms" for information on usage and redistribution
 * of this file, and for a DISCLAIMER OF ALL WARRANTIES.
 *
 * Part of this code was taken from the "pcx" GIMP plugin:
 *
 *  >> pcx.c GIMP plug-in for loading & saving PCX files
 *  >>
 *  >> This code is based in parts on code by Francisco Bustamante, but the
 *  >> largest portion of the code has been rewritten and is now maintained
 *  >> occasionally by Nick Lamb njl195@zepler.org.uk
 *
 */

/* Force usage of Tk_CreatePhotoImageFormatVersion3
   supporting image matadata introduced in Tk8.7.
   Must be specified before inclusion of init.c.
*/
#define USE_FORMAT_VERSION3 1

/*
 * Generic initialization code, parameterized via CPACKAGE and PACKAGE.
 */

#include "init.c"

/* #define DEBUG_LOCAL */

/* Some defines and typedefs. */
#define TRUE  1
#define FALSE 0
typedef unsigned char Boln;     /* Boolean value: TRUE or FALSE */
typedef unsigned char UByte;    /* Unsigned  8 bit integer */
typedef char  Byte;             /* Signed    8 bit integer */
typedef unsigned short UShort;  /* Unsigned 16 bit integer */
typedef short Short;            /* Signed   16 bit integer */
typedef int Int;                /* Signed   32 bit integer */

typedef struct {
    UByte manufacturer;
    UByte version;
    UByte compression;
    UByte bpp;
    Short x1;
    Short y1;
    Short x2;
    Short y2;
    Short hdpi;
    Short vdpi;
    UByte colormap[48];
    UByte reserved;
    UByte planes;
    Short bytesperline;
    Short color;
    UByte filler[58];
} PCXHEADER;

/* Format options structure for use with ParseFormatOpts */
typedef struct {
    Boln   verbose;      /* Read/Write option -verbose */
    Int    compression;  /* Write option -compression */
    double xres;         /* Write option -resolution or -xresolution */
    double yres;         /* Write option -resolution or -yresolution */
} FMTOPT;

#define htoqs(x) qtohs(x)
static UShort qtohs (UShort x)
{
    /* The PCX image format expects data to be in Intel (Little-endian) format. */
    if (!tkimg_IsIntel ()) {
        return ((UShort)((((UShort)(x) & 0x00ff) << 8) | \
                         (((UShort)(x) & 0xff00) >> 8)));
    } else {
        return x;
    }
}

/* Read 1 byte, representing an unsigned integer number. */

#ifdef DEBUG_LOCAL
static Boln readUByte (tkimg_Stream *handle, UByte *b)
{
    char buf[1];
    if (1 != tkimg_Read(handle, (char *) buf, 1)) {
        return FALSE;
    }
    *b = buf[0];
    return TRUE;
}
#else
    /* Use this macro for better performance, esp. when reading RLE files. */
#   define readUByte(h,b) (1 == tkimg_Read((h),(char *)(b),1))
#endif

/* Write 1 byte, representing an unsigned integer to a file. */

static Boln writeUByte (tkimg_Stream *handle, UByte b)
{
    UByte buf[1];
    buf[0] = b;
    if (1 != tkimg_Write(handle, (const char *)buf, 1)) {
        return FALSE;
    }
    return TRUE;
}

static Boln read_pcx_header (tkimg_Stream *ifp, PCXHEADER *pcxhdr)
{
    if (tkimg_Read(ifp, (char *)pcxhdr, 128) != 128) {
        return FALSE;
    }

    if (pcxhdr->manufacturer != 10) {
        return FALSE;
    }
    if (pcxhdr->bpp != 1 && pcxhdr->bpp != 8) {
        return FALSE;
    }
    if (pcxhdr->planes != 1 && pcxhdr->planes != 3 && pcxhdr->planes != 4) {
        return FALSE;
    }
    return TRUE;
}

static void printImgInfo (PCXHEADER *ph, const char *fileName, const char *msg)
{
    Tcl_Channel outChan;
    char str[256];
    Int width, height;
    Short hdpi, vdpi;

    outChan = Tcl_GetStdChannel (TCL_STDOUT);
    if (!outChan) {
        return;
    }
    width  = qtohs (ph->x2) - qtohs (ph->x1) + 1;
    height = qtohs (ph->y2) - qtohs (ph->y1) + 1;
    hdpi = qtohs (ph->hdpi);
    vdpi = qtohs (ph->vdpi);

    tkimg_snprintf(str, 256, "%s %s\n", msg, fileName);                                   IMGOUT;
    tkimg_snprintf(str, 256, "\tSize in pixel     : %d x %d\n", width, height);           IMGOUT;
    tkimg_snprintf(str, 256, "\tDots per inch     : %d x %d\n", hdpi, vdpi);              IMGOUT;
    tkimg_snprintf(str, 256, "\tNumber of channels: %d\n", ph->planes);                   IMGOUT;
    tkimg_snprintf(str, 256, "\tBits per pixel    : %d\n", ph->bpp);                      IMGOUT;
    tkimg_snprintf(str, 256, "\tBytes per line    : %d\n", ph->bytesperline);             IMGOUT;
    tkimg_snprintf(str, 256, "\tRLE compression   : %s\n", ph->compression? "yes": "no"); IMGOUT;
    Tcl_Flush(outChan);
}

static Boln readline (tkimg_Stream *handle, UByte *buffer, Int bytes, Int compr)
{
    static UByte count = 0, value = 0;

    if (compr) {
        while (bytes--) {
            if (count == 0) {
                if (!readUByte (handle, &value)) {
                    return TRUE;
                }
                if (value < 0xc0) {
                    count = 1;
                } else {
                    count = value - 0xc0;
                    if (!readUByte (handle, &value)) {
                        return TRUE;
                    }
                }
            }
            count--;
            *(buffer++) = value;
        }
    } else {
        if (bytes != tkimg_Read(handle, (char *)buffer, bytes)) {
            return FALSE;
        }
    }
    return TRUE;
}

static Boln writeline (tkimg_Stream *handle, UByte *buffer, Int bytes)
{
    UByte value, count;
    UByte *finish = buffer + bytes;

    while (buffer < finish) {
        value = *(buffer++);
        count = 1;

        while (buffer < finish && count < 63 && *buffer == value) {
            count++;
            buffer++;
        }

        if (value < 0xc0 && count == 1) {
            if (!writeUByte (handle, value)) {
                return FALSE;
            }
        } else {
            if (!writeUByte (handle, 0xc0 + count)) {
                return FALSE;
            }
            if (!writeUByte (handle, value)) {
                return FALSE;
            }
        }
    }
    return TRUE;
}

static Boln load_8(
    Tcl_Interp *interp,
    tkimg_Stream *ifp,
    Tk_PhotoHandle imageHandle,
    int destX, int destY,
    int width, int height,
    int srcX, int srcY,
    int fileWidth, int fileHeight,
    int bytesPerLine,
    int compr
) {
    Int x, y;
    Int stopY, outY;
    Tk_PhotoImageBlock block;
    UByte *line, *buffer, *indBuf, *indBufPtr;
    UByte *cmap, sepChar;
    Boln haveColormap = FALSE;
    Boln result = TRUE;
    char errMsg[256];

    cmap   = (UByte *) attemptckalloc (768);
    line   = (UByte *) attemptckalloc (bytesPerLine);
    buffer = (UByte *) attemptckalloc (fileWidth * 3);
    indBuf = (UByte *) attemptckalloc (fileWidth * fileHeight);
    if (cmap == NULL || line == NULL || buffer == NULL || indBuf == NULL) {
        if (cmap)   ckfree ((char *) cmap);
        if (line)   ckfree ((char *) line);
        if (buffer) ckfree ((char *) buffer);
        if (indBuf) ckfree ((char *) indBuf);
        Tcl_AppendResult (interp, "Unable to allocate memory for image data.", (char *) NULL);
        return FALSE;
    }
    indBufPtr = indBuf;

    block.pixelSize = 3;
    block.pitch = fileWidth * 3;
    block.width = width;
    block.height = 1;
    block.offset[0] = 0;
    block.offset[1] = 1;
    block.offset[2] = 2;
    block.offset[3] = 0;

    block.pixelPtr = buffer + srcX * 3;

    stopY = srcY + height;
    outY  = destY;

    /* Read in the whole image data as indices. */
    for (y=0; y<stopY; y++) {
        if (!readline (ifp, line, bytesPerLine, compr)) {
            ckfree ((char *) cmap);
            ckfree ((char *) line);
            ckfree ((char *) buffer);
            ckfree ((char *) indBuf);
            tkimg_snprintf(errMsg, 256, "Unexpected end-of-file while scanline %d", y);
            Tcl_AppendResult(interp, errMsg, (char *)NULL);
            return FALSE;
        }
        memcpy (indBufPtr, line, fileWidth);
        indBufPtr += fileWidth;
    }
    /* Read the colormap: 256 entries a 3 values for RGB */
    if (tkimg_Read(ifp, (char *)&sepChar, 1) == 1) {
        if (sepChar == 12) {
            /* A colormap is available, if sepChar equals 0x0C */
            if (tkimg_Read(ifp, (char *)cmap, 768) != 768) {
                ckfree ((char *) cmap);
                ckfree ((char *) line);
                ckfree ((char *) buffer);
                ckfree ((char *) indBuf);
                Tcl_AppendResult (interp, "Unexpected end-of-file while reading colormap",
                                 (char *) NULL);
                return FALSE;
            }
            haveColormap = TRUE;
        }
    }

    for (y=srcY; y<stopY; y++) {
        if (haveColormap) {
            /* An indexed colormap image */
            for (x=0; x<fileWidth; x++) {
                buffer[x * 3 + 0] = cmap[indBuf[y*fileWidth + x]*3 + 0 ];
                buffer[x * 3 + 1] = cmap[indBuf[y*fileWidth + x]*3 + 1 ];
                buffer[x * 3 + 2] = cmap[indBuf[y*fileWidth + x]*3 + 2 ];
            }
        } else {
            /* A grayscale image */
            for (x=0; x<fileWidth; x++) {
                buffer[x * 3 + 0] = indBuf[y*fileWidth + x];
                buffer[x * 3 + 1] = indBuf[y*fileWidth + x];
                buffer[x * 3 + 2] = indBuf[y*fileWidth + x];
            }
        }
        if (Tk_PhotoPutBlock(interp, imageHandle, &block, destX, outY, width, 1,
            TK_PHOTO_COMPOSITE_SET) == TCL_ERROR) {
            result = FALSE;
            break;
        }
        outY++;
    }
    ckfree ((char *) cmap);
    ckfree ((char *) line);
    ckfree ((char *) buffer);
    ckfree ((char *) indBuf);
    return result;
}

static Boln load_24(
    Tcl_Interp *interp,
    tkimg_Stream *ifp,
    Tk_PhotoHandle imageHandle,
    int destX, int destY,
    int width, int height,
    int srcX, int srcY,
    int fileWidth, int fileHeight,
    int bytesPerLine,
    int compr
) {
    Int x, y, c;
    Int stopY, outY;
    Tk_PhotoImageBlock block;
    UByte *line, *buffer;
    Boln result = TRUE;

    line   = (UByte *) attemptckalloc (bytesPerLine);
    buffer = (UByte *) attemptckalloc (fileWidth * 3);
    if (line == NULL || buffer == NULL) {
        if (line)   ckfree ((char *) line);
        if (buffer) ckfree ((char *) buffer);
        Tcl_AppendResult (interp, "Unable to allocate memory for image data.", (char *) NULL);
        return FALSE;
    }

    block.pixelSize = 3;
    block.pitch = fileWidth * 3;
    block.width = width;
    block.height = 1;
    block.offset[0] = 0;
    block.offset[1] = 1;
    block.offset[2] = 2;
    block.offset[3] = 0;

    block.pixelPtr = buffer + srcX * 3;

    stopY = srcY + height;
    outY  = destY;

    for (y=0; y<stopY; y++) {
        for (c=0; c<3; c++) {
            if (!readline (ifp, line, bytesPerLine, compr)) {
                ckfree ((char *) line);
                ckfree ((char *) buffer);
                return FALSE;
            }
            for (x=0; x<fileWidth; x++) {
                buffer[x * 3 + c] = line[x];
            }
        }
        if (y >= srcY) {
            if (Tk_PhotoPutBlock(interp, imageHandle, &block, destX, outY, width, 1,
                TK_PHOTO_COMPOSITE_SET) == TCL_ERROR) {
                result = FALSE;
                break;
            }
            outY++;
        }
    }
    ckfree ((char *) line);
    ckfree ((char *) buffer);
    return result;
}

static Boln load_1(
    Tcl_Interp *interp,
    tkimg_Stream *ifp,
    Tk_PhotoHandle imageHandle,
    int destX, int destY,
    int width, int height,
    int srcX, int srcY,
    int fileWidth, int fileHeight,
    int bytesPerLine,
    int compr
) {
    Int x, y;
    Int stopY, outY;
    Tk_PhotoImageBlock block;
    UByte *line, *buffer;
    Boln result = TRUE;

    line   = (UByte *) attemptckalloc (fileWidth);
    buffer = (UByte *) attemptckalloc (fileWidth * 1);
    if (line == NULL || buffer == NULL) {
        if (line)   ckfree ((char *) line);
        if (buffer) ckfree ((char *) buffer);
        Tcl_AppendResult (interp, "Unable to allocate memory for image data.", (char *) NULL);
        return FALSE;
    }

    block.pixelSize = 1;
    block.pitch = fileWidth * 1;
    block.width = width;
    block.height = 1;
    block.offset[0] = 0;
    block.offset[1] = 0;
    block.offset[2] = 0;
    block.offset[3] = 0;

    block.pixelPtr = buffer + srcX * 1;

    stopY = srcY + height;
    outY  = destY;

    for (y=0; y<stopY; y++) {
        if (!readline (ifp, line, bytesPerLine, compr)) {
            ckfree ((char *) line);
            ckfree ((char *) buffer);
            return FALSE;
        }
        for (x=0; x<fileWidth; x++) {
            if (line[x/8] & (128 >> (x%8))) {
                buffer[x] = 255;
            } else {
                buffer[x] = 0;
            }
        }
        if (y >= srcY) {
            if (Tk_PhotoPutBlock(interp, imageHandle, &block, destX, outY, width, 1,
                TK_PHOTO_COMPOSITE_SET) == TCL_ERROR) {
                result = FALSE;
                break;
            }
            outY++;
        }
    }
    ckfree ((char *) line);
    ckfree ((char *) buffer);
    return result;
}

/*
 * Prototypes for local procedures defined in this file:
 */

static int CommonMatch(
    tkimg_Stream *handle,
    int *widthPtr, int *heightPtr,
    PCXHEADER *pcxHeaderPtr
);
static int CommonRead(
    Tcl_Interp *interp,
    tkimg_Stream *handle,
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
    Tcl_Obj *format,
    tkimg_Stream *handle,
    Tk_PhotoImageBlock *blockPtr,
    Tcl_Obj *metadataIn
);

static int ParseFormatOpts(
    Tcl_Interp *interp,
    Tcl_Obj *format,
    FMTOPT *opts,
    int mode
) {
    static const char *const readOptions[] = {
        "-verbose", NULL
    };
    enum readEnums {
        R_VERBOSE
    };
    static const char *const writeOptions[] = {
        "-verbose", "-compression", "-resolution", "-xresolution", "-yresolution", NULL
    };
    enum writeEnums {
        W_VERBOSE, W_COMPRESSION, W_RESOLUTION, W_XRESOLUTION, W_YRESOLUTION
    };
    Tcl_Size objc, i;
    int index;
    char *optionStr;
    Tcl_Obj **objv;
    int boolVal;
    double doubleVal;

    /* Initialize options with default values. */
    opts->verbose     = 0;
    opts->compression = 1;
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
            switch(index) {
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
            }
        } else {
            switch(index) {
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
                        opts->compression = 0;
                    } else if (!strncmp (optionStr, "rle", strlen ("rle"))) {
                        opts->compression = 1;
                    } else {
                        Tcl_SetObjResult(interp, Tcl_ObjPrintf(
                            "Invalid compression mode \"%s\": must be none or rle.",
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

static int FileMatchVersion3(
    Tcl_Interp *interp,
    Tcl_Channel chan,
    const char *fileName,
    Tcl_Obj *format,
    Tcl_Obj *metadataIn,
    int *widthPtr, int *heightPtr,
    Tcl_Obj *metadataOut
) {
    PCXHEADER ph;
    int retVal;
    tkimg_Stream handle;
    memset(&handle, 0, sizeof (tkimg_Stream));

    tkimg_ReadInitFile(&handle, chan);

    retVal = CommonMatch(&handle, widthPtr, heightPtr, &ph);
    if (retVal && qtohs(ph.hdpi) > 0 && qtohs(ph.vdpi) > 0) {
        if (TCL_ERROR == tkimg_SetResolution( metadataOut,
                         (double)qtohs(ph.hdpi), (double)qtohs(ph.vdpi))) {
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
    PCXHEADER ph;
    int retVal;
    tkimg_Stream handle;
    memset(&handle, 0, sizeof (tkimg_Stream));

    if (!tkimg_ReadInitString(&handle, dataObj)) {
        return 0;
    }
    retVal = CommonMatch(&handle, widthPtr, heightPtr, &ph);
    if (retVal && qtohs(ph.hdpi) > 0 && qtohs(ph.vdpi) > 0) {
        if (TCL_ERROR == tkimg_SetResolution( metadataOut,
                         (double)qtohs(ph.hdpi), (double)qtohs(ph.vdpi))) {
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
    return StringMatchVersion3(
           interp, dataObj, format, NULL,
           widthPtr, heightPtr, NULL);
}
#endif

static int CommonMatch(
    tkimg_Stream *handle,
    int   *widthPtr,
    int   *heightPtr,
    PCXHEADER *pcxHeaderPtr
) {
    PCXHEADER ph;
    Int offset_x, offset_y;

    if (!read_pcx_header (handle, &ph)) {
        return 0;
    }

    offset_x = qtohs (ph.x1);
    offset_y = qtohs (ph.y1);

    if (offset_x < 0 || offset_y < 0) {
        return 0;
    }

    *widthPtr  = qtohs (ph.x2) - offset_x + 1;
    *heightPtr = qtohs (ph.y2) - offset_y + 1;

    if (*widthPtr < 1 || *heightPtr < 1) {
        return 0;
    }

    if (pcxHeaderPtr) {
        *pcxHeaderPtr = ph;
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
    tkimg_Stream handle;
    memset(&handle, 0, sizeof (tkimg_Stream));

    tkimg_ReadInitFile(&handle, chan);

    return CommonRead (
           interp, &handle, fileName, format, imageHandle,
           destX, destY, width, height, srcX, srcY,
           metadataOut);
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
    tkimg_Stream handle;
    memset(&handle, 0, sizeof (tkimg_Stream));

    if (!tkimg_ReadInitString(&handle, dataObj)) {
        return 0;
    }
    return CommonRead (
           interp, &handle, "InlineData", format, imageHandle,
           destX, destY, width, height, srcX, srcY,
           metadataOut);
}

#if HAVE_FORMAT_VERSION3 == 0
static int FileRead(
    Tcl_Interp *interp,         /* Interpreter to use for reporting errors. */
    Tcl_Channel chan,           /* The image channel, open for reading. */
    const char *fileName,       /* The name of the image file. */
    Tcl_Obj *format,            /* User-specified format object, or NULL. */
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
    Tcl_Interp *interp,         /* Interpreter to use for reporting errors. */
    tkimg_Stream *handle,        /* The image file, open for reading. */
    const char *fileName,       /* The name of the image file. */
    Tcl_Obj *format,            /* User-specified format object, or NULL. */
    Tk_PhotoHandle imageHandle, /* The photo image to write into. */
    int destX, int destY,       /* Coordinates of top-left pixel in
                                 * photo image to be written to. */
    int width, int height,      /* Dimensions of block of photo image to
                                 * be written to. */
    int srcX, int srcY,         /* Coordinates of top-left pixel to be used
                                 * in image being read. */
    Tcl_Obj *metadataOut
) {
    int fileWidth, fileHeight;
    int outWidth, outHeight;
    int retCode = TCL_OK;
    PCXHEADER ph;
    FMTOPT opts;
    Short hdpi, vdpi;
    char errMsg[256];

    if (ParseFormatOpts(interp, format, &opts, IMG_READ) == TCL_ERROR) {
        return TCL_ERROR;
    }

    CommonMatch(handle, &fileWidth, &fileHeight, &ph);
    if (opts.verbose) {
        printImgInfo (&ph, fileName, "Reading image:");
    }

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

    if (Tk_PhotoExpand(interp, imageHandle, destX + outWidth, destY + outHeight) == TCL_ERROR) {
        return TCL_ERROR;
    }

    if (ph.compression) {
        tkimg_EnableReadBuffer (handle, 1);
    }
    hdpi = qtohs (ph.hdpi);
    vdpi = qtohs (ph.vdpi);

    if (hdpi > 0 && vdpi > 0) {
        if (TCL_ERROR == tkimg_SetResolution( metadataOut, (double)hdpi, (double)vdpi)) {
            return TCL_ERROR;
        }
    }

    if (ph.planes == 1 && ph.bpp == 1) {
        if (!load_1(interp, handle, imageHandle, destX, destY,
                    outWidth, outHeight, srcX, srcY, fileWidth, fileHeight,
                    qtohs (ph.bytesperline), ph.compression)) {
            retCode = TCL_ERROR;
        }
    } else if (ph.planes == 4 && ph.bpp == 1) {
        Tcl_AppendResult(interp, "Format (4 channels, 1 bit per channel) ",
                          "is not supported yet.", (char *)NULL);
        retCode = TCL_ERROR;
    } else if (ph.planes == 1 && ph.bpp == 8) {
        if (!load_8(interp, handle, imageHandle, destX, destY,
                    outWidth, outHeight, srcX, srcY, fileWidth, fileHeight,
                    qtohs (ph.bytesperline), ph.compression)) {
            retCode = TCL_ERROR;
        }
    } else if (ph.planes == 3 && ph.bpp == 8) {
        if (!load_24(interp, handle, imageHandle, destX, destY,
                     outWidth, outHeight, srcX, srcY, fileWidth, fileHeight,
                     qtohs (ph.bytesperline), ph.compression)) {
            retCode = TCL_ERROR;
        }
    } else {
        tkimg_snprintf(errMsg, 256, "Image has invalid channel/bpp combination: (%d, %d)",
                       ph.planes, ph.bpp);
        Tcl_AppendResult(interp, errMsg, (char *)NULL);
        retCode = TCL_ERROR;
    }
    tkimg_EnableReadBuffer (handle, 0);
    return retCode;
}

static int FileWriteVersion3(
    Tcl_Interp *interp,
    const char *fileName,
    Tcl_Obj *format,
    Tcl_Obj *metadataIn,
    Tk_PhotoImageBlock *blockPtr
) {
    Tcl_Channel chan;
    int result;
    tkimg_Stream handle;
    memset(&handle, 0, sizeof (tkimg_Stream));

    chan = tkimg_OpenFileChannel (interp, fileName, "w");
    if (!chan) {
        return TCL_ERROR;
    }

    tkimg_WriteInitFile(&handle, chan);

    result = CommonWrite (interp, fileName, format, &handle, blockPtr, metadataIn);
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
    int result;
    tkimg_Stream handle;
    memset(&handle, 0, sizeof (tkimg_Stream));

    tkimg_WriteInitString(&handle);
    result = CommonWrite (interp, "InlineData", format, &handle, blockPtr, metadataIn);

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
    Tcl_Obj *format,
    tkimg_Stream *handle,
    Tk_PhotoImageBlock *blockPtr,
    Tcl_Obj *metadataIn
) {
    int   x, y, nchan, nBytes;
    int   redOffset, greenOffset, blueOffset, alphaOffset;
    UByte *pixelPtr, *pixRowPtr;
    double xdpi, ydpi;
    PCXHEADER ph;
    UByte *row;
    FMTOPT opts;
    char errMsg[256];

    if (ParseFormatOpts(interp, format, &opts, IMG_WRITE) == TCL_ERROR) {
        return TCL_ERROR;
    }

    redOffset   = 0;
    greenOffset = blockPtr->offset[1] - blockPtr->offset[0];
    blueOffset  = blockPtr->offset[2] - blockPtr->offset[0];
    alphaOffset = blockPtr->offset[0];

    if (alphaOffset < blockPtr->offset[2]) {
        alphaOffset = blockPtr->offset[2];
    }
    if (++alphaOffset < blockPtr->pixelSize) {
        alphaOffset -= blockPtr->offset[0];
    } else {
        alphaOffset = 0;
    }

    nchan  = 3;
    nBytes = blockPtr->width * nchan;

    /* Fill the PCX header struct and write the header to the channel. */
    memset (&ph, 0, sizeof (PCXHEADER));
    ph.manufacturer = 0x0a;
    ph.version = 5;
    ph.compression = opts.compression;
    ph.bpp = 8;
    ph.planes = 3;
    ph.color = htoqs (1);
    ph.bytesperline = htoqs (blockPtr->width);
    ph.x1 = htoqs (0);
    ph.y1 = htoqs (0);
    ph.x2 = htoqs (blockPtr->width  - 1);
    ph.y2 = htoqs (blockPtr->height - 1);

    if (TCL_ERROR == tkimg_GetResolution(interp, metadataIn, &xdpi, &ydpi)) {
        return TCL_ERROR;
    }

    if (opts.xres != IMG_DEFAULT_DPI && opts.yres != IMG_DEFAULT_DPI) {
        /* Resolution values specified in the format string (-xresolution, -yresolution)
           overwrite the values specified with option -metadata. */
        xdpi = opts.xres;
        ydpi = opts.yres;
    }

    ph.hdpi = htoqs ((Short)xdpi);
    ph.vdpi = htoqs ((Short)ydpi);

    ph.reserved = 0;

    if (tkimg_Write(handle, (const char *)&ph, 128) != 128) {
        Tcl_AppendResult(interp, "Can't write PCX header.", (char *)NULL);
        return TCL_ERROR;
    }

    row = (UByte *) attemptckalloc (nBytes);
    if (row == NULL) {
        Tcl_AppendResult (interp, "Unable to allocate memory for image data.", (char *) NULL);
        return TCL_ERROR;
    }

    /* Now write out the image data. */
    pixRowPtr = blockPtr->pixelPtr + blockPtr->offset[0];
    if (!opts.compression) {
        for (y=0; y<blockPtr->height; y++) {
            pixelPtr = pixRowPtr;
            for (x=0; x<blockPtr->width; x++) {
                row[x + 0*blockPtr->width] = pixelPtr[redOffset];
                row[x + 1*blockPtr->width] = pixelPtr[greenOffset];
                row[x + 2*blockPtr->width] = pixelPtr[blueOffset];
                pixelPtr += blockPtr->pixelSize;
            }
            if (nBytes != tkimg_Write(handle, (const char *)row, nBytes)) {
                tkimg_snprintf(errMsg, 256, "Can't write %d bytes to image file.", nBytes);
                Tcl_AppendResult(interp, errMsg, (char *)NULL);
                ckfree ((char *)row);
                return TCL_ERROR;
            }
            pixRowPtr += blockPtr->pitch;
        }
    } else {                    /* RLE compression */
        for (y = 0; y < blockPtr->height; y++) {
            pixelPtr = pixRowPtr;
            for (x = 0; x < blockPtr->width; x++) {
                row[x + 0*blockPtr->width] = pixelPtr[redOffset];
                row[x + 1*blockPtr->width] = pixelPtr[greenOffset];
                row[x + 2*blockPtr->width] = pixelPtr[blueOffset];
                pixelPtr += blockPtr->pixelSize;
            }
            if (!writeline (handle, row, nBytes)) {
                tkimg_snprintf(errMsg, 256, "Can't write %d bytes to image file.", nBytes);
                Tcl_AppendResult(interp, errMsg, (char *)NULL);
                ckfree ((char *)row);
                return TCL_ERROR;
            }
            pixRowPtr += blockPtr->pitch;
        }
    }
    if (opts.verbose) {
        printImgInfo (&ph, fileName, "Saving image:");
    }
    ckfree ((char *)row);
    return TCL_OK;
}
