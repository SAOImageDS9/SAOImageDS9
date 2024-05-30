// Copyright (C) 1999-2024
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __colorbart_h__
#define __colorbart_h__

#include "colorbara.h"
#include "colormap.h"
#include "default.h"

class Filter;

class ColorbarT : public ColorbarA {
protected:
  ColorMapInfo* cmap;

protected:
  void psHorz(ostream&, Filter&, int, int);
  void psVert(ostream&, Filter&, int, int);
  void loadDefaultCmaps();
  int initColormap();
  void updateColorCells();
  void psWritePixel(ostream&, Filter&,
		    unsigned char, unsigned char, unsigned char);

#ifdef MAC_OSX_TK
  void macosx(float, int, int, const Vector&, const Vector&);
#endif

#ifdef __WIN32
  void win32(float, int, int, const Vector&, const Vector&);
#endif

public:
  ColorbarT(Tcl_Interp*, Tk_Canvas, Tk_Item*);
  virtual ~ColorbarT();
};

#endif
