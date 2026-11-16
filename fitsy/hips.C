// Copyright (C) 1999-2021
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <sys/stat.h>

#include <new>
#include <fstream>
#include <sstream>
using namespace std;

#include "hips.h"
#include "head.h"
#include "hdu.h"
#include "mmap.h"
#include "util.h"

// The deepest map chosen automatically: nside 2048 is 50M pixels
// (200 MB), and FitsHPX's HPX image adds (5*2048)^2 floats.
#define HIPS_NSIDE_AUTO 2048
// Refuse anything bigger, even when asked for with order=.
#define HIPS_NSIDE_MAX 8192

// NESTED sub-index of a tile pixel: ix (row from the top) in the even
// bits, iy (column) in the odd bits
static long long interleave(int ix, int iy)
{
  long long rr = 0;
  for (int bb=0; (ix>>bb) || (iy>>bb); bb++)
    rr |= ((long long)((ix>>bb)&1) << (2*bb)) |
      ((long long)((iy>>bb)&1) << (2*bb+1));
  return rr;
}

// big-endian (FITS) value at p
template<class T> static inline T readBE(const char* p)
{
  union {
    char c[sizeof(T)];
    T v;
  } u;
  if (lsb())
    for (size_t ii=0; ii<sizeof(T); ii++)
      u.c[ii] = p[sizeof(T)-1-ii];
  else
    memcpy(u.c, p, sizeof(T));
  return u.v;
}

// Copy the ww x ww block of an image whose top-left corner is at row r0
// (counted from the top) and column c0 into one tile's slot of a NESTED
// map, through the sub-index table. Integer BLANK becomes NaN, and
// BSCALE/BZERO are applied. Returns 0 if the image can't be read.
static int copyBlock(FitsFile* img, int r0, int c0, int ww, float* dest,
		     const long long* sub)
{
  FitsHead* hd = img->head();
  FitsImageHDU* hdu = (FitsImageHDU*)hd->hdu();
  const char* data = (const char*)img->data();
  int nx = hd->naxis(0);
  int ny = hd->naxis(1);
  int bitpix = hd->bitpix();
  int bytes = abs(bitpix)/8;
  if (!hdu || !data || r0<0 || c0<0 || r0+ww>ny || c0+ww>nx)
    return 0;

  int scaled = hdu->hasscaling();
  double bscale = hdu->bscale();
  double bzero = hdu->bzero();
  // the HDU keeps BLANK as an int, too small for BITPIX 64: read the card
  // (some writers give it as a real, e.g. -32768.0)
  int hasblank = hdu->hasblank();
  long long blank = hdu->blank();
  if (hasblank) {
    const char* card = hd->find("BLANK");
    if (card) {
      char buf[FTY_CARDLEN];
      memcpy(buf, card+10, FTY_CARDLEN-10);
      buf[FTY_CARDLEN-10] = '\0';
      char* end;
      blank = strtoll(buf, &end, 10);
      if (*end == '.' || *end == 'E' || *end == 'e' || *end == 'D')
	blank = (long long)strtod(buf, NULL);
    }
  }

  for (int rr=0; rr<ww; rr++) {
    // FITS rows are stored bottom-up
    const char* row = data + ((size_t)(ny-1-(r0+rr))*nx + c0)*bytes;
    const long long* ss = sub + (size_t)rr*ww;
    for (int cc=0; cc<ww; cc++) {
      const char* pp = row + (size_t)cc*bytes;
      double vv;
      switch (bitpix) {
      case 8:
	{
	  unsigned char ii = (unsigned char)*pp;
	  vv = hasblank && ii==blank ? NAN : ii;
	}
	break;
      case 16:
	{
	  short ii = readBE<short>(pp);
	  vv = hasblank && ii==blank ? NAN : ii;
	}
	break;
      case 32:
	{
	  int ii = readBE<int>(pp);
	  vv = hasblank && ii==blank ? NAN : ii;
	}
	break;
      case 64:
	{
	  long long ii = readBE<long long>(pp);
	  vv = hasblank && ii==blank ? NAN : (double)ii;
	}
	break;
      case -32:
	vv = readBE<float>(pp);
	break;
      case -64:
	vv = readBE<double>(pp);
	break;
      default:
	return 0;
      }
      if (scaled)
	vv = vv*bscale + bzero;
      dest[ss[cc]] = (float)vv;
    }
  }
  return 1;
}

// one 80-character header card
static char* putCard(char* pp, const char* text)
{
  size_t ll = strlen(text);
  memset(pp, ' ', FTY_CARDLEN);
  memcpy(pp, text, ll<FTY_CARDLEN ? ll : FTY_CARDLEN);
  return pp+FTY_CARDLEN;
}

static int fileExists(const char* fn)
{
  struct stat info;
  return !stat(fn, &info) && S_ISREG(info.st_mode);
}

static int isPow2(long nn)
{
  return nn>0 && !(nn & (nn-1));
}

// tiles across an Allsky mosaic at order k (HiPS 1.0 sec. 4.3.2)
static int allskyCols(int order)
{
  return (int)floor(sqrt(12.*(1L<<(2*order))) + 1e-9);
}

FitsHiPS::FitsHiPS(const char* fn)
{
  order_ = -1;
  tileWidth_ = 0;
  nside_ = 0;
  frame_ = UNKNOWN;
  source_ = NONE;
  ntile_ = 0;
  nread_ = 0;
  nbad_ = 0;
  badAllsky_ = -1;

  // root directory, plus [order=,proj=,...] options
  parse(fn);
  if (!valid_ || !pName_)
    return;
  valid_ = 0;

  if (!readProperties(pName_)) {
    ostringstream str;
    str << "HiPS: can't read " << pName_ << "/properties" << ends;
    internalError(str.str().c_str());
    return;
  }

  const char* type = prop("dataproduct_type", "image");
  if (!strncmp(type, "catalog", 7)) {
    internalError("HiPS: catalogue HiPS are not images");
    return;
  }

  const char* formats = prop("hips_tile_format", "");
  if (!strstr(formats, "fits")) {
    ostringstream str;
    str << "HiPS: only FITS tiles can be read so far (hips_tile_format = "
	<< formats << ")" << ends;
    internalError(str.str().c_str());
    return;
  }

  const char* frame = prop("hips_frame", "");
  if (!strncmp(frame, "equatorial", 10))
    frame_ = EQU;
  else if (!strncmp(frame, "galactic", 8))
    frame_ = GAL;
  else if (!strncmp(frame, "ecliptic", 8))
    frame_ = ECL;

  int maxOrder = propInt("hips_order", -1);
  int width = propInt("hips_tile_width", 512);
  if (maxOrder<0 || maxOrder>29 || !isPow2(width)) {
    internalError("HiPS: bad hips_order or hips_tile_width in properties");
    return;
  }

  if (!chooseSource(maxOrder, width, pHiPSOrder_))
    return;

  nside_ = (long)tileWidth_ << order_;
  if (nside_ > HIPS_NSIDE_MAX) {
    ostringstream str;
    str << "HiPS: order " << order_ << " is a map of nside " << nside_
	<< ", larger than the limit of " << HIPS_NSIDE_MAX << ends;
    internalError(str.str().c_str());
    return;
  }
  ntile_ = 12 << (2*order_);

  size_t npix = (size_t)12*nside_*nside_;
  float* map = new (nothrow) float[npix];
  if (!map) {
    internalError("HiPS: unable to allocate memory for the map");
    return;
  }
  for (size_t ii=0; ii<npix; ii++)
    map[ii] = NAN;

  if (!buildMap(map) || !nread_) {
    delete [] map;
    ostringstream str;
    str << "HiPS: no readable tiles at order " << order_ << ends;
    internalError(str.str().c_str());
    return;
  }

  // a FITS table column is big-endian
  if (lsb()) {
    char* cc = (char*)map;
    for (size_t ii=0; ii<npix; ii++, cc+=4) {
      char t0 = cc[0];
      char t1 = cc[1];
      cc[0] = cc[3];
      cc[1] = cc[2];
      cc[2] = t1;
      cc[3] = t0;
    }
  }

  data_ = map;
  dataSize_ = npix*sizeof(float);
  dataSkip_ = 0;
  byteswap_ = lsb();
  endian_ = BIG;

  if (!initHeaders())
    return;

  valid_ = 1;
}

FitsHiPS::~FitsHiPS()
{
  if (data_)
    delete [] (float*)data_;
}

int FitsHiPS::isHiPS(const char* dir)
{
  if (!dir)
    return 0;
  string fn = string(dir) + "/properties";
  return fileExists(fn.c_str());
}

// properties: one "key = value" per line, # starts a comment line
// (HiPS 1.0 sec. 4.4.1). A repeated key keeps its first value.
int FitsHiPS::readProperties(const char* dir)
{
  string fn = string(dir) + "/properties";
  ifstream str(fn.c_str());
  if (!str)
    return 0;

  string line;
  while (getline(str, line)) {
    if (!line.empty() && line[line.size()-1] == '\r')
      line.erase(line.size()-1);
    if (line.empty() || line[0] == '#')
      continue;

    size_t eq = line.find('=');
    if (eq == string::npos)
      continue;

    const char* ws = " \t";
    string key = line.substr(0, eq);
    string val = line.substr(eq+1);
    key.erase(0, key.find_first_not_of(ws));
    key.erase(key.find_last_not_of(ws)+1);
    val.erase(0, val.find_first_not_of(ws));
    val.erase(val.find_last_not_of(ws)+1);
    if (key.empty() || key.find_first_of(ws) != string::npos)
      continue;

    if (prop_.find(key) == prop_.end())
      prop_[key] = val;
  }
  return !prop_.empty();
}

const char* FitsHiPS::prop(const char* key, const char* def)
{
  map<string,string>::iterator it = prop_.find(key);
  return it != prop_.end() ? it->second.c_str() : def;
}

int FitsHiPS::propInt(const char* key, int def)
{
  const char* vv = prop(key);
  if (!vv || !*vv)
    return def;
  char* end;
  long ll = strtol(vv, &end, 10);
  return end != vv ? (int)ll : def;
}

// NorderK/DirD/NpixN.ext, D = (N/10000)*10000 (HiPS 1.0 sec. 4.1)
char* FitsHiPS::tilePath(int order, long npix, const char* ext)
{
  ostringstream str;
  str << pName_ << "/Norder" << order << "/Dir" << (npix/10000)*10000
      << "/Npix" << npix << '.' << ext << ends;
  return dupstr(str.str().c_str());
}

char* FitsHiPS::allskyPath(int order, const char* ext)
{
  ostringstream str;
  str << pName_ << "/Norder" << order << "/Allsky." << ext << ends;
  return dupstr(str.str().c_str());
}

// width of the tiles in the order's Allsky.fits, or 0 if there is none
// (or it isn't a usable mosaic)
int FitsHiPS::allskyWidth(int order)
{
  if (order > 3)
    return 0;

  char* fn = allskyPath(order, "fits");
  int ww = 0;
  if (fileExists(fn)) {
    FitsFitsMMap img(fn, FitsFile::EXACTIMAGE);
    if (img.isValid() && img.isImage()) {
      int ncol = allskyCols(order);
      int nrow = ((12<<(2*order)) + ncol-1)/ncol;
      int nx = img.head()->naxis(0);
      int ny = img.head()->naxis(1);
      int aw = nx/ncol;
      if (isPow2(aw) && aw*ncol == nx && aw*nrow <= ny)
	ww = aw;
    }
    // e.g. truncated: the reader refuses data that runs past the file
    if (!ww)
      badAllsky_ = order;
  }
  delete [] fn;
  return ww;
}

// say why nothing could be loaded
void FitsHiPS::noSource(const char* msg)
{
  ostringstream str;
  str << "HiPS: " << msg;
  if (badAllsky_ >= 0)
    str << " (Norder" << badAllsky_ << "/Allsky.fits is unreadable,"
	<< " perhaps truncated)";
  str << ends;
  internalError(str.str().c_str());
}

int FitsHiPS::anyTile(int order)
{
  long ntile = 12L << (2*order);
  for (long nn=0; nn<ntile; nn++) {
    char* fn = tilePath(order, nn, "fits");
    int ok = fileExists(fn);
    delete [] fn;
    if (ok)
      return 1;
  }
  return 0;
}

// Pick the order and where to read it from. Asked for an order: its
// Allsky when that holds full-size tiles (one file, same data), else its
// tiles, else a reduced Allsky. Otherwise: the largest map, no bigger than
// HIPS_NSIDE_AUTO, that any order's tiles or Allsky can make. Missing
// orders are allowed (HiPS 1.0 sec. 4.3.1), as are local copies holding
// only some of the tiles.
int FitsHiPS::chooseSource(int maxOrder, int width, int askOrder)
{
  if (askOrder >= 0) {
    if (askOrder > maxOrder) {
      ostringstream str;
      str << "HiPS: order " << askOrder << " is deeper than hips_order ("
	  << maxOrder << ")" << ends;
      internalError(str.str().c_str());
      return 0;
    }

    int aw = allskyWidth(askOrder);
    order_ = askOrder;
    if (aw == width) {
      source_ = ALLSKY;
      tileWidth_ = aw;
    }
    else if (anyTile(askOrder)) {
      source_ = TILES;
      tileWidth_ = width;
    }
    else if (aw) {
      source_ = ALLSKY;
      tileWidth_ = aw;
    }
    else {
      ostringstream str;
      str << "no FITS tiles or Allsky.fits at order " << askOrder << ends;
      noSource(str.str().c_str());
      return 0;
    }
    return 1;
  }

  long best = 0;
  for (int kk=0; kk<=maxOrder; kk++) {
    long tileNside = (long)width << kk;
    if (tileNside > HIPS_NSIDE_AUTO)
      break;

    // Allsky first: at the same nside it wins (one file)
    int aw = allskyWidth(kk);
    if (aw && ((long)aw << kk) > best) {
      best = (long)aw << kk;
      order_ = kk;
      source_ = ALLSKY;
      tileWidth_ = aw;
    }
    if (tileNside > best && anyTile(kk)) {
      best = tileNside;
      order_ = kk;
      source_ = TILES;
      tileWidth_ = width;
    }
  }
  // a reduced Allsky can be shallow enough even past the tiles' limit
  for (int kk=0; kk<=maxOrder && kk<=3; kk++) {
    int aw = allskyWidth(kk);
    long nn = (long)aw << kk;
    if (aw && nn <= HIPS_NSIDE_AUTO && nn > best) {
      best = nn;
      order_ = kk;
      source_ = ALLSKY;
      tileWidth_ = aw;
    }
  }

  if (!best) {
    noSource("no FITS tiles or Allsky.fits small enough to load; "
	     "try order=");
    return 0;
  }
  return 1;
}

int FitsHiPS::buildMap(float* map)
{
  int ww = tileWidth_;
  size_t w2 = (size_t)ww*ww;
  long long* sub = new long long[w2];
  for (int rr=0; rr<ww; rr++)
    for (int cc=0; cc<ww; cc++)
      sub[(size_t)rr*ww+cc] = interleave(rr, cc);

  if (source_ == ALLSKY) {
    char* fn = allskyPath(order_, "fits");
    FitsFitsMMap img(fn, FitsFile::EXACTIMAGE);
    delete [] fn;
    if (img.isValid() && img.isImage()) {
      int ncol = allskyCols(order_);
      for (int nn=0; nn<ntile_; nn++) {
	if (copyBlock(&img, (nn/ncol)*ww, (nn%ncol)*ww, ww, map+nn*w2, sub))
	  nread_++;
	else
	  nbad_++;
      }
    }
  }
  else {
    for (int nn=0; nn<ntile_; nn++) {
      char* fn = tilePath(order_, nn, "fits");
      if (fileExists(fn)) {
	FitsFitsMMap img(fn, FitsFile::EXACTIMAGE);
	if (img.isValid() && img.isImage() &&
	    img.head()->naxis(0) == ww && img.head()->naxis(1) == ww &&
	    copyBlock(&img, 0, 0, ww, map+nn*w2, sub))
	  nread_++;
	else
	  nbad_++;
      }
      delete [] fn;
    }
  }

  delete [] sub;
  return 1;
}

// A primary header and a NESTED HEALPix BINTABLE header, as a HEALPix
// FITS file would have, so FitsHPX::isHPX() takes the table as is.
int FitsHiPS::initHeaders()
{
  long long npix = 12LL*nside_*nside_;
  int repeat = npix % 1024 ? 1 : 1024;
  long long rows = npix/repeat;
  char buf[FTY_CARDLEN+1];

  // primary
  {
    char* cards = new char[FTY_BLOCK];
    memset(cards, ' ', FTY_BLOCK);
    char* pp = cards;
    snprintf(buf, sizeof(buf), "%-8s= %20s", "SIMPLE", "T");
    pp = putCard(pp, buf);
    snprintf(buf, sizeof(buf), "%-8s= %20d", "BITPIX", 8);
    pp = putCard(pp, buf);
    snprintf(buf, sizeof(buf), "%-8s= %20d", "NAXIS", 0);
    pp = putCard(pp, buf);
    snprintf(buf, sizeof(buf), "%-8s= %20s", "EXTEND", "T");
    pp = putCard(pp, buf);
    putCard(pp, "END");
    primary_ = new FitsHead(cards, FTY_BLOCK, FitsHead::ALLOC);
    managePrimary_ = 1;
    if (!primary_->isValid())
      return 0;
  }

  // the HEALPix table
  {
    char* cards = new char[FTY_BLOCK];
    memset(cards, ' ', FTY_BLOCK);
    char* pp = cards;
    snprintf(buf, sizeof(buf), "%-8s= '%-8s'", "XTENSION", "BINTABLE");
    pp = putCard(pp, buf);
    snprintf(buf, sizeof(buf), "%-8s= %20d", "BITPIX", 8);
    pp = putCard(pp, buf);
    snprintf(buf, sizeof(buf), "%-8s= %20d", "NAXIS", 2);
    pp = putCard(pp, buf);
    snprintf(buf, sizeof(buf), "%-8s= %20d", "NAXIS1", 4*repeat);
    pp = putCard(pp, buf);
    snprintf(buf, sizeof(buf), "%-8s= %20lld", "NAXIS2", rows);
    pp = putCard(pp, buf);
    snprintf(buf, sizeof(buf), "%-8s= %20d", "PCOUNT", 0);
    pp = putCard(pp, buf);
    snprintf(buf, sizeof(buf), "%-8s= %20d", "GCOUNT", 1);
    pp = putCard(pp, buf);
    snprintf(buf, sizeof(buf), "%-8s= %20d", "TFIELDS", 1);
    pp = putCard(pp, buf);
    snprintf(buf, sizeof(buf), "%-8s= '%-8s'", "TTYPE1", "VALUE");
    pp = putCard(pp, buf);
    snprintf(buf, sizeof(buf), "%-8s= '%dE'", "TFORM1", repeat);
    pp = putCard(pp, buf);
    putCard(pp, "END");
    head_ = new FitsHead(cards, FTY_BLOCK, FitsHead::ALLOC);
    manageHead_ = 1;
    if (!head_->isValid())
      return 0;
  }

  head_->appendString("EXTNAME", "HIPS", NULL);
  head_->appendString("PIXTYPE", "HEALPIX", "HEALPix pixelisation");
  head_->appendString("ORDERING", "NESTED", "HiPS tiles are NESTED");
  switch (frame_) {
  case EQU:
    head_->appendString("COORDSYS", "C", "hips_frame equatorial (ICRS)");
    break;
  case GAL:
    head_->appendString("COORDSYS", "G", "hips_frame galactic");
    break;
  case ECL:
    head_->appendString("COORDSYS", "E", "hips_frame ecliptic");
    break;
  case UNKNOWN:
    break;
  }
  head_->appendInteger("NSIDE", (int)nside_, "HEALPix resolution parameter");
  head_->appendInteger("FIRSTPIX", 0, NULL);
  head_->appendInteger("LASTPIX", (int)(npix-1), NULL);
  head_->appendString("INDXSCHM", "IMPLICIT", NULL);
  head_->appendString("OBJECT", prop("obs_title", "HiPS"), NULL);

  // provenance
  {
    ostringstream str;
    str << "HiPS " << prop("creator_did", pName_) << ends;
    head_->insertComment("HISTORY", str.str().c_str(), NULL);
  }
  {
    ostringstream str;
    str << "order " << order_ << ", nside " << nside_ << ", from "
	<< (source_ == ALLSKY ? "Allsky.fits" : "FITS tiles") << ": "
	<< nread_ << " of " << ntile_ << " tiles read" << ends;
    head_->insertComment("HISTORY", str.str().c_str(), NULL);
  }
  if (nread_ < ntile_)
    head_->insertComment("HISTORY", "missing or unreadable tiles are NaN",
			 NULL);
  if (prop("hips_pixel_cut")) {
    ostringstream str;
    str << "hips_pixel_cut " << prop("hips_pixel_cut") << ends;
    head_->insertComment("COMMENT", str.str().c_str(), NULL);
  }
  head_->updateHDU();

  ext_ = 1;
  inherit_ = 0;
  return 1;
}
