// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __baseline_h__
#define __baseline_h__

#include "marker.h"

class BaseLine : public Marker {
protected:
  Vector p1;
  Vector p2;

  void renderXInclude(Drawable, Coord::InternalSystem, RenderMode) {}

  void renderPSInclude(PSColorSpace) {}

#ifdef __WIN32
  void renderWIN32Include() {}
#endif

  void updateHandles() {}

public:
  BaseLine(Base* p, const Vector& ptr1, const Vector& ptr2);
  BaseLine(Base* p, const Vector& ptr1, const Vector& ptr2,
	   const char* clr, int* dsh, 
	   int wth, const char* fnt, const char* txt,
	   unsigned short prop, const char* cmt, 
	   const List<Tag>& tg, const List<CallBack>& cb);
  BaseLine(const BaseLine&);

  virtual void updateCoords(const Matrix&);
  virtual int isIn(const Vector&);

  void centroid();
  void move(const Vector&);
  void moveTo(const Vector&);
  virtual void edit(const Vector&, int);

  void rotateBegin() {}
  void rotate(const Vector& v, int h) {}
  void rotateEnd() {}

  const Vector& getP1() {return p1;}
  const Vector& getP2() {return p2;}
  void setPoints(const Vector&, const Vector&);

  // special composite funtionality
  void setComposite(const Matrix&, double);
};

#endif
