#include <funtools.h>
#include <stdlib.h>
#include <file.h>

extern char *optarg;
extern int optind;

#define DIM1 5
#define DIM2 8

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
  int i;
  int args;
  int doext=0;
  int doover=0;
  int dim1=DIM1;
  int dim2=DIM2;
  int bitpix1=32;
  int bitpix2=-32;
  int buf1[DIM1*DIM2];
  float buf2[DIM1*DIM2];
  char *oname;
  Fun ofun=NULL;

  /* fill in data buffers */
  for(i=0; i<DIM1*DIM2; i++){
    buf1[i] = i;
    buf2[i] = (float)(DIM1*DIM2)-(float)i;
  }

  /* exit on gio errors */
  setgerror(2);

  /* we want the args in the same order in which they arrived, and
     gnu getopt sometimes changes things without this */
  putenv("POSIXLY_CORRECT=true");

  /* process switch arguments */
  while ((c = getopt(argc, argv, "eo")) != -1){
    switch(c){
    case 'e':
      doext=1;
      break;
    case 'o':
      doover=1;
      break;
    default:
      break;
    }
  }

  /* check for required arguments */
  args = argc - optind;
  if( args < 1 )
    gerror(stderr, "usage: %s fname\n", argv[0]);
  oname = argv[optind++];

  /* open the output FITS file */
  if( oname ){
    if( !(ofun = FunOpen(oname, "w", NULL)) )
      gerror(stderr, "could not FunOpen output  file: %s\n", argv[optind-1]);
  }

  /* write params, if necessary */
  FunParamPuts(ofun, "", 0, "this is a comment", "Blank Keyword", 0);
  FunParamPuts(ofun, "        ", 0, "a 2nd comment", "Blank Keyword", 0);
  FunParamPuts(ofun, "BPAR", 0, "", "Blank Param", 0);
  FunParamPuts(ofun, "BPAR", 1, NULL, "Blank Param", 0);
  FunParamPuti(ofun, "IPAR", 0, -100, "INTEGER Param", 0);
  FunParamPuti(ofun, "IPAR", 1, -101, "INTEGER Param", 0);
  FunParamPutd(ofun, "DPAR", 0, 123456789.9876, 12, "DOUBLE Param", 0);
  FunParamPutd(ofun, "DPAR", 1, 123456.780, 4, "DOUBLE Param", 0);
  FunParamPuts(ofun, "SPAR", 0, argv[0],
	       "long comment string that will test column alignment", 0);
  FunParamPuts(ofun, "SPAR", 1, argv[1], "STRING Param", 0);

  /* write the primary output image */
  if( !FunImagePut(ofun, buf1, dim1, dim2, bitpix1, NULL) ){
    gerror(stderr, "could not FunImagePut: %s\n", argv[2]);
  }
  if( doover ){
    FunParamPuti(ofun, "IPAR", 1, 101, "OVERWRITTEN INT Param", 0);
    FunParamPuts(ofun, "SPAR", 1, argv[0], "OVERWRITTEN STR Param", 0);
  }

  /* we have to finish the first image if we want to write a second one */
  FunFlush(ofun, NULL);

  /* write the image extension */
  if( doext ){
    FunParamPuts(ofun, "", 0, "this is a comment", "Blank Keyword", 0);
    FunParamPuts(ofun, "        ", 0, "a 2nd comment", "Blank Keyword", 0);
    FunParamPuts(ofun, "XBPAR", 0, "", "Blank Param", 0);
    FunParamPuts(ofun, "XBPAR", 1, NULL, "Blank Param", 0);
    FunParamPuti(ofun, "XIPAR", 0, 100, "INTEGER Param", 0);
    FunParamPuti(ofun, "XIPAR", 1, 101, "INTEGER Param", 0);
    FunParamPutd(ofun, "XDPAR", 0, -123456789.9876, 12, "DOUBLE Param", 0);
    FunParamPutd(ofun, "XDPAR", 1, -123456.780, 4, "DOUBLE Param", 0);
    FunParamPuts(ofun, "XSPAR", 0, argv[0],
		 "long comment string that will test column alignment", 0);
    FunParamPuts(ofun, "XSPAR", 1, argv[1], "STRING Param", 0);
    if( !FunImagePut(ofun, buf2, dim1, dim2, bitpix2, NULL) ){
      gerror(stderr, "could not FunImagePut: %s\n", argv[2]);
    }
    if( doover ){
      FunParamPuti(ofun, "XIPAR", 1, -101, "OVERWRITTEN EXT INT Param", 0);
      /* NB: this param does not exist in this header and should be ignored */
      FunParamPuts(ofun, "SPAR", 1, argv[0], "OVERWRITTEN EXT STR Param", 0);
    }
  }

  if( ofun ) FunClose(ofun);
  return(0);
}
