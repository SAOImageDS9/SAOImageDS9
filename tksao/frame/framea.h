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

  void loadDone(int);
  void loadRGBCube(MemType, const char*, FitsImage*);
  void loadRGBCubeFinish();
  void loadRGBImage(MemType, const char*, FitsImage*);

public:
  FrameA(Tcl_Interp*, Tk_Canvas, Tk_Item*);
  virtual ~FrameA();

  void colormapCmd(float, float, float, float, float, float, int, int);
  void getInfoCmd(const Vector&, Coord::InternalSystem, char*,
		  Base::FileNameType);

  void loadPhotoCmd(const char*, const char*);
  void loadSlicePhotoCmd(const char*, const char*) {}

  void loadRGBCubeAllocCmd(const char*, const char*);
  void loadRGBCubeAllocGZCmd(const char*, const char*);
  void loadRGBCubeChannelCmd(const char*, const char*);
  void loadRGBCubeMMapCmd(const char*);
  void loadRGBCubeSMMapCmd(const char*, const char*);
  void loadRGBCubeMMapIncrCmd(const char*);
  void loadRGBCubeShareCmd(ShmType, int, const char*);
  void loadRGBCubeSShareCmd(ShmType, int, int, const char*);
  void loadRGBCubeSocketCmd(int, const char*);
  void loadRGBCubeSocketGZCmd(int, const char*);
  void loadRGBCubeVarCmd(const char*, const char*);

  void loadRGBImageAllocCmd(const char*, const char*);
  void loadRGBImageAllocGZCmd(const char*, const char*);
  void loadRGBImageChannelCmd(const char*, const char*);
  void loadRGBImageMMapCmd(const char*);
  void loadRGBImageMMapIncrCmd(const char*);
  void loadRGBImageShareCmd(ShmType, int, const char*);
  void loadRGBImageSocketCmd(int, const char*);
  void loadRGBImageSocketGZCmd(int, const char*);
  void loadRGBImageVarCmd(const char*, const char*);

  void loadRGBArrayCubeAllocCmd(const char*, const char*);
  void loadRGBArrayCubeAllocGZCmd(const char*, const char*);
  void loadRGBArrayCubeChannelCmd(const char*, const char*);
  void loadRGBArrayCubeMMapCmd(const char*);
  void loadRGBArrayCubeMMapIncrCmd(const char*);
  void loadRGBArrayCubeShareCmd(ShmType, int, const char*);
  void loadRGBArrayCubeSocketCmd(int, const char*);
  void loadRGBArrayCubeSocketGZCmd(int, const char*);
  void loadRGBArrayCubeVarCmd(const char*, const char*);
};

#endif
