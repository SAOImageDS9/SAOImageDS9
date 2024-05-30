// Copyright (C) 1999-2024
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "framea.h"

FrameA::FrameA(Tcl_Interp* i, Tk_Canvas c, Tk_Item* item)
: FrameBase(i,c,item)
{
  rgbSystem = Coord::WCS;

  channel = 0;

  context = new Context[3];
  context[0].parent(this);
  context[1].parent(this);
  context[2].parent(this);

  for (int ii=0; ii<3; ii++) {
    view[ii] = 1;
    bias[ii] = .5;
    contrast[ii] = 1.0;
  }

  currentContext = &context[channel];
  keyContext = &context[channel];
  keyContextSet =0;
}

FrameA::~FrameA()
{
  if (context)
    delete [] context;
}

void FrameA::setChannelCmd(int cc)
{
  channel = cc;

  currentContext = &context[channel];

  // execute any update callbacks
  updateCBMarkers(&userMarkers);
  updateCBMarkers(&catalogMarkers);
  updateCBMarkers(&footprintMarkers);

 // always update
  update(BASE);
}

