// Copyright (C) 1999-2024
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __framemulticolor_h__
#define __framemulticolor_h__

#include "framea.h"
#include "colorscale.h"
#include "fitsmask.h"

class FrameMultiColor : public FrameA {
 protected:
  enum {MAXLAYERS = 64};

  int layerCount;
  int* layerSlot;
  int* slotUsed;
  char** colorName;
  FitsMask::MaskBlend* blend;
  float* alpha;
  ColorScale** colorScale;

  int isFrameMultiColor() {return 1;}
  unsigned char* fillImage(int, int, Coord::InternalSystem);
  void updateColorScale();
  void updateColorCells(int cnt);
  int validColorScale();

  int currentLayer() {return logicalLayer(channel);}
  int logicalLayer(int);
  int layerIndex(int);
  int allocSlot();
  void setLayer(int);
  void rebuildLayerScale(int);
 public:
  FrameMultiColor(Tcl_Interp*, Tk_Canvas, Tk_Item*);
  virtual ~FrameMultiColor();

  void getColorbarCmd();
  void getTypeCmd();
  void getLayerCountCmd();
  void getLayerNoCmd();
  void getLayerColorCmd(int);
  void getLayerBlendCmd(int);
  void getLayerTransparencyCmd(int);
  void getLayerViewCmd(int);
  void getMultiColorSystemCmd() {getSystem();}
  void saveMultiColorFits(OutFitsStream&);
  void savePhotoCmd(const char*);

  void colormapCmd(float, float, float, float, float, float, int, int);
  void colormapCmd(int, int, const char*, const char*, const char*, int);
  void clipScopeCmd(FrScale::ClipScope);
  void clipModeCmd(float);
  void clipModeCmd(FrScale::ClipMode);
  void clipMinMaxCmd(FrScale::MinMaxMode, int);
  void clipMinMaxRescanCmd();
  void clipMinMaxModeCmd(FrScale::MinMaxMode);
  void clipMinMaxSampleCmd(int);
  void clipUserCmd(double, double);
  void clipZScaleCmd(float,int,int);
  void clipZScaleContrastCmd(float);
  void clipZScaleSampleCmd(int);
  void clipZScaleLineCmd(int);
  void colorScaleCmd(FrScale::ColorScaleType);
  void colorScaleLogCmd(double);

  void layerCreateCmd();
  void layerNoCmd(int);
  void layerColorCmd(int, const char*);
  void layerBlendCmd(int, FitsMask::MaskBlend);
  void layerTransparencyCmd(int, float);
  void layerViewCmd(int, int);
  void layerShowCmd(int);
  void layerHideCmd(int);
  void layerDeleteCmd(int);
  void layerUpCmd(int);
  void layerDownCmd(int);
  void layerTopCmd(int);
  void layerBottomCmd(int);
  void setMultiColorSystemCmd(Coord::CoordSystem sys) {setSystem(sys);}
};

#endif
