/* NB: for pre-funtools.1.0.b24:
 * copy pixels.h from funtools/filter/pixels.h to your include directory
 */

/*
 *
 * On Linux:
 * gcc -o filt filt.c -I<install>/include -L<install>/lib -lfuntools -ldl -lm
 *
 * Run example:
 *
 * filt funtest/test.ev @foo
 *
 * where foo is a file containing:
 * circle 1 1 .1
 * circle 3 3 .1
 * circle 5 5 .1
 * circle 7 7 .1
 */

#include <funtools.h>
#include <filter.h>
#include <swap.h>

#define MAXROW 10000

typedef struct evstruct{
  double x, y;
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
  int got;
  int rawsize;
  int endian;
  int *rbuf;
  char *fname=NULL;
  char *region=NULL;
  char *rawbuf;
  char *bincols;
  char tbuf[SZ_LINE];
  Fun fun;
  Ev ebuf, ev;
  FITSHead header;
  Filter filt;

  /* exit on gio errors */
  setgerror(2);

  /* process args */
  if( argc < 3 )
    gerror(stderr, "usage: filt fname region\n");
  else{
    fname = argv[1];
    region = argv[2];
  }

  /* open input file */
  if( !(fun = FunOpen(fname, "r", NULL)) ){
    gerror(stderr, "could not FunOpen %s\n", fname);
  }
  /* specify columns we want, as usual */
  got = FunColumnSelect(fun, sizeof(EvRec), NULL,
			"x",  "D", "r", FUN_OFFSET(Ev, x),
			"y",  "D", "r", FUN_OFFSET(Ev, y),
			NULL);

  /* FILTER STUFF: get fitsy header and some other information for filtering */
  FunInfoGet(fun,
	     FUN_ENDIAN,  &endian,
	     FUN_HEADER,  &header, 
	     FUN_RAWSIZE, &rawsize,
	     FUN_BINCOLS, &bincols,
	     0);

  /* FILTER STUFF: make up the filter mode for FilterOpen() specifying:
     1. event processing
     2. the binning column names (needed for region processing)
     3. whether we have to convert raw data to native format
  */
  /* event (not image) filtering */
  strcpy(tbuf, "type=events");
  /* add the binning key -- required for region filtering */
  if( bincols ){
    strcat(tbuf, ",");
    strcat(tbuf, bincols);
  }
  /* filter code should convert data to native format if its not already */
  if( is_bigendian() == endian )
    strcat(tbuf, ",convert=false");
  else
    strcat(tbuf, ",convert=true");

  /* FILTER STUFF: allocate return filter buffer for FilterOpen() */
  rbuf = (int *)malloc(MAXROW*sizeof(int));

  /* FILTER STUFF: FilterOpen: new filter that will return region ids or 0 */
  if( !(filt = FilterOpen(header, region, tbuf)) )
    gerror(stderr, "can't open region filter: %s", region);

  /* get events */
  while( (ebuf=(Ev)FunTableRowGet(fun, NULL, MAXROW, NULL, &got)) ){

    /* FILTER STUFF: get pointer to current raw buffer of events to filter */
    FunInfoGet(fun, FUN_RAWBUF, &rawbuf, 0);

    /* FILTER STUFF: filter the raw events we just read -- answers in rbuf */
    if( FilterEvents(filt, rawbuf, rawsize, got, rbuf) ){

      /* loop through events, process them based on returned region value */
      for(i=0; i<got; i++){
	ev = ebuf+i;
	/* FILTER STUFF: rbuf[i] is:
	   0  if we failed filter
          -1  if we passed filter but its not in a region
	  +n  if we passed filter in a region (n is region id)
	*/
	if( rbuf[i] > 0 )
	  fprintf(stdout, "YES %d\t%.2f\t%.2f\n", rbuf[i], ev->x, ev->y);
	else
	  fprintf(stdout, "NO  %d\t%.2f\t%.2f\n", rbuf[i], ev->x, ev->y);
	fflush(stdout);
      }
    }
    /* free for next read */
    if( ebuf ) free(ebuf);
  }

  /* free up space */
  if( rbuf ) free(rbuf);

  /* close filter */
  if( filt ) FilterClose(filt);

  /* close file */
  FunClose(fun);

  return(0);
}
