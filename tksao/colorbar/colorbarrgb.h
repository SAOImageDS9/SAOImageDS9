// Copyright (C) 1999-2021
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __colorbarrgb_h__
#define __colorbarrgb_h__

#include "colorbart.h"

class Filter;

class ColorbarRGB : public ColorbarT {
protected:
  void psHorz(ostream&, Filter&, int, int);
  void psVert(ostream&, Filter&, int, int);
  void updateColorCells();
  int initColormap();

#ifdef MAC_OSX_TK
  void macosx(float, int, int, const Vector&, const Vector&);
#endif

#ifdef __WIN32
  void win32(float, int, int, const Vector&, const Vector&);
#endif

public:
  ColorbarRGB(Tcl_Interp*, Tk_Canvas, Tk_Item*);

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
  void getRGBChannelCmd();
  void setRGBChannelCmd(const char*);
};

#endif
