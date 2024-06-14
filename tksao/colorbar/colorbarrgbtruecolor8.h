// Copyright (C) 1999-2024
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __colorbarrgbtruecolor8_h__
#define __colorbarrgbtruecolor8_h__

#include "colorbarrgb.h"
#include "truecolor8.h"

class ColorbarRGBTrueColor8 : public ColorbarRGB, public TrueColor8 {
protected:
  void updateColorsHorz();
  void updateColorsVert();

public:
  ColorbarRGBTrueColor8(Tcl_Interp*, Tk_Canvas, Tk_Item*);
};

#endif
