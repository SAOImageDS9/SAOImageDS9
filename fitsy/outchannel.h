// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __outchannel_h__
#define __outchannel_h__

#include "outfits.h"

class OutFitsChannel : public virtual OutFitsStream {
 private:
  Tcl_Channel ch_;

 public:
  OutFitsChannel(Tcl_Interp*, const char*);

  int write(char*, size_t);
};

#endif
