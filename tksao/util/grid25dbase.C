// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "grid25dbase.h"
#include "attribute.h"
#include "widget.h"
#include "frame3dbase.h"

extern "C" {
  #include "ast.h"
  #include "grf.h"
}

Grid25dBase* astGrid25dPtr = NULL;

Grid25dBase::Grid25dBase(Widget* p) : GridBase(p)
{}

Grid25dBase::Grid25dBase(Widget* p, const char* o) : GridBase(p,o)
{}

Grid25dBase::~Grid25dBase()
{}

int Grid25dBase::gLine(int n, float* x, float* y)
{
  Frame3dBase* pp = (Frame3dBase*)parent_;
  float xx[n];
  float yy[n];

  for (int ii=0; ii<n; ii++) {
    Vector vv = pp->mapFromRef(Vector(x[ii],y[ii]),Coord::WIDGET);
    xx[ii] = vv[0];
    yy[ii] = vv[1];
  }

  switch (renderMode_) {
  case X11:
    x11Line(n,xx,yy);
    break;
  case PS:
    psLine(n,xx,yy);
    break;
  case MACOSX:
#ifdef MAC_OSX_TK
    macosxLine(n,xx,yy);
#endif
    break;
  case GWIN32:
#ifdef __WIN32
    win32Line(n,xx,yy);
#endif
    break;
  }

  return 1;
}

int Grid25dBase::gQch(float* chv, float* chh)
{
  Tk_Font font =NULL;
  switch (renderMode_) {
  case X11:
    font = text_->tkfont();
    break;
  case PS:
    font = text_->psfont();
    break;
  case MACOSX:
#ifdef MAC_OSX_TK
    font = text_->tkfont();
#endif
    break;
  case GWIN32:
#ifdef __WIN32
    font = text_->tkfont();
#endif
    break;
  }

  if (font) {
    Tk_FontMetrics metrics;
    Tk_GetFontMetrics(font, &metrics);

    *chv = (float)metrics.linespace;
    *chh = (float)metrics.linespace;
    return 1;
  }
  else {
    *chv = *chh = 0;
    return 0;
  }
}

int Grid25dBase::gText(const char* txt, float x, float y, const char* just, 
		    float upx, float upy)
{
  if (!(txt && txt[0] && just && just[0] && just[1]))
    return 0;

  Frame3dBase* pp = (Frame3dBase*)parent_;
  Vector vv = pp->mapFromRef(Vector(x,y),Coord::WIDGET);

  switch (renderMode_) {
  case X11:
    return x11Text(txt,vv[0],vv[1],just,Vector(0,1));
  case PS:
    return psText(txt,vv[0],vv[1],just,Vector(0,1));
  case MACOSX:
#ifdef MAC_OSX_TK
    return macosxText(txt,vv[0],vv[1],just,Vector(0,1));
#endif
    break;
  case GWIN32:
#ifdef __WIN32
    return win32Text(txt,vv[0],vv[1],just,Vector(0,1));
#endif
    break;
  }

  return 0;
}

int Grid25dBase::gTxExt(const char* txt, float x, float y, const char* just,
		 float upx, float upy, float* xb, float* yb)
{
  if (!(txt && txt[0] && just)) {
    xb[0] = xb[1] = xb[2] = xb[3] = 0;
    yb[0] = yb[1] = yb[2] = yb[3] = 0;

    return 0;
  }

  Tk_Font font =NULL;

  switch (renderMode_) {
  case X11:
    font = text_->tkfont();
    break;
  case PS:
    font = text_->psfont();
    break;
  case MACOSX:
#ifdef MAC_OSX_TK
    font = text_->tkfont();
#endif
    break;
  case GWIN32:
#ifdef __WIN32
    font = text_->tkfont();
#endif
    break;
  }

  if (!font)
    return 0;

  Frame3dBase* pp = (Frame3dBase*)parent_;
  Vector vv = pp->mapFromRef(Vector(x,y),Coord::WIDGET);

  double angle = 0;
  Vector cc = vv * calcTextPos(vv, angle, txt, just, Vector(0, 1), font);

  Tk_FontMetrics metrics;
  Tk_GetFontMetrics(font, &metrics);
  int width = Tk_TextWidth(font, txt, strlen(txt));

  BBox nn = BBox(Vector(0,-metrics.descent), Vector(width,metrics.ascent));
  BBox bb = nn * Rotate(angle) * Translate(cc);

  xb[0] = bb.ll[0];
  yb[0] = bb.ll[1];

  xb[1] = bb.ur[0];
  yb[1] = bb.ll[1];

  xb[2] = bb.ur[0];
  yb[2] = bb.ur[1];

  xb[3] = bb.ll[0];
  yb[3] = bb.ur[1];

  return 1;
}

int Grid25dBase::gScales(float* alpha, float* beta)
{
  return 1;
}

