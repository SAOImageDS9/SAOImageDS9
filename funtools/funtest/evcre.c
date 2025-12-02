/*
 *
 * evcre foo.fits -- test event creation
 *
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <funtools.h>
 
#define MAXREC   10

typedef struct EvStruct{
  short x[4], *atp;
} *Event, EventRec;

int main(int argc, char **argv)
{
  int i, j;
  int val=1;
  int got, put;
  Fun fun;
  EventRec events[MAXREC];
  Event ev;

  /* exit on gio errors */
  setgerror(2);

  if( argc < 2 ){
    fprintf( stderr, "usage: %s oname\n", argv[0]);
    exit(1);
  }

  /* fill in the records */
  got = MAXREC;
  for(i=0; i<got; i++){
    ev = &events[i];
    for(j=0; j<4; j++){
      ev->x[j] = -i-j;
    }
    ev->atp = calloc(10,sizeof(short));
    for(j=0; j<10; j++){
      ev->atp[j] = i+j;
    }
  }

  /* open output file */
  if( !(fun = FunOpen(argv[1],"w", NULL)) )
    gerror(stderr, "Could not open the output file: %s\n", argv[1]);

  /* set up the (hardwired) columns */
  FunColumnSelect(fun, sizeof(EventRec), NULL,
		  "2i",    "2I  ",   "w", FUN_OFFSET(Event, x),
		  "2i2",   "2I[2]",  "w", FUN_OFFSET(Event, x),
		  "at2p",  "@2I",    "w", FUN_OFFSET(Event, atp),
		  "at2p4", "@2I[4]", "w", FUN_OFFSET(Event, atp),
		  "atp9",  "@I[9]",  "w", FUN_OFFSET(Event, atp),
		  NULL);

  /* put these in extension header */
  FunParamPuti(fun, "IPAR", 0, 100, "INTEGER Param", 0);
  FunParamPuti(fun, "IPAR", 1, 101, "INTEGER Param", 0);
  FunParamPutd(fun, "DPAR", 0, 123456789.9876, 12, "DOUBLE Param", 0);
  FunParamPutd(fun, "DPAR", 1, 123456.780, 4, "DOUBLE Param", 0);
  FunParamPuts(fun,  NULL, 0, "", NULL, 0);
  FunParamPuts(fun,  NULL, 0, "Null param", NULL, 0);
  FunParamPuts(fun, "COMMENT", 0, "This is comment #1", "Comment card", 0);
  FunParamPuts(fun, "COMMENT", 0, "This is comment #2", "Comment card", 0);
  FunParamPuts(fun, "COMMENT", 0, "This is comment #3", "Comment card", 0);

  /* put these in primary header */
  val = 1;
  FunInfoPut(fun, FUN_PRIMARYHEADER, &val, 0);
  FunParamPuti(fun, "IPAR", 0, -100, "INTEGER Param", 0);
  FunParamPuti(fun, "IPAR", 1, -101, "INTEGER Param", 0);
  FunParamPutd(fun, "DPAR", 0, -123456789.9876, 12, "DOUBLE Param", 0);
  FunParamPutd(fun, "DPAR", 1, -123456.780, 4, "DOUBLE Param", 0);

  /* put these in extension header */
  val = 0;
  FunInfoPut(fun, FUN_PRIMARYHEADER, &val, 0);
  FunParamPuti(fun, "IPAR", 2, 200, "INTEGER Param", 0);
  /* blank card used as a place holder */
  FunParamPuts(fun, NULL, 0, "IPAR3", "INTEGER Param", 0);
  FunParamPuts(fun, NULL, 0, "IPAR4", "INTEGER Param", 0);

  /* put these in primary header */
  FunParamPuti(FUN_PRIMARY(fun), "IPAR", 2, -200, "INTEGER Param", 0);

  if( (put=FunTableRowPut(fun, events, got, 0, NULL)) != got ){
      gerror(stderr, "expected to write %d rows; only wrote %d\n",
	     got, put);
  }

  /* update file after writing data */
  FunParamPuti(fun, "IPAR", 2, 400, "INTEGER Param", 0);
  FunParamPuti(fun, "IPAR", 3, 600, "INTEGER Param", 2);
  /* this will not update because append flag is 1, not 2 */
  FunParamPuti(fun, "IPAR", 4, 800, "INTEGER Param", 1);
  /* this will not update because there was no space saved */
  FunParamPuti(fun, "IPAR", 5, 1000, "INTEGER Param", 2);

  /* close file */
  FunClose(fun);


  /* fill in the records */
  for(i=0; i<got; i++){
    ev = &events[i];
    free(ev->atp);
  }

  return(0);
}
