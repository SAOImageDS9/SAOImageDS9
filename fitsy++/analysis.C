// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "analysis.h"
#include "util.h"

FitsAnalysis::FitsAnalysis(FitsFile* src, int bitpix)
{
  primary_ = src->primary();
  managePrimary_ = 0;

  head_ = new FitsHead(*(src->head()));
  manageHead_ = 1;

  ext_ = src->ext();
  inherit_ = src->inherit();

  int width = head_->naxis(0);
  int height = head_->naxis(1);
  size_t size = (size_t)width*height;

  switch (bitpix) {
  case 8:
    head_->setInteger("BITPIX", 8, "");
    data_ = new unsigned char[size];
    if (data_)
      memset(data_, 0, size*sizeof(unsigned char));
    break;
  case 16:
    head_->setInteger("BITPIX", 16, "");
    data_ = new short[size];
    if (data_)
      memset(data_, 0, size*sizeof(short));
    break;
  case -16:
    head_->setInteger("BITPIX", -16, "");
    data_ = new unsigned short[size];
    if (data_)
      memset(data_, 0, size*sizeof(unsigned short));
    break;
  case 32:
    head_->setInteger("BITPIX", 32, "");
    data_ = new int[size];
    if (data_)
      memset(data_, 0, size*sizeof(int));
    break;
  case 64:
    head_->setInteger("BITPIX", 64, "");
    data_ = new long long[size];
    if (data_)
      memset(data_, 0, size*sizeof(long long));
    break;
  case -32:
    head_->setInteger("BITPIX", -32, "");
    data_ = new float[size];
    if (data_)
      memset(data_, 0, size*sizeof(float));
    break;
  case -64:
    head_->setInteger("BITPIX", -64, "");
    data_ = new double[size];
    if (data_)
      memset(data_, 0, size*sizeof(double));
    break;
  }

  // alloc memory
  if (!data_)
    return;

  // unset BZERO/BSCALE if present
  if (head_->find("BZERO"))
    head_->setReal("BZERO",0,2,NULL);

  if (head_->find("BSCALE"))
    head_->setReal("BSCALE",1,2,NULL);

  head_->updateHDU();

  // made it this far, must be valid
  dataSize_ = size;
  dataSkip_ = 0;
  byteswap_ = 0;
  endian_ = lsb() ? LITTLE : BIG;
  valid_ = 1;
}

FitsAnalysis::~FitsAnalysis()
{
  if (data_)
    delete [] (char*)data_;
}

