// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __colorbartruecolor8_h__
#define __colorbartruecolor8_h__

#include "colorbar.h"
#include "truecolor8.h"

class ColorbarTrueColor8 : public Colorbar, TrueColor8 {
private:
  void updateColorsHorz();
  void updateColorsVert();

public:
  ColorbarTrueColor8(Tcl_Interp*, Tk_Canvas, Tk_Item*);
};

#endif
