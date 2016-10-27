#include <stdlib.h>
#include <funtools.h>

typedef struct evstruct{
  int x, y;
  int pha;
  float pi;
  int region;
} *Ev, EvRec;

int main(int argc, char **argv)
{
  int i, nev;
  int pmod=16, put=1;
  double pinc=0.1234;
  char xbuf[32], ybuf[32];
  Ev ev;
  Fun ofun;

  /* sanity check */
  if( argc < 3 ) return 1;
  /* open new file for writing */
  if( !(ofun=FunOpen(argv[1], "w", NULL)) ){
    fprintf(stderr, "ERROR: can't open funtools file: %s\n", argv[1]);
    return 1;
  }
  if( (nev = atoi(argv[2])) <=0 ) return 1;
  ev = (Ev)calloc(1, sizeof(EvRec));
  /* The pair of numeric values specify the data value range, used to bin
     x, y into an image. They are permitted but not needed for pi and pha */
  sprintf(xbuf, "J:1:%d", nev);
  sprintf(ybuf, "J:1:%d", nev);
  /* select columns to write */
  FunColumnSelect(ofun, sizeof(EvRec), NULL,
		  "x",   xbuf,      "w", FUN_OFFSET(Ev, x),
		  "y",   ybuf,      "w", FUN_OFFSET(Ev, y),
		  "pha", "J:1:16",  "w", FUN_OFFSET(Ev, pha),
		  "pi",  "E",       "w", FUN_OFFSET(Ev, pi),
		  NULL);
  /* write params to header; generally added before first event is written */
  FunParamPuti(ofun, "PMOD",  0, pmod,  "modulus for pha generation", 1);
  FunParamPutd(ofun, "PINC",  0, pinc,  7, "increment for pi generation", 1);
  /* make up events */
  for(i=1; i<=nev; i++){
    ev->x = i; ev->y = nev-i+1; ev->pha = i % pmod; ev->pi = ev->pha + pinc;
    /* write rows to output file -- this can be done in batches, of course */
    if( FunTableRowPut(ofun, ev, put, 0, NULL) != put ){
      fprintf(stderr, "ERROR: writing to funtools file: %s\n", argv[1]);
      return 1;
    }
  }
  if( ev) free(ev);
  /* close file */
  FunClose(ofun);
  return 0;
}
