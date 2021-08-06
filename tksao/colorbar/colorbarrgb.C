// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "util.h"
#include "colorbarrgb.h"
#include "ps.h"
#include "psutil.h"

ColorbarRGB::ColorbarRGB(Tcl_Interp* i,Tk_Canvas c,Tk_Item* item) 
  : ColorbarBase(i,c,item)
{
  channel = 0;

  for (int i=0; i<3; i++) {
    bias[i] = .5;
    contrast[i] = 1.0;
  }
}

int ColorbarRGB::calcContrastBias(int i, float bb, float cc)
{
  // if default (contrast = 1.0 && bias = .5) return
  if (fabs(bb - 0.5) < 0.0001 && fabs(cc - 1.0) < 0.0001)
    return i;
   
  // map i to range of 0 to 1.0
  // shift by bias (if invert, bias = 1-bias)
  // multiply by contrast
  // shift to center of region
  // expand back to number of dynamic colors
  float b = invert ? 1-bb : bb;
  int r = (int)(((((float)i / colorCount) - b) * cc + .5 ) * colorCount);
 
  // clip to bounds if out of range
 
  if (r < 0)
    return 0;
  else if (r >= colorCount)
    return colorCount-1;
  else
    return r;
}

void ColorbarRGB::psHorz(ostream& str, Filter& filter, int width, int height)
{
  // red
  for (int jj=0; jj<(int)(height/3.); jj++) {
    for (int ii=0; ii<width; ii++) {
      unsigned char red = colorCells[(int)(double(ii)/width*colorCount)*3+2];
      unsigned char green = 0;
      unsigned char blue = 0;

      switch (psColorSpace) {
      case BW:
      case GRAY:
	filter << RGB2Gray(red, green, blue);
	break;
      case RGB:
	filter << red << green << blue;
	break;
      case CMYK:
	{
	  unsigned char cyan, magenta, yellow, black;
	  RGB2CMYK(red, green, blue, &cyan, &magenta, &yellow, &black);
	  filter << cyan << magenta << yellow << black;
	}
	break;
      }
      str << filter;
    }
  }

  // green
  for (int jj=(int)(height/3.); jj<(int)(height*2/3.); jj++) {
    for (int ii=0; ii<width; ii++) {
      unsigned char red = 0;
      unsigned char green = colorCells[(int)(double(ii)/width*colorCount)*3+1];
      unsigned char blue = 0;

      switch (psColorSpace) {
      case BW:
      case GRAY:
	filter << RGB2Gray(red, green, blue);
	break;
      case RGB:
	filter << red << green << blue;
	break;
      case CMYK:
	{
	  unsigned char cyan, magenta, yellow, black;
	  RGB2CMYK(red, green, blue, &cyan, &magenta, &yellow, &black);
	  filter << cyan << magenta << yellow << black;
	}
	break;
      }
      str << filter;
    }
  }

  // blue
  for (int jj=(int)(height*2/3.); jj<height; jj++) {
    for (int ii=0; ii<width; ii++) {
      unsigned char red = 0;
      unsigned char green = 0;
      unsigned char blue = colorCells[(int)(double(ii)/width*colorCount)*3];

      switch (psColorSpace) {
      case BW:
      case GRAY:
	filter << RGB2Gray(red, green, blue);
	break;
      case RGB:
	filter << red << green << blue;
	break;
      case CMYK:
	{
	  unsigned char cyan, magenta, yellow, black;
	  RGB2CMYK(red, green, blue, &cyan, &magenta, &yellow, &black);
	  filter << cyan << magenta << yellow << black;
	}
	break;
      }
      str << filter;
    }
  }
}

void ColorbarRGB::psVert(ostream& str, Filter& filter, int width, int height)
{
  for (int jj=0; jj<height; jj++) {
    int kk = (int)(double(jj)/height*colorCount)*3;
    unsigned char red = colorCells[kk+2];
    unsigned char green = colorCells[kk+1];
    unsigned char blue = colorCells[kk];

    switch (psColorSpace) {
    case BW:
    case GRAY:
      for (int ii=0; ii<(int)(width/3.); ii++)
	filter << RGB2Gray(red, 0, 0);
      for (int ii=(int)(width/3.); ii<(int)(width*2/3.); ii++)
	filter << RGB2Gray(0, green, 0);
      for (int ii=(int)(width*2/3.); ii<width; ii++)
	filter << RGB2Gray(0, 0, blue);
      break;
    case RGB:
      for (int ii=0; ii<(int)(width/3.); ii++)
	filter << red << 0 << 0;
      for (int ii=(int)(width/3.); ii<(int)(width*2/3.); ii++)
	filter << 0 << green << 0;
      for (int ii=(int)(width*2/3.); ii<width; ii++)
	filter << 0 << 0 << blue;
      break;
    case CMYK:
	{
	  unsigned char cyan, magenta, yellow, black;
	  for (int ii=0; ii<(int)(width/3.); ii++) {
	    RGB2CMYK(red, 0, 0, &cyan, &magenta, &yellow, &black);
	    filter << cyan << magenta << yellow << black;
	  }
	  for (int ii=(int)(width/3.); ii<(int)(width*2/3.); ii++) {
	    RGB2CMYK(0, green, 0, &cyan, &magenta, &yellow, &black);
	    filter << cyan << magenta << yellow << black;
	  }
	  for (int ii=(int)(width*2/3.); ii<width; ii++) {
	    RGB2CMYK(0, 0, blue, &cyan, &magenta, &yellow, &black);
	    filter << cyan << magenta << yellow << black;
	  }
	}
	break;
    }
    str << filter;
  }
}

void ColorbarRGB::reset()
{
  for (int i=0; i<3; i++) {
    bias[i] = .5;
    contrast[i] = 1.0;
  }
  invert = 0;

  updateColors();
}

void ColorbarRGB::updateColorCells()
{
  int clrs = (((ColorbarBaseOptions*)options)->colors);
  if (clrs != colorCount) {
    colorCount = clrs;
    if (colorCells)
      delete [] colorCells;
    colorCells = new unsigned char[colorCount*3];
  }

  // fill rgb table
  // note: its filled bgr to match XImage
  //  for(int i=0; i<colorCount; i++) {
  for(int i=0, j=colorCount-1; i<colorCount; i++, j--) {
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

// Commands

void ColorbarRGB::adjustCmd(float c, float b)
{
  contrast[channel] = c;
  bias[channel] = b;

  updateColors();
}

void ColorbarRGB::getBiasCmd()
{
  ostringstream str;
  str << bias[channel] << ends;
  Tcl_AppendResult(interp, str.str().c_str(), NULL);
}

void ColorbarRGB::getColorbarCmd()
{
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
  // use fixed so that the frame parser will not be confused with an int
  // as the first number
  ostringstream str;
  str << "rgb " << setiosflags(ios::fixed);
  for (int i=0; i<3; i++)
    str << bias[i] << ' ';
  for (int i=0; i<3; i++)
    str << contrast[i] << ' ';
  str << invert << ' ';
  str << (unsigned short*)colorCells << ' ' << colorCount << ends;
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

void ColorbarRGB::getContrastCmd()
{
  ostringstream str;
  str << contrast[channel] << ends;
  Tcl_AppendResult(interp, str.str().c_str(), NULL);
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

void ColorbarRGB::setColorbarCmd(float rb, float gb, float bb, 
				 float rc, float gc, float bc, int i)

{
  bias[0] = rb;
  bias[1] = gb;
  bias[2] = bb;
  
  contrast[0] = rc;
  contrast[1] = gc;
  contrast[2] = bc;

  invert = i;
  updateColors();
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

#ifdef MAC_OSX_TK

void ColorbarRGB::macosx(float scale, int width, int height, 
			 const Vector& v, const Vector& s)
{
  /*
  if (!colorCells)
    return;

  // destination
  unsigned char* dst = new unsigned char[width*height*4];
  unsigned char* dptr = dst;

  if (!((ColorbarBaseOptions*)options)->orientation) {
    // blue
    for (int jj=0; jj<(int)(height/3.); jj++)
      for (int ii=0; ii<width; ii++) {
	*dptr++ = 0;
	*dptr++ = 0;
	*dptr++ = colorCells[(int)(double(ii)/width*colorCount)*3];
	*dptr++ = 0;
      }

    // green
    for (int jj=(int)(height/3.); jj<(int)(height*2/3.); jj++)
      for (int ii=0; ii<width; ii++) {
	*dptr++ = 0;
	*dptr++ = colorCells[(int)(double(ii)/width*colorCount)*3+1];
	*dptr++ = 0;
	*dptr++ = 0;
      }

    // red
    for (int jj=(int)(height*2/3.); jj<height; jj++) 
      for (int ii=0; ii<width; ii++) {
	*dptr++ = colorCells[(int)(double(ii)/width*colorCount)*3+2];
	*dptr++ = 0;
	*dptr++ = 0;
	*dptr++ = 0;
      }
  }
  else {
    for (int jj=0; jj<height; jj++) {
      int kk = (int)(double(jj)/height*colorCount)*3;

      // blue
      for (int ii=0; ii<(int)(width/3.); ii++) {
	*dptr++ = 0;
	*dptr++ = 0;
	*dptr++ = colorCells[kk];
	*dptr++ = 0;
      }

      // green
      for (int ii=(int)(width/3.); ii<(int)(width*2/3.); ii++) {
	*dptr++ = 0;
	*dptr++ = colorCells[kk+1];
	*dptr++ = 0;
	*dptr++ = 0;
      }

      // red
      for (int ii=(int)(width*2/3.); ii<width; ii++) {
	*dptr++ = colorCells[kk+2];
	*dptr++ = 0;
	*dptr++ = 0;
	*dptr++ = 0;
      }
    }
  }

  macosxBitmapCreate(dst, width, height, v, s);

  if (dst)
    delete [] dst;
  */
}
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
