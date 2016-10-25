/*
 *
 * This program was generated automatically by the funcalc program,
 * by running the tabcalc.c template through the funcalc.l lexical analyzer.
 * On this system, it was (or can be) built a command such as:
 *
 * $COMMAND
 *
 */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <funtools.h>
#include <word.h>
#include <NaN.h>

extern char *optarg;
extern int optind;

/* define the types of event records we have to handle */
#define REC_CUR		1
#define REC_PREV	2
#define REC_NEXT	4

#define ARGC     __nxarg
#define ARGV(n) ((__xargs && (n>=0) && (n<__nxarg)) ? __xargs[n] : NULL)

#define I __i
#define NROW __nrow
#define WRITE_ROW FunTableRowPut(ofun, (char *)cur, 1, __i, NULL)

/* default number of rows to read at a time */
#define MAXROW 8192
int __maxrow=MAXROW;

/* floating check for equality */
#ifndef feq
#define feq(x,y)	(fabs((double)x-(double)y)<=(double)1.0E-15)
/* avoid divide by zero */
#ifndef div
#define div(a,b) (feq(b,0)?(getnand()):(a/b))
#endif
#endif

typedef struct rowstruct{
$MEMBERS
int __ncol;
} *Row, RowRec;

/* global definitions and init calls go here */
$GLOBAL

/* main program */
int main (int argc, char **argv)
{
  int __c, __i;
  int __get, __got, __total, __rectype, __args;
  int __saved=0;
  int __del=0;
  int __nxarg=0;
  int __ip=0;
  int __nrow=-1;
  int __rawsize=0;
  char *__s;
  char *__cols=NULL;
  char *__argstr=NULL;
  char *__rawsave=NULL;
  char *__rawbuf=NULL;
  char **__xargs=NULL;
  char __tbuf[SZ_LINE];
  Row __rowbuf, __rowrptr, __rowsptr, __roweptr;
  Row cur, prev, next;
  Fun fun, ofun;
  off_t __opos;
  $AUTO
  
  /* local definitions, followed by init calls, go here */
  $LOCAL

  /* exit on gio errors */
  if( !getenv("GERROR")  )
    setgerror(2);

  /* avoid shared library problems by using "process" type for filtering */
  putenv("FILTER_PTYPE=process");

  /* process switch arguments */
  while ((__c = getopt(argc, argv, "a:d")) != -1){
    switch(__c){
    case 'a':
      __argstr = xstrdup(optarg);
      break;
    case 'd':
      __del = 1;
      break;
    }
  }

  /* check for required arguments */
  __args = argc - optind;
  /* make sure we have minimal arguments */
  if( __args < $ARGS ){
    if( $ARGS == 1 )
      fprintf(stderr, "usage: %s iname\n", argv[0]);
    else
      fprintf(stderr, "usage: %s iname oname [cols]\n", argv[0]);
    goto error;
  }

  /* set passed arguments in __xargs array */
  if( __argstr && *__argstr ){
    __xargs = calloc(SZ_LINE, sizeof(char *));
    while( word(__argstr, __tbuf, &__ip) ){
      if( __nxarg >= SZ_LINE ){
	gerror(stderr, "too many args passed via -a\n");
	goto error;
      }
      __xargs[__nxarg++] = xstrdup(__tbuf);
    }
  }

  /* set rectype: determine whether we need prev,next records */
  __rectype=$RECTYPE;

  /* get maxrow,if user-specified */
  if( (__s=(char *)getenv("FUN_MAXROW")) != NULL )
    __maxrow = atoi(__s);
  /* make sure max row is large enough to handle prev, next */
  if( __rectype & (REC_PREV|REC_NEXT) )
    __maxrow = MAX(3,__maxrow);
  else
    __maxrow = MAX(1,__maxrow);
  /* this is what we read each time */
  __get = __maxrow;

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
  FunColumnSelect(fun, sizeof(RowRec), "merge=$MERGE", 
		  $SELECT
		  "$N", "1J", "r", FUN_OFFSET(Row, __ncol),
		  NULL);

  /* activate specified columns -- these will be written to the output file */
  if( __args >= 3 ) __cols = argv[optind+2];
  FunColumnActivate(fun, __cols, NULL);

  /* allocate space for __rowbuf -- we will manage this buffer ourselves */
  /* NB: we need 2 extra rows for prev and next */
  __rowbuf = (Row)xcalloc(__maxrow+2, sizeof(RowRec));

  /* get size of raw data record and allocate a raw record */
  FunInfoGet(fun, FUN_RAWSIZE, &__rawsize, 0);
  __rawsave = (char *)xcalloc(1, __rawsize);

  /*  no record read yet */
  __total = 0;

  /* any user-defined calls before we enter the row loop go here */
  $BEFORE

  /* main loop -- get rows and process */
  while( 1 ){
    if( !(__rectype & (REC_PREV|REC_NEXT)) ){
      /* offset of next record to process */
      __rowsptr = __rowbuf;
      __rowrptr = __rowbuf;
    }
    /* need prev record */
    else if( __rectype & REC_PREV ){
      /* no records yet: read new batch of records into start of __rowbuf */
      if( __total == 0 ){
	__rowsptr = __rowbuf+1;
	__rowrptr = __rowbuf;
      }
      /* read last processed record into start of __rowbuf, process others */
      else{
	if( __rectype & REC_NEXT ){
          memcpy(__rowbuf, __rowrptr+(__got-2), sizeof(RowRec)*2);
          __rowsptr = __rowbuf+1;
	  __rowrptr = __rowbuf+2;
	  /* save raw data for this unprocessed record */
	  FunInfoGet(fun, FUN_RAWBUF, &__rawbuf, 0);
	  memcpy(__rawsave, __rawbuf+((__got-1)*__rawsize), __rawsize);
	}
	else{
          memcpy(__rowbuf, __rowrptr+(__got-1), sizeof(RowRec));
	  __rowsptr = __rowbuf+1;
	  __rowrptr = __rowbuf+1;
	}
      }
    }
    /* if we did not process last record, seek to it now and start there */
    else if( __rectype & REC_NEXT ){
      /* no records yet: read new batch of records into start of __rowbuf */
      if( __total == 0 ){
	__rowsptr = __rowbuf;
	__rowrptr = __rowbuf;
      }
      /* read last processed record into first new record, process others */
      else{
	memcpy(__rowbuf, __rowrptr+(__got-1), sizeof(RowRec));
	__rowsptr = __rowbuf;
	__rowrptr = __rowbuf+1;
	/* save raw data for this unprocessed record */
	FunInfoGet(fun, FUN_RAWBUF, &__rawbuf, 0);
	memcpy(__rawsave, __rawbuf+((__got-1)*__rawsize), __rawsize);
      }
    }

    /* read new rows */
    if( !FunTableRowGet(fun, __rowrptr, __get, NULL, &__got) || !__got )
      break;

    /* last record to process */
    __roweptr = __rowrptr + __got;
    /* if we need access to next record, don't process the last one we read */
    if( __rectype & REC_NEXT ){
      __roweptr--;
    }

    /* make sure there are rows to process */
    if( (__roweptr-__rowsptr) <= 0 ) break;

    /* process all rows */
    for(cur=__rowsptr, __i=__rowsptr-__rowrptr; cur<__roweptr; cur++, __i++){
      /* save raw buffer and switch rawbuf from previous */
      if( __i == -1 ){
	FunInfoGet(fun, FUN_RAWBUF, &__rawbuf, 0);
	FunInfoPut(fun, FUN_RAWBUF, &__rawsave, 0);
	__i = 0;
	__saved = 1;
      }
      /* restore raw buffer */
      else if( __saved ){
	FunInfoPut(fun, FUN_RAWBUF, &__rawbuf, 0);
	__i = 0;
	__saved = 0;
      }
      /* finished another row */
      NROW++;
      /* set up pointer to prev and next as needed */
      if( __rectype & REC_PREV ) prev = cur - 1;
      if( __rectype & REC_NEXT ) next = cur + 1;
      /* execute the expression */
      $EXPR
      /* write out this row with the new column */
      if( $ARGS > 1 ) WRITE_ROW;
    }
    /* update total */
    __total += __got;
  }

  /* any user-defined calls after we finish the row loop go here */
  $AFTER

  /* free row data */
  if( __rowbuf )  xfree(__rowbuf);
  if( __rawsave ) xfree(__rawsave);

  /* free arg strings */
  if( __xargs ){
    for(__i=0; __i<__nxarg; __i++){
      if( __xargs[__i] ) xfree(__xargs[__i]);
    }
    xfree(__xargs);
  }

  /* clean up -- close output before input to perform flush automatically */
  if( $ARGS > 1 )
    FunClose(ofun);
  FunClose(fun);

  /* delete program if necessary */
  if( __del ) unlink(argv[0]);
  return(0);

error:
  /* delete program if necessary */
  if( __del ) unlink(argv[0]);
  return(1);
}
