// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <tcl.h>

#include "outchannel.h"

OutFitsChannel::OutFitsChannel(Tcl_Interp* interp, const char* ch)
{
  int tclMode;
  if ((ch_ = Tcl_GetChannel(interp, (char*)ch, &tclMode)))
    valid_ = 1;
}

int OutFitsChannel::write(char* where, size_t size)
{
  // size_t size is unsigned
  long long ss =size;
  size_t rr = 0;
  int r = 0;

  do {
    r = Tcl_Write(ch_, where+rr, (ss>B1MB) ? B1MB : ss);
    ss -= r;
    rr += r;
  } while (r>0 && rr<size);

  return rr;
}
