// Copyright (C) 1999-2024
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __colorbarhsvtruecolor16_h__
#define __colorbarhsvtruecolor16_h__

#include "colorbarrgbtruecolor16.h"

class ColorbarHSVTrueColor16 : public ColorbarRGBTrueColor16 {
public:
  ColorbarHSVTrueColor16(Tcl_Interp*, Tk_Canvas, Tk_Item*);
};

#endif
