/*
 *
 * asc2fits foo.fits < foo.ascii
 *
 * This is an example of generating a binary table from specific ASCII input.
 * The more general case is much harder.
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <funtools.h>
 
#define MAXREC   30

typedef struct EvStruct{
  int x, y, pha;
  double time;
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
		   "x",    "J", "w", FUN_OFFSET(Event, x),
		   "y",    "J", "w", FUN_OFFSET(Event, y),
		   "pha",  "J", "w", FUN_OFFSET(Event, pha),
		   "time", "D", "w", FUN_OFFSET(Event, time),
		   NULL);

  /* ignore first line, which is the header */
  fgets(tbuf, SZ_LINE, stdin);

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
    if(sscanf(tbuf, "%d %d %d %lf", &ev->x, &ev->y, &ev->pha, &ev->time) != 4)
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
