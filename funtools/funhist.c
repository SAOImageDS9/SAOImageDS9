/*
 *	Copyright (c) 1999-2003 Smithsonian Astrophysical Observatory
 */

#include <math.h>
#include <funtoolsP.h>
#include <filter.h>
#include <word.h>

static char *dash="----------------------------------------";

extern char *optarg;
extern int optind;

#define MAXROW 8192
static int maxrow=MAXROW;
int cold=' ';

#ifdef ANSI_FUNC
void
GetArgs (int argc, char **argv, int arg,
	 double *tlmin, double *tlmax, double *dval, int *got1, int *got2)
#else
void GetArgs(argc, argv, arg, tlmin, tlmax, dval, got1, got2)
     int argc;
     char **argv;
     int arg;
     double *tlmin;
     double *tlmax;
     double *dval;
     int *got1;
     int *got2;
#endif
{
  int ip=0;
  int n;
  char tbufs[3][SZ_LINE];

  /* process the appropriate argument */
  if( argc > arg ){
    /* collect arguments: bins, or lo:hi, or lo:hi:bins */
    newdtable(",:)");
    for(n=0; (n<3) && word(argv[arg], tbufs[n], &ip); n++)
      ;
    freedtable();
    /* process arguments */
    switch(n){
    case 0:
      break;
    case 1:
      *dval = atof(tbufs[0]);
      break;
    case 2:
      *tlmin = atof(tbufs[0]);
      *tlmax = atof(tbufs[1]);
      *got1 = 1;
      *got2 = 1;
      break;
    case 3:
      *tlmin = atof(tbufs[0]);
      *tlmax = atof(tbufs[1]);
      *got1 = 1;
      *got2 = 1;
      *dval = atof(tbufs[2]);
      break;
    }
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
    "usage: %s [-n|-w|-T] iname [column|x|y|xy] [[lo_edge:hi_edge:]bins]\n",
    fname);
  fprintf(stderr, "optional switches:\n");
  fprintf(stderr, "  -n  # normalize bin value by the width of each bin\n");
  fprintf(stderr, "  -w  # specify bin width instead of number of bins in arg3\n");
  fprintf(stderr, "  -T  # output in rdb/starbase format (tab separators)\n");
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
  int i, j;
  int in, ix, iy;
  int arg, args;
  int idx;
  int got;
  int nrow;
  int rsize;
  int bitpix;
  int x0, y0;
  int x1, y1;
  int block;
  int dim1, dim2;
  int dtype;
  int type;
  int lasty=0;
  int obins=0;
  int got1=0, got2=0;
  int gotimage=0;
  int doproj = 0;
  int donorm = 0;
  int dowidth = 0;
  int nmask=0;
  int nreg=0;
  char *s;
  char *iname;
  char *col;
  char *filtstr=NULL;
  char *bincols=NULL;
  char tbuf[SZ_LINE];
  double tlmin=0, tlmax=0;
  double tlwidth, tlinc;
  double lo, hi;
  double dval=0.0;
  double *buf=NULL, *rbuf=NULL, *rptr=NULL;
  Filter filter;
  FilterMask masks=NULL;
  FITSHead header=NULL;
  Fun fun=NULL;

  /* exit on gio errors */
  if( !getenv("GERROR")  )
    setgerror(2);

  /* we want the args in the same order in which they arrived, and
     gnu getopt sometimes changes things without this */
  putenv("POSIXLY_CORRECT=true");

  /* process switch arguments */
  while ((c = getopt(argc, argv, "nwT")) != -1){
    switch(c){
    case 'n':
      donorm = 1;
      break;
    case 'w':
      dowidth = 1;
      break;
    case 'T':
      cold = '\t';
      break;
    }
  }
  
  /* get maxrow,if user-specified */
  if( (s=getenv("FUN_MAXROW")) != NULL )
    maxrow = atoi(s);

  /* process arguments */
  /* check for required arguments */
  args = argc - optind;
  if( args < 1 ) usage(argv[0]);
  iname = argv[optind+0];
  /* open the input FITS file */
  if( !(fun = FunOpen(iname, "r", NULL)) )
    gerror(stderr, "can't FunOpen input file (or find extension): %s\n",
	   iname);
  /* make sure we have the right type of input file */
  FunInfoGet(fun, FUN_TYPE, &type, 0);

  /* process the different types */
  switch(type){
  case FUN_TABLE:
  case FUN_EVENTS:
    if( args < 2 ) usage(argv[0]);
    /* get column */
    col = argv[optind+1];
    /* make sure we can find the specified column */
    if( !(idx = FunColumnLookup(fun, col, 0, NULL, 
				&dtype, NULL, NULL, NULL, NULL)) )
      gerror(stderr, "can't find specified column: %s\n", col);
    /* get tlmin/tlmax, etc. */
    GetArgs(argc, argv, optind+2, &tlmin, &tlmax, &dval, &got1, &got2);
    if( dowidth && (dval<=0) )
	gerror(stderr, "-w requires a positive bin width value\n");
    else
      obins = (int)dval;
    /* select column to read */
    FunColumnSelect(fun, sizeof(double), NULL, col, "D", "r", 0, NULL);
    /* for fp data, we cannot determine obins, so choose an arbitrary value */
    if( !dowidth && ((dtype == 'D') || (dtype == 'E')) && (obins <= 0) )
      obins = 128;
    /* read specified column for all rows into a double array */
    rsize = maxrow;
    rbuf = xmalloc(rsize*sizeof(double));
    rptr = rbuf;
    nrow = 0;
    while( 1 ){
      FunTableRowGet(fun, rptr, maxrow, NULL, &got);
      if( !got ) break;
      rsize += maxrow;
      rbuf = xrealloc(rbuf, rsize*sizeof(double));
      nrow += got;
      rptr = rbuf + nrow;
    }
    /* get tlmin value */
    if( !got1 ){
      snprintf(tbuf, SZ_LINE, "TLMIN%d", idx);
      tlmin = FunParamGetd(fun, tbuf, 0, 0.0, &got1);
    }
    /* get tlmax value */
    if( !got2 ){
      snprintf(tbuf, SZ_LINE, "TLMAX%d", idx);
      tlmax = FunParamGetd(fun, tbuf, 0, 0.0, &got2);
    }
    /* if we do not have tlmin or tlmax, we need to calculate them now */
    if( !got1 || !got2 ){
      if( !got1 ) tlmin = rbuf[0];
      if( !got2 ) tlmax = rbuf[0];
      for(i=0; i<nrow; i++){
	if( !got1 && (rbuf[i] < tlmin) ) tlmin = rbuf[i];
	if( !got2 && (rbuf[i] > tlmax) ) tlmax = rbuf[i];
      }
      /* add 1/2 bin to ends of float tlmin and tlmax */
      if( !got1 && ((dtype == 'D') || (dtype == 'E')) ) tlmin -= 0.5;
      if( !got2 && ((dtype == 'D') || (dtype == 'E')) ) tlmax += 0.5;
    }
    /* tlmin/tlmax are displayed as edges, even with int data */
    if( (dtype != 'D') && (dtype != 'E') ){
      tlmin -= 0.5;
      tlmax += 0.5;
    }
    /* width was specified instead of number of bins */
    if( dowidth ){
      tlinc = dval;
      obins = (int)((tlmax - tlmin)/tlinc);
      if( obins <= 0 )
	gerror(stderr, "calculated number of bins (%d) must be positive\n",
	       obins);
      tlwidth = (double)obins*tlinc;
      if( tlwidth <= 0 )
	gerror(stderr, "calculated bin width (%.8f) must be positive\n",
	       tlwidth);
      tlmax = tlmin+tlwidth;
    }
    else{
      /* get total number of input bins */
      tlwidth = tlmax - tlmin;
      /* calculate the number of output bins */
      if( obins <= 0 )
	obins = (int)tlwidth;
      /* this is the increment between each bin */
      tlinc = tlwidth/obins;
      if( tlwidth <= 0 )
	gerror(stderr, "bin width (%.8f) must be positive\n", tlwidth);
    }

    /* allocate bin buffer */
    if( !(buf=xcalloc(sizeof(double), obins)) )
      gerror(stderr, "can't allocate image buffer\n");
    /* bin up all rows */
    for(i=0; i<nrow; i++){
      if( (rbuf[i]<tlmin) || (rbuf[i]>tlmax) )
	continue;
      idx = (int)(((rbuf[i] - tlmin)/tlwidth)*obins);
      if( (idx<0) || (idx>=obins) )
	continue;
      buf[idx] += 1;
    }
    /* output header */
    fprintf(stdout, "# data file:\t\t%s\n", iname);
    fprintf(stdout, "# column:\t\t%s\n", col);
    fprintf(stdout, "# min,max,bins:\t\t%g %g %d\n", tlmin, tlmax, obins);
    if( dowidth )
      fprintf(stdout, "# user-specified width: %.8f\n", tlinc);
    if( donorm )
      fprintf(stdout, "# width normalization applied: %.8f\n", tlinc);
    fprintf(stdout, "\n");
    /* output data */
    if( donorm ){
      fprintf(stdout,
	      "%6s%c%21s%c%21s%c%21s\n", 
	      "bin", cold, "value", cold, "lo_edge", cold, "hi_edge");
      fprintf(stdout,
	      "%6.6s%c%21.21s%c%21.21s%c%21.21s\n",
	      dash, cold, dash, cold, dash, cold, dash);
    }
    else{
      fprintf(stdout,
	      "%6s%c%9s%c%21s%c%21s\n", 
	      "bin", cold, "value", cold, "lo_edge", cold, "hi_edge");
      fprintf(stdout,
	      "%6.6s%c%9.9s%c%21.21s%c%21.21s\n",
	      dash, cold, dash, cold, dash, cold, dash);
    }
    for(i=0; i<obins; i++){
      lo = tlmin+(i*tlinc);
      hi = tlmin+((i+1)*tlinc);
      if( donorm ){
	fprintf(stdout, "%6d%c%21.8f%c%21.8f%c%21.8f\n", 
		i+1, cold, buf[i]/tlinc, cold, lo, cold, hi);
      }
      else{
	fprintf(stdout, "%6d%c%9d%c%21.8f%c%21.8f\n", 
		i+1, cold, (int)buf[i], cold, lo, cold, hi);
      }
    }
    /* free up buffers */
    if( buf )  xfree(buf);
    if( rbuf ) xfree(rbuf);
    break;

  case FUN_IMAGE:
  case FUN_ARRAY:
    /* -w only useful for tabular data */
    if( dowidth )
      gerror(stderr, "specifying bin width (-w) not supported with images\n");
    /* determine if we are doing a proj on a single column or a histogram
       on the array values */
    arg = optind+1;
    if( args >=2 ){
      col = argv[optind+1];
      cluc(col);
      if( !strcasecmp(col, "X") || !strcasecmp(col, "Y") ){
	doproj = 1;
	arg = optind+2;
      }
      else if( !strcasecmp(col, "XY") || !strcasecmp(col, "YX") ){
	arg = optind+2;
      }
      else
	gerror(stderr, "can't find specified column: %s\n", col);
    }
    /* projection of a single axis */
    if( doproj ){
      /* get tlmin/tlmax, etc. */
      GetArgs(argc, argv, arg, &tlmin, &tlmax, &dval, &got1, &got2);
      obins = (int)dval;
      FunInfoGet(fun,
		 FUN_SECT_BLOCK, &block,
		 FUN_SECT_X0, &x0, FUN_SECT_Y0, &y0,
		 FUN_SECT_DIM1, &dim1, FUN_SECT_DIM2, &dim2,
		 0);
      /* set dim2 to 1 for a 1D image */
      if( dim2 == 0 ) dim2 = 1;
      /* get tlmin/tlmax values, etc. */
      if( tlmin <=0 )
	tlmin = 1;
      if( tlmax <=0 ){
	if( *col == 'X' )
	  tlmax = dim1;
	else
	  tlmax = dim2;
      }
      /* get total number of input bins */
      tlwidth = tlmax - tlmin + 1;
      /* calculate the number of output bins */
      if( obins <= 0 ){
	/* use input bin number as default */
	obins = (int)tlwidth;
      }
      tlinc = tlwidth/obins;
      /* allocate bin buffer */
      if( !(buf=xcalloc(sizeof(double), obins)) )
	gerror(stderr, "can't allocate image buffer\n");
      if( *col == 'X' ){
	for(i=1; i<=dim2; i++){
	  if( !(rbuf = FunImageRowGet(fun, rbuf, i, i, "bitpix=-64")) )
	    gerror(stderr, "can't FunImageRowGet: %s\n", iname);
	  for(j=(int)tlmin; j<=(int)tlmax; j++){
	    idx = (int)(((j-tlmin)/tlwidth)*obins);
	    if( (idx<0) || (idx>=obins) )
	      continue;
	    buf[idx] += rbuf[j-1];
	  }
	}
      }
      else{
	for(i=(int)tlmin; i<=(int)tlmax; i++){
	  if( !(rbuf = FunImageRowGet(fun, rbuf, i, i, "bitpix=-64")) )
	    gerror(stderr, "can't FunImageRowGet: %s\n", iname);
	  idx = (int)(((i-tlmin)/tlwidth)*obins);
	  if( (idx<0) || (idx>=obins) )
	    continue;
	  for(j=0; j<dim1; j++)
	    buf[idx] += rbuf[j];
	}
      }
      /* output header */
      fprintf(stdout, "# data file:\t\t%s\n", iname);
      fprintf(stdout, "# column:\t\t%s\n", col);
      fprintf(stdout, "# min,max,bins:\t\t%g %g %d\n", tlmin, tlmax, obins);
      fprintf(stdout, "\n");
      /* output data */
      fprintf(stdout,
	      "%6s%c%21s%c%21s%c%21s\n",
	      "bin", cold, "value", cold, "lo_bin", cold, "hi_bin");
      fprintf(stdout,
	      "%6.6s%c%21.21s%c%21.21s%c%21.21s\n",
	      dash, cold, dash, cold, dash, cold, dash);
      for(i=0; i<obins; i++){
	  fprintf(stdout, "%6d%c%21.8f%c%21.8f%c%21.8f\n", 
		  i+1, cold, buf[i], cold,
		  ceil(tlmin+(i*tlinc)), cold, ceil(tlmin+((i+1)*tlinc))-1);
      }
      /* free up buffers */
      if( buf )  xfree(buf);
      if( rbuf ) xfree(rbuf);
    }
    /* histogram of the values in the image */
    else{
      /* get tlmin/tlmax, etc. */
      GetArgs(argc, argv, arg, &tlmin, &tlmax, &dval, &got1, &got2);
      obins = (int)dval;
      FunInfoGet(fun,
		 FUN_FILTER, &filtstr, FUN_HEADER, &header,
		 FUN_SECT_X0, &x0, FUN_SECT_Y0, &y0,
		 FUN_SECT_X1, &x1, FUN_SECT_Y1, &y1,
		 FUN_SECT_BLOCK, &block, FUN_BITPIX, &bitpix,
		 FUN_BINCOLS, &bincols,
		 FUN_SECT_DIM1, &dim1, FUN_SECT_DIM2, &dim2,
		 0);
      /* set dim2 to 1 for a 1D image */
      if( dim2 == 0 ) dim2 = 1;
      /* get filter masks, if necessary */
      if( filtstr && *filtstr ){
	/* make up filter plist string */
	strcpy(tbuf, "type=image");
	/* add the binning key */
	if( bincols ){
	  strcat(tbuf, ",");
	  strcat(tbuf, bincols);
	}
	filter = FilterOpen(header, filtstr, tbuf);
	if( filter && (filter != NOFILTER) ){
	  /* retrieve region mask segments */
	  nmask = FilterImage(filter, x0, x1, y0, y1, block, &masks, &nreg);
	}
	FilterClose(filter);
      }
      /* if min/max not given on command line, look in data file */
      if( !got1 )
	tlmin=FunParamGetd(fun, "DATAMIN", 0, 0.0, &got1);
      if( !got2 )
	tlmax=FunParamGetd(fun, "DATAMAX", 0, 0.0, &got2);
      /* for image, we must have min/max values */
      if( !got1 || !got2 ){
	if( (rbuf = FunImageGet(fun, rbuf, "bitpix=-64")) ){
	  if( nmask ){
	    tlmin = MAXDBL;
	    tlmax = MINDBL;
	    /* loop through mask segments */
	    for(in=0; in<nmask; in++){
	      iy=masks[in].y;
	      /* process each mask segment having the same y value */
	      while(1){
		/* process columns in the mask */
		for(ix=masks[in].xstart; ix<=masks[in].xstop; ix++){
		  i = ((iy-1)*dim1)+(ix-1);
		  if( rbuf[i] < tlmin )
		    tlmin = rbuf[i];
		  if( rbuf[i] > tlmax )
		    tlmax = rbuf[i];
		}
		/* if another mask segment has the same y, keep going */
		if( ((in+1)<nmask) && (masks[in+1].y==iy) )
		  in++;
		else
		  break;
	      }
	    }
	  }
	  else{
	    tlmin = rbuf[0];
	    tlmax = rbuf[0];
	    for(i=0; i<dim1*dim2; i++){
	      if( rbuf[i] < tlmin )
		tlmin = rbuf[i];
	      if( rbuf[i] > tlmax )
		tlmax = rbuf[i];
	    }
	  }
	  gotimage = 1;
	}
	else{
	  gerror(stderr, 
	 "please supply min:max:bins (file is lacking DATAMIN/DATAMAX)\n");
	}
      }
      /* get total number of input bins */
      if( bitpix >= 0 )
	tlwidth = tlmax - tlmin + 1;
      else
	tlwidth = tlmax - tlmin;
      /* calculate the number of output bins */
      if( obins <= 0 ){
	/* use input bin number as default */
	if( bitpix >= 0 )
	  obins = (int)tlwidth;
	/* but for floating point data, obins must a valid int */
	else
	  obins = 128;
      }
      /* this is the increment between each bin */
      tlinc = tlwidth/obins;
      /* allocate bin buffer */
      if( !(buf=xcalloc(sizeof(double), obins)) )
	gerror(stderr, "can't allocate image buffer\n");
      /* bin up all rows */
      if( gotimage ){
	if( nmask ){
	  /* loop through mask segments */
	  for(in=0; in<nmask; in++){
	    iy=masks[in].y;
	    /* process each mask segment having the same y value */
	    while(1){
	      /* process columns in the mask */
	      for(ix=masks[in].xstart; ix<=masks[in].xstop; ix++){
		j = ((iy-1)*dim1)+(ix-1);
		if( (rbuf[j]<tlmin) || (rbuf[j]>tlmax) )
		  continue;
		idx = (int)(((rbuf[j] - tlmin)/tlwidth)*obins);
		if( (idx<0) || (idx>=obins) )
		  continue;
		buf[idx] += 1;
	      }
	      /* if another mask segment has the same y, keep going */
	      if( ((in+1)<nmask) && (masks[in+1].y==iy) )
		in++;
	      else
		break;
	    }
	  }
	}
	else{
	  for(j=0; j<dim1*dim2; j++){
	    if( (rbuf[j]<tlmin) || (rbuf[j]>tlmax) )
	      continue;
	    idx = (int)(((rbuf[j] - tlmin)/tlwidth)*obins);
	    if( (idx<0) || (idx>=obins) )
	      continue;
	    buf[idx] += 1;
	  }
	}
      }
      else{
	if( nmask ){
	  /* loop through mask segments */
	  for(in=0; in<nmask; in++){
	    iy=masks[in].y;
	    if( iy != lasty ){
	      if( !(rbuf = FunImageRowGet(fun, rbuf, iy, iy, "bitpix=-64")) )
		gerror(stderr, "can't FunImageRowGet: %d %s\n", iy, iname);
	      lasty = iy;
	    }
	    /* process each mask segment having the same y value */
	    while(1){
	      /* process columns in the mask */
	      for(ix=masks[in].xstart; ix<=masks[in].xstop; ix++){
		j = ((iy-1)*dim1)+ix-1;
		if( (rbuf[j]<tlmin) || (rbuf[j]>tlmax) )
		  continue;
		idx = (int)(((rbuf[j] - tlmin)/tlwidth)*obins);
		if( (idx<0) || (idx>=obins) )
		  continue;
		buf[idx] += 1;
	      }
	      /* if another mask segment has the same y, keep going */
	      if( ((in+1)<nmask) && (masks[in+1].y==iy) )
		in++;
	      else
		break;
	    }
	  }
	}
	else{
	  for(i=0; i<dim2; i++){
	    if( !(rbuf = FunImageRowGet(fun, rbuf, i+1, i+1, "bitpix=-64")) )
	      gerror(stderr, "can't FunImageRowGet: %d %s\n", i+1, iname);
	    /* bin up all rows */
	    for(j=0; j<dim1; j++){
	      if( (rbuf[j]<tlmin) || (rbuf[j]>tlmax) )
		continue;
	      idx = (int)(((rbuf[j] - tlmin)/tlwidth)*obins);
	      if( (idx<0) || (idx>=obins) )
		continue;
	      buf[idx] += 1;
	    }
	  }
	}
      }
      /* output header */
      fprintf(stdout, "# data file:\t\t%s\n", iname);
      fprintf(stdout, "# min,max,bins:\t\t%g %g %d\n", tlmin, tlmax, obins);
      fprintf(stdout, "\n");
      /* output data */
      fprintf(stdout,
	      "%6s%c%21s%c%21s%c%21s\n",
	      "bin", cold, "value", cold, "lo_val", cold, "hi_val");
      fprintf(stdout,
	      "%6.6s%c%21.21s%c%21.21s%c%21.21s\n",
	      dash, cold, dash, cold, dash, cold, dash);
      for(i=0; i<obins; i++){
	if( bitpix >= 0 )
	  fprintf(stdout, "%6d%c%21.8f%c%21.8f%c%21.8f\n", 
		  i+1, cold, buf[i], cold,
		  ceil(tlmin+(i*tlinc)), cold, ceil(tlmin+((i+1)*tlinc))-1);
	else
	  fprintf(stdout, "%6d%c%21.8f%c%21.8f%c%21.8f\n", 
		  i+1, cold, buf[i], cold,
		  tlmin+(i*tlinc), cold, tlmin+((i+1)*tlinc));
      }
      /* free up buffers */
      if( buf )   xfree(buf);
      if( rbuf )  xfree(rbuf);
      if( masks ) xfree(masks);
    }
    break;
  }


  /* close files */
  FunClose(fun);

  return(0);
}
