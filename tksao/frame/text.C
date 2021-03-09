// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "text.h"
#include "fitsimage.h"

EXTERN void TkDrawAngledChars(Display *display,
			      Drawable drawable, GC gc, Tk_Font tkfont,
			      const char *source, int numBytes, double x,
			      double y, double angle);

Text::Text(const Text& a) : Marker(a) 
{
  rotate = a.rotate;
}

Text::Text(Base* p, const Vector& ctr,
	   double ang, int rot,
	   const char* clr, int* dsh,
	   int wth, const char* fnt, const char* txt, 
	   unsigned short prop, const char* cmt,
	   const List<Tag>& tg, const List<CallBack>& cb) 
  : Marker(p, ctr, ang, clr, dsh, wth, fnt, txt, prop, cmt, tg, cb)
{
  strcpy(type_,"text");
  handle = new Vector[4];
  numHandle = 4;
  rotate = rot;

  updateBBox();
}

void Text::renderX(Drawable drawable, Coord::InternalSystem sys, RenderMode mode)
{
  if (text && *text && tkfont_) {
    GC lgc = renderXGC(mode);
    XSetFont(display, lgc, Tk_FontId(tkfont_));

    // origin is center of text
    Tk_FontMetrics metrics;
    Tk_GetFontMetrics(tkfont_, &metrics);
    int width = Tk_TextWidth(tkfont_, text, strlen(text));
    int delta = (metrics.ascent-metrics.descent)/2.;

    double ang = rotate ? calcAngle() : 0;
    Vector cc = parent->mapFromRef(center,sys);
    Matrix mm = Translate(-cc) *
      Translate(-width/2., delta) *
      Rotate(ang) *
      Translate(cc);
    Vector vv = cc * mm;

    TkDrawAngledChars(display, drawable, lgc, tkfont_, 
		      text, strlen(text), 
    		      vv[0], vv[1], radToDeg(ang));
  }
}

void Text::renderPS(PSColorSpace mode)
{
  renderPSGC(mode);

  if (text && *text && psfont_) {
    ostringstream str;

    const char* ff = Tk_NameOfFont(psfont_);
    str << '/' << psFontName(ff)
    	<< " findfont " << int(psFontSize(ff)*parent->getDisplayRatio())
	<< " scalefont setfont" << endl;

    double ang = rotate ? calcAngle() : 0;
    Vector bb = parent->mapFromRef(center,Coord::CANVAS);
    Vector cc = parent->TkCanvasPs(bb);
    str << "gsave" << endl
	<< "newpath " << endl
	<< cc << " moveto" << endl
	<< '(' << psQuote(text) << ')' << endl
	<< "dup true charpath pathbbox " << endl
	<< "closepath " << endl
	<< "3 -1 roll sub 3.6 div neg " << endl
	<< "3 1 roll sub 2 div exch " << endl
	<< cc << " moveto " << endl
 	<< radToDeg(ang) << " rotate " << endl
	<< " rmoveto show" << endl
	<< "grestore" << endl;

    str << ends;
    Tcl_AppendResult(parent->interp, str.str().c_str(), NULL);
  }
}

#ifdef __WIN32
#include <win32lib.h>

void Text::renderWIN32()
{
  renderWIN32GC();

  if (text && *text && tkfont_) {
    win32Font(tkfont_);

    Tk_FontMetrics metrics;
    Tk_GetFontMetrics(tkfont_, &metrics);
    int width = Tk_TextWidth(tkfont_, text, strlen(text));
    int delta = (metrics.ascent-metrics.descent)/2.;

    double ang = rotate ? calcAngle() : 0;
    Vector cc = parent->mapFromRef(center,Coord::CANVAS);
    Matrix mm = Translate(-cc) *
      Translate(-width/2., delta) *
      Rotate(ang) *
      Translate(cc);
    Vector vv = cc * mm;

    win32DrawText(vv, 0, text);
  }
}
#endif

// Support

void Text::updateHandles()
{
  Vector cc = parent->mapFromRef(center,Coord::CANVAS);

  if (text && *text && tkfont_) {
    Tk_FontMetrics metrics;
    Tk_GetFontMetrics(tkfont_, &metrics);
    int width = Tk_TextWidth(tkfont_, text, strlen(text));

    Vector s(width, metrics.linespace);
    double ang = rotate ? calcAngle() : 0;
    Matrix mm = Rotate(ang) * Translate(cc);
    handle[0] = Vector(-s[0],-s[1])/2 * mm;
    handle[1] = Vector( s[0],-s[1])/2 * mm;
    handle[2] = Vector( s[0], s[1])/2 * mm;
    handle[3] = Vector(-s[0], s[1])/2 * mm;
  }
  else {
    Vector s(10,10);
    Matrix mm = Translate(cc);
    handle[0] = Vector(-s[0],-s[1])/2 * mm;
    handle[1] = Vector( s[0],-s[1])/2 * mm;
    handle[2] = Vector( s[0], s[1])/2 * mm;
    handle[3] = Vector(-s[0], s[1])/2 * mm;
  }
}

void Text::calcAllBBox()
{
  allBBox = bbox;
}

int Text::isIn(const Vector& vv)
{
  if (text && *text && tkfont_) {
    // origin is center of text
    Tk_FontMetrics metrics;
    Tk_GetFontMetrics(tkfont_, &metrics);
    float ww = Tk_TextWidth(tkfont_, text, strlen(text))/2./parent->zoom_[0];
    float hh = metrics.linespace/2./parent->zoom_[1];

    Vector pp = bckMap(vv,Coord::CANVAS);

    if (pp[0]<-ww || pp[0]>ww || pp[1]<-hh || pp[1]>hh)
      return 0;
    else
      return 1;
  }
  else 
    return 0;
}

void Text::setRotate(int rot)
{
  rotate = rot ? 1 : 0;
  updateBBox();
}

// list

void Text::list(ostream& str, Coord::CoordSystem sys, Coord::SkyFrame sky, 
		Coord::SkyFormat format, int conj, int strip)
{
  if (!text || !*text)
    return;

  if (!strip) {
    FitsImage* ptr = parent->findFits(sys,center);
    listPre(str, sys, sky, ptr, strip, 1);

    str << type_ << '(';
    ptr->listFromRef(str,center,sys,sky,format);
    str  << ')';
    
    if (conj)
      str << " ||";

    if (angle != 0) {
      str << " textangle=";
      parent->listAngleFromRef(str,angle,sys,sky);
    }
  
    if (!rotate)
      str << " textrotate=" << 0;
    listProperties(str, 0);
  }
}

void Text::listXML(ostream& str, Coord::CoordSystem sys, Coord::SkyFrame sky, 
		   Coord::SkyFormat format)
{
  FitsImage* ptr = parent->findFits(sys,center);

  XMLRowInit();
  XMLRow(XMLSHAPE,type_);

  XMLRowCenter(ptr,sys,sky,format);
  XMLRowAng(sys,sky);
  XMLRow(XMLPARAM,rotate);

  XMLRowProps(ptr,sys);
  XMLRowEnd(str);
}

void Text::listSAOtng(ostream& str, Coord::CoordSystem sys, Coord::SkyFrame sky,
		      Coord::SkyFormat format, int strip)
{
  if (!text || !*text)
    return;

  FitsImage* ptr = parent->findFits();
  if (properties&INCLUDE)
    str << '+';
  else
    str << '-';

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
    break;
  }
  str << ", \"" << text << "\"";
  str << ')';
  
  listSAOtngPost(str, strip);
}




