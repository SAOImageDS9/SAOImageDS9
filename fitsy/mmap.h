// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __fitsmmap_h__
#define __fitsmmap_h__

#include "map.h"

class FitsMMap : public virtual FitsMap {
public:
  FitsMMap(const char*);
  virtual ~FitsMMap();
};

class FitsFitsMMap : public FitsMMap, public FitsFitsMap {
public:
  FitsFitsMMap(const char* fn)
    : FitsMMap(fn), FitsFitsMap() {}
  FitsFitsMMap(const char* fn, ScanMode mode)
    : FitsMMap(fn), FitsFitsMap(mode) {}
};

class FitsFitsNextMMap : public FitsFitsNextMap {
public:
  FitsFitsNextMMap(FitsFile* prev) : FitsFitsNextMap(prev) {}
};

class FitsArrMMap : public FitsMMap, public FitsArrMap {
public:
  FitsArrMMap(const char* fn) : FitsMMap(fn), FitsArrMap() {}
};

class FitsNRRDMMap : public FitsMMap, public FitsNRRDMap {
public:
  FitsNRRDMMap(const char* fn) : FitsMMap(fn), FitsNRRDMap() {}
};

class FitsMosaicMMap : public FitsMMap, public FitsMosaicMap {
public:
  FitsMosaicMMap(const char* fn) : FitsMMap(fn), FitsMosaicMap() {}
};

class FitsMosaicNextMMap : public FitsMosaicNextMap {
public:
  FitsMosaicNextMMap(FitsFile* prev) : FitsMosaicNextMap(prev) {}
};

#endif
