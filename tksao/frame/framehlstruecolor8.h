// Copyright (C) 1999-2024
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __framehlstruecolor8_h__
#define __framehlstruecolor8_h__

#include "framehls.h"
#include "truecolor8.h"

class FrameHLSTrueColor8 : public FrameHLS, public TrueColor8 {
 private:
  void encodeTrueColor(XColor* src, char* dest) 
  {TrueColor8::encodeTrueColor(src,dest,baseXImage);}
  void encodeTrueColor(unsigned char* src, XImage* ximage) 
  {TrueColor8::encodeTrueColor(src, ximage);}

 public:
  FrameHLSTrueColor8(Tcl_Interp*, Tk_Canvas, Tk_Item*);
  ~FrameHLSTrueColor8();
};

#endif
