/*
 *	Copyright (c) 1999-2003 Smithsonian Astrophysical Observatory
 */

#include <math.h>
#include <funtools.h>
#include <NaN.h>
#include <filter.h>
#include <swap.h>
#include <word.h>
#include <xalloc.h>

#define MAXROW 8192
static int maxrow=MAXROW;

/* max number of intervals we will process in one pass through table data */
#define MAXINTV 1024

/* type of data we process */
#define SRC  0
#define BKG  1
/* this must match number of types above */
#define NTYPE 2

/* how corrections (time and exposure) are applied to source/bkgd  */
#define NONE  0
#define SCORR  1
#define BCORR  2
#define BOTH   3

/* types of background */
#define BKG_VAL	 1
#define BKG_ALL	 2
#define BKG_EACH 3

/* types of image -> exposure pixel conversion algorithms */
#define EXP_RATIO 1
#define EXP_WCS   2

#define ARCSEC_PER_DEG   3600.0
#define ARCSEC_PER_DEGSQ (ARCSEC_PER_DEG*ARCSEC_PER_DEG)

extern char *optarg;
extern int optind;

#ifdef ANSI_FUNC
static void
usage (char *fname)
#else
static void usage(fname)
     char *fname;
#endif
{
  fprintf(stderr,
         "usage: %s <switches> sname [sreg] [bname breg|breg|cnts]\n",
	 fname);
  fprintf(stderr, "optional switches:\n");
  fprintf(stderr, "  -e \"source_exposure[;bkgd_exposure]\" # exp matches data\n");
  fprintf(stderr, "  -w \"source_exposure[;bkgd_exposure]\" # WCS method\n");
  fprintf(stderr, "\t\t# source (bkgd) FITS exposure image\n");
  fprintf(stderr, "  -t \"source_timecorr[;bkgd_timecorr]\"\n");
  fprintf(stderr, "\t\t# source (bkgd) time correction value or header parameter name\n");
  fprintf(stderr, "  -g\t\t# output using nice g format\n");
  fprintf(stderr, "  -G\t\t# output using %%.14g format (maximum precision)\n");
  fprintf(stderr, "  -i \"[column;]int1;int2...\" # column-based intervals\n");
  fprintf(stderr, "  -m\t\t# match individual source and bkgd regions\n");
  fprintf(stderr, "  -p\t\t# output in pixels, even if wcs is present\n");
  fprintf(stderr, "  -r\t\t# output inner/outer radii (and angles) for annuli (and pandas)\n");
  fprintf(stderr, "  -s\t\t# output summed values\n");
  fprintf(stderr, "  -v \"scol[;bcol]\" # src and bkgd value columns for tables\n");
  fprintf(stderr, "  -T\t\t# output in starbase/rdb table format\n");
  fprintf(stderr, "  -z\t\t# include regions with zero area in output\n");
  fprintf(stderr, "\n(version: %s)\n", FUN_VERSION);
  exit(1);
}

#ifdef ANSI_FUNC
static double
DConvert (char *buf, int type, int n)
#else
static double
DConvert(buf, type, n)
     char *buf;
     int type;
     int n;
#endif
{
  int ival;
  double dval=0.0;

  switch(type){
  case 'X':
    if( n == 16 )
      dval = (double)*(unsigned short *)buf;
    else if( n == 32 )
      dval = (double)*(unsigned int *)buf;
    else
      dval = (double)*(unsigned char *)buf;
    break;
  case 'B':
    dval = (double)*(unsigned char *)buf;
    break;
  case 'I':
   dval = (double)*(short *)buf;
   break;
  case 'U':
    dval = (double)*(unsigned short *)buf;
    break;
  case 'J':
    dval = (double)*(int *)buf;
    break;
  case 'K':
#if HAVE_LONG_LONG == 0
    gerror(stderr, 
	   "64-bit data support not built (long long not available)\n");
#endif
    break;
  case 'V':
    dval = (double)*(unsigned int *)buf;
    break;
  case 'E':
    dval = (double)*(float *)buf;
    break;
  case 'D':
    dval = *(double *)buf;
    break;
  case 'L':
    ival = (int)*(unsigned char *)buf;
    if( !ival || (ival == 'F') || (ival == 'f') )
      dval = 0.0;
    else
      dval = 1.0;
    break;
  default:
    dval = 0.0;
    break;
  }
  return(dval);
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
  int i, j, k, v;
  int args;
  int bkarea=0;
  int bktype=BKG_VAL;
  int dosum=0;
  int dog=0;
  int domatch=0;
  int doradang=0;
  int dobkgderr=1;
  int doexp=0;
  int dotim=0;
  int dopixels=0;
  int dozero=0;
  int evimage=0;
  int cold=' ';
  int nintv=1;
  int endian[NTYPE], type[NTYPE], rawsize[NTYPE], rowsize[NTYPE];
  int x0[NTYPE], x1[NTYPE], y0[NTYPE], y1[NTYPE];
  int dim1[4], dim2[4], block[4];
  int *area[NTYPE];
  int *savearea[NTYPE];
  int nmask[NTYPE]={0,0};
  int nreg[NTYPE]={0,0};
  int valtypes[NTYPE]={0,0};
  int valoffsets[NTYPE]={0,0};
  int valns[NTYPE]={0,0};
  int exptrans[NTYPE]={EXP_RATIO,EXP_RATIO};
  double bkexp=0.0;
  double dpp[NTYPE]={-1.0,-1.0};
  double timecorr[NTYPE]={1.0,1.0};
  double *cnts[MAXINTV][NTYPE];
  double *savecnts[MAXINTV][NTYPE];
  double *bncnts[MAXINTV];
  double *bnerr[MAXINTV]; 
  double *bscnts[MAXINTV];
  double *bserr[MAXINTV];
  double *exp[NTYPE];
  double *saveexp[NTYPE];
  double dppnorm=1.0;
  double bkval=0.0;
  char mode[SZ_LINE];
  char tbuf[SZ_LINE];
  char tbuf2[SZ_LINE];
  char *intvs[MAXINTV];
  char *s, *t, *u;
  char *ebuf;
  char *eptr;
  char *fmt=NULL;
  char *expstr=NULL;
  char *intvstr=NULL;
  char *valstr=NULL;
  char *timestr=NULL;
  char *radang=NULL;
  char *cradang=NULL;
  char *tradang=NULL;
  char *region[NTYPE]={NULL,NULL};
  char *filtstr[NTYPE]={NULL,NULL};
  char *bincols[NTYPE]={NULL,NULL};
  char *valname[2]={NULL,NULL};
  char *name[4]={NULL,NULL,NULL, NULL};
  Fun fun[4]={NULL,NULL,NULL,NULL};
  FITSHead header[NTYPE]={NULL,NULL};
  FilterMask masks[NTYPE]={NULL,NULL};
  Filter filter[NTYPE]={NULL,NULL};
  struct WorldCoor *wcs[4]={NULL,NULL,NULL,NULL};

  /* clear array elelemts to mark them as unallocated */
  memset(cnts, 0, MAXINTV*NTYPE*sizeof(double *));
  memset(savecnts, 0, MAXINTV*NTYPE*sizeof(double *));
  memset(bncnts, 0, NTYPE*sizeof(double *));
  memset(bnerr, 0, NTYPE*sizeof(double *));
  memset(bscnts, 0, NTYPE*sizeof(double *));
  memset(bserr, 0, NTYPE*sizeof(double *));
  memset(exp, 0, NTYPE*sizeof(double *));
  memset(saveexp, 0, NTYPE*sizeof(double *));
  memset(area, 0, NTYPE*sizeof(int *));
  memset(savearea, 0, NTYPE*sizeof(int *));
  memset(intvs, 0, MAXINTV*sizeof(char *));

  /* exit on gio errors */
  if( !getenv("GERROR")  )
    setgerror(2);

  /* we want the args in the same order in which they arrived, and
     gnu getopt sometimes changes things without this */
  putenv("POSIXLY_CORRECT=true");

  /* process switch arguments */
  while ((c = getopt(argc, argv, "e:gGhi:mprst:v:w:zEIT")) != -1){
    switch(c){
    case 'e':
      expstr = optarg;
      break;
    case 'g':
      dog = 1;
      break;
    case 'G':
      dog = 2;
      break;
    case 'h':
      usage(argv[0]);
      break;
    case 'i':
      intvstr = optarg;
      break;
    case 'm':
      domatch = 1;
      break;
    case 'p':
      dopixels = 1;
      break;
    case 'r':
      doradang = 1;
      break;
    case 's':
      dosum = 1;
      break;
    case 't':
      timestr = optarg;
      break;
    case 'v':
      valstr = optarg;
      break;
    case 'w':
      putenv("FUNCNTS_EXPTRANS=wcs");
      expstr = optarg;
      break;
    case 'z':
      dozero = 1;
      break;
    case 'E':
      evimage = 0;
      break;
    case 'I':
      evimage = 1;
      break;
    case 'T':
      cold = '\t';
      break;
    }
  }

  /* get maxrow,if user-specified */
  if( (s=getenv("FUN_MAXROW")) != NULL )
    maxrow = atoi(s);

  /* check for required arguments */
  args = argc - optind;
  if( args < 1 ) usage(argv[0]);

  /* arg 1: source file name */
  name[SRC] = xstrdup(argv[optind+0]);

  /* arg 2: source region */
  if( (args == 1) || !*(region[SRC] = argv[optind+1]) )
    region[SRC] = "field()";

  /* arg 3: background region */
  if( args >= 3 ){
    if( args == 3 ){
      name[BKG] = NULL;
      region[BKG] = argv[optind+2];
    }
    else{
      name[BKG] = xstrdup(argv[optind+2]);
      region[BKG] = argv[optind+3];
    }
    /* check for constant numeric value -- background counts */
    bkval = strtod(region[BKG], &s);
    /* if we did not get a valid numeric constant, its a region */
    if( region[BKG] && *region[BKG] && (s == region[BKG]) ){
      bktype = BKG_ALL;
      bkval = 0.0;
    }
    else{
      /* can't have background file and background value */
      if( args == 4 ) usage(argv[0]);
      bktype = BKG_VAL;
      region[BKG] = NULL;
    }
  }

  /* get value column names, if necessary */
  if( valstr ){
    int ip=0;
    int i=0;
    newdtable(";");
    for(i=0; i<NTYPE; i++){
      if( word(valstr, tbuf, &ip) && *tbuf ){
	if( strcasecmp(tbuf, "$none") )
	  valname[i] = xstrdup(tbuf);
	else
	  valname[i] = xstrdup("-");
      }
    }
    freedtable();
  }

  /* open the source FITS file */
  if( !(fun[SRC] = FunOpen(name[SRC], "r", NULL)) )
    gerror(stderr, "can't FunOpen source file (or find extension): %s\n",
	   name[SRC]);
  /* get required information from funtools structure */
  FunInfoGet(fun[SRC], FUN_ENDIAN, &endian[SRC],
	     FUN_TYPE, &type[SRC], FUN_HEADER, &header[SRC],
	     FUN_SECT_X0, &x0[SRC], FUN_SECT_X1, &x1[SRC],
	     FUN_SECT_Y0, &y0[SRC], FUN_SECT_Y1, &y1[SRC],
	     FUN_SECT_DIM1, &dim1[SRC], FUN_SECT_DIM2, &dim2[SRC],
	     FUN_SECT_BLOCK, &block[SRC], FUN_WCS, &wcs[SRC],
	     FUN_RAWSIZE, &rawsize[SRC], FUN_BINCOLS, &bincols[SRC],
	     FUN_ROWSIZE, &rowsize[SRC],
	     0);
  /* set dim2 to 1 for a 1D image */
  if( dim2[SRC] == 0 ) dim2[SRC] = 1;
  /* make up filter mode string using source bincols */
  strcpy(mode, "type=image");
  /* add the binning key */
  if( bincols[SRC] ){
    strcat(mode, ",");
    strcat(mode, bincols[SRC]);
  }

  /* open the source region */
  filter[SRC] = FilterOpen(header[SRC], region[SRC], mode);
  if( filter[SRC] && (filter[SRC] != NOFILTER) ){
    /* retrieve region mask segments */
    nmask[SRC] = FilterImage(filter[SRC],
			     x0[SRC], x1[SRC], y0[SRC], y1[SRC],
			     block[SRC], &masks[SRC], &nreg[SRC]);

    /* filtstr[SRC] = xstrdup(FilterString(filter[SRC])); */
    /* for display, we have to add # comment chars after each \n */
    t = FilterString(filter[SRC]);
    filtstr[SRC] = calloc(strlen(t)*3, sizeof(char));
    for(u=filtstr[SRC]; *t; t++){
      *u++ = *t;
      if( *t == '\n' ){
	*u++ = '#';
	*u++ = ' ';
      }
    }
    filtstr[SRC] = realloc(filtstr[SRC], strlen(filtstr[SRC])+1);
  }
  if( filter[SRC] ) FilterClose(filter[SRC]);

  /* make sure we have something to do */
  if( nreg[SRC] == 0 )
    gerror(stderr, "no valid regions included in '%s'\n", region[SRC]);

  /* gather up intervals, if necessary (must be done before memory alloc) */
  if( intvstr ){
    int ip=0;
    int ntok=0;
    newdtable(";");
    nintv = 0;
    *tbuf2 = '\0';
    while( word(intvstr, tbuf, &ip) && *tbuf ){
      /* check for default column as first token */
      if( !ntok && !strpbrk(tbuf, "=><&|") ){
	strcpy(tbuf2, tbuf);
	strcat(tbuf2, "=");
      }
      else{
	if( nintv >= MAXINTV ){
	  gwarning(stderr, "Too many intervals; ignoring: %s\n", tbuf);
	  continue;
	}
	intvs[nintv] = (char *)calloc(SZ_LINE, sizeof(char));
	if( *tbuf2 ) strcat(intvs[nintv], tbuf2);
	strcat(intvs[nintv], tbuf);
	nintv++;
      }
      ntok++;
    }
    freedtable();
  }

  /* if a value name was specified, make sure its a calid column */
  if( valname[SRC] && (*valname[SRC] != '-') ){
    if( !FunColumnLookup(fun[SRC], valname[SRC], 0, NULL,
			 &valtypes[SRC], NULL,
			 &valoffsets[SRC], NULL, NULL) ){
      gerror(stderr, "value column does not exist: %s\n", valname[SRC]);
    }
  }

  /* allocate space for results */
  for(i=0; i<nintv; i++){
    cnts[i][SRC] = (double *)xcalloc(nreg[SRC]+1, sizeof(double));
    savecnts[i][SRC] = (double *)xcalloc(nreg[SRC]+1, sizeof(double));
    bncnts[i] = (double *)xcalloc(nreg[SRC]+1, sizeof(double));
    bnerr[i] = (double *)xcalloc(nreg[SRC]+1, sizeof(double));
    bscnts[i] = (double *)xcalloc(nreg[SRC]+1, sizeof(double));
    bserr[i] = (double *)xcalloc(nreg[SRC]+1, sizeof(double));
  }
  area[SRC] = (int *)xcalloc(nreg[SRC]+1, sizeof(int));
  exp[SRC] =  (double *)xcalloc(nreg[SRC]+1, sizeof(double));
  savearea[SRC] = (int *)xcalloc(nreg[SRC]+1, sizeof(int));
  saveexp[SRC] =  (double *)xcalloc(nreg[SRC]+1, sizeof(double));
  /* get radii and angle string, if needed */
  if( doradang ){
    if( (radang = FilterRadAng()) )
      radang = xstrdup(radang);
  }

  /* process background region, if necessary */
  if( region[BKG] ){
    /* open the background FITS file */
    if( name[BKG] ){
      if( !(fun[BKG] = FunOpen(name[BKG], "r", NULL)) )
	gerror(stderr,
	       "can't FunOpen background file (or find extension): %s\n",
	       name[BKG]);
      /* get required information from funtools structure */
      FunInfoGet(fun[BKG], FUN_ENDIAN, &endian[BKG],
		 FUN_TYPE, &type[BKG], FUN_HEADER, &header[BKG],
		 FUN_SECT_X0, &x0[BKG], FUN_SECT_X1, &x1[BKG],
		 FUN_SECT_Y0, &y0[BKG], FUN_SECT_Y1, &y1[BKG],
		 FUN_SECT_DIM1, &dim1[BKG], FUN_SECT_DIM2, &dim2[BKG],
		 FUN_SECT_BLOCK, &block[BKG], FUN_WCS, &wcs[BKG],
		 FUN_RAWSIZE, &rawsize[BKG], FUN_BINCOLS, &bincols[BKG],
		 FUN_ROWSIZE, &rowsize[BKG],
		 0);
      /* set dim2 to 1 for a 1D image */
      if( dim2[BKG] == 0 ) dim2[BKG] = 1;
      /* make up filter mode string using back bincols */
      strcpy(mode, "type=image");
      /* add the binning key */
      if( bincols[BKG] ){
	strcat(mode, ",");
	strcat(mode, bincols[BKG]);
      }
    }
    /* use values from the source */
    else{
      fun[BKG] = fun[SRC];
      endian[BKG] = endian[SRC];
      type[BKG] = type[SRC]; header[BKG] = header[SRC];
      x0[BKG] = x0[SRC]; x1[BKG] = x1[SRC]; 
      y0[BKG] = y0[SRC]; y1[BKG] = y1[SRC]; 
      dim1[BKG] = dim1[SRC]; dim2[BKG] = dim2[SRC]; 
      block[BKG] = block[SRC];
      rawsize[BKG] = rawsize[SRC];
      rowsize[BKG] = rowsize[SRC];
      bincols[BKG] = bincols[SRC];
    }

    /* open the background region */
    filter[BKG] = FilterOpen(header[BKG], region[BKG], mode);
    if( filter[BKG] && (filter[BKG] != NOFILTER) ){
      /* retrieve region mask segments */
      nmask[BKG] = FilterImage(filter[BKG],
			       x0[BKG], x1[BKG], y0[BKG], y1[BKG],
			       block[BKG], &masks[BKG], &nreg[BKG]);
      /* see if we want to, and can, match source and bkgd regions */
      if( domatch && (nreg[SRC] == nreg[BKG]) )
	bktype = BKG_EACH;
      /* filtstr[BKG] = xstrdup(FilterString(filter[BKG])); */
      /* for display, we have to add # comment chars after each \n */
      t = FilterString(filter[BKG]);
      filtstr[BKG] = calloc(strlen(t)*3, sizeof(char));
      for(u=filtstr[BKG]; *t; t++){
	*u++ = *t;
	if( *t == '\n' ){
	  *u++ = '#';
	  *u++ = ' ';
	}
      }
      filtstr[BKG] = realloc(filtstr[BKG], strlen(filtstr[BKG])+1);
    }
    if( filter[BKG] ) FilterClose(filter[BKG]);

    /* if a value name was specified, make sure its a calid column */
    if( valname[BKG] ){
      if( *valname[BKG] != '-' ){
	if( !FunColumnLookup(fun[BKG], valname[BKG], 0, NULL,
			     &valtypes[BKG], NULL, 
			     &valoffsets[BKG], NULL, NULL) ){
	  gerror(stderr, "value column does not exist: %s\n", valname[BKG]);
	}
      }
    }
    else{
      if( valname[SRC] && (*valname[SRC] != '-') ){
	valname[BKG] = xstrdup(valname[SRC]);
	valtypes[BKG] = valtypes[SRC];
	valoffsets[BKG] = valoffsets[SRC];
      }
    }

    /* allocate space for results */
    for(i=0; i<nintv; i++){
      cnts[i][BKG] = (double *)xcalloc(nreg[BKG]+1, sizeof(double));
      savecnts[i][BKG] = (double *)xcalloc(nreg[BKG]+1, sizeof(double));
    }
    area[BKG] = (int *)xcalloc(nreg[BKG]+1, sizeof(int));
    exp[BKG] =  (double *)xcalloc(nreg[BKG]+1, sizeof(double));
    savearea[BKG] = (int *)xcalloc(nreg[BKG]+1, sizeof(int));
    saveexp[BKG] =  (double *)xcalloc(nreg[BKG]+1, sizeof(double));
  }

  /* look for degrees/pixel in source and background files -- we will
     use these to normalize background area, if both are present */
  if( name[BKG] ){ 
    for(i=0; i<2; i++){
      if( wcs[i] && iswcs(wcs[i]) ){
	if( !wcs[i]->coorflip )
	  dpp[i] = ABS(wcs[i]->cdelt[0]) * block[i];
	else
	  dpp[i] = ABS(wcs[i]->cdelt[1]) * block[i];
      }
    }
    /* note that BOTH must be present or we do not do this normalization */
    if( (dpp[SRC] > 0.0) && (dpp[BKG] > 0.0) )
      dppnorm = (dpp[SRC]/dpp[BKG]) * (dpp[SRC]/dpp[BKG]);
  }
  /* get degrees/pixel for source; not used in norm, but users want to know */
  else{
    if( wcs[SRC] && iswcs(wcs[SRC]) ){
      if( !wcs[SRC]->coorflip )
	dpp[SRC] = ABS(wcs[SRC]->cdelt[0]) * block[SRC];
      else
	dpp[SRC] = ABS(wcs[SRC]->cdelt[1]) * block[SRC];
    }
  }

  /* open exposure file(s), if necessary */
  if( expstr ){
    int ip=0;
    int i=0;
    int got=0;
    newdtable(";");
    for(i=0; i<NTYPE; i++){
      if( word(expstr, tbuf, &ip) && *tbuf ){
	name[NTYPE+i] = xstrdup(tbuf);
	if( !(fun[NTYPE+i] = FunOpen(name[NTYPE+i], "r", NULL)) )
	  gerror(stderr, "can't FunOpen exp file: %s\n", name[NTYPE+i]);
	FunInfoGet(fun[NTYPE+i],
		   FUN_SECT_DIM1, &dim1[NTYPE+i],
		   FUN_SECT_DIM2, &dim2[NTYPE+i],
		   FUN_SECT_BLOCK, &block[NTYPE+i], FUN_WCS, &wcs[NTYPE+i], 0);
	/* set dim2 to 1 for a 1D image */
	if( dim2[NTYPE+i] == 0 ) dim2[NTYPE+i] = 1;
	doexp |= (i+1);
	got++;
      }
    }
    freedtable();
    /* if we have wcs for the data and exposure, and the user asks for it,
       use wcs for conversion */
    if( (s=getenv("FUNCNTS_EXPTRANS")) && !strcasecmp(s, "wcs") ){
      for(i=0; i<got; i++){
	if( wcs[i] && wcs[NTYPE+i] )
	  exptrans[i] = EXP_WCS;
	else
	  gerror(stderr,
		 "no WCS present for WCS-based exposure", name[NTYPE+i]);
      }
    }
  }

  /* if we have source exposure file but no background exposure file, 
     and if background data comes from source file , then use the source
     exposure file for bkgd exposure as well */
  if( (doexp == SCORR) && !name[BKG] && (bktype != BKG_VAL) ){
    doexp |= BCORR;
    fun[3]   = fun[2];
    dim1[3]  = dim1[2];
    dim2[3]  = dim2[2];
    block[3] = block[2];
  }

  /* get time correction values */
  if( timestr ){
    int ip=0;
    int i=0;
    int got;
    double dval;
    char *t;
    newdtable(";");
    for(i=0; i<2; i++){
      if( word(timestr, tbuf, &ip) && *tbuf ){
	dval = strtod(tbuf, &t);
	if( t != tbuf ){
	  timecorr[i] = dval;
	}
	else{
	  timecorr[i] = FunParamGetd(fun[i], tbuf, 0, 1.0, &got);
	  if( !got ){
	    /* try pure upper case */
	    cluc(tbuf);
	    timecorr[i] = FunParamGetd(fun[i], tbuf, 0, 1.0, &got);
	    if( !got ){
	      gerror(stderr, "can't find time correction parameter: %s\n",
		     tbuf);
	    }
	  }
	}
	dotim |= (i+1);
      }
    }
    freedtable();
  }
  /* if we have source time correction but no background time correction,
     and if background data comes from source file , then use the source
     correction for bkgd as well */
  if( (dotim == SCORR) && !name[BKG] && (bktype != BKG_VAL) ){
    dotim |= BCORR;
    timecorr[BKG] = timecorr[SRC];
  }

  /* process separate source/background files */
  if( name[BKG] ){
    for(k=0; k<NTYPE; k++){
      /* process counts in all regions */
      switch(type[k]){
      case FUN_IMAGE:
      case FUN_ARRAY:
	{
	  int y, lasty;
	  double *dbuf=NULL;
	  /* allocate a row buffer */
	  dbuf = xmalloc(dim1[k] * sizeof(double));
	  /* seed with impossible value so we load first line */
	  lasty = -1;
	  for(i=0; i<nmask[k]; i++){
	    y = masks[k][i].y;
	    if( y != lasty ){
	      if( !FunImageRowGet(fun[k], dbuf, y, y, "bitpix=-64") )
		gerror(stderr, "can't FunImageRowGet: %d %s\n", y, name[k]);
	      lasty = y;
	    }
	    area[k][masks[k][i].region-1] += 
	      masks[k][i].xstop - masks[k][i].xstart + 1;
	    for(j=masks[k][i].xstart-1; j<=masks[k][i].xstop-1; j++){
	      if( !isnand(dbuf[j]) ){
		cnts[0][k][masks[k][i].region-1] += dbuf[j];
	      }
	    }
	  }
	  /* free temp buffers */
	  if( dbuf ) xfree(dbuf);
	}
	break;
      case FUN_TABLE:
      case FUN_EVENTS:
	if( evimage ){
	  int *iptr;
	  int *ibuf=NULL;
	  /* read data as ints */
	  if( !(ibuf = FunImageGet(fun[k], NULL, "bitpix=32")) )
	    gerror(stderr, "can't FunImageGet: %s\n", name[k]);
	  /* get source counts */
	  for(i=0; i<nmask[k]; i++){
	    iptr = &(ibuf[(masks[k][i].y-1)*dim1[k]]);
	    for(j=masks[k][i].xstart-1; j<=masks[k][i].xstop-1; j++){
	      cnts[0][k][masks[k][i].region-1] += iptr[j];
	    }
	  }
	  /* free up space */
	  if( ibuf ) xfree(ibuf);
	}
	else{
	  int *rbuf;
	  int got;
	  char *rawbuf;
	  Filter efilter[MAXINTV];
	  /* make sure we will have a valid image section in which to filter */
	  if( (x1[k]-x0[k] <= 0) || (y1[k]-y0[k] <= 0) )
	    gerror(stderr, 
		   "invalid or zero image dimensions(s) for table (%s)\n",
		   bincols[k] ? bincols[k] : "invalid bincols?");
	  /* make up the mode string */
	  snprintf(mode, SZ_LINE,
		   "type=events,convert=%s,evsect=\"%d %d %d %d %d\"",
		   (endian[k] == is_bigendian()) ? "false" : "true",
		   x0[k], x1[k], y0[k], y1[k], block[k]);
	  /* add columns */
	  if( bincols[k] ){
	    strcat(mode, ",");
	    strcat(mode, bincols[k]);
	  }
	  /* open filters for all intervals */
	  for(v=0; v<nintv; v++){
	    strcpy(tbuf, region[k]);
	    if( intvs[v] ){
	      strcat(tbuf, "&&(");
	      strcat(tbuf, intvs[v]);
	      strcat(tbuf, ")");
	    }
	    efilter[v] = FilterOpen(header[k], tbuf, mode);
	  }
	  /* allocate region value buffer */
	  rbuf = xmalloc(maxrow*sizeof(int));
	  /* extract events */
	  while( (ebuf = FunTableRowGet(fun[k], NULL, maxrow, NULL, &got)) ){
	    /* get pointer to raw buffer */
	    FunInfoGet(fun[k], FUN_RAWBUF, &rawbuf, 0);
	    /* process all intervals in one pass through this data */
	    for(v=0; v<nintv; v++){
	      /* get events which pass the region filter */
	      if( efilter[v] && (efilter[v] != NOFILTER) &&
		  FilterEvents(efilter[v], rawbuf, rawsize[k], got, rbuf)){
		/* loop through events, process those which are in a region */
		for(i=0; i<got; i++){
		  eptr = (char *)(ebuf+(rowsize[k]*i)+valoffsets[k]);
		  if( rbuf[i] > 0 ){
		    if( valname[k] && (*valname[k] != '-') )
		      cnts[v][k][rbuf[i]-1] += 
			DConvert(eptr, valtypes[k], valns[k]);
		    else
		      cnts[v][k][rbuf[i]-1] += 1;
		  }
		}
	      }
	    }
	    /* free for next read */
	    if( ebuf ) xfree(ebuf);
	  }
	  /* Done with region values */
	  if( rbuf ) xfree(rbuf);
	  /* close filters */
	  for(v=0; v<nintv; v++){
	    if( efilter[v] && (efilter[v] != NOFILTER) ){
	      FilterClose(efilter[v]);
	    }
	  }
	}
	/* get area */
	for(i=0; i<nmask[k]; i++){
	  area[k][masks[k][i].region-1] += 
	    masks[k][i].xstop - masks[k][i].xstart + 1;
	}
	break;
      }
    }
  }
  /* same file for source and background:
     this code is optimized so that we only traverse the file once
  */
  else{
    /* process counts in all regions */
    switch(type[SRC]){
    case FUN_IMAGE:
    case FUN_ARRAY:
      {
	int state;
	int y, lasty;
	double *dbuf=NULL;
	/* allocate a row buffer */
	dbuf = xmalloc(dim1[SRC] * sizeof(double));
	/* seed with impossible value so we load first line */
	lasty = -1;
	for(i=0, j=0; i<nmask[SRC] || j<nmask[BKG]; ){
	  if( (i<nmask[SRC]) && (j<nmask[BKG]) ) state = 3;
	  else if( i<nmask[SRC] ) state = 1;
	  else if( j<nmask[BKG] ) state = 2;
	  else		    break;
	  switch(state){
	  case 1:
	  sline:
	  y = masks[SRC][i].y;
	  if( y != lasty ){
	    if( !FunImageRowGet(fun[SRC], dbuf, y, y, "bitpix=-64") )
	      gerror(stderr, "can't FunImageRowGet: %d %s\n", y, name[SRC]);
	    lasty = y;
	  }
	  area[SRC][masks[SRC][i].region-1] += 
	    masks[SRC][i].xstop - masks[SRC][i].xstart + 1;
	  for(k=masks[SRC][i].xstart-1; k<=masks[SRC][i].xstop-1; k++){
	    if( !isnand(dbuf[k]) ){
	      cnts[0][SRC][masks[SRC][i].region-1] += dbuf[k];
	    }
	  }
	  i++;
	  break;
	  case 2:
	  bline:
	  y = masks[BKG][j].y;
	  if( y != lasty ){
	    if( !FunImageRowGet(fun[SRC], dbuf, y, y, "bitpix=-64") )
	      gerror(stderr, "can't FunImageRowGet: %d %s\n", y, name[SRC]);
	    lasty = y;
	  }
	  area[BKG][masks[BKG][j].region-1] +=
	    masks[BKG][j].xstop - masks[BKG][j].xstart + 1;
	  for(k=masks[BKG][j].xstart-1; k<=masks[BKG][j].xstop-1; k++){
	    if( !isnand(dbuf[k]) ){
	      cnts[0][BKG][masks[BKG][j].region-1] += dbuf[k];
	    }
	  }
	  j++;
	  break;
	  case 3:
	    if( masks[SRC][i].y <= masks[BKG][j].y ){
	      goto sline;
	    }
	    goto bline;
	  }
	}
	if( dbuf ) xfree(dbuf);
      }
      break;
    case FUN_TABLE:
    case FUN_EVENTS:
      if( evimage ){
	int *iptr;
	int *ibuf=NULL;
	/* read data as ints */
	if( !(ibuf = FunImageGet(fun[SRC], NULL, "bitpix=32")) )
	  gerror(stderr, "can't FunImageGet: %s\n", name[SRC]);
	/* get source counts */
	for(i=0; i<nmask[SRC]; i++){
	  iptr = &(ibuf[(masks[SRC][i].y-1)*dim1[SRC]]);
	  for(j=masks[SRC][i].xstart-1; j<=masks[SRC][i].xstop-1; j++){
	    cnts[0][SRC][masks[SRC][i].region-1] += iptr[j];
	  }
	}
	/* get background counts and area, if necessary */
	if( bktype != BKG_VAL ){
	  for(i=0; i<nmask[BKG]; i++){
	    iptr = &(ibuf[(masks[BKG][i].y-1)*dim1[SRC]]);
	    for(j=masks[BKG][i].xstart-1; j<=masks[BKG][i].xstop-1; j++){
	      cnts[0][BKG][masks[BKG][i].region-1] += iptr[j];
	    }
	  }
	}
	/* free up space */
	if( ibuf ) xfree(ibuf);
      }
      else{
	int *rbuf;
	int got;
	char *rawbuf;
	Filter efilter[MAXINTV][NTYPE];
	/* make sure we will have a valid image section in which to filter */
	if( (x1[SRC]-x0[SRC] <= 0) || (y1[SRC]-y0[SRC] <= 0) )
	  gerror(stderr, 
		 "invalid or zero image dimensions(s) for table (%s)\n",
		 bincols[SRC] ? bincols[SRC] : "invalid bincols?");
	/* open new filters to filter events through regions */
	snprintf(mode, SZ_LINE,
		 "type=events,convert=%s,evsect=\"%d %d %d %d %d\"",
		 (endian[SRC] == is_bigendian()) ? "false" : "true",
		 x0[SRC], x1[SRC], y0[SRC], y1[SRC], block[SRC]);
	/* add columns */
	if( bincols[SRC] ){
	  strcat(mode, ",");
	  strcat(mode, bincols[SRC]);
	}
	/* open filters for all intervals */
	for(v=0; v<nintv; v++){
	  for(i=0; i<NTYPE; i++){
	    if( region[i] ){
	      strcpy(tbuf, region[i]);
	      if( intvs[v] ){
		strcat(tbuf, "&&(");
		strcat(tbuf, intvs[v]);
		strcat(tbuf, ")");
	      }
	      efilter[v][i] = FilterOpen(header[i], tbuf, mode);
	    }
	    else{
	      efilter[v][i] = NULL;
	    }
	  }
	}
	/* allocate region value buffer */
	rbuf = xmalloc(maxrow*sizeof(int));
	/* extract and filter events */
	while( (ebuf = FunTableRowGet(fun[SRC], NULL, maxrow, NULL, &got)) ){
	  /* get pointer to raw buffer */
	  FunInfoGet(fun[SRC], FUN_RAWBUF, &rawbuf, 0);
	  /* process all intervals in one pass through this data */
	  for(v=0; v<nintv; v++){
	    /* get events which pass the region filter */
	    for(i=0; i<NTYPE; i++){
	      if( efilter[v][i] && (efilter[v][i] != NOFILTER) &&
		  FilterEvents(efilter[v][i], rawbuf, rawsize[i], got, rbuf)){
		/* count events which are in a region */
		for(j=0; j<got; j++){
		  eptr = (char *)(ebuf+(rowsize[i]*j)+valoffsets[i]);
		  if( rbuf[j] > 0 ){
		    if( valname[i] && (*valname[i] != '-') )
		      cnts[v][i][rbuf[j]-1] +=
			DConvert(eptr, valtypes[i], valns[i]);
		    else
		      cnts[v][i][rbuf[j]-1] += 1;
		  }
		}
	      }
	    }
	  }
	  /* free for next read */
	  if( ebuf ) xfree(ebuf);
	}
	/* done with region values */
	if( rbuf ) xfree(rbuf);
	/* close filters */
	for(v=0; v<nintv; v++)
	  for(i=0; i<NTYPE; i++){
	    if( efilter[v][i] && (efilter[v][i] != NOFILTER) ){
	      FilterClose(efilter[v][i]);
	    }
	  }
      }
      /* get source area */
      for(i=0; i<nmask[SRC]; i++){
	area[SRC][masks[SRC][i].region-1] += 
	  masks[SRC][i].xstop - masks[SRC][i].xstart + 1;
      }
      /* get background area, if necessary */
      if( bktype != BKG_VAL ){
	for(i=0; i<nmask[BKG]; i++){
	  area[BKG][masks[BKG][i].region-1] +=
	    masks[BKG][i].xstop - masks[BKG][i].xstart + 1;
	}
      }
      break;
    }
  }

  /* accumulate averge exposure for each region */
  if( doexp ){
    for(k=0; k<2; k++){
      if( fun[NTYPE+k] ){
	int ex, ey, lastey;
	double d1, d2;
	double *exbuf=NULL;
	char *tname="unknown";
	exbuf = xmalloc(dim1[NTYPE+k] * sizeof(double));
	if( name[NTYPE+k] )
	  tname = name[NTYPE+k];
	else if( (k>0) && name[NTYPE+k-1] )
	  tname = name[NTYPE+k-1];
	switch(exptrans[k]){
	case EXP_RATIO:
	  lastey = -1;
	  d1 = ((double)dim1[NTYPE+k]/(double)dim1[k]);
	  d2 = ((double)dim2[NTYPE+k]/(double)dim2[k]);
	  for(i=0; i<nmask[k]; i++){
	    ey = ((masks[k][i].y - 1) * d2) + 1;
	    if( ey != lastey ){
	      if( !FunImageRowGet(fun[NTYPE+k], exbuf, ey, ey, "bitpix=-64") )
		gerror(stderr, "can't FunImageRowGet (exp file): %d %s\n",
		       ey, tname);
	      lastey = ey;
	    }
	    for(j=masks[k][i].xstart; j<=masks[k][i].xstop; j++){
	      ex = (j-1) * d1 + 1;
	      if( ex < 1 ) ex = 1;
	      if( ex > dim1[NTYPE+k] ) ex = dim1[NTYPE+k];
	      exp[k][masks[k][i].region-1] += exbuf[ex-1];
	    }
	  }
	  break;
	case EXP_WCS:
	  lastey = -1;
	  for(i=0; i<nmask[k]; i++){
	    for(j=masks[k][i].xstart; j<=masks[k][i].xstop; j++){
	      double dval1, dval2;
	      double dex, dey;
	      int offscl;
	      /* convert data image pixels to ra/dec using wcs */
	      pix2wcs(wcs[k], (double)j,(double)masks[k][i].y, &dval1,&dval2);
	      /* convert ra/dec to exp image pixels using wcs */
	      wcs2pix(wcs[NTYPE+k], dval1, dval2, &dex, &dey, &offscl);
	      ex = (int)(dex+0.5); ey = (int)(dey+0.5);
	      if( ex < 1 ) ex = 1;
	      if( ex > dim1[NTYPE+k] ) ex = dim1[NTYPE+k];
	      if( ey < 1 ) ey = 1;
	      if( ey > dim2[NTYPE+k] ) ey = dim2[NTYPE+k];
	      if( ey != lastey ){
		if( !FunImageRowGet(fun[NTYPE+k], exbuf, ey, ey, "bitpix=-64") )
		  gerror(stderr, "can't FunImageRowGet (exp file): %d %s\n",
			 ey, tname);
		lastey = ey;
	      }
	      exp[k][masks[k][i].region-1] += exbuf[ex-1];
	    }
	  }
	  break;
	default:
	  gerror(stderr, "unknown exposure conversion type");
	}
	if( exbuf ) xfree(exbuf);
      }
      /* since we already checked for source exposure, we must be missing
	 bkgd exposure.  This is OK, unless we have a bkgd file. In that case,
	 we need to warn the user and make an assumption about errors */
      else if( (k==1) && name[BKG] ){
	gwarning(stderr,
	 "No exposure file was specified for the background file.\nWe therefore assume that the bkgd already has been corrected for\nexposure and that the error associated with each bkgd pixel is 0.\n");
	dobkgderr = 0;
      }
    }
  }

  /* reset the interval index for next stage of proessing*/
  v = 0;
  /* come back here if we are processing multiple intervals */
intvagain:
  /* for data-based background, check validity of background area */
  if( bktype != BKG_VAL ){
    bkval = 0.0;
    bkarea = 0;
    bkexp = 0.0;
    for(i=0; i<nreg[BKG]; i++){
      bkval +=  cnts[v][BKG][i];
      bkarea += area[BKG][i];
      bkexp += exp[BKG][i];
    }
    /* if background area is 0, that is bad */
    if( bkarea == 0 ){
      gerror(stdout, "background has zero area\n");
    }
  }

  /* display source header information */
  fprintf(stdout, "# source\n");
  fprintf(stdout, "#   data_file:\t\t%s\n", name[SRC]);
  if( intvs[v] )
    fprintf(stdout, "#   interval:\t\t%s\n", intvs[v]);
  if( valname[SRC] && (*valname[SRC] != '-') )
    fprintf(stdout, "#   value column:\t%s\n", valname[SRC]);
  if( dpp[SRC] > 0.0 )
    fprintf(stdout, "#   arcsec/pixel:\t%g\n", dpp[SRC]*ARCSEC_PER_DEG);
  if( doexp & SCORR )
    fprintf(stdout, "#   exp_correction:\t%s\n", name[NTYPE+SRC]);
  if( dotim & SCORR )
    fprintf(stdout, "#   time_correction:\t%g\n", timecorr[SRC]);

  /* display bkgd header information */
  fprintf(stdout, "# background\n");
  if( name[BKG] ){
    fprintf(stdout, "#   data_file:\t\t%s\n", name[BKG]);
    if( intvs[v] )
      fprintf(stdout, "#   interval:\t\t%s\n", intvs[v]);
    if( valname[BKG] && (*valname[BKG] != '-') )
      fprintf(stdout, "#   value column:\t%s\n", valname[BKG]);
    if( dpp[BKG] > 0.0 )
      fprintf(stdout, "#   arcsec/pixel:\t%g\n", dpp[BKG]*ARCSEC_PER_DEG);
    if( doexp & BCORR )
      fprintf(stdout, "#   exp_correction:\t%s\n", name[NTYPE+BKG]);
    if( dotim & BCORR )
      fprintf(stdout, "#   time_correction:\t%g\n", timecorr[BKG]);
    if( dppnorm != 1.0 )
      fprintf(stdout, "# wcs area norm factor:\t%g/%g (source/bkgd))\n",
	      dpp[SRC],dpp[BKG]);
  }
  else if( bktype != BKG_VAL ){
    fprintf(stdout, "#   data_file:\t\t%s\n", name[SRC]);
    if( valname[SRC] && valname[BKG] && strcmp(valname[SRC], valname[BKG]) &&
	(*valname[BKG] != '-') )
      fprintf(stdout, "#   value_column:\t%s\n", valname[BKG]);
  }
  else
    fprintf(stdout, "#   constant_value:\t%.6f\n", bkval);

  /* dislay table information */
  if( (dpp[SRC] > 0.0) && !dopixels )
    s = "arcsec";
  else
    s = "pixel";
  fprintf(stdout, "# column units\n");
  fprintf(stdout, "#   area:\t\t%s**2\n", s);
  fprintf(stdout, "#   surf_bri:\t\tcnts/%s**2%s%s\n",
	  s, (dotim & SCORR)? "/sec" : "", (doexp & SCORR)? "/expval" : "");
  fprintf(stdout, "#   surf_err:\t\tcnts/%s**2%s%s\n",
	  s, (dotim & SCORR)? "/sec" : "", (doexp & SCORR)? "/expval" : "");
  if( doradang ){
    fprintf(stdout, "#   radii:\t\t%ss\n", s);
    fprintf(stdout, "#   angles:\t\tdegrees\n");
  }

  /* come back here if we also are outputting summed results */
sumagain:
  /* if we need to display sums, so the sum now, but save unsummed values,
     because we will have to display those as well */
  switch(dosum){
  case 1:
    memcpy(savecnts[v][SRC], cnts[v][SRC], (nreg[SRC]+1)*sizeof(double));
    memcpy(savearea[SRC], area[SRC], (nreg[SRC]+1)*sizeof(int));
    for(i=1; i<nreg[SRC]; i++){
      cnts[v][SRC][i] += cnts[v][SRC][i-1];
      area[SRC][i] += area[SRC][i-1];
    }
    if( bktype != BKG_VAL ){
      memcpy(savecnts[v][BKG], cnts[v][BKG],
	     (nreg[BKG]+1)*sizeof(double));
      memcpy(savearea[BKG], area[BKG], (nreg[BKG]+1)*sizeof(int));
      for(i=1; i<nreg[BKG]; i++){
	cnts[v][BKG][i] += cnts[v][BKG][i-1];
	area[BKG][i] += area[BKG][i-1];
      }
    }
    break;
  case 2:
    memcpy(cnts[v][SRC], savecnts[v][SRC], (nreg[SRC]+1)*sizeof(double));
    memcpy(area[SRC], savearea[SRC], (nreg[SRC]+1)*sizeof(int));
    if( bktype != BKG_VAL ){
      memcpy(cnts[v][BKG], savecnts[v][BKG],
	     (nreg[BKG]+1)*sizeof(double));
      memcpy(area[BKG], savearea[BKG], (nreg[BKG]+1)*sizeof(int));
    }
    break;
  default:
    break;
  }

  /* process the background */
  switch(bktype){
  /* constant background is counts/pixel */
  case BKG_VAL:
    for(i=0; i<nreg[SRC]; i++){
      bncnts[v][i] = (bkval * area[SRC][i] * timecorr[SRC]);
      bscnts[v][i] = cnts[v][SRC][i] - bncnts[v][i];
      bserr[v][i] = sqrt(cnts[v][SRC][i]);
      bnerr[v][i] = 0.0;
    }
    break;
  case BKG_ALL:
    switch( dosum ){
    case 1:
      bkval =  cnts[v][BKG][nreg[BKG]-1];
      bkarea = area[BKG][nreg[BKG]-1];
      bkexp = exp[BKG][nreg[BKG]-1];
      break;
    case 2:
    default:
      bkval = 0.0;
      bkarea = 0;
      bkexp = 0.0;
      /* get total background and background area */
      for(i=0; i<nreg[BKG]; i++){
	bkval +=  cnts[v][BKG][i];
	bkarea += area[BKG][i];
	bkexp += exp[BKG][i];
      }
      break;
    }
    {
      double tempnorm=0.0;
      /* subtract entire normalized background from each source region */
      for(i=0; i<nreg[SRC]; i++){
	/* get area and exposure normalization */
	switch(doexp){
	case NONE:
	  tempnorm = (double)area[SRC][i] / bkarea;
	  break;
	case SCORR:
	  tempnorm = exp[SRC][i] / bkarea;
	  break;
	case BCORR:
	  tempnorm = (double)area[SRC][i] / bkexp;
	  break;
	case BOTH:
	  tempnorm = exp[SRC][i] / bkexp;
	  break;
	}
	/* add time normalization */
	tempnorm *= (timecorr[SRC]/timecorr[BKG]);
	/* add normalization due to different pixels sizes in src and bkg */
	tempnorm *= dppnorm;
	bncnts[v][i] = (bkval * tempnorm);
	bscnts[v][i] = cnts[v][SRC][i] - bncnts[v][i];
	bserr[v][i] = sqrt(cnts[v][SRC][i] + (tempnorm*tempnorm*bkval));
	if( dobkgderr )
	  bnerr[v][i] = sqrt(bkval) * tempnorm;
	else
	  bnerr[v][i] = 0.0;
      }
    }
    break;
  case BKG_EACH:
    {
      double tempnorm=0.0;
      /* subtract each background from each source region */
      for(i=0; i<nreg[SRC]; i++){
	/* get area and exposure normalization */
	switch(doexp){
	case NONE:
	  tempnorm = (double)area[SRC][i] / (double)area[BKG][i];
	  break;
	case SCORR:
	  tempnorm = exp[SRC][i] / (double)area[BKG][i];
	  break;
	case BCORR:
	  tempnorm = (double)area[SRC][i] / (double)exp[BKG][i];
	  break;
	case BOTH:
	  tempnorm = exp[SRC][i] / (double)exp[BKG][i];
	  break;
	}
	/* add time normalization */
	tempnorm *= (timecorr[SRC]/timecorr[BKG]);
	/* add normalization due to different pixels sizes in src and bkg */
	tempnorm *= dppnorm;
	bncnts[v][i] = (cnts[v][BKG][i] * tempnorm);
	bscnts[v][i] = cnts[v][SRC][i] - bncnts[v][i];
	bserr[v][i] = sqrt(cnts[v][SRC][i] +
			      (tempnorm * tempnorm * cnts[v][BKG][i]));
	if( dobkgderr )
	  bnerr[v][i] = sqrt(cnts[v][BKG][i]) * tempnorm;
	else
	  bnerr[v][i] = 0.0;
      }
    }
    break;
  }

  /* display results */
  /* display the main output table */
  switch( dosum ){
  case 1:
    fprintf(stdout, "\n");
    fprintf(stdout, "# summed background-subtracted results\n");
    fprintf(stdout, "upto%c  net_counts%c    error", cold, cold);
    break;
  case 2:
  default:
    if( cold == '\t' ) fprintf(stdout, "\f");
    fprintf(stdout, "\n");
    fprintf(stdout, "# background-subtracted results\n");
    fprintf(stdout, " reg%c  net_counts%c    error", cold, cold);
    break;
  }
  fprintf(stdout, "%c  background%c   berror", cold, cold);
  fprintf(stdout, "%c     area%c surf_bri%c surf_err", cold, cold, cold);
  if( doradang )
    fprintf(stdout, "%c  radius1%c  radius2%c   angle1%c   angle2",
	    cold, cold, cold, cold);
  fprintf(stdout, "\n");
  fprintf(stdout, "----%c------------%c---------", cold, cold);
  fprintf(stdout, "%c------------%c---------", cold, cold);
  fprintf(stdout, "%c---------%c---------%c---------", cold, cold, cold);
  if( doradang )
    fprintf(stdout, "%c---------%c---------%c---------%c---------",
	    cold, cold, cold, cold);
  fprintf(stdout, "\n");
  if( radang )
    newdtable(",");
  cradang = radang;
  for(i=0; i<nreg[SRC]; i++){
    /* get next line from radii/angle string */
    if( cradang ){
      tradang = (char *)strchr(cradang, '\n');
      if( tradang )
	*tradang = '\0';
    }
    if( area[SRC][i] ){
      double cntsperarea;
      double errperarea;
      double areasq;
      if( doexp & SCORR ){
	cntsperarea = bscnts[v][i]/(exp[SRC][i]*timecorr[SRC]);
	errperarea = bserr[v][i]/(exp[SRC][i]*timecorr[SRC]);
	areasq = area[SRC][i];
      }
      else{
	cntsperarea = bscnts[v][i]/(area[SRC][i]*timecorr[SRC]);
	errperarea = bserr[v][i]/(area[SRC][i]*timecorr[SRC]);
	areasq = area[SRC][i];
      }
      /* if we know how to convert to cnts/pix**2 to cnts/arcsec**2, do it */
      if( !dopixels && (dpp[SRC] > 0.0) ){
	cntsperarea = (cntsperarea / (dpp[SRC]*dpp[SRC])) / ARCSEC_PER_DEGSQ;
	errperarea  = (errperarea  / (dpp[SRC]*dpp[SRC])) / ARCSEC_PER_DEGSQ;
	areasq      = (areasq      * (dpp[SRC]*dpp[SRC])) * ARCSEC_PER_DEGSQ;
      }
      /* get correctly precisioned format statement */
      switch(dog){
      case 0:
	fmt = "%4d%c%12.3f%c%9.3f%c%12.3f%c%9.3f%c%9.2f%c%9.3f%c%9.3f";
	break;
      case 1:
	fmt = "%4d%c%12.3g%c%9.3g%c%12.3g%c%9.3g%c%9.2g%c%9.3g%c%9.3g";
	break;
      case 2:
	fmt = "%4d%c%.14g%c%.14g%c%.14g%c%.14g%c%.14g%c%.14g%c%.14g";
	break;
      }
      fprintf(stdout, fmt,
	      i+1, cold, 
	      bscnts[v][i], cold, bserr[v][i], cold,
	      bncnts[v][i], cold, bnerr[v][i], cold,
	      areasq, cold, cntsperarea, cold, errperarea);
      /* display values from this line of radii/angles */
      if( doradang && cradang ){
	int ip=0;
	double dval;
	for(j=0; j<4; j++){
	  if( word(cradang, tbuf, &ip) && strcmp(tbuf, "NA") ){
	    dval = strtod(tbuf, NULL);
	    if( (j<2) && !dopixels && (dpp[SRC]>0.0) )
	      fprintf(stdout, "%c%9.3f", cold, (dval*dpp[SRC]*ARCSEC_PER_DEG));
	    else
	      fprintf(stdout, "%c%9.3f", cold, dval);
	  }
	  else{
	    fprintf(stdout, "%c%9.9s", cold, "NA");
	  }
	}
      }
      /* new-line at end  */
      fprintf(stdout, "\n");
    }
    /* might have to display zero area pixels */
    else if( dozero ){
      /* get correctly precisioned format statement */
      switch(dog){
      case 0:
	fmt = "%4d%c%12.3f%c%9.3f%c%12.3f%c%9.3f%c%9.2f%c%9.3f%c%9.3f";
	break;
      case 1:
	fmt = "%4d%c%12.3g%c%9.3g%c%12.3g%c%9.3g%c%9.2g%c%9.3g%c%9.3g";
	break;
      case 2:
	fmt = "%4d%c%.14g%c%.14g%c%.14g%c%.14g%c%.14g%c%.14g%c%.14g";
	break;
      }
      fprintf(stdout, fmt, i+1, cold, 0.0, cold, 0.0, cold, 0.0, cold, 0.0, 
	      cold, 0.0, cold, 0.0, cold, 0.0);
      /* add the correct radii and angle info, to make plotting easier */
      if( doradang && cradang ){
	int ip=0;
	double dval;
	for(j=0; j<4; j++){
	  if( word(cradang, tbuf, &ip) && strcmp(tbuf, "NA") ){
	    dval = strtod(tbuf, NULL);
	    if( (j<2) && !dopixels && (dpp[SRC]>0.0) )
	      fprintf(stdout, "%c%9.3f", cold, (dval*dpp[SRC]*ARCSEC_PER_DEG));
	    else
	      fprintf(stdout, "%c%9.3f", cold, dval);
	  }
	  else{
	    fprintf(stdout, "%c%9.9s", cold, "NA");
	  }
	}
      }
      /* new-line at end  */
      fprintf(stdout, "\n");
    }
    /* bump to next line of radii/angles */
    if( tradang ){
      cradang = tradang+1;
      /* put back the cr in case we pass through again */
      *tradang = '\n';
    }
  }
  if( radang )
    freedtable();
  fprintf(stdout, "\n");
  fflush(stdout);

  /* if we just summed, go back and display unsummed values */
  switch(dosum){
  case 1:
    dosum = 2;
    goto sumagain;
  /* set flag back to 1 in case we have multiple intervals to process */
  case 2:
    dosum = 1;
    break;
  default:
    break;
  }

  /* display raw source counts */
  if( dosum ){
    int tarea=0;
    double tcnts=0;
    if( cold == '\t' ) fprintf(stdout, "\f");
    fprintf(stdout, "\n");
    /* display source info */
    if( filtstr[SRC] ){
      fprintf(stdout, "# source_region(s):\n");
      fprintf(stdout, "# %s\n\n", filtstr[SRC]);
    }
    fprintf(stdout, "# summed_source_data\n");
    fprintf(stdout,
	    " reg%c      counts%c   pixels%c     sumcnts%c   sumpix\n",
	    cold, cold, cold, cold);
    fprintf(stdout,
	    "----%c------------%c---------%c------------%c---------\n",
	    cold, cold, cold, cold);
    for(i=0; i<nreg[SRC]; i++){
      tcnts += cnts[v][SRC][i];
      tarea += area[SRC][i];
      /* get correctly precisioned format statement */
      switch(dog){
      case 0:
	fmt = "%4d%c%12.3f%c%9d%c%12.3f%c%9d\n";
	break;
      case 1:
	fmt = "%4d%c%12.3g%c%9d%c%12.3g%c%9d\n";
	break;
      case 2:
	fmt = "%4d%c%.14g%c%9d%c%.14g%c%9d\n";
	break;
      }
      fprintf(stdout, fmt,
	      i+1, cold,
	      cnts[v][SRC][i], cold, area[SRC][i], cold,
	      tcnts, cold, tarea);
    }
  } else{
    if( cold == '\t' ) fprintf(stdout, "\f");
    fprintf(stdout, "\n");
    /* display source info */
    if( filtstr[SRC] ){
      fprintf(stdout, "# source_region(s):\n");
      fprintf(stdout, "# %s\n\n", filtstr[SRC]);
    }
    fprintf(stdout, "# source_data\n");
    fprintf(stdout, " reg%c      counts%c   pixels", cold, cold);
    if( doexp & SCORR )
      fprintf(stdout, "%c  avg_exp", cold);
    fprintf(stdout, "\n");
    fprintf(stdout, "----%c------------%c---------", cold, cold);
    if( doexp & SCORR )
      fprintf(stdout, "%c---------", cold);
    fprintf(stdout, "\n");
    for(i=0; i<nreg[SRC]; i++){
      /* get correctly precisioned format statement */
      switch(dog){
      case 0:
	fmt = "%4d%c%12.3f%c%9d";
	break;
      case 1:
	fmt = "%4d%c%12.3g%c%9d";
	break;
      case 2:
	fmt = "%4d%c%.14g%c%9d";
	break;
      }
      fprintf(stdout, fmt, i+1, cold, cnts[v][SRC][i], cold, area[SRC][i]);
      
      if( doexp & SCORR ){
	/* get correctly precisioned format statement */
	switch(dog){
	case 0:
	  fmt = "%c%9.3f";
	  break;
	case 1:
	  fmt = "%c%9.3g";
	  break;
	case 2:
	  fmt = "%c%.14g";
	  break;
	}
	if( area[SRC][i] > 0 )
	  fprintf(stdout, fmt, cold, exp[SRC][i]/area[SRC][i]);
	else
	  fprintf(stdout, fmt, cold, 0.0);
      }
      fprintf(stdout, "\n");
    }
  }
  fprintf(stdout, "\n");
  fflush(stdout);

  /* display raw background info */
  switch(bktype){
  case BKG_VAL:
    break;
  case BKG_ALL:
    if( cold == '\t' ) fprintf(stdout, "\f");
    fprintf(stdout, "\n");
    if( filtstr[BKG] ){
      fprintf(stdout, "# background_region(s)\n");
      fprintf(stdout, "# %s\n\n", filtstr[BKG]);
    }
    fprintf(stdout, "# background_data\n");
    fprintf(stdout, " reg%c      counts%c   pixels", cold, cold);
    if( doexp & BCORR )
      fprintf(stdout, "%c  avg_exp", cold);
    fprintf(stdout, "\n");
    fprintf(stdout, "----%c------------%c---------", cold, cold);
    if( doexp & BCORR )
      fprintf(stdout, "%c---------", cold);
    fprintf(stdout, "\n");
    /* get correctly precisioned format statement */
    switch(dog){
    case 0:
      fmt = "%s%c%12.3f%c%9d";
      break;
    case 1:
      fmt = "%s%c%12.3g%c%9d";
      break;
    case 2:
      fmt = "%s%c%.14g%c%9d";
      break;
    }
    fprintf(stdout, fmt, "all ", cold, bkval, cold, bkarea);
    if( doexp & BCORR ){
      /* get correctly precisioned format statement */
      switch(dog){
      case 0:
	fmt = "%c%9.3f";
	  break;
      case 1:
	fmt = "%c%9.3g";
	  break;
      case 2:
	fmt = "%c%.14g";
	  break;
      }
      fprintf(stdout, fmt, cold, bkexp/bkarea);
    }
    fprintf(stdout, "\n");
    break;
  case BKG_EACH:
    if( dosum ){
      int tarea=0;
      double tcnts=0;
      if( cold == '\t' ) fprintf(stdout, "\f");
      fprintf(stdout, "\n");
      if( filtstr[BKG] ){
	fprintf(stdout, "# background_region(s)\n");
	fprintf(stdout, "# %s\n\n", filtstr[BKG]);
      }
      fprintf(stdout, "# summed_background_data\n");
      fprintf(stdout,
	      " reg%c      counts%c   pixels%c     sumcnts%c   sumpix\n",
	      cold, cold, cold, cold);
      fprintf(stdout,
	      "----%c------------%c---------%c------------%c---------\n",
	      cold, cold, cold, cold);
      for(i=0; i<nreg[BKG]; i++){
	tcnts += cnts[v][BKG][i];
	tarea += area[BKG][i];
	/* get correctly precisioned format statement */
	switch(dog){
	case 0:
	  fmt = "%4d%c%12.3f%c%9d%c%12.3f%c%9d\n";
	  break;
	case 1:
	  fmt = "%4d%c%12.3g%c%9d%c%12.3g%c%9d\n";
	  break;
	case 2:
	  fmt = "%4d%c%.14g%c%9d%c%.14g%c%9d\n";
	  break;
	}
	fprintf(stdout, fmt, i+1, cold,
		cnts[v][BKG][i], cold, area[BKG][i], cold,
		tcnts, cold, tarea);
      }
    } else{
      if( cold == '\t' ) fprintf(stdout, "\f");
      fprintf(stdout, "\n");
      if( filtstr[BKG] ){
	fprintf(stdout, "# background_region(s)\n");
	fprintf(stdout, "# %s\n\n", filtstr[BKG]);
      }
      fprintf(stdout, "# background_data\n");
      fprintf(stdout, " reg%c      counts%c   pixels", cold, cold);
      if( doexp & BCORR )
	fprintf(stdout, "%c  avg_exp", cold);
      fprintf(stdout, "\n");
      fprintf(stdout, "----%c------------%c---------", cold, cold);
      if( doexp & BCORR )
	fprintf(stdout, "%c---------", cold);
      fprintf(stdout, "\n");
      for(i=0; i<nreg[BKG]; i++){
	/* get correctly precisioned format statement */
	switch(dog){
	case 0:
	  fmt = "%4d%c%12.3f%c%9d";
	  break;
	case 1:
	  fmt = "%4d%c%12.3g%c%9d";
	  break;
	case 2:
	  fmt = "%4d%c%.14g%c%9d";
	  break;
	}
	fprintf(stdout, fmt, i+1, cold,
		cnts[v][BKG][i], cold, area[BKG][i]);
	if( doexp  & BCORR ){
	  /* get correctly precisioned format statement */
	  switch(dog){
	  case 0:
	    fmt = "%c%9.3f";
	    break;
	  case 1:
	    fmt = "%c%9.3g";
	    break;
	  case 2:
	    fmt = "%c%.14g";
	    break;
	  }
	  if( area[BKG][i] > 0 )
	    fprintf(stdout, fmt, cold, exp[BKG][i]/area[BKG][i]);
	  else
	    fprintf(stdout, fmt, cold, 0.0);
	}
	fprintf(stdout, "\n");
      }
    }
    break;
  }
  fprintf(stdout, "\n");
  fflush(stdout);

  /* process the next interval, if necessary */
  if( ++v < nintv ){
    fprintf(stdout, "\014\n");
    goto intvagain;
  }

  /* cleanup */
  for(i=0; i<nintv; i++){
    if( bncnts[i] ) xfree(bncnts[i]);
    if( bnerr[i] )  xfree(bnerr[i]);
    if( bscnts[i] ) xfree(bscnts[i]);
    if( bserr[i] )  xfree(bserr[i]);
    for(j=0; j<2; j++){
      if( cnts[i][j] )     xfree(cnts[i][j]);
      if( savecnts[i][j] ) xfree(savecnts[i][j]);
    }
    if( intvs[i] )  xfree(intvs[i]);
  }
  for(i=0; i<2; i++){
    if( masks[i] )    xfree(masks[i]);
    if( area[i] )     xfree(area[i]);
    if( exp[i] )      xfree(exp[i]);
    if( savearea[i] ) xfree(savearea[i]);
    if( saveexp[i] )  xfree(saveexp[i]);
    if( filtstr[i] )  xfree(filtstr[i]);
    if( valname[i] )  xfree(valname[i]);
  }
  if( radang ) xfree(radang);
  for(i=0; i<4; i++){
    if( name[i] ){
      xfree(name[i]);
      if( fun[i] )  FunClose(fun[i]);
    }
  }
  
  return(0);
}
