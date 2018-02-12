// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __fitsplio_h__
#define __fitsplio_h__

#include "compress.h"

template<class T>
class FitsPliom : public FitsCompressm<T> {
 private:
  int compressed(T*, char*, char*, int, int, int, int, int, int);

 public:
  FitsPliom(FitsFile*);
};

#endif
