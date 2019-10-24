// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __panner_h__
#define __panner_h__

#include "widget.h"

class Panner : public Widget {
 private:
  Pixmap thumbnail;          // current frame thumbnail pixmap
  int highLite;              // flag to highlite bbox
  int panning;               // flag for panning status
  Vector panStart;           // initial location of panning operation
  int needsUpdate;           // flag to indicate refresh needed

  GC bboxGC;                 // bbox gc
  int useBBox;               // flag to use BBox
  Vector bbox[4];            // current view

  GC compassGC;              // compass gc
  Vector imageX;
  Vector imageY;
  Vector imageZ;
  int threed;                // 2d or 3d compass
  int useCompass;            // flag to use image/wcs compass
  Vector wcsNorth;
  Vector wcsEast;
  int validWCSCompass;       // flag to indicate wcs data is valid

  Tk_Font tkfont_;              // Tk font
  Tk_FontMetrics metric;     // Tk font metric
				  
 private:
  void update();             // use existing pixmap, just update
  void invalidPixmap();      // new pixmap, then update

 private:
  int updatePixmap(const BBox&); // renders image/graphics into pixmap
  void renderBBox();
  int isInBBox(const Vector&);
  void renderImageCompass();
  void renderWCSCompass();
  void renderArm(int, Vector, Rotate, const char*, int);
  void updateGCs();

 public:
  Panner(Tcl_Interp*, Tk_Canvas, Tk_Item*);
  virtual ~Panner();

  int parse(istringstream&);            // parse subcommands

  // SubCommandFunctions

  void getBBoxCmd();
  void getSizeCmd();
  void highLiteCmd(int);
  void highLiteCmd(const Vector&);
  void panToCmd(const Vector&);
  void panBeginCmd(const Vector&);
  void panMotionCmd(const Vector&);
  void panEndCmd(const Vector&);
  void setCompassCmd(int);
  void setBBoxCmd(int);
  void updateCmd(void*);
  void updateBBoxCmd(const Vector&, const Vector&, 
		     const Vector&, const Vector&);
  void updateImageCompassCmd(Vector, Vector);
  void updateImageCompassCmd(Vector, Vector, Vector);
  void updateWCSCompassCmd();
  void updateWCSCompassCmd(const Vector&, const Vector&);
  void warpCmd(const Vector&);
};

#endif
