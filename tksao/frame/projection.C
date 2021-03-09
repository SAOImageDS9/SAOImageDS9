// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "projection.h"
#include "fitsimage.h"

Projection::Projection(const Projection& a) : BaseLine(a)
{
  width = a.width;
  p3 = a.p3;
  p4 = a.p4;
}

Projection::Projection(Base* p, const Vector& ptr1, const Vector& ptr2, 
		       double wd,
		       const char* clr, int* dsh,
		       int wth, const char* fnt, const char* txt, 
		       unsigned short prop, const char* cmt,
		       const List<Tag>& tg, const List<CallBack>& cb) 
  : BaseLine(p, ptr1, ptr2, clr, dsh, wth, fnt, txt, prop, cmt, tg, cb)
{
  width = wd;

  strcpy(type_,"projection");
  handle = new Vector[3];
  numHandle = 3;

  // this causes a focus problem with MacOSX and X11?
  // analysis(PLOT2D,1);
  updateBBox();
}

void Projection::renderX(Drawable drawable, Coord::InternalSystem sys, 
			 RenderMode mode)
{
  GC lgc = renderXGC(mode);

  Vector aa = parent->mapFromRef(p1,sys);
  Vector bb = parent->mapFromRef(p2,sys);

  XDrawLine(display, drawable, lgc, aa[0], aa[1], bb[0], bb[1]);

  if (width>0) {
    renderXLineDash(lgc);

    Matrix imm = bckMatrix();
    Vector a = p1*imm;
    Vector b = p2*imm;
    Vector c = Vector(0,-width);

    Vector ll = fwdMap(a,sys);
    Vector lr = fwdMap(b,sys);
    Vector ul = fwdMap(a+c,sys);
    Vector ur = fwdMap(b+c,sys);

    XDrawLine(display, drawable, lgc, lr[0], lr[1], ur[0], ur[1]);
    XDrawLine(display, drawable, lgc, ur[0], ur[1], ul[0], ul[1]);
    XDrawLine(display, drawable, lgc, ul[0], ul[1], ll[0], ll[1]);
  }
}

GC Projection::renderXGC(RenderMode mode)
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
}

void Projection::renderPS(PSColorSpace mode)
{
  renderPSGC(mode);

  Vector aa = parent->mapFromRef(p1,Coord::CANVAS);
  Vector bb = parent->mapFromRef(p2,Coord::CANVAS);
  {
    ostringstream str;
    str << "newpath " 
	<< parent->TkCanvasPs(aa) << ' '
	<< "moveto "
	<< parent->TkCanvasPs(bb) << ' '
	<< "lineto stroke" << endl << ends;
    Tcl_AppendResult(parent->interp, str.str().c_str(), NULL);
  }

  if (width>0) {
    renderPSLineDash();

    Matrix imm = bckMatrix();
    Vector a = p1*imm;
    Vector b = p2*imm;
    Vector c = Vector(0,-width);

    Vector ll = fwdMap(a,Coord::CANVAS);
    Vector lr = fwdMap(b,Coord::CANVAS);
    Vector ul = fwdMap(a+c,Coord::CANVAS);
    Vector ur = fwdMap(b+c,Coord::CANVAS);

    ostringstream str;
    str << "newpath " 
	<< parent->TkCanvasPs(lr) << ' '
	<< "moveto "
	<< parent->TkCanvasPs(ur) << ' '
	<< "lineto "
	<< parent->TkCanvasPs(ul) << ' '
	<< "lineto "
	<< parent->TkCanvasPs(ll) << ' '
	<< "lineto stroke" << endl << ends;
    Tcl_AppendResult(parent->interp, str.str().c_str(), NULL);
  }
}

void Projection::renderPSGC(PSColorSpace mode)
{
  parent->psColor(mode, parent->getXColor(colorName));
  renderPSLineNoDash();
}

#ifdef __WIN32
#include <win32lib.h>

void Projection::renderWIN32()
{
  renderWIN32GC();

  Vector aa = parent->mapFromRef(p1,Coord::CANVAS);
  Vector bb = parent->mapFromRef(p2,Coord::CANVAS);

  win32DrawLine(aa,bb);

  if (width>0) {
    renderWIN32LineDash();

    Matrix imm = bckMatrix();
    Vector a = p1*imm;
    Vector b = p2*imm;
    Vector c = Vector(0,-width);

    Vector ll = fwdMap(a,Coord::CANVAS);
    Vector lr = fwdMap(b,Coord::CANVAS);
    Vector ul = fwdMap(a+c,Coord::CANVAS);
    Vector ur = fwdMap(b+c,Coord::CANVAS);

    win32DrawLine(lr,ur);
    win32DrawLine(ur,ul);
    win32DrawLine(ul,ll);
  }
}

void Projection::renderWIN32GC()
{
  win32Color(parent->getXColor(colorName));
  renderWIN32LineNoDash();
}
#endif

// Support

void Projection::updateHandles()
{
  center = (p2-p1)/2 + p1;
  angle = (p2-p1).angle();

  Matrix imm = bckMatrix();
  Vector a = p1*imm;
  Vector b = p2*imm;
  Vector c = Vector(0,-width);
  p3 = fwdMap(a+c,Coord::CANVAS);
  p4 = fwdMap(b+c,Coord::CANVAS);
  Vector hh = fwdMap(((b-a)/2+a)+c,Coord::CANVAS);

  // generate handles in Coord::CANVAS coords
  handle[0] = parent->mapFromRef(p1,Coord::CANVAS);
  handle[1] = parent->mapFromRef(p2,Coord::CANVAS);
  handle[2] = hh;
}

void Projection::calcAllBBox()
{
  // p3/p4 are already in Coord::CANVAS coords
  bbox.bound(p3);
  bbox.bound(p4);
  Marker::calcAllBBox();
}

void Projection::edit(const Vector& v, int h)
{
  switch (h) {
  case 1:
    p1 = v;
    break;
  case 2:
    p2 = v;
    break;
  case 3:
    Matrix mm = bckMatrix();
    width = -(v * mm)[1];
    if (width<0)
      width = 0;
    break;
  }

  updateBBox();
  doCallBack(CallBack::EDITCB);
}

int Projection::isIn(const Vector& v)
{
  Vector zz = parent->zoom();
  if (width * zz.length() > parent->markerEpsilon) {
    Matrix imm = bckMatrix();
    Vector a = p1*imm;
    Vector b = p2*imm;

    Vector vv = -bckMap(v,Coord::CANVAS);
    return (vv[0]>a[0] && vv[0]<b[0] && vv[1]>0 && vv[1]<width);
  }
  else
    return BaseLine::isIn(v);
}

void Projection::set(const Vector& v1, const Vector& v2, double wd)
{
  p1 = v1;
  p2 = v2;
  width = wd;

  updateBBox();
  doCallBack(CallBack::EDITCB);
}

void Projection::setWidth(double wd)
{
  width = wd;
  if (width<0)
    width = 0;

  updateBBox();
  doCallBack(CallBack::EDITCB);
}

void Projection::updateCoords(const Matrix& mx)
{
  width = (Vector(0,width) * Scale(mx))[1];
  BaseLine::updateCoords(mx);
}

void Projection::analysis(AnalysisTask mm, int which)
{
  switch (mm) {
  case PLOT2D:
    if (!analysisPlot2d_ && which) {
      addCallBack(CallBack::MOVECB, analysisPlot2dCB_[0], 
		  parent->options->cmdName);
      addCallBack(CallBack::EDITCB, analysisPlot2dCB_[0], 
		  parent->options->cmdName);
      addCallBack(CallBack::UPDATECB, analysisPlot2dCB_[0], 
		  parent->options->cmdName);
      addCallBack(CallBack::DELETECB, analysisPlot2dCB_[1], 
		  parent->options->cmdName);
    }
    if (analysisPlot2d_ && !which) {
      deleteCallBack(CallBack::MOVECB, analysisPlot2dCB_[0]);
      deleteCallBack(CallBack::EDITCB, analysisPlot2dCB_[0]);
      deleteCallBack(CallBack::UPDATECB, analysisPlot2dCB_[0]);
      deleteCallBack(CallBack::DELETECB, analysisPlot2dCB_[1]);
    }

    analysisPlot2d_ = which;
    break;
  default:
    // na
    break;
  }
}

void Projection::analysisPlot2d(char* xname, char* yname, 
				char* xcname, char* ycname,
				Coord::CoordSystem sys, Coord::SkyFrame sky,
				Marker::AnalysisMethod method)
{
  double* x;
  double* y;
  double* xc;
  double* yc;

  int num = parent->markerAnalysisPlot2d(this, &x, &y, &xc, &yc, p1, p2, width,
					 sys, sky, method);
  analysisXYEEResult(xname, yname, xcname, ycname, x, y, xc, yc, num);
}

// list

void Projection::list(ostream& str, Coord::CoordSystem sys, Coord::SkyFrame sky,
		      Coord::SkyFormat format, int conj, int strip)
{
  if (strip)
    return;
  
  FitsImage* ptr = parent->findFits(sys,center);
  listPre(str, sys, sky, ptr, strip, 1);

  str << type_ << '(';
  ptr->listFromRef(str,p1,sys,sky,format);
  str << ',';
  ptr->listFromRef(str,p2,sys,sky,format);
  str << ',';
  ptr->listLenFromRef(str,width,sys,Coord::ARCSEC);
  if (ptr->hasWCSCel(sys))
    str << '"';
  str  << ')';

  if (conj)
    str << " ||";

  listProperties(str, 0);
}

void Projection::listXML(ostream& str, Coord::CoordSystem sys,
			 Coord::SkyFrame sky, Coord::SkyFormat format)
{
  FitsImage* ptr = parent->findFits(sys,center);
  Vector vv[2];
  vv[0] = p1;
  vv[1] = p2;

  XMLRowInit();
  XMLRow(XMLSHAPE,type_);

  XMLRowPoint(ptr,sys,sky,format,vv,2);

  ostringstream rstr;
  ptr->listLenFromRef(rstr,width,sys,Coord::ARCSEC);
  XMLRow(XMLR,(char*)rstr.str().c_str());

  XMLRowProps(ptr,sys);
  XMLRowEnd(str);
}



