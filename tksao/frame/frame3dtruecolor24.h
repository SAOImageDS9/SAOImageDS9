// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __frame3dtruecolor24_h__
#define __frame3dtruecolor24_h__

#include "frame3d.h"
#include "truecolor24.h"

class Frame3dTrueColor24 : public Frame3d, public TrueColor24 {
private:
  void encodeTrueColor(XColor* src, char* dest) 
  {TrueColor24::encodeTrueColor(src,dest,baseXImage);}
  void encodeTrueColor(unsigned char* src, XImage* ximage) 
  {TrueColor24::encodeTrueColor(src, ximage);}
  void updateColorScale();
  void updateColorScale24();
  void updateColorScale32();

public:
  Frame3dTrueColor24(Tcl_Interp*, Tk_Canvas, Tk_Item*);
  ~Frame3dTrueColor24();
};

#endif
