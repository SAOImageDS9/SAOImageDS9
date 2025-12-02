/*
 *	Copyright (c) 1999-2003 Smithsonian Astrophysical Observatory
 */

/*
 *
 * filter.h - include file for "compile on the fly" filters
 *
 */

#ifndef	__filter_h
#define	__filter_h

#if HAVE_CONFIG_H
#include "conf.h"
#endif

/* avoid use of system -- its not secure */
/* but funtools cannot use launch for the MinGW platform because the stdfiles
   support is missing in the launch_spawnvp() implementation of launch */
#ifndef USE_LAUNCH
#define USE_LAUNCH 1
#endif
#if HAVE_MINGW32
#undef USE_LAUNCH
#endif

#include <stdio.h>
#include <ctype.h>
#ifdef HAVE_UNISTD_H
#include <unistd.h>
#endif
#ifdef HAVE_STRING_H
#include <string.h>
#endif
#include <sys/types.h>
#include "prsetup.h"
#include "gio.h"
#include "file.h"
#include "find.h"
#include "macro.h"
#include "word.h"
#include "xalloc.h"
#include "strtod.h"
#define USE_XFILEIO 1
#include "fitsy.h"
#undef USE_XFILEIO
#include "idx.h"
#include "wcs.h"
#include "column.h"
#include "tl.h"
#include "dl.h"
#include "mkrtemp.h"
#include "zprocess.h"
#include "winprocess.h"
#include "parse.h"
#ifdef USE_LAUNCH
#include "xlaunch.h"
#endif

#ifndef OBJPATH
#define OBJPATH "."
#endif

#ifndef FILTER_CC
#define FILTER_CC NULL
#endif
     
#ifndef FILTER_CFLAGS
#define FILTER_CFLAGS NULL
#endif
     
/* define methods of program generation */
#define METHOD_C	1

/* define types of filtering */
#define TYPE_EVENTS	1
#define TYPE_IMAGE	2

/* define types of filtering process -- separate process, self-contained
   separate process, or dynamic load (if defined) */
#define PTYPE_PROCESS	1
#define PTYPE_CONTAINED	2
#define PTYPE_DYNAMIC	3

/* define how we connect the processes -- unix or windows pipes */
#define PIPE_UNIX	0
#define PIPE_WIN32	1


/* defaults which can be overridden by environment variables */
#define DEFAULT_FILTER_METHOD METHOD_C
#define DEFAULT_FILTER_TYPE   TYPE_EVENTS
#ifdef USE_DL
#define DEFAULT_FILTER_PTYPE  PTYPE_DYNAMIC
#else
#define DEFAULT_FILTER_PTYPE  PTYPE_PROCESS
#endif
#define DEFAULT_PAINT_MODE    "false"
#define DEFAULT_FILTER_TMPDIR "/tmp"

/* define type of important tokens */
#define TOK_EREG	1
#define TOK_NREG	2
#define TOK_IREG	4
#define TOK_RLIST	8
#define TOK_RTINE	16
#define TOK_NAME	32
#define TOK_ACCEL	64
#define TOK_VARARGS	128

#define TOK_REG		(TOK_EREG|TOK_NREG|TOK_IREG)

/* default cordinate system for regions */
#define DEFAULT_COORDSYS "physical"

/* if we have gcc, we can use dynamic loading instead of a separate process */
#define GCC_SHARED_FLAGS "-g -fPIC -shared"

/* places to look for the compiler other than user's path */
#define CC_PATH "/opt/SUNWspro/bin:/bin:/usr/bin:/usr/local/bin/:/opt/local/bin:"

/* define non-WCS coordinate systems we handle specially */
#define LCX_IMAGE	1
#define LCX_PHYS	2
#define LCX_AMP		3
#define LCX_DET		4

/* define symbol types in symbol table */
#define SYM_COL	1
#define SYM_PAR	2

/* whether we use only the index and not the compiled filter */
#define FILTER_INDEX_ONLY(f) \
  ((f->doidx==1)&&(f->idx)&&(f->idx->dofilt==0)&&(f->idx->rtype!=IDX_INDEF))

typedef struct filtmask {
  int region;
  int y;
  int xstart, xstop;
} *FilterMask, FilterMaskRec;

typedef struct scanrec{
  struct scanrec *next;
  int x;
} *Scan, ScanRec;

/* structs for use with region routines */
typedef struct shaperec {
  int init;
  double ystart, ystop;
  Scan *scanlist;
  /* varargs */
  int nv;
  double *xv;
  /* circle, annulus */
  double r1sq, r2sq;
  /* ellipse */
  double angl, sinangl, cosangl;
  double cossq, sinsq;
  double xradsq, yradsq;
  double a;
  /* polygon-style shapes */
  int npt;
  double *pts;
  /* line */
  int xonly;
  double x1, x2, y1;
  double invslope;
} *Shape, ShapeRec;

typedef struct gfiltrec {
  int nshapes;			/* number of shapes */
  int maxshapes;		/* number of shape records we allocate */
  Shape shapes;			/* array holding range limits for one shape */
  int rid;			/* first valid region for current pixel */
  int usebinsiz;		/* whether bindizx,binsizy are used */
  char *evsect;			/* value of event section */
  double tlminx, tlminy;	/* tlmin for event section */
  double binsizx, binsizy;	/* bin sizes for event section */
  double tloff;		        /* offset for quick p2i conversion */
  int xmin, xmax, ymin, ymax;	/* section limits in original image coords */
  int block;			/* block factor */
  int x0, x1, y0, y1;		/* section limits in section coords */
  int *ybuf;			/* valid y row flags */
  int *x0s;			/* valid x start values */
  int *x1s;			/* valid x stop values */
  int nmask;			/* number of image mask record */
  int maskdim;			/* size of mask image */
  FilterMask masks;		/* mask records */
} *GFilt, GFiltRec;

typedef struct filtseg {
  int n;
  int type;
  int ops;
  int len;
  int flag;
  int nregion;
  char *s;
  int s0;
  char *regions;
  int nr;
  char *shapes;
  int ns;
  int regval;
  char *radang;
  int ralen;
} *FiltSeg, FiltSegRec;

/* structs for use with symbol table routines */
typedef struct filtsymtab {
  int type;
  char *name;
  char *value;
  int idx;
  int offset;
  FITSCard card;
} *FilterSymbols, FilterSymRec;

typedef struct filtrec {
  /* general information */
  char *mode;
  char *evsect;
  int method;
  int type;
  int paint;
  int debug;
  /* the input filter string */
  char *string;
  int size;
  /* fits info */
  FITSHead fhd;
  int convert;
  char *xbin;
  char *ybin;
  /* compiled program info */
  char *code;
  char *prog;
  FILE *fp;
  /* symbol table info */
  int maxsyms;
  int nsyms;
  int evsize;
  FilterSymbols symtab;
  /* method info */
  char *cc;
  char *cflags;
  char *objs;
  char *extra;
  char *shflags;
  /* process info */
  char *pname;
  int ptype;
  /* which type of pipe? */
  int pipeos;
  /* used by unix pipe */
  int pid;
  int ichan;
  int ochan;
  /* used by Windows pipe */
  void *process;
  void *ihandle;
  void *ohandle;
  /* used for dynamic linking */
  void *dl;
  GFilt g;
  /* loadable drivers for each technique */
  /* NB: can't use typdef because we refer to this struct */
  int (*filt_start) _PRx((struct filtrec *filter));
  int (*filt_open) _PRx((struct filtrec *filter));
  int (*filt_prepend) _PRx((struct filtrec *filter));
  int (*filt_write) _PRx((struct filtrec *filter));
  int (*filt_append) _PRx((struct filtrec *filter));
  int (*filt_close) _PRx((struct filtrec *filter));
  int (*filt_compile) _PRx((struct filtrec *filter));
  int (*filt_end) _PRx((struct filtrec *filter));
  char *(*filt_name) _PRx((struct filtrec *filter, char *name));
  char *(*filt_routine1) _PRx((struct filtrec *filter, char *name));
  char *(*filt_routine2) _PRx((struct filtrec *filter, char *name));
  char *(*filt_region1) _PRx((struct filtrec *filter, char *name));
  char *(*filt_region2) _PRx((struct filtrec *filter, char *name));
  /* fits image mask info */
  int nmask;
  int nmaskreg;
  FilterMask masks;
  FITSHead   maskhd;
  /* indexing information */
  int doidx;
  idxvalrec *valhead;
  idxrowrec *rowhead;
  idxrowrec *idx;
} *Filter, FilterRec;

typedef void *(*FilterTableCall)(
#ifdef ANSI_FUNC
  void *tg, char *ebuf, int ne, int esize, int *rbuf
#endif
);

typedef FilterMask (*FilterImageCall)(
#ifdef ANSI_FUNC
  int txmin, int txmax, int tymin, int tymax, int tblock, int *got
#endif
);

/* this makes it look like a simple flag */
#define NOFILTER FilterNull()

_PRbeg

/* filter.c */
int FilterNum _PRx((void));
char *FilterClip _PRx((char *filter));
Filter FilterDefault _PRx((void));
Filter FilterNull _PRx((void));
char *FilterPath _PRx((void));
Filter FilterOpen _PRx((FITSHead header, char *filter, char *mode));
int FilterEvents _PRx((Filter filter, 
		       char *ebuf, int esize, int n, int *vbuf));
int FilterImage _PRx((Filter filter,
		      int x0, int x1, int y0, int y1, int block,
		      FilterMask *masks, int *nreg));
int FilterClose _PRx((Filter filter));
char *FilterConcats _PRx((char **filters, int n));
char *FilterConcat _PRx((char *f1, char *f2, char *op));
char *FilterString _PRx((Filter filter));

/* symbols.c */
int FilterSymbolInit _PRx((Filter filter));
char *FilterSymbolEnter _PRx((Filter filter, char *s, int *got));
FilterSymbols FilterSymbolLookup _PRx((Filter filter, char *s));
int FilterSymbolDefaults _PRx((Filter filter, int enter));
void FilterSymbolFree _PRx((Filter filter));

/* filt.l */
char *_FilterString _PRx((void));
void FiltInitParser _PRx((void));
void FiltScanString _PRx((char *s));
int FilterRoutineCount _PRx((void));
int FilterShapeCount _PRx((void));
int FilterRegionCount _PRx((int type));
int  FilterParseError _PRx((void));
int  FilterTlInfo _PRx((double *tlmins, double *binsizs, int *tltyps));
char *FilterRadAng _PRx((void));

int filterror _PRx((char *msg));
int filtlex _PRx((void));
int filtwrap _PRx((void));
int filtparse _PRx((void));

/* filtprog.c */
int FilterProgStart _PRx((Filter filter));
int FilterProgOpen _PRx((Filter filter));
int FilterProgPrepend _PRx((Filter filter));
int FilterProgWrite _PRx((Filter filter));
int FilterProgAppend _PRx((Filter filter));
int FilterProgClose _PRx((Filter filter));
int FilterProgCompile _PRx((Filter filter));
int FilterProgEnd _PRx((Filter filter));
char *FilterLexName _PRx((Filter filter, char *name));
char *FilterLexRoutine1 _PRx((Filter filter, char *name));
char *FilterLexRoutine2 _PRx((Filter filter, char *name));
char *FilterLexRegion1 _PRx((Filter filter, char *name));
char *FilterLexRegion2 _PRx((Filter filter, char *name));

/* filtprog_c.c */
int FilterProgLoad_C _PRx((Filter filter));

/* evregions.c */
void initevregions _PRx((void));
/* imregions.c */
void initimregions _PRx((void));

_PRend

/* for compatibility with funtools */
#define FilterTable FilterEvents

#endif /* __filter.h */
