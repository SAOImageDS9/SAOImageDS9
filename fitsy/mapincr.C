// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "mapincr.h"
#include "util.h"

#ifndef __WIN32

#include <unistd.h>
#include <limits.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/mman.h>

#include "head.h"

//#define PAGELIMIT 1073741824
#define PAGELIMIT 536870912

// FitsMapIncr

FitsMapIncr::FitsMapIncr()
{
  mapdata_ = NULL;
  mapsize_ = 0;
  page_ = 0;

  filesize_ = 0;
  seek_ = 0;

  dseek_ = 0;
  nseek_ = 0;
}

FitsMapIncr::~FitsMapIncr()
{
  if (mapdata_)
    munmap((caddr_t)mapdata_, mapsize_);
}

FitsHead* FitsMapIncr::headRead()
{
  // NOTE: the hdu cleans up after the hdu, 
  // here we only clean up after the data segment

  // mmap will return valid if seek_ is at end of file, so check first
  if (filesize_-seek_<=0)
    return NULL;

  // read first BLOCK
  // seek_ needs to be an increment of getpagesize
  int pagesize = getpagesize();
  off_t mmseek = (seek_/pagesize)*pagesize;
  size_t offset = seek_ - mmseek;

  int fd = open(pName_, O_RDONLY);
  size_t mmsize = offset+FTY_BLOCK;
  char* mmdata = (char*)mmap(NULL, mmsize, PROT_READ, MAP_SHARED, fd, mmseek);
  close(fd);

  // are we valid?
  if ((long)mmdata == -1)
    return NULL;

  // simple test
  if (strncmp(mmdata+offset,"SIMPLE  ",8) && 
      strncmp(mmdata+offset,"XTENSION",8)) {
    munmap((caddr_t)mmdata, mmsize);
    return NULL;
  }

  // can we find 'END'?
  while (mmsize-offset-FTY_BLOCK < filesize_-seek_) {
    if (findEnd(mmdata+mmsize-FTY_BLOCK))
      break;

    // add another BLOCK
    munmap((caddr_t)mmdata, mmsize);
    fd = open(pName_, O_RDONLY);
    mmdata = (char*)mmap(NULL, mmsize+FTY_BLOCK, PROT_READ, MAP_SHARED, 
			  fd, mmseek);
    close(fd);

    // are we valid?
    if ((long)mmdata == -1)
      return NULL;

    mmsize += FTY_BLOCK;
  }

  // do we have a header?
  FitsHead* hd = new FitsHead(mmdata+offset, mmsize-offset, 
			      mmdata, mmsize, FitsHead::MMAP);
  if (!hd || !hd->isValid()) {
    delete hd;
    return NULL;
  }

  seek_ += mmsize-offset;

  // success!
  return hd;
}

void FitsMapIncr::dataSkip(size_t bytes)
{
  seek_ += bytes;
}

void FitsMapIncr::dataSkipBlock(size_t blk)
{
  seek_ += blk*FTY_BLOCK;
}

void FitsMapIncr::found()
{
  // at this point we mmap the data segment

  // must find a page boundary
  int pagesize = getpagesize();
  off_t mmseek = (seek_/pagesize)*pagesize;
  size_t offset = seek_ - mmseek;

  int fd = open(pName_, O_RDONLY);

  // determine internal page mode
  if (!head_->isTable() || !head_->isAsciiTable() || head_->isHeap()) {
    // no internal paging
    mapsize_ = head_->databytes()+offset;
    page_ = 0;
  }
  else {
    // if mapsize_ will exceed our inernal page limit, turn on internal paging
    if (head_->databytes()+offset > PAGELIMIT) {
      mapsize_ = PAGELIMIT;
      page_ = 1;

      dseek_ = seek_;
      nseek_ = seek_-offset;
    }
    else {
      // small enough, no internal paging
      mapsize_ = head_->databytes()+offset;
      page_ = 0;
    }
  }
  mapdata_ = (char*)mmap(NULL, mapsize_, PROT_READ, MAP_SHARED, fd, mmseek);
  close(fd);

  // are we valid? (we'd better be!)
  if ((long)mapdata_ == -1) {
    mapsize_ = 0;
    mapdata_ = NULL;
    error();
    return;
  }

  // seek to next hdu, even if we are internal paging
  seek_ += head_->databytes();
  // data starts after any page boundary
  data_ = mapdata_+offset;

  dataSize_ = mapsize_;
  dataSkip_ = 0;

  inherit_ = head_->inherit();
  valid_ = 1;
}

char* FitsMapIncr::page(char* ptr, size_t row)
{
  if (!page_)
    // no paging, just return
    return ptr;
  else {
    // be sure that at least 'row' bytes are still available
    if (ptr <= mapdata_+mapsize_-row)
      // no problem yet
      return ptr;
    else {
      // how far did we get
      nseek_ += ptr-mapdata_;
      // unmap the old segment
      munmap((caddr_t)mapdata_, mapsize_);

      // next mmap segment
      int pagesize = getpagesize();
      off_t mmseek = (nseek_/pagesize)*pagesize;
      size_t offset = nseek_ - mmseek;

      int fd = open(pName_, O_RDONLY);

      // calc next internal page size
      if (head_->databytes()+offset-(nseek_-dseek_) > PAGELIMIT)
	mapsize_ = PAGELIMIT;
      else
	mapsize_ = head_->databytes()+offset-(nseek_-dseek_);

      mapdata_ =(char*)mmap(NULL, mapsize_, PROT_READ, MAP_SHARED, fd, mmseek);
      close(fd);

      // are we valid? (we'd better be!)
      if ((long)mapdata_ == -1) {
      //*** what to do here?
	internalError("Fitsy++ mapincr page() error");
	mapsize_ = 0;
	mapdata_ = NULL;
      }

      nseek_ -= offset;
      return mapdata_+offset;
    }
  }
}

void FitsMapIncr::resetpage()
{
  if (page_) {
    // ok, get a new page
    munmap((caddr_t)mapdata_, mapsize_);

    // remap original page
    int pagesize = getpagesize();
    off_t mmseek = (dseek_/pagesize)*pagesize;
    size_t offset = dseek_ - mmseek;

    int fd = open(pName_, O_RDONLY);

    if (head_->databytes()+offset > PAGELIMIT)
      mapsize_ = PAGELIMIT;
    else
      mapsize_ = head_->databytes()+offset;

    mapdata_ =(char*)mmap(NULL, mapsize_, PROT_READ, MAP_SHARED, fd, mmseek);
    close(fd);

    // are we valid? (we'd better be!)
    if ((long)mapdata_ == -1) {
      //*** what to do here?
      internalError("Fitsy++ mapincr resetpage() error");
      mapsize_ = 0;
      mapdata_ = NULL;
    }

    // reset, we may have moved in memory
    // found the data, save it
    nseek_ = dseek_-offset;
    data_ = mapdata_+offset;

    dataSize_ = mapsize_;
    dataSkip_ = offset;
  }    
}

void FitsMapIncr::error()
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

// FitsMapIncr

FitsFitsMapIncr::FitsFitsMapIncr()
{
  if (!valid_)
    return;

  // we are only looking for a primary image
  head_ = headRead();
  if (head_ && head_->isValid())
    found();
}

FitsFitsMapIncr::FitsFitsMapIncr(ScanMode mode)
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

void FitsFitsMapIncr::processExactImage()
{
  // simple check for fits file
  if (!(pExt_ || (pIndex_>0))) {

    // we are only looking for a primary image
    head_ = headRead();
    if (head_ && head_->isValid()) {
      found();
      return;
    }
  }
  else {

    // we are looking for an extension
    // keep the primary header
    primary_ = headRead();
    managePrimary_ = 1;
    if (!(primary_  && primary_->isValid())) {
      error();
      return;
    }
    dataSkipBlock(primary_->datablocks());

    if (pExt_) {
      while (seek_ < filesize_) {
	head_ = headRead();
	if (!(head_ && head_->isValid())) {
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
	    found();
	    return;
	  }
	  delete [] a;
	  delete [] b;
	}
	dataSkipBlock(head_->datablocks());
	delete head_;
	head_ = NULL;
      }
    }
    else {
      for (int i=1; i<pIndex_ && seek_<filesize_; i++) {
	head_ = headRead();
	if (!(head_ && head_->isValid())) {
	  error();
	  return;
	}
	ext_++;

	dataSkipBlock(head_->datablocks());
	delete head_;
	head_ = NULL;
      }

      head_ = headRead();
      if (head_ && head_->isValid()) {
	ext_++;
	found();
	return;
      }
    }
  }

  // Must have an error
  error();
}

void FitsFitsMapIncr::processRelaxImage()
{
  // check to see if there is an image in the primary
  head_ = headRead();
  if (!(head_ && head_->isValid())) {
    error();
    return;
  }

  if (head_->naxes() > 0 && 
      head_->naxis(0) > 0 && 
      head_->naxis(1) > 0) {
    found();
    return;
  }

  // ok, no image, save primary and lets check extensions
  primary_ = head_;
  managePrimary_ = 1;
  dataSkipBlock(head_->datablocks());
  head_ = NULL;

  while (seek_ < filesize_) {
    head_ = headRead();
    if (!(head_ && head_->isValid())) {
      error();
      return;
    }
    ext_++;

    // check for image
    if (head_->isImage()) {
      found();
      return;
    }

    // else, check for compressed image
    if (head_->isBinTable() && head_->find("ZIMAGE")) {
      found();
      return;
    }

    // else, check for bin table named STDEVT, EVENTS, RAYEVENT
    if (head_->isBinTable() && head_->extname()) {
      char* a = toUpper(head_->extname());
      if (!strncmp("STDEVT", a, 6) ||
	  !strncmp("EVENTS", a, 6) ||
	  !strncmp("RAYEVENT", a, 8)) {
	delete [] a;
	found();
	return;
      }
      else
	delete [] a;
    }

    // else, check for bin table with keyword PIXTYPE = 'HEALPIX '
    if (head_->isBinTable() && head_->find("PIXTYPE") &&
	(!strncmp(head_->getString("PIXTYPE"),"HEALPIX",4))) {
      found();
      return;
    }

    // else, check for bin table with keyword NSIDE (also HEALPIX)
    if (head_->isBinTable() && head_->find("NSIDE")) {
      found();
      return;
    }

    dataSkipBlock(head_->datablocks());
    delete head_;
    head_ = NULL;
  }

  // did not find anything, bail out
  error();
}

void FitsFitsMapIncr::processExactTable()
{
  // we are looking for an extension
  // keep the primary header
  primary_ = headRead();
  managePrimary_ = 1;
  if (!(primary_  && primary_->isValid())) {
    error();
    return;
  }
  dataSkipBlock(primary_->datablocks());

  if (pExt_) {
    while (seek_ < filesize_) {
      head_ = headRead();
      if (!(head_ && head_->isValid())) {
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
	  found();
	  return;
	}
	delete [] a;
	delete [] b;
      }
      dataSkipBlock(head_->datablocks());
      delete head_;
      head_ = NULL;
    }
  }
  else {
    for (int i=1; i<pIndex_ && seek_<filesize_; i++) {
      head_ = headRead();
      if (!(head_ && head_->isValid())) {
	error();
	return;
      }
      ext_++;

      dataSkipBlock(head_->datablocks());
      delete head_;
      head_ = NULL;
    }

    head_ = headRead();
    if (head_ && head_->isValid()) {
      ext_++;
      found();
      return;
    }
  }

  // Must have an error
  error();
}

void FitsFitsMapIncr::processRelaxTable()
{
  // check primary
  head_ = headRead();
  if (!(head_ && head_->isValid())) {
    error();
    return;
  }

  // save primary and lets check extensions
  primary_ = head_;
  managePrimary_ = 1;
  dataSkipBlock(head_->datablocks());
  head_ = NULL;

  while (seek_ < filesize_) {
    head_ = headRead();
    if (!(head_ && head_->isValid())) {
      error();
      return;
    }
    ext_++;

    // check for table
    if (head_->isBinTable()) {
      found();
      return;
    }

    dataSkipBlock(head_->datablocks());
    delete head_;
    head_ = NULL;
  }

  // did not find anything, bail out
  error();
}

FitsFitsNextMapIncr::FitsFitsNextMapIncr(FitsFile* p)
{
  FitsMapIncr* prev = (FitsMapIncr*)p;

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

  filesize_ = prev->filesize();
  seek_ = prev->seek();

  return;
}

FitsArrMapIncr::FitsArrMapIncr()
{
  if (!valid_)
    return;

  // reset
  valid_ = 0;

  // check to see if we have a nonzero width, height, and bitpix
  if (!validParams())
    return;

  // check to see if dimensions equal mapped space
  size_t mmsize = ((size_t)pWidth_*pHeight_*pDepth_*abs(pBitpix_)/8) + pSkip_;

  if (mmsize > filesize_)
    return;

  // skip to start of data
  int fd = open(pName_, O_RDONLY);
  char* mmdata = (char*)mmap(NULL, mmsize, PROT_READ, MAP_SHARED, fd, 0);
  close(fd);

  // are we valid?
  if ((long)mmdata == -1)
    return;

  // new header
  head_ = new FitsHead(pWidth_, pHeight_, pDepth_, pBitpix_, 
		       mmdata, mmsize, FitsHead::ALLOC);
  if (!head_->isValid())
    return;

  seek_ = mmsize;
  data_ = mmdata + pSkip_;

  dataSize_ = mapsize_;
  dataSkip_ = pSkip_;

  // do we byteswap?
  setByteSwap();

  // made it this far, must be valid
  valid_ = 1;
}

FitsMosaicMapIncr::FitsMosaicMapIncr()
{
  if (!valid_)
    return;

  // keep the primary header
  primary_ = headRead();
  managePrimary_ = 1;
  if (!(primary_ && primary_->isValid())) {
    error();
    return;
  }
  dataSkipBlock(primary_->datablocks());

  // first extension
  head_ = headRead();
  if (!(head_ && head_->isValid())) {
    error();
    return;
  }
  ext_++;
  found();
}

FitsMosaicNextMapIncr::FitsMosaicNextMapIncr(FitsFile* p)
{
  FitsMapIncr* prev = (FitsMapIncr*)p;

  pName_ = dupstr(prev->pName());
  filesize_ = prev->filesize();
  seek_ = prev->seek();

  primary_ = prev->primary();
  managePrimary_ = 0;
  ext_ = prev->ext();

  head_ = headRead();
  if (!(head_ && head_->isValid())) {
    error();
    return;
  }
  ext_++;
  found();
}

#else

FitsMapIncr::FitsMapIncr()
{
  mapdata_ = NULL;
  mapsize_ = 0;
}

FitsMapIncr::~FitsMapIncr() {}

FitsHead* FitsMapIncr::headRead() {}
void FitsMapIncr::dataSkip(size_t bytes) {}
void FitsMapIncr::dataSkipBlock(size_t blk) {}
void FitsMapIncr::found() {}
char* FitsMapIncr::page(char* ptr, size_t row)
{
  return NULL;
}
void FitsMapIncr::resetpage() {}
void FitsMapIncr::error() {}
FitsFitsMapIncr::FitsFitsMapIncr() {}
FitsFitsMapIncr::FitsFitsMapIncr(ScanMode mode) {}
void FitsFitsMapIncr::processExactImage() {}
void FitsFitsMapIncr::processRelaxImage() {}

FitsFitsNextMapIncr::FitsFitsNextMapIncr(FitsFile* p) {}
FitsArrMapIncr::FitsArrMapIncr() {}
FitsMosaicMapIncr::FitsMosaicMapIncr() {}
FitsMosaicNextMapIncr::FitsMosaicNextMapIncr(FitsFile* p) {}
#endif
