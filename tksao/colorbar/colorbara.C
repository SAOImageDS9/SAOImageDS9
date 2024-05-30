// Copyright (C) 1999-2024
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "colorbart.h"

ColorbarA::ColorbarA(Tcl_Interp* i,Tk_Canvas c,Tk_Item* item) 
  : ColorbarBase(i,c,item)
{
  for (int i=0; i<3; i++) {
    bias[i] = .5;
    contrast[i] = 1.0;
  }
}

void ColorbarA::reset()
{
  for (int i=0; i<3; i++) {
    bias[i] = .5;
    contrast[i] = 1.0;
  }
  invert = 0;

  updateColors();
}

// Commands

void ColorbarA::adjustCmd(float c, float b)
{
  contrast[channel] = c;
  bias[channel] = b;

  updateColors();
}

void ColorbarA::getBiasCmd()
{
  ostringstream str;
  str << bias[channel] << ends;
  Tcl_AppendResult(interp, str.str().c_str(), NULL);
}

void ColorbarA::getContrastCmd()
{
  ostringstream str;
  str << contrast[channel] << ends;
  Tcl_AppendResult(interp, str.str().c_str(), NULL);
}

void ColorbarA::setColorbarCmd(float b1, float b2, float b3, 
			       float c1, float c2, float c3, int i)

{
  bias[0] = b1;
  bias[1] = b2;
  bias[2] = b3;
  
  contrast[0] = c1;
  contrast[1] = c2;
  contrast[2] = c3;

  invert = i;
  updateColors();
}





