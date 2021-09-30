/*
 *
 * twcs.c -- example using WCS Library
 *
 */

#include <funtools.h>

int main(int argc, char **argv)
{
  int i;
  Fun fun;
  struct WorldCoor *wcs;  /* WCS info */
  double x,y,ra,dec,xr,yr;

  if(argc == 1){
    fprintf(stderr, "usage: twcs iname\n");
    exit(1);
  }

  /* open Funtools file */
  /* Funopen makes initial WCS library call: wcs = wcsinit(header_string) */
  if( !(fun = FunOpen(argv[1], "r ", NULL)) ){
    fprintf(stderr, "ERROR can't open file: %s\n", argv[1]);
    exit(1);
  }

  /* get wcs structure */
  FunInfoGet(fun,FUN_WCS,&wcs,0);
  if( !wcs || !iswcs(wcs) ){
    fprintf(stderr,"No WCS data");
    return(1);
  }

  /* read input, convert pixels to wcs and back */
  while(1){
    fprintf(stdout,"\nInput x y: ");
    if(scanf("%lf %lf", &x, &y) != EOF){
      if(x <= -999)
	break;
      /* convert image pixels to sky coords */
      pix2wcs(wcs, x, y, &ra, &dec);
      fprintf(stdout,"Convert from pixels to ra,dec using pix2wcs()\n");
      fprintf(stdout, "x=%.10g y=%.10g -> ra=%.10g dec=%.10g\n",
	      x, y, ra, dec);
      /* convert sky coords to image pixels */
      fprintf(stdout,"Convert from ra,dec -> pixels using wcs2pix()\n");
      wcs2pix(wcs, ra, dec, &xr, &yr, &i);
      fprintf(stdout, "ra=%.10g dec=%.10g -> x=%.10g y=%.10g offscale=%d\n",
	      ra, dec, xr, yr, i);
    }
    else
      break;
  }

  /* clean up */
  /* FunClose makes final WCS library call: wcsfree(wcs) */
  FunClose(fun);
  return(0);
}

