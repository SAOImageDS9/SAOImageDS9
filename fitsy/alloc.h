// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __fitsalloc_h__
#define __fitsalloc_h__

#include "strm.h"

class FitsAlloc : public virtual FitsStream<FILE*> {
public:
  FitsAlloc(const char*);
  virtual ~FitsAlloc() {}
};

class FitsFitsAlloc : public FitsAlloc, public FitsFitsStream<FILE*> {
public:
  FitsFitsAlloc(const char* fn, FlushMode flush) 
    : FitsAlloc(fn), FitsFitsStream<FILE*>(flush) {}
  FitsFitsAlloc(const char* fn, ScanMode mode, FlushMode flush) 
    : FitsAlloc(fn), FitsFitsStream<FILE*>(mode, flush) {}
};

class FitsFitsNextAlloc : public FitsFitsNextStream<FILE*> {
public:
  FitsFitsNextAlloc(FitsFile* prev) : FitsFitsNextStream<FILE*>(prev) {}
};

class FitsArrAlloc : public FitsAlloc, FitsArrStream<FILE*> {
public:
  FitsArrAlloc(const char* fn, FlushMode flush) 
    : FitsAlloc(fn), FitsArrStream<FILE*>(flush) {}
};

class FitsNRRDAlloc : public FitsAlloc, FitsNRRDStream<FILE*> {
public:
  FitsNRRDAlloc(const char* fn, FlushMode flush) 
    : FitsAlloc(fn), FitsNRRDStream<FILE*>(flush) {}
};

class FitsMosaicAlloc : public FitsAlloc, FitsMosaicStream<FILE*> {
public:
  FitsMosaicAlloc(const char* fn, FlushMode flush) : 
    FitsAlloc(fn), FitsMosaicStream<FILE*>(flush) {}
};

class FitsMosaicNextAlloc : public FitsMosaicNextStream<FILE*> {
public:
  FitsMosaicNextAlloc(FitsFile* prev, FlushMode flush) 
    : FitsMosaicNextStream<FILE*>(prev, flush) {}
};

#endif
