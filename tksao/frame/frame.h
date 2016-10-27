// Copyright (C) 1999-2016
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __frame_h__
#define __frame_h__

#include "context.h"
#include "framebase.h"
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

 private:
  unsigned char* blend(unsigned char*, unsigned char*, int, int);
  int isIIS();
  void pushMatrices();
  void pushMagnifierMatrices();
  void pushPannerMatrices();
  void pushPSMatrices(float, int, int);
  void reset();
  void setKeyFits() {}
  void unloadFits();

 protected:
  int isFrame() {return 1;}

  unsigned char* fillImage(int width, int height, Coord::InternalSystem);
  unsigned char* fillMask(FitsMask*, int, int,  Coord::InternalSystem);
  int validColorScale() {return colorScale ? 1 : 0;}
  void updateColorCells(unsigned char*, int);

 public:
  Frame(Tcl_Interp*, Tk_Canvas, Tk_Item*);
  virtual ~Frame();

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
};

#endif
