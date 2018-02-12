// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "fitsimage.h"
#include "compress.h"
#include "rice.h"
#include "gzip.h"
#include "hcompress.h"
#include "plio.h"

void FitsImage::initCompress()
{
  int bitpix = fits_->getInteger("ZBITPIX",0);
  char* type = fits_->getString("ZCMPTYPE");
  if (!bitpix || !type)
    return ;

  if (post_)
    delete post_;
  post_ = NULL;

  if (!strncmp(type,"RICE_1",6) || !(strncmp(type,"RICE_ONE",8)))
    switch (bitpix) {
    case 8: 
      post_ = new FitsRicem<unsigned char>(fits_);
      break;
    case 16:
      post_ = new FitsRicem<short>(fits_);
      break;
    case -16:
      post_ = new FitsRicem<unsigned short>(fits_);
      break;
    case 32:
      post_ = new FitsRicem<int>(fits_);
      break;
    case 64:
      post_ = new FitsRicem<long long>(fits_);
      break;
    case -32:
      post_ = new FitsRicem<float>(fits_);
      break;
    case -64:
      post_ = new FitsRicem<double>(fits_);
      break;
    }
  else if (!strncmp(type,"GZIP_1",6) || !strncmp(type,"GZIP_2",6))
    switch (bitpix) {
    case 8: 
      post_ = new FitsGzipm<unsigned char>(fits_);
      break;
    case 16:
      post_ = new FitsGzipm<short>(fits_);
      break;
    case -16:
      post_ = new FitsGzipm<unsigned short>(fits_);
      break;
    case 32:
      post_ = new FitsGzipm<int>(fits_);
      break;
    case 64:
      post_ = new FitsGzipm<long long>(fits_);
      break;
    case -32:
      post_ = new FitsGzipm<float>(fits_);
      break;
    case -64:
      post_ = new FitsGzipm<double>(fits_);
      break;
    }
  else if (!strncmp(type,"PLIO_1",6))
    switch (bitpix) {
    case 8: 
      post_ = new FitsPliom<unsigned char>(fits_);
      break;
    case 16:
      post_ = new FitsPliom<short>(fits_);
      break;
    case -16:
      post_ = new FitsPliom<unsigned short>(fits_);
      break;
    case 32:
      post_ = new FitsPliom<int>(fits_);
      break;
    case 64:
      post_ = new FitsPliom<long long>(fits_);
      break;
    case -32:
      post_ = new FitsPliom<float>(fits_);
      break;
    case -64:
      post_ = new FitsPliom<double>(fits_);
      break;
    }
  else if (!strncmp(type,"HCOMPRESS_1",11))
    switch (bitpix) {
    case 8: 
      post_ = new FitsHcompressm<unsigned char>(fits_);
      break;
    case 16:
      post_ = new FitsHcompressm<short>(fits_);
      break;
    case -16:
      post_ = new FitsHcompressm<unsigned short>(fits_);
      break;
    case 32:
      post_ = new FitsHcompressm<int>(fits_);
      break;
    case 64:
      post_ = new FitsHcompressm<long long>(fits_);
      break;
    case -32:
      post_ = new FitsHcompressm<float>(fits_);
      break;
    case -64:
      post_ = new FitsHcompressm<double>(fits_);
      break;
    }
  else {
    ; // unknown compression type
  }

  return;
}
