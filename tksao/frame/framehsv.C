// Copyright (C) 1999-2024
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "framehsv.h"

// Frame Member Functions

FrameHSV::FrameHSV(Tcl_Interp* i, Tk_Canvas c, Tk_Item* item)
  : FrameT(i,c,item)
{
}

FrameHSV::~FrameHSV()
{
}

void FrameHSV::getTypeCmd()
{
  Tcl_AppendResult(interp, "hsv", NULL);
}

void FrameHSV::getHSVChannelCmd()
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
