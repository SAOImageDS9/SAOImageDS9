// Copyright (C) 2026
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

// Native full-depth TIFF reading (TODO_TIFF16.md), Phase 0: the probe.
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

#include <string>
#include <vector>
using namespace std;

#include "tiff.h"

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
	if (!tiffAccumulate(dd, buf.data(), nrows*ww*spp)) {
	  dd.error = "unsupported sample type";
	  return;
	}
      }
  }
  else {
    long long tw = dd.tileWidth;
    long long th = dd.tileHeight;
    if (tw <= 0 || th <= 0) {
      dd.error = "bad tile size";
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
