// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __outfile_h__
#define __outfile_h__

#include "outfits.h"
#include "zlib.h"

class OutFitsFile : public virtual OutFitsStream {
 private:
  FILE* fd_;

 public:
  OutFitsFile(const char*);
  ~OutFitsFile();

  int write(char*, size_t);
};

class OutFitsFileGZ : public virtual OutFitsStream {
 private:
  gzFile fd_;

 public:
  OutFitsFileGZ(const char*);
  ~OutFitsFileGZ();

  int write(char*, size_t);
};

#endif
