/*
 *
 * evread.c -- example program for reading rows in different ways
 *
 */

#include <funtools.h>

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
  int doev=0;
  int doualloc=0;
  char *mode="r";
  char *iname;
  char *oname=NULL;
  char *params=NULL;
  Fun fun=NULL;
  Fun ofun=NULL;
  void *buf=NULL;
  Ev ev, ebuf=NULL;
  AEv aev, abuf=NULL;
  PEv pev, pbuf=NULL;
  
  /* process switch arguments */
  while ((c = getopt(argc, argv, "aepuw:")) != -1){
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

  /* specify columns we want */
  switch(doev){
  /* array of structs */
  case 0:
    got = FunColumnSelect(fun, sizeof(EvRec), params,
			  "$region", "I",       mode, FUN_OFFSET(Ev, region),
			  "x",       "D:10:10", mode, FUN_OFFSET(Ev, x),
			  "y",       "D:10:10", mode, FUN_OFFSET(Ev, y),
			  "dx",      "D:10:10", mode, FUN_OFFSET(Ev, dx),
			  "dy",      "D:10:10", mode, FUN_OFFSET(Ev, dy),
			  "pi",      "J",       mode, FUN_OFFSET(Ev, pi),
			  "pha",     "J",       mode, FUN_OFFSET(Ev, pha),
			  "time",    "1D",      mode, FUN_OFFSET(Ev, time),
			  NULL);
    if( doualloc ){
      ebuf = calloc(MAXROW, sizeof(EvRec));
      buf = ebuf;
    }
    break;
  /* struct of arrays */
  case 1:
    got = FunColumnSelect(fun, sizeof(AEvRec), params,
			  "$region", "I",       mode, FUN_OFFSET(AEv, region),
			  "x",       "D:10:10", mode, FUN_OFFSET(AEv, x),
			  "y",       "D:10:10", mode, FUN_OFFSET(AEv, y),
			  "dx",      "D:10:10", mode, FUN_OFFSET(AEv, dx),
			  "dy",      "D:10:10", mode, FUN_OFFSET(AEv, dy),
			  "pi",      "J",       mode, FUN_OFFSET(AEv, pi),
			  "pha",     "J",       mode, FUN_OFFSET(AEv, pha),
			  "time",    "1D",      mode, FUN_OFFSET(AEv, time),
			  NULL);
    if( doualloc ){
      abuf = calloc(1, sizeof(AEvRec));
      buf = abuf;
    }
    break;
  /* struct of pointers */
  case 2:
    got = FunColumnSelect(fun, sizeof(PEvRec), params,
			  "$region", "@I",       mode, FUN_OFFSET(PEv, region),
			  "x",       "@D:10:10", mode, FUN_OFFSET(PEv, x),
			  "y",       "@D:10:10", mode, FUN_OFFSET(PEv, y),
			  "dx",      "@D:10:10", mode, FUN_OFFSET(PEv, dx),
			  "dy",      "@D:10:10", mode, FUN_OFFSET(PEv, dy),
			  "pi",      "@J",       mode, FUN_OFFSET(PEv, pi),
			  "pha",     "@J",       mode, FUN_OFFSET(PEv, pha),
			  "time",    "@1D",      mode, FUN_OFFSET(PEv, time),
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
			  "$region", "@I",       mode, FUN_OFFSET(PEv, region),
			  "x",       "@D:10:10", mode, FUN_OFFSET(PEv, x),
			  "y",       "@D:10:10", mode, FUN_OFFSET(PEv, y),
			  "dx",      "@D:10:10", mode, FUN_OFFSET(PEv, dx),
			  "dy",      "@D:10:10", mode, FUN_OFFSET(PEv, dy),
			  "pi",      "@J",       mode, FUN_OFFSET(PEv, pi),
			  "pha",     "@J",       mode, FUN_OFFSET(PEv, pha),
			  "time",    "@1D",      mode, FUN_OFFSET(PEv, time),
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
  while( (buf = (void *)FunTableRowGet(fun, buf, MAXROW, NULL, &got)) ){
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
	fprintf(stdout, "%d\t%.2f\t%.2f\t%d\t%d\t%.4f\t%.4f\t%21.8f\n",
		(int)ev->region,
		ev->x, ev->y,
		ev->pi, ev->pha,
		ev->dx, ev->dy,
		ev->time);
	fflush(stdout);
      }
      break;
    case 1:
      aev = (AEv)buf;
      for(i=0; i<got; i++){
	fprintf(stdout, "%d\t%.2f\t%.2f\t%d\t%d\t%.4f\t%.4f\t%21.8f\n",
		(int)aev->region[i],
		aev->x[i], aev->y[i],
		aev->pi[i], aev->pha[i],
		aev->dx[i], aev->dy[i],
		aev->time[i]);
	fflush(stdout);
      }
      break;
    case 2:
      pev = (PEv)buf;
      for(i=0; i<got; i++){
	fprintf(stdout, "%d\t%.2f\t%.2f\t%d\t%d\t%.4f\t%.4f\t%21.8f\n",
		(int)pev->region[i],
		pev->x[i], pev->y[i],
		pev->pi[i], pev->pha[i],
		pev->dx[i], pev->dy[i],
		pev->time[i]);
	fflush(stdout);
      }
      break;
    case 3:
      for(i=0; i<got; i++){
	pev = (PEv)buf+i;
	fprintf(stdout, "%d\t%.2f\t%.2f\t%d\t%d\t%.4f\t%.4f\t%21.8f\n",
		(int)pev->region[0],
		pev->x[0], pev->y[0],
		pev->pi[0], pev->pha[0],
		pev->dx[0], pev->dy[0],
		pev->time[0]);
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
