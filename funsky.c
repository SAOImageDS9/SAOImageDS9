/*
 *	Copyright (c) 2005 Smithsonian Astrophysical Observatory
 */

#include <math.h>
#include <funtoolsP.h>
#include <strtod.h>

extern char *optarg;
extern int optind;

#define RA_DEFAULT        "RA"
#define DEC_DEFAULT       "DEC"
#define RA_DEFAULT_UNITS  "d"
#define DEC_DEFAULT_UNITS "d"

#define X_DEFAULT          "X"
#define Y_DEFAULT          "Y"
#define X_DEFAULT_UNITS    "h"
#define Y_DEFAULT_UNITS    "d"

#define COL1_DEFAULT       "COL1"
#define COL2_DEFAULT       "COL2"

#define X__PI   3.14159265358979323846
#define X_2PI   ( 2 * X__PI )
#define X_R2D   (X_2PI / 360.0)
#define X_R2H   (X_2PI /  24.0)
#define X_H2D   (360.0 /  24.0)

#define r2h(r)  ( (r) / X_R2H )
#define h2r(d)  ( (d) * X_R2H )
#define r2d(r)  ( (r) / X_R2D )
#define d2r(d)  ( (d) * X_R2D )
#define h2d(r)  ( (r) * X_H2D )
#define d2h(d)  ( (d) / X_H2D )

typedef struct evstruct{
  double val1, val2;
} *Ev, EvRec;

typedef struct List {
  Fun fun;
  char type[2];
  char *colname[2];
} List;

#ifdef ANSI_FUNC
static int
ColInfo(List *list, char *colstr[], int flag)
#else
static int
ColInfo(list, colstr, flag)
     List *list;
     char *colstr[];
     int flag;
#endif
{
  int i;
  int ip;
  char tbuf[SZ_LINE];

  newdtable(":");
  for(i=0; i<2; i++){
    ip = 0;
    /* column name */
    if( !*colstr[i] || (*colstr[i] == ':') || !word(colstr[i], tbuf, &ip) ){
      switch(i){
      case 0:
	if(FunColumnLookup(list->fun, COL1_DEFAULT, 0, 
			   NULL, NULL, NULL, NULL, NULL, NULL))
	  strcpy(tbuf, COL1_DEFAULT);
	else{
	  if( flag ){
	    strcpy(tbuf, RA_DEFAULT);
	  }
	  else{
	    strcpy(tbuf, X_DEFAULT);
	  }
	}
	break;
      case 1:
	if(FunColumnLookup(list->fun, COL2_DEFAULT, 0, 
			   NULL, NULL, NULL, NULL, NULL, NULL))
	  strcpy(tbuf, COL2_DEFAULT);
	else{
	  if( flag ){
	    strcpy(tbuf, DEC_DEFAULT);
	  }
	  else{
	    strcpy(tbuf, Y_DEFAULT);
	  }
	}
	break;
      }
    }
    list->colname[i] = xstrdup(tbuf);

    /* column units */
    if( !word(colstr[i], tbuf, &ip) ){
      switch(i){
      case 0:
	strcpy(tbuf, RA_DEFAULT_UNITS);
	break;
      case 1:
	strcpy(tbuf, DEC_DEFAULT_UNITS);
	break;
      }
    }
    list->type[i] = *tbuf;
  }
  freedtable();
  return 1;
}

#ifdef ANSI_FUNC
static void
CloseList(List *list)
#else
static void 
CloseList(list)
     List *list;
#endif
{
  int i;
  /* sanity check */
  if( !list ) return;
  if( list->fun ) FunClose(list->fun);
  /* free up memory */
  for(i=0; i<2; i++){
    if( list->colname[i] ) xfree(list->colname[i]);
  }
  xfree(list);
}

#ifdef ANSI_FUNC
static List *
OpenList(char *lname, char *pos1str, char *pos2str, int flag)
#else
static List *
OpenList(lname, pos1str, pos2str, flag)
     char *lname;
     char *pos1str;
     char *pos2str;
     int flag;
#endif
{
  char *colstr[2];
  List *list;

  /* allocate list struct */
  if( !(list = (List *)xcalloc(sizeof(List), 1)) ){
    gerror(stderr, "can't allocate list record\n");
    return NULL;
  }
  /* open list file, if necessary */
  if( !(list->fun = FunOpen(lname, "r", NULL)) ){
    CloseList(list);
    gerror(stderr, "can't FunOpen list file: %s\n", lname);
    return NULL;
  }
  /* get info on the specified columns */
  colstr[0] = pos1str;
  colstr[1] = pos2str;
  if( !ColInfo(list, colstr, flag) ){
    CloseList(list);
    gerror(stderr, "can't get column info for list: %s %s\n",
	   colstr[0], colstr[1]);
    return NULL;
  }
  /* set up to read the specified columns */
  FunColumnSelect(list->fun, sizeof(EvRec), NULL,
		  list->colname[0],  "D", "r", FUN_OFFSET(Ev, val1),
		  list->colname[1],  "D", "r", FUN_OFFSET(Ev, val2),
		  NULL);
  return list;
}

#ifdef ANSI_FUNC
static int 
NextFromList(List *list, double *dval1, double *dval2, int flag)
#else
static int
NextFromList(list, dval1, dval2, flag)
     List *list;
     double *dval1;
     double *dval2;
     int flag;
#endif
{
  int got;
  EvRec evrec;

  /* sanity check */
  if( !list ) return 0;

  /* read next line from table */
  if( !FunTableRowGet(list->fun, &evrec, 1, NULL, &got) || !got)
    return 0;

  /* non-zero flag means we have sky coords and need degrees */
  if( flag ){
    /* perform unit conversion -- wcslib requires degrees */
    switch( list->type[0] ) {
    case 'h':
      *dval1 = h2d(evrec.val1);
      break;
    case 'r':
      *dval1 = r2d(evrec.val1);
      break;
    case 'd':
      *dval1 = evrec.val1;
      break;
    }
    switch( list->type[1] ) {
    case 'h':
      *dval2 = h2d(evrec.val2);
      break;
    case 'r':
      *dval2 = r2d(evrec.val2);
      break;
    case 'd':
      *dval2 = evrec.val2;
      break;
    }
  }
  /* image coords -- leave alone */
  else{
    *dval1 = evrec.val1;
    *dval2 = evrec.val2;
  }
  /* got a row */
  return 1;
}

#ifdef ANSI_FUNC
static void
usage(char *fname)
#else
static void
usage(fname)
     char *fname;
#endif
{
  fprintf(stderr, "usage:\n");
  fprintf(stderr, "%s iname[ext]\t\t\t# RA,Dec (deg) or image pix from stdin\n", fname);
  fprintf(stderr, "%s iname[ext] [lname]\t\t# RA,Dec (deg) or image pix from list\n", fname);
  fprintf(stderr, "%s iname[ext] [col1] [col2]\t# named cols:units from stdin\n", fname);
  fprintf(stderr, "%s iname[ext] [lname] [col1] [col2] # named cols:units from list\n", fname);
  fprintf(stderr, "\n");
  fprintf(stderr, "optional switches:\n");
  fprintf(stderr, "-d\t# always use integer tlmin conversion (as ds9 does)\n");
  fprintf(stderr, "-r\t# convert x,y to RA,Dec (default: convert RA,Dec to x,y)\n");
  fprintf(stderr, "-v\t# display input values also (default: display output only)\n");
  fprintf(stderr, "-o\t# include offset from the nominal target position (in arcsec)\n");
  fprintf(stderr, "-T\t# output display in rdb format (w/header,tab delimiters)\n");
  fprintf(stderr, "\n");
  fprintf(stderr, "The coord. system is taken from the header (might differ from ds9).\n");
  fprintf(stderr, "By default, input RA and Dec are converted into x and y (use the\n");
  fprintf(stderr, "-r to convert from x,y to RA,Dec.) Output x,y values are physical\n");
  fprintf(stderr, "coords for event data, image coords for image data.\n");
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
  int i;
  int type;
  int offscl;
  int args;
  int got;
  int ioff=0;
  int verbose=0;
  int offaxis=0;
  int dods9=0;
  int dotab=0;
  int sky2im=1;
  int tltyp[2];
  double dval1=0.0, dval2=0.0, dval3=0.0, dval4=0.0;
  double ra_target=0.0, dec_target=0.0, x_target=0.0, y_target=0.0;
  double off_axis=0.0;
  double tlmin[2];
  double binsiz[2];
  double zero=0.0;
  char sp=' ';
  char iname[SZ_LINE];
  char lname[SZ_LINE];
  char pos1str[SZ_LINE];
  char pos2str[SZ_LINE];
  char *s0, *s1;
  Fun fun=NULL;
  List *list=NULL;
  void *wcs=NULL;

  /* exit on gio errors */
  if( !getenv("GERROR")  )
    setgerror(2);

  /* we want the args in the same order in which they arrived, and
     gnu getopt sometimes changes things without this */
  putenv("POSIXLY_CORRECT=true");

  /* process switch arguments */
  while ((c = getopt(argc, argv, "drtoTv")) != -1){
    switch(c){
    case 'd':
      dods9=1;
      break;
    case 'r':
      sky2im=0;
      break;
    case 'o':
      offaxis=1;
      break;
    case 'v':
      verbose=1;
      break;
    case 't':
      dotab = 1;
      break;
    case 'T':
      sp = '\t';
      dotab = 1;
      break;
    default:
      break;
    }
  }

  /* check for required arguments */
  args = argc - optind;
  switch(args){
  case 1:
    /* first argument is input file name containing WCS */
    strncpy(iname, argv[optind+ioff++], SZ_LINE-1);
    /* read positions from stdin */
    strncpy(lname, "stdin", SZ_LINE-1);
    /* using default columns and units */
    *pos1str = '\0';
    *pos2str = '\0';
    break;
  case 2:
    /* first argument is input file name containing WCS */
    strncpy(iname, argv[optind+ioff++], SZ_LINE-1);
    /* read positions from list file */
    strncpy(lname,  argv[optind+ioff++], SZ_LINE-1);
    /* using default columns and units */
    *pos1str = '\0';
    *pos2str = '\0';
    break;
  case 3:
    /* first argument is input file name containing WCS */
    strncpy(iname, argv[optind+ioff++], SZ_LINE-1);
    /* read positions from stdin */
    strncpy(lname, "stdin", SZ_LINE-1);
    /* using specified columns and units */
    strncpy(pos1str,  argv[optind+ioff++], SZ_LINE-1);
    strncpy(pos2str, argv[optind+ioff++], SZ_LINE-1);
    break;
  case 4:
    /* first argument is input file name containing WCS */
    strncpy(iname, argv[optind+ioff++], SZ_LINE-1);
    /* read positions from list file */
    strncpy(lname,  argv[optind+ioff++], SZ_LINE-1);
    /* using specified columns and units */
    strncpy(pos1str,  argv[optind+ioff++], SZ_LINE-1);
    strncpy(pos2str, argv[optind+ioff++], SZ_LINE-1);
    break;
  default:
    usage(argv[0]);
    break;
  }

  /* open input file */
  if( !(fun = FunOpen(iname, "r", NULL)) ){
    gerror(stderr, "can't FunOpen input file (or find extension): %s\n", iname);
  }

  /* if offaxis is set, read the aimpoint information from the header */
  /* This will only work for Chandra Style files */
  if( (offaxis) && (sky2im) ) {
    ra_target = FunParamGetd(fun, "RA_TARG ", 1, -1.0, &got);
    dec_target = FunParamGetd(fun, "DEC_TARG", 1, -2.0, &got);
    if( (ra_target == -1.0) || (dec_target == -2.0) ) {
      gerror(stderr,  "no aim point information in header: %s\n", iname);
    }
  }


  /* make sure we have wcs info */
  FunInfoGet(fun, FUN_WCS, &wcs, FUN_TYPE, &type, 0);
  if( !iswcs(wcs) ){
    gerror(stderr, "could not load WCS information from header: %s\n", iname);
  }

  /* open list to read positions from somewhere (list or stdin) */
  if( !(list=OpenList(lname, pos1str, pos2str, sky2im)) ){
    gerror(stderr, "can't FunOpen list file: %s\n", lname);
  }
  
  /* for tables, we need some extra column info */
  switch(type){
  case FUN_TABLE:
  case FUN_EVENTS:
    s0 = fun->header->table->col[fun->bin[0]].name;
    s1 = fun->header->table->col[fun->bin[1]].name;
    if( s0 ){
      FunColumnLookup(fun,  s0, 0, NULL, &tltyp[0], NULL, NULL, NULL, NULL);
      FunColumnLookup2(fun, s0, 0, &tlmin[0], NULL, &binsiz[0], NULL, NULL);
    }
    else{
      tlmin[0] = 0;
      binsiz[0] = 0;
      tltyp[0] = 'I';
    }
    if( s1 ){
      FunColumnLookup(fun,  s1, 0, NULL, &tltyp[1], NULL, NULL, NULL, NULL);
      FunColumnLookup2(fun, s1, 0, &tlmin[1], NULL, &binsiz[1], NULL, NULL);
    }
    else{
      tlmin[1] = 0;
      binsiz[1] = 0;
      tltyp[1] = 'I';
    }
    break;
  default:
    break;
  }

  /* ds9-style processing requires special treatment */
  if( dods9 ){
    tltyp[0] = 'J';
    tltyp[1] = 'J';
  }

  /* output header if necessary */
  if( dotab ){
    if( verbose ){
      fprintf(stdout, "# IFILE = %s\n", iname);
    }
    if( (sky2im) && (!offaxis) ){
      if( verbose ){
	for(i=0; i<2; i++){
	  fprintf(stdout, "# ICOL%d = %s\n", i+1, list->colname[i]);
	}
	for(i=0; i<2; i++){
	  fprintf(stdout, "# IUNITS%d = %c\n", i+1, list->type[i]);
	}
	fprintf(stdout, "# OCOL1 = X\n");
	fprintf(stdout, "# OCOL2 = Y\n");
	fprintf(stdout, "\n");
	fprintf(stdout, "%12.12s%c%12.12s%c", 
		list->colname[0], sp, list->colname[1], sp);
      }
      fprintf(stdout, "%12.12s%c%12.12s\n", "X",sp,"Y");
      if( verbose ) fprintf(stdout, "------------%c------------%c", sp, sp);
      fprintf(stdout, "------------%c------------\n", sp);
    } else if( (sky2im) && (offaxis) ){
      if( verbose ){
	for(i=0; i<2; i++){
	  fprintf(stdout, "# ICOL%d = %s\n", i+1, list->colname[i]);
	}
	for(i=0; i<2; i++){
	  fprintf(stdout, "# IUNITS%d = %c\n", i+1, list->type[i]);
	}
	fprintf(stdout, "# OCOL1 = X\n");
	fprintf(stdout, "# OCOL2 = Y\n");
	fprintf(stdout, "# OFF_AXIS = OFF_AXIS\n");
	fprintf(stdout, "\n");
	fprintf(stdout, "%12.12s%c%12.12s%c", 
		list->colname[0], sp, list->colname[1], sp);
      }
      fprintf(stdout, "%12.12s%c%12.12s%c%12.12s\n", "X",sp,"Y",sp,"OFF_AXIS");
      if( verbose ) fprintf(stdout, "------------%c------------%c", sp, sp);
      fprintf(stdout, "------------%c------------%c------------\n", sp, sp);
    }
    else{
      if( verbose ){
	for(i=0; i<2; i++){
	  fprintf(stdout, "# ICOL%d = %s\n", i+1, list->colname[i]);
	}
	fprintf(stdout, "# OCOL1 = RA\n");
	fprintf(stdout, "# OCOL2 = DEC\n");
	for(i=0; i<2; i++){
	  fprintf(stdout, "# OUNITS%d = %c\n", i+1, list->type[i]);
	}
	fprintf(stdout, "\n");
	if( verbose ) fprintf(stdout, "%12.12s%c%12.12s%c", 
			      list->colname[0], sp, list->colname[1], sp);
      }
      fprintf(stdout, "          RA%c         DEC\n", sp);
      if( verbose ) fprintf(stdout, "------------%c------------%c", sp, sp);
      fprintf(stdout, "------------%c------------\n", sp);
    }
    fflush(stdout);
  }

  /* if offaxis requested (and sky2img) */
  if( (sky2im) && (offaxis) ){
    /* convert the aim point to image pixels */
    wcs2pix(wcs, ra_target, dec_target, &dval3, &dval4, &offscl);
    if( verbose) {
      fprintf(stdout, "%12.6f%c%12.6f%c", ra_target, sp, dec_target, sp);
    }
    switch(type){
    case FUN_IMAGE:
    case FUN_ARRAY:
      x_target = dval3;
      y_target = dval4;
      break;
    case FUN_TABLE:
    case FUN_EVENTS:
      x_target = tli2p(dval3, tlmin[0], binsiz[0], tltyp[0]);
      y_target = tli2p(dval4, tlmin[1], binsiz[1], tltyp[1]);
      break;
    default:
      gerror(stderr, "unknown FITS data type\n");
      break;
    }
    if( verbose) {
      fprintf(stdout, "%12.2f%c%12.2f%c%10.3f\n", 
	      x_target, sp, y_target, sp, zero);
    }
    fflush(stdout);
  }

  /* get position values, convert, and output */
  while( NextFromList(list, &dval1, &dval2, sky2im) ){
    /* perform the required conversion */
    if( sky2im ){
      /* convert sky coordinates to image pixels */
      wcs2pix(wcs, dval1, dval2, &dval3, &dval4, &offscl);
      if( verbose ) fprintf(stdout, "%12.6f%c%12.6f%c", dval1, sp, dval2, sp);
      switch(type){
      case FUN_IMAGE:
      case FUN_ARRAY:
	fprintf(stdout, "%12.2f%c%12.2f%c", dval3, sp, dval4, sp);
	break;
      case FUN_TABLE:
      case FUN_EVENTS:
	dval3 = tli2p(dval3, tlmin[0], binsiz[0], tltyp[0]);
	dval4 = tli2p(dval4, tlmin[1], binsiz[1], tltyp[1]);
	fprintf(stdout, "%12.2f%c%12.2f%c", dval3, sp, dval4, sp);
	break;
      default:
	gerror(stderr, "unknown FITS data type\n");
	break;
      }
      if( offaxis ) {
	off_axis = 0.5*sqrt( (x_target - dval3)*(x_target - dval3) +
                             (y_target - dval4)*(y_target - dval4) );
	fprintf(stdout, "%10.3f\n", off_axis);
      } else {
	fprintf(stdout, "\n");
      }

      fflush(stdout);
    } else {
      switch(type){
      case FUN_IMAGE:
      case FUN_ARRAY:
	break;
      case FUN_TABLE:
      case FUN_EVENTS:
	dval1 = tlp2i(dval1, tlmin[0], binsiz[0], tltyp[0]);
	dval2 = tlp2i(dval2, tlmin[1], binsiz[1], tltyp[1]);
	break;
      default:
	gerror(stderr, "unknown FITS data type\n");
	break;
      }
      /* convert image pixels to sky coordinates */
      pix2wcs(wcs, (double)dval1, (double)dval2, &dval3, &dval4);
      if( list ){
	/* units */
	switch( list->type[0] ) {
	case 'h':
	  dval3 = d2h(dval3);
	  break;
	case 'r':
	  dval3 = d2r(dval3);
	  break;
	case 'd':
	  break;
	}
	/* units */
	switch( list->type[1] ) {
	case 'h':
	  dval4 = d2h(dval4);
	  break;
	case 'r':
	  dval4 = d2r(dval4);
	  break;
	case 'd':
	  break;
	}
      }
      if( verbose ) fprintf(stdout, "%12.2f%c%12.2f%c", dval1, sp, dval2, sp);
      fprintf(stdout, "%12.6f%c%12.6f\n", dval3, sp, dval4);
      fflush(stdout);
    }
  }

  /* close up shop */
  FunClose(fun);
  CloseList(list);
  return(0);
}
