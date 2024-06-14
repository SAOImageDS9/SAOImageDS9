// Copyright (C) 1999-2024
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __colorbarttruecolor8_h__
#define __colorbarttruecolor8_h__

#include "colorbart.h"
#include "truecolor8.h"

class ColorbarTTrueColor8 : public virtual ColorbarT, public TrueColor8 {
protected:
  void updateColorsHorz();
  void updateColorsVert();

 public:
  ColorbarTTrueColor8(Tcl_Interp*, Tk_Canvas, Tk_Item*);
};

#endif
