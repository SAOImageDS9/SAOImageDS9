/*
 * raw.c
 *
 * RAW photo image type, Tcl/Tk package.
 *
 * A photo image handler for raw binary data interpreted
 * as grayscale or color images.
 *
 * For a list of available format options see function ParseFormatOpts
 * and the documentation img-raw.
 *
 * Copyright (c) 2001-2024 Paul Obermeier <obermeier@users.sourceforge.net>
 *
 * See the file "license.terms" for information on usage and redistribution
 * of this file, and for a DISCLAIMER OF ALL WARRANTIES.
 *
 */

#include <stdlib.h>
#include <math.h>

/*
 * Generic initialization code, parameterized via CPACKAGE and PACKAGE.
 */

#include "init.c"

/* Maximum length of a header line. */
#define HEADLEN 100

/* Header fields. */
#define strMagic     "Magic=%s\n"
#define strWidth     "Width=%d\n"
#define strHeight    "Height=%d\n"
#define strNumChan   "NumChan=%d\n"
#define strByteOrder "ByteOrder=%s\n"
#define strScanOrder "ScanOrder=%s\n"
#define strPixelType "PixelType=%s\n"

/* Header fields possible values. */
#define strIntel    "Intel"
#define strMotorola "Motorola"
#define strTopDown  "TopDown"
#define strBottomUp "BottomUp"
#define strDouble   "double"
#define strFloat    "float"
#define strUInt     "int"
#define strUShort   "short"
#define strUByte    "byte"

#define strUnknown  "Unknown"

#define BOTTOM_UP   0
#define TOP_DOWN    1
#define INTEL       0
#define MOTOROLA    1
#define TYPE_DOUBLE 0
#define TYPE_FLOAT  1
#define TYPE_UINT   2
#define TYPE_USHORT 3
#define TYPE_UBYTE  4

/* Some general defines and typedefs. */
#define TRUE  1
#define FALSE 0

typedef unsigned char Boln;     /* Boolean value: TRUE or FALSE */
typedef unsigned char UByte;    /* Unsigned  8 bit integer */
typedef char  Byte;             /* Signed    8 bit integer */
typedef unsigned short UShort;  /* Unsigned 16 bit integer */
typedef short Short;            /* Signed   16 bit integer */
typedef unsigned int UInt;      /* Unsigned 32 bit integer */
typedef int Int;                /* Signed   32 bit integer */
typedef float Float;            /* IEEE     32 bit floating point */
typedef double Double;          /* IEEE     64 bit floating point */

/* RAW file header structure */
typedef struct {
    char  id[3];
    Int   nChans;
    Int   width;
    Int   height;
    Int   scanOrder;
    Int   byteOrder;
    Int   pixelType;
} RAWHEADER;

/* Format options structure for use with ParseFormatOpts */
typedef struct {
    Int    width;
    Int    height;
    Int    skipBytes;
    Int    nchan;
    Int    scanOrder;
    Int    byteOrder;
    Int    pixelType;
    Int    mapMode;
    Double gamma;        /* IMG_MAP_MINMAX and IMG_MAP_AGC */
    Double minVal;       /* IMG_MAP_MINMAX */
    Double maxVal;       /* IMG_MAP_MINMAX */
    Double saturation;   /* IMG_MAP_AGC */
    Double cutOff;       /* IMG_MAP_AGC */
    Boln   verbose;
    Boln   printAgc;
    Boln   uuencode;
    Boln   useHeader;
} FMTOPT;

/* Structure to hold information about the image file being processed. */
typedef struct {
    RAWHEADER th;
    UByte  *pixbuf;
    Double *doubleBuf;
    Float  *floatBuf;
    UInt   *uintBuf;
    UShort *ushortBuf;
    UByte  *ubyteBuf;
} RAWFILE;

static void rawClose (RAWFILE *tf, Boln fastMode)
{
    if (!fastMode) {
        if (tf->pixbuf) ckfree ((char *)tf->pixbuf);
    }
    if (tf->doubleBuf) ckfree ((char *)tf->doubleBuf);
    if (tf->floatBuf)  ckfree ((char *)tf->floatBuf);
    if (tf->uintBuf)   ckfree ((char *)tf->uintBuf);
    if (tf->ushortBuf) ckfree ((char *)tf->ushortBuf);
    if (tf->ubyteBuf)  ckfree ((char *)tf->ubyteBuf);
    return;
}

static void printImgInfo (RAWHEADER *th, FMTOPT *opts,
                          const char *filename, const char *msg)
{
    Tcl_Channel outChan;
    char str[256];

    outChan = Tcl_GetStdChannel (TCL_STDOUT);
    if (!outChan) {
        return;
    }
    tkimg_snprintf (str, 256, "%s %s\n", msg, filename);                                                          IMGOUT;
    tkimg_snprintf (str, 256, "\tSize in pixel     : %d x %d\n", th->width, th->height);                          IMGOUT;
    tkimg_snprintf (str, 256, "\tNumber of channels: %d\n",      th->nChans);                                     IMGOUT;
    tkimg_snprintf (str, 256, "\tPixel type        : %s\n",      (th->pixelType == TYPE_DOUBLE? strDouble:
                                                                 (th->pixelType == TYPE_FLOAT?  strFloat:
                                                                 (th->pixelType == TYPE_UINT?   strUInt:
                                                                 (th->pixelType == TYPE_USHORT? strUShort:
                                                                 (th->pixelType == TYPE_UBYTE?  strUByte:
                                                                                                strUnknown)))))); IMGOUT;
    tkimg_snprintf (str, 256, "\tVertical encoding  : %s\n",      th->scanOrder == TOP_DOWN?
                                                                  strTopDown: strBottomUp);                       IMGOUT;
    tkimg_snprintf (str, 256, "\tHost byte order    : %s\n",      tkimg_IsIntel ()?  strIntel: strMotorola);      IMGOUT;
    tkimg_snprintf (str, 256, "\tFile byte order    : %s\n",      th->byteOrder == INTEL?
                                                                  strIntel: strMotorola);                         IMGOUT;
    tkimg_snprintf (str, 256, "\tMapping mode       : %s\n",      (opts->mapMode == IMG_MAP_NONE?   IMG_MAP_NONE_STR:
                                                                  (opts->mapMode == IMG_MAP_MINMAX? IMG_MAP_MINMAX_STR:
                                                                  (opts->mapMode == IMG_MAP_AGC?    IMG_MAP_AGC_STR:
                                                                                                strUnknown))));   IMGOUT;
    if (opts->mapMode != IMG_MAP_NONE) {
        tkimg_snprintf (str, 256, "\tGamma correction  : %lf\n",       opts->gamma);                              IMGOUT;
        if (opts->mapMode == IMG_MAP_MINMAX) {
            tkimg_snprintf (str, 256, "\tMinimum map value : %lf\n",   opts->minVal);                             IMGOUT;
            tkimg_snprintf (str, 256, "\tMaximum map value : %lf\n",   opts->maxVal);                             IMGOUT;
        }
        if (opts->mapMode == IMG_MAP_AGC) {
            tkimg_snprintf (str, 256, "\tSaturation        : %lf\n",   opts->saturation);                         IMGOUT;
            tkimg_snprintf (str, 256, "\tCutOff            : %lf%%\n", opts->cutOff);                             IMGOUT;
        }
    }
    Tcl_Flush (outChan);
}

static Boln readHeaderLine (Tcl_Interp *interp, tkimg_Stream *handle, char *buf)
{
    char c, *bufPtr, *bufEndPtr;
    Boln failure;

    buf[0]    = '\0';
    bufPtr    = buf;
    bufEndPtr = buf + HEADLEN;
    failure   = TRUE;

    while (tkimg_Read(handle, &c, 1) == 1 && bufPtr < bufEndPtr) {
        if (c == '\n') {
            *bufPtr = '\0';
            failure = FALSE;
            break;
        }
        *bufPtr = c;
        bufPtr++;
    }
    if (failure) {
        Tcl_AppendResult (interp, "RAW handler: Error reading header line\n", (char *)NULL);
        return FALSE;
    }
    return TRUE;
}

static Boln readHeader (Tcl_Interp *interp, tkimg_Stream *handle, RAWHEADER *th)
{
    char buf[HEADLEN];
    char tmpStr[HEADLEN];

    if (!readHeaderLine (interp, handle, buf) ||
        (1 != sscanf (buf, strMagic, th->id))) {
        Tcl_AppendResult (interp, "Unable to parse header field Magic\n", (char *)NULL);
        return FALSE;
    }
    if (strcmp (th->id, "RAW") != 0) {
        Tcl_AppendResult (interp, "Invalid value for header field Magic:",
                                  "Must be \"RAW\"\n", (char *)NULL);
        return FALSE;
    }

    if (!readHeaderLine (interp, handle, buf) ||
        (1 != sscanf (buf, strWidth, &th->width))) {
        Tcl_AppendResult (interp, "Unable to parse header field Width\n", (char *)NULL);
        return FALSE;
    }
    if (th->width < 1) {
        Tcl_AppendResult (interp, "Invalid value for header field Width:",
                                  "Must be greater than zero\n", (char *)NULL);
        return FALSE;
    }

    if (!readHeaderLine (interp, handle, buf) ||
        (1 != sscanf (buf, strHeight, &th->height))) {
        Tcl_AppendResult (interp, "Unable to parse header field Height\n", (char *)NULL);
        return FALSE;
    }
    if (th->height < 1) {
        Tcl_AppendResult (interp, "Invalid value for header field Height:",
                                  "Must be greater than zero\n", (char *)NULL);
        return FALSE;
    }

    if (!readHeaderLine (interp, handle, buf) ||
        (1 != sscanf (buf, strNumChan, &th->nChans))) {
        Tcl_AppendResult (interp, "Unable to parse header field NumChan\n", (char *)NULL);
        return FALSE;
    }
    if (th->nChans != 1 && th->nChans != 3) {
        Tcl_AppendResult (interp, "Invalid value for header field NumChan:",
                                  "Must be 1 or 3\n", (char *)NULL);
        return FALSE;
    }

    if (!readHeaderLine (interp, handle, buf) ||
        (1 != sscanf (buf, strByteOrder, tmpStr))) {
        Tcl_AppendResult (interp, "Unable to parse header field ByteOrder\n", (char *)NULL);
        return FALSE;
    }

    if (strcmp (tmpStr, strIntel) == 0) {
        th->byteOrder = INTEL;
    } else if (strcmp (tmpStr, strMotorola) == 0) {
        th->byteOrder = MOTOROLA;
    } else {
        Tcl_AppendResult (interp, "Invalid value for header field ByteOrder:",
                                  "Must be ", strIntel, " or ", strMotorola,
                                  "\n", (char *)NULL);
        return FALSE;
    }

    if (!readHeaderLine (interp, handle, buf) ||
        (1 != sscanf (buf, strScanOrder, tmpStr))) {
        Tcl_AppendResult (interp, "Unable to parse header field ScanOrder\n", (char *)NULL);
        return FALSE;
    }
    if (strcmp (tmpStr, strTopDown) == 0) {
        th->scanOrder = TOP_DOWN;
    } else if (strcmp (tmpStr, strBottomUp) == 0) {
        th->scanOrder = BOTTOM_UP;
    } else {
        Tcl_AppendResult (interp, "Invalid value for header field ScanOrder:",
                                  "Must be ", strTopDown, " or ", strBottomUp,
                                  "\n", (char *)NULL);
        return FALSE;
    }

    if (!readHeaderLine (interp, handle, buf) ||
        (1 != sscanf (buf, strPixelType, tmpStr))) {
        Tcl_AppendResult (interp, "Unable to parse header field PixelType\n", (char *)NULL);
        return FALSE;
    }
    if (strcmp (tmpStr, strDouble) == 0) {
        th->pixelType = TYPE_DOUBLE;
    } else if (strcmp (tmpStr, strFloat) == 0) {
        th->pixelType = TYPE_FLOAT;
    } else if (strcmp (tmpStr, strUInt) == 0) {
        th->pixelType = TYPE_UINT;
    } else if (strcmp (tmpStr, strUShort) == 0) {
        th->pixelType = TYPE_USHORT;
    } else if (strcmp (tmpStr, strUByte) == 0) {
        th->pixelType = TYPE_UBYTE;
    } else {
        Tcl_AppendResult (interp, "Invalid value for header field PixelType:",
                                  "Must be ", strDouble, ", ", strFloat, ", ", strUInt, ", " strUShort, " or ", strUByte,
                                  "\n", (char *)NULL);
        return FALSE;
    }

    return TRUE;
}

static Boln writeHeader (tkimg_Stream *handle, RAWHEADER *th)
{
    char buf[1024];

    tkimg_snprintf (buf, 1024, strMagic, "RAW");
    tkimg_Write(handle, buf, strlen (buf));
    tkimg_snprintf (buf, 1024, strWidth, th->width);
    tkimg_Write(handle, buf, strlen (buf));
    tkimg_snprintf (buf, 1024, strHeight, th->height);
    tkimg_Write(handle, buf, strlen (buf));
    tkimg_snprintf (buf, 1024, strNumChan, th->nChans);
    tkimg_Write(handle, buf, strlen (buf));
    tkimg_snprintf (buf, 1024, strByteOrder, tkimg_IsIntel()? strIntel: strMotorola);
    tkimg_Write(handle, buf, strlen (buf));
    tkimg_snprintf (buf, 1024, strScanOrder, th->scanOrder == TOP_DOWN?
                                             strTopDown: strBottomUp);
    tkimg_Write(handle, buf, strlen (buf));
    tkimg_snprintf (buf, 1024, strPixelType, (th->pixelType == TYPE_DOUBLE? strDouble:
                                             (th->pixelType == TYPE_FLOAT?  strFloat:
                                             (th->pixelType == TYPE_UINT?   strUInt:
                                             (th->pixelType == TYPE_USHORT? strUShort:
                                             (th->pixelType == TYPE_UBYTE?  strUByte:
                                                                            strUnknown))))));
    tkimg_Write(handle, buf, strlen (buf));
    return TRUE;
}

static void initHeader (RAWHEADER *th)
{
    th->id[0]     = 'R';
    th->id[1]     = 'A';
    th->id[2]     = 'W';
    th->nChans    = 1;
    th->width     = 128;
    th->height    = 128;
    th->scanOrder = TOP_DOWN;
    th->byteOrder = INTEL;
    th->pixelType = TYPE_UBYTE;
    return;
}

/*
 * Here is the start of the standard functions needed for every image format.
 */

/*
 * Prototypes for local procedures defined in this file:
 */

static int CommonMatch(Tcl_Interp *interp, tkimg_Stream *handle,
        Tcl_Obj *format, int *widthPtr, int *heightPtr,
        RAWHEADER *rawHeaderPtr);
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
         "-verbose", "-useheader",
         "-width", "-height", "-nchan", "-byteorder",
         "-scanorder", "-pixeltype", "-skipbytes",
         "-map", "-min", "-max", "-gamma",
         "-saturation", "-cutoff", "-printagc",
         "-uuencode", "-nomap", NULL
    };
    enum readEnums {
        R_VERBOSE, R_USEHEADER, 
        R_WIDTH, R_HEIGHT, R_NCHAN, R_BYTEORDER,
        R_SCANORDER, R_PIXELTYPE, R_SKIPBYTES,
        R_MAP, R_MIN, R_MAX, R_GAMMA,
        R_SATURATION, R_CUTOFF, R_PRINTAGC,
        R_UUENCODE, R_NOMAP
    };
    static const char *const writeOptions[] = {
         "-verbose", "-useheader", "-nchan", "scanorder", NULL
    };
    enum writeEnums {
        W_VERBOSE, W_USEHEADER, W_NCHAN, W_SCANORDER
    };
    Tcl_Size objc, i;
    int index;
    char *optionStr;
    Tcl_Obj **objv;
    int boolVal;
    int intVal;
    double doubleVal;

    /* Initialize options with default values. */
    opts->verbose    = 0;
    opts->width      = 128;
    opts->height     = 128;
    opts->nchan      = 1;
    opts->byteOrder  = tkimg_IsIntel()? INTEL: MOTOROLA;
    opts->scanOrder  = TOP_DOWN;
    opts->pixelType  = TYPE_UBYTE;
    opts->minVal     = -1.0;
    opts->maxVal     = -1.0;
    opts->gamma      = 1.0;
    opts->useHeader  = 1;
    opts->mapMode    = IMG_MAP_MINMAX;
    opts->uuencode   = 0;
    opts->saturation = -1.0;
    opts->cutOff     = 3.0;
    opts->printAgc   = 0;
    opts->skipBytes  = 0;

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
                case R_USEHEADER: {
                    if (Tcl_GetBoolean(interp, optionStr, &boolVal) == TCL_ERROR) {
                        Tcl_SetObjResult(interp, Tcl_ObjPrintf(
                            "Invalid useheader mode \"%s\": must be 1 or 0, on or off, true or false.",
                            optionStr));
                        return TCL_ERROR;
                    }
                    opts->useHeader = boolVal;
                    break;
                }
                case R_WIDTH: {
                    if (Tcl_GetInt(interp, optionStr, &intVal) == TCL_ERROR || intVal <= 0) {
                        Tcl_SetObjResult(interp, Tcl_ObjPrintf(
                            "Invalid image width value \"%s\": must be an integer value greater than zero.",
                            optionStr));
                        return TCL_ERROR;
                    }
                    opts->width = intVal;
                    break;
                }
                case R_HEIGHT: {
                    if (Tcl_GetInt(interp, optionStr, &intVal) == TCL_ERROR || intVal <= 0) {
                        Tcl_SetObjResult(interp, Tcl_ObjPrintf(
                            "Invalid image height value \"%s\": must be an integer value greater than zero.",
                            optionStr));
                        return TCL_ERROR;
                    }
                    opts->height = intVal;
                    break;
                }
                case R_NCHAN: {
                    if (Tcl_GetInt(interp, optionStr, &intVal) == TCL_ERROR ||
                        intVal <= 0 || intVal > 4) {
                        Tcl_SetObjResult(interp, Tcl_ObjPrintf(
                            "Invalid number of channels \"%s\": must be 1, 2, 3 or 4.",
                            optionStr));
                        return TCL_ERROR;
                    }
                    opts->nchan = intVal;
                    break;
                }
                case R_BYTEORDER: {
                    if (!strncmp (optionStr, strIntel, strlen (strIntel))) {
                        opts->byteOrder = INTEL;
                    } else if (!strncmp (optionStr, strMotorola, strlen (strMotorola))) {
                        opts->byteOrder = MOTOROLA;
                    } else {
                        Tcl_SetObjResult(interp, Tcl_ObjPrintf(
                            "Invalid byteorder mode \"%s\": must be Intel or Motorola.",
                            optionStr));
                        return TCL_ERROR;
                    }
                    break;
                }
                case R_SCANORDER: {
                    if (!strncmp (optionStr, strTopDown, strlen (strTopDown))) {
                        opts->scanOrder = TOP_DOWN;
                    } else if (!strncmp (optionStr, strBottomUp, strlen (strBottomUp))) {
                        opts->scanOrder = BOTTOM_UP;
                    } else {
                        Tcl_SetObjResult(interp, Tcl_ObjPrintf(
                            "Invalid scanorder mode \"%s\": must be TopDown or BottomUp.",
                            optionStr));
                        return TCL_ERROR;
                    }
                    break;
                }
                case R_PIXELTYPE: {
                    if (!strncmp (optionStr, strDouble, strlen (strDouble))) {
                        opts->pixelType = TYPE_DOUBLE;
                    } else if (!strncmp (optionStr, strFloat, strlen (strFloat))) {
                        opts->pixelType = TYPE_FLOAT;
                    } else if (!strncmp (optionStr, strUInt, strlen (strUInt))) {
                        opts->pixelType = TYPE_UINT;
                    } else if (!strncmp (optionStr, strUShort, strlen (strUShort))) {
                        opts->pixelType = TYPE_USHORT;
                    } else if (!strncmp (optionStr, strUByte, strlen (strUByte))) {
                        opts->pixelType = TYPE_UBYTE;
                    } else {
                        Tcl_SetObjResult(interp, Tcl_ObjPrintf(
                            "Invalid pixeltype mode \"%s\": must be double, float, int, short or byte.",
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
                    if (doubleVal >= 0.0) {
                        opts->gamma = doubleVal;
                    }
                    break;
                }
                case R_MAP: {
                    if (!strncmp (optionStr, IMG_MAP_NONE_STR, strlen (IMG_MAP_NONE_STR))) {
                        opts->mapMode = IMG_MAP_NONE;
                    } else if (!strncmp (optionStr, IMG_MAP_MINMAX_STR, strlen (IMG_MAP_MINMAX_STR))) {
                        opts->mapMode = IMG_MAP_MINMAX;
                    } else if (!strncmp (optionStr, IMG_MAP_AGC_STR, strlen (IMG_MAP_AGC_STR))) {
                        opts->mapMode = IMG_MAP_AGC;
                    } else {
                        Tcl_SetObjResult(interp, Tcl_ObjPrintf(
                            "Invalid mapping mode \"%s\": must be none, minmax or agc.",
                            optionStr));
                        return TCL_ERROR;
                    }
                    break;
                }
                case R_UUENCODE: {
                    /* -uuencode is obsolete. */
                    break;
                }
                case R_SATURATION: {
                    if (Tcl_GetDouble(interp, optionStr, &doubleVal) == TCL_ERROR) {
                        Tcl_SetObjResult(interp, Tcl_ObjPrintf(
                            "Invalid saturation value \"%s\": must be a double value.",
                            optionStr));
                        return TCL_ERROR;
                    }
                    if (doubleVal >= 0.0) {
                        opts->saturation = doubleVal;
                    }
                    break;
                }
                case R_CUTOFF: {
                    if (Tcl_GetDouble(interp, optionStr, &doubleVal) == TCL_ERROR || doubleVal < 0.0) {
                        Tcl_SetObjResult(interp, Tcl_ObjPrintf(
                            "Invalid cutoff value \"%s\": must be a double value greater or equal to zero.",
                            optionStr));
                        return TCL_ERROR;
                    }
                    if (doubleVal >= 0.0) {
                        opts->cutOff = doubleVal;
                    }
                    break;
                }
                case R_NOMAP: {
                    /* Option "-nomap" for backward compatibility. */
                    if (Tcl_GetBoolean(interp, optionStr, &boolVal) == TCL_ERROR) {
                        Tcl_SetObjResult(interp, Tcl_ObjPrintf(
                            "Invalid nomap mode \"%s\": must be 1 or 0, on or off, true or false.",
                            optionStr));
                        return TCL_ERROR;
                    }
                    if (boolVal) {
                        opts->mapMode = IMG_MAP_NONE;
                    }
                    break;
                }
                case R_PRINTAGC: {
                    if (Tcl_GetBoolean(interp, optionStr, &boolVal) == TCL_ERROR) {
                        Tcl_SetObjResult(interp, Tcl_ObjPrintf(
                            "Invalid printagc mode \"%s\": must be 1 or 0, on or off, true or false.",
                            optionStr));
                        return TCL_ERROR;
                    }
                    opts->printAgc = boolVal;
                    break;
                }
                case R_SKIPBYTES: {
                    if (Tcl_GetInt(interp, optionStr, &intVal) == TCL_ERROR || intVal < 0) {
                        Tcl_SetObjResult(interp, Tcl_ObjPrintf(
                            "Invalid skipbytes value \"%s\": must be an integer value greater or equal to zero.",
                            optionStr));
                        return TCL_ERROR;
                    }
                    opts->skipBytes = intVal;
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
                case W_USEHEADER: {
                    if (Tcl_GetBoolean(interp, optionStr, &boolVal) == TCL_ERROR) {
                        Tcl_SetObjResult(interp, Tcl_ObjPrintf(
                            "Invalid useheader mode \"%s\": must be 1 or 0, on or off, true or false.",
                            optionStr));
                        return TCL_ERROR;
                    }
                    opts->useHeader = boolVal;
                    break;
                }
                case W_NCHAN: {
                    if (Tcl_GetInt(interp, optionStr, &intVal) == TCL_ERROR ||
                        intVal <= 0 || intVal > 4) {
                        Tcl_SetObjResult(interp, Tcl_ObjPrintf(
                            "Invalid number of channels \"%s\": must be 1, 2, 3 or 4.",
                            optionStr));
                        return TCL_ERROR;
                    }
                    opts->nchan = intVal;
                    break;
                }
                case W_SCANORDER: {
                    if (!strncmp (optionStr, strTopDown, strlen (strTopDown))) {
                        opts->scanOrder = TOP_DOWN;
                    } else if (!strncmp (optionStr, strBottomUp, strlen (strBottomUp))) {
                        opts->scanOrder = BOTTOM_UP;
                    } else {
                        Tcl_SetObjResult(interp, Tcl_ObjPrintf(
                            "Invalid scanorder mode \"%s\": must be TopDown or BottomUp.",
                            optionStr));
                        return TCL_ERROR;
                    }
                    break;
                }
            }
        }
    }

    /* Convert minimum and maximum range values. */
    if (opts->minVal >= 0.0 && opts->maxVal >= 0.0 && opts->minVal >= opts->maxVal) {
        Tcl_SetObjResult(interp, Tcl_ObjPrintf("Invalid min and max values: Maximum must be grater than minimum."));
        return TCL_ERROR;
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

    return CommonMatch (interp, &handle, format, widthPtr, heightPtr, NULL);
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
        return FALSE;
    }
    return CommonMatch (interp, &handle, format, widthPtr, heightPtr, NULL);
}

static int CommonMatch(
    Tcl_Interp *interp,
    tkimg_Stream *handle,
    Tcl_Obj *format,
    int *widthPtr,
    int *heightPtr,
    RAWHEADER *rawHeaderPtr
) {
    RAWHEADER th;
    FMTOPT opts;
    char * buf;

    initHeader (&th);

    if (ParseFormatOpts (interp, format, &opts, IMG_READ) == TCL_ERROR) {
        if (rawHeaderPtr) {
            return FALSE;
        }
    }
    if (opts.useHeader) {
        if (!readHeader (interp, handle, &th)) {
            return FALSE;
        }
    } else {
        th.width  = opts.width;
        th.height = opts.height;
        th.nChans = opts.nchan;
        th.pixelType = opts.pixelType;
        th.scanOrder = opts.scanOrder;
        th.byteOrder = opts.byteOrder;
        if (opts.skipBytes > 0) {
            buf = (char *)attemptckalloc (opts.skipBytes);
            if (buf == NULL) {
                Tcl_AppendResult (interp, "Unable to allocate memory for image data.", (char *) NULL);
                return FALSE;
            }
            if (opts.skipBytes != tkimg_Read(handle, buf, opts.skipBytes)) {
                return FALSE;
            }
            ckfree (buf);
        }
    }
    *widthPtr  = th.width;
    *heightPtr = th.height;
    if (rawHeaderPtr) {
        *rawHeaderPtr = th;
    }
    return TRUE;
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

    if (! tkimg_ReadInitString(&handle, dataObj)) {
        return TCL_ERROR;
    }

    return CommonRead (interp, &handle, "InlineData", format, imageHandle,
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
    Int x, y, c;
    Int fileWidth = 0, fileHeight = 0;
    Double minVals[IMG_MAX_CHANNELS], maxVals[IMG_MAX_CHANNELS];
    int stopY, outY, outWidth, outHeight;
    RAWFILE tf;
    FMTOPT opts;
    Boln swapBytes;
    Boln fastMode;
    Int  byteOrder;
    Int  scanOrder;
    Int  pixelType;
    UByte  *pixbufPtr;
    Double *doubleBufPtr;
    Float  *floatBufPtr;
    UInt   *uintBufPtr;
    UShort *ushortBufPtr;
    UByte  *ubyteBufPtr;
    Double gtable[IMG_GAMMA_TABLE_SIZE];
    int result = TCL_OK;

    memset (&tf, 0, sizeof (RAWFILE));
    initHeader (&tf.th);

    if (!CommonMatch (interp, handle, format, &fileWidth, &fileHeight, &tf.th)) {
        return TCL_ERROR;
    }

    if (ParseFormatOpts (interp, format, &opts, IMG_READ) == TCL_ERROR) {
        return TCL_ERROR;
    }

    if (opts.verbose) {
        printImgInfo (&tf.th, &opts, filename, "Reading image:");
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

    byteOrder = opts.useHeader? tf.th.byteOrder: opts.byteOrder;
    scanOrder = opts.useHeader? tf.th.scanOrder: opts.scanOrder;
    pixelType = opts.useHeader? tf.th.pixelType: opts.pixelType;
    swapBytes = (( tkimg_IsIntel () && (byteOrder != INTEL)) ||
                 (!tkimg_IsIntel () && (byteOrder == INTEL)));
    fastMode  = (opts.mapMode == IMG_MAP_NONE &&
                 pixelType == TYPE_UBYTE && scanOrder == TOP_DOWN &&
                 fileWidth == width && fileHeight == height);

    if (!fastMode) {
        tkimg_CreateGammaTable (opts.gamma, gtable);
    }

    switch (pixelType) {
        case TYPE_DOUBLE: {
            tf.doubleBuf = (Double *)attemptckalloc (fileWidth*fileHeight*tf.th.nChans*sizeof (Double));
            if (tf.doubleBuf == NULL) {
                Tcl_AppendResult (interp, "Unable to allocate memory for image data.", (char *) NULL);
                return TCL_ERROR;
            }
            tkimg_ReadDoubleFile (handle, tf.doubleBuf, fileWidth, fileHeight, tf.th.nChans,
                                  swapBytes, opts.verbose, opts.mapMode != IMG_MAP_NONE,
                                  minVals, maxVals, opts.saturation);
            break;
        }
        case TYPE_FLOAT: {
            tf.floatBuf = (Float *)attemptckalloc (fileWidth*fileHeight*tf.th.nChans*sizeof (Float));
            if (tf.floatBuf == NULL) {
                Tcl_AppendResult (interp, "Unable to allocate memory for image data.", (char *) NULL);
                return TCL_ERROR;
            }
            tkimg_ReadFloatFile (handle, tf.floatBuf, fileWidth, fileHeight, tf.th.nChans,
                                 swapBytes, opts.verbose, opts.mapMode != IMG_MAP_NONE,
                                 minVals, maxVals, opts.saturation);
            break;
        }
        case TYPE_UINT: {
            tf.uintBuf = (UInt *)attemptckalloc (fileWidth*fileHeight*tf.th.nChans*sizeof (UInt));
            if (tf.uintBuf == NULL) {
                Tcl_AppendResult (interp, "Unable to allocate memory for image data.", (char *) NULL);
                return TCL_ERROR;
            }
            tkimg_ReadUIntFile (handle, tf.uintBuf, fileWidth, fileHeight, tf.th.nChans,
                                swapBytes, opts.verbose, opts.mapMode != IMG_MAP_NONE,
                                minVals, maxVals, opts.saturation);
            break;
        }
        case TYPE_USHORT: {
            tf.ushortBuf = (UShort *)attemptckalloc (fileWidth*fileHeight*tf.th.nChans*sizeof (UShort));
            if (tf.ushortBuf == NULL) {
                Tcl_AppendResult (interp, "Unable to allocate memory for image data.", (char *) NULL);
                return TCL_ERROR;
            }
            tkimg_ReadUShortFile (handle, tf.ushortBuf, fileWidth, fileHeight, tf.th.nChans,
                                  swapBytes, opts.verbose, opts.mapMode != IMG_MAP_NONE,
                                  minVals, maxVals, opts.saturation);
            break;
        }
        case TYPE_UBYTE: {
            tf.ubyteBuf = (UByte *)attemptckalloc (fileWidth*fileHeight*tf.th.nChans*sizeof (UByte));
            if (tf.ubyteBuf == NULL) {
                Tcl_AppendResult (interp, "Unable to allocate memory for image data.", (char *) NULL);
                return TCL_ERROR;
            }
            tkimg_ReadUByteFile (handle, tf.ubyteBuf, fileWidth, fileHeight, tf.th.nChans,
                                 opts.verbose, opts.mapMode != IMG_MAP_NONE, minVals, maxVals);
            break;
        }
    }
    switch (opts.mapMode) {
        case IMG_MAP_NONE: {
            for (c=0; c<tf.th.nChans; c++) {
                minVals[c] = 0.0;
                maxVals[c] = 255.0;
            }
            break;
        }
        case IMG_MAP_MINMAX: {
            if (opts.minVal >= 0.0) {
                for (c=0; c<tf.th.nChans; c++) {
                    minVals[c] = opts.minVal;
                }
            }
            if (opts.maxVal >= 0.0) {
                for (c=0; c<tf.th.nChans; c++) {
                    maxVals[c] = opts.maxVal;
                }
            }
            break;
        }
        case IMG_MAP_AGC: {
            /* Nothing to do. Saturation is considered in tkimg_ReadFloatFile. */
            break;
        }
    }

    switch (pixelType) {
        case TYPE_DOUBLE: {
            tkimg_RemapDoubleValues (
                tf.doubleBuf, fileWidth, fileHeight, tf.th.nChans,
                minVals, maxVals, opts.mapMode == IMG_MAP_AGC? opts.cutOff: -1.0,
                opts.printAgc
            );
            break;
        }
        case TYPE_FLOAT: {
            tkimg_RemapFloatValues (
                tf.floatBuf, fileWidth, fileHeight, tf.th.nChans,
                minVals, maxVals, opts.mapMode == IMG_MAP_AGC? opts.cutOff: -1.0,
                opts.printAgc
            );
            break;
        }
        case TYPE_UINT: {
            tkimg_RemapUIntValues (
                tf.uintBuf, fileWidth, fileHeight, tf.th.nChans,
                minVals, maxVals, opts.mapMode == IMG_MAP_AGC? opts.cutOff: -1.0,
                opts.printAgc
            );
            break;
        }
        case TYPE_USHORT: {
            tkimg_RemapUShortValues (
                tf.ushortBuf, fileWidth, fileHeight, tf.th.nChans,
                minVals, maxVals, opts.mapMode == IMG_MAP_AGC? opts.cutOff: -1.0,
                opts.printAgc
            );
            break;
        }
    }

    if (Tk_PhotoExpand (interp, imageHandle, destX + outWidth, destY + outHeight) == TCL_ERROR) {
        rawClose (&tf, fastMode);
        return TCL_ERROR;
    }

    if (fastMode) {
        tf.pixbuf = tf.ubyteBuf;
    } else {
        tf.pixbuf = (UByte *) attemptckalloc (fileWidth * tf.th.nChans);
        if (tf.pixbuf == NULL) {
            Tcl_AppendResult (interp, "Unable to allocate memory for image data.", (char *) NULL);
            rawClose (&tf, fastMode);
            return TCL_ERROR;
        }
    }

    block.pixelSize = tf.th.nChans;
    block.pitch = fileWidth * tf.th.nChans;
    block.width = outWidth;
    block.height = fastMode? outHeight: 1;
    block.offset[0] = 0;
    block.offset[1] = (tf.th.nChans > 1? 1: 0);
    block.offset[2] = (tf.th.nChans > 2? 2: 0);
    block.offset[3] = (tf.th.nChans > 3? 3: 0);
    block.pixelPtr = tf.pixbuf + srcX * tf.th.nChans;

    stopY = srcY + outHeight;
    outY = destY;

    if (fastMode) {
        if (Tk_PhotoPutBlock(interp, imageHandle, &block, destX, outY,
                            width, height,
                            block.offset[3]?
                            TK_PHOTO_COMPOSITE_SET:
                            TK_PHOTO_COMPOSITE_OVERLAY) == TCL_ERROR) {
            result = TCL_ERROR;
        }
    } else {
        for (y=0; y<stopY; y++) {
            pixbufPtr = tf.pixbuf;
            switch (pixelType) {
                case TYPE_DOUBLE: {
                    if (scanOrder == BOTTOM_UP) {
                        doubleBufPtr = tf.doubleBuf + (fileHeight -1 - y) * fileWidth * tf.th.nChans;
                    } else {
                        doubleBufPtr = tf.doubleBuf + y * fileWidth * tf.th.nChans;
                    }
                    tkimg_DoubleToUByte (fileWidth * tf.th.nChans, doubleBufPtr,
                                         opts.gamma != 1.0? gtable: NULL, pixbufPtr);
                    doubleBufPtr += fileWidth * tf.th.nChans;
                    break;
                }
                case TYPE_FLOAT: {
                    if (scanOrder == BOTTOM_UP) {
                        floatBufPtr = tf.floatBuf + (fileHeight -1 - y) * fileWidth * tf.th.nChans;
                    } else {
                        floatBufPtr = tf.floatBuf + y * fileWidth * tf.th.nChans;
                    }
                    tkimg_FloatToUByte (fileWidth * tf.th.nChans, floatBufPtr,
                                        opts.gamma != 1.0? gtable: NULL, pixbufPtr);
                    floatBufPtr += fileWidth * tf.th.nChans;
                    break;
                }
                case TYPE_UINT: {
                    if (scanOrder == BOTTOM_UP) {
                        uintBufPtr = tf.uintBuf + (fileHeight -1 - y) * fileWidth * tf.th.nChans;
                    } else {
                        uintBufPtr = tf.uintBuf + y * fileWidth * tf.th.nChans;
                    }
                    tkimg_UIntToUByte (fileWidth * tf.th.nChans, uintBufPtr,
                                       opts.gamma != 1.0? gtable: NULL, pixbufPtr);
                    uintBufPtr += fileWidth * tf.th.nChans;
                    break;
                }
                case TYPE_USHORT: {
                    if (scanOrder == BOTTOM_UP) {
                        ushortBufPtr = tf.ushortBuf + (fileHeight -1 - y) * fileWidth * tf.th.nChans;
                    } else {
                        ushortBufPtr = tf.ushortBuf + y * fileWidth * tf.th.nChans;
                    }
                    tkimg_UShortToUByte (fileWidth * tf.th.nChans, ushortBufPtr,
                                         opts.gamma != 1.0? gtable: NULL, pixbufPtr);
                    ushortBufPtr += fileWidth * tf.th.nChans;
                    break;
                }
                case TYPE_UBYTE: {
                    if (scanOrder == BOTTOM_UP) {
                        ubyteBufPtr = tf.ubyteBuf + (fileHeight -1 - y) * fileWidth * tf.th.nChans;
                    } else {
                        ubyteBufPtr = tf.ubyteBuf + y * fileWidth * tf.th.nChans;
                    }
                    for (x=0; x<fileWidth * tf.th.nChans; x++) {
                        pixbufPtr[x] = ubyteBufPtr[x];
                    }
                    ubyteBufPtr += fileWidth * tf.th.nChans;
                    break;
                }
            }
            if (y >= srcY) {
                if (Tk_PhotoPutBlock(interp, imageHandle, &block, destX, outY,
                                    width, 1,
                                    block.offset[3]?
                                    TK_PHOTO_COMPOSITE_SET:
                                    TK_PHOTO_COMPOSITE_OVERLAY) == TCL_ERROR) {
                    result = TCL_ERROR;
                    break;
                }
                outY++;
            }
        }
    }
    rawClose (&tf, fastMode);
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

static int CommonWrite(
    Tcl_Interp *interp,
    const char *filename,
    Tcl_Obj *format,
    tkimg_Stream *handle,
    Tk_PhotoImageBlock *blockPtr
) {
    Int     x, y;
    Int     redOffset, greenOffset, blueOffset, alphaOffset;
    UByte   *pixelPtr, *rowPixPtr;
    RAWFILE tf;
    FMTOPT opts;
    UByte *ubyteBufPtr;
    Int bytesPerLine;

    memset (&tf, 0, sizeof (RAWFILE));
    if (ParseFormatOpts (interp, format, &opts, IMG_WRITE) == TCL_ERROR) {
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

    initHeader (&tf.th);
    tf.th.width = blockPtr->width;
    tf.th.height = blockPtr->height;
    tf.th.nChans = opts.nchan;
    tf.th.scanOrder = opts.scanOrder;
    tf.th.pixelType = TYPE_UBYTE;

    writeHeader (handle, &tf.th);
    bytesPerLine = blockPtr->width * tf.th.nChans * sizeof (UByte);
    tf.ubyteBuf = (UByte *)attemptckalloc (bytesPerLine);
    if (tf.ubyteBuf == NULL) {
        Tcl_AppendResult (interp, "Unable to allocate memory for image data.", (char *) NULL);
        return TCL_ERROR;
    }

    rowPixPtr = blockPtr->pixelPtr + blockPtr->offset[0];
    for (y = 0; y < blockPtr->height; y++) {
        ubyteBufPtr = tf.ubyteBuf;
        pixelPtr = rowPixPtr;
        if (tf.th.nChans == 1) {
            for (x=0; x<blockPtr->width; x++) {
                *ubyteBufPtr = pixelPtr[redOffset];
                ubyteBufPtr++;
                pixelPtr += blockPtr->pixelSize;
            }
        } else {
            for (x=0; x<blockPtr->width; x++) {
                *(ubyteBufPtr++) = pixelPtr[redOffset];
                *(ubyteBufPtr++) = pixelPtr[greenOffset];
                *(ubyteBufPtr++) = pixelPtr[blueOffset];
                if (tf.th.nChans == 4) {
                    /* Have an alpha channel and write it. */
                    *(ubyteBufPtr++) = pixelPtr[alphaOffset];
                }
                pixelPtr += blockPtr->pixelSize;
            }
        }
        if (tkimg_Write(handle, (char *)tf.ubyteBuf, bytesPerLine) != bytesPerLine) {
            rawClose (&tf, FALSE);
            return TCL_ERROR;
        }
        rowPixPtr += blockPtr->pitch;
    }
    if (opts.verbose)
        printImgInfo (&tf.th, &opts, filename, "Saving image:");
    rawClose (&tf, FALSE);
    return TCL_OK;
}

