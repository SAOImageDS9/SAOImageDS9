// Copyright (C) 1999-2024
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __colorbarhsv_h__
#define __colorbarhsv_h__

#include "colorbart.h"

class ColorbarHSV : public virtual ColorbarT {
public:
  ColorbarHSV(Tcl_Interp*, Tk_Canvas, Tk_Item*);

  // SubCommandFunctions

  void getColorbarCmd();
  void getColormapCmd();
  void getColormapNameCmd(int);
  void getColormapFileNameCmd(int);
  void getColormapFileNameCmd(const char*);
  void getCurrentFileNameCmd();
  void getCurrentIDCmd();
  void getCurrentNameCmd();
  void getTypeCmd();
  void getHSVChannelCmd();
  void setHSVChannelCmd(const char*);
};

#endif
