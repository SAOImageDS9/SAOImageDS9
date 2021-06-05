/* STARTHEADER
 *
 * File :       dted.c
 *
 * Author :     Paul Obermeier (paul@poSoft.de)
 *
 * Date :       2001 / 11 / 20
 *
 * Copyright :  (C) 2001-2019 Paul Obermeier
 *
 * Description :
 *
 * A photo image handler for DTED elevation data interpreted as image files.
 *
 * The following image types are supported:
 *
 * Grayscale image: Load DTED data as grayscale image.
 *
 * List of currently supported features:
 *
 * Type   |     Read      |     Write     |
 *        | -file | -data | -file | -data |
 * ----------------------------------------
 * Gray   | Yes   | Yes   | No    | No   |
 *
 * The following format options are available:
 *
 * Read  DTED image: "dted -verbose <bool> -gamma <float>
 *                         -min <float> -max <float>"
 *
 * -verbose <bool>:     If set to true, additional information about the file
 *                      format is printed to stdout. Default is false.
 * -gamma <float>:      Specify a gamma correction to be applied when mapping
 *                      the input data to 8-bit image values.
 *                      Default is 1.0.
 * -min <short>:        Specify the minimum pixel value to be used for mapping
 *                      the input data to 8-bit image values.
 *                      Default is the minimum value found in the image data.
 * -max <short>:        Specify the maximum pixel value to be used for mapping
 *                      the input data to 8-bit image values.
 *                      Default is the maximum value found in the image data.
 *
 * Notes:               Currently only reading DTED files as grayscale images
 *                      is implemented. Color mapped images and writing will be
 *                      implemented when needed.
 *                      Syntax checking of DTED files is rudimentary, too.
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
    Short minVal;
    Short maxVal;
    Float gamma;
    Boln  verbose;
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

/* Read 2 bytes, representing a signed 16 bit integer in the form
   <LowByte, HighByte>, from a file and convert them into the current
   machine's format. */

static Boln readShort (tkimg_MFile *handle, Short *s)
{
    char buf[2];
    if (2 != tkimg_Read2(handle, buf, 2))
        return FALSE;
    *s = (buf[0] & 0xFF) | (buf[1] << 8);
    return TRUE;
}

/* Read 4 bytes, representing a signed 32 bit integer in the form
   <LowByte, HighByte>, from a file and convert them into the current
   machine's format. */

static Boln readInt (tkimg_MFile *handle, Int *i)
{
    char buf[4];
    if (4 != tkimg_Read2(handle, buf, 4))
        return FALSE;
    *i = ((((Int)buf[0] & 0x000000FFU) << 24) | \
          (((Int)buf[1] & 0x0000FF00U) <<  8) | \
          (((Int)buf[2] & 0x00FF0000U) >>  8) | \
          (((Int)buf[3] & 0x0000FF00U) >> 24));
    return TRUE;
}

#define OUT Tcl_WriteChars (outChan, str, -1)
static void printImgInfo (DTEDHEADER *th, FMTOPT *opts,
                          const char *filename, const char *msg)
{
    Tcl_Channel outChan;
    char str[256];

    outChan = Tcl_GetStdChannel (TCL_STDOUT);
    if (!outChan) {
        return;
    }
    sprintf (str, "%s\n", msg);                                              OUT;
    sprintf (str, "\tLongitude of origin  : %.8s\n", th->uhl.origin_long);   OUT;
    sprintf (str, "\tLatitude of origin   : %.8s\n", th->uhl.origin_lat);    OUT;
    sprintf (str, "\tEast-West interval   : %.4s\n", th->uhl.ew_interval);   OUT;
    sprintf (str, "\tNorth-South interval : %.4s\n", th->uhl.ns_interval);   OUT;
    sprintf (str, "\tVertical accuracy    : %.4s\n", th->uhl.accuracy);      OUT;
    sprintf (str, "\tSecurity Code        : %.3s\n", th->uhl.security);      OUT;
    sprintf (str, "\tDTED level           : %.5s\n", th->dsi.level);         OUT;
    sprintf (str, "\tNumber of rows       : %.4s\n", th->dsi.rows);          OUT;
    sprintf (str, "\tNumber of columns    : %.4s\n", th->dsi.cols);          OUT;
    sprintf (str, "\tCell coverage        : %.2s\n", th->dsi.cell_coverage); OUT;
    sprintf (str, "\tGamma correction     : %f\n", opts->gamma);             OUT;
    sprintf (str, "\tMinimum map value    : %d\n", opts->minVal);            OUT;
    sprintf (str, "\tMaximum map value    : %d\n", opts->maxVal);            OUT;
    sprintf (str, "\tHost byte order      : %s\n", tkimg_IsIntel ()?
                                                   strIntel: strMotorola);   OUT;
    Tcl_Flush (outChan);
}
#undef OUT

static Boln readHeader (tkimg_MFile *handle, DTEDHEADER *th)
{
    if (sizeof (DTEDHEADER) != tkimg_Read2(handle, (char *)th, sizeof(DTEDHEADER))) {
        return FALSE;
    }
    if (strncmp ((char *)th->uhl.uhl_tag, "UHL", 3) != 0) {
        return FALSE;
    }

    /* OPA: More tests to follow. */
    return TRUE;
}

static Boln readDtedColumn (tkimg_MFile *handle, Short *pixels, Int nRows,
                            Int nCols, Int curCol, char *buf, Boln hostIsIntel)
{
    Int   i, nBytes;
    Short *mPtr;
    char  *bufPtr = buf;
    Short meridian, parallel;
    Int   block_count;
    UByte *cp;
    Int  checksum, checksum1 = 0;

    /* Read data column header. */
    if (!readInt   (handle, &block_count) ||
        !readShort (handle, &meridian) ||
        !readShort (handle, &parallel)) {
        printf ("Error reading column header\n");
        return FALSE;
    }

    /* Calculate checksum, part 1 */
    cp = (UByte *) &block_count;
    checksum1 += cp[0] + cp[1] + cp[2] + cp[3];
    cp = (UByte *) &meridian;
    checksum1 += cp[0] + cp[1];
    cp = (UByte *) &parallel;
    checksum1 += cp[0] + cp[1];

    if (hostIsIntel) {
        block_count = block_count & 0x00ffffff;
    } else {
        block_count = (block_count & 0xffffff00) >> 8;
    }

    /* Read the elevation data into the supplied column buffer "buf". */
    nBytes = sizeof (Short) * nRows;
    if (nBytes != tkimg_Read2(handle, buf, nBytes)) {
        printf ("Error reading elevation data\n");
        return FALSE;
    }

    /* Copy (and swap bytes, if needed) from the column buffer into the
       pixel array (shorts) . */
    if (hostIsIntel) {
        for (i=0; i<nRows; i++) {
            mPtr = pixels + (i * nCols) + curCol;
            ((char *)mPtr)[0] = bufPtr[1];
            ((char *)mPtr)[1] = bufPtr[0];
            bufPtr += sizeof (Short);
        }
    } else {
        for (i=0; i<nRows; i++) {
            mPtr = pixels + (i * nCols) + curCol;
            ((char *)mPtr)[0] = bufPtr[0];
            ((char *)mPtr)[1] = bufPtr[1];
            bufPtr += sizeof (Short);
        }
    }

    /* Read the checksum */
    if (!readInt (handle, &checksum)) {
        printf ("Error reading checksum\n");
        return FALSE;
    }

    /* Calculate checksum, part 2. OPA TODO Incorrect  */
    cp = (UByte *) pixels;
    for (i=0; i<nRows*2; i++, cp++) {
        checksum1 += *cp;
    }

    if (checksum != checksum1) {
        /* printf ("DTED Checksum Error (%d vs. %d).\n", checksum, checksum1); */
        /* return FALSE; */
    }
    return TRUE;
}

static Boln readDtedFile (tkimg_MFile *handle, Short *buf, Int width, Int height,
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
    colBuf = ckalloc (sizeof (Short) * nchan * height);

    /* Read the elevation data column by column. */
    for (x=0; x<width; x++) {
        if (!readDtedColumn (handle, buf, height, width,
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

static int ParseFormatOpts(Tcl_Interp *interp, Tcl_Obj *format, FMTOPT *opts);
static int CommonMatch(Tcl_Interp *interp, tkimg_MFile *handle,
        Tcl_Obj *format, int *widthPtr, int *heightPtr,
        DTEDHEADER *dtedHeaderPtr);
static int CommonRead(Tcl_Interp *interp, tkimg_MFile *handle,
        const char *filename, Tcl_Obj *format,
        Tk_PhotoHandle imageHandle, int destX, int destY,
        int width, int height, int srcX, int srcY);

static int ParseFormatOpts(
    Tcl_Interp *interp,
    Tcl_Obj *format,
    FMTOPT *opts
) {
    static const char *const dtedOptions[] = {
         "-verbose", "-min", "-max", "-gamma", NULL
    };
    int objc, i, index;
    char *optionStr;
    Tcl_Obj **objv;
    int boolVal;
    int intVal;
    double doubleVal;

    /* Initialize format options with default values. */
    opts->verbose = FALSE;
    opts->minVal  = 0;
    opts->maxVal  = 0;
    opts->gamma   = 1.0;

    if (tkimg_ListObjGetElements (interp, format, &objc, &objv) != TCL_OK)
        return TCL_ERROR;
    if (objc) {
        for (i=1; i<objc; i++) {
            if (Tcl_GetIndexFromObj (interp, objv[i], (const char *CONST86 *)dtedOptions,
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
                    if (Tcl_GetInt(interp, optionStr, &intVal) == TCL_ERROR) {
                        Tcl_AppendResult (interp, "Invalid min value \"", optionStr,
                                          "\": Must be a valid short value.", (char *) NULL);
                        return TCL_ERROR;
                    }
                    opts->minVal = intVal;
                    break;
                case 2:
                    if (Tcl_GetInt(interp, optionStr, &intVal) == TCL_ERROR) {
                        Tcl_AppendResult (interp, "Invalid max value \"", optionStr,
                                          "\": Must be a valid short value.", (char *) NULL);
                        return TCL_ERROR;
                    }
                    opts->maxVal = intVal;
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
            }
        }
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

    return CommonMatch(interp, &handle, format, widthPtr, heightPtr, NULL);
}

static int ObjMatch(
    Tcl_Obj *data,
    Tcl_Obj *format,
    int *widthPtr,
    int *heightPtr,
    Tcl_Interp *interp
) {
    tkimg_MFile handle;

    tkimg_ReadInit(data, 'U', &handle);
    return CommonMatch (interp, &handle, format, widthPtr, heightPtr, NULL);
}

static int CommonMatch(
    Tcl_Interp *interp,
    tkimg_MFile *handle,
    Tcl_Obj *format,
    int *widthPtr,
    int *heightPtr,
    DTEDHEADER *dtedHeaderPtr
) {
    DTEDHEADER th;
    FMTOPT opts;
    Int nRows, nCols;

    if (ParseFormatOpts (interp, format, &opts) == TCL_ERROR) {
        return FALSE;
    }

    if (!readHeader (handle, &th)) {
        return FALSE;
    }
    sscanf (th.dsi.rows, "%4d", &nRows);
    sscanf (th.dsi.cols, "%4d", &nCols);
    *widthPtr  = nCols;
    *heightPtr = nRows;
    if (dtedHeaderPtr) {
        *dtedHeaderPtr = th;
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

    tkimg_ReadInit (data, 'U', &handle);
    return CommonRead (interp, &handle, "InlineData", format, imageHandle,
                       destX, destY, width, height, srcX, srcY);
}

static int CommonRead(
    Tcl_Interp *interp,         /* Interpreter to use for reporting errors. */
    tkimg_MFile *handle,              /* The image file, open for reading. */
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
    Int matte = 0;
    UByte *pixbufPtr;
    Short *rawbufPtr;
    Float gtable[IMG_GAMMA_TABLE_SIZE];
    Int nchan = 1;

    memset (&tf, 0, sizeof (DTEDFILE));
    CommonMatch (interp, handle, format, &fileWidth, &fileHeight, &tf.th);

    if (ParseFormatOpts (interp, format, &opts) != TCL_OK) {
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
        return TCL_OK;
    }

    hostIsIntel = tkimg_IsIntel ();

    tf.rawbuf = (Short *)ckalloc (fileWidth * fileHeight *
                                  nchan * sizeof (Short));
    readDtedFile (handle, tf.rawbuf, fileWidth, fileHeight, nchan,
                  hostIsIntel, opts.verbose, minVals, maxVals);
    if (opts.minVal != 0 || opts.maxVal != 0) {
        for (c=0; c<nchan; c++) {
            minVals[c] = opts.minVal;
            maxVals[c] = opts.maxVal;
        }
    }
    remapShortValues (tf.rawbuf, fileWidth, fileHeight, nchan, minVals, maxVals);

    if (tkimg_PhotoExpand(interp, imageHandle, destX + outWidth, destY + outHeight) == TCL_ERROR) {
        dtedClose(&tf);
        return TCL_ERROR;
    }

    tf.pixbuf = (UByte *) ckalloc (fileWidth * nchan);

    block.pixelSize = nchan;
    block.pitch = fileWidth * nchan;
    block.width = outWidth;
    block.height = 1;
    block.offset[0] = 0;
    block.offset[1] = (nchan > 1? 1: 0);
    block.offset[2] = (nchan > 1? 2: 0);
    block.offset[3] = (nchan == 4 && matte? 3: 0);
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
            if (tkimg_PhotoPutBlock(interp, imageHandle, &block, destX, outY,
                width, 1, TK_PHOTO_COMPOSITE_OVERLAY) == TCL_ERROR) {
                dtedClose(&tf);
                return TCL_ERROR;
            }
            outY++;
        }
    }
    dtedClose(&tf);
    return TCL_OK;
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
