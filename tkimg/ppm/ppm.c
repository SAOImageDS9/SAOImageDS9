/*
 * ppm.c
 *
 * PPM photo image type, Tcl/Tk package.
 *
 * A photo image handler for the portable pixmap image format.
 *
 * For a list of available format options see function ParseFormatOpts
 * and the documentation img-ppm.
 *
 * Copyright (c) 2001-2024 Paul Obermeier <obermeier@users.sourceforge.net>
 *
 * See the file "license.terms" for information on usage and redistribution
 * of this file, and for a DISCLAIMER OF ALL WARRANTIES.
 *
 * Part of this code was taken from Tk's tkImgPPM.c:
 *
 * >> tkImgPPM.c --
 * >>
 * >>  A photo image file handler for PPM (Portable PixMap) files.
 * >>
 * >> Copyright (c) 1994 The Australian National University.
 * >> Copyright (c) 1994-1997 Sun Microsystems, Inc.
 *
 */

#include <stdlib.h>
#include <float.h>
#include <math.h>

/*
 * Generic initialization code, parameterized via CPACKAGE and PACKAGE.
 */

#include "init.c"


/*
#define DEBUG_LOCAL
*/

/*
 * Define PGM and PPM, i.e. gray images and color images.
 */

#define PGM 1
#define PPM 2

/* Some general defines and typedefs. */
#define TRUE  1
#define FALSE 0
#define BOTTOM_UP   0
#define TOP_DOWN    1

#define strIntel    "Intel"
#define strMotorola "Motorola"
#define strTopDown  "TopDown"
#define strBottomUp "BottomUp"

typedef unsigned char Boln;     /* Boolean value: TRUE or FALSE */
typedef unsigned char UByte;    /* Unsigned  8 bit integer */
typedef char  Byte;             /* Signed    8 bit integer */
typedef unsigned short UShort;  /* Unsigned 16 bit integer */
typedef short Short;            /* Signed   16 bit integer */
typedef int UInt;               /* Unsigned 32 bit integer */
typedef int Int;                /* Signed   32 bit integer */
typedef float Float;            /* IEEE     32 bit floating point */
typedef double Double;          /* IEEE     64 bit floating point */

typedef struct {
    Double minVal;
    Double maxVal;
    Double gamma;
    Boln   verbose;
    Boln   writeAscii;
    Int    scanOrder;
} FMTOPT;

/* PPM file header structure */
typedef struct {
    Int   width;
    Int   height;
    Int   maxVal;
    Boln  isAscii;
} PPMHEADER;

/* Structure to hold information about the PPM file being processed. */
typedef struct {
    PPMHEADER th;
    UByte  *pixbuf;
    UShort *ushortBuf;
    UByte  *ubyteBuf;
} PPMFILE;

static void printImgInfo (int width, int height, int maxVal, int isAscii, int nChans,
                          FMTOPT *opts, const char *filename, const char *msg)
{
    Tcl_Channel outChan;
    char str[256];

    outChan = Tcl_GetStdChannel (TCL_STDOUT);
    if (!outChan) {
        return;
    }
    tkimg_snprintf (str, 256, "%s %s\n", msg, filename);                                               IMGOUT;
    tkimg_snprintf (str, 256, "\tSize in pixel     : %d x %d\n", width, height);                       IMGOUT;
    tkimg_snprintf (str, 256, "\tMaximum value     : %d\n", maxVal);                                   IMGOUT;
    tkimg_snprintf (str, 256, "\tNumber of channels: %d\n", nChans);                                   IMGOUT;
    tkimg_snprintf (str, 256, "\tGamma correction  : %f\n", opts->gamma);                              IMGOUT;
    tkimg_snprintf (str, 256, "\tMinimum map value : %f\n", opts->minVal);                             IMGOUT;
    tkimg_snprintf (str, 256, "\tMaximum map value : %f\n", opts->maxVal);                             IMGOUT;
    tkimg_snprintf (str, 256, "\tVertical encoding : %s\n", opts->scanOrder == TOP_DOWN?
                                                            strTopDown: strBottomUp);                  IMGOUT;
    tkimg_snprintf (str, 256, "\tAscii format      : %s\n", isAscii?  "Yes": "No");                    IMGOUT;
    tkimg_snprintf (str, 256, "\tHost byte order   : %s\n", tkimg_IsIntel ()?  strIntel: strMotorola); IMGOUT;
    Tcl_Flush (outChan);
}

static void ppmClose (PPMFILE *tf)
{
    if (tf->pixbuf)    ckfree ((char *)tf->pixbuf);
    if (tf->ushortBuf) ckfree ((char *)tf->ushortBuf);
    if (tf->ubyteBuf)  ckfree ((char *)tf->ubyteBuf);
    return;
}

#define UCHAR(c) ((unsigned char) (c))

static int getNextVal (Tcl_Interp *interp, tkimg_Stream *handle, UInt *val)
{
    char c, buf[TCL_INTEGER_SPACE];
    UInt i;

    /* First skip leading whitespaces. */
    while (tkimg_Read(handle, &c, 1) == 1) {
        if (!isspace(UCHAR(c))) {
            break;
        }
    }

    buf[0] = c;
    i = 1;
    while (tkimg_Read(handle, &c, 1) == 1 && i < TCL_INTEGER_SPACE) {
        if (isspace(UCHAR(c))) {
            buf[i] = '\0';
            sscanf (buf, "%u", val);
            return TRUE;
        }
        buf[i++] = c;
    }
    Tcl_AppendResult (interp, "cannot read next ASCII value", (char *) NULL);
    return FALSE;
}

static Boln readUShortRow (Tcl_Interp *interp, tkimg_Stream *handle, UShort *pixels,
                           Int nShorts, char *buf, Boln swapBytes, Boln isAscii)
{
    UShort *mPtr = pixels;
    char   *bufPtr = buf;
    UInt   i, val;

    #ifdef DEBUG_LOCAL
        printf ("Reading %d UShorts\n", nShorts);
    #endif
    if (isAscii) {
        for (i=0; i<nShorts; i++) {
            if (!getNextVal (interp, handle, &val)) {
                return FALSE;
            }
            pixels[i] = (UShort) val;
        }
        return TRUE;
    }

    if (2 * nShorts != tkimg_Read(handle, buf, 2 * nShorts)) {
        return FALSE;
    }

    if (swapBytes) {
        for (i=0; i<nShorts; i++) {
            ((char *)mPtr)[0] = bufPtr[1];
            ((char *)mPtr)[1] = bufPtr[0];
            mPtr++;
            bufPtr += 2;
        }
    } else {
        for (i=0; i<nShorts; i++) {
            ((char *)mPtr)[0] = bufPtr[0];
            ((char *)mPtr)[1] = bufPtr[1];
            mPtr++;
            bufPtr += 2;
        }
    }
    return TRUE;
}

static Boln readUByteRow (Tcl_Interp *interp, tkimg_Stream *handle, UByte *pixels,
                          Int nBytes, char *buf, Boln swapBytes, Boln isAscii)
{
    UByte *mPtr = pixels;
    char  *bufPtr = buf;
    UInt  i, val;

    #ifdef DEBUG_LOCAL
        printf ("Reading %d UBytes\n", nBytes);
    #endif
    if (isAscii) {
        for (i=0; i<nBytes; i++) {
            if (!getNextVal (interp, handle, &val)) {
                return FALSE;
            }
            pixels[i] = (UByte) val;
        }
        return TRUE;
    }

    if (nBytes != tkimg_Read(handle, buf, nBytes)) {
        return FALSE;
    }

    for (i=0; i<nBytes; i++) {
        ((char *)mPtr)[0] = bufPtr[0];
        mPtr++;
        bufPtr += 1;
    }
    return TRUE;
}

static Boln readUShortFile (Tcl_Interp *interp, tkimg_Stream *handle, UShort *buf, Int width, Int height,
                            Int nchan, Boln swapBytes, Boln isAscii, Boln verbose,
                            Double minVals[], Double maxVals[])
{
    Int    x, y, c;
    UShort *bufPtr = buf;
    char   *line;

    #ifdef DEBUG_LOCAL
        printf ("readUShortFile: Width=%d Height=%d nchan=%d swapBytes=%s\n",
                 width, height, nchan, swapBytes? "yes": "no");
    #endif
    for (c=0; c<nchan; c++) {
        minVals[c] =  DBL_MAX;
        maxVals[c] = -DBL_MAX;
    }
    line = attemptckalloc (sizeof (UShort) * nchan * width);
    if (line == NULL) {
        Tcl_AppendResult (interp, "Unable to allocate memory for image data.", (char *) NULL);
        return FALSE;
    }

    for (y=0; y<height; y++) {
        if (!readUShortRow (interp, handle, bufPtr, nchan * width, line, swapBytes, isAscii)) {
            return FALSE;
        }
        for (x=0; x<width; x++) {
            for (c=0; c<nchan; c++) {
                if (*bufPtr > maxVals[c]) maxVals[c] = *bufPtr;
                if (*bufPtr < minVals[c]) minVals[c] = *bufPtr;
                bufPtr++;
            }
        }
    }
    if (verbose) {
        printf ("\tMinimum pixel values :");
        for (c=0; c<nchan; c++) {
            printf (" %u", (UShort)minVals[c]);
        }
        printf ("\n");
        printf ("\tMaximum pixel values :");
        for (c=0; c<nchan; c++) {
            printf (" %u", (UShort)maxVals[c]);
        }
        printf ("\n");
        fflush (stdout);
    }
    ckfree (line);
    return TRUE;
}

static Boln readUByteFile (Tcl_Interp *interp, tkimg_Stream *handle, UByte *buf, Int width, Int height,
                           Int nchan, Boln swapBytes, Boln isAscii, Boln verbose,
                           Double minVals[], Double maxVals[])
{
    Int   x, y, c;
    UByte *bufPtr = buf;
    char  *line;

    #ifdef DEBUG_LOCAL
        printf ("readUByteFile: Width=%d Height=%d nchan=%d swapBytes=%s\n",
                 width, height, nchan, swapBytes? "yes": "no");
    #endif
    for (c=0; c<nchan; c++) {
        minVals[c] =  DBL_MAX;
        maxVals[c] = -DBL_MAX;
    }
    line = attemptckalloc (sizeof (UByte) * nchan * width);
    if (line == NULL) {
        Tcl_AppendResult (interp, "Unable to allocate memory for image data.", (char *) NULL);
        return FALSE;
    }

    for (y=0; y<height; y++) {
        if (!readUByteRow (interp, handle, bufPtr, nchan * width, line, swapBytes, isAscii)) {
            return FALSE;
        }
        for (x=0; x<width; x++) {
            for (c=0; c<nchan; c++) {
                if (*bufPtr > maxVals[c]) maxVals[c] = *bufPtr;
                if (*bufPtr < minVals[c]) minVals[c] = *bufPtr;
                bufPtr++;
            }
        }
    }
    if (verbose) {
        printf ("\tMinimum pixel values :");
        for (c=0; c<nchan; c++) {
            printf (" %u", (UByte)minVals[c]);
        }
        printf ("\n");
        printf ("\tMaximum pixel values :");
        for (c=0; c<nchan; c++) {
            printf (" %u", (UByte)maxVals[c]);
        }
        printf ("\n");
        fflush (stdout);
    }
    ckfree (line);
    return TRUE;
}

static int ParseFormatOpts(
    Tcl_Interp *interp,
    Tcl_Obj *format,
    FMTOPT *opts,
    int mode
) {
    static const char *const readOptions[] = {
         "-verbose", "-scanorder", "-min", "-max", "-gamma", NULL
    };
    enum readEnums {
        R_VERBOSE, R_SCANORDER, R_MIN, R_MAX, R_GAMMA
    };
    static const char *const writeOptions[] = {
         "-verbose", "-ascii", NULL
    };
    enum writeEnums {
        W_VERBOSE, W_ASCII
    };
    Tcl_Size objc, i;
    int index;
    char *optionStr;
    Tcl_Obj **objv;
    int boolVal;
    double doubleVal;

    /* Initialize options with default values. */
    opts->verbose    = 0;
    opts->minVal     = -1.0;
    opts->maxVal     = -1.0;
    opts->gamma      = 1.0;
    opts->scanOrder  = TOP_DOWN;
    opts->writeAscii = 0;

    if (tkimg_ListObjGetElements (interp, format, &objc, &objv) == TCL_ERROR) {
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
                case R_SCANORDER: {
                    if (!strncmp (optionStr, strTopDown, strlen (strTopDown))) {
                        opts->scanOrder = TOP_DOWN;
                    } else if (!strncmp (optionStr, strBottomUp, strlen (strBottomUp))) {
                        opts->scanOrder = BOTTOM_UP;
                    } else {
                        Tcl_SetObjResult(interp, Tcl_ObjPrintf(
                            "Invalid scanline mode \"%s\": must be TopDown or BottomUp.",
                            optionStr));
                        return TCL_ERROR;
                    }
                    break;
                }
                case R_MIN: {
                    if (Tcl_GetDouble(interp, optionStr, &doubleVal) == TCL_ERROR) {
                        Tcl_SetObjResult(interp, Tcl_ObjPrintf(
                            "Invalid minimum map value \"%s\": must be a double value.",
                            optionStr));
                        return TCL_ERROR;
                    }
                    if (doubleVal >= 0.0) {
                        opts->minVal = doubleVal;
                    }
                    break;
                }
                case R_MAX: {
                    if (Tcl_GetDouble(interp, optionStr, &doubleVal) == TCL_ERROR) {
                        Tcl_SetObjResult(interp, Tcl_ObjPrintf(
                            "Invalid maximum map value \"%s\": must be a double value.",
                            optionStr));
                        return TCL_ERROR;
                    }
                    if (doubleVal >= 0.0) {
                        opts->maxVal = doubleVal;
                    }
                    break;
                }
                case R_GAMMA: {
                    if (Tcl_GetDouble(interp, optionStr, &doubleVal) == TCL_ERROR || doubleVal < 0.0) {
                         Tcl_SetObjResult(interp, Tcl_ObjPrintf(
                            "Invalid gamma value \"%s\": must be a double value greater or equal to zero.",
                            optionStr));
                        return TCL_ERROR;
                    }
                    opts->gamma = doubleVal;
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
                case W_ASCII: {
                    if (Tcl_GetBoolean(interp, optionStr, &boolVal) == TCL_ERROR) {
                        Tcl_SetObjResult(interp, Tcl_ObjPrintf(
                            "Invalid ascii mode \"%s\": must be 1 or 0, on or off, true or false.",
                            optionStr));
                        return TCL_ERROR;
                    }
                    opts->writeAscii = boolVal;
                    break;
                }
            }
        }
    }
    return TCL_OK;
}

/*
 * Prototypes for local procedures defined in this file:
 */

static int CommonMatch (tkimg_Stream *handle, int *widthPtr,
                int *heightPtr, int *maxIntensityPtr);
static int CommonRead (Tcl_Interp *interp, tkimg_Stream *handle,
                const char *filename, Tcl_Obj *format,
                Tk_PhotoHandle imageHandle, int destX, int destY,
                int width, int height, int srcX, int srcY);
static int CommonWrite (Tcl_Interp *interp,
                const char *filename, Tcl_Obj *format,
                tkimg_Stream *handle, Tk_PhotoImageBlock *blockPtr);
static int ReadPPMFileHeader (tkimg_Stream *handle, int *widthPtr,
                int *heightPtr, int *maxIntensityPtr, Boln *isAsciiPtr);


/*
 *----------------------------------------------------------------------
 *
 * FileMatch --
 *
 *      This procedure is invoked by the photo image type to see if
 *      a file contains image data in PPM format.
 *
 * Results:
 *      The return value is >0 if the first characters in file "f" look
 *      like PPM data, and 0 otherwise.
 *
 * Side effects:
 *      The access position in f may change.
 *
 *----------------------------------------------------------------------
 */

static int FileMatch(
    Tcl_Channel chan,           /* The image file, open for reading. */
    const char *filename,       /* The name of the image file. */
    Tcl_Obj *format,            /* User-specified format object, or NULL. */
    int *widthPtr,              /* The dimensions of the image are */
    int *heightPtr,             /* returned here if the file is a valid
                                 * PPM file. */
    Tcl_Interp *interp          /* Interpreter to use for reporting errors. */
) {
    int dummy;
    tkimg_Stream handle;
    memset(&handle, 0, sizeof (tkimg_Stream));

    tkimg_ReadInitFile(&handle, chan);

    return CommonMatch(&handle, widthPtr, heightPtr, &dummy);
}

static int StringMatch(
    Tcl_Obj *dataObj,
    Tcl_Obj *format,
    int *widthPtr,
    int *heightPtr,
    Tcl_Interp *interp
) {
    int dummy;
    tkimg_Stream handle;
    memset(&handle, 0, sizeof (tkimg_Stream));

    if (!tkimg_ReadInitString(&handle, dataObj)) {
        return 0;
    }
    return CommonMatch(&handle, widthPtr, heightPtr, &dummy);
}

static int CommonMatch(
    tkimg_Stream *handle,
    int *widthPtr,
    int *heightPtr,
    int *maxIntensityPtr
) {
    Boln dummy;
    return ReadPPMFileHeader(handle, widthPtr, heightPtr, maxIntensityPtr, &dummy);
}


/*
 *----------------------------------------------------------------------
 *
 * FileRead --
 *
 *      This procedure is called by the photo image type to read
 *      PPM format data from a file and write it into a given
 *      photo image.
 *
 * Results:
 *      A standard TCL completion code.  If TCL_ERROR is returned
 *      then an error message is left in the interp's result.
 *
 * Side effects:
 *      The access position in file f is changed, and new data is
 *      added to the image given by imageHandle.
 *
 *----------------------------------------------------------------------
 */

static int FileRead(
    Tcl_Interp *interp,         /* Interpreter to use for reporting errors. */
    Tcl_Channel chan,           /* The image file, open for reading. */
    const char *filename,       /* The name of the image file. */
    Tcl_Obj *format,            /* User-specified format string, or NULL. */
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

    return CommonRead (interp, &handle, filename, format, imageHandle,
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
    return CommonRead (interp, &handle, "InlineData", format, imageHandle,
                       destX, destY, width, height, srcX, srcY);
}

static int CommonRead(
    Tcl_Interp *interp,         /* Interpreter to use for reporting errors. */
    tkimg_Stream *handle,                /* The image file, open for reading. */
    const char *filename,       /* The name of the image file. */
    Tcl_Obj *format,            /* User-specified format string, or NULL. */
    Tk_PhotoHandle imageHandle, /* The photo image to write into. */
    int destX, int destY,       /* Coordinates of top-left pixel in
                                 * photo image to be written to. */
    int width, int height,      /* Dimensions of block of photo image to
                                 * be written to. */
    int srcX, int srcY          /* Coordinates of top-left pixel to be used
                                 * in image being read. */
) {
    Int fileWidth, fileHeight, maxIntensity;
    Int x, y, c;
    int type;
    Tk_PhotoImageBlock block;
    FMTOPT opts;
    PPMFILE tf;
    Boln swapBytes, isAscii;
    int stopY, outY;
    int bytesPerPixel;
    Double minVals[IMG_MAX_CHANNELS], maxVals[IMG_MAX_CHANNELS];
    UByte  *pixbufPtr;
    UShort *ushortBufPtr;
    UByte  *ubyteBufPtr;
    Double gtable[IMG_GAMMA_TABLE_SIZE];

    memset (&tf, 0, sizeof (PPMFILE));

    swapBytes = tkimg_IsIntel ();

    if (ParseFormatOpts (interp, format, &opts, IMG_READ) == TCL_ERROR) {
        return TCL_ERROR;
    }

    type = ReadPPMFileHeader (handle, &fileWidth, &fileHeight, &maxIntensity, &isAscii);
    if (type == 0) {
        Tcl_AppendResult(interp, "couldn't read PPM header from file \"",
                          filename, "\"", (char *)NULL);
        return TCL_ERROR;
    }

    if ((fileWidth <= 0) || (fileHeight <= 0)) {
        Tcl_AppendResult(interp, "PPM image file \"", filename,
                          "\" has dimension(s) <= 0", (char *) NULL);
        return TCL_ERROR;
    }
    if ((maxIntensity <= 0) || (maxIntensity >= 65536)) {
        char buffer[TCL_INTEGER_SPACE];

        tkimg_snprintf(buffer, TCL_INTEGER_SPACE, "%d", maxIntensity);
        Tcl_AppendResult(interp, "PPM image file \"", filename,
                          "\" has bad maximum intensity value ", buffer,
                          (char *) NULL);
        return TCL_ERROR;
    }

    bytesPerPixel = maxIntensity >= 256? 2: 1;

    tkimg_CreateGammaTable (opts.gamma, gtable);

    if (opts.verbose) {
        printImgInfo (fileWidth, fileHeight, maxIntensity, isAscii, type==PGM? 1: 3,
                      &opts, filename, "Reading image:");
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

    if (type == PGM) {
        block.pixelSize = 1;
        block.offset[1] = 0;
        block.offset[2] = 0;
    } else {
        block.pixelSize = 3;
        block.offset[1] = 1;
        block.offset[2] = 2;
    }
    block.offset[3] = block.offset[0] = 0;
    block.width = width;
    block.height = 1;
    block.pitch = block.pixelSize * fileWidth;
    tf.pixbuf = (UByte *) attemptckalloc (fileWidth * block.pixelSize);
    if (tf.pixbuf == NULL) {
        Tcl_AppendResult (interp, "Unable to allocate memory for image data.", (char *) NULL);
        return TCL_ERROR;
    }
    block.pixelPtr = tf.pixbuf + srcX * block.pixelSize;

    switch (bytesPerPixel) {
        case 2: {
            tf.ushortBuf = (UShort *)attemptckalloc (fileWidth*fileHeight*block.pixelSize*sizeof (UShort));
            if (tf.ushortBuf == NULL) {
                Tcl_AppendResult (interp, "Unable to allocate memory for image data.", (char *) NULL);
                ppmClose (&tf);
                return TCL_ERROR;
            }
            if (!readUShortFile(interp, handle, tf.ushortBuf, fileWidth, fileHeight, block.pixelSize,
                                 swapBytes, isAscii, opts.verbose, minVals, maxVals)) {
                ppmClose (&tf);
                return TCL_ERROR;
            }
            break;
        }
        case 1: {
            tf.ubyteBuf = (UByte *)attemptckalloc (fileWidth*fileHeight*block.pixelSize*sizeof (UByte));
            if (tf.ubyteBuf == NULL) {
                Tcl_AppendResult (interp, "Unable to allocate memory for image data.", (char *) NULL);
                ppmClose (&tf);
                return TCL_ERROR;
            }
            if (!readUByteFile (interp, handle, tf.ubyteBuf, fileWidth, fileHeight, block.pixelSize,
                        swapBytes, isAscii, opts.verbose, minVals, maxVals)) {
                ppmClose (&tf);
                return TCL_ERROR;
            }
            break;
        }
    }

    if (opts.minVal >= 0.0) {
        for (c=0; c<block.pixelSize; c++) {
            minVals[c] = opts.minVal;
        }
    }
    if (opts.maxVal >= 0.0) {
        for (c=0; c<block.pixelSize; c++) {
            maxVals[c] = opts.maxVal;
        }
    }
    switch (bytesPerPixel) {
        case 2: {
            tkimg_RemapUShortValues (
                tf.ushortBuf, fileWidth, fileHeight,
                block.pixelSize, minVals, maxVals, -1.0f, 0
            );
            break;
        }
    }

    if (Tk_PhotoExpand(interp, imageHandle, destX + width, destY + height) == TCL_ERROR) {
        ppmClose (&tf);
        return TCL_ERROR;
    }

    stopY = srcY + height;
    outY = destY;

    for (y=0; y<stopY; y++) {
        pixbufPtr = tf.pixbuf;
        switch (bytesPerPixel) {
            case 2: {
                if (opts.scanOrder == BOTTOM_UP) {
                    ushortBufPtr = tf.ushortBuf + (fileHeight -1 - y) * fileWidth * block.pixelSize;
                } else {
                    ushortBufPtr = tf.ushortBuf + y * fileWidth * block.pixelSize;
                }
                tkimg_UShortToUByte (fileWidth * block.pixelSize, ushortBufPtr,
                                     opts.gamma != 1.0? gtable: NULL, pixbufPtr);
                ushortBufPtr += fileWidth * block.pixelSize;
                break;
            }
            case 1: {
                if (opts.scanOrder == BOTTOM_UP) {
                    ubyteBufPtr = tf.ubyteBuf + (fileHeight -1 - y) * fileWidth * block.pixelSize;
                } else {
                    ubyteBufPtr = tf.ubyteBuf + y * fileWidth * block.pixelSize;
                }
                for (x=0; x<fileWidth * block.pixelSize; x++) {
                    pixbufPtr[x] = ubyteBufPtr[x];
                }
                ubyteBufPtr += fileWidth * block.pixelSize;
                break;
            }
        }
        if (y >= srcY) {
            if (Tk_PhotoPutBlock(interp, imageHandle, &block, destX, outY,
                                width, 1,
                                block.offset[3]?
                                TK_PHOTO_COMPOSITE_SET:
                                TK_PHOTO_COMPOSITE_OVERLAY) == TCL_ERROR) {
                ppmClose (&tf);
                return TCL_ERROR;
            }
            outY++;
        }
    }
    ppmClose (&tf);
    return TCL_OK;
}


/*
 *----------------------------------------------------------------------
 *
 * FileWrite --
 *
 *      This procedure is invoked to write image data to a file in PPM
 *      format.
 *
 * Results:
 *      A standard TCL completion code.  If TCL_ERROR is returned
 *      then an error message is left in the interp's result.
 *
 * Side effects:
 *      Data is written to the file given by "filename".
 *
 *----------------------------------------------------------------------
 */

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

    chan = tkimg_OpenFileChannel (interp, filename, "w");
    if (!chan) {
        return TCL_ERROR;
    }

    tkimg_WriteInitFile(&handle, chan);

    result = CommonWrite (interp, filename, format, &handle, blockPtr);
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
    result = CommonWrite (interp, "InlineData", format, &handle, blockPtr);

    if (result == TCL_OK) {
        Tcl_SetObjResult(interp, handle.byteObj);
    }
    return result;
}

static int writeAsciiRow (tkimg_Stream *handle, const unsigned char *scanline, int nBytes)
{
    int i;
    char buf[TCL_INTEGER_SPACE];

    for (i=0; i<nBytes; i++) {
        tkimg_snprintf (buf, TCL_INTEGER_SPACE, "%d\n", scanline[i]);
        if (tkimg_Write(handle, buf, strlen(buf)) != strlen(buf)) {
            return i;
        }
    }
    return nBytes;
}

static int CommonWrite(
    Tcl_Interp *interp,
    const char *filename,
    Tcl_Obj *format,
    tkimg_Stream *handle,
    Tk_PhotoImageBlock *blockPtr
) {
    int w, h;
    int redOff, greenOff, blueOff, nBytes;
    unsigned char *scanline, *scanlinePtr;
    unsigned char *pixelPtr, *pixLinePtr;
    char header[16 + TCL_INTEGER_SPACE * 2];
    FMTOPT opts;

    if (ParseFormatOpts (interp, format, &opts, IMG_WRITE) == TCL_ERROR) {
        return TCL_ERROR;
    }

    tkimg_snprintf(header, 16 + TCL_INTEGER_SPACE * 2,
                  "P%d\n%d %d\n255\n", opts.writeAscii? 3: 6,
                   blockPtr->width, blockPtr->height);
    if (tkimg_Write(handle, header, strlen(header)) != strlen(header)) {
        goto writeerror;
    }

    pixLinePtr = blockPtr->pixelPtr + blockPtr->offset[0];
    redOff     = 0;
    greenOff   = blockPtr->offset[1] - blockPtr->offset[0];
    blueOff    = blockPtr->offset[2] - blockPtr->offset[0];

    nBytes = blockPtr->width * 3; /* Only RGB images allowed. */
    scanline = (unsigned char *) attemptckalloc((unsigned) nBytes);
    if (scanline == NULL) {
        Tcl_AppendResult (interp, "Unable to allocate memory for image data.", (char *) NULL);
        goto writeerror;
    }
    for (h = blockPtr->height; h > 0; h--) {
        pixelPtr = pixLinePtr;
        scanlinePtr = scanline;
        for (w = blockPtr->width; w > 0; w--) {
            *(scanlinePtr++) = pixelPtr[redOff];
            *(scanlinePtr++) = pixelPtr[greenOff];
            *(scanlinePtr++) = pixelPtr[blueOff];
            pixelPtr += blockPtr->pixelSize;
        }
        if (opts.writeAscii) {
            if (writeAsciiRow(handle, scanline, nBytes) != nBytes) {
                goto writeerror;
            }
        } else {
            if (tkimg_Write(handle, (char *) scanline, nBytes) != nBytes) {
                goto writeerror;
            }
        }
        pixLinePtr += blockPtr->pitch;
    }
    ckfree ((char *) scanline);
    return TCL_OK;

 writeerror:
    Tcl_AppendResult(interp, "Error writing \"", filename, "\": ",
                      (char *) NULL);
    return TCL_ERROR;
}


/*
 *----------------------------------------------------------------------
 *
 * ReadPPMFileHeader --
 *
 *      This procedure reads the PPM header from the beginning of a
 *      PPM file and returns information from the header.
 *
 * Results:
 *      The return value is PGM if file "f" appears to start with
 *      a valid PGM header, PPM if "f" appears to start with a valid
 *      PPM header, and 0 otherwise.  If the header is valid,
 *      then *widthPtr and *heightPtr are modified to hold the
 *      dimensions of the image and *maxIntensityPtr is modified to
 *      hold the value of a "fully on" intensity value.
 *
 * Side effects:
 *      The access position in f advances.
 *
 *----------------------------------------------------------------------
 */

static int
ReadPPMFileHeader(
    tkimg_Stream *handle,        /* Image file to read the header from */
    int *widthPtr, int *heightPtr,  /* The dimensions of the image are
                                     * returned here. */
    int *maxIntensityPtr,       /* The maximum intensity value for
                                 * the image is stored here. */
    Boln *isAsciiPtr
) {
#define BUFFER_SIZE 1000
    char buffer[BUFFER_SIZE];
    int i, numFields;
    int type = 0;
    char c;

    /*
     * Read 4 space-separated fields from the file, ignoring
     * comments (any line that starts with "#").
     */

    if (tkimg_Read(handle, &c, 1) != 1) {
        return 0;
    }
    i = 0;
    for (numFields = 0; numFields < 4; numFields++) {
        /*
         * Skip comments and white space.
         */

        while (1) {
            while (isspace(UCHAR(c))) {
                if (tkimg_Read(handle, &c, 1) != 1) {
                    return 0;
                }
            }
            if (c != '#') {
                break;
            }
            do {
                if (tkimg_Read(handle, &c, 1) != 1) {
                    return 0;
                }
            } while (c != '\n');
        }

        /*
         * Read a field (everything up to the next white space).
         */

        while (!isspace(UCHAR(c))) {
            if (i < (BUFFER_SIZE-2)) {
                buffer[i] = c;
                i++;
            }
            if (tkimg_Read(handle, &c, 1) != 1) {
                goto done;
            }
        }
        if (i < (BUFFER_SIZE-1)) {
            buffer[i] = ' ';
            i++;
        }
    }
    done:
    buffer[i] = 0;

    /*
     * Parse the fields, which are: id, width, height, maxIntensity.
     */

    *isAsciiPtr = 0;
    if (strncmp(buffer, "P6 ", 3) == 0) {
        type = PPM;
    } else if (strncmp(buffer, "P3 ", 3) == 0) {
        type = PPM;
        *isAsciiPtr = 1;
    } else if (strncmp(buffer, "P5 ", 3) == 0) {
        type = PGM;
    } else if (strncmp(buffer, "P2 ", 3) == 0) {
        type = PGM;
        *isAsciiPtr = 1;
    } else {
        return 0;
    }
    if (sscanf(buffer+3, "%d %d %d", widthPtr, heightPtr, maxIntensityPtr)
            != 3) {
        return 0;
    }
    return type;
}
