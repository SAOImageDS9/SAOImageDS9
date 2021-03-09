// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __grid2d_h__
#define __grid2d_h__

#include "grid.h"
#include "grid2dbase.h"
#include "coord.h"

class Grid2d : public Grid, public Grid2dBase {
 private:
  void matrixMap(void*, Matrix&, const char*);
  void doit(RenderMode);

 public:
  Grid2d(Widget*, Coord::CoordSystem, Coord::SkyFrame, 
	 Coord::SkyFormat, GridType, 
	 const char*, const char*);
  ~Grid2d();

  const char* option() {return GridBase::option();}

  void x11() {doit(X11);}
  void ps(PSColorSpace mode) {mode_=mode; doit(PS);}
#ifdef __WIN32
  void win32() {doit(GWIN32);}
#endif
};

#endif
