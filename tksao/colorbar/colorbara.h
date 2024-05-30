// Copyright (C) 1999-2024
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __colorbara_h__
#define __colorbara_h__

#include "colorbarbase.h"

class ColorbarA : public ColorbarBase {
 protected:
  int channel;
  float bias[3];
  float contrast[3];

protected:
  void reset();

public:
  ColorbarA(Tcl_Interp*, Tk_Canvas, Tk_Item*);

  // SubCommandFunctions

  void adjustCmd(float, float);
  void getBiasCmd();
  void getContrastCmd();
  void setColorbarCmd(float, float, float, float, float, float, int);
};

#endif
