/*
 *
 * evcol.c -- example program for processing all extensions and adding a
 *            column to the binary tables
 *
 */
#include <funtools.h>
#include <word.h>

#define MAXROW 8192

typedef struct evstruct{
  char shape[17];
  int mycol;
} *Ev, EvRec;

int main (int argc, char **argv)
{
  int i, got;
  int idx;
  int tlmax;
  int ext=1;
  int total=1;
  int haveshape=0;
  char *s[3];
  char tbuf[SZ_LINE];
  Fun fun, fun2;
  Ev ebuf, ev;

  /* exit on gio errors */
  setgerror(2);

  /* make sure we have minimal arguments */
  if( argc < 3 )
    gerror(stderr, "usage: %s iname oname\n", argv[0]);

  /* open a new output FITS file */
  if( !(fun2 = FunOpen(argv[2], "w", NULL)) )
    gerror(stderr, "could not FunOpen output file: %s\n", argv[2]);

  /* process each input extension in turn */
  for(ext=0; ;ext++){
    /* get new extension name */
    sprintf(tbuf, "%s[%d]", argv[1], ext);
    /* open it -- if we cannot open it, we are done */
    if( !(fun=FunOpen(tbuf, "r", NULL)) )
      break;

    /* make the new extension the reference handle for the output file */
    FunInfoPut(fun2, FUN_IFUN, &fun, 0);

    /* if its not a binary table, just write it out */
    for(i=0; i<=2; i++) s[i] = NULL;
    if( !(s[0]=FunParamGets(fun, "XTENSION", 0, NULL, &got)) || 
	strcmp(s[0], "BINTABLE")){
      if( s[0] ) free(s[0]);
      FunFlush(fun2, "copy=reference");
      FunClose(fun);
      continue;
    }
    else{
      if( (s[1]=FunParamGets(fun, "EXTNAME", 0, NULL, &got)) ){
	fprintf(stdout, "processing %s", s[1]);
	if( (s[2]=FunParamGets(fun, "HDUNAME", 0, NULL, &got)) )
	  fprintf(stdout, " %s", s[2]);
	fprintf(stdout, "\n");
      }
    }
    for(i=0; i<=2; i++) if( s[i] ) free(s[i]);

    /* select columns from this new extension for merging */
    /* we have some special code to test various bugs with bpix.fits */
    if( (idx = FunColumnLookup(fun, "SHAPE", 0,
			       NULL, NULL, NULL, NULL, NULL, NULL)) ){
      haveshape = 1;
      FunColumnSelect(fun, sizeof(EvRec), "merge=update",
		      "SHAPE",     "16A",   "rw",  FUN_OFFSET(Ev, shape),
		      "MYCOL",     "J",     "w",   FUN_OFFSET(Ev, mycol),
		      NULL);
    }
    else{
      FunColumnSelect(fun, sizeof(EvRec), "merge=update",
		      "MYCOL",     "J",     "w",   FUN_OFFSET(Ev, mycol),
		      NULL);
    }

    /* we have some special code to test various bugs with bpix.fits */
    /* we need to increase tlmax value of the "component" column */
    if( (idx = FunColumnLookup(fun, "COMPONENT", 0,
			       NULL, NULL, NULL, NULL, NULL, NULL)) ){
      if( (tlmax=FunParamGeti(fun, "TLMAX", idx, -1, &got)) && got )
	FunParamPuti(fun2, "TLMAX", idx, tlmax+100, NULL, 0);
    }

    /* get input rows (let routine allocate the row array) */
    while( (ebuf = (Ev)FunTableRowGet(fun, NULL, MAXROW, NULL, &got)) ){
      /* process all rows */
      for(i=0; i<got; i++){
	/* point to the i'th row */
	ev = ebuf+i;
	/* make sure ascii vector is null-terminated */
	ev->shape[17] = '\0';
	/* used with bpix.ev */
	if( haveshape ){
	  cluc(ev->shape);
	  fprintf(stdout, "\tshape: %s\n", ev->shape);
	}
	ev->mycol = total++;
      }
      /* write out this batch of rows, along with the new column */
      FunTableRowPut(fun2, (char *)ebuf, got, 0, NULL);
      /* write out one more record with special marker */
      ev = ebuf;
      strcpy(ev->shape, "hexagon         ");
      ev->mycol = -1;
      FunTableRowPut(fun2, (char *)ev, 1, 0, NULL);
      /* free row data */
      if( ebuf ) free(ebuf);
    }

    /* flush output extension (write padding, etc.) */
    FunFlush(fun2, NULL);
    /* close the input extension */
    FunClose(fun);
  }

  /* all done -- close output */
  FunClose(fun2);
  return(0);
}
