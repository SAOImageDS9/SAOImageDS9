// Copyright (C) 1999-2024
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "framehls.h"

// Frame Member Functions

FrameHLS::FrameHLS(Tcl_Interp* i, Tk_Canvas c, Tk_Item* item)
  : FrameRGB(i,c,item)
{
}

FrameHLS::~FrameHLS()
{
}

void FrameHLS::getTypeCmd()
{
  Tcl_AppendResult(interp, "hls", NULL);
}
