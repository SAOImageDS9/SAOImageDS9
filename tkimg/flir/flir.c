/*
 * flir.c
 *
 * FLIR photo image type, Tcl/Tk package.
 *
 * A photo image handler for FLIR FPF Public Image format interpreted
 * as grayscale images.
 *
 * For a list of available format options see function ParseFormatOpts
 * and the documentation img-flir.
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
typedef unsigned int UInt;      /* Unsigned 32 bit integer */
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
} FMTOPT;

/* Structure to hold information about the image file being processed. */
typedef struct {
    FPF_HEADER th;
    UByte  *pixbuf;
    Double *doubleBuf;
    Float  *floatBuf;
    UInt   *uintBuf;
    UShort *ushortBuf;
} FPF_FILE;

static void fpfClose (FPF_FILE *tf)
{
    if (tf->pixbuf)    ckfree ((char *)tf->pixbuf);
    if (tf->doubleBuf) ckfree ((char *)tf->doubleBuf);
    if (tf->floatBuf)  ckfree ((char *)tf->floatBuf);
    if (tf->uintBuf)   ckfree ((char *)tf->uintBuf);
    if (tf->ushortBuf) ckfree ((char *)tf->ushortBuf);
    return;
}

static void printImgInfo (FPF_HEADER *th, FMTOPT *opts,
                          const char *filename, const char *msg)
{
    Tcl_Channel outChan;
    char str[256];

    outChan = Tcl_GetStdChannel (TCL_STDOUT);
    if (!outChan) {
        return;
    }
    tkimg_snprintf (str, 256, "%s %s\n", msg, filename);                                                       IMGOUT;
    tkimg_snprintf (str, 256, "\tSize in pixel    : %d x %d\n", th->imgData.width, th->imgData.height);        IMGOUT;
    tkimg_snprintf (str, 256, "\tPixel type       : %s\n",      (th->imgData.pixelType == TYPE_DOUBLE? strDouble:
                                                                (th->imgData.pixelType == TYPE_FLOAT?  strFloat:
                                                                (th->imgData.pixelType == TYPE_INT?    strInt:
                                                                (th->imgData.pixelType == TYPE_SHORT?  strShort:
                                                                                              strUnknown))))); IMGOUT;
    tkimg_snprintf (str, 256, "\tMapping mode     : %s\n",      (opts->mapMode == IMG_MAP_NONE?   IMG_MAP_NONE_STR:
                                                                (opts->mapMode == IMG_MAP_MINMAX? IMG_MAP_MINMAX_STR:
                                                                (opts->mapMode == IMG_MAP_AGC?    IMG_MAP_AGC_STR:
                                                                                              strUnknown))));  IMGOUT;
    if (opts->mapMode != IMG_MAP_NONE) {
        tkimg_snprintf (str, 256, "\tGamma correction : %f\n",       opts->gamma);                             IMGOUT;
        if (opts->mapMode == IMG_MAP_MINMAX) {
            tkimg_snprintf (str, 256, "\tMinimum map value: %f\n",   opts->minVal);                            IMGOUT;
            tkimg_snprintf (str, 256, "\tMaximum map value: %f\n",   opts->maxVal);                            IMGOUT;
        }
        if (opts->mapMode == IMG_MAP_AGC) {
            tkimg_snprintf (str, 256, "\tSaturation       : %f\n",   opts->saturation);                        IMGOUT;
            tkimg_snprintf (str, 256, "\tCutOff           : %f%%\n", opts->cutOff);                            IMGOUT;
        }
    }
    Tcl_Flush (outChan);
}

static Boln readHeader (Tcl_Interp *interp, tkimg_Stream *handle, FPF_HEADER *th)
{
    if (tkimg_Read (handle, (char *)th, sizeof(FPF_HEADER)) != sizeof(FPF_HEADER)) {
        return FALSE;
    }

    if (strncmp (th->imgData.fpfId, FPF_ID, strlen (FPF_ID)) != 0) {
        Tcl_AppendResult (interp, "Invalid value for header field FPF_ID:",
                                  "Must be \"FPF Public Image Format\"\n", (char *)NULL);
        return FALSE;
    }

    if (th->imgData.width < 1) {
        Tcl_AppendResult (interp, "Invalid value for header field Width:",
                                  "Must be greater than zero\n", (char *)NULL);
        return FALSE;
    }

    if (th->imgData.height < 1) {
        Tcl_AppendResult (interp, "Invalid value for header field Height:",
                                  "Must be greater than zero\n", (char *)NULL);
        return FALSE;
    }

    if (th->imgData.pixelType != TYPE_SHORT &&
        th->imgData.pixelType != TYPE_INT &&
        th->imgData.pixelType != TYPE_FLOAT &&
        th->imgData.pixelType != TYPE_DOUBLE) {
        Tcl_AppendResult (interp, "Invalid value for header field PixelType:",
                                  "Must be 0, 1, 2 or 3", "\n", (char *)NULL);
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

static int CommonMatch(Tcl_Interp *interp, tkimg_Stream *handle,
        Tcl_Obj *format, int *widthPtr, int *heightPtr,
        FPF_HEADER *fpfHeaderPtr);
static int CommonRead(Tcl_Interp *interp, tkimg_Stream *handle,
        const char *filename, Tcl_Obj *format,
        Tk_PhotoHandle imageHandle, int destX, int destY,
        int width, int height, int srcX, int srcY);

static int ParseFormatOpts(
    Tcl_Interp *interp,
    Tcl_Obj *format,
    FMTOPT *opts,
    int mode
) {
    static const char *const readOptions[] = {
         "-verbose", "-min", "-max", "-gamma", "-map",
         "-saturation", "-cutoff", "-printagc", NULL
    };
    enum readEnums {
        R_VERBOSE, R_MIN, R_MAX, R_GAMMA, R_MAP,
        R_SATURATION, R_CUTOFF, R_PRINTAGC
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
    opts->mapMode    = IMG_MAP_MINMAX;
    opts->saturation = -1.0;
    opts->cutOff     = 3.0;
    opts->printAgc   = 0;

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
            }
        } else {
            /* No write functionality. */
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
        return 0;
    }
    return CommonMatch (interp, &handle, format, widthPtr, heightPtr, NULL);
}

static int CommonMatch(
    Tcl_Interp *interp,
    tkimg_Stream *handle,
    Tcl_Obj *format,
    int *widthPtr,
    int *heightPtr,
    FPF_HEADER *fpfHeaderPtr
) {
    FPF_HEADER th;

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

    return CommonRead(interp, &handle, filename, format, imageHandle,
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

    return CommonRead(interp, &handle, "InlineData", format, imageHandle,
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
    Int y, c;
    Int fileWidth = 0, fileHeight = 0;
    Double minVals[IMG_MAX_CHANNELS], maxVals[IMG_MAX_CHANNELS];
    int stopY, outY, outWidth, outHeight;
    FPF_FILE tf;
    FMTOPT opts;
    UByte  *pixbufPtr;
    Double *doubleBufPtr;
    Float  *floatBufPtr;
    UInt   *uintBufPtr;
    UShort *ushortBufPtr;
    Double gtable[IMG_GAMMA_TABLE_SIZE];
    int result = TCL_OK;
    int nChans = 1;
    Boln swapBytes = FALSE;

    memset (&tf, 0, sizeof (FPF_FILE));

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

    tkimg_CreateGammaTable (opts.gamma, gtable);

    switch (tf.th.imgData.pixelType) {
        case TYPE_DOUBLE: {
            tf.doubleBuf = (Double *)attemptckalloc (fileWidth*fileHeight*nChans*sizeof (Double));
            if (tf.doubleBuf == NULL) {
                Tcl_AppendResult (interp, "Unable to allocate memory for image data.", (char *) NULL);
                return TCL_ERROR;
            }
            tkimg_ReadDoubleFile (handle, tf.doubleBuf, fileWidth, fileHeight, nChans,
                                  swapBytes, opts.verbose, opts.mapMode != IMG_MAP_NONE,
                                  minVals, maxVals, opts.saturation);
            break;
        }
        case TYPE_FLOAT: {
            tf.floatBuf = (Float *)attemptckalloc (fileWidth*fileHeight*nChans*sizeof (Float));
            if (tf.floatBuf == NULL) {
                Tcl_AppendResult (interp, "Unable to allocate memory for image data.", (char *) NULL);
                return TCL_ERROR;
            }
            tkimg_ReadFloatFile (handle, tf.floatBuf, fileWidth, fileHeight, nChans,
                                 swapBytes, opts.verbose, opts.mapMode != IMG_MAP_NONE,
                                 minVals, maxVals, opts.saturation);
            break;
        }
        case TYPE_INT: {
            tf.uintBuf = (UInt *)attemptckalloc (fileWidth*fileHeight*nChans*sizeof (UInt));
            if (tf.uintBuf == NULL) {
                Tcl_AppendResult (interp, "Unable to allocate memory for image data.", (char *) NULL);
                return TCL_ERROR;
            }
            tkimg_ReadUIntFile (handle, tf.uintBuf, fileWidth, fileHeight, nChans,
                                swapBytes, opts.verbose, opts.mapMode != IMG_MAP_NONE,
                                minVals, maxVals, opts.saturation);
            break;
        }
        case TYPE_SHORT: {
            tf.ushortBuf = (UShort *)attemptckalloc (fileWidth*fileHeight*nChans*sizeof (UShort));
            if (tf.ushortBuf == NULL) {
                Tcl_AppendResult (interp, "Unable to allocate memory for image data.", (char *) NULL);
                return TCL_ERROR;
            }
            tkimg_ReadUShortFile (handle, tf.ushortBuf, fileWidth, fileHeight, nChans,
                                  swapBytes, opts.verbose, opts.mapMode != IMG_MAP_NONE,
                                  minVals, maxVals, opts.saturation);
            break;
        }
        default: {
            Tcl_AppendResult (interp, "Invalid value for pixel type.",
                              "Only short, int, float and double values supported.\n", (char *)NULL);
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
        case TYPE_DOUBLE: {
            tkimg_RemapDoubleValues (
                tf.doubleBuf, fileWidth, fileHeight, nChans,
                minVals, maxVals, opts.mapMode == IMG_MAP_AGC? opts.cutOff: -1.0,
                opts.printAgc
            );
            break;
        }
        case TYPE_FLOAT: {
            tkimg_RemapFloatValues (
                tf.floatBuf, fileWidth, fileHeight, nChans,
                minVals, maxVals, opts.mapMode == IMG_MAP_AGC? opts.cutOff: -1.0,
                opts.printAgc
            );
            break;
        }
        case TYPE_INT: {
            tkimg_RemapUIntValues (
                tf.uintBuf, fileWidth, fileHeight, nChans,
                minVals, maxVals, opts.mapMode == IMG_MAP_AGC? opts.cutOff: -1.0,
                opts.printAgc
            );
            break;
        }
        case TYPE_SHORT: {
            tkimg_RemapUShortValues (
                tf.ushortBuf, fileWidth, fileHeight, nChans,
                minVals, maxVals, opts.mapMode == IMG_MAP_AGC? opts.cutOff: -1.0,
                opts.printAgc
            );
            break;
        }
    }

    if (Tk_PhotoExpand (interp, imageHandle, destX + outWidth, destY + outHeight) == TCL_ERROR) {
        fpfClose (&tf);
        return TCL_ERROR;
    }

    tf.pixbuf = (UByte *) attemptckalloc (fileWidth * nChans);
    if (tf.pixbuf == NULL) {
        fpfClose (&tf);
        Tcl_AppendResult (interp, "Unable to allocate memory for image data.", (char *) NULL);
        return TCL_ERROR;
    }

    block.pixelSize = nChans;
    block.pitch = fileWidth * nChans;
    block.width = outWidth;
    block.height = 1;
    block.offset[0] = 0;
    block.offset[1] = (nChans > 1? 1: 0);
    block.offset[2] = (nChans > 2? 2: 0);
    block.offset[3] = (nChans > 3? 3: 0);
    block.pixelPtr = tf.pixbuf + srcX * nChans;

    stopY = srcY + outHeight;
    outY = destY;

    for (y=0; y<stopY; y++) {
        pixbufPtr = tf.pixbuf;
        switch (tf.th.imgData.pixelType) {
            case TYPE_DOUBLE: {
                doubleBufPtr = tf.doubleBuf + y * fileWidth * nChans;
                tkimg_DoubleToUByte (fileWidth * nChans, doubleBufPtr,
                                     opts.gamma != 1.0? gtable: NULL, pixbufPtr);
                doubleBufPtr += fileWidth * nChans;
                break;
            }
            case TYPE_FLOAT: {
                floatBufPtr = tf.floatBuf + y * fileWidth * nChans;
                tkimg_FloatToUByte (fileWidth * nChans, floatBufPtr,
                                    opts.gamma != 1.0? gtable: NULL, pixbufPtr);
                floatBufPtr += fileWidth * nChans;
                break;
            }
            case TYPE_INT: {
                uintBufPtr = tf.uintBuf + y * fileWidth * nChans;
                tkimg_UIntToUByte (fileWidth * nChans, uintBufPtr,
                                   opts.gamma != 1.0? gtable: NULL, pixbufPtr);
                uintBufPtr += fileWidth * nChans;
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
            if (Tk_PhotoPutBlock(interp, imageHandle, &block, destX, outY,
                                 width, 1, TK_PHOTO_COMPOSITE_SET) == TCL_ERROR) {
                result = TCL_ERROR;
                break;
            }
            outY++;
        }
    }
    fpfClose (&tf);
    return result;
}

static int FileWrite(
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
