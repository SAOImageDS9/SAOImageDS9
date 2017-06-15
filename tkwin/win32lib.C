// Copyright (C) 1999-2017
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

//#include "tkwin32.h"
#include "win32lib.h"

void win32Begin()
{
  /*
  if (tkwin32)
    tkwin32->begin();
  */
}

void win32End()
{
  /*
  if (tkwin32)
    tkwin32->end();
  */
}

void win32Color(XColor* clr)
{
  /*
  if (clr) {
    int red = clr->red >> 8;
    int green = clr->green >> 8;
    int blue = clr->blue >> 8;

    if (tkwin32)
      tkwin32->color(red,green,blue);
  }
  */
}

void win32Width(float w)
{
  /*
  float ww = w * tkwin32->getPageScale();  
  if (tkwin32)
    tkwin32->width(ww);
  */
}

void win32Dash(float* d, int n)
{
  /*
  int i;
  if (tkwin32){
    float *dd=NULL;
    if( (dd=(float *)calloc(n, sizeof(float))) ){
      for(i=0; i<n; i++){
	dd[i] = d[i] * tkwin32->getPageScale();
      }
    }
    else
      dd = d;

    tkwin32->dash(dd,n);
    if(dd)
      free(dd);
  }
  */
}

void win32Font(Tk_Font f)
{
  /*
  if (tkwin32)
    tkwin32->font(f);
  */
}

void win32Clip(Vector v, Vector s)
{
  /*
  if (tkwin32) {
    Vector vv1 = v*tkwin32->getCanvasToPage();
    Vector vv2 = (v+s)*tkwin32->getCanvasToPage();
    Vector ss = vv2-vv1;
    tkwin32->clip(vv1[0],vv1[1],ss[0],ss[1]);
  }
  */
}

void win32NewPath()
{
  /*
  if (tkwin32) {
    tkwin32->newpath();
  }
  */
}

void win32Stroke()
{
  /*
  if (tkwin32) {
    tkwin32->stroke();
  }
  */
}

void win32Fill()
{
  /*
  if (tkwin32) {
    tkwin32->fill();
  }
  */
}

void win32Arc(Vector v, float rad, float ang1, float ang2)
{
  /*
  if (tkwin32) {
    Vector vv = v*tkwin32->getCanvasToPage();
    tkwin32->arc(vv[0], vv[1], rad, ang1, ang2);
  }
  */
}

void win32Curve(Vector v0, Vector t0, Vector t1, Vector v1)
{
  /*
  if (tkwin32) {
    Vector vv0 = v0*tkwin32->getCanvasToPage();
    Vector tt0 = t0*tkwin32->getCanvasToPage();
    Vector tt1 = t1*tkwin32->getCanvasToPage();
    Vector vv1 = v1*tkwin32->getCanvasToPage();

    tkwin32->curve(vv0[0], vv0[1], tt0[0], tt0[1], 
	 	    tt1[0], tt1[1], vv1[0], vv1[1]);
  }
  */
} 

void win32DrawText(Vector v, float ang, const char* text)
{
  /*
  if (tkwin32) {
    Vector vv = v*tkwin32->getCanvasToPage();
    tkwin32->drawText(vv[0], vv[1], ang, text);
  }
  */
}

void win32DrawLine(Vector v0, Vector v1)
{
  /*
  if (tkwin32) {
    Vector vv0 = v0*tkwin32->getCanvasToPage();
    Vector vv1 = v1*tkwin32->getCanvasToPage();

    int n = 2;
    float x[2];
    float y[2];

    x[0] = vv0[0];
    y[0] = vv0[1];
    x[1] = vv1[0];
    y[1] = vv1[1];
    tkwin32->drawLines(x,y,n);
  }
  */
}

void win32DrawLines(Vector* v, int n)
{
  /*
  if (tkwin32) {
    float xx[n];
    float yy[n];

    for(int ii=0; ii<n; ii++) {
      Vector vv = v[ii]*tkwin32->getCanvasToPage();
      xx[ii] = vv[0];
      yy[ii] = vv[1];
    }
    tkwin32->drawLines(xx,yy,n);
  }
  */
}

void win32FillPolygon(Vector* v, int n)
{
  /*
  if (tkwin32) {
    float xx[n];
    float yy[n];

    for(int ii=0; ii<n; ii++) {
      Vector vv = v[ii]*tkwin32->getCanvasToPage();
      xx[ii] = vv[0];
      yy[ii] = vv[1];
    }
    tkwin32->fillPolygon(xx,yy,n);
  }
  */
}

void win32DrawArc(Vector v, float rad, float ang1, float ang2)
{
  /*
  if (tkwin32) {
    Vector vv = v*tkwin32->getCanvasToPage();
    float rr = rad*tkwin32->getPageScale();
    tkwin32->drawArc(vv[0], vv[1], rr, ang1, ang2);
  }
  */
}

void win32DrawCurve(Vector v0, Vector t0, Vector t1, Vector v1)
{
  /*
  if (tkwin32) {
    Vector vv0 = v0*tkwin32->getCanvasToPage();
    Vector tt0 = t0*tkwin32->getCanvasToPage();
    Vector tt1 = t1*tkwin32->getCanvasToPage();
    Vector vv1 = v1*tkwin32->getCanvasToPage();
    tkwin32->drawCurve(vv0[0], vv0[1], tt0[0], tt0[1], 
			tt1[0], tt1[1], vv1[0], vv1[1]);
  }
  */
} 

void win32BitmapCreate(void* img, int width, int height, 
			const Vector& v, const Vector& s)
{
  /*
  if (tkwin32) {
    Vector vv1 = v*tkwin32->getCanvasToPage();
    Vector vv2 = (v+s)*tkwin32->getCanvasToPage();
    Vector ss = vv2-vv1;
    tkwin32->bitmapCreate(img, width, height, vv1[0], vv1[1], ss[0], ss[1]);
  }
  */
}
