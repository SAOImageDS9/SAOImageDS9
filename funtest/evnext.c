/*
 *
 * evnext.c -- example program for changing the time of an row to have
 * the value from the next row
 *
 */

#include <funtools.h>

#define MAXROW 100

typedef struct evstruct{
  double time;
} *Ev, EvRec;

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
  int got, ogot;
  char *oraw;
  char *nraw;
  char *null=NULL;
  Ev ebuf, oebuf=NULL;
  Ev ev, nev, oev;
  Fun fun, fun2;

  /* exit on gio errors */
  setgerror(2);

  /* make sure we have minimal arguments */
  if( argc < 3 )
    gerror(stderr, "usage: %s iname oname [columns]\n", argv[0]);

  /* open file */
  if( !(fun = FunOpen(argv[1], "r", NULL)) )
    gerror(stderr, "could not FunOpen %s\n", argv[1]);

  /* open the output FITS image, inheriting params from input */
  if( !(fun2 = FunOpen(argv[2], "w", fun)) )
    gerror(stderr, "could not FunOpen output file: %s\n", argv[2]);

  /* specify columns we want */
  got = FunColumnSelect(fun, sizeof(EvRec), "merge=update",
			"time", "1D", "rw", FUN_OFFSET(Ev, time),
			NULL);
  /* activate specified columns -- these will be written to the output file */
  if( argc >= 4 )
    FunColumnActivate(fun, argv[3], NULL);

  /* get rows */
  while( (ebuf = (Ev)FunTableRowGet(fun, NULL, MAXROW, NULL, &got)) ){
    /* process the last row from previous batch, if we have it */
    if( oebuf ){
      /* this is the old array of rows -- we point to the last one */
      oev = oebuf+(ogot-1);
      /* this is the new array of rows -- we point to the first one */
      ev = ebuf;
      /* change time value of old row to new row's value */
      oev->time = ev->time;
      /* now we have to write out this last row */
      /* first, save pointer to the new raw data */
      FunInfoGet(fun, FUN_RAWBUF, &nraw, 0);
      /* put back old pointer so we merge it with last row */
      FunInfoPut(fun, FUN_RAWBUF, &oraw, 0);
      /* write out last row merging with its raw data */
      /* (its arg 4 that tells funtools to merge with the last raw row) */
      FunTableRowPut(fun2, oebuf, 1, ogot-1, NULL);
      /* free up old raw data */
      if( oraw ) free(oraw);
      /* free up old user data */
      if( oebuf ) free(oebuf);
      /* finally, put back new raw data pointer, so we can process new batch */
      FunInfoPut(fun, FUN_RAWBUF, &nraw, 0);
    }
    /* process the got-1 rows by replacing the time with time from
       the succeeding row */
    for(i=0; i<(got-1); i++){
      /* point to the i'th row */
      ev = ebuf+i;
      nev = ebuf+(i+1);
      ev->time = nev->time;
    }
    /* if we processed at least one row this time ... */
    if( got > 1 ){
      /* write out got-1 rows with the raw columns */
      FunTableRowPut(fun2, (char *)ebuf, (got-1), 0, NULL);
    }
    /* if we have a "last" row to process next time ... */
    if( got ){
      /* save the user row for when we have the next batch */
      oebuf = ebuf;
      /* save pointer to raw data */
      FunInfoGet(fun, FUN_RAWBUF, &oraw, 0);
      /* null out rawbuf pointer so Funtools does not free it automatically */
      FunInfoPut(fun, FUN_RAWBUF, &null, 0);
      /* save old value of got */
      ogot = got;
    }
  }

  /* clean up last saved batch */
  if( oraw ) free(oraw);
  if( oebuf ) free(oebuf);

  /* close and return */
  FunClose(fun2);
  FunClose(fun);
  return(0);
}
