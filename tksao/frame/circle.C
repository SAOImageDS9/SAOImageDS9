// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <tk.h>

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

#ifdef MAC_OSX_TK
void Circle::renderMACOSXDraw()
{
  if (fill_)
    macosxFill();
  else
    macosxStroke();
}
#endif

#ifdef __WIN32
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
      addCallBack(CallBack::DELETECB, analysisHistogramCB_[1], 
		  parent->options->cmdName);
    }
    if (analysisHistogram_ && !which) {
      deleteCallBack(CallBack::MOVECB, analysisHistogramCB_[0]);
      deleteCallBack(CallBack::EDITCB, analysisHistogramCB_[0]);
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
  
  double rr = ptr->mapLenFromRef(annuli_[0][0],sys,Coord::ARCSEC);

  switch (sys) {
  case Coord::IMAGE:
  case Coord::PHYSICAL:
  case Coord::DETECTOR:
  case Coord::AMPLIFIER:
    str << type_ << '(' << setprecision(parent->precLinear_)
	<< ptr->mapFromRef(center,sys) << ','
	<< rr << ')';
    break;
  default:
      listWCS(ptr,center,sys,sky,format);
      str << type_ << '(' << ra << ',' << dec << ',' ;

      if (ptr->hasWCSCel(sys)) {
	str << setprecision(parent->precArcsec_) << fixed << rr << '"' << ')';
	str.unsetf(ios_base::floatfield);
      }
      else
	str << setprecision(parent->precLinear_) << rr << ')';
  }

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

  switch (sys) {
  case Coord::IMAGE:
  case Coord::PHYSICAL:
  case Coord::DETECTOR:
  case Coord::AMPLIFIER:
    {
      Vector vv = ptr->mapFromRef(center,Coord::PHYSICAL);
      double rr = ptr->mapLenFromRef(annuli_[0][0],Coord::PHYSICAL);
      str << type_ << '(' << setprecision(parent->precLinear_) << vv << ','
	  << rr << ')';
    }
    break;
  default:
    if (ptr->hasWCSCel(sys)) {
      listWCS(ptr,center,sys,Coord::FK5,Coord::SEXAGESIMAL);
      double rr = ptr->mapLenFromRef(annuli_[0][0],sys,Coord::ARCMIN);
      str << type_ << '(' << ra << ',' << dec << ',' 
	  << setprecision(parent->precArcmin_) << fixed << rr << '\'' << ')';
      str.unsetf(ios_base::floatfield);
    }
  }

  listCiaoPost(str, strip);
}

void Circle::listSAOtng(ostream& str, 
			Coord::CoordSystem sys, Coord::SkyFrame sky,
			Coord::SkyFormat format, int strip)
{
  FitsImage* ptr = parent->findFits();
  listSAOtngPre(str, strip);

  switch (sys) {
  case Coord::IMAGE:
  case Coord::PHYSICAL:
  case Coord::DETECTOR:
  case Coord::AMPLIFIER:
    {
      Vector vv = ptr->mapFromRef(center,Coord::IMAGE);
      double rr = ptr->mapLenFromRef(annuli_[0][0],Coord::IMAGE);
      str << type_ << '(' << setprecision(parent->precLinear_) << vv << ','
	  << rr << ')';
    }
    break;
  default:
    if (ptr->hasWCSCel(sys)) {
      listWCS(ptr,center,sys,sky,format);
      double rr = ptr->mapLenFromRef(annuli_[0][0],Coord::IMAGE);
      str << type_ << '('
	  << ra << ',' << dec << ','
	  << setprecision(parent->precLinear_) << rr << ')';
    }
  }

  listSAOtngPost(str,strip);
}

void Circle::listPros(ostream& str, Coord::CoordSystem sys, Coord::SkyFrame sky,
		      Coord::SkyFormat format, int strip)
{
  FitsImage* ptr = parent->findFits();

  switch (sys) {
  case Coord::IMAGE:
  case Coord::DETECTOR:
  case Coord::AMPLIFIER:
    sys = Coord::IMAGE;
  case Coord::PHYSICAL:
    {
      Vector vv = ptr->mapFromRef(center,sys);
      double rr = ptr->mapLenFromRef(annuli_[0][0],Coord::IMAGE);
      coord.listProsCoordSystem(str,sys,sky);
      str << "; " << type_ << ' ' << setprecision(parent->precLinear_)
	  << vv << ' ' << rr;
    }
    break;
  default:
    if (ptr->hasWCSCel(sys)) {
      listWCSPros(ptr,center,sys,sky,format);
      coord.listProsCoordSystem(str,sys,sky);
      double rr = ptr->mapLenFromRef(annuli_[0][0],sys,Coord::ARCSEC);
      str << "; " << type_ << ' ';
      switch (format) {
      case Coord::DEGREES:
	str << ra << 'd' << ' ' << dec << 'd' << ' ';
	break;
      case Coord::SEXAGESIMAL:
	str << ra << ' ' << dec << ' ';
	break;
      }
      str << setprecision(parent->precArcsec_) << fixed << rr << '"';
      str.unsetf(ios_base::floatfield);
    }
  }

  listProsPost(str, strip);
}

void Circle::listSAOimage(ostream& str, int strip)
{
  FitsImage* ptr = parent->findFits();
  listSAOimagePre(str);

  Vector vv = ptr->mapFromRef(center,Coord::IMAGE);
  str << type_ << '(' << setprecision(parent->precLinear_) << vv << ','
      << annuli_[0][0] << ')';

  listSAOimagePost(str, strip);
}

// special composite funtionallity

void Circle::setComposite(const Matrix& mx, double aa)
{
  center *= mx;
  updateBBox();
}

