# TODO: HiPS (Hierarchical Progressive Surveys) support

Status (2026-11-15): Phases 0 and 1 done. Local FITS-tile HiPS load
through `$frame load hips`, with all projections. Phase 2 (the `hips`
command, dialog and docs) is next. Work is on branch `hips`. Builds on the
HEALPix projection work in `TODO.md` (PR SAOImageDS9/SAOImageDS9#380:
`FitsHPXReproj`, `proj=`/`lon0=`/`lat0=`/`fov=`, live windows).

Spec: IVOA HiPS 1.0 (REC 2017-05-19,
<https://www.ivoa.net/documents/HiPS/20170519/REC-HIPS-1.0-20170519.pdf>;
the PR-20170406 draft is the same in every respect used here). Section
numbers below refer to it.

Sample data: `hips/data1/ancillary/missions/Fermi_Band4/HiPS` (Fermi-LAT
1-3 GeV, <https://cade.irap.omp.eu/doku.php?id=fermi>). Below it is called
`$FERMI`.

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
      `Tests/hips/` (`mkpad.py` makes the files, `padrun.sh` +
      `padtest.tcl` drive a running ds9, `padcmp.py` compares).
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
      load. Regression scripts: `Tests/hips/extmatrix.sh` (files from
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
- [~] Provenance: the table header has OBJECT = `obs_title`, `HISTORY`
      (`creator_did`, order, nside, Allsky or tiles, tiles read of
      total, "missing tiles are NaN") and a `hips_pixel_cut` COMMENT.
      `FitsHPX::initHeader` copies only OBJECT into the image header, so
      the HISTORY cards don't reach File > Save. Copy them across in
      Phase 2.
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
- [ ] File > Open HiPS... dialog, extending or reusing `hpxopen.tcl`.
      It shows the properties summary (title, frame, orders, tile width
      and formats, nside and memory estimate at the chosen order) and
      offers order, format and projection choices.
- [ ] Defaults from properties: `hips_pixel_cut` -> user scale limits
      (if the user's scale mode allows). `hips_initial_ra`/`dec`/`fov`
      (ICRS) -> the initial window centre and fov when the user asks for
      a zenithal projection without `lat0`/`fov`. This needs ICRS ->
      `hips_frame` conversion (`FitsHPXReproj::fromSky` already does
      this).
- [ ] Backup/restore (`backup.tcl`): save the HiPS source + options,
      not the pixel data.
- [ ] Coverage overlay: load `Moc.fits` through ds9's existing MOC
      support so users can see where data exist. This is cheap, since
      the MOC loader exists (cf. `coverage.load.moc.fits` in
      `samp.tcl`).
- [ ] SAMP: Aladin and others don't send HiPS by URL in a standard MType
      as far as we know. Check for a de facto one (e.g. `script.aladin.
      send`); otherwise skip.
- [ ] Docs: `ds9/doc/ref/command.html` (`hips`), File menu docs, and
      release notes.

### Phase 3: remote HiPS over HTTP, PNG/JPEG and colour tiles

- [ ] Remote fetch: the base URL plus the same relative paths
      (sec. 6.2). Fetch in Tcl with `http::geturl`, as `url.tcl` does
      (proxy settings, timeout), into an on-disk cache
      (`~/.ds9/hips/<sanitised creator_did or host+path>/...`). The C++
      side only ever reads local files. This keeps networking in Tcl,
      where ds9 already handles TLS and proxies.
  - Concurrency: a small pool (4-8) of async `http::geturl -command`
    requests with a progress indicator and cancel. Order 3 is 768
    requests, so use `Allsky` for K <= 3 to make it one.
  - A 404 means a missing tile -> NaN. Consult `Moc.fits` first to avoid
    requesting tiles known to be absent (sec. 6.3.1).
  - Cache policy: key by `creator_did` + `hips_release_date`, so an
    updated HiPS invalidates the cache. Add a size cap with LRU eviction
    and a "clear HiPS cache" pref.
  - Be polite to public servers (CDS, IRAP, ESA, ...): limited
    parallelism, honour `Cache-Control`, and use a generic User-Agent.
- [ ] PNG/JPEG tiles: decode via Tk photo (tkimg is already used by
      `photo.tcl`; `Base::loadPhotoCmd`/`FrameRGB::loadPhotoCmd` read
      a Tk photo into a frame). Either decode in Tcl and pass a photo handle
      per tile to C++, or link a decoder in `fitsy`; the photo route
      reuses what exists. Values are 0-255 display values, not physical
      units, so say so in the header and dialog. PNG alpha=0 -> NaN. The
      PNG row order is already top-down (no flip). Prefer `fits` when
      available, unless the user picks otherwise.
- [ ] Colour HiPS (`dataproduct_subtype=color`, RGB tiles): load into an
      RGB frame, one HEALPix map per channel, using the HEALPix RGB sync
      from PR #445 (`747f39445`) so all three channels share
      projection/window/recentre.

### Phase 4: HiPS cubes

- [ ] `dataproduct_type=cube`, `hips_cube_depth`: present as a 3-D
      image with ds9's Cube dialog driving the frame index. Each slice
      change loads `NpixN_f` (frame 0 = no suffix) and calls
      `hpxReload()`, like `nextBin()` does. Build the 3rd-axis WCS from
      `data_cube_crpix3/crval3/cdelt3/bunit3`. Start at
      `hips_cube_firstframe`.
- [ ] Decide whether to load all slices up front (memory: depth x the
      whole-sky map) or on demand (the cube dialog's "next" triggers a
      fetch). On demand seems the only sane option for remote cubes.

### Phase 5: deep HiPS, multi-resolution windows

Goal: open DSS2 (order 9, 512 px, nside 262144) and browse it in a TAN
window at full resolution, recentring and zooming live.

- [ ] `ang2pix_nest` (and `pix2ang` for tests) in C++. These are small,
      self-contained routines from the HEALPix C library, or derived
      from the facet code already in `fitsy/hpx.C`. Unit-test them
      against healpy.
- [ ] A sampler interface in `FitsHPXReproj`: "value at (lon, lat)".
      Its implementations are the current HPX-image lookup and a new
      HiPS tile lookup with a tile cache (LRU by order and N, bounded
      memory). Keep the per-pixel cost low: compute the tile index
      once per run of output pixels in the same tile.
- [ ] Level of detail: pick the order K so that the HiPS pixel size at
      K+S is about the window pixel size (`pix_`), clamped to
      `[hips_order_min, hips_order]`. For an order 0-3 window, use
      `Allsky` as the first pass.
- [ ] Fetch the visible tiles (query the window footprint for
      overlapping tiles at K: `query_polygon`-like, or simply sample the
      window grid and collect distinct N). Show the coarse version first
      (lower order, already cached), then refine as tiles arrive. The
      async Tcl fetch sends a "tiles ready" event that calls
      `hpxReload()`.
- [ ] The deep tier has no whole-map pixel array, so whole-map
      statistics (`hpxView()` for scale limits) need a substitute: use
      `hips_pixel_cut`/`hips_data_range`, or the stats of the current
      window or the low-order map.
- [ ] Interaction with regions/contours/catalogs: the windows already
      remap regions and contours through the sky (TODO.md Phase 4).
      Make sure nothing assumes the HPX intermediate exists.
- [ ] Pixel-value honesty: every window pixel is a real HiPS pixel at
      the chosen order. That order changes with zoom, so display it in
      the info panel/header and say that values at order < `hips_order`
      are mean-binned (`hips_hierarchy`).

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
