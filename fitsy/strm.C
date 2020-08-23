// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <string.h>
#include <stdio.h>

#ifndef __WIN32
#include <sys/socket.h>
#endif

#include <tcl.h>

#include "strm.h"
#include "util.h"

// FitsStream

template<class T> FitsStream<T>::FitsStream()
{
  stream_ =0;
  flush_ = NOFLUSH;
  dataManage_ = 0;
}

template<class T> FitsStream<T>::~FitsStream()
{
  if (dataManage_ && data_)
    delete [] (T*)data_;
}

// FILE*

template <> size_t FitsStream<FILE*>::read(char* where, size_t size)
{
  // size_t size is unsigned
  long long ss =size;
  size_t rr = 0;
  int r = 0;

  do {
    r = fread(where+rr, 1, (ss>B1MB) ? B1MB : ss, stream_);
    ss -= r;
    rr += r;
  } while (r>0 && rr<size);

  return rr;
}

template <> void FitsStream<FILE*>::close()
{
  fclose(stream_);
}

// Socket

#ifndef __WIN32

template <> size_t FitsStream<int>::read(char* where, size_t size)
{
  // size_t size is unsigned
  long long ss =size;
  size_t rr =0;
  int r;

  do {
    r = recv(stream_ , where+rr, (ss>B4KB) ? B4KB : ss, 0);
    ss -= r;
    rr += r;
  } while (r>0 && rr<size);

  return rr;
}

#else

template <> size_t FitsStream<int>::read(char* where, size_t size)
{
  return 0;
}

#endif

template <> void FitsStream<int>::close() {}

// gzStream

#ifndef __WIN32

template <> size_t FitsStream<gzStream>::read(char* where, size_t size)
{
  // size_t size is unsigned
  long long ss =size;
  size_t rr = 0;
  int r = 0;

  if (stream_->transparent) {
    if (stream_->useHeader) {
      memcpy(where,stream_->header,2);
      ss -= 2;
      rr += 2;
      stream_->useHeader = 0;
    }

    do {
      r = recv(stream_->id , where+rr, (ss>B4KB) ? B4KB : ss, 0);
      ss -= r;
      rr += r;
    } while (r>0 && rr<size);

    return rr;
  }
  else {
    ((z_stream*)stream_)->avail_out = size;
    ((z_stream*)stream_)->next_out = (unsigned char*)where;

    if (DebugGZ)
      cerr << "***read init " << ((z_stream*)stream_)->avail_out 
	   << " bytes" << endl;

    do {
      if (((z_stream*)stream_)->avail_in == 0) {
	((z_stream*)stream_)->next_in = stream_->buf;
	int aa = recv(stream_->id , stream_->buf, B4KB, 0);
	if (aa<0)
	  return rr;

	((z_stream*)stream_)->avail_in = aa;
	if (DebugGZ)
	  cerr << "  read from socket " << aa << " bytes" << endl;
      }

      if (DebugGZ)
	cerr << "  inflate Start: avail_in " 
	     << ((z_stream*)stream_)->avail_in
	     << " avail_out " << ((z_stream*)stream_)->avail_out << endl;

      int before = ((z_stream*)stream_)->avail_out;
      int result = inflate(((z_stream*)stream_), Z_NO_FLUSH);
      r = before - ((z_stream*)stream_)->avail_out;
      rr += r;

      switch (result) {
      case Z_OK:
	if (DebugGZ)
	  cerr << "  inflate OK: avail_in " << ((z_stream*)stream_)->avail_in
	       << " avail_out " << ((z_stream*)stream_)->avail_out << endl;
	break;
      case Z_STREAM_END:
	if (DebugGZ)
	  cerr << "  inflate STRM_END: avail_in " 
	       << ((z_stream*)stream_)->avail_in
	       << " avail_out " << ((z_stream*)stream_)->avail_out
	       << " total_in " << ((z_stream*)stream_)->total_in 
	       << " total_out " << ((z_stream*)stream_)->total_out << endl;
	return rr;
      default:
	internalError("Fitsy++ strm inflate error");
	return rr;
      }
    } while (r>0 && rr<size);

    if (DebugGZ)
      cerr << "***read finish" << endl;

    return rr;
  }
}

template <> void FitsStream<gzStream>::close()
{
  if (!stream_->transparent) {
    if (inflateEnd((z_stream*)stream_) != Z_OK)
      internalError("Fitsy++ strm inflateEnd error");

    if (DebugGZ)
      cerr << "inflateEnd: avail_in " << ((z_stream*)stream_)->avail_in
	   << " avail_out " << ((z_stream*)stream_)->avail_out << endl;
  }
}

#else

template <> size_t FitsStream<gzStream>::read(char* where, size_t size)
{
  return 0;
}
template <> void FitsStream<gzStream>::close() {}

#endif

// Tcl_Channel

template <> size_t FitsStream<Tcl_Channel>::read(char* where, size_t size)
{
  // size_t size is unsigned
  long long ss =size;
  size_t rr = 0;
  int r = 0;

  do {
    r = Tcl_Read(stream_, where+rr, (ss>B1MB) ? B1MB : ss);
    ss -= r;
    rr += r;
  } while (r>0 && rr<size);

  return rr;
}

template <> void FitsStream<Tcl_Channel>::close() {}

// gzFile

template <> size_t FitsStream<gzFile>::read(char* where, size_t size)
{
  // size_t size is unsigned
  long long ss =size;
  size_t rr = 0;
  int r = 0;

  do {
    r = gzread(stream_, where+rr, (ss>B1MB) ? B1MB : ss);
    ss -= r;
    rr += r;
  } while (r>0 && rr<size);

  return rr;
}

template <> void FitsStream<gzFile>::close()
{
  gzclose(stream_);
}

template<class T> FitsHead* FitsStream<T>::headRead()
{
  // read first block
  char* cards = new char[FTY_BLOCK];
  if (!cards)
    return NULL;

  memset(cards, ' ', FTY_BLOCK);
  if (read(cards, FTY_BLOCK) != FTY_BLOCK) {
    delete [] cards;
    return NULL;
  }

  // simple FITS file check
  if (strncmp(cards, "SIMPLE  =", 9) && strncmp(cards, "XTENSION=", 9)) {
    delete [] cards;
    return NULL;
  }

  // read remaining blocks
  int numblks = 1;
  char* current = cards;
  while (1) {
    if (findEnd(current))
      break;

    // this is check
    // for TCL channels, the stream gets corrupted, so END is never found
    // so bail out after an extreme number of blocks have been read
    //
    // this does not work because some fits files have 100's or 1000's of
    // history/comments. lets hope a corrupted stream is caught below
    //    if (numblks>10) {
    //      delete [] cards;
    //      return NULL;
    //    }

    char* tmp = new char[(numblks+1)*FTY_BLOCK];
    memcpy(tmp, cards, numblks*FTY_BLOCK);
    delete [] cards;
    cards = tmp;
    current = cards + numblks*FTY_BLOCK;
    memset(current, ' ', FTY_BLOCK);

    if (read(current, FTY_BLOCK) != FTY_BLOCK) {
      delete [] cards;
      return NULL;
    }
    
    numblks++;
  }

  // create header
  FitsHead* fits = new FitsHead(cards, numblks*FTY_BLOCK, FitsHead::ALLOC);
  if (!fits->isValid()) {
    delete fits;
    return NULL;
  }

  return fits;
}

template<class T> int FitsStream<T>::dataRead(size_t bytes, int validate)
{
  data_ = NULL;

  dataSize_ = 0;
  dataSkip_ = 0;
  dataManage_ = 0;

  if (!bytes)
    return 0;

  data_ = new char[bytes];
  if (!data_)
    return 0;

  size_t rr = read((char*)data_, bytes);
  if (validate && rr != bytes) {
    delete (char*)data_;
    data_ = NULL;

    dataSize_ = 0;
    dataSkip_ = 0;
    dataManage_ = 0;

    return 0;
  }

  dataSize_ = bytes;
  dataManage_ = 1;

  return 1;
}

template<class T> void FitsStream<T>::dataSkip(size_t bytes)
{
  // size_t bytes is unsigned
  if (bytes) {
    char block[FTY_BLOCK];

    do {
      read(block, (bytes < FTY_BLOCK ? bytes : FTY_BLOCK));
      if (bytes>FTY_BLOCK)
	bytes -= FTY_BLOCK;
      else
	break;
    } while (1);
  }
}

template<class T> void FitsStream<T>::dataSkipBlock(size_t blk)
{
  char block[FTY_BLOCK];
  for (size_t ii=0; ii<blk; ii++)
    read(block, FTY_BLOCK);
}

template<class T> void FitsStream<T>::skipEnd()
{
  char block[FTY_BLOCK];

  int bytes;
  do
    bytes = read(block, FTY_BLOCK);
  while (bytes > 0);
}

template<class T> void FitsStream<T>::found()
{
  // only read allbytes, since the data seg maybe short
  if (!this->dataRead(head_->allbytes())) {
    error();
    return;
  }

  // read any dead space til next block
  if (head_->padbytes()>0)
    this->dataSkip(head_->padbytes());

  inherit_ = head_->inherit();
  valid_ = 1;

  if (flush_ == FLUSH)
    skipEnd();
}

template<class T> void FitsStream<T>::error()
{
  // try to clean up
  if ((flush_ == FLUSH) && (head_ || primary_))
    skipEnd();

  if (manageHead_ && head_)
    delete head_;
  head_ = NULL;

  if (managePrimary_ && primary_)
    delete primary_;
  primary_ = NULL;

  data_ = NULL;

  dataSize_ = 0;
  dataSkip_ = 0;
  dataManage_ = 0;

  valid_ = 0;
}

template class FitsStream<FILE*>;
template class FitsStream<Tcl_Channel>;
template class FitsStream<int>;
template class FitsStream<gzFile>;
template class FitsStream<gzStream>;

// FitsFitsStream

template<class T> FitsFitsStream<T>::FitsFitsStream(FitsFile::FlushMode f)
{
  if (!this->valid_)
    return;

  this->flush_ = f;

  // we are only looking for a primary image
  this->head_ = this->headRead();
  if (!(this->head_ && this->head_->isValid()))
    this->error();
}

template<class T> FitsFitsStream<T>::FitsFitsStream(FitsFile::ScanMode mode,
						    FitsFile::FlushMode f)
{
  if (!this->valid_)
    return;

  this->flush_ = f;

  if (this->pExt_ || this->pIndex_>-1) {
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

template<class T> void FitsFitsStream<T>::processExactImage()
{
  if (!(this->pExt_ || (this->pIndex_>0))) {

    // we are only looking for a primary image
    this->head_ = this->headRead();
    if (this->head_ && this->head_->isValid()) {
      this->found();
      return;
    }
  }
  else {

    // we are looking for an extension
    // keep the primary header
    this->primary_ = this->headRead();
    this->managePrimary_ = 1;
    if (!(this->primary_ && this->primary_->isValid())) {
      this->error();
      return;
    }
    this->dataSkipBlock(this->primary_->datablocks());

    if (this->pExt_) {
      while (1) {
	if (!(this->head_ = this->headRead())) {
	  this->error();
	  return;
	}
	this->ext_++;

	if (this->head_->extname()) {
	  char* a = toUpper(this->head_->extname());
	  char* b = toUpper(this->pExt_);
	  if (!strncmp(a,b,strlen(b))) {
	    delete [] a;
	    delete [] b;
	    this->found();
	    return;
	  }
	  delete [] a;
	  delete [] b;
	}

	this->dataSkipBlock(this->head_->datablocks());
	delete this->head_;
	this->head_ = NULL;
      }
    }
    else {
      for (int i=1; i<this->pIndex_; i++) {
	if (!(this->head_ = this->headRead())) {
	  this->error();
	  return;
	}
	this->ext_++;

	this->dataSkipBlock(this->head_->datablocks());
	delete this->head_;
	this->head_ = NULL;
      }

      if ((this->head_ = this->headRead())) {
	this->ext_++;
	this->found();
	return;
      }
    }
  }

  // we must have an error
  this->error();
}

template<class T> void FitsFitsStream<T>::processRelaxImage()
{
  // check to see if there is an image in the primary
  this->head_ = this->headRead();
  if (!(this->head_ && this->head_->isValid())) {
    this->error();
    return;
  }

  if (this->head_->naxes() > 0 &&
      this->head_->naxis(0) > 0 &&
      this->head_->naxis(1) > 0) {
    this->found();
    return;
  }

  // ok, no image, save primary and lets check extensions
  this->primary_ = this->head_;
  this->managePrimary_ = 1;
  this->dataSkipBlock(this->head_->datablocks());
  this->head_ = NULL;

  // ok, no image, lets check extensions
  while (1) {
    if (!(this->head_ = this->headRead())) {
      this->error();
      return;
    }
    this->ext_++;

    if (this->head_->isImage()) {
      this->found();
      return;
    }

    // else, check for compressed image
    if (this->head_->isBinTable() && this->head_->find("ZIMAGE")) {
      this->found();
      return;
    }

    // else, check for bin table named STDEVT, EVENTS, RAYEVENT
    if (this->head_->isBinTable() && this->head_->extname()) {
      char* a = toUpper(this->head_->extname());
      if (!strncmp("STDEVT", a, 6) ||
	  !strncmp("EVENTS", a, 6) ||
	  !strncmp("RAYEVENT", a, 8)) {
	delete [] a;
	this->found();
	return;
      }
      else
	delete [] a;
    }

    // else, check for bin table with keyword PIXTYPE = 'HEALPIX '
    if (this->head_->isBinTable() && this->head_->find("PIXTYPE") &&
	(!strncmp(this->head_->getString("PIXTYPE"),"HEALPIX",4))) {
      this->found();
      return;
    }

    // else, check for bin table with keyword NSIDE (also HEALPIX)
    if (this->head_->isBinTable() && this->head_->find("NSIDE")) {
      this->found();
      return;
    }

    this->dataSkipBlock(this->head_->datablocks());
    delete this->head_;
    this->head_ = NULL;
  }

  this->error();
}

template<class T> void FitsFitsStream<T>::processExactTable()
{
  // we are looking for an extension
  // keep the primary header
  this->primary_ = this->headRead();
  this->managePrimary_ = 1;
  if (!(this->primary_ && this->primary_->isValid())) {
    this->error();
    return;
  }
  this->dataSkipBlock(this->primary_->datablocks());

  if (this->pExt_) {
    while (1) {
      if (!(this->head_ = this->headRead())) {
	this->error();
	return;
      }
      this->ext_++;

      if (this->head_->extname()) {
	char* a = toUpper(this->head_->extname());
	char* b = toUpper(this->pExt_);
	if (!strncmp(a,b,strlen(b))) {
	  delete [] a;
	  delete [] b;
	  this->found();
	  return;
	}
	delete [] a;
	delete [] b;
      }

      this->dataSkipBlock(this->head_->datablocks());
      delete this->head_;
      this->head_ = NULL;
    }
  }
  else {
    for (int i=1; i<this->pIndex_; i++) {
      if (!(this->head_ = this->headRead())) {
	this->error();
	return;
      }
      this->ext_++;

      this->dataSkipBlock(this->head_->datablocks());
      delete this->head_;
      this->head_ = NULL;
    }

    if ((this->head_ = this->headRead())) {
      this->ext_++;
      this->found();
      return;
    }
  }

  // we must have an error
  this->error();
}

template<class T> void FitsFitsStream<T>::processRelaxTable()
{
  // check primary
  this->head_ = this->headRead();
  if (!(this->head_ && this->head_->isValid())) {
    this->error();
    return;
  }

  // ok, no image, save primary and lets check extensions
  this->primary_ = this->head_;
  this->managePrimary_ = 1;
  this->dataSkipBlock(this->head_->datablocks());
  this->head_ = NULL;

  // ok, no image, lets check extensions
  while (1) {
    if (!(this->head_ = this->headRead())) {
      this->error();
      return;
    }
    this->ext_++;

    if (this->head_->isBinTable()) {
      this->found();
      return;
    }

    this->dataSkipBlock(this->head_->datablocks());
    delete this->head_;
    this->head_ = NULL;
  }

  this->error();
}

template class FitsFitsStream<FILE*>;
template class FitsFitsStream<Tcl_Channel>;
template class FitsFitsStream<int>;
template class FitsFitsStream<gzFile>;
template class FitsFitsStream<gzStream>;

template<class T> FitsFitsNextStream<T>::FitsFitsNextStream(FitsFile* p)
{
  FitsStream<T>* prev = (FitsStream<T>*)p;

  this->primary_ = prev->primary();
  this->managePrimary_ = 0;

  this->head_ = prev->head();
  this->manageHead_ = 0;

  FitsImageHDU* hdu = (FitsImageHDU*)this->head_->hdu();
  this->data_ = (char*)prev->data() + hdu->imgbytes();
  this->dataSize_ = 0;
  this->dataSkip_ = 0;

  this->ext_ = prev->ext();
  this->inherit_ = prev->inherit();
  this->byteswap_ = prev->byteswap();
  this->endian_ = prev->endian();
  this->valid_ = 1;

  this->pcoord_ = prev->pcoord();
  this->pxvalid_ = prev->pxvalid();
  this->pxmin_ = prev->pxmin();
  this->pxmax_ = prev->pxmax();
  this->pyvalid_ = prev->pyvalid();
  this->pymin_ = prev->pymin();
  this->pymax_ = prev->pymax();
  this->pzvalid_ = prev->pzvalid();
  this->pzmin_ = prev->pzmin();
  this->pzmax_ = prev->pzmax();
  this->pbvalid_ = prev->pbvalid();
  this->pblock_ = prev->pblock();

  this->stream_ = prev->stream();
  this->flush_ = prev->flush();
  this->dataManage_ = 0;
}

template class FitsFitsNextStream<FILE*>;
template class FitsFitsNextStream<Tcl_Channel>;
template class FitsFitsNextStream<int>;
template class FitsFitsNextStream<gzFile>;
template class FitsFitsNextStream<gzStream>;

template<class T> FitsArrStream<T>::FitsArrStream(FitsFile::FlushMode f)
{
  if (!this->valid_)
    return;

  this->flush_ = f;

  this->valid_=0;

  // check to see if we have a nonzero width, height, and bitpix
  if (!this->validParams()) {
    return;
  }

  // skip header
  if (this->pSkip_)
    this->dataSkip(this->pSkip_);

  // read data
  if (!this->dataRead((size_t)this->pWidth_*this->pHeight_*this->pDepth_*abs(this->pBitpix_)/8)) {
    if ((this->flush_ == this->FLUSH) && this->data_)
      this->skipEnd();
    return;
  }

  // create blank header
  this->head_ = new FitsHead(this->pWidth_, this->pHeight_, 
			     this->pDepth_, this->pBitpix_);
  if (!this->head_->isValid()) {
    this->error();
    return;
  }

  // do we need to byteswap?
  this->setByteSwap();

  // made it this far, must be good
  this->valid_ = 1;

  if (this->flush_ == this->FLUSH)
    this->skipEnd();
}

template class FitsArrStream<FILE*>;
template class FitsArrStream<Tcl_Channel>;
template class FitsArrStream<int>;
template class FitsArrStream<gzFile>;
template class FitsArrStream<gzStream>;

template<class T> FitsNRRDStream<T>::FitsNRRDStream(FitsFile::FlushMode f)
{
  if (!this->valid_)
    return;

  this->flush_ = f;

  this->valid_=0;

  // header
  {
    char buf[1024];
    char* dptr = buf;
    int cnt =0;
    do {
      int cc = this->read(dptr,1);
      if (cc != 1 || (*dptr == '\n' && *(dptr-1) == '\n')) {
	break;
      }
      cnt++;
      dptr++;
    } while (cnt<1024);
    *dptr = '\0';

    string x(buf);
    istringstream str(x);
    this->parseNRRD(str);
  }

  // check to see if we have a nonzero width, height, and bitpix
  if (!this->validParams())
    return;

  // read data
  this->dataRead((size_t)this->pWidth_*this->pHeight_*this->pDepth_*abs(this->pBitpix_)/8, 0);

  // create blank header
  this->head_ = new FitsHead(this->pWidth_, this->pHeight_, 
			     this->pDepth_, this->pBitpix_);
  if (!this->head_->isValid()) {
    this->error();
    return;
  }

  // do we need to byteswap?
  this->setByteSwap();

  // made it this far, must be good
  this->valid_ = 1;

  if (this->flush_ == this->FLUSH)
    this->skipEnd();
}

template class FitsNRRDStream<FILE*>;
template class FitsNRRDStream<Tcl_Channel>;
template class FitsNRRDStream<int>;
template class FitsNRRDStream<gzFile>;
template class FitsNRRDStream<gzStream>;

template<class T> FitsMosaicStream<T>::FitsMosaicStream(FitsFile::FlushMode f)
{
  if (!this->valid_)
    return;

  this->flush_ = f;
  this->primary_ = this->headRead();
  this->managePrimary_ = 1;
  if (!(this->primary_ && this->primary_->isValid())) {
    this->error();
    return;
  }
  this->dataSkipBlock(this->primary_->datablocks());

  // first extension
  this->head_  = this->headRead();
  if (!(this->head_ && this->head_->isValid())) {
    this->error();
    return;
  }
  this->ext_++;

  // be sure to read all blocks, so that the next call starts on a boundary
  if (!this->dataRead(this->head_->datablocks()*FTY_BLOCK)) {
    this->error();
    return;
  }

  // don't flush, more to come
  this->inherit_ = this->head_->inherit();
  this->valid_ = 1;
}

template class FitsMosaicStream<FILE*>;
template class FitsMosaicStream<Tcl_Channel>;
template class FitsMosaicStream<int>;
template class FitsMosaicStream<gzFile>;
template class FitsMosaicStream<gzStream>;

template<class T> FitsMosaicNextStream<T>::FitsMosaicNextStream(FitsFile* p,
					   FitsFile::FlushMode f)
{
  this->flush_ = f;
  FitsStream<T>* prev = (FitsStream<T>*)p;
  this->primary_ = prev->primary();
  this->managePrimary_ = 0;
  this->stream_ = prev->stream();
  this->ext_ = prev->ext();

  this->head_ = this->headRead();
  if (!(this->head_ && this->head_->isValid())) {
    this->error();
    return;
  }
  this->ext_++;

  // be sure to read all blocks, so that the next call starts on a boundary
  if (!this->dataRead(this->head_->datablocks()*FTY_BLOCK)) {
    this->error();
    return;
  }

  this->inherit_ = this->head_->inherit();
  this->valid_ = 1;
}

template class FitsMosaicNextStream<FILE*>;
template class FitsMosaicNextStream<Tcl_Channel>;
template class FitsMosaicNextStream<int>;
template class FitsMosaicNextStream<gzFile>;
template class FitsMosaicNextStream<gzStream>;
