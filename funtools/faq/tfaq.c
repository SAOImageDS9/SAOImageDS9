#include <funtools.h>

typedef struct evstruct{
  int pi;
} *Ev, EvRec;

int main(int argc, char **argv)
{
  int i, got;
  int maxrow=1024;
  Ev ev, ebuf=NULL;
  Fun fun, ofun;
  /* open file for reading */
  if( !(fun=FunOpen(argv[1], "r", NULL)) ){
    fprintf(stderr, "ERROR: can't open input funtools file: %s\n", argv[1]);
    return 1;
  }
  if( !(ofun=FunOpen(argv[2], "w", fun)) ){
    fprintf(stderr, "ERROR: can't open output funtools file: %s\n", argv[2]);
    return 1;
  }
  /* select columns to read (and data types to convert to) */
  got = FunColumnSelect(fun, sizeof(EvRec), "merge=update",
			"pi",     "J", "rw", FUN_OFFSET(Ev, pi),
			NULL);
  /* read and process events */
  while(ebuf=(void *)FunTableRowGet(fun, NULL, maxrow, NULL, &got) ){
    for(i=0; i<got; i++){
      ev = (Ev)ebuf+i;
      ev->pi = ev->pi + 1;
    }
    if( FunTableRowPut(ofun, ebuf, got, 0, NULL) != got ){
      fprintf(stderr, "ERROR: writing to funtools file: %s\n", argv[2]);
      return 1;
    }
    if( ebuf) free(ebuf);
  }
  /* close files */
  FunClose(ofun);
  FunClose(fun);
}
