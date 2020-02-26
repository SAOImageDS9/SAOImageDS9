// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __frame_h__
#define __frame_h__

#include "framebase.h"
#include "context.h"
#include "fitsmask.h"
#include "colorscale.h"

// Frame

class Frame : public FrameBase {
 protected:
  int cmapID;                // current colormap id
  float bias;                // current colormap bias
  float contrast;            // current colormap contrast

  long* colormapData;

  int colorCount;            // number of dynamic colors
  ColorScale* colorScale;    // current color scale
  unsigned char* colorCells; // current color values

  List <FitsMask> mask;

  char* maskColorName;
  float maskAlpha;
  FitsMask::MaskBlend maskBlend;
  FitsMask::MaskType maskMark;
  double maskLow;
  double maskHigh;
  Coord::CoordSystem maskSystem;

 private:
  unsigned char* alphaComposite(unsigned char*, unsigned char*, int, int);
  unsigned char* blendSourceMask(unsigned char*, unsigned char*,
				 unsigned char*, int, int);
  unsigned char* blendScreenMask(unsigned char*, unsigned char*,
				 unsigned char*, int, int);
  unsigned char* blendDarkenMask(unsigned char*, unsigned char*,
				 unsigned char*, int, int);
  unsigned char* blendLightenMask(unsigned char*, unsigned char*,
				  unsigned char*, int, int);
  unsigned char blendScreenColor(unsigned char, unsigned char);
  int isIIS();
  void pushMatrices();
  void pushMagnifierMatrices();
  void pushPannerMatrices();
  void pushPSMatrices(float, int, int);
  void reset();
  void setKeyFits() {}
  void unloadFits();
  Context* loadMask();

 protected:
  void alignWCS();
  int isFrame() {return 1;}

  unsigned char* fillImage(int width, int height, Coord::InternalSystem);
  unsigned char* fillMask(FitsMask*, int, int,  Coord::InternalSystem);
  int validColorScale() {return colorScale ? 1 : 0;}
  void updateColorCells(unsigned char*, int);
  void updateMaskMatrices();
  void loadDone(int);

 public:
  Frame(Tcl_Interp*, Tk_Canvas, Tk_Item*);
  virtual ~Frame();

  void maskClearCmd();

  void getMaskCountCmd();

  void getMaskColorCmd();
  void getMaskMarkCmd();
  void getMaskRangeCmd();
  void getMaskSystemCmd();
  void getMaskTransparencyCmd();
  void getMaskBlendCmd();

  void maskColorCmd(const char*);
  void maskMarkCmd(FitsMask::MaskType mm) {maskMark=mm;}
  void maskRangeCmd(double ll, double hh) {maskLow=ll; maskHigh=hh;}
  void maskSystemCmd(Coord::CoordSystem);
  void maskTransparencyCmd(float);
  void maskBlendCmd(FitsMask::MaskBlend bb);

  void colormapCmd(int, float, float, int, unsigned char*, int);
  void colormapBeginCmd();
  void colormapMotionCmd(int, float, float, int, unsigned char*, int);
  void colormapEndCmd();

  void getColorbarCmd();
  void getRGBChannelCmd();
  void getRGBViewCmd();
  void getRGBSystemCmd();
  void getTypeCmd();

  void iisCmd(int, int);
  void iisEraseCmd();
  void iisGetCmd(char*, int, int, int, int);
  void iisSetCmd(const char*, int, int, int, int);
  void iisWCSCmd(const Matrix&, const Vector&, int);

  void savePhotoCmd(const char*);

  void loadFitsAllocCmd(const char*, const char*, LayerType);
  void loadFitsAllocGZCmd(const char*, const char*, LayerType);
  void loadFitsChannelCmd(const char*, const char*, LayerType);
  void loadFitsMMapCmd(const char*, LayerType);
  void loadFitsSMMapCmd(const char*, const char*, LayerType);
  void loadFitsMMapIncrCmd(const char*, LayerType);
  void loadFitsShareCmd(ShmType, int, const char*, LayerType);
  void loadFitsSShareCmd(ShmType, int, int, const char*, LayerType);
  void loadFitsSocketCmd(int, const char*, LayerType);
  void loadFitsSocketGZCmd(int, const char*, LayerType);
  void loadFitsVarCmd(const char*, const char*, LayerType);

  void loadArrAllocCmd(const char*, const char*, LayerType);
  void loadArrAllocGZCmd(const char*, const char*, LayerType);
  void loadArrChannelCmd(const char*, const char*, LayerType);
  void loadArrMMapCmd(const char*, LayerType);
  void loadArrMMapIncrCmd(const char*, LayerType);
  void loadArrShareCmd(ShmType, int, const char*, LayerType);
  void loadArrSocketCmd(int, const char*, LayerType);
  void loadArrSocketGZCmd(int, const char*, LayerType);
  void loadArrVarCmd(const char*, const char*, LayerType);

  void loadNRRDAllocCmd(const char*, const char*, LayerType);
  void loadNRRDChannelCmd(const char*, const char*, LayerType);
  void loadNRRDMMapCmd(const char*, LayerType);
  void loadNRRDShareCmd(ShmType, int, const char*, LayerType);
  void loadNRRDSocketCmd(int, const char*, LayerType);
  void loadNRRDVarCmd(const char*, const char*, LayerType);

  void loadMosaicImageAllocCmd(MosaicType, Coord::CoordSystem, const char*, const char*, LayerType);
  void loadMosaicImageAllocGZCmd(MosaicType, Coord::CoordSystem, const char*, const char*, LayerType);
  void loadMosaicImageChannelCmd(MosaicType, Coord::CoordSystem, const char*, const char*, LayerType);
  void loadMosaicImageMMapCmd(MosaicType, Coord::CoordSystem, const char*, LayerType);
  void loadMosaicImageMMapIncrCmd(MosaicType, Coord::CoordSystem, const char*, LayerType);
  void loadMosaicImageShareCmd(MosaicType, Coord::CoordSystem, ShmType, int, const char*, LayerType);
  void loadMosaicImageSocketCmd(MosaicType, Coord::CoordSystem, int, const char*, LayerType);
  void loadMosaicImageSocketGZCmd(MosaicType, Coord::CoordSystem, int, const char*, LayerType);
  void loadMosaicImageVarCmd(MosaicType, Coord::CoordSystem, const char*,const char*, LayerType);

  void loadMosaicImageWFPC2AllocCmd(const char*, const char*, LayerType);
  void loadMosaicImageWFPC2AllocGZCmd(const char*, const char*, LayerType);
  void loadMosaicImageWFPC2ChannelCmd(const char*, const char*, LayerType);
  void loadMosaicImageWFPC2MMapCmd(const char*, LayerType);
  void loadMosaicImageWFPC2MMapIncrCmd(const char*, LayerType);
  void loadMosaicImageWFPC2ShareCmd(ShmType, int, const char*, LayerType);
  void loadMosaicImageWFPC2SocketCmd(int, const char*, LayerType);
  void loadMosaicImageWFPC2SocketGZCmd(int, const char*, LayerType);
  void loadMosaicImageWFPC2VarCmd(const char*, const char*, LayerType);

  void loadMosaicAllocCmd(MosaicType, Coord::CoordSystem, const char*, const char*, LayerType);
  void loadMosaicAllocGZCmd(MosaicType, Coord::CoordSystem, const char*, const char*, LayerType);
  void loadMosaicChannelCmd(MosaicType, Coord::CoordSystem, const char*, const char*, LayerType);
  void loadMosaicMMapCmd(MosaicType, Coord::CoordSystem, const char*, LayerType);
  void loadMosaicSMMapCmd(MosaicType, Coord::CoordSystem, const char*, const char*, LayerType);
  void loadMosaicMMapIncrCmd(MosaicType, Coord::CoordSystem, const char*, LayerType);
  void loadMosaicShareCmd(MosaicType, Coord::CoordSystem, ShmType, int, const char*, LayerType);
  void loadMosaicSShareCmd(MosaicType, Coord::CoordSystem, ShmType, int, int, const char*, LayerType);
  void loadMosaicSocketCmd(MosaicType, Coord::CoordSystem, int, const char*, LayerType);
  void loadMosaicSocketGZCmd(MosaicType, Coord::CoordSystem, int, const char*, LayerType);
  void loadMosaicVarCmd(MosaicType, Coord::CoordSystem, const char*, const char*, LayerType);
};

#endif
