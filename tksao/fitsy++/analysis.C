// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "analysis.h"

FitsAnalysis::FitsAnalysis(FitsFile* src)
{
  primary_ = src->primary();
  managePrimary_ = 0;

  head_ = new FitsHead(*(src->head()));
  manageHead_ = 1;

  ext_ = src->ext();
  inherit_ = src->inherit();

  // change bitpix to double
  head_->setInteger("BITPIX", -64, "");

  // unset BZERO/BSCALE if present
  if (head_->find("BZERO"))
    head_->setReal("BZERO",0,2,NULL);

  if (head_->find("BSCALE"))
    head_->setReal("BSCALE",1,2,NULL);

  head_->updateHDU();

  int width = head_->naxis(0);
  int height = head_->naxis(1);

  // alloc memory
  size_t size = (size_t)width*height;
  data_ = new double[size];
  if (!data_)
    return;

  dataSize_ = size;
  dataSkip_ = 0;

  // clear memory
  memset(data_, 0, size*sizeof(double));

  // made it this far, must be valid
  byteswap_ = 0;
  endian_ = lsb() ? LITTLE : BIG;
  valid_ = 1;
}

FitsAnalysis::~FitsAnalysis()
{
  if (data_)
    delete [] (char*)data_;
}

