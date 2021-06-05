/* STARTHEADER
 *
 * File :       flir.c
 *
 * Author :     Paul Obermeier (paul@poSoft.de)
 *
 * Date :       2019 / 02 / 01
 *
 * Copyright :  (C) 2018-2019 Paul Obermeier
 *
 * Description :
 *
 * A photo image handler for the FLIR FPF Public Image Format.
 *
 * The following image types are currently supported:
 * FPF images with short and floating point values.
 *
 * The following format options are available:
 * Read  FLIR image: "flir -verbose <bool> -map <enum>
 *                         -gamma <float> -min <float> -max <float>
 *                         -cutoff <float> -saturation <float>
 *                         -printagc <bool> --uuencode <bool>"
 *
 * Write FLIR image: Not supported yet.
 *
 * -verbose <bool>:     If set to true, additional information about the file
 *                      format is printed to stdout. Default is false.
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
 * -uuencode <bool>:    If set to false, do not assume, that the image data stored in a
 *                      variable is uuencoded. Default is true, i.e. the image data is
 *                      assumed to be uuencoded.
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

/* Header fields possible values. */
#define strShort   "short"
#define strInt     "int"
#define strFloat   "float"
#define strDouble  "double"
#define strUnknown "Unknown"

#define FPF_ID "FPF Public Image Format"

#define TYPE_SHORT  0
#define TYPE_INT    1
#define TYPE_FLOAT  2
#define TYPE_DOUBLE 3

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

#define FPF_STRING_LEN 32

/* FPF file header structure */
typedef struct {
    char   fpfId[FPF_STRING_LEN]; /* "FLIR Public Image Format" */
    UInt   version;               /* Should be 2 */
    UInt   imageDataOffset;       /* Offset to pixel values from start of fpfId. */
    UShort imageType;             /* Temperature: 0, Diff Temp: 2, Object Signal: 4, Diff Object Signal: 5 */
    UShort pixelType;             /* 0: 2-byte int, 1: 4-byte int, 2: 4-byte float, 3: 8-byte float */
    UShort width;                 /* Width of image */
    UShort height;                /* Height of image */
    UInt   triggerCount;          /* External trigger counter */
    UInt   frameCount;            /* Frame number in sequence */
    UInt   spare[16];
} FPF_IMAGE_DATA;

typedef struct {
    char  cameraName[FPF_STRING_LEN];      /* Camera name string */
    char  cameraPartNum[FPF_STRING_LEN];   /* Camera part number string */
    char  cameraSerialNum[FPF_STRING_LEN]; /* Scanner serial number string */
    Float cameraTempRangeMin;              /* Camera minimum temperature range */
    Float cameraTempRangeMax;              /* Camera maximum temperature range */
    char  lensName[FPF_STRING_LEN];        /* Lens name string */
    char  lensPartNum[FPF_STRING_LEN];     /* Lens part number string */
    char  lensSerialNum[FPF_STRING_LEN];   /* Lens serial number string */
    char  filterName[FPF_STRING_LEN];      /* Filter name string */
    char  filterPartNum[FPF_STRING_LEN];   /* Filter part number string */
    char  filterSerialNum[FPF_STRING_LEN]; /* Filter serial number string */
    UInt  spare[16];
} FPF_CAMERA_DATA;

typedef struct {
    Float emissivity;           /* Range: 0.0 - 1.0 */
    Float objectDistance;       /* Object distance in meters */
    Float ambientTemp;          /* Reflected ambient temperature in Kelvin */
    Float atmosphereTemp;       /* Atmospheric temperature in Kelvin */
    Float relativeHumidity;     /* Range: 0.0 - 1.0 */
    Float computedAtmTrans;     /* Computed atmospheric transmission.  Range: 0.0 - 1.0 */
    Float estimatedAtmTrans;    /* Estimated atmospheric transmission. Range: 0.0 - 1.0 */
    Float referenceTemp;        /* Reference temperature in Kelvin */
    Float extOpticsTemp;        /* Kelvin */
    Float extOpticsTrans;       /* Range: 0.0 - 1.0 */
    UInt  spare[16];
} FPF_OBJECT_PARAM;

typedef struct {
    Int  year;
    Int  month;
    Int  day;
    Int  hour;
    Int  minute;
    Int  second;
    Int  millisecond;
    UInt spare[16];
} FPF_DATETIME;

typedef struct {
    Float cameraScaleMin;     /* Camera scale min, in current output */
    Float cameraScaleMax;     /* Camera scale max */
    Float calculatedScaleMin; /* Calculated min (almost true min) */
    Float calculatedScaleMax; /* Calculated max (almost true max) */
    Float actualScaleMin;     /* Scale min */
    Float actualScaleMax;     /* Scale max */
    UInt  spare[16];
} FPF_SCALING;

typedef struct {
    FPF_IMAGE_DATA   imgData;
    FPF_CAMERA_DATA  camData;
    FPF_OBJECT_PARAM objParam;
    FPF_DATETIME     datetime;
    FPF_SCALING      scaling;
    UInt             spare[32]; 
} FPF_HEADER;

/* Format options structure for use with ParseFormatOpts */
typedef struct {
    Int   mapMode;
    Float gamma;        /* IMG_MAP_MINMAX and IMG_MAP_AGC */
    Float minVal;       /* IMG_MAP_MINMAX */
    Float maxVal;       /* IMG_MAP_MINMAX */
    Float saturation;   /* IMG_MAP_AGC */
    Float cutOff;       /* IMG_MAP_AGC */
    Boln  verbose;
    Boln  printAgc;
    Boln  uuencode;
} FMTOPT;

/* Structure to hold information about the image file being processed. */
typedef struct {
    FPF_HEADER th;
    UByte  *pixbuf;
    Double *doubleBuf;
    Float  *floatBuf;
    UShort *ushortBuf;
    UByte  *ubyteBuf;
} FPF_FILE;

static void fpfClose (FPF_FILE *tf)
{
    if (tf->pixbuf)    ckfree ((char *)tf->pixbuf);
    if (tf->doubleBuf) ckfree ((char *)tf->doubleBuf);
    if (tf->floatBuf)  ckfree ((char *)tf->floatBuf);
    if (tf->ushortBuf) ckfree ((char *)tf->ushortBuf);
    if (tf->ubyteBuf)  ckfree ((char *)tf->ubyteBuf);
    return;
}

#define OUT Tcl_WriteChars (outChan, str, -1)
static void printImgInfo (FPF_HEADER *th, FMTOPT *opts,
                          const char *filename, const char *msg)
{
    Tcl_Channel outChan;
    char str[256];

    outChan = Tcl_GetStdChannel (TCL_STDOUT);
    if (!outChan) {
        return;
    }
    sprintf (str, "%s %s\n", msg, filename);                                                       OUT;
    sprintf (str, "\tSize in pixel    : %d x %d\n", th->imgData.width, th->imgData.height);        OUT;
    sprintf (str, "\tPixel type       : %s\n",      (th->imgData.pixelType == TYPE_FLOAT? strFloat:
                                                    (th->imgData.pixelType == TYPE_SHORT? strShort:
                                                                                  strUnknown)));   OUT;
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

static Boln readHeader (Tcl_Interp *interp, tkimg_MFile *handle, FPF_HEADER *th)
{
    if (tkimg_Read2 (handle, (char *)th, sizeof(FPF_HEADER)) != sizeof(FPF_HEADER)) {
        return FALSE;
    }

    if (strncmp (th->imgData.fpfId, FPF_ID, strlen (FPF_ID)) != 0) {
        Tcl_AppendResult (interp, "Invalid value for header field FPF_ID:",
                                  "Must be \"FPF Public Image Format\"\n", NULL);
        return FALSE;
    }

    if (th->imgData.width < 1) {
        Tcl_AppendResult (interp, "Invalid value for header field Width:",
                                  "Must be greater than zero\n", NULL);
        return FALSE;
    }

    if (th->imgData.height < 1) {
        Tcl_AppendResult (interp, "Invalid value for header field Height:",
                                  "Must be greater than zero\n", NULL);
        return FALSE;
    }

    if (th->imgData.pixelType != TYPE_SHORT &&
        th->imgData.pixelType != TYPE_INT &&
        th->imgData.pixelType != TYPE_FLOAT &&
        th->imgData.pixelType != TYPE_DOUBLE) {
        Tcl_AppendResult (interp, "Invalid value for header field PixelType:",
                                  "Must be 0, 1, 2 or 3", "\n", NULL);
        return FALSE;
    }
    return TRUE;
}

/*
 * Here is the start of the standard functions needed for every image format.
 */

/*
 * Prototypes for local procedures defined in this file:
 */

static int ParseFormatOpts(Tcl_Interp *interp, Tcl_Obj *format, FMTOPT *opts);
static int CommonMatch(Tcl_Interp *interp, tkimg_MFile *handle,
        Tcl_Obj *format, int *widthPtr, int *heightPtr,
        FPF_HEADER *fpfHeaderPtr);
static int CommonRead(Tcl_Interp *interp, tkimg_MFile *handle,
        const char *filename, Tcl_Obj *format,
        Tk_PhotoHandle imageHandle, int destX, int destY,
        int width, int height, int srcX, int srcY);

static int ParseFormatOpts(
    Tcl_Interp *interp,
    Tcl_Obj *format,
    FMTOPT *opts
) {
    static const char *const fpfOptions[] = {
         "-verbose", "-min", "-max", "-gamma", "-map", 
         "-uuencode", "-saturation", "-cutoff", "-printagc", NULL
    };
    int objc, i, index;
    char *optionStr;
    Tcl_Obj **objv;
    int boolVal;
    double doubleVal;

    /* Initialize options with default values. */
    opts->verbose    = 0;
    opts->minVal     = -1.0;
    opts->maxVal     = -1.0;
    opts->gamma      = 1.0;
    opts->mapMode    = IMG_MAP_MINMAX;
    opts->uuencode   = 1;
    opts->saturation = -1.0;
    opts->cutOff     = 3.0;
    opts->printAgc   = 0;

    if (tkimg_ListObjGetElements (interp, format, &objc, &objv) != TCL_OK) {
        return TCL_ERROR;
    }
    if (objc) {
        for (i=1; i<objc; i++) {
            if (Tcl_GetIndexFromObj (interp, objv[i], (const char *CONST86 *)fpfOptions,
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
                    if (Tcl_GetDouble(interp, optionStr, &doubleVal) == TCL_ERROR) {
                        Tcl_AppendResult (interp, "Invalid minimum map value \"", optionStr,
                                          "\": Must be greater than or equal to zero.", (char *) NULL);
                        return TCL_ERROR;
                    }
                    if (doubleVal >= 0.0) {
                        opts->minVal = doubleVal;
                    }
                    break;
                case 2:
                    if (Tcl_GetDouble(interp, optionStr, &doubleVal) == TCL_ERROR) {
                        Tcl_AppendResult (interp, "Invalid maximum map value \"", optionStr,
                                          "\": Must be greater than or equal to zero.", (char *) NULL);
                        return TCL_ERROR;
                    }
                    if (doubleVal >= 0.0) {
                        opts->maxVal = doubleVal;
                    }
                    break;
                case 3:
                    if (Tcl_GetDouble(interp, optionStr, &doubleVal) == TCL_ERROR) {
                        Tcl_AppendResult (interp, "Invalid gamma value \"", optionStr,
                                          "\": Must be greater than or equal to zero.", (char *) NULL);
                        return TCL_ERROR;
                    }
                    if (doubleVal >= 0.0) {
                        opts->gamma = doubleVal;
                    }
                    break;
                case 4:
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
                case 5:
                    if (Tcl_GetBoolean(interp, optionStr, &boolVal) == TCL_ERROR) {
                        Tcl_AppendResult (interp, "Invalid uuencode mode \"", optionStr,
                                          "\": should be 1 or 0, on or off, true or false",
                                          (char *) NULL);
                        return TCL_ERROR;
                    }
                    opts->uuencode = boolVal;
                    break;
                case 6:
                    if (Tcl_GetDouble(interp, optionStr, &doubleVal) == TCL_ERROR) {
                        Tcl_AppendResult (interp, "Invalid saturation value \"", optionStr,
                                          "\": Must be greater than or equal to zero.", (char *) NULL);
                        return TCL_ERROR;
                    }
                    if (doubleVal >= 0.0) {
                        opts->saturation = doubleVal;
                    }
                    break;
                case 7:
                    if (Tcl_GetDouble(interp, optionStr, &doubleVal) == TCL_ERROR) {
                        Tcl_AppendResult (interp, "Invalid cutoff value \"", optionStr,
                                          "\": Must be greater than or equal to zero.", (char *) NULL);
                        return TCL_ERROR;
                    }
                    if (doubleVal >= 0.0) {
                        opts->cutOff = doubleVal;
                    }
                    break;
                case 8:
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
        tkimg_ReadInit(data, 'F', &handle);
    }
    return CommonMatch (interp, &handle, format, widthPtr, heightPtr, NULL);
}

static int CommonMatch(
    Tcl_Interp *interp,
    tkimg_MFile *handle,
    Tcl_Obj *format,
    int *widthPtr,
    int *heightPtr,
    FPF_HEADER *fpfHeaderPtr
) {
    FPF_HEADER th;
    FMTOPT opts;

    if (ParseFormatOpts (interp, format, &opts) == TCL_ERROR) {
        return FALSE;
    }
    if (!readHeader (interp, handle, &th)) {
        return FALSE;
    }
    *widthPtr  = th.imgData.width;
    *heightPtr = th.imgData.height;
    if (fpfHeaderPtr) {
        *fpfHeaderPtr = th;
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

    return CommonRead(interp, &handle, filename, format, imageHandle,
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
        tkimg_ReadInit(data, 'F', &handle);
    }

    return CommonRead(interp, &handle, "InlineData", format, imageHandle,
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
    Int y, c;
    Int fileWidth = 0, fileHeight = 0;
    Float minVals[IMG_MAX_CHANNELS], maxVals[IMG_MAX_CHANNELS];
    int stopY, outY, outWidth, outHeight;
    FPF_FILE tf;
    FMTOPT opts;
    Int matte = 0;
    UByte  *pixbufPtr;
    Float  *floatBufPtr;
    UShort *ushortBufPtr;
    Float  gtable[IMG_GAMMA_TABLE_SIZE];
    int result = TCL_OK;
    int nChans = 1;
    Boln swapBytes = FALSE;

    memset (&tf, 0, sizeof (FPF_FILE));

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

    tkimg_CreateGammaTable (opts.gamma, gtable);

    switch (tf.th.imgData.pixelType) {
        case TYPE_FLOAT: {
            tf.floatBuf = (Float *)ckalloc (fileWidth*fileHeight*nChans*sizeof (Float));
            tkimg_ReadFloatFile (handle, tf.floatBuf, fileWidth, fileHeight, nChans,
                                 swapBytes, opts.verbose, opts.mapMode != IMG_MAP_NONE, 
                                 minVals, maxVals, opts.saturation);
            break;
        }
        case TYPE_SHORT: {
            tf.ushortBuf = (UShort *)ckalloc (fileWidth*fileHeight*nChans*sizeof (UShort));
            tkimg_ReadUShortFile (handle, tf.ushortBuf, fileWidth, fileHeight, nChans,
                                  swapBytes, opts.verbose, opts.mapMode != IMG_MAP_NONE, minVals, maxVals);
            break;
        }
        default: {
            Tcl_AppendResult (interp, "Invalid value for pixel type.",
                              "Only short and float values supported.\n", NULL);
            return TCL_ERROR;
        }
    }
    switch (opts.mapMode) {
        case IMG_MAP_NONE: {
            for (c=0; c<nChans; c++) {
                minVals[c] = 0.0;
                maxVals[c] = 255.0;
            }
            break;
        }
        case IMG_MAP_MINMAX: {
            if (opts.minVal >= 0.0) {
                for (c=0; c<nChans; c++) {
                    minVals[c] = opts.minVal;
                }
            }
            if (opts.maxVal >= 0.0) {
                for (c=0; c<nChans; c++) {
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

    switch (tf.th.imgData.pixelType) {
        case TYPE_FLOAT: {
            tkimg_RemapFloatValues (
                tf.floatBuf, fileWidth, fileHeight, nChans,
                minVals, maxVals, opts.mapMode == IMG_MAP_AGC? opts.cutOff: -1.0,
                opts.printAgc
            );
            break;
        }
        case TYPE_SHORT: {
            tkimg_RemapUShortValues (
                tf.ushortBuf, fileWidth, fileHeight, nChans,
                minVals, maxVals
            );
            break;
        }
    }

    if (tkimg_PhotoExpand (interp, imageHandle, destX + outWidth, destY + outHeight) == TCL_ERROR) {
        fpfClose (&tf);
        return TCL_ERROR;
    }

    tf.pixbuf = (UByte *) ckalloc (fileWidth * nChans);

    block.pixelSize = nChans;
    block.pitch = fileWidth * nChans;
    block.width = outWidth;
    block.height = 1;
    block.offset[0] = 0;
    block.offset[1] = (nChans > 1? 1: 0);
    block.offset[2] = (nChans > 1? 2: 0);
    block.offset[3] = (nChans == 4 && matte? 3: 0);
    block.pixelPtr = tf.pixbuf + srcX * nChans;

    stopY = srcY + outHeight;
    outY = destY;

    for (y=0; y<stopY; y++) {
        pixbufPtr = tf.pixbuf;
        switch (tf.th.imgData.pixelType) {
            case TYPE_FLOAT: {
                floatBufPtr = tf.floatBuf + y * fileWidth * nChans;
                tkimg_FloatToUByte (fileWidth * nChans, floatBufPtr,
                                    opts.gamma != 1.0? gtable: NULL, pixbufPtr);
                floatBufPtr += fileWidth * nChans;
                break;
            }
            case TYPE_SHORT: {
                ushortBufPtr = tf.ushortBuf + y * fileWidth * nChans;
                tkimg_UShortToUByte (fileWidth * nChans, ushortBufPtr,
                                     opts.gamma != 1.0? gtable: NULL, pixbufPtr);
                ushortBufPtr += fileWidth * nChans;
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
    fpfClose (&tf);
    return result;
}

static int ChnWrite(
    Tcl_Interp *interp,
    const char *filename,
    Tcl_Obj *format,
    Tk_PhotoImageBlock *blockPtr
) {
    Tcl_AppendResult (interp, "Writing not supported for format ", sImageFormat.name, NULL);
    return TCL_ERROR;
}

static int StringWrite(
    Tcl_Interp *interp,
    Tcl_Obj *format,
    Tk_PhotoImageBlock *blockPtr
) {
    Tcl_AppendResult (interp, "Writing not supported for format ", sImageFormat.name, NULL);
    return TCL_ERROR;
}
