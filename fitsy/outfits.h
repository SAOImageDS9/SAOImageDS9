// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __outfits_h__
#define __outfits_h__

#include <stdlib.h>

#define B1KB 1024
#define B4KB 4096
#define B1MB 1048576

class OutFitsStream {
 protected:
  int valid_;

 public:
  OutFitsStream();
  virtual ~OutFitsStream();

  virtual int write(char*, size_t) =0;
  int writeSwap(char*, int, int);
  int valid() {return valid_;}
};

#endif
