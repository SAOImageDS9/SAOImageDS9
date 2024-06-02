// Copyright (C) 1999-2024
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "framehls.h"

// Frame Member Functions

FrameHLS::FrameHLS(Tcl_Interp* i, Tk_Canvas c, Tk_Item* item)
: FrameT(i,c,item) {}

FrameHLS::~FrameHLS() {}

void FrameHLS::getColorbarCmd()
{
  ostringstream str;

  str << "hls " << fixed;
  for (int ii=0; ii<3; ii++)
    str << bias[ii] << ' ';
  for (int ii=0; ii<3; ii++)
    str << contrast[ii] << ' ';
  str << invert << ' ' << ends;

  Tcl_AppendResult(interp, str.str().c_str(), NULL);
}

void FrameHLS::getTypeCmd()
{
  Tcl_AppendResult(interp, "hls", NULL);
}

void FrameHLS::getHLSChannelCmd()
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

void FrameHLS::setHLSChannelCmd(const char* c)
{
  if (!strncmp(c,"hue",3))
    channel = 0;
  else if (!strncmp(c,"lig",3))
    channel = 1;
  else if (!strncmp(c,"sat",3))
    channel = 2;
  else
    channel = 0;

  setChannel();
}
