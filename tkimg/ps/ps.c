/*
 * ps.c
 *
 * PS and PDF photo image type, Tcl/Tk package.
 *
 * A photo image handler for PostScipt and PDF data interpreted as images.
 *
 * For a list of available format options see function ParseFormatOpts
 * and the documentation img-ps.
 *
 * Copyright (c) 1997-2024 Jan Nijtmans    <nijtmans@users.sourceforge.net>
 * Copyright (c) 2002-2024 Andreas Kupries <andreas_kupries@users.sourceforge.net>
 *
 * See the file "license.terms" for information on usage and redistribution
 * of this file, and for a DISCLAIMER OF ALL WARRANTIES.
 *
 */

/*
 * Activate second 'format' definition in init.c.
 * Share read functions.
 */
#define SECOND_FORMAT
#define SECOND_FILEREAD    FileRead
#define SECOND_STRINGREAD  StringRead

/*
 * Generic initialization code, parameterized via CPACKAGE and PACKAGE.
 */

#include "init.c"

#include <string.h>
#include <stdlib.h>
#include <math.h>

/* Format options structure for use with ParseFormatOpts */
typedef struct {
    int    verbose;
    int    pageIndex;
    double xzoom;
    double yzoom;
    double xzoomDpi;
    double yzoomDpi;
    char   gsCmd[1024];
} FMTOPT;

/*
 * Prototypes for local procedures defined in this file:
 */

static int CommonMatchPS(Tcl_Interp *interp, tkimg_Stream *handle, Tcl_Obj *format,
        int *widthPtr, int *heightPtr);

static int CommonMatchPDF(Tcl_Interp *interp, tkimg_Stream *handle, Tcl_Obj *format,
        int *widthPtr, int *heightPtr);

static int CommonRead(Tcl_Interp *interp, tkimg_Stream *handle, const char *fileName,
        Tcl_Obj *format, Tk_PhotoHandle imageHandle, int destX, int destY,
        int width, int height, int srcX, int srcY);

static void printImgInfo(
    int width, int height,
    int pageIndex,
    double xzoom, double yzoom,
    const char **argv,
    int argc,
    const char *fileName,
    const char *msg
) {
    int i;
    Tcl_Channel outChan;
    char str[256];

    outChan = Tcl_GetStdChannel (TCL_STDOUT);
    if (!outChan) {
        return;
    }

    tkimg_snprintf(str, 256, "%s %s\n", msg, fileName);                           IMGOUT;
    tkimg_snprintf(str, 256, "  Page            : %d\n", pageIndex);              IMGOUT;
    tkimg_snprintf(str, 256, "  Size in pixel   : %d x %d\n", width, height);     IMGOUT;
    tkimg_snprintf(str, 256, "  Zoom            : %.2f x %.2f\n", xzoom, yzoom);  IMGOUT;
    tkimg_snprintf(str, 256, "  Ghostscript call:");                              IMGOUT;
    for (i=0; i<argc; i++) {
        tkimg_snprintf(str, 256, " %s", argv[i]);                                 IMGOUT;
    }
    tkimg_snprintf(str, 256, "\n");                                               IMGOUT;
    Tcl_Flush(outChan);
}

static int
ParseFormatOpts(
    Tcl_Interp *interp,
    Tcl_Obj *format,
    FMTOPT *opts,
    int mode
) {
    static const char *const readOptions[] = {
         "-verbose", "-index", "-zoom", "-gs", NULL
    };
    enum readEnums {
        R_VERBOSE, R_INDEX, R_ZOOM, R_GS
    };
    Tcl_Size objc, i;
    int index;
    char *optionStr;
    Tcl_Obj **objv;
    int boolVal;
    int intVal;
    double doubleVal;

    /* Initialize format options with default values. */
    opts->verbose   = 0;
    opts->pageIndex = 0;
    opts->xzoom     = 1.0;
    opts->yzoom     = 1.0;
    opts->xzoomDpi  = 72.5;
    opts->yzoomDpi  = 72.5;

#ifdef _WIN32
    strcpy (opts->gsCmd, "gswin64c.exe");
#else
    strcpy (opts->gsCmd, "gs");
#endif

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
            Tcl_SetObjResult(interp, Tcl_ObjPrintf("No write functionality available."));
            return TCL_ERROR;
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
                case R_INDEX: {
                    if (Tcl_GetInt(interp, optionStr, &intVal) == TCL_ERROR || intVal < 0) {
                        Tcl_SetObjResult(interp, Tcl_ObjPrintf(
                            "Invalid index value \"%s\": must be an integer value greater or equal to zero.",
                            optionStr));
                        return TCL_ERROR;
                    }
                    opts->pageIndex = intVal;
                    break;
                }
                case R_ZOOM: {
                    if (Tcl_GetDouble(interp, optionStr, &doubleVal) == TCL_ERROR || doubleVal <= 0.0) {
                        Tcl_SetObjResult(interp, Tcl_ObjPrintf(
                            "Invalid x zoom value \"%s\": must be a double value greater than zero.",
                            optionStr));
                        return TCL_ERROR;
                    }
                    opts->xzoom    = doubleVal;
                    opts->yzoom    = doubleVal;
                    opts->xzoomDpi = 72.0 * doubleVal + 0.5;
                    opts->yzoomDpi = 72.0 * doubleVal + 0.5;
                    if (i+1 >= objc) {
                        /* No more parameters available. */
                        break;
                    }
                    optionStr = Tcl_GetString(objv[i+1]);
                    if (optionStr[0] == '-' ) {
                        /* Next parameter is an option. */
                        break;
                    }
                    if (Tcl_GetDouble(interp, optionStr, &doubleVal) == TCL_ERROR || doubleVal <= 0.0) {
                        Tcl_SetObjResult(interp, Tcl_ObjPrintf(
                            "Invalid y zoom value \"%s\": must be a double value greater than zero.",
                            optionStr));
                        return TCL_ERROR;
                    }
                    opts->yzoom    = doubleVal;
                    opts->yzoomDpi = 72.0 * doubleVal + 0.5;
                    i++;
                    break;
                }
                case R_GS: {
                    tkimg_snprintf(opts->gsCmd, 1024, "%s", optionStr);
                    break;
                }
            }
        } else {
            /* No write functionality. */
        }
    }
    return TCL_OK;
}

static int FileMatch(
    Tcl_Channel chan,
    const char *fileName,
    Tcl_Obj *format,
    int *widthPtr,
    int *heightPtr,
    Tcl_Interp *interp
) {
    tkimg_Stream handle;
    memset(&handle, 0, sizeof (tkimg_Stream));

    tkimg_ReadInitFile(&handle, chan);

    return CommonMatchPS(interp, &handle, format, widthPtr, heightPtr);
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
    return CommonMatchPS(interp, &handle, format, widthPtr, heightPtr);
}

static int
CommonMatchPS(
    Tcl_Interp *interp,
    tkimg_Stream *handle,
    Tcl_Obj *format,
    int *widthPtr, int *heightPtr
) {
    char buf[41];
    FMTOPT opts;

    if ((tkimg_Read(handle, buf, 11) != 11)
            || (strncmp("%!PS-Adobe-", buf, 11) != 0)) {
        return 0;
    }
    while (tkimg_Read(handle,buf, 1) == 1) {
        if (buf[0] == '%' &&
                (tkimg_Read(handle, buf, 2) == 2) &&
                (!memcmp(buf, "%B", 2) &&
                (tkimg_Read(handle, buf, 11) == 11) &&
                (!memcmp(buf, "oundingBox:", 11)) &&
                (tkimg_Read(handle, buf, 40) == 40))) {
            int w, h;
            char *p = buf;
            buf[40] = 0;
            w = - (int) strtoul(p, &p, 0);
            h = - (int) strtoul(p, &p, 0);
            w += strtoul(p, &p, 0);
            h += strtoul(p, &p, 0);
            if (ParseFormatOpts(interp, format, &opts, IMG_READ) == TCL_OK) {
                w = (w * (int)opts.xzoomDpi + 36) / 72;
                h = (h * (int)opts.yzoomDpi + 36) / 72;
            }
            if ((w <= 0) || (h <= 0)) {
                return 0;
            }
            *widthPtr = w;
            *heightPtr = h;
            return 1;
        }
    }
    return 0;
}

static int
FileRead(
    Tcl_Interp *interp,
    Tcl_Channel chan,
    const char *fileName,
    Tcl_Obj *format,
    Tk_PhotoHandle imageHandle,
    int destX, int destY,
    int width, int height,
    int srcX, int srcY
) {
    tkimg_Stream handle;
    memset(&handle, 0, sizeof (tkimg_Stream));

    tkimg_ReadInitFile(&handle, chan);

    return CommonRead(interp, &handle, fileName, format, imageHandle, destX, destY,
            width, height, srcX, srcY);
}

static int
StringRead(
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

static int
CommonRead(
    Tcl_Interp *interp,
    tkimg_Stream *handle,
    const char *fileName,
    Tcl_Obj *format,
    Tk_PhotoHandle imageHandle,
    int destX, int destY,
    int width, int height,
    int srcX, int srcY
) {
    const char *argv[10];
    Tcl_Size len;
    int i, j, fileWidth, fileHeight, maxintensity;
    char *p, type;
    char buffer[1025];
    unsigned char *line = NULL, *line3 = NULL;
    Tcl_DString tempFileName;
    Tcl_DString outFileParam;
    char zoomParam[64], papersizeParam[64];
    char pageParam[64];
    Tcl_Channel chan;
    Tcl_DString dstring;
    Tk_PhotoImageBlock block;
    int xzoom, yzoom;
    int result = TCL_OK;
    FMTOPT opts;

    if (ParseFormatOpts(interp, format, &opts, IMG_READ) == TCL_ERROR) {
        return TCL_ERROR;
    }
    xzoom = (int)opts.xzoomDpi;
    yzoom = (int)opts.yzoomDpi;
    tkimg_snprintf(zoomParam, 64, "-r%dx%d", xzoom, yzoom);

    Tcl_DStringInit (&tempFileName);
    Tcl_DStringInit (&outFileParam);
    tkimg_GetTemporaryFileName (&tempFileName);
    Tcl_DStringAppend( &outFileParam, "-sOutputFile=", (Tcl_Size)strlen ("-sOutputFile="));
    Tcl_DStringAppend( &outFileParam, Tcl_DStringValue (&tempFileName), (Tcl_Size)strlen (Tcl_DStringValue (&tempFileName)));

    tkimg_snprintf(pageParam, 64, "-dFirstPage=%d -dLastPage=%d", opts.pageIndex+1, opts.pageIndex+1);

    len = tkimg_Read(handle, buffer, 1024);
    buffer[1024] = 0;
    p = strstr(buffer,"%%BoundingBox:");
    fileHeight = height + srcY;
    if (p) {
        /* Postscript */
        p += 14;
        srcX += (strtoul(p, &p, 0) * xzoom + 36) / 72;
        fileHeight += (strtoul(p, &p, 0) * yzoom + 36) / 72;
        i = strtoul(p, &p, 0);
        srcY -= (strtoul(p, &p, 0) * yzoom + 36) / 72;
    } else {
        /* PDF */

        /*
         * Extract the pixel position of the upper left corner
         * of the image from the file. How to do that????
         * For now I just assume A4-size with 72 pixels/inch.
         */
        int h;
        h = (int) round ((29.7 / 2.54 * 72.0));
        srcX += (0 * xzoom + 36) / 72;
        srcY -= (h * yzoom + 36) / 72;
    }

    tkimg_snprintf(papersizeParam, 64, "-g%dx%d", srcX+width, fileHeight);

    argv[0] = opts.gsCmd;
    argv[1] = "-sDEVICE=ppmraw";
    argv[2] = zoomParam;
    argv[3] = pageParam;
    argv[4] = papersizeParam;
    argv[5] = "-q";
    argv[6] = "-dNOPAUSE";
    argv[7] = Tcl_DStringValue (&outFileParam);
    argv[8] = "-";
    #define NUM_PARAMS 9

    tkimg_DeleteFile(Tcl_DStringValue (&tempFileName));

    chan = Tcl_OpenCommandChannel(interp, NUM_PARAMS, (const char **) argv,
            TCL_STDIN|TCL_STDOUT|TCL_STDERR|TCL_ENFORCE_MODE);
    if (!chan) {
        Tcl_DStringFree (&outFileParam);
        Tcl_DStringFree (&tempFileName);
        return TCL_ERROR;
    }
    if (Tcl_SetChannelOption(interp, chan, "-translation", "binary") != TCL_OK) {
        Tcl_DStringFree (&outFileParam);
        Tcl_DStringFree (&tempFileName);
        return TCL_ERROR;
    }

    while (len > 0) {
        Tcl_Write(chan, (char *) buffer, 1024);
        len = tkimg_Read(handle, buffer, 1024);
    }
    Tcl_Write(chan,"\nquit\n", 6);
    Tcl_Flush(chan);
    Tcl_Close(interp, chan);

    chan = tkimg_OpenFileChannel(interp, Tcl_DStringValue (&tempFileName), "r");
    if (!chan) {
        Tcl_DStringFree (&outFileParam);
        Tcl_DStringFree (&tempFileName);
        return TCL_ERROR;
    }

    Tcl_DStringInit(&dstring);
    len = Tcl_Gets(chan, &dstring);
    p = Tcl_DStringValue(&dstring);
    type = p[1];
    if ((p[0] != 'P') || (type < '4') || (type > '6')) {
        Tcl_AppendResult(interp, "gs error: \"", p, "\"",(char *) NULL);
        tkimg_DeleteFile(Tcl_DStringValue (&tempFileName));
        Tcl_DStringFree (&outFileParam);
        Tcl_DStringFree (&tempFileName);
        return TCL_ERROR;
    }
    do {
        Tcl_DStringSetLength(&dstring, 0);
        Tcl_Gets(chan, &dstring);
        p = Tcl_DStringValue(&dstring);
    } while (p[0] == '#');
    fileWidth = strtoul(p, &p, 0);
    srcY += (fileHeight = strtoul(p, &p, 0));

    if ((srcX + width) > fileWidth) {
        width = fileWidth - srcX;
    }
    if ((srcY + height) > fileHeight) {
        height = fileHeight - srcY;
    }
    if ((width <= 0) || (height <= 0)) {
        Tcl_Close(interp, chan);
        tkimg_DeleteFile(Tcl_DStringValue (&tempFileName));
        Tcl_DStringFree (&outFileParam);
        Tcl_DStringFree (&tempFileName);
        Tcl_DStringFree(&dstring);
        Tcl_AppendResult(interp, "Width or height are negative", (char *) NULL);
        return TCL_ERROR;
    }

    if (opts.verbose) {
        printImgInfo (width, height, opts.pageIndex, opts.xzoom, opts.yzoom, argv, NUM_PARAMS, fileName, "Reading image:");
    }

    if (Tk_PhotoExpand(interp, imageHandle, destX + width, destY + height) == TCL_ERROR) {
        Tcl_Close(interp, chan);
        tkimg_DeleteFile(Tcl_DStringValue (&tempFileName));
        Tcl_DStringFree (&outFileParam);
        Tcl_DStringFree (&tempFileName);
        Tcl_DStringFree(&dstring);
        return TCL_ERROR;
    }

    maxintensity = strtoul(p, &p, 0);
    if ((type != '4') && !maxintensity) {
        Tcl_DStringSetLength(&dstring, 0);
        Tcl_Gets(chan, &dstring);
        p = Tcl_DStringValue(&dstring);
        maxintensity = strtoul(p, &p, 0);
    }
    Tcl_DStringFree(&dstring);
    line3 = (unsigned char *) ckalloc(3 * fileWidth);
    block.pixelSize = 1;
    block.pitch = block.width = width;
    block.height = 1;
    block.offset[0] = 0;
    block.offset[1] = 0;
    block.offset[2] = 0;
    block.offset[3] = 0;
    switch(type) {
        case '4':
            i = (fileWidth+7)/8;
            line = (unsigned char *) ckalloc(i);
            while (srcY-- > 0) {
                Tcl_Read(chan,(char *) line, i);
            }
            block.pixelPtr = line3;
            while (height--) {
                Tcl_Read(chan, (char *) line, i);
                for (j = 0; j < width; j++) {
                    line3[j] = ((line[(j+srcX)/8]>>(7-(j+srcX)%8) & 1)) ? 0 : 255;
                }
                if (Tk_PhotoPutBlock(interp, imageHandle, &block, destX, destY++, width, 1, TK_PHOTO_COMPOSITE_SET) == TCL_ERROR) {
                    result = TCL_ERROR;
                    break;
                }
            }
            break;
        case '5':
            line = (unsigned char *) ckalloc(fileWidth);
            while (srcY-- > 0) {
                Tcl_Read(chan, (char *) line, fileWidth);
            }
            block.pixelPtr = line + srcX;
            while (height--) {
                unsigned char *c = block.pixelPtr;
                Tcl_Read(chan, (char *) line, fileWidth);
                if (maxintensity != 255) {
                    for (j = width; j > 0; j--) {
                        *c = (((int)*c) * maxintensity) / 255;
                        c++;
                    }
                }
                if (Tk_PhotoPutBlock(interp, imageHandle, &block, destX, destY++, width, 1, TK_PHOTO_COMPOSITE_SET) == TCL_ERROR) {
                    result = TCL_ERROR;
                    break;
                }
            }
            break;
        case '6':
            i = 3 * fileWidth;
            line = NULL;
            while (srcY-- > 0) {
                Tcl_Read(chan, (char *) line3, i);
            }
            block.pixelPtr = line3 + (3 * srcX);
            block.pixelSize = 3;
            block.offset[1] = 1;
            block.offset[2] = 2;
            while (height--) {
                unsigned char *c = block.pixelPtr;
                Tcl_Read(chan, (char *) line3, i);
                if (maxintensity != 255) {
                    for (j = (3 * width - 1); j >= 0; j--) {
                        *c = (((int)*c) * maxintensity) / 255;
                        c++;
                    }
                }
                if (Tk_PhotoPutBlock(interp, imageHandle, &block, destX, destY++, width, 1, TK_PHOTO_COMPOSITE_SET) == TCL_ERROR) {
                    result = TCL_ERROR;
                    break;
                }
            }
            break;
    }
    if (line) {
        ckfree((char *) line);
    }
    if (line3) {
        ckfree((char *) line3);
    }
    Tcl_Close(interp, chan);
    tkimg_DeleteFile(Tcl_DStringValue (&tempFileName));
    Tcl_DStringFree (&outFileParam);
    Tcl_DStringFree (&tempFileName);
    return result;
}

static int
FileWrite(
    Tcl_Interp *interp,
    const char *filename,
    Tcl_Obj *format,
    Tk_PhotoImageBlock *blockPtr
) {
    Tcl_SetObjResult(interp, Tcl_ObjPrintf("Writing not supported for format %s", sImageFormat.name));
    return TCL_ERROR;
}

static int StringWrite(
    Tcl_Interp *interp,
    Tcl_Obj *format,
    Tk_PhotoImageBlock *blockPtr
) {
    Tcl_SetObjResult(interp, Tcl_ObjPrintf("Writing not supported for format %s", sImageFormat.name));
    return TCL_ERROR;
}


static int
FileMatchBeta( /* PDF */
    Tcl_Channel chan,
    const char *fileName,
    Tcl_Obj *format,
    int *widthPtr,
    int *heightPtr,
    Tcl_Interp *interp
) {
    tkimg_Stream handle;
    memset(&handle, 0, sizeof (tkimg_Stream));

    tkimg_ReadInitFile(&handle, chan);

    return CommonMatchPDF(interp, &handle, format, widthPtr, heightPtr);
}

static int
StringMatchBeta( /* PDF */
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

    return CommonMatchPDF(interp, &handle, format, widthPtr, heightPtr);
}

static int
CommonMatchPDF(
    Tcl_Interp *interp,
    tkimg_Stream *handle,
    Tcl_Obj *format,
    int *widthPtr, int *heightPtr
) {
    unsigned char buf[41];
    int w, h;
    FMTOPT opts;

    if ((tkimg_Read(handle, (char *) buf, 5) != 5) ||
        (strncmp("%PDF-", (char *) buf, 5) != 0)) {
        return 0;
    }

    /* Here w and h should be set to the bounding box of the pdf
     * data. But I don't know how to extract that from the file.
     * For now I just assume A4-size with 72 pixels/inch. If anyone
     * has a better idea, please mail to <nijtmans@users.sourceforge.net>.
     */

    /* A4 size is 21.0 x 29.7 cm */
    w = (int) round ((21.0 / 2.54 * 72.0));
    h = (int) round ((29.7 / 2.54 * 72.0));

    if (ParseFormatOpts(interp, format, &opts, IMG_READ) == TCL_OK) {
        w = (w * (int)opts.xzoomDpi + 36) / 72;
        h = (h * (int)opts.yzoomDpi + 36) / 72;
    }
    if ((w <= 0) || (h <= 0)) {
        return 0;
    }
    *widthPtr  = w;
    *heightPtr = h;
    return 1;
}

static int
FileWriteBeta(
    Tcl_Interp *interp,
    const char *filename,
    Tcl_Obj *format,
    Tk_PhotoImageBlock *blockPtr
) {
    Tcl_SetObjResult(interp, Tcl_ObjPrintf("Writing not supported for format %s", sImageFormatBeta.name));
    return TCL_ERROR;
}

static int StringWriteBeta(
    Tcl_Interp *interp,
    Tcl_Obj *format,
    Tk_PhotoImageBlock *blockPtr
) {
    Tcl_SetObjResult(interp, Tcl_ObjPrintf("Writing not supported for format %s", sImageFormatBeta.name));
    return TCL_ERROR;
}
