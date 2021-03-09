// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __point_h__
#define __point_h__

#include "marker.h"

class Point : public Marker {
 public:
  enum PointShape {CIRCLE,BOX,DIAMOND,CROSS,EX,ARROW,BOXCIRCLE};

 protected:
  PointShape shape_;
  char* shapestr_;
  int size_;

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

  void editBegin(int) {}
  void edit(const Vector& v, int h) {}
  void editEnd() {}

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
