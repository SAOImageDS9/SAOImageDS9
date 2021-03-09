// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __basebox_h__
#define __basebox_h__

#include "basemarker.h"

class BaseBox : public BaseMarker {
 protected:
  int numPoints_;
  Vector** vertices_;

 private:
  void newVertices();
  void newVerticesA();
  void newVerticesB();
  void deleteVertices();

  void vertBTest(int* s1, int* s2, double a1, double a2, 
		 double b1, double b2, int ii, int* cnt);
  void vertBPrep(double a1, double a2, double ll, double ul, int ii, int* cnt);
  void vertBSeg(double ang1, double ang2, int ii, int* cnt);

  int isInRef(const Vector& vv, int);

protected:
  void renderX(Drawable, Coord::InternalSystem, RenderMode);
  virtual void renderXDraw(Drawable, GC, XPoint*, RenderMode);

  void renderPS(PSColorSpace);
  virtual void renderPSDraw(int);
  void renderPSFillDraw(int);

#ifdef __WIN32
  void renderWIN32();
  virtual void renderWIN32Draw(Vector*);
#endif

  virtual void updateHandles();
  Vector intersect(Vector, double);

public:
  BaseBox(Base* p, const Vector& ctr, double a);
  BaseBox(Base* p, const Vector& ctr, 
	  double a,
	  const char* clr, int* dsh, 
	  int w, const char* f, const char* t, 
	  unsigned short prop, const char* c, 
	  const List<Tag>& tag, const List<CallBack>& cb);
  BaseBox(const BaseBox&);

  virtual ~BaseBox();

  virtual Marker* dup() =0;

  int isIn(const Vector& vv) 
  {return isIn(vv, Coord::CANVAS);}
  int isIn(const Vector& vv, Coord::InternalSystem sys)
  {return isIn(vv,sys,numAnnuli_-1);}
  int isIn(const Vector& vv, Coord::InternalSystem sys, int nn)
  {return isInRef(bckMap(vv,sys),nn);}
  virtual int isIn(const Vector& vv, Coord::InternalSystem sys, int nn, int aa)
  {return isInRef(bckMap(vv,sys),nn);}

  // valid for non-fixed only
  int isIn(const Vector& vv, const Matrix& bck)
  {return isIn(vv,bck,numAnnuli_-1);}
  int isIn(const Vector& vv, const Matrix& bck, int nn)
  {return isInRef(vv*bck,nn);}

};

#endif
