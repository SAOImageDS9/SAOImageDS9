// Copyright (C) 1999-2024
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __framea_h__
#define __framea_h__

#include "framebase.h"
#include "context.h"

// Frame

class FrameA : public FrameBase {
protected:
  Coord::CoordSystem rgbSystem;        // alignment coordinate system
  Matrix rgb[3];                // rgb matrix

  int channel;                  // current channel

  int view[3];                  // visible channels
  float bias[3];                // current colormap bias
  float contrast[3];            // current colormap contrast
  
  int keyContextSet;

protected:
  void alignWCS();
  void alignWCS(Coord::CoordSystem, Coord::SkyFrame);
  void alignWCS(FitsImage*, Coord::CoordSystem);

  int doRender();

  BBox imageBBox(FrScale::SecMode);

  void getSystem();
  void getView();

  void pushMatrices();
  void pushMagnifierMatrices();
  void pushPannerMatrices();
  void pushPSMatrices(float, int, int);

  void reset();

  void setBinCursor();
  void setChannel();
  void setSystem(Coord::CoordSystem);
  void setView(int, int, int);

  void unloadFits();
  void unloadAllFits();
  void updateRGBMatrices();

public:
  FrameA(Tcl_Interp*, Tk_Canvas, Tk_Item*);
  virtual ~FrameA();

  void colormapCmd(float, float, float, float, float, float, int, int);
};

#endif
