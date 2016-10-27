/*
 *	Copyright (c) 1999-2003 Smithsonian Astrophysical Observatory
 */

#include <funtoolsP.h>
#include <find.h>
#include <zprocess.h>
#include <chandra.h>

#define MAXROW 8192
static int maxrow=MAXROW;
static char macrobuf[SZ_LINE];

#define SORTPROG "_funsort"

typedef struct rowstruct{
  int x, y;
  double value;
  int region;
  int n;
} *Row, RowRec;

extern char *optarg;
extern int optind;

#ifdef ANSI_FUNC
static char *
_funtableCB(char *name, void *client_data)
#else
static char *_funtableCB(name, client_data)
	char *name;
	void *client_data;
#endif
{
  int n=*(int *)client_data;
  if( !strcasecmp(name, "n") ){
    snprintf(macrobuf, SZ_LINE-1, "%d", n);
    return(macrobuf);
  }
  else{
    return NULL;
  }
}

#ifdef ANSI_FUNC
static void
usage (char *fname)
#else
static void usage(fname)
     char *fname;
#endif
{
  fprintf(stderr,
	  "usage: %s [-a] [-i|-z] [-m] [-s cols] iname oname [columns]\n",
	  fname);
  fprintf(stderr, "optional switches:\n");
  fprintf(stderr, "  -a  # append to existing output file as a table extension\n");
  fprintf(stderr, "  -i  # for image data, only generate X and Y columns\n");
  fprintf(stderr, "  -m  # for tables, write a separate file for each region\n");
  fprintf(stderr, "  -s 'col1 ...'  # columns on which to sort\n");
  fprintf(stderr, "  -z  # for image data, output zero-valued pixels\n");
  fprintf(stderr, "\n(version: %s)\n", FUN_VERSION);
  exit(1);
}

#ifdef ANSI_FUNC
int 
main (int argc, char **argv)
#else
int
main(argc, argv)
     int argc;
     char **argv;
#endif
{
  int c;
  int i, j, k, n;
  int args;
  int nfile;
  int got, put;
  int type, isize;
  int dim1, dim2, dims;
  int ichan, ochan, pid, status;
  int rtype, rmode, roffset;
  int r=0;
  int rval=0;
  int ncol=0;
  int ip=0;
  int doindiv=0, dozero=0, dosort=0, domulti=0;
  int dtype, doffset, dmode, dn;
  int plen, elen, flen;
  int epad, ppad;
  int rlen;
  double dval;
  char *iname=NULL;
  char *oname=NULL;
  char *mode=NULL;
  char *sortcols=NULL;
  char *actcols=NULL;
  char *prog=NULL;
  char *path=NULL;
  char *ebuf=NULL;
  char *eptr=NULL;
  char *omode="w";
  char *s=NULL;
  char *t=NULL;
  char *u=NULL;
  char *fits=NULL;
  char *extn=NULL;
  char col[SZ_LINE];
  char tbuf[SZ_LINE];
  char cmd[SZ_LINE];
  double *dbuf=NULL;
  FILE *ifile;
  Fun fun, tfun=NULL;
  Fun *funs=NULL;
  Filter filt=NULL;
  FITSCard card;
  Row rowbuf, row;

  /* exit on gio errors */
  if( !getenv("GERROR")  )
    setgerror(2);

  /* we want the args in the same order in which they arrived, and
     gnu getopt sometimes changes things without this */
  putenv("POSIXLY_CORRECT=true");

  /* process switch arguments */
  while ((c = getopt(argc, argv, "aims:z")) != -1){
    switch(c){
    case 'a':
      omode = "A";
    case 'i':
      doindiv = 1;
      break;
    case 'm':
      domulti=1;
      break;
    case 's':
      dosort = 1;
      sortcols=xstrdup(optarg);
      break;
    case 'z':
      dozero = 1;
      break;
    }
  }

  /* get maxrow,if user-specified */
  if( (s=getenv("FUN_MAXROW")) != NULL )
    maxrow = atoi(s);

  /* check for required arguments */
  args = argc - optind;
  if( args < 2 ) usage(argv[0]);
  iname = argv[optind+0];
  oname = xstrdup(argv[optind+1]);

  if( !(fun = FunOpen(iname, "rc", NULL)) )
    gerror(stderr, "can't FunOpen input file (or find extension): %s\n",
	   iname);

  /* for multiple outputs, we need a file for each region and one extra */
  if( domulti ){
    if( fun->filter )
      tfun = fun;
    else{
      /* for non-disk files, we should punt, but we'll open a fake
	 Chandra/ACIS FITS file and hope for the best */
      if( !strncasecmp(iname, "stdin", 5) || !strncmp(iname, "-", 1) ||
	  !strncasecmp(iname, "pipe:", 5) ){
	extn = FileExtension(iname);
	plen = strlen(_prim);
	if( (ppad = FT_BLOCK - (plen % FT_BLOCK)) == FT_BLOCK ) ppad = 0;
	elen = strlen(_extn);
	if( (epad = FT_BLOCK - (elen % FT_BLOCK)) == FT_BLOCK ) epad = 0;
	flen = plen + ppad + elen + epad;
	fits = (char *)calloc(flen+1, sizeof(char));
	memset(fits, (int)' ', flen);
	memcpy(fits, _prim, plen);
	memcpy(fits+plen+ppad, _extn, elen);
	snprintf(tbuf, SZ_LINE-1,
		 "buf:%#lx:%d%s", (long)fits, flen, extn?extn:"");
	tfun = FunOpen(tbuf, "r", NULL);
      }
      /* otherwise we can open the input file once again */
      else
	tfun = FunOpen(iname, "r", NULL);
    }
    FunInfoGet(tfun, FUN_TYPE, &type, 0);
    if( (type == FUN_IMAGE) || (type == FUN_ARRAY) )
      gerror(stderr, "can't output to multiple image files\n");
    strcpy(tbuf, "lexonly=true");
    if( tfun->bincols ){
      strcat(tbuf, ",");
      strcat(tbuf, tfun->bincols);
    }
    filt = FilterOpen(tfun->header, tfun->filter, tbuf);
    nfile = FilterRegionCount(TOK_IREG)+1;
    FilterClose(filt);
    if( tfun != fun )
      FunClose(tfun);
  }
  /* output a single file */
  else{
    nfile = 1;
    /* current fun handle is always first */
    r = 0;
  }
  /* should work for multi and single file output */
  if( !(funs = (Fun *)xcalloc(nfile, sizeof(Fun))) )
    gerror(stderr, "can't allocate space for multiple fun handles\n");
  /* make up output file names and open files */
  if( domulti ){
    /* open the input FITS file */
    if( !(u=strchr(oname, '$')) ){
      s = calloc(SZ_LINE, sizeof(char));
      if( (t=strchr(oname, '.')) ){
	*t='\0';
	t++;
      }
    }
    for(i=0; i<nfile; i++){
      /* put ivalue exactly where the user asked for it */
      if( u )
	s = ExpandMacro(oname, NULL, NULL, 0, _funtableCB, (void *)&i);
      /* put ivalue before first '.' */
      else if( t )
	snprintf(s, SZ_LINE-1, "%s%d.%s", oname, i, t);
      /* no hint about what to do -- prepend the ivalue */
      else
	snprintf(s, SZ_LINE-1, "%s%d", oname, i);
      /* last one triggers open of input file and possible copy */
      if( i == (nfile-1) )
	strncpy(tbuf, omode, SZ_LINE-1);
      /* otherwise, just add output fd to list of output file */
      else
	snprintf(tbuf, SZ_LINE-1, "%sd", omode);
      /* open the output FITS table, preparing to copy input params.
	 must be done before accessing the input file to allow for ext copy */
      if( !(funs[i] = FunOpen(s, tbuf, fun)) )
	gerror(stderr, "can't FunOpen output file #%d: %s\n", i, s);
      if( u && s ) xfree(s);
    }
    if( !u && s ) xfree(s);
  }
  else{
    if( !(funs[r] = FunOpen(oname, omode, fun)) )
      gerror(stderr, "can't FunOpen output file: %s\n", oname);
  }

  /* get type of input data */
  FunInfoGet(fun, FUN_TYPE, &type, 0);

  /* process data by type */
  switch(type){
  case FUN_TABLE:
  case FUN_EVENTS:
    /* uness we are sorting, only read $region & $n into user space so we
       can override their values (by merging with raw data) */
    if( !dosort ){
      FunColumnSelect(fun, sizeof(RowRec), "merge=replace",
		      "$REGION", "J", "rw", FUN_OFFSET(Row, region),
		      "$N",      "J", "rw", FUN_OFFSET(Row, n),
		      NULL);
      FunColumnActivate(fun, "-$REGION -$N", NULL);
    }

    /* set activate specified output columns */
    if( args >= 3 ) actcols = argv[optind+2];
    FunColumnActivate(fun, actcols, NULL);

    /* if region was not activiated by the user, activate now for read only */
    if( domulti ){
      if( !FunColumnLookup(fun, COL_REGION_NAME,
			   0, NULL, &rtype, &rmode, &roffset, NULL, NULL) ||
	  !(rmode&COL_ACTIVE))
      FunColumnActivate(fun, "+$REGION", "mode=r");
    }
    /* if we specified columns, we also can specify "mask=transparent"
       and get all events, with the regionid (assuming we specified 
       the region column to display as well) */
    if( args >= 4 ) mode = argv[optind+3];

    /* set up sorting, if necessary */
    if( dosort ){
      /* look for sort program */
      path = (char *)getenv("PATH");
      if( !(prog=Find(SORTPROG, "x", NULL, path)) )
	gerror(stderr, "can't locate sort program: %s\n", SORTPROG);
      /* allow commas as delims */
      newdtable(",");
      /* get the size of the input record */
      FunInfoGet(fun, FUN_ROWSIZE, &isize, 0);
      /* construct argument list for sort program */
      snprintf(cmd, SZ_LINE-1, "%s -B%d", prog, isize);
      rlen = SZ_LINE - strlen(cmd) - 1;
      for(ncol=0; word(sortcols, col, &ip); ncol++ ){
	if( !FunColumnLookup(fun, col, 0, NULL, &dtype, &dmode, &doffset, &dn,
			     NULL) ){
	  gerror(stderr, "can't find sort column '%s'\n", col);
	}
	if( !(dmode & COL_ACTIVE) ){
	  gerror(stderr, "sort column '%s' must be active\n", col);
	}
	switch(dtype){
	case 'A':
	  snprintf(tbuf, SZ_LINE-1, "+t%d.%d", doffset, dn);
	  break;
	case 'B':
	  snprintf(tbuf, SZ_LINE-1, "+B%d", doffset);
	  break;
	case 'I':
	  snprintf(tbuf, SZ_LINE-1, "+s%d", doffset);
	  break;
	case 'U':
	  snprintf(tbuf, SZ_LINE-1, "+S%d", doffset);
	  break;
	case 'J':
	  snprintf(tbuf, SZ_LINE-1, "+i%d", doffset);
	  break;
	case 'K':
	  snprintf(tbuf, SZ_LINE-1, "+l%d", doffset);
	  break;
	case 'V':
	  snprintf(tbuf, SZ_LINE-1, "+I%d", doffset);
	  break;
	case 'E':
	  snprintf(tbuf, SZ_LINE-1, "+f%d", doffset);
	  break;
	case 'D':
	  snprintf(tbuf, SZ_LINE-1, "+d%d", doffset);
	  break;
	default:
	  gerror(stderr, "unsupported sort data type for column %s\n", tbuf);
	}
	strncat(cmd, " ",  rlen);
	rlen--;
	strncat(cmd, tbuf, rlen);
	rlen -= strlen(tbuf);
	if( rlen <=0 ){
	  gerror(stderr, "too many arguments for sort\n");
	  exit(1);
	}
      }
      freedtable();
      /* start the sort program */
      if( !ProcessOpen(cmd, &ichan, &ochan, &pid) ){
	gerror(stderr, "ERROR: can't start sort program: %s\n", prog);
      }
    }
    /* extract events */
    while( (ebuf = FunTableRowGet(fun, NULL, maxrow, mode, &got)) ){
      /* sort: write unsorted events to sort program */
      if( dosort ){
	write(ochan, ebuf, got*isize);
      }
      /* no sort: copy directly to output */
      else{
	/* multiple files -- one for each region id */
	if( domulti ){
	  for(n=0; n<got; n++){
	    row = (Row)ebuf+n;
	    r = MAX(0,row->region);
	    if( (put=FunTableRowPut(funs[r], row, 1, n, NULL)) != 1 ){
	      gerror(stderr, "expected to write %d rows; only wrote %d\n",
		     1, put);
	    }
	  }
	}
	/* single file output */
	else{
	  if( (put=FunTableRowPut(funs[r], ebuf, got, 0, NULL)) != got ){
	    gerror(stderr, "expected to write %d rows; only wrote %d\n",
		   got, put);
	  }
	}
      }
      xfree(ebuf);
    }
    /* finish up sorting, if necessary */
    if( dosort ){
      /* signal EOF to sort program */
      close(ochan);
      if( maxrow * isize > fun->maxbufsize ){
      if( isize > fun->maxbufsize )
	maxrow = 1;
      else
	maxrow = fun->maxbufsize / isize;
      }
      if( maxrow <= 0 ) maxrow = 1;
      ebuf = xmalloc(maxrow*isize);
      /* use stdio to avoid returning partial records */
      if( !(ifile = fdopen(ichan, "r")) ){
	gerror(stderr, "can't retrieve sorted records\n");
      }
      while( (got=fread(ebuf, isize, maxrow, ifile)) ){
	/* multiple files -- one for each region id */
	if( domulti ){
	  for(n=0; n<got; n++){
	    /* point at next event */
	    eptr = ebuf + (n*isize);
	    /* get region id */
	    switch(rtype){
	    case 'B':
	      rval = (int)*(unsigned char *)(eptr+roffset);
	      break;
	    case 'I':
	      rval = (int)*(short *)(eptr+roffset);
	      break;
	    case 'U':
	      rval = (int)*(unsigned short *)(eptr+roffset);
	      break;
	    case 'J':
	      rval = *(int *)(eptr+roffset);
	      break;
	    case 'K':
#if HAVE_LONG_LONG == 0
	      gerror(stderr, 
		  "64-bit data support not built (long long not available)\n");
#endif
	      rval = *(longlong *)(eptr+roffset);
	      break;
	    case 'V':
	      rval = (int)*(unsigned int *)(eptr+roffset);
	      break;
	    case 'E':
	      rval = (int)*(float *)(eptr+roffset);
	      break;
	    case 'D':
	      rval = (int)*(double *)(eptr+roffset);
	      break;
	    }
	    /* offset is region id (but not less than 0) */
	    r = MAX(0, rval);
	    /* output event to appropriate file */
	    if( (put=FunTableRowPut(funs[r], eptr, 1, n, NULL)) != 1 ){
	      gerror(stderr, "expected to write %d rows; only wrote %d\n",
		     1, put);
	    }
	  }
	}
	/* single file output */
	else{
	  /* output all events in this buffer to single file */
	  if( (put=FunTableRowPut(funs[r], ebuf, got, 0, NULL)) != got ){
	    gerror(stderr, "expected to write %d rows; only wrote %d\n",
		   got, put);
	  }
	}
      }
      /* done with sorting process */
      ProcessClose(pid, &status);
      fclose(ifile);
      if( sortcols ) xfree(sortcols);
      if( ebuf ) xfree(ebuf);
    }
    /* write out heap space, if it exists -- this quick hack needs cleanup! */
    if( fun->header && (ft_pcount(fun->header) > 0) ){
      int got;
      int hlen;
      char *heap;
      hlen=ft_pcount(fun->header);
      if( (heap = xmalloc(hlen)) ){
	/* read heap data */
	got = gread (fun->gio, heap, sizeof(char), hlen);
	fun->bytes += got;
	/* write heap data to each output file */
	for(n=0; n<nfile; n++){
	  got = gwrite (funs[n]->gio, heap, sizeof(char), got);
	  funs[n]->bytes += got;
	}
	xfree(heap);
      }
    }
    break;
  case FUN_IMAGE:
  case FUN_ARRAY:
    if( dosort )  gerror(stderr, "can't sort image data\n");
    if( domulti ) gerror(stderr, "can't output to multiple image files\n");
    /* get image section information */
    FunInfoGet(fun, 
	       FUN_SECT_DIM1, &dim1,
	       FUN_SECT_DIM2, &dim2,
	       FUN_SECT_DIMS, &dims, 0);
    /* make a standard extension name for the new binary table */
    FunParamPuts(funs[r], "EXTNAME", 0, "EVENTS", NULL, 1);
    if( dims >= 2 ){
      /* add tlmin/tlmax values for the x,y columns */
      FunParamPuti(funs[r], "TLMIN1", 0, 1, NULL, 1);
      FunParamPuti(funs[r], "TLMAX1", 0, dim1, NULL, 1);
      FunParamPuti(funs[r], "TLMIN2", 0, 1, NULL, 1);
      FunParamPuti(funs[r], "TLMAX2", 0, dim2, NULL, 1);
      /* transform WCS cards from image to binary table */
      for(i=1; i<=2; i++){
	if( (s=ft_headgets(fun->header, "CTYPE", i, NULL, &card)) && card ){
	  FunParamPuts(funs[r], "TCTYP", i, s, NULL, 1);
	  xfree(s);
	}
	if((dval=ft_headgetr(fun->header, "CRVAL", i, 0.0, &card)) && card){
	  FunParamPutd(funs[r], "TCRVL", i, dval, 7, NULL, 1);
	}
	if((dval=ft_headgetr(fun->header, "CDELT", i, 0.0, &card)) && card){
	  FunParamPutd(funs[r], "TCDLT", i, dval, 7, NULL, 1);
	}
	if((dval=ft_headgetr(fun->header, "CROTA", i, 0.0, &card)) && card){
	  FunParamPutd(funs[r], "TCROT", i, dval, 7, NULL, 1);
	}
	if((dval=ft_headgetr(fun->header, "CRPIX", i, 0.0, &card)) && card){
	  FunParamPutd(funs[r], "TCRPX", i, dval, 7, NULL, 1);
	}
      }
      /* select columns */
      if( doindiv ){
	FunColumnSelect(funs[r], sizeof(RowRec), NULL,
			"X",       "J",  "w",  FUN_OFFSET(Row, x),
			"Y",       "J",  "w",  FUN_OFFSET(Row, y),
			NULL);
      }
      else{
	FunColumnSelect(funs[r], sizeof(RowRec), NULL,
			"X",       "J",  "w",  FUN_OFFSET(Row, x),
			"Y",       "J",  "w",  FUN_OFFSET(Row, y),
			"VALUE",   "D",  "rw", FUN_OFFSET(Row, value),
			NULL);
      }
    }
    else{
      /* set dim2 to 1 for 1D image */
      dim2 = 1;
      /* select columns */
      if( doindiv ){
	FunColumnSelect(funs[r], sizeof(RowRec), NULL,
			"X",       "J",  "w",  FUN_OFFSET(Row, x),
			NULL);
      }
      else{
	FunColumnSelect(funs[r], sizeof(RowRec), NULL,
			"X",       "J",  "w",  FUN_OFFSET(Row, x),
			"VALUE",   "D",  "rw", FUN_OFFSET(Row, value),
			NULL);
      }
    }
    /* we will make event row(s) for each x,y pixel */
    rowbuf = xcalloc(dim1, sizeof(RowRec));
    /* process each image row */
    for(j=1; j<=dim2; j++){
      /* extract image data and make event rows */
      if( !(dbuf = FunImageRowGet(fun, dbuf, j, j, "bitpix=-64")) )
	gerror(stderr, "can't FunImageRowGet: %s\n", iname);
      if( doindiv ){
	/* generate an event for this pixel */
	for(i=0; i<dim1; i++){
	  /* replicate individual row according to the value of the pixel.
	     don't replicate pixels values less than zero; round fp values */
	  if( dbuf[i] >0 ){
	    rowbuf[i].x = i+1;
	    rowbuf[i].y = j;
	    for(k=0; k<(int)(dbuf[i]+0.5); k++){
	      /* write replicated row */
	      if( FunTableRowPut(funs[r], &rowbuf[i], 1, 0, NULL) != 1 )
		gerror(stderr, "can't FunTableRowPut: %s\n", oname);
	    }
	  }
	}
      }
      else{
	/* generate one event per pixel, with an accompanying value column */
	for(i=0; i<dim1; i++){
	  /* don't write zero rows unless asked */
	  if( dozero || (dbuf[i] > 0) ){
	    rowbuf[i].x = i+1;
	    rowbuf[i].y = j;
	    rowbuf[i].value = dbuf[i];
	    /* write row */
	    if( FunTableRowPut(funs[r], &rowbuf[i], 1, 0, NULL) != 1 )
	      gerror(stderr, "can't FunTableRowPut: %s\n", oname);
	  }
	}
      }
    }
    if( rowbuf ) xfree(rowbuf);
    if( dbuf ) xfree(dbuf);
    break;
  default:
    gerror(stderr, "unknown Funtools data type: %d\n", type);
    exit(1);
  }

  /* for multiple outputs, flush the input extension to all files at once */
  if( domulti ){
    FunFlush(fun, "copy=ref");
  }

  /* if we close output before input, all flushing is done automatically  */
  /* free up space from multiple fun handles */
  for(i=0; i<nfile; i++){
    if( funs[i] ){
      FunClose(funs[i]);
    }
  }
  xfree(funs);
  if( oname ) xfree(oname);
  if( fits ) xfree(fits);
  if( extn ) xfree(extn);
  FunClose(fun);
  return(0);
}
