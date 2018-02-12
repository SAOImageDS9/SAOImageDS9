// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "fitsimage.h"
#include "nrrdgzip.h"

void FitsImage::initNRRD()
{
  if (post_)
    delete post_;
  post_ = NULL;

  switch (fits_->pEncoding()) {
  case FitsFile::RAW:
    break;
  case FitsFile::GZIP:
    switch (fits_->pBitpix()) {
    case 8: 
      post_ = new FitsNRRDGzipm<unsigned char>(fits_);
      break;
    case 16:
      post_ = new FitsNRRDGzipm<short>(fits_);
      break;
    case -16:
      post_ = new FitsNRRDGzipm<unsigned short>(fits_);
      break;
    case 32:
      post_ = new FitsNRRDGzipm<int>(fits_);
      break;
    case 64:
      post_ = new FitsNRRDGzipm<long long>(fits_);
      break;
    case -32:
      post_ = new FitsNRRDGzipm<float>(fits_);
      break;
    case -64:
      post_ = new FitsNRRDGzipm<double>(fits_);
      break;
    }
    break;
  default:
    break;
  }

  return;
}
