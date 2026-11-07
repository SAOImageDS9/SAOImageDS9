// Copyright (C) 1999-2026
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __glyph_h__
#define __glyph_h__

#include "marker.h"

// A user supplied image (png, gif, ...) used as a region marker.
// The image is drawn at a fixed size in screen pixels (it does not scale
// with zoom) and is always upright (it does not rotate).
// Decoding and resizing are done in Tcl by the proc named in GLYPHPHOTOPROC,
// which returns the name of a (cached) Tk photo, or "" on failure.
// A marker without a usable image is drawn as a box with an X.

#define GLYPHPHOTOPROC "RegionGlyphPhoto"
#define GLYPHDEFAULTSIZE 16

class Glyph : public Marker {
 private:
  char* fileName_;
  int reqWidth_;   // requested size, screen pixels, 0 = native
  int reqHeight_;
  int width_;      // current size, screen pixels
  int height_;
  Tk_Image image_;

 private:
  void loadImage();
  void freeImage();
  static void imageChangedProc(ClientData, int, int, int, int, int, int);

  void renderX(Drawable, Coord::InternalSystem, RenderMode);
  void renderXBox(Drawable, Coord::InternalSystem, GC, int);

  void renderPS(PSColorSpace);

#ifdef __WIN32
  void renderWIN32();
#endif

  void updateHandles();

 public:
  Glyph(const Glyph&);
  Glyph(Base* p, const Vector& ctr,
       const char* fn, int ww, int hh,
       const char* clr, int* dsh,
       int wth, const char* fnt, const char* txt,
       unsigned short prop, const char* cmt,
       const List<Tag>& tg, const List<CallBack>& cb);
  ~Glyph();

  Marker* dup() {return new Glyph(*this);}

  int isIn(const Vector&);

  void edit(const Vector&, int);
  void editEnd();

  // always upright: ignore rotation
  void rotate(const Vector&, int) {}

  void setFileName(const char*);
  const char* getFileName() {return fileName_;}
  void setSize(int, int);
  int getReqWidth() {return reqWidth_;}
  int getReqHeight() {return reqHeight_;}
  int getWidth() {return width_;}
  int getHeight() {return height_;}

  void list(ostream&, Coord::CoordSystem, Coord::SkyFrame, Coord::SkyFormat,
	    int, int);
};

#endif
