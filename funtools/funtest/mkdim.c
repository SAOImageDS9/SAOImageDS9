/* Solaris:
   gcc -g -o mkdim mkdim.c -I /soft/saord/include -L/soft/saord/lib -lfuntools
   -ldl -lsocket -lnsl -lm
   OS X:
   gcc -g -o mkdim mkdim.c -I /soft/saord/include -L/soft/saord/lib -lfuntools -lm

*/

#include <funtools.h>
#include <stdlib.h>
#include <string.h>
#include <file.h>

extern char *optarg;
extern int optind;

#ifdef ANSI_FUNC
int 
main (int argc, char **argv)
#else
main(argc, argv)
     int argc;
     char **argv;
#endif
{
  int dim1, dim2, bitpix;
  int tdim;
  char *buf=NULL;
  char *oname=NULL;
  char lbuf[SZ_LINE];
  unsigned char *cbuf;
  short *sbuf;
  int *ibuf;
  float *fbuf;
  double *dbuf;
  double x, y, val;
  Fun ofun=NULL;

  /* exit on gio errors */
  setgerror(2);

  if( argc != 5 ){
    gerror(stderr, "usage: cat tfile | %s oname xdim ydim bitpix\n", argv[0]);
    return 1;
  }
  oname = argv[1];
  dim1 = atoi(argv[2]);
  dim2 = atoi(argv[3]);
  bitpix = atoi(argv[4]);
  
  /* open the output FITS file */
  if( oname ){
    if( !(ofun = FunOpen(oname, "w", NULL)) )
      gerror(stderr, "could not FunOpen output  file: %s\n", argv[optind-1]);
  }

  /* set appropriate data type buffer to point to image buffer */
  /* allocate the buffer */
  tdim = dim1*dim2;
  buf = malloc(tdim*ft_sizeof(bitpix));
  while( fgets(lbuf, SZ_LINE, stdin) ){
    if( sscanf(lbuf, "%lf %lf %lf", &x, &y, &val) != 3 ){
      gerror(stderr, "invalid input: requires x, y, val; got %s\n", lbuf);
    }
    switch(bitpix){
    case 8:
      cbuf = (unsigned char *)buf;
      cbuf[(int)y*dim2+(int)x] = (unsigned char)val;
      break;
    case 16:
      sbuf = (short *)buf;
      sbuf[(int)y*dim2+(int)x] = (short)val;
      break;
    case 32:
      ibuf = (int *)buf;
      ibuf[(int)y*dim2+(int)x] = (int)val;
      break;
    case -32:
      fbuf = (float *)buf;
      fbuf[(int)y*dim2+(int)x] = (float)val;
      break;
    case -64:
      dbuf = (double *)buf;
      dbuf[(int)y*dim2+(int)x] = val;
      break;
    }
  }
  /* write the output image, updating the FITS header from the orig file */
  if( ofun && buf ){
    if( !FunImagePut(ofun, buf, dim1, dim2, bitpix, NULL) )
      gerror(stderr, "could not FunImagePut: %s\n", argv[2]);
  }
  if( buf ) free(buf);
  if( ofun ) FunClose(ofun);
  return(0);
}
