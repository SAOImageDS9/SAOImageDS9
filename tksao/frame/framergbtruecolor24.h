// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __framergbtruecolor24_h__
#define __framergbtruecolor24_h__

#include "framergb.h"
#include "truecolor24.h"

class FrameRGBTrueColor24 :public FrameRGB, public TrueColor24 {
 private:
  void encodeTrueColor(XColor* src, char* dest) 
  {TrueColor24::encodeTrueColor(src,dest,baseXImage);}
  void encodeTrueColor(unsigned char* src, XImage* ximage) 
  {TrueColor24::encodeTrueColor(src, ximage);}

 public:
  FrameRGBTrueColor24(Tcl_Interp*, Tk_Canvas, Tk_Item*);
  ~FrameRGBTrueColor24();
};

#endif
