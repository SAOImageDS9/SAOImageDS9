/*
 *
 * bigfits -- test large file creation
 *
 * gcc -g -o bigfits -I $HOME/include -L$HOME/lib bigfits.c -lfuntools
 *
 * gcc -g -o bigfits -I $HOME/include -L$HOME/lib bigfits.c -lfuntools -lm -lsocket -ldl -lnsl
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <funtools.h>
 
#define MAXX   100
#define MAXY   100
#define MAXREC (MAXX*MAXY)

typedef struct EvStruct{
  unsigned int n;
  short x, y;
  unsigned short block;
} *Event, EventRec;

int main(int argc, char **argv)
{
  int i, j, n;
  int put;
  unsigned int total=0;
  char *oname;
  Fun fun;
  EventRec events[MAXREC];
  Event ev;

  /* exit on gio errors */
  setgerror(2);

  if( argc < 3 ){
    fprintf( stderr, "usage: %s oname n\n", argv[0]);
    exit(1);
  }
  oname = argv[1];
  n = atoi(argv[2]);

  fprintf(stderr, "writing 10 bytes * %d groups of records * %d times\n",
	  MAXREC, n);

  /* fill in the records */
  for(j=0; j<MAXY; j++){
    for(i=0; i<MAXX; i++){
      ev = &events[j*MAXY+i];
      ev->x = i;
      ev->y = j;
      ev->n = total++;
    }
  }

  /* open output file */
  if( !(fun = FunOpen(oname,"w", NULL)) )
    gerror(stderr, "Could not open the output file: %s\n", oname);

  /* set up the (hardwired) columns */
  FunColumnSelect( fun, sizeof(EventRec), NULL,
		   "x",    "I:0:99",   "w", FUN_OFFSET(Event, x),
		   "y",    "I:0:99",   "w", FUN_OFFSET(Event, y),
		   "block","I",         "w", FUN_OFFSET(Event, block),
		   "n",    "J",         "w", FUN_OFFSET(Event, n),
		   NULL);


  /* write n * MAXREC records */
  for(i=0; i<n; i++){
    /* set block count */
    for(j=0; j<MAXREC; j++){
	ev = &events[j];
	ev->block = i;
    }
    if( (put=FunTableRowPut(fun, events, MAXREC, 0, NULL)) != MAXREC ){
      gerror(stderr, "expected to write %d rows; only wrote %d\n",
	     MAXREC, put);
    }
  }

  FunClose(fun);

  return(0);
}
