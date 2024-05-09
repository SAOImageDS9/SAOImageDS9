// Copyright (C) 1999-2024
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "colorbarhsv.h"
#include "ps.h"
#include "psutil.h"

ColorbarHSV::ColorbarHSV(Tcl_Interp* i,Tk_Canvas c,Tk_Item* item) 
  : ColorbarT(i,c,item)
{
  cmap =NULL;
}

ColorbarHSV::~ColorbarHSV()
{
  if (cmap)
    delete cmap;
}

void ColorbarHSV::psHorz(ostream& str, Filter& filter, int width, int height)
{
}

void ColorbarHSV::psVert(ostream& str, Filter& filter, int width, int height)
{
}

void ColorbarHSV::loadDefaultCmaps()
{
  cmap = new RainbowColorMap(this);
}

void ColorbarHSV::updateColorCells()
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
    int idh = invert ? calcContrastBias(j,bias[0],contrast[0]) : 
      calcContrastBias(i,bias[0],contrast[0]);
    int ids = invert ? calcContrastBias(j,bias[1],contrast[1]) : 
      calcContrastBias(i,bias[1],contrast[1]);
    int idv = invert ? calcContrastBias(j,bias[2],contrast[2]) : 
      calcContrastBias(i,bias[2],contrast[2]);

    colorCells[i*3]   = (int)(256.*idh/colorCount);
    colorCells[i*3+1] = (int)(256.*idh/colorCount);
    colorCells[i*3+2] = (int)(256.*idh/colorCount);
    colorCells[i*3+3] = (int)(256.*ids/colorCount);
    colorCells[i*3+4] = (int)(256.*idv/colorCount);
  }
}

int ColorbarHSV::initColormap()
{
  colorCount = (((ColorbarBaseOptions*)options)->colors);
  colorCells = new unsigned char[colorCount*5];

  // needed to initialize colorCells
  reset();

  return TCL_OK;
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
{}

#endif
