// Copyright (C) 1999-2024
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __colorbarhlstruecolor8_h__
#define __colorbarhlstruecolor8_h__

#include "colorbarhls.h"
#include "colorbarttruecolor8.h"

class ColorbarHLSTrueColor8 : public virtual ColorbarT, public ColorbarHLS, public ColorbarTTrueColor8 {
public:
  ColorbarHLSTrueColor8(Tcl_Interp*, Tk_Canvas, Tk_Item*);
};

#endif
