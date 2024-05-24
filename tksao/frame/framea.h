// Copyright (C) 1999-2024
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __framea_h__
#define __framea_h__

#include "framebase.h"

// Frame

class FrameA : public FrameBase {
 public:
  FrameA(Tcl_Interp*, Tk_Canvas, Tk_Item*);
  virtual ~FrameA();
};

#endif
