// Copyright (C) 1999-2024
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __framemulticolortruecolor8_h__
#define __framemulticolortruecolor8_h__

#include "framemulticolor.h"
#include "truecolor8.h"

class FrameMultiColorTrueColor8 : public FrameMultiColor, public TrueColor8 {
 private:
  void encodeTrueColor(XColor* src, char* dest)
  {TrueColor8::encodeTrueColor(src,dest,baseXImage);}
  void encodeTrueColor(unsigned char* src, XImage* ximage)
  {TrueColor8::encodeTrueColor(src, ximage);}

 public:
  FrameMultiColorTrueColor8(Tcl_Interp*, Tk_Canvas, Tk_Item*);
  ~FrameMultiColorTrueColor8();
};

#endif
