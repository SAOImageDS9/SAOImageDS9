// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __framergb_h__
#define __framergb_h__

#include "context.h"
#include "framebase.h"
#include "colorscalergb.h"

// Frame

class FrameRGB : public FrameBase {
 protected:
  int channel;                  // current channel
  Coord::CoordSystem rgbSystem;        // alignment coordinate system
  Matrix rgb[3];                // rgb matrix

  long* colormapData[3];     // preextract data

  int view[3];                  // visible channels
  float bias[3];                // current colormap bias
  float contrast[3];            // current colormap contrast
  ColorScaleRGB* colorScale[3]; // current color scale

  int colorCount;               // number of dynamic colors
  unsigned char* colorCells;    // current color values

  int keyContextSet;

 private:
  void alignWCS();
  void alignWCS(Coord::CoordSystem, Coord::SkyFrame);
  void alignWCS(FitsImage*, Coord::CoordSystem);

  int doRender();

  BBox imageBBox(FrScale::SecMode);

  void loadRGBCube(MemType, const char*, FitsImage*);
  void loadRGBImage(MemType, const char*, FitsImage*);
  void loadRGBFinish();

  void reset();

  void setBinCursor();
  void setKeyFits();

  void unloadFits();

  void pushMatrices();
  void pushMagnifierMatrices();
  void pushPannerMatrices();
  void pushPSMatrices(float, int, int);

  void updateRGBMatrices();

 protected:
  int isFrameRGB() {return 1;}

  void loadDone(int);

  unsigned char* fillImage(int, int, Coord::InternalSystem);
  void updateColorCells(unsigned char*, int);
  void updateColorScale();
  void unloadAllFits();

  int validColorScale() 
    {return colorScale[0] && colorScale[1] && colorScale[2];}

 public:
  FrameRGB(Tcl_Interp*, Tk_Canvas, Tk_Item*);
  virtual ~FrameRGB();

  void getColorbarCmd();
  void getInfoCmd(const Vector&, Coord::InternalSystem, char*);
  void getRGBChannelCmd();
  void getRGBSystemCmd();
  void getRGBViewCmd();
  void getTypeCmd();

  void colormapCmd(float, float, float, float, float, float, int,
		   unsigned char*, int);
  void colormapBeginCmd();
  void colormapEndCmd();
  void colormapMotionCmd(float, float, float, float, float, float, int,
			 unsigned char*, int);

  void iisCmd(int, int) {}
  void iisEraseCmd() {}
  void iisGetCmd(char*, int, int, int, int) {}
  void iisSetCmd(const char*, int, int, int, int) {}
  void iisWCSCmd(const Matrix&, const Vector&, int) {}

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

  void loadArrayRGBCubeAllocCmd(const char*, const char*);
  void loadArrayRGBCubeAllocGZCmd(const char*, const char*);
  void loadArrayRGBCubeChannelCmd(const char*, const char*);
  void loadArrayRGBCubeMMapCmd(const char*);
  void loadArrayRGBCubeMMapIncrCmd(const char*);
  void loadArrayRGBCubeShareCmd(ShmType, int, const char*);
  void loadArrayRGBCubeSocketCmd(int, const char*);
  void loadArrayRGBCubeSocketGZCmd(int, const char*);
  void loadArrayRGBCubeVarCmd(const char*, const char*);

  void saveFitsRGBImage(OutFitsStream&);
  void saveFitsRGBImageFileCmd(const char*);
  void saveFitsRGBImageChannelCmd(const char*);
  void saveFitsRGBImageSocketCmd(int);

  void saveFitsRGBCube(OutFitsStream&);
  void saveFitsRGBCubeFileCmd(const char*);
  void saveFitsRGBCubeChannelCmd(const char*);
  void saveFitsRGBCubeSocketCmd(int);

  void saveArrayRGBCube(OutFitsStream&, FitsFile::ArchType);
  void saveArrayRGBCubeFileCmd(const char*, FitsFile::ArchType);
  void saveArrayRGBCubeChannelCmd(const char*, FitsFile::ArchType);
  void saveArrayRGBCubeSocketCmd(int, FitsFile::ArchType);

  void savePhotoCmd(const char*);

  void setRGBChannelCmd(const char*);
  void setRGBViewCmd(int, int, int);
  void setRGBSystemCmd(Coord::CoordSystem);
};

#endif
