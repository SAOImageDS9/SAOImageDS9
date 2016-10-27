/*
 *
 * evmerge.c -- example program for merging user values into a table file
 *
 */

#include <math.h>
#include <funtools.h>

#define MAXROW 8192

typedef struct evstruct{
  double time;
  double ntime;
  double tinc;
} *Ev, EvRec;

int main (int argc, char **argv)
{
  int i, got;
  int maxrow=MAXROW;
  double x=0.5;
  char *tmode;
  char *s;
  Fun fun, fun2;
  Ev ebuf, ev;

  /* exit on gio errors */
  setgerror(2);

  /* make sure we have minimal arguments */
  if( argc < 3 )
    gerror(stderr, "usage: %s iname oname [columns]\n", argv[0]);

  /* get maxrow,if user-specified */
  if( (s=(char *)getenv("FUN_MAXROW")) != NULL )
    maxrow = atoi(s);

  /* open input file */
  if( !(fun = FunOpen(argv[1], "rc", NULL)) )
    gerror(stderr, "could not FunOpen input file: %s\n", argv[1]);

  /* open the output FITS image, inheriting params from input */
  if( !(fun2 = FunOpen(argv[2], "w", fun)) )
    gerror(stderr, "could not FunOpen output file: %s\n", argv[2]);

  /* if we have "time2", read it, else create it */
  if( FunColumnLookup(fun, "tinc", 0, NULL, NULL, NULL, NULL, NULL, NULL) )
    tmode = "rw";
  else
    tmode = "w";

  FunColumnSelect(fun, sizeof(EvRec), "merge=replace",
		  "time",     "D", 	"r",    FUN_OFFSET(Ev, time),
		  "ntime",    "D", 	"rw",    FUN_OFFSET(Ev, ntime),
		  "tinc",     "D",      tmode,   FUN_OFFSET(Ev, tinc),
		  NULL);

  /* activate specified columns -- these will be written to the output file */
  if( argc >= 4 )
    FunColumnActivate(fun, argv[3], NULL);

  /* get rows -- let routine allocate the row array */
  while( (ebuf = (Ev)FunTableRowGet(fun, NULL, maxrow, NULL, &got)) ){
    /* process all rows */
    for(i=0; i<got; i++){
      /* point to the i'th row */
      ev = ebuf+i;
      ev->tinc += (i*sqrt(cos(x)*cos(x) + sin(x)*sin(x)));
      ev->ntime = ev->time + ev->tinc;
      /* write out row with the new columns */
      FunTableRowPut(fun2, (char *)ev, 1, i, NULL);
    }
    /* free row data */
    if( ebuf ) free(ebuf);
  }

  /* clean up -- close output before input to perform flush automatically */
  FunClose(fun2);
  FunClose(fun);
  return(0);
}
