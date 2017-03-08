// Copyright (C) 1999-2016
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __fvcontour_h__
#define __fvcontour_h__

#include "vector.h"
#include "contour.h"
#include "frscale.h"
#include "inversescale.h"

class FVContour {
 public:
  enum Method {SMOOTH, BLOCK};

 private:
  enum {top, right, bottom, left, none};

  Base* parent_;
  List<ContourLevel> lcontourlevel_;

  char* colorName_;
  int lineWidth_;
  int dash_;
  int dlist_[2];

  Method method_;
  int smooth_;
  int numLevel_;

  FrScale frScale_;

  char* level_;
  InverseScale* scale_;

  void buildScale(FitsImage* fits);
  void unity(FitsImage*);
  void bin(FitsImage*);
  void nobin(FitsImage*);
  void convolve(FitsImage*, double*, double*, int);
  double* tophat(int);
  double* gaussian(int);
  void build(long xdim, long ydim, double *image, Matrix&);
  void trace(long xdim, long ydim, double cntr,
	     long xCell, long yCell, int side,
	     double** rows, char* useGrid, Matrix&, ContourLevel*);

public:
  FVContour();
  ~FVContour();

  List<ContourLevel>& lcontourlevel() {return lcontourlevel_;}

  void create(Base*, FitsImage*, FrScale*, 
	      const char*, int, int, 
	      Method, int, int, 
	      const char*);
  void update(FitsImage*);
  void update(FitsImage*, FrScale*);

  void append(FitsImage*);

  int isEmpty() {return lcontourlevel_.isEmpty();}

  const char* methodName();
  char* level() {return level_;}
  int numLevel() {return numLevel_;}
  int smooth() {return smooth_;}

  FrScale* frScale() {return &frScale_;}

  const char* getColorName() {return colorName_;}
  int getDash() {return dash_;}
  int getLineWidth() {return lineWidth_;}
};

#endif
