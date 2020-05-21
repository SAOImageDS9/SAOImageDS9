/*
 *	Copyright (c) 2004 Smithsonian Astrophysical Observatory
 */

/*
 * osx, linux:
 *   gcc -O2 -g -o funcen funcen.c -I $HOME/include -L$HOME/lib -lfuntools -lm
 *
 * solaris:
 *   gcc -O2 -g -o funcen funcen.c -I /soft/saord/include -L/soft/saord/lib \
 *   -lfuntools -lsocket -lnsl -ldl -lm
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <funtools.h>
#include <filter.h>
#include <swap.h>
#include <word.h>
#include <wcs.h>
#include <xalloc.h>

#define MAXROW 8192
#define MAXREGIONS 8192
#define WCSSYS "j2000"

extern char *optarg;
extern int optind;

/* single event (used in array of structs) */
typedef struct evstruct{
  int region;
  double x, y;
} *Ev, EvRec;

#ifdef ANSI_FUNC
static void
usage (char *fname)
#else
static void usage(fname)
     char *fname;
#endif
{
  fprintf(stderr,
         "usage: %s <switches> eventfile region(s)\n", fname);
  fprintf(stderr, "\n");
  fprintf(stderr, "optional switches:\n");
  fprintf(stderr, "  -i\t\t# use image filtering (default: event filtering)\n");
  fprintf(stderr, "  -n iter\t# max number of iterations (default: 0)\n");
  fprintf(stderr, "  -t tol\t# pixel tolerance distance (default: 1.0)\n");
  fprintf(stderr, "  -v [0,1,2,3]\t# output verbosity level (default: 0)\n");
  fprintf(stderr, "\n");
  fprintf(stderr,
  "The default output consists of one line for each region containing:\n");
  fprintf(stderr, "cnts x y [ra dec]. Use -v for prettier output and diagnostics.\n");
  fprintf(stderr,
  "Filter extensions are permitted as part of the file specification.\n");
  fprintf(stderr,
  "WCS info, if available, matches the coordinate system of the data file.\n");
  fprintf(stderr,
  "Input regions can be in physical or wcs coordinates (with coordsys),\n");
  fprintf(stderr,
  "Multiple regions and region files are supported but compound regions,\n");
  fprintf(stderr, "polygons, and points are not permitted.\n");
  fprintf(stderr, "\n");
  fprintf(stderr, "examples:\n");
  fprintf(stderr,
  "  %s -n 5 -t .1 snr.ev'[pha=1:3]' 'cir(512,512,10);cir 450 450 10'\n",
  fname);
  fprintf(stderr,
  "  %s -n 5 -t .1 snr.ev 'fk5;circle(345.292335 58.881625,78.458952\")'\n",
  fname);
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
  int iter;
  int i;
  int got;
  int ntol;
  int len;
  int dowcs=0;
  int doimfilt=0;
  int domem=0;
  int ip=0, wcnt=0, incl=0;
  int verbose=0;
  int args=0;
  int maxrow=MAXROW;
  int niter=0;
  int nregion=0;
  int type, endian, x0, x1, y0, y1, block, rawsize;
  int nev[MAXREGIONS+1];
  int tflag[MAXREGIONS+1];
  int *rbuf=NULL;
  int cfd;
  int clen=0;
  int tltyp[2];
  int bin[2];
  double tlmin[2];
  //  double tlmax[2];
  double binsiz[2];
  double xtot[MAXREGIONS+1], ytot[MAXREGIONS+1];
  double xavg[MAXREGIONS+1], yavg[MAXREGIONS+1];
  double ox[MAXREGIONS+1], oy[MAXREGIONS+1];
  double pxavg[MAXREGIONS+1], pyavg[MAXREGIONS+1];
  double xim, yim;
  double ra, dec;
  double ctolsq=0.0, tolsq=0.0;
  double tol=1.0;
  char *s;
  char *fname=NULL;
  char *iregion=NULL;
  char *cname=NULL;
  char *cregion=NULL;
  char *rawbuf=NULL;
  char *bincols=NULL;
  char *tmpdir=NULL;
  char prefix[SZ_LINE];
  char cregionfile[SZ_LINE];
  char mode[SZ_LINE];
  char lastd[2];
  char extn[3];
  char fname2[SZ_LINE];
  char coorsys[SZ_LINE];
  char wcssys[SZ_LINE];
  char tbuf[SZ_LINE];
  char tbuf2[SZ_LINE];
  char *regions[MAXREGIONS+1];
  struct stat statbuf;
  FILE *fd;
  Fun fun=NULL;
  Ev ev, ebuf=NULL;
  FITSHead header=NULL;
  Filter filter=NULL;
  struct WorldCoor *wcs=NULL;

  /* exit on gio errors */
  if( !getenv("GERROR")  )
    setgerror(2);

  /* we want the args in the same order in which they arrived, and
     gnu getopt sometimes changes things without this */
  putenv("POSIXLY_CORRECT=true");

  /* init wcssys to default */
  strncpy(wcssys, WCSSYS, SZ_LINE-1);

  /* process switch arguments */
  while ((c = getopt(argc, argv, "imn:t:v:w:")) != -1){
    switch(c){
    case 'i':
      doimfilt=1;
      break;
    case 'm':
      domem=1;
      break;
    case 'n':
      niter = atoi(optarg);
      if( niter < 0 ) niter = 0;
      break;
    case 't':
      tol = strtod(optarg, (char **)NULL);
      break;
    case 'v':
      verbose = atoi(optarg);
      if( verbose < 0 ) verbose = 0;
      break;
    case 'w':
      strncpy(wcssys, optarg, SZ_LINE-1);
      break;
    }
  }

  /* get maxrow, if user-specified */
  if( (s=(char *)getenv("FUN_MAXROW")) != NULL )
    maxrow = atoi(s);
  
  /* check for required arguments */
  args = argc - optind;
  if( args < 2 ) usage(argv[0]);
  /* arg 1: input file name */
  fname = argv[optind+0];
  /* arg 2: initial region */
  iregion = argv[optind+1];

  /* intialization: clear buffers */
  memset(regions, 0, sizeof(char *)*(MAXREGIONS+1));
  memset(ox, 0, sizeof(double)*(MAXREGIONS+1));
  memset(oy, 0, sizeof(double)*(MAXREGIONS+1));
  memset(pxavg, 0, sizeof(double)*(MAXREGIONS+1));
  memset(pyavg, 0, sizeof(double)*(MAXREGIONS+1));
  memset(tflag, 0, sizeof(int)*(MAXREGIONS+1));
  /* deal with the square of the tolerance */
  tolsq = tol*tol;
  /* no coords system yet */
  *coorsys = '\0';
  /* no temp region file yet */
  *cregionfile = '\0';

  /* get prefix for filter region temp file */
  if( !(tmpdir = (char *)getenv("FILTER_TMPDIR")) &&
      !(tmpdir = (char *)getenv("TMPDIR"))        &&
      !(tmpdir = (char *)getenv("TMP"))            )
    tmpdir = DEFAULT_FILTER_TMPDIR;
  if( !*tmpdir )
    tmpdir = ".";
  snprintf(prefix, SZ_LINE-1, "%s/funcen", tmpdir);

  /* if processing in memory, read all events now */
  if( domem ){
    /* open the data file once */
    if( !(fun = FunOpen(fname, "r", NULL)) ){
      gerror(stderr, "can't FunOpen file (or find extension): %s\n", fname);
    }
    /* make sure we have a table */
    FunInfoGet(fun, FUN_TYPE, &type, 0);
    if( type != FUN_TABLE ){
      gerror(stderr, 
	     "please specify a table (image support not yet implemented)\n");
    }
    /* for wcs output, get info to allow conversion of phyiscal to image */
    FunInfoGet(fun, FUN_BINOFFS, bin, 0);
    for(i=0; i<=1; i++){
      if( bin[i] >=0 ){
	FunColumnLookup(fun, NULL, bin[i], NULL,
			&(tltyp[i]), NULL, NULL, NULL, NULL);
	tlmin[i] = FunParamGetd(fun, "TLMIN", bin[i]+1, 0.0, &got);
	//	tlmax[i] = FunParamGetd(fun, "TLMAX", bin[i]+1, 0.0, &got);
	binsiz[i] = FunParamGetd(fun, "TDBIN", bin[i]+1, 1.0, &got);
      }
    }
    /* get row number that we need to read */
    maxrow = FunParamGeti(fun, "NAXIS", 2, -1, &got);
    if( (maxrow < 0) || !got ){
      gerror(stderr, "can't determine total number of events in table\n");
    }
    /* select binning columns */
    got = FunColumnSelect(fun, sizeof(EvRec), NULL,
			  "$x",      "D", "r", FUN_OFFSET(Ev, x),
			  "$y",      "D", "r", FUN_OFFSET(Ev, y),
			  "$region", "J", "r", FUN_OFFSET(Ev, region),
			  NULL);
    if( !(ebuf=(Ev)xmalloc(maxrow*sizeof(EvRec))) ){
      gerror(stderr, "can't allocate memory for all events in table\n");
    }
    ebuf = (Ev)FunTableRowGet(fun, ebuf, maxrow, NULL, &got);
    if( got != maxrow ){
      gerror(stderr,
	     "could not read all rows into memory (wanted %d, got %d)\n",
	     maxrow, got);
    }
  }

  /* if we are filtering internally, allocate the return buffer */
  if( domem || doimfilt ){
    if( !(rbuf = xmalloc(maxrow*sizeof(int))) ){
      gerror(stderr, "can't allocate memory\n");
    }
  }
  /* not filtering internally:, prepare the ifile for new filter each time */
  else{
    /* make up the beginning of the file name -- we will append the region */
    strncpy(fname2, fname, SZ_LINE-2);
    i = strlen(fname2)-1;
    /* if we have an extension, prepare to append to it */
    if( fname2[i] == ']' ){
      fname2[i] = '\0';
      strncat(fname2, ",(", SZ_LINE-1);
      strcpy(extn, ")]");
    }
    /* otherwise, start a new extension */
    else{
      strncat(fname2, "[", SZ_LINE-1);
      strcpy(extn, "]");
    }
  }

  /* check for region file and retrieve contents, if necessary */
  if( *iregion != '@' ){
    clen = SZ_LINE;
    if( !(cregion = xcalloc(clen, sizeof(char))) ){
      gerror(stderr, "can't allocate memory\n");
    }
    if( !(cname =   xcalloc(clen, sizeof(char))) ){
      gerror(stderr, "can't allocate memory\n");
    }
    strncpy(cregion, iregion, SZ_LINE-1);
  }
  /* yes, its a file */
  else{
    if( (fd=fopen(iregion+1, "r")) == NULL ){
      gerror(stderr, "can't open file: %s\n", iregion);
    }
    if( fstat(fileno(fd), &statbuf) <0 ){
      gerror(stderr, "can't get file information: %s\n", iregion);
    }
    clen = statbuf.st_size + SZ_LINE;
    if( !(cregion=(char *)xcalloc(clen, sizeof(char))) ){
      gerror(stderr, "can't allocate memory for region file: %s\n", iregion);
    }
    if( !(cname=(char *)xcalloc(clen, sizeof(char))) ){
      gerror(stderr, "can't allocate memory for region file: %s\n", iregion);
    }
    while( fgets(tbuf, SZ_LINE, fd) ){
      if( *tbuf == '#' || *tbuf == '\n' ) continue;
      if( (s=strchr(tbuf, '#')) ) *s = '\0';
      nowhite(tbuf, tbuf2);
      len = strlen(tbuf2);
      if( len > 1 ){
	strncat(cregion, tbuf2, SZ_LINE-1);
	if( tbuf2[len-1] != ';' )
	  strncat(cregion, ";", SZ_LINE-1);
      }
    }
    fclose(fd);
  }

  /* process each region to make up a region formatting string */
  newdtable(";\n,()");
  while( word(cregion, tbuf, &ip) ){
    lastd[0] = lastdelim();
    lastd[1] = '\0';
    switch(++wcnt){
    case 1:
      /* handle coorsys specially */
      if( strstr("j2000|fk5|icrs|b1950|fk4|galactic|ecliptic|linear|image|physical|amplifier|detector", tbuf) ){
	strncat(coorsys, tbuf, SZ_LINE-1);
	strncat(coorsys, lastd, SZ_LINE-1);
	wcnt--;
	continue;
      }
      if( strstr(tbuf, "pol") ){
	gerror(stderr, "polygons are not allowed\n");
      }
      if( strstr(tbuf, "poi") ){
	gerror(stderr, "points are not allowed\n");
      }
      if( *tbuf == '-' ){
	incl = 0;
      }
      else{
	incl = 1;
	nregion++;
      }
      if( !regions[nregion] ){
	if( !(regions[nregion] = xcalloc(SZ_LINE, sizeof(char))) ){
	  gerror(stderr, "can't allocate memory\n");
	}
      }
      if( *coorsys ){
	strncat(regions[nregion], coorsys, SZ_LINE-1);
      }
      strncat(regions[nregion], tbuf, SZ_LINE-1);
      break;
    case 2:
      if( incl ){
	ox[nregion] = strtod(tbuf, (char **)NULL);
	if( *coorsys && strncmp(coorsys, "physical", 8) )
	  strncat(regions[nregion], "%.2fp", SZ_LINE-1);
	else
	  strncat(regions[nregion], "%.2f", SZ_LINE-1);
      }
      else{
	strncat(regions[nregion], tbuf, SZ_LINE-1);
      }
      break;
    case 3:
      if( incl ){
	oy[nregion] = strtod(tbuf, (char **)NULL);
	if( *coorsys && strncmp(coorsys, "physical", 8) )
	  strncat(regions[nregion], "%.2fp", SZ_LINE-1);
	else
	  strncat(regions[nregion], "%.2f", SZ_LINE-1);
      }
      else{
	strncat(regions[nregion], tbuf, SZ_LINE-1);
      }
      break;
    default:
      strncat(regions[nregion], tbuf, SZ_LINE-1);
      break;
    }
    if( (lastd[0] != ';') && (lastd[0] != '\n') ){
      strncat(regions[nregion], lastd, SZ_LINE-1);
    }
    if( (lastd[0] == ';') || (lastd[0] == ')') || (lastd[0] == '\n') ){
      wcnt = 0;
      *coorsys = '\0';
    }
  }
  freedtable();

  /* iterate n times (or until tolerance is reached) to calculate centroid */
  for(iter=0; iter<niter; iter++){
    /* reset temp buffers */
    for(i=1; i<=nregion; i++){
      if( !tflag[i] ){
	xtot[i] = 0;
	ytot[i] = 0;
	xavg[i] = 0;
	yavg[i] = 0;
	nev[i] = 0;
      }
    }
    /* process file: re-open the input file, possibly with a new region */
    if( !domem ){
      /* append current region to filename root */
      if( !doimfilt ){
	/* if the region string is not long, we append it to the file name */
	if( (strlen(fname2) + strlen(cregion) + strlen(extn)) < (SZ_LINE-1) ){
	  snprintf(cname, clen-1, "%s%s%s", fname2, cregion, extn);
	}
	/* otherwise we have to use a temp file */
	else{
	  /* delete previous temp region file */
	  if( *cregionfile ) unlink(cregionfile);
	  /* get new temp file name */
	  if( !(cfd=mkrtemp(prefix, ".reg", cregionfile, SZ_LINE, 1)) ){
	    gerror(stderr, "can't open temp region file: %s\n", cregionfile);
	  }
	  else{
	    if( !write(cfd, cregion, strlen(cregion)) ){
	      gerror(stderr, "can't write temp file: %s\n", cregionfile);
	    }
	    close(cfd);
	  }
	  snprintf(cname, clen-1, "%s@%s%s", fname2, cregionfile, extn);
	}
      }
      /* but not for image-style filtering -- we filter the region manually */
      else{
	strncpy(cname, fname, clen-1);
      }
      if( verbose >= 2 ){
	if( iter > 0 ) fprintf(stdout, "\n");
	fprintf(stdout, "iter%d: %s\n", iter, cname);
      }
      /* make sure total data file name is less than SZ_LINE */
      if( strlen(cname) >= SZ_LINE ){
	gerror(stderr, 
	       "region length (%d) > max allowable (4096 - filename_length)\n",
	       strlen(cregion));
      }
      /* open the data file with the new region as part of the filter */
      if( !(fun = FunOpen(cname, "r", NULL)) ){
	gerror(stderr, "can't FunOpen file (or find extension): %s\n", fname);
      }
      /* make sure we have a table */
      FunInfoGet(fun, FUN_TYPE, &type, 0);
      if( type != FUN_TABLE ){
	gerror(stderr, 
	       "please specify a table (image support not yet implemented)\n");
      }
      /* for wcs output, get info to allow conversion of phyiscal to image */
      FunInfoGet(fun, FUN_BINOFFS, bin, 0);
      for(i=0; i<=1; i++){
	if( bin[i] >=0 ){
	  FunColumnLookup(fun, NULL, bin[i], NULL,
			  &(tltyp[i]), NULL, NULL, NULL, NULL);
	  tlmin[i] = FunParamGetd(fun, "TLMIN", bin[i]+1, 0.0, &got);
	  //	  tlmax[i] = FunParamGetd(fun, "TLMAX", bin[i]+1, 0.0, &got);
	  binsiz[i] = FunParamGetd(fun, "TDBIN", bin[i]+1, 1.0, &got);
	}
      }
      got = FunColumnSelect(fun, sizeof(EvRec), NULL,
			    "$x",      "D", "r", FUN_OFFSET(Ev, x),
			    "$y",      "D", "r", FUN_OFFSET(Ev, y),
			    "$region", "J", "r", FUN_OFFSET(Ev, region),
			    NULL);
    }
    else{
      if( verbose >= 2 ){
	if( iter > 0 ) fprintf(stdout, "\n");
	fprintf(stdout, "iter%d: %s\n", iter, cregion);
      }
    }
    /* for internal filtering, open up a new filter */
    if( domem || doimfilt ){
      FunInfoGet(fun, FUN_ENDIAN, &endian, FUN_HEADER, &header,
		 FUN_SECT_X0, &x0, FUN_SECT_X1, &x1,
		 FUN_SECT_Y0, &y0, FUN_SECT_Y1, &y1,
		 FUN_SECT_BLOCK, &block, FUN_BINCOLS, &bincols,
		 FUN_RAWSIZE, &rawsize, 
		 0);
      if( doimfilt ){
	/* make sure we will have a valid image section in which to filter */
	if( (x1-x0 <= 0) || (y1-y0 <= 0) )
	  gerror(stderr, "invalid or zero image dimensions(s) for table\n",
		 bincols ? bincols : "invalid bincols?");
	/* make up the mode string */
	snprintf(mode, SZ_LINE-1, 
		 "type=events,convert=%s,evsect=\"%d %d %d %d %d\"",
		 (endian == is_bigendian()) ? "false" : "true", 
		 x0, x1, y0, y1, block);
      }
      else{
	snprintf(mode, SZ_LINE-1, 
		 "type=events,convert=%s",
		 (endian == is_bigendian()) ? "false" : "true");
      }
      /* add columns */
      if( bincols ){
	strcat(mode, ",");
	strcat(mode, bincols);
      }
      filter = FilterOpen(header, cregion, mode);
    }

    /* filter events and accumulate total events for each region */
    while( 1 ){
      /* get data (already have it for memory processing */
      if( !domem ){
	if( !(ebuf = (Ev)FunTableRowGet(fun, NULL, maxrow, NULL, &got)) )
	  break;
      }
      /* do standard event filtering */
      if( !domem && !doimfilt ){
	for(i=0; i<got; i++){
	  ev = ebuf+i;
	  if( ev->region > nregion ){
	    gerror(stderr, "compound regions are not allowed!\n");
	  }
	  if( !tflag[ev->region] ){
	    xtot[ev->region] += ev->x;
	    ytot[ev->region] += ev->y;
	    nev[ev->region] += 1;
	    /* debugging output */
	    if( verbose > 2 ){
	      fprintf(stdout, "\t%.2f %.2f %d\n",  ev->x, ev->y, ev->region);
	    }
	  }
	}
      }
      /* memory and image-style filtering is done manually */
      else{
	/* get pointer to raw buffer */
	FunInfoGet(fun, FUN_RAWBUF, &rawbuf, 0);
	/* get events which pass the region filter */
	if( filter && (filter != NOFILTER) &&
	    FilterEvents(filter, rawbuf, rawsize, got, rbuf)){
	  /* loop through events, process those which are in a region */
	  for(i=0; i<got; i++){
	    if( rbuf[i] > 0 ){
	      ev = ebuf + i;
	      if( !tflag[rbuf[i]] ){
		xtot[rbuf[i]] += ev->x;
		ytot[rbuf[i]] += ev->y;
		nev[rbuf[i]] += 1;
	      }
	    }
	  }
	}
      }
      if( domem ) {
	break;
      }
      else{
	if( ebuf ) xfree(ebuf);
      }
    }
    /* calculate centroid position for each region */
    ntol = 0;
    for(i=1; i<=nregion; i++){
      if( !tflag[i] ){
	if( nev[i] > 0 ){
	  xavg[i] = xtot[i] / nev[i];
	  yavg[i] = ytot[i] / nev[i];
	}
	else{
	  xavg[i] = 0.0;
	  yavg[i] = 0.0;
	}
	/* check tolerance of this centroid */
	ctolsq = (((xavg[i] - pxavg[i]) * (xavg[i] - pxavg[i])) +
		  ((yavg[i] - pyavg[i]) * (yavg[i] - pyavg[i])));
	if( ctolsq <= tolsq ){
	  tflag[i] = 1;
	}
	else{
	  ntol++;
	}
      }
      if( verbose > 1 ){
	if( i != 1 ) fprintf(stdout, "\n");
	snprintf(tbuf, SZ_LINE-1, regions[i], xavg[i], yavg[i]);
	fprintf(stdout, "\tevents:\t\t%d\n", nev[i]);
	fprintf(stdout, "\tcentroid(x,y):\t%.2f %.2f\n", xavg[i], yavg[i]);
	if( tflag[i] )
	  fprintf(stdout, "\ttol**2:\t\t%.4f (tolerance met)\n", ctolsq);
	else
	  fprintf(stdout, "\ttol**2:\t\t%.4f\n", ctolsq);
	fprintf(stdout, "\tregion%d:\t%s\n", i, tbuf);
      }
    }
    /* close the event file */
    if( !domem ) FunClose(fun);
    /* close filter for image-style filtering */
    if( doimfilt || domem ) FilterClose(filter);
    /* generate a new current region string */
    *cregion = '\0';
    /* handle possible first exclude specially */
    if( regions[0] ){
      strncat(cregion, regions[0], clen-1);
      if( cregion[strlen(cregion)-1] != ';' )
	strncat(cregion, ";", clen-1);
    }
    /* handle all other regions */
    for(i=1; i<=nregion; i++){
      snprintf(tbuf, SZ_LINE-1, regions[i], xavg[i], yavg[i]);
      while( (int)(strlen(tbuf) + strlen(cregion)) >= (clen-2) ){
	clen += SZ_LINE;
	cregion = xrealloc(cregion, clen);
      }
      strncat(cregion, tbuf, clen-1);
      if( (i != nregion) && (cregion[strlen(cregion)-1] != ';') )
	strncat(cregion, ";", clen-1);
    }
    /* check for no tolerances left to do */
    if( ntol == 0 ){
      if( verbose > 1 ) fprintf(stdout, "All tolerances have been met.\n");
      break;
    }
    else{
      /* save averages for this iteration for next tolerance check */
      memcpy(pxavg, xavg, sizeof(double)*(MAXREGIONS+1));
      memcpy(pyavg, yavg, sizeof(double)*(MAXREGIONS+1));
    }
  }

  /* final count of events using current region */
  if( verbose >= 2 ){
    if( iter > 0 ) fprintf(stdout, "\n");
    fprintf(stdout, "final: %s\n", cname);
  }
  memset(nev, 0, sizeof(int)*(MAXREGIONS+1));
  if( !domem ){
    /* append current region to filename root */
    if( !doimfilt ){
      /* if the region string is not long, we append it to the file name */
      if( (strlen(fname2) + strlen(cregion) + strlen(extn)) < (SZ_LINE-1) ){
	snprintf(cname, clen-1, "%s%s%s", fname2, cregion, extn);
      }
      /* otherwise we have to use a temp file */
      else{
	/* delete previous temp region file */
	if( *cregionfile ) unlink(cregionfile);
	/* get new temp file name */
	if( !(cfd=mkrtemp(prefix, ".reg", cregionfile, SZ_LINE, 1)) ){
	  gerror(stderr, "can't open temp region file: %s\n", cregionfile);
	}
	else{
	  if( !write(cfd, cregion, strlen(cregion)) ){
	    gerror(stderr, "can't write temp file: %s\n", cregionfile);
	  }
	  close(cfd);
	}
	snprintf(cname, clen-1, "%s@%s%s", fname2, cregionfile, extn);
      }
    }
    /* but not for image-style filtering -- we filter the region manually */
    else{
      strncpy(cname, fname, clen-1);
    }
    /* open the data file with the new region as part of the filter */
    if( !(fun = FunOpen(cname, "r", NULL)) ){
      gerror(stderr, "can't FunOpen file (or find extension): %s\n", fname);
    }
    /* make sure we have a table */
    FunInfoGet(fun, FUN_TYPE, &type, 0);
    if( type != FUN_TABLE ){
      gerror(stderr, 
	     "please specify a table (image support not yet implemented)\n");
    }
    got = FunColumnSelect(fun, sizeof(EvRec), NULL,
			  "$x",      "D", "r", FUN_OFFSET(Ev, x),
			  "$y",      "D", "r", FUN_OFFSET(Ev, y),
			  "$region", "J", "r", FUN_OFFSET(Ev, region),
			  NULL);
  }
  if( domem || doimfilt ){
    FunInfoGet(fun, FUN_ENDIAN, &endian, FUN_HEADER, &header,
	       FUN_SECT_X0, &x0, FUN_SECT_X1, &x1,
	       FUN_SECT_Y0, &y0, FUN_SECT_Y1, &y1,
	       FUN_SECT_BLOCK, &block, FUN_BINCOLS, &bincols,
	       FUN_RAWSIZE, &rawsize, 
	       0);
    if( doimfilt ){
      /* make sure we will have a valid image section in which to filter */
      if( (x1-x0 <= 0) || (y1-y0 <= 0) )
	gerror(stderr, "invalid or zero image dimensions(s) for table\n",
	       bincols ? bincols : "invalid bincols?");
      /* make up the mode string */
      snprintf(mode, SZ_LINE-1, 
	       "type=events,convert=%s,evsect=\"%d %d %d %d %d\"",
	       (endian == is_bigendian()) ? "false" : "true", 
	       x0, x1, y0, y1, block);
    }
    else{
      snprintf(mode, SZ_LINE-1, 
	       "type=events,convert=%s",
	       (endian == is_bigendian()) ? "false" : "true");
    }
    /* add columns */
    if( bincols ){
      strcat(mode, ",");
      strcat(mode, bincols);
    }
    filter = FilterOpen(header, cregion, mode);
  }

  /* get wcs info */
  FunInfoGet(fun, FUN_WCS, &wcs, 0);
  /* and set output */
  if( (dowcs = (wcs && iswcs(wcs))) ){
    wcsoutinit(wcs, wcssys);
  }

  /* filter events and accumulate total events for each region */
  while( 1 ){
    if( !domem ){
      if( !(ebuf = (Ev)FunTableRowGet(fun, NULL, maxrow, NULL, &got)) )
	break;
    }
    /* standard event filtering */
    if( !domem && !doimfilt ){
      for(i=0; i<got; i++){
	ev = ebuf+i;
	if( ev->region > nregion ){
	  gerror(stderr, "compound regions are not allowed!\n");
	}
	nev[ev->region] += 1;
      }
    }
    /* memory and image-style filtering is done manually */
    else{
      /* get pointer to raw buffer */
      FunInfoGet(fun, FUN_RAWBUF, &rawbuf, 0);
      /* get events which pass the region filter */
      if( filter && (filter != NOFILTER) &&
	  FilterEvents(filter, rawbuf, rawsize, got, rbuf)){
	/* loop through events, process those which are in a region */
	for(i=0; i<got; i++){
	  if( rbuf[i] > 0 ){
	    ev = ebuf + i;
	    nev[rbuf[i]] += 1;
	  }
	}
      }
    }
    if( ebuf ) xfree(ebuf);
    if( domem ) break;
  }

  /* final display */
  if( verbose > 1) fprintf(stdout, "\n");
  for(i=1; i<=nregion; i++){
    /* if we did not iterate, then final x, y is same as initial x, y */
    if( niter == 0 ){
      xavg[i] = ox[i];
      yavg[i] = oy[i];
    }
    if( dowcs ){
      /* convert physical pixels to image */
      xim = tlp2i(xavg[i], tlmin[0], binsiz[0], tltyp[0]);
      yim = tlp2i(yavg[i], tlmin[1], binsiz[1], tltyp[1]);
      pix2wcs(wcs, xim, yim, &ra, &dec);
    }
    if( verbose <= 0 ){
      fprintf(stdout, "%d", nev[i]);
      if( nev[i] > 0 ){
	fprintf(stdout, " %.2f %.2f", xavg[i], yavg[i]);
	if( dowcs ){
	  fprintf(stdout, " %.6f %.6f %s", ra, dec, wcssys);
	} 
      }
      else{
	fprintf(stdout, " 0.00 0.00");
	if( dowcs ){
	  fprintf(stdout, " 0.0000 0.0000 none");
	}
      }
      fprintf(stdout, "\n");
    }
    else{
      if( i == 1 ){
	fprintf(stdout, "event_file:\t%s\n", fname);
	fprintf(stdout, "initial_region:\t%s\n", iregion);
	fprintf(stdout, "iterations:\t%d\n", niter);
	fprintf(stdout, "tolerance:\t%.4f\n", tol);
      }
      fprintf(stdout, "\n");
      fprintf(stdout, "events:\t\t%d\n", nev[i]);
      if( nev[i] > 0 ){
	fprintf(stdout, "x,y(physical):\t%.2f %.2f\n", xavg[i], yavg[i]);
	if( dowcs ){
	  fprintf(stdout, "ra,dec(%s):\t%.6f %.6f\n", wcssys, ra, dec);
	}
	snprintf(tbuf, SZ_LINE-1, regions[i], xavg[i], yavg[i]);
	fprintf(stdout, "final_region%d:\t%s\n", i, tbuf);
      } 
    }
    if( regions[i] ) xfree(regions[i]);
  }
  FunClose(fun);
  /* close filter for manual filtering */
  if( doimfilt || domem ) FilterClose(filter);
  /* handle overflow region specially */
  if( regions[0] ) xfree(regions[0]);
  if( cregion ) xfree(cregion);
  if( cname ) xfree(cname);
  if( rbuf ) xfree(rbuf);
  if( *cregionfile ) unlink(cregionfile);
  /* success */
  return(0);
}
