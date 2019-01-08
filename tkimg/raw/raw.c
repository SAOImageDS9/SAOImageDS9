/* STARTHEADER
 *
 * File :       raw.c
 *
 * Author :     Paul Obermeier (paul@poSoft.de)
 *
 * Date :       Wed Feb 21 12:45:08 CET 2001
 *
 * Copyright :  (C) 2001-2018 Paul Obermeier
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
 *                       -cutoff <float> -saturation <float>"
 * Write RAW image: "raw -useheader true -verbose <bool> -nchan <int>
 *                       -scanorder <string>"
 *
 * For raw images without header:
 * Read  RAW image: "raw -useheader false -verbose <bool> -map <enum>
 *                       -gamma <float> -min <float> -max <float>
 *                       -cutoff <float> -saturation <float>
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
 * -cutoff <float>:     If option is given, an Automatic Gain Control algorithmn is
 *                      applied to the input values. The supplied value specifies the
 *                      cut-off value in percent.
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

#define DEBUG_READ 0
#define DEBUG_AGC  0

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

#define MAXCHANS  4

 /* Mapping modes. */
#define MAP_NONE   0
#define MAP_MINMAX 1
#define MAP_AGC    2
#define strNone    "none"
#define strMinmax  "minmax"
#define strAgc     "agc"

/* The size of the histogram and lookup tables for Automatic Gain Control */
#define HISTOGRAM_SIZE  256
#define HISTOGRAM_SCALE 255.0

/* Some general defines and typedefs. */
#define TRUE  1
#define FALSE 0
#define MIN(a,b) ((a)<(b)? (a): (b))
#define MAX(a,b) ((a)>(b)? (a): (b))
#define CLAMP(val,min,max) (MAX (min, MIN (val, max)))

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

/* RAW file format options structure for use with ParseFormatOpts */
typedef struct {
    Int   width;
    Int   height;
    Int   nchan;
    Int   scanOrder;
    Int   byteOrder;
    Int   pixelType;
    Int   mapMode;
    Float gamma;        /* MAP_MINMAX and MAP_AGC */
    Float minVal;       /* MAP_MINMAX */
    Float maxVal;       /* MAP_MINMAX */
    Float saturation;   /* MAP_AGC */
    Float cutOff;       /* MAP_AGC */
    Boln  verbose;
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

#define GTABSIZE 257

/* Given a pixel value in Float format, "valIn", and a gamma-correction
 * lookup table, "tab", macro "gcorrectFloat" returns the gamma-corrected
 * pixel value in "valOut".
 */

#define gcorrectFloat(valIn,tab,valOut)                                 \
    {                                                                   \
        Int     gc_i;                                                   \
        Float   gc_t;                                                   \
        gc_t = (valIn) * (GTABSIZE - 2);                                \
        gc_i = gc_t;                                                    \
        gc_t -= gc_i;                                                   \
        (valOut) = (tab)[gc_i] * (1.0-gc_t) + (tab)[gc_i+1] * gc_t;     \
    }

static Boln gtableFloat (Float gamma, Float table[])
{
    Int i;

    for (i = 0; i < GTABSIZE - 1; ++i) {
        table[i] = pow ((Float) i / (Float) (GTABSIZE - 2), 1.0 / gamma);
    }
    table[GTABSIZE - 1] = 1.0;
    return TRUE;
}

/* If no gamma correction is needed (i.e. gamma == 1.0), specify NULL for
 * parameter gtable.
 */
static void FloatGammaUByte (Int n, const Float floatIn[],
                             const Float gtable[], UByte ubOut[])
{
    const Float *src, *stop;
    Float       ftmp;
    Int         itmp;
    UByte       *ubdest;

    src = floatIn;
    stop = floatIn + n;
    ubdest = ubOut;

    /* Handle a gamma value of 1.0 (gtable == NULL) as a special case.
       Quite nice speed improvement for the maybe most used case. */
    if (gtable) {
        while (src < stop) {
            ftmp = CLAMP (*src, 0.0, 1.0);
            gcorrectFloat (ftmp, gtable, ftmp);
            itmp = (Int)(ftmp * 255.0 + 0.5);
            *ubdest = CLAMP (itmp, 0, 255);
            ++ubdest;
            ++src;
        }
    } else {
        while (src < stop) {
            itmp = (Int)(*src * 255.0 + 0.5);
            *ubdest = CLAMP (itmp, 0, 255);
            ++ubdest;
            ++src;
        }
    }
    return;
}

/* If no gamma correction is needed (i.e. gamma == 1.0), specify NULL for
 * parameter gtable.
 */
static void UShortGammaUByte (Int n, const UShort shortIn[],
                              const Float gtable[], UByte ubOut[])
{
    const UShort *src, *stop;
    Float        ftmp;
    Int          itmp;
    UByte        *ubdest;

    src = shortIn;
    stop = shortIn + n;
    ubdest = ubOut;

    /* Handle a gamma value of 1.0 (gtable == NULL) as a special case.
       Quite nice speed improvement for the maybe most used case. */
    if (gtable) {
        while (src < stop) {
            ftmp = *src / 65535.0;
            ftmp = CLAMP (ftmp, 0.0, 1.0);
            gcorrectFloat (ftmp, gtable, ftmp);
            itmp = (Int)(ftmp * 255.0 + 0.5);
            *ubdest = CLAMP (itmp, 0, 255);
            ++ubdest;
            ++src;
        }
    } else {
        while (src < stop) {
            itmp = (Int)(*src / 256);
            *ubdest = CLAMP (itmp, 0, 255);
            ++ubdest;
            ++src;
        }
    }
    return;
}

/* This function determines at runtime, whether we are on an Intel system. */

static int isIntel (void)
{
    unsigned long val = 513;
    /* On Intel (little-endian) systems this value is equal to "\01\02\00\00".
       On big-endian systems this value equals "\00\00\02\01" */
    return memcmp(&val, "\01\02", 2) == 0;
}

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

static Boln readFloatRow (tkimg_MFile *handle, Float *pixels, Int nFloats,
                          char *buf, Boln swapBytes)
{
    int   i;
    Float *mPtr = pixels;
    char  *bufPtr = buf;

#if DEBUG_READ == 1
    printf ("Reading %d floats\n", nFloats); fflush (stdout);
#endif
    if (4 * nFloats != tkimg_Read (handle, buf, 4 * nFloats))
        return FALSE;

    if (swapBytes) {
        for (i=0; i<nFloats; i++) {
            ((char *)mPtr)[0] = bufPtr[3];
            ((char *)mPtr)[1] = bufPtr[2];
            ((char *)mPtr)[2] = bufPtr[1];
            ((char *)mPtr)[3] = bufPtr[0];
            mPtr++;
            bufPtr += 4;
        }
    } else {
        for (i=0; i<nFloats; i++) {
            ((char *)mPtr)[0] = bufPtr[0];
            ((char *)mPtr)[1] = bufPtr[1];
            ((char *)mPtr)[2] = bufPtr[2];
            ((char *)mPtr)[3] = bufPtr[3];
            mPtr++;
            bufPtr += 4;
        }
    }
    return TRUE;
}

static Boln readUShortRow (tkimg_MFile *handle, UShort *pixels, Int nShorts,
                           char *buf, Boln swapBytes)
{
    int    i;
    UShort *mPtr = pixels;
    char   *bufPtr = buf;

#if DEBUG_READ == 1
    printf ("Reading %d UShorts\n", nShorts); fflush (stdout);
#endif
    if (2 * nShorts != tkimg_Read (handle, buf, 2 * nShorts))
        return FALSE;

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

static Boln readUByteRow (tkimg_MFile *handle, UByte *pixels, Int nBytes)
{
#if DEBUG_READ == 1
    printf ("Reading %d UBytes\n", nBytes); fflush (stdout);
#endif
    if (nBytes != tkimg_Read (handle, (char *)pixels, nBytes))
        return FALSE;

    return TRUE;
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
    sprintf (str, "\tHost byte order  : %s\n",      isIntel ()?  strIntel: strMotorola);           OUT;
    sprintf (str, "\tFile byte order  : %s\n",      th->byteOrder == INTEL?
                                                    strIntel: strMotorola);                        OUT;
    sprintf (str, "\tMapping mode     : %s\n",      (opts->mapMode == MAP_NONE?   strNone:
                                                    (opts->mapMode == MAP_MINMAX? strMinmax:
                                                    (opts->mapMode == MAP_AGC?    strAgc:
                                                                                  strUnknown))));  OUT;
    if (opts->mapMode != MAP_NONE) {
        sprintf (str, "\tGamma correction : %f\n",       opts->gamma);                             OUT;
        if (opts->mapMode == MAP_MINMAX) {
            sprintf (str, "\tMinimum map value: %f\n",   opts->minVal);                            OUT;
            sprintf (str, "\tMaximum map value: %f\n",   opts->maxVal);                            OUT;
        }
        if (opts->mapMode == MAP_AGC) {
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

#if DEBUG_READ == 1
    printf ("readHeaderLine\n"); fflush (stdout);
#endif

    while (tkimg_Read (handle, &c, 1) == 1 && bufPtr < bufEndPtr) {
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
    tkimg_Write (handle, buf, strlen (buf));
    sprintf (buf, strWidth, th->width);
    tkimg_Write (handle, buf, strlen (buf));
    sprintf (buf, strHeight, th->height);
    tkimg_Write (handle, buf, strlen (buf));
    sprintf (buf, strNumChan, th->nChans);
    tkimg_Write (handle, buf, strlen (buf));
    sprintf (buf, strByteOrder, isIntel()? strIntel: strMotorola);
    tkimg_Write (handle, buf, strlen (buf));
    sprintf (buf, strScanOrder, th->scanOrder == TOP_DOWN?
                                strTopDown: strBottomUp);
    tkimg_Write (handle, buf, strlen (buf));
    sprintf (buf, strPixelType, (th->pixelType == TYPE_FLOAT?  strFloat:
                                (th->pixelType == TYPE_USHORT? strUShort:
                                (th->pixelType == TYPE_UBYTE?  strUByte:
                                                               strUnknown))));
    tkimg_Write (handle, buf, strlen (buf));
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

static Boln readFloatFile (tkimg_MFile *handle, Float *buf, Int width, Int height,
                           Int nchan, Boln swapBytes, Boln verbose, Boln findMinMax,
                           Float minVals[], Float maxVals[])
{
    Int x, y, c;
    Float *bufPtr = buf;
    char  *line;

#if DEBUG_READ == 1
    printf ("readFloatFile: Width=%d Height=%d nchan=%d swapBytes=%s findMinMax=%s\n",
             width, height, nchan, swapBytes? "yes": "no", findMinMax? "yes": "no"); fflush (stdout);
#endif
    for (c=0; c<nchan; c++) {
        minVals[c] = (Float) 1.0E30;
        maxVals[c] = (Float)-1.0E30;
    }
    line = ckalloc (sizeof (Float) * nchan * width);

    for (y=0; y<height; y++) {
        if (!readFloatRow (handle, bufPtr, nchan * width, line, swapBytes))
            return FALSE;
        if (findMinMax) {
            for (x=0; x<width; x++) {
                for (c=0; c<nchan; c++) {
                    if (*bufPtr > maxVals[c]) maxVals[c] = *bufPtr;
                    if (*bufPtr < minVals[c]) minVals[c] = *bufPtr;
                    bufPtr++;
                }
            }
        } else {
            bufPtr += nchan * width;
        }
    }
    if (verbose && findMinMax) {
        printf ("\tMinimum pixel values :");
        for (c=0; c<nchan; c++) {
            printf (" %f", minVals[c]);
        }
        printf ("\n");
        printf ("\tMaximum pixel values :");
        for (c=0; c<nchan; c++) {
            printf (" %f", maxVals[c]);
        }
        printf ("\n");
        fflush (stdout);
    }
    ckfree (line);
    return TRUE;
}

static Boln readUShortFile (tkimg_MFile *handle, UShort *buf, Int width, Int height,
                            Int nchan, Boln swapBytes, Boln verbose, Boln findMinMax,
                            Float minVals[], Float maxVals[])
{
    Int    x, y, c;
    UShort *bufPtr = buf;
    char   *line;

#if DEBUG_READ == 1
    printf ("readUShortFile: Width=%d Height=%d nchan=%d swapBytes=%s findMinMax=%s\n",
             width, height, nchan, swapBytes? "yes": "no", findMinMax? "yes": "no"); fflush (stdout);
#endif
    for (c=0; c<nchan; c++) {
        minVals[c] = (Float) 1.0E30;
        maxVals[c] = (Float)-1.0E30;
    }
    line = ckalloc (sizeof (UShort) * nchan * width);

    for (y=0; y<height; y++) {
        if (!readUShortRow (handle, bufPtr, nchan * width, line, swapBytes))
            return FALSE;
        if (findMinMax) {
            for (x=0; x<width; x++) {
                for (c=0; c<nchan; c++) {
                    if (*bufPtr > maxVals[c]) maxVals[c] = *bufPtr;
                    if (*bufPtr < minVals[c]) minVals[c] = *bufPtr;
                    bufPtr++;
                }
            }
        } else {
            bufPtr += nchan * width;
        }
    }
    if (verbose && findMinMax) {
        printf ("\tMinimum pixel values :");
        for (c=0; c<nchan; c++) {
            printf (" %d", (UShort)minVals[c]);
        }
        printf ("\n");
        printf ("\tMaximum pixel values :");
        for (c=0; c<nchan; c++) {
            printf (" %d", (UShort)maxVals[c]);
        }
        printf ("\n");
        fflush (stdout);
    }
    ckfree (line);
    return TRUE;
}

static Boln readUByteFile (tkimg_MFile *handle, UByte *buf, Int width, Int height,
                           Int nchan, Boln verbose, Boln findMinMax,
                           Float minVals[], Float maxVals[])
{
    Int   x, y, c;
    UByte *bufPtr = buf;

#if DEBUG_READ == 1
    printf ("readUByteFile: Width=%d Height=%d nchan=%d findMinMax=%s\n",
             width, height, nchan, findMinMax? "yes": "no");
        fflush (stdout);
#endif
    for (c=0; c<nchan; c++) {
        minVals[c] = (Float) 1.0E30;
        maxVals[c] = (Float)-1.0E30;
    }
    for (y=0; y<height; y++) {
        if (!readUByteRow (handle, bufPtr, nchan * width))
            return FALSE;
        if (findMinMax) {
            for (x=0; x<width; x++) {
                for (c=0; c<nchan; c++) {
                    if (*bufPtr > maxVals[c]) maxVals[c] = *bufPtr;
                    if (*bufPtr < minVals[c]) minVals[c] = *bufPtr;
                    bufPtr++;
                }
            }
        } else {
            bufPtr += nchan * width;
        }
    }
    if (verbose && findMinMax) {
        printf ("\tMinimum pixel values :");
        for (c=0; c<nchan; c++) {
            printf (" %d", (UByte)minVals[c]);
        }
        printf ("\n");
        printf ("\tMaximum pixel values :");
        for (c=0; c<nchan; c++) {
            printf (" %d", (UByte)maxVals[c]);
        }
        printf ("\n");
        fflush (stdout);
    }
    return TRUE;
}

static Int GetHistoIndex (Float val, Float minVal, Float maxVal )
{
    Float scaledVal;
    Int histoInd;

    scaledVal = HISTOGRAM_SCALE * (MAX (val - minVal, 0.0) / (maxVal - minVal));
    histoInd = (int) CLAMP (scaledVal, 0.0, HISTOGRAM_SCALE);
    return histoInd;
}

static Boln HistogramFloat (Float *buf, Int width, Int height, Int nchan,
                            Float minVals[], Float maxVals[], Int histogram[])
{
    Int x, y, c;
    Int histoInd;
    Float *bufPtr = buf;

    memset (histogram, 0, HISTOGRAM_SIZE * sizeof (Int));
    /* Currently supported only for 1 channel images. */
    c = 0;
    for (y=0; y<height; y++) {
        for (x=0; x<width; x++) {
            histoInd = GetHistoIndex (*bufPtr, minVals[c], maxVals[c]);
            histogram[histoInd]++;
            bufPtr++;
        }
    }
#if DEBUG_AGC
    {
        Int i;
        Int count = 0;
        printf("agc globalMin %f\n", minVals[0]);
        printf("agc globalMax %f\n", maxVals[0]);
        for(i=0; i<HISTOGRAM_SIZE; i++) {
            printf ("agc histogram %3d %5d\n", i, histogram[i]);
            if (histogram[i] != 0) count++;
        }
        printf( "agc histostat %d %d\n", count, HISTOGRAM_SIZE - count);
    }
#endif
    return TRUE;
}

static Boln remapFloatValues (Float *buf, Int width, Int height, Int nchan,
                              Float minVals[], Float maxVals[],
                              Float agcCutOffPercent)
{
    Int   x, y, c;
    Float *bufPtr = buf;
    Float m[MAXCHANS], t[MAXCHANS];
    Float scaledVal;
    Float minNewVals[MAXCHANS], maxNewVals[MAXCHANS];

    for (c=0; c<nchan; c++) {
        minNewVals[c] = minVals[c];
        maxNewVals[c] = maxVals[c];
    }

    if (agcCutOffPercent > 0.0) {
        Int i;
        Int minLutInd = -1, maxLutInd = -1;
        Int histogram[HISTOGRAM_SIZE];
        Float lut[HISTOGRAM_SIZE];
        Float agcCutOff = CLAMP(agcCutOffPercent * 0.01, 0.0, 1.0);
        Float sum = 0.0;

        /* Calculate histogram. */
        HistogramFloat (buf, width, height, nchan, minVals, maxVals, histogram);

        /* Accumulate the histogram and divide by the image size. */
        for (i=0; i<HISTOGRAM_SIZE; i++) {
            sum = sum + histogram[i];
            lut[i] = sum / (double)(width * height);
            if( lut[i] >= agcCutOff && minLutInd < 0 ) {
                minLutInd = i;
            }
            if( lut[i] >= (1.0 - agcCutOff) && maxLutInd < 0 ) {
                maxLutInd = i;
            }
#if DEBUG_AGC
            printf ("agc lut %3d %.3f\n", i, lut[i]);
#endif
        }

        for (c=0; c<nchan; c++) {
            minNewVals[c] = minLutInd * (maxVals[c] - minVals[c]) / HISTOGRAM_SCALE + minVals[c];
            maxNewVals[c] = maxLutInd * (maxVals[c] - minVals[c]) / HISTOGRAM_SCALE + minVals[c];
#if DEBUG_AGC
            printf( "agc cutOff %f\n", agcCutOff);
            printf( "agc lutMinInd %d\n", minLutInd);
            printf( "agc lutMaxInd %d\n", maxLutInd);
            printf( "agc lutMin %f\n", minNewVals[c]);
            printf( "agc lutMax %f\n", maxNewVals[c]);
#endif
        }
    }

    for (c=0; c<nchan; c++) {
        m[c] = (1.0 - 0.0) / (maxNewVals[c] - minNewVals[c]);
        t[c] = 0.0 - m[c] * minNewVals[c];
    }

    for (y=0; y<height; y++) {
        for (x=0; x<width; x++) {
            for (c=0; c<nchan; c++) {
                scaledVal = *bufPtr * m[c] + t[c];
                *bufPtr = CLAMP (scaledVal, 0.0, 1.0);
                bufPtr++;
            }
        }
    }
    return TRUE;
}

static Boln remapUShortValues (UShort *buf, Int width, Int height, Int nchan,
                               Float minVals[], Float maxVals[])
{
    Int x, y, c;
    UShort *bufPtr = buf;
    Float m[MAXCHANS], t[MAXCHANS];

    for (c=0; c<nchan; c++) {
        m[c] = (65535.0 - 0.0) / (maxVals[c] - minVals[c]);
        t[c] = 0.0 - m[c] * minVals[c];
    }
    for (y=0; y<height; y++) {
        for (x=0; x<width; x++) {
            for (c=0; c<nchan; c++) {
                *bufPtr = *bufPtr * m[c] + t[c];
                bufPtr++;
            }
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

static int ParseFormatOpts (interp, format, opts)
    Tcl_Interp *interp;
    Tcl_Obj *format;
    FMTOPT *opts;
{
    static const char *const rawOptions[] = {
         "-verbose", "-width", "-height", "-nchan", "-byteorder",
         "-scanorder", "-pixeltype", "-min", "-max", "-gamma",
         "-useheader", "-map", "-uuencode", "-saturation", "-cutoff", 
         "-nomap", NULL
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
    opts->byteOrder  = isIntel()? INTEL: MOTOROLA;
    opts->scanOrder  = TOP_DOWN;
    opts->pixelType  = TYPE_UBYTE;
    opts->minVal     = -1.0;
    opts->maxVal     = -1.0;
    opts->gamma      = 1.0;
    opts->useHeader  = 1;
    opts->mapMode    = MAP_MINMAX;
    opts->uuencode   = 1;
    opts->saturation = -1.0;
    opts->cutOff     = 3.0;

    if (tkimg_ListObjGetElements (interp, format, &objc, &objv) != TCL_OK)
        return TCL_ERROR;
    if (objc) {
        for (i=1; i<objc; i++) {
            if (Tcl_GetIndexFromObj (interp, objv[i], (CONST84 char *CONST86 *)rawOptions,
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
                    if (!strncmp (optionStr, strNone, strlen (strNone))) {
                        opts->mapMode = MAP_NONE;
                    } else if (!strncmp (optionStr, strMinmax, strlen (strMinmax))) {
                        opts->mapMode = MAP_MINMAX;
                    } else if (!strncmp (optionStr, strAgc, strlen (strAgc))) {
                        opts->mapMode = MAP_AGC;
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
                        opts->mapMode = MAP_NONE;
                    }
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
        handle.data = (char *) tkimg_GetByteArrayFromObj(data, &handle.length);
        handle.state = IMG_STRING;
    } else {
        tkimg_ReadInit(data, 'M', &handle);
    }
    return CommonMatch (interp, &handle, format, widthPtr, heightPtr, NULL);
}

static int CommonMatch (interp, handle, format, widthPtr, heightPtr, rawHeaderPtr)
    Tcl_Interp *interp;
    tkimg_MFile *handle;
    Tcl_Obj *format;
    int *widthPtr;
    int *heightPtr;
    RAWHEADER *rawHeaderPtr;
{
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

static int ChnRead (interp, chan, filename, format, imageHandle,
                    destX, destY, width, height, srcX, srcY)
    Tcl_Interp *interp;         /* Interpreter to use for reporting errors. */
    Tcl_Channel chan;           /* The image channel, open for reading. */
    const char *filename;       /* The name of the image file. */
    Tcl_Obj *format;            /* User-specified format object, or NULL. */
    Tk_PhotoHandle imageHandle; /* The photo image to write into. */
    int destX, destY;           /* Coordinates of top-left pixel in
                                 * photo image to be written to. */
    int width, height;          /* Dimensions of block of photo image to
                                 * be written to. */
    int srcX, srcY;             /* Coordinates of top-left pixel to be used
                                 * in image being read. */
{
    tkimg_MFile handle;

    handle.data = (char *) chan;
    handle.state = IMG_CHAN;

    return CommonRead (interp, &handle, filename, format, imageHandle,
                       destX, destY, width, height, srcX, srcY);
}

static int ObjRead (interp, data, format, imageHandle,
                    destX, destY, width, height, srcX, srcY)
    Tcl_Interp *interp;
    Tcl_Obj *data;
    Tcl_Obj *format;
    Tk_PhotoHandle imageHandle;
    int destX, destY;
    int width, height;
    int srcX, srcY;
{
    tkimg_MFile handle;
    FMTOPT opts;

    if (ParseFormatOpts (interp, format, &opts) == TCL_ERROR) {
        return TCL_ERROR;
    }
    if (!opts.uuencode) {
        handle.data = (char *) tkimg_GetByteArrayFromObj(data, &handle.length);
        handle.state = IMG_STRING;
    } else {
        tkimg_ReadInit(data, 'M', &handle);
    }

    return CommonRead (interp, &handle, "InlineData", format, imageHandle,
                       destX, destY, width, height, srcX, srcY);
}

static int CommonRead (interp, handle, filename, format, imageHandle,
                       destX, destY, width, height, srcX, srcY)
    Tcl_Interp *interp;         /* Interpreter to use for reporting errors. */
    tkimg_MFile *handle;        /* The image file, open for reading. */
    const char *filename;       /* The name of the image file. */
    Tcl_Obj *format;            /* User-specified format object, or NULL. */
    Tk_PhotoHandle imageHandle; /* The photo image to write into. */
    int destX, destY;           /* Coordinates of top-left pixel in
                                 * photo image to be written to. */
    int width, height;          /* Dimensions of block of photo image to
                                 * be written to. */
    int srcX, srcY;             /* Coordinates of top-left pixel to be used
                                 * in image being read. */
{
    Tk_PhotoImageBlock block;
    Int x, y, c;
    Int fileWidth = 0, fileHeight = 0;
    Float minVals[MAXCHANS], maxVals[MAXCHANS];
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
    Float  gtable[GTABSIZE];
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
    swapBytes = (( isIntel () && (byteOrder != INTEL)) ||
                 (!isIntel () && (byteOrder == INTEL)));
    fastMode  = (opts.mapMode == MAP_NONE &&
                 pixelType == TYPE_UBYTE && scanOrder == TOP_DOWN &&
                 fileWidth == width && fileHeight == height);

    if (!fastMode) {
        gtableFloat (opts.gamma, gtable);
    }

    switch (pixelType) {
        case TYPE_FLOAT: {
            tf.floatBuf = (Float *)ckalloc (fileWidth*fileHeight*tf.th.nChans*sizeof (Float));
            readFloatFile (handle, tf.floatBuf, fileWidth, fileHeight, tf.th.nChans,
                           swapBytes, opts.verbose, opts.mapMode != MAP_NONE, minVals, maxVals);
            break;
        }
        case TYPE_USHORT: {
            tf.ushortBuf = (UShort *)ckalloc (fileWidth*fileHeight*tf.th.nChans*sizeof (UShort));
            readUShortFile (handle, tf.ushortBuf, fileWidth, fileHeight, tf.th.nChans,
                            swapBytes, opts.verbose, opts.mapMode != MAP_NONE, minVals, maxVals);
            break;
        }
        case TYPE_UBYTE: {
            tf.ubyteBuf = (UByte *)ckalloc (fileWidth*fileHeight*tf.th.nChans*sizeof (UByte));
            readUByteFile (handle, tf.ubyteBuf, fileWidth, fileHeight, tf.th.nChans,
                           opts.verbose, opts.mapMode != MAP_NONE, minVals, maxVals);
            break;
        }
    }
    switch (opts.mapMode) {
        case MAP_NONE: {
            for (c=0; c<tf.th.nChans; c++) {
                minVals[c] = 0.0;
                maxVals[c] = 255.0;
            }
            break;
        }
        case MAP_MINMAX: {
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
        case MAP_AGC: {
            if (opts.saturation >= 0.0) {
                for (c=0; c<tf.th.nChans; c++) {
                    maxVals[c] = opts.saturation;
                }
            }
            break;
        }
    }

    switch (pixelType) {
        case TYPE_FLOAT: {
            remapFloatValues (tf.floatBuf, fileWidth, fileHeight, tf.th.nChans,
                              minVals, maxVals, opts.mapMode == MAP_AGC? opts.cutOff: -1.0);
            break;
        }
        case TYPE_USHORT: {
            remapUShortValues (tf.ushortBuf, fileWidth, fileHeight, tf.th.nChans,
                               minVals, maxVals);
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
                    FloatGammaUByte (fileWidth * tf.th.nChans, floatBufPtr,
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
                    UShortGammaUByte (fileWidth * tf.th.nChans, ushortBufPtr,
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

static int ChnWrite (interp, filename, format, blockPtr)
    Tcl_Interp *interp;
    const char *filename;
    Tcl_Obj *format;
    Tk_PhotoImageBlock *blockPtr;
{
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

static int CommonWrite (interp, filename, format, handle, blockPtr)
    Tcl_Interp *interp;
    const char *filename;
    Tcl_Obj *format;
    tkimg_MFile *handle;
    Tk_PhotoImageBlock *blockPtr;
{
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
        if (tkimg_Write (handle, (char *)tf.ubyteBuf, bytesPerLine) != bytesPerLine) {
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

