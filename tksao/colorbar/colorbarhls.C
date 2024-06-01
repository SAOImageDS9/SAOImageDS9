// Copyright (C) 1999-2021
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "colorbarhls.h"

ColorbarHLS::ColorbarHLS(Tcl_Interp* i,Tk_Canvas c,Tk_Item* item) 
  : ColorbarT(i,c,item)
{}

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
