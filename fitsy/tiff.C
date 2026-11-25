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
#include <stdlib.h>
#include <string.h>
#include <float.h>
#include <limits.h>
#include <math.h>

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
  extraSamples =0;
  alphaSamples =0;

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

// IEEE 754 half precision to float. Every half is exactly a float, so
// this loses nothing: zeros, subnormals (renormalised), infinities and
// NaNs (payload kept) included.
static float tiffHalf(uint16_t hh)
{
  uint32_t sign = (uint32_t)(hh >> 15) << 31;
  uint32_t exp = (hh >> 10) & 0x1f;
  uint32_t man = hh & 0x3ff;
  uint32_t ff;
  if (exp == 0) {
    if (man == 0)
      ff = sign;
    else {
      // subnormal: man * 2^-24; shift the leading 1 into the implicit bit
      uint32_t ee = 127-14;
      while (!(man & 0x400)) {
	man <<= 1;
	ee--;
      }
      ff = sign | (ee << 23) | ((man & 0x3ff) << 13);
    }
  }
  else if (exp == 31)
    ff = sign | 0x7f800000 | (man << 13);
  else
    ff = sign | ((exp - 15 + 127) << 23) | (man << 13);

  float rr;
  memcpy(&rr, &ff, 4);
  return rr;
}

// Unsigned samples of 1-15 bits other than 8 come packed, most
// significant bit first, each row starting on a byte boundary.
static int tiffPacked(int sf, int bps)
{
  return sf == SAMPLEFORMAT_UINT && bps >= 1 && bps < 16 && bps != 8;
}

// The bytes one row of nn samples occupies in a strip or tile.
static long long tiffRowBytes(long long nn, int bps)
{
  return (nn*bps + 7)/8;
}

// Unpack nn samples of bps bits from src into out, one byte each (ob 1)
// or one 16 bit word each in this host's order (ob 2).
static void tiffUnpack(const unsigned char* src, long long nn, int bps,
		       unsigned char* out, int ob)
{
  uint32_t acc =0;
  int nb =0;
  uint32_t mask = (1u << bps) - 1;
  for (long long ii=0; ii<nn; ii++) {
    while (nb < bps) {
      acc = (acc << 8) | *src++;
      nb += 8;
    }
    uint32_t vv = (acc >> (nb - bps)) & mask;
    nb -= bps;
    acc &= (1u << nb) - 1;
    if (ob == 1)
      out[ii] = (unsigned char)vv;
    else {
      uint16_t v16 = (uint16_t)vv;
      memcpy(out + 2*ii, &v16, 2);
    }
  }
}

// Fold n samples into min/max/sum. libtiff hands back decoded samples in
// this host's byte order, so they are read as they are.
static int tiffAccumulate(FitsTiffDir& dd, const unsigned char* buf,
			  long long n, int bps)
{
  int sf = dd.sampleFormat;

  for (long long ii=0; ii<n; ii++) {
    double vv;
    if (sf == SAMPLEFORMAT_IEEEFP) {
      if (bps == 32)
	vv = ((const float*)buf)[ii];
      else if (bps == 64)
	vv = ((const double*)buf)[ii];
      else if (bps == 16)
	vv = tiffHalf(((const uint16_t*)buf)[ii]);
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
  int packed = tiffPacked(dd.sampleFormat, bps);
  if (bps != 8 && bps != 16 && bps != 32 && bps != 64 && !packed) {
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
  // packed samples are unpacked a row at a time to 16 bits, then folded
  int abps = packed ? 16 : bps;
  vector<unsigned char> urow;

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
	long long rb = packed ? tiffRowBytes(ww*spp, bps) : ww*spp*bytes;
	// A subsampled YCbCr strip (JPEG-in-TIFF) is smaller than
	// rows x width x samples; never read past what libtiff decoded.
	if ((long long)bufSize < nrows*rb) {
	  dd.error = "decoded strip smaller than its rows (subsampled YCbCr?)";
	  return;
	}
	for (long long rr=0; rr<nrows; rr++) {
	  const unsigned char* src = buf.data() + rr*rb;
	  if (packed) {
	    urow.resize((size_t)(ww*spp*2));
	    tiffUnpack(src, ww*spp, bps, urow.data(), 2);
	    src = urow.data();
	  }
	  if (!tiffAccumulate(dd, src, ww*spp, abps)) {
	    dd.error = "unsupported sample type";
	    return;
	  }
	}
      }
  }
  else {
    long long tw = dd.tileWidth;
    long long th = dd.tileHeight;
    long long rb = packed ? tiffRowBytes(tw*spp, bps) : tw*spp*bytes;
    if (tw <= 0 || th <= 0 || (long long)bufSize < th*rb) {
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
	  for (long long rr=0; rr<nrows; rr++) {
	    const unsigned char* src = buf.data() + rr*rb;
	    if (packed) {
	      urow.resize((size_t)(tw*spp*2));
	      tiffUnpack(src, tw*spp, bps, urow.data(), 2);
	      src = urow.data();
	    }
	    if (!tiffAccumulate(dd, src, ncols*spp, abps)) {
	      dd.error = "unsupported sample type";
	      return;
	    }
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

  uint16_t nextra =0;
  uint16_t* extra =NULL;
  if (TIFFGetField(tif, TIFFTAG_EXTRASAMPLES, &nextra, &extra)) {
    dd.extraSamples = nextra;
    for (int ii=0; extra && ii<nextra; ii++)
      if (extra[ii] == EXTRASAMPLE_ASSOCALPHA ||
	  extra[ii] == EXTRASAMPLE_UNASSALPHA)
	dd.alphaSamples++;
  }
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
  int srcBytes;               // per sample, after any unpacking
  int dstBytes;
  int packed;                 // unsigned 1-15 bits, not 8: unpacked first
  int bps;
  const char* name;
};

static int tiffType(const FitsTiffDir& dd, TiffType* tt)
{
  int sf = dd.sampleFormat;
  int bps = dd.bitsPerSample;
  TiffType rr = {0,bps/8,bps/8,0,bps,""};
  static const char* packedNames[16] = {"", "uint1", "uint2", "uint3",
    "uint4", "uint5", "uint6", "uint7", "", "uint9", "uint10", "uint11",
    "uint12", "uint13", "uint14", "uint15"};

  if (tiffPacked(sf, bps)) {
    // raw counts, unscaled: 1-7 bits as BITPIX 8, 9-15 as fitsy's -16
    rr.packed = 1;
    rr.srcBytes = rr.dstBytes = bps < 8 ? 1 : 2;
    rr.bitpix = bps < 8 ? 8 : -16;
    rr.name = packedNames[bps];
  }
  else if (sf == SAMPLEFORMAT_UINT) {
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
    case 16: rr.bitpix = -32; rr.dstBytes = 4; rr.name = "float16"; break;
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
  char buf[160];
  int color = dd.samplesPerPixel - dd.extraSamples;
  int gray = dd.photometric == PHOTOMETRIC_MINISBLACK ||
    dd.photometric == PHOTOMETRIC_MINISWHITE;

  if (dd.width <= 0 || dd.height <= 0)
    ww = "no image size";
  else if (!gray && dd.photometric != PHOTOMETRIC_RGB) {
    snprintf(buf, sizeof(buf), "Photometric %d is not MinIsBlack,"
	     " MinIsWhite or RGB (palette, YCbCr, CMYK and the like load"
	     " only as a photo)", dd.photometric);
    ww = buf;
  }
  else if (gray && dd.samplesPerPixel - dd.alphaSamples != 1) {
    snprintf(buf, sizeof(buf), "%d samples per pixel with Photometric"
	     " MinIsBlack and %d alpha: multi-band images are not"
	     " supported", dd.samplesPerPixel, dd.alphaSamples);
    ww = buf;
  }
  else if (!gray && color != 3) {
    snprintf(buf, sizeof(buf), "%d samples per pixel with Photometric RGB"
	     " and %d ExtraSamples", dd.samplesPerPixel, dd.extraSamples);
    ww = buf;
  }
  else if (!tiffType(dd, NULL)) {
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

int tiffIsRGB(Tcl_Interp* interp, const char* fn)
{
  vector<FitsTiffDir> dirs;
  string err;
  if (!tiffProbe(interp, fn, 0, dirs, err) || dirs.empty())
    return 0;
  return tiffLoadable(dirs[0], NULL) &&
    dirs[0].photometric == PHOTOMETRIC_RGB;
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

// Copy nn pixels of a stored row segment starting at (rr, c0) to dest.
// stride is the samples from one pixel to the next in src (samples per
// pixel for chunky data, 1 for planar). Samples are in this host's byte
// order already; only the widened types need converting.
static void tiffScatter(const unsigned char* src, long long nn, int stride,
			long long rr, long long c0, const FitsTiffDir& dd,
			const TiffType& tt, int orient, long long dw,
			unsigned char* dest)
{
  long long hh = dd.height;
  long long ww = dd.width;
  int sb = tt.srcBytes;
  int db = tt.dstBytes;

  if (orient == 1 && sb == db && stride == 1) {
    memcpy(dest + tiffDest(1,rr,c0,hh,ww,dw)*db, src, (size_t)(nn*sb));
    return;
  }

  for (long long ii=0; ii<nn; ii++) {
    unsigned char* dd8 = dest + tiffDest(orient,rr,c0+ii,hh,ww,dw)*db;
    const unsigned char* ss = src + ii*stride*sb;
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
    else if (sb == 2 && db == 4) {          // float16 -> float32
      uint16_t vv;
      memcpy(&vv, ss, 2);
      float ff = tiffHalf(vv);
      memcpy(dd8, &ff, 4);
    }
  }
}

// Decode the current directory: sample samples[k] of every pixel to the
// FITS plane planes[k], k < nn. Each strip or tile is decoded once and
// every wanted sample scattered from it, whether the data are chunky
// (samples interleaved) or planar (one strip/tile set per sample).
static int tiffRead(TIFF* tif, const FitsTiffDir& dd, const TiffType& tt,
		    int orient, long long dw, int nn, const int* samples,
		    unsigned char** planes, string& err)
{
  long long hh = dd.height;
  long long ww = dd.width;
  int sb = tt.srcBytes;
  int separate = dd.planar == PLANARCONFIG_SEPARATE;
  int spp = separate ? 1 : dd.samplesPerPixel;   // per strip/tile row
  int npass = separate ? nn : 1;
  // packed samples: each row is unpacked into urow, then scattered as
  // whole samples of sb bytes
  vector<unsigned char> urow;

  tmsize_t bufSize = dd.tiled ? TIFFTileSize(tif) : TIFFStripSize(tif);
  if (bufSize <= 0) {
    err = tiffErrorBuf.empty() ? "bad strip/tile size" : tiffErrorBuf;
    return 0;
  }
  vector<unsigned char> buf((size_t)bufSize);

  for (int pass=0; pass<npass; pass++) {
    // chunky: one pass scatters every wanted sample; planar: a pass
    // per wanted sample, over that sample's own strips/tiles
    uint16_t plane = separate ? (uint16_t)samples[pass] : 0;
    int k0 = separate ? pass : 0;
    int k1 = separate ? pass+1 : nn;

    if (!dd.tiled) {
      long long rps = dd.rowsPerStrip;
      if (rps <= 0 || rps > hh)
	rps = hh;
      for (long long row=0; row<hh; row+=rps) {
	uint32_t strip = TIFFComputeStrip(tif, (uint32_t)row, plane);
	if (TIFFReadEncodedStrip(tif, strip, buf.data(), bufSize) < 0) {
	  err = tiffErrorBuf.empty() ? "strip decode failed" : tiffErrorBuf;
	  return 0;
	}
	long long nrows = hh-row < rps ? hh-row : rps;
	long long rb = tt.packed ? tiffRowBytes(ww*spp, tt.bps) : ww*spp*sb;
	if ((long long)bufSize < nrows*rb) {
	  err = "strip smaller than its rows";
	  return 0;
	}
	for (long long rr=0; rr<nrows; rr++) {
	  const unsigned char* src = buf.data() + rr*rb;
	  if (tt.packed) {
	    urow.resize((size_t)(ww*spp*sb));
	    tiffUnpack(src, ww*spp, tt.bps, urow.data(), sb);
	    src = urow.data();
	  }
	  for (int kk=k0; kk<k1; kk++) {
	    int off = separate ? 0 : samples[kk];
	    tiffScatter(src + off*sb, ww, spp,
			row+rr, 0, dd, tt, orient, dw, planes[kk]);
	  }
	}
      }
    }
    else {
      long long tw = dd.tileWidth;
      long long th = dd.tileHeight;
      long long rb = tt.packed ? tiffRowBytes(tw*spp, tt.bps) : tw*spp*sb;
      if (tw <= 0 || th <= 0 || (long long)bufSize < th*rb) {
	err = "bad tile size";
	return 0;
      }
      for (long long yy=0; yy<hh; yy+=th)
	for (long long xx=0; xx<ww; xx+=tw) {
	  uint32_t tile = TIFFComputeTile(tif, (uint32_t)xx, (uint32_t)yy, 0,
					  plane);
	  if (TIFFReadEncodedTile(tif, tile, buf.data(), bufSize) < 0) {
	    err = tiffErrorBuf.empty() ? "tile decode failed" : tiffErrorBuf;
	    return 0;
	  }
	  long long nrows = hh-yy < th ? hh-yy : th;
	  long long ncols = ww-xx < tw ? ww-xx : tw;
	  for (long long rr=0; rr<nrows; rr++) {
	    const unsigned char* src = buf.data() + rr*rb;
	    if (tt.packed) {
	      urow.resize((size_t)(tw*spp*sb));
	      tiffUnpack(src, tw*spp, tt.bps, urow.data(), sb);
	      src = urow.data();
	    }
	    for (int kk=k0; kk<k1; kk++) {
	      int off = separate ? 0 : samples[kk];
	      tiffScatter(src + off*sb, ncols, spp,
			  yy+rr, xx, dd, tt, orient, dw, planes[kk]);
	    }
	  }
	}
    }
  }
  return 1;
}

// Luminance .299R+.587G+.114B, the weights the photo path uses, computed
// in double and stored in the plane's own type: rounded to nearest for
// integers (as the photo path rounds), as is for floats.
template<class T> static void tiffLumT(size_t nn, const T* rr, const T* gg,
				       const T* bb, T* out, int isint)
{
  for (size_t ii=0; ii<nn; ii++) {
    double vv = .299*rr[ii] + .587*gg[ii] + .114*bb[ii];
    out[ii] = isint ? (T)floor(vv+.5) : (T)vv;
  }
}

static void tiffLuminance(int bitpix, size_t nn, unsigned char* const* rgb,
			  unsigned char* out)
{
  switch (bitpix) {
  case 8:
    tiffLumT(nn, (uint8_t*)rgb[0], (uint8_t*)rgb[1], (uint8_t*)rgb[2],
	     (uint8_t*)out, 1);
    break;
  case -16:
    tiffLumT(nn, (uint16_t*)rgb[0], (uint16_t*)rgb[1], (uint16_t*)rgb[2],
	     (uint16_t*)out, 1);
    break;
  case 16:
    tiffLumT(nn, (int16_t*)rgb[0], (int16_t*)rgb[1], (int16_t*)rgb[2],
	     (int16_t*)out, 1);
    break;
  case 32:
    tiffLumT(nn, (int32_t*)rgb[0], (int32_t*)rgb[1], (int32_t*)rgb[2],
	     (int32_t*)out, 1);
    break;
  case 64:
    tiffLumT(nn, (int64_t*)rgb[0], (int64_t*)rgb[1], (int64_t*)rgb[2],
	     (int64_t*)out, 1);
    break;
  case -32:
    tiffLumT(nn, (float*)rgb[0], (float*)rgb[1], (float*)rgb[2],
	     (float*)out, 0);
    break;
  case -64:
    tiffLumT(nn, (double*)rgb[0], (double*)rgb[1], (double*)rgb[2],
	     (double*)out, 0);
    break;
  }
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

// Some writers put a FITS header in ImageDescription. Read it as one when
// every line is a FITS card (fixed format: an 8-character keyword of
// A-Z 0-9 _ -, then "= " for a value card, or COMMENT, HISTORY or a blank
// keyword) and at least three are value cards. Lines are separated by
// newlines, or, with none, are 80-character cards back to back; END ends
// them. Returns 1 and the cards to merge, without the structural ones
// (fitsy writes those for the image it built) and with NAXIS1/NAXIS2
// reported so the caller can check them against the image.
static int tiffFitsCards(const char* desc, vector<string>& cards,
			 long long* naxis1, long long* naxis2)
{
  static const char* structural[] = {"SIMPLE", "BITPIX", "NAXIS", "EXTEND",
    "BZERO", "BSCALE", "BLANK", "XTENSION", "PCOUNT", "GCOUNT", "CHECKSUM",
    "DATASUM", NULL};

  cards.clear();
  *naxis1 = *naxis2 = 0;
  string dd(desc);
  vector<string> lines;
  if (dd.find('\n') != string::npos) {
    size_t b =0;
    while (b <= dd.size()) {
      size_t e = dd.find('\n', b);
      if (e == string::npos)
	e = dd.size();
      string ln = dd.substr(b, e-b);
      if (!ln.empty() && ln[ln.size()-1] == '\r')
	ln.erase(ln.size()-1);
      lines.push_back(ln);
      b = e+1;
    }
  }
  else if (dd.size() >= 3*FTY_CARDLEN && dd.size() % FTY_CARDLEN == 0) {
    for (size_t b=0; b<dd.size(); b+=FTY_CARDLEN)
      lines.push_back(dd.substr(b, FTY_CARDLEN));
  }
  else
    return 0;

  int nvalue =0;
  for (size_t ii=0; ii<lines.size(); ii++) {
    string ln = lines[ii];
    if (ln.find_first_not_of(' ') == string::npos)
      continue;                               // blank line
    if (ln.size() > FTY_CARDLEN)
      return 0;
    ln.resize(FTY_CARDLEN, ' ');
    for (size_t jj=0; jj<ln.size(); jj++)
      if (ln[jj] < 32 || ln[jj] > 126)
	return 0;

    string key = ln.substr(0,8);
    key.erase(key.find_last_not_of(' ')+1);
    for (size_t jj=0; jj<key.size(); jj++) {
      char cc = key[jj];
      if (!((cc>='A' && cc<='Z') || (cc>='0' && cc<='9') || cc=='_' ||
	    cc=='-'))
	return 0;
    }
    if (key == "END")
      break;
    int value = ln.compare(8, 2, "= ") == 0;
    if (!value && key != "COMMENT" && key != "HISTORY" && !key.empty())
      return 0;
    if (value)
      nvalue++;

    if (key == "NAXIS1")
      *naxis1 = atoll(ln.c_str()+10);
    else if (key == "NAXIS2")
      *naxis2 = atoll(ln.c_str()+10);

    int skip =0;
    for (int kk=0; structural[kk]; kk++)
      if (key == structural[kk] ||
	  (!strcmp(structural[kk],"NAXIS") && !key.compare(0,5,"NAXIS")))
	skip =1;
    if (!skip)
      cards.push_back(ln);
  }
  return nvalue >= 3;
}

static int tiffHasCard(const vector<string>& cards, const char* key)
{
  string kk(key);
  kk.resize(8, ' ');
  for (size_t ii=0; ii<cards.size(); ii++)
    if (!cards[ii].compare(0, 8, kk))
      return 1;
  return 0;
}

struct TiffLoad {
  int ndirs;                  // directories in the file
  int nloaded;                // loaded as planes
  int nreduced;               // skipped: NewSubfileType reduced resolution
  int nother;                 // skipped: size, type or layout differ
  FitsTiff::Mode mode;
};

static void tiffHeader(TIFF* tif, FitsHead* hh, const FitsTiffDir& dd,
		       const TiffType& tt, const TiffLoad& ll, int orient,
		       long long dw, long long dh)
{
  // a FITS header in ImageDescription: merged first, so its cards (a WCS,
  // above all) sit right after the structural ones, and win over the
  // keywords taken from TIFF tags below
  char* desc = NULL;
  vector<string> fits;
  long long n1, n2;
  string nomerge;
  int isfits = TIFFGetField(tif, TIFFTAG_IMAGEDESCRIPTION, &desc) && desc &&
    *desc && tiffFitsCards(desc, fits, &n1, &n2);
  if (isfits && ((n1 && n1 != dw) || (n2 && n2 != dh)))
    nomerge = "their NAXIS1/NAXIS2 do not match the image";
  else if (isfits && orient != 1)
    nomerge = "the TIFF Orientation is applied, so their pixel coordinates"
      " would not match";
  int merge = isfits && nomerge.empty();
  if (merge)
    for (size_t ii=0; ii<fits.size(); ii++)
      tiffCard(hh, fits[ii]);
  else
    fits.clear();

  char* str = NULL;
  if (TIFFGetField(tif, TIFFTAG_SOFTWARE, &str) && str && *str &&
      !tiffHasCard(fits, "CREATOR"))
    tiffString(hh, "CREATOR", tiffPrintable(str,68), "TIFF Software");
  if (TIFFGetField(tif, TIFFTAG_DATETIME, &str) && !tiffHasCard(fits,"DATE")) {
    string dt = tiffDate(str);
    if (!dt.empty())
      tiffString(hh, "DATE", dt, "TIFF DateTime");
  }
  if (TIFFGetField(tif, TIFFTAG_ARTIST, &str) && str && *str &&
      !tiffHasCard(fits, "OBSERVER"))
    tiffString(hh, "OBSERVER", tiffPrintable(str,68), "TIFF Artist");

  char buf[256];
  int rgb = dd.photometric == PHOTOMETRIC_RGB;
  tiffComment(hh, "Read from TIFF at full depth by DS9 (fitsy, libtiff).");
  snprintf(buf, sizeof(buf),
	   "TIFF directory 0 of %d: %lldx%lld %s, Photometric %d, %d"
	   " samples per pixel", ll.ndirs, dd.width, dd.height, tt.name,
	   dd.photometric, dd.samplesPerPixel);
  tiffComment(hh, buf);
  if (dd.tiled)
    snprintf(buf, sizeof(buf), "TIFF compression %s (%d), predictor %d,"
	     " %lldx%lld tiles, %s", tiffCompressionName(dd.compression),
	     dd.compression, dd.predictor, dd.tileWidth, dd.tileHeight,
	     dd.planar == PLANARCONFIG_SEPARATE ? "planar" : "chunky");
  else
    snprintf(buf, sizeof(buf), "TIFF compression %s (%d), predictor %d,"
	     " %lld rows per strip, %s", tiffCompressionName(dd.compression),
	     dd.compression, dd.predictor, dd.rowsPerStrip,
	     dd.planar == PLANARCONFIG_SEPARATE ? "planar" : "chunky");
  tiffComment(hh, buf);
  if (rgb && ll.mode == FitsTiff::TIFF_RGB)
    tiffComment(hh, "TIFF RGB: the three channels are R, G and B.");
  else if (rgb)
    tiffComment(hh, "TIFF RGB loaded as luminance, .299R + .587G + .114B.");
  if (dd.extraSamples > 0) {
    snprintf(buf, sizeof(buf), "%d ExtraSamples (alpha or the like) not"
	     " loaded.", dd.extraSamples);
    tiffComment(hh, buf);
  }
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
  if (tt.packed) {
    snprintf(buf, sizeof(buf), "%s samples unpacked to BITPIX %d: the raw"
	     " counts, 0-%u, not rescaled.", tt.name, tt.bitpix,
	     (1u << tt.bps) - 1);
    tiffComment(hh, buf);
  }
  else if (tt.srcBytes != tt.dstBytes) {
    snprintf(buf, sizeof(buf), "%s samples %s to BITPIX %d.", tt.name,
	     tt.bitpix < 0 ? "converted exactly" : "widened", tt.bitpix);
    tiffComment(hh, buf);
  }
  if (ll.nloaded > 1) {
    snprintf(buf, sizeof(buf), "%d TIFF directories loaded as planes 1-%d.",
	     ll.nloaded, ll.nloaded);
    tiffComment(hh, buf);
  }
  if (ll.nreduced > 0) {
    snprintf(buf, sizeof(buf), "%d reduced-resolution directories"
	     " (NewSubfileType) skipped.", ll.nreduced);
    tiffComment(hh, buf);
  }
  if (ll.nother > 0) {
    snprintf(buf, sizeof(buf), "%d directories of another size, type or"
	     " layout skipped.", ll.nother);
    tiffComment(hh, buf);
  }
  if (ll.nloaded == 1 && ll.ndirs > 1 && ll.nreduced+ll.nother == 0) {
    snprintf(buf, sizeof(buf),
	     "Only directory 0 was loaded; the file has %d.", ll.ndirs);
    tiffComment(hh, buf);
  }

  if (merge) {
    snprintf(buf, sizeof(buf), "%d FITS cards merged from the TIFF"
	     " ImageDescription.", (int)fits.size());
    tiffComment(hh, buf);
  }
  else if (desc && *desc) {
    if (isfits)
      tiffComment(hh, "The TIFF ImageDescription holds FITS cards, not"
		  " merged: " + nomerge + ".");
    tiffComment(hh, "TIFF ImageDescription:");
    tiffComment(hh, tiffPrintable(desc, 72*20));
  }
}

// Whether directory oo can be another plane of a cube that starts with
// directory dd: same size, sample type, colour layout and orientation.
static int tiffSamePlane(const FitsTiffDir& dd, const FitsTiffDir& oo)
{
  return oo.width == dd.width && oo.height == dd.height &&
    oo.bitsPerSample == dd.bitsPerSample &&
    oo.sampleFormat == dd.sampleFormat &&
    oo.samplesPerPixel == dd.samplesPerPixel &&
    oo.extraSamples == dd.extraSamples &&
    oo.alphaSamples == dd.alphaSamples &&
    oo.photometric == dd.photometric &&
    oo.orientation == dd.orientation;
}

FitsTiff::FitsTiff(Tcl_Interp* interp, const char* fn, Mode mode)
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

  TiffLoad ll = {(int)TIFFNumberOfDirectories(tif), 0, 0, 0, mode};
  FitsTiffDir dd;
  tiffReadTags(tif, dd);

  string why;
  TiffType tt;
  if (!tiffLoadable(dd, &why) || !tiffType(dd, &tt)) {
    TIFFClose(tif);
    Tcl_AppendResult(interp, "tiff: ", why.c_str(), NULL);
    return;
  }
  int rgb = dd.photometric == PHOTOMETRIC_RGB;
  if (mode == TIFF_RGB && !rgb) {
    TIFFClose(tif);
    Tcl_AppendResult(interp, "tiff: not an RGB TIFF", NULL);
    return;
  }

  // the directories to load: 0, and in TIFF_IMAGE mode every later
  // full-resolution one that can be another plane of the same cube
  vector<int> dirs(1, 0);
  if (mode == TIFF_IMAGE) {
    for (int ii=1; ii<ll.ndirs; ii++) {
      FitsTiffDir oo;
      if (!TIFFSetDirectory(tif, (tdir_t)ii)) {
	ll.nother++;
	continue;
      }
      tiffReadTags(tif, oo);
      if (oo.subfileType & FILETYPE_REDUCEDIMAGE)
	ll.nreduced++;
      else if (tiffSamePlane(dd, oo) && tiffLoadable(oo, NULL))
	dirs.push_back(ii);
      else
	ll.nother++;
    }
  }
  ll.nloaded = (int)dirs.size();
  int nout = mode == TIFF_RGB ? 3 : ll.nloaded;

  int orient = (dd.orientation >= 1 && dd.orientation <= 8) ?
    dd.orientation : 1;
  long long dw = orient >= 5 ? dd.height : dd.width;
  long long dh = orient >= 5 ? dd.width : dd.height;
  if (dw > INT_MAX || dh > INT_MAX ||
      (unsigned long long)dw > SIZE_MAX/(unsigned long long)dh/tt.dstBytes/
      (nout+3)) {
    TIFFClose(tif);
    Tcl_AppendResult(interp, "tiff: image too large", NULL);
    return;
  }

  size_t npix = (size_t)dw*dh;
  size_t planeBytes = npix*tt.dstBytes;
  size_t size = planeBytes*nout;
  unsigned char* dest = new (std::nothrow) unsigned char[size];
  // luminance needs the three channels of one directory first
  unsigned char* tmp = NULL;
  if (rgb && mode != TIFF_RGB)
    tmp = new (std::nothrow) unsigned char[planeBytes*3];
  if (!dest || (rgb && mode != TIFF_RGB && !tmp)) {
    delete [] dest;
    delete [] tmp;
    TIFFClose(tif);
    Tcl_AppendResult(interp, "tiff: out of memory", NULL);
    return;
  }

  static const int gray[1] = {0};
  static const int rgbs[3] = {0,1,2};
  int ok = 1;
  for (int ii=0; ok && ii<ll.nloaded; ii++) {
    FitsTiffDir pd;
    if (!TIFFSetDirectory(tif, (tdir_t)dirs[ii])) {
      err = tiffErrorBuf.empty() ? "unable to read a directory" :
	tiffErrorBuf;
      ok = 0;
      break;
    }
    tiffReadTags(tif, pd);   // strips, tiles and codec may differ per page
    tiffErrorBuf.clear();

    if (!rgb) {
      unsigned char* pp[1] = {dest + ii*planeBytes};
      ok = tiffRead(tif, pd, tt, orient, dw, 1, gray, pp, err);
    }
    else if (mode == TIFF_RGB) {
      unsigned char* pp[3] = {dest, dest+planeBytes, dest+2*planeBytes};
      ok = tiffRead(tif, pd, tt, orient, dw, 3, rgbs, pp, err);
    }
    else {
      unsigned char* pp[3] = {tmp, tmp+planeBytes, tmp+2*planeBytes};
      ok = tiffRead(tif, pd, tt, orient, dw, 3, rgbs, pp, err);
      if (ok)
	tiffLuminance(tt.bitpix, npix, pp, dest + ii*planeBytes);
    }
  }
  delete [] tmp;
  if (!ok) {
    delete [] dest;
    TIFFClose(tif);
    Tcl_AppendResult(interp, "tiff: ", err.c_str(), NULL);
    return;
  }

  head_ = new FitsHead((int)dw, (int)dh, nout, tt.bitpix);
  if (!head_->isValid()) {
    delete [] dest;
    TIFFClose(tif);
    Tcl_AppendResult(interp, "tiff: unable to build a header", NULL);
    return;
  }
  TIFFSetDirectory(tif, 0);   // the text tags of directory 0
  tiffHeader(tif, head_, dd, tt, ll, orient, dw, dh);
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
