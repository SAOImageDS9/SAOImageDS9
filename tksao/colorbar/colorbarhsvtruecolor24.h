// Copyright (C) 1999-2024
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __colorbarhsvtruecolor24_h__
#define __colorbarhsvtruecolor24_h__

#include "colorbarrgbtruecolor24.h"

class ColorbarHSVTrueColor24 : public ColorbarRGBTrueColor24 {
public:
  ColorbarHSVTrueColor24(Tcl_Interp*, Tk_Canvas, Tk_Item*);
};

#endif
