// Copyright (C) 1999-2021
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

#include "rice.h"
#include "util.h"

extern "C" {
  int fits_rdecomp (unsigned char *c,
		    int clen,
		    unsigned int array[],
		    int nx,
		    int nblock);
  int fits_rdecomp_short (unsigned char *c,
		    int clen,
		    unsigned short array[],
		    int nx,
		    int nblock);
  int fits_rdecomp_byte (unsigned char *c,
		    int clen,
		    unsigned char array[],
		    int nx,
		    int nblock);
}

template<class T> FitsRicem<T>::FitsRicem(FitsFile* fits) 
  : FitsCompressm<T>(fits)
{
  // rice parameters
  block_ = 32;
  bytepix_ = 4;
  noisebit_ = 4;
  char name[] = "ZNAME ";
  char val[] = "ZVAL ";
  for (int ii=0; ii<9; ii++) {
    name[5] = '0'+ii;
    val[4] = '0'+ii;
    if (fits->find(name)) {
      char* str = fits->getString(name);
      if (!strncmp(str,"BLOCK",4))
	block_ = fits->getInteger(val,32);
      else if (!strncmp(str,"BYTEPIX",4))
	bytepix_ = fits->getInteger(val,4);
      else if (!strncmp(str,"NOISEBIT",4))
	noisebit_ = fits->getInteger(val,4);
    }
  }

  FitsCompressm<T>::uncompress(fits);
}

template <class T> int FitsRicem<T>::compressed(T* dest, char* sptr, 
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
  int ll=0;

  int xx[FTY_MAXAXES];

  switch (bytepix_) {
  case 1:
    {
      char* obuf = new char[ocnt];
      fits_rdecomp_byte(ibuf, icnt, (unsigned char*)obuf, ocnt, block_);

      for (xx[8]=start[8]; xx[8]<stop[8]; xx[8]++)
	for (xx[7]=start[7]; xx[7]<stop[7]; xx[7]++)
	  for (xx[6]=start[6]; xx[6]<stop[6]; xx[6]++)
	    for (xx[5]=start[5]; xx[5]<stop[5]; xx[5]++)
	      for (xx[4]=start[4]; xx[4]<stop[4]; xx[4]++)
		for (xx[3]=start[3]; xx[3]<stop[3]; xx[3]++)
		  for (xx[2]=start[2]; xx[2]<stop[2]; xx[2]++)
		    for (xx[1]=start[1]; xx[1]<stop[1]; xx[1]++)
		      for (xx[0]=start[0]; xx[0]<stop[0]; xx[0]++,ll++)
			// very carefull about type conversions
			dest[FitsCompressm<T>::calcIndex(xx)] =
			  FitsCompressm<T>::getValue(obuf+ll,zs,zz,blank);

      if (obuf)
	delete [] obuf;
    }
    break;
  case 2:
    {
      short* obuf = new short[ocnt];
      fits_rdecomp_short(ibuf, icnt, (unsigned short*)obuf, ocnt, block_);

      for (xx[8]=start[8]; xx[8]<stop[8]; xx[8]++)
	for (xx[7]=start[7]; xx[7]<stop[7]; xx[7]++)
	  for (xx[6]=start[6]; xx[6]<stop[6]; xx[6]++)
	    for (xx[5]=start[5]; xx[5]<stop[5]; xx[5]++)
	      for (xx[4]=start[4]; xx[4]<stop[4]; xx[4]++)
		for (xx[3]=start[3]; xx[3]<stop[3]; xx[3]++)
		  for (xx[2]=start[2]; xx[2]<stop[2]; xx[2]++)
		    for (xx[1]=start[1]; xx[1]<stop[1]; xx[1]++)
		      for (xx[0]=start[0]; xx[0]<stop[0]; xx[0]++,ll++)
			// very carefull about type conversions
			dest[FitsCompressm<T>::calcIndex(xx)] =
			  FitsCompressm<T>::getValue(obuf+ll,zs,zz,blank);

      if (obuf)
	delete [] obuf;
    }
    break;
  case 4:
    {
      int* obuf = new int[ocnt];
      fits_rdecomp(ibuf, icnt, (unsigned int*)obuf, ocnt, block_);

      for (xx[8]=start[8]; xx[8]<stop[8]; xx[8]++)
	for (xx[7]=start[7]; xx[7]<stop[7]; xx[7]++)
	  for (xx[6]=start[6]; xx[6]<stop[6]; xx[6]++)
	    for (xx[5]=start[5]; xx[5]<stop[5]; xx[5]++)
	      for (xx[4]=start[4]; xx[4]<stop[4]; xx[4]++)
		for (xx[3]=start[3]; xx[3]<stop[3]; xx[3]++)
		  for (xx[2]=start[2]; xx[2]<stop[2]; xx[2]++)
		    for (xx[1]=start[1]; xx[1]<stop[1]; xx[1]++)
		      for (xx[0]=start[0]; xx[0]<stop[0]; xx[0]++,ll++)
			// very carefull about type conversions
			dest[FitsCompressm<T>::calcIndex(xx)] =
			  FitsCompressm<T>::getValue(obuf+ll,zs,zz,blank);

      if (obuf)
	delete [] obuf;
    }
    break;
  }

  return 1;
}

template class FitsRicem<unsigned char>;
template class FitsRicem<short>;
template class FitsRicem<unsigned short>;
template class FitsRicem<int>;
template class FitsRicem<long long>;
template class FitsRicem<float>;
template class FitsRicem<double>;
