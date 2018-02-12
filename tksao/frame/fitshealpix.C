// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "fitsimage.h"
#include "hpx.h"

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
      if (str[0] == 'N')
	order = FitsHPX::NESTED;
      else if (str[0] == 'R')
	order = FitsHPX::RING;
    }
  }

  // Layout
  FitsHPX::Layout layout = FitsHPX::EQUATOR;
  if (fits_->pHPXLayout() >=0)
    layout = (FitsHPX::Layout)fits_->pHPXLayout();

  // Col
  int col =0;
  if (fits_->pHPXColumn() >=0)
    col = fits_->pHPXColumn();
  if (col<0)
    col =0;

  // Quad
  int quad = 0;
  if (fits_->pHPXQuad() >=0)
    quad = fits_->pHPXQuad();
  if (quad<0 || quad>3)
    quad =0;

  hpx_ = new FitsHPX(fits_, order, coord, layout, col, quad);
}
