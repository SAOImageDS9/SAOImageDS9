// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __fitssocketgz_h__
#define __fitssocketgz_h__

#include "strm.h"

class FitsSocketGZ : public virtual FitsStream<gzStream> {
public:
  FitsSocketGZ(int, const char*);
  virtual ~FitsSocketGZ();
};

class FitsFitsSocketGZ : public FitsSocketGZ, 
			 public FitsFitsStream<gzStream> {
public:
  FitsFitsSocketGZ(int s, const char* ext, FlushMode flush) 
    : FitsSocketGZ(s, ext), FitsFitsStream<gzStream>(flush) {}
  FitsFitsSocketGZ(int s, const char* ext, ScanMode mode, FlushMode flush) 
    : FitsSocketGZ(s, ext), FitsFitsStream<gzStream>(mode, flush) {}
};

class FitsFitsNextSocketGZ : public FitsFitsNextStream<gzStream> {
public:
  FitsFitsNextSocketGZ(FitsFile* prev) : FitsFitsNextStream<gzStream>(prev) {}
};

class FitsArrSocketGZ : public FitsSocketGZ, public FitsArrStream<gzStream> {
public:
  FitsArrSocketGZ(int s, const char* ext, FlushMode flush) 
    : FitsSocketGZ(s, ext), FitsArrStream<gzStream>(flush) {}
};

class FitsMosaicSocketGZ : public FitsSocketGZ, 
			   public FitsMosaicStream<gzStream> {
public:
  FitsMosaicSocketGZ(int s, FlushMode flush) 
    : FitsSocketGZ(s, ""), FitsMosaicStream<gzStream>(flush) {}
};

class FitsMosaicNextSocketGZ : public FitsMosaicNextStream<gzStream> {
public:
  FitsMosaicNextSocketGZ(FitsFile* prev, FlushMode flush) 
    : FitsMosaicNextStream<gzStream>(prev, flush) {}
};

#endif

