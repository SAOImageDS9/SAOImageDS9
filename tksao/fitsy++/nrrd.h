// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __fitsnrrd_h__
#define __fitsnrrd_h__

#include "file.h"

class FitsNRRD : public FitsFile {
 protected:
  size_t size_;

 protected:
  int initHeader(FitsFile*);

 public:
  FitsNRRD(FitsFile*);
  virtual ~FitsNRRD();
};

template<class T>
class FitsNRRDm : public FitsNRRD {
 private:
  void swapBytes(FitsFile::ArchType);

 protected:
  void uncompress(FitsFile* fits);
  virtual int compressed(T*, char*, size_t) =0;
  
 public:
  FitsNRRDm(FitsFile*);
};

#endif

