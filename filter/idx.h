/*
 *	Copyright (c) 2005 Smithsonian Astrophysical Observatory
 */

/*
 *
 * idx.h - include file for indexed filters
 *
 */
#ifndef	__idx_h
#define	__idx_h

#if HAVE_CONFIG_H
#include "conf.h"
#endif
#include "prsetup.h"
#include <stdio.h>
#include <ctype.h>
#ifdef HAVE_UNISTD_H
#include <unistd.h>
#endif
#ifdef HAVE_STRING_H
#include <string.h>
#endif
#include "fitsy.h"
#include "gio.h"
#include "xalloc.h"
#include "strtod.h"

/* binary search edge */
#define IDX_EDGE_LEFT  1
#define IDX_EDGE_RIGHT 2
#define IDX_EDGE_BOTH  (IDX_EDGE_LEFT|IDX_EDGE_RIGHT)

/* type of row record */
#define IDX_ALLROWS	0
#define IDX_INDEF	1
#define IDX_ROW_LIST    2
#define IDX_SORT        3
#define IDX_OR_SORT     4
#define IDX_AND_SORT    5

/* methods of accessing data record */
#define IDX_IO_MMAP	1
#define IDX_IO_LSEEK	2

#ifdef HAVE_SYS_MMAN_H
#define IDX_IO_DEFAULT	IDX_IO_MMAP
#else
#define IDX_IO_DEFAULT	IDX_IO_LSEEK
#endif

/* increment for storing rowlists */
#define IDX_ROW_INC   32

/* sort program */
#define IDX_SORTPROG "_funsort"

/* idxinfo which values */
#define IDX_COLNAME	1
#define IDX_FILENAME	2
#define IDX_FILEROOT1	3
#define IDX_FILEROOT2	4
#define IDX_PATHNAME	5
#define IDX_SORTNAME	6

/* rows can be in memory range lists or file-based row numbers */
typedef struct _idxrowrec{
  struct _idxrowrec *next;
  char *s;
  int type;
  int rtype;
  int dofilt;
  int dosort;
  int rtot;
  int maxrow;
  int nrow;
  int *startrow;
  int *stoprow;
  FILE *ifile;
  int ichan;
  int ochan;
  int pid;
  struct _idxvalrec *v;
  char *fdata;
  int flen;
} idxrowrec;

/* values can be int, float, col, region, func */
typedef struct _idxvalrec{
  struct _idxvalrec *next;
  char *s;
  int type;
  int ntype;
  longlong ival;
  double dval;
  char *iname;
  GIO igio;
  FITSHead ifits;
  int itype;
  int ioffset;
  int in;
  int vtype;
  int voffset;
  int vn;
  int nrow;
  char *idata;
  int ilen;
  struct _idxvalrec *rv[2];
  double rlo[2], rhi[2];
} idxvalrec;

_PRbeg

idxrowrec *idxall _PRx((idxrowrec *row));
idxrowrec *idxor  _PRx((idxrowrec *row1, idxrowrec *row2));
idxrowrec *idxand _PRx((idxrowrec *row1, idxrowrec *row2));
idxrowrec *idxnot _PRx((idxrowrec *row));

idxrowrec *idxrowreg _PRx((idxvalrec *val));
idxrowrec *idxrowfun _PRx((idxvalrec *val));
idxrowrec *idxroweq  _PRx((idxvalrec *val1, idxvalrec *val2));
idxrowrec *idxrowne  _PRx((idxvalrec *val1, idxvalrec *val2));
idxrowrec *idxrowlt  _PRx((idxvalrec *val1, idxvalrec *val2));
idxrowrec *idxrowle  _PRx((idxvalrec *val1, idxvalrec *val2));
idxrowrec *idxrowgt  _PRx((idxvalrec *val1, idxvalrec *val2));
idxrowrec *idxrowge  _PRx((idxvalrec *val1, idxvalrec *val2));
idxrowrec *idxrownot _PRx((idxvalrec *val));

idxvalrec *idxvaladd _PRx((idxvalrec *val1, idxvalrec *val2));

idxvalrec *idxvalsub _PRx((idxvalrec *val1, idxvalrec *val2));
idxvalrec *idxvalmul _PRx((idxvalrec *val1, idxvalrec *val2));
idxvalrec *idxvaldiv _PRx((idxvalrec *val1, idxvalrec *val2));
idxvalrec *idxvalmod _PRx((idxvalrec *val1, idxvalrec *val2));
idxvalrec *idxvaland _PRx((idxvalrec *val1, idxvalrec *val2));
idxvalrec *idxvalor  _PRx((idxvalrec *val1, idxvalrec *val2));
idxvalrec *idxvalxor _PRx((idxvalrec *val1, idxvalrec *val2));
idxvalrec *idxvalnot _PRx((idxvalrec *val));
idxvalrec *idxvalcom _PRx((idxvalrec *val));
idxvalrec *idxvalmin _PRx((idxvalrec *val));

char *idxinfo _PRx((int which));
int idxdebug _PRx((int debug));
idxvalrec *idxvalnew _PRx((char *s));
int idxvalfree _PRx((idxvalrec *v));
idxrowrec *idxrownew _PRx((void));
int idxrowfree _PRx((idxrowrec *r));
int idxinitfilenames _PRx((char *s, int *flag));
char *idxindexfilename _PRx((char *s, int *size));
idxvalrec *idxlookupfilename _PRx((char *iname));
void idxfreefilenames _PRx((void));
void idxfreeglobals _PRx((void));
int idxinitparser _PRx((char *s));
void idxendparser _PRx((void));
void *idxread _PRx((idxrowrec *row, GIO gio, FITSHead fits,
		    void *buf, size_t size, size_t get, size_t *got,
		    int *dofilt));
void idxstring _PRx((char *s));
int idxerror _PRx((char *mmsg));
int idxlex   _PRx((void));
int idxparse _PRx((void));

_PRend

#endif /* __idx.h */
