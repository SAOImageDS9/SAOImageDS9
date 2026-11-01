// Copyright (C) 1999-2021
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <stdio.h>
#include <string.h>
#include <math.h>

#include "fitshpxreproj.h"
#include "util.h"
#include "wcsast.h"

#define R2D (180./M_PI)

// Largest window (zenithal/conic) per axis, in pixels. At the HEALPix
// pixel size a wide window at high nside is enormous (a 360 deg conic at
// nside 8192 is ~50000^2 pixels, 10 GB and ~2 min per recentre), so such
// windows use coarser pixels instead. 4096^2 floats is 64 MB and ~0.8 s.
#define HPX_WINDOW_MAX 4096

// ALLSKY: full extent of the projection plane in degrees (default PVs);
//   centred on (lon0, 0); lat0 and fov are ignored.
// ZENITHAL: centred on (lon0, lat0); fov is the angular diameter on the
//   sky, default fov0, at most fovmax.
// CONIC: reference latitude theta_a = lat0 (default 45); fov is the
//   width of the square image in the projection plane, default fov0.
enum HPXReprojKind {ALLSKY, ZENITHAL, CONIC};

static struct {
  const char* code;
  HPXReprojKind kind;
  double width;
  double height;
  double fov0;
  double fovmax;
} HPXReprojInfo[] = {
  {"AIT", ALLSKY, 4*M_SQRT2*R2D, 2*M_SQRT2*R2D, 0, 0},
  {"MOL", ALLSKY, 4*M_SQRT2*R2D, 2*M_SQRT2*R2D, 0, 0},
  {"CAR", ALLSKY, 360, 180, 0, 0},
  {"SFL", ALLSKY, 360, 180, 0, 0},
  {"GLS", ALLSKY, 360, 180, 0, 0},
  {"PAR", ALLSKY, 360, 180, 0, 0},
  {"CEA", ALLSKY, 360, 2*R2D, 0, 0},
  {"TAN", ZENITHAL, 0, 0, 90, 170},
  {"SIN", ZENITHAL, 0, 0, 180, 180},
  {"STG", ZENITHAL, 0, 0, 180, 340},
  {"ARC", ZENITHAL, 0, 0, 360, 360},
  {"ZEA", ZENITHAL, 0, 0, 360, 360},
  {"COP", CONIC, 0, 0, 360, 720},
  {"COE", CONIC, 0, 0, 360, 720},
  {"COD", CONIC, 0, 0, 360, 720},
  {"COO", CONIC, 0, 0, 360, 720},
  {"BON", CONIC, 0, 0, 360, 720},
  {NULL, ALLSKY, 0, 0, 0, 0}
};

// Projection-plane radius [deg] at angular distance rr [deg] from the
// centre of a zenithal projection (Calabretta & Greisen 2002, sec 5.1).
static double zenithalRadius(const char* code, double rr)
{
  double tt = rr/R2D;
  if (!strcmp(code,"TAN"))
    return R2D*tan(tt);
  if (!strcmp(code,"SIN"))
    return R2D*sin(tt);
  if (!strcmp(code,"STG"))
    return 2*R2D*tan(tt/2);
  if (!strcmp(code,"ARC"))
    return rr;
  if (!strcmp(code,"ZEA"))
    return 2*R2D*sin(tt/2);
  return rr;
}

static AstFrameSet* hpxReprojAst(FitsHead* hd)
{
  AstFitsChan* chan = astFitsChan(NULL, NULL, " ");
  astClear(chan, "Warnings");

  char* cards = hd->cards();
  int ncards = hd->ncard();
  for (int ii=0; ii<ncards; ii++) {
    char buf[81];
    strncpy(buf,cards+(ii*80),80);
    buf[80] = '\0';
    astPutFits(chan, buf, 0);
    if (!astOK)
      astClearStatus;
  }
  astClear(chan, "Card");

  AstFrameSet* fs = (AstFrameSet*)astRead(chan);
  if (!astOK || fs == AST__NULL || !astIsAFrameSet(fs))
    return NULL;
  return fs;
}

// The kept HPX intermediate's data, already byte-swapped to native order
// in place, seen as a FitsFile that says so (the FitsHPX itself still
// reports its original byte order). Doesn't own anything.
class FitsHPXNativeView : public FitsFile {
 public:
  FitsHPXNativeView(FitsFile* src) {
    head_ = src->head();
    manageHead_ = 0;
    data_ = src->data();
    dataSize_ = src->dataSize();
    dataSkip_ = src->dataSkip();
    byteswap_ = 0;
    endian_ = lsb() ? LITTLE : BIG;
    valid_ = 1;
  }
};

FitsHPXReproj::FitsHPXReproj(FitsFile* hpx, const char* proj, double lon,
			     double lat, double fov, int dispW, int dispH)
{
  // we own hpx from here on
  hpx_ = hpx;
  view_ = NULL;
  hpxNative_ = 0;
  info_ = -1;
  nside_ = 0;
  pix_ = 0;
  pixHPX_ = 0;
  planeW_ = planeH_ = 0;
  coarse_ = 0;
  crpix1_ = crpix2_ = 0;
  lon_ = lat_ = 0;

  FitsHead* src = hpx_ ? hpx_->head() : NULL;
  if (!src || !hpx_->data()) {
    release();
    return;
  }

  int ii;
  for (ii=0; HPXReprojInfo[ii].code; ii++)
    if (!strcmp(proj, HPXReprojInfo[ii].code))
      break;
  if (!HPXReprojInfo[ii].code) {
    release();
    return;
  }
  info_ = ii;

  // recover nside from the HPX/XPH pixel scale, 90/nside/sqrt(2)
  double cdelt = fabs(src->getReal("CDELT1", 0));
  if (!cdelt) {
    release();
    return;
  }
  nside_ = (int)(90./(M_SQRT2*cdelt) + .5);

  // match the HEALPix pixel size, sqrt(4pi/(12 nside^2))
  pix_ = sqrt(M_PI/3.)*180./M_PI/nside_;
  pixHPX_ = pix_;

  double width = HPXReprojInfo[ii].width;
  double height = HPXReprojInfo[ii].height;
  switch (HPXReprojInfo[ii].kind) {
  case ALLSKY:
    lat = 0;
    break;
  case ZENITHAL:
  case CONIC:
    if (isnan(fov) || fov <= 0)
      fov = HPXReprojInfo[ii].fov0;
    if (fov > HPXReprojInfo[ii].fovmax)
      fov = HPXReprojInfo[ii].fovmax;
    if (HPXReprojInfo[ii].kind == ZENITHAL) {
      if (isnan(lat))
	lat = 0;
      width = height = 2*zenithalRadius(HPXReprojInfo[ii].code, fov/2);
    }
    else {
      if (isnan(lat))
	lat = 45;
      width = height = fov;
    }
    break;
  }

  // the full extent of the window's projection plane [deg]
  planeW_ = width;
  planeH_ = height;

  // A window starts display-sized: HEALPix pixels (zoom 1 shows them
  // 1:1, as for any image), twice the frame per axis, within the fov.
  // Zooming out later rebuilds it coarser and wider (Base::hpxAutoRefresh).
  // Without a display size, it covers the whole fov.
  coarse_ = 0;
  int ww = (int)ceil(width/pix_) + 2;
  int hh = (int)ceil(height/pix_) + 2;
  if (HPXReprojInfo[ii].kind != ALLSKY) {
    if (dispW > 0 && dispH > 0) {
      if (ww > 2*dispW)
	ww = 2*dispW;
      if (hh > 2*dispH)
	hh = 2*dispH;
    }
    // cap the size by coarsening the pixels (nearest-neighbour still
    // gives real HEALPix values, it just samples them more sparsely)
    if (ww > HPX_WINDOW_MAX-2 || hh > HPX_WINDOW_MAX-2) {
      double big = (ww > hh ? ww : hh)*pix_;
      double p0 = pix_;
      pix_ = big/(HPX_WINDOW_MAX - 4);
      ww = (int)ceil(ww*p0/pix_);
      hh = (int)ceil(hh*p0/pix_);
      if (ww > HPX_WINDOW_MAX-2)
	ww = HPX_WINDOW_MAX-2;
      if (hh > HPX_WINDOW_MAX-2)
	hh = HPX_WINDOW_MAX-2;
      coarse_ = 1;
    }
  }

  // Keep the size even so no pixel centre falls exactly on the central
  // meridian. When lon is a multiple of 90 that meridian is a polar
  // facet seam in HPX, the HPX grid position is an exact .5 tie, and
  // nearest-neighbour can round into the gap between facets.
  pWidth_ = ww;
  pHeight_ = hh;
  pWidth_ += pWidth_ % 2;
  pHeight_ += pHeight_ % 2;

  // Nudge the reference pixel by a tiny, different amount on each axis.
  // A centred grid puts pixel centres exactly on lines of symmetry (the
  // central row/column, and the diagonals of a polar zenithal view),
  // which can coincide with HPX facet seams; there the HPX grid position
  // is an exact .5 tie and nearest-neighbour can pick the wrong side or
  // a gap. The offset moves every pixel centre off those lines.
  crpix1_ = (pWidth_+1)/2. + .001;
  crpix2_ = (pHeight_+1)/2. + .0007;

  if (!build(lon, lat, NULL)) {
    release();
    return;
  }

  // Only windows (zenithal, conic) can be recentred, so only they keep
  // the HPX intermediate; all-sky images free it now.
  if (HPXReprojInfo[ii].kind == ALLSKY)
    release();
  else
    view_ = new FitsHPXNativeView(hpx_);

  valid_ = 1;
}

FitsHPXReproj::~FitsHPXReproj()
{
  if (data_)
    delete [] (float*)data_;
  release();
}

void FitsHPXReproj::release()
{
  if (view_)
    delete view_;
  view_ = NULL;
  if (hpx_)
    delete hpx_;
  hpx_ = NULL;
}

int FitsHPXReproj::canRecentre()
{
  return hpx_ && info_ >= 0 && HPXReprojInfo[info_].kind != ALLSKY;
}

int FitsHPXReproj::isConic()
{
  return info_ >= 0 && HPXReprojInfo[info_].kind == CONIC;
}

int FitsHPXReproj::recentre(double lon, double lat)
{
  return canRecentre() ? build(lon, lat, NULL) : 0;
}

void FitsHPXReproj::maxSize(double pix, int* ww, int* hh)
{
  if (pix < pixHPX_)
    pix = pixHPX_;
  *ww = (int)ceil(planeW_/pix) + 2;
  *hh = (int)ceil(planeH_/pix) + 2;
  if (*ww > HPX_WINDOW_MAX)
    *ww = HPX_WINDOW_MAX;
  if (*hh > HPX_WINDOW_MAX)
    *hh = HPX_WINDOW_MAX;
}

// Rebuild a window with a new pixel size and size: pix [deg] (never finer
// than the HEALPix pixel), ww x hh pixels, clamped to the projection's
// extent (fov) and HPX_WINDOW_MAX. If centre (lon, lat [deg]) is given,
// the window is shifted across the projection plane so that point is at
// its centre (a conic, whose reference latitude is fixed, follows a pan
// this way). Restores the old geometry on failure.
int FitsHPXReproj::reshape(double lon, double lat, double pix, int ww, int hh,
			   const double* centre)
{
  if (!canRecentre())
    return 0;

  double opix = pix_;
  int ow = pWidth_;
  int oh = pHeight_;
  double ocr1 = crpix1_;
  double ocr2 = crpix2_;
  int ocoarse = coarse_;

  pix_ = pix > pixHPX_ ? pix : pixHPX_;
  int mw = (int)ceil(planeW_/pix_) + 2;
  int mh = (int)ceil(planeH_/pix_) + 2;
  if (ww > mw)
    ww = mw;
  if (hh > mh)
    hh = mh;
  // still capped: keep the angular extent, with coarser pixels
  if (ww > HPX_WINDOW_MAX-2 || hh > HPX_WINDOW_MAX-2) {
    double p0 = pix_;
    double big = (ww > hh ? ww : hh)*p0;
    pix_ = big/(HPX_WINDOW_MAX - 4);
    ww = (int)ceil(ww*p0/pix_);
    hh = (int)ceil(hh*p0/pix_);
    if (ww > HPX_WINDOW_MAX-2)
      ww = HPX_WINDOW_MAX-2;
    if (hh > HPX_WINDOW_MAX-2)
      hh = HPX_WINDOW_MAX-2;
  }
  if (ww < 2)
    ww = 2;
  if (hh < 2)
    hh = 2;
  // even, see the constructor
  pWidth_ = ww + ww % 2;
  pHeight_ = hh + hh % 2;
  crpix1_ = (pWidth_+1)/2. + .001;
  crpix2_ = (pHeight_+1)/2. + .0007;
  coarse_ = pix_ > pixHPX_*(1+1e-9);

  if (!build(lon, lat, centre)) {
    pix_ = opix;
    pWidth_ = ow;
    pHeight_ = oh;
    crpix1_ = ocr1;
    crpix2_ = ocr2;
    coarse_ = ocoarse;
    return 0;
  }
  return 1;
}

int FitsHPXReproj::nativeAt(const Vector& img, double* lon, double* lat)
{
  if (!head_)
    return 0;

  int rr = 0;
  astClearStatus;
  astBegin;
  AstFrameSet* fs = hpxReprojAst(head_);
  if (fs) {
    double xx = img[0];
    double yy = img[1];
    double ll, bb;
    astTran2(fs, 1, &xx, &yy, 1, &ll, &bb);
    if (astOK && ll != AST__BAD && bb != AST__BAD) {
      double out[2] = {ll, bb};
      astNorm(fs, out);
      *lon = out[0]*R2D;
      *lat = out[1]*R2D;
      while (*lon < 0)
	*lon += 360;
      while (*lon >= 360)
	*lon -= 360;
      rr = 1;
    }
  }
  astClearStatus;
  astEnd;
  return rr;
}

int FitsHPXReproj::pixelAt(double lon, double lat, Vector* img)
{
  if (!head_)
    return 0;

  int rr = 0;
  astClearStatus;
  astBegin;
  AstFrameSet* fs = hpxReprojAst(head_);
  if (fs) {
    double ll = lon/R2D;
    double bb = lat/R2D;
    double xx, yy;
    astTran2(fs, 1, &ll, &bb, 0, &xx, &yy);
    if (astOK && xx != AST__BAD && yy != AST__BAD) {
      *img = Vector(xx, yy);
      rr = 1;
    }
  }
  astClearStatus;
  astEnd;
  return rr;
}

int FitsHPXReproj::fromSky(const char* attrs, double lon, double lat,
			   double* olon, double* olat)
{
  if (!head_)
    return 0;

  // the map's own system, from the CTYPE prefix
  char* ctype = head_->getString("CTYPE1");
  const char* native = NULL;
  if (ctype) {
    if (!strncmp(ctype,"GLON",4))
      native = "System=GALACTIC";
    else if (!strncmp(ctype,"RA--",4))
      native = "System=ICRS";
    else if (!strncmp(ctype,"ELON",4))
      native = "System=ECLIPTIC,Equinox=J2000";
  }
  if (!native)
    return 0;

  int rr = 0;
  astClearStatus;
  astBegin;
  AstSkyFrame* nat = astSkyFrame("%s", native);
  AstSkyFrame* usr = astSkyFrame("%s", attrs);
  AstFrameSet* cvt = (AstFrameSet*)astConvert(usr, nat, "");
  if (astOK && cvt != AST__NULL) {
    double ll = lon/R2D;
    double bb = lat/R2D;
    double out[2];
    astTran2(cvt, 1, &ll, &bb, 1, out, out+1);
    if (astOK && out[0] != AST__BAD && out[1] != AST__BAD) {
      astNorm(nat, out);
      *olon = out[0]*R2D;
      *olat = out[1]*R2D;
      while (*olon < 0)
	*olon += 360;
      while (*olon >= 360)
	*olon -= 360;
      rr = 1;
    }
  }
  astClearStatus;
  astEnd;
  return rr;
}

// Build the target header for centre (lon, lat) and resample the HPX
// intermediate into it; if centre is given, shift the window so that sky
// point is at its centre. On success, replaces head_ and data_.
int FitsHPXReproj::build(double lon, double lat, const double* centre)
{
  const char* code = HPXReprojInfo[info_].code;
  double crval2 = 0;
  double pv21 = NAN;
  switch (HPXReprojInfo[info_].kind) {
  case ALLSKY:
    break;
  case ZENITHAL:
    if (lat < -90 || lat > 90)
      return 0;
    crval2 = lat;
    break;
  case CONIC:
    // theta_a = 0 is degenerate for conics
    if (lat <= -90 || lat >= 90 || lat == 0)
      return 0;
    pv21 = lat;
    // the conics' reference point is at theta_a; Bonne's is at 0
    crval2 = strcmp(code,"BON") ? lat : 0;
    break;
  }

  FitsHead* src = hpx_->head();
  FitsHead* hd = initHeader(src, code, lon, crval2, pv21);

  if (centre) {
    // where the point lands with the current CRPIX, then shift CRPIX so
    // it lands at the window's centre
    int moved = 0;
    astClearStatus;
    astBegin;
    AstFrameSet* fs = hpxReprojAst(hd);
    if (fs) {
      double ll = centre[0]/R2D;
      double bb = centre[1]/R2D;
      double xx, yy;
      astTran2(fs, 1, &ll, &bb, 0, &xx, &yy);
      if (astOK && xx != AST__BAD && yy != AST__BAD) {
	crpix1_ += (pWidth_+1)/2. + .001 - xx;
	crpix2_ += (pHeight_+1)/2. + .0007 - yy;
	moved = 1;
      }
    }
    astClearStatus;
    astEnd;
    if (moved) {
      delete hd;
      hd = initHeader(src, code, lon, crval2, pv21);
    }
  }

  int iw = src->naxis(0);
  int ih = src->naxis(1);
  size_t inSize = (size_t)iw*ih;
  size_t outSize = (size_t)pWidth_*pHeight_;

  // input in native byte order. Swap the HPX data in place, once, rather
  // than copying it: at high nside the HPX image is gigabytes (6.7 GB at
  // nside 8192).
  float* in = (float*)((char*)hpx_->data()+hpx_->dataSkip());
  if (hpx_->byteswap() && !hpxNative_) {
    swapData(in, inSize);
    hpxNative_ = 1;
  }

  float* out = new float[outSize];
  int ok = 0;

  astClearStatus;
  astBegin;

  AstFrameSet* hpxFS = hpxReprojAst(src);
  AstFrameSet* tgtFS = hpxReprojAst(hd);
  if (hpxFS && tgtFS) {
    // invert so the current Frames are GRID, then go via the sky
    astInvert(hpxFS);
    astInvert(tgtFS);
    AstFrameSet* cvt = (AstFrameSet*)astConvert(hpxFS, tgtFS, "SKY");
    if (astOK && cvt != AST__NULL) {
      AstMapping* map =
	(AstMapping*)astSimplify(astGetMapping(cvt, AST__BASE, AST__CURRENT));

      int lbnd[2] = {1,1};
      int ubndIn[2] = {iw,ih};
      int ubndOut[2] = {pWidth_,pHeight_};
      astResampleF(map, 2, lbnd, ubndIn, in, NULL,
		   AST__NEAREST, NULL, NULL, 0, 0.0, 100, NAN,
		   2, lbnd, ubndOut, lbnd, ubndOut, out, NULL);
      ok = astOK;
    }
  }

  astClearStatus;
  astEnd;

  if (!ok) {
    delete [] out;
    delete hd;
    return 0;
  }

  // same byte order convention as FitsHPX
  if (byteswap_)
    swapData(out, outSize);

  if (data_)
    delete [] (float*)data_;
  data_ = out;
  dataSize_ = outSize;
  dataSkip_ = 0;

  if (head_)
    delete head_;
  head_ = hd;

  lon_ = lon;
  lat_ = lat;
  return 1;
}

FitsHead* FitsHPXReproj::initHeader(FitsHead* src, const char* pcode,
				    double lon, double lat, double pv21)
{
  FitsHead* hd = new FitsHead(pWidth_, pHeight_, 1, -32);

  char* object = src->getString("OBJECT");
  if (object)
    hd->appendString("OBJECT", object, NULL);

  hd->appendReal("CRPIX1", crpix1_, 9, "Coordinate reference pixel");
  hd->appendReal("CRPIX2", crpix2_, 9, "Coordinate reference pixel");
  hd->appendReal("CDELT1", -pix_, 15, "[deg] Coordinate increment");
  hd->appendReal("CDELT2", pix_, 15, "[deg] Coordinate increment");

  // keep the sky system from the HPX CTYPEs (RA--, GLON, ELON, XLON, ...)
  const char* key[2] = {"CTYPE1", "CTYPE2"};
  for (int ii=0; ii<2; ii++) {
    char* ctype = src->getString(key[ii]);
    char buf[9];
    snprintf(buf, 9, "%.4s-%s", ctype ? ctype : "XXXX", pcode);
    hd->appendString(key[ii], buf, NULL);
  }

  while (lon < 0)
    lon += 360;
  while (lon >= 360)
    lon -= 360;
  hd->appendReal("CRVAL1", lon, 15, "[deg] Longitude at the reference point");
  hd->appendReal("CRVAL2", lat, 15, "[deg] Latitude at the reference point");
  if (!isnan(pv21))
    hd->appendReal("PV2_1", pv21, 15, "[deg] Conic/Bonne reference latitude");

  {
    // FitsCard::setComment() writes "= ", so build the card directly
    char card[81];
    snprintf(card, 81, "HISTORY Resampled from HEALPix NSIDE=%d to %s, nearest neighbour",
	     nside_, pcode);
    memset(card+strlen(card), ' ', 80-strlen(card));
    hd->cardins(card, NULL);
  }
  if (coarse_) {
    char card[81];
    snprintf(card, 81, "HISTORY Pixel size %.6g deg, coarser than the HEALPix %.6g deg",
	     pix_, pixHPX_);
    memset(card+strlen(card), ' ', 80-strlen(card));
    hd->cardins(card, NULL);
  }

  hd->updateHDU();
  return hd;
}

void FitsHPXReproj::swapData(float* dest, size_t nn)
{
  for (size_t ii=0; ii<nn; ii++) {
    const char* p = (char*)(dest+ii);
    union {
      char c[4];
      float f;
    } u;
    u.c[3] = *p++;
    u.c[2] = *p++;
    u.c[1] = *p++;
    u.c[0] = *p;
    dest[ii] = u.f;
  }
}
