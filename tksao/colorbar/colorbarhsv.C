// Copyright (C) 1999-2024
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "colorbarhsv.h"
#include "ps.h"
#include "psutil.h"

ColorbarHSV::ColorbarHSV(Tcl_Interp* i,Tk_Canvas c,Tk_Item* item) 
  : ColorbarT(i,c,item)
{}

void ColorbarHSV::psHorz(ostream& str, Filter& filter, int width, int height)
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

void ColorbarHSV::psVert(ostream& str, Filter& filter, int width, int height)
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

// Commands

void ColorbarHSV::getColorbarCmd()
{
  ostringstream str;
  str << "hsv ";
  for (int i=0; i<3; i++)
    str << bias[i] << ' ';
  for (int i=0; i<3; i++)
    str << contrast[i] << ' ';
  str << invert << ends;
  Tcl_AppendResult(interp, str.str().c_str(), NULL);
}

void ColorbarHSV::getColormapCmd()
{
  // use fixed so that the frame parser will not be confused with an int
  // as the first number
  cellsptr_ = colorCells;
  cellsparentptr_ =this;

  ostringstream str;
  str << "hsv " << setiosflags(ios::fixed);
  for (int i=0; i<3; i++)
    str << bias[i] << ' ';
  for (int i=0; i<3; i++)
    str << contrast[i] << ' ';
  str << invert << ' ';
  str << colorCount << ends;
  Tcl_AppendResult(interp, str.str().c_str(), NULL);
}

void ColorbarHSV::getColormapNameCmd(int id)
{
  Tcl_AppendResult(interp, "hsv", NULL);
}

void ColorbarHSV::getColormapFileNameCmd(int id)
{
  Tcl_AppendResult(interp, "hsv.hsv", NULL);
}

void ColorbarHSV::getColormapFileNameCmd(const char* str)
{
  Tcl_AppendResult(interp, "hsv.hsv", NULL);
}

void ColorbarHSV::getCurrentNameCmd()
{
  Tcl_AppendResult(interp, "hsv", NULL);
}

void ColorbarHSV::getCurrentIDCmd()
{
  Tcl_AppendResult(interp, "hsv", NULL);
}

void ColorbarHSV::getCurrentFileNameCmd()
{
  Tcl_AppendResult(interp, "hsv", NULL);
}

void ColorbarHSV::getHSVChannelCmd()
{
  switch (channel) {
  case 0:
    Tcl_AppendResult(interp, "hue", NULL);
    return;
  case 1:
    Tcl_AppendResult(interp, "saturation", NULL);
    return;
  case 2:
    Tcl_AppendResult(interp, "value", NULL);
    return;
  }
}

void ColorbarHSV::getTypeCmd()
{
  Tcl_AppendResult(interp, "hsv", NULL);
}

void ColorbarHSV::setHSVChannelCmd(const char* c)
{
  if (!strncmp(c,"hue",3))
    channel = 0;
  else if (!strncmp(c,"sat",3))
    channel = 1;
  else if (!strncmp(c,"val",3))
    channel = 2;
  else
    channel = 0;
}

#ifdef MAC_OSX_TK

void ColorbarHSV::macosx(float scale, int width, int height, 
			 const Vector& v, const Vector& s)
{}

#endif

#ifdef __WIN32
#include <win32lib.h>

void ColorbarHSV::win32(float scale, int width, int height, 
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
