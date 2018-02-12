// Copyright (C) 1999-2018
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
						     int kkstart, int kkstop, 
						     int jjstart, int jjstop, 
						     int iistart, int iistop)
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

  switch (FitsCompressm<T>::bitpix_) {
  case 8:
  case 16:
    {
      int* obuf = new int[ocnt];
      if (fits_hdecompress(ibuf, smooth_, obuf, &nx, &ny, &scale, &status)) {
	internalError("Fitsy++ hcompress bad inflate result");
	return 0;
      }
      for (int kk=kkstart; kk<kkstop; kk++)
	for (int jj=jjstart; jj<jjstop; jj++)
	  for (int ii=iistart; ii<iistop; ii++,ll++)
	    dest[kk*FitsCompressm<T>::width_*FitsCompressm<T>::height_ + jj*FitsCompressm<T>::width_ + ii] = FitsCompressm<T>::getValue(obuf+ll,zs,zz,blank);

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
      for (int kk=kkstart; kk<kkstop; kk++)
	for (int jj=jjstart; jj<jjstop; jj++)
	  for (int ii=iistart; ii<iistop; ii++,ll++)
	    dest[kk*FitsCompressm<T>::width_*FitsCompressm<T>::height_ + jj*FitsCompressm<T>::width_ + ii] = FitsCompressm<T>::getValue((int*)obuf+ll,zs,zz,blank);

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
