#include <funtools.h>
#include <stdlib.h>

#ifdef ANSI_FUNC
int 
main (int argc, char **argv)
#else
main(argc, argv)
     int argc;
     char **argv;
#endif
{
  int i;
  int bitpix, dim1, dim2;
  int total;
  double blimit, bvalue;
  char *buf;
  unsigned char *cbuf;
  short *sbuf;
  int *ibuf;
  float *fbuf;
  double *dbuf;
  Fun fun, fun2;

  if( argc < 4 ){
    fprintf(stderr, "usage: %s iname oname blimit bvalue\n", argv[0]);
    exit(1);
  }

  /* get blank limit and optional blank value */
  blimit = atof(argv[3]);
  bvalue = 0;
  if( argc >= 5 )
    bvalue = atof(argv[4]);

  /* exit on gio errors */
  setgerror(2);

  /* open the input FITS file */
  if( !(fun = FunOpen(argv[1], "rc", NULL)) )
    gerror(stderr, "could not FunOpen input file: %s\n", argv[1]);

  /* open the output FITS image, preparing to copy input params */
  if( !(fun2 = FunOpen(argv[2], "w", fun)) )
    gerror(stderr, "could not FunOpen output file: %s\n", argv[2]);

  /* extract and bin the data section into an image buffer */
  if( !(buf = FunImageGet(fun, NULL, NULL)) )
    gerror(stderr, "could not FunImageGet: %s\n", argv[1]);

  /* get required information from funtools structure.
     this should come after the ImageGet call, in case that call
     changed fun_sect_bitpix value */
  FunInfoGet(fun,
	     FUN_SECT_BITPIX,  &bitpix,
	     FUN_SECT_DIM1,    &dim1,
	     FUN_SECT_DIM2,    &dim2,
	     0);

  /* set appropriate data type buffer to point to image buffer */
  switch(bitpix){
  case 8:
    cbuf = (unsigned char *)buf; break;
  case 16:
    sbuf = (short *)buf; break;
  case 32:
    ibuf = (int *)buf; break;
  case -32:
    fbuf = (float *)buf; break;
  case -64:
    dbuf = (double *)buf; break;
  }

  /* loop through pixels and reset values below limit to value */
  total = dim1*dim2;
  for(i=0; i<total; i++){
    switch(bitpix){
    case 8:
      if( cbuf[i] <= blimit ) cbuf[i] = bvalue;
      break;
    case 16:
      if( sbuf[i] <= blimit ) sbuf[i] = bvalue;
      break;
    case 32:
      if( ibuf[i] <= blimit ) ibuf[i] = bvalue;
      break;
    case -32:
      if( fbuf[i] <= blimit ) fbuf[i] = bvalue;
      break;
    case -64:
      if( dbuf[i] <= blimit ) dbuf[i] = bvalue;
      break;
    }
  }

  /* write the output image, updating the FITS header from the orig file */
  if( !FunImagePut(fun2, buf, 0, 0, 0, NULL) )
    gerror(stderr, "could not FunImagePut: %s\n", argv[2]);

  /* free up space */
  if( buf ) free(buf);

  /* close output first so that flush happens automatically */
  FunClose(fun2);
  FunClose(fun);
  return(0);
}
