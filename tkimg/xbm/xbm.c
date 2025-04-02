/*
 * xbm.c
 *
 * XBM photo image type, Tcl/Tk package.
 *
 * A photo image handler for X Windows Bitmap image format.
 *
 * For a list of available format options see function ParseFormatOpts
 * and the documentation img-xbm.
 *
 * Copyright (c) 1995-2024 Jan Nijtmans    <nijtmans@users.sourceforge.net>
 * Copyright (c) 2001-2024 Paul Obermeier  <obermeier@users.sourceforge.net>
 *
 * See the file "license.terms" for information on usage and redistribution
 * of this file, and for a DISCLAIMER OF ALL WARRANTIES.
 *
 */

/*
 * Generic initialization code, parameterized via CPACKAGE and PACKAGE.
 */

#include "init.c"


/* constants used only in this file */

#define MAX_BUFFER 4096

/*
 * The following data structure is used to describe the state of
 * parsing a bitmap file or string.  It is used for communication
 * between TkGetBitmapData and NextBitmapWord.
 */

#define MAX_WORD_LENGTH 100
typedef struct ParseInfo {
    tkimg_Stream handle;
    char word[MAX_WORD_LENGTH+1];
                                /* Current word of bitmap data, NULL
                                 * terminated. */
    int wordLength;             /* Number of non-NULL bytes in word. */
} ParseInfo;

/* Format options structure for use with ParseFormatOpts */
#define BG 0
#define FG 1
typedef struct {
    int verbose;
    int red[2], green[2], blue[2];
} FMTOPT;

/*
 * Prototypes for local procedures defined in this file:
 */

static int CommonRead(Tcl_Interp *interp,
        ParseInfo *parseInfo,
        const char *fileName,
        Tcl_Obj *format, Tk_PhotoHandle imageHandle,
        int destX, int destY, int width, int height,
        int srcX, int srcY);
static int CommonWrite(Tcl_Interp *interp,
        const char *fileName, Tcl_Obj *format,
        tkimg_Stream *handle, Tk_PhotoImageBlock *blockPtr);

static int ReadXBMFileHeader(Tcl_Interp *interp, ParseInfo *parseInfo,
        int *widthPtr, int *heightPtr);
static int NextBitmapWord(Tcl_Interp *interp, ParseInfo *parseInfoPtr);

static void printImgInfo (int width, int height, const char *fileName, const char *msg)
{
    Tcl_Channel outChan;
    char str[256];

    outChan = Tcl_GetStdChannel (TCL_STDOUT);
    if (!outChan) {
        return;
    }
    tkimg_snprintf(str, 256, "%s %s\n", msg, fileName);                    IMGOUT;
    tkimg_snprintf(str, 256, "\tSize in pixel: %d x %d\n", width, height); IMGOUT;
    Tcl_Flush(outChan);
}

static int ParseFormatOpts(
    Tcl_Interp *interp,
    Tcl_Obj *format,
    FMTOPT *opts,
    int mode)
{
    static const char *const readOptions[] = {
        "-verbose", "-background", "-foreground", NULL
    };
    enum readEnums {
        R_VERBOSE, R_BACKGROUND, R_FOREGROUND
    };
    static const char *const writeOptions[] = {
        "-verbose", NULL
    };
    enum writeEnums {
        W_VERBOSE
    };
    Tcl_Size objc, i;
    int index;
    int boolVal;
    char *optionStr;
    Tcl_Obj **objv;
    Tk_Window tkwin = Tk_MainWindow(interp);
    XColor * color;

    /* Initialize options with default values. 
     * Background color is set to transparent. Foreground color is set to black.
     */
    opts->verbose   =  0;
    opts->red[BG]   = -1;
    opts->green[BG] = -1;
    opts->blue[BG]  = -1;
    opts->red[FG]   =  0;
    opts->green[FG] =  0;
    opts->blue[FG]  =  0;

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
        color = NULL;
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
                case R_BACKGROUND: {
                    if (strlen (optionStr) > 0) {
                        color = Tk_GetColor (interp, tkwin, optionStr);
                        if (color) {
                            opts->red[BG]   = color->red>>8;
                            opts->green[BG] = color->green>>8;
                            opts->blue[BG]  = color->blue>>8;
                            Tk_FreeColor (color);
                        } else {
                            return TCL_ERROR;
                        }
                    }
                    break;
                }
                case R_FOREGROUND: {
                    if (strlen (optionStr) > 0) {
                        color = Tk_GetColor (interp, tkwin, optionStr);
                        if (color) {
                            opts->red[FG]   = color->red>>8;
                            opts->green[FG] = color->green>>8;
                            opts->blue[FG]  = color->blue>>8;
                            Tk_FreeColor (color);
                        } else {
                            return TCL_ERROR;
                        }
                    }
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
            }
        }
    }
    return TCL_OK;
}

/*
 *----------------------------------------------------------------------
 *
 * StringMatch --
 *
 *      This procedure is invoked by the photo image type to see if
 *      a datastring contains image data in XBM format.
 *
 * Results:
 *      The return value is >0 if the first characters in data look
 *      like XBM data, and 0 otherwise.
 *
 * Side effects:
 *      none
 *
 *----------------------------------------------------------------------
 */
static int StringMatch(
    Tcl_Obj *dataObj,           /* The data supplied by the image */
    Tcl_Obj *format,            /* User-specified format string, or NULL. */
    int *widthPtr,              /* The dimensions of the image are */
        int *heightPtr,                  /* returned here if the file is a valid
                                 * raw XBM file. */
    Tcl_Interp *interp
) {
    ParseInfo parseInfo;
    memset(&parseInfo, 0, sizeof (ParseInfo));

    if (!tkimg_ReadInitString(&parseInfo.handle, dataObj)) {
        return 0;
    }
    return ReadXBMFileHeader(interp, &parseInfo, widthPtr, heightPtr);
}


/*
 *----------------------------------------------------------------------
 *
 * FileMatch --
 *
 *      This procedure is invoked by the photo image type to see if
 *      a channel contains image data in XBM format.
 *
 * Results:
 *      The return value is >0 if the first characters in channel "chan"
 *      look like XBM data, and 0 otherwise.
 *
 * Side effects:
 *      The access position in chan may change.
 *
 *----------------------------------------------------------------------
 */

static int FileMatch(
    Tcl_Channel chan,           /* The image channel, open for reading. */
    const char *fileName,       /* The name of the image file. */
    Tcl_Obj *format,            /* User-specified format object, or NULL. */
    int *widthPtr,              /* The dimensions of the image are */
    int *heightPtr,             /* returned here if the file is a valid
                                 * raw XBM file. */
    Tcl_Interp *interp
) {
    ParseInfo parseInfo;
    memset(&parseInfo, 0, sizeof (ParseInfo));

    tkimg_ReadInitFile(&parseInfo.handle, chan);

    return ReadXBMFileHeader(interp, &parseInfo, widthPtr, heightPtr);
}

/*
 *----------------------------------------------------------------------
 *
 * CommonRead --
 *
 *      This procedure is called by the photo image type to read
 *      XBM format data from a file or string and write it into a
 *      given photo image.
 *
 * Results:
 *      A standard TCL completion code.  If TCL_ERROR is returned
 *      then an error message is left in interp->result.
 *
 * Side effects:
 *      The access position in file f is changed (if read from file)
 *      and new data is added to the image given by imageHandle.
 *
 *----------------------------------------------------------------------
 */
static int
CommonRead(
    Tcl_Interp *interp,         /* Interpreter to use for reporting errors. */
    ParseInfo *parseInfo,
    const char *fileName,
    Tcl_Obj *format,            /* User-specified format string, or NULL. */
    Tk_PhotoHandle imageHandle, /* The photo image to write into. */
    int destX, int destY,       /* Coordinates of top-left pixel in
                                 * photo image to be written to. */
    int width, int height,      /* Dimensions of block of photo image to
                                 * be written to. */
    int srcX, int srcY          /* Coordinates of top-left pixel to be used
                                 * in image being read. */
) {
    Tk_PhotoImageBlock block;
    FMTOPT opts;
    int fileWidth, fileHeight;
    int numBytes, row, col, value, i;
    unsigned char *data, *pixelPtr;
    char *end;
    int result = TCL_OK;

    if (ParseFormatOpts (interp, format, &opts, IMG_READ) == TCL_ERROR) {
        return TCL_ERROR;
    }

    ReadXBMFileHeader(interp, parseInfo, &fileWidth, &fileHeight);

    if (opts.verbose) {
        printImgInfo (fileWidth, fileHeight, fileName, "Reading image:");
    }

    if ((srcX + width) > fileWidth) {
        width = fileWidth - srcX;
    }
    if ((srcY + height) > fileHeight) {
        height = fileHeight - srcY;
    }
    if ((width <= 0) || (height <= 0)
        || (srcX >= fileWidth) || (srcY >= fileHeight)) {
        Tcl_AppendResult(interp, "Width or height are negative", (char *) NULL);
        return TCL_ERROR;
    }

    if (Tk_PhotoExpand(interp, imageHandle, destX + width, destY + height) == TCL_ERROR) {
        return TCL_ERROR;
    }

    numBytes = ((fileWidth+7)/8)*32;
    block.width = fileWidth;
    block.height = 1;
    block.pixelSize = 4;
    block.offset[0] = 0;
    block.offset[1] = 1;
    block.offset[2] = 2;
    block.offset[3] = 3;

    data = (unsigned char *) attemptckalloc((unsigned) numBytes);
    if (data == NULL) {
        Tcl_AppendResult (interp, "Unable to allocate memory for image data.", (char *) NULL);
        return TCL_ERROR;
    }
    block.pixelPtr = data + srcX*4;
    for (row = 0; row < srcY + height; row++) {
        pixelPtr = data;
        for (col = 0; col<(numBytes/32); col++) {
            if (NextBitmapWord(interp, parseInfo) != TCL_OK) {
                ckfree((char *) data);
                return TCL_ERROR;
            }
            value = (int) strtol(parseInfo->word, &end, 0);
            if (end == parseInfo->word) {
                ckfree((char *) data);
                return TCL_ERROR;
            }
            for (i=0; i<8; i++) {
                if( value & 0x1 ) {
                    *pixelPtr++ = opts.red[FG];
                    *pixelPtr++ = opts.green[FG];
                    *pixelPtr++ = opts.blue[FG];
                    *pixelPtr++ = 255;
                } else {
                    *pixelPtr++ = opts.red[BG];
                    *pixelPtr++ = opts.green[BG];
                    *pixelPtr++ = opts.blue[BG];
                    if( opts.red[BG] < 0 ) {
                        *pixelPtr++ = 0;
                    } else {
                        *pixelPtr++ = 255;
                    }
                }
                value >>= 1;
            }
        }
        if (row >= srcY) {
            if (Tk_PhotoPutBlock(interp, imageHandle, &block, destX, destY++, width, 1, TK_PHOTO_COMPOSITE_SET) == TCL_ERROR) {
                result = TCL_ERROR;
                break;
            }
        }
    }
    ckfree((char *) data);
    return result;
}

/*
 *----------------------------------------------------------------------
 *
 * FileRead --
 *
 *      This procedure is called by the photo image type to read
 *      XBM format data from a channel and write it into a given
 *      photo image.
 *
 * Results:
 *      A standard TCL completion code.  If TCL_ERROR is returned
 *      then an error message is left in interp->result.
 *
 * Side effects:
 *      The access position in channel chan is changed, and new data is
 *      added to the image given by imageHandle.
 *
 *----------------------------------------------------------------------
 */

static int
FileRead(
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
    ParseInfo parseInfo;
    memset(&parseInfo, 0, sizeof (ParseInfo));

    tkimg_ReadInitFile(&parseInfo.handle, chan);

    return CommonRead(interp, &parseInfo, fileName, format, imageHandle,
                destX, destY, width, height, srcX, srcY);
}

/*
 *----------------------------------------------------------------------
 *
 * StringRead --
 *
 *      This procedure is called by the photo image type to read
 *      XBM format data from a string and write it into a given
 *      photo image.
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

static int
StringRead(
    Tcl_Interp *interp,         /* Interpreter to use for reporting errors. */
    Tcl_Obj *dataObj,
    Tcl_Obj *format,            /* User-specified format string, or NULL. */
    Tk_PhotoHandle imageHandle, /* The photo image to write into. */
    int destX, int destY,       /* Coordinates of top-left pixel in
                                 * photo image to be written to. */
    int width, int height,      /* Dimensions of block of photo image to
                                 * be written to. */
    int srcX, int srcY          /* Coordinates of top-left pixel to be used
                                 * in image being read. */
) {
    ParseInfo parseInfo;
    memset(&parseInfo, 0, sizeof (ParseInfo));

    if (!tkimg_ReadInitString(&parseInfo.handle, dataObj)) {
        return 0;
    }
    return CommonRead(interp, &parseInfo, "InlineData", format, imageHandle,
                destX, destY, width, height, srcX, srcY);
}

/*
 *----------------------------------------------------------------------
 *
 * ReadXBMFileHeader --
 *
 *      This procedure reads the XBM header from the beginning of a
 *      XBM file and returns information from the header.
 *
 * Results:
 *      The return value is 1 if file "f" appears to start with a valid
 *      XBM header, and 0 otherwise.  If the header is valid,
 *      then *widthPtr and *heightPtr are modified to hold the
 *      dimensions of the image and *numColors holds the number of
 *      colors and byteSize the number of bytes used for 1 pixel.
 *
 * Side effects:
 *      The access position in f advances.
 *
 *----------------------------------------------------------------------
 */

#define UCHAR(c) ((unsigned char) (c))

/*
 *----------------------------------------------------------------------
 *
 * NextBitmapWord --
 *
 *      This procedure retrieves the next word of information (stuff
 *      between commas or white space) from a bitmap description.
 *
 * Results:
 *      Returns TCL_OK if all went well. In this case the next word,
 *      and its length, will be availble in *parseInfoPtr. If the end
 *      of the bitmap description was reached then TCL_ERROR is returned.
 *
 * Side effects:
 *      None.
 *
 *----------------------------------------------------------------------
 */

static int
NextBitmapWord(
    Tcl_Interp *interp,
    ParseInfo *parseInfoPtr             /* Describes what we're reading
                                         * and where we are in it. */
) {
    char *dst, buf;
    int num;

    buf = '\0';
    parseInfoPtr->wordLength = 0;
    dst = parseInfoPtr->word;

    for (num=tkimg_Read(&parseInfoPtr->handle,&buf,1); isspace(UCHAR(buf)) || (buf == ',');
            num=tkimg_Read(&parseInfoPtr->handle,&buf,1)) {
        if (num == 0) {
            Tcl_SetObjResult(interp, Tcl_ObjPrintf("Cannot read next word."));
            return TCL_ERROR;
        }
    }
    for ( ; !isspace(UCHAR(buf)) && (buf != ',') && (num != 0);
            num=tkimg_Read(&parseInfoPtr->handle,&buf,1)) {
        *dst = buf;
        dst++;
        parseInfoPtr->wordLength++;
        if (num == 0 || parseInfoPtr->wordLength > MAX_WORD_LENGTH) {
            Tcl_SetObjResult(interp, Tcl_ObjPrintf("Cannot read next word."));
            return TCL_ERROR;
        }
    }

    if (parseInfoPtr->wordLength == 0) {
        Tcl_SetObjResult(interp, Tcl_ObjPrintf("Cannot read next word."));
        return TCL_ERROR;
    }
    parseInfoPtr->word[parseInfoPtr->wordLength] = 0;
    return TCL_OK;
}

static int
ReadXBMFileHeader(
    Tcl_Interp *interp,
    ParseInfo *pi,
    int *widthPtr, int *heightPtr       /* The dimensions of the image are
                                         * returned here. */
) {
    int width, height;
    char *end;

    /*
     * Parse the lines that define the dimensions of the bitmap,
     * plus the first line that defines the bitmap data (it declares
     * the name of a data variable but doesn't include any actual
     * data).  These lines look something like the following:
     *
     *          #define foo_width 16
     *          #define foo_height 16
     *          #define foo_x_hot 3
     *          #define foo_y_hot 3
     *          static char foo_bits[] = {
     *
     * The x_hot and y_hot lines may or may not be present.  It's
     * important to check for "char" in the last line, in order to
     * reject old X10-style bitmaps that used shorts.
     */
    width = 0;
    height = 0;
    while (1) {
        if (NextBitmapWord(interp, pi) != TCL_OK) {
            return 0;
        }
        if ((pi->wordLength >= 6) && (pi->word[pi->wordLength-6] == '_')
                && (strcmp(pi->word+pi->wordLength-6, "_width") == 0)) {
            if (NextBitmapWord(interp, pi) != TCL_OK) {
                return 0;
            }
            width = strtol(pi->word, &end, 0);
            if ((end == pi->word) || (*end != 0)) {
                return 0;
            }
        } else if ((pi->wordLength >= 7) && (pi->word[pi->wordLength-7] == '_')
                && (strcmp(pi->word+pi->wordLength-7, "_height") == 0)) {
            if (NextBitmapWord(interp, pi) != TCL_OK) {
                return 0;
            }
            height = strtol(pi->word, &end, 0);
            if ((end == pi->word) || (*end != 0)) {
                return 0;
            }
        } else if ((pi->wordLength >= 6) && (pi->word[pi->wordLength-6] == '_')
                && (strcmp(pi->word+pi->wordLength-6, "_x_hot") == 0)) {
            if (NextBitmapWord(interp, pi) != TCL_OK) {
                return 0;
            }
            strtol(pi->word, &end, 0);
            if ((end == pi->word) || (*end != 0)) {
                return 0;
            }
        } else if ((pi->wordLength >= 6) && (pi->word[pi->wordLength-6] == '_')
                && (strcmp(pi->word+pi->wordLength-6, "_y_hot") == 0)) {
            if (NextBitmapWord(interp, pi) != TCL_OK) {
                return 0;
            }
            strtol(pi->word, &end, 0);
            if ((end == pi->word) || (*end != 0)) {
                return 0;
            }
        } else if ((pi->word[0] == 'c') && (strcmp(pi->word, "char") == 0)) {
            while (1) {
                if (NextBitmapWord(interp, pi) != TCL_OK) {
                    return 0;
                }
                if ((pi->word[0] == '{') && (pi->word[1] == 0)) {
                    goto getData;
                }
            }
        } else if ((pi->word[0] == '{') && (pi->word[1] == 0)) {

            return 0;
        }
    }

getData:
    if (width == 0 || height == 0) {
        return 0;
    }
    *widthPtr = width;
    *heightPtr = height;
    return 1;
}


/*
 *----------------------------------------------------------------------
 *
 * FileWrite
 *
 *      Writes a XBM image to a file. Just calls CommonWrite
 *      with appropriate arguments.
 *
 * Results:
 *      Returns the return value of CommonWrite
 *
 * Side effects:
 *      A file is (hopefully) created on success.
 *
 *----------------------------------------------------------------------
 */
static int
FileWrite(
    Tcl_Interp *interp,
    const char *fileName,
    Tcl_Obj *format,
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

    result = CommonWrite(interp, fileName, format, &handle, blockPtr);

    if (Tcl_Close(interp, chan) == TCL_ERROR) {
        return TCL_ERROR;
    }
    return result;
}


/*
 *----------------------------------------------------------------------
 *
 * StringWrite
 *
 *      Writes a XBM image to a string. Just calls CommonWrite
 *      with appropriate arguments.
 *
 * Results:
 *      Returns the return value of CommonWrite
 *
 * Side effects:
 *      TODO dataPtr is modified on success.
 *
 *----------------------------------------------------------------------
 */
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

/*
 *----------------------------------------------------------------------
 *
 * CommonWrite
 *
 *      This procedure writes a XBM image to the file fileName
 *      (if fileName != NULL) or to dataPtr.
 *
 * Results:
 *      Returns TCL_OK on success, or TCL_ERROR on error.
 *
 * Side effects:
 *      varies (see StringWrite and FileWrite)
 *
 *----------------------------------------------------------------------
 */
static int
CommonWrite(
    Tcl_Interp *interp,
    const char *fileName,
    Tcl_Obj *format,
    tkimg_Stream *handle,
    Tk_PhotoImageBlock *blockPtr
) {
    char buffer[256];
    unsigned char *pp;
    int x, y, value, mask;
    int sep = ' ';
    int alphaOffset;
    char *p = (char *) NULL;
    char *imgName;
    FMTOPT opts;
    static const char header[] =
"#define %s_width %d\n\
#define %s_height %d\n\
static char %s_bits[] = {\n";

    if (ParseFormatOpts (interp, format, &opts, IMG_WRITE) == TCL_ERROR) {
        return TCL_ERROR;
    }

    if (opts.verbose) {
        printImgInfo (blockPtr->width, blockPtr->height, fileName, "Saving image:");
    }

    alphaOffset = blockPtr->offset[0];
    if (alphaOffset < blockPtr->offset[1]) alphaOffset = blockPtr->offset[1];
    if (alphaOffset < blockPtr->offset[2]) alphaOffset = blockPtr->offset[2];
    if (++alphaOffset < blockPtr->pixelSize) {
        alphaOffset -= blockPtr->offset[0];
    } else {
        alphaOffset = 0;
    }

    /* compute image name */
    imgName = (char*)ckalloc(strlen(fileName)+1);
    memcpy (imgName, fileName, strlen(fileName)+1);
    p = strrchr(imgName, '/');
    if (p) {
        imgName = p+1;
    }
    p = strrchr(imgName, '\\');
    if (p) {
        imgName = p+1;
    }
    p = strrchr(imgName, ':');
    if (p) {
        imgName = p+1;
    }
    p = strchr(imgName, '.');
    if (p) {
        *p = 0;
    }

    tkimg_snprintf(buffer, 256, header, imgName, blockPtr->width, imgName,
                   blockPtr->height, imgName);
    tkimg_Write(handle, buffer, (Tcl_Size)strlen(buffer));

    /* write image itself */
    pp = blockPtr->pixelPtr + blockPtr->offset[0];
    sep = ' ';
    for (y = 0; y < blockPtr->height; y++) {
        value = 0;
        mask  = 1;
        for (x = 0; x < blockPtr->width; x++) {
            if (!alphaOffset || pp[alphaOffset]) {
                value |= mask;
            } else {
                /* make transparent pixel */
            }
            pp += blockPtr->pixelSize;
            mask <<= 1;
            if (mask >= 256)
             {
              tkimg_snprintf(buffer, 256, "%c 0x%02x",sep,value);
              tkimg_Write(handle, buffer, (Tcl_Size)strlen(buffer));
              value = 0;
              mask = 1;
              sep = ',';
             }
        }
        if (mask != 1) {
              tkimg_snprintf(buffer, 256, "%c 0x%02x",sep, value);
              tkimg_Write(handle, buffer, (Tcl_Size)strlen(buffer));
        }

        if (y == blockPtr->height - 1) {
            tkimg_Write(handle, "};", 2);
        } else {
            tkimg_Write(handle, ",\n", 2);
            sep = ' ';
        }
    }
    return TCL_OK;
}
