/*
 *
 * evread.c -- example program for reading rows in different ways
 *
 */

#include <funtoolsP.h>

#define MAXROW 10000

extern char *optarg;
extern int optind;

/* single event (used in array of structs) */
typedef struct evstruct{
  short region;
  double x, y;
  int pi, pha;
  double time;
  double dx, dy;
} *Ev, EvRec;

/* arrays of columns (used in struct of arrays) */
typedef struct aevstruct{
  short region[MAXROW];
  double x[MAXROW], y[MAXROW];
  int pi[MAXROW], pha[MAXROW];
  double time[MAXROW];
  double dx[MAXROW], dy[MAXROW];
} *AEv, AEvRec;

/* pointers to arrays of columns (used in struct of arrays) */
typedef struct pevstruct{
  short *region;
  double *x, *y;
  int *pi, *pha;
  double *time;
  double *dx, *dy;
} *PEv, PEvRec;

#ifdef ANSI_FUNC
int 
main (int argc, char **argv)
#else
main(argc, argv)
     int argc;
     char **argv;
#endif
{
  int i;
  int c;
  int got;
  int put;
  int args;
  int ncol;
  int ctype, cn, tcol;
  int doev=0;
  int doseek=0;
  int doualloc=0;
  int nrow;
  int maxrow;
  char tbuf[SZ_LINE];
  char *mode="r";
  char *iname;
  char *oname=NULL;
  char *params=NULL;
  char *cname;
  Fun fun=NULL;
  Fun ofun=NULL;
  void *buf=NULL;
  Ev ev, ebuf=NULL;
  AEv aev, abuf=NULL;
  PEv pev, pbuf=NULL;
  FITSHead header=NULL;
  FunCol *cols;

  /* process switch arguments */
  while ((c = getopt(argc, argv, "aepusw:")) != -1){
    switch(c){
    case 'a':
      doev = 1;
      params = "org=soa";
      break;
    case 'e':
      doev = 0;
      params = "org=aos";
      break;
    case 'f':
      doev = 3;
      params = "org=aos";
      break;
    case 'p':
      doev = 2;
      params = "org=soa";
      break;
    case 's':
      doseek = 1;
      break;
    case 'u':
      doualloc = 1;
      break;
    case 'w':
      oname = optarg;
      mode = "rw";
      break;
    }
  }

  /* check for required arguments */
  args = argc - optind;
  if( args == 0 )
    iname = "test.ev[EVENTS]";
  else
    iname = argv[optind];

  /* open input file */
  if( !(fun = FunOpen(iname, "r", NULL)) ){
    gerror(stderr, "could not FunOpen %s\n", iname);
    exit(1);
  }

  /* open output file, if necessary */
  if( oname ){
    if( !(ofun = FunOpen(oname, "w", fun)) ){
      gerror(stderr, "could not FunOpen outout %s\n", oname);
      exit(1);
    }
  }

  /* set number of rows to read at once */
  if( doseek )
    maxrow = 1;
  else
    maxrow = MAXROW;

  /* display column information from raw data file */
  /* first get fitsy header info */
  FunInfoGet(fun, FUN_HEADER, &header, FUN_COLS, &cols, FUN_NCOL, &ncol, 0);
  if( !header->table ){
    gerror(stderr, "not a table\n");
    exit(1);
  }
  fprintf(stdout, "   name\t   type\t      n\t    col\t  otype\t scaled\n");
  fprintf(stdout, "-------\t-------\t-------\t-------\t-------\t-------\n");
  for(i=0; i<ncol; i++){
    /* current type info, which might have a changed data type if its scaled */
    if( !FunColumnLookup(fun, NULL, i,
			 &cname, &ctype, NULL, NULL, &cn, NULL) ){
      gerror(stderr, "missing column %d\n", i);
      exit(1);
    }
    /* non-negative tcols point to raw columns in FITS table, where we can
       determine the original data type and whether scaling params exist */
    if( (tcol = cols[i]->tcol) >= 0 ){
      fprintf(stdout, "%7s\t%7c\t%7d\t%7d\t%7c\t%7d\n",
	      cname, ctype, cn,
	      tcol,
	      header->table->col[tcol].type,
	      header->table->col[tcol].scaled);
    }
  }
  fprintf(stdout, "\n");

  /* specify columns we want */
  switch(doev){
  /* array of structs */
  case 0:
    got = FunColumnSelect(fun, sizeof(EvRec), params,
			  "x",       "D:10:10", mode, FUN_OFFSET(Ev, x),
			  "y",       "D:10:10", mode, FUN_OFFSET(Ev, y),
			  "pha",     "J",       mode, FUN_OFFSET(Ev, pha),
			  "pi",      "J",       mode, FUN_OFFSET(Ev, pi),
			  "time",    "1D",      mode, FUN_OFFSET(Ev, time),
			  "dx",      "D:10:10", mode, FUN_OFFSET(Ev, dx),
			  "dy",      "D:10:10", mode, FUN_OFFSET(Ev, dy),
			  "$region", "I",       mode, FUN_OFFSET(Ev, region),
			  NULL);
    if( doualloc ){
      ebuf = calloc(MAXROW, sizeof(EvRec));
      buf = ebuf;
    }
    break;
  /* struct of arrays */
  case 1:
    got = FunColumnSelect(fun, sizeof(AEvRec), params,
			  "x",       "D:10:10", mode, FUN_OFFSET(AEv, x),
			  "y",       "D:10:10", mode, FUN_OFFSET(AEv, y),
			  "pha",     "J",       mode, FUN_OFFSET(AEv, pha),
			  "pi",      "J",       mode, FUN_OFFSET(AEv, pi),
			  "time",    "1D",      mode, FUN_OFFSET(AEv, time),
			  "dx",      "D:10:10", mode, FUN_OFFSET(AEv, dx),
			  "dy",      "D:10:10", mode, FUN_OFFSET(AEv, dy),
			  "$region", "I",       mode, FUN_OFFSET(AEv, region),
			  NULL);
    if( doualloc ){
      abuf = calloc(1, sizeof(AEvRec));
      buf = abuf;
    }
    break;
  /* struct of pointers */
  case 2:
    got = FunColumnSelect(fun, sizeof(PEvRec), params,
			  "x",       "@D:10:10", mode, FUN_OFFSET(PEv, x),
			  "y",       "@D:10:10", mode, FUN_OFFSET(PEv, y),
			  "pha",     "@J",       mode, FUN_OFFSET(PEv, pha),
			  "pi",      "@J",       mode, FUN_OFFSET(PEv, pi),
			  "time",    "@1D",      mode, FUN_OFFSET(PEv, time),
			  "dx",      "@D:10:10", mode, FUN_OFFSET(PEv, dx),
			  "dy",      "@D:10:10", mode, FUN_OFFSET(PEv, dy),
			  "$region", "@I",       mode, FUN_OFFSET(PEv, region),
			  NULL);
    if( doualloc ){
      pbuf = calloc(1, sizeof(PEvRec));
      pbuf->region = calloc(MAXROW, sizeof(short));
      pbuf->x = calloc(MAXROW, sizeof(double));
      pbuf->y = calloc(MAXROW, sizeof(double));
      pbuf->pi = calloc(MAXROW, sizeof(int));
      pbuf->pha = calloc(MAXROW, sizeof(int));
      pbuf->time = calloc(MAXROW, sizeof(double));
      pbuf->dx = calloc(MAXROW, sizeof(double));
      pbuf->dy = calloc(MAXROW, sizeof(double));
      buf = pbuf;
    }
    break;
  /* array of structs containing pointers */
  case 3:
    got = FunColumnSelect(fun, sizeof(PEvRec), params,
			  "x",       "@D:10:10", mode, FUN_OFFSET(PEv, x),
			  "y",       "@D:10:10", mode, FUN_OFFSET(PEv, y),
			  "pha",     "@J",       mode, FUN_OFFSET(PEv, pha),
			  "pi",      "@J",       mode, FUN_OFFSET(PEv, pi),
			  "time",    "@1D",      mode, FUN_OFFSET(PEv, time),
			  "dx",      "@D:10:10", mode, FUN_OFFSET(PEv, dx),
			  "dy",      "@D:10:10", mode, FUN_OFFSET(PEv, dy),
			  "$region", "@I",       mode, FUN_OFFSET(PEv, region),
			  NULL);
    if( doualloc ){
      pbuf = calloc(1, sizeof(PEvRec));
      pbuf->region = calloc(1, sizeof(short));
      pbuf->x = calloc(1, sizeof(double));
      pbuf->y = calloc(1, sizeof(double));
      pbuf->pi = calloc(1, sizeof(int));
      pbuf->pha = calloc(1, sizeof(int));
      pbuf->time = calloc(1, sizeof(double));
      pbuf->dx = calloc(1, sizeof(double));
      pbuf->dy = calloc(1, sizeof(double));
      buf = pbuf;
    }
    break;
  default:
    gerror(stderr, "unknown params value: %d\n", doev);
    break;
  }

  /* get rows */
  while( 1 ){
    if( doseek ){
      fprintf(stdout, "Enter row: ");
      fflush(stdout);
      fgets(tbuf, SZ_LINE, stdin);
      nrow = atoi(tbuf);
      if( nrow <=0 ) break;
      if( FunTableRowSeek(fun, nrow, NULL) < 0 ){
	gerror(stderr, "FunTableRowSeek() failed on row %d\n", nrow);
	exit(1);
      }
    }
    buf = (void *)FunTableRowGet(fun, buf, maxrow, NULL, &got);
    if( !buf ) break;
    /* output if necessary */
    if( ofun ){
      if( (put=FunTableRowPut(ofun, buf, got, 0, NULL)) != got ){
	gerror(stderr, "expected to write %d rows; only wrote %d\n",
	       got, put);
      }
    }
    /* and display */
    switch(doev){
    case 0:
      for(i=0; i<got; i++){
	ev = (Ev)buf+i;
	fprintf(stdout, "%12.8f %12.8f %4d %4d %18.8f %8.4f %8.4f %4d\n",
		ev->x, ev->y,
		ev->pha, ev->pi,
		ev->time,
		ev->dx, ev->dy,
		(int)ev->region);
	fflush(stdout);
      }
      break;
    case 1:
      aev = (AEv)buf;
      for(i=0; i<got; i++){
	fprintf(stdout, "%12.8f %12.8f %4d %4d %18.8f %8.4f %8.4f %4d\n",
		aev->x[i], aev->y[i],
		aev->pha[i], aev->pi[i],
		aev->time[i], 
		aev->dx[i], aev->dy[i],
		(int)aev->region[i]);
	fflush(stdout);
      }
      break;
    case 2:
      pev = (PEv)buf;
      for(i=0; i<got; i++){
	fprintf(stdout, "%12.8f %12.8f %4d %4d %18.8f %8.4f %8.4f %4d\n",
		pev->x[i], pev->y[i],
		pev->pha[i], pev->pi[i],
		pev->time[i],
		pev->dx[i], pev->dy[i],
		(int)pev->region[i]);
	fflush(stdout);
      }
      break;
    case 3:
      for(i=0; i<got; i++){
	pev = (PEv)buf+i;
	fprintf(stdout, "%12.8f %12.8f %4d %4d %18.8f %8.4f %8.4f %4d\n",
		pev->x[0], pev->y[0],
		pev->pha[0], pev->pi[0],
		pev->time[0],
		pev->dx[0], pev->dy[0],
		(int)pev->region[0]);
	fflush(stdout);
      }
      break;
    default:
      gerror(stderr, "unknown params value: %d\n", doev);
      break;
    }
    /* if funtools did allocation, free it now */
    if( !doualloc ){
      if( buf ) xfree(buf);
      buf = NULL;
    }
  }

  /* clean up */
  if( doualloc ){
    switch(doev){
    case 0:
      if( ebuf ) xfree(ebuf);
      break;
    case 1:
      if( abuf ) xfree(abuf);
      break;
    case 2:
      if( pbuf->region ) xfree(pbuf->region);
      if( pbuf->x ) xfree(pbuf->x);
      if( pbuf->y ) xfree(pbuf->y);
      if( pbuf->pi ) xfree(pbuf->pi);
      if( pbuf->pha ) xfree(pbuf->pha);
      if( pbuf->time ) xfree(pbuf->time);
      if( pbuf->dx ) xfree(pbuf->dx);
      if( pbuf->dy ) xfree(pbuf->dy);
      if( pbuf ) xfree(pbuf);
      break;
    }
  }
  if( ofun ) FunClose(ofun);
  FunClose(fun);
  return(0);
}
