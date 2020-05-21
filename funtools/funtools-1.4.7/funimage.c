/*
 *	Copyright (c) 1999-2005 Smithsonian Astrophysical Observatory
 */

#include <funtoolsP.h>

extern char *optarg;
extern int optind;

#define FORCE_IMAGE -1

/* list definitions */
#define X_DEFAULT          "X"
#define Y_DEFAULT          "Y"
#define VAL_DEFAULT        "VAL"
#define COL1_DEFAULT       "COL1"
#define COL2_DEFAULT       "COL2"
#define COL3_DEFAULT       "COL3"

/* list event structure */
typedef struct evstruct{
  double x, y, val;
} *Ev, EvRec;

/* list structure */
typedef struct List {
  Fun fun;
  char *colname[3];
  double tlmin[2];
  double tlmax[2];
  double binsiz[2]; 
  int dim[2];
  double tscale[2]; 
  double tzero[2];
  int scaled[2];
} List;

#ifdef ANSI_FUNC
static void
doimproj(int dim, int bitpix, void *buf, int i, int j, void *pbuf, int idx)
#else
static void
doimproj(dim, bitpix, buf, i, j, pbuf, idx)
     int dim;
     int bitpix;
     void *buf;
     int i;
     int j;
     void *pbuf;
     int idx;
#endif
{
  switch(bitpix/FT_WORDLEN){
  case TY_CHAR:
    ((unsigned char *)pbuf)[idx] += ((unsigned char *)buf)[(j*dim)+i];
    break;
  case TY_USHORT:
    ((unsigned short *)pbuf)[idx] += ((unsigned short *)buf)[(j*dim)+i];
    break;
  case TY_SHORT:
    ((short *)pbuf)[idx] += ((short *)buf)[(j*dim)+i];
    break;
  case TY_INT:
    ((int *)pbuf)[idx] += ((int *)buf)[(j*dim)+i];
    break;
  case TY_LONG:
#if HAVE_LONG_LONG == 0
    gerror(stderr, 
	   "64-bit data support not built (long long not available)\n");
#endif
    ((longlong *)pbuf)[idx] += ((longlong *)buf)[(j*dim)+i];
    break;
  case TY_FLOAT:
    ((float *)pbuf)[idx] += ((float *)buf)[(j*dim)+i];
    break;
  case TY_DOUBLE:
    ((double *)pbuf)[idx] += ((double *)buf)[(j*dim)+i];
    break;
  default:
    break;
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
  fprintf(stderr, "usage:\n");
  fprintf(stderr,
   "%s [-a] iname oname [bitpix=n[,bscale=false]]\n",
	  fname);
  fprintf(stderr,
  "%s -l [-a] iname oname xcol:xdims ycol:ydims vcol bitpix=n\n",
	  fname);
  fprintf(stderr, "optional switches:\n");
  fprintf(stderr, "  -a       # append to existing output file as an image extension\n");
  fprintf(stderr, "  -l       # input is a list file containing xcol, ycol, value\n");
  fprintf(stderr, "  -p [x|y] # project along x or y axis to create a 1D image\n");
  fprintf(stderr, "\n");
  fprintf(stderr, "Specify output image data type using bitpix=n, where n is:\n");
  fprintf(stderr, "   8      # unsigned char\n");
  fprintf(stderr, "  16      # short\n");
  fprintf(stderr, "  32      # int\n");
  fprintf(stderr, " -32      # float\n");
  fprintf(stderr, " -64      # double\n");
  fprintf(stderr, "(Defaults: same as input image, or 32 (int) for tables.)\n");
  fprintf(stderr, "\n");
  fprintf(stderr, "List format requires x, y column information of the form:\n");
  fprintf(stderr, "  name:dim               # values range from 1 to dim\n");
  fprintf(stderr, "  name:min:max           # values range from min to max\n");
  fprintf(stderr, "  name:min:max:binsiz    # dimensions scaled by binsize\n");
  fprintf(stderr, "\n(version: %s)\n", FUN_VERSION);
  exit(1);
}

#ifdef ANSI_FUNC
static List *
ColumnInfo(Fun fun, char *colstr[])
#else
static List *
ColumnInfo(fun, colstr)
     Fun fun;
     char *colstr[];
#endif
{
  int i;
  int ip;
  char tbuf[SZ_LINE];
  List *list;

  /* allocate list struct */
  if( !(list = (List *)xcalloc(sizeof(List), 1)) ){
    gerror(stderr, "can't allocate list record\n");
    return NULL;
  }

  /* process column info */
  newdtable(":");
  for(i=0; i<3; i++){
    ip = 0;
    /* column name */
    if( !*colstr[i] || (*colstr[i] == ':') || !word(colstr[i], tbuf, &ip) ){
      switch(i){
      case 0:
	if(FunColumnLookup(fun, COL1_DEFAULT, 0, 
			   NULL, NULL, NULL, NULL, NULL, NULL))
	  strcpy(tbuf, COL1_DEFAULT);
	else{
	  strcpy(tbuf, X_DEFAULT);
	}
	break;
      case 1:
	if(FunColumnLookup(fun, COL2_DEFAULT, 0, 
			   NULL, NULL, NULL, NULL, NULL, NULL))
	  strcpy(tbuf, COL2_DEFAULT);
	else{
	  strcpy(tbuf, Y_DEFAULT);
	}
	break;
      case 2:
	if(FunColumnLookup(fun, COL3_DEFAULT, 0, 
			   NULL, NULL, NULL, NULL, NULL, NULL))
	  strcpy(tbuf, COL3_DEFAULT);
	else{
	  strcpy(tbuf, VAL_DEFAULT);
	}
	break;
      }
    }
    list->colname[i] = xstrdup(tbuf);

    /* back up to the previous ':' as required by column dimension routine */
    if( ip && (lastdelim() == ':') ) ip--;
    /* column dimensions */
    if( colstr[i][ip] != '\0' ){
      switch(i){
      case 0:
      case 1:
	_FunColumnDims(&colstr[i][ip], 'I', 
		       &list->tlmin[i], &list->tlmax[i],
		       &list->binsiz[i], &list->dim[i],
		       &list->tscale[i], &list->tzero[i], &list->scaled[i]);
	if( list->tlmin[i] && list->tlmax[i] )	
	  list->dim[i] = (int)tldim(list->tlmin[i], list->tlmax[i],
				    list->binsiz[i], 'I');
	else
	  list->dim[i] = 0;
	break;
      case 2:
	break;
      }
    }
    /* must have dimesion info for x and y */
    else{
      switch(i){
      case 0:
      case 1:
	gerror(stderr, "dimension specification missing for %s\n", colstr[i]);
	return NULL;
      case 2:
	break;
      }
    }
  }
  freedtable();

  /* set up to read the specified columns */
  FunColumnSelect(fun, sizeof(EvRec), NULL,
		  list->colname[0],  "D", "r", FUN_OFFSET(Ev, x),
		  list->colname[1],  "D", "r", FUN_OFFSET(Ev, y),
		  list->colname[2],  "D", "r", FUN_OFFSET(Ev, val),
		  NULL);

  /* return list */
  return list;
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
  int args;
  int dim1, dim2;
  int idx;
  int dim=0;
  int maxidx=0;
  int type=0;
  int bitpix=0;
  int doscale=1;
  int doproj=0;
  char *s, *t;
  char *mode=NULL;
  char *tmode=NULL;
  char *omode="w";
  char *iname=NULL;
  char *oname=NULL;
  char *colstr[3];
  char *buf=NULL;
  char *pbuf=NULL;
  char tbuf[SZ_LINE];
  char newname[SZ_LINE];
  Fun fun, fun2;

  /* list variables */
  int dolist=0;
  int ix, iy;
  int got;
  List *list=NULL;
  EvRec evrec;

  /* exit on gio errors */
  if( !getenv("GERROR")  )
    setgerror(2);

  /* we want the args in the same order in which they arrived, and
     gnu getopt sometimes changes things without this */
  putenv("POSIXLY_CORRECT=true");

  /* process switch arguments */
  while ((c = getopt(argc, argv, "ailp:")) != -1){
    switch(c){
    case 'a':
      omode = "a";
    case 'i':
      type = FORCE_IMAGE;
      break;
    case 'l':
      dolist = 1;
      break;
    case 'p':
      doproj = *optarg;
      break;
    }
  }

  /* sanity checks */
  if( doproj ){
    if( dolist ) gerror(stderr, "-p and -l are mutually exclusive\n");
    switch(doproj){
    case 'x':
    case 'y':
      break;
    case 'X':
    case 'Y':
      doproj = tolower(doproj);
      break;
    default:
      gerror(stderr, "proj specifier must be 'x' or 'y'\n");
      break;
    }
  }

  /* process arguments */
  args = argc - optind;
  if( args < 2 ) usage(argv[0]);
  iname = argv[optind+0];
  oname = argv[optind+1];
  if( dolist ){
    if( args !=  6 ) usage(argv[0]);
    colstr[0] = argv[optind+2];
    colstr[1] = argv[optind+3];
    colstr[2] = argv[optind+4];
    mode = xstrdup(argv[optind+5]);
  }
  else{
    if( args > 2 ) mode = xstrdup(argv[optind+2]);
  }

  /* check for $NEW and rewrite name as /dev/null[TEXT(),...] */
  if( !strncmp(iname, "$NEW[", 5 ) || !strncmp(iname, "$MASK[", 6 )  ){
    /* for masks, we add to the mode */
    if( !strncmp(iname, "$MASK[", 6 )  ){
      if( mode && *mode ){
	snprintf(tbuf, SZ_LINE-1, "%s,mask=all", mode);
	xfree(mode);
	mode = xstrdup(tbuf);
      }
      else{
	mode = xstrdup("mask=all,bitpix=8");
      }
    }
    /* re-write file name as an empty text table */
    memset(newname, 0, SZ_LINE);
    strncpy(newname, "/dev/null[TEXT(x:", SZ_LINE-1);
    s = strchr(iname, '[')+1;
    t = strchr(s, ',');
    strncat(newname, s, t-s);
    strncat(newname, ",y:", SZ_LINE-strlen(newname));
    if (t != NULL) {
      s = ++t;
      t = strchr(s, ',');
      strncat(newname, s, t-s);
    }
    strncat(newname, "),", SZ_LINE-strlen(newname));
    if (t != NULL) {
	s = ++t;
	strncat(newname, s, SZ_LINE-strlen(newname));
    }
    iname = newname;
  }

  /* open the input FITS file */
  if( !(fun = FunOpen(iname, "rc", NULL)) ){
    gerror(stderr, "can't FunOpen input file (or find extension): %s\n",
	   iname);
  }

  /* open the output FITS image, preparing to copy input params */
  if( !(fun2 = FunOpen(oname, omode, fun)) ){
    gerror(stderr, "can't FunOpen output file: %s\n", oname);
  }

  /* list: read x, y, val from list file */
  if( dolist ){
    /* make sure bitpix=n is specified */
    tmode = xstrdup(mode);
    if( _FunKeyword(tmode, "bitpix", NULL, tbuf, SZ_LINE) ){
      bitpix = atoi(tbuf);
    }
    else{
      gerror(stderr, "missing bitpix specification: '%s'\n", mode);
    }
    if( tmode ) xfree(tmode);

    /* parse column string */
    if( !(list = ColumnInfo(fun, colstr)) ){
      gerror(stderr, "can't get column info\n");
    }

    /* allocate space for the image */
    if( list->dim[1] )
      maxidx = list->dim[0]*list->dim[1];
    else
      maxidx = list->dim[0];
    if( !(buf=(char *)xcalloc(maxidx, ft_sizeof(bitpix))) ){
      gerror(stderr, "can't allocate image buffer of size %d\n", maxidx);
    }

    /* process events */
    while( FunTableRowGet(fun, &evrec, 1, NULL, &got) && got){
      /* get x, y indices */
      ix = (int)((evrec.x - list->tlmin[0]) / list->binsiz[0]);
      if( list->dim[1] )
	iy = (int)((evrec.y - list->tlmin[1]) / list->binsiz[1]);
      else
	iy = 0;
      /* make sure this pixel is within the image */
      idx = iy*list->dim[0]+ix;
      if( (idx < 0) || (idx >= maxidx) ){
	gerror(stderr, 
	"indices (%d,%d) outside of image array (%d,%d) [tlmin problem?]\n",
	       ix, iy, list->dim[0], list->dim[1]);
      }
      /* add pixel value */
      switch(bitpix){
      case 8:
	((unsigned char *)buf)[idx] += (unsigned char)evrec.val;
	break;
      case 16:
	((short *)buf)[idx] += (short)evrec.val;
	break;
      case 32:
	((int *)buf)[idx] += (int)evrec.val;
	break;
      case -32:
	((float *)buf)[idx] += (float)evrec.val;
	break;
      case -64:
	((double *)buf)[idx] += evrec.val;
	break;
      }
    }
    /* write the output image, updating the FITS header from the orig file */
    if( !FunImagePut(fun2, buf, list->dim[0], list->dim[1], bitpix, NULL) ){
	gerror(stderr, "could not FunImagePut: %s\n", argv[2]);
    }
  }
  /* no list: bin input data into an image */
  else{
    /* get required information from funtools structure */
    FunInfoGet(fun, 
	       FUN_SECT_BITPIX, &bitpix,
	       FUN_SECT_DIM1, &dim1, FUN_SECT_DIM2, &dim2, 0);
    if( type != FORCE_IMAGE ) FunInfoGet(fun, FUN_TYPE, &type, 0);
    /* set dim2 to 1 for a 1D image */
    if( dim2 == 0 ){
      /* oops, can't project a 1D image */
      if( doproj )
	gerror(stderr, "can't project a 1D image\n");
      else
	dim2 = 1;
    }
    /* dimension of projected 1D image */
    if( doproj ){
      switch(doproj ){
      case 'x':
	dim = dim1;
	break;
      case 'y':
	dim = dim2;
	break;
      }
      /* allocate buffer for 1D projected image */
      pbuf = (char *)xcalloc(dim, ABS(bitpix)/FT_WORDLEN);
    }

    /* process specific type of data */
    switch(type){
    case FUN_IMAGE:
    case FUN_ARRAY:
      /* if input data is int */
      if( bitpix >= 0 ){
	/* start by assuming we don't want to apply bscale ... */
	doscale = 0;
	if( mode && *mode ){
	  tmode = xstrdup(mode);
	  /* but if output data is float, we will apply bscale */
	  if( _FunKeyword(tmode, "bitpix", NULL, tbuf, SZ_LINE) ){
	    if( (i=atoi(tbuf)) < 0 ){
	      /* apple bscale */
	      doscale=1;
	    }
	  }
	  if( tmode ) xfree(tmode);
	}
      }
      /* for float data, we apply bscale (won't actually happen) */
      else{
	doscale = 1;
      }
      if( !doscale ){
	if( mode && *mode ){
	  mode = xrealloc(mode, strlen(mode)+SZ_LINE);
	  strcat(mode, ",bscale=false");
	}
	else{
	  mode = xstrdup("bscale=false");
	}
      }
      switch(doproj ){
      case 0:
	buf = NULL;
	for(j=1; j<=dim2; j++){
	  /* extract and bin 1 row of the data section into an image buffer */
	  if( !(buf = FunImageRowGet(fun, buf, j, j, mode)) )
	    gerror(stderr, "can't FunImageRowGet: %s\n", iname);
	  /* write output image, updating the FITS header from the orig file */
	  if( !FunImageRowPut(fun2, buf, j, j, 0, 0, 0, NULL) )
	    gerror(stderr, "can't FunImageRowPut: %s\n", oname);
	}
	break;
      case 'x':
      case 'y':
	buf = NULL;
	for(j=0; j<dim2; j++){
	  /* extract and bin 1 row of the data section into an image buffer */
	  if( !(buf = FunImageRowGet(fun, buf, j+1, j+1, mode)) )
	    gerror(stderr, "can't FunImageRowGet: %s\n", iname);
	  /* project each pixel of each line */
	  for(i=0; i<dim1; i++){
	    idx = (doproj == 'x') ? i : j;
	    doimproj(dim, bitpix, (void *)buf, i, 0, (void *)pbuf, idx);
	  }
	}
	/* write output image, updating the FITS header from the orig file */
	if( !FunImagePut(fun2, pbuf, dim, 0, bitpix, NULL) )
	  gerror(stderr, "can't FunImagePut: %s\n", oname);
	break;
      }
      break;
      
    case FUN_TABLE:
    case FUN_EVENTS:
    case FORCE_IMAGE:
      switch(doproj ){
      case 0:
	/* extract and bin the data section into an image buffer */
	if( !(buf = FunImageGet(fun, NULL, mode)) )
	  gerror(stderr, "can't FunImageGet: %s\n", iname);
	/* write output image, updating the FITS header from the orig file */
	if( !FunImagePut(fun2, buf, 0, 0, 0, NULL) )
	  gerror(stderr, "can't FunImagePut: %s\n", oname);
	break;
      case 'x':
      case 'y':
	/* extract and bin the data section into an image buffer */
	if( !(buf = FunImageGet(fun, NULL, mode)) )
	  gerror(stderr, "can't FunImageGet: %s\n", iname);
	/* project each pixel of each line */
	for(j=0; j<dim2; j++){
	  for(i=0; i<dim1; i++){
	    idx = (doproj == 'x') ? i : j;
	    doimproj(dim, bitpix, (void *)buf, i, j, (void *)pbuf, idx);
	  }
	}
	/* write output image, updating the FITS header from the orig file */
	if( !FunImagePut(fun2, pbuf, dim, 0, bitpix, NULL) )
	  gerror(stderr, "can't FunImagePut: %s\n", oname);
	break;
      }
      break;

    default:
      gerror(stderr, "internal error: unknown type\n");
      break;
      }
  }

  /* we can explicitly flush remaining extensions that need copying ... */
  FunFlush(fun2, "copy=remaining");

  /* ... since we already flushed, we can close files in any order */
  FunClose(fun);
  FunClose(fun2);

  /* free up space */
  if( dolist ){
    /* free up memory */
    for(i=0; i<3; i++){
      if( list->colname[i] ) xfree(list->colname[i]);
    }
    xfree(list);
  }
  if( buf )  xfree(buf);
  if( pbuf ) xfree(pbuf);
  if( mode ) xfree(mode);

  return(0);
}
