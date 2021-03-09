// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "polygon.h"
#include "fitsimage.h"

Polygon::Polygon(const Polygon& a) : BasePolygon(a)
{
  fill_ = a.fill_;
}

Polygon::Polygon(Base* p, const Vector& ctr, const Vector& b, int fill)
  : BasePolygon(p,ctr,b)
{
  fill_ = fill;
  strcpy(type_, "polygon");
  reset(b);
}

Polygon::Polygon(Base* p, const Vector& ctr,
		 const Vector& b, int fill,
		 const char* clr, int* dsh,
		 int wth, const char* fnt, const char* txt,
		 unsigned short prop, const char* cmt,
		 const List<Tag>& tg, const List<CallBack>& cb)
  : BasePolygon(p, ctr, b, clr, dsh, wth, fnt, txt, prop, cmt, tg, cb)
{
  fill_ = fill;
  strcpy(type_, "polygon");
  reset(b);
}

Polygon::Polygon(Base* p, const List<Vertex>& v, int fill,
		 const char* clr, int* dsh,
		 int wth, const char* fnt, const char* txt,
		 unsigned short prop, const char* cmt,
		 const List<Tag>& tg, const List<CallBack>& cb)
  : BasePolygon(p, v, clr, dsh, wth, fnt, txt, prop, cmt, tg, cb)
{
  fill_ = fill;
  strcpy(type_, "polygon");

  // check to see if the first and last node are the same
  if (vertex.head()->vector[0] == vertex.tail()->vector[0] &&
      vertex.head()->vector[1] == vertex.tail()->vector[1])
    delete vertex.pop();
}

void Polygon::renderX(Drawable drawable, Coord::InternalSystem sys, 
		      RenderMode mode)
{
  GC lgc = renderXGC(mode);

  vertex.head();
  int cnt = vertex.count()+1;
  XPoint* pp = new XPoint[cnt];
  for (int ii=0; ii<cnt; ii++) {
    Vector vv = fwdMap(vertex.current()->vector,sys);
    pp[ii].x = (short)vv[0];
    pp[ii].y = (short)vv[1];
    if (!vertex.next())
      vertex.head();
  }

  if (fill_ && mode == SRC)
    XFillPolygon(display, drawable, lgc, pp, cnt, Complex, CoordModeOrigin);
  else
    XDrawLines(display, drawable, lgc, pp, cnt, CoordModeOrigin);

  if (pp)
    delete [] pp;
}

void Polygon::renderPS(PSColorSpace mode)
{
  renderPSGC(mode);

  ostringstream str;

  vertex.head();
  Vector v =  fwdMap(vertex.current()->vector,Coord::CANVAS);
  str << "newpath " << endl
      << parent->TkCanvasPs(v) << " moveto" << endl;
  while (vertex.next()) {
    Vector v =  fwdMap(vertex.current()->vector,Coord::CANVAS);
    str << parent->TkCanvasPs(v) << " lineto" << endl;
  }

  str << "closepath ";
  if (fill_)
    str << "fill" << endl << ends;
  else
    str << "stroke" << endl << ends;

  Tcl_AppendResult(parent->interp, str.str().c_str(), NULL);
}

#ifdef __WIN32
#include <win32lib.h>

void Polygon::renderWIN32()
{
  renderWIN32GC();

  int cnt = vertex.count();
  Vector* vv = new Vector[cnt];
  vertex.head();
  for (int ii=0; ii<cnt; ii++) {
    vv[ii] = fwdMap(vertex.current()->vector,Coord::CANVAS);
    vertex.next();
  }

  if (fill_)
    win32FillPolygon(vv,cnt);
  else
    win32DrawLines(vv,cnt);
}
#endif

void Polygon::reset(const Vector& b)
{
  angle = 0;
  vertex.deleteAll();

  Vector bb = b;
  vertex.append(new Vertex(-bb[0],-bb[1]));
  vertex.append(new Vertex( bb[0],-bb[1]));
  vertex.append(new Vertex( bb[0], bb[1]));
  vertex.append(new Vertex(-bb[0], bb[1]));

  updateBBox();
}

int Polygon::isInRef(const Vector& v)
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

  int crossings = 0;   // number of crossings

  vertex.head();
  Vector v1;
  Vector v2 = vertex.current()->vector - v;

  int sign = ((v2[1])>=0) ? 1 : -1; // init sign

  // for all edges
  int done = 0;

  do {
    // look at next two vertices
    v1 = v2;
    if (!vertex.next()) {
      done = 1;
      vertex.head();
    }

    v2 = vertex.current()->vector - v;

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
  } while (!done);

  return fmod(float(crossings),float(2)) ? 1 : 0; // if odd, point is inside
}

int Polygon::getSegment(const Vector& v)
{
  // v is in canvas coords
  Matrix mm = fwdMatrix();

  vertex.head();
  Vector v1;
  Vector v2 = vertex.current()->vector * mm;
  int done = 0;

  int ii = 1;
  do {
    v1 = v2;
    if (!vertex.next()) {
      vertex.head();
      done = 1;
    }
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
  } while (!done);

  return 0;
}

void Polygon::analysis(AnalysisTask mm, int which)
{
  switch (mm) {
  case HISTOGRAM:
    if (!analysisHistogram_ && which) {
      addCallBack(CallBack::MOVECB, analysisHistogramCB_[0], 
		  parent->options->cmdName);
      addCallBack(CallBack::EDITCB, analysisHistogramCB_[0], 
		  parent->options->cmdName);
      addCallBack(CallBack::ROTATECB, analysisHistogramCB_[0], 
		  parent->options->cmdName);
      addCallBack(CallBack::UPDATE3DCB, analysisHistogramCB_[0], 
		  parent->options->cmdName);
      addCallBack(CallBack::DELETECB, analysisHistogramCB_[1], 
		  parent->options->cmdName);
    }
    if (analysisHistogram_ && !which) {
      deleteCallBack(CallBack::MOVECB, analysisHistogramCB_[0]);
      deleteCallBack(CallBack::EDITCB, analysisHistogramCB_[0]);
      deleteCallBack(CallBack::ROTATECB, analysisHistogramCB_[0]);
      deleteCallBack(CallBack::UPDATE3DCB, analysisHistogramCB_[0]);
      deleteCallBack(CallBack::DELETECB, analysisHistogramCB_[1]);
    }

    analysisHistogram_ = which;
    break;
  case PLOT3D:
    if (!analysisPlot3d_ && which) {
      addCallBack(CallBack::MOVECB, analysisPlot3dCB_[0], 
		  parent->options->cmdName);
      addCallBack(CallBack::EDITCB, analysisPlot3dCB_[0], 
		  parent->options->cmdName);
      addCallBack(CallBack::ROTATECB, analysisPlot3dCB_[0], 
		  parent->options->cmdName);
      addCallBack(CallBack::DELETECB, analysisPlot3dCB_[1], 
		  parent->options->cmdName);
      addCallBack(CallBack::UPDATE3DCB, analysisPlot3dCB_[2], 
		  parent->options->cmdName);
    }
    if (analysisPlot3d_ && !which) {
      deleteCallBack(CallBack::MOVECB, analysisPlot3dCB_[0]);
      deleteCallBack(CallBack::EDITCB, analysisPlot3dCB_[0]);
      deleteCallBack(CallBack::ROTATECB, analysisPlot3dCB_[0]);
      deleteCallBack(CallBack::DELETECB, analysisPlot3dCB_[1]);
      deleteCallBack(CallBack::UPDATE3DCB, analysisPlot3dCB_[2]);
    }

    analysisPlot3d_ = which;
    break;
  case STATS:
    if (!analysisStats_ && which) {
      addCallBack(CallBack::MOVECB, analysisStatsCB_[0], 
		  parent->options->cmdName);
      addCallBack(CallBack::EDITCB, analysisStatsCB_[0], 
		  parent->options->cmdName);
      addCallBack(CallBack::ROTATECB, analysisStatsCB_[0], 
		  parent->options->cmdName);
      addCallBack(CallBack::UPDATECB, analysisStatsCB_[0], 
		  parent->options->cmdName);
      addCallBack(CallBack::DELETECB, analysisStatsCB_[1], 
		  parent->options->cmdName);
    }
    if (analysisStats_ && !which) {
      deleteCallBack(CallBack::MOVECB, analysisStatsCB_[0]);
      deleteCallBack(CallBack::EDITCB, analysisStatsCB_[0]);
      deleteCallBack(CallBack::ROTATECB, analysisStatsCB_[0]);
      deleteCallBack(CallBack::UPDATECB, analysisStatsCB_[0]);
      deleteCallBack(CallBack::DELETECB, analysisStatsCB_[1]);
    }

    analysisStats_ = which;
    break;
  default:
    // na
    break;
  }
}

void Polygon::analysisHistogram(char* xname, char* yname, int num)
{
  double* x;
  double* y;
  BBox bb(center);

  Matrix mm = Rotate(angle) * Translate(center);
  vertex.head();
  do
    bb.bound(vertex.current()->vector * mm);
  while (vertex.next());

  parent->markerAnalysisHistogram(this, &x, &y, bb, num);
  analysisXYResult(xname, yname, x, y, num+1);
}

void Polygon::analysisPlot3d(char* xname, char* yname,
			     Coord::CoordSystem sys,
			     Marker::AnalysisMethod method)
{
  double* x;
  double* y;
  BBox bb(center);

  Matrix mm = Rotate(angle) * Translate(center);
  vertex.head();
  do
    bb.bound(vertex.current()->vector * mm);
  while (vertex.next());

  int num = parent->markerAnalysisPlot3d(this, &x, &y, bb, sys, method);
  analysisXYResult(xname, yname, x, y, num);
}

void Polygon::analysisStats(Coord::CoordSystem sys, Coord::SkyFrame sky)
{
  ostringstream str;
  BBox bb(center);

  Matrix mm = Rotate(angle) * Translate(center);
  vertex.head();
  do
    bb.bound(vertex.current()->vector * mm);
  while (vertex.next());

  parent->markerAnalysisStats(this, str, bb, sys, sky);
  str << ends;
  Tcl_AppendResult(parent->interp, str.str().c_str(), NULL);
}

// list

void Polygon::list(ostream& str, Coord::CoordSystem sys, Coord::SkyFrame sky,
		   Coord::SkyFormat format, int conj, int strip)
{
  FitsImage* ptr = parent->findFits(sys,center);
  listPre(str, sys, sky, ptr, strip, 0);
  listBase(ptr, str, sys, sky, format);
  listPost(str, conj, strip);
}

void Polygon::listPost(ostream& str, int conj, int strip)
{
  // no props for semicolons
  if (!strip) {
    if (conj)
      str << " ||";

    if (fill_)
      str << " # fill=" << fill_;

    listProperties(str, !fill_);
  }
  else {
    if (conj)
      str << "||";
    else
      str << ';';
  }
}

void Polygon::listXML(ostream& str, Coord::CoordSystem sys, 
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

  if (fill_)
    XMLRow(XMLPARAM,fill_);

  XMLRowProps(ptr,sys);
  XMLRowEnd(str);
}

void Polygon::listCiao(ostream& str, Coord::CoordSystem sys, int strip)
{
  FitsImage* ptr = parent->findFits();
  Matrix mm = fwdMatrix();
  listCiaoPre(str);

  str << type_ << '(';
  int first=1;
  vertex.head();
  do {
    if (!first)
      str << ',';
    first=0;

    switch (sys) {
    case Coord::IMAGE:
    case Coord::PHYSICAL:
    case Coord::DETECTOR:
    case Coord::AMPLIFIER:
      ptr->listFromRef(str,vertex.current()->vector*mm,Coord::PHYSICAL);
      break;
    default:
      ptr->listFromRef(str,vertex.current()->vector*mm,sys,Coord::FK5,Coord::SEXAGESIMAL);
      break;
    }
  } while (vertex.next());
  str << ')';

  listCiaoPost(str, strip);
}

void Polygon::listPros(ostream& str, Coord::CoordSystem sys, 
		       Coord::SkyFrame sky, Coord::SkyFormat format,
		       int strip)
{
  FitsImage* ptr = parent->findFits();
  Matrix mm = fwdMatrix();

  coord.listProsCoordSystem(str,sys,sky);
  str << "; " << type_ << ' ';
  int first=1;
  vertex.head();
  do {
    if (!first)
      str << ' ';
    first=0;

    switch (sys) {
    case Coord::IMAGE:
    case Coord::DETECTOR:
    case Coord::AMPLIFIER:
      sys = Coord::IMAGE;
    case Coord::PHYSICAL:
      ptr->listFromRef(str,vertex.current()->vector*mm,sys);
      break;
    default:
      if (format == Coord::DEGREES)
	str << setunit('d');
      ptr->listFromRef(str,vertex.current()->vector*mm,sys,sky,format);
      break;
    }
  } while (vertex.next());

  listProsPost(str, strip);
}

void Polygon::listSAOtng(ostream& str, Coord::CoordSystem sys,
			 Coord::SkyFrame sky, Coord::SkyFormat format,
			 int strip)
{
  FitsImage* ptr = parent->findFits();
  Matrix mm = fwdMatrix();
  listSAOtngPre(str, strip);

  str << type_ << '(';
  int first=1;
  vertex.head();
  do {
    if (!first)
      str << ',';
    first=0;

    switch (sys) {
    case Coord::IMAGE:
    case Coord::PHYSICAL:
    case Coord::DETECTOR:
    case Coord::AMPLIFIER:
      ptr->listFromRef(str,vertex.current()->vector*mm,Coord::IMAGE);
      break;
    default:
      ptr->listFromRef(str,vertex.current()->vector*mm,sys,sky,format);
      break;
    }
  } while (vertex.next());
  str << ')';

  listSAOtngPost(str, strip);
}

void Polygon::listSAOimage(ostream& str, int strip)
{
  FitsImage* ptr = parent->findFits();
  listSAOimagePre(str);
  Matrix mm = fwdMatrix();

  str << type_ << '(';
  int first=1;
  vertex.head();
  do {
    if (!first)
      str << ',';
    first=0;

    ptr->listFromRef(str,vertex.current()->vector*mm,Coord::IMAGE);
  }
  while (vertex.next());
  str << ')';

  listSAOimagePost(str, strip);
}

