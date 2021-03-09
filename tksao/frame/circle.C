// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "circle.h"
#include "fitsimage.h"

Circle::Circle(const Circle& a) : BaseEllipse(a)
{
  fill_ = a.fill_;
}

Circle::Circle(Base* p, const Vector& ctr, double r, int fill)
  : BaseEllipse(p, ctr, 0)
{
  numAnnuli_ = 1;
  annuli_ = new Vector[1];
  annuli_[0] = Vector(r,r);

  fill_ = fill;
  strcpy(type_, "circle");
  numHandle = 4;

  updateBBox();
}

Circle::Circle(Base* p, const Vector& ctr,
	       double r, int fill,
	       const char* clr, int* dsh, 
	       int wth, const char* fnt, const char* txt, 
	       unsigned short prop, const char* cmt,
	       const List<Tag>& tg, const List<CallBack>& cb)
  : BaseEllipse(p, ctr, 0, clr, dsh, wth, fnt, txt, prop, cmt, tg, cb)
{
  numAnnuli_ = 1;
  annuli_ = new Vector[numAnnuli_];
  annuli_[0] = Vector(r,r);

  fill_ = fill;
  strcpy(type_, "circle");
  numHandle = 4;

  updateBBox();
}

void Circle::edit(const Vector& v, int h)
{
  Matrix mm = bckMatrix();

  // calc dist between edge of circle and handle
  double d = annuli_[0].length() - annuli_[0][0];
  double r = (v * mm).length() - d;
  annuli_[0] = Vector(r,r);
  
  updateBBox();
  doCallBack(CallBack::EDITCB);
}

void Circle::renderXArcDraw(Drawable drawable, GC lgc, 
			       Vector& st, Vector& size,
			       int a1, int aa, RenderMode mode)
{
  if (fill_ && mode == SRC)
    XFillArc(display, drawable, lgc, st[0], st[1], size[0], size[1], a1, aa);
  else
    XDrawArc(display, drawable, lgc, st[0], st[1], size[0], size[1], a1, aa);
}

void Circle::renderXBezierDraw(Drawable drawable, GC lgc, RenderMode mode)
{
  if (fill_ && mode == SRC)
    XFillPolygon(display, drawable, lgc, xpoint_, xpointNum_, Convex, CoordModeOrigin);
  else if ((properties & SOURCE) && !(properties & DASH))
    XDrawLines(display, drawable, lgc, xpoint_, xpointNum_, CoordModeOrigin);
  else
    renderXBezierDashDraw(drawable, lgc);
}

void Circle::renderPSDraw()
{
  if (fill_)
    BaseEllipse::renderPSFill();
  else
    BaseEllipse::renderPSDraw();
}

#ifdef __WIN32
#include <win32lib.h>

void Circle::renderWIN32Draw()
{
  if (fill_)
    win32Fill();
  else
    win32Stroke();
}
#endif

void Circle::analysis(AnalysisTask mm, int which)
{
  switch (mm) {
  case HISTOGRAM:
    if (!analysisHistogram_ && which) {
      addCallBack(CallBack::MOVECB, analysisHistogramCB_[0], 
		  parent->options->cmdName);
      addCallBack(CallBack::EDITCB, analysisHistogramCB_[0], 
		  parent->options->cmdName);
      addCallBack(CallBack::UPDATE3DCB, analysisHistogramCB_[0], 
		  parent->options->cmdName);
      addCallBack(CallBack::DELETECB, analysisHistogramCB_[1], 
		  parent->options->cmdName);
    }
    if (analysisHistogram_ && !which) {
      deleteCallBack(CallBack::MOVECB, analysisHistogramCB_[0]);
      deleteCallBack(CallBack::EDITCB, analysisHistogramCB_[0]);
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
      addCallBack(CallBack::DELETECB, analysisPlot3dCB_[1], 
		  parent->options->cmdName);
      addCallBack(CallBack::UPDATE3DCB, analysisPlot3dCB_[2], 
		  parent->options->cmdName);
    }
    if (analysisPlot3d_ && !which) {
      deleteCallBack(CallBack::MOVECB, analysisPlot3dCB_[0]);
      deleteCallBack(CallBack::EDITCB, analysisPlot3dCB_[0]);
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
      addCallBack(CallBack::UPDATECB, analysisStatsCB_[0], 
		  parent->options->cmdName);
      addCallBack(CallBack::DELETECB, analysisStatsCB_[1], 
		  parent->options->cmdName);
    }
    if (analysisStats_ && !which) {
      deleteCallBack(CallBack::MOVECB, analysisStatsCB_[0]);
      deleteCallBack(CallBack::EDITCB, analysisStatsCB_[0]);
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

void Circle::analysisHistogram(char* xname, char* yname, int num)
{
  double* x;
  double* y;
  Vector ll = -annuli_[0] * Translate(center);
  Vector ur =  annuli_[0] * Translate(center);
  BBox bb(ll,ur) ;
  parent->markerAnalysisHistogram(this, &x, &y, bb, num);
  analysisXYResult(xname, yname, x, y, num+1);
}

void Circle::analysisPlot3d(char* xname, char* yname, 
			    Coord::CoordSystem sys,
			    Marker::AnalysisMethod method)
{
  double* x;
  double* y;
  Vector ll = -annuli_[0] * Translate(center);
  Vector ur =  annuli_[0] * Translate(center);
  BBox bb(ll,ur) ;
  int num = parent->markerAnalysisPlot3d(this, &x, &y, bb, sys, method);
  analysisXYResult(xname, yname, x, y, num);
}

void Circle::analysisStats(Coord::CoordSystem sys, Coord::SkyFrame sky)
{
  ostringstream str;
  Vector ll = -annuli_[0] * Translate(center);
  Vector ur =  annuli_[0] * Translate(center);
  BBox bb(ll,ur) ;
  parent->markerAnalysisStats(this, str, bb, sys, sky);
  str << ends;
  Tcl_AppendResult(parent->interp, str.str().c_str(), NULL);
}

// list

void Circle::list(ostream& str, Coord::CoordSystem sys, Coord::SkyFrame sky,
		  Coord::SkyFormat format, int conj, int strip)
{
  FitsImage* ptr = parent->findFits(sys,center);
  listPre(str, sys, sky, ptr, strip, 0);
  
  str << type_ << '(';
  ptr->listFromRef(str,center,sys,sky,format);
  str << ',';
  ptr->listLenFromRef(str,annuli_[0][0],sys,Coord::ARCSEC);
  if (ptr->hasWCSCel(sys))
    str << '"';
  str << ')';

  listPost(str, conj, strip);
}

void Circle::listPost(ostream& str, int conj, int strip)
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

void Circle::listXML(ostream& str, Coord::CoordSystem sys, Coord::SkyFrame sky, 
		     Coord::SkyFormat format)
{
  FitsImage* ptr = parent->findFits(sys,center);

  XMLRowInit();
  XMLRow(XMLSHAPE,type_);

  XMLRowCenter(ptr,sys,sky,format);
  XMLRowRadiusX(ptr,sys,annuli_[0]);
  if (fill_)
    XMLRow(XMLPARAM,fill_);

  XMLRowProps(ptr,sys);
  XMLRowEnd(str);
}

void Circle::listCiao(ostream& str, Coord::CoordSystem sys, int strip)
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
    ptr->listLenFromRef(str,annuli_[0][0],Coord::PHYSICAL);
    break;
  default:
    ptr->listFromRef(str,center,sys,Coord::FK5,Coord::SEXAGESIMAL);
    str << ',';
    ptr->listLenFromRef(str,annuli_[0][0],sys,Coord::ARCMIN);
    str << '\'';
  }
  str << ')';

  listCiaoPost(str, strip);
}

void Circle::listPros(ostream& str, Coord::CoordSystem sys, Coord::SkyFrame sky,
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
    str << ' ';
    ptr->listLenFromRef(str,annuli_[0][0],Coord::IMAGE);
    break;
  default:
    if (format == Coord::DEGREES)
      str << setunit('d');
    ptr->listFromRef(str,center,sys,sky,format);
    str << ' ';
    ptr->listLenFromRef(str,annuli_[0][0],sys,Coord::ARCSEC);
    str << '"';
    break;
  }

  listProsPost(str, strip);
}

void Circle::listSAOtng(ostream& str, 
			Coord::CoordSystem sys, Coord::SkyFrame sky,
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
    ptr->listLenFromRef(str,annuli_[0][0],Coord::IMAGE);
    break;
  default:
    ptr->listFromRef(str,center,sys,sky,format);
    str << ',';
    ptr->listLenFromRef(str,annuli_[0][0],Coord::IMAGE);
  }
  str << ')';

  listSAOtngPost(str,strip);
}

void Circle::listSAOimage(ostream& str, int strip)
{
  FitsImage* ptr = parent->findFits();
  listSAOimagePre(str);

  str << type_ << '(';
  ptr->listFromRef(str,center,Coord::IMAGE);
  str << ',';
  ptr->listLenFromRef(str,annuli_[0][0],Coord::IMAGE);
  str << ')';
  
  listSAOimagePost(str, strip);
}

// special composite funtionallity

void Circle::setComposite(const Matrix& mx, double aa)
{
  center *= mx;
  updateBBox();
}

