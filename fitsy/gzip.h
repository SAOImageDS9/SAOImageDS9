// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __fitsgzip_h__
#define __fitsgzip_h__

#include "compress.h"

template<class T>
class FitsGzipm : public FitsCompressm<T> {
 private:
  int compressed(T*, char*, char*, int, int, int, int, int, int);

 public:
  FitsGzipm(FitsFile*);
};

#endif
