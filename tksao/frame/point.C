// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "util.h"
#include "point.h"
#include "fitsimage.h"

#define NUMSEG 16

Point::Point(Base* p, const Vector& ctr)
  : Marker(p, ctr, 0)
{
  strcpy(type_, "point");

  shape_ = CIRCLE;
  shapeStr(shape_);
  size_ = 11;

  handle = new Vector[4];
  numHandle = 4;

  updateBBox();
}

Point::Point(Base* p, const Vector& ctr, 
	     PointShape ss, int size,
	     const char* clr, int* dsh, 
	     int wth, const char* fnt, const char* txt,
	     unsigned short prop, const char* cmt,
	     const List<Tag>& tg, const List<CallBack>& cb)
  : Marker(p, ctr, 0, clr, dsh, wth, fnt, txt, prop, cmt, tg, cb)
{
  strcpy(type_, "point");

  shape_ = ss;
  shapeStr(ss);
  size_ = size;

  handle = new Vector[4];
  numHandle = 4;

  updateBBox();
}

Point::Point(const Point& a) : Marker(a)
{
  shape_ = a.shape_;
  shapestr_ = dupstr(a.shapestr_);
  size_ = a.size_;
}

Point::~Point()
{
  if (shapestr_)
    delete [] shapestr_;
}

// X11

void Point::renderX(Drawable drawable, Coord::InternalSystem sys, RenderMode mode)
{
  GC lgc = renderXGC(mode);
  Vector* vv = NULL;

  switch (shape_) {
  case CIRCLE:
    renderXCircle(drawable, sys, mode, size_);
    break;
  case BOX:
    renderXBox(drawable, sys, mode);
    break;
  case DIAMOND:
    vv = generateDiamond(sys);
    XDrawLine(display, drawable, lgc, vv[0][0], vv[0][1], vv[1][0], vv[1][1]);
    XDrawLine(display, drawable, lgc, vv[1][0], vv[1][1], vv[2][0], vv[2][1]);
    XDrawLine(display, drawable, lgc, vv[2][0], vv[2][1], vv[3][0], vv[3][1]);
    XDrawLine(display, drawable, lgc, vv[3][0], vv[3][1], vv[0][0], vv[0][1]);
    break;
  case CROSS:
    vv = generateCross(sys);
    XDrawLine(display, drawable, lgc, vv[0][0], vv[0][1], vv[1][0], vv[1][1]);
    XDrawLine(display, drawable, lgc, vv[2][0], vv[2][1], vv[3][0], vv[3][1]);
    break;
  case EX:
    vv = generateEx(sys);
    XDrawLine(display, drawable, lgc, vv[0][0], vv[0][1], vv[1][0], vv[1][1]);
    XDrawLine(display, drawable, lgc, vv[2][0], vv[2][1], vv[3][0], vv[3][1]);
    break;
  case ARROW:
    vv = generateArrow(sys);
    XDrawLine(display, drawable, lgc, vv[0][0], vv[0][1], vv[3][0], vv[3][1]);
    XDrawLine(display, drawable, lgc, vv[1][0], vv[1][1], vv[3][0], vv[3][1]);
    XDrawLine(display, drawable, lgc, vv[2][0], vv[2][1], vv[3][0], vv[3][1]);
    break;
  case BOXCIRCLE:
    renderXBox(drawable, sys, mode);
    renderXCircle(drawable, sys, mode, size_-2);
    break;
  }

  if (vv)
    delete [] vv;
}

void Point::renderXCircle(Drawable drawable, Coord::InternalSystem sys, 
			  RenderMode mode, int rr)
{
  GC lgc = renderXGC(mode);
  if (parent->isAzElZero()) {
    Vector cc = parent->mapFromRef(center,sys);
    Vector v = cc*Translate(-Vector(rr,rr)/2);
#ifndef __WIN32
    XDrawArc(display, drawable, lgc, v[0], v[1], rr, rr, 0, 360*64);
#else
    int ss = int(rr/2.+.5)*2;
    XDrawArc(display, drawable, lgc, v[0], v[1], ss, ss, 0, 360*64);
#endif
  }
  else {
    Vector* vv = generateCircle(sys, rr);
    for (int ii=1; ii<=NUMSEG; ii++)
      XDrawLine(display, drawable, lgc, vv[ii-1][0], vv[ii-1][1], 
		vv[ii][0], vv[ii][1]);
    delete [] vv;
  }
}

void Point::renderXBox(Drawable drawable, Coord::InternalSystem sys, RenderMode mode)
{
  GC lgc = renderXGC(mode);
  Vector* vv = generateBox(sys);
  XDrawLine(display, drawable, lgc, vv[0][0], vv[0][1], vv[1][0], vv[1][1]);
  XDrawLine(display, drawable, lgc, vv[1][0], vv[1][1], vv[2][0], vv[2][1]);
  XDrawLine(display, drawable, lgc, vv[2][0], vv[2][1], vv[3][0], vv[3][1]);
  XDrawLine(display, drawable, lgc, vv[3][0], vv[3][1], vv[0][0], vv[0][1]);
  delete [] vv;
}

void Point::renderXLineDash(GC lgc)
{
  char dl[2];
#ifdef __WIN32
  dl[0] = dlist[0]/2;
  dl[1] = dlist[1]/2;
#else
  dl[0] = ceil(dlist[0]/2.);
  dl[1] = ceil(dlist[1]/2.);
#endif
  int ww = (highlited && canHighlite()) ? lineWidth*2 : lineWidth;
  XSetDashes(display, lgc, 0, dl, 2);
  XSetLineAttributes(display, lgc, ww, LineOnOffDash, CapButt, JoinMiter);
}

// PS

void Point::renderPS(PSColorSpace mode) 
{
  renderPSGC(mode);
  Vector* vv =NULL;
  ostringstream str;

  switch (shape_) {
  case CIRCLE:
    renderPSCircle(mode, size_);
    break;
  case BOX:
    renderPSBox(mode);
    break;
  case DIAMOND:
    vv = generateDiamond(Coord::CANVAS);
    str << "newpath " 
	<< parent->TkCanvasPs(vv[0]) << ' '
	<< "moveto "
	<< parent->TkCanvasPs(vv[1]) << ' '
	<< "lineto "
	<< parent->TkCanvasPs(vv[2]) << ' '
	<< "lineto "
	<< parent->TkCanvasPs(vv[3]) << ' '
	<< "lineto "
	<< "closepath stroke" << endl
	<< ends;
    Tcl_AppendResult(parent->interp, str.str().c_str(), NULL);
    break;
  case CROSS:
    vv = generateCross(Coord::CANVAS);
    str << "newpath " 
	<< parent->TkCanvasPs(vv[0]) << ' '
	<< "moveto "
	<< parent->TkCanvasPs(vv[1]) << ' '
	<< "lineto stroke" << endl
	<< "newpath " 
	<< parent->TkCanvasPs(vv[2]) << ' '
	<< "moveto "
	<< parent->TkCanvasPs(vv[3]) << ' '
	<< "lineto stroke" << endl
	<< ends;
    Tcl_AppendResult(parent->interp, str.str().c_str(), NULL);
    break;
  case EX:
    vv = generateEx(Coord::CANVAS);
    str << "newpath " 
	<< parent->TkCanvasPs(vv[0]) << ' '
	<< "moveto "
	<< parent->TkCanvasPs(vv[1]) << ' '
	<< "lineto stroke" << endl
	<< "newpath " 
	<< parent->TkCanvasPs(vv[2]) << ' '
	<< "moveto "
	<< parent->TkCanvasPs(vv[3]) << ' '
	<< "lineto stroke" << endl
	<< ends;
    Tcl_AppendResult(parent->interp, str.str().c_str(), NULL);
    break;
  case ARROW:
    vv = generateArrow(Coord::CANVAS);
    str << "newpath " 
	<< parent->TkCanvasPs(vv[0]) << ' '
	<< "moveto "
	<< parent->TkCanvasPs(vv[3]) << ' '
	<< "lineto stroke" << endl
	<< "newpath " 
	<< parent->TkCanvasPs(vv[1]) << ' '
	<< "moveto "
	<< parent->TkCanvasPs(vv[3]) << ' '
	<< "lineto stroke" << endl
	<< "newpath " 
	<< parent->TkCanvasPs(vv[2]) << ' '
	<< "moveto "
	<< parent->TkCanvasPs(vv[3]) << ' '
	<< "lineto stroke" << endl
	<< ends;
    Tcl_AppendResult(parent->interp, str.str().c_str(), NULL);
    break;
  case BOXCIRCLE:
    renderPSBox(mode);
    renderPSCircle(mode,size_-2);
    break;
  }

  if (vv)
    delete [] vv;
}

void Point::renderPSCircle(int mode, int ss)
{
  if (parent->isAzElZero()) {
    Vector cc = parent->mapFromRef(center,Coord::CANVAS);
    ostringstream str;
    str << "newpath " << parent->TkCanvasPs(cc) << ' ' << ss/2.
	<< " 0 360 arc stroke" << endl << ends;
    Tcl_AppendResult(parent->interp, str.str().c_str(), NULL);
  }
  else {
    Vector* vv = generateCircle(Coord::CANVAS,ss);
    ostringstream str;
    str << "newpath " << parent->TkCanvasPs(vv[0]) << " moveto " << endl;
    for (int ii=1; ii<NUMSEG; ii++)
      str << parent->TkCanvasPs(vv[ii]) << " lineto" << endl;
    str << "closepath stroke" << endl << ends;
    Tcl_AppendResult(parent->interp, str.str().c_str(), NULL);
    delete [] vv;
  }
}

void Point::renderPSBox(int mode)
{
  Vector* vv = generateBox(Coord::CANVAS);
  ostringstream str;
  str << "newpath " 
      << parent->TkCanvasPs(vv[0]) << ' '
      << "moveto "
      << parent->TkCanvasPs(vv[1]) << ' '
      << "lineto "
      << parent->TkCanvasPs(vv[2]) << ' '
      << "lineto "
      << parent->TkCanvasPs(vv[3]) << ' '
      << "lineto " << endl
      << "closepath stroke" << endl
      << ends;
  Tcl_AppendResult(parent->interp, (char*)str.str().c_str(), NULL);
  delete [] vv;
}

void Point::renderPSLineDash()
{
  ostringstream str;
  str << lineWidth << " setlinewidth" << endl;
  str << '[' << dlist[0]/2. << ' ' << dlist[1]/2. << "] 0 setdash" << endl << ends;
  Tcl_AppendResult(parent->interp, (char*)str.str().c_str(), NULL);
}

// WIN32

#ifdef __WIN32
#include <win32lib.h>

void Point::renderWIN32() 
{
  renderWIN32GC();
  Vector* vv = NULL;

  switch (shape_) {
  case CIRCLE:
    renderWIN32Circle(size_);
    break;
  case BOX:
    renderWIN32Box();
    break;
  case DIAMOND:
    vv = generateDiamond(Coord::CANVAS);
    win32DrawLines(vv,5);
    break;
  case CROSS:
    vv = generateCross(Coord::CANVAS);
    win32DrawLine(vv[0],vv[1]);
    win32DrawLine(vv[2],vv[3]);
    break;
  case EX:
    vv = generateEx(Coord::CANVAS);
    win32DrawLine(vv[0],vv[1]);
    win32DrawLine(vv[2],vv[3]);
    break;
  case ARROW:
    vv = generateArrow(Coord::CANVAS);
    win32DrawLine(vv[0],vv[3]);
    win32DrawLine(vv[1],vv[3]);
    win32DrawLine(vv[2],vv[3]);
    break;
  case BOXCIRCLE:
    renderWIN32Box();
    renderWIN32Circle(size_-2);
    break;
  }

  if (vv)
    delete [] vv;
}

void Point::renderWIN32Circle(int ss)
{
  if (parent->isAzElZero()) {
    Vector cc = parent->mapFromRef(center,Coord::CANVAS);
    win32DrawArc(cc, ss/2., 0, M_TWOPI);
  }
  else {
    Vector* vv = generateCircle(Coord::CANVAS, ss);
    win32DrawLines(vv,NUMSEG+1);
    delete [] vv;
  }
}

void Point::renderWIN32Box()
{
  Vector* vv = generateBox(Coord::CANVAS);
  win32DrawLines(vv,5);
  delete [] vv;
}

void Point::renderWIN32LineDash()
{
  win32Width(lineWidth);
  float dl[2];
  dl[0] = dlist[0]/2.;
  dl[1] = dlist[1]/2.;
  win32Dash(dl,2);
}
#endif

// Support

Vector* Point::generateCircle(Coord::InternalSystem sys, int ss)
{
  Vector* vv = new Vector[NUMSEG+1];

  Matrix mm;
  Matrix nn;
  setMatrices(sys,&mm,&nn);

  Vector cc = center*mm;

  for (int ii=0; ii<NUMSEG; ii++) {
    double ang = ii*M_TWOPI/NUMSEG;
    Vector xy = Vector(cos(ang)*ss/2, sin(ang)*ss/2);
    Vector aa = cc+xy;
    Vector bb = aa*nn;
    vv[ii] = parent->mapFromRef(bb,sys);
  }
  vv[NUMSEG] = vv[0];

  return vv;
}

Vector* Point::generateBox(Coord::InternalSystem sys)
{
  Vector* vv = new Vector[5];

  Matrix mm;
  Matrix nn;
  setMatrices(sys,&mm,&nn);

  double ss = size_/2;
  Vector cc = center*mm;

  Vector v1a = cc+Vector(-ss,-ss);
  Vector v1b = v1a*nn;
  vv[0] = parent->mapFromRef(v1b,sys);
  
  Vector v2a = cc+Vector(-ss,ss);
  Vector v2b = v2a*nn;
  vv[1] = parent->mapFromRef(v2b,sys);

  Vector v3a = cc+Vector(ss,ss);
  Vector v3b = v3a*nn;
  vv[2] = parent->mapFromRef(v3b,sys);

  Vector v4a = cc+Vector(ss,-ss);
  Vector v4b = v4a*nn;
  vv[3] = parent->mapFromRef(v4b,sys);

  vv[4] = vv[0];

  return vv;
}

Vector* Point::generateDiamond(Coord::InternalSystem sys)
{
  Vector* vv = new Vector[5];

  Matrix mm;
  Matrix nn;
  setMatrices(sys,&mm,&nn);

  Vector xx = Vector(size_-1,0)/2;
  Vector yy = Vector(0,size_-1)/2;
  Vector cc = center*mm;

  Vector v1a = cc-xx;
  Vector v1b = v1a*nn;
  vv[0] = parent->mapFromRef(v1b,sys);
  
  Vector v2a = cc-yy;
  Vector v2b = v2a*nn;
  vv[1] = parent->mapFromRef(v2b,sys);

  Vector v3a = cc+xx;
  Vector v3b = v3a*nn;
  vv[2] = parent->mapFromRef(v3b,sys);

  Vector v4a = cc+yy;
  Vector v4b = v4a*nn;
  vv[3] = parent->mapFromRef(v4b,sys);

  vv[4] = vv[0];

  return vv;
}

Vector* Point::generateCross(Coord::InternalSystem sys)
{
  Vector* vv = new Vector[4];

  Matrix mm;
  Matrix nn;
  setMatrices(sys,&mm,&nn);

  Vector xx = Vector(size_,0)/2;
  Vector yy = Vector(0,size_)/2;
  Vector cc = center*mm;

  Vector v1a = cc-xx;
  Vector v1b = v1a*nn;
  vv[0] = parent->mapFromRef(v1b,sys);
  
  Vector v2a = cc+xx;
  Vector v2b = v2a*nn;
  vv[1] = parent->mapFromRef(v2b,sys);

  Vector v3a = cc-yy;
  Vector v3b = v3a*nn;
  vv[2] = parent->mapFromRef(v3b,sys);

  Vector v4a = cc+yy;
  Vector v4b = v4a*nn;
  vv[3] = parent->mapFromRef(v4b,sys);

  return vv;
}

Vector* Point::generateEx(Coord::InternalSystem sys)
{
  Vector* vv = new Vector[4];

  Matrix mm;
  Matrix nn;
  setMatrices(sys,&mm,&nn);

  Vector xy = Vector(-size_,-size_)/2;
  Vector yx = Vector( size_,-size_)/2;
  Vector cc = center*mm;

  Vector v1a = cc+xy;
  Vector v1b = v1a*nn;
  vv[0] = parent->mapFromRef(v1b,sys);
  
  Vector v2a = cc-xy;
  Vector v2b = v2a*nn;
  vv[1] = parent->mapFromRef(v2b,sys);

  Vector v3a = cc+yx;
  Vector v3b = v3a*nn;
  vv[2] = parent->mapFromRef(v3b,sys);

  Vector v4a = cc-yx;
  Vector v4b = v4a*nn;
  vv[3] = parent->mapFromRef(v4b,sys);

  return vv;
}

Vector* Point::generateArrow(Coord::InternalSystem sys)
{
  Vector* vv = new Vector[4];

  Matrix mm;
  Matrix nn;
  setMatrices(sys,&mm,&nn);

  Vector xx = Vector(-size_,0)/2;
  Vector yy = Vector(0,-size_)/2;
  Vector cc = center*mm;

  Vector v1a = cc+xx;
  Vector v1b = v1a*nn;
  vv[0] = parent->mapFromRef(v1b,sys);
  
  Vector v2a = cc+yy;
  Vector v2b = v2a*nn;
  vv[1] = parent->mapFromRef(v2b,sys);

  Vector v3a = cc+xx+yy;
  Vector v3b = v3a*nn;
  vv[2] = parent->mapFromRef(v3b,sys);

  Vector v4a = cc;
  Vector v4b = v4a*nn;
  vv[3] = parent->mapFromRef(v4b,sys);

  return vv;
}

void Point::shapeStr(PointShape ss)
{
  switch (ss) {
  case CIRCLE:
    shapestr_ = dupstr("circle");
    break;
  case BOX:
    shapestr_ = dupstr("box");
    break;
  case DIAMOND:
    shapestr_ = dupstr("diamond");
    break;
  case CROSS:
    shapestr_ = dupstr("cross");
    break;
  case EX:
    shapestr_ = dupstr("x");
    break;
  case ARROW:
    shapestr_ = dupstr("arrow");
    break;
  case BOXCIRCLE:
    shapestr_ = dupstr("boxcircle");
    break;
  }
}

void Point::setShape(PointShape ss)
{
  shape_ = ss;
  shapeStr(ss);
  updateBBox();
  doCallBack(CallBack::EDITCB);
}

void Point::setSize(int size)
{
  size_ = size;
  updateBBox();
  doCallBack(CallBack::EDITCB);
}

void Point::updateHandles()
{
  // bound marker
  double ss = size_/2;
  Vector cc = center*parent->refToCanvas;

  Vector lla = cc+Vector(-ss,-ss);
  Vector llb = lla*parent->canvasToRef;
  Vector ll = parent->mapFromRef(llb,Coord::CANVAS);

  Vector lra = cc+Vector(-ss,ss);
  Vector lrb = lra*parent->canvasToRef;
  Vector lr = parent->mapFromRef(lrb,Coord::CANVAS);

  Vector ura = cc+Vector(ss,ss);
  Vector urb = ura*parent->canvasToRef;
  Vector ur = parent->mapFromRef(urb,Coord::CANVAS);

  Vector ula = cc+Vector(ss,-ss);
  Vector ulb = ula*parent->canvasToRef;
  Vector ul = parent->mapFromRef(ulb,Coord::CANVAS);

  handle[0] = ll;
  handle[1] = lr;
  handle[2] = ur;
  handle[3] = ul;
}

void Point::analysis(AnalysisTask mm, int which)
{
  switch (mm) {
  case PLOT3D:
    if (!analysisPlot3d_ && which) {
      addCallBack(CallBack::MOVECB, analysisPlot3dCB_[0], 
		  parent->options->cmdName);
      addCallBack(CallBack::DELETECB, analysisPlot3dCB_[1], 
		  parent->options->cmdName);
      addCallBack(CallBack::UPDATE3DCB, analysisPlot3dCB_[2], 
		  parent->options->cmdName);
    }
    if (analysisPlot3d_ && !which) {
      deleteCallBack(CallBack::MOVECB, analysisPlot3dCB_[0]);
      deleteCallBack(CallBack::DELETECB, analysisPlot3dCB_[1]);
      deleteCallBack(CallBack::UPDATE3DCB, analysisPlot3dCB_[2]);
    }

    analysisPlot3d_ = which;
    break;
  default:
    // na
    break;
  }
}

void Point::analysisPlot3d(char* xname, char* yname,
			   Coord::CoordSystem sys,
			   Marker::AnalysisMethod method)
{
  double* x;
  double* y;
  Vector ll = -Vector(.5,.5) * Translate(center);
  Vector ur =  Vector(.5,.5) * Translate(center);
  BBox bb(ll,ur);
  int num = parent->markerAnalysisPlot3d(this, &x, &y, bb, sys, method);
  analysisXYResult(xname, yname, x, y, num);
}

int Point::isInRef(const Vector& vv)
{
  Vector& pp = (Vector&)vv;

  if (pp[0]<-.5 || pp[0]>=.5 || pp[1]<-.5 || pp[1]>=.5)
    return 0;
  else
    return 1;
}

// list

void Point::list(ostream& str, Coord::CoordSystem sys, Coord::SkyFrame sky, 
		 Coord::SkyFormat format, int conj, int strip)
{
  FitsImage* ptr = parent->findFits(sys,center);
  listPre(str, sys, sky, ptr, strip, 0);

  str << type_ << '(';
  ptr->listFromRef(str,center,sys,sky,format);
  str  << ')';

  listPost(str, conj, strip);
}

void Point::listPost(ostream& str, int conj, int strip)
{
  // no props for semicolons
  if (!strip) {
    if (conj)
      str << " ||";

    str << " # point=" << shapestr_;

    if (size_ != POINTSIZE)
      str << ' ' << size_;
    listProperties(str,0);
  }
  else {
    if (conj)
      str << "||";
    else
      str << ';';
  }
}

void Point::listXML(ostream& str, Coord::CoordSystem sys, Coord::SkyFrame sky, 
		    Coord::SkyFormat format)
{
  FitsImage* ptr = parent->findFits(sys,center);
  
  XMLRowInit();
  XMLRow(XMLSHAPE,type_);

  XMLRowCenter(ptr,sys,sky,format);

  XMLRow(XMLPARAM,shapestr_);
  XMLRow(XMLPARAM2,size_);

  XMLRowProps(ptr,sys);
  XMLRowEnd(str);
}

void Point::listCiao(ostream& str, Coord::CoordSystem sys, int strip)
{
  FitsImage* ptr = parent->findFits();
  listCiaoPre(str);

  str << type_ << '(';
  switch (sys) {
  case Coord::IMAGE:
  case Coord::PHYSICAL:
  case Coord::DETECTOR:
  case Coord::AMPLIFIER:
    ptr->listFromRef(str,center,Coord::PHYSICAL);
    break;
  default:
    ptr->listFromRef(str,center,sys,Coord::FK5,Coord::SEXAGESIMAL);
    break;
  }
  str << ')';
  
  listCiaoPost(str, strip);
}

void Point::listPros(ostream& str, Coord::CoordSystem sys, Coord::SkyFrame sky,
		     Coord::SkyFormat format, int strip)
{
  FitsImage* ptr = parent->findFits();

  coord.listProsCoordSystem(str,sys,sky);
  str << "; " << type_ << ' ';
  switch (sys) {
  case Coord::IMAGE:
  case Coord::DETECTOR:
  case Coord::AMPLIFIER:
    sys = Coord::IMAGE;
  case Coord::PHYSICAL:
    ptr->listFromRef(str,center,sys);
    break;
  default:
    if (format == Coord::DEGREES)
      str << setunit('d');
    ptr->listFromRef(str,center,sys,sky,format);
    break;
  }

  listProsPost(str, strip);
}

void Point::listSAOtng(ostream& str, Coord::CoordSystem sys,
		       Coord::SkyFrame sky, Coord::SkyFormat format,
		       int strip)
{
  FitsImage* ptr = parent->findFits();
  listSAOtngPre(str, strip);

  str << type_ << '(';
  switch (sys) {
  case Coord::IMAGE:
  case Coord::PHYSICAL:
  case Coord::DETECTOR:
  case Coord::AMPLIFIER:
    ptr->listFromRef(str,center,Coord::IMAGE);
    break;
  default:
    ptr->listFromRef(str,center,sys,sky,format);
  }
  str  << ')';

  listSAOtngPost(str,strip);
}

void Point::listSAOimage(ostream& str, int strip)
{
  FitsImage* ptr = parent->findFits();
  listSAOimagePre(str);

  str << type_ << '(';
  ptr->listFromRef(str,center,Coord::IMAGE);
  str << ')';

  listSAOimagePost(str, strip);
}
