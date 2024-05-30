// Copyright (C) 1999-2024
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __colorbarhls_h__
#define __colorbarhls_h__

#include "colorbart.h"

class ColorbarHLS : public virtual ColorbarT {
public:
  ColorbarHLS(Tcl_Interp*, Tk_Canvas, Tk_Item*);

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
  void getHLSChannelCmd();
  void setHLSChannelCmd(const char*);
};

#endif
