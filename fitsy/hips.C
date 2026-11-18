// Copyright (C) 1999-2021
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <string.h>
#include <strings.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <sys/stat.h>

#include <new>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <list>
#include <map>
#include <memory>
#include <string>
using namespace std;

#include <tk.h>

#include "hips.h"
#include "head.h"
#include "hdu.h"
#include "mmap.h"
#include "util.h"

// The deepest map chosen automatically: nside 2048 is 50M pixels
// (200 MB). A window samples the map itself (FitsHPX flat, which takes
// it over); only proj=HPX builds an HPX image, (5*2048)^2 floats more.
#define HIPS_NSIDE_AUTO 2048
// Refuse anything bigger, even when asked for with norder=.
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

// One decoded file: w*h values, top row first (FITS rows flipped)
struct HiPSImage {
  int width;
  int height;
  float* px;
  HiPSImage(int ww, int hh) : width(ww), height(hh),
    px(new (nothrow) float[(size_t)ww*hh]) {}
  ~HiPSImage() {delete [] px;}
 private:
  HiPSImage(const HiPSImage&);
  HiPSImage& operator=(const HiPSImage&);
};
typedef std::shared_ptr<HiPSImage> HiPSImagePtr;

// A PNG or JPEG decoded through a Tk photo (Tk reads PNG, tkimg JPEG).
// For channel 0/1/2 all three colour levels come back, in out[0..2];
// for -1 one image in out[0], grey images their grey level and colour
// ones their luminance (Rec. 601, as FitsPhoto). A fully transparent
// pixel (alpha 0) is no data, NaN. Values are the tile's 0-255 display
// values, not physical ones. Returns 0 if the file can't be decoded.
static int decodePhoto(Tcl_Interp* interp, const char* fn, int channel,
		       HiPSImagePtr out[3])
{
  if (!interp)
    return 0;

  Tcl_Obj* cmd = Tcl_NewListObj(0, NULL);
  Tcl_IncrRefCount(cmd);
  const char* words[] = {"image", "create", "photo", "-file"};
  for (int ii=0; ii<4; ii++)
    Tcl_ListObjAppendElement(interp, cmd, Tcl_NewStringObj(words[ii], -1));
  Tcl_ListObjAppendElement(interp, cmd, Tcl_NewStringObj(fn, -1));
  int rr = Tcl_EvalObjEx(interp, cmd, TCL_EVAL_GLOBAL);
  Tcl_DecrRefCount(cmd);
  if (rr != TCL_OK) {
    Tcl_ResetResult(interp);
    return 0;
  }
  std::string name = Tcl_GetStringResult(interp);
  Tcl_ResetResult(interp);

  int colour = channel >= 0 && channel <= 2;
  int nout = colour ? 3 : 1;
  int ok = 0;
  Tk_PhotoHandle photo = Tk_FindPhoto(interp, name.c_str());
  Tk_PhotoImageBlock block;
  int width =0;
  int height =0;
  if (photo && Tk_PhotoGetImage(photo, &block)) {
    Tk_PhotoGetSize(photo, &width, &height);
    ok = width>0 && height>0;
    for (int ii=0; ok && ii<nout; ii++) {
      out[ii] = HiPSImagePtr(new (nothrow) HiPSImage(width, height));
      ok = out[ii] && out[ii]->px;
    }
    if (ok) {
      int alpha = block.pixelSize >= 4;
      size_t kk = 0;
      for (int yy=0; yy<height; yy++) {
	unsigned char* row = block.pixelPtr + (size_t)yy*block.pitch;
	for (int xx=0; xx<width; xx++, kk++) {
	  unsigned char* pp = row + (size_t)xx*block.pixelSize;
	  unsigned char r = pp[block.offset[0]];
	  unsigned char g = pp[block.offset[1]];
	  unsigned char b = pp[block.offset[2]];
	  if (alpha && pp[block.offset[3]] == 0) {
	    for (int ii=0; ii<nout; ii++)
	      out[ii]->px[kk] = NAN;
	  }
	  else if (colour) {
	    out[0]->px[kk] = r;
	    out[1]->px[kk] = g;
	    out[2]->px[kk] = b;
	  }
	  else if (r == g && g == b)
	    out[0]->px[kk] = r;
	  else
	    out[0]->px[kk] = .299f*r + .587f*g + .114f*b;
	}
      }
    }
  }

  // free the photo
  Tcl_Obj* del = Tcl_NewListObj(0, NULL);
  Tcl_IncrRefCount(del);
  Tcl_ListObjAppendElement(interp, del, Tcl_NewStringObj("image", -1));
  Tcl_ListObjAppendElement(interp, del, Tcl_NewStringObj("delete", -1));
  Tcl_ListObjAppendElement(interp, del, Tcl_NewStringObj(name.c_str(), -1));
  Tcl_EvalObjEx(interp, del, TCL_EVAL_GLOBAL);
  Tcl_DecrRefCount(del);
  Tcl_ResetResult(interp);

  if (!ok)
    for (int ii=0; ii<3; ii++)
      out[ii].reset();
  return ok;
}

// Every HiPS in the process shares one cache of decoded files: deep
// window tiles, and the PNG/JPEG tiles and Allskys a map is built from.
// So the three channels of a colour HiPS decode each file once, a window
// rebuilt on a pan, zoom or block change finds its tiles again, and two
// frames showing the same HiPS share them. An entry is one file's values
// for one channel (-1: FITS, grey or luminance); decoding a colour file
// for channel 0, 1 or 2 keeps all three. Entries are checked against the
// file's size, time and inode, so a tile fetched or cleared since is
// read afresh. Past HIPS_CACHE_BYTES the least recently used entries
// nobody holds go first; entries in use stay (a window's tiles while it
// is built), so the cache can briefly exceed it.
#define HIPS_CACHE_BYTES ((size_t)512*1024*1024)

namespace {
  struct HiPSCacheEntry {
    HiPSImagePtr img;
    off_t size;
    time_t mtime;
    ino_t ino;
    std::list<std::string>::iterator lru;
  };
  struct HiPSCache {
    std::map<std::string, HiPSCacheEntry> entries;
    std::list<std::string> lru;   // most recently used first
    size_t bytes;
    HiPSCache() : bytes(0) {}
  };
  // never destroyed: windows may still hold tiles at exit
  HiPSCache& hipsCache()
  {
    static HiPSCache* cache = new HiPSCache;
    return *cache;
  }
}

static std::string cacheKey(const char* fn, int channel)
{
  ostringstream str;
  str << fn << '\n' << channel;
  return str.str();
}

static size_t cacheBytes(const HiPSImagePtr& img)
{
  return (size_t)img->width*img->height*sizeof(float);
}

static void cacheErase(std::map<std::string, HiPSCacheEntry>::iterator it)
{
  HiPSCache& cc = hipsCache();
  cc.bytes -= cacheBytes(it->second.img);
  cc.lru.erase(it->second.lru);
  cc.entries.erase(it);
}

// the cached image of fn for channel, if it is still the file on disk
static HiPSImagePtr cacheFind(const char* fn, int channel,
			      const struct stat& info)
{
  HiPSCache& cc = hipsCache();
  std::map<std::string, HiPSCacheEntry>::iterator it =
    cc.entries.find(cacheKey(fn, channel));
  if (it == cc.entries.end())
    return HiPSImagePtr();
  HiPSCacheEntry& ee = it->second;
  if (ee.size != info.st_size || ee.mtime != info.st_mtime ||
      ee.ino != info.st_ino) {
    cacheErase(it);
    return HiPSImagePtr();
  }
  cc.lru.splice(cc.lru.begin(), cc.lru, ee.lru);
  return ee.img;
}

static void cachePut(const char* fn, int channel, const struct stat& info,
		     const HiPSImagePtr& img)
{
  HiPSCache& cc = hipsCache();
  std::string key = cacheKey(fn, channel);
  std::map<std::string, HiPSCacheEntry>::iterator it = cc.entries.find(key);
  if (it != cc.entries.end())
    cacheErase(it);
  cc.lru.push_front(key);
  HiPSCacheEntry& ee = cc.entries[key];
  ee.img = img;
  ee.size = info.st_size;
  ee.mtime = info.st_mtime;
  ee.ino = info.st_ino;
  ee.lru = cc.lru.begin();
  cc.bytes += cacheBytes(img);

  // trim, oldest first, skipping entries in use
  std::list<std::string>::iterator ll = cc.lru.end();
  while (cc.bytes > HIPS_CACHE_BYTES && ll != cc.lru.begin()) {
    --ll;
    std::map<std::string, HiPSCacheEntry>::iterator oo = cc.entries.find(*ll);
    if (oo->second.img.use_count() > 1)
      continue;
    std::list<std::string>::iterator next = ll;
    ++next;
    cacheErase(oo);
    ll = next;
  }
}

// PNG/JPEG file fn for channel (see decodePhoto), through the cache;
// empty if it isn't there or can't be decoded
static HiPSImagePtr photoImage(Tcl_Interp* interp, const char* fn,
			       int channel)
{
  struct stat info;
  if (stat(fn, &info) || !S_ISREG(info.st_mode))
    return HiPSImagePtr();
  if (channel < -1 || channel > 2)
    channel = -1;
  HiPSImagePtr img = cacheFind(fn, channel, info);
  if (img)
    return img;

  HiPSImagePtr out[3];
  if (!decodePhoto(interp, fn, channel, out))
    return HiPSImagePtr();
  if (channel < 0) {
    cachePut(fn, -1, info, out[0]);
    return out[0];
  }
  for (int ii=0; ii<3; ii++)
    cachePut(fn, ii, info, out[ii]);
  return out[channel];
}

// Copy the ww x ww block whose top-left corner is at row r0 (from the
// top) and column c0 of a decoded photo (rows top-down, no flip) into
// one tile's slot of the map, as copyBlock does for FITS.
static int copyPhotoBlock(const float* img, int nx, int ny, int r0, int c0,
			  int ww, float* dest, const long long* sub)
{
  if (!img || r0<0 || c0<0 || r0+ww>ny || c0+ww>nx)
    return 0;
  for (int rr=0; rr<ww; rr++) {
    const float* row = img + (size_t)(r0+rr)*nx + c0;
    const long long* ss = sub + (size_t)rr*ww;
    for (int cc=0; cc<ww; cc++)
      dest[ss[cc]] = row[cc];
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

FitsHiPS::FitsHiPS(const char* fn, Tcl_Interp* interp, int channel,
		   int inspect)
{
  interp_ = interp;
  channel_ = channel;
  tileExt_ = "fits";
  order_ = -1;
  tileWidth_ = 0;
  nside_ = 0;
  frame_ = UNKNOWN;
  source_ = NONE;
  ntile_ = 0;
  nread_ = 0;
  nbad_ = 0;
  badAllsky_ = -1;
  initView_ = 0;
  maxOrder_ = -1;
  minOrder_ = 0;
  depth_ = 1;
  slice_ = 0;
  width_ = 0;
  ident_ = NULL;
  ownMap_ = 0;

  // root directory, plus [norder=,proj=,...] options
  parse(fn);
  if (!valid_ || !pName_)
    return;
  valid_ = 0;

  // the file name grammar takes what it can't parse for a bin filter
  // (FitsFile::parse); a HiPS has none, so it is a mistyped option
  // (e.g. order=3, which is the HEALPix ring|nested ordering)
  if (pFilter_ && *pFilter_) {
    ostringstream str;
    str << "HiPS: unknown option in [" << pFilter_ << "]"
	<< " (the HiPS order is norder=)" << ends;
    internalError(str.str().c_str());
    return;
  }
  // order=ring|nested is a HEALPix table's pixel ordering; HiPS tiles
  // are always NESTED
  if (pHPXOrder_ >= 0) {
    internalError("HiPS: order= is a HEALPix table's pixel ordering"
		  " (the HiPS order is norder=)");
    return;
  }

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

  // a cube: one frame at a time, slice= or hips_cube_firstframe (HiPS
  // 1.0 sec. 4.2.3: frame n's tiles are NpixN_n, its Allsky Allsky_n,
  // frame 0's have no suffix). slice_ counts from 0, as the files and
  // hips_cube_firstframe do; slice= (pHiPSSlice_), HIPSSLIC and the
  // messages count from 1, as the Cube dialog and cube command do.
  if (!strncmp(type, "cube", 4)) {
    depth_ = propInt("hips_cube_depth", 1);
    if (depth_ < 1)
      depth_ = 1;
    slice_ = pHiPSSlice_ >= 0 ? pHiPSSlice_-1 :
      propInt("hips_cube_firstframe", 0);
    if (slice_ < 0 || slice_ >= depth_) {
      if (pHiPSSlice_ >= 0) {
	ostringstream str;
	str << "HiPS: slice " << pHiPSSlice_ << " is outside the cube (1-"
	    << depth_ << ")" << ends;
	internalError(str.str().c_str());
	return;
      }
      slice_ = 0;
    }
  }
  else if (pHiPSSlice_ >= 0 && pHiPSSlice_ != 1) {
    internalError("HiPS: slice= needs a cube HiPS");
    return;
  }

  // the tiles to read: format= if given, else FITS (physical values)
  // when there are any, else PNG, else JPEG (display values). The Tcl
  // side asks this (hipsinfo format), so a remote HiPS fetches these.
  {
    const char* formats = prop("hips_tile_format", "");
    int hasfits =0, haspng =0, hasjpeg =0;
    istringstream words(formats);
    string ww;
    while (words >> ww) {
      if (ww == "fits")
	hasfits =1;
      else if (ww == "png")
	haspng =1;
      else if (ww == "jpeg" || ww == "jpg")
	hasjpeg =1;
    }
    if (pHiPSFormat_) {
      static const char* exts[] = {"", "fits", "png", "jpg"};
      static const char* names[] = {"", "FITS", "PNG", "JPEG"};
      int has[] = {0, hasfits, haspng, hasjpeg};
      ostringstream str;
      if (pHiPSFormat_ < 0)
	str << "HiPS: format= is fits, png or jpeg";
      else if (!has[pHiPSFormat_])
	str << "HiPS: no " << names[pHiPSFormat_]
	    << " tiles (hips_tile_format = " << formats << ")";
      else if (pHiPSFormat_ > 1 && !interp_)
	str << "HiPS: " << names[pHiPSFormat_]
	    << " tiles need Tk to be read";
      if (str.tellp() > 0) {
	str << ends;
	internalError(str.str().c_str());
	return;
      }
      tileExt_ = exts[pHiPSFormat_];
    }
    else if (hasfits)
      tileExt_ = "fits";
    else if ((haspng || hasjpeg) && interp_)
      tileExt_ = haspng ? "png" : "jpg";
    else {
      ostringstream str;
      str << "HiPS: no FITS, PNG or JPEG tiles (hips_tile_format = "
	  << formats << ")" << ends;
      internalError(str.str().c_str());
      return;
    }
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
  maxOrder_ = maxOrder;
  width_ = width;
  minOrder_ = propInt("hips_order_min", 0);
  if (minOrder_ < 0 || minOrder_ > maxOrder_)
    minOrder_ = 0;

  // inspect 2: the format and orders only
  if (inspect == 2) {
    valid_ = 1;
    return;
  }
  if (inspect) {
    // what a load would read; nothing to read is an answer here (the
    // reason is left in ds9(msg))
    if (chooseSource(maxOrder, width, pHiPSOrder_))
      nside_ = (long)tileWidth_ << order_;
    else {
      order_ = -1;
      source_ = NONE;
      tileWidth_ = 0;
    }
    valid_ = 1;
    return;
  }

  if (!chooseSource(maxOrder, width, pHiPSOrder_))
    return;
  initView_ = initialView();

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
  ownMap_ = 1;

  if (!initHeaders())
    return;

  valid_ = 1;
}

FitsHiPS::~FitsHiPS()
{
  if (data_ && ownMap_)
    delete [] (float*)data_;
  if (ident_)
    delete [] ident_;
}

float* FitsHiPS::takeMap()
{
  if (!data_ || !ownMap_)
    return NULL;
  size_t npix = (size_t)12*nside_*nside_;
  if (byteswap_) {
    char* cc = (char*)data_;
    for (size_t ii=0; ii<npix; ii++, cc+=4) {
      char t0 = cc[0];
      char t1 = cc[1];
      cc[0] = cc[3];
      cc[1] = cc[2];
      cc[2] = t1;
      cc[3] = t0;
    }
  }
  ownMap_ = 0;
  return (float*)data_;
}

std::shared_ptr<const float> FitsHiPS::tile(int order, long long npix)
{
  int ww = width_;
  if (!pName_ || ww <= 0 || order < 0 || order > maxOrder_ || npix < 0 ||
      npix >= (12LL << (2*order)))
    return std::shared_ptr<const float>();

  char* fn = tilePath(order, npix, tileExt_);
  HiPSImagePtr img;
  if (strcmp(tileExt_, "fits"))
    img = photoImage(interp_, fn, channel_);
  else {
    struct stat info;
    if (!stat(fn, &info) && S_ISREG(info.st_mode)) {
      img = cacheFind(fn, -1, info);
      if (!img) {
	if (!ident_) {
	  ident_ = new (nothrow) long long[(size_t)ww*ww];
	  if (ident_)
	    for (size_t ii=0; ii<(size_t)ww*ww; ii++)
	      ident_[ii] = ii;
	}
	FitsFitsMMap ff(fn, FitsFile::EXACTIMAGE);
	if (ident_ && ff.isValid() && ff.isImage() &&
	    ff.head()->naxis(0) == ww && ff.head()->naxis(1) == ww) {
	  img = HiPSImagePtr(new (nothrow) HiPSImage(ww, ww));
	  if (img && img->px && copyBlock(&ff, 0, 0, ww, img->px, ident_))
	    cachePut(fn, -1, info, img);
	  else
	    img.reset();
	}
      }
    }
  }
  delete [] fn;

  if (!img || img->width != ww || img->height != ww)
    return std::shared_ptr<const float>();
  // shares the entry's ownership: valid while held, even once evicted
  return std::shared_ptr<const float>(img, img->px);
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

// a real-valued property, NAN if absent or not a number
double FitsHiPS::propReal(const char* key)
{
  const char* vv = prop(key);
  if (!vv || !*vv)
    return NAN;
  char* end;
  double dd = strtod(vv, &end);
  return end != vv && isfinite(dd) ? dd : NAN;
}

// The survey's suggested view, hips_initial_ra/dec/fov, as defaults for
// a zenithal window (proj=TAN, SIN, STG, ARC, ZEA): the centre when
// neither lon0= nor lat0= is given, the field of view when fov= isn't
// (clamped to what the projection can show). hips_initial_ra/dec are
// always ICRS, so they are rotated into hips_frame. All-sky and conic
// projections, and the HPX image, keep their own defaults. The Open
// HiPS dialog asks initialSky (hipsinfo describe) for the same view.
// Returns 1 if the centre was set.
int FitsHiPS::initialView()
{
  static const struct {const char* code; double fovmax;} zen[] = {
    {"TAN",170}, {"SIN",180}, {"STG",340}, {"ARC",360}, {"ZEA",360},
    {NULL,0}
  };

  const char* proj = pHPXProj();
  if (!proj)
    return 0;
  int ii;
  for (ii=0; zen[ii].code; ii++)
    if (!strcasecmp(proj, zen[ii].code))
      break;
  if (!zen[ii].code)
    return 0;

  double fov = propReal("hips_initial_fov");
  if (isnan(pHPXFov_) && fov > 0)
    pHPXFov_ = fov < zen[ii].fovmax ? fov : zen[ii].fovmax;

  if (pHPXLon0Set_ || !isnan(pHPXLat0_))
    return 0;
  double lon, lat;
  if (!initialSky(&lon, &lat))
    return 0;
  pHPXLon0_ = lon;
  pHPXLat0_ = lat;
  return 1;
}

double FitsHiPS::initialFov()
{
  double fov = propReal("hips_initial_fov");
  return fov > 0 ? fov : NAN;
}

// hips_initial_ra/dec (ICRS) rotated into the HiPS's frame
int FitsHiPS::initialSky(double* olon, double* olat)
{
  double ra = propReal("hips_initial_ra");
  double dec = propReal("hips_initial_dec");
  if (isnan(ra) || isnan(dec) || dec < -90 || dec > 90)
    return 0;

  // ICRS -> galactic (Hipparcos, ESA 1997 vol. 1 sec. 1.5.3) or
  // ecliptic (mean obliquity of J2000, IAU 2006: 84381.406")
  static const double gal[3][3] = {
    {-0.0548755604162154, -0.8734370902348850, -0.4838350155487132},
    { 0.4941094278755837, -0.4448296299600112,  0.7469822444972189},
    {-0.8676661490190047, -0.1980763734312015,  0.4559837761750669}
  };
  double eps = 84381.406/3600*M_PI/180;
  double ecl[3][3] = {
    {1, 0, 0},
    {0, cos(eps), sin(eps)},
    {0, -sin(eps), cos(eps)}
  };

  double aa = ra*M_PI/180;
  double dd = dec*M_PI/180;
  double vv[3] = {cos(dd)*cos(aa), cos(dd)*sin(aa), sin(dd)};
  double ww[3] = {vv[0], vv[1], vv[2]};
  const double (*mm)[3] = NULL;
  if (frame_ == GAL)
    mm = gal;
  else if (frame_ == ECL)
    mm = ecl;
  if (mm)
    for (int jj=0; jj<3; jj++)
      ww[jj] = mm[jj][0]*vv[0] + mm[jj][1]*vv[1] + mm[jj][2]*vv[2];

  double lon = atan2(ww[1], ww[0])*180/M_PI;
  if (lon < 0)
    lon += 360;
  double zz = ww[2] > 1 ? 1 : ww[2] < -1 ? -1 : ww[2];
  *olon = lon;
  *olat = asin(zz)*180/M_PI;
  return 1;
}

// NorderK/DirD/NpixN.ext, D = (N/10000)*10000 (HiPS 1.0 sec. 4.1)
char* FitsHiPS::tilePath(int order, long npix, const char* ext)
{
  ostringstream str;
  str << pName_ << "/Norder" << order << "/Dir" << (npix/10000)*10000
      << "/Npix" << npix;
  if (slice_ > 0)
    str << '_' << slice_;
  str << '.' << ext << ends;
  return dupstr(str.str().c_str());
}

char* FitsHiPS::allskyPath(int order, const char* ext)
{
  ostringstream str;
  str << pName_ << "/Norder" << order << "/Allsky";
  if (slice_ > 0)
    str << '_' << slice_;
  str << '.' << ext << ends;
  return dupstr(str.str().c_str());
}

// width of the tiles in the order's Allsky.fits, or 0 if there is none
// (or it isn't a usable mosaic)
int FitsHiPS::allskyWidth(int order)
{
  if (order > 3)
    return 0;

  char* fn = allskyPath(order, tileExt_);
  int ww = 0;
  if (fileExists(fn)) {
    int nx =0;
    int ny =0;
    if (!strcmp(tileExt_, "fits")) {
      FitsFitsMMap img(fn, FitsFile::EXACTIMAGE);
      if (img.isValid() && img.isImage()) {
	nx = img.head()->naxis(0);
	ny = img.head()->naxis(1);
      }
    }
    else {
      HiPSImagePtr img = photoImage(interp_, fn, channel_);
      if (img) {
	nx = img->width;
	ny = img->height;
      }
    }
    if (nx>0 && ny>0) {
      int ncol = allskyCols(order);
      int nrow = ((12<<(2*order)) + ncol-1)/ncol;
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

int FitsHiPS::allskyAt(int order, int* bad)
{
  int save = badAllsky_;
  badAllsky_ = -1;
  int ww = order >= 0 ? allskyWidth(order) : 0;
  *bad = badAllsky_ == order;
  badAllsky_ = save;
  return ww;
}

int FitsHiPS::mocTiles(const char* fn, int order, std::vector<long long>* out)
{
  out->clear();
  if (order < 0 || order > 29)
    return 0;
  FitsFitsMMap ff(fn, FitsFile::RELAXTABLE);
  if (!ff.isValid() || !ff.isBinTable() || !ff.data())
    return 0;
  FitsHead* hd = ff.head();
  // getString's value lives in a buffer the next call reuses: one at
  // a time
  const char* ord = hd->getString("ORDERING");
  if (!ord || strncasecmp(ord, "NUNIQ", 5))
    return 0;
  const char* tf = hd->getString("TFORM1");
  if (!tf)
    return 0;
  // string values keep their padding: '1J      '
  std::string tform(tf);
  tform.erase(0, tform.find_first_not_of(' '));
  tform.erase(tform.find_last_not_of(' ')+1);
  int size;
  if (tform == "J" || tform == "1J")
    size = 4;
  else if (tform == "K" || tform == "1K")
    size = 8;
  else
    return 0;
  long rowlen = hd->naxis(0);
  long nrow = hd->naxis(1);
  if (rowlen < size || nrow < 0 ||
      (size_t)rowlen*nrow > (size_t)ff.dataSize())
    return 0;

  const char* data = (const char*)ff.data();
  std::vector<long long> tiles;
  for (long rr=0; rr<nrow; rr++) {
    const char* pp = data + (size_t)rr*rowlen;
    long long uniq = size == 4 ? readBE<int>(pp) : readBE<long long>(pp);
    if (uniq < 4)
      continue;
    // uniq = 4*4^o + npix
    int oo = 0;
    while (oo < 29 && (4LL << (2*(oo+1))) <= uniq)
      oo++;
    long long npix = uniq - (4LL << (2*oo));
    if (oo >= order)
      tiles.push_back(npix >> (2*(oo-order)));
    else {
      long long first = npix << (2*(order-oo));
      long long last = (npix+1) << (2*(order-oo));
      for (long long nn=first; nn<last; nn++)
	tiles.push_back(nn);
    }
  }
  std::sort(tiles.begin(), tiles.end());
  tiles.erase(std::unique(tiles.begin(), tiles.end()), tiles.end());
  out->swap(tiles);
  return 1;
}

// say why nothing could be loaded
void FitsHiPS::noSource(const char* msg)
{
  ostringstream str;
  str << "HiPS: " << msg;
  if (badAllsky_ >= 0)
    str << " (Norder" << badAllsky_ << "/Allsky." << tileExt_
	<< " is unreadable,"
	<< " perhaps truncated)";
  str << ends;
  internalError(str.str().c_str());
}

int FitsHiPS::anyTile(int order)
{
  long ntile = 12L << (2*order);
  for (long nn=0; nn<ntile; nn++) {
    char* fn = tilePath(order, nn, tileExt_);
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
    // tiles too deep for a map are refused before looking for any: at
    // order 10, say, that would be 12.6 million file checks
    long tileNside = (long)width << askOrder;
    if (aw == width) {
      source_ = ALLSKY;
      tileWidth_ = aw;
    }
    else if (tileNside <= HIPS_NSIDE_MAX && anyTile(askOrder)) {
      source_ = TILES;
      tileWidth_ = width;
    }
    else if (aw) {
      source_ = ALLSKY;
      tileWidth_ = aw;
    }
    else if (tileNside > HIPS_NSIDE_MAX) {
      ostringstream str;
      str << "HiPS: order " << askOrder << " is a map of nside " << tileNside
	  << ", larger than the limit of " << HIPS_NSIDE_MAX << ends;
      internalError(str.str().c_str());
      return 0;
    }
    else {
      ostringstream str;
      str << "no " << tileExt_ << " tiles or Allsky at order " << askOrder;
      if (depth_ > 1)
	str << " for cube frame " << slice_+1;
      str << ends;
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
    ostringstream str;
    str << "no " << tileExt_ << " tiles or Allsky";
    if (depth_ > 1)
      str << " for cube frame " << slice_+1;
    str << " small enough to load; try norder=" << ends;
    noSource(str.str().c_str());
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

  int fits = !strcmp(tileExt_, "fits");
  if (source_ == ALLSKY) {
    char* fn = allskyPath(order_, tileExt_);
    int ncol = allskyCols(order_);
    if (fits) {
      FitsFitsMMap img(fn, FitsFile::EXACTIMAGE);
      if (img.isValid() && img.isImage()) {
	for (int nn=0; nn<ntile_; nn++) {
	  if (copyBlock(&img, (nn/ncol)*ww, (nn%ncol)*ww, ww, map+nn*w2, sub))
	    nread_++;
	  else
	    nbad_++;
	}
      }
    }
    else {
      HiPSImagePtr img = photoImage(interp_, fn, channel_);
      if (img) {
	for (int nn=0; nn<ntile_; nn++) {
	  if (copyPhotoBlock(img->px, img->width, img->height, (nn/ncol)*ww,
			     (nn%ncol)*ww, ww, map+nn*w2, sub))
	    nread_++;
	  else
	    nbad_++;
	}
      }
    }
    delete [] fn;
  }
  else {
    for (int nn=0; nn<ntile_; nn++) {
      char* fn = tilePath(order_, nn, tileExt_);
      if (fileExists(fn)) {
	if (fits) {
	  FitsFitsMMap img(fn, FitsFile::EXACTIMAGE);
	  if (img.isValid() && img.isImage() &&
	      img.head()->naxis(0) == ww && img.head()->naxis(1) == ww &&
	      copyBlock(&img, 0, 0, ww, map+nn*w2, sub))
	    nread_++;
	  else
	    nbad_++;
	}
	else {
	  HiPSImagePtr img = photoImage(interp_, fn, channel_);
	  if (img && img->width == ww && img->height == ww &&
	      copyPhotoBlock(img->px, ww, ww, 0, 0, ww, map+nn*w2, sub))
	    nread_++;
	  else
	    nbad_++;
	}
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
  // the order of the values; a deep window that zooms past it says its
  // own (View > Keyword HIPSORD shows it in the info panel)
  head_->appendInteger("HIPSORD", order_, "HiPS order of the values");
  // a cube's frame, and its value on the third axis
  if (depth_ > 1) {
    head_->appendInteger("HIPSSLIC", slice_+1, "HiPS cube frame (1 = first)");
    head_->appendInteger("HIPSDPTH", depth_, "HiPS cube frames");
    const char* c3 = prop("data_cube_crval3");
    const char* d3 = prop("data_cube_cdelt3");
    if (c3 && d3) {
      double crpix3 = propReal("data_cube_crpix3");
      if (isnan(crpix3))
	crpix3 = 1;
      double vv = propReal("data_cube_crval3") +
	(slice_ + 1 - crpix3)*propReal("data_cube_cdelt3");
      ostringstream cc;
      cc << "frame value";
      // some surveys write "null" for no unit
      const char* uu = prop("data_cube_bunit3");
      if (uu && *uu && strcasecmp(uu, "null"))
	cc << " [" << uu << "]";
      cc << ends;
      head_->appendReal("HIPSZVAL", vv, 12, cc.str().c_str());
    }
  }

  // provenance
  {
    ostringstream str;
    str << "HiPS " << prop("creator_did", pName_) << ends;
    head_->insertComment("HISTORY", str.str().c_str(), NULL);
  }
  if (depth_ > 1) {
    ostringstream str;
    str << "cube frame " << slice_+1 << " of " << depth_ << ends;
    head_->insertComment("HISTORY", str.str().c_str(), NULL);
  }
  {
    ostringstream str;
    str << "order " << order_ << ", nside " << nside_ << ", from ";
    if (source_ == ALLSKY)
      str << "Allsky." << tileExt_;
    else
      str << tileExt_ << " tiles";
    str << ": " << nread_ << " of " << ntile_ << " tiles read" << ends;
    head_->insertComment("HISTORY", str.str().c_str(), NULL);
  }
  if (strcmp(tileExt_, "fits")) {
    ostringstream str;
    str << "values are " << tileExt_ << " display levels 0-255, not data"
	<< ends;
    head_->insertComment("COMMENT", str.str().c_str(), NULL);
    if (channel_ >= 0 && channel_ <= 2) {
      const char* names[] = {"red", "green", "blue"};
      ostringstream cc;
      cc << "the " << names[channel_] << " channel of the colour tiles"
	 << ends;
      head_->insertComment("COMMENT", cc.str().c_str(), NULL);
    }
  }
  if (nread_ < ntile_)
    head_->insertComment("HISTORY", "missing or unreadable tiles are NaN",
			 NULL);
  if (initView_) {
    ostringstream str;
    str << "centre " << pHPXLon0_ << " " << pHPXLat0_
	<< " from hips_initial_ra/dec (ICRS)" << ends;
    head_->insertComment("HISTORY", str.str().c_str(), NULL);
  }
  // the cut is in physical values: only meaningful for FITS tiles
  if (prop("hips_pixel_cut") && !strcmp(tileExt_, "fits")) {
    ostringstream str;
    str << "hips_pixel_cut " << prop("hips_pixel_cut") << ends;
    head_->insertComment("COMMENT", str.str().c_str(), NULL);
  }
  head_->updateHDU();

  ext_ = 1;
  inherit_ = 0;
  return 1;
}
