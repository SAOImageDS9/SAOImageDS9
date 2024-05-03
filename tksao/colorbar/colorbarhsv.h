// Copyright (C) 1999-2024
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __colorbarhsv_h__
#define __colorbarhsv_h__

#include "colorbarrgb.h"

class ColorbarHSV : public ColorbarRGB {
 public:
  ColorbarHSV(Tcl_Interp*, Tk_Canvas, Tk_Item*);
};

#endif
