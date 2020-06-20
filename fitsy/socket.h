// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __fitssocket_h__
#define __fitssocket_h__

#include "strm.h"

class FitsSocket : public virtual FitsStream<int> {
public:
  FitsSocket(int, const char*);
};

class FitsFitsSocket : public FitsSocket, public FitsFitsStream<int> {
public:
  FitsFitsSocket(int s, const char* ext, FlushMode flush) 
    : FitsSocket(s, ext), FitsFitsStream<int>(flush) {}
  FitsFitsSocket(int s, const char* ext, ScanMode mode, FlushMode flush) 
    : FitsSocket(s, ext), FitsFitsStream<int>(mode, flush) {}
};

class FitsFitsNextSocket : public FitsFitsNextStream<int> {
public:
  FitsFitsNextSocket(FitsFile* prev) : FitsFitsNextStream<int>(prev) {}
};

class FitsArrSocket : public FitsSocket, public FitsArrStream<int> {
public:
  FitsArrSocket(int s, const char* ext, FlushMode flush) 
    : FitsSocket(s, ext), FitsArrStream<int>(flush) {}
};

class FitsNRRDSocket : public FitsSocket, public FitsNRRDStream<int> {
public:
  FitsNRRDSocket(int s, const char* ext, FlushMode flush) 
    : FitsSocket(s, ext), FitsNRRDStream<int>(flush) {}
};

class FitsMosaicSocket : public FitsSocket, public FitsMosaicStream<int> {
public:
  FitsMosaicSocket(int s, FlushMode flush) 
    : FitsSocket(s, ""), FitsMosaicStream<int>(flush) {}
};

class FitsMosaicNextSocket : public FitsMosaicNextStream<int> {
public:
  FitsMosaicNextSocket(FitsFile* prev, FlushMode flush) 
    : FitsMosaicNextStream<int>(prev, flush) {}
};

#endif

