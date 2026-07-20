// Copyright (C) 1999-2021
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __composite_h__
#define __composite_h__

#include "marker.h"
#include "list.h"

class Composite : public Marker {
 public:
  enum Operation {UNION, INTERSECTION};

 private:
  List<Marker> members;
  int global;
  Operation operation;
  int showArea;

  void renderX(Drawable, Coord::InternalSystem, RenderMode) {}
  void renderPS(PSColorSpace mode) {}
#ifdef __WIN32
  void renderWIN32() {}
#endif

  void renderXArea(Drawable, Coord::InternalSystem);
  void renderXAreaLine(Drawable, Coord::InternalSystem, double);
  void renderPSArea(PSColorSpace);
  void renderPSAreaLine(double);
#ifdef __WIN32
  void renderWIN32Area();
  void renderWIN32AreaLine(double);
#endif
  int isInArea(const Vector&);

protected:
  void updateHandles();

public:
  Composite(const Composite&);
  Composite(Base* p, const Vector& ctr, 
	    double ang, int gl, Operation op,
	    const char* clr, int* dsh,
	    int wth, const char* fnt, const char* txt,
	    unsigned short prop, const char* cmt,
	    const List<Tag>& tg, const List<CallBack>& cb);

  Marker* dup() {return new Composite(*this);}
  int hasArea() {return 1;}

  void x11(Drawable, Coord::InternalSystem, int, HandleMode);
  void ps(PSColorSpace,int);
#ifdef __WIN32
  void win32(int);
#endif

  void updateCoords(const Matrix&);
  int isIn(const Vector& v);
  void copyRegionMembers(List<Marker>&);
  int isInRegion(const Vector&, List<Marker>&);

  void append(Marker*);
  Marker* extract();

  void setGlobal(int w) {global = w ? 1 : 0;}
  int getGlobal() {return global;}
  Operation getOperation() {return operation;}
  void setOperation(Operation op) {operation = op;}
  void setShowArea(int w) {showArea = w ? 1 : 0;}
  int getShowArea() {return showArea;}

  void list(ostream&, Coord::CoordSystem, Coord::SkyFrame, Coord::SkyFormat, int, int);
  void listXML(ostream&, Coord::CoordSystem, Coord::SkyFrame, Coord::SkyFormat) {}
  void listCiao(ostream&, Coord::CoordSystem, int);
  void listSAOtng(ostream&, Coord::CoordSystem, Coord::SkyFrame, Coord::SkyFormat, int);
  void listSAOimage(ostream&, int);
  void listPros(ostream&, Coord::CoordSystem, Coord::SkyFrame, Coord::SkyFormat, int);
  void listXY(ostream&, Coord::CoordSystem, Coord::SkyFrame, Coord::SkyFormat, int);

};

#endif
