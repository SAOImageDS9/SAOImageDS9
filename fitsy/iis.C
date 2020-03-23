// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "iis.h"

FitsIIS::FitsIIS(int width, int height)
{
  // new header
  head_ = new FitsHead(width, height, 1, 8);
  if (!head_->isValid())
    return;

  // alloc memory
  size_t size = (size_t)width*height;
  data_ = new char[size];
  if (!data_)
    return;

  dataSize_ = size;
  dataSkip_ = 0;

  // clear memory
  memset(data_, '\0', size);

  // made it this far, must be valid
  valid_ = 1;
}

FitsIIS::~FitsIIS()
{
  if (data_)
    delete [] (char*)data_;
}

void FitsIIS::erase()
{
  // clear memory
  FitsImageHDU* hdu = (FitsImageHDU*)head_->hdu();
  memset(data_, '\0', hdu->realbytes());
}

char* FitsIIS::get(int xx, int yy, int dx, int dy)
{
  // fill-in in reverse order
  int ll = dx*dy;
  char* dest = new char[ll];
  int ww = head_->naxis(0);
  int hh = head_->naxis(1);

  char* dptr = dest;
  char* sptr = (char*)data_ + ((hh-1)-yy)*ww + xx;

  while (ll>0) {
    memcpy(dptr, sptr, ww);
    sptr -= ww;
    dptr += ww;
    ll -= ww;
  }

  return dest;
}

void FitsIIS::set(const char* src, int xx, int yy, int dx, int dy)
{
  // fill-in in reverse order
  int ll = dx*dy;
  int ww = head_->naxis(0);
  int hh = head_->naxis(1);

  char* sptr = (char*)src;
  char* dptr = (char*)data_ + ((hh-1)-yy)*ww + xx;

  while (ll>0) {
    memcpy(dptr, sptr, ww);
    sptr += ww;
    dptr -= ww;
    ll -= ww;
  }
}

