// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __contour_h__
#define __contour_h__

#include "psutil.h"
#include "vector.h"
#include "vector3d.h"
#include "list.h"
#include "coord.h"

class FitsImage;
class Base;
class Contour;

class ContourLevel {
  friend class Contour;

 protected:
  Base* parent_;
  List<Contour> lcontour_;

  double level_;
  char* colorName_;
  unsigned long color_;
  int lineWidth_;
  int dash_;
  int dlist_[2];

  GC gc_;

  ContourLevel* previous_;
  ContourLevel* next_;

 public:
  ContourLevel(Base*, double, const char*, int, int, int*);
  ContourLevel(Base*, double, const char*, unsigned long, int, int, int*);
  virtual ~ContourLevel();

  List<Contour>& lcontour() {return lcontour_;}

  void list(ostream& str, FitsImage*, Coord::CoordSystem, Coord::SkyFrame);
  void render(Pixmap, Coord::InternalSystem, const BBox&);
  void ps(PSColorSpace);
  void updateCoords(const Matrix&);
#ifdef __WIN32
  void win32();
#endif

  double level() {return level_;}

  const char* colorName() {return colorName_;}
  void setColor(const char*);
  int dash() {return dash_;}
  void setDash(int dd) {dash_ =dd;}
  int lineWidth() {return lineWidth_;}
  void setLineWidth(int ww) {lineWidth_ =ww;}

  ContourLevel* previous() {return previous_;}
  void setPrevious(ContourLevel* m) {previous_ = m;}
  ContourLevel* next() {return next_;}
  void setNext(ContourLevel* m) {next_ = m;}
};

class Contour {
 protected:
  ContourLevel* parent_;
  Base* base_;
  List<Vertex> lvertex_;

  Contour* previous_;
  Contour* next_;

 public:
  Contour(ContourLevel*);
  ~Contour();
  
  List<Vertex>& lvertex() {return lvertex_;}

  void list(ostream& str, FitsImage*, Coord::CoordSystem, Coord::SkyFrame);
  void render(Pixmap, Coord::InternalSystem, const BBox&);
  void ps(PSColorSpace);
  void updateCoords(const Matrix&);
#ifdef __WIN32
  void win32();
#endif

  Contour* previous() {return previous_;}
  void setPrevious(Contour* m) {previous_ = m;}
  Contour* next() {return next_;}
  void setNext(Contour* m) {next_ = m;}
};

#endif
