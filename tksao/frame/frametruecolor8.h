// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __frametruecolor8_h__
#define __frametruecolor8_h__

#include "frame.h"
#include "truecolor8.h"

class FrameTrueColor8 : public Frame, public TrueColor8 {
private:
  void encodeTrueColor(XColor* src, char* dest)
  {TrueColor8::encodeTrueColor(src,dest,baseXImage);}
  void encodeTrueColor(unsigned char* src, XImage* ximage) 
  {TrueColor8::encodeTrueColor(src, ximage);}
  void updateColorScale();

public:
  FrameTrueColor8(Tcl_Interp*, Tk_Canvas, Tk_Item*);
  ~FrameTrueColor8();
};

#endif
