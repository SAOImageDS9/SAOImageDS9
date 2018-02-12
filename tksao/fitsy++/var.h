// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __fitsvar_h__
#define __fitsvar_h__

#include "map.h"

class FitsVar : public virtual FitsMap {
  Tcl_Obj* obj;

public:
  FitsVar(Tcl_Interp*, const char*, const char*);
  virtual ~FitsVar();
};

class FitsFitsVar : public FitsVar, public FitsFitsMap {
public:
  FitsFitsVar(Tcl_Interp* interp, const char* var, const char* fn, 
	      ScanMode mode) 
    : FitsVar(interp, var, fn), FitsFitsMap(mode) {}
};

class FitsFitsNextVar : public FitsFitsNextMap {
public:
  FitsFitsNextVar(FitsFile* prev) : FitsFitsNextMap(prev) {}
};

class FitsArrVar : public FitsVar, public FitsArrMap {
public:
  FitsArrVar(Tcl_Interp* interp, const char* var, const char* fn) 
    : FitsVar(interp, var, fn), FitsArrMap() {}
};

class FitsNRRDVar : public FitsVar, public FitsNRRDMap {
public:
  FitsNRRDVar(Tcl_Interp* interp, const char* var, const char* fn) 
    : FitsVar(interp, var, fn), FitsNRRDMap() {}
};

class FitsMosaicVar : public FitsVar, public FitsMosaicMap {
public:
  FitsMosaicVar(Tcl_Interp* interp, const char* var, const char* fn) 
    : FitsVar(interp, var, fn), FitsMosaicMap() {}
};

class FitsMosaicNextVar : public FitsMosaicNextMap {
public:
  FitsMosaicNextVar(FitsFile* prev) : FitsMosaicNextMap(prev) {}
};

#endif
