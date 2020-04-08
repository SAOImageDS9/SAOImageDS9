// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __cbgrid_h__
#define __cbgrid_h__

#include <tk.h>

#include "grid2dbase.h"
#include "vector.h"

class CBGrid : public Grid2dBase {
 private:
  int cnt_;
  double* lut_;

  int doit(RenderMode);

 public:
  CBGrid(Widget*, int, double*);

  int render();
  int ps(PSColorSpace, int, int);
#ifdef MAC_OSX_TK
  int macosx(int, int);
#endif
#ifdef __WIN32
  int win32(int, int);
#endif
};

#endif
