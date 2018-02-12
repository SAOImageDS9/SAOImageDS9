// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <tcl.h>

#include "channel.h"

FitsChannel::FitsChannel(Tcl_Interp* interp, const char* ch, const char* ext) 
{
  parse(ext);
  if (!valid_)
    return;

  int tclMode;
  stream_ = Tcl_GetChannel(interp, (char*)ch, &tclMode);

  valid_ = stream_ ? 1 : 0;
}


