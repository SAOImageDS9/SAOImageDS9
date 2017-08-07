// Copyright (C) 1999-2017
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __ruler_h__
#define __ruler_h__

#include "baseline.h"

class Ruler : public BaseLine {
private:
  Vector p3;
  Coord::CoordSystem coordSystem;
  Coord::SkyFrame skyFrame;
  Coord::CoordSystem distSystem;
  Coord::DistFormat distDist;
  double dist;

private:
  void renderX(Drawable, Coord::InternalSystem, RenderMode);
  GC renderXGC(RenderMode);

  void renderPS(int);
  void renderPSGC(int);

#ifdef MAC_OSX_TK
  void renderMACOSX();
  void renderMACOSXGC();
#endif

#ifdef __WIN32
  void renderWIN32();
  void renderWIN32GC();
#endif

  void updateHandles();
  void calcAllBBox();

  int isOn(const Vector&, const Vector&, const Vector&);
  void distToStr(ostringstream&);

public:
  Ruler(const Ruler&);
  Ruler(Base* p, const Vector& ptr1, const Vector& ptr2,
	Coord::CoordSystem sys, Coord::SkyFrame sky, 
	Coord::CoordSystem distsys, Coord::DistFormat distfor,
	const char* clr, int* dsh,
	int wth, const char* fnt, const char* txt, 
	unsigned short prop, const char* cmt,
	const List<Tag>& tg, const List<CallBack>& cb);

  Marker* dup() {return new Ruler(*this);}

  void updateCoords(const Matrix&);

  int isIn(const Vector&);

  const Vector& getP1() {return p1;}
  const Vector& getP2() {return p2;}
  const Vector& getP3() {return p3;}
  void setCoordSystem(Coord::CoordSystem, Coord::SkyFrame, Coord::CoordSystem, Coord::DistFormat);

  Coord::CoordSystem getSystem() {return coordSystem;}
  Coord::SkyFrame getSkyFrame() {return skyFrame;}

  Coord::CoordSystem getDistSystem() {return distSystem;}
  Coord::DistFormat getDistDist() {return distDist;}

  void list(ostream&, Coord::CoordSystem, Coord::SkyFrame, Coord::SkyFormat, int, int);
  void listXML(ostream&, Coord::CoordSystem, Coord::SkyFrame, Coord::SkyFormat);
};

#endif
