/*
 * Solaris: 
 * gcc -o foo foo.c -I ../include -L../lib -lfuntools -lsocket -lnsl -ldl -lm
 * Linux:
 * gcc -o foo foo.c -I ../include -L../lib -lfuntools -lm
 *
 * asc2fits foo.fits < foo.ascii
 *
 * This is an example of generating a binary table from specific ASCII input.
 * The more general case is much harder.
 *
 * input looks like this:
 *
 * 1 100.0  200.0  5.0 14 13 11 3.0
 * 2 101.0  202.2  7.0 11 12 10 4.0
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <funtools.h>
 
#define MAXREC   30

typedef struct EvStruct{
  int i1, i2, i3, i4;
  double d1, d2, d3, d4;
} *Event, EventRec;

int main(int argc, char **argv)
{
  int got, put;
  char tbuf[SZ_LINE];
  Fun fun;
  EventRec events[MAXREC];
  Event ev;

  /* exit on gio errors */
  setgerror(2);

  if( argc < 2 ){
    fprintf( stderr, "usage: %s oname\n", argv[0]);
    exit(1);
  }

  /* open output file */
  if( !(fun = FunOpen(argv[1],"w", NULL)) )
    gerror(stderr, "Could not open the output file: %s\n", argv[1]);

  /* set up the (hardwired) columns */
  FunColumnSelect( fun, sizeof(EventRec), NULL,
		   "i1",   "J", "w", FUN_OFFSET(Event, i1),
		   "d1",   "D", "w", FUN_OFFSET(Event, d1),
		   "d2",   "D", "w", FUN_OFFSET(Event, d2),
		   "d3",   "D", "w", FUN_OFFSET(Event, d3),
		   "i2",   "J", "w", FUN_OFFSET(Event, i2),
		   "i3",   "J", "w", FUN_OFFSET(Event, i3),
		   "i4",   "J", "w", FUN_OFFSET(Event, i4),
		   "d4",   "D", "w", FUN_OFFSET(Event, d4),
		   NULL);

  /* process data lines */
  got = 0;
  /* get next line */
  while( fgets(tbuf, SZ_LINE, stdin) ){
    /* ignore comments */
    if( (*tbuf == '\n') || (*tbuf == '#') )
      continue;
    /* point to next buffer to fill */
    ev = &events[got];
    /* parse data record */
    if(sscanf(tbuf, "%d %lf %lf %lf %d %d %d %lf",
	      &ev->i1,
	      &ev->d1, &ev->d2, &ev->d3,
	      &ev->i2, &ev->i3, &ev->i4,
	      &ev->d4) != 8)
      break;
    /* got another record */
    got++;
    /* flush this batch of records if necessary */
    if( got == MAXREC ){
      if( (put=FunTableRowPut(fun, events, got, 0, NULL)) != got ){
	gerror(stderr, "expected to write %d rows; only wrote %d\n",
	       got, put);
      }
      /* reset record counter */
      got = 0;
    }
  }
  /* final flush */
  if( got ){
    if( (put=FunTableRowPut(fun, events, got, 0, NULL)) != got ){
      gerror(stderr, "expected to write %d rows; only wrote %d\n",
	     got, put);
    }
  }
  FunClose(fun);
  return(0);
}
