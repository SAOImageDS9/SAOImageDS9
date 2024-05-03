// Copyright (C) 1999-2024
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __framehsvtruecolor16_h__
#define __framehsvtruecolor16_h__

#include "framehsv.h"
#include "truecolor16.h"

class FrameHSVTrueColor16 : public FrameHSV, public TrueColor16 {
 private:
  void encodeTrueColor(XColor* src, char* dest) 
  {TrueColor16::encodeTrueColor(src,dest,baseXImage);}
  void encodeTrueColor(unsigned char* src, XImage* ximage) 
  {TrueColor16::encodeTrueColor(src, ximage);}

 public:
  FrameHSVTrueColor16(Tcl_Interp*, Tk_Canvas, Tk_Item*);
  ~FrameHSVTrueColor16();
};

#endif
