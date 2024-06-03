// Copyright (C) 1999-2024
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "colorbart.h"
#include "psutil.h"

ColorbarT::ColorbarT(Tcl_Interp* i,Tk_Canvas c,Tk_Item* item) 
  : ColorbarA(i,c,item)
{
  cmap =NULL;
}

ColorbarT::~ColorbarT()
{
  if (cmap)
    delete cmap;
}

int ColorbarT::initColormap()
{
  colorCount = (((ColorbarBaseOptions*)options)->colors);
  colorCells = new unsigned char[colorCount*5];

  // needed to initialize colorCells
  reset();

  return TCL_OK;
}

void ColorbarT::loadDefaultCmaps()
{
  cmap = new iRainbowColorMap(this);
}

void ColorbarT::updateColorCells()
{
  int clrs = (((ColorbarBaseOptions*)options)->colors);
  if (clrs != colorCount) {
    colorCount = clrs;
    if (colorCells)
      delete [] colorCells;
    colorCells = new unsigned char[colorCount*5];
  }

  // fill rgb table
  // note: its filled bgr to match XImage
  for(int i=0, j=colorCount-1; i<colorCount; i++, j--) {
    int index = invert ? calcContrastBias(j,bias[0],contrast[0]) :
      calcContrastBias(i,bias[0],contrast[0]);
    colorCells[i*5] = cmap->getBlueChar(index, colorCount);
    colorCells[i*5+1] = cmap->getGreenChar(index, colorCount);
    colorCells[i*5+2] = cmap->getRedChar(index, colorCount);

    int ids = invert ? calcContrastBias(j,bias[1],contrast[1]) : 
      calcContrastBias(i,bias[1],contrast[1]);
    int idv = invert ? calcContrastBias(j,bias[2],contrast[2]) : 
      calcContrastBias(i,bias[2],contrast[2]);

    colorCells[i*5+3] = (int)(256.*ids/colorCount);
    colorCells[i*5+4] = (int)(256.*idv/colorCount);
  }
}

void ColorbarT::psHorz(ostream& str, Filter& filter, int width, int height)
{
  // inverted
    for (int jj=(int)(height*2/3.+1); jj<height; jj++) {
    for (int ii=0; ii<width; ii++) {
      int kk = (int)(double(ii)/width*colorCount)*5;
      unsigned char v = colorCells[kk+4];

      psPixel(psColorSpace, str, filter, v, v, v);
    }
  }

  for (int ii=0; ii<width; ii++)
    psPixel(psColorSpace, str, filter, 0, 0, 0);

  for (int jj=(int)(height/3.+1); jj<(int)(height*2/3.); jj++) {
    for (int ii=0; ii<width; ii++) {
      int kk = (int)(double(ii)/width*colorCount)*5;
      unsigned char v = colorCells[kk+3];

      psPixel(psColorSpace, str, filter, v, v, v);
    }
  }

  for (int ii=0; ii<width; ii++)
    psPixel(psColorSpace, str, filter, 0, 0, 0);

  // bgr for XImage
  for (int jj=0; jj<(int)(height/3.); jj++) {
    for (int ii=0; ii<width; ii++) {
      int kk = (int)(double(ii)/width*colorCount)*5;
      unsigned char red = colorCells[kk+2];
      unsigned char green = colorCells[kk+1];
      unsigned char blue = colorCells[kk];

      psPixel(psColorSpace, str, filter, red, green, blue);
    }
  }
}

void ColorbarT::psVert(ostream& str, Filter& filter, int width, int height)
{
  for (int jj=0; jj<height; jj++) {
    // bgr for XImage
    int kk = (int)(double(jj)/height*colorCount)*5;
    unsigned char blue = colorCells[kk];
    unsigned char green = colorCells[kk+1];
    unsigned char red = colorCells[kk+2];
    unsigned char ss = colorCells[kk+3];
    unsigned char vv = colorCells[kk+4];

    for (int ii=0; ii<(int)(width/3.); ii++)
      psPixel(psColorSpace, str, filter, red, green, blue);

    psPixel(psColorSpace, str, filter, 0,0,0);

    for (int ii=(int)(width/3.+1); ii<(int)(width*2/3.); ii++)
      psPixel(psColorSpace, str, filter, ss, ss, ss);

    psPixel(psColorSpace, str, filter, 0,0,0);

    for (int ii=(int)(width*2/3.+1); ii<width; ii++)
      psPixel(psColorSpace, str, filter, vv, vv, vv);
  }
}

#ifdef MAC_OSX_TK
void ColorbarT::macosx(float scale, int width, int height, 
		       const Vector& v, const Vector& s)
{}
#endif

#ifdef __WIN32
#include <win32lib.h>

void ColorbarT::win32(float scale, int width, int height, 
		      const Vector& v, const Vector& s)
{}
#endif

