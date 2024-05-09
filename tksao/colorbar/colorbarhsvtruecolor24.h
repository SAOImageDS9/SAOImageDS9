// Copyright (C) 1999-2024
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __colorbarhsvtruecolor24_h__
#define __colorbarhsvtruecolor24_h__

#include "colorbarhsv.h"
#include "truecolor24.h"

class ColorbarHSVTrueColor24 : public ColorbarHSV, public TrueColor24 {
protected:
  void updateColorsHorz();
  void updateColorsVert();
  void updateColors24Horz(int, int, char*);
  void updateColors24Vert(int, int, char*);
  void updateColors32Horz(int, int, char*);
  void updateColors32Vert(int, int, char*);

public:
  ColorbarHSVTrueColor24(Tcl_Interp*, Tk_Canvas, Tk_Item*);
};

#endif
