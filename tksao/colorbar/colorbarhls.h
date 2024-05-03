// Copyright (C) 1999-2024
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __colorbarhls_h__
#define __colorbarhls_h__

#include "colorbarrgb.h"

class ColorbarHLS : public ColorbarRGB {
 public:
  ColorbarHLS(Tcl_Interp*, Tk_Canvas, Tk_Item*);
};

#endif
