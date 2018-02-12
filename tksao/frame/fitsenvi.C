// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "fitsimage.h"
#include "envi.h"

void FitsImage::initENVI()
{
  if (post_)
    delete post_;
  post_ = NULL;

  switch (fits_->pEncoding()) {
  case FitsFile::BSQ:
    // better not see this
    break;
  case FitsFile::BIL:
    switch (fits_->pBitpix()) {
    case 8: 
      post_ = new FitsENVIBILm<unsigned char>(fits_);
      break;
    case 16:
      post_ = new FitsENVIBILm<short>(fits_);
      break;
    case -16:
      post_ = new FitsENVIBILm<unsigned short>(fits_);
      break;
    case 32:
      post_ = new FitsENVIBILm<int>(fits_);
      break;
    case 64:
      post_ = new FitsENVIBILm<long long>(fits_);
      break;
    case -32:
      post_ = new FitsENVIBILm<float>(fits_);
      break;
    case -64:
      post_ = new FitsENVIBILm<double>(fits_);
      break;
    }
    break;
  case FitsFile::BIP:
    switch (fits_->pBitpix()) {
    case 8: 
      post_ = new FitsENVIBIPm<unsigned char>(fits_);
      break;
    case 16:
      post_ = new FitsENVIBIPm<short>(fits_);
      break;
    case -16:
      post_ = new FitsENVIBIPm<unsigned short>(fits_);
      break;
    case 32:
      post_ = new FitsENVIBIPm<int>(fits_);
      break;
    case 64:
      post_ = new FitsENVIBIPm<long long>(fits_);
      break;
    case -32:
      post_ = new FitsENVIBIPm<float>(fits_);
      break;
    case -64:
      post_ = new FitsENVIBIPm<double>(fits_);
      break;
    }
    break;
  default:
    // na
    break;
  }

  return;
}
