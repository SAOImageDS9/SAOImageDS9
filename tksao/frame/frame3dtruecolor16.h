// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __frame3dtruecolor16_h__
#define __frame3dtruecolor16_h__

#include "frame3d.h"
#include "truecolor16.h"

class Frame3dTrueColor16 : public Frame3d, public TrueColor16 {
private:
  void encodeTrueColor(XColor* src, char* dest) 
  {TrueColor16::encodeTrueColor(src,dest,baseXImage);}
  void encodeTrueColor(unsigned char* src, XImage* ximage) 
  {TrueColor16::encodeTrueColor(src, ximage);}
  void updateColorScale();

public:
  Frame3dTrueColor16(Tcl_Interp*, Tk_Canvas, Tk_Item*);
  ~Frame3dTrueColor16();
};

#endif
