// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __outfitssocket_h__
#define __outfitssocket_h__

#include "outfits.h"
#include "zlib.h"

class OutFitsSocket : public virtual OutFitsStream {
 private:
  int id_;

 public:
  OutFitsSocket(int s);

  int write(char*, size_t);
};

class OutFitsSocketGZ : public virtual OutFitsStream {
 private:
  int id_;
  z_stream* stream_;
  unsigned char* buf_;
  unsigned long crc_;

  int deflategz(int);
  void putlong(unsigned long);

 public:
  OutFitsSocketGZ(int);
  ~OutFitsSocketGZ();

  int write(char*, size_t);
};

#endif
