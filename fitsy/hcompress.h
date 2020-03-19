// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __fitshcompress_h__
#define __fitshcompress_h__

#include "compress.h"

template<class T>
class FitsHcompressm : public FitsCompressm<T> {
 protected:
  int smooth_;

 private:
  int compressed(T*, char*, char*, int, int, int, int, int, int);

 public:
  FitsHcompressm(FitsFile*);
};

#endif
