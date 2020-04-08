// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <string.h>

#include "outfits.h"
#include "util.h"

OutFitsStream::OutFitsStream()
{
  valid_ = 0;
}

OutFitsStream::~OutFitsStream()
{
}

int OutFitsStream::writeSwap(char* where, int size, int bitpix)
{
  char* buf = new char[B4KB];

  // size_t size is unsigned
  long long ss = size;
  size_t rr =0;
  int r;
  do {
    r = (ss>B4KB) ? B4KB : ss;

    switch (bitpix) {
    case 8:
      memcpy(buf, where+rr, r);
      break;
    case 16:
    case -16:
      for (int ii=0; ii<r; ii+=2)
	swap2(where+rr+ii,buf+ii);
      break;
    case 32:
    case -32:
      for (int ii=0; ii<r; ii+=4)
	swap4(where+rr+ii,buf+ii);
      break;
    case 64:
    case -64:
      for (int ii=0; ii<r; ii+=8)
	swap8(where+rr+ii,buf+ii);
      break;
    }

    write(buf,r);
    ss -= r;
    rr += r;
  } while (r>0 && rr<size);

  if (buf)
    delete [] buf;

  return rr;
}

