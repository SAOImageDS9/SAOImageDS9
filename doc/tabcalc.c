/*
 *
 * This program was generated automatically by the funcalc program,
 * by running the tabcalc.c template through the funcalc.l lexical analyzer.
 * On this system, it was (or can be) built a command such as:
 *
 * $COMMAND
 *
 */
#include <funtools.h>

extern char *optarg;
extern int optind;

/* define the types of event records we have to handle */
#define REC_CUR		1
#define REC_PREV	2
#define REC_NEXT	4

/* default number of rows to read at a time */
#define MAXROW 8192
int maxrow=MAXROW;

typedef struct rowstruct{
$MEMBERS
} *Row, RowRec;

/* global definitions and init calls go here */
$GLOBAL

/* main program */
int main (int argc, char **argv)
{
  int c, i, got, total, rectype, start, stop, skip, args;
  int del=0;
  char *s;
  Fun fun, ofun;
  Row rowbuf, rowptr;
  Row cur, prev, next;
  $AUTO
  
  /* local definitions, followed by init calls go here */
  $LOCAL

  /* exit on gio errors */
  setgerror(1);

  /* avoid shared library problems by using "process" type for filtering */
  putenv("FILTER_PTYPE=process");

  /* process switch arguments */
  while ((c = getopt(argc, argv, "d")) != -1){
    switch(c){
    case 'd':
      del = 1;
      break;
    }
  }
  /* check for required arguments */
  args = argc - optind;
  /* make sure we have minimal arguments */
  if( args < $ARGS ){
    if( $ARGS == 1 )
      fprintf(stderr,
      "usage: [expr] | funcalc [-e expr] [-f file] iname\n");
    else
      fprintf(stderr,
      "usage: [expr] | funcalc [-e expr] [-f file] iname oname [cols]\n");
    goto error;
  }

  /* set rectype: determine whether we need prev,next records */
  rectype=$RECTYPE;

  /* get maxrow,if user-specified */
  if( (s=(char *)getenv("FUN_MAXROW")) != NULL )
    maxrow = atoi(s);
  /* make sure max row is large enough to handle prev, next */
  if( rectype & (REC_PREV|REC_NEXT) ) maxrow = MAX(3,maxrow);

  /* open input file */
  if( !(fun = FunOpen(argv[optind+0], "rc", NULL)) ){
      gerror(stderr, "could not FunOpen input file: %s\n", argv[optind+0]);
      goto error;
  }

  /* open the output FITS image, inheriting params from input */
  if( $ARGS > 1 ){
    if( !(ofun = FunOpen(argv[optind+1], "w", fun)) ){
      gerror(stderr, "could not FunOpen output file: %s\n", argv[optind+1]);
      goto error;
    }
  }

  /* select columns */
  FunColumnSelect(fun, sizeof(RowRec), "merge=replace", 
		  $SELECT
		  NULL);

  /* activate specified columns -- these will be written to the output file */
  if( args >= 3 )
    FunColumnActivate(fun, argv[optind+2], NULL);

  /* allocate space for rowbuf -- we will manage this buffer ourselves */
  rowbuf = (Row)calloc(maxrow, sizeof(RowRec));

  /*  no record read yet */
  total = 0;

  /* any user-defined calls before we enter the row loop go here */
  $BEFORE

  /* main loop -- get rows and process */
  while( 1 ){
    /* need prev record */
    if( rectype & REC_PREV ){
      /* no records yet: read new batch of records into start of rowbuf */
      if( total == 0 ){
        rowptr = rowbuf;
      }
      /* we have read records: move last record from last batch into first
	 new record and read new records after that */
      else{
        /* if we are accessing next, we did not actually process final record,
           therefore we do it now */
        if( rectype & REC_NEXT ){
          memcpy(rowbuf, rowbuf+(got-2), sizeof(RowRec)*2);
          rowptr = rowbuf+2;
        }
        /* not accessing next, so we just move last record processed */
        else{
          memcpy(rowbuf, rowbuf+(got-1), sizeof(RowRec));
          rowptr = rowbuf+1;
        }
      }
      /* start at 2nd record so as to have a valid prev */
      start = 1;
    }
    /* processing that does not require prev */
    else{
      rowptr = rowbuf;
      start = 0;
    }

    /* adjust maxrow to account for handling of prev record */
    skip = (rowptr - rowbuf)/sizeof(RowRec);

    /* read new rows */
    if( !FunTableRowGet(fun, rowptr, maxrow-skip, NULL, &got) )
      break;

    /* if we need access to next record, don't process the last one we read */
    if( rectype & REC_NEXT ){
      stop = got - 1;
    }
    /* processing that does not require acces to next, process as cur */
    else{
      stop = got;
    }

    /* process all rows */
    for(i=start; i<stop; i++){
      /* set up pointer to current row */
      cur = rowbuf+i;
      /* set up pointer to prev and next as needed */
      if( rectype & REC_PREV ) prev = rowbuf+(i-1);
      if( rectype & REC_NEXT ) next = rowbuf+(i+1);
      /* execute the expression */
      $EXPR
      /* write out this row with the new column */
      if( $ARGS > 1 )
        FunTableRowPut(ofun, (char *)cur, 1, i, NULL);
    }
    total += got;
  }

  /* any user-defined calls after we finish the row loop go here */
  $AFTER

  /* free row data */
  if( rowbuf ) free(rowbuf);

  /* clean up -- close output before input to perform flush automatically */
  if( $ARGS > 1 )
    FunClose(ofun);
  FunClose(fun);

  /* delete program if necessary */
  if( del ) unlink(argv[0]);
  return(0);

error:
  /* delete program if necessary */
  if( del ) unlink(argv[0]);
  return(1);
}
