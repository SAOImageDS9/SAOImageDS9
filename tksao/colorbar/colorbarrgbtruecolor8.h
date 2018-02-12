// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __colorbarrgbtruecolor8_h__
#define __colorbarrgbtruecolor8_h__

#include "colorbarrgb.h"
#include "truecolor8.h"

class ColorbarRGBTrueColor8 : public ColorbarRGB, TrueColor8 {
private:
  void updateColorsHorz();
  void updateColorsVert();

public:
  ColorbarRGBTrueColor8(Tcl_Interp*, Tk_Canvas, Tk_Item*);
};

#endif
