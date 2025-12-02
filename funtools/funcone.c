/*
 *	Copyright (c) 2005 Smithsonian Astrophysical Observatory
 */

/* code shamelessly ripped off from John Roll's search program in starbase
   (http://cfa-www.harvard.edu/~john/starbase/starbase.html) */

#include <math.h>
/* some experimental black magic in this code requires ... */
#include <funtoolsP.h>
#include <filter.h>
#include <swap.h>
#include <word.h>
#include <xalloc.h>

#define MAXROW 8192
static int maxrow=MAXROW;

extern char *optarg;
extern int optind;

#define RA_DEFAULT  "RA:h"
#define DEC_DEFAULT "DEC:d"

#define RA_DEFAULT_UNITS  "h"
#define DEC_DEFAULT_UNITS "d"
#define RAD_DEFAULT_UNITS "d"

#define RA_NAME		"RA_CEN"
#define DEC_NAME	"DEC_CEN"
#define RAD_NAME	"RAD_CEN"
#define KEY_NAME	"CONE_KEY"

#define RA_FLAG		1
#define DEC_FLAG	2
#define RAD_FLAG	4
#define ALL_FLAG	(RA_FLAG|DEC_FLAG|RAD_FLAG)

#define X__PI   3.14159265358979323846
#define X_2PI   ( 2 * X__PI )
#define X_R2D   (X_2PI / 360.0)
#define X_R2H   (X_2PI /  24.0)
#define X_H2D   (360.0 /  24.0)

#define r2h(r)  ( (r) / X_R2H )
#define h2r(d)  ( (d) * X_R2H )
#define r2d(r)  ( (r) / X_R2D )
#define d2r(d)  ( (d) * X_R2D )
#define h2d(r)  ( (r) * X_H2D )
#define d2h(d)  ( (d) / X_H2D )

#define Abs(xx) 	(((xx) >= 0) ? (xx) : -(xx) )
#define Max(x, y)       (((x) > (y)) ? (x) : (y))

#define MIN_COLS	6

#define ALL_DATA	1
#define ALL_LIST	2
#define ALL_FILT	4
#define ALL_ANY		(ALL_DATA|ALL_LIST)

typedef struct evstruct{
  double val0, val1, val2;
  double ra, dec, rad;
  int key;
  char *row;
} *Ev, EvRec;

typedef struct Value {
  char *colname;
  double val;
  double lo;
  double hi;
  int dtype;
  int offset;
  int n;
} Value;

typedef struct Csys {
  char	type[3];
  Value	value[3];
} Csys;

typedef struct List {
  Fun fun;
  Csys *csys;
  int nline;
  int litflag;
  char *lits[3];
  char *row;
  int rowsize;
  int ncol;
} List;

#ifdef ANSI_FUNC
static void
slaDcs2c(double a, double b, double v[3]) 
#else
static void slaDcs2c(a, b, v) 
     double a;
     double b;
     double v[3];
#endif
{  
   double cosb;
   cosb = cos ( b );
   v[0] = cos ( a ) * cosb;
   v[1] = sin ( a ) * cosb;
   v[2] = sin ( b );
}  

#ifdef ANSI_FUNC
static double
slaDsep(double a1, double b1, double a2, double b2)
#else
static double slaDsep(a1, b1, a2, b2)
     double a1;
     double b1;
     double a2;
     double b2;
#endif
{
   int i;
   double d, v1[3], v2[3], s2, c2;
 
   slaDcs2c ( a1, b1, v1 );
   slaDcs2c ( a2, b2, v2 );
 
   s2 = 0.0;
   for ( i = 0; i < 3; i++ ) {
      d = v1[i] - v2[i];
      s2 += d * d;
   }
   s2 /= 4.0; 
 
   c2 = 1.0 - s2;
   return 2.0 * atan2 ( sqrt ( s2 ), sqrt ( Max ( 0.0, c2 )));
}

#ifdef ANSI_FUNC
static int
ConeFilter(Csys *csys, double val0, double val1)
#else
static int ConeFilter(csys, val0, val1)
     Csys *csys;
     double val0;
     double val1;
#endif
{
  double r1=0.0, r2=0.0, d1=0.0, d2=0.0;
  double radius=0.0;

  switch( csys->type[0] ) {
  case 'h':
    r1 = h2r(csys->value[0].val);
    r2 = h2r(val0);
    break;
  case 'd':
    r1 = d2r(csys->value[0].val);
    r2 = d2r(val0);
    break;
  case 'r':
    r1 = csys->value[0].val;
    r2 = val0;
    break;
  }
  switch( csys->type[1] ) {
  case 'h':
    d1 = h2r(csys->value[1].val);
    d2 = h2r(val1);
    break;
  case 'd':
    d1 = d2r(csys->value[1].val);
    d2 = d2r(val1);
    break;
  case 'r':
    d1 = csys->value[1].val;
    d2 = val1;
    break;
  }
  switch( csys->type[2] ) {
  case 'h':
    radius = h2r(csys->value[2].val);
    break;
  case 'd':
    radius = d2r(csys->value[2].val);
    break;
  case 'r':
    radius = csys->value[2].val;
    break;
  case '\'':
    radius = d2r(csys->value[2].val/60.0);
    break;
  case '"':
    radius = d2r(csys->value[2].val/3600.0);
    break;
  }

  /* check angular separation */
  if ( slaDsep(r1, d1, r2, d2) <= radius )
    return 1;
  else
    return 0;
}

#ifdef ANSI_FUNC
static void 
radecbox(double ra, double dec, double width, 
	 double *r1, double *r2, double *d1, double *d2)
#else
static void radecbox(ra, dec, width, r1, r2, d1, d2)
     double	ra;
     double	dec;
     double	width;
     double	*r1, *r2, *d1, *d2;
#endif
{
  double	cosdec;

  *d1 = dec - width / 2.0;
  if ( *d1 <= -90.0 ) {
    *d1 = -90.0;
    *d2 = dec + width / 2.0;
    *r1 =  0.0;
    *r2 = 24.0;
  } else {
    *d2 = dec + width / 2.0;
    if ( *d2 >=  90.0 ) {
      *d1 = dec - width / 2.0;
      *d2 = 90.0;
      *r1  = 0.0;
      *r2  = 24.0;
    } else {
      if ( dec > 0.0 )	cosdec = Abs(cos(d2r(*d1)));
      else		cosdec = Abs(cos(d2r(*d2)));
      
      *r1 = ra - d2h(width) / 2 / cosdec;
      *r2 = ra + d2h(width) / 2 / cosdec;
      
      if ( *r1 <  0.0 ) *r1 += 24;
      if ( *r2 > 24.0 ) *r2 -= 24;
    }
  }
}

#ifdef ANSI_FUNC
static void
ConeLimits(Csys *csys, char *rastr, char *decstr, char *radstr)
#else
static void ConeLimits(csys, rastr, decstr, radstr)
     Csys *csys;
     char *rastr;
     char *decstr;
     char *radstr;
#endif
{
  int xtype=0;
  char *p=NULL;
  double dval=0.0;
  double ra=0.0, dec=0.0, radius=0.0;
  double r0=0.0, r1=0.0, d0=0.0, d1=0.0;

  /* Input units conversion. */
  /* process input ra */
  dval = SAOstrtod(rastr, &p);
  if( rastr == p )
    gerror(stderr, "invalid RA value: '%s' (columns go with -l list)\n",
	   rastr);
  xtype = *p;
  if( (xtype != 'h') && (xtype != 'd') && (xtype != 'r') ) {
    if( SAOdtype == 'd' )
      xtype = 'd';
    else
      xtype = 'h';
  }
  switch( xtype ) {
  case 'h':
    ra = dval;
    break;
  case 'd':
    ra = d2h(dval);
    break;
  case 'r':
    ra = r2h(dval);
    break;
  }

  /* process input dec */
  dval = SAOstrtod(decstr, &p);
  if( decstr == p )
    gerror(stderr, "invalid Dec value: '%s' (columns go with -l list)\n",
	   decstr);
  xtype = *p;
  if( (xtype != 'h') && (xtype != 'd') && (xtype != 'r') ) {
    if( SAOdtype == 'h' )
      xtype = 'h';
    else
      xtype = 'd';
  }
  switch( xtype ) {
  case 'h':
    dec = h2d(dval);
    break;
  case 'd':
    dec = dval;
    break;
  case 'r':
    dec = r2d(dval);
    break;
  }

  /* process input radius */
  dval = SAOstrtod(radstr, &p);
  if( radstr == p )
    gerror(stderr, "invalid radius value: '%s'(columns go with -l list)\n",
	   radstr);
  xtype = *p;
  if( (xtype != 'h')  && (xtype != 'd') && (xtype != 'r') &&
      (xtype != '\'') && (xtype != '"') ){
    if( SAOdtype == 'h' )
      xtype = 'h';
    else
      xtype = 'd';
  }
  switch( xtype ) {
  case 'h':
    radius = h2d(dval);
    break;
  case 'd':
    radius = dval;
    break;
  case 'r':
    radius = r2d(dval);
    break;
  case '\'':
    radius = dval/60.0;
    break;
  case '"':
    radius = dval/3600.0;
    break;
  default:
    radius = dval;
    break;
  }

  /* calculate box limits, units in degrees */
  radecbox(ra, dec, radius*2, &r0, &r1, &d0, &d1);

  /* Output units conversion  */
  switch( csys->type[0] ) {
  case 'h': 
    csys->value[0].val =    ra;
    csys->value[0].lo =     r0;
    csys->value[0].hi =     r1;
    break;
  case 'd':
    csys->value[0].val = h2d(ra);
    csys->value[0].lo = h2d(r0);
    csys->value[0].hi = h2d(r1);
    break;
  case 'r':
    csys->value[0].val = h2r(ra);
    csys->value[0].lo = h2r(r0);
    csys->value[0].hi = h2r(r1);
    break;
  }
  switch( csys->type[1] ) {
  case 'h':
    csys->value[1].val = d2h(dec);
    csys->value[1].lo = d2h(d0);
    csys->value[1].hi = d2h(d1);
    break;
  case 'd':
    csys->value[1].val =    dec;
    csys->value[1].lo =     d0;
    csys->value[1].hi =     d1;
    break;
  case 'r':
    csys->value[1].val = d2r(dec);
    csys->value[1].lo = d2r(d0);
    csys->value[1].hi = d2r(d1);
    break;
  }
  csys->type[2] = xtype;
  csys->value[2].val = dval;
#ifdef FOO
  /* force separation to be in radians, as needed by angular sep code */
  csys->type[2] = 'r';
  csys->value[2].val = d2r(radius);
#endif
}

#ifdef ANSI_FUNC
static char *
ColumnName(Fun fun, char *def)
#else
static char *ColumnName(fun, def)
     Fun fun;
     char *def;
#endif
{
  int i;
  char tbuf[SZ_LINE];

  /* sanity check */
  if( !def || !*def ) return NULL;

  /* see if default is available */
  if( !FunColumnLookup(fun, def, 0, NULL, NULL, NULL, NULL, NULL, NULL) ){
    return xstrdup(def);
  }
  /* add numeric until a column name is available */
  else{
    i = 2;
    while( 1 ){
      snprintf(tbuf, SZ_LINE-1, "%s_%d", def, i);
      if( !FunColumnLookup(fun, tbuf, 0, NULL, NULL, NULL, NULL, NULL, NULL) ){
	return xstrdup(tbuf);
      }
    }
  }
}

#ifdef ANSI_FUNC
static int
ColumnInfo(Csys *csys, char *colstr[], int flag)
#else
  static int ColumnInfo(csys, colstr, flag)
     Csys *csys;
     char *colstr[];
     int flag;
#endif
{
  int i;
  int ip;
  int got=0;
  char tbuf[SZ_LINE];
  char tbuf2[SZ_LINE];

  newdtable(":");
  for(i=0; i<3; i++){
    /* flag tells which of the three possible inputs to check */
    if( ((1<<i)&flag) == 0 ) continue;
    ip = 0;
    /* name of column */
    if( !word(colstr[i], tbuf, &ip) ){
      gerror(stderr, "invalid column #%d specification\n", i+1);
      goto done;
    }
    /* units */
    if( !word(colstr[i], tbuf2, &ip) ){
      switch(i){
      case 0:
	strcpy(tbuf2, RA_DEFAULT_UNITS);
	break;
      case 1:
	strcpy(tbuf2, DEC_DEFAULT_UNITS);
	break;
      case 2:
	strcpy(tbuf2, RAD_DEFAULT_UNITS);
	break;
      default:
	gerror(stderr, "internal funcone error: bad iter %d\n", i);
	break;
      }
    }
    else{
      /* quotes get handled as delimiters, so look for them here */
      if( i == 2 ){
	if( !*tbuf2 && (lastdelim() == '"' ) ){
	  strcpy(tbuf2, "\"");
	}
	else if( !*tbuf2 && (lastdelim() == '\'' ) ){
	  strcpy(tbuf2, "'");
	}
      }
    }
    /* column info */
    csys->value[i].colname = xstrdup(tbuf);
    switch(*tbuf2){
    case 'h':
      csys->type[i] = 'h';
      break;
    case 'd':
      csys->type[i] = 'd';
      break;
    case 'r':
      csys->type[i] = 'r';
      break;
    default:
      /* additional units for radius values */
      if( i == 2 ){
	switch(*tbuf2){
	case '\'':
	  csys->type[i] = '\'';
	  break;
	case '"':
	  csys->type[i] = '"';
	  break;
	default:
	  gerror(stderr,
		 "invalid units specification '%s' for %s\n", tbuf2, tbuf);
	  goto done;
	}
      }
      else{
	gerror(stderr,
	       "invalid units specification '%s' for %s\n", tbuf2, tbuf);
	goto done;
      }
    }
  }
  got = 1;

done:
  freedtable();
  return got;
}

#ifdef ANSI_FUNC
static double
DConvert (char *buf, int type, int offset, int n)
#else
static double
DConvert(buf, type, offset, n)
     char *buf;
     int type;
     int offset;
     int n;
#endif
{
  int ival;
  double dval;

  switch(type){
  case 'X':
    if( n == 16 )
      dval = (double)*(unsigned short *)(buf+offset);
    else if( n == 32 )
      dval = (double)*(unsigned int *)(buf+offset);
    else
      dval = (double)*(unsigned char *)(buf+offset);
    break;
  case 'B':
    dval = (double)*(unsigned char *)(buf+offset);
    break;
  case 'I':
   dval = (double)*(short *)(buf+offset);
   break;
  case 'U':
    dval = (double)*(unsigned short *)(buf+offset);
    break;
  case 'J':
    dval = (double)*(int *)(buf+offset);
    break;
  case 'K':
#if HAVE_LONG_LONG == 0
    gerror(stderr, 
	   "64-bit data support not built (long long not available)\n");
#endif
    dval = (double)*(longlong *)(buf+offset);
    break;
  case 'V':
    dval = (double)*(unsigned int *)(buf+offset);
    break;
  case 'E':
    dval = (double)*(float *)(buf+offset);
    break;
  case 'D':
    dval = *(double *)(buf+offset);
    break;
  case 'L':
    ival = (int)*(unsigned char *)(buf+offset);
    if( !ival || (ival == 'F') || (ival == 'f') )
      dval = 0.0;
    else
      dval = 1.0;
    break;
  default:
    dval = 0.0;
    break;
  }
  return dval;
}

#ifdef ANSI_FUNC
static void
CloseList(List *list)
#else
static void CloseList(List *list)
     char *s;
#endif
{
  int i;
  /* sanity check */
  if( !list ) return;
  if( list->fun ) FunClose(list->fun);
  /* free up memory */
  if( list->row ){
    xfree(list->row);
    list->row=NULL;
  }
  for(i=0; i<3; i++){
    if( list->lits[i] ) xfree(list->lits[i]);
  }
  if( list->csys ){
    for(i=0; i<3; i++){
      if( list->csys->value[i].colname ) xfree(list->csys->value[i].colname);
    }
    xfree(list->csys);
  }
  xfree(list);
}

#ifdef ANSI_FUNC
static List *
OpenList(char *lname, char *rastr, char *decstr, char *radstr)
#else
static List *OpenList(lname, rastr, decstr, radstr)
     char *lname;
     char *rastr;
     char *decstr;
     char *radstr;
#endif
{
  char *colstr[3];
  char tbuf[SZ_LINE];
  char *p;
  int flag=0;
  List *list;

  /* allocate list struct */
  if( !(list = (List *)xcalloc(sizeof(List), 1)) ){
    gerror(stderr, "can't allocate list record\n");
    return NULL;
  }
  if( !(list->csys = (Csys *)xcalloc(sizeof(Csys), 1)) ){
    CloseList(list);
    gerror(stderr, "can't allocate list coordinate system record\n");
    return NULL;
  }
  /* open list file */
  if( !(list->fun = FunOpen(lname, "r", NULL)) ){
    CloseList(list);
    gerror(stderr, "can't FunOpen list file: %s\n", lname);
    return NULL;
  }
  /* look for literal numeric values (columns can't start with a number) */
  (void)strtod(rastr, &p);
  if( p != rastr ){
    list->lits[0] = xstrdup(rastr);
    list->litflag |= RA_FLAG;
  }
  else{
    flag |= RA_FLAG;
    colstr[0] = rastr;
  }
  (void)strtod(decstr, &p);
  if( p != decstr ){
    list->lits[1] = xstrdup(decstr);
    list->litflag |= DEC_FLAG;
  }
  else{
    flag |= DEC_FLAG;
    colstr[1] = decstr;
  }
  (void)strtod(radstr, &p);
  if( p != radstr ){
    list->lits[2] = xstrdup(radstr);
    list->litflag |= RAD_FLAG;
  }
  else{
    flag |= RAD_FLAG;
    colstr[2] = radstr;
  }
  /* look for column info as needed */
  if( flag ){
    if( ColumnInfo(list->csys, colstr, flag) ){
      if( flag & RA_FLAG ){
	if( !FunColumnLookup(list->fun, list->csys->value[0].colname, 0,
			     NULL, 
			     &(list->csys->value[0].dtype),
			     NULL,
			     &(list->csys->value[0].offset),
			     &(list->csys->value[0].n),
			     NULL) ){
	  strncpy(tbuf, list->csys->value[0].colname, SZ_LINE-1);
	  CloseList(list);
	  gerror(stderr, "can't get column info for: %s\n", tbuf);
	  return NULL;
	}
      }
      if( flag & DEC_FLAG ){
	if( !FunColumnLookup(list->fun, list->csys->value[1].colname, 0,
			     NULL, 
			     &(list->csys->value[1].dtype),
			     NULL,
			     &(list->csys->value[1].offset),
			     &(list->csys->value[1].n),
			     NULL) ){
	  strncpy(tbuf, list->csys->value[0].colname, SZ_LINE-1);
	  CloseList(list);
	  gerror(stderr, "can't get column info for: %s\n", tbuf);
	  return NULL;
	}
      }
      if( flag & RAD_FLAG ){
	if( !FunColumnLookup(list->fun, list->csys->value[2].colname, 0,
			     NULL, 
			     &(list->csys->value[2].dtype),
			     NULL,
			     &(list->csys->value[2].offset),
			     &(list->csys->value[2].n),
			     NULL) ){
	  strncpy(tbuf, list->csys->value[0].colname, SZ_LINE-1);
	  CloseList(list);
	  gerror(stderr, "can't get column info for: %s\n", tbuf);
	  return NULL;
	}
      }
    }
    else{
      CloseList(list);
      gerror(stderr, "can't get column info for list: %s %s\n",
	     colstr[0], colstr[1]);
      return NULL;
    }
  }
  return list;
}

#ifdef ANSI_FUNC
static int 
NextList(List *list, char *rastr, char *decstr, char *radstr, int maxlen)
#else
static int NextList(list, rastr, decstr, radstr, maxlen)
     List *list;
     char *rastr;
     char *decstr;
     char *radstr;
     int maxlen;
#endif
{
  int got;

  /* sanity check */
  if( !list ) return 0;

  /* clean up from previous */
  if( list->row ){
    xfree(list->row);
    list->row=NULL;
  }

  /* if we have all literal values, end after one line */
  if( (list->litflag == ALL_FLAG) && (list->nline) ) return 0;

  /* read next record and exit on EOF */
  if( !(list->row=FunTableRowGet(list->fun, NULL, 1, NULL, &got)) || !got)
    return 0;

  /* ra */
  if( list->lits[0] )
    strncpy(rastr, list->lits[0], maxlen-1);
  else
    snprintf(rastr, SZ_LINE-1, "%15.10f%c", 
	     DConvert(list->row, 
		      list->csys->value[0].dtype,
		      list->csys->value[0].offset,
		      list->csys->value[0].n),
	     list->csys->type[0]);
  /* dec */
  if( list->lits[1] )
    strncpy(decstr, list->lits[1], maxlen-1);
  else
    snprintf(decstr, SZ_LINE-1, "%15.10f%c", 
	     DConvert(list->row, 
		      list->csys->value[1].dtype,
		      list->csys->value[1].offset,
		      list->csys->value[1].n),
	     list->csys->type[1]);
  /* radius */
  if( list->lits[2] )
    strncpy(radstr, list->lits[2], maxlen-1);
  else
    snprintf(radstr, SZ_LINE-1, "%15.10f%c", 
	     DConvert(list->row, 
		      list->csys->value[2].dtype,
		      list->csys->value[2].offset,
		      list->csys->value[2].n),
	     list->csys->type[2]);

  /* got another line */
  list->nline++;
  /* return line number */
  return list->nline;
}

#ifdef ANSI_FUNC
static int FilterSpec(Csys *csys, char *filter, int maxlen)
#else
static int FilterSpec(csys, filter, maxlen)
     Csys *csys;
     char *filter;
     int maxlen;
#endif
{
  int i, j;
  char tbuf[SZ_LINE];

  /* sanity check */
  if( !csys ) return 0;

  /* this is the indexed filter */
  if( csys->value[0].lo < csys->value[0].hi ){
    snprintf(filter, maxlen-1, "%s=%15.10f:%15.10f&&",
	     csys->value[0].colname, csys->value[0].lo, csys->value[0].hi);
  }
  else{
    snprintf(filter, maxlen-1, "(%s>=%15.10f||%s<=%15.10f)&&",
	     csys->value[0].colname, csys->value[0].lo, 
	     csys->value[0].colname, csys->value[0].hi);
  }
  if( csys->value[1].lo < csys->value[1].hi ){
    snprintf(tbuf, SZ_LINE-1, "%s=%15.10f:%15.10f",
	     csys->value[1].colname, csys->value[1].lo, csys->value[1].hi);
  }
  else{
    snprintf(tbuf, SZ_LINE-1, "(%s>=%15.10f||%s<=%15.10f)",
	     csys->value[1].colname, csys->value[1].lo, 
	     csys->value[1].colname, csys->value[1].hi);
  }
  strncat(filter, tbuf, maxlen-1);

  /* remove spaces (avoid old bug in filter range lists) */
  for(i=0, j=0; filter[i]; i++){
    if( filter[i] != ' ' ){
      filter[j++] = filter[i];
    }
  }

  filter[j] = '\0';
  return 1;
}

#ifdef ANSI_FUNC
static void
usage (char *pname)
#else
static void usage(pname)
     char *pname;
#endif
{
  fprintf(stderr,
         "usage: %s <switches> iname oname ra[hdr] dec[hdr] radius[dr\"'] [columns [listcols]]\n",
	 pname);
  fprintf(stderr, "\n");
  fprintf(stderr, "  iname:  input FITS file name\n");
  fprintf(stderr, "  oname:  output FITS file name\n");
  fprintf(stderr, "  ra:     RA center position, optional units (def: hours)\n");
  fprintf(stderr, "  dec:    Dec center position, optional units (def: degrees)\n");
  fprintf(stderr, "  radius: Search radius, optional units (def: degrees)\n");
  fprintf(stderr, "  columns: optional columns to output\n");
  fprintf(stderr, "\n");
  fprintf(stderr, "optional switches:\n");
  fprintf(stderr, "\n");
  fprintf(stderr, "  -d deccol:[hdr]  # Dec column name, units (def: DEC:d)\n");
  fprintf(stderr, "  -j               # join columns from list file\n");
  fprintf(stderr, "  -J               # join columns from list file, output all rows\n");
  fprintf(stderr, "  -l listfile      # read centers and radii from a list\n");
  fprintf(stderr, "  -L listfile      # read centers and radii from a list, output list rows\n");
  fprintf(stderr, "  -n               # don't use cone limits as a filter\n");
  fprintf(stderr, "  -r  racol:[hdr]  # RA column name, units (def: RA:h)\n");
  fprintf(stderr, "  -x               # append RA_CEN, DEC_CEN, RAD_CEN, KEY cols\n");
  fprintf(stderr, "  -X               # append RA_CEN, DEC_CEN, RAD_CEN, KEY cols, output all rows\n");
  fprintf(stderr, "\n");
  fprintf(stderr, "The default units for input center and radius are:\n");
  fprintf(stderr, " ra:hours, dec:degrees, radius: degrees.\n");
  fprintf(stderr, "Sexagesimal notation is supported.\n");
  fprintf(stderr, "\n");
  fprintf(stderr, "If a list is specified, then the ra, dec, and radius\n");
  fprintf(stderr, "can be a list column name or numeric value. Col name\n");
  fprintf(stderr, "specifiers support the :hdr suffix.\n");
  fprintf(stderr, "\n");
  fprintf(stderr, "The -n switch can speed up processing of small tables\n");
  fprintf(stderr, "by skipping the overhead associated with filtering on\n");
  fprintf(stderr, "the cone limits.\n");
  fprintf(stderr, "\n");
  fprintf(stderr, "examples:\n");
  fprintf(stderr, "\n");
  fprintf(stderr, "# defaults: RA col in hours, DEC col in degrees\n");
  fprintf(stderr, "#           RA pos in hours, DEC pos and radius in degrees\n");
  fprintf(stderr, "%s in.fits out.fits 23.45 34.56 0.01\n",
	  pname);
  fprintf(stderr, "# defaults, but with RA position in degrees:\n");
  fprintf(stderr, "%s in.fits out.fits 23.45d 34.56 0.01\n",
	  pname);
  fprintf(stderr, "# user specified columns in degrees\n");
  fprintf(stderr, "# RA pos in hms, DEC pos in dms, radius in arcmin:\n");
  fprintf(stderr, "%s -r myRa:d -d myDec in.fits out.fits 12:30:15.5 30:12 15'\n",
	  pname);
  fprintf(stderr, "# take positions from rax and decx columns in a FITS table\n");
  fprintf(stderr, "# and join columns from list to output\n");
  fprintf(stderr, "%s -j -l lst.fits in.fits out.fits 'rax:d' 'decx:d' '0.003:d'\n",
	  pname);
  fprintf(stderr, "\n(version: %s)\n", FUN_VERSION);
  exit(1);
}

#ifdef ANSI_FUNC
int 
main (int argc, char **argv)
#else
int
main(argc, argv)
     int argc;
     char **argv;
#endif
{
  int c;
  int i;
  int got;
  int total;
  int rawsize;
  int havefilt=0;
  int debug=0;
  int args=0;
  int ioff=0;
  int dolist=0;
  int dolimfilt=1;
  int dojoin=0;
  int doall=0;
  int iter=0;
  int irow=0;
  int ncol=0;
  int nrow=0;
  int *rbuf=NULL;
  int *offsets=NULL;
  int ltype, lmode, loffset, ln, lwidth;
  size_t tsize=0;
  char *s;
  char *rawbuf;
  char *adbuf=NULL;
  char *albuf=NULL;
  char *iname=NULL;
  char *oname=NULL;
  char *lname=NULL;
  char *xmode=NULL;
  char *xmode2=NULL;
  char *raname=NULL;
  char *decname=NULL;
  char *radname=NULL;
  char *keyname=NULL;
  char *actcols=NULL;
  char *lcol=NULL;
  char *params="merge=update";
  char *colstr[2];
  char filter[SZ_LINE];
  char rastr[SZ_LINE];
  char decstr[SZ_LINE];
  char radstr[SZ_LINE];
  char mode[SZ_LINE];
  char tbuf[SZ_LINE];
  char **names=NULL;
  char **types=NULL;
  char **modes=NULL;
  Fun fun, ofun;
  Csys *csys=NULL;
  List *list=NULL;
  Filter filt=NULL;
  FITSHead header=NULL;  
  Ev ev=NULL, ebuf=NULL;
  
  /* exit on gio errors */
  if( !getenv("GERROR")  )
    setgerror(2);
  
  /* initialize names of columns */
  colstr[0]=RA_DEFAULT;
  colstr[1]=DEC_DEFAULT;

  /* we want the args in the same order in which they arrived, and
     gnu getopt sometimes changes things without this */
  putenv("POSIXLY_CORRECT=true");

  /* process switch arguments */
  while ((c = getopt(argc, argv, "Dd:jJl:L:nr:xX")) != -1){
    switch(c){
    case 'D':
      debug = 1;
      break;
    case 'd':
      colstr[1] = optarg;
      break;
    case 'J':
      doall |= ALL_DATA;
      /* drop through */
    case 'j':
      dojoin = 1;
      break;
    case 'L':
      dojoin = 1;
      doall |= ALL_LIST;
      /* drop through */
    case 'l':
      dolist=1;
      lname = optarg;
      break;
    case 'n':
      dolimfilt = 0;
      break;
    case 'r':
      colstr[0] = optarg;
      break;
    case 'X':
      doall |= ALL_DATA;
      /* drop through */
    case 'x':
      xmode="w";
      break;
    }
  }

  /* get maxrow,if user-specified */
  if( (s=getenv("FUN_MAXROW")) != NULL )
    maxrow = atoi(s);

  /* check for required arguments */
  args = argc - optind;
  if( args < 5 ) usage(argv[0]);

  /* get required arguments */
  iname = xstrdup(argv[optind+ioff++]);
  oname = xstrdup(argv[optind+ioff++]);
  strncpy(rastr,  argv[optind+ioff++], SZ_LINE-1);
  strncpy(decstr, argv[optind+ioff++], SZ_LINE-1);
  strncpy(radstr, argv[optind+ioff++], SZ_LINE-1);

  /* dolimfilt does not work with doall */
  if( doall ) dolimfilt = 0;

  /* process list arguments */
  if( dolist ){
    if( !(list=OpenList(lname, rastr, decstr, radstr)) ){
      gerror(stderr, "can't FunOpen list file: %s\n", lname);
    }
    if( doall & ALL_LIST ){
      FunInfoGet(list->fun, FUN_NROWS, &nrow, 0);
      if( !(albuf=xcalloc(nrow+1, sizeof(char))) ){
	gerror(stderr, "can't allocate all (-L) buffer of size %d\n", nrow);
      }
    }
  }
  if( debug ) fprintf(stderr, "input file: %s\n", iname);

  if( !(csys = (Csys *)xcalloc(sizeof(Csys), 1)) ){
    gerror(stderr, "can't allocate coordinate system record\n");
    exit(1);
  }

  /* get information for the ra, dec columns */
  if( !ColumnInfo(csys, colstr, (RA_FLAG|DEC_FLAG)) ){
    gerror(stderr, "can't get column info for: %s %s\n",
	   colstr[0], colstr[1]);
    exit(1);
  }

  /* open input file */
  if( !(fun = FunOpen(iname, "rc", NULL)) ){
    gerror(stderr, "can't FunOpen input file (or find extension): %s\n",
	   iname);
  }

  /* consistency checks */
  if( dojoin && !dolist ){
    gerror(stderr, "join (-j) requires a list (-l listfile)\n");
  }
  if( dojoin && xmode ){
    gerror(stderr, "join (-j) and column output (-x) together are redundant\n");
  }

  /* get fitsy header */
  FunInfoGet(fun, FUN_HEADER, &header, 0);

  /* allocate buffer to hold flags for data rows that were written out */
  if( doall ){
    FunInfoGet(fun, FUN_NROWS, &nrow, 0);
    if( !(adbuf=xcalloc(nrow+1, sizeof(char))) ){
      gerror(stderr, "can't allocate all (-J|-X) buffer of size %d\n", nrow);
    }
    /* must read one event at a time, or else we can't tell the event num */
    maxrow = 1;
  }

  /* activate columns specified by user, if necessary */
  if( args >= ioff ) actcols = argv[optind+ioff++];
  FunColumnActivate(fun, actcols, NULL);
  if( dolist ){
    if( args >= ioff ) actcols = argv[optind+ioff++];
    FunColumnActivate(list->fun, actcols, NULL);
  }

  /* make sure columns are in the table */
  for(i=0; i<2; i++){
    if( !FunColumnLookup(fun, csys->value[i].colname, 0,
			 NULL, NULL, NULL, NULL, NULL, NULL) ){
      gerror(stderr, "column '%s' not found in data file\n", 
	     csys->value[i].colname);
    }
  }

  /* open output file */
  if( !(ofun = FunOpen(oname, "w", fun)) ){
    gerror(stderr, "can't FunOpen output file: %s\n", oname);
  }

  /* set up xmode variables */
  if( xmode ){
    /* look for xmode column names not already in the input file */
    raname  = ColumnName(fun, RA_NAME);
    decname = ColumnName(fun, DEC_NAME);
    radname = ColumnName(fun, RAD_NAME);
    keyname = ColumnName(fun, KEY_NAME);
    
    /* might have to set xmode2 (the mode for key) */
    if( dolist ) xmode2 = "w";
  }
  if( dojoin ){
    keyname = ColumnName(fun, KEY_NAME);
  }

  /* get list info needed for join */
  if( dojoin ){
    FunInfoGet(list->fun,
	       FUN_ROWSIZE, &(list->rowsize), FUN_NCOL, &(list->ncol), 0);
  }

  /* allocate space for the max number of columns we can have */
  if( dojoin ){
    names = (char **)xcalloc(list->ncol+MIN_COLS, sizeof(char *));
    types = (char **)xcalloc(list->ncol+MIN_COLS, sizeof(char *));
    modes = (char **)xcalloc(list->ncol+MIN_COLS, sizeof(char *));
    offsets = (int *)xcalloc(list->ncol+MIN_COLS, sizeof(int));
  }
  else{
    names = (char **)xcalloc(MIN_COLS, sizeof(char *));
    types = (char **)xcalloc(MIN_COLS, sizeof(char *));
    modes = (char **)xcalloc(MIN_COLS, sizeof(char *));
    offsets = (int *)xcalloc(MIN_COLS, sizeof(int));
  }

  /* total sizeof of an input event record */
  tsize = sizeof(EvRec);

  /* input columns */
  names[ncol] = xstrdup(csys->value[0].colname);
  types[ncol] = xstrdup("D");
  modes[ncol] = "r";
  offsets[ncol] = FUN_OFFSET(Ev, val0);
  ncol++;

  names[ncol] = xstrdup(csys->value[1].colname);
  types[ncol] = xstrdup("D");
  modes[ncol] = "r";
  offsets[ncol] = FUN_OFFSET(Ev, val1);
  ncol++;

  if( dojoin ){
    for(i=0; i<list->ncol; i++){
      if( !FunColumnLookup(list->fun, NULL, i,
			   &lcol,
			   &ltype,
			   &lmode,
			   &loffset,
			   &ln,
			   &lwidth) ){
	gerror(stderr, "can't find column %d in list file\n", i);
      }
      /* skip columns that are not active */
      if( !(lmode & COL_ACTIVE) ) continue;
      names[ncol] = ColumnName(fun, lcol);
      snprintf(tbuf, SZ_LINE-1, "@%d%c[B%d]", ln, ltype, loffset);
      types[ncol] = xstrdup(tbuf);
      modes[ncol] = "w";
      offsets[ncol] = FUN_OFFSET(Ev, row);
      ncol++;
    }
    names[ncol] = xstrdup(keyname);
    types[ncol] = xstrdup("J");
    modes[ncol] = "w";
    offsets[ncol] = FUN_OFFSET(Ev, key);
    ncol++;
  }
  else{
    /* output columns (aside from the catalog columns) */
    if( xmode ){
      names[ncol] = xstrdup(raname);
      types[ncol] = xstrdup("D");
      modes[ncol] = xmode;
      offsets[ncol] = FUN_OFFSET(Ev, ra);
      ncol++;

      names[ncol] = xstrdup(decname);
      types[ncol] = xstrdup("D");
      modes[ncol] = xmode;
      offsets[ncol] = FUN_OFFSET(Ev, dec);
      ncol++;

      names[ncol] = xstrdup(radname);
      types[ncol] = xstrdup("D");
      modes[ncol] = xmode;
      offsets[ncol] = FUN_OFFSET(Ev, rad);
      ncol++;
    }
    if( xmode2 ){
      names[ncol] = xstrdup(keyname);
      types[ncol] = xstrdup("J");
      modes[ncol] = xmode;
      offsets[ncol] = FUN_OFFSET(Ev, key);
      ncol++;
    }
  }

  /* reallocate output column array to correct size */
  names = (char **)xrealloc(names, ncol*sizeof(char *));
  types = (char **)xrealloc(types, ncol*sizeof(char *));
  modes = (char **)xrealloc(modes, ncol*sizeof(char *));
  offsets = (int *)xrealloc(offsets, ncol*sizeof(int));

  /* set up the output columns */
  FunColumnSelectArr(fun, tsize, params, names, types, modes, offsets, ncol);

  /* loop starts here. get next ra, dec, rad value and process events */
loop:
  iter++;
  if( dolist && !NextList(list, rastr, decstr, radstr, SZ_LINE) ) goto done;

  /* calculate limits from ra, dec, and radius */
  ConeLimits(csys, rastr, decstr, radstr);

  /* get indexed filter specification */
  if( !FilterSpec(csys, filter, SZ_LINE) ){
    gerror(stderr, "can't get filter specification\n");
  }

  if( debug ){
    fprintf(stderr, "ra,dec,rad(%d): %s,%s,%s\nfilter: %s\n",
	    iter, rastr, decstr, radstr, filter);
  }

  /* black magic: combine main filter with cone limits filter */
  if( dolimfilt ){
    /* only use index filter if main allowed it */
    if( fun->idx == 1 ){
      strncpy(mode, ",idx=true", SZ_LINE-1);
    }
    else if( fun->idx == -1 ){
      strncpy(mode, ",idx=false", SZ_LINE-1);
    }
    /* open the cone limits filter */
    filt = FilterOpen(header, filter, mode);
    /* read zero events from main to start up the main filter */
    FunTableRowGet(fun, NULL, 0, NULL, &got);
    /* if the main filter exists ... */
    if( fun->filt && (fun->filt != NOFILTER) ){
      /* if joining, we must process rows specially with a main filter */
      if( doall ){
	doall |= ALL_FILT;
	maxrow = 1;
      }
      /* splice in the index, if it exists */
      if( filt->idx ){
	fun->filt->doidx = filt->doidx;
	fun->filt->valhead = filt->valhead;
	fun->filt->rowhead = filt->rowhead;
	fun->filt->idx = filt->idx;
	fun->filt->idx->dofilt = 1;
	/* clear index in limits filter, so we don't free it twice */
	filt->doidx = 0;
	filt->valhead = NULL;
	filt->rowhead = NULL;
	filt->idx = NULL;
	havefilt = 1;
      }
      /* otherwise we will filter a second time */
      else{
	havefilt = 2;
      }
    }
    /* if no main filter exists, use the entire cone limits filter */
    else{
      fun->filt = filt;
      havefilt = 0;
    }
  }

  /* process events */
  total=0;
  while( 1 ){
    if( doall ) FunInfoGet(fun, FUN_ROW, &irow, 0);
    if( !(ebuf = (Ev)FunTableRowGet(fun, NULL, maxrow, NULL, &got)) )
      break;
    /* perform explicit cone limit filter, if necessary */
    if( havefilt == 2 ){
      if( !rbuf ) rbuf = xmalloc(maxrow*sizeof(int));
      /* get pointer to raw buffer */
      FunInfoGet(fun, FUN_RAWBUF, &rawbuf, FUN_RAWSIZE, &rawsize, 0);
      FilterEvents(filt, rawbuf, rawsize, got, rbuf);
    }
    /* process all rows */
    for(i=0; i<got; i++){
      /* check limit filter explicitly, if necessary */
      if( (havefilt==2) && (rbuf[i]==0) ) continue;
      /* point to the i'th row */
      ev = ebuf+i;
      /* is this event within the cone? */
      if( ConeFilter(csys, ev->val0, ev->val1) ){
	/* yes, add extra values if necessary */
	if( xmode ){
	  ev->ra = csys->value[0].val;
	  ev->dec = csys->value[1].val;
	  ev->rad = csys->value[2].val;
	}
	if( dojoin ){
	  ev->row = list->row;
	}
	if( dolist ) ev->key = list->nline;
	/* and write out this event */
	if( FunTableRowPut(ofun, ev, 1, i, NULL) == 1 ){
	  total++;
	  if( doall ){
	    /* if we have a filter, then we don't know the row number til after
	       we read the event, i.e. now */
	    if( doall > 1 ) FunInfoGet(fun, FUN_ROW, &irow, 0);
	    adbuf[irow] = 1;
	  }
	}
	else{
	  gerror(stderr, "could not write row %d\n", i);
	}
      }
    }
    if( ebuf ) xfree(ebuf);
  }
  if( debug ) fprintf(stderr, "matched rows: %d\n", total);

  /* close cone filter if it wasn't assigned wholesale to main filter */
  if( filt && havefilt ){
    FilterClose(filt);
  }

  /* iterate, if necessary */
  if( dolist ){
    if( (doall & ALL_LIST) && total ){
      FunInfoGet(list->fun, FUN_ROW, &irow, 0);
      albuf[irow] = 1;
    }
    FunTableRowSeek(fun, 1, NULL);
    goto loop;
  }

done:
  /* write out all rows not previously written, if necessary */
  if( doall & ALL_DATA ){
    /* seek back to beginning */
    FunTableRowSeek(fun, 1, NULL);
    irow = 0;
    /* clear list information */
    if( dojoin ){
      if( list->row ){
	xfree(list->row);
      }
      list->row = xcalloc(list->rowsize, sizeof(char));
    }
    /* redo the read loop */
    while( (ebuf = (Ev)FunTableRowGet(fun, NULL, maxrow, NULL, &got)) ){
      /* if we have a filter, then we don't know the row number til after
	 we read the event, i.e. now */
      FunInfoGet(fun, FUN_ROW, &irow, 0);
      /* process all rows */
      for(i=0; i<got; i++){
	/* skip rows that already were written out */
	if( adbuf[irow+i] ) continue;
	/* point to the i'th row */
	ev = ebuf+i;
	/* flag that this is a row not in any cone */
	ev->key = -1;
	/* clear extra values if necessary */
	if( xmode ){
	  ev->ra = 0.0;
	  ev->dec = 0.0;
	  ev->rad = 0.0;
	}
	if( dojoin ){
	  ev->row = list->row;
	}
	/* and write out this event */
	if( !FunTableRowPut(ofun, ev, 1, i, NULL) ){
	  gerror(stderr, "could not write row %d\n", i);
	}
      }
      irow += got;
      if( ebuf ) xfree(ebuf);
    }
    if( dojoin && list->row ){
      xfree(list->row);
      list->row = NULL;
    }
  }

  /* write out all list rows not previously written, if necessary */
  if( doall & ALL_LIST ){
    /* fake an event */
    ev = (Ev)xcalloc(1, sizeof(EvRec));
    /* flag that this is a list row not close to any data row */
    ev->key = -2;
    /* clear underlying raw buffer */
    FunInfoGet(fun, FUN_RAWBUF, &rawbuf, FUN_RAWSIZE, &rawsize, 0);
    memset(rawbuf, 0, rawsize);
    /* seek back to beginning of list file */
    FunTableRowSeek(list->fun, 1, NULL);
    /* for each row in the list ... */
    for(i=1; NextList(list, rastr, decstr, radstr, SZ_LINE); i++){
      /* if we already wrote this row, skip it */
      if( albuf[i] ) continue;
      /* add the list row to the fake event */
      ev->row = list->row;
      /* and write out this event */
      if( !FunTableRowPut(ofun, ev, 1, 0, NULL) ){
	gerror(stderr, "could not write row %d\n", i);
      }
    }
    if( ev ) xfree(ev);
  }

  /* close files */
  FunClose(ofun);
  FunClose(fun);
  if( dolist ) CloseList(list);
  /* free up memory */
  if( csys ){
    for(i=0; i<3; i++){
      if( csys->value[i].colname ) xfree(csys->value[i].colname);
    }
    xfree(csys);
  }
  if( adbuf ) xfree(adbuf);
  if( albuf ) xfree(albuf);
  if( rbuf ) xfree(rbuf);
  if( iname) xfree(iname);
  if( oname) xfree(oname);
  if( raname) xfree(raname);
  if( decname) xfree(decname);
  if( radname) xfree(radname);
  if( keyname) xfree(keyname);
  if( names ){
    for(i=0; i<ncol; i++){
      if( names[i] ) xfree(names[i]);
    }
    xfree(names);
  }
  if( types ){
    for(i=0; i<ncol; i++){
      if( types[i] ) xfree(types[i]);
    }
    xfree(types);
  }
  if( modes )   xfree(modes);
  if( offsets ) xfree(offsets);

  /* success */
  return(0);
}
