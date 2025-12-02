/*
 *	Copyright (c) 2005 Smithsonian Astrophysical Observatory
 */

/*
 *     funjoin -j key t1.fits t2.fits t3.fits foo.fits
 */

#include <math.h>
#include <funtoolsP.h>
#include <word.h>

/* #define JOIN_DEBUG 1 */
#if JOIN_DEBUG
#define IPRINTF(x) fprintf x
#else
#define IPRINTF(x)
#endif

#ifndef ftol
#define ftol(x,y,t) (fabs((double)x-(double)y)<=((double)t+(double)1.0E-15))
#endif

#ifndef feq
#define feq(x,y) (fabs((double)x-(double)y)<=(double)1.0E-15)
#endif

#define MAXIFILE  32
#define MAXOFILE   1
#define MAXROW  8192

#define KEY_STRING   1
#define KEY_NUMERIC  2

#define JFILES_COL "JFILES"

typedef unsigned int JBITMASK;
#define JBITSIZE (int)sizeof(JBITMASK)

static int maxrow=MAXROW;

typedef struct _colrec{
  char *name, *oname;
  int type, mode, offset, n, width;
  int coffset;
} *XCol, XColRec;


typedef struct _filerec{
  char *fname;
  char *jname;
  char *bstr;
  char *actstr;
  Fun fun;
  int eof;
  int rowsize;
  int rowoffset;
  char *rowbuf;
  char *blank;
  int counter;
  int tcol;
  int maxcol;
  int ncol;
  XCol cols;
  int dtype;
  int jtype, jmode, joffset, jn, jwidth;
  int idx;
  double dval;
  double mval;
  char *sval;
  int ibase;
  GIO igio;
  int irow;
  int maxindex;
  int nindex;
  int *indexes;
} *XFile, XFileRec;

extern char *optarg;
extern int optind;

#ifdef ANSI_FUNC
static void
usage (char *fname)
#else
static void usage(fname)
     char *fname;
#endif
{
  fprintf(stderr,
         "usage: %s <switches> ifile1 ifile2 ... ifilen ofile\n",
	 fname);
  fprintf(stderr, "optional switches:\n");
  fprintf(stderr, "  -a  cols             # columns to activate in all files\n");
  fprintf(stderr, "  -a1 cols ... an cols # columns to activate in each file\n");
  fprintf(stderr, "  -b  'c1:bvl,c2:bv2'  # blank values for common columns in all files\n");
  fprintf(stderr, "  -bn 'c1:bv1,c2:bv2'  # blank values for columns in specific files\n");
  fprintf(stderr, "  -j  col              # column to join in all files\n");
  fprintf(stderr, "  -j1 col ... jn col   # column to join in each file\n");
  fprintf(stderr, "  -m min               # min matches to output a row\n");
  fprintf(stderr, "  -M max               # max matches to output a row\n");
  fprintf(stderr, "  -s                   # add 'jfiles' status column\n");
  fprintf(stderr, "  -S col               # add col as status column\n");
  fprintf(stderr, "  -t tol               # tolerance for joining numeric cols [2 files only]\n");
  fprintf(stderr, "Between 2 and %d input files are allowed.\n", MAXIFILE);
  fprintf(stderr, "\n(version: %s)\n", FUN_VERSION);
  exit(1);
}

#ifdef ANSI_FUNC
static void
JoinMakeBlank(XFile file, char *defblank)
#else
static void
JoinMakeBlank(file, defblank)
     XFile file;
     char *defblank;
#endif
{
  int i, j;
  int ip=0;
  char tbuf[SZ_LINE];
  char *b;
  char *blanks[2];
  char *t, *v;
  unsigned char bval;
  short sval;
  unsigned short usval;
  int ival;
  longlong lval;
  unsigned int uival;
  float fval;
  double dval;

  /* start with a blank line */
  file->blank = xcalloc(file->rowsize, sizeof(char));
  /* blank specifications are separated by comma or semi */
  newdtable(",;");

  /* there are 2 places where we can get blank values: default and file */
  if( defblank ) 
    blanks[0] = xstrdup(defblank);
  else
    blanks[0] = NULL;
  if( file->bstr )
    blanks[1] = xstrdup(file->bstr);
  else
    blanks[1] = NULL;


  /* process defaults first, then overwrite with specifics */
  for(j=0; j<2; j++){
    if( !blanks[j] || !*blanks[j] ) continue;
    ip = 0;
    while( word(blanks[j], tbuf, &ip) ){
      if( (t=strchr(tbuf, ':')) ){
	v=t+1;
	*t = '\0';
	for(i=0; i<file->ncol; i++){
	  if( !strcasecmp(tbuf, file->cols[i].oname) ){
	    b = file->blank+file->cols[i].coffset;
	    switch(file->cols[i].type){
	    case 'L':
	      bval = atoi(v);
	      memcpy(b, &bval, sizeof(unsigned char));
	      break;
	    case 'X':
	      switch(file->cols[i].width/file->cols[i].n){
	      case 0:
	      case 1:
		bval = atoi(v);
		memcpy(b, &bval, sizeof(unsigned char));
		break;
	      case 2:
		sval = atoi(v);
		memcpy(b, &sval, sizeof(short));
		break;
	      case 4:
		ival = atoi(v);
		memcpy(b, &ival, sizeof(int));
		break;
	      default:
		gerror(stderr, "only set blank value on X of size 1,2,4\n");
		break;
	      }
	      break;
	    case 'B':
	      bval = atoi(v);
	      memcpy(b, &bval, sizeof(unsigned char));
	      break;
	    case 'I':
	      sval = atoi(v);
	      memcpy(b, &sval, sizeof(short));
	      break;
	    case 'J':
	      ival = atoi(v);
	      memcpy(b, &ival, sizeof(int));
	      break;
	    case 'K':
#if HAVE_LONG_LONG == 0
	      gerror(stderr, 
		 "64-bit data support not built (long long not available)\n");
#endif
	      lval = atoll(v);
	      memcpy(b, &lval, sizeof(longlong));
	      break;
	    case 'U':
	      usval = atoi(v);
	      memcpy(b, &usval, sizeof(unsigned short));
	      break;
	    case 'V':
	      uival = atoi(v);
	      memcpy(b, &uival, sizeof(unsigned int));
	      break;
	    case 'E':
	      if( !strcasecmp(t, "nan") ){
		fval = getnanf();
	      }
	      else{
		fval = atof(v);
	      }
	      memcpy(b, &fval, sizeof(float));
	      break;
	    case 'D':
	      if( !strcasecmp(t, "nan") ){
		dval = getnand();
	      }
	      else{
		dval = atof(v);
	      }
	      memcpy(b, &dval, sizeof(double));
	      break;
	    case 'A':
	      strncpy(b, v, file->cols[i].width);
	      break;
	    }
	  }
	}
      }
      else{
	gerror(stderr, "invalid blank specification: %s\n", tbuf);
      }
    }
  }
  /* free up delim table */
  freedtable();
  /* free blank strings */
  for(i=0; i<2; i++){
    if( blanks[i] ) xfree(blanks[i]);
  }
}

#ifdef ANSI_FUNC
static int
JoinAddCol(XFile file, char *name, char *oname,
	   int type, int mode, int offset, int n, int width, int coffset)
#else
static int
JoinAddCol(file, name, oname, type, mode, offset, n, width, coffset)
     XFile file;
     char *name;
     char *oname;
     int type;
     int mode;
     int offset;
     int n;
     int width;
     int coffset;
#endif
{
  if( !file->maxcol ){
    file->maxcol = 1;
    file->cols = xcalloc(file->maxcol, sizeof(XColRec));
  }
  else if( file->ncol >= file->maxcol ){
    file->maxcol *= 2;
    file->cols = xrealloc(file->cols, file->maxcol*sizeof(XColRec));
  }
  file->cols[file->ncol].name = xstrdup(name);;
  file->cols[file->ncol].oname = xstrdup(oname);;
  file->cols[file->ncol].type = type;
  file->cols[file->ncol].mode = mode;
  file->cols[file->ncol].offset = offset;
  file->cols[file->ncol].n = n;
  file->cols[file->ncol].width = width;
  file->cols[file->ncol].coffset = coffset;
  file->ncol++;
  return file->ncol;
}

#ifdef ANSI_FUNC
static int
JoinFilesLeft(XFile ifiles, int nfile)
#else
static int
JoinFilesLeft(ifiles, nfile)
     XFile ifiles;
     int nfile;
#endif
{
  int i;
  int left=0;

  for(i=0; i<nfile; i++){
    if( !ifiles[i].eof ){
      left++;
    }
  }
  return left;
}

#ifdef ANSI_FUNC
static int
JoinReadNext(XFile ifiles, int nfile, int which)
#else
static int
JoinReadNext(ifiles, nfile, which)
     XFile ifiles;
     int nfile;
     int which;
#endif
{
  int i;
  int got;
  int lo, hi;
  int nrec=0;

  if( which < 0 ){
    lo = 0;
    hi = ABS(which)-1;
  }
  else{
    lo = which;
    hi = which;
  }
  if( hi > nfile ) return 0;
  for(i=lo; i<=hi; i++){
    if( ifiles[i].eof ) continue;
    FunTableRowGet(ifiles[i].fun, (void *)&(ifiles[i]), 1, NULL, &got);
    if( !got ){
      ifiles[i].eof = 1;
    }
    else{
      nrec++;
    }
  }
  return nrec;
}

#ifdef ANSI_FUNC
static int
JoinGetMatches(XFile ifiles, int nfile, int ktype, double tol, char *matches)
#else
static int
JoinGetMatches(ifiles, nfile, ktype, tol, matches)
     XFile ifiles;
     int nfile;
     int ktype;
     double tol;
     char *matches;
#endif
{
  int i;
  int m=0;
  int ibase=-1;
  char *sval=NULL;
  double dval=0.0;

  /* no matches yet */
  memset(matches, 0, nfile);
  /* clear index position information */
  for(i=0; i<nfile; i++){
    ifiles[i].ibase = 0;
    ifiles[i].irow = -1;
  }
  /* get first valid file */
  for(i=0; i<nfile; i++){
    if( ifiles[i].eof ) continue;
    ibase = i;
    break;
  }
  /*make sure we have a valid file */
  if( ibase < 0 ) return 0;
  /* process all files and look for matches */
  switch(ktype){
  case KEY_STRING:
    /* get base */
    for(i=0; i<nfile; i++){
      if( ifiles[i].eof ) continue;
      /* smallest value is base */
      if( strcmp(ifiles[i].sval, ifiles[ibase].sval) < 0 ){
	ibase = i;
      }
    }
    /* this is the smallest value */
    sval = ifiles[ibase].sval;
    /* look for matches in all valid files */
    for(i=0; i<nfile; i++){
      if( ifiles[i].eof ) continue;
      /* ascii requires exact string match */
      if( !strcmp(ifiles[i].sval, sval) ){
	matches[m++] = i;
      }
    }
    break;
  case KEY_NUMERIC:
    /* get base */
    for(i=0; i<nfile; i++){
      if( ifiles[i].eof ) continue;
      /* smallest value is base */
      if( ifiles[i].dval < ifiles[ibase].dval ){
	ibase = i;
      }
    }
    /* this is the smallest value */
    dval = ifiles[ibase].dval;
    FunInfoGet(ifiles[ibase].fun, FUN_ROW, &ifiles[ibase].irow, 0);
    /* look for matches in all valid files */
    for(i=0; i<nfile; i++){
      if( ifiles[i].eof ) continue;
      /* tolerance test */
      if( (tol > 0.0) && ftol(ifiles[i].dval,dval,tol) ){
	matches[m++] = i;
	ifiles[i].mval = dval;
	FunInfoGet(ifiles[i].fun, FUN_ROW, &ifiles[i].irow, 0);
      }
      /* "exact" match */
      else if( feq(ifiles[i].dval,dval) ){
	matches[m++] = i;
	ifiles[i].irow = -1;
      }
    }
    break;
  }
  if( ibase >=0 ) ifiles[ibase].ibase = 1;
  return m;
}

#ifdef ANSI_FUNC
static int
JoinAddIndex(XFile ifile, int idx)
#else
static int
JoinAddIndex(ifile, idx)
     XFile ifile;
     int idx;
#endif
{
  if( !ifile->maxindex ){
    ifile->maxindex = 1;
    ifile->indexes = xcalloc(ifile->maxindex, sizeof(int));
  }
  else if( ifile->nindex >= ifile->maxindex ){
    ifile->maxindex *= 2;
    ifile->indexes = xrealloc(ifile->indexes, ifile->maxindex*sizeof(int));
  }
  ifile->indexes[ifile->nindex++] = idx;
  return ifile->nindex;
}

#ifdef ANSI_FUNC
static void
JoinGatherRows(XFile ifiles, int nfile, int ktype, double tol,
	       char *matches, int nmatch, int *resetflag)
#else
static void
JoinGatherRows(ifiles, nfile, ktype, tol, matches, nmatch, resetflag)
     XFile ifiles;
     int nfile;
     int ktype;
     double tol;
     char *matches;
     int nmatch;
     int *resetflag
#endif
{
  int i, j;
  int ibase=-1;
  char *sval=NULL;
  double dval;
  double mval;

  /* no need to reset rows yet */
  *resetflag = -1;
  /* make sure we have matches to process */
  if( !nmatch ) return;
  /* find base value */
  for(j=0; j<nmatch; j++){
    i = matches[j];
    if( ifiles[i].ibase ){
      ibase = i;
      break;
    }
  }
  /* should never happen */
  if( ibase < 0 ) return;
  /* for each match file, look for successive rows that also match */
  for(j=0; j<nmatch; j++){
    i = matches[j];
    ifiles[i].nindex = 0;
    JoinAddIndex(&ifiles[i], ifiles[i].idx);
    switch(ktype){
    case KEY_STRING:
      sval = ifiles[i].sval;
      while( JoinReadNext(ifiles, nfile, i) ){
	if( !strcmp(sval,ifiles[i].sval) ){
	  JoinAddIndex(&ifiles[i], ifiles[i].idx);
	}
	else{
	  break;
	}
      }
      break;
    case KEY_NUMERIC:
      dval = ifiles[i].dval;
      mval = ifiles[i].mval;
      while( JoinReadNext(ifiles, nfile, i) ){
	if( (tol > 0.0) && (i!=ibase) && ftol(ifiles[i].dval,mval,tol) ){
	  JoinAddIndex(&ifiles[i], ifiles[i].idx);
	}
	else if( feq(ifiles[i].dval,dval) ){
	  JoinAddIndex(&ifiles[i], ifiles[i].idx);
	}
	else{
	  /* If this is the base file and we are using a tolerance, and the
	     difference between the last base and this base value is less than
	     twice the tolerance, we have to reset all other file positions
	     and re-check those values against this new base value. */
	  if( (tol > 0.0) && (i==ibase) && ftol(ifiles[i].dval,dval,(2*tol)) ){
	    *resetflag = ibase;
	  }
	  break;
	}
      }
    }
  }
}

#ifdef ANSI_FUNC
static int
JoinWriteRows(XFile files, XFile ifiles, int nfile, char *matches,
	      int nmatch, int jbits, XFile ofiles)
#else
static int
JoinWriteRows(files, ifiles, nfile, matches, nmatch, jbits, ofiles)
     XFile files;
     XFile ifiles;
     int nfile;
     char *matches;
     int nmatch;
     int jbits;
     XFile ofiles;
#endif
{
  int i, j, k;
  int ii;
  int got;
  int nrow=1;
  char *buf;
  char *rowptr;
  char *flags=NULL;
  JBITMASK *jfiles=NULL;

  /* allocate flags to tell which files we proces */
  if( !(flags=xcalloc(nfile, sizeof(char))) ){
    return 0;
  }
  /* allocate space for joinfiles bitflag */
  if( jbits ){
    if( !(jfiles=xcalloc(jbits/JBITSIZE, JBITSIZE)) ){
      return 0;
    }
  }

  /* set initial values for files which have joins */
  for(i=0; i<nmatch; i++){
    ii = (int)matches[i];
    flags[ii] = 1;
    nrow *= ifiles[ii].nindex;
    ifiles[ii].counter = 0;
  }

  /* process all rows */
  for(i=0; i<nrow; i++){
    /* clear output rowbuf */
    memset(ofiles[0].rowbuf, 0, ofiles[0].rowsize);
    /* make up the row */
    for(j=0; j<nfile; j++){
      if( !flags[j] ){
	/* move blanks into output record for this row */
	IPRINTF((stderr, "blank "));
	memcpy(ofiles[0].rowbuf+files[j].rowoffset, 
	       files[j].blank, files[j].rowsize);
      }
      /* retrieve data and transfer active columns to output */
      else{
	ii = ifiles[j].counter;
	IPRINTF((stderr, "%d ", ifiles[j].indexes[ii]));
	if( FunTableRowSeek(files[j].fun, ifiles[j].indexes[ii], NULL) <0 ){
	  gerror(stderr, "can't seek to row %d: %s\n",
		 ifiles[j].indexes[ii], ifiles[j].fname);
	}
	if( !(buf=FunTableRowGet(files[j].fun, NULL, 1, NULL, &got)) || !got ){
	  gerror(stderr, "can't read row %d: %s\n",
		 ifiles[j].indexes[ii], ifiles[j].fname);
	}
	rowptr = ofiles[0].rowbuf+files[j].rowoffset;
	for(k=0; k<files[j].ncol; k++){
	  memcpy(rowptr, buf+files[j].cols[k].offset, files[j].cols[k].width);
	  rowptr += files[j].cols[k].width;
	}
	if( jbits ) jfiles[j/JBITSIZE] |= 1<<(j%JBITSIZE);
       	if( buf )  xfree(buf);
      }
    }
    /* save jfiles flag value, if necessary */
    if( jbits ){
      rowptr = ofiles[0].rowbuf + ofiles[0].rowoffset;
      memcpy(rowptr, jfiles, jbits);
    }
    /* write row */
    IPRINTF((stderr, "\n"));
    if( !FunTableRowPut(ofiles[0].fun, ofiles[0].rowbuf, 1, 0, NULL) ){
      gerror(stderr, "can't write output row\n");
    }
    /* inc to next row */
    for(j=nmatch-1; j>=0; j--){
      ii = matches[j];
      ifiles[ii].counter++;
      if( ifiles[ii].counter >= ifiles[ii].nindex ){
	ifiles[ii].counter = 0;
      }
      else{
	break;
      }
    }
  }
  /* free up space */
  if( flags ) xfree(flags);
  if( jfiles) xfree(jfiles);   
  return 1;
}

#ifdef ANSI_FUNC
static void
JoinResetRows(XFile ifiles, char *matches, int nmatch, int resetflag)
#else
static void 
JoinResetRows(ifiles, matches, nmatch, resetflag)
     XFile ifiles;
     char *matches;
     int nmatch;
     int resetflag;
#endif
{
  int i, j;
  /* reset index positions so that we re-check tolerances */
  if( resetflag >= 0 ){
    for(j=0; j<nmatch; j++){
      i = matches[j];
      if( !ifiles[i].ibase && (ifiles[i].irow>=0) ){
	ifiles[i].eof = 0;
	FunTableRowSeek(ifiles[i].fun, ifiles[i].irow, NULL);
	JoinReadNext(ifiles, i, i);
      }
    }
  }
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
  int i, j, k;
  int type, mode, offset, n, width;
  int namei;
  int coffset;
  int resetflag=-1;
  int jbits=0;
  int nmatch=0;
  int minmatch=1;
  int maxmatch=MAXIFILE;
  int nfile=0;
  int tcol=0;
  int osize=0;
  int oncol=0;
  int ktype=0;
  int *ooffsets=NULL;
  char *matches=NULL;
  char *name;
  char *basename;
  char *defact=NULL;
  char *defcol=NULL;
  char *defblank=NULL;
  char *s;
  char *filtstr;
  char *jfiles=NULL;
  char **onames=NULL;
  char **otypes=NULL;
  char **omodes=NULL;
  char tbuf[SZ_LINE];
  char tbuf2[SZ_LINE];
  char namebuf[SZ_LINE];
  double tlmin, tlmax, binsiz, tscale, tzero;
  double tol;
  XFile files=NULL, ifiles=NULL, ofiles=NULL;

  /* exit on gio errors */
  if( !getenv("GERROR")  )
    setgerror(2);

  /* get maxrow,if user-specified */
  if( (s=getenv("FUN_MAXROW")) != NULL )
    maxrow = atoi(s);

  /* we are using indexes specially and don't want to use them normally */
  putenv("FILTER_IDX_ACTIVATE=false");

  /* allocate input and output file arrays (we'll do the index array later) */
  if( !(files=xcalloc(MAXIFILE, sizeof(XFileRec))) ){
    gerror(stderr, "can't allocate primary record structure for join\n");
  }
  if( !(ofiles=xcalloc(MAXOFILE, sizeof(XFileRec))) ){
    gerror(stderr, "can't allocate output record structure for join\n");
  }

  /* process arguments */
  for(i=1; i<argc; i++) {
    if ( argv[i][0] == '-' ) {
      switch (argv[i][1]) {
      case 'a':
	if( argv[i][2] ){
	  j = atoi(&argv[i][2])-1;
	  if( (j >= 0) && (j < MAXIFILE) && (i < argc-1)){
	    files[j].actstr = argv[++i];
	  }
	  else{
	    gerror(stderr, "invalid index for column activate: %d\n", j+1);
	  }
	}
	else{
	  defact = argv[++i];
	}
	break;
      case 'b':
	if( argv[i][2] ){
	  j = atoi(&argv[i][2])-1;
	  if( (j >= 0) && (j < MAXIFILE) && (i < argc-1)){
	    files[j].bstr = argv[++i];
	  }
	  else{
	    gerror(stderr, "invalid index for join column: %d\n", j+1);
	  }
	}
	else{
	  defblank = argv[++i];
	}
	break;
      case 'j':
	if( argv[i][2] ){
	  j = atoi(&argv[i][2])-1;
	  if( (j >= 0) && (j < MAXIFILE) && (i < argc-1)){
	    files[j].jname = argv[++i];
	  }
	  else{
	    gerror(stderr, "invalid index for join column: %d\n", j+1);
	  }
	}
	else{
          if (i < argc-1) {
	    defcol = argv[++i];
	  }
	}
	break;
      case 'm':
        if (i < argc-1) {
	  minmatch = atoi(argv[++i])+1;
	}
	if( minmatch < 1 ) minmatch = 1;
	break;
      case 'M':
        if (i < argc-1) {
	  maxmatch = atoi(argv[++i])+1;
	}
	if( maxmatch < 1 ) maxmatch = 1;
	break;
      case 's':
	jfiles = JFILES_COL;
	break;
      case 'S':
        if (i < argc-1) {
	  jfiles = argv[++i];
	}
	break;
      case 't':
        if (i < argc-1) {
	  tol = atof(argv[++i]);
	}
	if( tol <= 0 ){
	  gerror(stderr, "tolerance value must be positive\n");
	}
	break;
      }
      continue;
    }
    /* no switch -- must be a file name */
    if( nfile < MAXIFILE ){
      files[nfile].fname = argv[i];
      nfile++;
    }
    else{
      gerror(stderr, "too many files (%d > %d)\n", nfile, MAXIFILE);
    }
  }

  /* make sure we have at least 2 input + 1 output file args */
  if( nfile < 3 ) usage(argv[0]);

  /* for now, tolerance only works with 2 files */
  if( (tol > 0.0) && (nfile > 3) ){
    gerror(stderr, "for now, -t [tol] can only join 2 files\n");
  }

  /* move last input to output and decrement number of input files */
  ofiles[0].fname = files[nfile-1].fname;
  nfile--;

  /* reallocate input files */
  if( !(files=xrealloc(files, nfile*sizeof(XFileRec))) ){
    gerror(stderr, "can't re-allocate primary record structure for join\n");
  }

  /* make sure we have a join column name for each file */
  for(i=0; i<nfile; i++){
    if( !files[i].jname ){
      if( defcol ){
	files[i].jname = defcol;
      }
      else{
	gerror(stderr,
	       "no join column specified for file: %s\n", files[i].fname);
      }
    }
  }

  /* allocate exact number of index file records */
  if( !(ifiles=xcalloc(nfile, sizeof(XFileRec))) ){
    gerror(stderr, "can't allocate primary record structure for join\n");
  }
  if( !(matches=(char *)xcalloc(nfile, sizeof(char))) ){
    gerror(stderr, "can't allocate key result buffer\n");
  }

  /* open input and index files */
  for(i=0; i<nfile; i++){
    /* open the input data file */
    if( !(files[i].fun = FunOpen(files[i].fname, "r", NULL)) ){
      gerror(stderr,
	     "can't FunOpen input file (or find extension): %s\n", 
	     files[i].fname);
    }
    /* make sure the join column is in this file */
    if( !FunColumnLookup(files[i].fun, files[i].jname, 0, NULL,
			 &files[i].jtype,
			 &files[i].jmode,
			 &files[i].joffset,
			 &files[i].jn,
			 &files[i].jwidth) ){
      gerror(stderr, "can't find column %s in input file: %s\n",
	     files[i].jname, files[i].fname);
    }
    /* check for filter (we read index directly, bypassing filters) */
    filtstr=NULL;
    FunInfoGet(files[i].fun, FUN_FILTER, &filtstr, 0);
    if( filtstr && *filtstr ){
      gerror(stderr, "row filters are not permitted: %s\n", files[i].fname);
    }
    /* activate specified columns */
    if( files[i].actstr )
      FunColumnActivate(files[i].fun, files[i].actstr, NULL);
    else
      FunColumnActivate(files[i].fun, defact, NULL);
    /* reset rowoffset flag for this file */
    files[i].rowoffset = -1;
    /* get number of possible columns */
    FunInfoGet(files[i].fun, FUN_NCOL, &(files[i].tcol), 0);
    /* temp counter of total number of columns */
    tcol += files[i].tcol;
    /* open the index for the specified join column */
    idxinitfilenames(files[i].fun->header->filename, NULL);
    s = idxindexfilename(files[i].jname, NULL);
    idxfreefilenames();
    if( !s ){
      gerror(stderr, "can't find index file for column '%s' in file: %s\n",
	     files[i].jname, files[i].fname);
    }
    if( !(ifiles[i].fun = FunOpen(s, "r", NULL)) ){
      gerror(stderr, "can't FunOpen index file (or find extension): %s\n", s);
    }
    /* get gio handle for seeking and sving */
    FunInfoGet(ifiles[i].fun, FUN_GIO, &ifiles[i].igio, 0);
    /* make sure the join column is in the index file */
    ifiles[i].fname = xstrdup(s);
    ifiles[i].jname = files[i].jname;
    if( !FunColumnLookup(ifiles[i].fun, ifiles[i].jname, 0, NULL,
			 &ifiles[i].jtype,
			 &ifiles[i].jmode,
			 &ifiles[i].joffset,
			 &ifiles[i].jn,
			 &ifiles[i].jwidth) ){
      gerror(stderr, "can't find column %s in index file: %s\n",
	     ifiles[i].jname, ifiles[i].fname);
    }
    /* define how we will read index file, based on data type of join column */
    switch(ifiles[i].jtype){
    case 'B':
    case 'I':
    case 'J':
    case 'K':
    case 'U':
    case 'V':
    case 'L':
    case 'X':
      FunColumnSelect(ifiles[i].fun, sizeof(XFileRec), NULL,
		      "n",             "J", "r", FUN_OFFSET(XFile, idx),
		      ifiles[i].jname, "D", "r", FUN_OFFSET(XFile, dval),
		      NULL);
      ifiles[i].dtype = 'D';
      ktype |= KEY_NUMERIC;
      break;
    case 'D':
    case 'E':
      FunColumnSelect(ifiles[i].fun, sizeof(XFileRec), NULL,
		      "n",             "J", "r", FUN_OFFSET(XFile, idx),
		      ifiles[i].jname, "D", "r", FUN_OFFSET(XFile, dval),
		      NULL);
      ifiles[i].dtype = 'D';
      ktype |= KEY_NUMERIC;
      break;
    case 'A':
      snprintf(tbuf, SZ_LINE-1, "@%dA", ifiles[i].jn);
      FunColumnSelect(ifiles[i].fun, sizeof(XFileRec), NULL,
		      "n",           "J",  "r", FUN_OFFSET(XFile, idx),
		      ifiles[i].jname, tbuf, "r", FUN_OFFSET(XFile, sval),
		      NULL);
      ifiles[i].dtype = 'A';
      ifiles[i].sval = xcalloc(ifiles[i].jn+1, sizeof(char));
      ktype |= KEY_STRING;
      break;
    default:
      gerror(stderr, "bad datatype for join column: %c\n", ifiles[i].jtype);
    }
    /* free up temp space */
    if( s ) xfree(s);
  }
  /* we don't allow mixing of string and numeric values */
  if( ktype == (KEY_STRING|KEY_NUMERIC) ){
    gerror(stderr, "can't mix string and numeric join columns\n");
  }

  /* open output file */
  if( !(ofiles[0].fun = FunOpen(ofiles[0].fname, "w", NULL)) ){
    gerror(stderr, "can't FunOpen output file: %s\n", ofiles[0].fname);
  }

  /* allocate space for the max number of columns we can have (incl jfiles) */
  onames = (char **)xcalloc(tcol+1, sizeof(char *));
  otypes = (char **)xcalloc(tcol+1, sizeof(char *));
  omodes = (char **)xcalloc(tcol+1, sizeof(char *));
  ooffsets = (int *)xcalloc(tcol+1, sizeof(int));

  /* contruct list of output columns */
  for(i=0; i<nfile; i++){
    coffset = 0;
    for(j=0; j<files[i].tcol; j++){
      if( !FunColumnLookup(files[i].fun, NULL, j,
			   &name, &type, &mode, &offset, &n, &width) ){
	gerror(stderr,
	       "can't find column %d in input file: %s\n", j, files[i].fname);
      }
      if( mode & COL_ACTIVE ){
	/* save original name in case of duplicate */
	basename = name;
	/* first numeric value we will append */
       	namei  = 2;
again:
	for(k=0; k<oncol; k++){
	  if( !strcasecmp(name, onames[k]) ){
	    k = -1;
	    break;
	  }
	}
	/* append a file number to duplicate names */
	if( k < 0 ){
	  snprintf(namebuf, SZ_LINE-1, "%s_%d", basename, namei);
	  name = namebuf;
	  namei++;
	  IPRINTF((stderr, "trying new col name for file %d: %s\n", i, name));
	  goto again;
	}
	/* add column */
	JoinAddCol(&files[i], name, basename, type, mode, offset, n, width, 
		   coffset);
	/* bump offset into current row */
	coffset += width;
	/* size of active columns for this file only -- save in index rec */
	files[i].rowsize += width;
	/* offset into output where this file's contribution starts */
	if( files[i].rowoffset < 0 ) files[i].rowoffset = osize;
	/* get auxiliary info */
	FunColumnLookup2(files[i].fun, NULL, j, 
			 &tlmin, &tlmax, &binsiz, &tscale, &tzero);
	/* generate type string */
	snprintf(tbuf, SZ_LINE-1, "%d%c", n, type);
	if( !feq(tlmin, tlmax) ){
	  snprintf(tbuf2, SZ_LINE-1, ":%f:%f", tlmin, tlmax);
	  strncat(tbuf, tbuf2, SZ_LINE-1);
	}
	if( !feq(binsiz, 0.0) && !feq(binsiz, 1.0) ){
	  snprintf(tbuf2, SZ_LINE-1, ":%f", binsiz);
	  strncat(tbuf, tbuf2, SZ_LINE-1);
	}
	if( !feq(tscale, 0.0) ){
	  snprintf(tbuf2, SZ_LINE-1, ";%f", tscale);
	  strncat(tbuf, tbuf2, SZ_LINE-1);
	  if( !feq(tzero, 0.0) ){
	    snprintf(tbuf2, SZ_LINE-1, ":%f", tzero);

	    strncat(tbuf, tbuf2, SZ_LINE-1);
	  }
	}
	IPRINTF((stderr, "%d: name=%s type=%c mode=%o offset=%d n=%d => %s\n",
		 i, name, type, mode, offset, n, tbuf));
	/* save column info */
	onames[oncol] = xstrdup(name);
	otypes[oncol] = xstrdup(tbuf);
	omodes[oncol] = "w";
	ooffsets[oncol] = osize;
	/* total size for all files */
	osize += width;
	oncol++;
      }
    }
    /* create blank line for this file */
    JoinMakeBlank(&files[i], defblank);
    /* add filename to header */
    FunParamPuts(ofiles[0].fun, "JFILE", i+1, files[i].fname, "join file", 1);
  }

  /* and one more for joinfiles, if needed */
  if( jfiles ){
    strncpy(tbuf, jfiles, SZ_LINE-1);
    cluc(tbuf);
    onames[oncol] = xstrdup(tbuf);
    jbits = ((MAXIFILE+7)/8)*8;
    snprintf(tbuf, SZ_LINE-1, "%dX", jbits);
    otypes[oncol] = xstrdup(tbuf);
    omodes[oncol] = "w";
    ooffsets[oncol] = osize;
    /* save for later use */
    ofiles[0].rowoffset = osize;
    /* total size for all files */
    osize += (jbits/8);
    oncol++;
  }

  /* reallocate output column array to correct size */
  onames = (char **)xrealloc(onames, oncol*sizeof(char *));
  otypes = (char **)xrealloc(otypes, oncol*sizeof(char *));
  omodes = (char **)xrealloc(omodes, oncol*sizeof(char *));
  ooffsets = (int *)xrealloc(ooffsets, oncol*sizeof(int));

  /* set up the output columns */
  FunColumnSelectArr(ofiles[0].fun, osize, NULL, 
		     onames, otypes, omodes, ooffsets, oncol);

  /* this tells us the size of the output buffer */
  FunInfoGet(ofiles[0].fun, FUN_ROWSIZE, &(ofiles[0].rowsize), 0);
  ofiles[0].rowbuf = xcalloc(ofiles[0].rowsize, sizeof(char));

  /* read a record from each index */
  JoinReadNext(ifiles, nfile, -nfile);

  /* check for joins, all rows in all files */
  while( JoinFilesLeft(ifiles, nfile) > 0 ){
    nmatch = JoinGetMatches(ifiles, nfile, ktype, tol, matches);
    /* yikes ... when we reset rows to check against the next base,
       we don't want to write out anything if there is no match, since this
       was already done with the last base ... its confusing */
    if( (tol > 0.0) && (nmatch == 1) && (resetflag >=0) && 
	(resetflag != matches[0]) ){
      for(i=0; i<nmatch; i++){
	JoinReadNext(ifiles, nfile, matches[i]);
      }
    }
    /* this is the normal output of matched rows */
    else if( (nmatch >= minmatch) && (nmatch <= maxmatch) ){
      JoinGatherRows(ifiles, nfile, ktype, tol, matches, nmatch, &resetflag);
      /* write all matched rows */
      if(!JoinWriteRows(files, ifiles, nfile, matches, nmatch, jbits, ofiles)){
	gerror(stderr, "can't write rows for join\n");
      }
      /* might have to reset the rows when using tolerance values */
      JoinResetRows(ifiles, matches, nmatch, resetflag);
    }
    /* no output, so we advance the rows that matched */
    else{
      for(i=0; i<nmatch; i++){
	JoinReadNext(ifiles, nfile, matches[i]);
      }
    }
  }

  /* free output column arrays */
  if( omodes )   xfree(omodes);
  if( ooffsets ) xfree(ooffsets);
  if( otypes ){
    for(i=0; i<oncol; i++){
      if( otypes[i] ) xfree(otypes[i]);
    }
    xfree(otypes);
  }
  if( onames ){
    for(i=0; i<oncol; i++){
      if( onames[i] ) xfree(onames[i]);
    }
    xfree(onames);
  }

  /* close input files and index files */
  if( files ){
    for(i=0; i<nfile; i++){
      if( files[i].fun  )    FunClose(files[i].fun);
      if( files[i].blank )   xfree(files[i].blank);
      if( files[i].cols ){
	for(j=0; j<files[i].ncol; j++){
	  if( files[i].cols[j].name )  xfree(files[i].cols[j].name);
	  if( files[i].cols[j].oname ) xfree(files[i].cols[j].oname);
	}
	xfree(files[i].cols);
      }
    }
    xfree(files);
  }
  if( ifiles ){
    for(i=0; i<nfile; i++){
      if( ifiles[i].fun  )    FunClose(ifiles[i].fun);
      if( ifiles[i].fname )   xfree(ifiles[i].fname);
      if( ifiles[i].indexes ) xfree(ifiles[i].indexes);
      if( ifiles[i].sval )    xfree(ifiles[i].sval);
    }
    xfree(ifiles);
  }
  if( ofiles ){
    for(i=0; i<MAXOFILE; i++){
      if( ofiles[i].fun  )   FunClose(ofiles[i].fun);
      if( ofiles[i].rowbuf ) xfree(ofiles[i].rowbuf);
    }
    xfree(ofiles);
  }

  /* free up everything else */
  if( matches )  xfree(matches);

  return(0);
}
