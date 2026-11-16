// Copyright (C) 1999-2021
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __fitships_h__
#define __fitships_h__

#include <map>
#include <string>

#include "file.h"

// A local HiPS (IVOA Hierarchical Progressive Survey) read at one order
// and presented as an in-memory NESTED HEALPix binary table, so that
// FitsHPX (and the projection code behind it) loads it like any other
// HEALPix map.
//
// The name is the HiPS root directory, optionally followed by the usual
// HEALPix bracket options, e.g. "/data/Fermi/HiPS[order=3,proj=MOL]".
// order= picks the HiPS order. Without it, the deepest order whose map
// fits in HIPS_NSIDE_AUTO is used.
//
// Tile layout (HiPS 1.0 sec. 4; the in-tile order is only drawn there,
// so it was measured on real HiPS, see TODO_HIPS.md): tile N at order K
// holds the NESTED pixels [N*W^2, (N+1)*W^2) of the map at order
// K+log2(W). Counting the tile's rows from the *top* (FITS rows are
// stored bottom-up), pixel (row r, column c) is NESTED sub-index
// interleave(ix=r, iy=c), with ix in the even bits.
//
// Only FITS tiles are read so far. Missing tiles and BLANK pixels become
// NaN.
class FitsHiPS : public FitsFile {
 public:
  enum Frame {UNKNOWN, EQU, GAL, ECL};
  enum Source {NONE, TILES, ALLSKY};

 private:
  std::map<std::string, std::string> prop_;
  int order_;          // HiPS order read
  int tileWidth_;      // pixels across a tile as read (Allsky may be less)
  long nside_;         // of the map built: tileWidth_ * 2^order_
  Frame frame_;
  Source source_;
  int ntile_;          // tiles at order_ (12*4^order_)
  int nread_;          // tiles read
  int nbad_;           // tiles present but unusable
  int badAllsky_;      // order of an unreadable Allsky.fits, or -1

  int readProperties(const char*);
  const char* prop(const char*, const char* =NULL);
  int propInt(const char*, int);
  char* tilePath(int order, long npix, const char* ext);
  char* allskyPath(int order, const char* ext);
  int allskyWidth(int order);
  int anyTile(int order);
  int chooseSource(int order, int width, int explicitOrder);
  void noSource(const char*);
  int buildMap(float*);
  int initHeaders();

 public:
  FitsHiPS(const char*);
  ~FitsHiPS();

  // a HiPS root directory (one holding a properties file)?
  static int isHiPS(const char* dir);

  int order() {return order_;}
  long nside() {return nside_;}
  Source source() {return source_;}
};

#endif
