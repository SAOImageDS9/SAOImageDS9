// Copyright (C) 1999-2024
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __framehlstruecolor24_h__
#define __framehlstruecolor24_h__

#include "framehls.h"
#include "truecolor24.h"

class FrameHLSTrueColor24 :public FrameHLS, public TrueColor24 {
 private:
  void encodeTrueColor(XColor* src, char* dest) 
  {TrueColor24::encodeTrueColor(src,dest,baseXImage);}
  void encodeTrueColor(unsigned char* src, XImage* ximage) 
  {TrueColor24::encodeTrueColor(src, ximage);}

 public:
  FrameHLSTrueColor24(Tcl_Interp*, Tk_Canvas, Tk_Item*);
  ~FrameHLSTrueColor24();
};

#endif
