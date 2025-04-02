/*
 * xpm.c
 *
 * XPM photo image type, Tcl/Tk package.
 *
 * A photo image handler for X Windows Pixmap image format.
 *
 * For a list of available format options see function ParseFormatOpts
 * and the documentation img-xpm.
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

#if defined(_WIN32) && !defined(__GNUC__)
#define strncasecmp _strnicmp
#endif

#ifndef MAC_TCL
#include <sys/types.h>
#endif

/* constants used only in this file */

#define XPM_MONO     1
#define XPM_GRAY_4   2
#define XPM_GRAY     3
#define XPM_COLOR    4
#define XPM_SYMBOLIC 5
#define XPM_UNKNOWN  6

/* Format options structure for use with ParseFormatOpts */
typedef struct {
    int verbose;
} FMTOPT;

#define MAX_BUFFER 4096

/*
 * Prototypes for local procedures defined in this file:
 */

static int CommonRead(Tcl_Interp *interp, tkimg_Stream *handle,
        const char *fileName,
        Tcl_Obj *format, Tk_PhotoHandle imageHandle,
        int destX, int destY, int width, int height,
        int srcX, int srcY);
static int CommonWrite(Tcl_Interp *interp, const char *fileName,
        Tcl_Obj *format, tkimg_Stream *handle,
        Tk_PhotoImageBlock *blockPtr);

static int ReadXPMFileHeader(tkimg_Stream *handle,
        int *widthPtr, int *heightPtr, int *numColors, int *byteSize);
static char *GetType(char *colorDefn, int *type_ret);
static char *GetColor(char *colorDefn, char *colorName, int *type_ret);
static char *Gets(tkimg_Stream *handle, char *buffer, int size);

/*
 *----------------------------------------------------------------------
 * Gets
 *
 *      Allows other routines to get their data from a channel
 *      or a binary string.
 *
 * Results:
 *      same as fgets: NULL pointer on any error, otherwise
 *      it returns buffer
 *
 * Side effects:
 *      The access position of the file changes OR
 *      The access pointer dataPtr->p is changed
 *
 *----------------------------------------------------------------------
 */

static char *
Gets(
    tkimg_Stream *handle,
    char *buffer,
    int size
) {
    char *p;

    /* read data from tkimg_Stream */
    p = buffer;
    while ((tkimg_Read(handle, p, 1) == 1)) {
        if (--size <= 0) {
            *p = 0; return buffer;
        }
        if (*p++ == '\n') {
            *p = 0;
            return buffer;
        }
    }
    *p = 0;
    return (p != buffer) ? buffer :(char *) NULL;
}

static void printImgInfo (int width, int height, int numColors, int byteSize,
                          const char *fileName, const char *msg)
{
    Tcl_Channel outChan;
    char str[256];

    outChan = Tcl_GetStdChannel (TCL_STDOUT);
    if (!outChan) {
        return;
    }
    tkimg_snprintf(str, 256, "%s %s\n", msg, fileName);                     IMGOUT;
    tkimg_snprintf(str, 256, "Width and Height: %dx%d\n", width, height/2); IMGOUT;
    tkimg_snprintf(str, 256, "Number of colors: %d\n", numColors);          IMGOUT;
    tkimg_snprintf(str, 256, "Byte size:        %d\n", byteSize);           IMGOUT;
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
         "-verbose", NULL
    };
    enum writeEnums {
        W_VERBOSE
    };
    Tcl_Size objc, i;
    char *optionStr;
    Tcl_Obj **objv;
    int index;
    int boolVal;

    /* Initialize options with default values. */
    opts->verbose = 0;

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
 *      a datastring contains image data in XPM format.
 *
 * Results:
 *      The return value is >0 if the first characters in data look
 *      like XPM data, and 0 otherwise.
 *
 * Side effects:
 *      none
 *
 *----------------------------------------------------------------------
 */
static int StringMatch(
    Tcl_Obj *dataObj,           /* The data supplied by the image */
    Tcl_Obj *format,            /* User-specified format object, or NULL. */
    int *widthPtr,              /* The dimensions of the image are */
    int *heightPtr,             /* returned here if the file is a valid
                                 * raw XPM file. */
    Tcl_Interp *interp
) {
    int numColors, byteSize;
    tkimg_Stream handle;
    memset(&handle, 0, sizeof (tkimg_Stream));

    if (!tkimg_ReadInitString(&handle, dataObj)) {
        return 0;
    }
    return ReadXPMFileHeader(&handle, widthPtr, heightPtr, &numColors, &byteSize);
}

/*
 *----------------------------------------------------------------------
 *
 * FileMatch --
 *
 *      This procedure is invoked by the photo image type to see if
 *      a file contains image data in XPM format.
 *
 * Results:
 *      The return value is >0 if the first characters in channel "chan"
 *      look like XPM data, and 0 otherwise.
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
                                 * raw XPM file. */
    Tcl_Interp *interp
) {
    int numColors, byteSize;
    tkimg_Stream handle;
    memset(&handle, 0, sizeof (tkimg_Stream));

    tkimg_ReadInitFile(&handle, chan);

    return ReadXPMFileHeader(&handle, widthPtr, heightPtr, &numColors, &byteSize);
}

/*
 *----------------------------------------------------------------------
 *
 * CommonRead --
 *
 *      This procedure is called by the photo image type to read
 *      XPM format data from a file or string and write it into a
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
    tkimg_Stream *handle,       /* The image channel, open for reading. */
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
    int fileWidth = 0, fileHeight = 0, numColors = 0, byteSize = 0;
    int h, retVal;
    int nchan;
    unsigned char *pixelPtr;
    Tk_PhotoImageBlock block;
    Tcl_HashTable colorTable;
    Tk_Window tkwin = Tk_MainWindow(interp);
    Display *display = Tk_Display(tkwin);
    Colormap colormap = Tk_Colormap(tkwin);
    int depth = Tk_Depth(tkwin);
    char *p;
    char *buffer;
    int maxBuffer;
    int i, isMono;
    int color1;
    unsigned int data;
    Tcl_HashEntry *hPtr;
    int result = TCL_OK;
    FMTOPT opts;

    if (ParseFormatOpts(interp, format, &opts, IMG_READ) == TCL_ERROR) {
        return TCL_ERROR;
    }

    Tcl_InitHashTable(&colorTable, TCL_ONE_WORD_KEYS);

    switch ((Tk_Visual(tkwin))->class) {
      case StaticGray:
      case GrayScale:
        isMono = 1;
        break;
      default:
        isMono = 0;
    }

    retVal = ReadXPMFileHeader(handle, &fileWidth, &fileHeight, &numColors, &byteSize);
    if (retVal == 0) {
        Tcl_AppendResult(interp, "couldn't read XPM header", (char *)NULL);
        return TCL_ERROR;
    }
    if ((fileWidth <= 0) || (fileHeight <= 0)) {
        Tcl_AppendResult(interp, "XPM image file has dimension(s) <= 0",
                (char *) NULL);
        return TCL_ERROR;
    }
    if ((byteSize < 1) || (byteSize > 4)) {
        Tcl_AppendResult(interp, "XPM image file has invalid byte size ",
                "(should be 1, 2, 3 or 4)", (char *) NULL);
        return TCL_ERROR;
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

    /* buffer must be large enough to hold either the color definitions
     * as well as the row data. For images with little number of columns,
     * the calculation done below does not give enough space for the
     * color descriptions, ex. "  s None c None",
     */
    maxBuffer = byteSize * fileWidth + 2;
    if ( maxBuffer < 30 ) {
        maxBuffer = 30;
    }
    buffer = (char*)attemptckalloc(maxBuffer);
    if (buffer == NULL) {
        Tcl_AppendResult (interp, "Unable to allocate memory for row data.", (char *) NULL);
        return TCL_ERROR;
    }
    for (i=0; i<numColors; i++) {
        char * colorDefn;               /* the color definition line */
        char * colorName;               /* temp place to hold the color name
                                         * defined for one type of visual */
        char * useName;                 /* the color name used for this
                                         * color. If there are many names
                                         * defined, choose the name that is
                                         * "best" for the target visual
                                         */
        XColor color;
        int found;

        p = Gets(handle, buffer, maxBuffer);
        if (p == NULL) {
            ckfree ((char *) buffer);
            Tcl_AppendResult (interp, "Unable to read color map.", (char *) NULL);
            return TCL_ERROR;
        }
        while (((p = strchr(p,'\"')) == NULL)) {
            p = Gets(handle, buffer, maxBuffer);
            if (p == NULL) {
                ckfree ((char *) buffer);
                Tcl_AppendResult (interp, "Unable to read color map.", (char *) NULL);
                return TCL_ERROR;
            }
            p = buffer;
        }
        colorDefn = p + byteSize + 1;
        colorName = (char*)attemptckalloc(strlen(colorDefn)+1);
        useName   = (char*)attemptckalloc(strlen(colorDefn)+1);
        if (colorDefn == NULL) {
            ckfree ((char *) buffer);
            Tcl_AppendResult (interp, "Unable to allocate memory for image data.", (char *) NULL);
            return TCL_ERROR;
        }
        if (useName == NULL) {
            ckfree ((char *) buffer);
            ckfree ((char *) colorDefn);
            Tcl_AppendResult (interp, "Unable to allocate memory for image data.", (char *) NULL);
            return TCL_ERROR;
        }
        found     = 0;
        color1 = 0;
        data = 0;

        while (colorDefn && *colorDefn) {
            int type;

            if ((colorDefn=GetColor(colorDefn, colorName, &type)) == NULL) {
                break;
            }
            if (colorName[0] == '\0') {
                continue;
            }

            switch (type) {
              case XPM_MONO:
                if (isMono && depth == 1) {
                    strcpy(useName, colorName);
                    found = 1; goto gotcolor;
                }
                break;
              case XPM_GRAY_4:
                if (isMono && depth == 4) {
                    strcpy(useName, colorName);
                    found = 1; goto gotcolor;
                }
                break;
              case XPM_GRAY:
                if (isMono && depth > 4) {
                    strcpy(useName, colorName);
                    found = 1; goto gotcolor;
                }
                break;
              case XPM_COLOR:
                if (!isMono) {
                    strcpy(useName, colorName);
                    found = 1; goto gotcolor;
                }
                break;
            }
            if (type != XPM_SYMBOLIC && type != XPM_UNKNOWN) {
                if (!found) {                   /* use this color as default */
                    strcpy(useName, colorName);
                    found = 1;
                }
            }
        }

gotcolor:

        memcpy(&color1, p+1, byteSize);
        p = useName;
        while ((*p != 0) && (*p != '"') && (*p != '\t')) {
            p++;
        }
        *p = 0;

        data = 0;
        if (strncasecmp(useName, "none",4)) {
          if (XParseColor(display, colormap, useName, &color) == 0) {
            color.red = color.green = color.blue = 0;
          }
          ((unsigned char *) &data)[0] = color.red>>8;
          ((unsigned char *) &data)[1] = color.green>>8;
          ((unsigned char *) &data)[2] = color.blue>>8;
          ((unsigned char *) &data)[3] = 255;
        }

        hPtr = Tcl_CreateHashEntry(&colorTable, INT2PTR(color1), &found);
        Tcl_SetHashValue(hPtr, INT2PTR(data));

        ckfree(colorName);
        ckfree(useName);
    }

    if (opts.verbose) {
        printImgInfo (fileWidth, fileHeight, numColors, byteSize,
                      fileName, "Reading image:");
    }

    Tk_PhotoGetImage(imageHandle, &block);

    if (Tk_PhotoExpand(interp, imageHandle, destX + width, destY + height) == TCL_ERROR) {
        ckfree ((char *) buffer);
        return TCL_ERROR;
    }

    nchan = block.pixelSize;
    block.pitch = nchan * fileWidth;
    block.width = width;
    block.height = 1;
    block.offset[0] = 0;
    block.offset[1] = 1;
    block.offset[2] = 2;
    block.offset[3] = (nchan == 4? 3: 0);
    block.pixelPtr = (unsigned char *) attemptckalloc((unsigned) nchan * width);
    if (block.pixelPtr == NULL) {
        Tcl_AppendResult (interp, "Unable to allocate memory for image data.", (char *) NULL);
        ckfree ((char *) buffer);
        return TCL_ERROR;
    }

    i = srcY;
    while (i-- > 0) {
        p = Gets(handle, buffer, maxBuffer);
        if (p == NULL) {
            ckfree ((char *) buffer);
            Tcl_AppendResult (interp, "Unable to read color definition.", (char *) NULL);
            return TCL_ERROR;
        }
        while (((p = strchr(p,'\"')) == NULL)) {
            p = Gets(handle, buffer, maxBuffer);
            if (p == NULL) {
                ckfree ((char *) buffer);
                Tcl_AppendResult (interp, "Unable to read color definition.", (char *) NULL);
                return TCL_ERROR;
            }
            p = buffer;
        }
    }


    for (h = height; h > 0; h--) {
        p = Gets(handle, buffer, maxBuffer);
        if (p == NULL) {
            ckfree ((char *) buffer);
            Tcl_AppendResult (interp, "Unable to read color definition.", (char *) NULL);
            return TCL_ERROR;
        }
        while (((p = strchr(p,'\"')) == NULL)) {
            p = Gets(handle, buffer, maxBuffer);
            if (p == NULL) {
                ckfree ((char *) buffer);
                Tcl_AppendResult (interp, "Unable to read color definition.", (char *) NULL);
                return TCL_ERROR;
            }
            p = buffer;
        }
        p += byteSize * srcX + 1;
        pixelPtr = block.pixelPtr;

        for (i = 0; i < width; ) {
            unsigned int col;

            memcpy((char *) &color1, p, byteSize);
            hPtr = Tcl_FindHashEntry(&colorTable, INT2PTR(color1));

            /*
             * if hPtr == NULL, we have an invalid color entry in the XPM
             * file. We use transparant as default color
             */
            if (hPtr != (Tcl_HashEntry *)NULL)
                col = (unsigned int) PTR2INT(Tcl_GetHashValue(hPtr));
            else
                col = (unsigned int) 0;

            /*
             * we've found a non-transparent pixel, let's search the next
             * transparent pixel and copy this block to the image
             */
            if (col) {
                int len = 0, j;

                j = i;
                pixelPtr = block.pixelPtr;
                do {
                    memcpy(pixelPtr, &col, block.pixelSize);
                    pixelPtr += block.pixelSize;
                    i++;
                    len++;
                    p += byteSize;

                    if (i < width) {
                        memcpy((char *) &color1, p, byteSize);
                        hPtr = Tcl_FindHashEntry(&colorTable, INT2PTR(color1));
                        if (hPtr != (Tcl_HashEntry *)NULL)
                            col = (unsigned int) PTR2INT(Tcl_GetHashValue(hPtr));
                        else
                            col = (unsigned int) 0;
                    }
                } while ((i < width) && col);
                if (Tk_PhotoPutBlock(interp, imageHandle, &block, destX+j, destY, len, 1, TK_PHOTO_COMPOSITE_SET) == TCL_ERROR) {
                    result = TCL_ERROR;
                    break;
                }
            } else {
                p += byteSize;
                i++;
            }
        }
        destY++;
    }

    Tcl_DeleteHashTable(&colorTable);

    ckfree ((char *) buffer);
    ckfree((char *) block.pixelPtr);
    return result;
}

/*
 *----------------------------------------------------------------------
 *
 * FileRead --
 *
 *      This procedure is called by the photo image type to read
 *      XPM format data from a channel and write it into a given
 *      photo image.
 *
 * Results:
 *      A standard TCL completion code.  If TCL_ERROR is returned
 *      then an error message is left in interp->result.
 *
 * Side effects:
 *      The access position in channel chan is changed, and new
 *      data is added to the image given by imageHandle.
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
    int retVal;
    tkimg_Stream handle;
    memset(&handle, 0, sizeof (tkimg_Stream));

    tkimg_ReadInitFile(&handle, chan);

    tkimg_EnableReadBuffer (&handle, 1);
    retVal = CommonRead (interp, &handle, fileName, format, imageHandle,
                         destX, destY, width, height, srcX, srcY);
    tkimg_EnableReadBuffer (&handle, 0);
    return retVal;
}


/*
 *----------------------------------------------------------------------
 *
 * StringRead --
 *
 *      This procedure is called by the photo image type to read
 *      XPM format data from a string and write it into a given
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

    if (!tkimg_ReadInitString(&handle, dataObj)) {
        return 0;
    }
    return CommonRead(interp, &handle, "InlineData", format, imageHandle,
            destX, destY, width, height, srcX, srcY);
}


/*
 *----------------------------------------------------------------------
 *
 * ReadXPMFileHeader --
 *
 *      This procedure reads the XPM header from the beginning of a
 *      XPM file and returns information from the header.
 *
 * Results:
 *      The return value is 1 if file "f" appears to start with a valid
 *      XPM header, and 0 otherwise.  If the header is valid,
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

static int
ReadXPMFileHeader(
    tkimg_Stream *handle,          /* handle to read the header from */
    int *widthPtr, int *heightPtr, /* The dimensions of the image are returned here. */
    int *numColors,                /* the number of colors is returned here */
    int *byteSize                  /* number of bytes per pixel */
) {
    char buffer[MAX_BUFFER];
    char *p;

    p = Gets(handle, buffer, MAX_BUFFER);
    if (p == NULL) {
        return 0;
    }
    p = buffer;
    while (*p && isspace(UCHAR(*p))) {
        p++;
    }
    if (strncmp("/* XPM", p, 6) != 0) {
        return 0;
    }
    while ((p = strchr(p,'{')) == NULL) {
        p = Gets(handle, buffer, MAX_BUFFER);
        if (p == NULL) {
            return 0;
        }
        p = buffer;
    }
    while ((p = strchr(p,'"')) == NULL) {
        p = Gets(handle, buffer, MAX_BUFFER);
        if (p == NULL) {
            return 0;
        }
        p = buffer;
    }
    p++;
    while (p && *p && isspace(UCHAR(*p))) {
        p++;
    }
    *widthPtr = strtoul(p, &p, 0);
    if (p == NULL || *widthPtr <= 0) {
        return 0;
    }
    while (p && *p && isspace(UCHAR(*p))) {
        p++;
    }
    *heightPtr = strtoul(p, &p, 0);
    if (p == NULL || *heightPtr <= 0) {
        return 0;
    }
    while (p && *p && isspace(UCHAR(*p))) {
        p++;
    }
    *numColors = strtoul(p, &p, 0);
    if (p == NULL) {
        return 0;
    }
    while (p && *p && isspace(UCHAR(*p))) {
        p++;
    }
    *byteSize = strtoul(p, &p, 0);
    if (p == NULL) {
        return 0;
    }
    return 1;
}

static char * GetType(
    char * colorDefn,
    int  * type_ret
) {
    char * p = colorDefn;

    /* skip white spaces */
    while (*p && isspace(UCHAR(*p))) {
        p ++;
    }

    /* parse the type */
    if (p[0] != '\0' && p[0] == 'm' &&
        p[1] != '\0' && isspace(UCHAR(p[1]))) {
        *type_ret = XPM_MONO;
        p += 2;
    }
    else if (p[0] != '\0' && p[0] == 'g' &&
             p[1] != '\0' && p[1] == '4' &&
             p[2] != '\0' && isspace(UCHAR(p[2]))) {
        *type_ret = XPM_GRAY_4;
        p += 3;
    }
    else if (p[0] != '\0' && p[0] == 'g' &&
             p[1] != '\0' && isspace(UCHAR(p[1]))) {
        *type_ret = XPM_GRAY;
        p += 2;
    }
    else if (p[0] != '\0' && p[0] == 'c' &&
             p[1] != '\0' && isspace(UCHAR(p[1]))) {
        *type_ret = XPM_COLOR;
        p += 2;
    }
    else if (p[0] != '\0' && p[0] == 's' &&
             p[1] != '\0' && isspace(UCHAR(p[1]))) {
        *type_ret = XPM_SYMBOLIC;
        p += 2;
    }
    else {
        *type_ret = XPM_UNKNOWN;
        return NULL;
    }

    return p;
}

/* colorName is guaranteed to be big enough */
static char * GetColor(
    char * colorDefn,
    char * colorName,           /* if found, name is copied to this array */
    int  * type_ret
) {
    int type;
    char * p;

    if (!colorDefn) {
        return NULL;
    }

    if ((colorDefn = GetType(colorDefn, &type)) == NULL) {
        /* unknown type */
        return NULL;
    }
    else {
        *type_ret = type;
    }

    /* skip white spaces */
    while (*colorDefn && isspace(UCHAR(*colorDefn))) {
        colorDefn ++;
    }

    p = colorName;

    while (1) {
        int dummy;

        while (*colorDefn && !isspace(UCHAR(*colorDefn))) {
            *p++ = *colorDefn++;
        }

        if (!*colorDefn) {
            break;
        }

        if (GetType(colorDefn, &dummy) == NULL) {
            /* the next string should also be considered as a part of a color
             * name */

            while (*colorDefn && isspace(UCHAR(*colorDefn))) {
                *p++ = *colorDefn++;
            }
        } else {
            break;
        }
        if (!*colorDefn) {
            break;
        }
    }

    /* Mark the end of the colorName */
    *p = '\0';

    return colorDefn;
}


/*
 *----------------------------------------------------------------------
 *
 * FileWrite
 *
 *      Writes a XPM image to a file. Just calls CommonWrite
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
 *      Writes a XPM image to a string. Just calls CommonWrite
 *      with appropriate arguments.
 *
 * Results:
 *      Returns the return value of CommonWrite
 *
 * Side effects:
 *      The byte array containing the image is modified on success.
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
 *      This procedure writes a XPM image to the file filename
 *      (if filename != NULL) or to dataPtr.
 *
 * Results:
 *      Returns TCL_OK on success, or TCL_ERROR on error.
 *      Possible failures are:
 *      1. cannot access file (permissions or path not found)
 *      2. TkPhotoGetMask fails to retrieve the region mask
 *         for the image (should not happen)
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
    int x, y, i;
    int found;
    Tcl_HashTable colors;
    Tcl_HashEntry *entry;
    Tcl_HashSearch search;
    unsigned char *pp;
    unsigned char *pixelPtr, *rowPixPtr;
    int ncolors, chars_per_pixel;
    int greenOffset, blueOffset, alphaOffset;
    union {
        ClientData value;
        char component[3];
    } col;
    union {
        ClientData value;
        char component[5];
    } temp;
    char buffer[256], *p, *imgName;
    FMTOPT opts;

    /*
     * xpm_chars[] must be 64 chars long
     */
    static char xpm_chars[] =
            ".#abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    if (ParseFormatOpts(interp, format, &opts, IMG_WRITE) == TCL_ERROR) {
        return TCL_ERROR;
    }

    greenOffset = blockPtr->offset[1] - blockPtr->offset[0];
    blueOffset = blockPtr->offset[2] - blockPtr->offset[0];
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
    tkimg_snprintf(buffer, 256, "/* XPM */\nstatic char * %s[] = {\n", imgName);
    tkimg_Write(handle, buffer, (Tcl_Size)strlen(buffer));

    /*
     * Compute size of colortable
     */
    Tcl_InitHashTable(&colors, TCL_ONE_WORD_KEYS);
    ncolors = 0;
    col.value = 0;
    for (y = 0; y < blockPtr->height; y++) {
        pp = blockPtr->pixelPtr + y * blockPtr->pitch + blockPtr->offset[0];
        for (x = blockPtr->width-1; x >=0; x--) {
            if (!alphaOffset || pp[alphaOffset]) {
                col.component[0] = pp[0];
                col.component[1] = pp[greenOffset];
                col.component[2] = pp[blueOffset];
                if (Tcl_FindHashEntry(&colors, (char *) col.value) == NULL) {
                    ncolors++;
                    entry = Tcl_CreateHashEntry(&colors, (char *) col.value,
                            &found);
                }
            }
            pp += blockPtr->pixelSize;
        }
    }

    /* compute number of characters per pixel */
    chars_per_pixel = 1;
    i = ncolors;
    while (i > 64) {
        chars_per_pixel++;
        i /= 64;
    }

    /* write image info into XPM */
    tkimg_snprintf(buffer, 256, "\"%d %d %d %d\",\n", blockPtr->width, blockPtr->height,
                   ncolors+(alphaOffset != 0), chars_per_pixel);
    tkimg_Write(handle, buffer, (Tcl_Size)strlen(buffer));

    if (opts.verbose) {
        printImgInfo (blockPtr->width, blockPtr->height, ncolors+(alphaOffset != 0), chars_per_pixel,
                      fileName, "Saving image:");
    }

    /* write transparent color id if transparency is available*/
    if (alphaOffset) {
        strcpy(temp.component, "    ");
        temp.component[chars_per_pixel] = 0;
        tkimg_snprintf(buffer, 256, "\"%s s None c None\",\n", temp.component);
        tkimg_Write(handle, buffer, (Tcl_Size)strlen(buffer));
    }

    /* write colormap strings */
    entry = Tcl_FirstHashEntry(&colors, &search);
    y = 0;
    temp.component[chars_per_pixel] = 0;
    while (entry) {
        /* compute a color identifier for color #y */
        for (i = 0, x = y++; i < chars_per_pixel; i++, x /= 64)
            temp.component[i] = xpm_chars[x & 63];

        /*
         * and put it in the hashtable
         * this is a little bit tricky
         */
        Tcl_SetHashValue(entry, (char *) temp.value);
        pp = (unsigned char *)&entry->key.oneWordValue;
        tkimg_snprintf(buffer, 256, "\"%s c #%02x%02x%02x\",\n",
                       temp.component, pp[0], pp[1], pp[2]);
        tkimg_Write(handle, buffer, (Tcl_Size)strlen(buffer));
        entry = Tcl_NextHashEntry(&search);
    }

    /* write image itself */
    rowPixPtr = blockPtr->pixelPtr + blockPtr->offset[0];
    buffer[chars_per_pixel] = 0;
    for (y = 0; y < blockPtr->height; y++) {
        tkimg_Write(handle, "\"", 1);
        pixelPtr = rowPixPtr;
        for (x = 0; x < blockPtr->width; x++) {
            if (!alphaOffset || pixelPtr[alphaOffset]) {
                col.component[0] = pixelPtr[0];
                col.component[1] = pixelPtr[greenOffset];
                col.component[2] = pixelPtr[blueOffset];
                entry = Tcl_FindHashEntry(&colors, (char *) col.value);
                temp.value = Tcl_GetHashValue(entry);
                memcpy(buffer, temp.component, chars_per_pixel);
            } else {
                /* make transparent pixel */
                memcpy(buffer, "    ", chars_per_pixel);
            }
            pixelPtr += blockPtr->pixelSize;
            tkimg_Write(handle, buffer, (Tcl_Size)strlen(buffer));
        }
        if (y == blockPtr->height - 1) {
            tkimg_Write(handle, "\"};", 3);
        } else {
            tkimg_Write(handle, "\",\n", 3);
        }
        rowPixPtr += blockPtr->pitch;
    }

    /* Delete the hash table */
    Tcl_DeleteHashTable(&colors);

    return TCL_OK;
}
