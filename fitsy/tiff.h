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

#endif
