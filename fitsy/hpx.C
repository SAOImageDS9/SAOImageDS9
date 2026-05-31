// Copyright (C) 1999-2021
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

// This source has been modified from the original authored by
// Dr. Mark Calabretta as distributed with WCSLIBS under GNU GPL version 3
// WCSLIB 4.7 - an implementation of the FITS WCS standard.
// Copyright (C) 1995-2011, Mark Calabretta

#include <ctype.h>
#include <limits.h>
#include <string.h>

#include <algorithm>
#include <vector>

#include "hpx.h"
#include "util.h"

// Facet layout, rotation, and blanking tables for the HPX/XPH image layouts.
static const int NFACET[] = {5, 4, 4};

static const int FACETS[][5][5] = {{{ 6,  9, -1, -1, -1},
				    { 1,  5,  8, -1, -1},
				    {-1,  0,  4, 11, -1},
				    {-1, -1,  3,  7, 10},
				    {-1, -1, -1,  2,  6}},
				   {{ 8,  4,  4, 11, -1},
				    { 5,  0,  3,  7, -1},
				    { 5,  1,  2,  7, -1},
				    { 9,  6,  6, 10, -1},
				    {-1, -1, -1, -1, -1}},
				   {{ 1,  6,  6,  2, -1},
				    { 5,  9, 10,  7, -1},
				    { 5,  8, 11,  7, -1},
				    { 0,  4,  4,  3, -1},
				    {-1, -1, -1, -1, -1}}};

static const int FROTAT[][5][5] = {{{ 0,  0,  0,  0,  0},
				    { 0,  0,  0,  0,  0},
				    { 0,  0,  0,  0,  0},
				    { 0,  0,  0,  0,  0},
				    { 0,  0,  0,  0,  0}},
				   {{ 3,  3,  0,  0,  0},
				    { 3,  3,  0,  0,  0},
				    { 2,  2,  1,  1,  0},
				    { 2,  2,  1,  1,  0},
				    { 0,  0,  0,  0,  0}},
				   {{ 1,  1,  2,  2,  0},
				    { 1,  1,  2,  2,  0},
				    { 0,  0,  3,  3,  0},
				    { 0,  0,  3,  3,  0},
				    { 0,  0,  0,  0,  0}}};

static const int FHALVE[][5][5] = {{{ 0,  0,  0,  0,  0},
				    { 0,  0,  0,  0,  0},
				    { 0,  0,  0,  0,  0},
				    { 0,  0,  0,  0,  0},
				    { 0,  0,  0,  0,  0}},
				   {{ 0,  1, -4,  0,  0},
				    {-3,  0,  0,  2,  0},
				    { 4,  0,  0, -1,  0},
				    { 0, -2,  3,  0,  0},
				    { 0,  0,  0,  0,  0}},
				   {{ 0,  1, -4,  0,  0},
				    {-3,  0,  0,  2,  0},
				    { 4,  0,  0, -1,  0},
				    { 0, -2,  3,  0,  0},
				    { 0,  0,  0,  0,  0}}};

struct MocRange {
  long long first;
  long long last;
  double value;
};

struct MocCell {
  int order;
  long long npix;
  float value;
};

struct PartialCell {
  long long pixel;
  float value;
};

static bool mocRangeLess(const MocRange& a, const MocRange& b)
{
  return a.first < b.first;
}

static bool partialCellLess(const PartialCell& a, const PartialCell& b)
{
  return a.pixel < b.pixel;
}

static const MocRange* findMocRange(const vector<MocRange>& ranges,
				    long long idx)
{
  size_t lo = 0;
  size_t hi = ranges.size();
  while (lo < hi) {
    size_t mid = lo + (hi-lo)/2;
    if (ranges[mid].last <= idx)
      lo = mid+1;
    else
      hi = mid;
  }

  if (lo < ranges.size() && ranges[lo].first <= idx && idx < ranges[lo].last)
    return &ranges[lo];

  return NULL;
}

static int keywordStarts(FitsHead* head, const char* key, const char* value)
{
  char* str = head->getString(key);
  if (!str)
    return 0;

  char* upper = toUpper(str);
  int result = !strncmp(upper, value, strlen(value));
  delete [] upper;

  return result;
}

static int keywordContains(FitsHead* head, const char* key, const char* value)
{
  char* str = head->getString(key);
  if (!str)
    return 0;

  char* upper = toUpper(str);
  int result = strstr(upper, value) ? 1 : 0;
  delete [] upper;

  return result;
}

static int uniqOrder(long long uniq)
{
  if (uniq < 4)
    return -1;

  long long nside2 = uniq/4;
  int order = 0;
  while (nside2 >= 4) {
    nside2 >>= 2;
    order++;
  }

  return order;
}

static long long uniqOffset(int order)
{
  if (order < 0 || order > 30)
    return 0;

  return 4LL << (2*order);
}

static int mocHeaderOrder(FitsHead* head)
{
  if (head->find("MOCORD_S"))
    return head->getInteger("MOCORD_S",-1);
  if (head->find("MOCORDER"))
    return head->getInteger("MOCORDER",-1);
  if (head->find("HPXMOC"))
    return head->getInteger("HPXMOC",-1);

  return -1;
}

int FitsHPX::isMOC(FitsHead* head)
{
  if (!head || !head->isBinTable())
    return 0;

  if (!keywordStarts(head, "ORDERING", "NUNIQ"))
    return 0;

  if (head->find("MOCDIM") && !keywordContains(head, "MOCDIM", "SPACE"))
    return 0;

  if (head->find("MOCORD_S") || head->find("MOCORDER") ||
      head->find("HPXMOC"))
    return 1;

  FitsTableHDU* hdu = (FitsTableHDU*)head->hdu();
  if (!hdu || !hdu->cols())
    return 0;

  FitsColumn* col = hdu->find("UNIQ");
  if (!col)
    col = hdu->find("NPIX");
  if (!col)
    col = hdu->find(0);

  return col && col->isInt();
}

int FitsHPX::isHPX(FitsHead* head)
{
  if (!head || !head->isBinTable())
    return 0;

  if (head->find("PIXTYPE") && keywordStarts(head, "PIXTYPE", "HEALPIX"))
    return 1;

  if (head->find("NSIDE"))
    return 1;

  return isMOC(head);
}

FitsHPX::FitsHPX(FitsFile* fits, Order oo, CoordSys ss, Layout ll,
		 int cc, int qq)
  : order_(oo), coord_(ss), layout_(ll), quad_(qq)
{
  FitsHead* head = fits->head();
  FitsBinTableHDU* hdu = (FitsBinTableHDU*)(head->hdu());
  col_ = NULL;
  uniqCol_ = NULL;
  pixelCol_ = NULL;

  if (order_ == NUNIQ) {
    uniqCol_ = (FitsBinColumn*)hdu->find("UNIQ");
    if (!uniqCol_)
      uniqCol_ = (FitsBinColumn*)hdu->find("NPIX");
    if (!uniqCol_)
      uniqCol_ = (FitsBinColumn*)hdu->find(0);

    if (!uniqCol_ || !uniqCol_->isInt())
      return;

    if (cc >= 0) {
      col_ = (FitsBinColumn*)hdu->find(cc);
      if (col_ == uniqCol_)
	col_ = NULL;
    }
    else {
      for (int ii=0; ii<hdu->cols(); ii++) {
	FitsBinColumn* col = (FitsBinColumn*)hdu->find(ii);
	if (col && col != uniqCol_ && col->type() != 'A' &&
	    col->type() != 'L' && col->type() != 'X' &&
	    col->type() != 'P' && col->type() != 'Q') {
	  col_ = col;
	  break;
	}
      }
    }
  }
  else if (head && keywordStarts(head, "INDXSCHM", "EXPLICIT")) {
    pixelCol_ = (FitsBinColumn*)hdu->find("PIXEL");
    if (!pixelCol_)
      pixelCol_ = (FitsBinColumn*)hdu->find(0);

    if (cc >= 0) {
      col_ = (FitsBinColumn*)hdu->find(cc);
      if (col_ == pixelCol_)
	col_ = NULL;
    }
    else {
      for (int ii=0; ii<hdu->cols(); ii++) {
	FitsBinColumn* col = (FitsBinColumn*)hdu->find(ii);
	if (col && col != pixelCol_ && col->type() != 'A' &&
	    col->type() != 'L' && col->type() != 'X' &&
	    col->type() != 'P' && col->type() != 'Q') {
	  col_ = col;
	  break;
	}
      }
    }
    if (!col_)
      return;

    nside_ = head->getInteger("NSIDE", 0);
  }
  else {
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
  }

  build(fits);

  if (byteswap_)
    swap();

  if (data_ && head_)
    valid_ = 1;
}

FitsHPX::~FitsHPX()
{
  if (data_)
    delete [] (float*)data_;
}

void FitsHPX::build(FitsFile* fits)
{
  if (order_ == NUNIQ) {
    buildMOC(fits);
    return;
  }

  FitsHead* head = fits->head();
  if (head && keywordStarts(head, "INDXSCHM", "EXPLICIT")) {
    buildPartial(fits);
    return;
  }

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
  long long healidx[nside];
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
	  case NUNIQ:
	    break;
	  }

          // Gather data into the output vector.
	  /*
	  long* healp = healidx;
	  for (float* rowp = row; rowp < row+nside; rowp++)
	    *rowp = col_->value(data+*(healp++),0);
	  */
	  for (int ii=0; ii<nside_; ii++) {
      long long aa = healidx[ii] / repeat;
      int bb = (int)(healidx[ii] - aa * repeat);
      if (aa < nrow)
        row[ii] = col_->value(data + (size_t)aa * (size_t)rowlen, bb);
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

void FitsHPX::buildMOC(FitsFile* fits)
{
  if (!uniqCol_)
    return;

  FitsHead* head = fits->head();
  FitsTableHDU* hdu = (FitsTableHDU*)(head->hdu());
  int rowlen = hdu->width();
  int nrow = hdu->rows();
  char* data = (char*)fits->data();

  vector<MocCell> cells;
  cells.reserve(nrow);

  int maxorder = mocHeaderOrder(head);
  for (int row=0; row<nrow; row++) {
    char* ptr = data + row*rowlen;
    long long uniq = uniqCol_->integer(ptr,0);
    int order = uniqOrder(uniq);
    long long offset = uniqOffset(order);
    long long npix = uniq - offset;

    if (order < 0 || !offset || npix < 0)
      continue;

    MocCell cell;
    cell.order = order;
    cell.npix = npix;
    cell.value = col_ ? (float)col_->value(ptr,0) : 1;
    cells.push_back(cell);

    if (order > maxorder)
      maxorder = order;
  }

  if (maxorder < 0 || maxorder > 29)
    return;

  if (maxorder >= (int)(sizeof(long)*CHAR_BIT))
    return;

  nside_ = 1L << maxorder;
  if (nside_ > INT_MAX)
    return;

  int nside = (int)nside_;
  int layout = layout_;
  int nfacet = NFACET[layout];
  if (nside > INT_MAX/nfacet)
    return;

  pWidth_ = nfacet*nside;
  pHeight_ = pWidth_;

  vector<MocRange> ranges;
  ranges.reserve(cells.size());
  for (size_t ii=0; ii<cells.size(); ii++) {
    int shift = 2*(maxorder - cells[ii].order);
    MocRange range;
    range.first = cells[ii].npix << shift;
    range.last = (cells[ii].npix + 1) << shift;
    range.value = cells[ii].value;
    ranges.push_back(range);
  }
  sort(ranges.begin(), ranges.end(), mocRangeLess);

  size_t pSize = (size_t)pWidth_*pHeight_;
  float* dest = new float[pSize];
  for (long long ii=0; ii<pSize; ii++)
    dest[ii] = 0;

  initHeader(fits);

  long long* healidx = new long long[nside];
  float* row = new float[nside];

  long long fpixel = 1;
  long long nelem = (long long)nside;
  for (int jfacet = 0; jfacet<nfacet; jfacet++) {
    for (int jj = 0; jj<nside; jj++) {
      for (int ifacet = 0; ifacet<nfacet; ifacet++) {
	for (int ii=0; ii<nside; ii++)
	  row[ii] = 0;

	int facet = FACETS[layout][jfacet][ifacet];
	int rotn  = FROTAT[layout][jfacet][ifacet];
	int halve = FHALVE[layout][jfacet][ifacet];

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

	if (facet >= 0) {
	  NESTidx(nside, facet, rotn, jj, healidx);

	  for (int ii=0; ii<nside; ii++) {
	    const MocRange* range = findMocRange(ranges, healidx[ii]);
	    if (range)
	      row[ii] = range->value;
	  }

	  if (halve) {
	    int i1;
	    int i2;
	    if (abs(halve) == 1) {
	      i1 = jj;
	      i2 = nside;
	      if (halve > 0)
		i1++;
	    } else if (abs(halve) == 2) {
	      i1 = nside - jj;
	      i2 = nside;
	      if (halve < 0)
		i1--;
	    } else if (abs(halve) == 3) {
	      i1 = 0;
	      i2 = jj;
	      if (halve < 0)
		i2++;
	    } else {
	      i1 = 0;
	      i2 = nside - jj;
	      if (halve > 0)
		i2--;
	    }

	    for (float* rowp = row+i1; rowp < row+i2; rowp++)
	      *rowp = 0;
	  }
	}

	memcpy(dest+fpixel-1, row, nside*sizeof(float));
	fpixel += nelem;
      }
    }
  }

  delete [] healidx;
  delete [] row;

  data_ = dest;

  dataSize_ = pSize;
  dataSkip_ = 0;
}

void FitsHPX::buildPartial(FitsFile* fits)
{
  if (!pixelCol_)
    return;

  FitsHead* head = fits->head();
  FitsTableHDU* hdu = (FitsTableHDU*)(head->hdu());
  int rowlen = hdu->width();
  int nrow = hdu->rows();
  char* data = (char*)fits->data();

  vector<PartialCell> cells;
  cells.reserve(nrow);

  int pixRepeat = pixelCol_->repeat();
  int valRepeat = col_ ? col_->repeat() : 1;
  int nElem = (pixRepeat < valRepeat) ? pixRepeat : valRepeat;

  for (int row=0; row<nrow; row++) {
    char* ptr = data + (size_t)row * (size_t)rowlen;
    for (int e = 0; e < nElem; e++) {
      long long pix = pixelCol_->integer(ptr, e);
      float val = col_ ? (float)col_->value(ptr, e) : 1.0f;
      PartialCell cell;
      cell.pixel = pix;
      cell.value = val;
      cells.push_back(cell);
    }
  }

  sort(cells.begin(), cells.end(), partialCellLess);

  int nside = nside_;
  int layout = layout_;
  int nfacet = NFACET[layout];

  pWidth_ = nfacet*nside;
  pHeight_ = pWidth_;

  size_t pSize = (size_t)pWidth_*pHeight_;
  float* dest = new float[pSize];
  for (long long ii=0; ii<pSize; ii++)
    dest[ii] = NAN;

  initHeader(fits);

  long long* healidx = new long long[nside];
  float* row = new float[nside];

  long long fpixel = 1;
  long long nelem = (long long)nside;
  for (int jfacet = 0; jfacet<nfacet; jfacet++) {
    for (int jj = 0; jj<nside; jj++) {
      for (int ifacet = 0; ifacet<nfacet; ifacet++) {
	for (int ii=0; ii<nside; ii++)
	  row[ii] = NAN;

	int facet = FACETS[layout][jfacet][ifacet];
	int rotn  = FROTAT[layout][jfacet][ifacet];
	int halve = FHALVE[layout][jfacet][ifacet];

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

	if (facet >= 0) {
	  switch (order_) {
	  case NESTED:
	    NESTidx(nside, facet, rotn, jj, healidx);
	    break;
	  case RING:
	    RINGidx(nside, facet, rotn, jj, healidx);
	    break;
	  case NUNIQ:
	    break;
	  }

	  for (int ii=0; ii<nside; ii++) {
	    long long target = healidx[ii];
	    size_t lo = 0;
	    size_t hi = cells.size();
	    bool found = false;
	    while (lo < hi) {
	      size_t mid = lo + (hi - lo) / 2;
	      if (cells[mid].pixel < target) {
		lo = mid + 1;
	      } else if (cells[mid].pixel > target) {
		hi = mid;
	      } else {
		row[ii] = cells[mid].value;
		found = true;
		break;
	      }
	    }
	    if (!found) {
	      row[ii] = NAN;
	    }
	  }

	  if (halve) {
	    int i1;
	    int i2;
	    if (abs(halve) == 1) {
	      i1 = jj;
	      i2 = nside;
	      if (halve > 0)
		i1++;
	    } else if (abs(halve) == 2) {
	      i1 = nside - jj;
	      i2 = nside;
	      if (halve < 0)
		i1--;
	    } else if (abs(halve) == 3) {
	      i1 = 0;
	      i2 = jj;
	      if (halve < 0)
		i2++;
	    } else {
	      i1 = 0;
	      i2 = nside - jj;
	      if (halve > 0)
		i2--;
	    }

	    for (float* rowp = row+i1; rowp < row+i2; rowp++)
	      *rowp = NAN;
	  }
	}

	memcpy(dest+fpixel-1, row, nside*sizeof(float));
	fpixel += nelem;
      }
    }
  }

  delete [] healidx;
  delete [] row;

  data_ = dest;
  dataSize_ = pSize;
  dataSkip_ = 0;
}

// (imap,jmap) are 0-relative pixel coordinates in the output map with origin
// at the bottom-left corner of the specified facet which is rotated by
// (45 + rotn * 90) degrees from its natural orientation; imap increases to
// the right and jmap upwards.

void FitsHPX::NESTidx(int nside, int facet, int rotn, int jmap, long long *healidx)
{
  // Nested index (0-relative) of the first pixel in this facet.
  long long hh = (long long)facet * (long long)nside * (long long)nside;

  int nside1 = nside - 1;
  long long* hp = healidx;
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
    long long bit = 1LL;
    while (ii || jj) {
      if (ii & 1) *hp |= bit;
      bit <<= 1LL;
      if (jj & 1) *hp |= bit;
      bit <<= 1LL;
      ii >>= 1;
      jj >>= 1;
    }

    *hp += hh;
  }
}

// (imap,jmap) pixel coordinates are as described above for NESTidx().  This
// function computes the double-pixelisation index then converts it to the
// regular ring index.

void FitsHPX::RINGidx(int nside, int facet, int rotn, int jmap, long long *healidx)
{
  const int I0[] = { 1,  3, -3, -1,  0,  2,  4, -2,  1,  3, -3, -1};
  const int J0[] = { 1,  1,  1,  1,  0,  0,  0,  0, -1, -1, -1, -1};

  long long n2side = 2LL * (long long)nside;
  long long n8side = 8LL * (long long)nside;

  // Double-pixelisation index of the last pixel in the north polar cap. */
  long long npole = (n2side - 1) * (n2side - 1) - 1;

  // Double-pixelisation pixel coordinates of the centre of the facet. */
  long long i0 = (long long)nside * (long long)I0[facet];
  long long j0 = (long long)nside * (long long)J0[facet];

  int nside1 = nside - 1;
  long long* hp = healidx;
  for (int imap = 0; imap < nside; imap++, hp++) {
    // (ii,jj) are 0-relative, double-pixelisation pixel coordinates.  The
    // origin is at the intersection of the equator and prime meridian,
    // i increases to the east (N.B.) and j to the north.
    long long ii =0;
    long long jj =0;
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
        long long npj = 2LL * (n2side - jj);

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
        long long npj = 2LL * (jj + n2side);

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
  double crpix1;
  switch (layout_) {
  case EQUATOR:
    crpix1 = (5.0 * nside_ + 1.0) / 2.0;
    break;
  case NORTH:
  case SOUTH:
    crpix1 = (4.0 * nside_ + 1.0) / 2.0;
    break;
  }
  double crpix2 = crpix1;
  head_->appendReal("CRPIX1", crpix1, 9, "Coordinate reference pixel");
  head_->appendReal("CRPIX2", crpix2, 9, "Coordinate reference pixel");

  // PCx_y
  double cos45 = sqrt(2.0) / 2.0;
  if (layout_ == EQUATOR) {
    head_->appendReal("PC1_1",  cos45, 15, "Transformation matrix element");
    head_->appendReal("PC1_2",  cos45, 15, "Transformation matrix element");
    head_->appendReal("PC2_1", -cos45, 15, "Transformation matrix element");
    head_->appendReal("PC2_2",  cos45, 15, "Transformation matrix element");
  }

  // CDELT1/2
  double cdelt1 = -90.0 / nside_ / sqrt(2.);
  double cdelt2 = -cdelt1;
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
  double crval1 = 0. + 90.*quad_;
  double crval2;
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

}