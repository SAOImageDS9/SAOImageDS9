// Copyright (C) 1999-2024
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __framet_h__
#define __framet_h__

#include "framea.h"
#include "colorscale.h"
#include "colorscalet.h"
#include "frscale.h"

// Frame

class FrameT : public FrameA {
protected:
  unsigned char* colorCellsT[2];

  ColorScale* colorScale;
  ColorScaleT* colorScaleT[2];

protected:
  void updateColorScale();
  void updateColorCells(int cnt);
  int validColorScale() {return colorScale && colorScaleT[0] && colorScaleT[1];}
  
public:
  FrameT(Tcl_Interp*, Tk_Canvas, Tk_Item*);
  virtual ~FrameT();
};

#endif
