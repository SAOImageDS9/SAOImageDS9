// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __fvcontour_h__
#define __fvcontour_h__

#include "vector.h"
#include "contour.h"
#include "frscale.h"
#include "inversescale.h"

class FVContour;

typedef struct {
  double* kernel;
  double* src;
  double* dest;
  int xmin;
  int ymin;
  int xmax;
  int ymax;
  int width;
  int height;
  int r;
  Matrix mm;
  Base* parent;
  int numcontour;
  double* contour;
  unsigned long color;
  char* colorName;
  int lineWidth;
  int dash;
  int* dlist;
  List<ContourLevel>* lcl;
} t_fvcontour_arg;

class FVContour {
 public:
  enum Method {SMOOTH, BLOCK};

 private:
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
  double* kernel_;

  void buildScale(FitsImage* fits);
  void unity(FitsImage*, pthread_t* thread, void* targ);
  void smooth(FitsImage*, pthread_t* thread, void* targ);
  void block(FitsImage*, pthread_t* thread, void* targ);

public:
  FVContour();
  ~FVContour();

  void create(Base*, FitsImage*, FrScale*, 
	      const char*, int, int, 
	      Method, int, int, 
	      const char*);
  void update(FitsImage*);
  void update(FitsImage*, FrScale*);

  void append(List<ContourLevel>*);
  void append(FitsImage*, pthread_t* thread, void* targ);

  int isEmpty() {return lcontourlevel_.isEmpty();}

  Base* parent() {return parent_;}
  List<ContourLevel>& lcontourlevel() {return lcontourlevel_;}

  const char* colorName() {return colorName_;}
  int lineWidth() {return lineWidth_;}
  int dash() {return dash_;}
  int* dlist() {return dlist_;}

  const char* methodName();
  int numLevel() {return numLevel_;}
  int smooth() {return smooth_;}

  FrScale* frScale() {return &frScale_;}

  InverseScale* scale() {return scale_;}
  char* level() {return level_;}
};

#endif
