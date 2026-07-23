// Copyright (C) 1999-2024
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "colorbarrgb.h"

ColorbarRGB::ColorbarRGB(Tcl_Interp* i,Tk_Canvas c,Tk_Item* item)
  : ColorbarT(i,c,item), multiColorMode(0), multiColorCount(0),
    multiColorCurrent(0), multiColorName(NULL), multiColorBias(NULL),
    multiColorContrast(NULL)
{}

ColorbarRGB::~ColorbarRGB()
{
  clearMultiColorNames();
}

static double max3(double a, double b, double c)
{
  return a > b ? (a > c ? a : c) : (b > c ? b : c);
}

static double min3(double a, double b, double c)
{
  return a < b ? (a < c ? a : c) : (b < c ? b : c);
}

static void rgbToHls(double r, double g, double b,
		     double* h, double* l, double* s)
{
  double mx = max3(r,g,b);
  double mn = min3(r,g,b);
  double diff = mx-mn;

  *l = (mx+mn)/2.;
  if (diff == 0) {
    *h = 0;
    *s = 0;
    return;
  }

  *s = *l <= .5 ? diff/(mx+mn) : diff/(2.-mx-mn);

  if (r == mx)
    *h = (g-b)/diff + (g < b ? 6. : 0.);
  else if (g == mx)
    *h = (b-r)/diff + 2.;
  else
    *h = (r-g)/diff + 4.;

  *h /= 6.;
}

static double hueToRgb(double p, double q, double t)
{
  if (t < 0)
    t += 1;
  if (t > 1)
    t -= 1;
  if (t < 1./6.)
    return p+(q-p)*6.*t;
  if (t < 1./2.)
    return q;
  if (t < 2./3.)
    return p+(q-p)*(2./3.-t)*6.;
  return p;
}

static unsigned char byteFromUnit(double value)
{
  if (value <= 0)
    return 0;
  if (value >= 1)
    return 255;

  return (unsigned char)(value*255. + .5);
}

static void hlsToRgb(double h, double l, double s,
		     unsigned char* r, unsigned char* g, unsigned char* b)
{
  if (s == 0) {
    *r = byteFromUnit(l);
    *g = byteFromUnit(l);
    *b = byteFromUnit(l);
    return;
  }

  double q = l < .5 ? l*(1.+s) : l+s-l*s;
  double p = 2.*l-q;

  *r = byteFromUnit(hueToRgb(p,q,h+1./3.));
  *g = byteFromUnit(hueToRgb(p,q,h));
  *b = byteFromUnit(hueToRgb(p,q,h-1./3.));
}

void ColorbarRGB::clearMultiColorNames()
{
  if (multiColorName) {
    for (int ii=0; ii<multiColorCount; ii++)
      if (multiColorName[ii])
	delete [] multiColorName[ii];

    delete [] multiColorName;
    multiColorName = NULL;
  }
  if (multiColorBias)
    delete [] multiColorBias;
  multiColorBias = NULL;
  if (multiColorContrast)
    delete [] multiColorContrast;
  multiColorContrast = NULL;
  multiColorCount = 0;
  multiColorCurrent = 0;
}

int ColorbarRGB::lineCount()
{
  return multiColorMode ? multiColorCount : 3;
}

int ColorbarRGB::lineFromHorz(int yy, int height)
{
  int cnt = lineCount();
  int line = int(double(yy)*cnt/height);
  return line >= cnt ? cnt-1 : line;
}

int ColorbarRGB::lineFromVert(int xx, int width)
{
  int cnt = lineCount();
  int line = int(double(xx)*cnt/width);
  return line >= cnt ? cnt-1 : line;
}

int ColorbarRGB::sampleFromHorz(int xx, int width)
{
  int sample = int(double(xx)/width*colorCount);
  return sample >= colorCount ? colorCount-1 : sample;
}

int ColorbarRGB::sampleFromVert(int yy, int height)
{
  int sample = int(double(yy)/height*colorCount);
  return sample >= colorCount ? colorCount-1 : sample;
}

const unsigned char* ColorbarRGB::colorCell(int line, int sample)
{
  if (!multiColorMode) {
    const unsigned char* src = colorCells + sample*3;
    colorCellBuffer[0] = line == 0 ? src[0] : 0;
    colorCellBuffer[1] = line == 1 ? src[1] : 0;
    colorCellBuffer[2] = line == 2 ? src[2] : 0;
    return colorCellBuffer;
  }

  return colorCells + (line*colorCount + sample)*3;
}

void ColorbarRGB::psHorz(ostream& str, Filter& filter, int width, int height)
{
  for (int jj=0; jj<height; jj++) {
    int line = lineFromHorz(height-1-jj, height);
    for (int ii=0; ii<width; ii++) {
      const unsigned char* pix = colorCell(line, sampleFromHorz(ii, width));
      psPixel(psColorSpace, str, filter, pix[0], pix[1], pix[2]);
    }
  }
}

void ColorbarRGB::psVert(ostream& str, Filter& filter, int width, int height)
{
  for (int jj=0; jj<height; jj++) {
    for (int ii=0; ii<width; ii++) {
      const unsigned char* pix =
	colorCell(lineFromVert(ii, width), sampleFromVert(jj, height));
      psPixel(psColorSpace, str, filter, pix[0], pix[1], pix[2]);
    }
  }
}

void ColorbarRGB::pdfHorz(unsigned char* data, int width, int height)
{
  for (int jj=0; jj<height; jj++) {
    int line = lineFromHorz(jj, height);
    for (int ii=0; ii<width; ii++) {
      unsigned char* pix = data + (jj*width + ii)*3;
      const unsigned char* clr = colorCell(line, sampleFromHorz(ii, width));
      pix[0] = clr[0];
      pix[1] = clr[1];
      pix[2] = clr[2];
    }
  }
}

void ColorbarRGB::pdfVert(unsigned char* data, int width, int height)
{
  for (int jj=0; jj<height; jj++) {
    for (int ii=0; ii<width; ii++) {
      unsigned char* pix = data + (jj*width + ii)*3;
      const unsigned char* clr =
	colorCell(lineFromVert(ii, width), sampleFromVert(height-1-jj, height));
      pix[0] = clr[0];
      pix[1] = clr[1];
      pix[2] = clr[2];
    }
  }
}

void ColorbarRGB::updateColorCells()
{
  int clrs = (((ColorbarBaseOptions*)options)->colors);
  if (clrs != colorCount || !colorCells) {
    colorCount = clrs;
    if (colorCells)
      delete [] colorCells;
    colorCells = NULL;
  }
  if (colorCells)
    delete [] colorCells;
  colorCells = new unsigned char[colorCount*(multiColorMode ? multiColorCount : 1)*3];

  if (multiColorMode) {
    for (int line=0; line<multiColorCount; line++) {
      XColor* xc = getXColor(multiColorName[line]);
      double r = double(xc->red)/65535.;
      double g = double(xc->green)/65535.;
      double b = double(xc->blue)/65535.;
      double h = 0;
      double l = 0;
      double s = 0;
      rgbToHls(r,g,b,&h,&l,&s);

      for (int ii=0, jj=colorCount-1; ii<colorCount; ii++, jj--) {
	int sample = invert ?
	  calcContrastBias(jj,multiColorBias[line],multiColorContrast[line]) :
	  calcContrastBias(ii,multiColorBias[line],multiColorContrast[line]);
	float frac = colorCount > 1 ? float(sample)/(colorCount-1) : 1;
	hlsToRgb(h,l*frac,s,
		 colorCells+(line*colorCount+ii)*3,
		 colorCells+(line*colorCount+ii)*3+1,
		 colorCells+(line*colorCount+ii)*3+2);
      }
    }
    return;
  }

  for (int i=0, j=colorCount-1; i<colorCount; i++, j--) {
    int idr = invert ? calcContrastBias(j,bias[0],contrast[0]) : 
      calcContrastBias(i,bias[0],contrast[0]);
    int idg = invert ? calcContrastBias(j,bias[1],contrast[1]) : 
      calcContrastBias(i,bias[1],contrast[1]);
    int idb = invert ? calcContrastBias(j,bias[2],contrast[2]) : 
      calcContrastBias(i,bias[2],contrast[2]);

    colorCells[i*3]   = (int)(256.*idr/colorCount);
    colorCells[i*3+1] = (int)(256.*idg/colorCount);
    colorCells[i*3+2] = (int)(256.*idb/colorCount);
  }
}

int ColorbarRGB::initColormap()
{
  colorCount = (((ColorbarBaseOptions*)options)->colors);
  colorCells = new unsigned char[colorCount*3];

  // needed to initialize colorCells
  reset();

  return TCL_OK;
}

// Commands

void ColorbarRGB::getColorbarCmd()
{
  if (multiColorMode) {
    Tcl_DString colors;
    Tcl_DString biases;
    Tcl_DString contrasts;
    Tcl_DStringInit(&colors);
    Tcl_DStringInit(&biases);
    Tcl_DStringInit(&contrasts);
    for (int ii=0; ii<multiColorCount; ii++)
      Tcl_DStringAppendElement(&colors, multiColorName[ii]);

    char buf[64];
    for (int ii=0; ii<multiColorCount; ii++) {
      snprintf(buf, sizeof(buf), "%g", multiColorBias[ii]);
      Tcl_DStringAppendElement(&biases, buf);
      snprintf(buf, sizeof(buf), "%g", multiColorContrast[ii]);
      Tcl_DStringAppendElement(&contrasts, buf);
    }

    ostringstream str;
    str << "multicolor " << multiColorCurrent+1 << ' ' << invert
	<< " {" << Tcl_DStringValue(&colors) << "}"
	<< " {" << Tcl_DStringValue(&biases) << "}"
	<< " {" << Tcl_DStringValue(&contrasts) << "}" << ends;
    Tcl_AppendResult(interp, str.str().c_str(), NULL);
    Tcl_DStringFree(&colors);
    Tcl_DStringFree(&biases);
    Tcl_DStringFree(&contrasts);
    return;
  }

  ostringstream str;
  str << "rgb ";
  for (int i=0; i<3; i++)
    str << bias[i] << ' ';
  for (int i=0; i<3; i++)
    str << contrast[i] << ' ';
  str << invert << ends;
  Tcl_AppendResult(interp, str.str().c_str(), NULL);
}

void ColorbarRGB::getColormapCmd()
{
  if (multiColorMode) {
    Tcl_DString colors;
    Tcl_DString biases;
    Tcl_DString contrasts;
    Tcl_DStringInit(&colors);
    Tcl_DStringInit(&biases);
    Tcl_DStringInit(&contrasts);
    for (int ii=0; ii<multiColorCount; ii++)
      Tcl_DStringAppendElement(&colors, multiColorName[ii]);

    char buf[64];
    for (int ii=0; ii<multiColorCount; ii++) {
      snprintf(buf, sizeof(buf), "%g", multiColorBias[ii]);
      Tcl_DStringAppendElement(&biases, buf);
      snprintf(buf, sizeof(buf), "%g", multiColorContrast[ii]);
      Tcl_DStringAppendElement(&contrasts, buf);
    }

    ostringstream str;
    str << "multicolor " << multiColorCurrent+1 << ' ' << invert
	<< " {" << Tcl_DStringValue(&colors) << "}"
	<< " {" << Tcl_DStringValue(&biases) << "}"
	<< " {" << Tcl_DStringValue(&contrasts) << "} "
	<< colorCount << ends;
    Tcl_AppendResult(interp, str.str().c_str(), NULL);
    Tcl_DStringFree(&colors);
    Tcl_DStringFree(&biases);
    Tcl_DStringFree(&contrasts);
    return;
  }

  // specific check cellsptr_ in use
  if (cellsptr_)
    if (cellsparentptr_)
      if (cellsparentptr_ != this)
	return;

  // use fixed so that the frame parser will not be confused with an int
  // as the first number
  cellsptr_ = colorCells;
  cellsparentptr_ =this;

  ostringstream str;
  str << "rgb " << setiosflags(ios::fixed);
  for (int i=0; i<3; i++)
    str << bias[i] << ' ';
  for (int i=0; i<3; i++)
    str << contrast[i] << ' ';
  str << invert << ' ';
  str << colorCount << ends;
  Tcl_AppendResult(interp, str.str().c_str(), NULL);
}

void ColorbarRGB::getColormapNameCmd(int id)
{
  Tcl_AppendResult(interp, "rgb", NULL);
}

void ColorbarRGB::getColormapFileNameCmd(int id)
{
  Tcl_AppendResult(interp, "rgb.rgb", NULL);
}

void ColorbarRGB::getColormapFileNameCmd(const char* str)
{
  Tcl_AppendResult(interp, "rgb.rgb", NULL);
}

void ColorbarRGB::getCurrentNameCmd()
{
  Tcl_AppendResult(interp, "rgb", NULL);
}

void ColorbarRGB::getCurrentIDCmd()
{
  Tcl_AppendResult(interp, "rgb", NULL);
}

void ColorbarRGB::getCurrentFileNameCmd()
{
  Tcl_AppendResult(interp, "rgb", NULL);
}

void ColorbarRGB::getRGBChannelCmd()
{
  switch (channel) {
  case 0:
    Tcl_AppendResult(interp, "red", NULL);
    return;
  case 1:
    Tcl_AppendResult(interp, "green", NULL);
    return;
  case 2:
    Tcl_AppendResult(interp, "blue", NULL);
    return;
  }
}

void ColorbarRGB::getTypeCmd()
{
  Tcl_AppendResult(interp, "rgb", NULL);
}

void ColorbarRGB::setRGBChannelCmd(const char* c)
{
  if (!strncmp(c,"red",3))
    channel = 0;
  else if (!strncmp(c,"gre",3))
    channel = 1;
  else if (!strncmp(c,"blu",3))
    channel = 2;
  else
    channel = 0;
}

void ColorbarRGB::adjustCmd(float c, float b)
{
  if (multiColorMode) {
    multiColorContrast[multiColorCurrent] = c;
    multiColorBias[multiColorCurrent] = b;
    contrast[0] = c;
    bias[0] = b;
    updateColorCells();
    updateColors();
    return;
  }

  ColorbarA::adjustCmd(c,b);
}

void ColorbarRGB::setColorbarCmd(float b1, float b2, float b3, 
				 float c1, float c2, float c3, int i)
{
  multiColorMode = 0;
  clearMultiColorNames();
  ColorbarA::setColorbarCmd(b1,b2,b3,c1,c2,c3,i);
}

void ColorbarRGB::setMultiColorCmd(int i, const char* colors)
{
  Tcl_Size argc = 0;
  const char** argv = NULL;
  if (Tcl_SplitList(interp, colors, &argc, &argv) != TCL_OK)
    return;

  clearMultiColorNames();
  multiColorCount = argc > 0 ? argc : 1;
  multiColorName = new char*[multiColorCount];
  multiColorBias = new float[multiColorCount];
  multiColorContrast = new float[multiColorCount];

  if (argc > 0) {
    for (int ii=0; ii<argc; ii++) {
      multiColorName[ii] = new char[strlen(argv[ii])+1];
      strcpy(multiColorName[ii], argv[ii]);
    }
  }
  else {
    multiColorName[0] = new char[6];
    strcpy(multiColorName[0], "black");
  }

  Tcl_Free((char*)argv);
  multiColorMode = 1;
  multiColorCurrent = 0;
  for (int ii=0; ii<multiColorCount; ii++) {
    multiColorBias[ii] = .5;
    multiColorContrast[ii] = 1.0;
  }
  invert = i;
  bias[0] = multiColorBias[multiColorCurrent];
  contrast[0] = multiColorContrast[multiColorCurrent];
  updateColorCells();
  updateColors();
}

void ColorbarRGB::setMultiColorCmd(float b, float c, int i,
				   const char* colors)
{
  setMultiColorCmd(1, i, colors, "", "");
  for (int ii=0; ii<multiColorCount; ii++) {
    multiColorBias[ii] = b;
    multiColorContrast[ii] = c;
  }
  bias[0] = multiColorBias[multiColorCurrent];
  contrast[0] = multiColorContrast[multiColorCurrent];
  updateColorCells();
  updateColors();
}

void ColorbarRGB::setMultiColorCmd(int current, int i, const char* colors,
				   const char* biases, const char* contrasts)
{
  Tcl_Size argc = 0;
  const char** argv = NULL;
  if (Tcl_SplitList(interp, colors, &argc, &argv) != TCL_OK)
    return;

  clearMultiColorNames();
  multiColorCount = argc > 0 ? argc : 1;
  multiColorName = new char*[multiColorCount];
  multiColorBias = new float[multiColorCount];
  multiColorContrast = new float[multiColorCount];

  if (argc > 0) {
    for (int ii=0; ii<argc; ii++) {
      multiColorName[ii] = new char[strlen(argv[ii])+1];
      strcpy(multiColorName[ii], argv[ii]);
    }
  }
  else {
    multiColorName[0] = new char[6];
    strcpy(multiColorName[0], "black");
  }

  Tcl_Free((char*)argv);
  multiColorMode = 1;
  for (int ii=0; ii<multiColorCount; ii++) {
    multiColorBias[ii] = .5;
    multiColorContrast[ii] = 1.0;
  }

  argc = 0;
  argv = NULL;
  if (Tcl_SplitList(interp, biases, &argc, &argv) == TCL_OK) {
    Tcl_Size limit = argc < multiColorCount ? argc : multiColorCount;
    for (int ii=0; ii<limit; ii++)
      multiColorBias[ii] = atof(argv[ii]);
    Tcl_Free((char*)argv);
  }

  argc = 0;
  argv = NULL;
  if (Tcl_SplitList(interp, contrasts, &argc, &argv) == TCL_OK) {
    Tcl_Size limit = argc < multiColorCount ? argc : multiColorCount;
    for (int ii=0; ii<limit; ii++)
      multiColorContrast[ii] = atof(argv[ii]);
    Tcl_Free((char*)argv);
  }

  if (current < 1)
    current = 1;
  if (current > multiColorCount)
    current = multiColorCount;
  multiColorCurrent = current-1;
  invert = i;
  bias[0] = multiColorBias[multiColorCurrent];
  contrast[0] = multiColorContrast[multiColorCurrent];
  updateColorCells();
  updateColors();
}

#ifdef MAC_OSX_TK
void ColorbarRGB::macosx(float scale, int width, int height, 
			 const Vector& v, const Vector& s)
{}
#endif

#ifdef __WIN32
#include <win32lib.h>

void ColorbarRGB::win32(float scale, int width, int height, 
			const Vector& v, const Vector& s)
{
  if (!colorCells)
    return;

  // destination (width must be aligned on 4-byte DWORD boundary)
  int jjwidth=(((width+3)/4)*4);

  // extra alignment padding which we have to skip over for each row
  int jjpad=(jjwidth-width)*3;

  unsigned char* dst = new unsigned char[jjwidth*height*3];
  if (!dst)
    return;
  memset(dst, '\0', jjwidth*height*3);

  unsigned char* dptr = dst;

  if (!((ColorbarBaseOptions*)options)->orientation) {
    // blue
    for (int jj=0; jj<(int)(height/3.); jj++) {
      for (int ii=0; ii<width; ii++) {
	*dptr++ = colorCells[(int)(double(ii)/width*colorCount)*3];
	*dptr++ = 0;
	*dptr++ = 0;
      }
      dptr += jjpad;
    }

    // green
    for (int jj=(int)(height/3.); jj<(int)(height*2/3.); jj++) {
      for (int ii=0; ii<width; ii++) {
	*dptr++ = 0;
	*dptr++ = colorCells[(int)(double(ii)/width*colorCount)*3+1];
	*dptr++ = 0;
      }
      dptr += jjpad;
    }

    // red
    for (int jj=(int)(height*2/3.); jj<height; jj++) {
      for (int ii=0; ii<width; ii++) {
	*dptr++ = 0;
	*dptr++ = 0;
	*dptr++ = colorCells[(int)(double(ii)/width*colorCount)*3+2];
      }
      dptr += jjpad;
    }
  }
  else {
    for (int jj=0; jj<height; jj++) {
      int kk = (int)(double(jj)/height*colorCount)*3;

      // blue
      for (int ii=0; ii<(int)(width/3.); ii++) {
	*dptr++ = colorCells[kk];
	*dptr++ = 0;
	*dptr++ = 0;
      }
      dptr += jjpad;

      // green
      for (int ii=(int)(width/3.); ii<(int)(width*2/3.); ii++) {
	*dptr++ = 0;
	*dptr++ = colorCells[kk+1];
	*dptr++ = 0;
      }
      dptr += jjpad;

      // red
      for (int ii=(int)(width*2/3.); ii<width; ii++) {
	*dptr++ = 0;
	*dptr++ = 0;
	*dptr++ = colorCells[kk+2];
      }
      dptr += jjpad;
    }
  }


  win32Clip(v,s);
  win32BitmapCreate(dst, jjwidth, height, v, s);
  win32Clip(Vector(INT_MIN,INT_MIN),Vector(INT_MAX,INT_MAX));

  if (dst)
    delete [] dst;
}
#endif
