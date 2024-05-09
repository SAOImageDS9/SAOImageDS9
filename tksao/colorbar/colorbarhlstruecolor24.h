// Copyright (C) 1999-2024
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __colorbarhlstruecolor24_h__
#define __colorbarhlstruecolor24_h__

#include "colorbarhls.h"
#include "truecolor24.h"

class ColorbarHLSTrueColor24 : public ColorbarHLS, public TrueColor24 {
protected:
  void updateColorsHorz();
  void updateColorsVert();
  void updateColors24Horz(int, int, char*);
  void updateColors24Vert(int, int, char*);
  void updateColors32Horz(int, int, char*);
  void updateColors32Vert(int, int, char*);

public:
  ColorbarHLSTrueColor24(Tcl_Interp*, Tk_Canvas, Tk_Item*);
};

#endif
