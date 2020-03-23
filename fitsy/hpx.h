// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __fitshpx_h__
#define __fitshpx_h__

#include "vector.h"
#include "file.h"

class FitsHPX : public FitsFile {
 public:
  enum Order {RING, NESTED};
  enum CoordSys {UNKNOWN, EQU, GAL, ECL};
  enum Layout {EQUATOR=0, NORTH=1, SOUTH=2};

 private:
  Order order_;
  CoordSys coord_;
  Layout layout_;
  int quad_;
  long nside_;

  FitsBinColumn* col_;

  void build(FitsFile*);
  void initHeader(FitsFile*);
  void swap();
  void NESTidx(int nside, int facet, int rotn, int jmap, long *healidx);
  void RINGidx(int nside, int facet, int rotn, int jmap, long *healidx);

 public:
  FitsHPX(FitsFile*, Order, CoordSys, Layout, int, int);
  ~FitsHPX();
};

#endif
