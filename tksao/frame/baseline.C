// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "baseline.h"
#include "fitsimage.h"

BaseLine::BaseLine(Base* p, const Vector& ptr1, const Vector& ptr2)
  : Marker(p, ptr1, 0)
{
  p1 = ptr1;
  p2 = ptr2;
}

BaseLine::BaseLine(Base* p, const Vector& ptr1, const Vector& ptr2,
		   const char* clr, int* dsh, 
		   int wth, const char* fnt, const char* txt,
		   unsigned short prop, const char* cmt, 
		   const List<Tag>& tg, const List<CallBack>& cb) 
  : Marker(p, ptr1, 0, clr, dsh, wth, fnt, txt, prop, cmt, tg, cb)
{
  p1 = ptr1;
  p2 = ptr2;
}

BaseLine::BaseLine(const BaseLine& a) : Marker(a)
{
  p1 = a.p1;
  p2 = a.p2;
}

void BaseLine::updateCoords(const Matrix& mx)
{
  p1*=mx;
  p2*=mx;

  Marker::updateCoords(mx);
}

void BaseLine::centroid()
{
  p1 = parent->centroid(p1);
  p2 = parent->centroid(p2);

  updateBBox();
  doCallBack(CallBack::MOVECB);
}

void BaseLine::move(const Vector& v)
{
  p1+=v;
  p2+=v;

  updateBBox();
  doCallBack(CallBack::MOVECB);
}

void BaseLine::moveTo(const Vector& v)
{
  // v is the new location of the center
  Vector diff = v - center;
  p1+=diff;
  p2+=diff;

  updateBBox();
  doCallBack(CallBack::MOVECB);
}

int BaseLine::isIn(const Vector& v)
{
  // do this in canvas coords, not ref coords
  Vector l1 = parent->mapFromRef(p1,Coord::CANVAS);
  Vector l2 = parent->mapFromRef(p2,Coord::CANVAS);
  double a = (l2-l1).angle();

  Matrix m = Translate(-l1) * Rotate(a);
  Vector vv = v*m;
  Vector end = l2*m;
  return (vv[0]>0 && vv[0]<end[0] && 
	  vv[1]>-parent->markerEpsilon && vv[1]<parent->markerEpsilon);
}

void BaseLine::edit(const Vector& v, int h)
{
  switch (h) {
  case 1:
    p1 = v;
    break;
  case 2:
    p2 = v;
    break;
  }

  updateBBox();
  doCallBack(CallBack::EDITCB);
}

void BaseLine::setPoints(const Vector& v1, const Vector& v2)
{
  p1 = v1;
  p2 = v2;

  updateBBox();
  doCallBack(CallBack::EDITCB);
}

// special composite funtionallity

void BaseLine::setComposite(const Matrix& mx, double aa)
{
  p1 *= mx;
  p2 *= mx;

  updateBBox();
}
