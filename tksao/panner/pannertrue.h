// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __pannertrue_h__
#define __pannertrue_h__

#include "panner.h"

class PannerTrueColor : public Panner {
public:
  PannerTrueColor(Tcl_Interp*, Tk_Canvas, Tk_Item*);
};

#endif

