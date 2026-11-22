// Copyright (C) 2026
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

// Native full-depth TIFF reading (TODO_TIFF16.md): the Phase 0 probe and
// the Phase 1 reader, FitsTiff.
//
// libtiff comes from tkimg's `tifftcl' package, which ds9 links statically
// and initialises at startup (Tifftcl_Init, then Tkimgtiff_Init, which
// registers the Deflate, JPEG and PixarLog codecs). We reach it through the
// tifftcl stubs table, as tkimg's own img::tiff does; the stub library is
// already on ds9's link line for tkimg.
//
// Include order: libtiff first, then <string>/<vector>, then fitsy's own.
// On mingw a header that reaches <windows.h> after a using-directive for
// std makes every bare `byte' in the Windows headers ambiguous against
// std::byte, and fitsy's headers carry that directive (AGENTS.md, "Windows:
// <windows.h> and using namespace std"). Do not tidy. tifftcl.h declares
// Tifftcl_InitStubs without C linkage, hence the extern "C" around it.
// It also pulls in libtiff's internal tiffiop.h; keep all of that in this
// file and out of tiff.h.

#include <stdarg.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <float.h>
#include <limits.h>

// tiffiop.h includes libtiff's generated tif_config.h, which defines
// PACKAGE_* again over fitsy's own -D flags. Nothing here uses them.
#undef PACKAGE_NAME
#undef PACKAGE_TARNAME
#undef PACKAGE_VERSION
#undef PACKAGE_STRING
#undef PACKAGE_BUGREPORT
#undef PACKAGE_URL

extern "C" {
#include "tifftcl.h"
}

#include <new>
#include <string>
#include <vector>
using namespace std;

#include "tiff.h"
#include "util.h"

FitsTiffDir::FitsTiffDir()
{
  index =0;
  width =0;
  height =0;
  bitsPerSample =0;
  samplesPerPixel =0;
  sampleFormat =0;
  photometric =0;
  compression =0;
  planar =0;
  orientation =0;
  predictor =0;
  tiled =0;
  tileWidth =0;
  tileHeight =0;
  rowsPerStrip =0;
  subfileType =0;
  byteSwapped =0;

  decoded =0;
  nsamples =0;
  min =0;
  max =0;
  sum =0;
}

// libtiff reports errors through a process-wide handler, which tkimg's
// photo reader shares, so install ours only for the length of one call
// and put the previous one back (TiffHandlers).
static string tiffErrorBuf;

static void tiffErrorHandler(const char* module, const char* fmt, va_list ap)
{
  char buf[1024];
  vsnprintf(buf, sizeof(buf), fmt, ap);
  if (!tiffErrorBuf.empty())
    tiffErrorBuf += "; ";
  if (module && *module) {
    tiffErrorBuf += module;
    tiffErrorBuf += ": ";
  }
  tiffErrorBuf += buf;
}

static void tiffWarningHandler(const char*, const char*, va_list)
{
  // warnings (unknown private tags and the like) are not errors
}

class TiffHandlers {
  TIFFErrorHandler err_;
  TIFFErrorHandler warn_;
public:
  TiffHandlers() {
    tiffErrorBuf.clear();
    err_ = TIFFSetErrorHandler(tiffErrorHandler);
    warn_ = TIFFSetWarningHandler(tiffWarningHandler);
  }
  ~TiffHandlers() {
    TIFFSetErrorHandler(err_);
    TIFFSetWarningHandler(warn_);
  }
};

static int tiffInitStubs(Tcl_Interp* interp, string& err)
{
  if (tifftclStubsPtr)
    return 1;
  if (!interp || !Tifftcl_InitStubs(interp, TIFFTCL_VERSION, 0)) {
    err = "the tifftcl package (libtiff) is not available";
    return 0;
  }
  return 1;
}

// The codecs whose pseudo-tag TIFFTAG_PREDICTOR exists. Asking any other
// codec for it is an "unknown tag" error. LZMA and ZSTD have a predictor
// too, but tifftcl builds neither, and asking an unconfigured codec gives
// "Cannot get Predictor tag as plugin is not configured" ahead of the
// real reason (measured on the Tests/tiff/unsupported fixtures).
static int tiffHasPredictor(int compression)
{
  switch (compression) {
  case COMPRESSION_LZW:
  case COMPRESSION_ADOBE_DEFLATE:
  case COMPRESSION_DEFLATE:
    return 1;
  }
  return 0;
}

// Fold n samples into min/max/sum. libtiff hands back decoded samples in
// this host's byte order, so they are read as they are.
static int tiffAccumulate(FitsTiffDir& dd, const unsigned char* buf,
			  long long n)
{
  int bps = dd.bitsPerSample;
  int sf = dd.sampleFormat;

  for (long long ii=0; ii<n; ii++) {
    double vv;
    if (sf == SAMPLEFORMAT_IEEEFP) {
      if (bps == 32)
	vv = ((const float*)buf)[ii];
      else if (bps == 64)
	vv = ((const double*)buf)[ii];
      else
	return 0;
    }
    else if (sf == SAMPLEFORMAT_INT) {
      switch (bps) {
      case 8: vv = ((const int8_t*)buf)[ii]; break;
      case 16: vv = ((const int16_t*)buf)[ii]; break;
      case 32: vv = ((const int32_t*)buf)[ii]; break;
      case 64: vv = (double)((const int64_t*)buf)[ii]; break;
      default: return 0;
      }
    }
    else {
      switch (bps) {
      case 8: vv = ((const uint8_t*)buf)[ii]; break;
      case 16: vv = ((const uint16_t*)buf)[ii]; break;
      case 32: vv = ((const uint32_t*)buf)[ii]; break;
      case 64: vv = (double)((const uint64_t*)buf)[ii]; break;
      default: return 0;
      }
    }

    if (dd.nsamples == 0 || vv < dd.min)
      dd.min = vv;
    if (dd.nsamples == 0 || vv > dd.max)
      dd.max = vv;
    dd.sum += vv;
    dd.nsamples++;
  }
  return 1;
}

// Decode every strip or tile of the current directory, clipping the
// padding of edge tiles and of a short last strip.
static void tiffDecode(TIFF* tif, FitsTiffDir& dd)
{
  int bps = dd.bitsPerSample;
  if (bps != 8 && bps != 16 && bps != 32 && bps != 64) {
    dd.error = "unsupported BitsPerSample";
    return;
  }
  if (dd.sampleFormat != SAMPLEFORMAT_UINT &&
      dd.sampleFormat != SAMPLEFORMAT_INT &&
      dd.sampleFormat != SAMPLEFORMAT_IEEEFP) {
    dd.error = "unsupported SampleFormat";
    return;
  }

  int bytes = bps/8;
  int separate = dd.planar == PLANARCONFIG_SEPARATE;
  int nplanes = separate ? dd.samplesPerPixel : 1;
  int spp = separate ? 1 : dd.samplesPerPixel;   // samples per pixel per plane
  long long ww = dd.width;
  long long hh = dd.height;

  tmsize_t bufSize = dd.tiled ? TIFFTileSize(tif) : TIFFStripSize(tif);
  if (bufSize <= 0) {
    dd.error = tiffErrorBuf.empty() ? "bad strip/tile size" : tiffErrorBuf;
    return;
  }
  vector<unsigned char> buf((size_t)bufSize);

  if (!dd.tiled) {
    long long rps = dd.rowsPerStrip;
    if (rps <= 0 || rps > hh)
      rps = hh;
    for (int pp=0; pp<nplanes; pp++)
      for (long long row=0; row<hh; row+=rps) {
	uint32_t strip = TIFFComputeStrip(tif, (uint32_t)row, (uint16_t)pp);
	if (TIFFReadEncodedStrip(tif, strip, buf.data(), bufSize) < 0) {
	  dd.error = tiffErrorBuf.empty() ? "strip decode failed" : tiffErrorBuf;
	  return;
	}
	long long nrows = hh-row < rps ? hh-row : rps;
	// A subsampled YCbCr strip (JPEG-in-TIFF) is smaller than
	// rows x width x samples; never read past what libtiff decoded.
	if ((long long)bufSize < nrows*ww*spp*bytes) {
	  dd.error = "decoded strip smaller than its rows (subsampled YCbCr?)";
	  return;
	}
	if (!tiffAccumulate(dd, buf.data(), nrows*ww*spp)) {
	  dd.error = "unsupported sample type";
	  return;
	}
      }
  }
  else {
    long long tw = dd.tileWidth;
    long long th = dd.tileHeight;
    if (tw <= 0 || th <= 0 || (long long)bufSize < tw*th*spp*bytes) {
      dd.error = "bad tile size, or a tile smaller than tw x th x samples";
      return;
    }
    for (int pp=0; pp<nplanes; pp++)
      for (long long yy=0; yy<hh; yy+=th)
	for (long long xx=0; xx<ww; xx+=tw) {
	  uint32_t tile = TIFFComputeTile(tif, (uint32_t)xx, (uint32_t)yy, 0,
					  (uint16_t)pp);
	  if (TIFFReadEncodedTile(tif, tile, buf.data(), bufSize) < 0) {
	    dd.error = tiffErrorBuf.empty() ? "tile decode failed" : tiffErrorBuf;
	    return;
	  }
	  long long nrows = hh-yy < th ? hh-yy : th;
	  long long ncols = ww-xx < tw ? ww-xx : tw;
	  for (long long rr=0; rr<nrows; rr++)
	    if (!tiffAccumulate(dd, buf.data() + rr*tw*spp*bytes, ncols*spp)) {
	      dd.error = "unsupported sample type";
	      return;
	    }
	}
  }

  dd.decoded = 1;
}

static void tiffReadTags(TIFF* tif, FitsTiffDir& dd)
{
  uint32_t u32 =0;
  uint16_t u16 =0;

  if (TIFFGetField(tif, TIFFTAG_IMAGEWIDTH, &u32))
    dd.width = u32;
  if (TIFFGetField(tif, TIFFTAG_IMAGELENGTH, &u32))
    dd.height = u32;
  if (TIFFGetFieldDefaulted(tif, TIFFTAG_BITSPERSAMPLE, &u16))
    dd.bitsPerSample = u16;
  if (TIFFGetFieldDefaulted(tif, TIFFTAG_SAMPLESPERPIXEL, &u16))
    dd.samplesPerPixel = u16;
  if (TIFFGetFieldDefaulted(tif, TIFFTAG_SAMPLEFORMAT, &u16))
    dd.sampleFormat = u16;
  if (TIFFGetField(tif, TIFFTAG_PHOTOMETRIC, &u16))
    dd.photometric = u16;
  else
    dd.photometric = -1;
  if (TIFFGetFieldDefaulted(tif, TIFFTAG_COMPRESSION, &u16))
    dd.compression = u16;
  if (TIFFGetFieldDefaulted(tif, TIFFTAG_PLANARCONFIG, &u16))
    dd.planar = u16;
  if (TIFFGetFieldDefaulted(tif, TIFFTAG_ORIENTATION, &u16))
    dd.orientation = u16;
  if (tiffHasPredictor(dd.compression) &&
      TIFFGetFieldDefaulted(tif, TIFFTAG_PREDICTOR, &u16))
    dd.predictor = u16;
  if (TIFFGetFieldDefaulted(tif, TIFFTAG_SUBFILETYPE, &u32))
    dd.subfileType = u32;

  dd.tiled = TIFFIsTiled(tif) ? 1 : 0;
  if (dd.tiled) {
    if (TIFFGetField(tif, TIFFTAG_TILEWIDTH, &u32))
      dd.tileWidth = u32;
    if (TIFFGetField(tif, TIFFTAG_TILELENGTH, &u32))
      dd.tileHeight = u32;
  }
  else if (TIFFGetFieldDefaulted(tif, TIFFTAG_ROWSPERSTRIP, &u32))
    dd.rowsPerStrip = u32;

  dd.byteSwapped = TIFFIsByteSwapped(tif) ? 1 : 0;
}

int tiffProbe(Tcl_Interp* interp, const char* fn, int decode,
	      vector<FitsTiffDir>& dirs, string& err)
{
  dirs.clear();
  if (!tiffInitStubs(interp, err))
    return 0;

  TiffHandlers handlers;

  TIFF* tif = TIFFOpen(fn, "r");
  if (!tif) {
    err = tiffErrorBuf.empty() ? "unable to open" : tiffErrorBuf;
    return 0;
  }

  int idx =0;
  do {
    FitsTiffDir dd;
    dd.index = idx++;
    tiffErrorBuf.clear();
    tiffReadTags(tif, dd);
    if (decode)
      tiffDecode(tif, dd);
    dirs.push_back(dd);
  } while (TIFFReadDirectory(tif));

  TIFFClose(tif);
  return 1;
}

// *** Phase 1: FitsTiff ***

// The FITS BITPIX a directory loads as, and the bytes per sample in the
// file and in memory (they differ only where a type is widened). 0 if the
// sample type is not loadable; see TODO_TIFF16.md section 2.3.
struct TiffType {
  int bitpix;
  int srcBytes;
  int dstBytes;
  const char* name;
};

static int tiffType(const FitsTiffDir& dd, TiffType* tt)
{
  int sf = dd.sampleFormat;
  int bps = dd.bitsPerSample;
  TiffType rr = {0,bps/8,bps/8,""};

  if (sf == SAMPLEFORMAT_UINT) {
    switch (bps) {
    case 8: rr.bitpix = 8; rr.name = "uint8"; break;
    case 16: rr.bitpix = -16; rr.name = "uint16"; break;  // fitsy's unsigned 16
    case 32: rr.bitpix = 64; rr.dstBytes = 8; rr.name = "uint32"; break;
    default: return 0;
    }
  }
  else if (sf == SAMPLEFORMAT_INT) {
    switch (bps) {
    case 8: rr.bitpix = 16; rr.dstBytes = 2; rr.name = "int8"; break;
    case 16: rr.bitpix = 16; rr.name = "int16"; break;
    case 32: rr.bitpix = 32; rr.name = "int32"; break;
    case 64: rr.bitpix = 64; rr.name = "int64"; break;
    default: return 0;
    }
  }
  else if (sf == SAMPLEFORMAT_IEEEFP) {
    switch (bps) {
    case 32: rr.bitpix = -32; rr.name = "float32"; break;
    case 64: rr.bitpix = -64; rr.name = "float64"; break;
    default: return 0;
    }
  }
  else
    return 0;

  if (tt)
    *tt = rr;
  return 1;
}

int tiffLoadable(const FitsTiffDir& dd, string* why)
{
  string ww;
  if (dd.width <= 0 || dd.height <= 0)
    ww = "no image size";
  else if (dd.samplesPerPixel != 1)
    ww = "more than one sample per pixel (RGB and the like are not supported yet)";
  else if (dd.photometric != PHOTOMETRIC_MINISBLACK &&
	   dd.photometric != PHOTOMETRIC_MINISWHITE)
    ww = "Photometric is not MinIsBlack or MinIsWhite";
  else if (!tiffType(dd, NULL)) {
    char buf[128];
    snprintf(buf, sizeof(buf),
	     "unsupported sample type (SampleFormat %d, BitsPerSample %d)",
	     dd.sampleFormat, dd.bitsPerSample);
    ww = buf;
  }
  else if (dd.planar != PLANARCONFIG_CONTIG &&
	   dd.planar != PLANARCONFIG_SEPARATE)
    ww = "bad PlanarConfiguration";

  if (why)
    *why = ww;
  return ww.empty();
}

static const char* tiffCompressionName(int cc)
{
  switch (cc) {
  case COMPRESSION_NONE: return "none";
  case COMPRESSION_LZW: return "LZW";
  case COMPRESSION_ADOBE_DEFLATE: return "Deflate";
  case COMPRESSION_DEFLATE: return "Deflate (old code)";
  case COMPRESSION_PACKBITS: return "PackBits";
  case COMPRESSION_JPEG: return "JPEG";
  case COMPRESSION_LZMA: return "LZMA";
  case COMPRESSION_ZSTD: return "ZSTD";
  }
  return "other";
}

// Where stored pixel (row rr, column cc) of an hh x ww raster lands in the
// FITS image: the Orientation tag applied (TIFF 6.0, p.37), then rows
// flipped. dw is the displayed width.
static inline size_t tiffDest(int orient, long long rr, long long cc,
			      long long hh, long long ww, long long dw)
{
  long long di, dj;
  switch (orient) {
  case 2: di = rr; dj = ww-1-cc; break;
  case 3: di = hh-1-rr; dj = ww-1-cc; break;
  case 4: di = hh-1-rr; dj = cc; break;
  case 5: di = cc; dj = rr; break;
  case 6: di = cc; dj = hh-1-rr; break;
  case 7: di = ww-1-cc; dj = hh-1-rr; break;
  case 8: di = ww-1-cc; dj = rr; break;
  default: di = rr; dj = cc; break;
  }
  long long dh = (orient >= 5) ? ww : hh;
  return (size_t)((dh-1-di)*dw + dj);
}

// Copy nn samples of a stored row segment starting at (rr, c0) to dest.
// Samples are in this host's byte order already; only the widened types
// need converting.
static void tiffScatter(const unsigned char* src, long long nn,
			long long rr, long long c0, const FitsTiffDir& dd,
			const TiffType& tt, int orient, long long dw,
			unsigned char* dest)
{
  long long hh = dd.height;
  long long ww = dd.width;
  int sb = tt.srcBytes;
  int db = tt.dstBytes;

  if (orient == 1 && sb == db) {
    memcpy(dest + tiffDest(1,rr,c0,hh,ww,dw)*db, src, (size_t)(nn*sb));
    return;
  }

  for (long long ii=0; ii<nn; ii++) {
    unsigned char* dd8 = dest + tiffDest(orient,rr,c0+ii,hh,ww,dw)*db;
    const unsigned char* ss = src + ii*sb;
    if (sb == db)
      memcpy(dd8, ss, sb);
    else if (sb == 4 && db == 8) {          // uint32 -> int64
      uint32_t vv;
      memcpy(&vv, ss, 4);
      int64_t ww64 = vv;
      memcpy(dd8, &ww64, 8);
    }
    else if (sb == 1 && db == 2) {          // int8 -> int16
      int16_t vv = *(const int8_t*)ss;
      memcpy(dd8, &vv, 2);
    }
  }
}

static int tiffRead(TIFF* tif, const FitsTiffDir& dd, const TiffType& tt,
		    int orient, long long dw, unsigned char* dest,
		    string& err)
{
  long long hh = dd.height;
  long long ww = dd.width;

  tmsize_t bufSize = dd.tiled ? TIFFTileSize(tif) : TIFFStripSize(tif);
  if (bufSize <= 0) {
    err = tiffErrorBuf.empty() ? "bad strip/tile size" : tiffErrorBuf;
    return 0;
  }
  vector<unsigned char> buf((size_t)bufSize);

  if (!dd.tiled) {
    long long rps = dd.rowsPerStrip;
    if (rps <= 0 || rps > hh)
      rps = hh;
    for (long long row=0; row<hh; row+=rps) {
      uint32_t strip = TIFFComputeStrip(tif, (uint32_t)row, 0);
      if (TIFFReadEncodedStrip(tif, strip, buf.data(), bufSize) < 0) {
	err = tiffErrorBuf.empty() ? "strip decode failed" : tiffErrorBuf;
	return 0;
      }
      long long nrows = hh-row < rps ? hh-row : rps;
      if ((long long)bufSize < nrows*ww*tt.srcBytes) {
	err = "strip smaller than its rows";
	return 0;
      }
      for (long long rr=0; rr<nrows; rr++)
	tiffScatter(buf.data() + rr*ww*tt.srcBytes, ww, row+rr, 0,
		    dd, tt, orient, dw, dest);
    }
  }
  else {
    long long tw = dd.tileWidth;
    long long th = dd.tileHeight;
    if (tw <= 0 || th <= 0 || (long long)bufSize < tw*th*tt.srcBytes) {
      err = "bad tile size";
      return 0;
    }
    for (long long yy=0; yy<hh; yy+=th)
      for (long long xx=0; xx<ww; xx+=tw) {
	uint32_t tile = TIFFComputeTile(tif, (uint32_t)xx, (uint32_t)yy, 0, 0);
	if (TIFFReadEncodedTile(tif, tile, buf.data(), bufSize) < 0) {
	  err = tiffErrorBuf.empty() ? "tile decode failed" : tiffErrorBuf;
	  return 0;
	}
	long long nrows = hh-yy < th ? hh-yy : th;
	long long ncols = ww-xx < tw ? ww-xx : tw;
	for (long long rr=0; rr<nrows; rr++)
	  tiffScatter(buf.data() + rr*tw*tt.srcBytes, ncols, yy+rr, xx,
		      dd, tt, orient, dw, dest);
      }
  }
  return 1;
}

// TIFF DateTime is "YYYY:MM:DD HH:MM:SS"; FITS wants ISO 8601.
static string tiffDate(const char* dt)
{
  int Y,M,D,h,m,s;
  if (!dt || sscanf(dt, "%d:%d:%d %d:%d:%d", &Y,&M,&D,&h,&m,&s) != 6)
    return "";
  char buf[32];
  snprintf(buf, sizeof(buf), "%04d-%02d-%02dT%02d:%02d:%02d", Y,M,D,h,m,s);
  return buf;
}

// FITS string values are printable ASCII; keep cards that way.
static string tiffPrintable(const char* ss, size_t max)
{
  string rr;
  for (; ss && *ss && rr.size()<max; ss++)
    rr += (*ss >= 32 && *ss < 127) ? *ss : ' ';
  return rr;
}

// fitsy's FitsCard::setString/setComment copy whatever they are given into
// the 80-byte card with no length check (a 68-character value plus a
// comment overruns it), and setComment writes `NAME = value', not a FITS
// COMMENT card. So cards are built here, bounded, and inserted as they are.
static void tiffCard(FitsHead* hh, const string& body)
{
  char card[FTY_CARDLEN];
  memset(card, ' ', FTY_CARDLEN);
  memcpy(card, body.c_str(), body.size() < FTY_CARDLEN ?
	 body.size() : FTY_CARDLEN);
  hh->cardins(card, NULL);
}

static void tiffComment(FitsHead* hh, const string& text)
{
  // COMMENT cards hold 72 characters after the keyword
  for (size_t ii=0; ii<text.size(); ii+=72)
    tiffCard(hh, "COMMENT " + text.substr(ii,72));
}

// KEY = 'value' / comment, with quotes in the value doubled (FITS 4.2.1)
// and the value cut short rather than overrunning the card.
static void tiffString(FitsHead* hh, const char* key, const string& value,
		       const char* comment)
{
  string kk(key);
  kk.resize(8, ' ');
  string body = kk + "= '";
  for (size_t ii=0; ii<value.size(); ii++) {
    string ch = value[ii] == '\'' ? "''" : string(1, value[ii]);
    if (body.size() + ch.size() + 1 > FTY_CARDLEN)
      break;
    body += ch;
  }
  body += "'";
  if (comment && body.size() + 3 + strlen(comment) <= FTY_CARDLEN)
    body += string(" / ") + comment;
  tiffCard(hh, body);
}

static void tiffHeader(TIFF* tif, FitsHead* hh, const FitsTiffDir& dd,
		       const TiffType& tt, int ndirs, int orient)
{
  char* str = NULL;
  if (TIFFGetField(tif, TIFFTAG_SOFTWARE, &str) && str && *str)
    tiffString(hh, "CREATOR", tiffPrintable(str,68), "TIFF Software");
  if (TIFFGetField(tif, TIFFTAG_DATETIME, &str)) {
    string dt = tiffDate(str);
    if (!dt.empty())
      tiffString(hh, "DATE", dt, "TIFF DateTime");
  }
  if (TIFFGetField(tif, TIFFTAG_ARTIST, &str) && str && *str)
    tiffString(hh, "OBSERVER", tiffPrintable(str,68), "TIFF Artist");

  char buf[256];
  tiffComment(hh, "Read from TIFF at full depth by DS9 (fitsy, libtiff).");
  snprintf(buf, sizeof(buf),
	   "TIFF directory 0 of %d: %lldx%lld %s, Photometric %d",
	   ndirs, dd.width, dd.height, tt.name, dd.photometric);
  tiffComment(hh, buf);
  if (dd.tiled)
    snprintf(buf, sizeof(buf), "TIFF compression %s (%d), predictor %d,"
	     " %lldx%lld tiles", tiffCompressionName(dd.compression),
	     dd.compression, dd.predictor, dd.tileWidth, dd.tileHeight);
  else
    snprintf(buf, sizeof(buf), "TIFF compression %s (%d), predictor %d,"
	     " %lld rows per strip", tiffCompressionName(dd.compression),
	     dd.compression, dd.predictor, dd.rowsPerStrip);
  tiffComment(hh, buf);
  if (orient != 1) {
    snprintf(buf, sizeof(buf),
	     "TIFF Orientation %d applied: the image is shown as displayed.",
	     orient);
    tiffComment(hh, buf);
  }
  if (dd.orientation < 1 || dd.orientation > 8) {
    snprintf(buf, sizeof(buf),
	     "TIFF Orientation %d is not valid; read as 1.", dd.orientation);
    tiffComment(hh, buf);
  }
  if (dd.photometric == PHOTOMETRIC_MINISWHITE)
    tiffComment(hh, "TIFF Photometric MinIsWhite: values kept as stored,"
		" not inverted (0 is white).");
  if (tt.srcBytes != tt.dstBytes) {
    snprintf(buf, sizeof(buf), "%s samples widened to BITPIX %d.",
	     tt.name, tt.bitpix);
    tiffComment(hh, buf);
  }
  if (ndirs > 1) {
    snprintf(buf, sizeof(buf),
	     "Only directory 0 was loaded; the file has %d.", ndirs);
    tiffComment(hh, buf);
  }

  if (TIFFGetField(tif, TIFFTAG_IMAGEDESCRIPTION, &str) && str && *str) {
    string desc = tiffPrintable(str, 72*20);
    tiffComment(hh, "TIFF ImageDescription:");
    tiffComment(hh, desc);
  }
}

FitsTiff::FitsTiff(Tcl_Interp* interp, const char* fn)
{
  valid_ = 0;

  string err;
  if (!fn || !*fn) {
    Tcl_AppendResult(interp, "tiff: no file name", NULL);
    return;
  }
  if (!tiffInitStubs(interp, err)) {
    Tcl_AppendResult(interp, "tiff: ", err.c_str(), NULL);
    return;
  }

  TiffHandlers handlers;
  TIFF* tif = TIFFOpen(fn, "r");
  if (!tif) {
    Tcl_AppendResult(interp, "tiff: ",
		     tiffErrorBuf.empty() ? "unable to open" :
		     tiffErrorBuf.c_str(), NULL);
    return;
  }

  int ndirs = TIFFNumberOfDirectories(tif);
  FitsTiffDir dd;
  tiffReadTags(tif, dd);

  string why;
  TiffType tt;
  if (!tiffLoadable(dd, &why) || !tiffType(dd, &tt)) {
    TIFFClose(tif);
    Tcl_AppendResult(interp, "tiff: ", why.c_str(), NULL);
    return;
  }

  int orient = (dd.orientation >= 1 && dd.orientation <= 8) ?
    dd.orientation : 1;
  long long dw = orient >= 5 ? dd.height : dd.width;
  long long dh = orient >= 5 ? dd.width : dd.height;
  if (dw > INT_MAX || dh > INT_MAX ||
      (unsigned long long)dw > SIZE_MAX/(unsigned long long)dh/tt.dstBytes) {
    TIFFClose(tif);
    Tcl_AppendResult(interp, "tiff: image too large", NULL);
    return;
  }

  size_t size = (size_t)dw*dh*tt.dstBytes;
  unsigned char* dest = new (std::nothrow) unsigned char[size];
  if (!dest) {
    TIFFClose(tif);
    Tcl_AppendResult(interp, "tiff: out of memory", NULL);
    return;
  }

  tiffErrorBuf.clear();
  if (!tiffRead(tif, dd, tt, orient, dw, dest, err)) {
    delete [] dest;
    TIFFClose(tif);
    Tcl_AppendResult(interp, "tiff: ", err.c_str(), NULL);
    return;
  }

  head_ = new FitsHead((int)dw, (int)dh, 1, tt.bitpix);
  if (!head_->isValid()) {
    delete [] dest;
    TIFFClose(tif);
    Tcl_AppendResult(interp, "tiff: unable to build a header", NULL);
    return;
  }
  tiffHeader(tif, head_, dd, tt, ndirs, orient);
  head_->buildIndex();
  head_->updateHDU();
  TIFFClose(tif);

  data_ = dest;
  dataSize_ = size;
  dataSkip_ = 0;

  // libtiff hands back samples in this host's byte order
  byteswap_ = 0;
  endian_ = lsb() ? LITTLE : BIG;
  valid_ = 1;
}

FitsTiff::~FitsTiff()
{
  if (data_)
    delete [] (unsigned char*)data_;
}
