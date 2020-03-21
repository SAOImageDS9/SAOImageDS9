// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __fitssmmap_h__
#define __fitssmmap_h__

#include "smap.h"

class FitsSMMap : public virtual FitsSMap {
public:
  FitsSMMap(const char*, const char*);
  virtual ~FitsSMMap();
};

class FitsFitsSMMap : public FitsSMMap, public FitsFitsSMap {
public:
  FitsFitsSMMap(const char* hdr, const char* fn) 
    : FitsSMMap(hdr,fn), FitsFitsSMap(FitsHead::MMAP) {}
};

class FitsENVISMMap : public FitsSMMap, public FitsENVISMap {
public:
 FitsENVISMMap(const char* hdr, const char* fn) : 
  FitsSMMap(hdr,fn), FitsENVISMap() {}
};

class FitsFitsNextSMMap : public FitsFitsNextSMap {
public:
  FitsFitsNextSMMap(FitsFile* prev) : FitsFitsNextSMap(prev) {}
};

#endif
