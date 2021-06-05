/* STARTHEADER
 *
 * File :       raw.c
 *
 * Author :     Paul Obermeier (paul@poSoft.de)
 *
 * Date :       2001 / 02 / 21
 *
 * Copyright :  (C) 2001-2019 Paul Obermeier
 *
 * Description :
 *
 * A photo image handler for raw matrix data interpreted as image files.
 *
 * The following image types are currently supported:
 *
 * Grayscale image:  1 channel  of 32-bit floating point   values.
 *                   1 channel  of 16-bit unsigned integer values.
 *                   1 channel  of  8-bit unsigned integer values.
 * True-color image: 3 channels of 32-bit floating point   values.
 *                   3 channels of 16-bit unsigned integer values.
 *                   3 channels of  8-bit unsigned integer values.
 *
 * List of currently supported features:
 *
 * Type   |     Read      |     Write     |
 *        | -file | -data | -file | -data |
 * ----------------------------------------
 * Gray   | Yes   | Yes   | Yes   | Yes   |
 * RGB    | Yes   | Yes   | Yes   | Yes   |
 *
 * There are 2 supported file formats:
 * One with the pure raw data only, the other with a 7 line ASCII header of the
 * following form:
 *
 *     Magic=RAW\n              File format identifier. Fixed value.
 *     Width=128\n              Image width in pixels.
 *     Height=128\n             Image height in pixels.
 *     NumChan=1\n              Possible values: 1 or 3.
 *     ByteOrder=Intel\n        Possible values: "Intel" or "Motorola".
 *     ScanOrder=TopDown\n      Possible values: "TopDown" or "BottomUp".
 *     PixelType=byte\n         Possible values: "float", "short" or "byte".
 *
 * The following format options are available:
 *
 * For raw images with header:
 * Read  RAW image: "raw -useheader true -verbose <bool> -map <enum>
 *                       -gamma <float> -min <float> -max <float>
 *                       -cutoff <float> -saturation <float> -printagc <bool>"
 * Write RAW image: "raw -useheader true -verbose <bool> -nchan <int>
 *                       -scanorder <string>"
 *
 * For raw images without header:
 * Read  RAW image: "raw -useheader false -verbose <bool> -map <enum>
 *                       -gamma <float> -min <float> -max <float>
 *                       -cutoff <float> -saturation <float> -printagc <bool>
 *                       -nchan <int> -scanorder <string> -byteorder <string>
 *                       -width <int> -height <int> 
 *                       -pixeltype <string> -uuencode <bool>"
 * Write RAW image: "raw -useheader false -verbose <bool> -nchan <int>
 *                       -scanorder <string>"
 *
 * -verbose <bool>:     If set to true, additional information about the file
 *                      format is printed to stdout. Default is false.
 * -useheader <bool>:   If set to true, use file header information for reading
 *                      and writing. Default is true.
 *
 * -map <enum>:         Specify the mode when mapping the 32 or 16-bit values
 *                      of the image to 8-bit gray scale values for displaying.
 *                      Valid mapping mode strings are: none, minmax, agc.
 *                      Default mode is minmax.
 *
 *                      Mode "none":
 *                      If mapping mode is set to "none", no mapping of input
 *                      values is done. Use this mode, if the image already 
 *                      contains RGB values in the range of 0 ..255.
 *                      When using mode "none", no information about the
 *                      minimum and maximum pixel values is gathered during
 *                      reading and therefore no verbose output is printed.
 *                      On the other hand reading the image is faster.
 *
 *                      Mode "minmax":
 *                      "minmax" maps the minimum and maximum values of the image data to
 *                      256 gray scale values.
 *
 *                      Mode "agc":
 *                      "agc" applies an automatic gain control algorithmn to the
 *                      image data. 
 *                      Currently implemented for 1-channel 32-bit float images only.
 * -gamma <float>:      Specify a gamma correction to be applied when mapping
 *                      the input data to 8-bit image values.
 *                      Default is 1.0.
 *                      Valid for mapping modes: minmax, agc
 * -max <float>:        Specify the maximum pixel value to be used for mapping
 *                      the input data to 8-bit image values.
 *                      Default is the maximum value found in the image data.
 * -min <float>:        Specify the minimum pixel value to be used for mapping
 *                      the input data to 8-bit image values.
 *                      Default is the minimum value found in the image data.
 * -saturation <float>: If option is given, an Automatic Gain Control algorithmn is
 *                      applied to the input values. The supplied value specifies the
 *                      saturation value, i.e. all pixel values greater than the 
 *                      saturation are mapped to white.
 *                      Valid for mapping mode: agc
 * -cutoff <float>:     If option is given, an Automatic Gain Control algorithmn is
 *                      applied to the input values. The supplied value specifies the
 *                      cut-off value in percent.
 *                      Valid for mapping mode: agc
 * -printagc <bool>:    If set to true, additional information about the Automatic
 *                      Gain Control is printed to stdout. Default is false.
 *                      Valid for mapping mode: agc
 *
 * -nchan <int>:        Specify the number of channels of the input image.
 *                      Only valid, if reading image data without header.
 *                      Default is 1.
 * -width <int>:        Specify the width of the input image. Only valid, if
 *                      reading image data without header. Default is 128.
 * -height <int>:       Specify the height of the input image. Only valid, if
 *                      reading image data without header. Default is 128.
 * -byteorder <string>: Specify the byteorder of the input image. Only valid, if
 *                      reading image data without header.
 *                      Possible values: "Intel" or "Motorola".
 *                      Default is assuming the same byteorder as that of the
 *                      host computer.
 * -scanorder <string>: Specify the scanline order of the input image. Only
 *                      valid, if reading image data without header.
 *                      Possible values: "TopDown" or "BottomUp".
 *                      Default is "TopDown".
 * -pixeltype <string>: Specify the type of the pixel values.
 *                      Only valid, if reading image data without header.
 *                      Possible values: "float", "short" or "byte".
 *                      Default is "byte".
 * -uuencode <bool>:    If set to false, do not assume, that the image data stored in a
 *                      variable is uuencoded. Default is true, i.e. the image data is
 *                      assumed to be uuencoded.
 *
 * Notes:
 *                      Currently RAW files are only written in "byte" pixel format.
 *
 * ENDHEADER
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
#define strFloat    "float"
#define strUShort   "short"
#define strUByte    "byte"

#define strUnknown  "Unknown"

#define BOTTOM_UP   0
#define TOP_DOWN    1
#define INTEL       0
#define MOTOROLA    1
#define TYPE_FLOAT  0
#define TYPE_USHORT 1
#define TYPE_UBYTE  2

/* Some general defines and typedefs. */
#define TRUE  1
#define FALSE 0

typedef unsigned char Boln;     /* Boolean value: TRUE or FALSE */
typedef unsigned char UByte;    /* Unsigned  8 bit integer */
typedef char  Byte;             /* Signed    8 bit integer */
typedef unsigned short UShort;  /* Unsigned 16 bit integer */
typedef short Short;            /* Signed   16 bit integer */
typedef int UInt;               /* Unsigned 32 bit integer */
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
    Int   width;
    Int   height;
    Int   nchan;
    Int   scanOrder;
    Int   byteOrder;
    Int   pixelType;
    Int   mapMode;
    Float gamma;        /* IMG_MAP_MINMAX and IMG_MAP_AGC */
    Float minVal;       /* IMG_MAP_MINMAX */
    Float maxVal;       /* IMG_MAP_MINMAX */
    Float saturation;   /* IMG_MAP_AGC */
    Float cutOff;       /* IMG_MAP_AGC */
    Boln  verbose;
    Boln  printAgc;
    Boln  uuencode;
    Boln  useHeader;
} FMTOPT;

/* Structure to hold information about the image file being processed. */
typedef struct {
    RAWHEADER th;
    UByte  *pixbuf;
    Float  *floatBuf;
    UShort *ushortBuf;
    UByte  *ubyteBuf;
} RAWFILE;

static void rawClose (RAWFILE *tf, Boln fastMode)
{
    if (!fastMode) {
        if (tf->pixbuf) ckfree ((char *)tf->pixbuf);
    }
    if (tf->floatBuf)  ckfree ((char *)tf->floatBuf);
    if (tf->ushortBuf) ckfree ((char *)tf->ushortBuf);
    if (tf->ubyteBuf)  ckfree ((char *)tf->ubyteBuf);
    return;
}

#define OUT Tcl_WriteChars (outChan, str, -1)
static void printImgInfo (RAWHEADER *th, FMTOPT *opts,
                          const char *filename, const char *msg)
{
    Tcl_Channel outChan;
    char str[256];

    outChan = Tcl_GetStdChannel (TCL_STDOUT);
    if (!outChan) {
        return;
    }
    sprintf (str, "%s %s\n", msg, filename);                                                       OUT;
    sprintf (str, "\tSize in pixel    : %d x %d\n", th->width, th->height);                        OUT;
    sprintf (str, "\tNo. of channels  : %d\n",      th->nChans);                                   OUT;
    sprintf (str, "\tPixel type       : %s\n",      (th->pixelType == TYPE_FLOAT?  strFloat:
                                                    (th->pixelType == TYPE_USHORT? strUShort:
                                                    (th->pixelType == TYPE_UBYTE?  strUByte:
                                                                                   strUnknown)))); OUT;
    sprintf (str, "\tVertical encoding: %s\n",      th->scanOrder == TOP_DOWN?
                                                    strTopDown: strBottomUp);                      OUT;
    sprintf (str, "\tHost byte order  : %s\n",      tkimg_IsIntel ()?  strIntel: strMotorola);     OUT;
    sprintf (str, "\tFile byte order  : %s\n",      th->byteOrder == INTEL?
                                                    strIntel: strMotorola);                        OUT;
    sprintf (str, "\tMapping mode     : %s\n",      (opts->mapMode == IMG_MAP_NONE?   IMG_MAP_NONE_STR:
                                                    (opts->mapMode == IMG_MAP_MINMAX? IMG_MAP_MINMAX_STR:
                                                    (opts->mapMode == IMG_MAP_AGC?    IMG_MAP_AGC_STR:
                                                                                  strUnknown))));  OUT;
    if (opts->mapMode != IMG_MAP_NONE) {
        sprintf (str, "\tGamma correction : %f\n",       opts->gamma);                             OUT;
        if (opts->mapMode == IMG_MAP_MINMAX) {
            sprintf (str, "\tMinimum map value: %f\n",   opts->minVal);                            OUT;
            sprintf (str, "\tMaximum map value: %f\n",   opts->maxVal);                            OUT;
        }
        if (opts->mapMode == IMG_MAP_AGC) {
            sprintf (str, "\tSaturation       : %f\n",   opts->saturation);                        OUT;
            sprintf (str, "\tCutOff           : %f%%\n", opts->cutOff);                            OUT;
        }
    }
    Tcl_Flush (outChan);
}
#undef OUT

static Boln readHeaderLine (Tcl_Interp *interp, tkimg_MFile *handle, char *buf)
{
    char c, *bufPtr, *bufEndPtr;
    Boln failure;

    bufPtr    = buf;
    bufEndPtr = buf + HEADLEN;
    failure   = TRUE;

    while (tkimg_Read2(handle, &c, 1) == 1 && bufPtr < bufEndPtr) {
        if (c == '\n') {
            *bufPtr = '\0';
            failure = FALSE;
            break;
        }
        *bufPtr = c;
        bufPtr++;
    }
    if (failure) {
        Tcl_AppendResult (interp, "RAW handler: Error reading header line (",
                          buf, ")\n", NULL);
        return FALSE;
    }
    return TRUE;
}

static Boln readHeader (Tcl_Interp *interp, tkimg_MFile *handle, RAWHEADER *th)
{
    char buf[HEADLEN];
    char tmpStr[HEADLEN];

    if (!readHeaderLine (interp, handle, buf) ||
        (1 != sscanf (buf, strMagic, th->id))) {
        Tcl_AppendResult (interp, "Unable to parse header field Magic\n", NULL);
        return FALSE;
    }
    if (strcmp (th->id, "RAW") != 0) {
        Tcl_AppendResult (interp, "Invalid value for header field Magic:",
                                  "Must be \"RAW\"\n", NULL);
        return FALSE;
    }

    if (!readHeaderLine (interp, handle, buf) ||
        (1 != sscanf (buf, strWidth, &th->width))) {
        Tcl_AppendResult (interp, "Unable to parse header field Width\n", NULL);
        return FALSE;
    }
    if (th->width < 1) {
        Tcl_AppendResult (interp, "Invalid value for header field Width:",
                                  "Must be greater than zero\n", NULL);
        return FALSE;
    }

    if (!readHeaderLine (interp, handle, buf) ||
        (1 != sscanf (buf, strHeight, &th->height))) {
        Tcl_AppendResult (interp, "Unable to parse header field Height\n", NULL);
        return FALSE;
    }
    if (th->height < 1) {
        Tcl_AppendResult (interp, "Invalid value for header field Height:",
                                  "Must be greater than zero\n", NULL);
        return FALSE;
    }

    if (!readHeaderLine (interp, handle, buf) ||
        (1 != sscanf (buf, strNumChan, &th->nChans))) {
        Tcl_AppendResult (interp, "Unable to parse header field NumChan\n", NULL);
        return FALSE;
    }
    if (th->nChans != 1 && th->nChans != 3) {
        Tcl_AppendResult (interp, "Invalid value for header field NumChan:",
                                  "Must be 1 or 3\n", NULL);
        return FALSE;
    }

    if (!readHeaderLine (interp, handle, buf) ||
        (1 != sscanf (buf, strByteOrder, tmpStr))) {
        Tcl_AppendResult (interp, "Unable to parse header field ByteOrder\n", NULL);
        return FALSE;
    }

    if (strcmp (tmpStr, strIntel) == 0) {
        th->byteOrder = INTEL;
    } else if (strcmp (tmpStr, strMotorola) == 0) {
        th->byteOrder = MOTOROLA;
    } else {
        Tcl_AppendResult (interp, "Invalid value for header field ByteOrder:",
                                  "Must be ", strIntel, " or ", strMotorola,
                                  "\n", NULL);
        return FALSE;
    }

    if (!readHeaderLine (interp, handle, buf) ||
        (1 != sscanf (buf, strScanOrder, tmpStr))) {
        Tcl_AppendResult (interp, "Unable to parse header field ScanOrder\n", NULL);
        return FALSE;
    }
    if (strcmp (tmpStr, strTopDown) == 0) {
        th->scanOrder = TOP_DOWN;
    } else if (strcmp (tmpStr, strBottomUp) == 0) {
        th->scanOrder = BOTTOM_UP;
    } else {
        Tcl_AppendResult (interp, "Invalid value for header field ScanOrder:",
                                  "Must be ", strTopDown, " or ", strBottomUp,
                                  "\n", NULL);
        return FALSE;
    }

    if (!readHeaderLine (interp, handle, buf) ||
        (1 != sscanf (buf, strPixelType, tmpStr))) {
        Tcl_AppendResult (interp, "Unable to parse header field PixelType\n", NULL);
        return FALSE;
    }
    if (strcmp (tmpStr, strFloat) == 0) {
        th->pixelType = TYPE_FLOAT;
    } else if (strcmp (tmpStr, strUShort) == 0) {
        th->pixelType = TYPE_USHORT;
    } else if (strcmp (tmpStr, strUByte) == 0) {
        th->pixelType = TYPE_UBYTE;
    } else {
        Tcl_AppendResult (interp, "Invalid value for header field PixelType:",
                                  "Must be ", strFloat, ",", strUShort, " or ", strUByte,
                                  "\n", NULL);
        return FALSE;
    }

    return TRUE;
}

static Boln writeHeader (tkimg_MFile *handle, RAWHEADER *th)
{
    char buf[1024];

    sprintf (buf, strMagic, "RAW");
    tkimg_Write2(handle, buf, strlen (buf));
    sprintf (buf, strWidth, th->width);
    tkimg_Write2(handle, buf, strlen (buf));
    sprintf (buf, strHeight, th->height);
    tkimg_Write2(handle, buf, strlen (buf));
    sprintf (buf, strNumChan, th->nChans);
    tkimg_Write2(handle, buf, strlen (buf));
    sprintf (buf, strByteOrder, tkimg_IsIntel()? strIntel: strMotorola);
    tkimg_Write2(handle, buf, strlen (buf));
    sprintf (buf, strScanOrder, th->scanOrder == TOP_DOWN?
                                strTopDown: strBottomUp);
    tkimg_Write2(handle, buf, strlen (buf));
    sprintf (buf, strPixelType, (th->pixelType == TYPE_FLOAT?  strFloat:
                                (th->pixelType == TYPE_USHORT? strUShort:
                                (th->pixelType == TYPE_UBYTE?  strUByte:
                                                               strUnknown))));
    tkimg_Write2(handle, buf, strlen (buf));
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

static int ParseFormatOpts(Tcl_Interp *interp, Tcl_Obj *format,
        FMTOPT *opts);
static int CommonMatch(Tcl_Interp *interp, tkimg_MFile *handle,
        Tcl_Obj *format, int *widthPtr, int *heightPtr,
        RAWHEADER *rawHeaderPtr);
static int CommonRead(Tcl_Interp *interp, tkimg_MFile *handle,
        const char *filename, Tcl_Obj *format,
        Tk_PhotoHandle imageHandle, int destX, int destY,
        int width, int height, int srcX, int srcY);
static int CommonWrite(Tcl_Interp *interp,
        const char *filename, Tcl_Obj *format,
        tkimg_MFile *handle, Tk_PhotoImageBlock *blockPtr);

static int ParseFormatOpts(
    Tcl_Interp *interp,
    Tcl_Obj *format,
    FMTOPT *opts
) {
    static const char *const rawOptions[] = {
         "-verbose", "-width", "-height", "-nchan", "-byteorder",
         "-scanorder", "-pixeltype", "-min", "-max", "-gamma",
         "-useheader", "-map", "-uuencode", "-saturation", "-cutoff", 
         "-nomap", "-printagc", NULL
    };
    int objc, i, index;
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
    opts->uuencode   = 1;
    opts->saturation = -1.0;
    opts->cutOff     = 3.0;
    opts->printAgc   = 0;

    if (tkimg_ListObjGetElements (interp, format, &objc, &objv) != TCL_OK)
        return TCL_ERROR;
    if (objc) {
        for (i=1; i<objc; i++) {
            if (Tcl_GetIndexFromObj (interp, objv[i], (const char *CONST86 *)rawOptions,
                    "format option", 0, &index) != TCL_OK) {
                return TCL_ERROR;
            }
            i++;
            if (i >= objc) {
                Tcl_AppendResult (interp, "No value for option \"",
                        Tcl_GetStringFromObj (objv[--i], (int *) NULL),
                        "\"", (char *) NULL);
                return TCL_ERROR;
            }
            optionStr = Tcl_GetStringFromObj(objv[i], (int *) NULL);
            switch(index) {
                case 0:
                    if (Tcl_GetBoolean(interp, optionStr, &boolVal) == TCL_ERROR) {
                        Tcl_AppendResult (interp, "Invalid verbose mode \"", optionStr,
                                          "\": should be 1 or 0, on or off, true or false",
                                          (char *) NULL);
                        return TCL_ERROR;
                    }
                    opts->verbose = boolVal;
                    break;
                case 1:
                    if (Tcl_GetInt(interp, optionStr, &intVal) == TCL_ERROR || intVal <= 0) {
                        Tcl_AppendResult (interp, "Invalid image width \"", optionStr,
                                          "\": Must be greater than zero.", (char *) NULL);
                        return TCL_ERROR;
                    }
                    opts->width = intVal;
                    break;
                case 2:
                    if (Tcl_GetInt(interp, optionStr, &intVal) == TCL_ERROR || intVal <= 0) {
                        Tcl_AppendResult (interp, "Invalid image height \"", optionStr,
                                          "\": Must be greater than zero.", (char *) NULL);
                        return TCL_ERROR;
                    }
                    opts->height = intVal;
                    break;
                case 3:
                    if (Tcl_GetInt(interp, optionStr, &intVal) == TCL_ERROR ||
                        intVal <= 0 || intVal > 4) {
                        Tcl_AppendResult (interp, "Invalid number of channels \"", optionStr,
                                          "\": Must be either 1, 2, 3 or 4.", (char *) NULL);
                        return TCL_ERROR;
                    }
                    opts->nchan = intVal;
                    break;
                case 4:
                    if (!strncmp (optionStr, strIntel, strlen (strIntel))) {
                        opts->byteOrder = INTEL;
                    } else if (!strncmp (optionStr, strMotorola, strlen (strMotorola))) {
                        opts->byteOrder = MOTOROLA;
                    } else {
                        Tcl_AppendResult (interp, "Invalid byteorder mode \"", optionStr,
                                          "\": Must be ", strIntel, " or ", strMotorola, ".",
                                          (char *) NULL);
                        return TCL_ERROR;
                    }
                    break;
                case 5:
                    if (!strncmp (optionStr, strTopDown, strlen (strTopDown))) {
                        opts->scanOrder = TOP_DOWN;
                    } else if (!strncmp (optionStr, strBottomUp, strlen (strBottomUp))) {
                        opts->scanOrder = BOTTOM_UP;
                    } else {
                        Tcl_AppendResult (interp, "Invalid scanline order \"", optionStr,
                                          "\": should be TopDown or BottomUp",
                                          (char *) NULL);
                        return TCL_ERROR;
                    }
                    break;
                case 6:
                    if (!strncmp (optionStr, strFloat, strlen (strFloat))) {
                        opts->pixelType = TYPE_FLOAT;
                    } else if (!strncmp (optionStr, strUShort, strlen (strUShort))) {
                        opts->pixelType = TYPE_USHORT;
                    } else if (!strncmp (optionStr, strUByte, strlen (strUByte))) {
                        opts->pixelType = TYPE_UBYTE;
                    } else {
                        Tcl_AppendResult (interp, "Invalid pixel type \"", optionStr,
                                          "\": should be float, short or byte",
                                          (char *) NULL);
                        return TCL_ERROR;
                    }
                    break;
                case 7:
                    if (Tcl_GetDouble(interp, optionStr, &doubleVal) == TCL_ERROR) {
                        Tcl_AppendResult (interp, "Invalid minimum map value \"", optionStr,
                                          "\": Must be greater than or equal to zero.", (char *) NULL);
                        return TCL_ERROR;
                    }
                    if (doubleVal >= 0.0) {
                        opts->minVal = doubleVal;
                    }
                    break;
                case 8:
                    if (Tcl_GetDouble(interp, optionStr, &doubleVal) == TCL_ERROR) {
                        Tcl_AppendResult (interp, "Invalid maximum map value \"", optionStr,
                                          "\": Must be greater than or equal to zero.", (char *) NULL);
                        return TCL_ERROR;
                    }
                    if (doubleVal >= 0.0) {
                        opts->maxVal = doubleVal;
                    }
                    break;
                case 9:
                    if (Tcl_GetDouble(interp, optionStr, &doubleVal) == TCL_ERROR) {
                        Tcl_AppendResult (interp, "Invalid gamma value \"", optionStr,
                                          "\": Must be greater than or equal to zero.", (char *) NULL);
                        return TCL_ERROR;
                    }
                    if (doubleVal >= 0.0) {
                        opts->gamma = doubleVal;
                    }
                    break;
                case 10:
                    if (Tcl_GetBoolean(interp, optionStr, &boolVal) == TCL_ERROR) {
                        Tcl_AppendResult (interp, "Invalid useheader mode \"", optionStr,
                                          "\": should be 1 or 0, on or off, true or false",
                                          (char *) NULL);
                        return TCL_ERROR;
                    }
                    opts->useHeader = boolVal;
                    break;
                case 11:
                    if (!strncmp (optionStr, IMG_MAP_NONE_STR, strlen (IMG_MAP_NONE_STR))) {
                        opts->mapMode = IMG_MAP_NONE;
                    } else if (!strncmp (optionStr, IMG_MAP_MINMAX_STR, strlen (IMG_MAP_MINMAX_STR))) {
                        opts->mapMode = IMG_MAP_MINMAX;
                    } else if (!strncmp (optionStr, IMG_MAP_AGC_STR, strlen (IMG_MAP_AGC_STR))) {
                        opts->mapMode = IMG_MAP_AGC;
                    } else {
                        Tcl_AppendResult (interp, "Invalid mapping mode \"", optionStr,
                                          "\": should be none, minmax or agc",
                                          (char *) NULL);
                        return TCL_ERROR;
                    }
                    break;
                case 12:
                    if (Tcl_GetBoolean(interp, optionStr, &boolVal) == TCL_ERROR) {
                        Tcl_AppendResult (interp, "Invalid uuencode mode \"", optionStr,
                                          "\": should be 1 or 0, on or off, true or false",
                                          (char *) NULL);
                        return TCL_ERROR;
                    }
                    opts->uuencode = boolVal;
                    break;
                case 13:
                    if (Tcl_GetDouble(interp, optionStr, &doubleVal) == TCL_ERROR) {
                        Tcl_AppendResult (interp, "Invalid saturation value \"", optionStr,
                                          "\": Must be greater than or equal to zero.", (char *) NULL);
                        return TCL_ERROR;
                    }
                    if (doubleVal >= 0.0) {
                        opts->saturation = doubleVal;
                    }
                    break;
                case 14:
                    if (Tcl_GetDouble(interp, optionStr, &doubleVal) == TCL_ERROR) {
                        Tcl_AppendResult (interp, "Invalid cutoff value \"", optionStr,
                                          "\": Must be greater than or equal to zero.", (char *) NULL);
                        return TCL_ERROR;
                    }
                    if (doubleVal >= 0.0) {
                        opts->cutOff = doubleVal;
                    }
                    break;
                case 15:
                    /* Option "-nomap" for backward compatibility. */
                    if (Tcl_GetBoolean(interp, optionStr, &boolVal) == TCL_ERROR) {
                        Tcl_AppendResult (interp, "Invalid nomap mode \"", optionStr,
                                          "\": should be 1 or 0, on or off, true or false",
                                          (char *) NULL);
                        return TCL_ERROR;
                    }
                    if (boolVal) {
                        opts->mapMode = IMG_MAP_NONE;
                    }
                    break;
                case 16:
                    if (Tcl_GetBoolean(interp, optionStr, &boolVal) == TCL_ERROR) {
                        Tcl_AppendResult (interp, "Invalid printagc mode \"", optionStr,
                                          "\": should be 1 or 0, on or off, true or false",
                                          (char *) NULL);
                        return TCL_ERROR;
                    }
                    opts->printAgc = boolVal;
                    break;
            }
        }
    }

    /* Convert minimum and maximum range values. */
    if (opts->minVal >= 0.0 && opts->maxVal >= 0.0 && opts->minVal >= opts->maxVal) {
        Tcl_AppendResult (interp, "Invalid range values: Maximum must be grater than minimum.", (char *) NULL);
        return TCL_ERROR;
    }
    return TCL_OK;
}

static int ChnMatch(
    Tcl_Channel chan,
    const char *filename,
    Tcl_Obj *format,
    int *widthPtr,
    int *heightPtr,
    Tcl_Interp *interp
) {
    tkimg_MFile handle;

    handle.data = (char *) chan;
    handle.state = IMG_CHAN;

    return CommonMatch (interp, &handle, format, widthPtr, heightPtr, NULL);
}

static int ObjMatch(
    Tcl_Obj *data,
    Tcl_Obj *format,
    int *widthPtr,
    int *heightPtr,
    Tcl_Interp *interp
) {
    tkimg_MFile handle;
    FMTOPT opts;

    if (ParseFormatOpts (interp, format, &opts) == TCL_ERROR) {
        return FALSE;
    }
    if (!opts.uuencode) {
        size_t length;
        handle.data = (char *) tkimg_GetByteArrayFromObj2(data, &length);
        handle.length = length;
        handle.state = IMG_STRING;
    } else {
        tkimg_ReadInit(data, 'M', &handle);
    }
    return CommonMatch (interp, &handle, format, widthPtr, heightPtr, NULL);
}

static int CommonMatch(
    Tcl_Interp *interp,
    tkimg_MFile *handle,
    Tcl_Obj *format,
    int *widthPtr,
    int *heightPtr,
    RAWHEADER *rawHeaderPtr
) {
    RAWHEADER th;
    FMTOPT opts;

    initHeader (&th);

    if (ParseFormatOpts (interp, format, &opts) == TCL_ERROR) {
        return FALSE;
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
    }
    *widthPtr  = th.width;
    *heightPtr = th.height;
    if (rawHeaderPtr) {
        *rawHeaderPtr = th;
    }
    return TRUE;
}

static int ChnRead(
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
    tkimg_MFile handle;

    handle.data = (char *) chan;
    handle.state = IMG_CHAN;

    return CommonRead (interp, &handle, filename, format, imageHandle,
                       destX, destY, width, height, srcX, srcY);
}

static int ObjRead(
    Tcl_Interp *interp,
    Tcl_Obj *data,
    Tcl_Obj *format,
    Tk_PhotoHandle imageHandle,
    int destX, int destY,
    int width, int height,
    int srcX, int srcY
) {
    tkimg_MFile handle;
    FMTOPT opts;

    if (ParseFormatOpts (interp, format, &opts) == TCL_ERROR) {
        return TCL_ERROR;
    }
    if (!opts.uuencode) {
        size_t length;
        handle.data = (char *) tkimg_GetByteArrayFromObj2(data, &length);
        handle.length = length;
        handle.state = IMG_STRING;
    } else {
        tkimg_ReadInit(data, 'M', &handle);
    }

    return CommonRead (interp, &handle, "InlineData", format, imageHandle,
                       destX, destY, width, height, srcX, srcY);
}

static int CommonRead(
    Tcl_Interp *interp,         /* Interpreter to use for reporting errors. */
    tkimg_MFile *handle,        /* The image file, open for reading. */
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
    Float minVals[IMG_MAX_CHANNELS], maxVals[IMG_MAX_CHANNELS];
    int stopY, outY, outWidth, outHeight;
    RAWFILE tf;
    FMTOPT opts;
    Boln swapBytes;
    Boln fastMode;
    Int  byteOrder;
    Int  scanOrder;
    Int  pixelType;
    Int  matte = 0;
    UByte  *pixbufPtr;
    Float  *floatBufPtr;
    UShort *ushortBufPtr;
    UByte  *ubyteBufPtr;
    Float  gtable[IMG_GAMMA_TABLE_SIZE];
    int result = TCL_OK;

    memset (&tf, 0, sizeof (RAWFILE));
    initHeader (&tf.th);

    if (!CommonMatch (interp, handle, format, &fileWidth, &fileHeight, &tf.th)) {
        return TCL_ERROR;
    }

    if (ParseFormatOpts (interp, format, &opts) == TCL_ERROR) {
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
        return TCL_OK;
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
        case TYPE_FLOAT: {
            tf.floatBuf = (Float *)ckalloc (fileWidth*fileHeight*tf.th.nChans*sizeof (Float));
            tkimg_ReadFloatFile (handle, tf.floatBuf, fileWidth, fileHeight, tf.th.nChans,
                                 swapBytes, opts.verbose, opts.mapMode != IMG_MAP_NONE, 
                                 minVals, maxVals, opts.saturation);
            break;
        }
        case TYPE_USHORT: {
            tf.ushortBuf = (UShort *)ckalloc (fileWidth*fileHeight*tf.th.nChans*sizeof (UShort));
            tkimg_ReadUShortFile (handle, tf.ushortBuf, fileWidth, fileHeight, tf.th.nChans,
                                  swapBytes, opts.verbose, opts.mapMode != IMG_MAP_NONE, minVals, maxVals);
            break;
        }
        case TYPE_UBYTE: {
            tf.ubyteBuf = (UByte *)ckalloc (fileWidth*fileHeight*tf.th.nChans*sizeof (UByte));
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
            /* Nothing to do. Saturation is considered on tkimg_ReadFloatFile. */
            break;
        }
    }

    switch (pixelType) {
        case TYPE_FLOAT: {
            tkimg_RemapFloatValues (
                tf.floatBuf, fileWidth, fileHeight, tf.th.nChans,
                minVals, maxVals, opts.mapMode == IMG_MAP_AGC? opts.cutOff: -1.0,
                opts.printAgc
            );
            break;
        }
        case TYPE_USHORT: {
            tkimg_RemapUShortValues (
                tf.ushortBuf, fileWidth, fileHeight, tf.th.nChans,
                minVals, maxVals
            );
            break;
        }
    }

    if (tkimg_PhotoExpand (interp, imageHandle, destX + outWidth, destY + outHeight) == TCL_ERROR) {
        rawClose (&tf, fastMode);
        return TCL_ERROR;
    }

    if (fastMode) {
        tf.pixbuf = tf.ubyteBuf;
    } else {
        tf.pixbuf = (UByte *) ckalloc (fileWidth * tf.th.nChans);
    }

    block.pixelSize = tf.th.nChans;
    block.pitch = fileWidth * tf.th.nChans;
    block.width = outWidth;
    block.height = fastMode? outHeight: 1;
    block.offset[0] = 0;
    block.offset[1] = (tf.th.nChans > 1? 1: 0);
    block.offset[2] = (tf.th.nChans > 1? 2: 0);
    block.offset[3] = (tf.th.nChans == 4 && matte? 3: 0);
    block.pixelPtr = tf.pixbuf + srcX * tf.th.nChans;

    stopY = srcY + outHeight;
    outY = destY;

    if (fastMode) {
        if (tkimg_PhotoPutBlock(interp, imageHandle, &block, destX, outY,
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
                if (tkimg_PhotoPutBlock(interp, imageHandle, &block, destX, outY,
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

static int ChnWrite(
    Tcl_Interp *interp,
    const char *filename,
    Tcl_Obj *format,
    Tk_PhotoImageBlock *blockPtr
) {
    Tcl_Channel chan;
    tkimg_MFile handle;
    int result;

    chan = tkimg_OpenFileChannel (interp, filename, 0644);
    if (!chan) {
        return TCL_ERROR;
    }

    handle.data = (char *) chan;
    handle.state = IMG_CHAN;

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
    tkimg_MFile handle;
    int result;
    Tcl_DString data;

    Tcl_DStringInit(&data);
    tkimg_WriteInit (&data, &handle);
    result = CommonWrite (interp, "InlineData", format, &handle, blockPtr);
    tkimg_Putc(IMG_DONE, &handle);

    if (result == TCL_OK) {
        Tcl_DStringResult(interp, &data);
    } else {
        Tcl_DStringFree(&data);
    }
    return result;
}

static int CommonWrite(
    Tcl_Interp *interp,
    const char *filename,
    Tcl_Obj *format,
    tkimg_MFile *handle,
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
    if (ParseFormatOpts (interp, format, &opts) == TCL_ERROR) {
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
    tf.ubyteBuf = (UByte *)ckalloc (bytesPerLine);

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
                    /* Have a matte channel and write it. */
                    *(ubyteBufPtr++) = pixelPtr[alphaOffset];
                }
                pixelPtr += blockPtr->pixelSize;
            }
        }
        if (tkimg_Write2(handle, (char *)tf.ubyteBuf, bytesPerLine) != bytesPerLine) {
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

