// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __fitsenvi_h__
#define __fitsenvi_h__

#include "file.h"

class FitsENVI : public FitsFile {
 protected:
  size_t size_;

 protected:
  int initHeader(FitsFile*);

 public:
  FitsENVI(FitsFile*);
  virtual ~FitsENVI();
};

template<class T>
class FitsENVIBILm : public FitsENVI {
 public:
  FitsENVIBILm(FitsFile*);
};

template<class T>
class FitsENVIBIPm : public FitsENVI {
 public:
  FitsENVIBIPm(FitsFile*);
};

#endif

