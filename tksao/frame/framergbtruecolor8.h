// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __framergbtruecolor8_h__
#define __framergbtruecolor8_h__

#include "framergb.h"
#include "truecolor8.h"

class FrameRGBTrueColor8 : public FrameRGB, public TrueColor8 {
 private:
  void encodeTrueColor(XColor* src, char* dest) 
  {TrueColor8::encodeTrueColor(src,dest,baseXImage);}
  void encodeTrueColor(unsigned char* src, XImage* ximage) 
  {TrueColor8::encodeTrueColor(src, ximage);}

 public:
  FrameRGBTrueColor8(Tcl_Interp*, Tk_Canvas, Tk_Item*);
  ~FrameRGBTrueColor8();
};

#endif
