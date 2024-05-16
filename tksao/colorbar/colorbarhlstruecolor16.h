// Copyright (C) 1999-2024
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __colorbarhlstruecolor16_h__
#define __colorbarhlstruecolor16_h__

#include "colorbarhls.h"
#include "colorbarttruecolor16.h"

class ColorbarHLSTrueColor16 : public virtual ColorbarT, public ColorbarHLS, public ColorbarTTrueColor16 {
public:
  ColorbarHLSTrueColor16(Tcl_Interp*, Tk_Canvas, Tk_Item*);
};

#endif
