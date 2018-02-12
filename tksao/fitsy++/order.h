// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __fitsorder_h__
#define __fitsorder_h__

#include "file.h"

class FitsOrder : public FitsFile {
 public:
  FitsOrder(FitsFile*, FitsHead*, char*, size_t);
  ~FitsOrder();
};

class FitsOrderNext : public FitsFile {
public:
  FitsOrderNext(FitsFile* prev);
};

#endif
