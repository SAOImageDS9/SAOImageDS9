// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __basemarker_h__
#define __basemarker_h__

#include "marker.h"

#define MAXANNULI 512
#define MAXANGLES 720

class BaseMarker : public Marker {
protected:
  Vector* annuli_;
  int numAnnuli_;

  double *angles_;
  int numAngles_;

  double startAng_;
  double stopAng_;

protected:
  void sortAnnuli();
  int insertAnnuli(Vector);

  void sortAngles();
  void setAngles(double, double, int);
  void setAngles(int, const double*);
  void addAngle(double);
  void deleteAngle(int);
  int isInAngle(Vector&, int);

  Matrix fwdMatrix();
  Matrix bckMatrix();
  Vector fwdMap(const Vector&, Coord::InternalSystem);
  Vector bckMap(const Vector&, Coord::InternalSystem);

public:
  BaseMarker(Base*, const Vector&, double);
  BaseMarker(Base*, const Vector&, double,
	     const char*, int* dsh,
	     int, const char*, const char*, 
	     unsigned short, const char*,
	     const List<Tag>&, const List<CallBack>& cb);
  BaseMarker(const BaseMarker&);
  virtual ~BaseMarker();

  virtual Marker* dup() =0;
  void updateCoords(const Matrix&);

  int numAnnuli() {return numAnnuli_;}
  Vector annuli(int i) {return annuli_[i];}

  int numAngles() {return numAngles_;}
  double angles(int i) {return angles_[i];}

  void setAnnuli(const Vector&);
  void setAnnuli(const Vector&, const Vector&, int);
  void setAnnuli(const Vector*, int);
  
  virtual int addAnnuli(const Vector&) {return 0;}
  void deleteAnnuli(int h);
};

#endif
