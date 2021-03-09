// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __segment_h__
#define __segment_h__

#include "basepolygon.h"
#include "marker.h"
#include "list.h"

class Segment : public BasePolygon {
 protected:
  void renderX(Drawable, Coord::InternalSystem, RenderMode);
  void renderPS(PSColorSpace);
#ifdef __WIN32
  void renderWIN32();
#endif

public:
  Segment(Base* p, const Vector& ctr,
	  const Vector& b);
  Segment(Base* p, const Vector& ctr,
	  const Vector& b,
	  const char* clr, int* dsh,
	  int wth, const char* fnt, const char* txt,
	  unsigned short prop, const char* cmt,
	  const List<Tag>& tg, const List<CallBack>& cb);
  Segment(Base* p, const List<Vertex>& v, 
	  const char* clr, int* dsh,
	  int wth, const char* fnt, const char* txt,
	  unsigned short prop, const char* cmt,
	  const List<Tag>& tg, const List<CallBack>& cb);
  Segment(const Segment& a) : BasePolygon(a) {}

  Marker* dup() {return new Segment(*this);}

  int getSegment(const Vector&);
  void reset(const Vector&);

  void list(ostream&, Coord::CoordSystem, Coord::SkyFrame, Coord::SkyFormat, int, int);
  void listXML(ostream&, Coord::CoordSystem, Coord::SkyFrame, Coord::SkyFormat);
};

#endif
