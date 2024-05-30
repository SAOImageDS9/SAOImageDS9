// Copyright (C) 1999-2024
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __colorbarttruecolor16_h__
#define __colorbarttruecolor16_h__

#include "colorbart.h"
#include "truecolor16.h"

class ColorbarTTrueColor16 : public virtual ColorbarT, public TrueColor16 {
protected:
  void updateColorsHorz();
  void updateColorsVert();

 public:
  ColorbarTTrueColor16(Tcl_Interp*, Tk_Canvas, Tk_Item*);
};

#endif

