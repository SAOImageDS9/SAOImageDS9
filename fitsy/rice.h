// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __fitsrice_h__
#define __fitsrice_h__

#include "compress.h"

template<class T>
class FitsRicem : public FitsCompressm<T> {
 protected:
  int block_;
  int bytepix_;
  int noisebit_;

 private:
  int compressed(T*, char*, char*, int, int, int, int, int, int);

 public:
  FitsRicem(FitsFile*);
};

#endif
