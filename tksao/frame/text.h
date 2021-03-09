// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __text_h__
#define __text_h__

#include "marker.h"

class Text : public Marker {
 private:
  int rotate;

 private:
  void renderX(Drawable, Coord::InternalSystem, RenderMode);
  void renderXText(Drawable, Coord::InternalSystem, RenderMode) {}
  void renderXInclude(Drawable, Coord::InternalSystem, RenderMode) {}

  void renderPS(PSColorSpace);
  void renderPSText(PSColorSpace) {}
  void renderPSInclude(PSColorSpace) {}

#ifdef __WIN32
  void renderWIN32();
  void renderWIN32Text() {}
  void renderWIN32Include() {}
#endif

  void updateHandles();
  void calcAllBBox();

 public:
  Text(const Text&);
  Text(Base* p, const Vector& ctr,
       double a, int r,
       const char* clr, int* dsh,
       int wth, const char* fnt, const char* txt, 
       unsigned short prop, const char* cmt,
       const List<Tag>& tg, const List<CallBack>& cb);

  Marker* dup() {return new Text(*this);}

  int isIn(const Vector&);

  void editBegin(int) {}
  void edit(const Vector& v, int h) {}
  void editEnd() {}

  void setRotate(int);
  int getRotate() {return rotate;}

  void list(ostream&, Coord::CoordSystem, Coord::SkyFrame, Coord::SkyFormat, int, int);
  void listXML(ostream&, Coord::CoordSystem, Coord::SkyFrame, Coord::SkyFormat);
  void listSAOtng(ostream&, Coord::CoordSystem, Coord::SkyFrame, Coord::SkyFormat, int);
};

#endif
