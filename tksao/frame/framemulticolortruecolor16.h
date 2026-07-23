// Copyright (C) 1999-2024
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __framemulticolortruecolor16_h__
#define __framemulticolortruecolor16_h__

#include "framemulticolor.h"
#include "truecolor16.h"

class FrameMultiColorTrueColor16 : public FrameMultiColor, public TrueColor16 {
 private:
  void encodeTrueColor(XColor* src, char* dest)
  {TrueColor16::encodeTrueColor(src,dest,baseXImage);}
  void encodeTrueColor(unsigned char* src, XImage* ximage)
  {TrueColor16::encodeTrueColor(src, ximage);}

 public:
  FrameMultiColorTrueColor16(Tcl_Interp*, Tk_Canvas, Tk_Item*);
  ~FrameMultiColorTrueColor16();
};

#endif
