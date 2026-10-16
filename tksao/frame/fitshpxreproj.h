// Copyright (C) 1999-2021
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __fitshpxreproj_h__
#define __fitshpxreproj_h__

#include "vector.h"
#include "file.h"

// Resample a built FitsHPX image (HPX/XPH layout) into another
// projection through AST: all-sky (AIT, MOL, CAR, ...), zenithal (TAN,
// SIN, ...) centred on (lon, lat) with angular diameter fov, or conic
// (COE, COD, ...) with reference latitude lat. Nearest-neighbour only,
// so every output pixel is a real HEALPix pixel value; pixels outside
// the projection come out NaN.
//
// Takes ownership of the FitsHPX. All-sky images free it once built;
// zenithal and conic windows keep it so recentre() can rebuild the
// window around a new centre. Its data is byte-swapped to native order
// in place (once), so it must not be used elsewhere.
class FitsHPXReproj : public FitsFile {
 private:
  FitsFile* hpx_;      // HPX intermediate, kept for windows
  int hpxNative_;      // hpx_ data already swapped to native order
  int info_;           // index into the projection table
  int nside_;
  double pix_;         // [deg] HEALPix pixel size
  double crpix1_;
  double crpix2_;
  double lon_;         // current centre (lat_ = theta_a for conics)
  double lat_;

  int build(double lon, double lat);
  FitsHead* initHeader(FitsHead*, const char*, double, double, double);
  void swapData(float*, size_t);
  void release();

 public:
  FitsHPXReproj(FitsFile*, const char*, double lon, double lat,
		double fov);
  ~FitsHPXReproj();

  // recentre a window on (lon, lat) [deg, the map's own sky system];
  // returns 0 if this is not a window or the centre is invalid
  int canRecentre();
  int recentre(double lon, double lat);

  // the map's own (lon, lat) [deg] at image pixel img
  int nativeAt(const Vector& img, double* lon, double* lat);

  int isConic();
  double lon() {return lon_;}
  double lat() {return lat_;}
};

#endif
