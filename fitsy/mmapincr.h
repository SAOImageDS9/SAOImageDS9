// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __fitsmmapincr_h__
#define __fitsmmapincr_h__

#include "mapincr.h"

class FitsMMapIncr : public virtual FitsMapIncr {
public:
  FitsMMapIncr(const char*);
};

class FitsFitsMMapIncr : public FitsMMapIncr, public FitsFitsMapIncr {
public:
  FitsFitsMMapIncr(const char* fn) 
    : FitsMMapIncr(fn), FitsFitsMapIncr() {}
  FitsFitsMMapIncr(const char* fn, ScanMode mode) 
    : FitsMMapIncr(fn), FitsFitsMapIncr(mode) {}
};

class FitsFitsNextMMapIncr : public FitsFitsNextMapIncr {
public:
  FitsFitsNextMMapIncr(FitsFile* prev) : FitsFitsNextMapIncr(prev) {}
};

class FitsArrMMapIncr : public FitsMMapIncr, public FitsArrMapIncr {
public:
  FitsArrMMapIncr(const char* fn) : FitsMMapIncr(fn), FitsArrMapIncr() {}
};

class FitsMosaicMMapIncr : public FitsMMapIncr, public FitsMosaicMapIncr {
public:
  FitsMosaicMMapIncr(const char* fn) : FitsMMapIncr(fn), FitsMosaicMapIncr() {}
};

class FitsMosaicNextMMapIncr : public FitsMosaicNextMapIncr {
public:
  FitsMosaicNextMMapIncr(FitsFile* prev) : FitsMosaicNextMapIncr(prev) {}
};

#endif
