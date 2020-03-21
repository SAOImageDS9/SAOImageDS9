// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __fitsshare_h__
#define __fitsshare_h__

#include "map.h"

class FitsShareID : public virtual FitsMap {
public:
  FitsShareID(int, const char*);
  virtual ~FitsShareID();
};

class FitsShareKey : public virtual FitsMap {
public:
  FitsShareKey(int, const char*);
  virtual ~FitsShareKey();
};

class FitsFitsShare : public virtual FitsMap, public FitsFitsMap {
 public:
  FitsFitsShare(ScanMode mode) : FitsMap(), FitsFitsMap(mode) {}
};

class FitsFitsNextShare : public FitsFitsNextMap {
public:
  FitsFitsNextShare(FitsFile* prev) : FitsFitsNextMap(prev) {}
};

class FitsArrShare : public virtual FitsMap, public FitsArrMap {
 public:
  FitsArrShare() : FitsMap(), FitsArrMap() {}
};

class FitsNRRDShare : public virtual FitsMap, public FitsNRRDMap {
 public:
  FitsNRRDShare() : FitsMap(), FitsNRRDMap() {}
};

class FitsMosaicShare : public virtual FitsMap, public FitsMosaicMap {
 public:
  FitsMosaicShare() : FitsMap(), FitsMosaicMap() {}
};

class FitsMosaicNextShare : public FitsMosaicNextMap {
public:
  FitsMosaicNextShare(FitsFile* prev) : FitsMosaicNextMap(prev) {}
};

class FitsFitsShareID : public FitsShareID, public FitsFitsShare {
public:
  FitsFitsShareID(int shmid, const char* filter, ScanMode mode)
    : FitsShareID(shmid, filter), FitsFitsShare(mode) {}
};

class FitsFitsShareKey : public FitsShareKey, public FitsFitsShare {
public:
  FitsFitsShareKey(int key, const char* filter, ScanMode mode)
    : FitsShareKey(key, filter), FitsFitsShare(mode) {}
};

class FitsArrShareID : public FitsShareID, public FitsArrShare {
public:
  FitsArrShareID(int shmid, const char* filter)
    : FitsShareID(shmid, filter), FitsArrShare() {}
};

class FitsArrShareKey : public FitsShareKey, public FitsArrShare {
public:
  FitsArrShareKey(int key, const char* filter) 
    : FitsShareKey(key, filter), FitsArrShare() {}
};

class FitsNRRDShareID : public FitsShareID, public FitsNRRDShare {
public:
  FitsNRRDShareID(int shmid, const char* filter)
    : FitsShareID(shmid, filter), FitsNRRDShare() {}
};

class FitsNRRDShareKey : public FitsShareKey, public FitsNRRDShare {
public:
  FitsNRRDShareKey(int key, const char* filter) 
    : FitsShareKey(key, filter), FitsNRRDShare() {}
};

class FitsMosaicShareID : public FitsShareID, public FitsMosaicShare {
public:
  FitsMosaicShareID(int shmid) : FitsShareID(shmid, ""), FitsMosaicShare() {}
};

class FitsMosaicShareKey : public FitsShareKey, public FitsMosaicShare {
public:
  FitsMosaicShareKey(int key) : FitsShareKey(key, ""), FitsMosaicShare() {}
};

#endif
