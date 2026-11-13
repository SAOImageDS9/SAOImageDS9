// Copyright (C) 1999-2021
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __point_h__
#define __point_h__

#include "marker.h"

// shape GLYPH draws a user supplied image (png, gif, ...) instead of a
// vector shape, at a fixed size in screen pixels. It is upright, except
// on a tilted 3D frame (az/el), where it lies in the image plane like the
// other point shapes: the photo is then warped by glyphAxes, into
// glyphWarpPhoto_.
// Decoding and resizing are done in Tcl by the proc named in GLYPHPHOTOPROC,
// which returns the name of a (cached) Tk photo, or "" on failure.
// A glyph without a usable image is drawn as a box with an X.
// size_ is the box the image is fitted into, 0 = native size.
// Names starting with GLYPHBUILTIN are glyphs shipped with ds9, resolved
// in Tcl; they are not paths, and are kept as is on load and save.
// See glyph.C.

#define GLYPHPHOTOPROC "RegionGlyphPhoto"
#define GLYPHDEFAULTSIZE 16
#define GLYPHBUILTIN "builtin://"
#define isGlyphBuiltin(fn) (!strncmp((fn), GLYPHBUILTIN, strlen(GLYPHBUILTIN)))

class Point : public Marker {
 public:
  enum PointShape {CIRCLE,BOX,DIAMOND,CROSS,EX,ARROW,BOXCIRCLE,GLYPH};

 protected:
  PointShape shape_;
  char* shapestr_;
  int size_;

  char* glyphFile_;
  int glyphWidth_;  // current glyph size, screen pixels
  int glyphHeight_;
  Tk_Image glyphImage_;
  char* glyphPhoto_; // Tk photo behind glyphImage_, for postscript/pdf

  Tk_Image glyphWarpImage_; // glyphImage_ warped for a tilted 3D frame
  char* glyphWarpPhoto_;
  Vector glyphWarpAxes_[2]; // axes glyphWarpPhoto_ was made for
  int glyphWarpX_; // top left of glyphWarpPhoto_, relative to the center
  int glyphWarpY_;

 protected:
  Vector* generateCircle(Coord::InternalSystem, int);
  Vector* generateBox(Coord::InternalSystem);
  Vector* generateDiamond(Coord::InternalSystem);
  Vector* generateCross(Coord::InternalSystem);
  Vector* generateEx(Coord::InternalSystem);
  Vector* generateArrow(Coord::InternalSystem);

  void renderXCircle(Drawable, Coord::InternalSystem, RenderMode, int);
  void renderXBox(Drawable drawable, Coord::InternalSystem sys, RenderMode mode);
  void renderXLineDash(GC lgc);

  void renderPSCircle(int,int);
  void renderPSBox(int);
  void renderPSLineDash();

#ifdef __WIN32
  void renderWIN32Circle(int);
  void renderWIN32Box();
  void renderWIN32LineDash();
#endif

  void initGlyph();
  void loadGlyph();
  void freeGlyph();
  static void glyphChangedProc(ClientData, int, int, int, int, int, int);
  static void glyphWarpChangedProc(ClientData, int, int, int, int, int, int)
  {}
  void freeGlyphWarp();
  void glyphAxes(Coord::InternalSystem, Vector*, Vector*);
  void glyphCorners(Coord::InternalSystem, Vector*);
  int glyphLocal(const Vector&, Vector*);
  Tk_PhotoHandle warpGlyph(Coord::InternalSystem, Vector*);
  void renderXGlyph(Drawable, Coord::InternalSystem, RenderMode);
  void renderXGlyphBox(Drawable, Coord::InternalSystem, GC, int);
  void renderPSGlyph(PSColorSpace);
  void renderPSGlyphBox(int);
  void renderPSGlyphImage(PSColorSpace, Tk_PhotoImageBlock*, int, int);
  void listGlyphFile(ostream&);

  void shapeStr(PointShape);
  void updateHandles();

  int isInRef(const Vector&);

 public:
  Point(Base* p, const Vector& ctr);
  Point(Base* p, const Vector& ctr, 
	PointShape shape, int size,
	const char* clr, int* dsh,
	int wth, const char* fnt, const char* txt,
	unsigned short prop, const char* cmt,
	const List<Tag>& tg, const List<CallBack>& cb);
  Point(const Point&);
  virtual ~Point();

  virtual Marker* dup() {return new Point(*this);}

  void renderX(Drawable, Coord::InternalSystem, RenderMode);
  void renderPS(PSColorSpace mode);

#ifdef __WIN32
  void renderWIN32();
#endif

  const char* shape() {return shapestr_;}
  void setShape(PointShape);

  int size() {return size_;}
  void setSize(int);

  void setColor(const char*);

  const char* glyphFile() {return glyphFile_;}
  void setGlyphFile(const char*);
  int glyphWidth() {return glyphWidth_;}
  int glyphHeight() {return glyphHeight_;}

  int isIn(const Vector&);

  void editBegin(int) {}
  void edit(const Vector& v, int h);
  void editEnd();

  void rotateBegin() {}
  void rotate(const Vector& v, int h) {}
  void rotateEnd() {}

  void analysis(AnalysisTask, int);
  void analysisPlot3d(char*, char*, Coord::CoordSystem sys,
		      Marker::AnalysisMethod);

  int isIn(const Vector& vv, Coord::InternalSystem sys)
  {return isInRef(bckMap(vv,sys));}
  int isIn(const Vector& vv, const Matrix& bck)
  {return isInRef(vv*bck);}

  void list(ostream&, Coord::CoordSystem, Coord::SkyFrame, Coord::SkyFormat, int, int);
  void listXML(ostream&, Coord::CoordSystem, Coord::SkyFrame, Coord::SkyFormat);
  void listPost(ostream&, int, int);
  virtual void listCiao(ostream&, Coord::CoordSystem, int);
  virtual void listPros(ostream&, Coord::CoordSystem, Coord::SkyFrame, Coord::SkyFormat, int);
  virtual void listSAOtng(ostream&, Coord::CoordSystem, Coord::SkyFrame, Coord::SkyFormat, int);
  virtual void listSAOimage(ostream&, int);
};

#endif
