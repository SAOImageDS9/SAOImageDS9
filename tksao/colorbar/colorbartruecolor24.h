// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __colorbartruecolor24_h__
#define __colorbartruecolor24_h__

#include "colorbar.h"
#include "truecolor24.h"

class ColorbarTrueColor24 : public Colorbar, public TrueColor24 {
private:
  void updateColorsHorz();
  void updateColorsVert();
  void updateColors24Horz(int, int, char*);
  void updateColors24Vert(int, int, char*);
  void updateColors32Horz(int, int, char*);
  void updateColors32Vert(int, int, char*);

public:
  ColorbarTrueColor24(Tcl_Interp*, Tk_Canvas, Tk_Item*);
};

#endif
