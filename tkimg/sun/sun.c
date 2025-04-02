/*
 * sun.c
 *
 * SUN photo image type, Tcl/Tk package.
 *
 * A photo image handler for the SUM Raster image format.
 *
 * For a list of available format options see function ParseFormatOpts
 * and the documentation img-sun.
 *
 * Copyright (c) 2001-2024 Paul Obermeier <obermeier@users.sourceforge.net>
 *
 * See the file "license.terms" for information on usage and redistribution
 * of this file, and for a DISCLAIMER OF ALL WARRANTIES.
 *
 * The "UNIX" encoding of SUN's "imagetool" is not supported.
 *
 */

/*
 * Generic initialization code, parameterized via CPACKAGE and PACKAGE.
 */

#include "init.c"

/* #define DEBUG_LOCAL */

/* Some defines and typedefs. */
#define TRUE  1
#define FALSE 0
typedef unsigned char  Boln;    /* Boolean value: TRUE or FALSE */
typedef char           Byte;    /* Signed    8 bit integer */
typedef unsigned char  UByte;   /* Unsigned  8 bit integer */
typedef unsigned short UShort;  /* Unsigned 16 bit integer */
typedef int            Int;     /* Signed   32 bit integer */
typedef unsigned int   UInt;    /* Unsigned 32 bit integer */

/* SunRaster magic number */
#define RAS_MAGIC 0x59a66a95

/* Supported SunRaster types */
#define RAS_TYPE_STD 1    /* Standard uncompressed format */
#define RAS_TYPE_RLE 2    /* Runlength compression format */

/* The SunRaster header structure */
typedef struct {
    UInt ras_magic;     /* Magic Number */
    UInt ras_width;     /* Width */
    UInt ras_height;    /* Height */
    UInt ras_depth;     /* Number of bits per pixel (1,8,24,32) */
    UInt ras_length;    /* Length of image data (but may also be 0) */
    UInt ras_type;      /* Encoding */
    UInt ras_maptype;   /* Type of colormap */
    UInt ras_maplength; /* Number of bytes for colormap */
} SUNHEADER;

/* Buffer for run-length encoding and decoding. */
typedef struct {
    int val;   /* The value that is to be repeated */
    int n;     /* How many times it is repeated */
} RLEBUF;

/* Format options structure for use with ParseFormatOpts */
typedef struct {
    Int   compression;
    Boln  verbose;
    Boln  withalpha;
} FMTOPT;

/* Forward declarations of static functions. */

static void rle_startread (tkimg_Stream *ifp);
static int rle_fread (char *ptr, int sz, int nelem, tkimg_Stream *ifp);
static int sun_fread (char *ptr, int sz, int nelem, tkimg_Stream *ifp);
static int rle_fgetc (tkimg_Stream *ifp);
static int sun_getc (tkimg_Stream *ifp);
#define rle_getc(fp) ((rlebuf.n > 0) ? (rlebuf.n)--,rlebuf.val : rle_fgetc (fp))

static void rle_startwrite (tkimg_Stream *ofp);
static int rle_fputc (int val, tkimg_Stream *ofp);
static int rle_putrun (int n, int val, tkimg_Stream *ofp);
static void rle_endwrite (tkimg_Stream *ofp);

static Boln read_sun_header  (tkimg_Stream *ifp, SUNHEADER *sunhdr);
static Boln write_sun_header (tkimg_Stream *ofp, SUNHEADER *sunhdr);
static Boln read_sun_cols  (tkimg_Stream *ifp, SUNHEADER *sunhdr, UByte *colormap);

static RLEBUF rlebuf;

#ifdef DEBUG_LOCAL
static Boln readUByte (tkimg_Stream *handle, UByte *b)
{
    char buf[1];
    if (1 != tkimg_Read(handle, buf, 1)) {
        return FALSE;
    }
    *b = (UByte) buf[0];
    return TRUE;
}
#else
    /* Use this macro for better performance, esp. when reading RLE files. */
#   define readUByte(h,b) (1 == tkimg_Read((h),(char *)(b),1))
#endif

static Boln writeUByte (tkimg_Stream *handle, UByte b)
{
    UByte buf[1];
    buf[0] = b;
    if (1 != tkimg_Write(handle, (const char *)buf, 1)) {
        return FALSE;
    }
    return TRUE;
}

static Boln readUInt (tkimg_Stream *ifp, UInt *i)
{
    UByte buf[4];
    UInt  c;

    if (4 != tkimg_Read(ifp, (char *)buf, 4)) {
        return FALSE;
    }

    c  = (((UInt)(buf[0])) << 24);
    c |= (((UInt)(buf[1])) << 16);
    c |= (((UInt)(buf[2])) << 8);
    c |=  ((UInt)(buf[3]));
    *i = c;
    return TRUE;
}

static Boln writeUInt (tkimg_Stream *ofp, UInt c)
{
    UByte buf[4];

    buf[0] = (c >> 24) & 0xff;
    buf[1] = (c >> 16) & 0xff;
    buf[2] = (c >>  8) & 0xff;
    buf[3] = (c      ) & 0xff;
    if (4 != tkimg_Write(ofp, (const char *)buf, 4)) {
        return FALSE;
    }
    return TRUE;
}

/* Start reading Runlength Encoded Data */
static void rle_startread (tkimg_Stream *ifp)
{
    (void) ifp;
    rlebuf.val = rlebuf.n = 0;
}

/* Read pixels from RLE-stream */
static int rle_fread (char *ptr, int sz, int nelem, tkimg_Stream *ifp)
{
    int elem_read, cnt, val, err = 0;

    for (elem_read = 0; elem_read < nelem; elem_read++) {
        for (cnt = 0; cnt < sz; cnt++) {
            val = rle_getc (ifp);
            if (val < 0) {
                err = 1;
                break;
            }
            *(ptr++) = (char)val;
        }
        if (err) {
            break;
        }
    }
    return elem_read;
}

/* Read uncompressed pixels from input stream "ifp" */
static int sun_fread (char *ptr, int sz, int nelem, tkimg_Stream *ifp)
{
    if (nelem*sz != tkimg_Read(ifp, ptr, nelem*sz)) {
        return -1;
    }
    return nelem;
}

/* Get one pixel from RLE-stream */
static int rle_fgetc (tkimg_Stream *ifp)
{
    UByte flag, runcnt, runval;

    if (rlebuf.n > 0) {
       /* Something in the buffer ? */
       (rlebuf.n)--;
       return rlebuf.val;
    }

    /* Nothing in the buffer. We have to read something */
    if (!readUByte (ifp, &flag)) return -1;
    if (flag != 0x80)            return flag;     /* Single byte run ? */

    if (!readUByte (ifp, &runcnt)) return -1;
    if (runcnt == 0)               return (0x80); /* Single 0x80 ? */

    /* The run */
    if (!readUByte (ifp, &runval)) return -1;

    rlebuf.n = runcnt;
    rlebuf.val = runval;
    return runval;
}

/* Read one byte from input stream "ifp" */
static int sun_getc (tkimg_Stream *ifp)
{
    UByte val;
    if (!readUByte (ifp, &val)) {
        return -1;
    }
    return val;
}

/* Start writing Runlength Encoded Data */
static void rle_startwrite (tkimg_Stream *ofp)
{
    (void) ofp;
    rlebuf.val = 0;
    rlebuf.n   = 0;
}

/* Write uncompressed character to RLE-stream */
static int rle_fputc (int val, tkimg_Stream *ofp)
{
    int retval;

    if (rlebuf.n == 0) {
        /* Nothing in the buffer ? Save the value */
        rlebuf.n   = 1;
        rlebuf.val = val;
        return val;
    }

    /* Something in the buffer */
    if (rlebuf.val == val) {
        /* Same value in the buffer ? */
        rlebuf.n++;
        if (rlebuf.n == 257) {
            /* Can not be encoded in a single run ? */
            retval = rle_putrun (256, rlebuf.val, ofp);
            if (retval < 0) {
                return retval;
            }
            rlebuf.n -= 256;
        }
        return val;
    }

    /* Something different in the buffer ? Write out the run */
    retval = rle_putrun (rlebuf.n, rlebuf.val, ofp);
    if (retval < 0) {
        return retval;
    }

    /* Save the new value */
    rlebuf.n = 1;
    return (rlebuf.val = val);
}

/* Write out a run with 0 < n < 257 */
static int rle_putrun (int n, int val, tkimg_Stream *ofp)
{
    int retval = 1;
    int flag   = 0x80;

    /* Useful to write a 3 byte run ? */
    if ((n > 2) || ((n == 2) && (val == flag))) {
        if (!writeUByte (ofp, flag) ||
            !writeUByte (ofp, n-1) ||
            !writeUByte (ofp, val)) {
            retval = -1;
        }
    } else if (n == 2) {
        /* Write two single runs (could not be value 0x80) */
        if (!writeUByte (ofp, val) || !writeUByte (ofp, val)) {
            retval = -1;
        }
    } else {
        /* Write a single run */
        if (val == flag) {
            if (!writeUByte (ofp, flag) || !writeUByte (ofp, 0)) {
                retval = -1;
            }
        } else {
            if (!writeUByte (ofp, val)) {
                retval = -1;
            }
        }
    }

    return ((retval < 0) ? retval : val);
}

/* End writing Runlength Encoded Data */
static void rle_endwrite (tkimg_Stream *ofp)
{
    if (rlebuf.n > 0) {
        rle_putrun (rlebuf.n, rlebuf.val, ofp);
        rlebuf.val = rlebuf.n = 0;      /* Clear RLE-buffer */
    }
}

static void printImgInfo (SUNHEADER *sh, const char *filename, const char *msg)
{
    Tcl_Channel outChan;
    char str[256];
    UInt type = sh->ras_type;

    outChan = Tcl_GetStdChannel (TCL_STDOUT);
    if (!outChan) {
        return;
    }

    tkimg_snprintf(str, 256, "%s %s\n", msg, filename);                                       IMGOUT;
    tkimg_snprintf(str, 256, "\tSize in pixel   : %d x %d\n", sh->ras_width, sh->ras_height); IMGOUT;
    tkimg_snprintf(str, 256, "\tDepth of pixels : %d\n", sh->ras_depth);                      IMGOUT;
    tkimg_snprintf(str, 256, "\tCompression     : %s\n", (type == RAS_TYPE_STD? "None":
                                                         (type == RAS_TYPE_RLE? "RLE":
                                                                                "Unknown"))); IMGOUT;
    tkimg_snprintf(str, 256, "\tColormap type   : %d\n", sh->ras_maptype);                    IMGOUT;
    Tcl_Flush(outChan);
}

static Boln read_sun_header (tkimg_Stream *ifp, SUNHEADER *sunhdr)
{
    int  i;
    UInt *cp;

    cp = (UInt *)sunhdr;

    /* Read in all 32-bit values of the header and check for byte order */
    for (i=0; i<sizeof(SUNHEADER) / sizeof(sunhdr->ras_magic); i++) {
        if (!readUInt (ifp, cp)) {
            return FALSE;
        }
        cp++;
    }
    if (sunhdr->ras_magic != RAS_MAGIC) {
        return FALSE;
    }
    return TRUE;
}

/* Write out a SUN-fileheader */
static Boln write_sun_header (tkimg_Stream *ofp, SUNHEADER *sunhdr)
{
    int i, hdr_entries;
    UInt *cp;

    cp = (UInt *)sunhdr;

    hdr_entries = sizeof (SUNHEADER)/sizeof(sunhdr->ras_magic);
    /* Write out all 32-bit values of the header and check for byte order */
    for (i=0; i<hdr_entries; i++) {
        if (!writeUInt (ofp, *(cp++))) {
            return FALSE;
        }
    }
    return TRUE;
}

/* Read the sun colourmap */
static Boln read_sun_cols (tkimg_Stream *ifp, SUNHEADER *sunhdr, UByte *colormap)
{
    int ncols;

    /* Read in SUN-raster Colormap */
    ncols = sunhdr->ras_maplength / 3;
    if (ncols <= 0)
        return FALSE;

    if (3*ncols != tkimg_Read(ifp, (char *)colormap, 3*ncols)) {
        return FALSE;
    }
    return TRUE;
}

/* Load SUN Raster file with depth 1 */
static Boln load_sun_d1 (Tcl_Interp *interp, tkimg_Stream *ifp,
                         Tk_PhotoHandle imageHandle, int destX, int destY,
                         int width, int height, int srcX, int srcY,
                         int fileWidth, int fileHeight, int type)
{
    UByte *dest, bit2byte[256*8];
    UByte *pixbuf;
    Tk_PhotoImageBlock block;
    int pix8;
    int linepad;
    int x, y;
    int stopY, outY;
    int i, j;
    int err = 0, rle;
    char errMsg[256];
    Boln result = TRUE;

    pixbuf = (UByte *) attemptckalloc (fileWidth);
    if (!pixbuf) {
        tkimg_snprintf(errMsg, 256, "Can't allocate memory of size %d", fileWidth);
        Tcl_AppendResult(interp, errMsg, (char *)NULL);
        return TCL_ERROR;
    }

    block.pixelSize = 1;
    block.pitch     = fileWidth;
    block.width     = width;
    block.height    = 1;
    block.offset[0] = 0;
    block.offset[1] = 0;
    block.offset[2] = 0;
    block.offset[3] = 0;
    block.pixelPtr  = pixbuf + srcX;

    rle = (type == RAS_TYPE_RLE);
    linepad = ((fileWidth+7)/8) % 2;    /* Check for 16bit align */

    if (rle) {
        rle_startread (ifp);
    }

    /* Get an array for mapping 8 bits in a byte to 8 bytes */
    dest = bit2byte;
    for (j=0; j<256; j++) {
        for (i=7; i>=0; i--) {
            *(dest++) = ((j & (1 << i)) == 0) * 255;
        }
    }

    stopY = srcY + height;
    outY = destY;

    for (y=0; y<stopY; y++) {
        dest = pixbuf;
        x = fileWidth;
        while (x >= 8) {
            pix8 = rle ? rle_getc (ifp) : sun_getc (ifp);
            if (pix8 < 0) {
                err = 1;
                pix8 = 0;
            }

            memcpy (dest, bit2byte + pix8*8, 8);
            dest += 8;
            x -= 8;
        }

        if (x>0) {
            pix8 = rle ? rle_getc (ifp) : sun_getc (ifp);
            if (pix8 < 0) {
                err = 1;
                pix8 = 0;
            }

            memcpy (dest, bit2byte + pix8*8, x);
            dest += x;
        }

        if (linepad) {
            err |= ((rle ? rle_getc (ifp) : sun_getc (ifp)) < 0);
        }

        if (err) {
            tkimg_snprintf(errMsg, 256, "Unexpected EOF while reading scanline %d", y);
            Tcl_AppendResult(interp, errMsg, (char *) NULL);
            return FALSE;
        }
        if (y >= srcY) {
            if (Tk_PhotoPutBlock(interp, imageHandle, &block, destX, outY, width, 1,
                TK_PHOTO_COMPOSITE_SET) == TCL_ERROR) {
                result = FALSE;
                break;
            }
            outY++;
        }
    }
    return result;
}

/* Load SUN Raster file with depth 8 */
static Boln load_sun_d8 (Tcl_Interp *interp, tkimg_Stream *ifp,
                         Tk_PhotoHandle imageHandle, int destX, int destY,
                         int width, int height, int srcX, int srcY,
                         int fileWidth, int fileHeight,
                         int type, UByte *suncolmap, int maplength)
{
    UByte *dest, *indData = NULL, *src;
    UByte *pixbuf = NULL;
    Tk_PhotoImageBlock block;
    int linepad;
    int x, y;
    int stopY, outY;
    int ncols;
    int grayscale, nchan;
    int err, rle;
    char errMsg[256];
    Boln result = TRUE;

    rle     = (type == RAS_TYPE_RLE);
    linepad = fileWidth % 2;
    ncols   = maplength / 3;

    /* Check, if it's a grayscale or color indexed image. */
    grayscale = 1;
    nchan     = 1;
    if ((ncols > 0) && (suncolmap != NULL)) {
        grayscale = 0;
        nchan     = 3;
    }

    if (!grayscale) {
        pixbuf = (UByte *) attemptckalloc (fileWidth * nchan);
        if (!pixbuf) {
            tkimg_snprintf(errMsg, 256, "Can't allocate memory of size %d",
                           fileWidth * nchan);
            Tcl_AppendResult(interp, errMsg, (char *)NULL);
            if (suncolmap) {
                ckfree ((char *)suncolmap);
            }
            return TCL_ERROR;
        }
    }

    /* This buffer contains either the color indices or the grayscale value. */
    indData = (UByte *)attemptckalloc (fileWidth * sizeof (UByte));
    if (!indData) {
        tkimg_snprintf(errMsg, 256, "Can't allocate memory of size %d",
                       (int) (fileWidth * sizeof (UByte)));
        Tcl_AppendResult(interp, errMsg, (char *)NULL);
        return TCL_ERROR;
    }

    block.pixelSize = nchan;
    block.pitch     = fileWidth * nchan;
    block.width     = width;
    block.height    = 1;
    block.offset[0] = 0;
    block.offset[1] = grayscale? 0: 1;
    block.offset[2] = grayscale? 0: 2;
    block.offset[3] = 0;
    block.pixelPtr  = (grayscale?
                      (indData + srcX * nchan):
                      (pixbuf + srcX * nchan));

    if (rle) {
        rle_startread (ifp);  /* Initialize RLE-buffer */
    }

    stopY = srcY + height;
    outY = destY;

    for (y=0; y<stopY; y++) {
        src  = indData;
        memset ((char *)src, 0, fileWidth);
        err = ((rle ? rle_fread ((char *)src, 1, fileWidth, ifp) :
                      sun_fread ((char *)src, 1, fileWidth, ifp)) != fileWidth);
        if (err && (y != height -1)) {
            tkimg_snprintf(errMsg, 256, "Unexpected EOF while reading scanline %d", y);
            Tcl_AppendResult(interp, errMsg, (char *) NULL);
            ckfree ((char *)indData);
            return FALSE;
        }
        if (linepad) {
            err = ((rle ? rle_getc (ifp) : sun_getc (ifp)) < 0);
            if (err) {
                tkimg_snprintf(errMsg, 256, "Unexpected EOF while reading scanline %d", y);
                Tcl_AppendResult(interp, errMsg, (char *) NULL);
                ckfree ((char *)indData);
                return FALSE;
            }
        }

        if (!grayscale) {
            src  = indData;
            dest = pixbuf;
            for (x=0; x<width; x++) {
                *dest++ = suncolmap[*src];
                *dest++ = suncolmap[*src + ncols];
                *dest++ = suncolmap[*src + 2*ncols];
                src++;
            }
        }

        if (y >= srcY) {
            if (Tk_PhotoPutBlock(interp, imageHandle, &block, destX, outY, width, 1,
                TK_PHOTO_COMPOSITE_SET) == TCL_ERROR) {
                result = FALSE;
                break;
            }
            outY++;
        }
    }
    ckfree ((char *)indData);
    return result;
}

/* Load SUN Raster file with true color image: depth = 24 or 32 */

static Boln load_rgb (Tcl_Interp *interp, tkimg_Stream *ifp,
                      Tk_PhotoHandle imageHandle, int destX, int destY,
                      int width, int height, int srcX, int srcY,
                      int fileWidth, int fileHeight,
                      int nchan, int type, int withalpha)
{
    UByte *dest, tmp;
    UByte *pixbuf;
    Tk_PhotoImageBlock block;
    int linepad;
    int x, y;
    int stopY, outY;
    int err, rle;
    char errMsg[256];
    Boln result = TRUE;

    pixbuf = (UByte *) attemptckalloc (fileWidth * nchan);
    if (!pixbuf) {
        tkimg_snprintf(errMsg, 256, "Can't allocate memory of size %d",
                       fileWidth * nchan);
        Tcl_AppendResult(interp, errMsg, (char *)NULL);
        return TCL_ERROR;
    }

    block.pixelSize = nchan;
    block.pitch = fileWidth * nchan;
    block.width = width;
    block.height = 1;
    block.offset[0] = 0;
    block.offset[1] = 1;
    block.offset[2] = 2;
    if (nchan < 4) {
        withalpha = 0;
    }
    block.offset[3] = withalpha? 3: 0;

    block.pixelPtr = pixbuf + srcX * nchan;

    rle     = (type == RAS_TYPE_RLE);
    linepad = (fileWidth*nchan) % 2;

    if (rle) {
        rle_startread (ifp);    /* Initialize RLE-buffer */
    }

    stopY = srcY + height;
    outY  = destY;

    for (y=0; y<stopY; y++) {
        dest = pixbuf;
        memset ((char *)dest, 0, nchan*fileWidth);
        err = ((rle ? rle_fread ((char *)dest, nchan, fileWidth, ifp) :
                      sun_fread ((char *)dest, nchan, fileWidth, ifp)) != fileWidth);
        if (err && (y != height -1)) {
            tkimg_snprintf(errMsg, 256, "Unexpected EOF while reading scanline %d", y);
            Tcl_AppendResult(interp, errMsg, (char *) NULL);
            ckfree ((char *)pixbuf);
            return FALSE;
        }
        if (linepad) {
            err = ((rle ? rle_getc (ifp) : sun_getc (ifp)) < 0);
            if (err) {
                tkimg_snprintf(errMsg, 256, "Unexpected EOF while reading scanline %d", y);
                Tcl_AppendResult(interp, errMsg, (char *) NULL);
                ckfree ((char *)pixbuf);
                return FALSE;
            }
        }

        if (y >= srcY) {
            dest = pixbuf + srcX * nchan;
            if (type != 3) {
                if (nchan == 3) {               /* GBR Format. Swap to RGB. */
                    for (x=0; x<width; x++) {
                        tmp = dest[0];
                        dest[0] = dest[2];
                        dest[2] = tmp;

                        dest += 3;
                    }
                } else {                        /* AGBR Format. Swap to RGBA. */
                    for (x=0; x<width; x++) {
                        tmp = dest[0];
                        dest[0] = dest[3];
                        dest[3] = tmp;

                        tmp = dest[1];
                        dest[1] = dest[2];
                        dest[2] = tmp;

                        dest += 4;
                    }
                }
            }
            if (Tk_PhotoPutBlock(interp, imageHandle, &block, destX, outY, width, 1,
                withalpha? TK_PHOTO_COMPOSITE_OVERLAY: TK_PHOTO_COMPOSITE_SET) == TCL_ERROR) {
                result = FALSE;
                break;
            }
            outY++;
        }
    }
    ckfree ((char *)pixbuf);
    return result;
}

/*
 * Here is the start of the standard functions needed for every image format.
 */

/*
 * Prototypes for local procedures defined in this file:
 */

static int CommonMatch(tkimg_Stream *handle, int *widthPtr,
        int *heightPtr, SUNHEADER *sunHeaderPtr);
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
        "-verbose", "-withalpha", "-matte", NULL
    };
    enum readEnums {
        R_VERBOSE, R_WITHALPHA, R_MATTE
    };
    static const char *const writeOptions[] = {
        "-verbose", "-compression", "-withalpha", "-matte", NULL
    };
    enum writeEnums {
        W_VERBOSE, W_COMPRESSION, W_WITHALPHA, W_MATTE
    };
    Tcl_Size objc, i;
    int index;
    char *optionStr;
    Tcl_Obj **objv;
    int boolVal;

    /* Initialize options with default values. */
    opts->verbose     = 0;
    opts->compression = 1;
    opts->withalpha   = 1;

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
                case R_WITHALPHA:
                case R_MATTE: {
                    if (Tcl_GetBoolean(interp, optionStr, &boolVal) == TCL_ERROR) {
                        Tcl_SetObjResult(interp, Tcl_ObjPrintf(
                            "Invalid withalpha mode \"%s\": must be 1 or 0, on or off, true or false.",
                            optionStr));
                        return TCL_ERROR;
                    }
                    opts->withalpha = boolVal;
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
                case W_COMPRESSION: {
                    if (!strncmp (optionStr, "none", strlen ("none"))) {
                        opts->compression = 0;
                    } else if (!strncmp (optionStr, "rle", strlen ("rle"))) {
                        opts->compression = 1;
                    } else {
                        Tcl_SetObjResult(interp, Tcl_ObjPrintf(
                            "Invalid compression mode \"%s\": must be none or rle.",
                            optionStr));
                        return TCL_ERROR;
                    }
                    break;
                }
                case W_WITHALPHA:
                case W_MATTE: {
                    if (Tcl_GetBoolean(interp, optionStr, &boolVal) == TCL_ERROR) {
                        Tcl_SetObjResult(interp, Tcl_ObjPrintf(
                            "Invalid withalpha mode \"%s\": must be 1 or 0, on or off, true or false.",
                            optionStr));
                        return TCL_ERROR;
                    }
                    opts->withalpha = boolVal;
                    break;
                }
            }
        }
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

#ifdef DEBUG_LOCAL
    printf("FileMatch\n"); fflush(stdout);
#endif

    tkimg_ReadInitFile(&handle, chan);

    return CommonMatch(&handle, widthPtr, heightPtr, NULL);
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

#ifdef DEBUG_LOCAL
    printf("StringMatch\n"); fflush(stdout);
#endif

    if (!tkimg_ReadInitString(&handle, dataObj)) {
        return 0;
    }
    return CommonMatch(&handle, widthPtr, heightPtr, NULL);
}

static int CommonMatch(
    tkimg_Stream *handle,
    int   *widthPtr,
    int   *heightPtr,
    SUNHEADER *sunHeaderPtr
) {
    SUNHEADER sh;

    if (!read_sun_header (handle, &sh)) {
        return 0;
    }

    *widthPtr  = sh.ras_width;
    *heightPtr = sh.ras_height;
    if (sunHeaderPtr) {
        *sunHeaderPtr = sh;
    }
    return 1;
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

    return CommonRead (interp, &handle, filename, format,
                       imageHandle, destX, destY,
                       width, height, srcX, srcY);
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
    int nchan;
    int fileWidth, fileHeight;
    int outWidth, outHeight;
    int retCode = TCL_OK;
    SUNHEADER sh;
    FMTOPT opts;
    UByte *suncolmap = NULL;
    char errMsg[256];

    if (ParseFormatOpts(interp, format, &opts, IMG_READ) == TCL_ERROR) {
        return TCL_ERROR;
    }

    if (!CommonMatch(handle, &fileWidth, &fileHeight, &sh)) {
        if (interp) {
            Tcl_AppendResult(interp, "Cannot read image data",
                (char *) NULL);
        }
        return TCL_ERROR;
    }
    if (opts.verbose) {
        printImgInfo (&sh, filename, "Reading image:");
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

    if (sh.ras_type > 5) {
        tkimg_snprintf(errMsg, 256, "Unknown Sun Raster type: %d", sh.ras_type);
        Tcl_AppendResult(interp, errMsg, (char *)NULL);
        return TCL_ERROR;
    }

    if (sh.ras_type == RAS_TYPE_RLE) {
        tkimg_EnableReadBuffer (handle, 1);
    }

    /* Is there a RGB colourmap ? */
    if ((sh.ras_maptype == 1) && (sh.ras_maplength > 0)) {
        suncolmap = (UByte *)attemptckalloc (sh.ras_maplength);
        if (!suncolmap) {
            tkimg_snprintf(errMsg, 256, "Can't allocate memory of size %d",
                           sh.ras_maplength);
            Tcl_AppendResult(interp, errMsg, (char *)NULL);
            tkimg_EnableReadBuffer (handle, 0);
            return TCL_ERROR;
        }

        if (!read_sun_cols (handle, &sh, suncolmap)) {
            Tcl_AppendResult(interp, "Unable to read color map", (char *)NULL);
            ckfree ((char *)suncolmap);
            tkimg_EnableReadBuffer (handle, 0);
            return TCL_ERROR;
        }
#ifdef DEBUG_LOCAL
        {
            int j, ncols;
            printf("Colormap values:\n");
            ncols = sh.ras_maplength/3;
            for (j=0; j < ncols; j++) {
                printf("Entry 0x%08x: 0x%04x,  0x%04x, 0x%04x\n",
                       j,suncolmap[j],suncolmap[j+ncols],suncolmap[j+2*ncols]);
            }
        }
#endif
    } else if (sh.ras_maplength > 0) {
        UByte dummy[1];
        int d, length;

        /* This type of colourmap is not supported. Ignore it. */
        length = (sizeof (SUNHEADER)/sizeof (UInt)) * 4 + sh.ras_maplength;
        for (d=0; d<length; d++) {
            (void) readUByte (handle, dummy);
        }
    }

    if (Tk_PhotoExpand(interp, imageHandle, destX + outWidth, destY + outHeight) == TCL_ERROR) {
        if (suncolmap) {
            ckfree ((char *)suncolmap);
        }
        tkimg_EnableReadBuffer(handle, 0);
        return TCL_ERROR;
    }

    nchan = (sh.ras_depth == 32? 4: 3);

    switch (sh.ras_depth) {
        case 1:    /* 2 colors B/W */
            if (!load_sun_d1 (interp, handle, imageHandle, destX, destY,
                              outWidth, outHeight, srcX, srcY,
                              fileWidth, fileHeight, sh.ras_type))
                retCode = TCL_ERROR;
            break;

        case 8:    /* 256 colours */
            if (!load_sun_d8 (interp, handle, imageHandle, destX, destY,
                              outWidth, outHeight, srcX, srcY,
                              fileWidth, fileHeight, sh.ras_type,
                              suncolmap, sh.ras_maplength))
                retCode = TCL_ERROR;
            break;

        case 24:   /* True color */
        case 32:   /* True color with alpha channel */
            if (!load_rgb (interp, handle, imageHandle, destX, destY,
                           outWidth, outHeight, srcX, srcY,
                           fileWidth, fileHeight,
                           nchan, sh.ras_type, opts.withalpha))
                retCode = TCL_ERROR;
            break;

        default:
            tkimg_snprintf(errMsg, 256, "Image has invalid pixel depth: %d", sh.ras_depth);
            Tcl_AppendResult(interp, errMsg, (char *)NULL);
            retCode = TCL_ERROR;
            break;
    }
    if (suncolmap) {
        ckfree ((char *)suncolmap);
    }
    tkimg_EnableReadBuffer (handle, 0);
    return retCode;
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
    result = CommonWrite(interp, "InlineData", format, &handle, blockPtr);

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
    int     x, y, nchan, nBytes, linepad;
    int     redOffset, greenOffset, blueOffset, alphaOffset;
    UByte   *pixelPtr, *pixRowPtr;
    SUNHEADER sh;
    FMTOPT opts;
    UByte *row, *rowPtr;
    char errMsg[256];

    if (ParseFormatOpts(interp, format, &opts, IMG_WRITE) == TCL_ERROR) {
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

    nchan   = ((opts.withalpha && alphaOffset)? 4: 3);
    nBytes  = blockPtr->width * nchan;
    linepad = nBytes % 2;

    /* Fill the Sun header struct and write the header to the channel. */
    sh.ras_magic     = RAS_MAGIC;
    sh.ras_width     = blockPtr->width;
    sh.ras_height    = blockPtr->height;
    sh.ras_depth     = 8 * nchan;
    sh.ras_length    = (nBytes + linepad) * blockPtr->height;
    sh.ras_type      = (opts.compression) ? RAS_TYPE_RLE : RAS_TYPE_STD;
    sh.ras_maptype   = 0;               /* No colourmap */
    sh.ras_maplength = 0;               /* Length of colourmap */

    write_sun_header (handle, &sh);

    /* Now write out the image data. */
    pixRowPtr = blockPtr->pixelPtr + blockPtr->offset[0];
    if (!opts.compression) {
        row = (UByte *) attemptckalloc (nBytes);
        if (!row) {
            tkimg_snprintf(errMsg, 256, "Can't allocate memory of size %d", nBytes);
            Tcl_AppendResult(interp, errMsg, (char *)NULL);
            return TCL_ERROR;
        }
        for (y=0; y<blockPtr->height; y++) {
            rowPtr = row;
            pixelPtr = pixRowPtr;
            for (x=0; x<blockPtr->width; x++) {
                if (nchan == 4) {
                    /* Have a alpha channel and write it. */
                    *(rowPtr++) = pixelPtr[alphaOffset];
                }
                *(rowPtr++) = pixelPtr[blueOffset];
                *(rowPtr++) = pixelPtr[greenOffset];
                *(rowPtr++) = pixelPtr[redOffset];
                pixelPtr += blockPtr->pixelSize;
            }
            if (nBytes != tkimg_Write(handle, (const char *)row, nBytes)) {
                tkimg_snprintf(errMsg, 256, "Can't write %d bytes to image file", nBytes);
                Tcl_AppendResult(interp, errMsg, (char *)NULL);
                ckfree ((char *)row);
                return TCL_ERROR;
            }
            for (x=0; x<linepad; x++) {
                writeUByte (handle, 0);
            }
            pixRowPtr += blockPtr->pitch;
        }
        ckfree ((char *)row);
    } else {                    /* RLE compression */
        rle_startwrite (handle);
        for (y = 0; y < blockPtr->height; y++) {
            pixelPtr = pixRowPtr;
            for (x = 0; x < blockPtr->width; x++) {
                if (nchan == 4) {
                    /* Have a alpha channel and write it. */
                    rle_fputc (pixelPtr[alphaOffset], handle);
                }
                rle_fputc (pixelPtr[blueOffset], handle);
                rle_fputc (pixelPtr[greenOffset], handle);
                rle_fputc (pixelPtr[redOffset], handle);
                pixelPtr += blockPtr->pixelSize;
            }
            for (x=0; x<linepad; x++) {
                rle_fputc (0, handle);
            }
            pixRowPtr += blockPtr->pitch;
        }
        rle_endwrite (handle);
    }
    if (opts.verbose) {
        printImgInfo (&sh, filename, "Saving image:");
    }
    return TCL_OK;
}
