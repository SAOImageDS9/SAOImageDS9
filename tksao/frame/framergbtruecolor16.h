// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __framergbtruecolor16_h__
#define __framergbtruecolor16_h__

#include "framergb.h"
#include "truecolor16.h"

class FrameRGBTrueColor16 : public FrameRGB, public TrueColor16 {
 private:
  void encodeTrueColor(XColor* src, char* dest) 
  {TrueColor16::encodeTrueColor(src,dest,baseXImage);}
  void encodeTrueColor(unsigned char* src, XImage* ximage) 
  {TrueColor16::encodeTrueColor(src, ximage);}

 public:
  FrameRGBTrueColor16(Tcl_Interp*, Tk_Canvas, Tk_Item*);
  ~FrameRGBTrueColor16();
};

#endif
