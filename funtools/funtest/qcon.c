/* gcc -g -o qcon qcon.c -I/soft/saord/include -L/soft/saord/lib -lfuntools -lsocket -lnsl -ldl -lm */

#include <funtools.h>
#include <stdlib.h>

extern char *optarg;
extern int optind;

int main(int argc, char **argv)
{
  int c;
  int args;
  int offscl;
  int dim1, dim2;
  int ix, iy;
  int offset;
  int debug=0;
  int dowcs=1;
  int idx=0;
  char tbuf[SZ_LINE];
  double dval1, dval2;
  double dx, dy;
  double *dbuf;
  struct WorldCoor *wcs;
  Fun fun;

  /* process switch arguments */
  while( (c = getopt(argc, argv, "d")) != -1){
    switch(c){
    case 'd':
      debug = 1;
      break;
    case 'i':
      dowcs = 0;
      break;
    }
  }

  /* check for required arguments */
  args = argc - optind;
  if( args < 1 ){
    fprintf(stderr, "usage: %s iname -d -i\n", argv[0]);
    fprintf(stderr, "\n");
    fprintf(stderr, "where:\n");
    fprintf(stderr, "  -d\tprint out input and output position values\n");
    fprintf(stderr, "  -i\tinput values are image x,y (not ra,dec in deg)\n");
    fprintf(stderr, "\n");
    exit(1);
  }

  /* exit on gio errors */
  setgerror(2);

  /* open the input FITS file */
  if( !(fun = FunOpen(argv[optind], "r", NULL)) )
    gerror(stderr, "could not FunOpen input file: %s\n", argv[optind]);

  /* extract and bin the data section into a double float image buffer */
  if( !(dbuf = FunImageGet(fun, NULL, "bitpix=-64")) )
    gerror(stderr, "could not FunImageGet: %s\n", argv[1]);

  /* get required information from funtools structure */
  FunInfoGet(fun,
	     FUN_SECT_DIM1,	&dim1,
	     FUN_SECT_DIM2,	&dim2,
	     FUN_WCS, 		&wcs,
	     0);

  /* for each line in the contour file ... */
  while( fgets(tbuf, SZ_LINE, stdin) ){
    /* ignore comments */
    if( *tbuf == '#' )
      continue;
    /* blank lines means reset counter */
    if( *tbuf == '\n' ){
      fprintf(stdout, "\n");
      idx = 0;
      continue;
    }
    /* input contour values: ra, dec in degrees (or image coords if -i) */
    if(sscanf(tbuf, "%lf %lf", &dval1, &dval2) != 2){
      gerror(stderr, "invalid line in contour file: %s\n", tbuf);
    }
    /* convert input ra, dec to image x, y */
    if( dowcs ){
      wcs2pix(wcs, dval1, dval2, &dx, &dy, &offscl);
      /* make sure we are not off scale */
      if( offscl ){
	fprintf(stderr, "warning: wcs position is offscale: %s\n", tbuf);
	continue;
      }
    }
    else{
      dx = dval1;
      dy = dval2;
    }
    /* convert image values to integers */
    ix = (int)(dx+0.5);
    iy = (int)(dy+0.5);
    /* sanity checks -- must be inside the image */
    if( (ix < 1) || (ix > dim1) || (iy < 1) || (iy > dim2)){
      fprintf(stderr, "warning: image position off image: %s\n", tbuf);
      continue;
    }
    /* calculate offset into dbuf */
    offset = (iy-1)*dim1 + ix-1;
    /* write out the index and the pixel value at the image position */
    fprintf(stdout, "%d\t%f", idx, dbuf[offset]);
    /* debugging info, if necessary */
    if( debug ){
      fprintf(stdout, "\t %f %f\t%d %d", dval1, dval2, ix, iy);
    }
    /* finish off line */
    fprintf(stdout, "\n");
    /* bump to next index */
    idx++;
  }

  /* close output first so that flush happens automatically */
  FunClose(fun);
  if( dbuf ) free(dbuf);
  return(0);
}
