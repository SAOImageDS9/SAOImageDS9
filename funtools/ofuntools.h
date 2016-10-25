/*
 *	Copyright (c) 1999-2003 Smithsonian Astrophysical Observatory
 */

/*
 *
 * funtools.h
 *
 */

#ifndef	__funtools_h
#define	__funtools_h

/* avoid use of system -- its not secure */
/* but funtools cannot use launch for the Cygwin platform because the stdfiles
   support is missing in the Cygwin implementation of launch */
#ifndef USE_LAUNCH
#define USE_LAUNCH 1
#endif
#if HAVE_CYGWIN
#undef USE_LAUNCH
#endif

#define FUN_MAJOR_VERSION 1
#define FUN_MINOR_VERSION 4
#define FUN_PATCH_LEVEL 6
#define FUN_VERSION "1.4.6"

#ifndef FUNTOOLS_PRIVATE
#include "prsetup.h"
#define USE_XFILEIO 1
#include "fitsy.h"
#undef USE_XFILEIO
#include "wcs.h"
typedef void *Fun;
#endif

/* types of data "files" we know about */
#define FUN_UNKNOWN 0
#define FUN_IMAGE   1
#define FUN_TABLE   2
#define FUN_ARRAY   3
#define FUN_EVENTS  4

/* param types: these more or less match FITSType in fitsy.h */
#define FUN_PAR_UNKNOWN 'u'
#define FUN_PAR_COMMENT 'c'
#define FUN_PAR_LOGICAL 'l'
#define FUN_PAR_INTEGER 'i'
#define FUN_PAR_STRING  's'
#define FUN_PAR_VALUE   'v'
#define FUN_PAR_REAL    'r'
#define FUN_PAR_COMPLEX 'x'

/* column modes and status */
#define COL_ACTIVE	    1
#define COL_IBUF	    2
#define COL_PTR		    4
#define COL_READ	  010
#define COL_WRITE	  020
#define COL_REPLACEME	  040

/* operations we keep track of */
#define OP_WRHEAD	1
#define OP_WRIMAGE	2
#define OP_WRTABLE	3
#define OP_RDIMAGE	4
#define OP_RDTABLE	5

/* to determine the byte offset of a field within a structure type */
#define FUN_OFFSET(p_type,field) \
	((int) (((char *) (&(((p_type)NULL)->field))) - ((char *) NULL)))

/* library declarations */
_PRbeg

/* funopen.c */
Fun  FunOpen _PRx((char *fname, char *mode, Fun copy));
void FunFlush _PRx((Fun fun, char *plist));
void FunClose _PRx((Fun fun));

/* funim.c */
void *FunImageGet _PRx((Fun fun, void *buf, char *plist));
void *FunImageRowGet _PRx((Fun fun, void *buf, 
			   int ystart, int ystop, char *plist));
int  FunImagePut _PRx((Fun fun, void *buf, 
		       int dim1, int dim2, int bitpix, char *plist));
int  FunImageRowPut _PRx((Fun fun, void *buf, int rstart, int rstop,
			  int dim1, int dim2, int bitpix, char *plist));

/* funtab.c */
void *FunTableRowGet _PRx((Fun fun, void *rows, int maxrow,
			   char *plist, int *nrow));
int FunTableRowPut _PRx((Fun fun, void *rows, int nrow,
			 int idx, char *plist));
off_t FunTableRowSeek _PRx((Fun fun, int nrow, char *plist));

/* funcol.c */
void FunColumnActivate _PRx((Fun fun, char *s, char *plist));
int FunColumnSelectArr _PRx((Fun fun, size_t size, char *mode,
			     char **names, char **types, char **modes,
			     int *offsets, int nargs));
#ifdef __STDC__
int FunColumnSelect(Fun fun, size_t size, char *plist, ...);
#else
int FunColumnSelect();
#endif
int FunColumnLookup _PRx((Fun fun, char *s, int which, char **name,
			  int *type, int *plist, int *offset, int *n, 
			  int *width));
int FunColumnLookup2 _PRx((Fun fun, char *s, int which,
			   double *tlmin, double *tlmax,
			   double *binsize, double *tscale, double *tzero));
/* funinfo.c */
#ifdef __STDC__
int FunInfoGet(Fun fun, ...);
int FunInfoPut(Fun fun, ...);
#else
int FunInfoGet();
int FunInfoPut();
#endif
/* funparam.c */
Fun FUN_PRIMARY _PRx((Fun fun));
char *FUN_RAW _PRx((char *name));
int FunParamGetb _PRx((Fun fun, char *name, int n, int defval, int *got));
int FunParamGeti _PRx((Fun fun, char *name, int n, int defval, int *got));
longlong FunParamGetl _PRx((Fun fun, char *name, int n, longlong defval, int *got));
double FunParamGetd _PRx((Fun fun, char *name, int n, double defval, int *got));
char *FunParamGets _PRx((Fun fun, char *name, int n, char *defval, int *got));
int FunParamPutb _PRx((Fun fun, char *name, int n, int value, char *comm,
		       int append));
int FunParamPuti _PRx((Fun fun, char *name, int n, int value, char *comm,
		       int append));
int FunParamPutl _PRx((Fun fun, char *name, int n, longlong value, char *comm,
		       int append));
int FunParamPutd _PRx((Fun fun, char *name, int n, double value,
		       int prec, char *comm, int append));
int FunParamPuts _PRx((Fun fun, char *name, int n, char *value, 
		       char *comm, int append));

/* funcalc.l */
char *FunCalcParse _PRx((char *iname, char *oname,
                         char *cmd, char *expr, char *autod, int args));

/* funwcs.c */
struct WorldCoor *_FunWCS _PRx((Fun fun, int doimage));

/* funutil.c */
int _FunKeyword _PRx((char *buf, char *key, char *env, char *vbuf, int vlen));

/* funtoolsmainlib.c */
void FuntoolsMainLibInit _PRx((void));

_PRend

/* for backward compatibility */
#define FunEventsGet FunTableRowGet
#define FunEventsPut FunTableRowPut

/* the following define for user access to fun record via FunInfo() */
/* file information */
#define FUN_FNAME		1
#define FUN_GIO			2
#define FUN_HEADER		3
#define FUN_TYPE		4
#define FUN_BITPIX		5
#define FUN_MIN1		6
#define FUN_MAX1		7
#define FUN_MIN2		8
#define FUN_MAX2		9
#define FUN_DIM1		10
#define FUN_DIM2		11
#define FUN_ENDIAN		12
#define FUN_FILTER		13
#define FUN_OPS			14
/* image information */
#define FUN_DTYPE		15
#define FUN_DLEN		16
#define FUN_DPAD		17
#define FUN_DOBLANK		18
#define FUN_BLANK		19
#define FUN_SCALED		20
#define FUN_BSCALE		21
#define FUN_BZERO		22
/* table information */
#define FUN_BINCOLS		23
#define FUN_ROWSIZE		24
/* for backward compatiblity */
#define FUN_EVSIZE		24
#define FUN_OVERFLOW		25
/* array information */
#define FUN_SKIP		26
/* reference file */
#define FUN_IFUN		27
#define FUN_BFUN		28
/* section information */
#define FUN_SECT_X0		29
#define FUN_SECT_X1		30
#define FUN_SECT_Y0		31
#define FUN_SECT_Y1		32
#define FUN_SECT_BLOCK		33
#define FUN_SECT_BTYPE		34
#define FUN_SECT_DIM1		35
#define FUN_SECT_DIM2		36
#define FUN_SECT_BITPIX		37
#define FUN_SECT_DTYPE		38
/* convenient ways to get to data in binned images and tables */
#define FUN_RAWBUF		39
#define FUN_RAWSIZE		40
/* specified columns */
#define FUN_NCOL		41
#define FUN_COLS		42
/* hacks: ifun without the reset */
#define FUN_IFUN0		43
/* list information */
#define FUN_LTYPE		44
#define FUN_LMEM		45
#define FUN_HEAD		46
#define FUN_CURRENT		47
#define FUN_MARK		48
#define FUN_NEXT		49
/* WCS */
#define FUN_WCS			50
#define FUN_WCS0		51
/* binning offsets */
#define FUN_BINOFFS		52
/* param modes */
#define FUN_RAWPARAM		53
#define FUN_PRIMARYHEADER	54
/* late additions */
#define FUN_NROWS		55
#define FUN_THEADER		56
#define FUN_VCOLS		57
#define FUN_VFMT		58
#define FUN_ROW			59
#define FUN_DIMS		60
#define FUN_SECT_DIMS		61

#endif /* __funtools.h */

