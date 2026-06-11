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
  cmap = new HSVHLSColorMap(this);
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

void ColorbarT::pdfHorz(unsigned char* data, int width, int height)
{
  int rgbEnd = (int)(height/3.);
  int satStart = (int)(height/3.+1);
  int satEnd = (int)(height*2/3.);
  int valStart = (int)(height*2/3.+1);

  for (int jj=0; jj<height; jj++) {
    for (int ii=0; ii<width; ii++) {
      unsigned char* pix = data + (jj*width + ii)*3;
      int kk = (int)(double(ii)/width*colorCount)*5;

      if (jj < rgbEnd) {
	pix[0] = colorCells[kk+2];
	pix[1] = colorCells[kk+1];
	pix[2] = colorCells[kk];
      }
      else if (jj >= satStart && jj < satEnd) {
	unsigned char v = colorCells[kk+3];
	pix[0] = v;
	pix[1] = v;
	pix[2] = v;
      }
      else if (jj >= valStart) {
	unsigned char v = colorCells[kk+4];
	pix[0] = v;
	pix[1] = v;
	pix[2] = v;
      }
      else {
	pix[0] = 0;
	pix[1] = 0;
	pix[2] = 0;
      }
    }
  }
}

void ColorbarT::pdfVert(unsigned char* data, int width, int height)
{
  int rgbEnd = (int)(width/3.);
  int satStart = (int)(width/3.+1);
  int satEnd = (int)(width*2/3.);
  int valStart = (int)(width*2/3.+1);

  for (int jj=0; jj<height; jj++) {
    int kk = (int)(double(height-1-jj)/height*colorCount)*5;
    unsigned char blue = colorCells[kk];
    unsigned char green = colorCells[kk+1];
    unsigned char red = colorCells[kk+2];
    unsigned char ss = colorCells[kk+3];
    unsigned char vv = colorCells[kk+4];

    for (int ii=0; ii<width; ii++) {
      unsigned char* pix = data + (jj*width + ii)*3;
      if (ii < rgbEnd) {
	pix[0] = red;
	pix[1] = green;
	pix[2] = blue;
      }
      else if (ii >= satStart && ii < satEnd) {
	pix[0] = ss;
	pix[1] = ss;
	pix[2] = ss;
      }
      else if (ii >= valStart) {
	pix[0] = vv;
	pix[1] = vv;
	pix[2] = vv;
      }
      else {
	pix[0] = 0;
	pix[1] = 0;
	pix[2] = 0;
      }
    }
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
