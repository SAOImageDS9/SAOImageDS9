// Copyright (C) 1999-2024
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __framet_h__
#define __framet_h__

#include "framea.h"

// Frame

class FrameT : public FrameA {
protected:
  void updateColorCells(int cnt);

public:
  FrameT(Tcl_Interp*, Tk_Canvas, Tk_Item*);
  virtual ~FrameT();
};

#endif
