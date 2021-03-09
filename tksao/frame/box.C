// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "box.h"
#include "fitsimage.h"

Box::Box(const Box& a) : BaseBox(a)
{
  fill_ = a.fill_;
}

Box::Box(Base* p, const Vector& ctr, const Vector& seg, double ang, int fill)
  : BaseBox(p, ctr, ang)
{
  numAnnuli_ = 1;
  annuli_ = new Vector[1];
  annuli_[0] = seg;

  fill_ = fill;
  strcpy(type_,"box");
  numHandle = 4;

  updateBBox();
}

Box::Box(Base* p, const Vector& ctr, 
	 const Vector& seg, 
	 double ang, int fill,
	 const char* clr, int* dsh, 
	 int wth, const char* fnt, const char* txt,
	 unsigned short prop, const char* cmt, 
	 const List<Tag>& tg, const List<CallBack>& cb)
  : BaseBox(p, ctr, ang, clr, dsh, wth, fnt, txt, prop, cmt, tg, cb)
{
  numAnnuli_ = 1;
  annuli_ = new Vector[1];
  annuli_[0] = seg;

  fill_ = fill;
  strcpy(type_,"box");
  numHandle = 4;

  updateBBox();
}

void Box::renderXDraw(Drawable drawable, GC lgc, XPoint* pp, RenderMode mode)
{
  if (fill_ && mode == SRC)
    XFillPolygon(display, drawable, lgc, pp, numPoints_, Convex, 
		 CoordModeOrigin);
  else
    XDrawLines(display, drawable, lgc, pp, numPoints_, CoordModeOrigin);
}

void Box::renderPSDraw(int ii)
{
  if (fill_)
    BaseBox::renderPSFillDraw(ii);
  else
    BaseBox::renderPSDraw(ii);
}

#ifdef __WIN32
#include <win32lib.h>

void Box::renderWIN32Draw(Vector* vv)
{
  if (fill_)
    win32FillPolygon(vv, numPoints_);
  else
    win32DrawLines(vv, numPoints_);
}
#endif

void Box::editBegin(int h)
{
  switch (h) {
  case 1:
    return;
  case 2:
    annuli_[0] = Vector(-annuli_[0][0],annuli_[0][1]);
    return;
  case 3:
    annuli_[0] = -annuli_[0];
    return;
  case 4:
    annuli_[0] = Vector(annuli_[0][0],-annuli_[0][1]);
    return;
  }

  doCallBack(CallBack::EDITBEGINCB);
}

void Box::edit(const Vector& v, int h)
{
  Matrix mm = bckMatrix();
  Matrix nn = mm.invert();

  // This annuli_s about the opposite node
  Vector ov = annuli_[0]/2 * nn;
  annuli_[0] = (annuli_[0]/2) - (v*mm);
  Vector nv = annuli_[0]/2 * nn;
  center -= nv-ov;

  updateBBox();
  doCallBack(CallBack::EDITCB);
  doCallBack(CallBack::MOVECB);
}

void Box::editEnd()
{
  annuli_[0] = annuli_[0].abs();

  updateBBox();
  doCallBack(CallBack::EDITENDCB);
}

void Box::analysis(AnalysisTask mm, int which)
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
      deleteCallBack(CallBack::UPDATECB, analysisStatsCB_[0]);
      deleteCallBack(CallBack::ROTATECB, analysisStatsCB_[0]);
      deleteCallBack(CallBack::DELETECB, analysisStatsCB_[1]);
    }

    analysisStats_ = which;
    break;
  default:
    // na
    break;
  }
}

void Box::analysisHistogram(char* xname, char* yname, int num)
{
  double* x;
  double* y;
  Matrix mm = Rotate(angle) * Translate(center);

  // during resize, annuli_ can be negative
  Vector vv = annuli_[0].abs();
  BBox bb(-vv * mm);
  bb.bound( vv * mm);
  bb.bound(Vector( vv[0],-vv[1]) * mm);
  bb.bound(Vector(-vv[0], vv[1]) * mm);

  parent->markerAnalysisHistogram(this, &x, &y, bb, num);
  analysisXYResult(xname, yname, x, y, num+1);
}

void Box::analysisPlot3d(char* xname, char* yname,
			 Coord::CoordSystem sys,
			 Marker::AnalysisMethod method)
{
  double* x;
  double* y;
  Matrix mm = Rotate(angle) * Translate(center);

  // during resize, annuli_ can be negative
  Vector vv = annuli_[0].abs();
  BBox bb(-vv * mm);
  bb.bound( vv * mm);
  bb.bound(Vector( vv[0],-vv[1]) * mm);
  bb.bound(Vector(-vv[0], vv[1]) * mm);

  int num = parent->markerAnalysisPlot3d(this, &x, &y, bb, sys, method);
  analysisXYResult(xname, yname, x, y, num);
}

void Box::analysisStats(Coord::CoordSystem sys, Coord::SkyFrame sky)
{
  ostringstream str;
  Matrix mm = Rotate(angle) * Translate(center);

  // during resize, annuli_ can be negative
  Vector vv = annuli_[0].abs();
  BBox bb(-vv * mm);
  bb.bound( vv * mm);
  bb.bound(Vector( vv[0],-vv[1]) * mm);
  bb.bound(Vector(-vv[0], vv[1]) * mm);

  parent->markerAnalysisStats(this, str, bb, sys, sky);
  str << ends;
  Tcl_AppendResult(parent->interp, str.str().c_str(), NULL);
}

// list

void Box::list(ostream& str, Coord::CoordSystem sys, Coord::SkyFrame sky,
		   Coord::SkyFormat format, int conj, int strip)
{
  FitsImage* ptr = parent->findFits(sys,center);
  listPre(str, sys, sky, ptr, strip, 0);

  str << type_ << '(';
  switch (sys) {
  case Coord::IMAGE:
  case Coord::PHYSICAL:
  case Coord::DETECTOR:
  case Coord::AMPLIFIER:
    ptr->listFromRef(str,center,sys);
    str << ',';
    ptr->listLenFromRef(str,annuli_[0],sys);
    str << ',';
    parent->listAngleFromRef(str,angle,sys);
    break;
  default:
    ptr->listFromRef(str,center,sys,sky,format);
    str << ',';
    if (ptr->hasWCSCel(sys))
      str << setunit('"');
    ptr->listLenFromRef(str,annuli_[0],sys,Coord::ARCSEC);
    str << ',';
    parent->listAngleFromRef(str,angle,sys,sky);
  }
  str << ')';

  listPost(str, conj, strip);
}

void Box::listPost(ostream& str, int conj, int strip)
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

void Box::listXML(ostream& str, Coord::CoordSystem sys, Coord::SkyFrame sky, 
		  Coord::SkyFormat format)
{
  FitsImage* ptr = parent->findFits(sys,center);

  XMLRowInit();
  XMLRow(XMLSHAPE,type_);

  XMLRowCenter(ptr,sys,sky,format);
  XMLRowRadius(ptr,sys,annuli_[0]);
  XMLRowAng(sys,sky);
  if (fill_)
    XMLRow(XMLPARAM,fill_);

  XMLRowProps(ptr,sys);
  XMLRowEnd(str);
}

void Box::listCiao(ostream& str, Coord::CoordSystem sys, int strip)
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
    str << ',';
    ptr->listLenFromRef(str,annuli_[0],Coord::PHYSICAL);
    str << ',';
    parent->listAngleFromRef(str,angle,Coord::PHYSICAL);
    break;
  default:
    ptr->listFromRef(str,center,sys,Coord::FK5,Coord::SEXAGESIMAL);
    str << ',';
    if (ptr->hasWCSCel(sys))
      str << setunit('\'');
    ptr->listLenFromRef(str,annuli_[0],sys,Coord::ARCMIN);
    str << ',';
    parent->listAngleFromRef(str,angle,Coord::PHYSICAL,Coord::FK5);
  }
  str << ')';

  listCiaoPost(str, strip);
}

void Box::listPros(ostream& str, Coord::CoordSystem sys, Coord::SkyFrame sky,
		       Coord::SkyFormat format, int strip)
{
  FitsImage* ptr = parent->findFits();

  coord.listProsCoordSystem(str,sys,sky);
  str << "; "<< type_ << ' ';
  switch (sys) {
  case Coord::IMAGE:
  case Coord::DETECTOR:
  case Coord::AMPLIFIER:
    sys = Coord::IMAGE;
  case Coord::PHYSICAL:
    ptr->listFromRef(str,center,sys);
    str << ' ';
    ptr->listLenFromRef(str,annuli_[0],Coord::IMAGE);
    str << ' ';
    parent->listAngleFromRef(str,angle,Coord::IMAGE);
    break;
  default:
    if (format == Coord::DEGREES)
      str << setunit('d');
    ptr->listFromRef(str,center,sys,sky,format);
    str << ' ';
    str << setunit('"');
    ptr->listLenFromRef(str,annuli_[0],sys,Coord::ARCSEC);
    str << ' ';
    parent->listAngleFromRef(str,angle,Coord::IMAGE);
  }

  listProsPost(str, strip);
}

void Box::listSAOtng(ostream& str, Coord::CoordSystem sys, Coord::SkyFrame sky,
		     Coord::SkyFormat format, int strip)
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
    str << ',';
    ptr->listLenFromRef(str,annuli_[0],Coord::IMAGE);
    str << ',';
    parent->listAngleFromRef(str,angle,Coord::IMAGE);
    break;
  default:
    ptr->listFromRef(str,center,sys,sky,format);
    str << ',';
    ptr->listLenFromRef(str,annuli_[0],Coord::IMAGE);
    str << ',';
    parent->listAngleFromRef(str,angle,Coord::IMAGE);
    break;
  }
  str  << ')';

  listSAOtngPost(str,strip);
}

void Box::listSAOimage(ostream& str, int strip)
{
  FitsImage* ptr = parent->findFits();
  listSAOimagePre(str);

  str << type_ << '(';
  ptr->listFromRef(str,center,Coord::IMAGE);
  str << ',';
  ptr->listLenFromRef(str,annuli_[0],Coord::IMAGE);
  str << ',';
  parent->listAngleFromRef(str,angle,Coord::IMAGE);
  str << ')';

  listSAOimagePost(str, strip);
}

