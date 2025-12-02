#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(argc, argv)
     int argc;
     char **argv;
{
  int i;
  int nrec;
  unsigned char bval;
  unsigned short usval;
  unsigned int uival;
  short sval;
  int ival;
  float fval;
  double dval;

  if( argc > 1 )
    nrec = atoi(argv[1]);
  else
    nrec = 100;
  if( nrec < 0 )
    nrec = 100;

  for(i=0; i<nrec; i++){
    dval = (double)i + (double)i/nrec;
    write(1, &dval, sizeof(dval));
    fval = (float)-i;
    write(1, &fval, sizeof(fval));
    ival = i;
    write(1, &ival, sizeof(ival));
    sval = (short)-i;
    write(1, &sval, sizeof(sval));
    bval = (unsigned char)i;
    write(1, &bval, sizeof(bval));

    usval = (unsigned short)i;
    write(1, &usval, sizeof(usval));

    bval = (unsigned char)i;
    write(1, &bval, sizeof(bval));
    bval++;
    write(1, &bval, sizeof(bval));
    bval++;
    write(1, &bval, sizeof(bval));

    uival = (unsigned int)i;
    write(1, &uival, sizeof(uival));
  }
  fprintf(stderr, "setenv EVENTS \"(dval:D,fval:E,ival:J,sval:I,bval:B,x16:16X,x24:24X,x32:32X)\"\n");
  return(0);
}
