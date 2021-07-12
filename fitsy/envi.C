// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "envi.h"
#include "head.h"
#include "util.h"

FitsENVI::FitsENVI(FitsFile* fits)
{
  byteswap_ = fits->byteswap();
  endian_ = fits->endian();

  pBitpix_ = fits->pBitpix();
  pWidth_ = fits->pWidth();
  pHeight_ = fits->pHeight();
  pDepth_ = fits->pDepth();

  pEncoding_ = FitsFile::BSQ;

  pCRPIX3_ = fits->pCRPIX3();
  pCRVAL3_ = fits->pCRVAL3();
  pCDELT3_ = fits->pCDELT3();

  size_ = (size_t)pWidth_*pHeight_*pDepth_;
}

FitsENVI::~FitsENVI()
{
  if (data_)
    delete [] (char*)data_;
}

int FitsENVI::initHeader(FitsFile* fits) 
{
  // simple check
  if (!pWidth_ || !pHeight_ || !pBitpix_)
    return 0;

  // create header
  head_ = new FitsHead(pWidth_, pHeight_, pDepth_, pBitpix_);
  if (!head_->isValid())
    return 0;

  // WCS?
  if (pCRPIX3_>0 || pCRVAL3_>0 || pCDELT3_!=1) {
    head_->appendString("CTYPE1","LINEAR", NULL);
    head_->appendReal("CRPIX1",1, 9, NULL);
    head_->appendReal("CRVAL1",1, 15, NULL);
    head_->appendReal("CDELT1",1, 15, NULL);

    head_->appendString("CTYPE2","LINEAR", NULL);
    head_->appendReal("CRPIX2",1, 9, NULL);
    head_->appendReal("CRVAL2",1, 15, NULL);
    head_->appendReal("CDELT2",1, 15, NULL);

    head_->appendString("CTYPE3","WAVELENGTH", NULL);
    head_->appendReal("CRPIX3",pCRPIX3_, 9, NULL);
    head_->appendReal("CRVAL3",pCRVAL3_, 15, NULL);
    head_->appendReal("CDELT3",pCDELT3_, 15, NULL);
  }

  // other
  primary_ = fits->primary();
  managePrimary_ = 0;

  inherit_ = head_->inherit();

  return 1;
}

template <class T> FitsENVIBIPm<T>::FitsENVIBIPm(FitsFile* fits)
  : FitsENVI(fits)
{
  if (!initHeader(fits))
    return;

  T* dest = new T[size_];
  if (!dest) {
    internalError("Fitsy++ envi unable to allocate memory");
    return;
  }
  memset(dest, 0, size_*sizeof(T));

  T* ptr = (T*)fits->data();
  for (int jj=0; jj<pHeight_; jj++)
    for (int ii=0; ii<pWidth_; ii++)
      for (int kk=0; kk<pDepth_; kk++)
	dest[kk*pWidth_*pHeight_ + jj*pWidth_ + ii] = *ptr++;

  data_ = dest;

  dataSize_ = size_;
  dataSkip_ = 0;

  // all done
  valid_ = 1;
}

template class FitsENVIBIPm<unsigned char>;
template class FitsENVIBIPm<short>;
template class FitsENVIBIPm<unsigned short>;
template class FitsENVIBIPm<int>;
template class FitsENVIBIPm<long long>;
template class FitsENVIBIPm<float>;
template class FitsENVIBIPm<double>;

template <class T> FitsENVIBILm<T>::FitsENVIBILm(FitsFile* fits)
  : FitsENVI(fits)
{
  if (!initHeader(fits))
    return;

  T* dest = new T[size_];
  if (!dest) {
    internalError("Fitsy++ envi unable to allocate memory");
    return;
  }
  memset(dest, 0, size_*sizeof(T));

  T* ptr = (T*)fits->data();
  for (int jj=0; jj<pHeight_; jj++)
    for (int kk=0; kk<pDepth_; kk++)
      for (int ii=0; ii<pWidth_; ii++)
	dest[kk*pWidth_*pHeight_ + jj*pWidth_ + ii] = *ptr++;

  data_ = dest;

  dataSize_ = size_;
  dataSkip_ = 0;

  // all done
  valid_ = 1;
}

template class FitsENVIBILm<unsigned char>;
template class FitsENVIBILm<short>;
template class FitsENVIBILm<unsigned short>;
template class FitsENVIBILm<int>;
template class FitsENVIBILm<long long>;
template class FitsENVIBILm<float>;
template class FitsENVIBILm<double>;
