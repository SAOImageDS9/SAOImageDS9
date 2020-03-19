// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

#include "plio.h"
#include "util.h"

extern "C" {
  int pl_l2pi(short *ll_src, int xs, int *px_dst, int npix);
}

template<class T> FitsPliom<T>::FitsPliom(FitsFile* fits) 
  : FitsCompressm<T>(fits)
{
  FitsCompressm<T>::uncompress(fits);
}

template <class T> int FitsPliom<T>::compressed(T* dest, char* sptr, 
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
  short* ibuf = (short*)((FitsBinColumnArray*)FitsCompressm<T>::compress_)->get(heap, sptr, &icnt);

  // ibuf can be NULL
  if (!ibuf || !icnt)
    return 0;

  // swap if needed
  if (FitsCompressm<T>::byteswap_)
    for (int ii=0; ii<icnt; ii++) {
      const char* p = (const char*)(ibuf+ii);
      union {
	char c[2];
	short s;
      } u;

      u.c[1] = *p++;
      u.c[0] = *p;

      *(ibuf+ii) = u.s;
    }

  int ocnt = FitsCompressm<T>::tilesize_;
  int* obuf = new int[ocnt];

  int cc = pl_l2pi(ibuf, 1, obuf, ocnt);
  if (cc != ocnt) {
    internalError("Fitsy++ plio error");
    return 0;
  }

  int ll=0;
  for (int kk=kkstart; kk<kkstop; kk++)
    for (int jj=jjstart; jj<jjstop; jj++)
      for (int ii=iistart; ii<iistop; ii++,ll++)
	dest[kk*FitsCompressm<T>::width_*FitsCompressm<T>::height_ + jj*FitsCompressm<T>::width_ + ii] = FitsCompressm<T>::getValue(obuf+ll,zs,zz,blank);

  if (obuf)
    delete [] obuf;

  return 1;
}

template class FitsPliom<unsigned char>;
template class FitsPliom<short>;
template class FitsPliom<unsigned short>;
template class FitsPliom<int>;
template class FitsPliom<long long>;
template class FitsPliom<float>;
template class FitsPliom<double>;

