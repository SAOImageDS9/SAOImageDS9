// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "map.h"
#include "head.h"
#include "util.h"

// FitsMap

FitsMap::FitsMap()
{
  mapdata_ = NULL;
  mapsize_ = 0;
}

char* FitsMap::enddata()
{
  // return the address of the first data byte pass the end of data
  return head_ ? (char*)data_+head_->databytes() : NULL;
}

size_t FitsMap::endsize()
{
  // return the size - (header+data)
  return head_ ? 
    (mapsize_ - (size_t)((char*)data_+head_->databytes()-mapdata_)) : 0;
}

void FitsMap::found(char* here)
{
  data_ = here + head_->headbytes();

  dataSize_ = mapsize_;
  dataSkip_ = here - mapdata_ + head_->headbytes();

  inherit_ = head_->inherit();
  valid_ = 1;
}

void FitsMap::error()
{
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

// FitsFitsMap

FitsFitsMap::FitsFitsMap()
{
  if (!valid_)
    return;

  // find head and data for specified unit
  char* here = mapdata_;
  size_t size = mapsize_;

  // simple check for fits file
  if (strncmp(mapdata_,"SIMPLE  ",8)) {
    error();
    return;
  }

  // we are only looking for a primary image
  head_ = new FitsHead(here, size, FitsHead::EXTERNAL);
  if (head_->isValid())
    found(here);
}

FitsFitsMap::FitsFitsMap(ScanMode mode)
{
  if (!valid_)
    return;

  if (pExt_ || pIndex_>-1) {
    switch (mode) {
    case FitsFile::EXACTIMAGE:
    case FitsFile::RELAXIMAGE:
      processExactImage();
      return;
    case FitsFile::EXACTTABLE:
    case FitsFile::RELAXTABLE:
      processExactTable();
      return;
    }
  }
  else {
    switch (mode) {
    case FitsFile::EXACTIMAGE:
      processExactImage();
      return;
    case FitsFile::RELAXIMAGE:
      processRelaxImage();
      return;
    case FitsFile::EXACTTABLE:
      processExactTable();
      return;
    case FitsFile::RELAXTABLE:
      processRelaxTable();
      return;
    }
  }
}

void FitsFitsMap::processExactImage()
{
  // find head and data for specified unit
  char* here = mapdata_;
  size_t size = mapsize_;

  // simple check for fits file
  if (strncmp(mapdata_,"SIMPLE  ",8) && strncmp(mapdata_,"XTENSION",8)) {
    error();
    return;
  }

  if (!(pExt_ || (pIndex_>0))) {
    // we are only looking for a primary image
    head_ = new FitsHead(here, size, FitsHead::EXTERNAL);
    if (head_->isValid()) {
      found(here);
      return;
    }
  }
  else {

    // we are looking for an extension
    // keep the primary header
    primary_ = new FitsHead(here, size, FitsHead::EXTERNAL);
    managePrimary_ = 1;
    if (!primary_->isValid()) {
      error();
      return;
    }
    here += primary_->headbytes() + primary_->databytes();
    size -= primary_->headbytes() + primary_->databytes();

    if (pExt_) {
      while (size > 0) {
	head_ = new FitsHead(here, size, FitsHead::EXTERNAL);
	if (!head_->isValid()) {
	  error();
	  return;
	}
	ext_++;

	if (head_->extname()) {
	  char* a = toUpper(head_->extname());
	  char* b = toUpper(pExt_);
	  if (!strncmp(a,b,strlen(b))) {
	    delete [] a;
	    delete [] b;
	    found(here);
	    return;
	  }
	  delete [] a;
	  delete [] b;
	}

	here += head_->headbytes() + head_->databytes();
	size -= head_->headbytes() + head_->databytes();
	delete head_;
	head_ = NULL;
      }
    }
    else {
      for (int i=1; i<pIndex_ && size>0; i++) {
	head_ = new FitsHead(here, size, FitsHead::EXTERNAL);
	if (!head_->isValid()) {
	  error();
	  return;
	}
	ext_++;

	here += head_->headbytes() + head_->databytes();
	size -= head_->headbytes() + head_->databytes();
	delete head_;
	head_ = NULL;
      }

      head_ = new FitsHead(here, size, FitsHead::EXTERNAL);
      if (head_->isValid()) {
	ext_++;
	found(here);
	return;
      }
    }
  }

  // Must have an error
  error();
}

void FitsFitsMap::processRelaxImage()
{
  char* here = mapdata_;
  size_t size = mapsize_;

  // simple check for fits file
  if (strncmp(mapdata_,"SIMPLE  ",8) && strncmp(mapdata_,"XTENSION",8)) {
    error();
    return;
  }

  // check to see if there is an image in the primary
  head_ = new FitsHead(here, size, FitsHead::EXTERNAL);
  if (head_->isValid() && 
      head_->naxes() > 0 && 
      head_->naxis(0) > 0 && 
      head_->naxis(1) > 0) {
    found(here);
    return;
  }

  // ok, no image, save primary and lets check extensions
  here += head_->headbytes() + head_->databytes();
  size -= head_->headbytes() + head_->databytes();
  primary_ = head_;
  managePrimary_ = 1;
  head_ = NULL;

  while (size > 0) {
    head_ = new FitsHead(here, size, FitsHead::EXTERNAL);
    if (!head_->isValid()) {
      error();
      return;
    }
    ext_++;

    // check for image
    if (head_->isImage()) {
      found(here);
      return;
    }

    // else, check for compressed image
    if (head_->isBinTable() && head_->find("ZIMAGE")) {
      found(here);
      return;
    }

    // else, check for bin table named STDEVT, EVENTS, RAYEVENT
    if (head_->isBinTable() && head_->extname()) {
      char* a = toUpper(head_->extname());
      if (!strncmp("STDEVT", a, 6) ||
	  !strncmp("EVENTS", a, 6) ||
	  !strncmp("RAYEVENT", a, 8)) {
	delete [] a;
	found(here);
	return;
      }
    }

    // else, check for bin table with keyword PIXTYPE = 'HEALPIX '
    if (head_->isBinTable() && head_->find("PIXTYPE") &&
	(!strncmp(head_->getString("PIXTYPE"),"HEALPIX",4))) {
      found(here);
      return;
    }

    // else, check for bin table with keyword NSIDE (also HEALPIX)
    if (head_->isBinTable() && head_->find("NSIDE")) {
      found(here);
      return;
    }

    here += head_->headbytes() + head_->databytes();
    size -= head_->headbytes() + head_->databytes();
    delete head_;
    head_ = NULL;
  }

  // did not find anything, bail out
  error();
}

void FitsFitsMap::processExactTable()
{
  // find head and data for specified unit
  char* here = mapdata_;
  size_t size = mapsize_;

  // simple check for fits file
  if (strncmp(mapdata_,"SIMPLE  ",8) && strncmp(mapdata_,"XTENSION",8)) {
    error();
    return;
  }

  // we are looking for an extension
  // keep the primary header
  primary_ = new FitsHead(here, size, FitsHead::EXTERNAL);
  managePrimary_ = 1;
  if (!primary_->isValid()) {
    error();
    return;
  }
  here += primary_->headbytes() + primary_->databytes();
  size -= primary_->headbytes() + primary_->databytes();

  if (pExt_) {
    while (size > 0) {
      head_ = new FitsHead(here, size, FitsHead::EXTERNAL);
      if (!head_->isValid()) {
	error();
	return;
      }
      ext_++;

      if (head_->extname()) {
	char* a = toUpper(head_->extname());
	char* b = toUpper(pExt_);
	if (!strncmp(a,b,strlen(b))) {
	  delete [] a;
	  delete [] b;
	  found(here);
	  return;
	}
	delete [] a;
	delete [] b;
      }

      here += head_->headbytes() + head_->databytes();
      size -= head_->headbytes() + head_->databytes();
      delete head_;
      head_ = NULL;
    }
  }
  else {
    for (int i=1; i<pIndex_ && size>0; i++) {
      head_ = new FitsHead(here, size, FitsHead::EXTERNAL);
      if (!head_->isValid()) {
	error();
	return;
      }
      ext_++;

      here += head_->headbytes() + head_->databytes();
      size -= head_->headbytes() + head_->databytes();
      delete head_;
      head_ = NULL;
    }

    head_ = new FitsHead(here, size, FitsHead::EXTERNAL);
    if (head_->isValid()) {
      ext_++;
      found(here);
      return;
    }
  }

  // Must have an error
  error();
}

void FitsFitsMap::processRelaxTable()
{
  char* here = mapdata_;
  size_t size = mapsize_;

  // simple check for fits file
  if (strncmp(mapdata_,"SIMPLE  ",8) && strncmp(mapdata_,"XTENSION",8)) {
    error();
    return;
  }

  // check primary
  head_ = new FitsHead(here, size, FitsHead::EXTERNAL);
  if (!head_->isValid()) {
    error();
    return;
  }

  // save primary and lets check extensions
  here += head_->headbytes() + head_->databytes();
  size -= head_->headbytes() + head_->databytes();
  primary_ = head_;
  managePrimary_ = 1;
  head_ = NULL;

  while (size > 0) {
    head_ = new FitsHead(here, size, FitsHead::EXTERNAL);
    if (!head_->isValid()) {
      error();
      return;
    }
    ext_++;

    // check for table
    if (head_->isBinTable()) {
      found(here);
      return;
    }

    here += head_->headbytes() + head_->databytes();
    size -= head_->headbytes() + head_->databytes();
    delete head_;
    head_ = NULL;
  }

  // did not find anything, bail out
  error();
}

FitsFitsNextMap::FitsFitsNextMap(FitsFile* p)
{
  FitsMap* prev = (FitsMap*)p;

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

FitsArrMap::FitsArrMap()
{
  if (!valid_)
    return;

  // reset
  valid_ = 0;

  // check to see if we have a nonzero width, height, and bitpix
  if (!validParams())
    return;

  // check to see if dimensions equal mapped space
  if (((size_t)pWidth_*pHeight_*pDepth_*abs(pBitpix_)/8)+pSkip_ > mapsize_)
    return;

  // skip to start of data
  data_ = mapdata_ + pSkip_;

  dataSize_ = mapsize_;
  dataSkip_ = pSkip_;

  // new header
  head_ = new FitsHead(pWidth_, pHeight_, pDepth_, pBitpix_);
  if (!head_->isValid())
    return;

  // do we byteswap?
  setByteSwap();

  // made it this far, must be valid
  valid_ = 1;
}

FitsNRRDMap::FitsNRRDMap()
{
  if (!valid_)
    return;

  // reset
  valid_ = 0;

  // header
  {
    char buf[1024];
    char* dptr = buf;
    char* sptr = mapdata_;
    int cnt =0;
    do {
      *dptr++ = *sptr++;
      if (cnt>0 && (*sptr == '\n' && *(sptr-1) == '\n')) {
	pSkip_ = cnt+2;
	break;
      }
      cnt++;
    } while (cnt<1024);
    *dptr = '\0';

    string x(buf);
    istringstream str(x);
    parseNRRD(str);
    if (!valid_)
      return;

    // reset
    valid_ =0;
  }

  // check to see if we have a nonzero width, height, and bitpix
  if (!validParams())
    return;

  // skip to start of data
  data_ = mapdata_ + pSkip_;

  dataSize_ = mapsize_;
  dataSkip_ = pSkip_;

  // new header
  head_ = new FitsHead(pWidth_, pHeight_, pDepth_, pBitpix_);
  if (!head_->isValid())
    return;

  // do we byteswap?
  setByteSwap();

  // so far, so good
  valid_ = 1;
}

FitsMosaicMap::FitsMosaicMap()
{
  if (!valid_)
    return;

  char* here = mapdata_;
  size_t size = mapsize_;

  // keep the primary header
  primary_ = new FitsHead(here, size, FitsHead::EXTERNAL);
  managePrimary_ = 1;
  if (!primary_->isValid()) {
    error();
    return;
  }

  here += primary_->headbytes() + primary_->databytes();
  size -= primary_->headbytes() + primary_->databytes();

  // first extension
  head_ = new FitsHead(here, size, FitsHead::EXTERNAL);
  if (!head_->isValid()) {
    error();
    return;
  }
  ext_++;
  found(here);
}

FitsMosaicNextMap::FitsMosaicNextMap(FitsFile* p)
{
  FitsMap* prev = (FitsMap*)p;

  primary_ = prev->primary();
  managePrimary_ = 0;
  ext_ = prev->ext();

  mapdata_ = prev->enddata();
  mapsize_ = prev->endsize();

  head_ = new FitsHead(mapdata_, mapsize_, FitsHead::EXTERNAL);
  if (!head_->isValid()) {
    error();
    return;
  }
  ext_++;
  found(mapdata_);
}
