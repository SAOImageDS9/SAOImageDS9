// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "util.h"
#include "compass.h"
#include "fitsimage.h"

Compass::Compass(const Compass& a) : Marker(a)
{
  p1 = a.p1;
  p2 = a.p2;
  pp1 = a.pp1;
  pp2 = a.pp2;
  radius = a.radius;
  coordSystem = a.coordSystem;
  skyFrame = a.skyFrame;
  northText = dupstr(a.northText);
  eastText = dupstr(a.eastText);
  northArrow = a.northArrow;
  eastArrow = a.eastArrow;
}

Compass::Compass(Base* p, const Vector& ctr,
		 double r,
		 const char* n, const char* e, int na, int ea,
		 Coord::CoordSystem sys, Coord::SkyFrame sky, 
		 const char* clr, int* dsh, 
		 int w, const char* f, const char* t, 
		 unsigned short prop, const char* c,
		 const List<Tag>& tag, const List<CallBack>& cb) 
  : Marker(p, ctr, 0, clr, dsh, w, f, t, prop, c, tag, cb)
{
  coordSystem = sys;
  skyFrame = sky;
  radius = r;

  northText = dupstr(n);
  eastText = dupstr(e);
  northArrow = na;
  eastArrow = ea;

  strcpy(type_,"compass");
  handle = new Vector[3];
  numHandle = 3;

  updateBBox();
}

Compass::~Compass()
{
  if (northText)
    delete [] northText;

  if (eastText)
    delete [] eastText;
}

void Compass::renderX(Drawable drawable, Coord::InternalSystem sys, RenderMode mode)
{
  GC lgc = renderXGC(mode);

  Vector aa = parent->mapFromRef(center,sys);
  Vector bb = parent->mapFromRef(p1,sys);
  Vector cc = parent->mapFromRef(p2,sys);
  Vector dd = parent->mapFromRef(pp1,sys);
  Vector ee = parent->mapFromRef(pp2,sys);

  if (northArrow) {
    bb = modifyArrow(center,p1,sys);
    renderXArrow(drawable, center, p1, sys, lgc);
  }

  if (eastArrow) {
    cc = modifyArrow(center,p2,sys);
    renderXArrow(drawable, center, p2, sys, lgc);
  }

  XDrawLine(display, drawable, lgc, aa[0], aa[1], bb[0], bb[1]);
  XDrawLine(display, drawable, lgc, aa[0], aa[1], cc[0], cc[1]);

  if (tkfont_) {
    XSetFont(display, lgc, Tk_FontId(tkfont_));

    Tk_FontMetrics metrics;
    Tk_GetFontMetrics(tkfont_, &metrics);

    if (northText) {
      float r1 = Tk_TextWidth(tkfont_, northText, strlen(northText))/2.;
      float r2 = metrics.linespace/2.;
      double angle = (bb-aa).angle();

      Vector ddd = dd * 
	Translate(r1*cos(angle),r2*sin(angle)) * 
	Translate(-r1,(metrics.ascent-metrics.descent)/2.);

      Tk_DrawChars(display, drawable, lgc, tkfont_, northText,
		   strlen(northText), ddd[0], ddd[1]);
    }

    if (eastText) {
      float r1 = Tk_TextWidth(tkfont_, eastText, strlen(eastText))/2.;
      float r2 = metrics.linespace/2.;
      double angle = (cc-aa).angle();
      Vector eee = ee *
	Translate(r1*cos(angle),r2*sin(angle)) * 
	Translate(-r1,(metrics.ascent-metrics.descent)/2.);

      Tk_DrawChars(display, drawable, lgc, tkfont_, eastText,
		   strlen(eastText), eee[0], eee[1]);
    }
  }
}

GC Compass::renderXGC(RenderMode mode)
{
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

void Compass::renderPS(PSColorSpace mode)
{
  renderPSGC(mode);

  Vector aa = parent->mapFromRef(center,Coord::CANVAS);
  Vector bb = parent->mapFromRef(p1,Coord::CANVAS);
  Vector cc = parent->mapFromRef(p2,Coord::CANVAS);
  Vector dd = parent->mapFromRef(pp1,Coord::CANVAS);
  Vector ee = parent->mapFromRef(pp2,Coord::CANVAS);

  if (northArrow) {
    bb = modifyArrow(center,p1,Coord::CANVAS);
    renderPSArrow(center,p1,Coord::CANVAS);
  }

  if (eastArrow) {
    cc = modifyArrow(center,p2,Coord::CANVAS);
    renderPSArrow(center,p2,Coord::CANVAS);
  }

  {
    ostringstream str;
    str << "newpath " 
	<< parent->TkCanvasPs(aa) << ' '
	<< "moveto "
	<< parent->TkCanvasPs(bb) << ' '
	<< "lineto stroke" << endl
	<< "newpath " 
	<< parent->TkCanvasPs(aa) << ' '
	<< "moveto "
	<< parent->TkCanvasPs(cc) << ' '
	<< "lineto stroke" << endl << ends;
    Tcl_AppendResult(parent->interp, str.str().c_str(), NULL);
  }

  if (psfont_) {
    ostringstream str;

    const char* ff = Tk_NameOfFont(psfont_);
    str << '/' << psFontName(ff)
    	<< " findfont " << int(psFontSize(ff)*parent->getDisplayRatio())
	<< " scalefont setfont" << endl;

    if (northText) {
      double angle = (bb-aa).angle();
      Vector ddd = parent->TkCanvasPs(dd);
      str << "gsave" << endl
	  << "newpath " << endl
	  << ddd << " moveto" << endl
	  << '(' << psQuote(northText) << ')' << endl
	// bbox
	  << "dup true charpath pathbbox " << endl
	  << "closepath " << endl
	// text llx lly urx ury

	// dup bbox 
	  << "3 index 3 index 3 index 3 index " << endl
	// text llx lly urx ury llx lly urx ury

	// Translate(-r1,(metrics.ascent-metrics.descent)/2.)
	  << "3 -1 roll sub 3.6 div neg " << endl
	  << "3 1 roll sub 2 div exch " << endl
	// text llx lly urx ury Sx Sy

	// reorder
	  << "6 1 roll 6 1 roll " << endl
	// text Sx Sy llx lly urx ury

	// Translate(r1*cos(angle),r2*sin(angle))
	  << "3 -1 roll sub 2 div neg " << endl
	  << "3 1 roll sub 2 div exch " << endl
	  << radToDeg(angle) << " sin mul exch " << endl
	  << radToDeg(angle) << " cos mul neg exch " << endl
	// text Sx Sy Tx Ty

	// add
	  << "3 -1 roll add " << endl
	  << "3 1 roll add exch " << endl
	// text Fx Fy

	  << ddd << " moveto rmoveto show " << endl
	  << "grestore" << endl;
    }

    if (eastText) {
      double angle = (cc-aa).angle();
      Vector eee = parent->TkCanvasPs(ee);
      str << "gsave" << endl
	  << "newpath " << endl
	  << eee << " moveto" << endl
	  << '(' << psQuote(eastText) << ')' << endl
	  << "dup true charpath pathbbox "
	  << "closepath " << endl

	  << "3 index 3 index 3 index 3 index " << endl

	  << "3 -1 roll sub 3.6 div neg "
	  << "3 1 roll sub 2 div exch " << endl

	  << "6 1 roll 6 1 roll " << endl

	  << "3 -1 roll sub 2 div neg "
	  << "3 1 roll sub 2 div exch " << endl
	  << radToDeg(angle) << " sin mul exch "
	  << radToDeg(angle) << " cos mul neg exch " << endl

	  << "3 -1 roll add "
	  << "3 1 roll add exch " << endl

	  << eee << " moveto rmoveto show " << endl
	  << "grestore" << endl;
    }

    str << ends;
    Tcl_AppendResult(parent->interp, str.str().c_str(), NULL);
  }
}

void Compass::renderPSGC(PSColorSpace mode)
{
  parent->psColor(mode, parent->getXColor(colorName));
  renderPSLineNoDash();
}

#ifdef __WIN32
#include <win32lib.h>

void Compass::renderWIN32()
{
  renderWIN32GC();

  Vector aa = parent->mapFromRef(center,Coord::CANVAS);
  Vector bb = parent->mapFromRef(p1,Coord::CANVAS);
  Vector cc = parent->mapFromRef(p2,Coord::CANVAS);
  Vector dd = parent->mapFromRef(pp1,Coord::CANVAS);
  Vector ee = parent->mapFromRef(pp2,Coord::CANVAS);

  if (northArrow) {
    bb = modifyArrow(center,p1,Coord::CANVAS);
    renderWIN32Arrow(center,p1,Coord::CANVAS);
  }

  if (eastArrow) {
    cc = modifyArrow(center,p2,Coord::CANVAS);
    renderWIN32Arrow(center,p2,Coord::CANVAS);
  }

  win32DrawLine(aa,bb);
  win32DrawLine(aa,cc);

  if (tkfont_) {
    win32Font(tkfont_);

    Tk_FontMetrics metrics;
    Tk_GetFontMetrics(tkfont_, &metrics);

    if (northText) {
      float r1 = Tk_TextWidth(tkfont_, northText, strlen(northText))/2.;
      float r2 = metrics.linespace/2.;
      double angle = (bb-aa).angle();
      Vector ddd = dd *
	Translate(r1*cos(angle),r2*sin(angle)) * 
	Translate(-r1,(metrics.ascent-metrics.descent)/2.);

      win32DrawText(ddd, 0, northText);
    }

    if (eastText) {
      float r1 = Tk_TextWidth(tkfont_, eastText, strlen(eastText))/2.;
      float r2 = metrics.linespace/2.;
      double angle = (cc-aa).angle();
      Vector eee = ee *
	Translate(r1*cos(angle),r2*sin(angle)) * 
	Translate(-r1,(metrics.ascent-metrics.descent)/2.);

      win32DrawText(eee, 0, eastText);
    }
  }
}

void Compass::renderWIN32GC()
{
  win32Color(parent->getXColor(colorName));
  renderWIN32LineNoDash();
}
#endif

void Compass::updateHandles()
{
  // calc p1, p2
  FitsImage* ptr = parent->findFits(coordSystem,center);
  Vector orval = ptr->mapFromRef(center, coordSystem, skyFrame);
  double delta = ptr->mapLenFromRef(1, coordSystem);
  Vector npix = ptr->mapToRef(Vector(orval[0],orval[1]+delta), 
			      coordSystem, skyFrame);
  Vector epix = ptr->mapToRef(Vector(orval[0]+delta,orval[1]), 
			      coordSystem, skyFrame);
  Vector north = (npix - center).normalize();
  Vector east =  (epix - center).normalize();

  // calc text points pp1,pp2
  Matrix r  = Scale(radius)*Scale(parent->zoom()).invert();
  Matrix rr = Scale(5)*Scale(parent->zoom()).invert();
  p1 = center + north*r;
  p2 = center + east*r;
  pp1 = p1 + north*rr;
  pp2 = p2 + east*rr;

  // generate handles
  handle[0] = parent->mapFromRef(center,Coord::CANVAS);
  handle[1] = parent->mapFromRef(p1,Coord::CANVAS);
  handle[2] = parent->mapFromRef(p2,Coord::CANVAS);
}

void Compass::calcAllBBox()
{
  if (tkfont_) {
    // make room for text
    Tk_FontMetrics metrics;
    Tk_GetFontMetrics(tkfont_, &metrics);

    Vector a = parent->mapFromRef(center,Coord::CANVAS);
    Vector b = parent->mapFromRef(p1,Coord::CANVAS);
    Vector c = parent->mapFromRef(p2,Coord::CANVAS);
    Vector bb = parent->mapFromRef(pp1,Coord::CANVAS);
    Vector cc = parent->mapFromRef(pp2,Coord::CANVAS);

    if (northText) {
      float r1 = Tk_TextWidth(tkfont_, northText, strlen(northText))/2.;
      float r2 = metrics.linespace/2.;
      double angle = (b-a).angle();

      Vector bbb = bb * Translate(r1*cos(angle),r2*sin(angle));

      bbox.bound(bbb * Translate(-r1,(metrics.ascent-metrics.descent)/2.));
      bbox.bound(bbb * Translate(-r1,-metrics.ascent/2.-3*metrics.descent/2.));
      bbox.bound(bbb * Translate(r1,(metrics.ascent-metrics.descent)/2.));
      bbox.bound(bbb * Translate(r1,-metrics.ascent/2.-3*metrics.descent/2.));
    }

    if (eastText) {
      float r1 = Tk_TextWidth(tkfont_, eastText, strlen(eastText))/2.;
      float r2 = metrics.linespace/2.;
      double angle = (c-a).angle();

      Vector ccc = cc * Translate(r1*cos(angle),r2*sin(angle));

      bbox.bound(ccc * Translate(-r1,(metrics.ascent-metrics.descent)/2.));
      bbox.bound(ccc * Translate(-r1,-metrics.ascent/2.-3*metrics.descent/2.));
      bbox.bound(ccc * Translate(r1,(metrics.ascent-metrics.descent)/2.));
      bbox.bound(ccc * Translate(r1,-metrics.ascent/2.-3*metrics.descent/2.));
    }
  }

  Marker::calcAllBBox();
}

void Compass::edit(const Vector& v, int h)
{
  radius = (v * Translate(-center) * Scale(parent->zoom())).length();

  updateBBox();
  doCallBack(CallBack::EDITCB);
}

int Compass::isIn(const Vector& vv)
{
  /*
    v[0]-- x value of point being tested
    v[1]-- y value of point being tested

    This algorithm is from "An Introduction to Ray Tracing", Academic Press,
    1989, edited by Andrew Glassner, pg 53
    -- a point lies in a polygon if a line is extended from the point to 
    infinite in any direction and the number of intersections with the 
    polygon is odd.
    This is valid for both concave and convex polygons.
    Points on a vertex are considered inside.
    Points on a edge are considered inside.
  */

  Vector v = parent->mapToRef(vv,Coord::CANVAS);
  int crossings = 0;   // number of crossings

  Vector bb[4];
  bb[0] = center - v;
  bb[1] = p1 - v;
  bb[2] = p2 - v;
  bb[3] = bb[0];

  Vector v1;
  Vector v2 = bb[0];

  int sign = ((v2[1])>=0) ? 1 : -1; // init sign

  // for all edges

  for (int j=1; j<4; j++) {
    // look at next two vertices
    v1 = v2;
    v2 = bb[j];

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

void Compass::setRadius(double r)
{
  radius = r;

  updateBBox();
  doCallBack(CallBack::EDITCB);
}

void Compass::setArrows(int n, int e)
{
  northArrow = n;
  eastArrow = e;

  updateBBox();
  doCallBack(CallBack::EDITCB);
}

void Compass::setLabels(const char* n, const char* e)
{
  northText = dupstr(n);
  eastText = dupstr(e);

  updateBBox();
  doCallBack(CallBack::EDITCB);
}

void Compass::setCoordSystem(Coord::CoordSystem sys, Coord::SkyFrame sky)
{
  coordSystem = sys;
  skyFrame = sky;

  updateBBox();
}

// list

void Compass::list(ostream& str, Coord::CoordSystem sys, Coord::SkyFrame sky,
		 Coord::SkyFormat format, int conj, int strip)
{
  if (!strip) {
    FitsImage* ptr = parent->findFits(sys,center);
    listPre(str, sys, sky, ptr, strip, 1);

    str << type_ << '(';
    ptr->listFromRef(str,center,sys,sky,format);
    str << ',';
    ptr->listLenFromRef(str,radius,sys,Coord::ARCSEC);
    if (ptr->hasWCSCel(sys))
      str << '"';
    str  << ')';

    if (conj)
      str << " ||";

    str << " compass=";
    coord.listCoordSystem(str, coordSystem, skyFrame, ptr);
    str << " {" << northText << "} {" << eastText << "} " 
	<< northArrow << ' ' << eastArrow;
    listProperties(str, 0);
  }
}

void Compass::listXML(ostream& str, Coord::CoordSystem sys, 
		      Coord::SkyFrame sky, Coord::SkyFormat format)
{
  FitsImage* ptr = parent->findFits(sys,center);

  XMLRowInit();
  XMLRow(XMLSHAPE,type_);

  XMLRowCenter(ptr,sys,sky,format);

  ostringstream rstr;
  ptr->listLenFromRef(rstr,radius,sys,Coord::ARCSEC);
  XMLRow(XMLR,(char*)rstr.str().c_str());

  ostringstream pstr;
  coord.listCoordSystem(pstr, coordSystem, skyFrame, ptr);
  XMLRow(XMLPARAM,(char*)(pstr.str().c_str()));

  XMLRow(XMLPARAM2,northText);
  XMLRow(XMLPARAM3,eastText);
  XMLRow(XMLPARAM4,northArrow);
  XMLRow(XMLPARAM5,eastArrow);

  XMLRowProps(ptr,sys);
  XMLRowEnd(str);
}
