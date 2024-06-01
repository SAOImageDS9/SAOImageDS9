// Copyright (C) 1999-2024
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __framet_h__
#define __framet_h__

#include "framea.h"
#include "colorscalet.h"
#include "frscale.h"

// Frame

class FrameT : public FrameA {
protected:
  ColorScaleT* colorScale[5];    // current color scale

private:
  void updateColorScale(int jj, FrScale::ColorScaleType type);

protected:
  void updateColorScale();
  void updateColorCells(int cnt);
  int validColorScale() 
    {return colorScale[0] && colorScale[1] && colorScale[2]
	&& colorScale[3] && colorScale[4];}
  
public:
  FrameT(Tcl_Interp*, Tk_Canvas, Tk_Item*);
  virtual ~FrameT();
};

#endif
