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
