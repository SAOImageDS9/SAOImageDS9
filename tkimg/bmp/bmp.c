/*
 * bmp.c --
 *
 *  BMP photo image type, Tcl/Tk package
 *
 * Copyright (c) 1997-2003 Jan Nijtmans    <nijtmans@users.sourceforge.net>
 * Copyright (c) 2002      Andreas Kupries <andreas_kupries@users.sourceforge.net>
 *
 * The following format options are available:
 *
 * Write BMP image: "ico -resolution <list>"
 *
 * -resolution <list>: Set the resolution property of the output file.
 *                     The default is 74 dpi (no option)
 *                     Possible forms for list:
 *                     {xRes unit} : set x and y resolution to same value
 *                     {xRes yRes} : set x to 74dpi and y to 74*YRes/XRes
 *                     {xRes yRes unit} : set x and y resolution to given values
 *                     xRes, yRes are floats >= 0. 0 is the "no value" value.
 *                     unit is one of "c" cm, "m" mm, "i" inch or "p" inch/72.
 */

/*
 * Generic initialization code, parameterized via CPACKAGE and PACKAGE.
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include "init.c"

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

/*
 * Now the implementation
 */
/*
 * Prototypes for local procedures defined in this file:
 */

static int CommonMatch(tkimg_MFile *handle, int *widthPtr,
        int *heightPtr, unsigned char **colorMap, int *numBits,
        int *numCols, int *comp, unsigned int *mask);

static int CommonRead(Tcl_Interp *interp, tkimg_MFile *handle,
        Tk_PhotoHandle imageHandle, int destX, int destY, int width,
        int height, int srcX, int srcY);

static int CommonWrite(Tcl_Interp *interp, Tcl_Obj *format,
        tkimg_MFile *handle,
        Tk_PhotoImageBlock *blockPtr);

static void putint(tkimg_MFile *handle, int i);

/*
 * Entrypoints for the photo image type.
 */

static int
ChnMatch(
    Tcl_Channel chan,
    const char *fileName,
    Tcl_Obj *format,
    int *widthPtr,
    int *heightPtr,
    Tcl_Interp *interp
) {
    tkimg_MFile handle;

    handle.data = (char *) chan;
    handle.state = IMG_CHAN;

    return CommonMatch(&handle, widthPtr, heightPtr,
                        NULL, NULL, NULL, NULL, NULL);
}

static int
ObjMatch(
    Tcl_Obj *data,
    Tcl_Obj *format,
    int *widthPtr,
    int *heightPtr,
    Tcl_Interp *interp
) {
    tkimg_MFile handle;

    if (!tkimg_ReadInit(data, 'B', &handle)) {
        return 0;
    }
    return CommonMatch(&handle, widthPtr, heightPtr,
                        NULL, NULL, NULL, NULL, NULL);
}

static int
ChnRead(
    Tcl_Interp *interp,
    Tcl_Channel chan,
    const char *fileName,
    Tcl_Obj *format,
    Tk_PhotoHandle imageHandle,
    int destX, int destY,
    int width, int height,
    int srcX, int srcY
) {
    tkimg_MFile handle;

    handle.data = (char *) chan;
    handle.state = IMG_CHAN;

    return CommonRead(interp, &handle, imageHandle, destX, destY,
            width, height, srcX, srcY);
}

static int
ObjRead(
    Tcl_Interp *interp,
    Tcl_Obj *data,
    Tcl_Obj *format,
    Tk_PhotoHandle imageHandle,
    int destX, int destY,
    int width, int height,
    int srcX, int srcY
) {
    tkimg_MFile handle;

    tkimg_ReadInit(data,'B',&handle);
    return CommonRead(interp, &handle, imageHandle, destX, destY,
            width, height, srcX, srcY);
}

static int
ChnWrite(
    Tcl_Interp *interp,
    const char *filename,
    Tcl_Obj *format,
    Tk_PhotoImageBlock *blockPtr
) {
    Tcl_Channel chan;
    tkimg_MFile handle;
    int result;

    chan = tkimg_OpenFileChannel(interp, filename, 0644);
    if (!chan) {
        return TCL_ERROR;
    }

    handle.data = (char *) chan;
    handle.state = IMG_CHAN;

    result = CommonWrite(interp, format, &handle, blockPtr);
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
    tkimg_MFile handle;
    int result;
    Tcl_DString data;

    Tcl_DStringInit(&data);
    tkimg_WriteInit(&data, &handle);
    result = CommonWrite(interp, format, &handle, blockPtr);
    tkimg_Putc(IMG_DONE, &handle);

    if (result == TCL_OK) {
        Tcl_DStringResult(interp, &data);
    } else {
        Tcl_DStringFree(&data);
    }
    return result;
}

static unsigned int
getUInt32(unsigned char *buf)
{
    return (buf[0] | buf[1] << 8 | buf[2] << 16 | buf[3] << 24);
}

static unsigned int
getUInt16(unsigned char *buf)
{
    return (buf[0] | buf[1] << 8);
}

static void
GetChannelMasks(
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

static int
CommonMatch(
    tkimg_MFile *handle,
    int *widthPtr, int *heightPtr,
    unsigned char **colorMap,
    int *numBits, int *numCols, int *comp,
    unsigned int *mask
) {
    unsigned char buf[28];
    int c,i, compression, nBits, clrUsed, offBits;

    if ((tkimg_Read2(handle, (char *) buf, 2) != 2)
            || (strncmp("BM", (char *) buf, 2) != 0)
            || (tkimg_Read2(handle, (char *) buf, 24) != 24)
            || buf[13] || buf[14] || buf[15]) {
        return 0;
    }

    offBits = (buf[11]<<24) + (buf[10]<<16) + (buf[9]<<8) + buf[8];
    c = buf[12];
    if ((c == 40) || (c == 64)) {
        *widthPtr = (buf[19]<<24) + (buf[18]<<16) + (buf[17]<<8) + buf[16];
        *heightPtr = (buf[23]<<24) + (buf[22]<<16) + (buf[21]<<8) + buf[20];
        if (tkimg_Read2(handle, (char *) buf, 24) != 24) {
            return 0;
        }
        nBits = buf[2];
        compression = buf[4];
        clrUsed = (buf[21]<<8) + buf[20];
        offBits -= c+14;
    } else if (c == 12) {
        *widthPtr = (buf[17]<<8) + buf[16];
        *heightPtr = (buf[19]<<8) + buf[18];
        nBits = buf[22];
        compression = BI_RGB;
        clrUsed = 0;
    } else {
        return 0;
    }
    if (*widthPtr <= 0 || *heightPtr <= 0)
        return 0;

    if (colorMap) {
        if (c > 36) {
            if (tkimg_Read2(handle, (char *) buf, c - 36) != c - 36 )
                return 0;
        }
        if (compression == BI_BITFIELDS) {
            /* Read the channel masks. */
            if (tkimg_Read2(handle, (char *) buf, 3*4) != 3*4 )
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
            *colorMap = ptr = (unsigned char *) ckalloc(3*clrUsed);
            for (i = 0; i < clrUsed; i++) {
                if (tkimg_Read2(handle, (char *) colbuf, 3+(c!=12)) != 3+(c!=12))
                    return 0;
                *ptr++ = colbuf[0]; *ptr++ = colbuf[1]; *ptr++ = colbuf[2];
                /*printf("color %d: %d %d %d\n", i, colbuf[2], colbuf[1], colbuf[0]);*/
            }
        }
        while (offBits>28) {
            offBits -= 28;
            if (tkimg_Read2(handle, (char *) buf, 28) != 28)
                return 0;
        }
        if (offBits > 0) {
            if (tkimg_Read2(handle, (char *) buf, offBits) != offBits)
                return 0;
        }
        if (numCols) {
            *numCols = clrUsed;
        }
    }
    if (numBits) {
        *numBits = nBits;
    }
    if (comp) {
        *comp = compression;
    }
    return 1;
}

static int
CommonRead(
    Tcl_Interp *interp,
    tkimg_MFile *handle,
    Tk_PhotoHandle imageHandle,
    int destX, int destY,
    int width, int height,
    int srcX, int srcY
) {
    Tk_PhotoImageBlock block;
    int numBits, bytesPerLine, numCols, comp, x, y;
    int fileWidth, fileHeight;
    unsigned char *colorMap = NULL;
    unsigned int intMask[3];
    BitmapChannel masks[3];
    char buf[10];
    unsigned char *line = NULL, *expline = NULL;
    unsigned short rgb;

    CommonMatch(handle, &fileWidth, &fileHeight, &colorMap, &numBits,
                 &numCols, &comp, intMask);

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

    /* printf("reading %d-bit BMP %dx%d\n", numBits, width, height); */
    if (comp == BI_RLE8 || comp == BI_RLE4) {
        tkimg_ReadBuffer(1);
    }

    if (tkimg_PhotoExpand(interp, imageHandle, destX + width, destY + height) == TCL_ERROR) {
        goto error;
    }

    bytesPerLine = ((numBits * fileWidth + 31)/32)*4;

    /* printf("bytesPerLine = %d numBits=%d (%dx%d)\n", 
     *        bytesPerLine, numBits, width, height);
     */ 
    block.pixelSize = 3;
    block.pitch = width * 3;
    block.width = width;
    block.height = 1;
    block.offset[0] = 2;
    block.offset[1] = 1;
    block.offset[2] = 0;
    block.offset[3] = block.offset[0];

    if (comp == BI_RGB || comp == BI_BITFIELDS) {       /* No compression */
        line = (unsigned char *) ckalloc(bytesPerLine);
        for(y=srcY+height; y<fileHeight; y++) {
            tkimg_Read2(handle, (char *)line, bytesPerLine);
        }
        switch (numBits) {
            case 32:
                block.pixelPtr = expline = (unsigned char *) ckalloc(3*width);
                for( y = height-1; y>=0; y--) {
                    tkimg_Read2(handle, (char *)line, bytesPerLine);
                    for (x = srcX; x < (srcX+width); x++) {
                        *expline++ = line[x*4 + 0];
                        *expline++ = line[x*4 + 1];
                        *expline++ = line[x*4 + 2];
                    }
                    if (tkimg_PhotoPutBlock(interp, imageHandle, &block,
                            destX, destY+y, width, 1, TK_PHOTO_COMPOSITE_SET) == TCL_ERROR) {
                        goto error;
                    }
                    expline = block.pixelPtr;
                }
                break;
            case 24:
                block.pixelPtr = line + srcX*3;
                for( y = height-1; y>=0; y--) {
                    tkimg_Read2(handle, (char *)line, bytesPerLine);
                    if (tkimg_PhotoPutBlock(interp, imageHandle, &block,
                            destX, destY+y, width, 1, TK_PHOTO_COMPOSITE_SET) == TCL_ERROR) {
                        goto error;
                    }
                }
                break;
            case 16:
                block.pixelPtr = expline = (unsigned char *) ckalloc(3*width);
                for( y = height-1; y>=0; y--) {
                    tkimg_Read2(handle, (char *)line, bytesPerLine);
                    for (x = srcX; x < (srcX+width); x++) {
                        rgb = getUInt16 (&line[x*2]);
                        *expline++ = ((rgb & masks[2].mask) >> masks[2].shiftin) << masks[2].shiftout;
                        *expline++ = ((rgb & masks[1].mask) >> masks[1].shiftin) << masks[1].shiftout;
                        *expline++ = ((rgb & masks[0].mask) >> masks[0].shiftin) << masks[0].shiftout;
                    }
                    if (tkimg_PhotoPutBlock(interp, imageHandle, &block,
                            destX, destY+y, width, 1, TK_PHOTO_COMPOSITE_SET) == TCL_ERROR) {
                        goto error;
                    }
                    expline = block.pixelPtr;
                }
                break;
            case 8:
                block.pixelPtr = expline = (unsigned char *) ckalloc(3*width);
                for( y = height-1; y>=0; y--) {
                    tkimg_Read2(handle, (char *)line, bytesPerLine);
                    for (x = srcX; x < (srcX+width); x++) {
                        memcpy(expline, colorMap+(3*line[x]),3);
                        expline += 3;
                    }
                    if (tkimg_PhotoPutBlock(interp, imageHandle, &block,
                            destX, destY+y, width, 1, TK_PHOTO_COMPOSITE_SET) == TCL_ERROR) {
                        goto error;
                    }
                    expline = block.pixelPtr;
                }
                break;
            case 4:
                block.pixelPtr = expline = (unsigned char *) ckalloc(3*width);
                for( y = height-1; y>=0; y--) {
                    int c;
                    tkimg_Read2(handle, (char *)line, bytesPerLine);
                    for (x = srcX; x < (srcX+width); x++) {
                        if (x&1) {
                            c = line[x/2] & 0x0f;
                        } else {
                            c = line[x/2] >> 4;
                        }
                        memcpy(expline, colorMap+(3*c),3);
                        expline += 3;
                    }
                    if (tkimg_PhotoPutBlock(interp, imageHandle, &block,
                            destX, destY+y, width, 1, TK_PHOTO_COMPOSITE_SET) == TCL_ERROR) {
                        goto error;
                    }
                    expline = block.pixelPtr;
                }
                break;
            case 1:
                block.pixelPtr = expline = (unsigned char *) ckalloc(3*width);
                for( y = height-1; y>=0; y--) {
                    int c;
                    tkimg_Read2(handle, (char *)line, bytesPerLine);
                    for (x = srcX; x < (srcX+width); x++) {
                        c = (line[x/8] >> (7-(x%8))) & 1;
                        memcpy(expline, colorMap+(3*c),3);
                        expline += 3;
                    }
                    if (tkimg_PhotoPutBlock(interp, imageHandle, &block,
                            destX, destY+y, width, 1, TK_PHOTO_COMPOSITE_SET) == TCL_ERROR) {
                        goto error;
                    }
                    expline = block.pixelPtr;
                }
                break;
            default:
                sprintf(buf, "%d", numBits);
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
        block.pixelPtr = expline = (unsigned char *) ckalloc (3*fileWidth);

        if (numBits != 4 && numBits != 8) {
            sprintf (buf, "%d", numBits);
            Tcl_AppendResult(interp, "RLE compression not supported for ",
                              buf, "-bit pixel values", (char *) NULL);
            goto error;
        }

        while (1) {
            if (2 != tkimg_Read2(handle, (char *)rleBuf, 2)) {
                Tcl_AppendResult(interp, "Unexpected EOF", (char *) NULL);
                goto error;
            }
            /* printf("In: (%d %X) --> \n", rleBuf[0], rleBuf[1]); */
            if (rleBuf[0] != 0) {
                howMuch = rleBuf[0];
                switch (numBits) {
                    case 8: {
                        for (i=0; i<howMuch; i++, x++) {
                            memcpy (expline, colorMap + 3*rleBuf[1], 3);
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
                    /* printf ("Uncompressed: %d\n", howMuch); fflush (stdout); */
                    switch (numBits) {
                        case 8: {
                            for (i=0; i<howMuch; i++, x++) {
                                if (1 != tkimg_Read2(handle, (char *)&val, 1)) {
                                    Tcl_AppendResult(interp, "Unexpected EOF", (char *)NULL);
                                    goto error;
                                }
                                memcpy(expline, colorMap + 3*val, 3);
                                expline += 3;
                            }
                            break;
                        }
                        case 4: {
                            for (i=0; i<howMuch; i+=2) {
                                if (1 != tkimg_Read2(handle, (char *)&val, 1)) {
                                    Tcl_AppendResult(interp, "Unexpected EOF", (char *)NULL);
                                    goto error;
                                }
                                for (j=0; j<2; j++, x++) {
                                    if (x&1) {
                                        c = val & 0x0f;
                                    } else {
                                        c = val >> 4;
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
                        if (1 != tkimg_Read2(handle, (char *)&val, 1)) {
                            Tcl_AppendResult(interp, "Unexpected EOF", (char *)NULL);
                            goto error;
                        }
                    }
                } else if (rleBuf[1]==0) {
                    /* End of line */
                    /* printf("New line: y=%d x=%d\n", y, x); fflush(stdout); */
                    if (tkimg_PhotoPutBlock(interp, imageHandle, &block, destX, destY+y,
                            width, 1, TK_PHOTO_COMPOSITE_SET) == TCL_ERROR) {
                        goto error;
                    }
                    y--;
                    x = srcX;
                    expline = block.pixelPtr;
                } else if (rleBuf[1]==1) {
                    /* End of bitmap */
                    break;
                } else if (rleBuf[1]==2) {
                    /* Deltarecord */
                    /* printf("Deltarecord\n"); fflush(stdout); */
                    if (2 != tkimg_Read2(handle, (char *) rleDelta, 2)) {
                        Tcl_AppendResult(interp, "Unexpected EOF", (char *) NULL);
                        goto error;
                    }
                    x += rleDelta[0];
                    y += rleDelta[1];
                }
            }
        }
    }
    tkimg_ReadBuffer(0);

    if (colorMap) {
        ckfree((char *) colorMap);
    }
    if (line) {
        ckfree((char *) line);
    }
    if (expline) {
        ckfree((char *) block.pixelPtr);
    }
    return TCL_OK ;

error:
    tkimg_ReadBuffer(0);
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

static int
CommonWrite(
    Tcl_Interp *interp,
    Tcl_Obj *format,
    tkimg_MFile *handle,
    Tk_PhotoImageBlock *blockPtr
) {
    int bperline, nbytes, ncolors, i, x, y, greenOffset, blueOffset, alphaOffset;
    unsigned char *imagePtr, *pixelPtr;
    unsigned char buf[4];
    int colors[256];
    int resX=75*39, resY=75*39;
    int objc = 0;
    Tcl_Obj **objv = NULL;
 
    /* Decode resolution parameter -resolution List */
    if (tkimg_ListObjGetElements(interp, format, &objc, &objv) != TCL_OK) {
        return TCL_ERROR;
    }
    /* List parameter given ? */
    if (objc > 1) {
        Tcl_Obj *objList;
        int nBytes;
        double fResX = -1, fResY = -1, fFactor = 0;
        char unit = '\0';
        char *c = Tcl_GetStringFromObj(objv[1], &nBytes);
        if ((objc > 3) || ((objc == 3) && ((c[0] != '-') ||
                (c[1] != 'r') || strncmp(c, "-resolution", strlen(c))))) {
            Tcl_AppendResult(interp, "invalid format: \"",
                    tkimg_GetStringFromObj2(format, NULL), "\"", (char *) NULL);
            return TCL_ERROR;
        }
        objList = objv[objc-1];
        if (tkimg_ListObjGetElements(interp, objList, &objc, &objv) != TCL_OK) {
            return TCL_ERROR;
        }
        if (!objc || objc > 3) {
            Tcl_AppendResult(interp, "Wrong resolution parameters: \"",
                    tkimg_GetStringFromObj2(objList, NULL), "\"", (char *) NULL);
            return TCL_ERROR;
        }
        if (Tcl_GetDoubleFromObj(interp, objv[0], &fResX) != TCL_OK) {
            return TCL_ERROR;
        }
        if ( fResX < 0 || fResX > 1e20 ) {
            Tcl_AppendResult(interp, "Wrong resolution: \"",
                tkimg_GetStringFromObj2(objv[0], NULL), "\"", (char *) NULL);
            return TCL_ERROR;
        }
        /* more than xRes value given ? */
        if (objc > 1) {
            /* check last for unit */
            c = Tcl_GetStringFromObj(objv[objc-1], &nBytes);
            if ( nBytes == 1 && ( c[0] == 'c' || c[0] == 'i' || c[0] == 'm' || c[0] == 'p') ) {
                unit = c[0];
                objc--;
            }
            if (objc > 2) {
                Tcl_AppendResult(interp, "Wrong unit: \"",
                    tkimg_GetStringFromObj2(objv[objc-1], NULL), "\"", (char *) NULL);
                return TCL_ERROR;
            }
            if (objc > 1) {
                if (Tcl_GetDoubleFromObj(interp, objv[1], &fResY) != TCL_OK) {
                    return TCL_ERROR;
                }
                if ( fResY < 0 || fResY > 1e20 ) {
                    Tcl_AppendResult(interp, "Wrong resolution: \"",
                        tkimg_GetStringFromObj2(objv[0], NULL), "\"", (char *) NULL);
                    return TCL_ERROR;
                }
            }
        }
        /* Process unit and eventually get factor value */
        switch (unit) {
        case 'c': /* centimeter */
            fFactor = 100.0;
            break;
        case 'i': /* inches */
            fFactor = 1.0/0.0254;
            break;
        case 'm': /* millimeter */
            fFactor = 1000.0;
            break;
        case 'p': /* printer points (1/72 inch) */
            fFactor = 72.0/0.0254;
            break;
        default: /* no unit given - 75*39 as X resolution */
            if (fResX == 0) {
                resX = 0;
                resY = 0;
            } else {
                if (fResY != -1) {
                    resY = (int) ( fResY * 75.0*39.0 / fResX + 0.5);
                }
            }
            break;
        }
        if (fFactor != 0) {
            resX = (int) ( fResX * fFactor + 0.5);
            if (fResY == -1) {
                resY = resX;
            } else {
                resY = (int) ( fResY * fFactor + 0.5);
            }
        }
    }

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

    tkimg_Write2(handle,"BM", 2);
    putint(handle, 54 + (ncolors*4) + bperline * blockPtr->height);
    putint(handle, 0);
    putint(handle, 54 + (ncolors*4));
    putint(handle, 40);
    putint(handle, blockPtr->width);
    putint(handle, blockPtr->height);
    putint(handle, 1 + (nbytes<<19));
    putint(handle, 0);
    putint(handle, bperline * blockPtr->height);
    putint(handle, resX);
    putint(handle, resY);
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
            tkimg_Write2(handle, (char *) buf, nbytes);
            pixelPtr += blockPtr->pixelSize;
        }
        if (bperline) {
            tkimg_Write2(handle, "\0\0\0", bperline);
        }
    }
    return(TCL_OK);
}

static void
putint(
    tkimg_MFile *handle,
    int i
) {
    unsigned char buf[4];
    buf[0] = i;
    buf[1] = i>>8;
    buf[2] = i>>16;
    buf[3] = i>>24;
    tkimg_Write2(handle, (char *) buf, 4);
}
