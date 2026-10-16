// Copyright (C) 1999-2021
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __fitshpxreproj_h__
#define __fitshpxreproj_h__

#include <math.h>

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
  FitsFile* view_;     // hpx_ data seen as native byte order
  int hpxNative_;      // hpx_ data already swapped to native order
  int info_;           // index into the projection table
  int nside_;
  double pix_;         // [deg] pixel size: HEALPix's, or coarser
  double pixHPX_;      // [deg] HEALPix pixel size
  double planeW_;      // [deg] full extent of the window's projection
  double planeH_;      //   plane (fov), limits the window size
  int coarse_;         // pixels coarsened to cap the window size
  double crpix1_;
  double crpix2_;
  double lon_;         // current centre (lat_ = theta_a for conics)
  double lat_;

  int build(double lon, double lat, const double* centre);
  FitsHead* initHeader(FitsHead*, const char*, double, double, double);
  void swapData(float*, size_t);
  void release();

 public:
  FitsHPXReproj(FitsFile*, const char*, double lon, double lat,
		double fov, int dispW =0, int dispH =0);
  ~FitsHPXReproj();

  // recentre a window on (lon, lat) [deg, the map's own sky system];
  // returns 0 if this is not a window or the centre is invalid
  int canRecentre();
  int recentre(double lon, double lat);
  int reshape(double lon, double lat, double pix, int ww, int hh,
	      const double* centre);
  double pix() {return pix_;}
  double pixHPX() {return pixHPX_;}
  double planeW() {return planeW_;}
  double planeH() {return planeH_;}
  // the largest window at pixel size pix (fov extent, HPX_WINDOW_MAX)
  void maxSize(double pix, int* ww, int* hh);
  // the window already shows its whole projection plane (fov)
  int fullPlane() {
    return pWidth_ >= (int)ceil(planeW_/pix_) + 1 &&
      pHeight_ >= (int)ceil(planeH_/pix_) + 1;}

  // the map's own (lon, lat) [deg] at image pixel img, and back
  int nativeAt(const Vector& img, double* lon, double* lat);
  int pixelAt(double lon, double lat, Vector* img);

  // convert (lon, lat) [deg] in the AST sky system given by attrs (e.g.
  // "System=FK5,Equinox=J2000") to the map's own system; 0 if the map
  // has no celestial system (XLON/XLAT)
  int fromSky(const char* attrs, double lon, double lat,
	      double* olon, double* olat);

  int isConic();

  // the kept HPX intermediate in native byte order (windows only), for
  // whole-map statistics
  FitsFile* hpxView() {return view_;}
  double lon() {return lon_;}
  double lat() {return lat_;}
};

#endif
