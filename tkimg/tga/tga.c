/*
 * tga.c
 *
 * TGA photo image type, Tcl/Tk package.
 *
 * A photo image handler for Truevision's TARGA image format.
 *
 * For a list of available format options see function ParseFormatOpts
 * and the documentation img-tga.
 *
 * Copyright (c) 2000-2024 Paul Obermeier <obermeier@users.sourceforge.net>
 *
 * See the file "license.terms" for information on usage and redistribution
 * of this file, and for a DISCLAIMER OF ALL WARRANTIES.
 *
 * As Targa files do not have a "magic number" somewhere in the file header,
 * it is difficult to automatically recognize this format.
 * Therefore it should be specified as one of the first entries in the list of
 * package require tkimg::*.
 *
 */

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
typedef short Short;            /* Signed   16 bit integer */
typedef int Int;                /* Signed   32 bit integer */

/* Supported TARGA version numbers */
#define TGA_RGB_UNCOMP   2
#define TGA_RGB_COMP    10

/* Macros needed for run-length encoding. */
#define TGA_MODE_SAME   0
#define TGA_MODE_DIFF   1
#define MINRUN   3
#define MAXRUN 127

/* Macros for acessing header fields */
#define ENC_LEFT_RIGHT(imgdes) (((imgdes >> 4) & 0x1)? FALSE: TRUE)
#define ENC_TOP_BOTTOM(imgdes) (((imgdes >> 5) & 0x1)? TRUE: FALSE)
#define NCHAN(pixsize)         ((pixsize == 24) ? 3: 4)
#define IS_COMPRESSED(imgtyp)  ((imgtyp == TGA_RGB_COMP)? TRUE: FALSE)

/* The Targa header structure */
typedef struct {
    UByte numid;
    UByte maptyp;
    UByte imgtyp;
    Short maporig;
    Short mapsize;
    UByte mapbits;
    Short xorig;
    Short yorig;
    Short xsize;
    Short ysize;
    UByte pixsize;
    UByte imgdes;
} TGAHEADER;

/* Structure to hold information about the Targa file being processed. */
typedef struct {
    TGAHEADER th;
    Int   scanrest,     /* Number of pixels belonging to next scanline */
          scanmode;     /* Current compression mode */
    UByte *red,         /* Pointers to step through scanlines */
          *green,
          *blue,
          *alpha;
    UByte *redScan,     /* Buffer for one scanline: Red   channel */
          *greenScan,   /* Buffer for one scanline: Green channel */
          *blueScan,    /* Buffer for one scanline: Blue  channel */
          *alphaScan;   /* Buffer for one scanline: Matte channel */
    UByte *pixbuf;
#ifdef DEBUG_LOCAL
        Int total;
#endif
} TGAFILE;

/* Format options structure for use with ParseFormatOpts */
typedef struct {
    Int   compression;
    Boln  verbose;
    Boln  withalpha;
} FMTOPT;

static void tgaClose(TGAFILE *tf)
{
    if (tf->redScan)   ckfree((char *)tf->redScan);
    if (tf->greenScan) ckfree((char *)tf->greenScan);
    if (tf->blueScan)  ckfree((char *)tf->blueScan);
    if (tf->alphaScan) ckfree((char *)tf->alphaScan);
    if (tf->pixbuf)    ckfree((char *)tf->pixbuf);
    return;
}

static Boln readError(Tcl_Interp *interp)
{
    Tcl_AppendResult(interp, "Unexpected end of file", (char *) NULL);
    return FALSE;
}

/* Read 1 byte, representing an unsigned integer number. */

static Boln readUByte (tkimg_Stream *handle, UByte *b)
{
    char buf[1];
    if (1 != tkimg_Read(handle, buf, 1)) {
        return FALSE;
    }
    *b = buf[0];
    return TRUE;
}

/* Read 2 bytes, representing a short integer in the form <LowByte, HighByte>,
   from a file and convert them into the current machine's format. */

static Boln readShort (tkimg_Stream *handle, Short *s)
{
    unsigned char buf[2];
    if (2 != tkimg_Read(handle, (char *)buf, 2)) {
        return FALSE;
    }
    *s = buf[0] | (buf[1] << 8);
    return TRUE;
}

/* Write a byte, representing an unsigned integer to a file. */

static Boln writeUByte (tkimg_Stream *handle, UByte b)
{
    UByte buf[1];
    buf[0] = b;
    if (1 != tkimg_Write(handle, (const char *)buf, 1)) {
        return FALSE;
    }
    return TRUE;
}

/* Write a byte, representing a signed integer to a file. */

static Boln writeByte(tkimg_Stream *handle, Byte b)
{
    Byte buf[1];
    buf[0] = b;
    if (1 != tkimg_Write(handle, buf, 1)) {
        return FALSE;
    }
    return TRUE;
}

/* Convert a short integer number into the format <LowByte, HighByte> (an array
   of 2 bytes) and write the array to a file. */

static Boln writeShort (tkimg_Stream *handle, Short s)
{
    Byte buf[2];
    buf[0] = s;
    buf[1] = s >> 8;
    if (2 != tkimg_Write(handle, buf, 2)) {
        return FALSE;
    }
    return TRUE;
}

static void printImgInfo (TGAHEADER *th, const char *filename, const char *msg)
{
    Tcl_Channel outChan;
    char str[256];

    outChan = Tcl_GetStdChannel (TCL_STDOUT);
    if (!outChan) {
        return;
    }

    tkimg_snprintf(str, 256, "%s %s\n", msg, filename);                                     IMGOUT;
    tkimg_snprintf(str, 256, "\tSize in pixel      : %d x %d\n", th->xsize, th->ysize);     IMGOUT;
    tkimg_snprintf(str, 256, "\tNumber of channels : %d\n", NCHAN(th->pixsize));            IMGOUT;
    tkimg_snprintf(str, 256, "\tCompression        : %s\n",
                             IS_COMPRESSED(th->imgtyp)? "rle": "none");                     IMGOUT;
    tkimg_snprintf(str, 256, "\tVertical encoding  : %s\n",
                             ENC_TOP_BOTTOM(th->imgdes)? "TopBottom": "BottomTop");         IMGOUT;
    tkimg_snprintf(str, 256, "\tHorizontal encoding: %s\n",
                             ENC_LEFT_RIGHT(th->imgdes)? "LeftRight": "RightLeft");         IMGOUT;
    Tcl_Flush(outChan);
}

static Boln readHeader (tkimg_Stream *handle, TGAHEADER *th)
{
    Int i;
    UByte dummy;

    if (!readUByte (handle, &th->numid) ||
        !readUByte (handle, &th->maptyp) ||
        !readUByte (handle, &th->imgtyp) ||
        !readShort (handle, &th->maporig) ||
        !readShort (handle, &th->mapsize) ||
        !readUByte (handle, &th->mapbits) ||
        !readShort (handle, &th->xorig) ||
        !readShort (handle, &th->yorig) ||
        !readShort (handle, &th->xsize) ||
        !readShort (handle, &th->ysize) ||
        !readUByte (handle, &th->pixsize) ||
        !readUByte (handle, &th->imgdes)) {
        return FALSE;
    }

    /* Try to find out if this file can possibly be a TARGA pixel file. */
    if (!((th->imgtyp == TGA_RGB_UNCOMP || th->imgtyp == TGA_RGB_COMP) &&
          (th->pixsize == 24 || th->pixsize == 32))) {
        return FALSE;
    }

    for ( i=0; i<th->numid; i++) {
        if (!readUByte (handle, &dummy)) {
            return FALSE;
        }
    }

    if (th->xsize < 1 || th->ysize < 1) {
        return FALSE;
    }

    /* Skip colormap data, if present. */
    if (th->mapsize > 0) {
        Int   mapbytes;
        switch (th->mapbits) {
            case 15:
            case 16:
                mapbytes = 2 * th->mapsize;
                break;
            case 24:
                mapbytes = 3 * th->mapsize;
                break;
            case 32:
                mapbytes = 4 * th->mapsize;
                break;
            default:
                return FALSE;
        }
        while (mapbytes--) {
            if (!readUByte (handle, &dummy)) {
                return FALSE;
            }
        }
    }
    return TRUE;
}

static Boln writeHeader(tkimg_Stream *handle, TGAHEADER *th)
{
    if (!writeUByte (handle, th->numid) ||
        !writeUByte (handle, th->maptyp) ||
        !writeUByte (handle, th->imgtyp) ||
        !writeShort (handle, th->maporig) ||
        !writeShort (handle, th->mapsize) ||
        !writeUByte (handle, th->mapbits) ||
        !writeShort (handle, th->xorig) ||
        !writeShort (handle, th->yorig) ||
        !writeShort (handle, th->xsize) ||
        !writeShort (handle, th->ysize) ||
        !writeUByte (handle, th->pixsize) ||
        !writeUByte (handle, th->imgdes)) {
        return FALSE;
    }
    return TRUE;
}

/* A pixel is represented by 3 or 4 bytes in the order Blue/Green/Red/Alpha.
   We are converting the order into standard RGBA order.
   Note that TARGA allows pixel values to be compressed across scanline boundaries.
*/

/* Read the value of a pixel from "handle" and assume it must be repeated "n" times. */

static Boln readRlePixel (Tcl_Interp *interp, tkimg_Stream *handle, UByte **pixBufPtr,
                          Int *countPtr, Int stop, Int n, TGAFILE *tf)
{
    Int i, count, nchan;
    UByte localBuf[4];

    nchan = NCHAN(tf->th.pixsize);
    if (nchan != tkimg_Read(handle, (char *)localBuf, nchan))
        return readError (interp);
    count = *countPtr;
    for (i=0; i<n; i++) {
#ifdef DEBUG_LOCAL
        tf->total++;
#endif
        (*pixBufPtr)[0] = localBuf[2];
        (*pixBufPtr)[1] = localBuf[1];
        (*pixBufPtr)[2] = localBuf[0];
        if (nchan == 4) {
            (*pixBufPtr)[3] = localBuf[3];
        }
        (*pixBufPtr) += nchan;
        count++;

        if (count == stop) {
            /* Scanline is filled with pixel values.
               Determine the number of pixels to keep for next scanline. */
            tf->scanrest = n - i - 1;
            *countPtr = count;
            return TRUE;
        }
    }
    *countPtr = count;
    return TRUE;
}

/* The channels of scan line number "y" are read. */

static Boln tgaReadScan (Tcl_Interp *interp, tkimg_Stream *handle,
                         TGAFILE *tf, Int y)
{
    Int   nchan;
    Int   count, stop;
    UByte localBuf[4];
    UByte *pixBufPtr;

    count = 0;
    stop  = tf->th.xsize;
    nchan = NCHAN(tf->th.pixsize);
    pixBufPtr = tf->pixbuf;

#ifdef DEBUG_LOCAL
        tf->total = 0;
#endif

    if (IS_COMPRESSED (tf->th.imgtyp)) {
        Byte cbuf[1];
        Int  pix, numpix;
        /* While there are pixels left from the previous scanline,
           either fill the current scanline with the pixel value
           still stored in "pixbuf" (TGA_MODE_SAME) or read in the
           appropriate number of pixel values (TGA_MODE_DIFF). */
        while (tf->scanrest) {
            if (tf->scanmode == TGA_MODE_DIFF) {
                if (nchan != tkimg_Read(handle, (char *)localBuf, nchan)) {
                    return readError (interp);
                }
            }
#ifdef DEBUG_LOCAL
            tf->total++;
#endif
            *pixBufPtr++ = localBuf[2];
            *pixBufPtr++ = localBuf[1];
            *pixBufPtr++ = localBuf[0];
            if (nchan == 4) {
                *pixBufPtr++ = localBuf[3];
            }
            count++;

            tf->scanrest--;
            /* If the image is small, the compression might go over several
               scanlines. */
            if (count == stop) {
                return TRUE;
            }
        }

        /* Read the byte telling us the compression mode and the compression
           count. Then read the pixel values till a scanline is filled. */
        do {
            if (1 != tkimg_Read(handle, cbuf, 1)) {
                return readError (interp);
            }
            numpix = (cbuf[0] & 0x7F) + 1;

            if ((cbuf[0] & 0x80) != 0x80) {
                tf->scanmode = TGA_MODE_DIFF;
                for (pix=0; pix<numpix; pix++) {
                    if (!readRlePixel (interp, handle, &pixBufPtr,
                                       &count, stop, 1, tf)) {
                        return FALSE;
                    }
                    if (count == stop) {
                        tf->scanrest = numpix - pix - 1;
                        break;
                    }
                }
            } else {
                tf->scanmode = TGA_MODE_SAME;
                if (!readRlePixel (interp, handle, &pixBufPtr,
                                   &count, stop, numpix, tf)) {
                    return FALSE;
                }
            }
        } while (count < stop);

#ifdef DEBUG_LOCAL
        printf("\tScanline %d: Pixels: %d Rest: %d\n", y, tf->total, tf->scanrest);
#endif
    } else {
        /* Read uncompressed pixel data. */
        Int   i, bytesPerLine;
        UByte curPix;

        bytesPerLine = nchan * tf->th.xsize;
        if (bytesPerLine != tkimg_Read(handle, (char *)tf->pixbuf, bytesPerLine)) {
            return readError (interp);
        }

        for (i=0; i<stop; i++) {
            curPix = pixBufPtr[2];
            pixBufPtr[2] = pixBufPtr[0];
            pixBufPtr[0] = curPix;
            pixBufPtr += nchan;
        }
    }
    return TRUE;
}

static Boln writePixel(tkimg_Stream *handle, UByte b, UByte g,
                        UByte r, UByte a, Int nchan)
{
    UByte buf[4];
    buf[0] = b;
    buf[1] = g;
    buf[2] = r;
    buf[3] = a;
    if (nchan != (Int)tkimg_Write(handle, (const char *)buf, nchan)) {
        return FALSE;
    }
    return TRUE;
}

static Boln tgaWriteScan(Tcl_Interp *interp, tkimg_Stream *handle,
                          TGAFILE *tf, Int y, Int nchan)
{
    UByte *red_end, *green_end, *blue_end, *alpha_end;
    UByte *red_stop, *green_stop, *blue_stop, *alpha_stop;

    tf->red   = tf->redScan;
    tf->green = tf->greenScan;
    tf->blue  = tf->blueScan;
    tf->alpha = tf->alphaScan;
    red_stop   = tf->red   + tf->th.xsize;
    green_stop = tf->green + tf->th.xsize;
    blue_stop  = tf->blue  + tf->th.xsize;
    alpha_stop = tf->alpha + tf->th.xsize;

    /* Write the scanline data to the file. */
    if (! IS_COMPRESSED(tf->th.imgtyp)) {
        while (tf->red < red_stop) {
            if (!writePixel(handle, *tf->blue, *tf->green, *tf->red, *tf->alpha, nchan)) {
                return FALSE;
            }
            tf->blue++;
            tf->green++;
            tf->red++;
            tf->alpha++;
        }
    } else {
        /* Run-length Compression */
        red_end = tf->red + 1;
        green_end = tf->green + 1;
        blue_end = tf->blue + 1;
        alpha_end = tf->alpha + 1;
        while (tf->red < red_stop) {
            while (red_end < red_stop &&
                   *tf->red == *red_end &&
                   *tf->green == *green_end &&
                   *tf->blue == *blue_end &&
                   red_end - tf->red - 1 < MAXRUN) {
                if (nchan == 4) {
                    if (*tf->alpha != *alpha_end) {
                        break;
                    }
                }
                red_end++;
                green_end++;
                blue_end++;
                alpha_end++;
            }
            if (red_end - tf->red >= MINRUN) {
                /* Found a run of compressable data */
                if (!writeByte(handle, (Byte)(((red_end - tf->red)-1)|0x80)) ||
                    !writePixel(handle, *tf->blue, *tf->green, *tf->red, *tf->alpha, nchan)) {
                    return FALSE;
                }
                tf->red   = red_end;
                tf->green = green_end;
                tf->blue  = blue_end;
                tf->alpha = alpha_end;
            } else {
                /* Found a run of uncompressable data */
                while (red_end < red_stop &&
                       ((red_end + 1 >= red_stop ||
                        *red_end != *(red_end + 1)) ||
                        (red_end + 2 >= red_stop ||
                        *(red_end + 1) != *(red_end + 2))) &&
                       ((green_end + 1 >= green_stop ||
                        *green_end != *(green_end + 1)) ||
                        (green_end + 2 >= green_stop ||
                        *(green_end + 1) != *(green_end + 2))) &&
                       ((blue_end + 1 >= blue_stop ||
                        *blue_end != *(blue_end + 1)) ||
                        (blue_end + 2 >= blue_stop ||
                        *(blue_end + 1) != *(blue_end + 2))) &&
                        red_end - tf->red < MAXRUN) {
                    if (nchan == 4) {
                        if (! ((alpha_end + 1 >= alpha_stop ||
                               *alpha_end != *(alpha_end + 1)) ||
                               (alpha_end + 2 >= alpha_stop ||
                               *(alpha_end + 1) != *(alpha_end + 2)))) {
                            break;
                        }
                    }
                    red_end++;
                    green_end++;
                    blue_end++;
                    alpha_end++;
                }
                if (!writeByte(handle, (Byte)((red_end - tf->red) - 1))) {
                    return FALSE;
                }
                while (tf->red < red_end) {
                    if (!writePixel(handle, *tf->blue, *tf->green, *tf->red, *tf->alpha, nchan)) {
                        return FALSE;
                    }
                    tf->red++;
                    tf->green++;
                    tf->blue++;
                    tf->alpha++;
                }
            }
            red_end++;
            green_end++;
            blue_end++;
            alpha_end++;
        }
    }
    return TRUE;
}

/*
 * Here is the start of the standard functions needed for every image format.
 */

/*
 * Prototypes for local procedures defined in this file:
 */

static int CommonMatch(tkimg_Stream *handle, int *widthPtr,
        int *heightPtr, TGAHEADER *tgaHeaderPtr);
static int CommonRead(Tcl_Interp *interp, tkimg_Stream *handle,
        const char *filename, Tcl_Obj *format,
        Tk_PhotoHandle imageHandle, int destX, int destY,
        int width, int height, int srcX, int srcY);
static int CommonWrite(Tcl_Interp *interp,
        const char *filename, Tcl_Obj *format,
        tkimg_Stream *handle, Tk_PhotoImageBlock *blockPtr);

static int ParseFormatOpts(
    Tcl_Interp *interp,
    Tcl_Obj *format,
    FMTOPT *opts,
    int mode
) {
    static const char *const readOptions[] = {
        "-verbose", "-withalpha", "-matte", NULL
    };
    enum readEnums {
        R_VERBOSE, R_WITHALPHA, R_MATTE
    };
    static const char *const writeOptions[] = {
        "-verbose", "-compression", "-withalpha", "-matte", NULL
    };
    enum writeEnums {
        W_VERBOSE, W_COMPRESSION, W_WITHALPHA, W_MATTE
    };
    Tcl_Size objc, i;
    int index;
    char *optionStr;
    Tcl_Obj **objv;
    int boolVal;

    /* Initialize options with default values. */
    opts->verbose     = 0;
    opts->compression = TGA_RGB_COMP;
    opts->withalpha   = 1;

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
                        opts->compression = TGA_RGB_UNCOMP;
                    } else if (!strncmp (optionStr, "rle", strlen ("rle"))) {
                        opts->compression = TGA_RGB_COMP;
                    } else {
                        Tcl_SetObjResult(interp, Tcl_ObjPrintf(
                            "Invalid compression mode \"%s\": must be none or rle.",
                            optionStr));
                        return TCL_ERROR;
                    }
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
    return TCL_OK;
}

static int FileMatch(
    Tcl_Channel chan,
    const char *filename,
    Tcl_Obj *format,
    int *widthPtr,
    int *heightPtr,
    Tcl_Interp *interp
) {
    tkimg_Stream handle;
    memset(&handle, 0, sizeof (tkimg_Stream));

    tkimg_ReadInitFile(&handle, chan);

    return CommonMatch(&handle, widthPtr, heightPtr, NULL);
}

static int StringMatch(
    Tcl_Obj *dataObj,
    Tcl_Obj *format,
    int *widthPtr,
    int *heightPtr,
    Tcl_Interp *interp
) {
    tkimg_Stream handle;
    memset(&handle, 0, sizeof (tkimg_Stream));

    if (!tkimg_ReadInitString(&handle, dataObj)) {
        return 0;
    }
    return CommonMatch(&handle, widthPtr, heightPtr, NULL);
}

static int CommonMatch(
    tkimg_Stream *handle,
    int *widthPtr,
    int *heightPtr,
    TGAHEADER *tgaHeaderPtr
) {
    TGAHEADER th;

    if (!readHeader (handle, &th)) {
        return 0;
    }

    *widthPtr  = th.xsize;
    *heightPtr = th.ysize;
    if (tgaHeaderPtr) {
        *tgaHeaderPtr = th;
    }
    return 1;
}

static int FileRead(
    Tcl_Interp *interp,         /* Interpreter to use for reporting errors. */
    Tcl_Channel chan,           /* The image channel, open for reading. */
    const char *filename,       /* The name of the image file. */
    Tcl_Obj *format,            /* User-specified format object, or NULL. */
    Tk_PhotoHandle imageHandle, /* The photo image to write into. */
    int destX, int destY,       /* Coordinates of top-left pixel in
                                 * photo image to be written to. */
    int width, int height,      /* Dimensions of block of photo image to
                                 * be written to. */
    int srcX, int srcY          /* Coordinates of top-left pixel to be used
                                 * in image being read. */
) {
    tkimg_Stream handle;
    memset(&handle, 0, sizeof (tkimg_Stream));

    tkimg_ReadInitFile(&handle, chan);

    return CommonRead(interp, &handle, filename, format, imageHandle,
                      destX, destY, width, height, srcX, srcY);
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
    tkimg_Stream handle;
    memset(&handle, 0, sizeof (tkimg_Stream));

    if (!tkimg_ReadInitString(&handle, dataObj)) {
        return 0;
    }
    return CommonRead(interp, &handle, "InlineData", format, imageHandle,
                      destX, destY, width, height, srcX, srcY);
}

static int CommonRead(
    Tcl_Interp *interp,         /* Interpreter to use for reporting errors. */
    tkimg_Stream *handle,        /* The image file, open for reading. */
    const char *filename,       /* The name of the image file. */
    Tcl_Obj *format,            /* User-specified format object, or NULL. */
    Tk_PhotoHandle imageHandle, /* The photo image to write into. */
    int destX, int destY,       /* Coordinates of top-left pixel in
                                 * photo image to be written to. */
    int width, int height,      /* Dimensions of block of photo image to
                                 * be written to. */
    int srcX, int srcY          /* Coordinates of top-left pixel to be used
                                 * in image being read. */
) {
    Tk_PhotoImageBlock block;
    Int y, nchan;
    int fileWidth, fileHeight;
    int stopY, outY, outWidth, outHeight;
    TGAFILE tf;
    FMTOPT opts;
    char errMsg[256];
    int result = TCL_OK;

    memset (&tf, 0, sizeof (TGAFILE));
    if (ParseFormatOpts (interp, format, &opts, IMG_READ) == TCL_ERROR) {
        return TCL_ERROR;
    }

    if (!CommonMatch(handle, &fileWidth, &fileHeight, &tf.th)) {
        return TCL_ERROR;
    }
    if (opts.verbose) {
        printImgInfo (&tf.th, filename, "Reading image:");
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

    if (IS_COMPRESSED(tf.th.imgtyp)) {
        tkimg_EnableReadBuffer(handle, 1);
    }

    tf.scanmode = TGA_MODE_DIFF;
    nchan = NCHAN(tf.th.pixsize);

    tf.pixbuf = (UByte *) attemptckalloc (fileWidth * nchan);
    if (!tf.pixbuf) {
        tkimg_snprintf(errMsg, 256, "Can't allocate memory of size %d", fileWidth * nchan);
        Tcl_AppendResult(interp, errMsg, (char *)NULL);
        tkimg_EnableReadBuffer (handle, 0);
        return TCL_ERROR;
    }

    block.pixelSize = nchan;
    block.pitch = fileWidth * nchan;
    block.width = outWidth;
    block.height = 1;
    block.offset[0] = 0;
    block.offset[1] = 1;
    block.offset[2] = 2;
    if (nchan < 4) {
        opts.withalpha = 0;
    }
    block.offset[3] = opts.withalpha? 3: 0;
    block.pixelPtr = tf.pixbuf + srcX * nchan;

    stopY = srcY + outHeight;

    if (ENC_TOP_BOTTOM (tf.th.imgdes)) {
        outY = destY;
        for (y=0; y<stopY; y++) {
            tgaReadScan(interp, handle, &tf, y);
            if (y >= srcY) {
                if (Tk_PhotoPutBlock(interp, imageHandle, &block, destX, outY, width, 1,
                    opts.withalpha? TK_PHOTO_COMPOSITE_OVERLAY: TK_PHOTO_COMPOSITE_SET) == TCL_ERROR) {
                    result = TCL_ERROR;
                    break;
                }
                outY++;
            }
        }
    } else {
        outY = destY + outHeight - 1;
        for (y=fileHeight-1; y>=0; y--) {
            tgaReadScan(interp, handle, &tf, y);
            if (y >= srcY && y < stopY) {
                if (Tk_PhotoPutBlock(interp, imageHandle, &block, destX, outY, width, 1,
                    opts.withalpha? TK_PHOTO_COMPOSITE_OVERLAY: TK_PHOTO_COMPOSITE_SET) == TCL_ERROR) {
                    result = TCL_ERROR;
                    break;
                }
                outY--;
            }
        }
    }
    tgaClose(&tf);
    tkimg_EnableReadBuffer(handle, 0);
    return result;
}

static int FileWrite(
    Tcl_Interp *interp,
    const char *filename,
    Tcl_Obj *format,
    Tk_PhotoImageBlock *blockPtr
) {
    Tcl_Channel chan;
    int result;
    tkimg_Stream handle;
    memset(&handle, 0, sizeof (tkimg_Stream));

    chan = tkimg_OpenFileChannel(interp, filename, "w");
    if (!chan) {
        return TCL_ERROR;
    }

    tkimg_WriteInitFile(&handle, chan);

    result = CommonWrite(interp, filename, format, &handle, blockPtr);
    if (Tcl_Close(interp, chan) == TCL_ERROR) {
        return TCL_ERROR;
    }
    return result;
}

static int StringWrite(
    Tcl_Interp *interp,
    Tcl_Obj *format,
    Tk_PhotoImageBlock *blockPtr
) {
    int result;
    tkimg_Stream handle;
    memset(&handle, 0, sizeof (tkimg_Stream));

    tkimg_WriteInitString(&handle);
    result = CommonWrite(interp, "InlineData", format, &handle, blockPtr);

    if (result == TCL_OK) {
        Tcl_SetObjResult(interp, handle.byteObj);
    }
    return result;
}

static int CommonWrite(
    Tcl_Interp *interp,
    const char *filename,
    Tcl_Obj *format,
    tkimg_Stream *handle,
    Tk_PhotoImageBlock *blockPtr
) {
    Int     x, y, nchan;
    Int     redOffset, greenOffset, blueOffset, alphaOffset;
    UByte   *pixelPtr, *rowPixPtr;
    TGAFILE tf;
    FMTOPT opts;
    char errMsg[256];

    memset(&tf, 0, sizeof(TGAFILE));
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

    nchan = ((opts.withalpha && alphaOffset)? 4: 3);

    tf.redScan   = (UByte *) attemptckalloc(blockPtr->width);
    tf.greenScan = (UByte *) attemptckalloc(blockPtr->width);
    tf.blueScan  = (UByte *) attemptckalloc(blockPtr->width);
    tf.alphaScan = (UByte *) attemptckalloc(blockPtr->width);
    if (!tf.redScan || !tf.greenScan || !tf.blueScan || !tf.alphaScan) {
        tkimg_snprintf(errMsg, 256, "Can't allocate memory of size %d", blockPtr->width);
        Tcl_AppendResult(interp, errMsg, (char *)NULL);
        return TCL_ERROR;
    }

    /* Fill the targa header struct and write the header to the channel. */
    tf.th.pixsize = nchan * 8;
    tf.th.xsize = blockPtr->width;
    tf.th.ysize = blockPtr->height;
    tf.th.imgdes = (1 << 5);            /* Top->Bottom, Left->Right encoding */
    tf.th.imgtyp = opts.compression;    /* Uncompressed or RLE-compressed */

    if (!writeHeader(handle, &tf.th)) {
        return TCL_ERROR;
    }

    rowPixPtr = blockPtr->pixelPtr + blockPtr->offset[0];
    for (y = 0; y < blockPtr->height; y++) {
        tf.red   = tf.redScan;
        tf.green = tf.greenScan;
        tf.blue  = tf.blueScan;
        tf.alpha = tf.alphaScan;
        pixelPtr = rowPixPtr;
        for (x = 0; x < blockPtr->width; x++) {
            *(tf.red++)   = pixelPtr[redOffset];
            *(tf.green++) = pixelPtr[greenOffset];
            *(tf.blue++)  = pixelPtr[blueOffset];
            if (nchan == 4) {
                /* Have a alpha channel and write it. */
                *(tf.alpha++) = pixelPtr[alphaOffset];
            }
            pixelPtr += blockPtr->pixelSize;
        }
        if (!tgaWriteScan(interp, handle, &tf, y, nchan)) {
            tgaClose (&tf);
            return TCL_ERROR;
        }
        rowPixPtr += blockPtr->pitch;
    }
    if (opts.verbose) {
        printImgInfo(&tf.th, filename, "Saving image:");
    }
    tgaClose (&tf);
    return TCL_OK;
}
