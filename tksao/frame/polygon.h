// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __polygon_h__
#define __polygon_h__

#include "basepolygon.h"
#include "marker.h"
#include "list.h"

class Polygon : public BasePolygon {
 protected:
  int fill_;

 protected:
  int isInRef(const Vector& v);
  void renderX(Drawable, Coord::InternalSystem, RenderMode);
  void renderPS(PSColorSpace);
#ifdef __WIN32
  void renderWIN32();
#endif

public:
  Polygon(Base* p, const Vector& ctr,
	  const Vector& b, int fill);
  Polygon(Base* p, const Vector& ctr,
	  const Vector& b, int fill,
	  const char* clr, int* dsh,
	  int wth, const char* fnt, const char* txt,
	  unsigned short prop, const char* cmt,
	  const List<Tag>& tg, const List<CallBack>& cb);
  Polygon(Base* p, const List<Vertex>& v, int fill,
	  const char* clr, int* dsh,
	  int wth, const char* fnt, const char* txt,
	  unsigned short prop, const char* cmt,
	  const List<Tag>& tg, const List<CallBack>& cb);
  Polygon(const Polygon& a);

  Marker* dup() {return new Polygon(*this);}

  void fill(int ff) {fill_ = ff;}
  int getFill() {return fill_;}

  void analysis(AnalysisTask, int);
  void analysisHistogram(char*, char*, int);
  void analysisPlot3d(char*, char*, Coord::CoordSystem,
		      Marker::AnalysisMethod);
  void analysisStats(Coord::CoordSystem, Coord::SkyFrame sky);

  int isIn(const Vector& vv) {return isIn(vv, Coord::CANVAS);}
  int isIn(const Vector& vv, Coord::InternalSystem sys)
  {return isInRef(bckMap(vv,sys));}

  int isIn(const Vector& vv, const Matrix& bck)
  {return isInRef(vv*bck);}

  int getSegment(const Vector&);
  void reset(const Vector&);

  void list(ostream&, Coord::CoordSystem, Coord::SkyFrame, Coord::SkyFormat, int, int);
  virtual void listPost(ostream&, int, int);
  void listXML(ostream&, Coord::CoordSystem, Coord::SkyFrame, Coord::SkyFormat);
  void listCiao(ostream&, Coord::CoordSystem, int);
  void listSAOtng(ostream&, Coord::CoordSystem, Coord::SkyFrame, Coord::SkyFormat, int);
  void listSAOimage(ostream&, int);
  void listPros(ostream&, Coord::CoordSystem, Coord::SkyFrame, Coord::SkyFormat, int);
};

#endif
