// Copyright (C) 1999-2021
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __contour_h__
#define __contour_h__

#include <vector>

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
  int index_;
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
  int index() {return index_;}
  void setIndex(int ii) {index_ =ii;}

  const char* colorName() {return colorName_;}
  void setColor(const char*);
  int dash() {return dash_;}
  void setDash(int dd) {dash_ =dd;}
  int lineWidth() {return lineWidth_;}
  void setLineWidth(int ww) {lineWidth_ =ww;}
  int* dlist() {return dlist_;}
  void setDashList(int length, int gap) {
    dlist_[0] = length;
    dlist_[1] = gap;
  }

  ContourLevel* previous() {return previous_;}
  void setPrevious(ContourLevel* m) {previous_ = m;}
  ContourLevel* next() {return next_;}
  void setNext(ContourLevel* m) {next_ = m;}
};

// One loaded contour file or one paste: a group of aux contour levels
// that are kept, drawn, restyled and deleted together.
// A row is one distinct level value, in file order: a file saved from a
// mosaic repeats each value once per tile, and a row covers all of them.
class AuxContourSet {
 protected:
  // the style of a row right after the load: what a reset goes back to
  struct LoadedStyle {
    double level;
    char* colorName;
    int lineWidth;
    int dash;
    int dlist[2];
  };

  int id_;
  char* name_;
  List<ContourLevel> levels_;
  std::vector<LoadedStyle> loaded_;

  void clearLoaded();
  ContourLevel* rowFirst(int);

  AuxContourSet* previous_;
  AuxContourSet* next_;

 private:
  // never copied: ContourLevel has no copy constructor
  AuxContourSet(const AuxContourSet&);
  AuxContourSet& operator=(const AuxContourSet&);

 public:
  AuxContourSet(int, const char*);
  ~AuxContourSet();

  int id() {return id_;}
  void setId(int id) {id_ = id;}
  const char* name() {return name_;}
  void setName(const char*);
  List<ContourLevel>& levels() {return levels_;}

  void setStyle(const char*, int, int, int*);

  // rows are fixed by captureLoaded(), called once the load is complete
  void captureLoaded();
  int rows() {return (int)loaded_.size();}
  double rowLevel(int rr) {return loaded_[rr].level;}
  void listRow(ostream&, int);
  void setRowStyle(int, const char*, int, int, int*);
  void resetRow(int);
  void resetAll();

  void render(Pixmap, Coord::InternalSystem, const BBox&);
  void ps(PSColorSpace);
  void updateCoords(const Matrix&);
#ifdef __WIN32
  void win32();
#endif

  AuxContourSet* previous() {return previous_;}
  void setPrevious(AuxContourSet* m) {previous_ = m;}
  AuxContourSet* next() {return next_;}
  void setNext(AuxContourSet* m) {next_ = m;}
};

class Contour {
 protected:
  ContourLevel* parent_;
  Base* base_;
  List<Vertex> lvertex_;

  Contour* previous_;
  Contour* next_;

  void renderLines(Pixmap, std::vector<XPoint>&, int, char*);
  int isXCoord(const Vector&);

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
