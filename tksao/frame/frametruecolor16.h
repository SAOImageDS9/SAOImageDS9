// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __frametruecolor16_h__
#define __frametruecolor16_h__

#include "frame.h"
#include "truecolor16.h"

class FrameTrueColor16 : public Frame, public TrueColor16 {
private:
  void encodeTrueColor(XColor* src, char* dest) 
  {TrueColor16::encodeTrueColor(src,dest,baseXImage);}
  void encodeTrueColor(unsigned char* src, XImage* ximage) 
  {TrueColor16::encodeTrueColor(src, ximage);}
  void updateColorScale();

public:
  FrameTrueColor16(Tcl_Interp*, Tk_Canvas, Tk_Item*);
  ~FrameTrueColor16();
};

#endif
