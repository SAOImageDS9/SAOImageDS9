// Copyright (C) 1999-2018
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
  double dist;
  Coord::CoordSystem distSystem;
  Coord::DistFormat distFormat;
  char distSpec[32];

private:
  void renderX(Drawable, Coord::InternalSystem, RenderMode);
  GC renderXGC(RenderMode);

  void renderPS(PSColorSpace);
  void renderPSGC(PSColorSpace);

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
	Coord::CoordSystem distsys, Coord::DistFormat distformat, 
	const char* distspec,
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

  Coord::CoordSystem getSystem() {return coordSystem;}
  Coord::SkyFrame getSkyFrame() {return skyFrame;}
  Coord::CoordSystem getDistSystem() {return distSystem;}
  Coord::DistFormat getDistFormat() {return distFormat;}
  const char* getDistSpec() {return distSpec;}

  void setDistSpec(const char* distspec);
  void setCoordSystem(Coord::CoordSystem, Coord::SkyFrame, Coord::CoordSystem, Coord::DistFormat);

  void list(ostream&, Coord::CoordSystem, Coord::SkyFrame, Coord::SkyFormat, int, int);
  void listXML(ostream&, Coord::CoordSystem, Coord::SkyFrame, Coord::SkyFormat);
};

#endif
