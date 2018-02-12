// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "grid3dbase.h"
#include "attribute.h"
#include "widget.h"

extern "C" {
  #include "ast.h"
  #include "grf.h"
}

Grid3dBase* astGrid3dPtr = NULL;

Grid3dBase::Grid3dBase(Widget* p) : GridBase(p)
{}

Grid3dBase::Grid3dBase(Widget* p, const char* o) : GridBase(p,o)
{}

Grid3dBase::~Grid3dBase()
{}

int Grid3dBase::gLine(int n, float* x, float* y, float* z)
{
  float xx[n];
  float yy[n];

  for (int ii=0; ii<n; ii++) {
    Vector3d vv = Vector3d(x[ii],y[ii],z[ii])*mx_;
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

int Grid3dBase::gQch(float* ch)
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

    *ch = (float)metrics.linespace;
    return 1;
  }
  else {
    *ch = 0;
    return 0;
  }
}

int Grid3dBase::gText(const char* txt, float* ref, const char* just, 
		    float* up, float* norm)
{
  if (!(txt && txt[0] && just && just[0] && just[1]))
    return 0;

  Vector3d vv = Vector3d(ref[0],ref[1],ref[2])*mx_;

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

int Grid3dBase::gTxExt(const char* txt, float* ref, const char* just,
		       float* up, float* norm, float* xb, float* yb, 
		       float* zb, float* bl)
{
  if (!(txt && txt[0] && just)) {
    xb[0] = xb[1] = xb[2] = xb[3] = 0;
    yb[0] = yb[1] = yb[2] = yb[3] = 0;
    zb[0] = zb[1] = zb[2] = zb[3] = 0;

    return 0;
  }

  /*
  cerr << txt 
       << Vector3d(ref[0],ref[1],ref[2]) << ' '
       << just[0] << just[1] 
       << Vector3d(up[0],up[1],up[2]) 
       << Vector3d(norm[0],norm[1],norm[2]) 
       << endl;
  */

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

  Vector3d vv = Vector3d(ref[0],ref[1],ref[2])*mx_;
  //  cerr << " vv: " << vv << endl;
  Vector3d cc = vv * calcTextPos(vv, txt, just, font);
  //  cerr << " cc: " << cc << endl;

  Tk_FontMetrics metrics;
  Tk_GetFontMetrics(font, &metrics);
  int width = Tk_TextWidth(font, txt, strlen(txt));

  BBox3d nn(Vector3d(0,-metrics.descent,0), Vector3d(width,metrics.ascent,0));
  //  cerr << " nn: " << nn << endl;
  Matrix3d mm = Translate3d(-nn.center()) * rx_ * Translate3d(nn.center());
  //  cerr << mm << endl;
  BBox3d bb = nn * mm * Translate3d(cc);
  //  cerr << " bb: " << bb << endl;
  Vector3d ll = cc * mm;

  xb[0] = bb.ll[0];
  yb[0] = bb.ll[1];
  zb[0] = bb.ll[2];

  xb[1] = bb.ur[0];
  yb[1] = bb.ll[1];
  zb[1] = bb.ll[2];

  xb[2] = bb.ur[0];
  yb[2] = bb.ur[1];
  zb[2] = bb.ll[2];

  xb[3] = bb.ll[0];
  yb[3] = bb.ur[1];
  zb[3] = bb.ll[2];

  bl[0] = ll[0];
  bl[1] = ll[1];
  bl[2] = ll[2];

  return 1;
}

Matrix3d Grid3dBase::calcTextPos(const Vector3d& vv, const char* txt, 
				 const char* just, Tk_Font font)
{
  Tk_FontMetrics metrics;
  Tk_GetFontMetrics(font, &metrics);
  int width = Tk_TextWidth(font, txt, strlen(txt));

  Matrix3d m1,m2;
  switch (just[0]) {
  case 'T':
    break;
  case 'C':
    m1 = Translate3d(0,metrics.linespace/2,0);
    break;
  case 'B':
    m1 = Translate3d(0,metrics.ascent,0);
    break;
  case 'M':
    m1 = Translate3d(0,metrics.linespace,0);
    break;
  }

  switch (just[1]) {
  case 'L':
    break;
  case 'C':
    m2 = Translate3d(-width/2.,0,0);
    break;
  case 'R':
    m2 = Translate3d(-width,0,0);
    break;
  }

  return Translate3d(-vv) *
    m1 * m2 *
    Translate3d(vv);
}
