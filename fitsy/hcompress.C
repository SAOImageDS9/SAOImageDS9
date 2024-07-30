// Copyright (C) 1999-2021
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

// Note: currently, hcompress will not work with float or double data with 
// BLANK defined, due to the fact that the decompress code takes a int() and 
// not an unsigned int()

#include "hcompress.h"
#include "util.h"

extern "C" {
  int fits_hdecompress(unsigned char *input, int smooth, int *a, int *ny, int *nx, int *scale, int *status);
  int fits_hdecompress64(unsigned char *input, int smooth, long long *a, int *ny, int *nx, int *scale, int *status);
}

template<class T> FitsHcompressm<T>::FitsHcompressm(FitsFile* fits) 
  : FitsCompressm<T>(fits)
{
  // hcompress parameters
  smooth_ = 0;
  char name[] = "ZNAME ";
  char val[] = "ZVAL ";
  for (int ii=0; ii<9; ii++) {
    name[5] = '0'+ii;
    val[4] = '0'+ii;
    if (fits->find(name)) {
      char* str = fits->getString(name);
      if (!strncmp(str,"SMOOTH",4))
	smooth_ = fits->getInteger(val,4);
    }
  }

  FitsCompressm<T>::uncompress(fits);
}

template <class T> int FitsHcompressm<T>::compressed(T* dest, char* sptr, 
						     char* heap,
						     int* start, int* stop)
{
  double zs = FitsCompressm<T>::bscale_;
  if (FitsCompressm<T>::zscale_)
    zs = FitsCompressm<T>::zscale_->value(sptr,0);

  double zz = FitsCompressm<T>::bzero_;
  if (FitsCompressm<T>::zzero_)
    zz = FitsCompressm<T>::zzero_->value(sptr,0);

  int blank = FitsCompressm<T>::blank_;
  if (FitsCompressm<T>::zblank_)
    blank = (int)FitsCompressm<T>::zblank_->value(sptr,0);

  int icnt=0;
  unsigned char* ibuf = (unsigned char*)((FitsBinColumnArray*)FitsCompressm<T>::compress_)->get(heap, sptr, &icnt);

  // ibuf can be NULL
  if (!ibuf || !icnt)
    return 0;

  int ocnt = FitsCompressm<T>::tilesize_;
  int nx,ny,scale;
  int status=0;
  int ll=0;

  int xx[FTY_MAXAXES];

  switch (FitsCompressm<T>::bitpix_) {
  case 8:
  case 16:
    {
      int* obuf = new int[ocnt];
      if (fits_hdecompress(ibuf, smooth_, obuf, &nx, &ny, &scale, &status)) {
	internalError("Fitsy++ hcompress bad inflate result");
	return 0;
      }
      for (xx[8]=start[8]; xx[8]<stop[8]; xx[8]++)
	for (xx[7]=start[7]; xx[7]<stop[7]; xx[7]++)
	  for (xx[6]=start[6]; xx[6]<stop[6]; xx[6]++)
	    for (xx[5]=start[5]; xx[5]<stop[5]; xx[5]++)
	      for (xx[4]=start[4]; xx[4]<stop[4]; xx[4]++)
		for (xx[3]=start[3]; xx[3]<stop[3]; xx[3]++)
		  for (xx[2]=start[2]; xx[2]<stop[2]; xx[2]++)
		    for (xx[1]=start[1]; xx[1]<stop[1]; xx[1]++)
		      for (xx[0]=start[0]; xx[0]<stop[0]; xx[0]++,ll++)
			dest[FitsCompressm<T>::calcIndex(xx)] =
			  FitsCompressm<T>::getValue(obuf+ll,zs,zz,blank);

      if (obuf)
	delete [] obuf;
    }
    break;
  case 32:
  case -32:
  case -64:
    {
      long long* obuf = new long long[ocnt];
      if (fits_hdecompress64(ibuf, smooth_, obuf, &nx, &ny, &scale, &status)) {
	internalError("Fitsy++ hcompress bad inflate result");
	return 0;
      }
      for (xx[8]=start[8]; xx[8]<stop[8]; xx[8]++)
	for (xx[7]=start[7]; xx[7]<stop[7]; xx[7]++)
	  for (xx[6]=start[6]; xx[6]<stop[6]; xx[6]++)
	    for (xx[5]=start[5]; xx[5]<stop[5]; xx[5]++)
	      for (xx[4]=start[4]; xx[4]<stop[4]; xx[4]++)
		for (xx[3]=start[3]; xx[3]<stop[3]; xx[3]++)
		  for (xx[2]=start[2]; xx[2]<stop[2]; xx[2]++)
		    for (xx[1]=start[1]; xx[1]<stop[1]; xx[1]++)
		      for (xx[0]=start[0]; xx[0]<stop[0]; xx[0]++,ll++)
			dest[FitsCompressm<T>::calcIndex(xx)] =
			  FitsCompressm<T>::getValue((int*)obuf+ll,zs,zz,blank);

      if (obuf)
	delete [] obuf;
    }
    break;
  }

  return 1;
}

template class FitsHcompressm<unsigned char>;
template class FitsHcompressm<short>;
template class FitsHcompressm<unsigned short>;
template class FitsHcompressm<int>;
template class FitsHcompressm<long long>;
template class FitsHcompressm<float>;
template class FitsHcompressm<double>;
