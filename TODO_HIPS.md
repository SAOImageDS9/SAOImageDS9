# TODO: HiPS (Hierarchical Progressive Surveys) support

Status (2026-11-16): Phases 0-5 done: local and remote (HTTP)
HiPS, FITS, PNG/JPEG and colour tiles, with all projections, the `hips`
command, dialogs, backup/restore, Open Recent, properties defaults,
coverage overlay, provenance, and deep windows that zoom into the HiPS's
deeper tiles (fetching only the visible ones), and cubes. Work is on branch `hips`. Builds on the
HEALPix projection work in `TODO.md` (PR SAOImageDS9/SAOImageDS9#380:
`FitsHPXReproj`, `proj=`/`lon0=`/`lat0=`/`fov=`, live windows).

Spec: IVOA HiPS 1.0 (REC 2017-05-19,
<https://www.ivoa.net/documents/HiPS/20170519/REC-HIPS-1.0-20170519.pdf>;
the PR-20170406 draft is the same in every respect used here). Section
numbers below refer to it.

Sample data: `hips/data1/ancillary/missions/Fermi_Band4/HiPS` (Fermi-LAT
1-3 GeV, <https://cade.irap.omp.eu/doku.php?id=fermi>). Below it is called
`$FERMI`.

## What's left (2026-11-16)

Phases 0-6 are done. Waiting on the user (2026-11-16):
- Downloads: a live check of the MocServer format (ID / list), CDS
  `hips2fits` reference images, real 8-bit and BITPIX -64 samples.
- Scope: catalogue HiPS into the catalog tool; the whole-map memory
  limit at nside 8192; a cube frame range (`slice=a-b`) for 3-D.
- Upstream: push / PR of branch `hips`.

The items, roughly by value:

- Cubes are 2-D frames underneath (Phase 4): no 3-D render, no `save`
  of the whole cube, no `cube axes` reordering. Decided 2026-11-16 to
  leave this as a documented limit (`file.html`). The way to lift it
  would be a frame range (`slice=a-b`) read for the current window
  into an in-memory FITS cube, capped in size, giving up deep zoom.
  No real FITS-tile cube can be tested: every FITS cube CDS lists
  (ACT, HI4PI, HIPASS, GALFA-HI, CGPS, Mopra, Bayestar19, ...) is
  "Deprecated/HiPS-Cube" and its `properties` is 404 (2026-11-16);
  the MocServer lists no other provider's. Several write
  `data_cube_bunit3 = null`, now read as no unit (`hipscube.sh` 9).
  Checked 2026-11-16 and fine: `lock slice` and `match slice` (image
  and wcs) between HiPS cube frames and with a FITS cube on another
  velocity grid, a deep window following the lock, `cube play`/`stop`
  (`hipscube.sh` section 8). Scale limits per frame are not a gap: a
  FITS cube's minmax/zscale are per slice too, and user limits carry
  over to the next frame in both.
- HiPS by ID or from a list (Phase 6): done 2026-11-16. An ID
  (`CDS/P/DSS2/color`, `ivo://` optional, only if not a local path) is
  resolved to its `hips_service_url` through the MocServer
  (`phpxopen(mocserver)`, CDS then alaskybis) and loaded as that URL.
  The image + cube list (ID, obs_title, dataproduct_type,
  hips_service_url; two queries, `dataproduct_type=image|cube`,
  `hips_service_url=*`, `fields=`) is cached as `mocserver.txt` for a
  day, a stale copy serving when no server answers; it also resolves
  IDs without a query. `xpaget hips list [update] [pattern]`, File >
  Open HiPS from List..., and Open HiPS URL... takes an ID.
  `Tests/hips/hipsid.sh` (52) runs against a mock MocServer in
  `hipsserve.py`. Not yet checked against the real MocServer: that its
  default (ascii) answer is `key = value` records separated by blank
  lines, and that `hips_service_url=*` and `fields=` work as assumed.
- `format=` and `hips close`: done 2026-11-16. `format=fits|png|jpeg`
  (any case, `jpg` too; fitsy `FORMAT_` token, `pHiPSFormat_`) reads
  that kind if `hips_tile_format` lists it, else a refusal naming what
  it lists; remote loads and deep windows fetch that kind (HiPSTileExt
  takes the name's options; HiPSDeepWant reads them off the frame's
  name); scale limits follow the tiles read; a colour HiPS with FITS
  tiles reads the FITS ones into a plain frame unless `format=png`.
  The Open HiPS dialog has a Tiles menu when several kinds are listed;
  changing it rescans that kind's orders. `hips close` clears the
  current frame if it holds a HiPS, dropping its queued deep requests.
  `Tests/hips/hipsformat.sh` (30). The deep fetcher's `.missing` lists
  are per order and slice, not per format (the same cells, in practice).
- SAMP `hips`: exercised 2026-11-16 (`Tests/hips/hipssamp.sh`, 19,
  a private astropy hub, `samphub.py` + `sampcall.py`): ds9.set loads
  by directory, URL and ID, with options and `new`; ds9.get answers
  the name, `status`, `coverage`; `cancel`, `close`; errors come back
  as SAMP errors and ds9 keeps answering. Fixed: `hips list` over SAMP
  lost its newlines (a get's value is one line); it now goes as a file
  (`ProcessSend`, `comm.tcl` passes `fn`), as `fits header` does. No
  standard MType loads a HiPS, so other clients need `ds9.set`.

- Test data: 8-bit integer and BITPIX -64 FITS tiles are covered by
  synthetic HiPS (`mksynth.py`: u8 with BLANK/BSCALE/BZERO, f64 with
  NaN; `hipsload.sh` compares them with `mkref.py`). Real samples of
  each (`ESAVO/P/EXOSAT/all`, `CDS/P/MeerKAT/Galactic-Centre-spectral-
  index`, `hips/samples.md`) still need fetching; skipped 2026-11-16,
  downloads wait for the user's OK.
- Reference-image tests: done 2026-11-16 (`Tests/hips/hipsref.sh`,
  16): `mkref.py`'s NESTED map, rebuilt from the tiles, is projected by
  `refcmp.py` with `reproject_from_healpix` (nearest-neighbour, frame
  conversion) onto the WCS of the image ds9 saved. TAN, SIN, ZEA, ARC,
  COE, MOL, AIT and CAR, galactic and equatorial, 8-bit and -64 tiles,
  and two deep windows all agree on 100.00% of pixels. (reproject fills
  pixels outside an all-sky projection, where the WCS has no sky
  position; refcmp blanks them.) `Tests/hips.sh` runs every suite.
  Not done: CDS `hips2fits` as a check on remote HiPS, which needs the
  network (skipped, waits for the user's OK).
- Out of scope so far: catalogue HiPS (refused with a message), and
  the whole-map memory limit at nside 8192 (`TODO.md`).
- Upstream: branch `hips` is local only; not pushed, no PR.

## Background

### What a HiPS is

A HiPS is a directory tree (local, or the same paths under an HTTP base
URL) of image tiles. Each tile is one HEALPix cell, at several orders:

- `properties`: a `key = value` text file (sec. 4.4.1). `#` starts a
  comment line, and keys may repeat. The mandatory keys are `creator_did`,
  `obs_title`, `dataproduct_type` (`image`/`cube`/`catalog`),
  `hips_version`, `hips_release_date`, `hips_status`, `hips_tile_format`
  (e.g. `png jpeg fits`, the first is the suggested default), `hips_order`
  (deepest) and `hips_frame` (`equatorial` = ICRS, `galactic`,
  `ecliptic`). Others that matter to us: `hips_tile_width` (default 512),
  `hips_order_min`, `hips_pixel_bitpix`, `hips_pixel_cut` (suggested scale
  limits), `hips_data_range`, `dataproduct_subtype` (`color` = RGB
  tiles), `hips_cube_depth`, `hips_cube_firstframe`, `data_cube_crpix3`/
  `crval3`/`cdelt3`/`bunit3`, `hips_initial_ra`/`dec`/`fov` (**always
  ICRS**, even when `hips_frame` is galactic), `hips_pixel_scale` and
  `moc_sky_fraction`.
- Tiles: `NorderK/DirD/NpixN.{fits,png,jpg}`, where
  `D = (N/10000)*10000` (sec. 4.1). Extensions are lower case. Tile N at
  order K has children 4N..4N+3 at order K+1. The numbering is always
  NESTED.
- A tile of width `W = 2^S` at order K holds the HEALPix map of
  `nside = W * 2^K` (order `K+S`), restricted to cell N.
- `NorderK/Allsky.{fits,png,jpg}` (K = 0..3, optional): every tile of
  that order in one mosaic, `int(sqrt(12*4^K))` tiles per row (3, 6, 13,
  27). The tiles may be reduced to a smaller power of two, e.g. 64 px
  (sec. 4.3.2).
- `Moc.fits`: the coverage, as an IVOA MOC (sec. 4.4.2).
- Cubes: frame f of tile N is `NpixN_f.ext`, and frame 0 has no suffix
  (sec. 4.2.3). The same holds for `Allsky_f`.
- Missing data: a tile outside the coverage is simply absent. Inside
  tiles, blanks are NaN or `BLANK` in FITS and alpha=0 in PNG. Absent
  orders below `hips_order_min` are allowed ("order omission", 4.3.1).

### Facts established from the sample (not stated in the spec text)

The spec gives the in-tile pixel order only as a figure, so it was
measured. Run `Tests/hips/tileorder.py` with the `hpxtest` conda env:

```
cd Tests/hips && $HOME/miniforge/envs/hpxtest/bin/python -I tileorder.py ../../hips/data1/ancillary/missions/Fermi_Band4/HiPS
```

- **In-tile order.** Take a tile pixel at row `r` counted **from the
  top** and column `c`. Its NESTED index at order `K+S` is
  `N*W^2 + interleave(ix=r, iy=c)`, with `ix` in the even bits and `iy`
  in the odd bits (HEALPix `xyf2nest` convention). For FITS tiles, which
  are stored bottom-up, `r = W-1-fitsrow`. PNG/JPEG rows are stored
  top-down, so `r` is the stored row (confirmed: the PNG matches FITS
  only without flipping, correlation 0.9998 against -0.03). The correct
  orientation's seam mismatch is 3.7e-9, against 6.4e-9 or more for the
  other seven flips and rotations.
- **Hierarchy.** Child `4N+q` is the quadrant with `ix` half = `q&1` and
  `iy` half = `q>>1`. Parent pixels are the mean of their 4 children (to
  1e-6), as `hips_hierarchy=mean` describes.
- **Allsky.fits** at order 3 is 27 tiles per row, filled from the
  top-left, at the full 64 px here. It matches the individual tiles
  exactly.
- `$FERMI/metadata.txt` is the source map's header: a HEALPix BINTABLE
  with nside 512, NESTED, `COORDSYS='G'`. Order 3 times 64 px gives
  nside 512, so the deepest order carries the original map one-to-one.
- **768 of the 1020 FITS tiles (all of `Norder3`) are 19264 bytes**:
  2880 header + 16384 data, **not padded** to a multiple of 2880. Many
  writers do this, so the reader must accept it.
- The tile headers are minimal (SIMPLE/BITPIX/NAXIS only, no WCS). That
  is normal: the geometry comes from N, K and `hips_frame`.
- The PNG tiles are RGBA, grey (R=G=B) and fully opaque.
  `dataproduct_subtype` is absent, so this is not a colour HiPS.

## How HiPS maps onto the existing HEALPix code

All existing HEALPix input (RING, NESTED, NUNIQ/MOC, partial) becomes
the HPX image in `FitsHPX` (`fitsy/hpx.C`). `FitsHPXReproj`
(`tksao/frame/fitshpxreproj.C`) then resamples that image into AIT, MOL,
..., or a zenithal/conic window. `FitsHPX::build()` fills the HPX image by
looping over HPX pixels, computing NESTED/RING indices
(`computeIndices`), and reading `col_->value(row, elem)`.

**A whole-sky HiPS at one order is just a NESTED HEALPix map.** Tile N's
pixels are the contiguous NESTED range `[N*W^2, (N+1)*W^2)`, permuted
within the tile by the interleave above. So the cheapest complete path is:

> read `properties` -> pick an order K -> read the 12*4^K tiles (or
> `Allsky`) -> de-interleave each into a contiguous NESTED float array of
> 12*nside^2 -> hand that to `FitsHPX` as if it were a NESTED table ->
> everything downstream (proj=, windows, regions, contours, RGB sync,
> open dialog) is unchanged.

This fails at depth. Typical optical HiPS (DSS2, 2MASS, PanSTARRS) have
512-px tiles at order 9-11, i.e. nside 2^18-2^20. The HPX intermediate
is `(5*nside)^2` floats: about 6.7 GB at nside 8192 (`TODO.md`, open
questions). So the design needs two tiers:

1. **Whole-sky tier (Phases 1-3):** load a HiPS at an order whose nside
   is capped (default nside <= 2048, about 50M floats for the HPX image;
   configurable). This uses the existing pipeline unchanged and covers
   all-sky projections and any HiPS whose deepest order fits.
2. **Deep-window tier (Phase 5):** for zenithal windows at full
   resolution, sample the tiles **directly** for each output pixel.
   Compute output pixel -> (lon, lat) -> `ang2pix_nest(K+S)` -> tile N +
   in-tile pixel, then look the value up in a tile cache, choosing the
   order so that one tile pixel is about one window pixel (the spec's
   suggested display algorithm, sec. 6.3.1). Recentring or zooming a
   window fetches the tiles it needs. Nothing builds an HPX image of the
   deep order.

`FitsHPXReproj` already separates "sky position of each window pixel"
(AST projection routines, multi-threaded) from "value at that sky
position" (a lookup in the HPX image). Tier 2 swaps the second part for a
tile lookup, so it should be a sampler behind an interface rather than a
new class tree.

### Where code goes

- `fitsy/hips.{C,h}` (new): `FitsHiPS : public FitsFile`. It parses
  `properties`, picks the order and format, reads and de-interleaves the
  tiles, and handles BLANK/NaN and missing tiles. Its output is a
  synthetic NESTED HEALPix image/table that `FitsHPX` accepts. It needs
  no AST, so it belongs in `fitsy` next to `hpx.C` and `envi.C`.
  - The adapter into `FitsHPX`: either (a) synthesize an in-memory
    BINTABLE head + data (`PIXTYPE='HEALPIX'`, `ORDERING='NESTED'`,
    `NSIDE`, `COORDSYS`, one `E` column) so `FitsHPX::isHPX()` and the
    existing constructor take it unmodified, or (b) give `FitsHPX` a
    second constructor taking a `const float*` NESTED array, so that
    `build()` reads `array[healidx]` instead of `col_->value()`. (b)
    avoids a 12*nside^2 table copy and is about 20 lines in `build()`.
    Prefer (b), but (a) is the zero-risk prototype.
- `tksao/frame/`: a `FitsImageHiPS` loader class, modelled on
  `FitsImageENVISMMap` (`fitsimage.h:826`), and `Base::loadHiPSCmd`. A
  grammar rule `load hips <dir> <name> ...` goes in
  `tksao/frame/parser.Y`, after a bison-only regen (see AGENTS.md).
  `FitsImage::initHPX()` is reused with the HiPS-built `FitsHPX`.
- `ds9/library/hips.tcl` (new): the `hips` command, File > Open HiPS...,
  the HTTP tile fetch and cache, and the properties display.
- `ds9/parsers/hipsparser.tac` + `hipslex.fcl` (new): command-line, XPA
  and SAMP `hips` command. Remember the token-number trap in AGENTS.md
  (regenerate the lexer whenever tokens change).

Note the `fitsy` header-dependency trap (AGENTS.md): adding members to
`fitsy/file.h` needs `make fitsyclean fitsy tksaoclean tksao ds9clean
ds9`. Adding `fitsy/hips.C` also means hand-editing the source list in
`fitsy/configure.ac` **and** `fitsy/configure` (don't run autoconf), then
`rm fitsy/Makefile`. Clean first, then remove the Makefile.

## Work items

### Phase 0: groundwork and checks

- [x] Read the spec and the sample. Establish the in-tile pixel order,
      hierarchy, Allsky layout and PNG orientation empirically
      (`Tests/hips/tileorder.py`).
- [x] Check that fitsy loads **unpadded** FITS tiles (done 2026-11-15).
      **Primary-image loads work with every method.** 8 files (the real
      Fermi tile; synthetic 512x512 float; int16 with
      BLANK/BSCALE/BZERO; a file ending exactly on a 16 KB page
      boundary; each padded and unpadded) were loaded with mmapincr,
      mmap, alloc, allocgz, channel and var. All 48 saved images match
      the source arrays bit for bit, the headers are kept, and the
      scaled values and blanks are right. The scripts are in
      `Tests/hips/` (`hipspad.sh`: `mkpad.py` makes the files,
      `padtest.tcl` drives ds9, `padcmp.py` compares).
  - **Existing fitsy crash found:** asking for an *extension*
    (`file[1]`, or `file[NAME]` with mmap) of an unpadded file whose end
    falls on a page boundary crashes ds9: SIGBUS with mmapincr (the
    default load method), SIGSEGV with mmap. The padded control fails
    cleanly. Cause: `size_t` underflow when skipping the padded data of
    a short last HDU.
    - `fitsy/mapincr.C:50`: `if (filesize_-seek_<=0)` never fires once
      `seek_ > filesize_`, so the next "header" is mmapped beyond EOF.
      Fix: `if (seek_ >= filesize_) return NULL;`.
    - `fitsy/map.C` (`size -= head->headbytes() + head->databytes()`,
      about 10 sites: lines 149, 174, 189, 230, 274, 304, 329, 344,
      381, 401, 557): `size` wraps, and `while (size > 0)` reads past
      the mapping. Fix: clamp to 0 when the step exceeds `size`.
    - Also found: a *truncated* file (missing data bytes, not just
      padding) crashed mmap/mmapincr even as a plain primary load. That
      matters for HiPS, since a half-downloaded tile in the cache would
      take ds9 down.
    - **Fixed 2026-11-15** in commit 38703812b on branch `hips`. `map.C` has a clamped `skipHDU()` at all 11 sites,
      `found()` rejects an HDU whose `allbytes()` runs past the map, and
      `endsize()` is clamped. `mapincr.C` has a non-wrapping EOF test,
      maps header blocks only when they are wholly in the file, and
      `found()` has the same data-fits check. Missing extensions and
      truncated files now give a clean load error. Valid extensions
      (index and name, padded or unpadded last HDU) and mosaics still
      load. Regression checks are in `Tests/hips/hipspad.sh` (files from
      `mkext.py`/`mkpad.py`).
- [x] More test HiPS (done 2026-11-15). Partial copies (91 files, 32 MB)
      are in `hips/` (untracked), described in `hips/samples.md`:
      `DSS2_red` (deep, equatorial, 512 px, BITPIX 16 + BLANK, reduced
      Allsky, unpadded tiles), `Abell1763_irac1` (galactic, partial,
      absent tiles, NaN blanks, padded tiles), `XRISM_RESOLVE` (colour
      RGBA PNG) and `LABHI_cube` (cube, 891 frames, PNG only, some frame
      tiles missing).
  - The in-tile order and hierarchy rule also holds on DSS2: the order-8
    parent equals the 2x2 mean of its 4 order-9 children to integer
    rounding, while the swapped quadrant placement gives correlation
    0.82. That makes two producers, two frames and two tile widths that
    agree.
  - Unpadded FITS tiles appear in DSS2 too (an Aladin/HipsGen 10.x
    build), so the reader must never assume padding (see the fitsy fix
    above).
  - Allsky files: reduced to 64 px whenever W=512, and often only at
    order 3, so don't assume one exists at orders 0-2.
  - PNG-only HiPS exist (the LAB cube, XRISM) and carry 8-bit display
    values. Tile formats can't be assumed to include fits.
  - Still missing (the CDS and ESA servers were unreachable): a FITS
    cube, 8-bit integer, and BITPIX -64. Candidates are in
    `hips/samples.md`.
- [ ] Reference images for numeric tests: rebuild the NESTED map from the
      tiles in Python (as `tileorder.py` does), then project it with
      `reproject_from_healpix` exactly as `Tests/hpxproj.sh` does today.
      For remote HiPS, CDS `hips2fits` is an independent cross-check.

### Phase 1: local FITS-tile HiPS, whole sky, one order -- done 2026-11-15

Goal: a local HiPS shows in HPX, and `proj=MOL` etc. work,
pixel-identical to loading the HEALPix map it holds as a table.

How to use it (Phase 2 adds the `hips` command and the menu): pass the
root directory, braced as for any load, to the frame:

```
set fn {/path/to/HiPS[order=2,proj=MOL]}
$current(frame) load hips "\{$fn\}"
```

The name must reach the frame in braces, as `ProcessLoad` does, or the
frame parser rejects the `[...]`. From the shell, pass it through a Tcl
variable: `[...]` inside Tcl double quotes is command substitution.

- [x] `fitsy/hips.{C,h}`: `FitsHiPS : FitsFile`.
  - The properties parser handles comments, CR/LF, spaces around `=`,
    and repeated keys (the first value wins).
  - `dataproduct_type=catalog` is rejected. A cube is read as frame 0
    (the unsuffixed tiles), as the spec intends for non-cube clients.
  - `hips_tile_format` without `fits` is rejected with a message (PNG
    and JPEG are Phase 3). An unknown `hips_frame` (e.g. `venus`) gives
    XLON/XLAT.
- [x] Order choice.
  - `order=K` (a new `ORDER_ '=' INT` rule in `fitsy/parser.Y`, beside
    the HEALPix `order=ring|nested`, plus `FitsFile::pHiPSOrder_`)
    reads that order: from its Allsky if that holds full-size tiles,
    else from its tiles, else from a reduced Allsky.
  - Without `order=`, the reader takes the largest map no bigger than
    nside 2048 (`HIPS_NSIDE_AUTO`) that any order's tiles or Allsky can
    make. That handles omitted orders and partial local copies. At
    equal nside the Allsky wins (one file).
  - Anything above nside 8192 (`HIPS_NSIDE_MAX`) is refused with a
    message.
- [x] Tile read through fitsy's mmap reader (`EXACTIMAGE`, primary
      only). Every BITPIX works, with BSCALE/BZERO, and integer `BLANK`
      becomes NaN. `BLANK` is parsed from the card, because the HDU
      keeps it as an `int` (too small for BITPIX 64) and some writers
      give it as a real (`-32768.0`). NAXIS must equal the tile width,
      or the tile counts as bad.
- [x] De-interleave through a precomputed W*W `sub[]` table, with the
      FITS row flip. Missing tiles stay NaN.
- [x] Allsky: tiles per row `int(sqrt(12*4^K))`, and the tile width is
      checked to be a power of two that fills the mosaic.
      - **An unreadable Allsky is named in the error.** IRSA's mirror of
        DSS2 red serves a truncated `Norder3/Allsky.fits` (4,932,972 of
        6,417,216 bytes). The fitsy truncation guard refuses it, so
        nothing crashes.
- [x] Frames: equatorial/galactic/ecliptic -> `COORDSYS` C/G/E. No
      change is needed for ICRS: the HPX header has no RADESYS or
      EQUINOX, and FITS WCS Paper II defaults that to ICRS.
- [x] Adapter: option (a). `FitsHiPS` presents a primary header plus a
      NESTED HEALPix BINTABLE (`1024E` rows, big-endian), so
      `FitsImage::process()` takes its normal HEALPix path. `initHPX()`,
      `FitsHPXReproj`, `proj=/lon0=/lat0=/fov=` and live windows all
      work unchanged.
      - Cost: the table copy (12*nside^2 floats) on top of the HPX
        image. Option (b) would avoid it. That is worth doing if the
        nside cap goes up.
- [x] Provenance (done 2026-11-16): the table header has OBJECT =
      `obs_title`, `HISTORY` (`creator_did`, order, nside, Allsky or
      tiles, tiles read of total, "missing tiles are NaN", the window
      centre when it came from `hips_initial_ra/dec`) and a
      `hips_pixel_cut` COMMENT. `FitsHPX::initHeader` (fitsy/hpx.C) now
      copies every HISTORY and COMMENT card of the table into the HPX
      image, as they are, and `FitsHPXReproj::initHeader` copies them on
      into projection windows. So File > Header and File > Save show
      them, for any HEALPix file, not only HiPS. Tested by
      `Tests/hips/hipsprov.sh` (14 checks).
- [x] tksao: `FitsImageHiPS`, `Base::loadHiPSCmd`, and grammar rule
      `load STRING STRING` matching "hips". This avoids a new lexer
      token, which would mean regenerating `tksao/frame/lex.C` with an
      incompatible flex (AGENTS.md). Both grammars were regenerated with
      bison only. No new conflicts, and `parser.H` is unchanged.
- [x] Tests: `Tests/hips/hipsload.sh` (56 checks; run from the top of
      the tree). Every check compares the image ds9 saves for a HiPS
      with the one it saves for the same map written as an ordinary
      HEALPix table. That table comes from `Tests/hips/mkref.py`
      (astropy + healpy, independent of the reader). Pixel arrays and
      WCS keywords must be identical.
      - Fermi: orders 0-3 x HPX/MOL/AIT/CAR/TAN, plus the automatic
        choice.
      - Abell1763: partial, galactic, orders 0-2.
      - Synthetic HiPS (`mksynth.py`): BITPIX 8/16/32/64/-32/-64, with
        BLANK, BSCALE/BZERO, missing tiles, padded and unpadded tiles,
        and a reduced-Allsky-only order.
      - Errors: PNG-only HiPS, too deep, no data at the order, the
        truncated DSS2 Allsky, nside over the limit, and not a HiPS.
      - DSS2 red's tiles (one per order 3-9) are all deeper than the
        nside-2048 automatic limit, so they await Phase 5.

### Phase 2: Tcl/UI integration

- [x] `hips` command (done 2026-11-15, local directories only; URLs are
      Phase 3). The options use the HEALPix bracket syntax, like any
      HEALPix load, rather than separate words.
      - Command line: `ds9 -hips <dir>[order=,proj=,lon0=,lat0=,fov=]`.
        This is a file type like `-nrrd`, with `MultiLoad`, so several
        HiPS load into several frames. Plain and 3D frames load it; RGB
        and HLS/HSV ignore it, like `-envi`.
      - XPA/SAMP: `hips [new] <dir>[opts]` (`parsers/hipsparser.tac`,
        `hipslex.fcl`, `library/hips.tcl`). `xpaget hips` returns the
        current frame's HiPS name, or nothing. That comes from the
        frame's saved load parameters (`file,type` = hips), so a later
        FITS load in the frame clears it.
      - `ProcessLoad` has a `hips` load type
        (`$frame load hips {name}`). `ImportHiPSFile` reports the
        reader's reason ("Unable to load HiPS <dir>: order 7 is deeper
        than hips_order (3)"), which `ProcessLoad`'s generic error would
        otherwise replace.
      - Docs: `hips` in `command.html`, `xpa.html` and `samp.html`, and
        a HiPS section in `file.html`.
      - Tested by `Tests/hips/hipscmd.sh` (11 checks). SAMP goes
        through the same `comm.tcl` table as XPA but wasn't exercised.
      - Not done: a `format=` option (no non-FITS reader yet) and
        `hips close`. A frame `clear` already does that.
- [x] File > Open HiPS... (done 2026-11-16; `OpenHiPSDialog` and
      `HiPSOpenParamsDialog` in `hips.tcl`, under Open Recent).
      - `tk_chooseDirectory`, then the dialog. A directory one level
        inside the HiPS (e.g. `Norder3`) is taken as its root.
      - Header: `obs_title`, the path, `hips_frame`, the order range,
        tile width and `hips_tile_format`.
      - Order menu: each `NorderK` present, as "Order 2: NSIDE 256,
        192/192 tiles, 3.0 MB" (or Allsky / reduced Allsky; ", Allsky
        unreadable" for a truncated one). Orders deeper than
        `hips_order` or above nside 8192 are disabled.
      - **The menu mirrors the reader.** `HiPSOpenOrders` follows
        `FitsHiPS::allskyWidth` (orders 0-3, power-of-two tiles filling
        the mosaic, the whole file present) and the explicit-order rule;
        `HiPSOpenAutoOrder` follows `chooseSource`'s automatic loops
        step for step, so "Automatic (...)" names what a plain load
        reads. Keep them in step if `hips.C` changes. When nothing fits
        automatically (DSS2 here: 512-px tiles from order 3, truncated
        Allsky), Automatic is disabled and the smallest order is
        preselected.
      - Projection: the HEALPix dialog's section, shared.
        `HPXOpenProjFrame` and `HPXOpenProjOptions` were split out of
        `hpxopen.tcl` (the HEALPix dialog's names are byte-identical
        before/after over 5184 option combinations). Projection, centre
        and fov are remembered per session (`hipsopen`), the order not.
      - Refused before the dialog, with the reason: no `properties`,
        catalogue HiPS, no `fits` in `hips_tile_format`.
      - Not done: a format choice (only FITS can be read) and centre
        defaults from `hips_initial_ra/dec/fov` (next item).
      - Tested by `Tests/hips/hipsdialog.sh` (36 checks: the menu's
        nside/source and Automatic against real loads for Fermi,
        Abell 1763, DSS2 and synthetic HiPS; dialog results; refusals;
        the menu command end to end from an RGB frame).
- [x] Defaults from properties (done 2026-11-16).
      - `hips_pixel_cut` (physical values, HiPS 1.0 sec. 4.4.1) ->
        user scale limits, in `HiPSApplyCut` after every load through
        `ImportHiPSFile` (command line, XPA/SAMP, dialog, Open Recent,
        restore). Pref `phpxopen(hipscut)` (Preferences > HEALPix, on
        by default). A later `-scale`/`scale` command, or a backup's
        saved scale, still wins since it runs after the load.
      - `hips_initial_ra/dec/fov` -> `FitsHiPS::initialView` (fitsy, so
        every way of loading agrees). Zenithal projections only
        (TAN SIN STG ARC ZEA): the centre when neither `lon0=` nor
        `lat0=` is given, the fov when `fov=` isn't, clamped to the
        projection's maximum. All-sky, conic and HPX keep their own
        defaults. `FitsFile` gained `pHPXLon0Set_`, since `lon0`
        defaults to 0 and `lon0=0` must still win. The ICRS ->
        galactic/ecliptic rotation is done in fitsy itself (Hipparcos
        matrix; ecliptic of J2000, IAU 2006 obliquity), not AST, which
        lives in tksao. Agrees with astropy to 2e-5 deg.
      - The dialog does the same in Tcl (`HiPSInitialView`), shows the
        initial view and suggested limits, starts a zenithal projection
        at the initial view, and writes `lon0`/`lat0` (both) or `fov`
        only when they differ from it, so an untouched dialog gives just
        `proj=tan`. Only the projection is now remembered between HiPS,
        not the centre or fov (each survey has its own frame and view).
      - Tested by `Tests/hips/hipsview.sh` (35 checks).
      - **Found on the way, a fitsy heap overrun**: `FitsCard::setComment`
        copied the text with no length check, so a HISTORY/COMMENT
        longer than 70 characters ran past the 80-byte card. A new
        74-character HISTORY card crashed ds9 later, in an unrelated
        free (fault address 0x29535243 = "CRS)"). The `HiPS
        <creator_did>` provenance card could do the same with a long
        ID. Fixed in `card.C` (clamped; the NUL that `ends` adds is no
        longer copied into the card either). Under libgmalloc, the old
        code faults and the new truncates.
- [x] Backup/restore (done 2026-11-16). The frame's saved load
      parameters already carry the HiPS name with its options, so a
      backup restores it, but through the generic path: a moved HiPS
      got a FITS *file* dialog, where a directory can't be picked.
      `BackupFrameLoadParam` now writes `HiPSRestore {<dir>[opts]}`
      for a HiPS frame. That never copies tiles (even with "copy data"
      backups), asks with `tk_chooseDirectory` if the directory has
      gone, keeps the options, and loads through `ImportHiPSFile` for
      its error messages.
- [x] Open Recent (done 2026-11-16). `RecentAdd hips <name>` on a
      successful `ImportHiPSFile`. `RecentNormalize` takes an `isdir`
      flag, since it only kept regular files; `RecentOpen` checks the
      directory, makes a plain frame if the current one is
      RGB/HLS/HSV, and loads with `HiPSCmdLoad`. Label hint "HiPS".
      Tested, with backup/restore, by `Tests/hips/hipsbackup.sh`
      (16 checks; the moved-HiPS dialogs were checked with stubbed
      `Error`/`tk_chooseDirectory`).
- [x] Coverage overlay (done 2026-11-16): `hips coverage [yes|no]`
      (command line `-hips coverage`, XPA/SAMP, `xpaget hips coverage`)
      and Analysis > HiPS Coverage (enabled for a HiPS frame that has a
      `Moc.fits`).
      - The edge of the MOC is drawn as an aux contour.
        `HiPSCoverageShow` loads `Moc.fits[order=9,proj=car]` into a
        scratch frame, contours it at 0.5, and pastes the contour into
        the HiPS frame through fk5. Plate carree because every pixel is
        sky; the HPX layout's facet gaps are 0 and would be traced. The
        frame number is put back (`ds9(seq)`) and the scratch frame's
        load parameters go with it. Takes ~0.2 s.
      - Works across frames and projections. Tested: Abell 1763's
        galactic MOC on its TAN window, and XRISM's equatorial MOC (221
        cells) on galactic Fermi tiles in MOL. Every outline vertex is
        within 0.12 deg of a MOC cell edge, and every edge cell is
        traced, against healpy (`Tests/hips/mocref.py`).
      - A full-sky MOC has no edge: state "yes", nothing drawn (`all`),
        and the menu says so.
      - Only that aux contour is removed when turned off: new frame
        commands `contour delete aux <n>` and `get contour aux count`
        (`tksao/frame/parser.Y`, bison 2.3). The frame's load parameters
        keep its index (`hips,coverage`). A new load clears both.
      - Backup/restore: `HiPSRestore <name> <index>`.
      - New: `order=K` on a MOC file draws it at order K (coarser:
        deeper cells mark their parent; finer: cells fill their
        children). It reuses the integer `order=` of HiPS
        (`fitsy/hpx.C`, `buildMOC`).
      - **Fixed on the way, both pre-existing:**
        - `Contour::list` (`tksao/frame/contour.C`) had an unbraced
          `if`, so a contour with no vertices dereferenced NULL. Any
          `contour save`/`get contour` of an empty polyline crashed ds9.
        - The backup saved aux contours in physical pixels. A HEALPix
          projection window is rebuilt to the frame size and zoom, so
          its pixels at restore aren't those at backup, and the contours
          came back ~20 deg off. `ContourBackup` now saves them in fk5
          for such frames (`HPXFrameIsWindow`); other frames are
          unchanged.
      - Tested by `Tests/hips/hipsmoc.sh`.
- [x] SAMP (checked 2026-11-16): no standard MType loads a HiPS. The
      IVOA list (wiki SampMTypes r20, June 2026) has none, not even
      proposed; its sky ones are `coverage.load.moc.fits`,
      `coverage.load.moc.ascii` and `coord.pointAt.sky`. The de facto
      route is an application's own script MType (Aladin's
      `script.aladin.send` carries Aladin commands); ds9's equivalent,
      `ds9.set "hips <dir>[...]"`, already works. Nothing to add here; a
      HiPS sent between applications would be a URL, so it belongs with
      remote HiPS (Phase 3). Optional, not HiPS-specific: draw a
      received `coverage.load.moc.fits` as a coverage outline on the
      current frame (it loads as an image in its own frame now), and
      handle `coverage.load.moc.ascii`.
- [x] Docs: `hips` in `command.html`, `xpa.html`, `samp.html`, the HiPS
      section of `file.html`, and the 8.8.2 release notes (WIP section).
      Phase 2 done 2026-11-16.

### Phase 3: remote HiPS over HTTP, PNG/JPEG and colour tiles -- done 2026-11-16

- [x] Remote fetch (done 2026-11-16, `ds9/library/hipsnet.tcl`): an
      `http://` or `https://` name, anywhere a HiPS directory goes
      (`-hips`, XPA/SAMP `hips`, Open Recent, backups). `file://` is a
      local path.
      - Files are fetched in Tcl (`http::geturl`, ds9's proxy and
        User-Agent, redirects followed) into a cache mirroring the HiPS
        layout, `<prefs dir>/hips/<host>/<path>` (`~/.ds9/hips/...`),
        and the reader reads the cache. `loadParam(file,name)` keeps
        the URL (xpaget hips, recent, backup); `file,fn` is the cache.
      - What is fetched: `properties` every time (a changed
        `hips_release_date` empties the cached tiles; a cached copy
        serves offline). Without `order=`, the deepest Allsky of orders
        3..0, one file (Fermi: nside 512), else the tiles of the
        deepest order up to nside 512. With `order=K`, its Allsky if
        full-size, else its tiles, only the cells in `Moc.fits`.
        The reader is then given `order=K`, so the cache's other
        contents don't change what loads.
      - Tiles: 6 parallel async requests, a progress window with
        Cancel (a cancelled fetch keeps what arrived). 404s are blank
        tiles, recorded (`NorderK/.missing`, `.noallsky`) and not asked
        for again. More than 1 GB of tiles in one load is refused
        (`hipsnet(maxbytes)`).
      - Gotcha: the http package leaves `errorInfo` set from errors it
        catches itself, which XPACatchError reports as a failure;
        cleared after each fetch (url.tcl does the same).
      - Tested by `Tests/hips/hipsnet.sh` (35 checks) against a local
        server (`Tests/hips/hipsserve.py`: logs requests, 404s,
        `/redirect/`, `/slow/`): remote and local images identical,
        request counts, MOC filtering, 404s, redirects, new release,
        errors, size limit, cancel and resume, recent, backup,
        coverage, file://, offline.
      - Follow-ups done 2026-11-16:
        - File > Open HiPS URL...: `EntryDialog`, then the HiPS dialog
          in a remote mode (`HiPSOpenParamsDialog dir url`): properties
          fetched first (`HiPSFetchProperties`, split out of
          `HiPSFetchDo`); the order list comes from properties alone
          (`HiPSOpenRemoteOrders`: nside, ~tiles from
          `moc_sky_fraction`, ~MB to fetch; orders over the fetch limit
          disabled), Automatic = the quick look.
        - Cache limit: `phpxopen(hipscache)` MB (default 2048,
          Preferences > HEALPix). Each use stamps the HiPS (`.used`);
          after a fetch whole HiPS are removed, least recently used
          first, never the one just loaded. "Clear HiPS Cache" button.
        - Mirrors: `HiPSBases` = the URL then `hips_service_url*` from
          properties. Allsky, Moc.fits and each tile move to the next
          mirror on no answer or a server error (not on 404); a cached
          properties' mirrors are tried for properties too.
        - Tested in `Tests/hips/hipsnet.sh` (48 checks; the test server
          gained `/half/`: properties served, everything else 503).
      - Decided not to do: `Cache-Control` (`hips_release_date` already
        invalidates the cache, the HiPS way), and colour HiPS in HSV/HLS
        frames (the tiles are RGB).
      - Public server checked (2026-11-16): Fermi Band 4 from its
        `hips_service_url`, http://cade.irap.omp.eu/documents/Ancillary/
        4Aladin/Fermi_Band4. The quick look fetched `properties` and
        `Norder3/Allsky.fits` (12.8 MB) in about 24 s, identical to the
        local sample at order 3; a cached reload takes about 1 s.
- [x] PNG/JPEG tiles (done 2026-11-16). `FitsHiPS` decodes them itself
      through Tk photos (`readPhoto` in fitsy/hips.C: `image create
      photo -file`, `Tk_PhotoGetImage`; Tk 9 reads PNG, the statically
      linked tkimg JPEG), so all the order/Allsky logic is shared.
      `FitsImageHiPS` passes the interp in.
      - Format: fits if `hips_tile_format` lists it, else png, else
        jpeg (`.jpg` files). Tcl's `HiPSTileExt` picks the same, so the
        dialog's order list and remote fetching use the same files.
        Without fits, png or jpeg: refused ("no FITS, PNG or JPEG
        tiles").
      - Values: grey level (luminance, Rec. 601, for colour tiles),
        0-255 display values. PNG alpha 0 -> NaN; JPEG has no alpha.
        Rows top-down (no flip). A COMMENT says they are display
        levels, the `hips_pixel_cut` COMMENT is left out, and the cut is
        not applied (it is in physical units); the dialog doesn't show
        it either.
      - Tested by `Tests/hips/hipspng.sh` (24 checks) on HiPS written by
        `Tests/hips/mkpng.py` with the same pixels as FITS, PNG, JPEG
        and RGB PNG: PNG == FITS exactly (tiles and Allsky, alpha ->
        NaN), RGB PNG == its luminance exactly, JPEG within a median of
        1 level; Fermi (png forced) and XRISM (png only); the dialog;
        remote PNG through the local server.
- [x] Colour HiPS (done 2026-11-16): `dataproduct_subtype` color with
      png/jpg tiles (`HiPSIsColour`) loads into an RGB frame, one
      HEALPix map per channel from the same tiles.
      - Reader: `FitsHiPS(fn, interp, channel)` reads the red, green or
        blue level (-1: luminance, as for any PNG/JPEG); new frame rule
        `load hips <name> <channel>` (grammar only, bison 2.3), through
        `FitsImageHiPS` and `Base::loadHiPSCmd`. Header COMMENT names
        the channel.
      - Tcl: `ImportHiPSFile` picks the frame for every caller
        (`HiPSPickFrame`: RGB for colour, else plain/3D, a new one if
        needed); `HiPSLoadColour` clears the RGB frame, then loads red,
        green, blue (`loadParam` restored each time: ProcessLoad clears
        it), and puts the current channel back. Clearing first avoids a
        spurious "no linear fit" WCS alignment warning between the new
        red channel and the old green/blue images. Open Recent and the
        Open HiPS dialog no longer pick the frame themselves.
      - `HiPSFrameName` reads an RGB frame's channel load parameters.
        A backup restores a colour HiPS once (red channel), not per
        channel. Remote colour HiPS fetch each tile once.
      - Channels stay together on pan/recentre (PR #445): checked, all
        three re-centre to the same place.
      - Tested by `Tests/hips/hipscolour.sh` (25 checks): channels equal
        per-channel FITS references exactly (mkpng.py `pcol`, `pcr/g/b`),
        frame choice, TAN sizes, Open Recent, dialog, backup/restore,
        remote, XRISM.
      - Colour balance/scale: 0-255 limits on every channel (see the
        eROSITA item).
      - Public server checked (2026-11-16): DSS2 colour (CDS/P/DSS2/
        color, jpeg) from ESA's mirror https://skies.esac.esa.int/
        DSSColor. Quick look: `properties` + `Norder3/Allsky.jpg` (0.8 MB)
        in 4 s; MOL and a TAN window on Orion (cached, 1 s) show the
        right colours (Betelgeuse orange, Rigel blue, Barnard's Loop).
        The CDS URL in the eROSITA page, alasky.u-strasbg.fr, no longer
        resolves from here (the old domain; CDS is alasky.cds.unistra.fr,
        which answered 404 for this path to curl); the MocServer record
        lists mirrors (hips_service_url_N). Possible follow-up: try those
        mirrors when the first URL fails.

- [x] eROSITA (checked 2026-11-16). The eRODat sky view
      (https://erosita.mpe.mpg.de/erodat/skyview/sky/) uses HiPS under
      https://erosita.mpe.mpg.de/erodat/static/hips/: eRASS1_RGB_Rate_c010
      (colour PNG, order 6, 512-px tiles) and, per band 021-027,
      eRASS1_02N_{Rate,Image,ExposureMap}_c010 (FITS + PNG, with
      hips_pixel_cut). The rest of that directory are catalogue HiPS.
      Quick looks load in a few seconds (Allsky.png 4.2 MB, Allsky.fits
      12.8 MB). Found: a PNG/JPEG HiPS kept the user limits of the image
      before it (the Rate cut on 0-255 levels: speckle), and only one
      RGB channel got limits. Now PNG/JPEG HiPS get 0-255, on every
      channel (HiPSApplyCut).

### Phase 4: HiPS cubes -- done 2026-11-16

- [x] `dataproduct_type=cube`, `hips_cube_depth`: one frame at a time,
      on demand (all of them up front would be depth x the map, and
      remote cubes would fetch everything). `slice=` (fitsy grammar,
      `pHiPSSlice`) picks the frame, default `hips_cube_firstframe`;
      `FitsHiPS` reads `NpixN_f`/`Allsky_f` (frame 0 no suffix) and
      writes `HIPSSLIC`, `HIPSDPTH`, `HIPSZVAL` (from
      `data_cube_crpix3/crval3/cdelt3/bunit3`) and a HISTORY card.
- [x] The frame stays 2-D. ds9's cube code asks the frame through
      `CubeFrame` (cube.tcl), which `HiPSCubeAnswer` (hips.tcl) answers
      for a HiPS cube: 3 axes, depth, slice, the 3rd-axis WCS. A new
      slice (`HiPSSetSlice`) reloads the HiPS with `slice=` keeping
      pan, projection and on-screen scale (zoom x new/old window pixel,
      so a deep window goes deep again). The `cube` get commands go
      through `CubeSendCmdCurrent`.
- [x] Remote: the frame's suffix in tile/Allsky names, in the cache's
      `.missing`/`.noallsky` records and in deep-fetch requests.
- Test: `Tests/hips/hipscube.sh` (27 checks, with `mkcube.py` and LAB HI).
- Not done: a cube is not a 3-D frame, so cube-wide operations (3-D
  render, `save` of the whole cube, `cube axes` order, cube-wide scale
  limits) aren't available; `match frame`/`lock cube` between HiPS cube
  frames is untested.

### Phase 5: deep HiPS, multi-resolution windows -- done 2026-11-16

Goal: open DSS2 (order 9, 512 px, nside 262144) and browse it in a TAN
window at full resolution, recentring and zooming live.

Design (2026-11-16, after reading the window code):
- A deep window keeps today's HiPS map as its coarse level (the quick
  look remotely, the automatic map locally): it gives the whole-map
  statistics (`hpxGlobalData()` over `hpxView()`, so scale limits stay
  put) and the fallback for tiles not loaded yet.
- `FitsHPXReproj` gains a deep tile source (the `FitsHiPS`, which reads
  any tile through a new API). `pixHPX_` becomes the HiPS's deepest
  pixel, so `hpxWindowGeometry`/`hpxAutoRefresh` already let a zoom ask
  for finer pixels and rebuild. `build()` then: picks order K (pixels no
  larger than `pix_`), pass 1 collects the tiles the window touches
  (`hpxAng2Nest` per output pixel), loads them into a bounded cache on
  the main thread (PNG/JPEG decode needs Tk), pass 2 samples in threads.
  A tile not available falls back to its deepest cached ancestor, then
  the coarse map.
- Remote: build() asks Tcl for the missing visible tiles (async), and
  the fetch's completion rebuilds the window around the same centre.
- Applies to a HiPS in any zenithal/conic window; `order=K` only sets
  the coarse level it starts from (a remote load always passes the
  reader an explicit order, so "only without order=" turned deep windows
  off for every remote HiPS). All-sky projections stay as they are.
- Correctness test: a deep window at order K must equal, pixel for
  pixel, today's window built from the full map at order K.

- [x] `ang2pix_nest` and `pix2ang` (done 2026-11-16): `fitsy/hpxnest.h`,
      header-only (installed to include/ for tksao), written from Gorski
      et al. 2005 (not the GPL HEALPix library); polar caps from
      cos(lat) for precision; mask-based bit spreading, 15 ns a lookup.
      `Tests/hips/nesttest.C` + `nesttest.py` against healpy, nside
      2^0..2^29: 126,300 points (random, region boundaries, poles,
      meridians, wrap) 0 wrong (261 exactly on an edge matched a
      neighbour), 60,000 pixel centres 0 wrong (worst 1.1e-13 deg).
- [x] Deep windows (done 2026-11-16).
      - `FitsHiPS::readTile(order, N, out)`: any tile, any format, top
        row first (the identity table through the existing copiers);
        plus `root()`, `tileExt()`, `tileWidth()`, `min/maxOrder()`.
      - `FitsHPXReproj(..., FitsHiPS* deep)`, passed for every HiPS in
        a window (`FitsImage::initHPX`). `pixHPX_` = the deepest HiPS
        pixel. In `build()`, when the window's pixel is finer than the
        map's: K = ceil(log2(p0/pix)) clamped to the HiPS's orders;
        pass 1 (`hpxDirectResample` mode 1, threaded) collects the tiles
        touched; they are read into an LRU cache (512 MB, at least twice
        the window's tiles) on the main thread; a missing tile uses its
        deepest cached ancestor finer than the map, else the map; pass 2
        samples (`hpxAng2Nest` per pixel, last tile cached per thread).
        HISTORY "HiPS order K tiles (NSIDE n); m of t not loaded".
      - Zoom is relative to the window's pixels (a rebuild rescales it
        to keep the on-screen scale), so after zooming in, "zoom 1"
        means one order-K pixel per screen pixel; zooming out below 1
        goes back up to the map.
      - Remote: `Base::hpxRecentre` -> `hpxRequestTiles` -> Tcl
        `HiPSDeepWant frame root order tiles` (interp state saved).
        `hipsnet(url,<cache dir>)` maps the cache back to the URL; the
        tiles are fetched async, 6 at a time, 404s recorded, and
        `$frame update fits center` rebuilds the window (coalesced:
        every 300 ms while arriving, once at the end).
      - Tested by `Tests/hips/hipsdeep.sh` (20 checks): every window
        pixel that has a tile at its order equals the tile
        (`Tests/hips/deepcheck.py`: astropy WCS + healpy + the tile
        file; 493,099 pixels at order 5 = nside 16384), orders follow
        zoom, pan, zoom out, order=K, all-sky stays, scale limits
        stable, remote fetch of only the window's tiles + refresh +
        cache, colour channels.
- [x] Progressive remote zoom and stale views (done 2026-11-16):
      `HiPSDeepWant` queues the ancestors one and two orders up first
      (a quarter and a sixteenth as many tiles; the window shows the
      deepest cached one), and a frame's new request replaces its old
      requests still waiting. Bug found: `unset hipsdeep(want,$a $b $c)`
      without quotes split into three words, so those marks were never
      cleared and replaced requests were silently skipped.
- [x] HTTP in worker threads (done 2026-11-16). In the main thread,
      Tcl 9's http/tls blocks the event loop for each TLS handshake:
      against eROSITA's slow server (~5 s a handshake) ds9 froze for
      52 s while fetching 10 tiles (heartbeat test), missed XPA, and a
      deep zoom took 2-4 minutes. `HiPSGetAsync` now hands requests to
      a pool of `hipsnet(parallel)` threads (Thread 3.0.6 is in ds9;
      the static tls loads with `load {} tls`; http configured as
      ConfigHTTP: User-Agent, proxy, https), each doing one blocking
      request at a time with redirects, results posted back. Same
      eROSITA zoom: 40 s, no missed XPA, longest stall 323 ms.
      Keep-alive in-process was tried first and made it far worse
      (180 s for the quick look). Without Thread, the old path.
      Cancel fails queued jobs; one already in a worker finishes.
- [x] The order shown (done 2026-11-16): keyword `HIPSORD` = the map's
      order in the HiPS table, copied into the HPX image and windows, and
      set to K by a deep window (View > Keyword HIPSORD in the info
      panel). `FitsImage::getKeyword` looks in a HEALPix image's own
      header first, then the file's. Regions keep their sky position
      through deep zooms and pans (tested).
- [x] Cancel and status line for deep fetches (done 2026-11-16).
      - A `ttk::frame` placed over the canvas's lower left (a widget,
        not a canvas item, so print leaves it out; `saveimage` and
        movies hide it around the grab, since on macOS the grab
        includes widgets over the canvas): "Fetching HiPS tiles:
        done / total" and Cancel. Shown after 500 ms of fetching
        (`hipsdeep(statusdelay)`), so fast servers don't flash it.
      - `hips cancel` (also stops a load in progress), `xpaget hips
        status` (tiles still to come). Cancel drops the queue, the
        want keys and pending redraws; requests already in a worker
        can't be interrupted, so a generation counter
        (`hipsdeep(gen)`) marks them stale: they land in the cache
        but don't redraw.
      - `Base::hpxAutoRefresh` now asks for the window's missing tiles
        on every pan/zoom, not just when it rebuilds: after a cancel,
        a zoom that kept the same order otherwise never fetched them.
      - Tested in `hipsdeep.sh` section 5 (`hipsserve.py`'s new
        `/crawl/`, 1 s per request).

## Testing plan

- `Tests/hips.sh`, modelled on `Tests/hpxproj.sh` (run from `Tests/`
  with `bin/` and `$HOME/local/bin` on the PATH). Sections:
  - `layout`: `tileorder.py` on each test HiPS (conventions hold).
  - `load`: the HiPS at each order 0-3 vs a Python-rebuilt NESTED table
    loaded as HEALPix, compared by pixel values and `saveimage` sha256,
    across proj=HPX/MOL/AIT/TAN.
  - `allsky`: Allsky vs individual tiles give the same image (when not
    reduced).
  - `missing`: a partial HiPS gives NaN exactly where tiles are absent.
  - `formats`: FITS vs PNG load the same geometry (correlation, not
    equality).
  - `remote`: optional, gated on network: fetch a small public HiPS at
    order <= 2, check the cache and a second load with no requests.
  - `cube`, `rgb` once Phases 3-4 land.
- Python reference via the `hpxtest` conda env (`HPXPY=`); skipped if it
  is missing, as hpxproj.sh does.

## Open questions

- **Syntax.** Options: a dedicated `hips` command/option (like
  `-envi`), a filename form (`dir[hips,order=3,proj=MOL]`), or
  autodetection when the path is a directory containing `properties`.
  The first is clearest and avoids a `fitsy/parser.Y` filename-grammar
  change. Autodetection could be added on top for `ds9 <dir>`.
- **Default order and cap.** What nside cap is sensible for the
  whole-sky tier (2048 = about 100 MB HPX image; 4096 = about 400 MB)?
  It should be a pref.
- **Reduced Allsky.** Should a reduced Allsky (e.g. 64-px tiles in a
  512-px HiPS) be a quick preview that is automatically replaced by the
  full tiles, or only used when the user asks for that resolution?
- **PNG decoding location.** Tk photo (Tcl, already linked) or a C
  decoder in `fitsy`? Tk photo needs the Tk event loop and an
  interpreter, so it is fine for ds9 but awkward for a pure-`fitsy`
  loader.
- **Remote-first?** Most users will want CDS/ESA HiPS by URL or by ID
  (e.g. `CDS/P/DSS2/color`). A HiPS list browser (the CDS MocServer
  `hips list` query, sec. 5.2) would be a natural Phase 6, but is out of
  scope here.
- **Catalogue HiPS** (`dataproduct_type=catalog`, TSV tiles) could feed
  ds9's catalog tool. Out of scope; reject them clearly for now.
- **ICRS vs FK5** for `hips_frame=equatorial`: confirm what AST does
  with `RADESYS` absent on an `-HPX` header, and whether the HEALPix
  table path has the same latent issue.
