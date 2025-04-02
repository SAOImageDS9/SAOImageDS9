/*
 * dted.c
 *
 * DTED photo image type, Tcl/Tk package.
 *
 * A photo image handler for Digital Elevation Data interpreted
 * as grayscale images.
 *
 * For a list of available format options see function ParseFormatOpts
 * and the documentation img-dted.
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

#define DEBUG_READ 0

#define strIntel    "Intel"
#define strMotorola "Motorola"

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

#define MAX_SHORT   32767
#define MIN_SHORT  -32768

#define ELEV_UNDEFINED -32000 /* All elevations smaller than this value are
                                 considered undefined, and are set to the
                                 minimum value. */

/* DTED file header structures */

typedef struct {
    Byte uhl_tag[3];        /* 'UHL' sentinel tag */
    Byte reserved1[1];
    Byte origin_long[8];    /* Longitude of origin */
    Byte origin_lat[8];     /* Latitude of origin */
    Byte ew_interval[4];    /* East-west data interval (tenths second) */
    Byte ns_interval[4];    /* North-south data interval (tenths second) */
    Byte accuracy[4];       /* Absolute vertical accuracy (meters) */
    Byte security[3];
    Byte reserved2[45];
} UHL_STRUCT;

typedef struct {
    Byte dsi_tag[3];              /* 'DSI' sentinel tag */
    Byte security_class[1];       /* Security classification */
    Byte security_mark[2];        /* Security control & release mark */
    Byte security_desc[27];       /* Security handling description */
    Byte reserved1[26];
    Byte level[5];                /* DMA series designator for level */
    Byte ref_num[15];             /* Reference number */
    Byte reserved2[8];
    Byte edition[2];              /* Data edition */
    Byte merge_version[1];        /* Match/merge version */
    Byte maintenance_date[4];     /* Maintenance date (YYMM) */
    Byte merge_date[4];           /* Match/Merge date (YYMM) */
    Byte maintenance_desc[4];     /* Maintenance description */
    Byte producer[8];             /* Producer */
    Byte reserved3[16];
    Byte product_num[9];          /* Product specification stock number */
    Byte product_change[2];       /* Product specification change number */
    Byte product_date[4];         /* Product specification date (YYMM) */
    Byte vertical_datum[3];       /* Vertical datum */
    Byte horizontal_datum[5];     /* Horizontal datum */
    Byte collection_sys[10];      /* Digitizing collection system */
    Byte compilation_date[4];     /* Compilation date (YYMM) */
    Byte reserved4[22];
    Byte origin_lat[9];           /* Latitude of data origin */
    Byte origin_long[10];         /* Longitude of data origin */
    Byte sw_corner_lat[7];        /* Latitude of SW corner */
    Byte sw_corner_long[8];       /* Longitude of SW corner */
    Byte nw_corner_lat[7];        /* Latitude of NW corner */
    Byte nw_corner_long[8];       /* Longitude of NW corner */
    Byte ne_corner_lat[7];        /* Latitude of NE corner */
    Byte ne_corner_long[8];       /* Longitude of NE corner */
    Byte se_corner_lat[7];        /* Latitude of SE corner */
    Byte se_corner_long[8];       /* Longitude of SE corner */
    Byte orientation[9];          /* Orientation angle */
    Byte ns_spacing[4];           /* North-south data spacing (tenths sec) */
    Byte ew_spacing[4];           /* East-west data spacing (tenths sec) */
    Byte rows[4];                 /* Number of data rows */
    Byte cols[4];                 /* Number of data cols */
    Byte cell_coverage[2];        /* Partial cell indicator */
    Byte reserved5[357];
} DSI_STRUCT;

typedef struct {
    Byte abs_horiz_acc[4];      /* Absolute horizontal accuracy (meters) */
    Byte abs_vert_acc[4];       /* Absolute vertical accuracy (meters) */
    Byte rel_horiz_acc[4];      /* Relative horizontal accuracy (meters) */
    Byte rel_vert_acc[4];       /* Relative vertical accuracy (meters) */
} ACCURACY_STRUCT;

typedef struct {
    Byte latitude[9];           /* Latitude */
    Byte longitude[10];         /* Longitude */
} COORD_STRUCT;

typedef struct {
    ACCURACY_STRUCT acc;        /* Accuracy of subregion */
    Byte no_coords[2];          /* Number of coordinates (03-14) */
    COORD_STRUCT coords[14];    /* Outline of subregion */
} SUBREGION_STRUCT;

typedef struct {
    Byte acc_tag[3];                 /* 'ACC' sentinel tag */
    ACCURACY_STRUCT global_acc;      /* Accuracy of product */
    Byte reserved1[36];
    Byte no_acc_subregions[2];       /* Number of accuracy subregions
                                        (00 = no, 02-09) */
    SUBREGION_STRUCT subregions[9];  /* Accuracy subregions */
    Byte reserved2[87];
} ACC_STRUCT;

typedef struct {
    UHL_STRUCT uhl;
    DSI_STRUCT dsi;
    ACC_STRUCT acc;
} DTEDHEADER;

/* DTED file format options structure for use with ParseFormatOpts */
typedef struct {
    Short  minVal;
    Short  maxVal;
    Double gamma;
    Boln   verbose;
} FMTOPT;

/* Structure to hold information about the DTED file being processed. */
typedef struct {
    DTEDHEADER th;
    UByte *pixbuf;
    Short *rawbuf;
} DTEDFILE;

static void dtedClose (DTEDFILE *tf)
{
    if (tf->pixbuf) ckfree ((char *)tf->pixbuf);
    if (tf->rawbuf) ckfree ((char *)tf->rawbuf);
    return;
}

/*  Read 2 bytes representing a signed 16-bit integer stored in big-endian order. */

static Boln readShort (tkimg_Stream *handle, Short *s)
{
    unsigned char buf[2];
    if (2 != tkimg_Read(handle, (char *)buf, 2))
        return FALSE;
    *s = (buf[0] << 8) | buf[1];
    return TRUE;
}

/* Read 4 bytes representing a signed 32-bit integer stored in big-endian order. */

static Boln readInt (tkimg_Stream *handle, Int *i)
{
    unsigned char buf[4];
    if (4 != tkimg_Read(handle, (char *)buf, 4))
        return FALSE;
    *i = ((unsigned int)buf[0] << 24) | (buf[1] << 16) | (buf[2] << 8) | buf[3];
    return TRUE;
}

static void printImgInfo (DTEDHEADER *th, FMTOPT *opts,
                          TCL_UNUSED(const char *), const char *msg)
{
    Tcl_Channel outChan;
    char str[256];

    outChan = Tcl_GetStdChannel (TCL_STDOUT);
    if (!outChan) {
        return;
    }
    tkimg_snprintf (str, 256, "%s\n", msg);                                              IMGOUT;
    tkimg_snprintf (str, 256, "\tLongitude of origin  : %.8s\n", th->uhl.origin_long);   IMGOUT;
    tkimg_snprintf (str, 256, "\tLatitude of origin   : %.8s\n", th->uhl.origin_lat);    IMGOUT;
    tkimg_snprintf (str, 256, "\tEast-West interval   : %.4s\n", th->uhl.ew_interval);   IMGOUT;
    tkimg_snprintf (str, 256, "\tNorth-South interval : %.4s\n", th->uhl.ns_interval);   IMGOUT;
    tkimg_snprintf (str, 256, "\tVertical accuracy    : %.4s\n", th->uhl.accuracy);      IMGOUT;
    tkimg_snprintf (str, 256, "\tSecurity Code        : %.3s\n", th->uhl.security);      IMGOUT;
    tkimg_snprintf (str, 256, "\tDTED level           : %.5s\n", th->dsi.level);         IMGOUT;
    tkimg_snprintf (str, 256, "\tNumber of rows       : %.4s\n", th->dsi.rows);          IMGOUT;
    tkimg_snprintf (str, 256, "\tNumber of columns    : %.4s\n", th->dsi.cols);          IMGOUT;
    tkimg_snprintf (str, 256, "\tCell coverage        : %.2s\n", th->dsi.cell_coverage); IMGOUT;
    tkimg_snprintf (str, 256, "\tGamma correction     : %f\n", opts->gamma);             IMGOUT;
    tkimg_snprintf (str, 256, "\tMinimum map value    : %d\n", opts->minVal);            IMGOUT;
    tkimg_snprintf (str, 256, "\tMaximum map value    : %d\n", opts->maxVal);            IMGOUT;
    tkimg_snprintf (str, 256, "\tHost byte order      : %s\n", tkimg_IsIntel ()?
                                                               strIntel: strMotorola);   IMGOUT;
    Tcl_Flush (outChan);
}

static Boln readHeader (tkimg_Stream *handle, DTEDHEADER *th)
{
    if (sizeof (DTEDHEADER) != tkimg_Read(handle, (char *)th, sizeof(DTEDHEADER))) {
        return FALSE;
    }
    if (strncmp ((char *)th->uhl.uhl_tag, "UHL", 3) != 0) {
        return FALSE;
    }

    /* OPA: More tests to follow. */
    return TRUE;
}

static Boln readDtedColumn (Tcl_Interp *interp, tkimg_Stream *handle, Short *pixels,
                            Int nRows, Int nCols, Int curCol, char *buf, Boln hostIsIntel)
{
    Int   i, nBytes;
    Short *mPtr;
    char  *bufPtr = buf;
    Short meridian, parallel;
    Int   block_count;
    UByte recognition_sentinel;
    UByte *cp;
    Int  checksum, checksum1 = 0;

    /* Read data column header. */
    if (!readInt   (handle, &block_count) ||
        !readShort (handle, &meridian) ||
        !readShort (handle, &parallel)) {
        Tcl_AppendResult (interp, "Error reading column header.", (char *) NULL);
        return FALSE;
    }

    /* Calculate checksum, part 1 */
    cp = (UByte *) &block_count;
    checksum1 += cp[0] + cp[1] + cp[2] + cp[3];
    cp = (UByte *) &meridian;
    checksum1 += cp[0] + cp[1];
    cp = (UByte *) &parallel;
    checksum1 += cp[0] + cp[1];

    recognition_sentinel = (unsigned int)block_count >> 24;
    block_count &= 0x00ffffff;

    if (recognition_sentinel != 170) {
        char msg[100];
        tkimg_snprintf(msg, sizeof(msg),
                       "Invalid column recognition sentinel %d.",
                       recognition_sentinel);
        Tcl_AppendResult (interp, msg, (char *) NULL);
        return FALSE;
    }

    /* Read the elevation data into the supplied column buffer "buf". */
    nBytes = sizeof (Short) * nRows;
    if (nBytes != (int)tkimg_Read(handle, buf, nBytes)) {
        Tcl_AppendResult (interp, "Error reading elevation data.", (char *) NULL);
        return FALSE;
    }

    /* Copy (and swap bytes, if needed) from the column buffer into the
       pixel array (shorts). Simultaneously calculate checksum, part 2. */
    if (hostIsIntel) {
        for (i=0; i<nRows; i++) {
            mPtr = pixels + (i * nCols) + curCol;
            checksum1 += ((unsigned char *)mPtr)[0] = bufPtr[1];
            checksum1 += ((unsigned char *)mPtr)[1] = bufPtr[0];
            bufPtr += sizeof (Short);
        }
    } else {
        for (i=0; i<nRows; i++) {
            mPtr = pixels + (i * nCols) + curCol;
            checksum1 += ((unsigned char *)mPtr)[0] = bufPtr[0];
            checksum1 += ((unsigned char *)mPtr)[1] = bufPtr[1];
            bufPtr += sizeof (Short);
        }
    }

    /* Read the checksum */
    if (!readInt (handle, &checksum)) {
        Tcl_AppendResult (interp, "Error reading checksum.", (char *) NULL);
        return FALSE;
    }

    if (checksum != checksum1) {
        char msg[100];
        tkimg_snprintf(msg, sizeof(msg),
            "DTED Checksum Error (0x%08x vs. 0x%08x).", checksum, checksum1);
        Tcl_AppendResult (interp, msg, (char *) NULL);
        return FALSE;
    }
    return TRUE;
}

static Boln readDtedFile (Tcl_Interp *interp, tkimg_Stream *handle,
                          Short *buf, Int width, Int height,
                          Int nchan, Boln hostIsIntel, Boln verbose,
                          Short minVals[], Short maxVals[])
{
    Int x, y, c;
    Short *bufPtr = buf;
    char  *colBuf;

#if DEBUG_READ == 1
    printf ("readDtedFile: Width=%d Height=%d nchan=%d hostIsIntel=%s\n",
             width, height, nchan, hostIsIntel? "yes": "no");
#endif
    for (c=0; c<nchan; c++) {
        minVals[c] =  MAX_SHORT;
        maxVals[c] =  MIN_SHORT;
    }
    colBuf = (char *)attemptckalloc (sizeof (Short) * nchan * height);
    if (colBuf == NULL) {
        Tcl_AppendResult (interp, "Unable to allocate memory for image data.", (char *) NULL);
        return FALSE;
    }

    /* Read the elevation data column by column. */
    for (x=0; x<width; x++) {
        if (!readDtedColumn (interp, handle, buf, height, width,
                             x, colBuf, hostIsIntel)) {
            return FALSE;
        }
    }

    /* Loop through the elevation data and find minimum and maximum values.
       Ignore elevation values equal to -32767, because these indicate, no
       elevation data available. See also function remapShortValues.
       Note: We extend the range of undefined elevations to all values
       smaller than ELEV_UNDEFINED, because of DTED files not fully
       compliant to the specification. */
    bufPtr = buf;
    for (x=0; x<width; x++) {
        for (y=0; y<height; y++) {
            for (c=0; c<nchan; c++) {
                if ( *bufPtr >= ELEV_UNDEFINED ) {
                    if (*bufPtr > maxVals[c]) maxVals[c] = *bufPtr;
                    if (*bufPtr < minVals[c]) minVals[c] = *bufPtr;
                }
                bufPtr++;
            }
        }
    }
    if (verbose) {
        printf ("\tMinimum pixel values :");
        for (c=0; c<nchan; c++) {
            printf (" %d", minVals[c]);
        }
        printf ("\n");
        printf ("\tMaximum pixel values :");
        for (c=0; c<nchan; c++) {
            printf (" %d", maxVals[c]);
        }
        printf ("\n");
        fflush (stdout);
    }
    ckfree (colBuf);
    return TRUE;
}

/* Map the original short values into the range [MIN_SHORT .. MAX_SHORT].
   We must take care of values equal to -32767, which indicate that no
   elevation data is available. So we map this value to the minimum value.
   See also function readDtedFile. */

static Boln remapShortValues (Short *buf, Int width, Int height, Int nchan,
                              Short minVals[], Short maxVals[])
{
    Int   x, y, c;
    Int   tmpInt;
    Short tmpShort;
    Short *bufPtr = buf;
    Float m[IMG_MAX_CHANNELS], t[IMG_MAX_CHANNELS];

    for (c=0; c<nchan; c++) {
        m[c] = (Float)(MAX_SHORT - MIN_SHORT) /
               (Float)(maxVals[c] - minVals[c]);
        t[c] = MIN_SHORT - m[c] * minVals[c];
    }
    for (y=0; y<height; y++) {
        for (x=0; x<width; x++) {
            for (c=0; c<nchan; c++) {
                tmpShort = (*bufPtr >= ELEV_UNDEFINED? *bufPtr: minVals[c]);
                tmpInt = (Int)(tmpShort * m[c] + t[c] + 0.5);
                if (tmpInt < MIN_SHORT) {
                    *bufPtr = MIN_SHORT;
                } else if (tmpInt > MAX_SHORT) {
                    *bufPtr = MAX_SHORT;
                } else {
                    *bufPtr = tmpInt;
                }
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

static int CommonMatch(Tcl_Interp *interp, tkimg_Stream *handle,
        Tcl_Obj *format, int *widthPtr, int *heightPtr,
        DTEDHEADER *dtedHeaderPtr);
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
         "-verbose", "-min", "-max", "-gamma", NULL
    };
    enum readEnums {
        R_VERBOSE, R_MIN, R_MAX, R_GAMMA
    };
    Tcl_Size objc, i;
    int index;
    char *optionStr;
    Tcl_Obj **objv;
    int boolVal;
    int intVal;
    double doubleVal;

    /* Initialize format options with default values. */
    opts->verbose = FALSE;
    opts->minVal  = -1;
    opts->maxVal  = -1;
    opts->gamma   = 1.0;

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
                    if (Tcl_GetInt(interp, optionStr, &intVal) == TCL_ERROR) {
                        Tcl_SetObjResult(interp, Tcl_ObjPrintf(
                            "Invalid minimum map value \"%s\": must be a short value.",
                            optionStr));
                        return TCL_ERROR;
                    }
                    if (intVal >= 0) {
                        opts->minVal = intVal;
                    }
                    break;
                }
                case R_MAX: {
                    if (Tcl_GetInt(interp, optionStr, &intVal) == TCL_ERROR) {
                        Tcl_SetObjResult(interp, Tcl_ObjPrintf(
                            "Invalid maximum map value \"%s\": must be a short value.",
                            optionStr));
                        return TCL_ERROR;
                    }
                    if (intVal >= 0) {
                        opts->maxVal = intVal;
                    }
                    break;
                }
                case R_GAMMA: {
                    if (Tcl_GetDouble(interp, optionStr, &doubleVal) == TCL_ERROR || doubleVal < 0) {
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
            }
        } else {
            /* No write functionality. */
        }
    }
    return TCL_OK;
}

static int FileMatch(
    Tcl_Channel chan,
    TCL_UNUSED(const char *),
    Tcl_Obj *format,
    int *widthPtr,
    int *heightPtr,
    Tcl_Interp *interp
) {
    tkimg_Stream handle;
    memset(&handle, 0, sizeof (tkimg_Stream));

    tkimg_ReadInitFile(&handle, chan);

    return CommonMatch(interp, &handle, format, widthPtr, heightPtr, NULL);
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
    DTEDHEADER *dtedHeaderPtr
) {
    DTEDHEADER th;
    Int nRows, nCols;
    Byte buf[5];
    buf[4] = '\0';

    if (!readHeader (handle, &th)) {
        return FALSE;
    }

    memcpy (buf, th.dsi.rows, 4);
    sscanf (buf, "%04d", &nRows);
    memcpy (buf, th.dsi.cols, 4);
    sscanf (buf, "%04d", &nCols);
    *widthPtr  = nCols;
    *heightPtr = nRows;
    if (dtedHeaderPtr) {
        *dtedHeaderPtr = th;
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

    if (!tkimg_ReadInitString(&handle, dataObj)) {
        return 0;
    }
    return CommonRead (interp, &handle, "InlineData", format, imageHandle,
                       destX, destY, width, height, srcX, srcY);
}

static int CommonRead(
    Tcl_Interp *interp,         /* Interpreter to use for reporting errors. */
    tkimg_Stream *handle,              /* The image file, open for reading. */
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
    Int fileWidth, fileHeight;
    Short minVals[IMG_MAX_CHANNELS], maxVals[IMG_MAX_CHANNELS];
    int stopY, outY, outWidth, outHeight;
    DTEDFILE tf;
    FMTOPT   opts;
    Boln hostIsIntel;
    UByte *pixbufPtr;
    Short *rawbufPtr;
    Double gtable[IMG_GAMMA_TABLE_SIZE];
    Int nchan = 1;

    memset (&tf, 0, sizeof (DTEDFILE));
    CommonMatch (interp, handle, format, &fileWidth, &fileHeight, &tf.th);

    if (ParseFormatOpts (interp, format, &opts, IMG_READ) == TCL_ERROR) {
        return TCL_ERROR;
    }

    tkimg_CreateGammaTable (opts.gamma, gtable);

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

    hostIsIntel = tkimg_IsIntel ();

    tf.rawbuf = (Short *)attemptckalloc (fileWidth * fileHeight * nchan * sizeof (Short));
    if (tf.rawbuf == NULL) {
        Tcl_AppendResult (interp, "Unable to allocate memory for image data.", (char *) NULL);
        return TCL_ERROR;
    }
    if (!readDtedFile (interp, handle, tf.rawbuf, fileWidth, fileHeight, nchan,
                       hostIsIntel, opts.verbose, minVals, maxVals)) {
        return TCL_ERROR;
    }
    if (opts.minVal >= 0) {
        for (c=0; c<nchan; c++) {
            minVals[c] = opts.minVal;
        }
    }
    if (opts.maxVal >= 0) {
        for (c=0; c<nchan; c++) {
            maxVals[c] = opts.maxVal;
        }
    }
    remapShortValues (tf.rawbuf, fileWidth, fileHeight, nchan, minVals, maxVals);

    if (Tk_PhotoExpand(interp, imageHandle, destX + outWidth, destY + outHeight) == TCL_ERROR) {
        dtedClose(&tf);
        return TCL_ERROR;
    }

    tf.pixbuf = (UByte *) attemptckalloc (fileWidth * nchan);
    if (tf.pixbuf == NULL) {
        Tcl_AppendResult (interp, "Unable to allocate memory for image data.", (char *) NULL);
        return TCL_ERROR;
    }

    block.pixelSize = nchan;
    block.pitch = fileWidth * nchan;
    block.width = outWidth;
    block.height = 1;
    block.offset[0] = 0;
    block.offset[1] = (nchan > 1? 1: 0);
    block.offset[2] = (nchan > 2? 2: 0);
    block.offset[3] = (nchan > 3? 3: 0);
    block.pixelPtr = tf.pixbuf + srcX * nchan;

    stopY = srcY + outHeight;
    outY = destY;

    for (y=0; y<stopY; y++) {
        pixbufPtr = tf.pixbuf;
        rawbufPtr = tf.rawbuf + (fileHeight - 1 - y) * fileWidth * nchan;
        tkimg_ShortToUByte (fileWidth * nchan, rawbufPtr,
                            opts.gamma != 1.0? gtable: NULL, pixbufPtr);
        rawbufPtr += fileWidth * nchan;
        if (y >= srcY) {
            if (Tk_PhotoPutBlock(interp, imageHandle, &block, destX, outY,
                width, 1, TK_PHOTO_COMPOSITE_SET) == TCL_ERROR) {
                dtedClose(&tf);
                return TCL_ERROR;
            }
            outY++;
        }
    }
    dtedClose(&tf);
    return TCL_OK;
}

static int FileWrite(
    Tcl_Interp *interp,
    TCL_UNUSED(const char *),
    TCL_UNUSED(Tcl_Obj *),
    TCL_UNUSED(Tk_PhotoImageBlock *)
) {
    Tcl_SetObjResult(interp, Tcl_ObjPrintf("Writing not supported for format %s", sImageFormat.name));
    return TCL_ERROR;
}

static int StringWrite(
    Tcl_Interp *interp,
    TCL_UNUSED(Tcl_Obj *),
    TCL_UNUSED(Tk_PhotoImageBlock *)
) {
    Tcl_SetObjResult(interp, Tcl_ObjPrintf("Writing not supported for format %s", sImageFormat.name));
    return TCL_ERROR;
}
