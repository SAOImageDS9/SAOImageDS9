// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __compass_h__
#define __compass_h__

#include "marker.h"

class Compass : public Marker {
private:
  Vector p1;
  Vector p2;
  Vector pp1;
  Vector pp2;

  double radius;
  Coord::CoordSystem coordSystem;
  Coord::SkyFrame skyFrame;

  char* northText;
  char* eastText;
  int northArrow;
  int eastArrow;

private:
  void renderX(Drawable, Coord::InternalSystem, RenderMode);
  void renderXInclude(Drawable, Coord::InternalSystem, RenderMode) {}
  GC renderXGC(RenderMode);

  void renderPS(PSColorSpace);
  void renderPSInclude(PSColorSpace) {}
  void renderPSGC(PSColorSpace);

#ifdef __WIN32
  void renderWIN32();
  void renderWIN32Include() {}
  void renderWIN32GC();
#endif

  void updateHandles();

public:
  Compass(const Compass&);
  Compass(Base* parent, const Vector& ctr,
	  double r, 
	  const char* n, const char* e, int na, int ea,
	  Coord::CoordSystem, Coord::SkyFrame, 
	  const char* clr, int* dsh,
	  int w, const char* f, const char* t, 
	  unsigned short prop, const char* c,
	  const List<Tag>& tag, const List<CallBack>& cb);
  ~Compass();

  Marker* dup() {return new Compass(*this);}
  void calcAllBBox();
  void edit(const Vector&, int);

  void rotateBegin() {}
  void rotate(const Vector& v, int h) {}
  void rotateEnd() {}

  int isIn(const Vector&);

  double getRadius() {return radius;}
  void setRadius(double);
  void setCoordSystem(Coord::CoordSystem, Coord::SkyFrame);
  void setLabels(const char*, const char*);
  void setArrows(int,int);
  Coord::CoordSystem getSystem() {return coordSystem;}
  Coord::SkyFrame getSkyFrame() {return skyFrame;}
  const char* getNorthText() {return northText;}
  const char* getEastText() {return eastText;}
  int getNorthArrow() {return northArrow;}
  int getEastArrow() {return eastArrow;}

  void list(ostream&, Coord::CoordSystem, Coord::SkyFrame, Coord::SkyFormat, int, int);
  void listXML(ostream&, Coord::CoordSystem, Coord::SkyFrame, Coord::SkyFormat);
};

#endif
