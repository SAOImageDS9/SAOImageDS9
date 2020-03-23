// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __fitssshare_h__
#define __fitssshare_h__

#include "smap.h"

class FitsSShareID : public virtual FitsSMap {
public:
  FitsSShareID(int, int, const char*);
  virtual ~FitsSShareID();
};

class FitsSShareKey : public virtual FitsSMap {
public:
  FitsSShareKey(int, int, const char*);
  virtual ~FitsSShareKey();
};

class FitsFitsSShare : public virtual FitsSMap, public FitsFitsSMap {
 public:
  FitsFitsSShare() : FitsSMap(), FitsFitsSMap(FitsHead::SHARE) {}
};

class FitsFitsNextSShare : public FitsFitsNextSMap {
public:
  FitsFitsNextSShare(FitsFile* prev) : FitsFitsNextSMap(prev) {}
};

class FitsFitsSShareID : public FitsSShareID, public FitsFitsSShare {
public:
  FitsFitsSShareID(int hdrid, int shmid, const char* filter)
    : FitsSShareID(hdrid, shmid, filter), FitsFitsSShare() {}
};

class FitsFitsSShareKey : public FitsSShareKey, public FitsFitsSShare {
public:
  FitsFitsSShareKey(int hdr, int key, const char* filter)
    : FitsSShareKey(hdr, key, filter), FitsFitsSShare() {}
};

#endif
