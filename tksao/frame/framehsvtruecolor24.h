// Copyright (C) 1999-2024
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __framehsvtruecolor24_h__
#define __framehsvtruecolor24_h__

#include "framehsv.h"
#include "truecolor24.h"

class FrameHSVTrueColor24 :public FrameHSV, public TrueColor24 {
 private:
  void encodeTrueColor(XColor* src, char* dest) 
  {TrueColor24::encodeTrueColor(src,dest,baseXImage);}
  void encodeTrueColor(unsigned char* src, XImage* ximage) 
  {TrueColor24::encodeTrueColor(src, ximage);}

 public:
  FrameHSVTrueColor24(Tcl_Interp*, Tk_Canvas, Tk_Item*);
  ~FrameHSVTrueColor24();
};

#endif
