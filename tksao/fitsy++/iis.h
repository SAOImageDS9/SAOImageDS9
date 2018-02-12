// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __fitsiis_h__
#define __fitsiis_h__

#include "file.h"

class FitsIIS : public FitsFile {
public:
  FitsIIS(int, int);
  ~FitsIIS();

  void erase();
  char* get(int xx, int yy, int dx, int dy);
  void set(const char* src, int xx, int yy, int dx, int dy);
};

#endif
