// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "nrrd.h"
#include "head.h"
#include "util.h"

FitsNRRD::FitsNRRD(FitsFile* fits)
{
  byteswap_ = fits->byteswap();
  endian_ = fits->endian();

  pBitpix_ = fits->pBitpix();
  pWidth_ = fits->pWidth();
  pHeight_ = fits->pHeight();
  pDepth_ = fits->pDepth();

  size_ = (size_t)pWidth_*pHeight_*pDepth_;
}

FitsNRRD::~FitsNRRD()
{
  if (data_)
    delete [] (char*)data_;
}

int FitsNRRD::initHeader(FitsFile* fits) 
{
  // simple check
  if (!pWidth_ || !pHeight_ || !pBitpix_)
    return 0;

  // create header
  head_ = new FitsHead(pWidth_, pHeight_, pDepth_, pBitpix_);
  if (!head_->isValid())
    return 0;

  // other
  primary_ = fits->primary();
  managePrimary_ = 0;

  inherit_ = head_->inherit();

  return 1;
}

template<class T> FitsNRRDm<T>::FitsNRRDm(FitsFile* fits) 
  : FitsNRRD(fits)
{
}

template <class T> void FitsNRRDm<T>::uncompress(FitsFile* fits)
{
  if (!initHeader(fits))
    return;

  T* dest = new T[size_];
  if (!dest) {
    internalError("Fitsy++ nrrd unable to allocate memory");
    return;
  }
  memset(dest, 0, size_*sizeof(T));
  compressed(dest, (char*)fits->data(), fits->dataSize()-fits->dataSkip());

  data_ = dest;

  dataSize_ = size_;
  dataSkip_ = 0;

  // all done
  valid_ = 1;
}

template class FitsNRRDm<unsigned char>;
template class FitsNRRDm<short>;
template class FitsNRRDm<unsigned short>;
template class FitsNRRDm<int>;
template class FitsNRRDm<long long>;
template class FitsNRRDm<float>;
template class FitsNRRDm<double>;
