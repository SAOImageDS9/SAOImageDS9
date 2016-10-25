#include <funtools.h>
#include <stdlib.h>
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
  int i, j;
  int c;
  int args;
  int ptype;
  int dim1, dim2, bitpix, skip, bigendian;
  int tdim;
  char dims[SZ_LINE];
  char *buf=NULL;
  char *iname=NULL, *oname=NULL;

  unsigned char *cbuf;
  short *sbuf;
  int *ibuf;
  float *fbuf;
  double *dbuf;
  double *dbuf2;

  Fun ifun=NULL, ofun=NULL;

  /* exit on gio errors */
  setgerror(2);

  /* we want the args in the same order in which they arrived, and
     gnu getopt sometimes changes things without this */
  putenv("POSIXLY_CORRECT=true");

  /* process switch arguments */
  while ((c = getopt(argc, argv, "c:l")) != -1){
    switch(c){
    case 'c':
      ptype = 'c';
      strcpy(dims, optarg);
      ParseArraySpec(dims, &dim1, &dim2, &bitpix, &skip, &bigendian);
      break;
    case 'l':
      ptype = 'l';
      break;
    }
  }

  /* check for required arguments */
  args = argc - optind;
  switch(ptype){
  case 'c':
    if( args < 1 )
      gerror(stderr, "usage: %s -c dims fname\n", argv[0]);
    iname = NULL;
    oname = argv[optind++];
    break;
  case 'l':
    if( args < 2 )
      gerror(stderr, "usage: %s -l iname oname\n", argv[0]);
    iname = argv[optind++];
    oname = argv[optind++];
    break;
  default:
    gerror(stderr, "usage: %s requires -c [dims] or -l\n", argv[0]);
  }

  /* open the input FITS file */
  if( iname ){
    if( !(ifun = FunOpen(iname, "r", NULL)) )
      gerror(stderr, "could not FunOpen input file: %s\n", argv[optind-1]);
  }

  /* open the output FITS file */
  if( oname ){
    if( !(ofun = FunOpen(oname, "w", NULL)) )
      gerror(stderr, "could not FunOpen output  file: %s\n", argv[optind-1]);
  }

  /* set appropriate data type buffer to point to image buffer */
  if( ptype == 'c' ){
    /* allocate the buffer */
    tdim = dim1*dim2;
    buf = malloc(tdim*ft_sizeof(bitpix));
    switch(bitpix){
    case 8:
      cbuf = (unsigned char *)buf;
      for(i=0; i<tdim; i++)
	cbuf[i] = i;
      break;
    case 16:
      sbuf = (short *)buf;
      for(i=0; i<tdim; i++)
	sbuf[i] = i;
      break;
    case 32:
      ibuf = (int *)buf;
      for(i=0; i<tdim; i++)
	ibuf[i] = i;
      break;
    case -32:
      fbuf = (float *)buf;
      for(i=0; i<tdim; i++)
	fbuf[i] = i;
      break;
    case -64:
      dbuf = (double *)buf;
      for(i=0; i<tdim; i++)
	dbuf[i] = i;
      break;
    }
    /* write the output image, updating the FITS header from the orig file */
    if( ofun && buf ){
      if( !FunImagePut(ofun, buf, dim1, dim2, bitpix, NULL) )
	gerror(stderr, "could not FunImagePut: %s\n", argv[2]);
    }
    if( buf ) free(buf);
  }

  /* reverse each line of the image */
  if( ptype == 'l' ){
    /* get required information from funtools structure */
    FunInfoGet(ifun,
	       FUN_SECT_DIM1,    &dim1,
	       FUN_SECT_DIM2,    &dim2,
	       0);
    /* we will generate an image of type double xon output */
    dbuf = malloc(dim1 * sizeof(double));
    dbuf2 = malloc(dim1 * sizeof(double));
    for(i=1; i<=dim2; i++){
      /* reach next line */
      if( !FunImageRowGet(ifun, dbuf, i, i, "bitpix=-64") )
	gerror(stderr, "could not FunImageRowGet: %d %s\n", i, iname);
      /* reverse the line */
      for(j=1; j<=dim1; j++){
	dbuf2[dim1-j] = dbuf[j-1];
      }
      /* write theline */
      FunImageRowPut(ofun, dbuf2, i, i, dim1, dim2, -64, NULL);
    }
    if( dbuf )  free(dbuf);
    if( dbuf2 ) free(dbuf2);
  }

  if( ifun ) FunClose(ifun);
  if( ofun ) FunClose(ofun);
  return(0);
}
