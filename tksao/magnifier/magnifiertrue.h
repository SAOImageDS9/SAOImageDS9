// Copyright (C) 1999-2017
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __magnifiertrue_h__
#define __magnifiertrue_h__

#include "magnifier.h"

class MagnifierTrueColor : public Magnifier {
private:
  void clearPixmap();

public:
  MagnifierTrueColor(Tcl_Interp*, Tk_Canvas, Tk_Item*);
};

#endif
