// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __grid3d_h__
#define __grid3d_h__

#include "grid.h"
#include "grid3dbase.h"
#include "coord.h"

class Grid3d : public Grid, public Grid3dBase {
 private:
  void matrixMap(void*, Matrix3d&, const char*);
  void doit(RenderMode);

 public:
  Grid3d(Widget*, Coord::CoordSystem, Coord::SkyFrame, 
	 Coord::SkyFormat, GridType, 
	 const char*, const char*);
  ~Grid3d();

  const char* option() {return GridBase::option();}

  void x11() {doit(X11);}
  void ps(PSColorSpace mode) {mode_=mode; doit(PS);}
#ifdef __WIN32
  void win32() {doit(GWIN32);}
#endif
};

#endif
