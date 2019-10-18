// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __magnifier_h__
#define __magnifier_h__

#include "widget.h"

struct MagnifierTrueOptions {
  Tk_Item item;              // required by tk
  int x, y;                  // Coordinates of positioning point on canvas
  int width;                 // widget width
  int height;                // widget height
  Tk_Anchor anchor;          // Where to anchor widget relative to x,y
  char* cmdName;             // Suggested Tcl command name

  char* helvetica;           // name of X11 font
  char* courier;             // name of X11 font
  char* times;               // name of X11 font

  Widget* widget;            // pointer to widget class

  XColor* bgColor;
};

class Magnifier : public Widget {
private:
  Pixmap thumbnail;        // current gterm thumbnail pixmap
  double crosshairSize;    // size of crosshair (diameter)
  double crosshairAngle;   // angle of rotation (radians)
  GC crosshairGC;          // gc for crosshairs
  int useCrosshair;        // flag to render crosshair
  int needsUpdate;         // flag to indicate update needed

protected:
  virtual void clearPixmap() =0;

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

