// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __fitsnrrdgzip_h__
#define __fitsnrrdgzip_h__

#include "nrrd.h"

template<class T>
class FitsNRRDGzipm : public FitsNRRDm<T> {
 private:
  int compressed(T*, char*, size_t);

 public:
  FitsNRRDGzipm(FitsFile*);
};

#endif
