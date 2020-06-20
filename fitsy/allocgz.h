// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __fitsallocgz_h__
#define __fitsallocgz_h__

#include "strm.h"
#include "zlib.h"

class FitsAllocGZ : public virtual FitsStream<gzFile> {
public:
  FitsAllocGZ(const char*);
  virtual ~FitsAllocGZ() {}
};

class FitsFitsAllocGZ : public FitsAllocGZ, public FitsFitsStream<gzFile> {
public:
  FitsFitsAllocGZ(const char* fn, FlushMode flush) 
    : FitsAllocGZ(fn), FitsFitsStream<gzFile>(flush) {}
  FitsFitsAllocGZ(const char* fn, ScanMode mode, FlushMode flush) 
    : FitsAllocGZ(fn), FitsFitsStream<gzFile>(mode, flush) {}
};

class FitsFitsNextAllocGZ : public FitsFitsNextStream<gzFile> {
public:
  FitsFitsNextAllocGZ(FitsFile* prev) : FitsFitsNextStream<gzFile>(prev) {}
};

class FitsArrAllocGZ : public FitsAllocGZ, FitsArrStream<gzFile> {
public:
  FitsArrAllocGZ(const char* fn, FlushMode flush) 
    : FitsAllocGZ(fn), FitsArrStream<gzFile>(flush) {}
};

class FitsMosaicAllocGZ : public FitsAllocGZ, FitsMosaicStream<gzFile> {
public:
  FitsMosaicAllocGZ(const char* fn, FlushMode flush) 
    : FitsAllocGZ(fn), FitsMosaicStream<gzFile>(flush) {}
};

class FitsMosaicNextAllocGZ : public FitsMosaicNextStream<gzFile> {
public:
  FitsMosaicNextAllocGZ(FitsFile* prev, FlushMode flush) 
    : FitsMosaicNextStream<gzFile>(prev, flush) {}
};

#endif
