// Copyright (C) 1999-2021
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <string.h>
#include <math.h>

#include "fitsimage.h"
#include "hpx.h"
#include "fitshpxreproj.h"
#include "util.h"
#include "wcsast.h"

void FitsImage::initHPX()
{
  if (hpx_)
    delete hpx_;
  hpx_ = NULL;

  // make sure we have rows and cols
  FitsHead* head = fits_->head();
  FitsTableHDU* hdu = NULL;
  if (head) {
    hdu = (FitsTableHDU*)(head->hdu());
    if (!hdu->width() || !hdu->rows())
      return;
  }

  // coordinate system identifier?
  FitsHPX::CoordSys coord = FitsHPX::UNKNOWN;
  if (fits_->pHPXSystem() >= 0)
    coord = (FitsHPX::CoordSys)fits_->pHPXSystem();
  else {
    char* str = head->getString("COORDSYS");
    if (str) {
      if (str[0] == 'G')
	coord = FitsHPX::GAL;
      else if (str[0] == 'E')
	coord = FitsHPX::ECL;
      else if (str[0] == 'C')
	coord = FitsHPX::EQU;
      else if (str[0] == 'Q')
	coord = FitsHPX::EQU;
    }
  }

  // Nested or ring order?
  FitsHPX::Order order = FitsHPX::RING;
  if (fits_->pHPXOrder() >=0)
    order = (FitsHPX::Order)fits_->pHPXOrder();
  else {
    char* str = head->getString("ORDERING");
    if (str) {
      char* upper = toUpper(str);
      if (!strncmp(upper,"NUNIQ",5))
	order = FitsHPX::NUNIQ;
      else if (upper[0] == 'N')
	order = FitsHPX::NESTED;
      else if (upper[0] == 'R')
	order = FitsHPX::RING;
      delete [] upper;
    }
  }

  // Layout
  FitsHPX::Layout layout = FitsHPX::EQUATOR;
  if (fits_->pHPXLayout() >=0)
    layout = (FitsHPX::Layout)fits_->pHPXLayout();

  // Col
  int col = (order == FitsHPX::NUNIQ) ? -1 : 0;
  if (fits_->pHPXColumn() >=0)
    col = fits_->pHPXColumn();
  if (col<0 && order != FitsHPX::NUNIQ)
    col =0;

  // Quad
  int quad = 0;
  if (fits_->pHPXQuad() >=0)
    quad = fits_->pHPXQuad();
  if (quad<0 || quad>3)
    quad =0;

  // Another projection (proj=AIT, MOL, ...; proj=HPX is the default):
  // build the HPX image and resample it. layout/quad only describe the
  // HPX intermediate, so they are ignored; lon0/lat0/fov set the window.
  const char* proj = fits_->pHPXProj();
  if (proj && strcasecmp(proj,"HPX")) {
    char* upper = toUpper(proj);

    // FitsHPXReproj takes ownership of hpx (keeps it for recentring)
    FitsHPX* hpx = new FitsHPX(fits_, order, coord, FitsHPX::EQUATOR, col, 0);
    if (hpx->isValid())
      hpx_ = new FitsHPXReproj(hpx, upper, fits_->pHPXLon0(),
			       fits_->pHPXLat0(), fits_->pHPXFov());
    else
      delete hpx;
    delete [] upper;
    return;
  }

  hpx_ = new FitsHPX(fits_, order, coord, layout, col, quad);
}

// Recentre a resampled HEALPix window (zenithal or conic). Like
// nextBin(), rebuild the image from the new data; the caller finishes
// with Context::hpxFinish(). Returns 0 if this isn't a window or the
// centre is invalid.
int FitsImage::hpxRecentre(double lon, double lat)
{
  FitsHPXReproj* rr = dynamic_cast<FitsHPXReproj*>(hpx_);
  if (!rr || !rr->canRecentre())
    return 0;

  if (!rr->recentre(lon, lat))
    return 0;

  if (manageBlock_) {
    if (block_)
      delete block_;
    if (blockdata_)
      delete blockdata_;
  }
  manageBlock_ =0;
  block_ = base_;
  blockdata_ = basedata_;

  if (manageAnalysis_) {
    if (analysis_)
      delete analysis_;
    if (analysisdata_)
      delete analysisdata_;
  }
  manageAnalysis_ =0;
  analysis_ = block_;
  analysisdata_ = blockdata_;

  load();
  return 1;
}

// Recentre on the sky position at ref (REF coords, e.g. the pan cursor)
int FitsImage::hpxRecentreRef(const Vector& ref)
{
  FitsHPXReproj* rr = dynamic_cast<FitsHPXReproj*>(hpx_);
  if (!rr || !rr->canRecentre())
    return 0;

  double lon, lat;
  if (!rr->nativeAt(ref * refToImage, &lon, &lat))
    return 0;

  // conics keep their reference latitude; only the meridian follows
  if (rr->isConic())
    lat = rr->lat();

  return hpxRecentre(lon, lat);
}

int FitsImage::isHPXWindow()
{
  FitsHPXReproj* rr = dynamic_cast<FitsHPXReproj*>(hpx_);
  return rr && rr->canRecentre();
}

// the map's own (lon, lat) [deg] at ref (REF coords), and back
int FitsImage::hpxNativeAtRef(const Vector& ref, double* lon, double* lat)
{
  FitsHPXReproj* rr = dynamic_cast<FitsHPXReproj*>(hpx_);
  return rr ? rr->nativeAt(ref * refToImage, lon, lat) : 0;
}

int FitsImage::hpxRefAt(double lon, double lat, Vector* ref)
{
  FitsHPXReproj* rr = dynamic_cast<FitsHPXReproj*>(hpx_);
  Vector img;
  if (!rr || !rr->pixelAt(lon, lat, &img))
    return 0;
  *ref = img * imageToRef;
  return 1;
}

// Has the pan point (REF coords) moved far enough from the window's
// centre to rebuild the window around it? More than a quarter of the
// window, so short pans never re-render. A conic only follows the pan
// in longitude, so only horizontal distance counts.
int FitsImage::hpxNeedsRecentre(const Vector& ref)
{
  FitsHPXReproj* rr = dynamic_cast<FitsHPXReproj*>(hpx_);
  if (!rr || !rr->canRecentre())
    return 0;

  Vector img = ref * refToImage;
  double ww = width();
  double hh = height();
  double dx = fabs(img[0] - (ww+1)/2.);
  double dy = fabs(img[1] - (hh+1)/2.);
  if (dx > .25*ww)
    return 1;
  if (!rr->isConic() && dy > .25*hh)
    return 1;
  return 0;
}

// Recentre for a pan to (lon, lat): a zenithal window centres there; a
// conic only follows in longitude and keeps its reference latitude.
int FitsImage::hpxRecentrePan(double lon, double lat)
{
  FitsHPXReproj* rr = dynamic_cast<FitsHPXReproj*>(hpx_);
  if (!rr || !rr->canRecentre())
    return 0;
  return hpxRecentre(lon, rr->isConic() ? rr->lat() : lat);
}

// Convert a sky position vv [deg] in (sys, sky) to the map's own sky
// system, as a pure sky-to-sky conversion. The window's own WCS can't be
// used for this: a target outside the window (e.g. more than 90 deg from
// a TAN centre) has no sensible pixel position. Returns 0 if the map has
// no celestial system (XLON/XLAT) or the conversion fails.
int FitsImage::hpxNativeFromSky(const Vector& vv, Coord::CoordSystem sys,
				Coord::SkyFrame sky, double* lon, double* lat)
{
  FitsHPXReproj* rr = dynamic_cast<FitsHPXReproj*>(hpx_);
  if (!rr || !rr->canRecentre() || !hasWCSCel(sys))
    return 0;

  // as wcsSkyFrame()
  const char* attrs;
  switch (sky) {
  case Coord::FK4:
    attrs = "System=FK4,Equinox=B1950";
    break;
  case Coord::FK5:
    attrs = "System=FK5,Equinox=J2000";
    break;
  case Coord::ICRS:
    attrs = "System=ICRS";
    break;
  case Coord::GALACTIC:
    attrs = "System=GALACTIC";
    break;
  case Coord::ECLIPTIC:
    attrs = "System=ECLIPTIC,Equinox=J2000";
    break;
  default:
    return 0;
  }

  return rr->fromSky(attrs, vv[0], vv[1], lon, lat);
}

// Whole-map clip data for a HEALPix window: one persistent FitsDatam over
// the kept HPX intermediate, so its cached statistics (scan, zscale,
// autocut) survive recentring and the scale limits don't jump.
FitsData* FitsImage::hpxGlobalData()
{
  if (hpxGlobal_)
    return hpxGlobal_;

  FitsHPXReproj* rr = dynamic_cast<FitsHPXReproj*>(hpx_);
  if (!rr || !rr->hpxView())
    return NULL;

  FitsFile* vv = rr->hpxView();
  hpxGlobal_ = new FitsDatam<float>(vv, interp_);
  hpxGlobalBound_ = FitsBound(0, 0, vv->head()->naxis(0),
			      vv->head()->naxis(1));
  return hpxGlobal_;
}

// The ds9 sky frame matching the map's own system; 0 for XLON/XLAT
int FitsImage::hpxSkyFrame(Coord::SkyFrame* sky)
{
  if (!isHPXWindow() || !image_ || !image_->head())
    return 0;
  char* ctype = image_->head()->getString("CTYPE1");
  if (!ctype)
    return 0;
  if (!strncmp(ctype,"GLON",4))
    *sky = Coord::GALACTIC;
  else if (!strncmp(ctype,"RA--",4))
    *sky = Coord::ICRS;
  else if (!strncmp(ctype,"ELON",4))
    *sky = Coord::ECLIPTIC;
  else
    return 0;
  return 1;
}
