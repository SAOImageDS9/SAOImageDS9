// Copyright (C) 1999-2024
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __framehls_h__
#define __framehls_h__

#include "framergb.h"

// Frame

class FrameHLS : public FrameRGB {
 public:
  FrameHLS(Tcl_Interp*, Tk_Canvas, Tk_Item*);
  virtual ~FrameHLS();
};

#endif
