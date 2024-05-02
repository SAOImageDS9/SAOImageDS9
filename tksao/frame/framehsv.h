// Copyright (C) 1999-2024
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __framehsv_h__
#define __framehsv_h__

#include "framergb.h"

// Frame

class FrameHSV : public FrameRGB {
 protected:
  int isFrameHSV() {return 1;}

 public:
  FrameHSV(Tcl_Interp*, Tk_Canvas, Tk_Item*);
  virtual ~FrameHSV();

  void getTypeCmd();
};

#endif
