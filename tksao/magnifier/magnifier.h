// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __magnifier_h__
#define __magnifier_h__

#include "widget.h"

class Magnifier : public Widget {
private:
  Pixmap thumbnail;        // current gterm thumbnail pixmap
  double crosshairSize;    // size of crosshair (diameter)
  double crosshairAngle;   // angle of rotation (radians)
  GC crosshairGC;          // gc for crosshairs
  int useCrosshair;        // flag to render crosshair
  int needsUpdate;         // flag to indicate update needed

private:
  int updatePixmap(const BBox&); // renders image/graphics into pixmap
  void update();
  void invalidPixmap();

public:
  Magnifier(Tcl_Interp*, Tk_Canvas, Tk_Item*);

  int parse(istringstream&);          // parse subcommands

  // SubCommandFunctions

  void crosshairCmd(int);
  void getBBoxCmd();
  void updateCmd(void*);
};

#endif

