// Copyright (C) 1999-2024
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __colorbarhsv_h__
#define __colorbarhsv_h__

#include "colorbart.h"
#include "colormap.h"
#include "default.h"

class Filter;

class ColorbarHSV : public virtual ColorbarT {
protected:
  ColorMapInfo* cmap;

protected:
  void psHorz(ostream&, Filter&, int, int);
  void psVert(ostream&, Filter&, int, int);
  void loadDefaultCmaps();
  void updateColorCells();
  int initColormap();

#ifdef MAC_OSX_TK
  void macosx(float, int, int, const Vector&, const Vector&);
#endif

#ifdef __WIN32
  void win32(float, int, int, const Vector&, const Vector&);
#endif

public:
  ColorbarHSV(Tcl_Interp*, Tk_Canvas, Tk_Item*);
  ~ColorbarHSV();

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
