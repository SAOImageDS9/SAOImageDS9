// Copyright (C) 1999-2024
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __framehls_h__
#define __framehls_h__

#include "framet.h"

// Frame

class FrameHLS : public FrameT {
 protected:
  int isFrameHLS() {return 1;}

  void pushMatrices() {}
  void pushMagnifierMatrices() {}
  void pushPannerMatrices() {}
  void pushPSMatrices(float, int, int) {}

  unsigned char* fillImage(int, int, Coord::InternalSystem) {return NULL;}

  void updateColorScale() {}
  int validColorScale() {return 0;}

 public:
  FrameHLS(Tcl_Interp*, Tk_Canvas, Tk_Item*);
  virtual ~FrameHLS();

  void getColorbarCmd() {}
  void getTypeCmd();

  void getHLSChannelCmd();

  /*
  void getHLSSystemCmd() {getRGBSystemCmd();}
  void getHLSViewCmd() {getRGBViewCmd();}
  */
};

#endif
