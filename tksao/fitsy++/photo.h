// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __fitsphoto_h__
#define __fitsphoto_h__

#include <tcl.h>

#include "vector.h"
#include "file.h"

class FitsPhoto : public FitsFile {
 public:
  FitsPhoto(Tcl_Interp* interp, const char*);
  ~FitsPhoto();
};

class FitsPhotoCube : public FitsFile {
 public:
  FitsPhotoCube(Tcl_Interp* interp, const char*);
  ~FitsPhotoCube();
};

class FitsPhotoCubeNext : public FitsFile {
 public:
  FitsPhotoCubeNext(FitsFile*);
};

#endif

