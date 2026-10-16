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

FitsHPXReproj::FitsHPXReproj(FitsFile* hpx, const char* proj, double lon,
			     double lat, double fov)
{
  // we own hpx from here on
  hpx_ = hpx;
  hpxNative_ = 0;
  info_ = -1;
  nside_ = 0;
  pix_ = 0;
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

  // Keep the size even so no pixel centre falls exactly on the central
  // meridian. When lon is a multiple of 90 that meridian is a polar
  // facet seam in HPX, the HPX grid position is an exact .5 tie, and
  // nearest-neighbour can round into the gap between facets.
  pWidth_ = (int)ceil(width/pix_) + 2;
  pHeight_ = (int)ceil(height/pix_) + 2;
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

  if (!build(lon, lat)) {
    release();
    return;
  }

  // Only windows (zenithal, conic) can be recentred, so only they keep
  // the HPX intermediate; all-sky images free it now.
  if (HPXReprojInfo[ii].kind == ALLSKY)
    release();

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
  return canRecentre() ? build(lon, lat) : 0;
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

// Build the target header for centre (lon, lat) and resample the HPX
// intermediate into it. On success, replaces head_ and data_.
int FitsHPXReproj::build(double lon, double lat)
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
