// Copyright (C) 1999-2024
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "colorbarhsv.h"

ColorbarHSV::ColorbarHSV(Tcl_Interp* i,Tk_Canvas c,Tk_Item* item) 
  : ColorbarT(i,c,item)
{}

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

