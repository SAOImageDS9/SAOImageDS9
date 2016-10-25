#if HAVE_CONFIG_H
#include <conf.h>
#endif

#include <stdio.h>
#ifdef HAVE_STDLIB_H
#include <stdlib.h>
#endif
#ifdef HAVE_UNISTD_H
#include <unistd.h>
#endif
#ifdef HAVE_STRING_H
#include <string.h>
#endif
#include <math.h>
#include <prsetup.h>
#include <macro.h>
#include <swap.h>
#include <xalloc.h>

#ifndef UNUSED
#ifdef __GNUC__
#  define UNUSED(x) UNUSED_ ## x __attribute__((__unused__))
#else
#  define UNUSED(x) UNUSED_ ## x
#endif
#endif

extern char *optarg;
extern int optind;

#ifndef ABS
#define ABS(x)		((x)<0?(-x):(x))
#endif

#define EVSIZE 26

#define FITS_HEADER "\
SIMPLE  =                    T / FITS STANDARD                                  \
BITPIX  =                    8 / Binary data                                    \
NAXIS   =                    0 / No image array present                         \
EXTEND  =                    T / There may be standard extensions               \
END                                                                             \
                                                                                \
                                                                                \
                                                                                \
                                                                                \
                                                                                \
                                                                                \
                                                                                \
                                                                                \
                                                                                \
                                                                                \
                                                                                \
                                                                                \
                                                                                \
                                                                                \
                                                                                \
                                                                                \
                                                                                \
                                                                                \
                                                                                \
                                                                                \
                                                                                \
                                                                                \
                                                                                \
                                                                                \
                                                                                \
                                                                                \
                                                                                \
                                                                                \
                                                                                \
                                                                                \
                                                                                \
XTENSION= 'BINTABLE'            /  FITS 3D BINARY TABLE                         \
BITPIX  =                    8 / Binary data                                    \
NAXIS   =                    2 / Table is a matrix                              \
NAXIS1  =                 $EVSIZE / Width of table in bytes                        \
NAXIS2  =           $TEV / Number of entries in table                     \
PCOUNT  =                    0 / Random parameter count                         \
GCOUNT  =                    1 / Group count                                    \
TFIELDS =                    7 / Number of fields in row                        \
EXTNAME = 'EVENTS            ' / Table name                                     \
EXTVER  =                    1 / Version number of table                        \
TFORM1  = '1I                ' / Data type for field                            \
TTYPE1  = 'X                 ' / Label for field                                \
TSCAL1  = 10.0                 / Label for field                                \
TZERO1  = 1.0                  / Label for field                                \
TUNIT1  = '        '            /  Physical units for field                     \
TFORM2  = '1I                ' / Data type for field                            \
TTYPE2  = 'Y                 ' / Label for field                                \
TSCAL2  = 20.0                 / Label for field                                \
TZERO2  = 2.0                  / Label for field                                \
TUNIT2  = '        '            /  Physical units for field                     \
TFORM3  = '1I                ' / Data type for field                            \
TTYPE3  = 'PHA               ' / Label for field                                \
TUNIT3  = '        '            /  Physical units for field                     \
TFORM4  = '1J                ' / Data type for field                            \
TTYPE4  = 'PI                ' / Label for field                                \
TUNIT4  = '        '            /  Physical units for field                     \
TFORM5  = '1D                ' / Data type for field                            \
TTYPE5  = 'TIME              ' / Label for field                                \
TUNIT5  = '        '            /  Physical units for field                     \
TFORM6  = '1E                ' / Data type for field                            \
TTYPE6  = 'DX                ' / Label for field                                \
TUNIT6  = '        '            /  Physical units for field                     \
TFORM7  = '1E                ' / Data type for field                            \
TTYPE7  = 'DY                ' / Label for field                                \
TUNIT7  = '        '            /  Physical units for field                     \
RADECSYS= 'FK5     '            /  WCS for this file (e.g. Fk4)                 \
EQUINOX =           2.000000E3  /  equinox (epoch) for WCS                      \
TCTYP1  = 'RA---TAN'          / axis type (e.g. RA---TAN)                       \
TCTYP2  = 'DEC--TAN'          / axis type (e.g. RA---TAN)                       \
TCRVL1  = 9.000000000000000E1   / sky coord (deg.)                              \
TCRVL2  = 6.000000000000000E1   / sky coord (deg.)                              \
TCDLT1  = -1.00000000000000E-1   / degrees per pixel                            \
TCDLT2  = 1.000000000000002E-1   / degrees per pixel                            \
TCRPX1  = 5.000000000000000E0   / pixel of tangent plane direc.                 \
TCRPX2  = 5.000000000000000E0   / pixel of tangent plane direc.                 \
TCROT2  = 0.000000000000000E0   / rotation angle (degrees)                      \
TLMIN1  =           $IXLO / Min. axis value                                \
TLMAX1  =           $IXHI / Max. axis value                                \
TLMIN2  =           $IYLO / Min. axis value                                \
TLMAX2  =           $IYHI / Max. axis value                                \
TLMIN6  =           $XLO / Min. axis value                                \
TLMAX6  =           $XHI / Max. axis value                                \
TLMIN7  =           $YLO / Min. axis value                                \
TLMAX7  =           $XHI / Max. axis value                                \
END                                                                                                                                                                                                                                                                                                                                                                                                             \
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                "

/* these are used in the macro expansion and must be global */
static double xlo, xhi, ylo, yhi;
static int tev;
static char macrobuf[SZ_LINE];

#ifdef ANSI_FUNC
static char *
MacroCB(char *name, void *UNUSED(client_data))
#else
static char *MacroCB(name, client_data)
	char *name;
	void *client_data;
#endif
{
  if( !strcmp(name, "TEV") ){
    sprintf(macrobuf, "%10d", tev);
    return macrobuf;
  }
  else if( !strcmp(name, "XLO") ){
    sprintf(macrobuf, "%10.2f", xlo);
    return macrobuf;
  }
  else if( !strcmp(name, "XHI") ){
    sprintf(macrobuf, "%10.2f", xhi);
    return macrobuf;
  }
  else if( !strcmp(name, "IXLO") ){
    if( xlo > 0 )
      sprintf(macrobuf, "%10d", (int)xlo);
    else
      sprintf(macrobuf, "%10d", (int)ceil(xlo));
    return macrobuf;
  }
  else if( !strcmp(name, "IXHI") ){
    if( xhi > 0 )
      sprintf(macrobuf, "%10d", (int)xhi);
    else
      sprintf(macrobuf, "%10d", (int)ceil(xhi));
    return macrobuf;
  }
  else if( !strcmp(name, "DIM1") ){
    sprintf(macrobuf, "%6d", (int)(xhi-xlo));
    return macrobuf;
  }
  else if( !strcmp(name, "YLO") ){
    sprintf(macrobuf, "%10.2f", ylo);
    return macrobuf;
  }
  else if( !strcmp(name, "YHI") ){
    sprintf(macrobuf, "%10.2f", yhi);
    return macrobuf;
  }
  else if( !strcmp(name, "IYLO") ){
    if( ylo > 0 )
      sprintf(macrobuf, "%10d", (int)ylo);
    else
      sprintf(macrobuf, "%10d", (int)ceil(ylo));
    return macrobuf;
  }
  else if( !strcmp(name, "IYHI") ){
    if( yhi > 0 )
      sprintf(macrobuf, "%10d", (int)yhi);
    else
      sprintf(macrobuf, "%10d", (int)ceil(yhi));
    return macrobuf;
  }
  else if( !strcmp(name, "DIM2") ){
    sprintf(macrobuf, "%6d", (int)(yhi-ylo));
    return macrobuf;
  }
  else if( !strcmp(name, "EVSIZE") ){
    sprintf(macrobuf, "%4d", EVSIZE);
    return macrobuf;
  }
  else{
    return NULL;
  }
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
  int convert;
  int nev;
  int ii, kk;
  int pad;
  int pi;
  int args;
  int doraw=0;
  char *padbuf;
  short x, y;
  short pha;
  double i, j;
  double time;
  float dx, dy;
  char *s, *t;

  /* process switch arguments */
  while ((c = getopt(argc, argv, "r")) != -1){
    switch(c){
    case 'r':
      doraw = 1;
      break;
    }
  }

  /* check for required arguments */
  args = argc - optind;
  /* process arguments */
  if( args != 4 ){
    fprintf(stderr, "usage: %s xlo xhi ylo yhi\n", argv[0]);
    exit(1);
  }
  else{
    xlo = atof(argv[optind]);
    xhi = atof(argv[optind+1]);
    ylo = atof(argv[optind+2]);
    yhi = atof(argv[optind+3]);
  }

  /* get initial header string */
  s = xstrdup(FITS_HEADER);
  /* see if we have to convert to IEEE  format */
  convert = !is_bigendian();

  /* determine how many events we will have */
  for(tev=0,j=ylo; j<=yhi; j++){
    for(i=xlo; i<=xhi; i++){
      if( i != j )
	nev = 1;
      else
	nev = ABS(i);
      tev += nev;
    }
  }

  /* expand header to fill in number of events and dimensions */
  t = ExpandMacro(s, NULL, NULL, 0, MacroCB, NULL);

  /* write header, if necessary */
  if( !doraw ){
    ii = strlen(t);
    if( (ii % 2880) != 0 ){
      fprintf(stderr, "internal error: bad size (%d) for header\n", ii);
    }
    write(1, t, ii);
  }

  /* write events */
  for(tev=0,j=ylo; j<=yhi; j++){
    for(i=xlo; i<=xhi; i++){
      if( i != j )
	nev = 1;
      else
	nev = ABS(i);
      tev += nev;
      for(kk=0; kk<nev; kk++){
	x = i;
	y = j;
	pha = i;
	pi = j;
	time = (double)tev + (double)(i+j+kk)/100.0;
	dx = i;
	dy = j;
	if( convert ){
	  swap_short(&x, 1);
	  swap_short(&y, 1);
	  swap_short(&pha, 1);
	  swap_int(&pi, 1);
	  swap_double(&time, 1);
	  swap_float(&dx, 1);
	  swap_float(&dy, 1);
	}
	write(1, &x, sizeof(short));
	write(1, &y, sizeof(short));
	write(1, &pha, sizeof(short));
	write(1, &pi, sizeof(int));
	write(1, &time, sizeof(double));
	write(1, &dx, sizeof(float));
	write(1, &dy, sizeof(float));
      }
    }
  }

  /* write padding, if necessary */
  if( !doraw ){
    pad = 2880 - ((tev*EVSIZE)%2880);
    if( pad == 2880 ) pad = 0;
    if( pad ){
      padbuf = (char *)calloc(pad, sizeof(char));
      write(1, padbuf, pad);
    }
  }

  return(0);
}

