// Copyright (C) 1999-2021
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __fitshpx_h__
#define __fitshpx_h__

#include "vector.h"
#include "file.h"

class FitsHPX : public FitsFile {
 public:
  enum Order {RING, NESTED, NUNIQ};
  enum CoordSys {UNKNOWN, EQU, GAL, ECL};
  enum Layout {EQUATOR=0, NORTH=1, SOUTH=2};

 private:
  Order order_;
  CoordSys coord_;
  Layout layout_;
  int quad_;
  long nside_;

  FitsBinColumn* col_;
  FitsBinColumn* uniqCol_;
  FitsBinColumn* pixelCol_;

  void build(FitsFile*);
  void buildMOC(FitsFile*);
  void buildPartial(FitsFile*);
  void initHeader(FitsFile*);
  void NESTidx(int nside, int facet, int rotn, int jmap, long long *healidx);
  void RINGidx(int nside, int facet, int rotn, int jmap, long long *healidx);

  // Structural Refactoring Helpers
  static FitsBinColumn* findDefaultDataColumn(FitsBinTableHDU* hdu, FitsBinColumn* excludeCol);
  void adjustFacetForQuad(int& facet) const;
  void applyHalveBlanking(float* row, int nside, int jj, int halve, float blankValue) const;
  int isHalveBlanked(int nside, int ii, int jj, int halve) const;
  void computeIndices(int nside, int facet, int rotn, int jj, long long* healidx);

 public:
  FitsHPX(FitsFile*, Order, CoordSys, Layout, int, int);
  ~FitsHPX();

  static int isHPX(FitsHead*);
  static int isMOC(FitsHead*);

  // What a load of a table isHPX() accepts reads, given no overrides. The
  // load and the probe for the open dialog both use these, so they agree.
  static Order headOrder(FitsHead*);       // ORDERING, default RING
  static CoordSys headSystem(FitsHead*);   // COORDSYS, default UNKNOWN
  static int headMOCOrder(FitsHead*);      // MOCORD_S/MOCORDER/HPXMOC, or -1
  // the pixel index column (UNIQ/NPIX for NUNIQ, PIXEL for an explicit
  // index), or NULL for a full map
  static FitsBinColumn* indexColumn(FitsHead*, Order);
  // the column holding the values: cc is 0-based, -1 for the default
  static FitsBinColumn* dataColumn(FitsHead*, Order, int cc);
  // a column that can hold values (not string, logical, bit or varlen)
  static int isDataColumn(FitsColumn*);
};

#endif
