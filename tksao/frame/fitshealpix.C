// Copyright (C) 1999-2021
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <string.h>

#include "fitsimage.h"
#include "hpx.h"
#include "fitshpxreproj.h"
#include "util.h"

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
  // HPX intermediate, so they are ignored; lon0 sets the centre.
  const char* proj = fits_->pHPXProj();
  if (proj && strcasecmp(proj,"HPX")) {
    char* upper = toUpper(proj);

    FitsHPX* hpx = new FitsHPX(fits_, order, coord, FitsHPX::EQUATOR, col, 0);
    if (hpx->isValid())
      hpx_ = new FitsHPXReproj(hpx, upper, fits_->pHPXLon0());
    delete hpx;
    delete [] upper;
    return;
  }

  hpx_ = new FitsHPX(fits_, order, coord, layout, col, quad);
}
