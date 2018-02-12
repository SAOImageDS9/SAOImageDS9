// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __frame3dtruecolor8_h__
#define __frame3dtruecolor8_h__

#include "frame3d.h"
#include "truecolor8.h"

class Frame3dTrueColor8 : public Frame3d, public TrueColor8 {

private:
  void encodeTrueColor(XColor* src, char* dest) 
  {TrueColor8::encodeTrueColor(src,dest,baseXImage);}
  void encodeTrueColor(unsigned char* src, XImage* ximage) 
  {TrueColor8::encodeTrueColor(src, ximage);}
  void updateColorScale();

public:
  Frame3dTrueColor8(Tcl_Interp*, Tk_Canvas, Tk_Item*);
  ~Frame3dTrueColor8();
};

#endif
