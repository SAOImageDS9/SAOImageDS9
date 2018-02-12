// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

#include "order.h"

FitsOrder::FitsOrder(FitsFile* fits, FitsHead* hdr, char* data, size_t sz)
{
  head_ = hdr;
  data_ = data;
  dataSize_ = sz;

  primary_ = fits->primary();
  ext_ = fits->ext();
  inherit_ = fits->inherit();
  byteswap_ = fits->byteswap();
  endian_ = fits->endian();

  // just to make sure
  head_->updateHDU();

  valid_ = 1;
}

FitsOrder::~FitsOrder()
{
  if (data_)
    delete [] (char*)data_;
}


FitsOrderNext::FitsOrderNext(FitsFile* prev)
{
  primary_ = prev->primary();
  managePrimary_ = 0;

  head_ = prev->head();
  manageHead_ = 0;

  FitsImageHDU* hdu = (FitsImageHDU*)head_->hdu();
  data_ = (char*)prev->data() + hdu->imgbytes();
  dataSize_ = 0;
  dataSkip_ = 0;

  ext_ = prev->ext();
  inherit_ = prev->inherit();
  byteswap_ = prev->byteswap();
  endian_ = prev->endian();
  valid_ = 1;

  return;
}

/*
FitsOrder::FitsOrder(FitsFile* fits, int order)
{
  FitsHead* src = fits->head();

  width_ = src->naxis(0);
  height_ = src->naxis(1);
  depth_ =  src->naxis(2);
  if (width_<1)
    width_ = 1;
  if (height_<1)
    height_ = 1;
  if (depth_<1)
    depth_=1;
  size_ = (size_t)width_*height_*depth_;

  primary_ = fits->primary();
  ext_ = fits->ext();
  inherit_ = fits->inherit();
  byteswap_ = fits->byteswap();
  endian_ = fits->endian();

  bitpix_ = src->hdu()->bitpix();
  switch (bitpix_) {
  case 8:
    if (!(data_ = new char[size_]))
      return;
    dataSize_ = size_*sizeof(char);
    pixelSize_ = 1;
    break;
  case 16:
    if (!(data_ = new short[size_]))
      return;
    dataSize_ = size_*sizeof(short);
    pixelSize_ = 2;
    break;
  case -16:
    if (!(data_ = new unsigned short[size_]))
      return;
    dataSize_ = size_*sizeof(unsigned short);
    pixelSize_ = 2;
    break;
  case 32:
    if (!(data_ = new int[size_]))
      return;
    dataSize_ = size_*sizeof(int);
    pixelSize_ = 4;
    break;
  case -32:
    if (!(data_ = new float[size_]))
      return;
    dataSize_ = size_*sizeof(float);
    pixelSize_ = 4;
    break;
  case 64:
    if (!(data_ = new long long[size_]))
      return;
    dataSize_ = size_*sizeof(long long);
    pixelSize_ = 8;
    break;
  case -64:
    if (!(data_ = new double[size_]))
      return;
    dataSize_ = size_*sizeof(double);
    pixelSize_ = 8;
    break;
  }
  dataSkip_ = 0;
  memset(data_, 0, dataSize_);
  
  initHeader(fits, order);
  reorder(fits, order);
    
  // made it this far, must be valid
  valid_ = 1;
}

FitsOrder::~FitsOrder()
{
  if (data_)
    delete [] (char*)data_;
}

void FitsOrder::initHeader(FitsFile* fits, int order)
{
  head_ = new FitsHead(*(fits->head()));

  // NAXIS
  int a1 = head_->getInteger("NAXIS1",1);
  int a2 = head_->getInteger("NAXIS2",1);
  int a3 = head_->getInteger("NAXIS3",1);
  int n1,n2,n3;

  switch (order) {
  case 123:
    n1=a1;
    n2=a2;
    n3=a3;
    break;
  case 132:
    n1=a1;
    n2=a3;
    n3=a2;
    break;
  case 213:
    n1=a2;
    n2=a1;
    n3=a3;
    break;
  case 231:
    n1=a2;
    n2=a3;
    n3=a1;
    break;
  case 312:
    n1=a3;
    n2=a1;
    n3=a2;
    break;
  case 321:
    n1=a3;
    n2=a2;
    n3=a1;
    break;
  }
  
  head_->setInteger("NAXES", 3, "");
  head_->setInteger("NAXIS1", n1, "");
  head_->setInteger("NAXIS2", n2, "");
  head_->setInteger("NAXIS3", n3, "");

  head_->updateHDU();
}

void FitsOrder::reorder(FitsFile* fits, int order)
{
  char* src = (char*)fits->data();
  char* dest = (char*)data_;
  char* dptr = dest;
  int s1 = pixelSize_;
  int s2 = width_*pixelSize_;
  int s3 = height_*width_*pixelSize_;

  switch (order) {
  case 123:
    // should not be used, but just in case
    memcpy(dest, src, dataSize_);
    break;
  case 132:
    for (int jj=0; jj<height_; jj++) {
      char* sptr =src+jj*s2;  
      for (int kk=0; kk<depth_; kk++) {
	memcpy(dptr, sptr, s2);
	dptr += s2;
	sptr += s3;
      }
    }
    break;
  case 213:
    for (int kk=0; kk<depth_; kk++) {
      for (int ii=0; ii<width_; ii++) {
	char* sptr =src+kk*s3+ii;
	for (int jj=0; jj<height_; jj++) {
	  memcpy(dptr, sptr, s1);
	  dptr += s1;
	  sptr += s2;
	}
      }
    }
    break;
  case 231:
    for (int ii=0; ii<width_; ii++) {
      for (int kk=0; kk<depth_; kk++) {
	char* sptr =src+kk*s3+ii;
	for (int jj=0; jj<height_; jj++) {
	  memcpy(dptr, sptr, s1);
	  dptr += s1;
	  sptr += s2;
	}
      }
    }
    break;
  case 312:
    for (int jj=0; jj<height_; jj++) {
      for (int ii=0; ii<width_; ii++) {
	char* sptr =src+jj*s2+ii;
	for (int kk=0; kk<depth_; kk++) {
	  memcpy(dptr, sptr, s1);
	  dptr += s1;
	  sptr += s3;
	}
      }
    }
    break;
  case 321:
    for (int ii=0; ii<width_; ii++) {
      for (int jj=0; jj<height_; jj++) {
	char* sptr =src+jj*s2+ii;
	for (int kk=0; kk<depth_; kk++) {
	  memcpy(dptr, sptr, s1);
	  dptr += s1;
	  sptr += s3;
	}
      }
    }
    break;
  }
}
*/
