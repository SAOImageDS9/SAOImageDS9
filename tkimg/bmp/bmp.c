/*
 * bmp.c
 *
 * BMP photo image type, Tcl/Tk package.
 *
 * A photo image handler for Windows bitmap image format.
 *
 * For a list of available format options see function ParseFormatOpts
 * and the documentation img-bmp.
 *
 * Copyright (c) 1995-2024 Jan Nijtmans    <nijtmans@users.sourceforge.net>
 * Copyright (c) 2002-2024 Andreas Kupries <andreas_kupries@users.sourceforge.net>
 * Copyright (c) 2003-2024 Paul Obermeier  <obermeier@users.sourceforge.net>
 *
 * See the file "license.terms" for information on usage and redistribution
 * of this file, and for a DISCLAIMER OF ALL WARRANTIES.
 *
 */

#include <stdio.h>
#include <string.h>
#include <math.h>

/*
 * Generic initialization code, parameterized via CPACKAGE and PACKAGE.
 */

/* Force usage of Tk_CreatePhotoImageFormatVersion3
   supporting image matadata introduced in Tk8.7.
   Must be specified before inclusion of init.c.
*/
#define USE_FORMAT_VERSION3 1

#include "init.c"

/* #define DEBUG_LOCAL 1 */

/* Compression types */
#define BI_RGB          0
#define BI_RLE8         1
#define BI_RLE4         2
#define BI_BITFIELDS    3

/* Structure for reading bit masks for compression type BI_BITFIELDS */
typedef struct {
  unsigned int mask;
  unsigned int shiftin;
  unsigned int shiftout;
} BitmapChannel;

/* Format options structure for use with ParseFormatOpts */
typedef struct {
    int    verbose;      /* Read/Write option -verbose */
    double xres;         /* Write option -resolution or -xresolution */
    double yres;         /* Write option -resolution or -yresolution */
} FMTOPT;

/*
 * Prototypes for local procedures defined in this file:
 */

static int CommonMatch(
    tkimg_Stream *handle,
    int *widthPtr, int *heightPtr,
    double *xdpiPtr, double *ydpiPtr,
    unsigned char **colorMap,
    int *numBits, int *numCols,
    int *comp, unsigned int *mask
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

static void putint(tkimg_Stream *handle, int i);

static void printImgInfo(
    int width, int height,
    double xdpi, double ydpi,
    int numBits,
    const char *fileName,
    const char *msg
) {
    Tcl_Channel outChan;
    char str[256];
    int xdpiInt, ydpiInt;

    outChan = Tcl_GetStdChannel (TCL_STDOUT);
    if (!outChan) {
        return;
    }

    xdpiInt = (int)(xdpi + 0.5);
    ydpiInt = (int)(ydpi + 0.5);
    tkimg_snprintf(str, 256, "%s %s\n", msg, fileName);                          IMGOUT;
    tkimg_snprintf(str, 256, "\tSize in pixel   : %d x %d\n", width, height);    IMGOUT;
    tkimg_snprintf(str, 256, "\tDots per inch   : %d x %d\n", xdpiInt, ydpiInt); IMGOUT;
    tkimg_snprintf(str, 256, "\tBits per pixel  : %d\n", numBits);               IMGOUT;
    Tcl_Flush(outChan);
}

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
        "-verbose", "-resolution", "-xresolution", "-yresolution", NULL
    };
    enum writeEnums {
        W_VERBOSE, W_RESOLUTION, W_XRESOLUTION, W_YRESOLUTION
    };
    Tcl_Size objc, i;
    int index;
    char *optionStr;
    Tcl_Obj **objv;
    int boolVal;
    double doubleVal;

    /* Initialize options with default values. */
    opts->verbose = 0;
    opts->xres    = (double)IMG_DEFAULT_DPI;
    opts->yres    = (double)IMG_DEFAULT_DPI;

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
            }
        }
    }
    return TCL_OK;
}

/*
 * Caution: Match functions return 1 on success and 0 on failure,
 * while the Read and Write functions return a standard Tcl return
 * value: TCL_OK is 0, Tcl_ERROR is 1 !
 */
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
    tkimg_Stream handle;
    memset(&handle, 0, sizeof (tkimg_Stream));

    tkimg_ReadInitFile(&handle, chan);

    retVal = CommonMatch(&handle, widthPtr, heightPtr, &xdpi, &ydpi,
                        NULL, NULL, NULL, NULL, NULL);
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
    int retVal;
    double xdpi, ydpi;
    tkimg_Stream handle;
    memset(&handle, 0, sizeof (tkimg_Stream));

    if (!tkimg_ReadInitString(&handle, dataObj)) {
        return 0;
    }
    retVal = CommonMatch(&handle, widthPtr, heightPtr, &xdpi, &ydpi,
                        NULL, NULL, NULL, NULL, NULL);
    if (retVal && xdpi >= 0.0 && ydpi >= 0.0) {
        if (TCL_ERROR == tkimg_SetResolution( metadataOut, xdpi, ydpi)) {
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

    return CommonRead(
           interp, &handle, fileName, format, imageHandle,
           destX, destY, width, height, srcX, srcY, metadataOut);
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
           destX, destY, width, height, srcX, srcY, metadataOut);
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

    chan = tkimg_OpenFileChannel(interp, fileName, "w");
    if (!chan) {
        return TCL_ERROR;
    }

    tkimg_WriteInitFile(&handle, chan);

    result = CommonWrite(interp, fileName, format, &handle, blockPtr, metadataIn);
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
    result = CommonWrite(interp, "InlineData", format, &handle, blockPtr, metadataIn);

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

static unsigned int getUInt32(unsigned char *buf)
{
    return (buf[0] | buf[1] << 8 | buf[2] << 16 | (unsigned int)buf[3] << 24);
}

static unsigned int getUInt16(unsigned char *buf)
{
    return (buf[0] | buf[1] << 8);
}

static void GetChannelMasks(
    unsigned int *intMask,
    BitmapChannel *masks
) {
    unsigned int mask;
    int i, nbits, offset, bit;

    for (i=0; i<3; i++) {
        mask = getUInt32((unsigned char *) &intMask[i]);
        masks[i].mask = mask;
        nbits = 0;
        offset = -1;
        for (bit=0; bit<32; bit++) {
            if (mask & 1) {
                nbits++;
                if (offset == -1) {
                  offset = bit;
                }
            }
            mask = mask >> 1;
        }
        masks[i].shiftin = offset;
        masks[i].shiftout = 8 - nbits;
    }
}

/*
 * Helper functions for the entry points. Work horses.
 */

static int CommonMatch(
    tkimg_Stream *handle,
    int *widthPtr, int *heightPtr,
    double *xdpiPtr, double *ydpiPtr,
    unsigned char **colorMap,
    int *numBits, int *numCols, int *comp,
    unsigned int *mask
) {
    unsigned char buf[50];
    int c,i, compression, nBits, clrUsed, offBits;
    int xres = 0, yres = 0;
    int width = 0, height = 0;

    if ((tkimg_Read(handle, (char *) buf, 2) != 2)
            || (strncmp("BM", (char *) buf, 2) != 0)
            || (tkimg_Read(handle, (char *) buf, 24) != 24)
            || buf[13] || buf[14] || buf[15]) {
        return 0;
    }

    offBits = ((unsigned int)buf[11]<<24) + (buf[10]<<16) + (buf[9]<<8) + buf[8];
    c = buf[12];
    if ((c == 40) || (c == 64)) {
        width  = ((unsigned int)buf[19]<<24) + (buf[18]<<16) + (buf[17]<<8) + buf[16];
        height = ((unsigned int)buf[23]<<24) + (buf[22]<<16) + (buf[21]<<8) + buf[20];
        if (tkimg_Read(handle, (char *) buf, 24) != 24) {
            return 0;
        }
        nBits = buf[2];
        compression = buf[4];
        xres = (buf[15]<<24) + (buf[14]<<16) + (buf[13]<<8) + buf[12];
        yres = (buf[19]<<24) + (buf[18]<<16) + (buf[17]<<8) + buf[16];
        clrUsed = (buf[21]<<8) + buf[20];
        offBits -= c+14;
    } else if (c == 12) {
        width  = (buf[17]<<8) + buf[16];
        height = (buf[19]<<8) + buf[18];
        nBits = buf[22];
        compression = BI_RGB;
        clrUsed = 0;
    } else {
        return 0;
    }
    if (width <= 0 || height <= 0) {
        return 0;
    }
    if (nBits <= 0) {
        return 0;
    }

    if (colorMap) {
        if (c > 36) {
            if (tkimg_Read(handle, (char *) buf, c - 36) != (Tcl_Size)c - 36 )
                return 0;
        }
        if (compression == BI_BITFIELDS) {
            /* Read the channel masks. */
            if (tkimg_Read(handle, (char *) buf, 3*4) != 3*4 )
                return 0;
            if (mask) {
                mask[0] = getUInt32((unsigned char *) &buf[0]);
                mask[1] = getUInt32((unsigned char *) &buf[4]);
                mask[2] = getUInt32((unsigned char *) &buf[8]);
            }
            offBits -= 3*4;
        }
        if (!clrUsed && nBits < 24) {
            clrUsed = 1 << nBits;
        }
        if (nBits<16) {
            unsigned char colbuf[4], *ptr;
            offBits -= (3+(c!=12)) * clrUsed;
            *colorMap = ptr = (unsigned char *) attemptckalloc(3*clrUsed);
            if (ptr == NULL) {
                return 0;
            }
            for (i = 0; i < clrUsed; i++) {
                if (tkimg_Read(handle, (char *) colbuf, 3+(c!=12)) != 3+(c!=12))
                    return 0;
                *ptr++ = colbuf[0]; *ptr++ = colbuf[1]; *ptr++ = colbuf[2];
#ifdef DEBUG_LOCAL
                printf("color %d: %d %d %d\n", i, colbuf[2], colbuf[1], colbuf[0]);
#endif
            }
        }
        while (offBits>28) {
            offBits -= 28;
            if (tkimg_Read(handle, (char *) buf, 28) != 28)
                return 0;
        }
        if (offBits > 0) {
            if (tkimg_Read(handle, (char *) buf, offBits) != (Tcl_Size)offBits)
                return 0;
        }
        if (numCols) {
            *numCols = clrUsed;
        }
    }
    *xdpiPtr = (int)(xres * 0.0254 + 0.5);
    *ydpiPtr = (int)(yres * 0.0254 + 0.5);
    if (*xdpiPtr == 0.0) {
        *xdpiPtr = -1.0;
    }
    if (*ydpiPtr == 0.0) {
        *ydpiPtr = -1.0;
    }
    if (numBits) {
        *numBits = nBits;
    }
    if (comp) {
        *comp = compression;
    }
    *widthPtr  = width;
    *heightPtr = height;
    return 1;
}

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
) {
    Tk_PhotoImageBlock block;
    int numBits, bytesPerLine, numCols = 0, comp, x, y;
    double xdpi, ydpi;
    int fileWidth, fileHeight;
    unsigned char *colorMap = NULL;
    unsigned int intMask[3];
    BitmapChannel masks[3];
    char buf[20];
    unsigned char *line = NULL, *expline = NULL;
    unsigned short rgb;
    FMTOPT opts;

    if (ParseFormatOpts(interp, format, &opts, IMG_READ) == TCL_ERROR) {
        return TCL_ERROR;
    }

    if (! CommonMatch(handle, &fileWidth, &fileHeight, &xdpi, &ydpi,
                      &colorMap, &numBits, &numCols, &comp, intMask)) {
        goto error;
    }
    if (xdpi >= 0.0 && ydpi >= 0.0) {
        if (TCL_ERROR == tkimg_SetResolution( metadataOut, xdpi, ydpi)) {
            goto error;
        }
    }

    if (opts.verbose) {
        printImgInfo (fileWidth, fileHeight, xdpi, ydpi, numBits, fileName, "Reading image:");
    }

    if (numBits == 16) {
        if (comp == BI_BITFIELDS) {
            GetChannelMasks(intMask, masks);
        } else {
            masks[0].mask     = 0x7c00;
            masks[0].shiftin  = 10;
            masks[0].shiftout = 3;
            masks[1].mask     = 0x03e0;
            masks[1].shiftin  = 5;
            masks[1].shiftout = 3;
            masks[2].mask     = 0x001f;
            masks[2].shiftin  = 0;
            masks[2].shiftout = 3;
        }
    }

#ifdef DEBUG_LOCAL
    printf("reading %d-bit BMP %dx%d\n", numBits, width, height);
#endif
    if (comp == BI_RLE8 || comp == BI_RLE4) {
        tkimg_EnableReadBuffer(handle, 1);
    }

    if (Tk_PhotoExpand(interp, imageHandle, destX + width, destY + height) == TCL_ERROR) {
        goto error;
    }

    bytesPerLine = ((numBits * fileWidth + 31)/32)*4;

#ifdef DEBUG_LOCAL
    printf("bytesPerLine = %d numBits=%d (%dx%d)\n", bytesPerLine, numBits, width, height);
#endif
    block.pixelSize = 3;
    block.pitch = width * 3;
    block.width = width;
    block.height = 1;
    block.offset[0] = 2;
    block.offset[1] = 1;
    block.offset[2] = 0;
    block.offset[3] = block.offset[0];

    if (comp == BI_RGB || comp == BI_BITFIELDS) {       /* No compression */
        line = (unsigned char *) attemptckalloc(bytesPerLine);
        if (line == NULL) {
            Tcl_AppendResult (interp, "Unable to allocate memory for image data.", (char *) NULL);
            goto error;
        }
        for(y=srcY+height; y<fileHeight; y++) {
            if (bytesPerLine != tkimg_Read(handle, (char *)line, bytesPerLine)) {
                Tcl_AppendResult (interp, "Unable to read pixel row.", (char *) NULL);
                goto error;
            }
        }
        switch (numBits) {
            case 32:
                block.pixelPtr = expline = (unsigned char *) attemptckalloc(3*width);
                if (expline == NULL) {
                    Tcl_AppendResult (interp, "Unable to allocate memory for image data.", (char *) NULL);
                    goto error;
                }
                for( y = height-1; y>=0; y--) {
                    if (bytesPerLine != tkimg_Read(handle, (char *)line, bytesPerLine)) {
                        Tcl_AppendResult (interp, "Unable to read pixel row.", (char *) NULL);
                        goto error;
                    }
                    for (x = srcX; x < (srcX+width); x++) {
                        *expline++ = line[x*4 + 0];
                        *expline++ = line[x*4 + 1];
                        *expline++ = line[x*4 + 2];
                    }
                    if (Tk_PhotoPutBlock(interp, imageHandle, &block,
                            destX, destY+y, width, 1, TK_PHOTO_COMPOSITE_SET) == TCL_ERROR) {
                        goto error;
                    }
                    expline = block.pixelPtr;
                }
                break;
            case 24:
                block.pixelPtr = line + srcX*3;
                for( y = height-1; y>=0; y--) {
                    if (bytesPerLine != tkimg_Read(handle, (char *)line, bytesPerLine)) {
                        Tcl_AppendResult (interp, "Unable to read pixel row.", (char *) NULL);
                        goto error;
                    }
                    if (Tk_PhotoPutBlock(interp, imageHandle, &block,
                            destX, destY+y, width, 1, TK_PHOTO_COMPOSITE_SET) == TCL_ERROR) {
                        goto error;
                    }
                }
                break;
            case 16:
                block.pixelPtr = expline = (unsigned char *) attemptckalloc(3*width);
                if (expline == NULL) {
                    Tcl_AppendResult (interp, "Unable to allocate memory for image data.", (char *) NULL);
                    goto error;
                }
                for( y = height-1; y>=0; y--) {
                    if (bytesPerLine != tkimg_Read(handle, (char *)line, bytesPerLine)) {
                        Tcl_AppendResult (interp, "Unable to read pixel row.", (char *) NULL);
                        goto error;
                    }
                    for (x = srcX; x < (srcX+width); x++) {
                        rgb = getUInt16 (&line[x*2]);
                        *expline++ = ((rgb & masks[2].mask) >> masks[2].shiftin) << masks[2].shiftout;
                        *expline++ = ((rgb & masks[1].mask) >> masks[1].shiftin) << masks[1].shiftout;
                        *expline++ = ((rgb & masks[0].mask) >> masks[0].shiftin) << masks[0].shiftout;
                    }
                    if (Tk_PhotoPutBlock(interp, imageHandle, &block,
                            destX, destY+y, width, 1, TK_PHOTO_COMPOSITE_SET) == TCL_ERROR) {
                        goto error;
                    }
                    expline = block.pixelPtr;
                }
                break;
            case 8:
                block.pixelPtr = expline = (unsigned char *) attemptckalloc(3*width);
                if (expline == NULL) {
                    Tcl_AppendResult (interp, "Unable to allocate memory for image data.", (char *) NULL);
                    goto error;
                }
                for( y = height-1; y>=0; y--) {
                    if (bytesPerLine != tkimg_Read(handle, (char *)line, bytesPerLine)) {
                        Tcl_AppendResult (interp, "Unable to read pixel row.", (char *) NULL);
                        goto error;
                    }
                    for (x = srcX; x < (srcX+width); x++) {
                        if (line[x] > numCols) {
                            Tcl_AppendResult(interp, "Color index exceeds color map size", (char *) NULL);
                            goto error;
                        }
                        memcpy(expline, colorMap + 3*line[x], 3);
                        expline += 3;
                    }
                    if (Tk_PhotoPutBlock(interp, imageHandle, &block,
                            destX, destY+y, width, 1, TK_PHOTO_COMPOSITE_SET) == TCL_ERROR) {
                        goto error;
                    }
                    expline = block.pixelPtr;
                }
                break;
            case 4:
                block.pixelPtr = expline = (unsigned char *) attemptckalloc(3*width);
                if (expline == NULL) {
                    Tcl_AppendResult (interp, "Unable to allocate memory for image data.", (char *) NULL);
                    goto error;
                }
                for( y = height-1; y>=0; y--) {
                    int c;
                    if (bytesPerLine != tkimg_Read(handle, (char *)line, bytesPerLine)) {
                        Tcl_AppendResult (interp, "Unable to read pixel row.", (char *) NULL);
                        goto error;
                    }
                    for (x = srcX; x < (srcX+width); x++) {
                        if (x&1) {
                            c = line[x/2] & 0x0f;
                        } else {
                            c = line[x/2] >> 4;
                        }
                        if (c > numCols) {
                            Tcl_AppendResult(interp, "Color index exceeds color map size", (char *) NULL);
                            goto error;
                        }
                        memcpy(expline, colorMap + 3*c, 3);
                        expline += 3;
                    }
                    if (Tk_PhotoPutBlock(interp, imageHandle, &block,
                            destX, destY+y, width, 1, TK_PHOTO_COMPOSITE_SET) == TCL_ERROR) {
                        goto error;
                    }
                    expline = block.pixelPtr;
                }
                break;
            case 1:
                block.pixelPtr = expline = (unsigned char *) attemptckalloc(3*width);
                if (expline == NULL) {
                    Tcl_AppendResult (interp, "Unable to allocate memory for image data.", (char *) NULL);
                    goto error;
                }
                for( y = height-1; y>=0; y--) {
                    int c;
                    if (bytesPerLine != tkimg_Read(handle, (char *)line, bytesPerLine)) {
                        Tcl_AppendResult (interp, "Unable to read pixel row.", (char *) NULL);
                        goto error;
                    }
                    for (x = srcX; x < (srcX+width); x++) {
                        c = (line[x/8] >> (7-(x%8))) & 1;
                        if (c > numCols) {
                            Tcl_AppendResult(interp, "Color index exceeds color map size", (char *) NULL);
                            goto error;
                        }
                        memcpy(expline, colorMap + 3*c, 3);
                        expline += 3;
                    }
                    if (Tk_PhotoPutBlock(interp, imageHandle, &block,
                            destX, destY+y, width, 1, TK_PHOTO_COMPOSITE_SET) == TCL_ERROR) {
                        goto error;
                    }
                    expline = block.pixelPtr;
                }
                break;
            default:
                tkimg_snprintf(buf, 20, "%d", numBits);
                Tcl_AppendResult(interp, buf,
                        "-bits BMP file not (yet) supported", (char *) NULL);
                goto error;
        }
    } else {            /* RLE Compression */
        int i, j, c;
        unsigned char howMuch;
        unsigned char rleBuf[2];
        unsigned char rleDelta[2];
        unsigned char val;

        x = srcX;
        y = fileHeight - 1;
        block.pixelPtr = expline = (unsigned char *) attemptckalloc (3*fileWidth);
        if (expline == NULL) {
            Tcl_AppendResult (interp, "Unable to allocate memory for image data.", (char *) NULL);
            goto error;
        }

        if (numBits != 4 && numBits != 8) {
            tkimg_snprintf (buf, 20, "%d", numBits);
            Tcl_AppendResult(interp, "RLE compression not supported for ",
                              buf, "-bit pixel values", (char *) NULL);
            goto error;
        }

        while (1) {
            if (2 != tkimg_Read(handle, (char *)rleBuf, 2)) {
                Tcl_AppendResult(interp, "Unexpected EOF", (char *) NULL);
                goto error;
            }
#ifdef DEBUG_LOCAL
            printf("In: (%d %X) --> \n", rleBuf[0], rleBuf[1]);
#endif
            if (rleBuf[0] != 0) {
                howMuch = rleBuf[0];
                switch (numBits) {
                    case 8: {
                        for (i=0; i<howMuch; i++, x++) {
                            if (rleBuf[1] > numCols) {
                                Tcl_AppendResult(interp, "Color index exceeds color map size", (char *) NULL);
                                goto error;
                            }
                            memcpy (expline, colorMap + 3*rleBuf[1], 3);
                            if (x>=srcX+width-1) {
                                break;
                            }
                            expline += 3;
                        }
                        break;
                    }
                    case 4: {
                        for (i=0; i<howMuch; i++, x++) {
                            if (x&1) {
                                c = rleBuf[1] & 0x0f;
                            } else {
                                c = rleBuf[1] >> 4;
                            }
                            if (c > numCols) {
                                Tcl_AppendResult(interp, "Color index exceeds color map size", (char *) NULL);
                                goto error;
                            }
                            memcpy(expline, colorMap + 3*c, 3);
                            if (x>=srcX+width-1) {
                                break;
                            }
                            expline += 3;
                        }
                        break;
                    }
                }
            } else {
                if (rleBuf[1]>2) {
                    /* uncompressed record */
                    howMuch = rleBuf[1];
#ifdef DEBUG_LOCAL
                    printf ("Uncompressed: %d\n", howMuch); fflush (stdout);
#endif
                    switch (numBits) {
                        case 8: {
                            for (i=0; i<howMuch; i++, x++) {
                                if (1 != tkimg_Read(handle, (char *)&val, 1)) {
                                    Tcl_AppendResult(interp, "Unexpected EOF", (char *)NULL);
                                    goto error;
                                }
                                if (val > numCols) {
                                    Tcl_AppendResult(interp, "Color index exceeds color map size", (char *) NULL);
                                    goto error;
                                }
                                memcpy(expline, colorMap + 3*val, 3);
                                if (x>=srcX+width-1) {
                                    break;
                                }
                                expline += 3;
                            }
                            break;
                        }
                        case 4: {
                            for (i=0; i<howMuch; i+=2) {
                                if (1 != tkimg_Read(handle, (char *)&val, 1)) {
                                    Tcl_AppendResult(interp, "Unexpected EOF", (char *)NULL);
                                    goto error;
                                }
                                for (j=0; j<2; j++, x++) {
                                    if (x&1) {
                                        c = val & 0x0f;
                                    } else {
                                        c = val >> 4;
                                    }
                                    if (c > numCols) {
                                        Tcl_AppendResult(interp, "Color index exceeds color map size", (char *) NULL);
                                        goto error;
                                    }
                                    memcpy(expline, colorMap + 3*c, 3);
                                    if (x>=srcX+width-1) {
                                        break;
                                    }
                                    expline += 3;
                                }
                            }
                            break;
                        }
                    }

                    if ((howMuch % 2) && (numBits==4)) {
                        howMuch++;
                    }

                    if ((howMuch / (8 / numBits)) % 2) {
                        if (1 != tkimg_Read(handle, (char *)&val, 1)) {
                            Tcl_AppendResult(interp, "Unexpected EOF", (char *)NULL);
                            goto error;
                        }
                    }
                } else if (rleBuf[1]==0) {
                    /* End of line */
#ifdef DEBUG_LOCAL
                    printf("New line: y=%d x=%d\n", y, x); fflush(stdout);
#endif
                    if (destY+y > fileHeight) {
                        Tcl_AppendResult (interp, "Decoding inconsistency", (char *)NULL);
                        goto error;
                    }
                    if (Tk_PhotoPutBlock(interp, imageHandle, &block, destX, destY+y,
                            width, 1, TK_PHOTO_COMPOSITE_SET) == TCL_ERROR) {
                        goto error;
                    }
                    y--;
                    x = srcX;
                    expline = block.pixelPtr;
                    if (y < 0) {
                        Tcl_AppendResult (interp, "Decoding inconsistency", (char *)NULL);
                        goto error;
                    }
                } else if (rleBuf[1]==1) {
                    /* End of bitmap */
                    break;
                } else if (rleBuf[1]==2) {
                    /* Deltarecord */
#ifdef DEBUG_LOCAL
                    printf("Deltarecord\n"); fflush(stdout);
#endif
                    if (2 != tkimg_Read(handle, (char *) rleDelta, 2)) {
                        Tcl_AppendResult(interp, "Unexpected EOF", (char *) NULL);
                        goto error;
                    }
                    x += rleDelta[0];
                    y += rleDelta[1];
                }
            }
        }
    }

    tkimg_EnableReadBuffer(handle, 0);
    if (colorMap) {
        ckfree((char *) colorMap);
    }
    if (line) {
        ckfree((char *) line);
    }
    if (expline) {
        ckfree((char *) block.pixelPtr);
    }
    return TCL_OK;

error:
    tkimg_EnableReadBuffer(handle, 0);
    if (colorMap) {
        ckfree((char *) colorMap);
    }
    if (line) {
        ckfree((char *) line);
    }
    if (expline) {
        ckfree((char *) block.pixelPtr);
    }
    return TCL_ERROR;
}

static int CommonWrite(
    Tcl_Interp *interp,
    const char *fileName,
    Tcl_Obj *format,
    tkimg_Stream *handle,
    Tk_PhotoImageBlock *blockPtr,
    Tcl_Obj *metadataIn
) {
    int bperline, nbytes, ncolors, i, x, y, greenOffset, blueOffset, alphaOffset;
    unsigned char *imagePtr, *pixelPtr;
    unsigned char buf[4];
    int colors[256];
    int xres, yres;
    double xdpi, ydpi;
    FMTOPT opts;

    if (ParseFormatOpts(interp, format, &opts, IMG_WRITE) == TCL_ERROR) {
        return TCL_ERROR;
    }

    if (TCL_ERROR == tkimg_GetResolution(interp, metadataIn, &xdpi, &ydpi)) {
        return TCL_ERROR;
    }

    if (opts.xres != IMG_DEFAULT_DPI && opts.yres != IMG_DEFAULT_DPI) {
        /* Resolution values specified in the format string (-xresolution, -yresolution)
           overwrite the values specified with option -metadata. */
        xdpi = opts.xres;
        ydpi = opts.yres;
    }
    xres = (int)(xdpi / 0.0254);
    yres = (int)(ydpi / 0.0254);

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
    ncolors = 0;
    for (y = 0; ncolors <= 256 && y < blockPtr->height; y++) {
        pixelPtr = blockPtr->pixelPtr + y*blockPtr->pitch + blockPtr->offset[0];
        for (x=0; ncolors <= 256 && x<blockPtr->width; x++) {
            int pixel;
            if (alphaOffset && (pixelPtr[alphaOffset] == 0))
                pixel = 0xd9d9d9;
            else
                pixel = (pixelPtr[0]<<16) | (pixelPtr[greenOffset]<<8) | pixelPtr[blueOffset];
            for (i = 0; i < ncolors && pixel != colors[i]; i++);
            if (i == ncolors) {
                if (ncolors < 256) {
                    colors[ncolors] = pixel;
                }
                ncolors++;
            }
            pixelPtr += blockPtr->pixelSize;
        }
    }
    if (ncolors <= 256 && (blockPtr->width * blockPtr->height >= 512)) {
        while (ncolors < 256) {
            colors[ncolors++] = 0;
        }
        nbytes = 1;
    } else {
        nbytes = 3;
        ncolors = 0;
    }

    bperline = ((blockPtr->width  * nbytes + 3) / 4) * 4;

    tkimg_Write(handle, "BM", 2);
    putint(handle, 54 + (ncolors*4) + bperline * blockPtr->height);
    putint(handle, 0);
    putint(handle, 54 + (ncolors*4));
    putint(handle, 40);
    putint(handle, blockPtr->width);
    putint(handle, blockPtr->height);
    putint(handle, 1 + (nbytes<<19));
    putint(handle, 0);
    putint(handle, bperline * blockPtr->height);
    putint(handle, xres);
    putint(handle, yres);
    putint(handle, ncolors);
    putint(handle, ncolors);

    for (i = 0; i < ncolors ; i++) {
        putint(handle, colors[i]);
    }

    bperline -= blockPtr->width * nbytes;

    imagePtr =  blockPtr->pixelPtr + blockPtr->offset[0]
            + blockPtr->height * blockPtr->pitch;
    for (y = 0; y < blockPtr->height; y++) {
        pixelPtr = imagePtr -= blockPtr->pitch;
        for (x=0; x<blockPtr->width; x++) {
            if (ncolors) {
                int pixel;
                if (alphaOffset && (pixelPtr[alphaOffset] == 0))
                    pixel = 0xd9d9d9;
                else
                    pixel = (pixelPtr[0]<<16)|(pixelPtr[greenOffset]<<8)|pixelPtr[blueOffset];
                for (i = 0; i < ncolors && pixel != colors[i]; i += 1);
                buf[0] = i;
            } else if (alphaOffset && (pixelPtr[alphaOffset] == 0)) {
                buf[0] = buf[1] = buf[2] = 0xd9;
            } else {
                buf[0] = pixelPtr[blueOffset];
                buf[1] = pixelPtr[greenOffset];
                buf[2] = pixelPtr[0];
            }
            tkimg_Write(handle, (char *) buf, nbytes);
            pixelPtr += blockPtr->pixelSize;
        }
        if (bperline) {
            tkimg_Write(handle, "\0\0\0", bperline);
        }
    }

    if (opts.verbose) {
        printImgInfo (blockPtr->width, blockPtr->height,
                       xres * 0.0254,  yres * 0.0254,
                       nbytes*8, fileName, "Saving image:");
    }

    return TCL_OK;
}

static void putint(
    tkimg_Stream *handle,
    int i
) {
    unsigned char buf[4];
    buf[0] = i;
    buf[1] = i>>8;
    buf[2] = i>>16;
    buf[3] = i>>24;
    tkimg_Write(handle, (char *) buf, 4);
}
