/*
 * sgi.c
 *
 * SGI photo image type, Tcl/Tk package.
 *
 * A photo image handler for the Silicon Graphics native image format.
 *
 * For a list of available format options see function ParseFormatOpts
 * and the documentation img-sgi.
 *
 * Copyright (c) 2000-2024 Paul Obermeier <obermeier@users.sourceforge.net>
 *
 * See the file "license.terms" for information on usage and redistribution
 * of this file, and for a DISCLAIMER OF ALL WARRANTIES.
 *
 * Parts of this code were taken from Paul Haeberli's original
 * image library code, written in 1984.
 *
 */

/*
 * Generic initialization code, parameterized via CPACKAGE and PACKAGE.
 */

#include "init.c"

#include <stdio.h>

/* Some defines and typedefs for compatibility reasons. */
#define TRUE  1
#define FALSE 0
typedef unsigned char Boln;     /* Boolean value: TRUE or FALSE */
typedef unsigned char UByte;    /* Unsigned  8 bit integer */
typedef char  Byte;             /* Signed    8 bit integer */
typedef short Short;            /* Signed   16 bit integer */
typedef unsigned short UShort;  /* Unsigned 16 bit integer */
typedef int Int;                /* Signed   32 bit integer */
typedef unsigned int UInt;      /* Unsigned 32 bit integer */

/* Start of original code from SGI image library, slightly modified. */

#define IMAGIC        0x01DA

/* colormap of images */
#define CM_NORMAL               0       /* file contains rows of values which
                                         * are either RGB values (zsize == 3)
                                         * or grayramp values (zsize == 1) */
#define CM_DITHERED             1
#define CM_SCREEN               2       /* file contains data which is a screen
                                         * image; getrow returns buffer which
                                         * can be displayed directly with
                                         * writepixels */
#define CM_COLORMAP             3       /* a colormap file */

#define BPPMASK                 0x00ff
#define ITYPE_UNCOMPRESSED      0x0000
#define ITYPE_RLE               0x0100
#define ISRLE(type)             (((type) & 0xff00) == ITYPE_RLE)
#define ISUNCOMPRESSED(type)    (((type) & 0xff00) == ITYPE_UNCOMPRESSED)
#define BPP(type)               ((type) & BPPMASK)
#define RLE(bpp)                (ITYPE_RLE | (bpp))
#define UNCOMPRESSED(bpp)       (ITYPE_UNCOMPRESSED | (bpp))
#define IBUFSIZE(pixels)        ((pixels+(pixels>>6))<<2)

/* The number of bytes of the IMAGE struct, which must be written to disk.
 * All other information is needed only internally. It is filled with zeros
 * on disk. */
#define RELEVANT_HEADER_BYTES 108

typedef struct {
    UShort    imagic;         /* Stuff saved in file */
    UShort    type;
    UShort    dim;
    UShort    xsize;
    UShort    ysize;
    UShort    zsize;
    UInt      min;
    UInt      max;
    UInt      wastebytes;
    char      name[80];
    UInt      colormap;

    Tcl_Channel file;     /* Stuff not saved in file */
    UShort      flags;
    Short       dorev;
    Short       x;
    Short       y;
    Short       z;
    Short       cnt;
    UShort      *ptr;
    UShort      *base;
    UShort      *tmpbuf;
    UInt        offset;
    UInt        rleend;         /* For rle images */
    UInt        *rowstart;      /* For rle images */
    Int         *rowsize;       /* For rle images */
    char        dummy[512-146]; /* Fill bytes, so that structure is 512 bytes */
} IMAGE;

#if !defined (_IOWRT)
#   define _IOWRT  1
#endif
#if !defined (_IOREAD)
#   define _IOREAD 2
#endif
#if !defined (_IORW)
#   define _IORW   4
#endif
#if !defined (_IOERR)
#   define _IOERR  8
#endif
#if !defined (_IOEOF)
#   define _IOEOF 16
#endif

static int img_badrow(IMAGE *image, unsigned int y, unsigned int z);
static int img_write(IMAGE *image, char *buffer,int count);
static int img_writeheader(IMAGE *image);
static int iflush(Tcl_Interp *interp, IMAGE *image);
static unsigned short *ibufalloc(IMAGE *image);
static unsigned int img_optseek(IMAGE *image, unsigned int offset);
static int imgopen(Tcl_Interp *, int, Tcl_Channel, IMAGE *, const char *,unsigned int, unsigned int,
                unsigned int, unsigned int, unsigned int);
static int getrow(Tcl_Interp *interp, IMAGE *image, unsigned short *buffer,
                unsigned int y, unsigned int z);
static int putrow(Tcl_Interp *interp, IMAGE *image, unsigned short *buffer,
                unsigned int y, unsigned int z);

static void isetname(IMAGE *image, const char *name)
{
    strncpy(image->name,name,80);
}

static void cvtshorts(unsigned short buffer[], int n)
{
    short i;
    int nshorts = n>>1;
    unsigned short swrd;

    for(i=0; i<nshorts; i++) {
        swrd = *buffer;
        *buffer++ = (swrd>>8) | (swrd<<8);
    }
}

static void cvtlongs(int buffer[], int n)
{
    short i;
    int nlongs = n>>2;
    int lwrd;
    Byte *bytePtr;

    bytePtr = (Byte *) buffer;
    for(i=0; i<nlongs; i++) {
        lwrd = buffer[i];
        *bytePtr = (Byte) (lwrd >> 24); bytePtr++;
        *bytePtr = (Byte) (lwrd >> 16); bytePtr++;
        *bytePtr = (Byte) (lwrd >> 8);  bytePtr++;
        *bytePtr = (Byte) (lwrd);       bytePtr++;
    }
}

static void cvtimage(int buffer[])
{
    cvtshorts((unsigned short *)buffer,12);
    cvtlongs(buffer+3,12);
}

static unsigned short *ibufalloc(IMAGE *image)
{
    return (unsigned short *)malloc(IBUFSIZE(image->xsize));
}

static int imgOpenRead (Tcl_Interp *interp, Tcl_Channel file, IMAGE *image, const char *mode)
{
    return imgopen (interp, 0, file, image, mode, 0, 0, 0, 0, 0);
}

static int imgOpenWrite (Tcl_Interp *interp, Tcl_Channel file, IMAGE *image, const char *mode,
                     unsigned int type, unsigned int dim,
                     unsigned int xsize, unsigned int ysize, unsigned int zsize)
{
    return imgopen (interp, 0, file, image, mode, type, dim, xsize, ysize, zsize);
}

static int imgopen(Tcl_Interp *interp, int f, Tcl_Channel file, IMAGE *image, const char *mode,
                unsigned int type, unsigned int dim,
                unsigned int xsize, unsigned int ysize, unsigned int zsize)
{
    int rw;
    int tablesize;
    int i, max;

    rw = mode[1] == '+';
    if(rw) {
        Tcl_AppendResult(interp, "Read/Write mode not supported.", (char *) NULL);
        return 0;
    }
    if (*mode=='w') {
        image->type = type;
        image->xsize = xsize;
        image->ysize = 1;
        image->zsize = 1;
        if (dim>1) {
            image->ysize = ysize;
        }
        if (dim>2) {
            image->zsize = zsize;
        }
        if(image->zsize == 1) {
            image->dim = 2;
            if(image->ysize == 1) {
                image->dim = 1;
            }
        } else {
            image->dim = 3;
        }
        image->min = 10000000;
        image->max = 0;
        isetname(image,"no name");
        image->wastebytes = 0;
        if (512 != Tcl_Write (file, (char *)image, 512)) {
            Tcl_AppendResult(interp, "Error writing image header.", (char *) NULL);
            return 0;
        }
    } else {
        if (512 != Tcl_Read (file, (char *)image, 512)) {
            Tcl_AppendResult(interp, "Error reading image header.", (char *) NULL);
            return 0;
        }
        if( ((image->imagic>>8) | ((image->imagic&0xff)<<8)) == IMAGIC ) {
            image->dorev = 1;
            cvtimage((int *)image);
        } else {
            image->dorev = 0;
        }
        if (image->imagic != IMAGIC) {
            Tcl_AppendResult(interp, "Bad magic number in image header.", (char *) NULL);
            return 0;
        }
    }
    if (rw) {
        image->flags = _IORW;
    } else if (*mode != 'r') {
        image->flags = _IOWRT;
    } else {
        image->flags = _IOREAD;
    }
    if(ISRLE(image->type)) {
        tablesize = image->ysize*image->zsize*sizeof(int);
        image->rowstart = (unsigned int *)malloc(tablesize);
        image->rowsize = (int *)malloc(tablesize);
        if( image->rowstart == 0 || image->rowsize == 0 ) {
            Tcl_AppendResult(interp, "Error allocating image rows.", (char *) NULL);
            return 0;
        }
        image->rleend = 512L+2*tablesize;
        if (*mode=='w') {
            max = image->ysize*image->zsize;
            for(i=0; i<max; i++) {
                image->rowstart[i] = 0;
                image->rowsize[i] = -1;
            }
        } else {
            tablesize = image->ysize*image->zsize*sizeof(int);
            Tcl_Seek (file, 512L, 0);
            if (tablesize != (int)Tcl_Read (file, (char *)image->rowstart, tablesize)) {
                Tcl_AppendResult(interp, "Error reading rowstart.", (char *) NULL);
                return 0;
            }
            if(image->dorev) {
                cvtlongs((int *)image->rowstart,tablesize);
            }
            if (Tcl_Read (file, (char *)image->rowsize, tablesize) != tablesize) {
                Tcl_AppendResult(interp, "Error reading rowstart.", (char *) NULL);
                return 0;
            }
            if(image->dorev) {
                cvtlongs(image->rowsize,tablesize);
            }
        }
    }
    image->cnt = 0;
    image->ptr = 0;
    image->base = 0;
    if( (image->tmpbuf = ibufalloc(image)) == 0 ) {
        Tcl_AppendResult(interp, "Error allocating temporary buffer.", (char *) NULL);
        return 0;
    }
    image->x = image->y = image->z = 0;
    image->file = file;
    image->offset = 512L;                       /* set up for img_optseek */
    Tcl_Seek (image->file, 512L, 0);
    return 1;
}

static int iclose(Tcl_Interp *interp, IMAGE *image)
{
    int tablesize;

    iflush(interp, image);
    img_optseek(image, 0);
    if (image->flags&_IOWRT) {
        if(image->dorev) {
            cvtimage((int *)image);
        }
        if ( !img_writeheader(image)) {
            Tcl_AppendResult(interp, "Error writing image header.", (char *) NULL);
            return EOF;
        }
        if(image->dorev) {
            cvtimage((int *)image);
        }
        if(ISRLE(image->type)) {
            img_optseek(image, 512L);
            tablesize = image->ysize*image->zsize*sizeof(int);
            if(image->dorev) {
                cvtlongs((int *)image->rowstart,tablesize);
            }
            if (img_write(image,(char *)(image->rowstart),tablesize) != tablesize) {
                Tcl_AppendResult(interp, "Error writing rowstart.", (char *) NULL);
                return EOF;
            }
            if(image->dorev) {
                cvtlongs(image->rowsize,tablesize);
            }
            if (img_write(image,(char *)(image->rowsize),tablesize) != tablesize) {
                Tcl_AppendResult(interp, "Error writing rowstart.", (char *) NULL);
                return EOF;
            }
        }
    }
    if(image->base) {
        free(image->base);
        image->base = 0;
    }
    if(image->tmpbuf) {
        free(image->tmpbuf);
        image->tmpbuf = 0;
    }
    if(ISRLE(image->type)) {
        free(image->rowstart);
        image->rowstart = 0;
        free(image->rowsize);
        image->rowsize = 0;
    }
    return 0;
}

static int iflush(Tcl_Interp *interp, IMAGE *image)
{
    unsigned short *base;

    if ( (image->flags&_IOWRT) && (base=image->base)!=NULL && (image->ptr-base)>0) {
        if (putrow(interp, image, base, image->y,image->z)!=image->xsize) {
            image->flags |= _IOERR;
            return EOF;
        }
    }
    return 0;
}

static unsigned int img_seek(Tcl_Interp *interp, IMAGE *image, unsigned int y, unsigned int z)
{
    if(img_badrow(image,y,z)) {
        Tcl_AppendResult(interp, "Row number out of range", (char *) NULL);
        return EOF;
    }
    image->x = 0;
    image->y = y;
    image->z = z;
    if(ISUNCOMPRESSED(image->type)) {
        switch(image->dim) {
            case 1:
                return img_optseek(image, 512L);
            case 2:
                return img_optseek(image,512L+(y*image->xsize)*BPP(image->type));
            case 3:
                return img_optseek(image,
                    512L+(y*image->xsize+z*image->xsize*image->ysize)*
                                                        BPP(image->type));
            default:
                Tcl_AppendResult(interp, "Invalid image dimension.", (char *) NULL);
                break;
        }
    } else if(ISRLE(image->type)) {
        switch(image->dim) {
            case 1:
                return img_optseek(image, image->rowstart[0]);
            case 2:
                return img_optseek(image, image->rowstart[y]);
            case 3:
                return img_optseek(image, image->rowstart[y+z*image->ysize]);
            default:
                Tcl_AppendResult(interp, "Invalid image dimension.", (char *) NULL);
                break;
        }
    } else {
        Tcl_AppendResult(interp, "Invalid image type.", (char *) NULL);
    }
    return((unsigned int)-1);
}

static int img_badrow(IMAGE *image, unsigned int y, unsigned int z)
{
    if (y>=image->ysize || z>=image->zsize) {
        return 1;
    } else {
        return 0;
    }
}

static int img_write(IMAGE *image, char *buffer, int count)
{
    int retval;

    retval = (int)Tcl_Write (image->file, buffer, count);
    if (retval == count) {
        image->offset += count;
    } else {
        image->offset = -1;
    }
    return retval;
}

static int img_writeheader(IMAGE *image)
{
    int retval;

    retval = Tcl_Write (image->file, (char *)image, RELEVANT_HEADER_BYTES);
    if (retval == RELEVANT_HEADER_BYTES) {
        image->offset += sizeof (IMAGE);
    } else {
        image->offset = -1;
    }
    return retval;
}

static int img_read(IMAGE *image, char *buffer, int count)
{
    int retval;

    retval = Tcl_Read (image->file, buffer, count);
    if (retval == count) {
        image->offset += count;
    } else {
        image->offset = -1;
    }
    return retval;
}

static unsigned int img_optseek(IMAGE *image, unsigned int offset)
{
    if(image->offset != offset) {
       image->offset = offset;
       return ((unsigned int) Tcl_Seek (image->file,offset,0));
   }
   return offset;
}

static int img_getrowsize(IMAGE *image)
{
    switch(image->dim) {
        case 1:
            return image->rowsize[0];
        case 2:
            return image->rowsize[image->y];
        case 3:
            return image->rowsize[image->y+image->z*image->ysize];
    }
    return -1;
}

static void img_setrowsize(Tcl_Interp *interp, IMAGE *image, int cnt, int y, int z)
{
    int *sizeptr;

    if (img_badrow(image,y,z)) {
        return;
    }
    switch(image->dim) {
        case 1:
            sizeptr = &image->rowsize[0];
            image->rowstart[0] = image->rleend;
            break;
        case 2:
            sizeptr = &image->rowsize[y];
            image->rowstart[y] = image->rleend;
            break;
        case 3:
            sizeptr = &image->rowsize[y+z*image->ysize];
            image->rowstart[y+z*image->ysize] = image->rleend;
            break;
        default:
            Tcl_AppendResult(interp, "Invalid image dimension.", (char *) NULL);
            return;
    }
    if(*sizeptr != -1) {
        image->wastebytes += *sizeptr;
    }
    *sizeptr = cnt;
    image->rleend += cnt;
}

#define docompact                                                       \
        while(iptr<ibufend) {                                           \
            sptr = iptr;                                                \
            iptr += 2;                                                  \
            while((iptr<ibufend)&&((iptr[-2]!=iptr[-1])||(iptr[-1]!=iptr[0])))\
                iptr++;                                                 \
            iptr -= 2;                                                  \
            count = iptr-sptr;                                          \
            while(count) {                                              \
                todo = count>126 ? 126:count;                           \
                count -= todo;                                          \
                *optr++ = 0x80|todo;                                    \
                while(todo--)                                           \
                    *optr++ = *sptr++;                                  \
            }                                                           \
            sptr = iptr;                                                \
            cc = *iptr++;                                               \
            while( (iptr<ibufend) && (*iptr == cc) )                    \
                iptr++;                                                 \
            count = iptr-sptr;                                          \
            while(count) {                                              \
                todo = count>126 ? 126:count;                           \
                count -= todo;                                          \
                *optr++ = todo;                                         \
                *optr++ = cc;                                           \
            }                                                           \
        }                                                               \
        *optr++ = 0;

static int img_rle_compact(Tcl_Interp *interp,
                           unsigned short *expbuf, int ibpp,
                           unsigned short *rlebuf, int obpp, int cnt)
{
    if (ibpp == 1 && obpp == 1) {
        unsigned char *iptr = (unsigned char *)expbuf;
        unsigned char *ibufend = iptr+cnt;
        unsigned char *sptr;
        unsigned char *optr = (unsigned char *)rlebuf;
        short todo, cc;
        int count;

        docompact;
        return optr - (unsigned char *)rlebuf;
    } else if (ibpp == 1 && obpp == 2) {
        unsigned char *iptr = (unsigned char *)expbuf;
        unsigned char *ibufend = iptr+cnt;
        unsigned char *sptr;
        unsigned short *optr = rlebuf;
        short todo, cc;
        int count;

        docompact;
        return optr - rlebuf;
    } else if (ibpp == 2 && obpp == 1) {
        unsigned short *iptr = expbuf;
        unsigned short *ibufend = iptr+cnt;
        unsigned short *sptr;
        unsigned char *optr = (unsigned char *)rlebuf;
        short todo, cc;
        int count;

        docompact;
        return optr - (unsigned char *)rlebuf;
    } else if (ibpp == 2 && obpp == 2) {
        unsigned short *iptr = expbuf;
        unsigned short *ibufend = iptr+cnt;
        unsigned short *sptr;
        unsigned short *optr = rlebuf;
        short todo, cc;
        int count;

        docompact;
        return optr - rlebuf;
    } else {
        Tcl_AppendResult(interp, "Invalid bytes per pixel.", (char *) NULL);
        return 0;
    }
}

#define doexpand                                \
        while(1) {                              \
            pixel = *iptr++;                    \
            if ( !(count = (pixel & 0x7f)) )    \
                return;                         \
            if(pixel & 0x80) {                  \
               while(count--)                   \
                    *optr++ = *iptr++;          \
            } else {                            \
               pixel = *iptr++;                 \
               while(count--)                   \
                    *optr++ = pixel;            \
            }                                   \
        }

static void img_rle_expand(Tcl_Interp *interp, unsigned short *rlebuf, int ibpp,
                        unsigned short *expbuf, int obpp)
{
    if (ibpp == 1 && obpp == 1) {
        unsigned char *iptr = (unsigned char *)rlebuf;
        unsigned char *optr = (unsigned char *)expbuf;
        unsigned short pixel,count;

        doexpand;
    } else if (ibpp == 1 && obpp == 2) {
        unsigned char *iptr = (unsigned char *)rlebuf;
        unsigned short *optr = expbuf;
        unsigned short pixel,count;

        doexpand;
    } else if (ibpp == 2 && obpp == 1) {
        unsigned short *iptr = rlebuf;
        unsigned char  *optr = (unsigned char *)expbuf;
        unsigned short pixel,count;

        doexpand;
    } else if (ibpp == 2 && obpp == 2) {
        unsigned short *iptr = rlebuf;
        unsigned short *optr = expbuf;
        unsigned short pixel,count;

        doexpand;
    } else {
        Tcl_AppendResult(interp, "Invalid bytes per pixel.", (char *) NULL);
    }
}

static int putrow(Tcl_Interp *interp, IMAGE *image, unsigned short *buffer,
                  unsigned int y, unsigned int z)
{
    unsigned short *sptr;
    unsigned char  *cptr;
    unsigned int x;
    unsigned int min, max;
    int cnt;

    if( !(image->flags & (_IORW|_IOWRT)) ) {
        return -1;
    }
    if(image->dim<3) {
        z = 0;
    }
    if(image->dim<2) {
        y = 0;
    }
    if (ISUNCOMPRESSED(image->type)) {
        switch(BPP(image->type)) {
            case 1:
                min = image->min;
                max = image->max;
                cptr = (unsigned char *)image->tmpbuf;
                sptr = buffer;
                for(x=image->xsize; x--;) {
                    *cptr = *sptr++;
                    if (*cptr > max) max = *cptr;
                    if (*cptr < min) min = *cptr;
                    cptr++;
                }
                image->min = min;
                image->max = max;
                img_seek(interp, image,y,z);
                cnt = image->xsize;
                if (img_write(image,(char *)(image->tmpbuf),cnt) != cnt) {
                    return -1;
                } else {
                    return cnt;
                }
                /* NOTREACHED */

            case 2:
                min = image->min;
                max = image->max;
                sptr = buffer;
                for(x=image->xsize; x--;) {
                    if (*sptr > max) max = *sptr;
                    if (*sptr < min) min = *sptr;
                    sptr++;
                }
                image->min = min;
                image->max = max;
                img_seek(interp, image,y,z);
                cnt = image->xsize<<1;
                if(image->dorev) {
                    cvtshorts(buffer,cnt);
                }
                if (img_write(image,(char *)(buffer),cnt) != cnt) {
                    if(image->dorev) {
                        cvtshorts(buffer,cnt);
                    }
                    return -1;
                } else {
                    if(image->dorev) {
                        cvtshorts(buffer,cnt);
                    }
                    return image->xsize;
                }
                /* NOTREACHED */

            default:
                Tcl_AppendResult(interp, "Invalid bytes per pixel.", (char *) NULL);
        }
    } else if (ISRLE(image->type)) {
        switch(BPP(image->type)) {
            case 1:
                min = image->min;
                max = image->max;
                sptr = buffer;
                for(x=image->xsize; x--;) {
                    if (*sptr > max) max = *sptr;
                    if (*sptr < min) min = *sptr;
                    sptr++;
                }
                image->min = min;
                image->max = max;
                cnt = img_rle_compact(interp, buffer,2,image->tmpbuf,1,image->xsize);
                img_setrowsize(interp, image,cnt,y,z);
                img_seek(interp, image,y,z);
                if (img_write(image,(char *)(image->tmpbuf),cnt) != cnt) {
                    return -1;
                } else {
                    return image->xsize;
                }
                /* NOTREACHED */

            case 2:
                min = image->min;
                max = image->max;
                sptr = buffer;
                for (x=image->xsize; x--;) {
                    if (*sptr > max) max = *sptr;
                    if (*sptr < min) min = *sptr;
                    sptr++;
                }
                image->min = min;
                image->max = max;
                cnt = img_rle_compact(interp, buffer,2,image->tmpbuf,2,image->xsize);
                cnt <<= 1;
                img_setrowsize(interp, image,cnt,y,z);
                img_seek(interp, image,y,z);
                if(image->dorev) {
                    cvtshorts(image->tmpbuf,cnt);
                }
                if (img_write(image,(char *)(image->tmpbuf),cnt) != cnt) {
                    if(image->dorev) {
                        cvtshorts(image->tmpbuf,cnt);
                    }
                    return -1;
                } else {
                    if(image->dorev) {
                        cvtshorts(image->tmpbuf,cnt);
                    }
                    return image->xsize;
                }
                /* NOTREACHED */

            default:
                Tcl_AppendResult(interp, "Invalid bytes per pixel.", (char *) NULL);
        }
    } else {
        Tcl_AppendResult(interp, "Invalid image type.", (char *) NULL);
    }
    return(-1);
}

static int getrow(Tcl_Interp *interp, IMAGE *image, unsigned short *buffer,
                  unsigned int y, unsigned int z)
{
    short i;
    unsigned char *cptr;
    unsigned short *sptr;
    short cnt;

    if( !(image->flags & (_IORW|_IOREAD)) ) {
        return -1;
    }
    if(image->dim<3) {
        z = 0;
    }
    if(image->dim<2) {
        y = 0;
    }
    img_seek(interp, image, y, z);
    if (ISUNCOMPRESSED(image->type)) {
        switch(BPP(image->type)) {
            case 1:
                if (img_read(image,(char *)image->tmpbuf,image->xsize) != image->xsize) {
                    return -1;
                } else {
                    cptr = (unsigned char *)image->tmpbuf;
                    sptr = buffer;
                    for(i=image->xsize; i--;) {
                        *sptr++ = *cptr++;
                    }
                }
                return image->xsize;
                /* NOTREACHED */

            case 2:
                cnt = image->xsize<<1;
                if (img_read(image,(char *)(buffer),cnt) != cnt) {
                    return -1;
                } else {
                    if(image->dorev) {
                        cvtshorts(buffer,cnt);
                    }
                    return image->xsize;
                }
                /* NOTREACHED */

            default:
                Tcl_AppendResult(interp, "Invalid bytes per pixel.", (char *) NULL);
                break;
        }
    } else if (ISRLE(image->type)) {
        switch(BPP(image->type)) {
            case 1:
                if( (cnt = img_getrowsize(image)) == -1 ) {
                    return -1;
                }
                if( img_read(image,(char *)(image->tmpbuf),cnt) != cnt ) {
                    return -1;
                } else {
                    img_rle_expand(interp, image->tmpbuf,1,buffer,2);
                    return image->xsize;
                }
                /* NOTREACHED */

            case 2:
                if( (cnt = img_getrowsize(image)) == -1 ) {
                    return -1;
                }
                if( cnt != img_read(image,(char *)(image->tmpbuf),cnt) ) {
                    return -1;
                } else {
                    if(image->dorev) {
                        cvtshorts(image->tmpbuf,cnt);
                    }
                    img_rle_expand(interp, image->tmpbuf,2,buffer,2);
                    return image->xsize;
                }
                /* NOTREACHED */

            default:
                Tcl_AppendResult(interp, "Invalid bytes per pixel.", (char *) NULL);
                break;
        }
    } else {
        Tcl_AppendResult(interp, "Invalid image type.", (char *) NULL);
    }
    return -1;
}

/* End of original SGI image code */

/* Structure to hold information about the SGI file being processed. */
typedef struct {
    IMAGE th;
    UByte *red,         /* Pointers to step through scanlines */
          *green,
          *blue,
          *alpha;
    UByte *redScan,     /* Buffer for one scanline: Red   channel */
          *greenScan,   /* Buffer for one scanline: Green channel */
          *blueScan,    /* Buffer for one scanline: Blue  channel */
          *alphaScan;   /* Buffer for one scanline: Matte channel */
    UByte *scanline;
    unsigned short *pixbuf;
} SGIFILE;

/* Format options structure for use with ParseFormatOpts */
typedef struct {
    Int   compression;
    Boln  verbose;
    Boln  withalpha;
} FMTOPT;

static void sgiClose (Tcl_Interp *interp, SGIFILE *tf)
{
    if (tf->redScan)   ckfree ((char *)tf->redScan);
    if (tf->greenScan) ckfree ((char *)tf->greenScan);
    if (tf->blueScan)  ckfree ((char *)tf->blueScan);
    if (tf->alphaScan) ckfree ((char *)tf->alphaScan);
    if (tf->pixbuf)    ckfree ((char *)tf->pixbuf);
    if (tf->scanline)  ckfree ((char *)tf->scanline);
    iclose (interp, &tf->th);
    return;
}

static void printImgInfo (IMAGE *th, const char *filename, const char *msg)
{
    Tcl_Channel outChan;
    char str[256];

    outChan = Tcl_GetStdChannel (TCL_STDOUT);
    if (!outChan) {
        return;
    }
    tkimg_snprintf(str, 256, "%s %s\n", msg, filename);                                     IMGOUT;
    tkimg_snprintf(str, 256, "\tSize in pixel     : %d x %d\n", th->xsize, th->ysize);      IMGOUT;
    tkimg_snprintf(str, 256, "\tNumber of channels: %d\n", (th->zsize));                    IMGOUT;
    tkimg_snprintf(str, 256, "\tBytes per pixel   : %d\n", BPP(th->type));                  IMGOUT;
    tkimg_snprintf(str, 256, "\tCompression       : %s\n", ISRLE(th->type)? "rle": "None"); IMGOUT;
    Tcl_Flush(outChan);
}

static Boln readHeader (tkimg_Stream *handle, IMAGE *th)
{
    if (512 != tkimg_Read(handle, (char *)th, 512)) {
        return FALSE;
    }
    if ( ((th->imagic>>8) | ((th->imagic&0xff)<<8)) == IMAGIC ) {
        th->dorev = 1;
        cvtimage((int *)th);
    } else {
        th->dorev = 0;
    }
    if (th->imagic != IMAGIC) {
        return FALSE;
    }
    return TRUE;
}

static Boln writeHeader(Tcl_Interp *interp, tkimg_Stream *handle, IMAGE *th, UInt type, UInt dim,
                        UInt xsize, UInt ysize, UInt zsize)
{
    if (!imgOpenWrite (interp, (Tcl_Channel)handle->channel, th, "w", type, dim, xsize, ysize, zsize)) {
        return FALSE;
    }
    return TRUE;
}

static Boln readChannel (Tcl_Interp *interp, SGIFILE *tf, UByte *dest, Int sgichn, Int nchan, Int y, Int n)
{
    unsigned short *src = tf->pixbuf;
    unsigned short *stop = src + n;

    if (-1 == getrow (interp, &tf->th, tf->pixbuf, y, sgichn)) {
        return FALSE;
    }

    dest += sgichn;
    switch (BPP(tf->th.type)) {
        case 1: {       /* 8-bit pixel values */
            while (src < stop) {
                *dest = *(src++);
                dest += nchan;
            }
            break;
        }
        case 2: {       /* 16-bit values will be linearly mapped to 8-bit. */
            while (src < stop) {
                *dest = *(src++) >> 8;
                dest += nchan;
            }
            break;
        }
    }
    return TRUE;
}

static Boln sgiReadScan (Tcl_Interp *interp, tkimg_Stream *handle, SGIFILE *tf, Int y)
{
    Int nchan;

    nchan = tf->th.zsize;

    /* Read 1. channel: This is either the red or brightness channel. */
    if (!readChannel (interp, tf, tf->scanline, 0, nchan, y, tf->th.xsize)) {
        return FALSE;
    }

    if ( nchan >= 3) {
        /* This is either a RGB or RGBA image. Read green and blue channels. */
        if (!readChannel (interp, tf, tf->scanline, 1, nchan, y, tf->th.xsize) ||
            !readChannel (interp, tf, tf->scanline, 2, nchan, y, tf->th.xsize)) {
            return FALSE;
        }
    }
    if (nchan > 3 || nchan == 2) {
        /* If nchan is 2, we have a brightness-alpha image, if nchan is 4, we
           have RGBA. */
        if (!readChannel (interp, tf, tf->scanline, nchan == 2? 1: 3, nchan, y, tf->th.xsize)) {
            return FALSE;
        }
    }
    return TRUE;
}

static Boln writeChannel (Tcl_Interp *interp, SGIFILE *tf, UByte *src, Int sgichn, Int y, Int n)
{
    unsigned short *dest = tf->pixbuf;
    UByte *stop = src + n;

    while (src < stop) {
        *(dest++) = *(src++);
    }

    if (-1 == putrow (interp, &tf->th, tf->pixbuf, y, sgichn)) {
        return FALSE;
    }

    return TRUE;
}

static Boln sgiWriteScan(Tcl_Interp *interp, tkimg_Stream *handle, SGIFILE *tf, Int y, Int nchan)
{
    if (!writeChannel (interp, tf, tf->redScan,   0, y, tf->th.xsize) ||
        !writeChannel (interp, tf, tf->greenScan, 1, y, tf->th.xsize) ||
        !writeChannel (interp, tf, tf->blueScan,  2, y, tf->th.xsize)) {
        return FALSE;
    }

    if (nchan == 4) {
        if (!writeChannel (interp, tf, tf->alphaScan, 3, y, tf->th.xsize)) {
            return FALSE;
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

static int CommonMatch(Tcl_Interp *interp, tkimg_Stream *handle, int *widthPtr,
        int *heightPtr, IMAGE *sgiHeaderPtr);
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

    tkimg_ReadInitFile(&handle, chan);

    return CommonMatch(interp, &handle, widthPtr, heightPtr, NULL);
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
    return CommonMatch(interp, &handle, widthPtr, heightPtr, NULL);
}

static int CommonMatch(
    Tcl_Interp *interp,
    tkimg_Stream *handle,
    int *widthPtr,
    int *heightPtr,
    IMAGE *sgiHeaderPtr
) {
    IMAGE th;

    if (!sgiHeaderPtr) {
        if (!readHeader (handle, &th)) {
            return 0;
        }
    } else {
        if (!imgOpenRead (interp, (Tcl_Channel)handle->channel, &th, "r")) {
            return 0;
        }
    }

    if (th.xsize <= 0 || th.ysize <= 0) {
        return 0;
    }

    *widthPtr  = th.xsize;
    *heightPtr = th.ysize;
    if (sgiHeaderPtr) {
        *sgiHeaderPtr = th;
    }
    return 1;
}

static int FileRead(
    Tcl_Interp *interp,
    Tcl_Channel chan,
    const char *filename,
    Tcl_Obj *format,
    Tk_PhotoHandle imageHandle,
    int destX, int destY,
    int width, int height,
    int srcX, int srcY
) {
    tkimg_Stream handle;
    memset(&handle, 0, sizeof (tkimg_Stream));

    tkimg_ReadInitFile(&handle, chan);

    return CommonRead (interp, &handle, filename, format,
                       imageHandle, destX, destY,
                       width, height, srcX, srcY);
}

#define BUFLEN 4096

static int StringRead(
    Tcl_Interp *interp,
    Tcl_Obj *dataObj,
    Tcl_Obj *format,
    Tk_PhotoHandle imageHandle,
    int destX, int destY,
    int width, int height,
    int srcX, int srcY
) {
    Tcl_DString tempFileName;
    Tcl_DString ds;
    char buffer[BUFLEN];
    FILE *outfile;
    Tcl_Channel inchan;
    int count, retVal;
    tkimg_Stream handle;
    memset(&handle, 0, sizeof (tkimg_Stream));

    if (!tkimg_ReadInitString(&handle, dataObj)) {
        return 0;
    }

    Tcl_DStringInit (&tempFileName);
    tkimg_GetTemporaryFileName (&tempFileName);

    outfile = fopen(Tcl_DStringValue (&tempFileName), "wb");
    if (outfile == NULL) {
        Tcl_AppendResult(interp, "Error open output file", (char *) NULL);
        return TCL_ERROR;
    }

    count = tkimg_Read(&handle, buffer, BUFLEN);
    while (count == BUFLEN) {
        fwrite(buffer, 1, count, outfile);
        count = tkimg_Read(&handle, buffer, BUFLEN);
    }
    if (count>0) {
        fwrite(buffer, 1, count, outfile);
    }
    fclose(outfile);

    Tcl_ExternalToUtfDString(NULL, Tcl_DStringValue (&tempFileName), -1, &ds);
    inchan = tkimg_OpenFileChannel(interp, Tcl_DStringValue(&ds), "r");
    Tcl_DStringFree(&ds);
    if (!inchan) {
        return TCL_ERROR;
    }

    tkimg_ReadInitFile(&handle, inchan);

    retVal = CommonRead (interp, &handle, Tcl_DStringValue (&tempFileName), format, imageHandle,
                         destX, destY, width, height, srcX, srcY);
    if (Tcl_Close (interp, inchan) == TCL_ERROR) {
        tkimg_DeleteFile(Tcl_DStringValue (&tempFileName));
        Tcl_DStringFree (&tempFileName);
        return TCL_ERROR;
    }
    tkimg_DeleteFile(Tcl_DStringValue (&tempFileName));
    Tcl_DStringFree (&tempFileName);
    return retVal;
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
    Int y, nchan;
    int fileWidth, fileHeight;
    int stopY, outY, outWidth, outHeight;
    SGIFILE tf;
    FMTOPT opts;
    int result = TCL_OK;
    char msgStr[1024];

    memset(&tf, 0, sizeof (SGIFILE));
    if (ParseFormatOpts(interp, format, &opts, IMG_READ) == TCL_ERROR) {
        return TCL_ERROR;
    }

    if (!CommonMatch(interp, handle, &fileWidth, &fileHeight, &tf.th)) {
        return TCL_ERROR;
    }
    if (opts.verbose) {
        printImgInfo (&tf.th, filename, "Reading image:");
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

    if (Tk_PhotoExpand(interp, imageHandle, destX + outWidth, destY + outHeight) == TCL_ERROR) {
        return TCL_ERROR;
    }

    nchan = tf.th.zsize;

    tf.pixbuf   = (UShort *) attemptckalloc (fileWidth * nchan * sizeof (UShort));
    if (tf.pixbuf == NULL) {
        Tcl_AppendResult (interp, "Unable to allocate memory for image data.", (char *) NULL);
        return TCL_ERROR;
    }
    tf.scanline = (UByte  *) attemptckalloc (fileWidth * nchan);
    if (tf.scanline == NULL) {
        ckfree( (char *) tf.pixbuf);
        Tcl_AppendResult (interp, "Unable to allocate memory for image data.", (char *) NULL);
        return TCL_ERROR;
    }

    block.pixelSize = nchan;
    block.pitch = fileWidth * nchan;
    block.width = outWidth;
    block.height = 1;
    switch (nchan) {
        case 1: /* Brightness */
        case 2: /* Brightness + Matte */
            block.offset[0] = 0;
            block.offset[1] = 0;
            block.offset[2] = 0;
            block.offset[3] = opts.withalpha? 1: 0;
            break;
        case 3: /* RGB */
        case 4: /* RGB + Matte */
            block.offset[0] = 0;
            block.offset[1] = 1;
            block.offset[2] = 2;
            block.offset[3] = opts.withalpha? 3: 0;
            break;
        default:
            tkimg_snprintf(msgStr, 1024, "Invalid number of channels: %d", nchan);
            Tcl_AppendResult(interp, msgStr, (char *)NULL);
            return TCL_ERROR;
            break;
    }
    block.pixelPtr = tf.scanline + srcX * nchan;

    stopY = srcY + outHeight;
    outY = destY;

    for (y=0; y<stopY; y++) {
        sgiReadScan (interp, handle, &tf, fileHeight-1-y);
        if (y >= srcY) {
            if (Tk_PhotoPutBlock(interp, imageHandle, &block, destX, outY, outWidth, 1,
                opts.withalpha? TK_PHOTO_COMPOSITE_OVERLAY: TK_PHOTO_COMPOSITE_SET) == TCL_ERROR) {
                result = TCL_ERROR;
                break;
            }
            outY++;
        }
    }
    sgiClose (interp, &tf);
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

    chan = tkimg_OpenFileChannel(interp, filename, "w");
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
    Tcl_DString ds;
    Tcl_Channel inchan;
    Tcl_Channel outchan;
    Tcl_DString tempFileName;
    char buffer[BUFLEN];
    int count;
    tkimg_Stream handle;
    memset(&handle, 0, sizeof (tkimg_Stream));

    Tcl_DStringInit (&tempFileName);
    tkimg_GetTemporaryFileName( &tempFileName );

    Tcl_ExternalToUtfDString(NULL, Tcl_DStringValue (&tempFileName), -1, &ds);
    outchan = tkimg_OpenFileChannel(interp, Tcl_DStringValue(&ds), "w");
    if (!outchan) {
        Tcl_DStringFree(&ds);
        Tcl_DStringFree (&tempFileName);
        return TCL_ERROR;
    }

    tkimg_WriteInitFile(&handle, outchan);

    result = CommonWrite(interp, Tcl_DStringValue(&ds), format, &handle, blockPtr);
    Tcl_DStringFree(&ds);
    if (Tcl_Close(interp, outchan) == TCL_ERROR) {
        Tcl_DStringFree (&tempFileName);
        return TCL_ERROR;
    }

    tkimg_WriteInitString(&handle);

    Tcl_ExternalToUtfDString(NULL, Tcl_DStringValue (&tempFileName), -1, &ds);
    inchan = tkimg_OpenFileChannel(interp, Tcl_DStringValue(&ds), "r");
    Tcl_DStringFree(&ds);
    if (!inchan) {
        Tcl_DStringFree (&tempFileName);
        return TCL_ERROR;
    }

    count = Tcl_Read(inchan, buffer, BUFLEN);
    while (count == BUFLEN) {
        tkimg_Write(&handle, buffer, count);
        count = Tcl_Read(inchan, buffer, BUFLEN);
    }
    if (count>0) {
        tkimg_Write(&handle, buffer, count);
    }
    if (Tcl_Close(interp, inchan) == TCL_ERROR) {
        tkimg_DeleteFile(Tcl_DStringValue (&tempFileName));
        Tcl_DStringFree (&tempFileName);
        return TCL_ERROR;
    }
    tkimg_DeleteFile(Tcl_DStringValue (&tempFileName));
    Tcl_DStringFree (&tempFileName);

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
    Int     x, y, bpp, nchan;
    Int     redOffset, greenOffset, blueOffset, alphaOffset;
    UByte   *pixelPtr, *rowPixPtr;
    SGIFILE tf;
    FMTOPT  opts;

    memset (&tf, 0, sizeof (SGIFILE));
    if (ParseFormatOpts(interp, format, &opts, IMG_WRITE) == TCL_ERROR) {
        return TCL_ERROR;
    }

    bpp = 1;

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
    nchan = ((opts.withalpha && alphaOffset)? 4: 3);

    tf.redScan   = (UByte *)  attemptckalloc (blockPtr->width);
    tf.greenScan = (UByte *)  attemptckalloc (blockPtr->width);
    tf.blueScan  = (UByte *)  attemptckalloc (blockPtr->width);
    tf.alphaScan = (UByte *)  attemptckalloc (blockPtr->width);
    tf.pixbuf    = (UShort *) attemptckalloc (blockPtr->width * sizeof (UShort));
    if (tf.redScan == NULL || tf.greenScan == NULL || tf.blueScan == NULL || tf.alphaScan == NULL || tf.pixbuf == NULL) {
        sgiClose(interp, &tf );
        Tcl_AppendResult (interp, "Unable to allocate memory for image data.", (char *) NULL);
        return TCL_ERROR;
    }
    tf.th.imagic = IMAGIC;

    if (!writeHeader(interp, handle, &tf.th,
                      opts.compression? RLE(bpp): UNCOMPRESSED(bpp),
                      nchan, blockPtr->width, blockPtr->height, nchan)) {
        return TCL_ERROR;
    }
    /* The SGI image format expects data to be in big-endian format. */
    tf.th.dorev = tkimg_IsIntel();

    rowPixPtr = blockPtr->pixelPtr + blockPtr->offset[0];
    for (y = blockPtr->height -1; y >=0; y--) {
        tf.red = tf.redScan;
        tf.green = tf.greenScan;
        tf.blue = tf.blueScan;
        tf.alpha = tf.alphaScan;
        pixelPtr = rowPixPtr;
        for (x = 0; x < blockPtr->width; x++) {
            *(tf.red++)   = pixelPtr[redOffset];
            *(tf.green++) = pixelPtr[greenOffset];
            *(tf.blue++)  = pixelPtr[blueOffset];
            if (nchan == 4) {
                /* Have a alpha channel and write it. */
                *(tf.alpha++) = pixelPtr[alphaOffset];
            }
            pixelPtr += blockPtr->pixelSize;
        }
        if (!sgiWriteScan(interp, handle, &tf, y, nchan)) {
            sgiClose (interp, &tf);
            return TCL_ERROR;
        }
        rowPixPtr += blockPtr->pitch;
    }
    if (opts.verbose) {
        printImgInfo (&tf.th, filename, "Saving image:");
    }

    sgiClose (interp, &tf);
    return TCL_OK;
}
