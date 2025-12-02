#include <funtools.h>

int main(int argc, char **argv)
{
  int i, j, bitpix, dim1, dim2;
  double *buf;
  unsigned char *cbuf;
  short *sbuf;
  int *ibuf;
  float *fbuf;
  double *dbuf;
  Fun fun;

  /* sanity check */
  if( argc < 2 ) return 1;
  /* open file for reading */
  if( !(fun=FunOpen(argv[1], "r", NULL)) ){
    fprintf(stderr, "ERROR: can't open funtools file: %s\n", argv[1]);
    return 1;
  }
  /* extract (and bin, if necessary) data into a double prec. image buffer */
  /* data type is not specified and therefore is that of the file */
  if( !(buf = FunImageGet(fun, NULL, NULL)) ){
    fprintf(stderr, "ERROR: can't get image: %s\n", argv[1]);
    return 1;
  }
  /* get image dimensions after FunImageGet, in case an image section
     was specified on the command line, which changes image dimensions */
  FunInfoGet(fun, FUN_SECT_BITPIX, &bitpix, 
	     FUN_SECT_DIM1, &dim1, FUN_SECT_DIM2, &dim2, 0);
  /* set appropriate data type buffer to point to image buffer */
  switch(bitpix){
    case 8:   cbuf = (unsigned char *)buf; break;
    case 16:  sbuf = (short *)buf;         break;
    case 32:  ibuf = (int *)buf;           break;
    case -32: fbuf = (float *)buf;         break;
    case -64: dbuf = (double *)buf;        break;
  }
  /* loop through image */
  for(i=0; i<dim2; i++){
    for(j=0; j<dim1; j++){
      switch(bitpix){
        case 8:   fprintf(stdout, "%4d ",  cbuf[i*dim1+j]);  break;
        case 16:  fprintf(stdout, "%6d ",  sbuf[i*dim1+j]);  break;
        case 32:  fprintf(stdout, "%9d ",  ibuf[i*dim1+j]);  break;
        case -32: fprintf(stdout, "%.2f ", fbuf[i*dim1+j]);  break;
        case -64: fprintf(stdout, "%.6f ", dbuf[i*dim1+j]);  break;
      }
    }
    fprintf(stdout, "\n");
  }
  /* close file */
  FunClose(fun);
  return 0;
}
