// Copyright (C) 2026
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __fitstiff_h__
#define __fitstiff_h__

// Native full-depth TIFF reading (TODO_TIFF16.md). libtiff is the one
// vendored inside tkimg as the `tifftcl' package, reached through its stubs
// table, so every libtiff include stays in tiff.C: its headers pull in
// libtiff internals (tiffiop.h) whose macros must not leak into fitsy.
//
// Phase 0 has only the probe below: the tags of every directory (IFD), and
// optionally a full decode of each one's strips or tiles, reduced to
// min/max/sum so a test can compare the values with the file's FITS twin.

#include <tcl.h>

#include <string>
#include <vector>
using namespace std;

struct FitsTiffDir {
  int index;                  // directory (IFD) number, from 0
  long long width;
  long long height;
  int bitsPerSample;
  int samplesPerPixel;
  int sampleFormat;           // 1 uint, 2 int, 3 float (TIFF SampleFormat)
  int photometric;
  int compression;
  int planar;                 // 1 contig (chunky), 2 separate (planar)
  int orientation;
  int predictor;              // 0 if the codec has none
  int tiled;
  long long tileWidth;
  long long tileHeight;
  long long rowsPerStrip;
  long long subfileType;      // NewSubfileType; bit 0 = reduced resolution
  int byteSwapped;            // file byte order differs from this host's
  int extraSamples;           // ExtraSamples count
  int alphaSamples;           // of those, alpha (associated or not)

  // filled only when decode was asked for
  int decoded;                // 1 if every strip/tile decoded
  long long nsamples;
  double min;
  double max;
  long double sum;
  string error;               // why the decode failed, from libtiff

  FitsTiffDir();
};

// Read every directory of fn. With decode, also read each directory's
// pixels. Returns 0 if the file could not be opened at all (err says why);
// a directory whose decode fails still returns 1, with dir.error set.
int tiffProbe(Tcl_Interp*, const char* fn, int decode,
	      vector<FitsTiffDir>& dirs, string& err);

// Whether fitsy can load directory dd natively, and if not, why: one
// sample per pixel with Photometric MinIsBlack/MinIsWhite plus any alpha,
// or three with Photometric RGB plus any ExtraSamples (both skipped), and
// an 8-64 bit integer or 32/64 bit float sample type. Grayscale with
// unspecified ExtraSamples is multi-band data, and is refused.
int tiffLoadable(const FitsTiffDir& dd, string* why);

// 1 if directory 0 of fn is an RGB TIFF the native reader loads, which is
// when an RGB frame takes all three channels from it in one load.
int tiffIsRGB(Tcl_Interp*, const char* fn);

#include "file.h"

// A TIFF as one FITS-like image, at the depth it was stored
// (TODO_TIFF16.md section 2.3). Rows are flipped and the Orientation tag
// is applied, so the image appears as a TIFF viewer shows it. The pixels
// are decoded into memory, in this host's byte order. On failure
// isValid() is 0 and the reason is appended to the Tcl result.
//
//   TIFF_IMAGE  every full-resolution directory with directory 0's size
//               and type, one plane each (a cube for a stack); an RGB
//               directory becomes one luminance plane, .299R+.587G+.114B
//   TIFF_PLANE  directory 0 only, as one plane (slice mode)
//   TIFF_RGB    directory 0's R, G and B as three planes, for the three
//               channels of an RGB frame; fails for anything but RGB
class FitsTiff : public FitsFile {
 public:
  enum Mode {TIFF_IMAGE, TIFF_PLANE, TIFF_RGB};

  FitsTiff(Tcl_Interp*, const char* fn, Mode =TIFF_IMAGE);
  ~FitsTiff();
};

#endif
