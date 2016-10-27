/*
 *
 * evmerge.c -- example program for merging user values into a table file
 *
 */
#include <funtools.h>
#include <word.h>

#define MAXROW 8192

typedef struct evstruct{
  double time;
  int time2;
} *Ev, EvRec;

int main (int argc, char **argv)
{
  int i, got;
  char tbuf[SZ_LINE];
  Fun fun, fun2;
  Ev ebuf, ev;

  /* exit on gio errors */
  setgerror(2);

  /* make sure we have minimal arguments */
  if( argc < 4 )
    gerror(stderr, "usage: %s iname oname mergetype [columns]\n", argv[0]);

  /* open input file */
  if( !(fun = FunOpen(argv[1], "rc", NULL)) )
    gerror(stderr, "could not FunOpen input file: %s\n", argv[1]);

  /* open the output FITS image, inheriting params from input */
  if( !(fun2 = FunOpen(argv[2], "w", fun)) )
    gerror(stderr, "could not FunOpen output file: %s\n", argv[2]);

  /* "merge=[type]" merges original input columns with new ones, where type is:
   * update -- add new columns, update value of existing ones (same data type)
   * replace -- add new columns, replace data type and value of existing ones
   * append -- only add new columns, do not "replace" or "update" existing ones
   * If tbuf argument is NULL, no merging is performed -- only user-specified
   * columns are output.
   */
  if( isfalse(argv[3]) )
    *tbuf = '\0';
  else
    sprintf(tbuf, "merge=%s", argv[3]);
  FunColumnSelect(fun, sizeof(EvRec), tbuf,
		  "time",      "D", 	"rw",  FUN_OFFSET(Ev, time),
		  "time2",     "J",     "w",   FUN_OFFSET(Ev, time2),
		  NULL);

  /* activate specified columns -- these will be written to the output file */
  if( argc >= 5 )
    FunColumnActivate(fun, argv[4], NULL);

  /* get rows -- let routine allocate the row array */
  while( (ebuf = (Ev)FunTableRowGet(fun, NULL, MAXROW, NULL, &got)) ){
    /* process all rows */
    for(i=0; i<got; i++){
      /* point to the i'th row */
      ev = ebuf+i;
      ev->time2 = (int)(ev->time+.5);
      ev->time = -(ev->time/10.0);
    }
    /* write out this batch of rows with the new column */
    FunTableRowPut(fun2, (char *)ebuf, got, 0, NULL);
    /* free row data */
    if( ebuf ) free(ebuf);
  }

  /* clean up -- close output before input to perform flush automatically */
  FunClose(fun2);
  FunClose(fun);
  return(0);
}
