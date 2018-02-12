// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __colorbartruecolor16_h__
#define __colorbartruecolor16_h__

#include "colorbar.h"
#include "truecolor16.h"

class ColorbarTrueColor16 : public Colorbar, TrueColor16 {
private:
  void updateColorsHorz();
  void updateColorsVert();

public:
  ColorbarTrueColor16(Tcl_Interp*, Tk_Canvas, Tk_Item*);
};

#endif
