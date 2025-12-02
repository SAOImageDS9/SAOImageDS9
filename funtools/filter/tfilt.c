/*
 *	Copyright (c) 1999-2003 Smithsonian Astrophysical Observatory
 */

/*
 *
 * tfilt.c -- test program for filtering tables
 *
 */

#if HAVE_CONFIG_H
#include <conf.h>
#endif

#include <stdio.h>
#ifdef HAVE_UNISTD_H
#include <unistd.h>
#endif
#ifdef HAVE_MALLOC_H
#include <malloc.h>
#endif
#ifdef HAVE_STDLIB_H
#include <stdlib.h>
#endif
#ifdef HAVE_STRING_H
#include <string.h>
#endif
#include <sys/types.h>
#include <prsetup.h>
#include <filter.h>
#include <idx.h>
#include <word.h>

extern char *optarg;
extern int optind;

char bincols[SZ_LINE];
int debug=0;

#define NEVENTS	10240

/* from Harbison&Steele by way of GNU cinfigure ...
   returns 1 for bigendian, 0 for littleendian */
#ifdef ANSI_FUNC
int
is_bigendian(void)
#else
int is_bigendian()
#endif
{
  union
  {
    long l;
    char c[sizeof (long)];
  } u;
  u.l = 1;
  return(u.c[sizeof (long) - 1] == 1);
}

/*
 *
 * ListEvents -- list events in a binary table
 *
 */
#ifdef ANSI_FUNC
static int
ListEvents(GIO gio, FILE *ofd, FITSHead header, char *s, int iformat,
	   char *mode)
#else
static int ListEvents(gio, ofd, header, s, iformat, mode)
     GIO gio;			/* input FITS file handle */
     FILE *ofd;			/* output file handle */
     FITSHead header;		/* fitsy header */
     char *s;			/* filter for events */
     int iformat;		/* input format of data: 0=native, 1=fits */
     char *mode			/* filteropen mode */
#endif
{
  int i, j;			/* loop counters */
  int get;			/* number of events to read */
  int got;			/* number of events read */
  int left;			/* number of events left to read */
  int total;			/* total number of events in file */
  int convert;			/* whether we have to convert to native */
  int nev;			/* max number of events to read at once */
  int evsize;			/* size of an event record */
  int ototal;			/* output total events */
  int *vbuf;			/* valid event flags */
  char *ebuf;			/* event buffer */
  char *eptr;			/* current pointer into ebuf */
  char tbuf[SZ_LINE];		/* ever-present temp buf */
  unsigned char bval;		/* byte value */
  short sval;			/* short value */
  unsigned short usval;		/* short value */
  int ival;			/* int value */
  long long lval;		/* 64-bit int value */
  unsigned int uival;		/* unsigned int value */
  float fval;			/* float value */
  double dval;			/* double value */
  int dofilt=0;			/* true if we can filter */
  Filter filter=NULL;

  /* we have to convert to native if the data is not the
     same as the big-endian-ness of the machine */
  convert = (iformat != is_bigendian());
  /* create the mode string */
  if( convert )
    strcpy(tbuf, "convert=true");
  else
    strcpy(tbuf, "convert=false");
  strcat(tbuf, bincols);
  if( debug )
    strcat(tbuf, ",debug=2");

  /* now add the input mode */
  if( mode && *mode ){
    strcat(tbuf, ",");
    strcat(tbuf, mode);
  }

  /* init some convenience variables */
  evsize = header->basic->naxis[0];
  total = header->basic->naxis[1];
  ototal = 0;

  /* open the filter */
  if( (filter = FilterOpen(header, s, tbuf)) == NULL ){
    fprintf(stderr, "ERROR: tfilt could not open filter: %s\n",
	    s ? s : "no filter");
    return(0);
  }
  else if( filter == NOFILTER ){
    fprintf(stderr, "no valid filter specified\n");
    return(0);
  }

  /* allocate space for a pile of event records */
  for(nev=NEVENTS; nev>0; nev /=2){
    if( ((ebuf = (char *)xmalloc(evsize*nev))!= NULL) &&
        ((vbuf = (int *)xmalloc(sizeof(int)*nev))!= NULL) )
      break;
  }

  /* print out header */
  for(j=0; j<header->table->tfields; j++){
    switch(header->table->col[j].type){
    case 'B':
    case 'L':
      fprintf(ofd, "%6s", header->table->col[j].name);
      break;
    case 'I':
    case 'U':
      fprintf(ofd, "%6s", header->table->col[j].name);
      break;
    case 'J':
    case 'V':
      fprintf(ofd, "%11s", header->table->col[j].name);
      break;
    case 'K':
      fprintf(ofd, "%20s", header->table->col[j].name);
      break;
    case 'E':
      fprintf(ofd, "%11s", header->table->col[j].name);
      break;
    case 'D':
      fprintf(ofd, "%17s", header->table->col[j].name);
      break;
    default:
      break;
    }
  }
  fprintf(ofd, "\n");

  for(j=0; j<header->table->tfields; j++){
    switch(header->table->col[j].type){
    case 'B':
    case 'L':
      fprintf(ofd, " -----");
      break;
    case 'I':
    case 'U':
      fprintf(ofd, " -----");
      break;
    case 'J':
    case 'V':
      fprintf(ofd, " ----------");
      break;
    case 'K':
      fprintf(ofd, " -------------------");
      break;
    case 'E':
      fprintf(ofd, " ----------");
      break;
    case 'D':
      fprintf(ofd, " ----------------");
      break;
    default:
      break;
    }
  }
  fprintf(ofd, "\n");

  /* set the total number of events or 'read til eof' */
  left = total;

  /* read all event records */
  while( left != 0 ){
    /* figure out how many to read this time */
    get = MIN(nev, left);
    /* read in a pile of events */
    got=gread(gio, ebuf, evsize, get);
    /* check for eof */
    if( got != get ){
      fprintf(stderr, "Warning: events ends at %d (expected %d)\n",
		total-left, total);
      /* we must be done */
      left = 0;
    }
    else{
      left -= got;
    }
    /* filter the events through the co-process */
    if( filter ){
      dofilt = FilterEvents(filter, ebuf, evsize, got, vbuf);
    }
    /* process each event in the pile */
    for(eptr=ebuf, i=0; i<got; i++, eptr += evsize){
      /* if its not a valid event, skip it */
      if( dofilt && (vbuf[i] == 0) )
	continue;
      /* else increment the total events */
      ototal++;
      /* process this event */
      for(j=0; j<header->table->tfields; j++){
	switch(header->table->col[j].type){
	case 'B':
	case 'L':
	  ColumnLoad(eptr+header->table->col[j].offset,
		    header->table->col[j].size, 1, convert, (char *)&bval);
	  fprintf(ofd, "%6d", (int)bval);
	  break;
	case 'I':
	  ColumnLoad(eptr+header->table->col[j].offset,
		    header->table->col[j].size, 1, convert, (char *)&sval);
	  fprintf(ofd, "%6d", (int)sval);
	  break;
	case 'U':
	  ColumnLoad(eptr+header->table->col[j].offset,
		    header->table->col[j].size, 1, convert, (char *)&usval);
	  fprintf(ofd, "%6d", (int)usval);
	  break;
	case 'J':
	  ColumnLoad(eptr+header->table->col[j].offset,
		    header->table->col[j].size, 1, convert, (char *)&ival);
	  fprintf(ofd, "%11d", ival);
	  break;
	case 'V':
	  ColumnLoad(eptr+header->table->col[j].offset,
		    header->table->col[j].size, 1, convert, (char *)&uival);
	  fprintf(ofd, "%11d", uival);
	  break;
	case 'K':
	  ColumnLoad(eptr+header->table->col[j].offset,
		    header->table->col[j].size, 1, convert, (char *)&lval);
	  fprintf(ofd, "%20lld", lval);
	  break;
	case 'E':
	  ColumnLoad(eptr+header->table->col[j].offset,
		    header->table->col[j].size, 1, convert, (char *)&fval);
	  fprintf(ofd, "%11.2f", fval);
	  break;
	case 'D':
	  ColumnLoad(eptr+header->table->col[j].offset,
		    header->table->col[j].size, 1, convert, (char *)&dval);
	  fprintf(ofd, "%17.4f", dval);
	  break;
	default:
	  break;
	}
      }
      fprintf(ofd, "\n");
    }
  }

  /* free up allocated space */
  if( ebuf )
    xfree(ebuf);
  if( vbuf )
    xfree(vbuf);

  /* done with the filter process */
  if( filter )
    FilterClose(filter);

  /* final tally */
  fprintf(ofd, "\nTotal events: %d\n", ototal);

  /* that's good news */
  return(ototal);
}

#ifdef ANSI_FUNC
int 
main (int argc, char **argv)
#else
main(argc, argv)
     int argc;
     char **argv;
#endif
{
  int c;
  int type;
  int x, y, n;
  int nmask;
  int x0, x1, y0, y1, block;
  int listev = 0;
  int dispim = 0;
  int dispfilt = 1;
  int doidx = 0;
  char *s;
  char *iname;			/* input file name ptr */
  char fname[SZ_LINE];		/* input file name */
  char tail[SZ_LINE];		/* tail of file name */
  char tbuf[SZ_LINE];		/* ever-present temp buffer */
  char mode[SZ_LINE];		/* mode for FilterOpen */
  char evsect[SZ_LINE];		/* event section for image filters */
  long save_pos;		/* save position in FITS file */
  GIO gio;			/* input FITS file handle */
  FITSHead header;		/* global fitsy header struct */
  Filter filter;
  FilterMask masks;

  /* we want the args in the same order in which they arrived, and
     gnu getopt sometimes changes things without this */
  putenv("POSIXLY_CORRECT=true");

  /* assume events */
  type = 'e';

  /* process switch arguments */
  while ((c = getopt(argc, argv, "d:efilxz")) != -1){
    switch(c){
    case 'd':
      dispim = 1;
      strcpy(evsect, optarg);
      if(sscanf(optarg, "%d %d %d %d %d", &x0, &x1, &y0, &y1, &block)!=5){
	fprintf(stderr, "-d requires x0, x1, y0, y1, block\n");
	exit(1);
      }
      break;
    case 'e':
      type = 'e';
      break;
    case 'f':
      dispfilt = 1;
      break;
    case 'i':
      type = 'i';
      break;
    case 'l':
      listev = 1;
      break;
    case 'x':
      doidx = 1;
      break;
    case 'z':
      putenv("FILTER_PAINT=true");
      break;
    }
  }

  if( type == 'e' ){
    strcpy(mode, "type=events");
    if( dispim ){
      snprintf(tbuf, SZ_LINE, ",evsect=\"%s\"", evsect);
      strcat(mode, tbuf);
    }
  }
  else{
    strcpy(mode, "type=image");
  }


  /* get file name or use a default */
  if( optind >= argc ){
    iname = "../funtest/test.ev[EVENTS]";
  }
  else{
    strncpy(fname, argv[optind], SZ_LINE);
    if( !strchr(fname, '[') )
      strncat(fname, "[EVENTS]", SZ_LINE);
    iname = fname;
    optind++;
  }

  /* if we do not list or display, we are in debug mode */
  if( !listev && !dispim && !dispfilt ){
    debug = 2;
  }

  /* open the binary table extension */
  if( (gio=ft_fitsheadopen(iname, &header, tail, SZ_LINE, "r")) == NULL ){
    fprintf(stderr, "ERROR: can't read FITS binary table: %s\n", iname);
    exit(1);
  }
  if( header == NULL ){
    fprintf(stderr, "ERROR: can't access FITS data: %s\n", iname);
    exit(1);
  }

  if( keyword(tail, "bincols", tbuf, SZ_LINE) ){
    snprintf(bincols, SZ_LINE, ",bincols=(%s)", tbuf);
    strcat(mode, bincols);
  }
  else{
    strcpy(bincols, ",bincols=(x,y)");
    strcat(mode, bincols);
  }
  if( debug )
    strcat(mode, ",debug=2");
  strcat(mode, ",lexonly=1");
  if( (s=getenv("FILTER_PAINT")) ){
    if( istrue(s) )
      strcat(mode, ",paint=true");
    else if( isfalse(s) )
      strcat(mode, ",paint=false");
  }

  while( 1 ){
    *tbuf = '\0';
    if( feof(stdin) )
      break;
    fgets(tbuf, SZ_LINE, stdin);
    if( *tbuf == 'q' )
      exit(0);
    if( *tbuf ){
      if( listev ){
	/* list out events */
	save_pos = gtell(gio);
	ListEvents(gio, stdout, header, tbuf, 1, mode);
	gseek(gio, save_pos, SEEK_SET);
      }
      if( dispim ){
	/* display image */
	if( *tbuf && (*tbuf != '\n') ){
	  fprintf(stdout, "input string: %s", tbuf);
	  filter = FilterOpen(header, tbuf, mode);
	  if( !filter )
	    fprintf(stderr, "Error in FilterOpen()\n");
	  else if( filter == NOFILTER )
	    fprintf(stderr, "No valid filter specified\n");
	  else{
	    nmask = FilterImage(filter, x0, x1, y0, y1, block, &masks, NULL);
	    if( nmask ){
	      /* loop through mask segments */
	      y = 1;
	      for(n=0; n<nmask; n++){
		/* process rows before the y row of this mask segment */
		for(; y<masks[n].y; y++){
		  for(x=1; x<=(x1-x0+block)/block; x++)
		    fprintf(stdout, "*");
		  fprintf(stdout, "\n");
		}
		/* process each mask segment having the same y value */
		x = 1;
		while(1){
		  /* process columns before the start column */
		  for(; x<masks[n].xstart; x++)
		    fprintf(stderr, ".");
		  /* process columns in the mask */
		  for(; x<=masks[n].xstop; x++)
		    fprintf(stderr, "%d", masks[n].region);
		  /* if we have another mask segment with the same y,
		     we keep going */
		  if( ((n+1)<nmask) && (masks[n+1].y==y) )
		    n++;
		  else
		    break;
		}
		/* process the rest of the columns for this y row */
		for(; x<=(x1-x0+block)/block; x++)
		  fprintf(stderr, ".");
		/* processed all mask segs in this y */
		fprintf(stderr, "\n");
		/* bump to next y row */
		y++;
	      }
	      /* process y rows after last row containing a mask segment */
	      for(y=masks[nmask-1].y+1; y<=(y1-y0+block)/block; y++){
		for(x=1; x<=(x1-x0+block)/block; x++)
		  fprintf(stdout, "*");
		fprintf(stdout, "\n");
	      }
	    }
	    if( masks )
	      xfree(masks);
	    FilterClose(filter);
	  }
	}
      }
      else{
	if( *tbuf && (*tbuf != '\n') ){
	  fprintf(stdout, "input string: %s", tbuf);
	  filter = FilterOpen(header, tbuf, mode);
	  if( !filter )
	    fprintf(stderr, "Error in FilterOpen()\n");
	  else if( filter == NOFILTER )
	    fprintf(stderr, "No valid filter specified\n");
	  if( doidx ){
	    if( (s = xstrdup(_FilterString()) ) ){
	      fprintf(stdout, "index input: %s\n", s);
	      idxinitparser(s);
	      idxparse();
	      idxendparser();
	      xfree(s);
	    }
	  }
	  if( dispfilt ){
	    fprintf(stdout, "filter: %s\n", _FilterString());
	  }
	  FilterClose(filter);
	}
      }
    }
  }
  return(0);
}
