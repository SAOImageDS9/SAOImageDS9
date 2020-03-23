// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __fitsblock_h__
#define __fitsblock_h__

#include "vector.h"
#include "vectorstr.h"
#include "file.h"

class FitsBlock : public FitsFile {
 protected:
  int width_;
  int height_;
  size_t size_;
  int bitpix_;

  void initHeader(FitsFile*, Vector&);

  void initCCDSUM(Vector&);
  void initKeySEC(const char*, Vector&);
  void initLTMV(Vector&);

 public:
  FitsBlock(FitsFile*, Vector&);
  ~FitsBlock();
};

#endif
