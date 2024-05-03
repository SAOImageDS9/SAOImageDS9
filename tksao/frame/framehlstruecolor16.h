// Copyright (C) 1999-2024
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __framehlstruecolor16_h__
#define __framehlstruecolor16_h__

#include "framehls.h"
#include "truecolor16.h"

class FrameHLSTrueColor16 : public FrameHLS, public TrueColor16 {
 private:
  void encodeTrueColor(XColor* src, char* dest) 
  {TrueColor16::encodeTrueColor(src,dest,baseXImage);}
  void encodeTrueColor(unsigned char* src, XImage* ximage) 
  {TrueColor16::encodeTrueColor(src, ximage);}

 public:
  FrameHLSTrueColor16(Tcl_Interp*, Tk_Canvas, Tk_Item*);
  ~FrameHLSTrueColor16();
};

#endif
