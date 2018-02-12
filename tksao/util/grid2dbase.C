// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "grid2dbase.h"
#include "attribute.h"
#include "widget.h"

extern "C" {
  #include "ast.h"
  #include "grf.h"
}

Grid2dBase* astGrid2dPtr = NULL;

Grid2dBase::Grid2dBase(Widget* p) : GridBase(p)
{}

Grid2dBase::Grid2dBase(Widget* p, const char* o) : GridBase(p,o)
{}

Grid2dBase::~Grid2dBase()
{}

int Grid2dBase::gLine(int n, float* x, float* y)
{
  switch (renderMode_) {
  case X11:
    x11Line(n,x,y);
    break;
  case PS:
    psLine(n,x,y);
    break;
  case MACOSX:
#ifdef MAC_OSX_TK
    macosxLine(n,x,y);
#endif
    break;
  case GWIN32:
#ifdef __WIN32
    win32Line(n,x,y);
#endif
    break;
  }

  return 1;
}

int Grid2dBase::gQch(float* chv, float* chh)
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

int Grid2dBase::gText(const char* txt, float x, float y, const char* just, 
		    float upx, float upy)
{
  if (!(txt && txt[0] && just && just[0] && just[1]))
    return 0;

  switch (renderMode_) {
  case X11:
    return x11Text(txt,x,y,just,Vector(upx,upy));
  case PS:
    return psText(txt,x,y,just,Vector(upx,upy));
  case MACOSX:
#ifdef MAC_OSX_TK
    return macosxText(txt,x,y,just,Vector(upx,upy));
#endif
    break;
  case GWIN32:
#ifdef __WIN32
    return win32Text(txt,x,y,just,Vector(upx,upy));
#endif
    break;
  }

  return 0;
}

int Grid2dBase::gTxExt(const char* txt, float x, float y, const char* just,
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

  Vector vv = Vector(x,y);
  double angle = calcTextAngle(just, Vector(upx, upy));
  Vector cc = vv * calcTextPos(vv, angle, txt, just, Vector(upx, upy), font);

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

int Grid2dBase::gScales(float* alpha, float* beta)
{
  return 1;
}

