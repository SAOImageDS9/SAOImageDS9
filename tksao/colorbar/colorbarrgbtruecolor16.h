// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __colorbarrgbtruecolor16_h__
#define __colorbarrgbtruecolor16_h__

#include "colorbarrgb.h"
#include "truecolor16.h"

class ColorbarRGBTrueColor16 : public ColorbarRGB, TrueColor16 {
private:
  void updateColorsHorz();
  void updateColorsVert();

public:
  ColorbarRGBTrueColor16(Tcl_Interp*, Tk_Canvas, Tk_Item*);
};

#endif
