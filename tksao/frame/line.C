// Copyright (C) 1999-2021
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "line.h"
#include "fitsimage.h"

Line::Line(Base* p, const Vector& ptr1, const Vector& ptr2)
  : BaseLine(p, ptr1, ptr2)
{
  p1Arrow = NOEND;
  p2Arrow = NOEND;

  strcpy(type_,"line");
  handle = new Vector[2];
  numHandle = 2;

  updateBBox();
}

Line::Line(Base* p, const Vector& ptr1, const Vector& ptr2,
	   int a1, int a2,
	   const char* clr, int* dsh, 
	   int wth, const char* fnt, const char* txt,
	   unsigned short prop, const char* cmt, 
	   const List<Tag>& tg, const List<CallBack>& cb) 
  : BaseLine(p, ptr1, ptr2, clr, dsh, wth, fnt, txt, prop, cmt, tg, cb)
{
  p1Arrow = validLineEnd(a1);
  p2Arrow = validLineEnd(a2);

  strcpy(type_,"line");
  handle = new Vector[2];
  numHandle = 2;

  updateBBox();
}

Line::Line(const Line& a) : BaseLine(a)
{
  p1Arrow = a.p1Arrow;
  p2Arrow = a.p2Arrow;
}

void Line::renderX(Drawable drawable, Coord::InternalSystem sys, RenderMode mode)
{
  Vector aa = parent->mapFromRef(p1,sys);
  Vector bb = parent->mapFromRef(p2,sys);

  if (p1Arrow) {
    aa = modifyLineEnd(p2,p1,sys,p1Arrow);
    renderXLineEnd(drawable,p2,p1,sys,mode,p1Arrow);
  }

  if (p2Arrow) {
    bb = modifyLineEnd(p1,p2,sys,p2Arrow);
    renderXLineEnd(drawable,p1,p2,sys,mode,p2Arrow);
  }

  GC lgc = renderXGC(mode);
  XDrawLine(display, drawable, lgc, aa[0], aa[1], bb[0], bb[1]);
}

void Line::renderPS(PSColorSpace mode)
{
  renderPSGC(mode);

  Vector aa = parent->mapFromRef(p1,Coord::CANVAS);
  Vector bb = parent->mapFromRef(p2,Coord::CANVAS);

  if (p1Arrow) {
    aa = modifyLineEnd(p2,p1,Coord::CANVAS,p1Arrow);
    renderPSLineEnd(mode,p2,p1,Coord::CANVAS,p1Arrow);
  }

  if (p2Arrow) {
    bb = modifyLineEnd(p1,p2,Coord::CANVAS,p2Arrow);
    renderPSLineEnd(mode,p1,p2,Coord::CANVAS,p2Arrow);
  }

  ostringstream str;
  str << "newpath " 
      << parent->TkCanvasPs(aa) << ' '
      << "moveto "
      << parent->TkCanvasPs(bb) << ' '
      << "lineto stroke" << endl << ends;
  Tcl_AppendResult(parent->interp, str.str().c_str(), NULL);
}

#ifdef __WIN32
#include <win32lib.h>

void Line::renderWIN32()
{
  renderWIN32GC();

  Vector aa = parent->mapFromRef(p1,Coord::CANVAS);
  Vector bb = parent->mapFromRef(p2,Coord::CANVAS);

  if (p1Arrow) {
    aa = modifyLineEnd(p2,p1,Coord::CANVAS,p1Arrow);
    renderWIN32LineEnd(p2,p1,Coord::CANVAS,p1Arrow);
  }

  if (p2Arrow) {
    bb = modifyLineEnd(p1,p2,Coord::CANVAS,p2Arrow);
    renderWIN32LineEnd(p1,p2,Coord::CANVAS,p2Arrow);
  }

  win32DrawLine(aa,bb);
}
#endif

// Support

void Line::updateHandles()
{
  center = (p2-p1)/2 + p1;
  angle = (p2-p1).angle();

  // generate handles in Coord::CANVAS coords
  handle[0] = parent->mapFromRef(p1,Coord::CANVAS);
  handle[1] = parent->mapFromRef(p2,Coord::CANVAS);
}

void Line::calcAllBBox()
{
  Marker::calcAllBBox();

  // make room for line ends, which reach past the end points
  if (p1Arrow || p2Arrow)
    allBBox.expand(lineEndExtent() + 2*lineWidth);
}

void Line::setArrows(int w1, int w2)
{
  p1Arrow = validLineEnd(w1);
  p2Arrow = validLineEnd(w2);
  updateBBox();
}

void Line::analysis(AnalysisTask mm, int which)
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

void Line::analysisPlot2d(char* xname, char* yname, 
			  char* xcname, char* ycname,
			  Coord::CoordSystem sys, Coord::SkyFrame sky,
			  Marker::AnalysisMethod method)
{
  double* x;
  double* y;
  double* xc;
  double* yc;

  int num = parent->markerAnalysisPlot2d(this, &x, &y, &xc, &yc, p1, p2, 0,
					 sys, sky, method);
  analysisXYEEResult(xname, yname, xcname, ycname, x, y, xc, yc, num);
}

// list

void Line::list(ostream& str, Coord::CoordSystem sys, Coord::SkyFrame sky, 
		Coord::SkyFormat format, int conj, int strip)
{
  FitsImage* ptr = parent->findFits(sys,center);
  listPre(str, sys, sky, ptr, strip, 0);

  str << type_ << '(';
  ptr->listFromRef(str,p1,sys,sky,format);
  str << ',';
  ptr->listFromRef(str,p2,sys,sky,format);
  str << ')';

  listPost(str, conj, strip);
}

void Line::listPost(ostream& str, int conj, int strip)
{
  // no props for semicolons
  if (!strip) {
    if (conj)
      str << ' ' << listConjunction(conj);

    str << " # line=" << lineEndListStr(p1Arrow) << ' '
	<< lineEndListStr(p2Arrow);

    listProperties(str, 0);
  }
  else {
    if (conj)
      str << listConjunction(conj);
    else
      str << ';';
  }
}

void Line::listXML(ostream& str, Coord::CoordSystem sys, Coord::SkyFrame sky, 
		     Coord::SkyFormat format)
{
  FitsImage* ptr = parent->findFits(sys,center);
  Vector vv[2];
  vv[0] = p1;
  vv[1] = p2;

  XMLRowInit();
  XMLRow(XMLSHAPE,type_);

  XMLRowPoint(ptr,sys,sky,format,vv,2);
  XMLRow(XMLPARAM,(char*)lineEndListStr(p1Arrow));
  XMLRow(XMLPARAM2,(char*)lineEndListStr(p2Arrow));

  XMLRowProps(ptr,sys);
  XMLRowEnd(str);
}

void Line::listSAOtng(ostream& str, Coord::CoordSystem sys, Coord::SkyFrame sky,
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
    ptr->listFromRef(str,p1,Coord::IMAGE);
    str << ',';
    ptr->listFromRef(str,p2,Coord::IMAGE);
    break;
  default:
    ptr->listFromRef(str,p1,sys,sky,format);
    str << ',';
    ptr->listFromRef(str,p2,sys,sky,format);
  }
  str<< ')';

  listSAOtngPost(str, strip);
}
