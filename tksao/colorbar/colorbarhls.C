// Copyright (C) 1999-2021
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "colorbarhls.h"
#include "ps.h"
#include "psutil.h"

ColorbarHLS::ColorbarHLS(Tcl_Interp* i,Tk_Canvas c,Tk_Item* item) 
  : ColorbarT(i,c,item)
{
  cmap =NULL;
}

ColorbarHLS::~ColorbarHLS()
{
  if (cmap)
    delete cmap;
}

void ColorbarHLS::psHorz(ostream& str, Filter& filter, int width, int height)
{
}

void ColorbarHLS::psVert(ostream& str, Filter& filter, int width, int height)
{
}

void ColorbarHLS::loadDefaultCmaps()
{
  cmap = new RainbowColorMap(this);
}

void ColorbarHLS::updateColorCells()
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
  //  for(int i=0; i<colorCount; i++) {
  for(int i=0, j=colorCount-1; i<colorCount; i++, j--) {
    int idh = invert ? calcContrastBias(j,bias[0],contrast[0]) : 
      calcContrastBias(i,bias[0],contrast[0]);
    int idl = invert ? calcContrastBias(j,bias[1],contrast[1]) : 
      calcContrastBias(i,bias[1],contrast[1]);
    int ids = invert ? calcContrastBias(j,bias[2],contrast[2]) : 
      calcContrastBias(i,bias[2],contrast[2]);

    colorCells[i*3]   = (int)(256.*idh/colorCount);
    colorCells[i*3+1] = (int)(256.*idh/colorCount);
    colorCells[i*3+2] = (int)(256.*idl/colorCount);
    colorCells[i*3+3] = (int)(256.*ids/colorCount);
    colorCells[i*3+4] = (int)(256.*ids/colorCount);
  }
}

int ColorbarHLS::initColormap()
{
  colorCount = (((ColorbarBaseOptions*)options)->colors);
  colorCells = new unsigned char[colorCount*5];

  // needed to initialize colorCells
  reset();

  return TCL_OK;
}

// Commands

void ColorbarHLS::getColorbarCmd()
{
  ostringstream str;
  str << "hls ";
  for (int i=0; i<3; i++)
    str << bias[i] << ' ';
  for (int i=0; i<3; i++)
    str << contrast[i] << ' ';
  str << invert << ends;
  Tcl_AppendResult(interp, str.str().c_str(), NULL);
}

void ColorbarHLS::getColormapCmd()
{
  // use fixed so that the frame parser will not be confused with an int
  // as the first number
  cellsptr_ = colorCells;
  cellsparentptr_ =this;

  ostringstream str;
  str << "hls " << setiosflags(ios::fixed);
  for (int i=0; i<3; i++)
    str << bias[i] << ' ';
  for (int i=0; i<3; i++)
    str << contrast[i] << ' ';
  str << invert << ' ';
  str << colorCount << ends;
  Tcl_AppendResult(interp, str.str().c_str(), NULL);
}

void ColorbarHLS::getColormapNameCmd(int id)
{
  Tcl_AppendResult(interp, "hls", NULL);
}

void ColorbarHLS::getColormapFileNameCmd(int id)
{
  Tcl_AppendResult(interp, "hls.hls", NULL);
}

void ColorbarHLS::getColormapFileNameCmd(const char* str)
{
  Tcl_AppendResult(interp, "hls.hls", NULL);
}

void ColorbarHLS::getCurrentNameCmd()
{
  Tcl_AppendResult(interp, "hls", NULL);
}

void ColorbarHLS::getCurrentIDCmd()
{
  Tcl_AppendResult(interp, "hls", NULL);
}

void ColorbarHLS::getCurrentFileNameCmd()
{
  Tcl_AppendResult(interp, "hls", NULL);
}

void ColorbarHLS::getHLSChannelCmd()
{
  switch (channel) {
  case 0:
    Tcl_AppendResult(interp, "hue", NULL);
    return;
  case 1:
    Tcl_AppendResult(interp, "lightness", NULL);
    return;
  case 2:
    Tcl_AppendResult(interp, "saturation", NULL);
    return;
  }
}

void ColorbarHLS::getTypeCmd()
{
  Tcl_AppendResult(interp, "hls", NULL);
}

void ColorbarHLS::setHLSChannelCmd(const char* c)
{
  if (!strncmp(c,"hue",3))
    channel = 0;
  else if (!strncmp(c,"lig",3))
    channel = 1;
  else if (!strncmp(c,"sat",3))
    channel = 2;
  else
    channel = 0;
}

#ifdef MAC_OSX_TK

void ColorbarHLS::macosx(float scale, int width, int height, 
			 const Vector& v, const Vector& s)
{}

#endif

#ifdef __WIN32
#include <win32lib.h>

void ColorbarHLS::win32(float scale, int width, int height, 
			const Vector& v, const Vector& s)
{}

#endif
