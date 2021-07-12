// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

// This source has been modified from the original authored by 
// Dr. Mark Calabretta as distributed with WCSLIBS under GNU GPL version 3
// WCSLIB 4.7 - an implementation of the FITS WCS standard.
// Copyright (C) 1995-2011, Mark Calabretta

#include <ctype.h>

#include "hpx.h"
#include "util.h"

FitsHPX::FitsHPX(FitsFile* fits, Order oo, CoordSys ss, Layout ll, 
		 int cc, int qq) 
  : order_(oo), coord_(ss), layout_(ll), quad_(qq)
{
  FitsHead* head = fits->head();
  FitsBinTableHDU* hdu = (FitsBinTableHDU*)(head->hdu());
  col_ = (FitsBinColumn*)hdu->find(cc);
  if (!col_)
    return;

  int nrow = hdu->rows();
  int nelem = col_->repeat();

  nside_ = head->getInteger("NSIDE",0);
  long firstpix = head->getInteger("FIRSTPIX",-1);
  long lastpix = head->getInteger("LASTPIX",-1);

  if (!nside_) {
    // Deduce NSIDE
    if (lastpix >= 0) {
      // If LASTPIX is present without NSIDE we can only assume it's npix.
      nside_ = (int)(sqrt((double)((lastpix+1) / 12)) + 0.5);
    }
    else if (nrow)
      nside_ = (int)(sqrt((double)((nrow * nelem) / 12)) + 0.5);
  }

  long npix = 12*nside_*nside_;

  if (firstpix < 0) 
    firstpix = 0;
  if (lastpix < 0) 
    lastpix  = npix - 1;

  build(fits);

  if (byteswap_)
    swap();

  valid_ = 1;
}

FitsHPX::~FitsHPX()
{
  if (data_)
    delete [] (float*)data_;
}

void FitsHPX::build(FitsFile* fits)
{
  // Number of facets on a side of each layout
  const int NFACET[] = {5, 4, 4};

  // Arrays that define the facet location and rotation for each recognised
  // layout.  Bear in mind that these appear to be upside-down, i.e. the top
  // line contains facet numbers for the bottom row of the output image.
  // Facets numbered -1 are blank.

  // Equatorial (diagonal) facet layout.
  const int FACETS[][5][5] = {{{ 6,  9, -1, -1, -1},
                               { 1,  5,  8, -1, -1},
                               {-1,  0,  4, 11, -1},
                               {-1, -1,  3,  7, 10},
                               {-1, -1, -1,  2,  6}},
                              // North polar (X) facet layout.
                              {{ 8,  4,  4, 11, -1},
                               { 5,  0,  3,  7, -1},
                               { 5,  1,  2,  7, -1},
                               { 9,  6,  6, 10, -1},
                               {-1, -1, -1, -1, -1}},
                              // South polar (X) facet layout.
                              {{ 1,  6,  6,  2, -1},
                               { 5,  9, 10,  7, -1},
                               { 5,  8, 11,  7, -1},
                               { 0,  4,  4,  3, -1},
                               {-1, -1, -1, -1, -1}}};

  // All facets of the equatorial layout are rotated by +45 degrees with
  // respect to the normal orientation, i.e. that with the equator running
  // horizontally.  The rotation recorded for the polar facets is the number
  // of additional positive (anti-clockwise) 90 degree turns with respect to
  // the equatorial layout.

  // Equatorial (diagonal), no facet rotation.
  const int FROTAT[][5][5] = {{{ 0,  0,  0,  0,  0},
                               { 0,  0,  0,  0,  0},
                               { 0,  0,  0,  0,  0},
                               { 0,  0,  0,  0,  0},
                               { 0,  0,  0,  0,  0}},
                              // North polar (X) facet rotation.
                              {{ 3,  3,  0,  0,  0},
                               { 3,  3,  0,  0,  0},
                               { 2,  2,  1,  1,  0},
                               { 2,  2,  1,  1,  0},
                               { 0,  0,  0,  0,  0}},
                              // South polar (X) facet rotation.
                              {{ 1,  1,  2,  2,  0},
                               { 1,  1,  2,  2,  0},
                               { 0,  0,  3,  3,  0},
                               { 0,  0,  3,  3,  0},
                               { 0,  0,  0,  0,  0}}};

  // Facet halving codes.  0: the facet is whole (or wholly blank),
  // 1: blanked bottom-right, 2: top-right, 3: top-left, 4: bottom-left.
  // Positive values mean that the diagonal is included, otherwise not.

  // Equatorial (diagonal), no facet halving.
  const int FHALVE[][5][5] = {{{ 0,  0,  0,  0,  0},
                               { 0,  0,  0,  0,  0},
                               { 0,  0,  0,  0,  0},
                               { 0,  0,  0,  0,  0},
                               { 0,  0,  0,  0,  0}},
                              // North polar (X) facet halving.
                              {{ 0,  1, -4,  0,  0},
                               {-3,  0,  0,  2,  0},
                               { 4,  0,  0, -1,  0},
                               { 0, -2,  3,  0,  0},
                               { 0,  0,  0,  0,  0}},
                              // South polar (X) facet halving.
                              {{ 0,  1, -4,  0,  0},
                               {-3,  0,  0,  2,  0},
                               { 4,  0,  0, -1,  0},
                               { 0, -2,  3,  0,  0},
                               { 0,  0,  0,  0,  0}}};

  FitsHead* head = fits->head();
  FitsTableHDU* hdu = (FitsTableHDU*)(head->hdu());
  int rowlen = hdu->width();
  int nrow = hdu->rows();
  int repeat = col_->repeat();
  char* data = (char*)fits->data();

  int nside = nside_;
  int layout = layout_;
  int nfacet = NFACET[layout];

  pWidth_ = nfacet*nside;
  pHeight_ = pWidth_;

  // create image space
  size_t pSize = (size_t)pWidth_*pHeight_;
  float* dest = new float[pSize];
  for (long long ii=0; ii<pSize; ii++)
    dest[ii] = NAN;

  // Write WCS keyrecords
  initHeader(fits);

  // Allocate arrays
  long healidx[nside];
  float row[nside];

  // Loop vertically facet-by-facet.
  long long fpixel = 1;
  //  longlong group = 0;
  long long nelem = (long long)nside;
  for (int jfacet = 0; jfacet<nfacet; jfacet++) {
    // Loop row-by-row.
    for (int jj = 0; jj<nside; jj++) {
      // Loop horizontally facet-by-facet
      for (int ifacet = 0; ifacet<nfacet; ifacet++) {
        int facet = FACETS[layout][jfacet][ifacet];
        int rotn  = FROTAT[layout][jfacet][ifacet];
        int halve = FHALVE[layout][jfacet][ifacet];

        // Recentre longitude?
        if (quad_ && facet >= 0) {
          if (facet <= 3) {
            facet += quad_;
            if (facet > 3) facet -= 4;
          } 
	  else if (facet <= 7) {
            facet += quad_;
            if (facet > 7) facet -= 4;
          } 
	  else {
            facet += quad_;
            if (facet > 11) facet -= 4;
          }
        }

        // Write out the data
        if (facet < 0)
	  ;
	else {
	  switch (order_) {
	  case NESTED:
            NESTidx(nside, facet, rotn, jj, healidx);
	    break;
	  case RING:
            RINGidx(nside, facet, rotn, jj, healidx);
	    break;
	  }

          // Gather data into the output vector.
	  /*
	  long* healp = healidx;
	  for (float* rowp = row; rowp < row+nside; rowp++)
	    *rowp = col_->value(data+*(healp++),0);
	  */
	  for (int ii=0; ii<nside_; ii++) {
	    int aa = healidx[ii]/repeat;
	    int bb = healidx[ii] - (aa*repeat);
	    if (aa<nrow)
	      row[ii] = col_->value(data+aa*rowlen,bb);
	    else 
	      row[ii] = 0;
	  }

          // Apply blanking to halved facets.
          if (halve) {
	    int i1;
	    int i2;
            if (abs(halve) == 1) {
              // Blank bottom-right.
              i1 = jj;
              i2 = nside;
              if (halve > 0)
		i1++;
            } else if (abs(halve) == 2) {
              // Blank top-right.
              i1 = nside - jj;
              i2 = nside;
              if (halve < 0) 
		i1--;
            } else if (abs(halve) == 3) {
              // Blank top-left.
              i1 = 0;
              i2 = jj;
              if (halve < 0) 
		i2++;
            } else {
              // Blank bottom-left.
              i1 = 0;
              i2 = nside - jj;
              if (halve > 0)
		i2--;
            }

	    for (float* rowp = row+i1; rowp < row+i2; rowp++)
	      *rowp = NAN;
	  }

          // Write out this facet's contribution to this row of the map.
	  memcpy(dest+fpixel-1, row, nside*sizeof(float));
        }

	fpixel += nelem;	
      }
    }
  }

  data_ = dest;

  dataSize_ = pSize;
  dataSkip_ = 0;
}

// (imap,jmap) are 0-relative pixel coordinates in the output map with origin
// at the bottom-left corner of the specified facet which is rotated by
// (45 + rotn * 90) degrees from its natural orientation; imap increases to
// the right and jmap upwards.

void FitsHPX::NESTidx(int nside, int facet, int rotn, int jmap, long *healidx)
{
  // Nested index (0-relative) of the first pixel in this facet.
  int hh = facet*nside*nside;

  int nside1 = nside - 1;
  long* hp = healidx;
  for (int imap = 0; imap < nside; imap++, hp++) {
    // (ii,jj) are 0-relative pixel coordinates with origin in the southern
    // corner of the facet; i increases to the north-east and j to the
    // north-west.
    int ii =0;
    int jj =0;
    if (rotn == 0) {
      ii = nside1 - imap;
      jj = jmap;
    } 
    else if (rotn == 1) {
      ii = nside1 - jmap;
      jj = nside1 - imap;
    } 
    else if (rotn == 2) {
      ii = imap;
      jj = nside1 - jmap;
    } 
    else if (rotn == 3) {
      ii = jmap;
      jj = imap;
    }

    *hp = 0;
    int bit = 1;
    while (ii || jj) {
      if (ii & 1) *hp |= bit;
      bit <<= 1;
      if (jj & 1) *hp |= bit;
      bit <<= 1;
      ii >>= 1;
      jj >>= 1;
    }

    *hp += hh;
  }
}

// (imap,jmap) pixel coordinates are as described above for NESTidx().  This
// function computes the double-pixelisation index then converts it to the
// regular ring index.

void FitsHPX::RINGidx(int nside, int facet, int rotn, int jmap, long *healidx)
{
  const int I0[] = { 1,  3, -3, -1,  0,  2,  4, -2,  1,  3, -3, -1};
  const int J0[] = { 1,  1,  1,  1,  0,  0,  0,  0, -1, -1, -1, -1};

  int n2side = 2 * nside;
  int n8side = 8 * nside;

  // Double-pixelisation index of the last pixel in the north polar cap. */
  int npole = (n2side - 1) * (n2side - 1) - 1;

  // Double-pixelisation pixel coordinates of the centre of the facet. */
  int i0 = nside * I0[facet];
  int j0 = nside * J0[facet];

  int nside1 = nside - 1;
  long* hp = healidx;
  for (int imap = 0; imap < nside; imap++, hp++) {
    // (ii,jj) are 0-relative, double-pixelisation pixel coordinates.  The
    // origin is at the intersection of the equator and prime meridian,
    // i increases to the east (N.B.) and j to the north.
    int ii =0;
    int jj =0;
    if (rotn == 0) {
      ii = i0 + nside1 - (jmap + imap);
      jj = j0 + jmap - imap;
    } 
    else if (rotn == 1) {
      ii = i0 + imap - jmap;
      jj = j0 + nside1 - (imap + jmap);
    } 
    else if (rotn == 2) {
      ii = i0 + (imap + jmap) - nside1;
      jj = j0 + imap - jmap;
    } 
    else if (rotn == 3) {
      ii = i0 + jmap - imap;
      jj = j0 + jmap + imap - nside1;
    }

    // Convert i for counting pixels
    if (ii < 0) 
      ii += n8side;
    ii++;

    if (jj > nside) {
      // North polar regime.
      if (jj == n2side)
        *hp = 0;
      else {
        // Number of pixels in a polar facet with this value of jj.
        int npj = 2 * (n2side - jj);

        // Index of the last pixel in the row above this.
        *hp = (npj - 1) * (npj - 1) - 1;

        // Number of pixels in this row in the polar facets before this.
        *hp += npj * (ii/n2side);

        // Pixel number in this polar facet.
        *hp += ii%n2side - (jj - nside) - 1;
      }
    } 
    else if (jj >= -nside) {
      // Equatorial regime.
      *hp = npole + n8side * (nside - jj) + ii;
    } 
    else {
      // South polar regime.
      *hp = 24 * nside * nside + 1;

      if (jj > -n2side) {
        // Number of pixels in a polar facet with this value of jj.
        int npj = 2 * (jj + n2side);

        // Total number of pixels in this row or below it.
        *hp -= (npj + 1) * (npj + 1);

        // Number of pixels in this row in the polar facets before this.
        *hp += npj * (ii/n2side);

        // Pixel number in this polar facet.
        *hp += ii%n2side + (nside + jj) - 1;
      }
    }

    // Convert double-pixelisation index to regular.
    *hp -= 1;
    *hp /= 2;
  }
}

void FitsHPX::initHeader(FitsFile* fits) 
{
  FitsHead* src = fits->head();

  // create header
  head_ = new FitsHead(pWidth_, pHeight_, 1, -32);

  // OBJECT
  char* object = src->getString("OBJECT");
  if (object)
    head_->appendString("OBJECT", object, NULL);

  // CRPIX1/2
  float crpix1;
  switch (layout_) {
  case EQUATOR:
    crpix1 = (5 * nside_ + 1) / 2.;
    break;
  case NORTH:
  case SOUTH:
    crpix1 = (4 * nside_ + 1) / 2.;
    break;
  }
  float crpix2 = crpix1;
  head_->appendReal("CRPIX1", crpix1, 9, "Coordinate reference pixel");
  head_->appendReal("CRPIX2", crpix2, 9, "Coordinate reference pixel");

  // PCx_y
  float cos45 = sqrt(2.0) / 2.0;
  if (layout_ == EQUATOR) {
    head_->appendReal("PC1_1",  cos45, 15, "Transformation matrix element");
    head_->appendReal("PC1_2",  cos45, 15, "Transformation matrix element");
    head_->appendReal("PC2_1", -cos45, 15, "Transformation matrix element");
    head_->appendReal("PC2_2",  cos45, 15, "Transformation matrix element");
  }

  // CDELT1/2
  float cdelt1 = -90.0 / nside_ / sqrt(2.);
  float cdelt2 = -cdelt1;
  head_->appendReal("CDELT1", cdelt1, 15, "[deg] Coordinate increment");
  head_->appendReal("CDELT2", cdelt2, 15, "[deg] Coordinate increment");

  // CTYPE1/2
  const char* pcode;
  switch (layout_) {
  case EQUATOR:
    pcode = "HPX";
    break;
  case NORTH:
  case SOUTH:
    pcode = "XPH";
    break;
  }
  const char* ctype1;
  const char* ctype2;
  const char* descr1;
  const char* descr2;
  switch (coord_) {
  case EQU:
    ctype1 = "RA--";
    ctype2 = "DEC-";
    descr1 = "Right ascension";
    descr2 = "Declination";
    break;
  case GAL:
    ctype1 = "GLON";
    ctype2 = "GLAT";
    descr1 = "Galactic longitude";
    descr2 = "Galactic latitude";
    break;
  case ECL:
    ctype1 = "ELON";
    ctype2 = "ELAT";
    descr1 = "Ecliptic longitude";
    descr2 = "Ecliptic latitude";
    break;
  case UNKNOWN:
    ctype1 = "XLON";
    ctype2 = "XLAT";
    descr1 = "Longitude";
    descr2 = " Latitude";
  }
  {
    ostringstream cval;
    cval << ctype1 << '-' << pcode << ends;
    ostringstream comm;
    comm << descr1 << " in an " << pcode << " projection" << ends;
    head_->appendString("CTYPE1", cval.str().c_str(), comm.str().c_str());
  }
  {
    ostringstream cval;
    cval << ctype2 << '-' << pcode << ends;
    ostringstream comm;
    comm << descr2 << " in an " << pcode << " projection" << ends;
    head_->appendString("CTYPE2", cval.str().c_str(), comm.str().c_str());
  }

  // CRVAL1/CRVAL2
  float crval1 = 0. + 90.*quad_;
  float crval2;
  switch (layout_) {
  case EQUATOR:
    crval2 = 0.;
    break;
  case NORTH:
    crval1 += 180.;
    crval2 = 90.;
    break;
  case SOUTH:
    crval1 += 180.;
    crval2 = -90.;
    break;
  }
  if (360. < crval1)
    crval1 -= 360.;

  {
    ostringstream comm;
    comm << "[deg] " << descr1 << " at the reference point" << ends;
    head_->appendReal("CRVAL1", crval1, 15, comm.str().c_str());
  }
  {
    ostringstream comm;
    comm << "[deg] " << descr2 << " at the reference point" << ends;
    head_->appendReal("CRVAL2", crval2, 15, comm.str().c_str());
  }

  // PV2_1/2
  switch (layout_) {
  case EQUATOR:
    head_->appendInteger("PV2_1", 4, "HPX H parameter (longitude)");
    head_->appendInteger("PV2_2", 3, "HPX K parameter (latitude)");
    break;
  case NORTH:
  case SOUTH:
    head_->appendReal("LONPOLE", 180., 9, "[deg] Native longitude of the celestial pole");
    break;
  }

  // we added cards
  head_->updateHDU();
}

void FitsHPX::swap()
{
  if (!data_)
    return;

  // we now need to byteswap back to native form
  float* dest = (float*)data_;
  for (int ii=0; ii<dataSize_; ii++) {
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
