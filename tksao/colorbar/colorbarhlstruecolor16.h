// Copyright (C) 1999-2024
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __colorbarhlstruecolor16_h__
#define __colorbarhlstruecolor16_h__

#include "colorbarhls.h"
#include "truecolor16.h"

class ColorbarHLSTrueColor16 : public ColorbarHLS, public TrueColor16 {
protected:
  void updateColorsHorz();
  void updateColorsVert();

public:
  ColorbarHLSTrueColor16(Tcl_Interp*, Tk_Canvas, Tk_Item*);
};

#endif
