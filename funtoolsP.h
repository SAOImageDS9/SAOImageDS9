/*
 *	Copyright (c) 1999-2003 Smithsonian Astrophysical Observatory
 */

/*
 *
 * funtools.h
 *
 */

#ifndef	__funtoolsP_h
#define	__funtoolsP_h

#if HAVE_CONFIG_H
#include "conf.h"
#endif

#include <stdio.h>
#if HAVE_UNISTD_H
#include <unistd.h>
#endif
#if HAVE_STRING_H
#include <string.h>
#endif
#if HAVE_STDLIB_H
#include <stdlib.h>
#endif
#if HAVE_MALLOC_H
#include <malloc.h>
#endif
#if HAVE_GETOPT_H
#include <getopt.h>
#endif
#include <sys/types.h>
#include "prsetup.h"
#define USE_XFILEIO 1
#include "fitsy.h"
#undef USE_XFILEIO
#include "wcs.h"
#include "filter.h"
#include "file.h"
#include "swap.h"
#include "word.h"
#include "parse.h"
#include "xalloc.h"
#include "mkrtemp.h"
#include "NaN.h"
#include "xlaunch.h"

#ifndef MAXINT
#define MAXINT	2147483647
#endif
#ifndef MININT
#define MININT	(-MAXINT - 1)
#endif
#ifndef MAXDBL
#define MAXDBL	1.7976931348623157E+308
#endif
#ifndef MINDBL
#define MINDBL	(-MAXDBL)
#endif

/* blocking types */
#define FUN_SUM 1
#define FUN_AVG 2

/* merge types */
#define MERGE_UPDATE  1
#define MERGE_REPLACE 2
#define MERGE_APPEND  4
     
/* special "region" column info */
#define COL_REGION_NAME  "$REGION"
#define COL_REGION_ONAME "REGION"
#define COL_REGION_ID	 -1
#define COL_NUM_NAME    "$N"
#define COL_NUM_ONAME   "N"
#define COL_NUM_ID	-2
#define COL_UNKNOWN_ID	-100

/* image data types */
#define TY_CHAR		 1
#define TY_USHORT	-2
#define TY_SHORT	 2
#define TY_INT		 4
#define TY_LONG		 8
#define TY_FLOAT	-4
#define TY_DOUBLE	-8

/* list types for multi-file list support */
#define LIST_NONE	0
#define LIST_FILEORDER	1
#define LIST_SORT	2
#define LIST_TRYSORT	3
#define LIST_UNSORT	4

/* values for scaled flag */
#define FUN_SCALE_EXISTS   1
#define FUN_SCALE_APPLIED  2

/* for a table, do we have an array of structs or a struct of arrays? */
#define FUN_ORG_AOS	1
#define FUN_ORG_SOA	2

/* the usual */
#ifndef DEFAULT_TMPDIR
#define DEFAULT_TMPDIR "/tmp"
#endif

/* max number of ifun links to a single ifun struct */
#define FUN_MAXBFUN	1024
     
/* max number of  columns in a file */
#define FUN_MAXCOL	1000

/* max buffer size when allocating memory to read rows */
#define FUN_MAXBUFSIZE 5000000
     
/* validation */
#define FUN_MAGIC	14285
#define FUN_VALID(fun)  (fun && (*(short *)fun == FUN_MAGIC))

/* save buffer for reading multiple input files from one FunOpen() */
typedef struct savebufstruct{
  struct savebufstruct *next;
  int type;
  int nrow;
  char *ebuf;
  unsigned char *rbuf;
} *SaveBuf, SaveBufRec;

/* columns record */
typedef struct funcolrec {
  char *name;
  int order;
  int type;
  int from;
  int ofrom;
  int mode;
  int n;
  int offset;
  int width;
  int tcol;
  int tindex;
  int poff;
  double tlmin;
  double tlmax;
  double binsiz;
  int doblank;			/* do we have a BLANK value? */
  int tblank;			/* blank value */
  int scaled;			/* valid bscale, bzero values exist */
  double tscale;		/* bscale value */
  double tzero;			/* bzero value */
  char *tunit;
  char *tctyp;
  char *tcrvl;
  char *tcdlt;
  char *tcrpx;
  char *tcrot;
  char *vla;
} *FunCol, FunColRec;

/*
 *
 *
 * funtools record structure
 *
 */
typedef struct funrec {
  /* magic MUST be first */
  short magic;			/* magic number identifying this as fun */
  /* top level file info */
  char *fname;			/* file name */
  char *mode;			/* open mode */
  int type;			/* file type -- see above */
  int bitpix;			/* FITS bitpix defines data type */
  double min1, max1;		/* x limits for whole image or table */
  double min2, max2;		/* y limits for whole image or table */
  double binsiz1, binsiz2;	/* binsize for tables */
  int dims;			/* number of image dimensions */
  int dim1, dim2;		/* image dimensions */		
  int endian;			/* 0=little, 1=big */
  char *filter;			/* filter info from bracket spec */
  FITSHead header;		/* underlying fitsy handle */
  FITSHead theader;		/* temp fitsy handle */
  FITSHead primary;		/* fitsy handle for *output* of primary */
  GIO gio;			/* I/O handle */
  struct WorldCoor *wcs;        /* WCS info -- converted to image */
  struct WorldCoor *wcs0;       /* WCS info -- unconverted to image */
  char *activate;		/* activation flag */
  off_t datastart;		/* starting position in file for data */
  /* param-specific info */
  int doprim;			/* write to primary header */
  int doraw;			/* get raw value */
  /* image-specific info */
  off_t curpos;			/* current position into image */
  int primio;			/* flag that the primary header was written */
  int dtype;			/* type of data -- see fits.h */
  int dlen;			/* length of data buffer */
  int dpad;			/* length of data padding */
  int doblank;			/* do we have a BLANK value? */
  int blank;			/* blank value */
  int scaled;			/* valid bscale, bzero values exist */
  double bscale;		/* bscale value */
  double bzero;			/* bzero value */
  /* table-specific info */
  char *bincols;		/* binning columns string */
  int bin[3];			/* pointers to column offsets for binning */
  int vbin;			/* column offset for val column when binning */
  int vop;			/* operator to apply to vcol binning */
  int overflow;			/* how many times we overflowed when binning */
  int ncol;			/* current nuber of selected columns */
  int rowsize;			/* size in bytes of selected column records */
  int maxbufsize;		/* max size of buffer holding columns */
  int transparent;		/* is mask transparent? */
  int org;			/* array of structs or struct of arrays? */
  int idx;			/* should we use filter index if found? */
  FunCol *cols;			/* selected columns */
  off_t headpos;		/* position in file for header start */
  /* array/table specific info */
  int total;			/* number of rows in input table */
  int left;			/* number of rows left to process in table */
  int io;			/* count of number of putrows */
  int skip;			/* bytes to skip (for arrays) */
  off_t bytes;			/* count of bytes output via putrows */
  /* text file info */
  int nparser;			/* number of parsers */
  Parse *parsers;		/* array of parsers */
  /* raw row data buffer */
  int rawsize;			/* size in bytes of one (input) table row */
  int rawbufsize;		/* size in bytes of evbuf holding raw rows */
  unsigned char *rawbuf;	/* raw row buffer */
  int dofilt;			/* whether to run events through the filter */
  Filter filt;			/* filter handle */
  int nmask;			/* number of image masks */
  FilterMask masks;		/* image masks */
  /* binning/section info */
  int x0, x1, y0, y1, block, btype;
  int odims;
  int odim1, odim2;
  int obitpix, odtype;
  /* input/output info */
  /* whether we convert data when moving from file to native */
  int iconvert, oconvert;
  /* input fun struct that we used to open */
  struct funrec *ifun;
  /* back-links to structs which use this struct as a reference */
  struct funrec *bfun[FUN_MAXBFUN];
  /* flag that we are copying all extensions from input */
  int icopy;
  /* whether we merge back into raw input data */
  int merge;
  /* operations performed on this handle */
  int ops;
  /* list support */
  int ltype;			/* see LIST_XXX above */
  int lmem;			/* amount of memory for saved buffers */
  int ifd;			/* ifd of this gio for select() */
  struct funrec *head;		/* list head, where "global" info resides */
  struct funrec *current;	/* currently active member: stored in head */
  struct funrec *next;		/* next member in linked list */
  SaveBuf save;			/* linked list of save buffers */
  FILE *lefp;			/* temp file for saved overflow (user data) */
  FILE *lrfp;			/* temp file for saved overflow (raw data)  */
  /* view support */
  char *view;			/* original view */
  char *vcols;			/* view columns */
  char *vfmt;			/* view format */
} *Fun, FunRec;

#define FUNTOOLS_PRIVATE 1

_PRbeg

/* funopen.c */
Fun  _FunFITSOpen _PRx((Fun ifun, char *fname, char *mode));

/* funim.c */
void *_FunImageMask _PRx((Fun fun, void *buf, int rstart, int rstop,
			  FilterMask masks, int nmask, char *mode));
int _FunImagePutHeader _PRx((Fun fun, int dim1, int dim2, int bitpix));

/* funtab.c */
void *_FunRead _PRx((Fun fun, char *buf, size_t size, size_t get, size_t *got));
void _FunSaveNaxis2 _PRx((Fun fun));
int  _FunFixNaxis2  _PRx((Fun fun));
int _FunTablePutHeader _PRx((Fun fun));

/* funcol.c */
void _FunColumnHeader _PRx((Fun fun, FunCol *cols, int ncol));
void _FunColumnFree   _PRx((Fun fun));

/* funcopy.c */
void _FunCopyBinDelete _PRx((FITSHead header, int n));
int  _FunCopy2ImageHeader _PRx((Fun from, Fun to));

/* funutils.c */
int _FunPrimaryExtension _PRx((Fun fun));
void _FunParseSection _PRx((Fun fun, char *section,
			    int *min1, int *max1, int *min2, int *max2,
			    int *block, int *btype, char *tail, int maxlen));
int _FunColumnDims _PRx((char *s, int type, double *tlmin, double *tlmax,
			 double *binsiz, int *dims,
			 double *tscale, double *tzero, int *scaled));
void _FunColumnType _PRx((char *s, int *type, int *n, 
			  double *tlmin, double *tlmax, 
			  double *binsiz, int *dims,
			  double *tscale, double *tzero, int *scaled,
			  int *ptype, int *poff));
int _FunFile _PRx((char *lbuf, char *tbuf, int len, int *lptr));
void * _FunSwap _PRx((void *obuf, void *ibuf, int width, int type));

/* funtext.c */
Fun FunTextOpen _PRx((char *fname, char *mode, char *iline, GIO ifd));
int FunTextParam _PRx((char *pdelims, char *lbuf, 
		       char *kbuf, char *vbuf, char *cbuf, int maxlen));
void FunTextParamHeader _PRx((FITSHead theader, char *lbuf, 
			      char *key, char *val, char *com, int pgot));

/* funopenp.c */
Fun _FunNew _PRx((void));
int _FunSpecialFile _PRx((char *fname, char *type,
			  char *name, char *tail, char *extn, int mlen));
int _FunRowNum _PRx((Fun fun, char *tail, char *env));
int _FunTableBinCols _PRx((Fun fun, char *tail, char *env));
int _FunTableValCol _PRx((Fun fun, char *tail, char *env));
FITSHead _FunRawEvHeader _PRx((Fun fun,
			       char *iname, char *iext, char *eventdef));
off_t _FunImageSkip _PRx((Fun fun, char *tail));
Fun _FunValid _PRx((Fun fun));
void _FunFree _PRx((Fun fun, int flag));
int _FunImageSize _PRx((Fun fun));
int _FunMaxBufSize _PRx((Fun fun, char *tail));
int _FunOpenCommon _PRx((Fun fun));

/* funvu.c */
int FunView _PRx((Fun fun, char *view, char *vmode, char *fname, int fmax));

_PRend

#include "funtools.h"

#endif /* __funtoolsP.h */
