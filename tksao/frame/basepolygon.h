// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __basepolygon_h__
#define __basepolygon_h__

#include "marker.h"
#include "list.h"

class BasePolygon : public Marker {
 protected:
  List<Vertex> vertex;

 protected:
  virtual void renderX(Drawable, Coord::InternalSystem, RenderMode) =0;
  virtual void renderPS(PSColorSpace) =0;
#ifdef __WIN32
  virtual void renderWIN32() =0;
#endif

  void moveVertex(const Vector&, int);
  void recalcCenter();
  void updateHandles();

  void listBase(FitsImage*, ostream&, Coord::CoordSystem, 
		Coord::SkyFrame, Coord::SkyFormat);

public:
  BasePolygon(Base* p, const Vector& ctr,
	  const Vector& b);
  BasePolygon(Base* p, const Vector& ctr,
	  const Vector& b,
	  const char* clr, int* dsh,
	  int wth, const char* fnt, const char* txt,
	  unsigned short prop, const char* cmt,
	  const List<Tag>& tg, const List<CallBack>& cb);
  BasePolygon(Base* p, const List<Vertex>& v, 
	  const char* clr, int* dsh,
	  int wth, const char* fnt, const char* txt,
	  unsigned short prop, const char* cmt,
	  const List<Tag>& tg, const List<CallBack>& cb);
  BasePolygon(const BasePolygon&);

  void createVertex(int, const Vector&);
  void deleteVertex(int);
  void edit(const Vector&, int);
  virtual int getSegment(const Vector&) =0;
  virtual void reset(const Vector&) =0;
  void rotate(const Vector&, int);
  void updateCoords(const Matrix&);
};

#endif
