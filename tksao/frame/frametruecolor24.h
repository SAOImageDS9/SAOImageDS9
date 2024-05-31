// Copyright (C) 1999-2021
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __frametruecolor24_h__
#define __frametruecolor24_h__

#include "frame.h"
#include "truecolor24.h"

class FrameTrueColor24 : public Frame, public TrueColor24 {
private:
  void encodeTrueColor(XColor* src, char* dest) 
  {TrueColor24::encodeTrueColor(src,dest,baseXImage);}
  void encodeTrueColor(unsigned char* src, XImage* ximage) 
  {TrueColor24::encodeTrueColor(src, ximage);}

public:
  FrameTrueColor24(Tcl_Interp*, Tk_Canvas, Tk_Item*);
  ~FrameTrueColor24();
};

#endif
