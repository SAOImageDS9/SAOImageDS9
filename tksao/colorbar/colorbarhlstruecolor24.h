// Copyright (C) 1999-2024
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __colorbarhlstruecolor24_h__
#define __colorbarhlstruecolor24_h__

#include "colorbarrgbtruecolor24.h"

class ColorbarHLSTrueColor24 : public ColorbarRGBTrueColor24 {
public:
  ColorbarHLSTrueColor24(Tcl_Interp*, Tk_Canvas, Tk_Item*);
};

#endif
