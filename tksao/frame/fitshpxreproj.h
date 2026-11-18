// Copyright (C) 1999-2021
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __fitshpxreproj_h__
#define __fitshpxreproj_h__

#include <math.h>
#include <map>
#include <memory>
#include <vector>

#include "vector.h"
#include "file.h"

class FitsHiPS;

// a deep window's tile of order K, as sampled: its own data (dk 0), the
// data of its ancestor dk orders up, or none (data NULL: the map shows
// through); hold keeps the data alive
struct HPXTileRef {
  const float* data;
  int dk;
  std::shared_ptr<const float> hold;
  HPXTileRef() : data(NULL), dk(0) {}
};

// Sample a HEALPix map (a flat FitsHPX: the map's pixels as they are,
// see fitsy/hpx.h) into a projection: all-sky (AIT, MOL, CAR, ...), zenithal (TAN, SIN, ...)
// centred on (lon, lat) with angular diameter fov, or conic (COE, COD,
// ...) with reference latitude lat. Nearest-neighbour only, so every
// output pixel is a real HEALPix pixel value; pixels outside the
// projection come out NaN. The resampling uses AST's projection routines
// directly, on nthreads threads, falling back to AST's own resampling
// for anything that path doesn't handle.
//
// Each output pixel's centre goes to the sky, and the HEALPix pixel there
// (NESTED or RING, hpxnest.h) gives its value; a deep window's tiles are
// looked up the same way. Takes ownership of the FitsHPX. All-sky images
// free it once built; zenithal and conic windows keep it so recentre()
// can rebuild the window around a new centre.
class FitsHPXReproj : public FitsFile {
 private:
  FitsFile* hpx_;      // the map (flat FitsHPX), kept for windows
  const float* map_;   // its pixels, native order
  int mapNested_;      // NESTED, else RING
  int info_;           // index into the projection table
  int nside_;
  double pix_;         // [deg] pixel size: HEALPix's, or coarser
  double pixHPX_;      // [deg] HEALPix pixel size
  double planeW_;      // [deg] full extent of the window's projection
  double planeH_;      //   plane (fov), limits the window size
  int coarse_;         // pixels coarsened to cap the window size
  int nthreads_;       // threads for resampling
  double crpix1_;
  double crpix2_;
  double lon_;         // current centre (lat_ = theta_a for conics)
  double lat_;

  int refParams(double lat, double* crval2, double* pv21);
  // Deep HiPS windows (TODO_HIPS.md Phase 5): when the window's pixels
  // are finer than the map's (the coarse level), they are sampled from
  // the HiPS tiles of the order that fits, from the process-wide cache
  // of decoded tiles (FitsHiPS::tile); a tile not available falls back
  // to its deepest available ancestor, then to the map.
  FitsHiPS* deep_;     // the tile source (not owned), or NULL
  int deepOrder_;      // order sampled by the last build, -1: the map
  std::vector<long long> missing_;      // tiles the last build wanted
					// but couldn't read (order<<56|N)
  // the tiles the last build sampled (order refsOrder_), kept for the
  // next: a pan or refresh mostly samples the same ones
  std::map<long long, HPXTileRef> refs_;
  int refsOrder_;
  HPXTileRef resolveTile(int order, long long nn);

  int build(double lon, double lat, const double* centre);
  FitsHead* initHeader(FitsHead*, const char*, double, double, double);
  void swapData(float*, size_t);
  void release();

 public:
  FitsHPXReproj(FitsFile*, const char*, double lon, double lat,
		double fov, int dispW =0, int dispH =0, int nthreads =1,
		FitsHiPS* deep =NULL);
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
  // (lon, lat) still placeable in a window rebuilt around (clon, clat)
  int reachable(double clon, double clat, double lon, double lat);
  // the centre of a north-up zenithal window that puts (lon, lat) at
  // intermediate coords (uu, vv) [deg]; (clon, clat) in: a guess
  int zenithalCentre(double lon, double lat, double uu, double vv,
		     double* clon, double* clat);
  // the same for many points, building the WCS once per call: failures
  // come back as NaN (nativeAt/pixelAt build it for every point, ~160 us)
  int nativesAt(int nn, const double* xx, const double* yy,
		double* lon, double* lat);
  int pixelsAt(int nn, const double* lon, const double* lat,
	       double* xx, double* yy);
  // a copy of the current window's header, for remapFrom() after a rebuild
  FitsHead* headCopy() {return head_ ? new FitsHead(*head_) : NULL;}
  // image pixels of the window described by `from` -> image pixels of the
  // current window, in place, through the sky; points that can't be
  // placed become NaN. Two array transforms, so cheap for many points.
  int remapFrom(FitsHead* from, int nn, double* xx, double* yy);

  // convert (lon, lat) [deg] in the AST sky system given by attrs (e.g.
  // "System=FK5,Equinox=J2000") to the map's own system; 0 if the map
  // has no celestial system (XLON/XLAT)
  int fromSky(const char* attrs, double lon, double lat,
	      double* olon, double* olat);

  int isConic();

  // the kept map (windows only), a native-order image of all its pixels,
  // for whole-map statistics
  FitsFile* hpxView() {return hpx_;}
  double lon() {return lon_;}
  double lat() {return lat_;}

  // deep windows: the order the window shows (-1: the map), and the
  // tiles it wanted but didn't have (order<<56 | N), for fetching
  int deepOrder() {return deepOrder_;}
  const std::vector<long long>& missingTiles() {return missing_;}
};

#endif
