// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "smap.h"
#include "head.h"

FitsSMap::FitsSMap()
{
  hmapdata_ = NULL;
  hmapsize_ = 0;

  mapdata_ = NULL;
  mapsize_ = 0;
}

FitsFitsSMap::FitsFitsSMap(FitsHead::Memory mem)
{
  if (!valid_)
    return;

  // simple check for fits file
  if (strncmp(hmapdata_,"SIMPLE  ",8) && strncmp(hmapdata_,"XTENSION",8)) {
    data_ = NULL;

    dataSize_ = 0;
    dataSkip_ = 0;

    valid_ = 0;
  }

  head_ = new FitsHead(hmapdata_, hmapsize_, mem);
  if (head_->isValid()) {
    data_ = mapdata_;

    dataSize_ = mapsize_;
    dataSkip_ = 0;

    inherit_ = head_->inherit();
    valid_ = 1;
    return;
  }
  else {
    if (manageHead_ && head_)
      delete head_;
    head_ = NULL;

    if (managePrimary_ && primary_)
      delete primary_;
    primary_ = NULL;

    data_ = NULL;

    dataSize_ = 0;
    dataSkip_ = 0;

    valid_ = 0;
  }
}

FitsENVISMap::FitsENVISMap()
{
  if (!valid_)
    return;

  // reset
  valid_ = 0;

  if (hmapsize_<=0 || hmapsize_>32768)
    return;

  // header
  {
    char* buf = new char[hmapsize_+1];
    char* dptr = buf;
    char* sptr = hmapdata_;
    int cnt =0;
    do {
      *dptr++ = *sptr++;
      cnt++;
    } while (cnt<hmapsize_);
    *dptr = '\0';

    string x(buf);
    istringstream str(x);
    this->parseENVI(str);
    delete [] buf;

    if (!valid_)
      return;

    // reset
    valid_ =0;
  }

  // check to see if we have a nonzero width, height, and bitpix
  if (!validParams())
    return;

  size_t ss = (size_t)pWidth_*pHeight_*pDepth_*abs(pBitpix_)/8;

  // sometimes, offset is not correct
  if (pSkip_ == 0) {
    if (mapsize_ > ss)
      pSkip_ = mapsize_-ss;
  }

  // check to see if dimensions equal mapped space
  if (ss+pSkip_ > mapsize_)
    return;

  // skip to start of data
  data_ = mapdata_ + pSkip_;

  dataSize_ = mapsize_;
  dataSkip_ = pSkip_;

  // new header
  head_ = new FitsHead(pWidth_, pHeight_, pDepth_, pBitpix_);
  if (!head_->isValid())
    return;

  // WCS?
  if (pCRPIX3_ || pCRVAL3_ || pCDELT3_) {
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

  // do we byteswap?
  setByteSwap();

  // so far, so good
  valid_ = 1;
}

FitsFitsNextSMap::FitsFitsNextSMap(FitsFile* p)
{
  FitsSMap* prev = (FitsSMap*)p;

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

  pcoord_ = prev->pcoord();
  pxvalid_ = prev->pxvalid();
  pxmin_ = prev->pxmin();
  pxmax_ = prev->pxmax();
  pyvalid_ = prev->pyvalid();
  pymin_ = prev->pymin();
  pymax_ = prev->pymax();
  pzvalid_ = prev->pzvalid();
  pzmin_ = prev->pzmin();
  pzmax_ = prev->pzmax();
  pbvalid_ = prev->pbvalid();
  pblock_ = prev->pblock();

  mapdata_ = prev->mapdata();
  mapsize_ = prev->mapsize();

  return;
}

