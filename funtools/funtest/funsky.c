/*
 *	Copyright (c) 2005 Smithsonian Astrophysical Observatory
 */

/* gcc -g -o funsky funsky.c -I $HOME/include -L$HOME/lib -lfuntools
   -ldl -lnsl -lsocket -lm
 */

#include <funtoolsP.h>
#include <strtod.h>

extern char *optarg;
extern int optind;

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

#ifdef ANSI_FUNC
void usage(char *s)
#else
void usage(s)
     char *s;
#endif
{
  fprintf(stderr, "usage: [switches] %s fname[ext]\n", s);
  fprintf(stderr, "\n");
  fprintf(stderr, "switches:\n");
  fprintf(stderr, "-d\t# always use integer tlmin conversion (as ds9 does)\n");
  fprintf(stderr, "-r\t# convert x,y to RA,Dec (default: convert RA,Dec to x,y)\n");
  fprintf(stderr, "-v\t# display input values also (default: display output only)\n");
  fprintf(stderr, "-T\t# output display in rdb format\n");
  fprintf(stderr, "\n");
  fprintf(stderr, "Pairs of space- or comma-delimited numeric values are input to stdin.\n");
  fprintf(stderr, "By default, input RA and Dec are converted into x and y. (Use the\n");
  fprintf(stderr, "-r to convert from x,y to RA,Dec.) When RA and Dec are input, \n");
  fprintf(stderr, "floating point numbers are degrees, but h:m:s, d:m:s also are valid.\n");
  fprintf(stderr, "The coord. system is taken from the header (might differ from ds9).\n");
  fprintf(stderr, "NB: x,y values are physical coords for event data, image coords\n");
  fprintf(stderr, "for image data.\n");
  fprintf(stderr, "\n");
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
  int ip;
  int type;
  int offscl;
  int verbose=0;
  int dods9=0;
  int skytopix=1;
  int tltyp[2];
  double dval1, dval2, dval3, dval4;
  double tlmin[2];
  double binsiz[2];
  char sp=' ';
  char iname[SZ_LINE];
  char lbuf[SZ_LINE];
  char tbuf1[SZ_LINE];
  char tbuf2[SZ_LINE];
  char *s0, *s1;
  Fun fun;
  void *wcs;

  /* exit on gio errors */
  if( !getenv("GERROR")  )
    setgerror(2);

  /* we want the args in the same order in which they arrived, and
     gnu getopt sometimes changes things without this */
  putenv("POSIXLY_CORRECT=true");

  /* process switch arguments */
  while ((c = getopt(argc, argv, "drvT")) != -1){
    switch(c){
    case 'd':
      dods9=1;
      break;
    case 'r':
      skytopix=0;
      break;
    case 'v':
      verbose=1;
      break;
    case 'T':
      sp = '\t';
      break;
    default:
      break;
    }
  }

  /* check for required arguments */
  if( (argc - optind) != 1 ){
    usage(argv[0]);
  }

  /* input file name */
  strcpy(iname, argv[optind+0]);

  /* open input file */
  if( !(fun = FunOpen(iname, "r", NULL)) ){
    gerror(stderr, "can't FunOpen input file (or find extension): %s\n", iname);
  }

  /* get wcs info */
  FunInfoGet(fun, FUN_WCS, &wcs, FUN_TYPE, &type, 0);

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

  if( dods9 ){
    tltyp[0] = 'J';
    tltyp[1] = 'J';
  }

  if( !iswcs(wcs) ){
    gerror(stderr, "could not load WCS information from header: %s\n", iname);
  }

  /* output header if necessary */
  if( sp == '\t' ){
    if( skytopix ){
      if( verbose ) fprintf(stdout, "          RA\t         Dec\t");
      fprintf(stdout, "           X\t           Y\n");
      if( verbose ) fprintf(stdout, "------------\t------------\t");
      fprintf(stdout, "------------\t------------\n");
    }
    else{
      if( verbose ) fprintf(stdout, "           X\t           Y\t");
      fprintf(stdout, "          RA\t         Dec\n");
      if( verbose ) fprintf(stdout, "------------\t------------\t");
      fprintf(stdout, "------------\t------------\n");
    }
    fflush(stdout);
  }

  /* read lines, split into 2 args, convert, and output */
  newdtable(",");
  while( fgets(lbuf, SZ_LINE, stdin) ){
    ip = 0;
    if( !word(lbuf, tbuf1, &ip) || !word(lbuf, tbuf2, &ip) ) break;
    dval1 = SAOstrtod(tbuf1,NULL);
    if( (SAOdtype !=0) && (SAOdtype != '.') && (SAOdtype != 'd') ){
      dval1 = h2d(dval1);
    }
    dval2 = SAOstrtod(tbuf2,NULL);
    if( skytopix ){
      wcs2pix(wcs, dval1, dval2, &dval3, &dval4, &offscl);
      if( verbose ) fprintf(stdout, "%12.6f%c%12.6f%c", dval1, sp, dval2, sp);
      switch(type){
      case FUN_IMAGE:
      case FUN_ARRAY:
	fprintf(stdout, "%12.2f%c%12.2f\n", dval3, sp, dval4);
	break;
      case FUN_TABLE:
      case FUN_EVENTS:
	dval3 = tli2p(dval3, tlmin[0], binsiz[0], tltyp[0]);
	dval4 = tli2p(dval4, tlmin[1], binsiz[1], tltyp[1]);
	fprintf(stdout, "%12.2f%c%12.2f\n", dval3, sp, dval4);
	break;
      default:
	gerror(stderr, "unknown FITS data type\n");
	break;
      }
      fflush(stdout);
    }
    else{
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
      pix2wcs(wcs, (double)dval1, (double)dval2, &dval3, &dval4);
      if( verbose ) fprintf(stdout, "%12.2f%c%12.2f%c", dval1, sp, dval2, sp);
      fprintf(stdout, "%12.6f%c%12.6f\n", dval3, sp, dval4);
      fflush(stdout);
    }
  }
  freedtable();

  /* close up shop */
  FunClose(fun);
  return(0);
}
