// Copyright (C) 1999-2021
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <stdio.h>
#include <string.h>
#include <math.h>

#include "fitshpxreproj.h"
#include "util.h"
#include "wcsast.h"

// full extent of the projection plane in degrees (default PVs)
static struct {
  const char* code;
  double width;
  double height;
} HPXReprojInfo[] = {
  {"AIT", 4*M_SQRT2*180/M_PI, 2*M_SQRT2*180/M_PI},
  {"MOL", 4*M_SQRT2*180/M_PI, 2*M_SQRT2*180/M_PI},
  {"CAR", 360, 180},
  {"SFL", 360, 180},
  {"GLS", 360, 180},
  {"PAR", 360, 180},
  {"CEA", 360, 2*180/M_PI},
  {NULL, 0, 0}
};

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

FitsHPXReproj::FitsHPXReproj(FitsFile* hpx, const char* proj, double lon)
{
  FitsHead* src = hpx->head();
  if (!src || !hpx->data())
    return;

  int ii;
  for (ii=0; HPXReprojInfo[ii].code; ii++)
    if (!strcmp(proj, HPXReprojInfo[ii].code))
      break;
  if (!HPXReprojInfo[ii].code)
    return;

  // recover nside from the HPX/XPH pixel scale, 90/nside/sqrt(2)
  double cdelt = fabs(src->getReal("CDELT1", 0));
  if (!cdelt)
    return;
  int nside = (int)(90./(M_SQRT2*cdelt) + .5);

  // match the HEALPix pixel size, sqrt(4pi/(12 nside^2))
  double pix = sqrt(M_PI/3.)*180./M_PI/nside;
  // Keep the size even so no pixel centre falls exactly on the central
  // meridian. When lon is a multiple of 90 that meridian is a polar
  // facet seam in HPX, the HPX grid position is an exact .5 tie, and
  // nearest-neighbour can round into the gap between facets.
  pWidth_ = (int)ceil(HPXReprojInfo[ii].width/pix) + 2;
  pHeight_ = (int)ceil(HPXReprojInfo[ii].height/pix) + 2;
  pWidth_ += pWidth_ % 2;
  pHeight_ += pHeight_ % 2;

  initHeader(hpx, HPXReprojInfo[ii].code, lon, nside, pix,
	     (pWidth_+1)/2., (pHeight_+1)/2.);

  int iw = hpx->head()->naxis(0);
  int ih = hpx->head()->naxis(1);
  size_t inSize = (size_t)iw*ih;
  size_t outSize = (size_t)pWidth_*pHeight_;

  // input in native byte order
  float* in = new float[inSize];
  memcpy(in, (char*)hpx->data()+hpx->dataSkip(), inSize*sizeof(float));
  if (hpx->byteswap())
    swapData(in, inSize);

  float* out = new float[outSize];

  astClearStatus;
  astBegin;

  AstFrameSet* hpxFS = hpxReprojAst(src);
  AstFrameSet* tgtFS = hpxReprojAst(head_);
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
      if (astOK)
	data_ = out;
    }
  }

  astClearStatus;
  astEnd;

  delete [] in;
  if (!data_) {
    delete [] out;
    return;
  }

  dataSize_ = outSize;
  dataSkip_ = 0;

  // same byte order convention as FitsHPX
  if (byteswap_)
    swapData((float*)data_, dataSize_);

  valid_ = 1;
}

FitsHPXReproj::~FitsHPXReproj()
{
  if (data_)
    delete [] (float*)data_;
}

void FitsHPXReproj::initHeader(FitsFile* hpx, const char* pcode, double lon,
			       int nside, double pix,
			       double crpix1, double crpix2)
{
  FitsHead* src = hpx->head();

  head_ = new FitsHead(pWidth_, pHeight_, 1, -32);

  char* object = src->getString("OBJECT");
  if (object)
    head_->appendString("OBJECT", object, NULL);

  head_->appendReal("CRPIX1", crpix1, 9, "Coordinate reference pixel");
  head_->appendReal("CRPIX2", crpix2, 9, "Coordinate reference pixel");
  head_->appendReal("CDELT1", -pix, 15, "[deg] Coordinate increment");
  head_->appendReal("CDELT2", pix, 15, "[deg] Coordinate increment");

  // keep the sky system from the HPX CTYPEs (RA--, GLON, ELON, XLON, ...)
  const char* key[2] = {"CTYPE1", "CTYPE2"};
  for (int ii=0; ii<2; ii++) {
    char* ctype = src->getString(key[ii]);
    char buf[9];
    snprintf(buf, 9, "%.4s-%s", ctype ? ctype : "XXXX", pcode);
    head_->appendString(key[ii], buf, NULL);
  }

  while (lon < 0)
    lon += 360;
  while (lon >= 360)
    lon -= 360;
  head_->appendReal("CRVAL1", lon, 15, "[deg] Longitude at the reference point");
  head_->appendReal("CRVAL2", 0., 15, "[deg] Latitude at the reference point");

  {
    // FitsCard::setComment() writes "= ", so build the card directly
    char card[81];
    snprintf(card, 81, "HISTORY Resampled from HEALPix NSIDE=%d to %s, nearest neighbour",
	     nside, pcode);
    memset(card+strlen(card), ' ', 80-strlen(card));
    head_->cardins(card, NULL);
  }

  head_->updateHDU();
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
