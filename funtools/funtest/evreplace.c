#include <funtools.h>

/* if defined, user allocated row buffer, otherwise let funtools do it */
/* #define USER_ALLOC 1 */

#define MAXROW 	100000

typedef struct evstruct{
  double x, y;
  int *phas;
} *Ev, EvRec;

void Reverse(double x, double y, int *phas,
	     double *nx, double *ny, int *nphas, int npha)
{
  int i;
  *nx = y;
  *ny = x;
  for(i=0; i<npha; i++){
    nphas[npha-(i+1)] = phas[i];
  }
}

int main(int argc, char **argv)
{
  int i;
  int got;
  int npha;
  char tbuf[SZ_LINE];
  Ev ebuf, ev, nev;
  Fun fun, fun2;

  /* make sure we have minimal arguments */
  if( argc < 3 ){
    fprintf(stderr, "usage: %s iname oname [columns]\n", argv[0]);
    exit(1);
  }

  /* exit on gio errors */
  setgerror(2);

  /* open input FITS file for reading, and allowing copy of other extensions */
  if( !(fun = FunOpen(argv[1], "rc", NULL)) )
    gerror(stderr, "could not FunOpen input file: %s\n", argv[1]);

  /* look for the size of the phas vector */
  if( !FunColumnLookup(fun, "phas", 0, NULL, NULL, NULL, NULL, &npha, NULL) )
    gerror(stderr, "can't find phas column\n");

  /* open the output FITS image, inheriting params from input */
  if( !(fun2 = FunOpen(argv[2], "w", fun)) )
    gerror(stderr, "could not FunOpen output file: %s\n", argv[2]);

  /* allocate a new row buffer, now that we know the size of phas */
  nev = (Ev)calloc(1, sizeof(EvRec));
  nev->phas = (int *)calloc(npha, sizeof(int));

  /* create format statement for the pha vector, @ means its a pointer */
  sprintf(tbuf, "@%dJ", npha);
  /* specify input columns we want brought into user space */
  FunColumnSelect(fun, sizeof(EvRec), "merge=replace",
		  "$x",   "D",  "rw", FUN_OFFSET(Ev, x),
		  "$y",   "D",  "rw", FUN_OFFSET(Ev, y),
		  "phas", tbuf, "rw", FUN_OFFSET(Ev, phas),
		  NULL);

  /* set columns to be written to the output file */
  if( argc >= 4 )
    FunColumnActivate(fun, argv[3], NULL);

  /* loop through rows and replicate */
  while( (ebuf=(Ev)FunTableRowGet(fun, NULL, MAXROW, NULL, &got)) ){
    for(i=0; i<got; i++){
      /* get pointer to the user info containing x,y, phas */
      ev = ebuf+i;
      /* generate a new rows (with new x, y, phas values) */
      Reverse(ev->x, ev->y, ev->phas,
	      &(nev->x), &(nev->y), nev->phas, npha);
      /* write this new row -- with the replacements from user space */
      FunTableRowPut(fun2, nev, 1, i, NULL);
    }
    if( ebuf ) free(ebuf);
  }

  /* free the new row */
  if( nev ){
    if( nev->phas ) free(nev->phas);
    free(nev);
  }
      
  /* close output before input so that funtools will copy the rest of the
     input extensions to the output (if such copy is requred) */
  FunClose(fun2);
  FunClose(fun);
  return(0);
}
