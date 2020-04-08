// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "basepolygon.h"
#include "fitsimage.h"

BasePolygon::BasePolygon(Base* p, const Vector& ctr, 
			 const Vector& b)
  : Marker(p, ctr, 0)
{
}

BasePolygon::BasePolygon(Base* p, const Vector& ctr,
		 const Vector& b,
		 const char* clr, int* dsh,
		 int wth, const char* fnt, const char* txt,
		 unsigned short prop, const char* cmt,
		 const List<Tag>& tg, const List<CallBack>& cb)
  : Marker(p, ctr, 0, clr, dsh, wth, fnt, txt, prop, cmt, tg, cb)
{
}

BasePolygon::BasePolygon(Base* p, const List<Vertex>& v, 
		 const char* clr, int* dsh,
		 int wth, const char* fnt, const char* txt,
		 unsigned short prop, const char* cmt,
		 const List<Tag>& tg, const List<CallBack>& cb)
  : Marker(p, Vector(0,0), 0, clr, dsh, wth, fnt, txt, prop, cmt, tg, cb)
{
  // Vertex list is in ref coords
  angle = 0;
  vertex = v;

  // find center
  center = Vector(0,0);
  vertex.head();
  do
    center += vertex.current()->vector;
  while (vertex.next());
  center /= vertex.count();

  // vertices are relative
  vertex.head();
  do
    vertex.current()->vector *= Translate(-center) * FlipY(); // no rotation
  while (vertex.next());

  updateBBox();
}

BasePolygon::BasePolygon(const BasePolygon& a) : Marker(a)
{
  vertex = a.vertex;
}

void BasePolygon::createVertex(int which, const Vector& v)
{
  // which segment (1 to n)
  // v is in ref coords
  Matrix mm = bckMatrix();

  int seg = which-1;
  if (seg>=0 && seg<vertex.count()) {
    Vertex* n = new Vertex(v * mm);
    vertex.insert(seg,n);

    recalcCenter();

    updateBBox();
    doCallBack(CallBack::EDITCB);
    doCallBack(CallBack::MOVECB); // center can change
  }
}

void BasePolygon::deleteVertex(int h)
{
  if (h>4) {
    int hh = h-4-1;

    if (vertex.count() > 3) {
      Vertex* v = vertex[hh];
      if (v) {
	vertex.extractNext(v);
	delete v;

	recalcCenter();

	updateBBox();
	doCallBack(CallBack::EDITCB);
	doCallBack(CallBack::MOVECB); // center can change
      }  
    }
  }
}

void BasePolygon::edit(const Vector& v, int h)
{
  if (h < 5) {
    Vector s1 = v * bckMatrix();
    Vector s2 = bckMap(handle[h-1],Coord::CANVAS);

    if (s1[0] != 0 && s1[1] != 0 && s2[0] != 0 && s2[1] != 0) {
      double a = fabs(s1[0]/s2[0]);
      double b = fabs(s1[1]/s2[1]);
      double s = a > b ? a : b;

      vertex.head();
      do
	vertex.current()->vector *= Scale(s);
      while (vertex.next());
    }

    updateBBox();
    doCallBack(CallBack::EDITCB);
  }
  else {
    moveVertex(v,h);

    updateBBox();
    doCallBack(CallBack::EDITCB);
    doCallBack(CallBack::MOVECB); // center can change
  }
}

void BasePolygon::moveVertex(const Vector& v, int h)
{
  Matrix mm = bckMatrix();

  if (vertex[h-5])
    vertex.current()->vector = v * mm;

  recalcCenter();
}

void BasePolygon::recalcCenter()
{
  // recalculate center

  Vector nc;
  vertex.head();
  do
    nc += vertex.current()->vector * Rotate(angle) * FlipY();
  while (vertex.next());
  nc /= vertex.count();

  center += nc;

  // update all vertices

  vertex.head();
  do
    vertex.current()->vector -= nc * FlipY() * Rotate(-angle);
  while (vertex.next());
}

void BasePolygon::rotate(const Vector& v, int h)
{
  if (h < 5)
    Marker::rotate(v,h);
  else {
    // we need to check this here, because we are really rotating
    if (canEdit()) { 
      moveVertex(v,h);

      updateBBox();
      doCallBack(CallBack::EDITCB);
      doCallBack(CallBack::MOVECB); // center can change
    }
  }
}

void BasePolygon::updateHandles()
{
  // generate handles
  numHandle = 4 + vertex.count();
  if (handle)
    delete [] handle;
  handle = new Vector[numHandle];

  // the first four are our control handles
  BBox bb;
  vertex.head();
  do
    bb.bound(vertex.current()->vector);
  while (vertex.next());

  Vector zz = parent->zoom();
  float r = 10/zz.length();
  bb.expand(r); // give us more room

  handle[0] = fwdMap(bb.ll,Coord::CANVAS);
  handle[1] = fwdMap(bb.lr(),Coord::CANVAS);
  handle[2] = fwdMap(bb.ur,Coord::CANVAS);
  handle[3] = fwdMap(bb.ul(),Coord::CANVAS);

  // and the rest are vertices
  int i=4;
  vertex.head();
  do
    handle[i++] = fwdMap(vertex.current()->vector,Coord::CANVAS);
  while (vertex.next());
}

void BasePolygon::updateCoords(const Matrix& mx)
{
  Scale s(mx);
  vertex.head();
  do
    vertex.current()->vector *= s;
  while (vertex.next());
  
  Marker::updateCoords(mx);
}

void BasePolygon::listBase(FitsImage* ptr, ostream& str,
			   Coord::CoordSystem sys, Coord::SkyFrame sky,
			   Coord::SkyFormat format)
{
  Matrix mm = fwdMatrix();

  str << type_ << '(';
  int first=1;
  vertex.head();
  do {
    if (!first)
      str << ',';
    first=0;

    ptr->listFromRef(str,vertex.current()->vector*mm,sys,sky,format);

  } while (vertex.next());
  str << ')';
}

