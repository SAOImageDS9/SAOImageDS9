/*
 *
 * evmerge2.c -- example program for combining extensions from 2 binary tables
 * we write the primary extension of file 1 along with its event extension,
 * and the GTI extension of file2.
 *
 */
#include <funtools.h>
#define MAXROW 8192

typedef struct gtistruct{
  double start, stop;
} *GTI, GTIRec;

/* sample event struct */
typedef struct evstruct{
  double time;
} *Ev, EvRec;

int main (int argc, char **argv)
{
  int i, j;
  int get, got;
  int ngti;
  char *idx;
  char tbuf[SZ_LINE];
  Fun ifun1, ifun2, ofun;
  GTI gtibuf=NULL, gti;
  Ev ebuf=NULL, ev;

  /* exit on gio errors */
  setgerror(2);

  /* make sure we have minimal arguments */
  if( argc < 4 )
    gerror(stderr, "usage: %s iname1 iname2 oname\n", argv[0]);

  /* open a new output FITS file */
  if( !(ofun = FunOpen(argv[3], "w", NULL)) )
    gerror(stderr, "could not FunOpen output file: %s\n", argv[2]);

  /* open the primary extension of the event file (file #1) and output it */
  /* first strip off the event extension from the filename */
  strcpy(tbuf, argv[1]);
  if( (idx=strchr(tbuf, '[')) ) *idx = '\0';
  /* add '[0]' to denote primary */
  strcat(tbuf, "[0]");
  /* open primary extension */
  if( !(ifun1 = FunOpen(tbuf, "r", NULL)) )
    gerror(stderr, "could not FunOpen primary extension of file1: %s\n", tbuf);
  /* make this extension the reference handle for the output file */
  FunInfoPut(ofun, FUN_IFUN, &ifun1, 0);
  /* a flush will write primary extension to the output file */
  FunFlush(ofun, "copy=reference");
  /* close primary */
  FunClose(ifun1);

  /* open the GTI file (file #2) */
  strcpy(tbuf, argv[2]);
  /* add GTI extension, if user left it off */
  if( !(idx=strchr(tbuf, '[')) ) strcat(tbuf, "[GTI]");
  if( !(ifun2 = FunOpen(tbuf, "r", NULL)) )
    gerror(stderr, "could not FunOpen input GTI file: %s\n", tbuf);
  /* select columns that we need to process */
  /* NB: this is the entire GTI record (start,stop) */
  FunColumnSelect(ifun2, sizeof(GTIRec), NULL,
		  "START",     "D",     "rw",   FUN_OFFSET(GTI, start),
		  "STOP",      "D",     "rw",   FUN_OFFSET(GTI, stop),
		  NULL);
  /* read and store all GTI records for later processing and output */
  ngti = FunParamGeti(ifun2, "NAXIS2", 0, 0, &get);
  gtibuf = FunTableRowGet(ifun2, NULL, ngti, NULL, &got);

  /* open the EVENTS extension (file #1) */
  strcpy(tbuf, argv[1]);
  /* add EVENTS extension, if user left it off */
  if( !(idx=strchr(tbuf, '[')) ) strcat(tbuf, "[EVENTS]");
  if( !(ifun1 = FunOpen(tbuf, "r", NULL)) )
    gerror(stderr, "could not FunOpen EVENTS input file: %s\n", tbuf);
  /* we need the time to get the right gti record */
  FunColumnSelect(ifun1, sizeof(EvRec), "merge=update",
		  "TIME",     "D",     "rw",   FUN_OFFSET(Ev, time),
		  NULL);
  /* make this extension the reference handle for the output file */
  FunInfoPut(ofun, FUN_IFUN, &ifun1, 0);
  /* get input rows (let routine allocate the row array) */
  while( (ebuf = (Ev)FunTableRowGet(ifun1, NULL, MAXROW, NULL, &got)) ){
    /* process each row */
    for(i=0; i<got; i++){
      /* point to the i'th row */
      ev = ebuf+i;
      /* look through gti records for the right one */
      for(j=0; j<ngti; j++){
	gti = gtibuf + j;
	/* if this row is in a good time interval, writ it out */
	if( (ev->time > gti->start) && (ev->time <= gti->stop) ){
	  FunTableRowPut(ofun, (char *)ev, 1, i, NULL);
	  break;
	}
      }
    }
    /* free row data */
    if( ebuf ) free(ebuf);
  }
  /* flush output extension (write padding, etc.) so we can start next one */
  FunFlush(ofun, NULL);

  /* we now write the gti records into the extension following the rows */
  /* make the GTI extension the reference handle for the output file, which
     also sets up the default columns from the input gti file */
  FunInfoPut(ofun, FUN_IFUN, &ifun2, 0);
  /* write the GTI records */
  FunTableRowPut(ofun, (char *)gtibuf, ngti, 0, NULL);

  /* close output */
  FunClose(ofun);
  /* close the inputs */
  FunClose(ifun1);
  FunClose(ifun2);

  /* free gti buffer */
  if( gtibuf ) free(gtibuf);
  return(0);
}
