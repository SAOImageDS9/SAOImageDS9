// Copyright (C) 1999-2024
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __framehsv_h__
#define __framehsv_h__

#include "framet.h"

// Frame

class FrameHSV : public FrameT {
 protected:
  int isFrameHSV() {return 1;}

  void pushMatrices() {}
  void pushMagnifierMatrices() {}
  void pushPannerMatrices() {}
  void pushPSMatrices(float, int, int) {}

  unsigned char* fillImage(int, int, Coord::InternalSystem) {return NULL;}

  void updateColorScale() {}
  int validColorScale() {return 0;}

 public:
  FrameHSV(Tcl_Interp*, Tk_Canvas, Tk_Item*);
  virtual ~FrameHSV();

  void getColorbarCmd() {}
  void getTypeCmd();
  
  void getHSVChannelCmd();

  /*
  void getHSVSystemCmd() {getRGBSystemCmd();}
  void getHSVViewCmd() {getRGBViewCmd();}
  */
};

#endif
