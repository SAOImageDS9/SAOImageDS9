/*
 *	Copyright (c) 1999-2003 Smithsonian Astrophysical Observatory
 */

#include <funtools.h>
#include <word.h>

extern char *optarg;
extern int optind;

#define MAXROW 8192
static int maxrow=MAXROW;

/* from funtoolsP.h */
#define COL_REGION_NAME	"$REGION"
#define COL_REGION_ONAME "REGION"
#define COL_NUM_NAME	 "$N"
#define COL_NUM_ONAME    "N"

/* display directives */
#define DMODE_MASKONLY	1
#define DMODE_RDB	2

#define NFORMAT 	12
/* default format values */
static int _fmti[NFORMAT] =   {21, 11, 10, 8, 6, 12, 10, 8, 10, 6, 20, 1};
static char *_fmts[NFORMAT] = {"%21.21s", "%11.11s", "%10.10s",  "%8.8s",
			       "%6.6s",   "%12.12s", "%10.10s",    "%8.8s",
			       "%10.10s", "%6.6s", "%20.20s", "%1.1s"};
static char *_fmt[NFORMAT] =  {"%21.8f", "%11.2f",  "%10d", "%8d",
			       "%6d",    "%12.12s", "%10.10s",  "%8d",
			       "%10d",   "%6s", "%20lld", "%1x"};

/* global format values, used everywhere */
static int fmti[NFORMAT];
static char *fmts[NFORMAT];
static char *fmt[NFORMAT];

/* holds temp index string for header */
static char _tdim[SZ_LINE];

/* column delimiter */
static int coldelim=' ';

#define MAX_COLFMTS 1024
/* column-specific formats */
static struct colfmtrec{
  char *name;
  int fmti;
  char *fmts;
  char *fmt;
} colfmts[MAX_COLFMTS];
static int ncolfmt=0;

#ifdef ANSI_FUNC
int
Index(int type)
#else
int Index(type)
     int type;
#endif
{
  switch ( type ) {
  case 'D':	return 0;
  case -64:	return 0;
  case 'E':	return 1;
  case -32:	return 1;
  case 'J':	return 2;
  case  32:	return 2;
  case 'I':	return 3;
  case  16:	return 3;
  case 'B':	return 4;
  case   8:	return 4;
  case 'A':	return 5;
  case 'X':	return 6;
  case 'U':	return 7;
  case -16:	return 7;
  case 'V':	return 8;
  case 'L':	return 9;
  case 'K':	return 10;
  case  64:	return 10;
  }
  return(-1);
}

/* order of formats: double float int short byte string bits ushort uint */
#ifdef ANSI_FUNC
static void
Format (char *s, char **names, int n)
#else
static void
Format (s, names, n)
     char *s;
     char **names;
     int n;
#endif
{
  int i, j, x;
  int col;
  int ival;
  int ip=0;
  char format[SZ_LINE];
  char tbuf[SZ_LINE];
  char *e;
  char *f;

  i = 0;
  newdtable(",");
  while( 1 ){
    col = -1;
    x = i;
    if( !word(s, format, &ip) )
      break;
    if( !strcmp(format, "-") || !strncasecmp(format, "def", 3) ){
      i++;
      continue;
    }
    /* look for "=", meaning we have a column format */
    if( (e = strchr(format, '=')) != NULL ){
      if( ncolfmt >= MAX_COLFMTS ){
	fprintf(stderr, "WARNING: too many column formats; skipping %s\n",
		format);
	continue;
      }
      f = e+1;
      *e = '\0';
      if( (strlen(format) != 1) || ((x=Index(*format)) < 0) ){
	for(j=0; j<n; j++){
	  if( !strcasecmp(format, names[j]) ){
	    if( colfmts[ncolfmt].name ) xfree(colfmts[ncolfmt].name);
	    colfmts[ncolfmt].name = xstrdup(names[j]);
	    col = j;
	    break;
	  }
	}
	if( col < 0 ){
	  fprintf(stderr, 
	  "WARNING: bad '%s' format: missing column or unknown datatype\n",
	  format);
	  continue;
	}
      }
    }
    /* no column format, its a global format */
    else{
      f = format;
    }
    if( *f == '%' ) f++;
    ival = ABS(atoi(f));
    if( ival == 0 ){
      switch(f[strlen(f)-1]){
      case 'g':
      case 'f':
	ival = _fmti[0];
	break;
      case 'd':
      case 'x':
	ival = _fmti[2];
	break;
      case 's':
	ival = _fmti[5];
	break;
      case 'c':
	ival = _fmti[4];
	break;
      default:
	ival = _fmti[2];
      }
    }

    if( col >= 0 ){
      colfmts[ncolfmt].fmti = ival;
      snprintf(tbuf, SZ_LINE-1, "%%%d.%ds", ival, ival);
      if( colfmts[ncolfmt].fmts ) xfree(colfmts[ncolfmt].fmts);
      colfmts[ncolfmt].fmts = xstrdup(tbuf);
      if( strchr(f, '%') )
	snprintf(tbuf, SZ_LINE-1, "%s", f);
      else
	snprintf(tbuf, SZ_LINE-1, "%%%s", f);
      if( colfmts[ncolfmt].fmt ) xfree(colfmts[ncolfmt].fmt);
      colfmts[ncolfmt].fmt = xstrdup(tbuf);
      ncolfmt++;
    }
    else{
      fmti[x] = ival;
      snprintf(tbuf, SZ_LINE-1, "%%%d.%ds", ival, ival);
      if( fmts[x] ) xfree(fmts[x]);
      fmts[x] = xstrdup(tbuf);
      if( strchr(f, '%') )
	snprintf(tbuf, SZ_LINE-1, "%s", f);
      else
	snprintf(tbuf, SZ_LINE-1, "%%%s", f);
      if( fmt[x] ) xfree(fmt[x]);
      fmt[x] = xstrdup(tbuf);
      if( x == i ){
	i++;
      }
    }
  }
  freedtable();
}

#ifdef ANSI_FUNC
static char *
tdimstr (int *dims, int ndim, int ival)
#else
static char *
tdimstr (dims, ndim, ival)
     int *dims;
     int ndim;
     int ival;
#endif
{
  int i, j;
  int *prods;
  int *idxs;
  char tbuf[SZ_LINE];

  *_tdim = '\0';
  if( ndim <= 1 ){
    snprintf(_tdim, SZ_LINE, "%d", ival);
  }
  else{
    prods=xcalloc(ndim, sizeof(int));
    idxs=xcalloc(ndim, sizeof(int));
    for(i=0; i<ndim; i++){
      prods[i] = 1;
    }
    for(i=1; i<ndim; i++){
      for(j=0; j<i; j++){
	prods[i] *= dims[j];
      }
    }
    for(i=ndim-1; i>=0; i--){
      if( i == 0 ){
	idxs[i] = ival;
      }
      else{
	idxs[i] = ival / prods[i];
	ival %= prods[i];
      }
    }
    for(i=0; i<ndim; i++){
      /* add separator, but avoid comma because text parser gets messed up */
      if( *_tdim ) strncat(_tdim, ",", SZ_LINE-1);
      snprintf(tbuf, SZ_LINE, "%d", idxs[i]);
      strncat(_tdim, tbuf, SZ_LINE-1);
    }
    if( prods ) xfree(prods);
    if( idxs )  xfree(idxs);
  }
  return _tdim;
}

#ifdef ANSI_FUNC
static void
Header (FILE *fp, int dmode, char *name, int type, int n, char *tdim)
#else
static void
Header (fp, dmode, name, type, n, tdim)
     FILE *fp;
     int dmode;
     char *name;
     int type;
     int n;
     char *tdim;
#endif
{
  int ind;
  int i, j;
  int xfmti;
  int ip;
  int dims[SZ_LINE];
  int ndim;
  char *xfmts;
  //  char *xfmt;
  char *t;
  char tbuf[SZ_LINE];

  if( dmode & DMODE_MASKONLY )
    ind = NFORMAT-1;
  else{
    if( (ind = Index(type)) == -1 )
      ind = NFORMAT-1;
  }

  /* see values for format */
  xfmts = fmts[ind];
  xfmti = fmti[ind];
  //  xfmt  = fmt[ind];
  /* some columns don't have a name */
  if( !name || !*name )
    name = "";
  /* see if we have a column format and overwrite format values if so */
  else{
    for(i=0; i<ncolfmt; i++){
      if( !strcasecmp(name, colfmts[i].name) ){
	xfmts = colfmts[i].fmts;
	xfmti = colfmts[i].fmti;
	//	xfmt  = colfmts[i].fmt;
	break;
      }
    }
  }

  /* for bitfields, we process bytes */
  if( type == 'X' ){
    if( n == 16 ){
      n = 1;
    }
    else if( n == 32 ){
      n = 1;
    }
    else{
      n = (n+7)/8;
    }
  }
  /* for ascii, we process strings */
  else if( type == 'A' )
    n = 1;
  /* init tdim arrays, if necessary */
  ndim = 0;
  if( (n>1) && tdim ){
    newdtable(",()");
    for(ip=0; word(tdim, tbuf, &ip); ndim++){
      if( ndim >= SZ_LINE ) gerror(stderr, "too many dimensions in TDIM\n");
      dims[ndim] = atoi(tbuf);
    }
    freedtable();
  }
  /* output each sub-column in this column */
  for(i=0; i<n; i++){
    /* reset region column name */
    if( !strcasecmp(name, COL_REGION_NAME) )
      t = "REGION";
    else if( !strcasecmp(name, COL_NUM_NAME) )
      t = "N";
    else
      t = name;
    if( n > 1 ){
      if( dmode & DMODE_RDB ){
	if( i == (n-1) )
	  strcpy(tbuf, t);
	else
	  strcpy(tbuf, " ");
      }
      else{
	snprintf(tbuf, SZ_LINE-1, "%s[%s]", t, tdimstr(dims,ndim,i));
      }
    }
    else
      strcpy(tbuf, t);
    /* only display last characters of string, if its too long */
    j = strlen(tbuf) - xfmti;
    if( j > 0 ) {
      /* this ensures we print out at least one character */
      j = MIN((int)strlen(tbuf)-1,j);
      if( !(dmode & DMODE_RDB) )
	t = tbuf + j;
      /* for rdb, we want the whole string, since alignment is unimportant */
      else
	t = tbuf;
    }
    else
      t = tbuf;
    if( i ) fprintf(fp, " ");
    /* for rdb, we want the whole string, since alignment is unimportant */
    if( (dmode & DMODE_RDB) && (j > 0) )
      fprintf(fp, "%s", t);
    /* else print out what we can */
    else
      fprintf(fp, xfmts, t);
  }
}

#ifdef ANSI_FUNC
static void
Dashes (FILE *fp, int dmode, char *name, int type, int n)
#else
static void
Dashes (fp, dmode, name, type, n)
     FILE *fp;
     int dmode;
     char *name;
     int type;
     int n;
#endif
{
  int ind;
  int i, j;
  int xfmti;
  //  char *xfmts;
  //  char *xfmt;

  if( dmode & DMODE_MASKONLY )
    ind = NFORMAT-1;
  else{
    if( (ind = Index(type)) == -1 )
      ind = NFORMAT-1;
  }

  /* see values for format */
  //  xfmts = fmts[ind];
  xfmti = fmti[ind];
  //  xfmt  = fmt[ind];
  /* some columns don't have a name */
  if( !name || !*name )
    name = "";
  /* see if we have a column format and overwrite format values if so */
  else{
    for(i=0; i<ncolfmt; i++){
      if( !strcasecmp(name, colfmts[i].name) ){
	//	xfmts = colfmts[i].fmts;
	xfmti = colfmts[i].fmti;
	//	xfmt  = colfmts[i].fmt;
	break;
      }
    }
  }

  /* for bitfields, we process bytes */
  if( type == 'X' ){
    if( n == 16 ){
      n = 1;
    }
    else if( n == 32 ){
      n = 1;
    }
    else{
      n = (n+7)/8;
    }
  }
  /* for ascii, we process strings */
  else if( type == 'A' )
    n = 1;
  for(i=0; i<n; i++){
    if( dmode & DMODE_MASKONLY ){
      j = 1;
    }
    else{
      j = xfmti;
      if( i ){
	if( dmode & DMODE_RDB )
	  fprintf(fp, "-");
	else
	  fprintf(fp, " ");
      }
    }
    while( j-- ){
      fprintf(fp, "-");
    }
  }
}

#ifdef ANSI_FUNC
static void
Display (FILE *fp, int dmode, char *name, int type, int n, char *buf)
#else
static void 
Display(fp, dmode, name, type, n, buf)
     FILE *fp;
     int dmode;
     char *name;
     int type;
     int n;
     char *buf;
#endif
{
  int ind;
  int i;
  int ival=0;
  int xn=0;
  int maskonly;
  //  int xfmti;
  char *xfmts;
  char *xfmt;
  char tbuf[SZ_LINE];
  char tbuf2[SZ_LINE];
  unsigned short sval;
  unsigned int xval;
  longlong lval;
  float fval;
  double dval;

  /* get maskonly flag */
  maskonly = dmode & DMODE_MASKONLY;

  if( maskonly )
    ind = NFORMAT-1;
  else{
    if( (ind = Index(type)) == -1 )
      ind = NFORMAT-1;
  }

  /* see values for format */
  xfmts = fmts[ind];
  //  xfmti = fmti[ind];
  xfmt  = fmt[ind];
  /* some columns don't have a name */
  if( !name )
    name = "";
  /* see if we have a column format and overwrite format values if so */
  else{
    for(i=0; i<ncolfmt; i++){
      if( !strcasecmp(name, colfmts[i].name) ){
	xfmts = colfmts[i].fmts;
	//	xfmti = colfmts[i].fmti;
	xfmt  = colfmts[i].fmt;
	break;
      }
    }
  }

  /* for bitfields, we process bytes */
  if( type == 'X' ){
    if( n == 16 ){
      xn = 1;
      n = 1;
    }
    else if( n == 32 ){
      xn = 2;
      n = 1;
    }
    else{
      xn = 0;
      n = (n+7)/8;
    }
  }
  for(i=0; i<n; i++){
    if( i && !maskonly ) fprintf(fp, " ");
    switch(type){
    case 'X':
      switch(xn){
      case 1:
	memcpy(&sval, buf, sizeof(unsigned short));
	xval = (unsigned int)sval;
	break;
      case 2:
	memcpy(&xval, buf, sizeof(unsigned int));
	break;
      case 0:
      default:
	xval = (unsigned int)*(unsigned char *)buf;
	break;
      }
      if( maskonly && !ival ){
	fprintf(fp, xfmts, ".");
      }
      else{
	/* make sure 0x is prepended to the hex value */
	tbuf[0] = '0';
	tbuf[1] = 'x';
	snprintf(&tbuf[2], SZ_LINE-2, "%x", xval);
	if( (strlen(tbuf) >= 4) && (tbuf[2] == '0') && 
	    ((tbuf[3] == 'x') || (tbuf[3] == 'X')) )
	  fprintf(fp, xfmt, &tbuf[2]);
	else
	  fprintf(fp, xfmt, tbuf);
      }
      switch(xn){
      case 1:
	buf += sizeof(unsigned short);
	break;
      case 2:
	buf += sizeof(unsigned int);
	break;
      case 0:
      default:
	buf += sizeof(unsigned char);
	break;
      }
      break;
    case 'B':
    case 8:
      ival = (int)*(unsigned char *)buf;
      if( maskonly && !ival )
	fprintf(fp, xfmts, ".");
      else
	fprintf(fp, xfmt, ival);
      buf += sizeof(unsigned char);
      break;
    case 'I':
    case  16:
      ival = (int)*(short *)buf;
      if( maskonly && !ival )
	fprintf(fp, xfmts, ".");
      else
	fprintf(fp, xfmt, ival);
      buf += sizeof(short);
      break;
    case 'U':
    case -16:
      ival = (int)*((unsigned short *)buf);
      if( maskonly && !ival )
	fprintf(fp, xfmts, ".");
      else
	fprintf(fp, xfmt, ival);
      buf += sizeof(unsigned short);
      break;
    case 'J':
    case 32:
      ival = *(int *)buf;
      if( maskonly && !ival )
	fprintf(fp, xfmts, ".");
      else
	fprintf(fp, xfmt, ival);
      buf += sizeof(int);
      break;
    case 'K':
    case 64:
#if HAVE_LONG_LONG == 0
      gerror(stderr, 
	     "64-bit data support not built (long long not available)\n");
#endif
      lval = *(longlong *)buf;
      if( maskonly && !lval )
	fprintf(fp, xfmts, ".");
      else
	fprintf(fp, xfmt, lval);
      buf += sizeof(longlong);
      break;
    case 'V':
      ival = *(unsigned int *)buf;
      if( maskonly && !ival )
	fprintf(fp, xfmts, ".");
      else
	fprintf(fp, xfmt, ival);
      buf += sizeof(unsigned int);
      break;
    case 'E':
    case -32:
      fval = *(float *)buf;
      if( maskonly && (fval==0) )
	fprintf(fp, xfmts, ".");
      else if( maskonly )
	fprintf(fp, xfmt, (int)fval);
      else
	fprintf(fp, xfmt, fval);
      buf += sizeof(float);
      break;
    case 'D':
    case -64:
      dval = *(double *)buf;
      if( maskonly && (dval==0) )
	fprintf(fp, xfmts, ".");
      else if( maskonly )
	fprintf(fp, xfmt, (int)dval);
      else
	fprintf(fp, xfmt, dval);
      buf += sizeof(double);
      break;
    case 'A':
      if( maskonly && !*buf )
	fprintf(fp, xfmts, ".");
      else if( maskonly )
	fprintf(fp, "%c", *buf);
      else{
	if( dmode & DMODE_RDB ){
	  fprintf(fp, xfmt, buf);
	}
	else{
	  /* make sure we have enough room */
	  if( (n+3) >= SZ_LINE) n = SZ_LINE-3;
	  /* enclose string in single quotes */
	  strncpy(tbuf, "'", SZ_LINE-1);
	  memmove(&tbuf[1], buf, n);
	  strncat(tbuf, "'", SZ_LINE-1);
	  snprintf(tbuf2, SZ_LINE-1, xfmt, tbuf);
	  /* make sure we end with a single quote */
	  if( tbuf2[strlen(tbuf2)-1] != '\'' )
	    tbuf2[strlen(tbuf2)-1] = '\'';
	  fprintf(fp, "%s", tbuf2);
	}
      }
      i += n;
      break;
    case 'L':
      ival = (int)*(unsigned char *)buf;
      if( maskonly ){
	if( !ival || (ival == 'F') || (ival == 'f') )
	  fprintf(fp, xfmts, ".");
	else
	  fprintf(fp, xfmt, "T");
      }
      else{
	if( !ival || (ival == 'F') || (ival == 'f') )
	  fprintf(fp, xfmt, "F");
	else
	  fprintf(fp, xfmt, "T");
      }
      buf += sizeof(char);
      break;
    default:
      fprintf(fp, xfmts, "?");
      break;
    }
  }
}

#ifdef ANSI_FUNC
static void
usage (char *fname)
#else
static void usage(fname)
     char *fname;
#endif
{
  fprintf(stderr,
   "usage: %s [-f format] [-l] [-n] [-T] iname [columns|bitpix=n]\n",
    fname);
  fprintf(stderr, "optional switches:\n");
  fprintf(stderr, "  -f 'format' # format definitions for table columns\n");
  fprintf(stderr, "  -l          # display image as a list containing the columns X, Y, VAL\n");
  fprintf(stderr, "  -n          # don't output header\n");
  fprintf(stderr, "  -F [c]      # use specified character as column separator (def: space)\n");
  fprintf(stderr, "  -T          # output in rdb/starbase format (tab separators)\n");
  fprintf(stderr, "For tables, columns to display can be specified.\n");
  fprintf(stderr, "For images, data type (bitpix) of display can be specified.\n");
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
  int i, j, k;
  int args;
  int got;
  int type;
  int x0;
  int y0;
  int dim1;
  int dim2;
  int block;
  int bitpix;
  int dtype;
  int scaled;
  int ibitpix;
  int rowsize;
  int val;
  int ncol=0;
  int dmode=0;
  int dolist=0;
  int dohead=1;
  size_t size;
  char *mode=NULL;
  char *formatstr=NULL;
  char *actcols=NULL;
  char *vfmt=NULL;
  char *s;
  char *buf;
  char *ebuf;
  char *eptr;
  char *mbuf;
  char tbuf[SZ_LINE];
  char **names=NULL;
  char **tdims=NULL;
  int *types=NULL;
  int *modes=NULL;
  int *ns=NULL;
  int *offsets=NULL;
  double dval;
  Fun fun;

  /* exit on gio errors */
  if( !getenv("GERROR")  )
    setgerror(2);

  /* get maxrow,if user-specified */
  if( (s=getenv("FUN_MAXROW")) != NULL )
    maxrow = atoi(s);

  /* we want the args in the same order in which they arrived, and
     gnu getopt sometimes changes things without this */
  putenv("POSIXLY_CORRECT=true");

  /* process the type of data we have */
  /* process switch arguments */
  while ((c = getopt(argc, argv, "f:lnF:T")) != -1){
    switch(c){
    case 'f':
      formatstr = xstrdup(optarg);
      break;
    case 'l':
      dolist = 1;
      break;
    case 'n':
      dohead = 0;
      break;
    case 'F':
      coldelim = *optarg;
      break;
    case 'T':
      dmode |= DMODE_RDB;
      coldelim = '\t';
      break;
    }
  }

  args = argc - optind;
  if( args < 1 ) usage(argv[0]);

  /* seed the format buffers with the default values */
  for(i=0; i<NFORMAT; i++){
    fmti[i] = _fmti[i];
    fmts[i] = xstrdup(_fmts[i]);
    fmt[i]  = xstrdup(_fmt[i]);
  }

  /* open the input FITS file */
  if( !(fun = FunOpen(argv[optind], "r", NULL)) )
    gerror(stderr, "can't FunOpen input file (or find extension): %s\n",
	   argv[optind]);

  /* determine which type of data we have */
  FunInfoGet(fun, FUN_TYPE, &type, 0);

  switch(type){
  case FUN_IMAGE:
  case FUN_ARRAY:
    /* set mode if present (i.e., bitpix) */
    if( args >= 2 ){
      mode = argv[optind+1];
    }
    else{
      /* if not present and if the data is scaled and int, read it as float */
      FunInfoGet(fun,
		 FUN_SCALED,   &scaled,
		 FUN_DTYPE,    &dtype,
		 0);
      if( scaled && (dtype>=-2) )
	mode = "bitpix=-32";
    }
    /* see if we want only the mask */
    mbuf = xstrdup(mode);
    if( _FunKeyword(mbuf, "mask", "FUN_MASK", tbuf, SZ_LINE) ){
      if( !strcasecmp(tbuf, "all") )
	dmode |= DMODE_MASKONLY;
    }
    if( mbuf ) xfree(mbuf);
    /* extract and bin the data section into an image buffer */
    if( !(buf = FunImageGet(fun, NULL, mode)) )
      gerror(stderr, "can't FunImageGet: %s\n", argv[optind]);
    /* get required information from funtools structure.
       this should come after the ImageGet call, in case that call
       changed fun_sect_bitpix value */
    FunInfoGet(fun,
	       FUN_SECT_DIM1,    &dim1,
	       FUN_SECT_DIM2,    &dim2,
	       FUN_SECT_X0,      &x0,
	       FUN_SECT_Y0,      &y0,
	       FUN_SECT_BLOCK,   &block,
	       FUN_SECT_BITPIX,  &bitpix,
	       FUN_BITPIX,       &ibitpix,
	       0);
    /* set dim2 to 1 for a 1D image */
    if( dim2 == 0 ) dim2 = 1;
    /* display header */
    if( dolist ){
      if( dmode & DMODE_MASKONLY )
	gerror(stderr, "'list' and 'maskonly' are mutually exclusive\n");
      if( dohead ){
	Header(stdout, dmode, "X", 'J', 1, NULL);
	fprintf(stdout, "%c", coldelim);
	Header(stdout, dmode, "Y", 'J', 1, NULL);
	fprintf(stdout, "%c", coldelim);
	Header(stdout, dmode, "VALUE", bitpix, 1, NULL);
	fprintf(stdout, "%c", '\n');
	Dashes(stdout, dmode, NULL, 'J', 1);
	fprintf(stdout, "%c", coldelim);
	Dashes(stdout, dmode, NULL, 'J', 1);
	fprintf(stdout, "%c", coldelim);
	Dashes(stdout, dmode, NULL, bitpix, 1);
	fprintf(stdout, "%c", '\n');
      }
      if( ft_sizeof(bitpix) )
	size = ft_sizeof(bitpix);
      else
	size = ft_sizeof(ibitpix);
      /* print out values */
      for(i=0; i<dim2; i++){
	for(j=0; j<dim1; j++){
	  val = j + x0;
	  Display(stdout, dmode, NULL, 32, 1, (char *)&val);
	  fprintf(stdout, "%c", coldelim);
	  val = i + y0;
	  Display(stdout, dmode, NULL, 32, 1, (char *)&val);
	  fprintf(stdout, "%c", coldelim);
	  Display(stdout, dmode, "VALUE",
		bitpix, 1, buf+((i*dim1+j)*size));
	  fprintf(stdout, "\n");
	}
      }
    }
    else{
      if( dmode & DMODE_RDB )
	gerror(stderr, "'table' mode is only for tables or 'list' images\n");
      /* output header */
      fprintf(stdout, "          ");
      for(i=0; i<dim1; i++){
	if( block == 1 ){
	  snprintf(tbuf, SZ_LINE-1, "%d", x0+i);
	  if( i )
	    fprintf(stdout, "%c", coldelim);
	  Header(stdout, dmode, tbuf, bitpix, 1, NULL);
	}
	else{
	  for(dval=0.0, j=0; j<block; j++){
	    dval += j;
	  }
	  dval /= block;
	  snprintf(tbuf, SZ_LINE-1, "%8.1f", y0 + (i * block) + dval);
	  if( i )
	    fprintf(stdout, "%c", coldelim);
	  Header(stdout, dmode, tbuf, bitpix, 1, NULL);
	}
      }
      fprintf(stdout, "\n");
      /* output dashes */
      fprintf(stdout, "          ");
      for(i=0; i<dim1; i++){
	if( i )
	  fprintf(stdout, "%c", coldelim);
	Dashes(stdout, dmode, NULL, bitpix, 1);
      }
      fprintf(stdout, "\n");
      /* print out values */
      for(i=dim2-1; i>=0; i--){
	if( block == 1 ){
	  fprintf(stdout, "%8d:", y0+i);
	}
	else{
	  for(dval=0.0, j=0; j<block; j++){
	    dval += j;
	  }
	  dval /= block;
	  fprintf(stdout, "%8.1f:", y0 + (i * block) + dval);
	}
	if( ft_sizeof(bitpix) )
	  size = ft_sizeof(bitpix);
	else
	  size = ft_sizeof(ibitpix);
	for(j=0; j<dim1; j++){
	  fprintf(stdout, "%c", coldelim);
	  Display(stdout, dmode, NULL,
		bitpix, 1, buf+((i*dim1+j)*size));
	}
	fprintf(stdout, "\n");
      }
    }
    /* free up space */
    if( buf ) xfree(buf);
    break;

  case FUN_TABLE:
  case FUN_EVENTS:
    /* set activate specified output columns */
    if( args >= 2 ) actcols = argv[optind+1];
    FunColumnActivate(fun, actcols, NULL);

    /* if we specified columns, we also can specify "mask=transparent"
       and get all events, with the regionid (assuming we specified 
       the region column to display as well) */
    if( args >= 3 ){
      mode = argv[optind+2];
    }
    FunInfoGet(fun,
	       FUN_ROWSIZE, &rowsize,
	       FUN_NCOL,    &ncol,
	       0);
    /* get information for each column */
    names = (char **)xcalloc(ncol, sizeof(char *));
    tdims = (char **)xcalloc(ncol, sizeof(char *));
    types = (int *)xcalloc(ncol, sizeof(int));
    modes = (int *)xcalloc(ncol, sizeof(int));
    ns = (int *)xcalloc(ncol, sizeof(int));
    offsets = (int *)xcalloc(ncol, sizeof(int));
    for(i=0; i<ncol; i++){
      FunColumnLookup(fun, NULL, i, &names[i],
		      &types[i], &modes[i], &offsets[i], &ns[i], NULL);
      /* get tdim, if available */
      tdims[i] = FunParamGets(fun, "TDIM", i+1, NULL, &got);
      /* use dynamically allocated names ... */
      names[i] = xstrdup(names[i]);
      /* ... since might have to change "$region" to something else */
      if( names[i] && !strcasecmp(names[i], COL_REGION_NAME) ){
	xfree(names[i]);
	/* best to use "region", if its not already used */
	if( !FunColumnLookup(fun, COL_REGION_ONAME, 0,
			     NULL, NULL, NULL, NULL, NULL, NULL) )
	  names[i] = xstrdup(COL_REGION_ONAME);
	/* otherwise use region<n>, using the first free int value for <n> */
	else{
	  for(j=1; ; j++){
	    snprintf(tbuf, SZ_LINE-1, "%s%d", COL_REGION_ONAME, j);
	    if( !FunColumnLookup(fun, tbuf, 0,
				 NULL, NULL, NULL, NULL, NULL, NULL) ){
	      names[i] = xstrdup(tbuf);
	      break;
	    }
	  }
	}
      }
      /* ... since might have to change "$n" to something else */
      if( names[i] && !strcasecmp(names[i], COL_NUM_NAME) ){
	xfree(names[i]);
	/* best to use "n", if its not already used */
	if( !FunColumnLookup(fun, COL_NUM_ONAME, 0,
			     NULL, NULL, NULL, NULL, NULL, NULL) )
	  names[i] = xstrdup(COL_NUM_ONAME);
	/* otherwise use region<n>, using the first free int value for <n> */
	else{
	  for(j=1; ; j++){
	    snprintf(tbuf, SZ_LINE-1, "%s%d", COL_NUM_ONAME, j);
	    if( !FunColumnLookup(fun, tbuf, 0,
				 NULL, NULL, NULL, NULL, NULL, NULL) ){
	      names[i] = xstrdup(tbuf);
	      break;
	    }
	  }
	}
      }
    }

    /* if we have a formatstring, we need to process it now */
    if( formatstr ){
      Format(formatstr, names, ncol);
    }
    /* otherwise look for a view format or an environment variable */
    else{
      FunInfoGet(fun, FUN_VFMT, &vfmt, 0);
      if( vfmt ){
	Format(vfmt, names, ncol);
      }
      /* look for environment variable */
      else if( (s=getenv("FUN_FORMAT")) != NULL ){
	Format(s, names, ncol);
      }
    }

    /* output header, if necessary */
    if( dohead ){
      /* output header */
      for(i=0, j=0; i<ncol; i++){
	if( !(modes[i]&COL_ACTIVE) )
	  continue;
	if( j )
	  fprintf(stdout, "%c", coldelim);
	Header(stdout, dmode, names[i], types[i], ns[i], tdims[i]);
	j++;
      }
      fprintf(stdout, "\n");
      fflush(stdout);

      /* output dashes */
      for(i=0, j=0; i<ncol; i++){
	if( !(modes[i]&COL_ACTIVE) )
	  continue;
	if( j )
	  fprintf(stdout, "%c", coldelim);
	Dashes(stdout, dmode, names[i], types[i], ns[i]);
	j++;
      }
      fprintf(stdout, "\n");
      fflush(stdout);
    }

    /* for each event, display each specified column */
    while( (ebuf = FunTableRowGet(fun, NULL, maxrow, mode, &got)) ){
      for(k=0; k<got; k++){
	eptr = (char *)(ebuf+(rowsize*k));
	for(i=0, j=0; i<ncol; i++){
	  if( !(modes[i]&COL_ACTIVE) )
	    continue;
	  if( j )
	    fprintf(stdout, "%c", coldelim);
	  Display(stdout, dmode, names[i], types[i], ns[i], eptr+offsets[i]);
	  j++;
	}
	fprintf(stdout, "\n");
	fflush(stdout);
      }
      xfree(ebuf);
    }
    break;
  }

  /* free up alloc'ed space */
  if( names ){
    for(i=0; i<ncol; i++)
      if( names[i] ) xfree(names[i]);
    xfree(names);
  }
  if( tdims ){
    for(i=0; i<ncol; i++)
      if( tdims[i] ) xfree(tdims[i]);
    xfree(tdims);
  }
  if( types )   xfree(types);
  if( modes )   xfree(modes);
  if( ns )      xfree(ns);
  if( offsets ) xfree(offsets);
  if( formatstr ) xfree(formatstr);
  /* free the format buffers */
  for(i=0; i<NFORMAT; i++){
    if( fmts[i] ) xfree(fmts[i]);
    if( fmt[i] )  xfree(fmt[i]);
  }
  /* free column format data */
  for(i=0; i<ncolfmt; i++){
    if( colfmts[ncolfmt].name ) xfree(colfmts[ncolfmt].name);
    if( colfmts[ncolfmt].fmts ) xfree(colfmts[ncolfmt].fmts);
    if( colfmts[ncolfmt].fmt )  xfree(colfmts[ncolfmt].fmt);
  }
  /* close file */
  FunClose(fun);
  return(0);
}
