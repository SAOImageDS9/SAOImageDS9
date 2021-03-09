// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "segment.h"
#include "fitsimage.h"

Segment::Segment(Base* p, const Vector& ctr,
		 const Vector& b)
  : BasePolygon(p,ctr,b)
{
  strcpy(type_, "segment");
  reset(b);
}

Segment::Segment(Base* p, const Vector& ctr,
		 const Vector& b,
		 const char* clr, int* dsh,
		 int wth, const char* fnt, const char* txt,
		 unsigned short prop, const char* cmt,
		 const List<Tag>& tg, const List<CallBack>& cb)
  : BasePolygon(p, ctr, b, clr, dsh, wth, fnt, txt, prop, cmt, tg, cb)
{
  strcpy(type_, "segment");
  reset(b);
}

Segment::Segment(Base* p, const List<Vertex>& v, 
		 const char* clr, int* dsh,
		 int wth, const char* fnt, const char* txt,
		 unsigned short prop, const char* cmt,
		 const List<Tag>& tg, const List<CallBack>& cb)
  : BasePolygon(p, v, clr, dsh, wth, fnt, txt, prop, cmt, tg, cb)
{
  strcpy(type_, "segment");
}

void Segment::renderX(Drawable drawable, Coord::InternalSystem sys, 
		      RenderMode mode)
{
  GC lgc = renderXGC(mode);

  vertex.head();
  Vector v1;
  Vector v2 = fwdMap(vertex.current()->vector,sys);
  vertex.next();

  do {
    v1 = v2;
    v2 = fwdMap(vertex.current()->vector,sys);
    XDrawLine(display, drawable, lgc, v1[0], v1[1], v2[0], v2[1]);
  } while (vertex.next());
}

void Segment::renderPS(PSColorSpace mode)
{
  renderPSGC(mode);

  vertex.head();
  int first = 1;
  ostringstream str;
  do {
    Vector v =  fwdMap(vertex.current()->vector,Coord::CANVAS);
    if (first) {
      str << "newpath " << endl
	  << parent->TkCanvasPs(v) << " moveto" << endl;
      first = 0;
    }
    else
      str << parent->TkCanvasPs(v) << " lineto" << endl;
  } while (vertex.next());

  str << "stroke" << endl << ends;
  Tcl_AppendResult(parent->interp, str.str().c_str(), NULL);
}

#ifdef __WIN32
#include <win32lib.h>

void Segment::renderWIN32()
{
  renderWIN32GC();

  vertex.head();
  Vector v1;
  Vector v2 =  fwdMap(vertex.current()->vector,Coord::CANVAS);
  vertex.next();

  do {
    v1 = v2;
    v2 = fwdMap(vertex.current()->vector,Coord::CANVAS);
    win32DrawLine(v1,v2);
  } while (vertex.next());
}
#endif

void Segment::reset(const Vector& b)
{
  angle = 0;
  vertex.deleteAll();

  Vector bb = b;
  vertex.append(new Vertex(-bb[0],-bb[1]));
  vertex.append(new Vertex( bb[0], bb[1]));

  updateBBox();
}

int Segment::getSegment(const Vector& v)
{
  // v is in canvas coords
  Matrix mm = fwdMatrix();

  vertex.head();
  Vector v1;
  Vector v2 = vertex.current()->vector * mm;
  vertex.next();

  int ii = 1;
  do {
    v1 = v2;
    v2 = vertex.current()->vector * mm;

    Vector l1 = parent->mapFromRef(v1,Coord::CANVAS);
    Vector l2 = parent->mapFromRef(v2,Coord::CANVAS);
    double a = (l2-l1).angle();
    Matrix mx = Translate(-l1) * FlipY() * Rotate(-a); 
    Vector end = l2*mx;
    Vector vv = v*mx;
    
    if (vv[0]>0 && vv[0]<end[0] && 
	vv[1]>-parent->markerEpsilon && vv[1]<parent->markerEpsilon)
      return ii;

    ii++;
  } while (vertex.next());

  return 0;
}

// list

void Segment::list(ostream& str, Coord::CoordSystem sys, Coord::SkyFrame sky,
		   Coord::SkyFormat format, int conj, int strip)
{
  if (!strip) {
    FitsImage* ptr = parent->findFits(sys,center);
    listPre(str, sys, sky, ptr, strip, 1);
    listBase(ptr, str, sys, sky, format);

    if (conj)
      str << " ||";
    listProperties(str, 0);
  }
}

void Segment::listXML(ostream& str, Coord::CoordSystem sys, 
		      Coord::SkyFrame sky, Coord::SkyFormat format)
{
  FitsImage* ptr = parent->findFits(sys,center);
  Matrix mm = fwdMatrix();
  Vector* vv = new Vector[vertex.count()];

  XMLRowInit();
  XMLRow(XMLSHAPE,type_);

  vertex.head();
  int cnt =0;
  do
    vv[cnt++] =vertex.current()->vector*mm;
  while (vertex.next());
  XMLRowPoint(ptr,sys,sky,format,vv,vertex.count());
  delete [] vv;

  XMLRowProps(ptr,sys);
  XMLRowEnd(str);
}

