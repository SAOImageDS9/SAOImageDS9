// Copyright (C) 1999-2024
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __colorbarhsvtruecolor16_h__
#define __colorbarhsvtruecolor16_h__

#include "colorbarhsv.h"
#include "truecolor16.h"

class ColorbarHSVTrueColor16 : public ColorbarHSV, public TrueColor16 {
protected:
  void updateColorsHorz();
  void updateColorsVert();

public:
  ColorbarHSVTrueColor16(Tcl_Interp*, Tk_Canvas, Tk_Item*);
};

#endif
