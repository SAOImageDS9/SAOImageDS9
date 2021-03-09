// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __composite_h__
#define __composite_h__

#include "marker.h"
#include "list.h"

class Composite : public Marker {
 private:
  List<Marker> members;
  int global;

  void renderX(Drawable, Coord::InternalSystem, RenderMode) {}
  void renderPS(PSColorSpace mode) {}
#ifdef __WIN32
  void renderWIN32() {}
#endif

protected:
  void updateHandles();

public:
  Composite(const Composite&);
  Composite(Base* p, const Vector& ctr, 
	    double ang, int gl,
	    const char* clr, int* dsh,
	    int wth, const char* fnt, const char* txt,
	    unsigned short prop, const char* cmt,
	    const List<Tag>& tg, const List<CallBack>& cb);

  Marker* dup() {return new Composite(*this);}

  void x11(Drawable, Coord::InternalSystem, int, HandleMode);
  void ps(PSColorSpace,int);
#ifdef __WIN32
  void win32(int);
#endif

  void updateCoords(const Matrix&);
  int isIn(const Vector& v);

  void append(Marker*);
  Marker* extract();

  void setGlobal(int w) {global = w ? 1 : 0;}
  int getGlobal() {return global;}

  void list(ostream&, Coord::CoordSystem, Coord::SkyFrame, Coord::SkyFormat, int, int);
  void listXML(ostream&, Coord::CoordSystem, Coord::SkyFrame, Coord::SkyFormat) {}
  void listCiao(ostream&, Coord::CoordSystem, int);
  void listSAOtng(ostream&, Coord::CoordSystem, Coord::SkyFrame, Coord::SkyFormat, int);
  void listSAOimage(ostream&, int);
  void listPros(ostream&, Coord::CoordSystem, Coord::SkyFrame, Coord::SkyFormat, int);
  void listXY(ostream&, Coord::CoordSystem, Coord::SkyFrame, Coord::SkyFormat, int);

};

#endif
