// Copyright (C) 1999-2016
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "tkmacosx.h"
#include "macosxlib.h"

void macosxBegin()
{
  /*
  if (tkmacosx)
    tkmacosx->begin();
  */
}

void macosxEnd()
{
  /*
  if (tkmacosx)
    tkmacosx->end();
  */
}

void macosxColor(XColor* clr)
{
  /*
  if (clr) {
    float red = clr->red/float(USHRT_MAX);
    float green = clr->green/float(USHRT_MAX);
    float blue = clr->blue/float(USHRT_MAX);

    if (tkmacosx)
      tkmacosx->color(red,green,blue);
  }
  */
}

void macosxWidth(float ww)
{
  /*
  if (tkmacosx)
    tkmacosx->width(ww);
  */
}

void macosxDash(float* d, int n)
{
  /*
  if (tkmacosx)
    tkmacosx->dash(d,n);
  */
}

void macosxFont(const char* f, float s)
{
  /*
  if (tkmacosx)
    tkmacosx->font(f,s);
  */
}

void macosxClip(Vector v, Vector s)
{
  /*
  if (tkmacosx) {
    Vector vv1 = v*tkmacosx->getCanvasToPage();
    Vector vv2 = (v+s)*tkmacosx->getCanvasToPage();
    Vector ss = vv2-vv1;
    tkmacosx->clip(vv1[0],vv1[1],ss[0],ss[1]);
  }
  */
}

void macosxNewPath()
{
  /*
  if (tkmacosx) {
    tkmacosx->newpath();
  }
  */
}

void macosxStroke()
{
  /*
  if (tkmacosx) {
    tkmacosx->stroke();
  }
  */
}

void macosxFill()
{
  /*
  if (tkmacosx) {
    tkmacosx->fill();
  }
  */
}

void macosxArc(Vector v, float rad, float ang1, float ang2)
{
  /*
  if (tkmacosx) {
    Vector vv = v*tkmacosx->getCanvasToPage();
    tkmacosx->arc(vv[0], vv[1], rad, ang1, ang2);
  }
  */
}

void macosxCurve(Vector v0, Vector t0, Vector t1, Vector v1)
{
  /*
  if (tkmacosx) {
    Vector vv0 = v0*tkmacosx->getCanvasToPage();
    Vector tt0 = t0*tkmacosx->getCanvasToPage();
    Vector tt1 = t1*tkmacosx->getCanvasToPage();
    Vector vv1 = v1*tkmacosx->getCanvasToPage();

    tkmacosx->curve(vv0[0], vv0[1], tt0[0], tt0[1], 
	 	    tt1[0], tt1[1], vv1[0], vv1[1]);
  }
  */
} 

void macosxDrawText(Vector v, float ang, const char* text)
{
  /*
  if (tkmacosx) {
    Vector vv = v*tkmacosx->getCanvasToPage();
    tkmacosx->drawText(vv[0], vv[1], ang, text);
  }
  */
}

void macosxDrawLine(Vector v0, Vector v1)
{
  /*
  if (tkmacosx) {
    Vector vv0 = v0*tkmacosx->getCanvasToPage();
    Vector vv1 = v1*tkmacosx->getCanvasToPage();

    int n = 2;
    float x[2];
    float y[2];

    x[0] = vv0[0];
    y[0] = vv0[1];
    x[1] = vv1[0];
    y[1] = vv1[1];

    tkmacosx->drawLines(x,y,n);
  }
  */
}

void macosxDrawLines(Vector* v, int n)
{
  /*
  if (tkmacosx) {
    float xx[n];
    float yy[n];

    for(int ii=0; ii<n; ii++) {
      Vector vv = v[ii]*tkmacosx->getCanvasToPage();

      xx[ii] = vv[0];
      yy[ii] = vv[1];
    }
      
    tkmacosx->drawLines(xx,yy,n);
  }
  */
}

void macosxFillPolygon(Vector* v, int n)
{
  /*
  if (tkmacosx) {
    float xx[n];
    float yy[n];

    for(int ii=0; ii<n; ii++) {
      Vector vv = v[ii]*tkmacosx->getCanvasToPage();

      xx[ii] = vv[0];
      yy[ii] = vv[1];
    }

    tkmacosx->fillPolygon(xx,yy,n);
  }
  */
}

void macosxDrawArc(Vector v, float rad, float ang1, float ang2)
{
  /*
  if (tkmacosx) {
    Vector vv = v*tkmacosx->getCanvasToPage();
    tkmacosx->drawArc(vv[0], vv[1], rad, ang1, ang2);
  }
  */
}

void macosxBitmapCreate(void* img, int width, int height, 
			const Vector& v, const Vector& s)
{
  /*
  if (tkmacosx) {
    Vector vv1 = v*tkmacosx->getCanvasToPage();
    Vector vv2 = (v+s)*tkmacosx->getCanvasToPage();
    Vector ss = vv2-vv1;
    tkmacosx->bitmapCreate(img, width, height, vv1[0], vv1[1], ss[0], ss[1]);
  }
  */
}
