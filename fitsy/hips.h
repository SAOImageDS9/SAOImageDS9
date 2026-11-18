// Copyright (C) 1999-2021
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __fitships_h__
#define __fitships_h__

#include <map>
#include <memory>
#include <string>
#include <vector>

#include <tcl.h>

#include "file.h"

// A local HiPS (IVOA Hierarchical Progressive Survey) read at one order
// and presented as an in-memory NESTED HEALPix binary table, so that
// FitsHPX (and the projection code behind it) loads it like any other
// HEALPix map.
//
// The name is the HiPS root directory, optionally followed by the usual
// HEALPix bracket options, e.g. "/data/Fermi/HiPS[norder=3,proj=MOL]".
// norder= picks the HiPS order. Without it, the deepest order whose map
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
  const char* tileExt_; // tile files read: fits, png or jpg
  Tcl_Interp* interp_; // decodes png/jpg tiles through Tk photos
  int channel_;        // colour tiles: 0/1/2 red/green/blue, -1 luminance
  int initView_;       // window centre taken from hips_initial_ra/dec
  int depth_;          // cube frames (hips_cube_depth), 1 for an image
  int slice_;          // the cube frame read, 0 for an image
  int maxOrder_;       // hips_order
  int minOrder_;       // hips_order_min
  int width_;          // hips_tile_width (tileWidth_ is as read)
  long long* ident_;   // identity index table for tile(), width_^2
  int ownMap_;         // data_ is ours to free (until takeMap())
  int remote_;         // a remote HiPS's cache (.remote): its tiles are
		       // only those fetched

  int readProperties(const char*);
  const char* prop(const char*, const char* =NULL);
  int propInt(const char*, int);
  double propReal(const char*);
  int initialView();
  int initialSky(double* lon, double* lat);
  char* tilePath(int order, long npix, const char* ext);
  char* allskyPath(int order, const char* ext);
  int allskyWidth(int order);
  int anyTile(int order);
  int allTiles(int order);
  int chooseSource(int order, int width, int explicitOrder);
  void noSource(const char*);
  int buildMap(float*);
  int initHeaders();

 public:
  // inspect 1: read the properties and choose what a load would (format,
  // order and source), but build no map; valid even when nothing can be
  // loaded (source() NONE). inspect 2: only the format and the orders
  // (properties and options checked), no looking for tiles. For the Tcl side (the hipsinfo command,
  // tksao/saotk.C), so the dialogs and the fetcher ask the reader
  // rather than copy it.
  FitsHiPS(const char*, Tcl_Interp* =NULL, int channel =-1, int inspect =0);
  ~FitsHiPS();

  int order() {return order_;}
  long nside() {return nside_;}
  Source source() {return source_;}
  // the tile width of what is read (an Allsky's may be less than
  // tileWidth()'s), the sky frame (hips_frame)
  int readWidth() {return tileWidth_;}
  Frame frame() {return frame_;}

  // order's Allsky (orders 0-3): the width of its tiles, or 0 if there
  // is none or it can't be used; bad is 1 if it is there but unusable
  // (truncated, the wrong size)
  int allskyAt(int order, int* bad);
  // hips_initial_ra/dec in the HiPS's own frame (0 if not given), and
  // hips_initial_fov (NaN if not given)
  int initialPosition(double* lon, double* lat) {
    return initialSky(lon, lat);}
  double initialFov();

  // the tiles of order a MOC file (FITS, ORDERING = NUNIQ, as FitsHPX
  // reads) covers, sorted: a deeper cell gives its order-K parent, a
  // shallower one all its order-K children. 0 if it can't be read or
  // isn't a NUNIQ MOC.
  static int mocTiles(const char* fn, int order,
		      std::vector<long long>* out);

  // Tile access, for deep windows (tksao FitsHPXReproj): the HiPS's
  // root directory (local, or a remote HiPS's cache), its tile format
  // (fits, png or jpg), full tile width and order range, and tile N of
  // order K (tileWidth()^2 floats, top row first: t[r*W + c] is the
  // tile's pixel at row r from the top, column c, which is NESTED
  // sub-index interleave(r, c)), blank pixels NaN; empty if the tile
  // isn't there or can't be read. Tiles come from a cache shared by
  // every HiPS in the process (see hips.C), and stay valid while held.
  // cachedOnly: only a tile already decoded in that cache (no file read
  // or decode, for a window rebuilt while dragging); hasTile: whether
  // its file is there.
  const char* root() {return pName_;}
  const char* tileExt() {return tileExt_;}
  int tileWidth() {return width_;}
  int maxOrder() {return maxOrder_;}
  int minOrder() {return minOrder_;}
  std::shared_ptr<const float> tile(int order, long long npix,
				    int cachedOnly =0);
  int hasTile(int order, long long npix);
  int depth() {return depth_;}
  int slice() {return slice_;}

  // Hand the map (12*nside^2 floats, NESTED) to a FitsHPX that reads it
  // in place, as one copy instead of two: it is converted to native
  // byte order and the caller owns it from then on. This table's data
  // are then no longer big-endian FITS, and are freed with the caller:
  // nothing reads a HiPS's table after its window is built.
  float* takeMap();
};

#endif
