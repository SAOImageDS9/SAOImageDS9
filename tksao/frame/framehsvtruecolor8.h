// Copyright (C) 1999-2024
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __framehsvtruecolor8_h__
#define __framehsvtruecolor8_h__

#include "framehsv.h"
#include "truecolor8.h"

class FrameHSVTrueColor8 : public FrameHSV, public TrueColor8 {
 private:
  void encodeTrueColor(XColor* src, char* dest) 
  {TrueColor8::encodeTrueColor(src,dest,baseXImage);}
  void encodeTrueColor(unsigned char* src, XImage* ximage) 
  {TrueColor8::encodeTrueColor(src, ximage);}

 public:
  FrameHSVTrueColor8(Tcl_Interp*, Tk_Canvas, Tk_Item*);
  ~FrameHSVTrueColor8();
};

#endif
