// Copyright (C) 1999-2024
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __colorbarhsvtruecolor8_h__
#define __colorbarhsvtruecolor8_h__

#include "colorbarhsv.h"
#include "colorbarttruecolor8.h"

class ColorbarHSVTrueColor8 : public virtual ColorbarT, public ColorbarHSV, public ColorbarTTrueColor8 {
public:
  ColorbarHSVTrueColor8(Tcl_Interp*, Tk_Canvas, Tk_Item*);
};

#endif
