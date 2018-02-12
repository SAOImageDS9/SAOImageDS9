// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <tk.h>

#include "ellipse.h"
#include "fitsimage.h"

Ellipse::Ellipse(const Ellipse& a) : BaseEllipse(a)
{
  fill_ = a.fill_;
}

Ellipse::Ellipse(Base* p, const Vector& ctr, const Vector& r, 
		 double ang, int fill)
  : BaseEllipse(p, ctr, ang)
{
  numAnnuli_ = 1;
  annuli_ = new Vector[1];
  annuli_[0] = r;

  fill_ = fill;
  strcpy(type_,"ellipse");
  numHandle = 4;

  updateBBox();
}

Ellipse::Ellipse(Base* p, const Vector& ctr,
		 const Vector& r, double ang, int fill,
		 const char* clr, int* dsh, 
		 int wth, const char* fnt, const char* txt, 
		 unsigned short prop, const char* cmt, 
		 const List<Tag>& tg, const List<CallBack>& cb)
  : BaseEllipse(p, ctr, ang, clr, dsh, wth, fnt, txt, prop, cmt, tg, cb)
{
  numAnnuli_ = 1;
  annuli_ = new Vector[1];
  annuli_[0] = r;

  fill_ = fill;
  strcpy(type_,"ellipse");
  numHandle = 4;

  updateBBox();
}

void Ellipse::renderXArcDraw(Drawable drawable, GC lgc, 
				Vector& st, Vector& size,
				int a1, int aa, RenderMode mode)
{
  if (fill_ && mode == SRC)
    XFillArc(display, drawable, lgc, st[0], st[1], size[0], size[1], a1, aa);
  else
    XDrawArc(display, drawable, lgc, st[0], st[1], size[0], size[1], a1, aa);
}

void Ellipse::renderXBezierDraw(Drawable drawable, GC lgc, RenderMode mode)
{
  if (fill_ && mode == SRC)
    XFillPolygon(display, drawable, lgc, xpoint_, xpointNum_, Convex, CoordModeOrigin);
  else if ((properties & SOURCE) && !(properties & DASH))
    XDrawLines(display, drawable, lgc, xpoint_, xpointNum_, CoordModeOrigin);
  else
    renderXBezierDashDraw(drawable, lgc);
}

void Ellipse::renderPSDraw()
{
  if (fill_)
    BaseEllipse::renderPSFill();
  else
    BaseEllipse::renderPSDraw();
}

#ifdef MAC_OSX_TK
void Ellipse::renderMACOSXDraw()
{
  if (fill_)
    macosxFill();
  else
    macosxStroke();
}
#endif

#ifdef __WIN32
void Ellipse::renderWIN32Draw()
{
  if (fill_)
    win32Fill();
  else
    win32Stroke();
}
#endif

void Ellipse::edit(const Vector& v, int h)
{
  Matrix mm = bckMatrix();
  annuli_[0] = (v * mm).abs();

  updateBBox();
  doCallBack(CallBack::EDITCB);
}

void Ellipse::analysis(AnalysisTask mm, int which)
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
      addCallBack(CallBack::DELETECB, analysisHistogramCB_[1], 
		  parent->options->cmdName);
    }
    if (analysisHistogram_ && !which) {
      deleteCallBack(CallBack::MOVECB, analysisHistogramCB_[0]);
      deleteCallBack(CallBack::EDITCB, analysisHistogramCB_[0]);
      deleteCallBack(CallBack::ROTATECB, analysisHistogramCB_[0]);
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
    }
    if (analysisPlot3d_ && !which) {
      deleteCallBack(CallBack::MOVECB, analysisPlot3dCB_[0]);
      deleteCallBack(CallBack::EDITCB, analysisPlot3dCB_[0]);
      deleteCallBack(CallBack::ROTATECB, analysisPlot3dCB_[0]);
      deleteCallBack(CallBack::DELETECB, analysisPlot3dCB_[1]);
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

void Ellipse::analysisHistogram(char* xname, char* yname, int num)
{
  double* x;
  double* y;
  Matrix mm = Rotate(angle) * Translate(center);

  Vector vv = annuli_[0];
  BBox bb(-vv * mm);
  bb.bound( vv * mm);
  bb.bound(Vector( vv[0],-vv[1]) * mm);
  bb.bound(Vector(-vv[0], vv[1]) * mm);

  parent->markerAnalysisHistogram(this, &x, &y, bb, num);
  analysisXYResult(xname, yname, x, y, num+1);
}

void Ellipse::analysisPlot3d(char* xname, char* yname,
			     Coord::CoordSystem sys, 
			     Marker::AnalysisMethod method)
{
  double* x;
  double* y;
  Matrix mm = Rotate(angle) * Translate(center);

  Vector vv = annuli_[0];
  BBox bb(-vv * mm);
  bb.bound( vv * mm);
  bb.bound(Vector( vv[0],-vv[1]) * mm);
  bb.bound(Vector(-vv[0], vv[1]) * mm);

  int num = parent->markerAnalysisPlot3d(this, &x, &y, bb, sys, method);
  analysisXYResult(xname, yname, x, y, num);
}

void Ellipse::analysisStats(Coord::CoordSystem sys, Coord::SkyFrame sky)
{
  ostringstream str;
  Matrix mm = Rotate(angle) * Translate(center);

  Vector vv = annuli_[0];
  BBox bb(-vv * mm);
  bb.bound( vv * mm);
  bb.bound(Vector( vv[0],-vv[1]) * mm);
  bb.bound(Vector(-vv[0], vv[1]) * mm);

  parent->markerAnalysisStats(this, str, bb, sys, sky);
  str << ends;
  Tcl_AppendResult(parent->interp, str.str().c_str(), NULL);
}

// list

void Ellipse::list(ostream& str, Coord::CoordSystem sys, Coord::SkyFrame sky,
		   Coord::SkyFormat format, int conj, int strip)
{
  FitsImage* ptr = parent->findFits(sys,center);
  listPre(str, sys, sky, ptr, strip, 0);

  switch (sys) {
  case Coord::IMAGE:
  case Coord::PHYSICAL:
  case Coord::DETECTOR:
  case Coord::AMPLIFIER:
    listNonCel(ptr, str, sys);
    break;
  default:
    if (ptr->hasWCSCel(sys)) {
      listRADEC(ptr,center,sys,sky,format);
      Vector rr = ptr->mapLenFromRef(annuli_[0],sys,Coord::ARCSEC);
      double aa = parent->mapAngleFromRef(angle,sys,sky);
      str << type_ << '(' << ra << ',' << dec << ',' 
	  << setprecision(parent->precArcsec_) << fixed << setunit('"')
	  << rr << ',';
      str.unsetf(ios_base::floatfield);
      str << setprecision(parent->precLinear_) << radToDeg(aa) << ')';
    }
    else
      listNonCel(ptr, str, sys);
  }

  listPost(str, conj, strip);
}

void Ellipse::listPost(ostream& str, int conj, int strip)
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

void Ellipse::listNonCel(FitsImage* ptr, ostream& str, Coord::CoordSystem sys)
{
  Vector vv = ptr->mapFromRef(center,sys);
  Vector rr = ptr->mapLenFromRef(annuli_[0],sys);
  double aa = parent->mapAngleFromRef(angle,sys);
  str << type_ << '(' << setprecision(parent->precLinear_) << vv << ','
      << rr << ',' 
      << radToDeg(aa) << ')';
}

void Ellipse::listXML(ostream& str, Coord::CoordSystem sys, 
		      Coord::SkyFrame sky, Coord::SkyFormat format)
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

void Ellipse::listCiao(ostream& str, Coord::CoordSystem sys, int strip)
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
      Vector rr = ptr->mapLenFromRef(annuli_[0],Coord::PHYSICAL);
      str << type_ << '(' << setprecision(parent->precLinear_) << vv << ','
	  << rr << ',' 
	  << radToDeg(angle) << ')';
    }
    break;
  default:
    if (ptr->hasWCSCel(sys)) {
      listRADEC(ptr,center,sys,Coord::FK5,Coord::SEXAGESIMAL);
      Vector rr = ptr->mapLenFromRef(annuli_[0],sys,Coord::ARCMIN);
      str << type_ << '(' << ra << ',' << dec << ',' 
	  << setprecision(parent->precArcmin_) << fixed << setunit('\'')
	  << rr << ',';
      str.unsetf(ios_base::floatfield);
      str << setprecision(parent->precLinear_) << radToDeg(angle) << ')';
    }
    break;
  }

  listCiaoPost(str, strip);
}

void Ellipse::listSAOtng(ostream& str, Coord::CoordSystem sys, 
			 Coord::SkyFrame sky, Coord::SkyFormat format,
			 int strip)
{
  FitsImage* ptr = parent->findFits();
  listSAOtngPre(str, strip);

  // radius is always in image coords

  switch (sys) {
  case Coord::IMAGE:
  case Coord::PHYSICAL:
  case Coord::DETECTOR:
  case Coord::AMPLIFIER:
    {
      Vector vv = ptr->mapFromRef(center,Coord::IMAGE);
      Vector rr = ptr->mapLenFromRef(annuli_[0],Coord::IMAGE);
      str << type_ << '(' << setprecision(parent->precLinear_) << vv << ','
	  << rr << ','
          << radToDeg(angle) << ')';
    }
    break;
  default:
    if (ptr->hasWCSCel(sys)) {
      listRADEC(ptr,center,sys,sky,format);
      Vector rr = ptr->mapLenFromRef(annuli_[0],Coord::IMAGE);
      str << type_ << '(' << ra << ',' << dec << ','
	  << setprecision(parent->precLinear_) << rr << ','
	  << setprecision(parent->precLinear_) << radToDeg(angle) << ')';
    }
  }

  listSAOtngPost(str, strip);
}

void Ellipse::listPros(ostream& str, Coord::CoordSystem sys, 
		       Coord::SkyFrame sky, Coord::SkyFormat format,
		       int strip)
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
      Vector rr = ptr->mapLenFromRef(annuli_[0],Coord::IMAGE);
      coord.listProsCoordSystem(str,sys,sky);
      str << "; " << type_ << ' ' << setprecision(parent->precLinear_)
	  << vv << ' ' << rr << ' '
          << radToDeg(angle);
    }
    break;
  default:
    if (ptr->hasWCSCel(sys)) {
      listRADECPros(ptr,center,sys,sky,format);
      coord.listProsCoordSystem(str,sys,sky);
      Vector rr = ptr->mapLenFromRef(annuli_[0],sys,Coord::ARCSEC);
      str << "; " << type_ << ' ';
      switch (format) {
      case Coord::DEGREES:
	str << ra << 'd' << ' ' << dec << 'd' << ' ';
	break;
      case Coord::SEXAGESIMAL:
	str << ra << ' ' << dec << ' ';
	break;
      }
      str << setprecision(parent->precArcsec_) << fixed << setunit('"')
	  << rr << ' ';
      str.unsetf(ios_base::floatfield);
      str << setprecision(parent->precLinear_) << radToDeg(angle);
    }
  }

  listProsPost(str, strip);
}

void Ellipse::listSAOimage(ostream& str, int strip)
{
  FitsImage* ptr = parent->findFits();
  listSAOimagePre(str);

  Vector vv = ptr->mapFromRef(center,Coord::IMAGE);
  str << type_ << '(' << setprecision(parent->precLinear_) << vv << ','
      << annuli_[0] << ','
      << radToDeg(angle) << ')';

  listSAOimagePost(str, strip);
}
