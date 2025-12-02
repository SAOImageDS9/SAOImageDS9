/*
 *	Copyright (c) 1999-2003 Smithsonian Astrophysical Observatory
 */
#include <column.h>

#ifdef ANSI_FUNC
void
ColumnLoad(char *ibuf, int size, int n, int convert, void *obuf)
#else
void ColumnLoad(ibuf, size, n, convert, obuf)
     char *ibuf;
     int size;
     int n;
     int convert;
     void *obuf;
#endif
{
  register char *iptr;
  register char *optr;
  int i, j;

  if( convert ){
    optr = (char *)obuf;
    iptr = (char *)ibuf;
    for(i=0; i<n; i++){  
      for(j=size-1; j>=0; j--){
	*optr++ = *(iptr+j);
      }
      iptr += size;
    }
  }
  else{
    memcpy(obuf, ibuf, n*size);
  }
}

