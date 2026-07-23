// Copyright (C) 1999-2024
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __framemulticolortruecolor24_h__
#define __framemulticolortruecolor24_h__

#include "framemulticolor.h"
#include "truecolor24.h"

class FrameMultiColorTrueColor24 : public FrameMultiColor, public TrueColor24 {
 private:
  void encodeTrueColor(XColor* src, char* dest)
  {TrueColor24::encodeTrueColor(src,dest,baseXImage);}
  void encodeTrueColor(unsigned char* src, XImage* ximage)
  {TrueColor24::encodeTrueColor(src, ximage);}

 public:
  FrameMultiColorTrueColor24(Tcl_Interp*, Tk_Canvas, Tk_Item*);
  ~FrameMultiColorTrueColor24();
};

#endif
