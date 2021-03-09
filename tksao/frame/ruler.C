// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "util.h"
#include "ruler.h"
#include "fitsimage.h"

Ruler::Ruler(const Ruler& a) : BaseLine(a)
{
  p3 = a.p3;
  coordSystem = a.coordSystem;
  skyFrame = a.skyFrame;
  dist = a.dist;
  distSystem = a.distSystem;
  distFormat = a.distFormat;
  strncpy(distSpec, a.distSpec, 32);
}

Ruler::Ruler(Base* p, const Vector& ptr1, const Vector& ptr2,
	     Coord::CoordSystem sys, Coord::SkyFrame sky, 
	     Coord::CoordSystem distsys, Coord::DistFormat distformat,
	     const char* distspec,
	     const char* clr, int* dsh,
	     int wth, const char* fnt, const char* txt, 
	     unsigned short prop, const char* cmt,
	     const List<Tag>& tg, const List<CallBack>& cb) 
  : BaseLine(p, ptr1, ptr2, clr, dsh, wth, fnt, txt, prop, cmt, tg, cb)
{
  coordSystem = sys;
  skyFrame = sky;
  dist = 0;
  distSystem = distsys;
  distFormat = distformat;
  strncpy(distSpec, distspec, 32);

  strcpy(type_,"ruler");
  handle = new Vector[2];
  numHandle = 2;

  updateBBox();
}

void Ruler::renderX(Drawable drawable, Coord::InternalSystem sys, RenderMode mode)
{
  GC lgc = renderXGC(mode);

  Vector aa = parent->mapFromRef(p1,sys);
  Vector bb = parent->mapFromRef(p2,sys);
  Vector cc = parent->mapFromRef(p3,sys);
  Vector dd = modifyArrow(p2,p1,sys);
  Vector ee = modifyArrow(p1,p2,sys);

  // line
  XDrawLine(display, drawable, lgc, dd[0], dd[1], ee[0], ee[1]);
  renderXArrow(drawable, p2, p1, sys, lgc);
  renderXArrow(drawable, p1, p2, sys, lgc);

  // axes
  renderXLineDash(lgc);
  XDrawLine(display, drawable, lgc, aa[0], aa[1], cc[0], cc[1]);
  XDrawLine(display, drawable, lgc, bb[0], bb[1], cc[0], cc[1]);

  // dist
  ostringstream str;
  distToStr(str);
  str << ends;

  if (tkfont_) {
    XSetFont(display, lgc, Tk_FontId(tkfont_));

    Tk_FontMetrics metrics;
    Tk_GetFontMetrics(tkfont_, &metrics);
    char* buf = dupstr(str.str().c_str());
    int width = Tk_TextWidth(tkfont_, buf, strlen(buf));

    Vector tt = ((bb-aa)/2+aa) * Translate(-width/2.,-metrics.descent);
    Tk_DrawChars(display, drawable, lgc, tkfont_, buf, strlen(buf), 
		 tt[0], tt[1]);
    if (buf)
      delete [] buf;
  }
}

GC Ruler::renderXGC(RenderMode mode)
{
  // set width, color, dash
  switch (mode) {
  case SRC:
    XSetForeground(display, gc, color); 
    renderXLineNoDash(gc);
    return gc;

  case XOR:
    renderXLineDash(gcxor);
    return gcxor;
  }

  // so compiler will not complain
  return gc;
}

void Ruler::renderPS(PSColorSpace mode)
{
  renderPSGC(mode);

  Vector aa = parent->mapFromRef(p1,Coord::CANVAS);
  Vector bb = parent->mapFromRef(p2,Coord::CANVAS);
  Vector cc = parent->mapFromRef(p3,Coord::CANVAS);
  Vector dd = modifyArrow(p2,p1,Coord::CANVAS);
  Vector ee = modifyArrow(p1,p2,Coord::CANVAS);

  // line
  {
    ostringstream str;
    str << "newpath " 
	<< parent->TkCanvasPs(dd) << ' '
	<< "moveto "
	<< parent->TkCanvasPs(ee) << ' '
	<< "lineto  stroke" << endl << ends;
    Tcl_AppendResult(parent->interp, str.str().c_str(), NULL);
    renderPSArrow(p2,p1,Coord::CANVAS);
    renderPSArrow(p1,p2,Coord::CANVAS);
  }

  // axes
  renderPSLineDash();
  {
    ostringstream str;
    str << "newpath " 
	<< parent->TkCanvasPs(aa) << ' '
	<< "moveto "
	<< parent->TkCanvasPs(cc) << ' '
	<< "lineto stroke" << endl
	<< "newpath " 
	<< parent->TkCanvasPs(bb) << ' '
	<< "moveto "
	<< parent->TkCanvasPs(cc) << ' '
	<< "lineto stroke" << endl << ends;
    Tcl_AppendResult(parent->interp, str.str().c_str(), NULL);
  }


  // dist
  if (psfont_) {
    ostringstream vstr;
    ostringstream str;

    const char* ff = Tk_NameOfFont(psfont_);
    str << '/' << psFontName(ff)
    	<< " findfont " << int(psFontSize(ff)*parent->getDisplayRatio())
	<< " scalefont setfont" << endl;

    distToStr(vstr);
    vstr << ends;
    char* buf = dupstr(vstr.str().c_str());
    Vector tt = parent->TkCanvasPs(((bb-aa)/2 + aa));
    str << "gsave" << endl
	<< "newpath " << endl
	<< tt << " moveto" << endl
	<< '(' << psQuote(buf) << ')' << endl
	<< "dup true charpath pathbbox " << endl
	<< "closepath " << endl
	<< "3 -1 roll sub 2.5 div " << endl
	<< "3 1 roll sub 2 div exch " << endl
	<< tt << " moveto rmoveto show " << endl
	<< "grestore" << endl;

    str << ends;
    Tcl_AppendResult(parent->interp, str.str().c_str(), NULL);
    if (buf)
      delete buf;
  }
}

void Ruler::renderPSGC(PSColorSpace mode)
{
  parent->psColor(mode, parent->getXColor(colorName));
  renderPSLineNoDash();
}

// WIN32

#ifdef __WIN32
#include <win32lib.h>

void Ruler::renderWIN32()
{
  renderWIN32GC();

  Vector aa = parent->mapFromRef(p1,Coord::CANVAS);
  Vector bb = parent->mapFromRef(p2,Coord::CANVAS);
  Vector cc = parent->mapFromRef(p3,Coord::CANVAS);
  Vector dd = modifyArrow(p2,p1,Coord::CANVAS);
  Vector ee = modifyArrow(p1,p2,Coord::CANVAS);

  // line
  win32DrawLine(dd,ee);
  renderWIN32Arrow(p2,p1,Coord::CANVAS);
  renderWIN32Arrow(p1,p2,Coord::CANVAS);

  // axes
  renderWIN32LineDash();
  win32DrawLine(aa,cc);
  win32DrawLine(bb,cc);

  // dist
  {
    ostringstream vstr;
    distToStr(vstr);
    vstr << ends;

    if (tkfont_) {
      win32Font(tkfont_);

      Tk_FontMetrics metrics;
      Tk_GetFontMetrics(tkfont_, &metrics);
      char* buf = dupstr(vstr.str().c_str());
      int width = Tk_TextWidth(tkfont_, buf, strlen(buf));

      Vector tt = ((bb-aa)/2 + aa) * Translate(-width/2., -metrics.descent);
      win32DrawText(tt, 0, buf);
      if (buf)
	delete buf;
    }
  }
}

void Ruler::renderWIN32GC()
{
  win32Color(parent->getXColor(colorName));
  renderWIN32LineNoDash();
}
#endif

// Support

void Ruler::updateHandles()
{
  center = (p2-p1)/2 + p1;
  angle  = (p2-p1).angle();

  // calc p3, dist
  FitsImage* ptr = parent->findFits(coordSystem,center);
  Vector a = ptr->mapFromRef(p1,coordSystem,skyFrame);
  Vector b = ptr->mapFromRef(p2,coordSystem,skyFrame);
  p3 = ptr->mapToRef(Vector(b[0],a[1]),coordSystem,skyFrame);
  dist = ptr->mapDistFromRef(p2, p1, distSystem, distFormat);

  // generate handles in canvas coords
  handle[0] = parent->mapFromRef(p1,Coord::CANVAS);
  handle[1] = parent->mapFromRef(p2,Coord::CANVAS);
}

void Ruler::calcAllBBox()
{
  // P3
  bbox.bound(parent->mapFromRef(p3,Coord::CANVAS));

  // make room for text
  if (tkfont_) {
    Vector v = (p2-p1)/2 + p1;

    ostringstream str;
    distToStr(str);
    str << ends;

    Tk_FontMetrics metrics;
    Tk_GetFontMetrics(tkfont_, &metrics);
    char* buf = dupstr(str.str().c_str());
    int width = Tk_TextWidth(tkfont_, buf, strlen(buf));

    Vector ll = parent->mapFromRef(v,Coord::CANVAS) *
      Translate(-width/2.,-metrics.descent);
    Vector ur = parent->mapFromRef(v,Coord::CANVAS) *
      Translate(width/2.,metrics.ascent);
    
    bbox.bound(ll);
    bbox.bound(ur);

    if (buf)
      delete [] buf;
  }

  Marker::calcAllBBox();
}

void Ruler::updateCoords(const Matrix& mx)
{
  p3*=mx;
  BaseLine::updateCoords(mx);
}

int Ruler::isOn(const Vector& v, const Vector& v1, const Vector& v2)
{
  // v : canvas coords
  // v1: ref coords
  // v2: ref coords

  // do this in canvas coords, not ref coords

  Vector l1 = parent->mapFromRef(v1,Coord::CANVAS);
  Vector l2 = parent->mapFromRef(v2,Coord::CANVAS);
  double a = (l2-l1).angle();

  Matrix m = Translate(-l1) * Rotate(a);
  Vector end = l2*m;
  Vector vv = v*m;
  return (vv[0]>0 && vv[0]<end[0] && 
	  vv[1]>-parent->markerEpsilon && vv[1]<parent->markerEpsilon);
}

int Ruler::isIn(const Vector& vv)
{
  // test to see if point is on edge, if so, considered inside

  if (isOn(vv,p1,p2) || isOn(vv,p1,p3) || isOn(vv,p2,p3))
    return 1;

  /*
    v[0]-- x value of point being tested
    v[1]-- y value of point being tested

    This algorithm is from "An Introduction to Ray Tracing", Academic Press,
    1989, edited by Andrew Glassner, pg 53
    -- a point lies in a polygon if a line is extended from the point to 
    infinite
    in any direction and the number of intersections with the polygon is odd.
    This is valid for both concave and convex polygons.
    Points on a vertex are considered inside.
    Points on a edge are considered inside.
  */

  // analysis in ref coords
  Vector v = parent->mapToRef(vv,Coord::CANVAS);

  int crossings = 0;   // number of crossings
  int sign;

  // for all edges

  for (int i=0; i<3; i++) {
    Vector v1, v2;
    switch (i) {
    case 0:
      v1 = p1-v;
      v2 = p2-v;
      sign = ((v1[1])>=0) ? 1 : -1; // init sign
      break;
    case 1:
      v1 = p2-v;
      v2 = p3-v;
      break;
    case 2:
      v1 = p3-v;
      v2 = p1-v;
      break;
    }

    int nextSign = (v2[1]>=0) ? 1 : -1; // sign holder for p2

    if (sign != nextSign) {
      if (v1[0]>0 && v2[0]>0)
	crossings++;
      else if (v1[0]>0 || v2[0]>0) {
	if (v1[0]-(v1[1]*(v2[0]-v1[0])/(v2[1]-v1[1])) > 0)
	  crossings++;
      }
      sign = nextSign;
    }
  }

  return fmod(float(crossings),float(2)) ? 1 : 0; // if odd, point is inside
}

void Ruler::setDistSpec(const char* distspec)
{
  strncpy(distSpec, distspec, 32);
}

void Ruler::setCoordSystem(Coord::CoordSystem sys, Coord::SkyFrame sky, 
			   Coord::CoordSystem dsys, Coord::DistFormat dist)
{
  coordSystem = sys;
  skyFrame = sky;
  distSystem = dsys;
  distFormat = dist;
  updateBBox();
}

void Ruler::distToStr(ostringstream& str)
{
  if (*distSpec) {
    char buf[64];
    sprintf(buf, distSpec, dist);
    str << buf;
  }
  else
    str << dist;
  
  switch (distSystem) {
  case Coord::IMAGE:
    str << " img";
    break;
  case Coord::PHYSICAL:
    str << " phy";
    break;
  case Coord::AMPLIFIER:
    str << " amp";
    break;
  case Coord::DETECTOR:
    str << " det";
    break;
  default:
    if (parent->findFits()->hasWCSCel(distSystem))
      switch (distFormat) {
      case Coord::DEGREE:
	str << " deg";
	break;
      case Coord::ARCMIN:
	str << '\'';
	break;
      case Coord::ARCSEC:
	str << '"';
	break;
      }
    else
      str << " lin";
  }
}

// list

void Ruler::list(ostream& str, Coord::CoordSystem sys, Coord::SkyFrame sky,
		 Coord::SkyFormat format, int conj, int strip)
{
  if (!strip) {
    FitsImage* ptr = parent->findFits(sys,center);
    listPre(str, sys, sky, ptr, strip, 1);

    str << type_ << '(';
    ptr->listFromRef(str,p1,sys,sky,format);
    str << ',';
    ptr->listFromRef(str,p2,sys,sky,format);
    str  << ')';

    if (conj)
      str << " ||";

    str << " ruler=";
    coord.listCoordSystem(str, coordSystem, skyFrame, ptr);
    str << ' ';
    coord.listDistSystem(str, distSystem, distFormat, ptr);
    if (*distSpec)
      str << " format={" << distSpec << "}";

    listProperties(str, 0);
  }
}

void Ruler::listXML(ostream& str, Coord::CoordSystem sys, Coord::SkyFrame sky, 
		    Coord::SkyFormat format)
{
  FitsImage* ptr = parent->findFits(sys,center);
  Vector vv[2];
  vv[0] = p1;
  vv[1] = p2;

  ostringstream sysstr;
  coord.listCoordSystem(sysstr, coordSystem, skyFrame, ptr);
  sysstr << ends;

  ostringstream diststr;
  coord.listDistSystem(diststr, distSystem, distFormat, ptr);
  diststr << ends;

  XMLRowInit();
  XMLRow(XMLSHAPE,type_);

  XMLRowPoint(ptr,sys,sky,format,vv,2);
  XMLRow(XMLPARAM,(char*)(sysstr.str().c_str()));
  XMLRow(XMLPARAM2,(char*)(diststr.str().c_str()));
  XMLRow(XMLPARAM3,(char*)distSpec);

  XMLRowProps(ptr,sys);
  XMLRowEnd(str);
}

