# TODO: All-sky projections (Hammer-Aitoff, Mollweide, ...) for HEALPix display

Status: planning only. Nothing below is implemented yet.

## Background

AST already supports the common all-sky projections. The projection table is
in `ast/src/wcsmap.c` (`PrjInfo[]`, ~line 681) and includes `-AIT`
(Hammer-Aitoff), `-MOL` (Mollweide), `-CAR`, `-SFL`/`-GLS`, `-PAR`, `-CEA`,
`-HPX`, `-XPH`, etc. DS9 can already display a FITS *image* with an `-AIT`
or `-MOL` header (coordinate readout, grids and regions all work through
AST). What's missing is in the HEALPix *table* loader.

### How HEALPix loading works today

- `FitsImage::initHPX()` (`tksao/frame/fitshealpix.C`) gathers the options
  and constructs a `FitsHPX` (`fitsy/hpx.C`, `fitsy/hpx.h`).
- `FitsHPX::build()` / `buildMOC()` / `buildPartial()` don't resample
  anything. Each HEALPix pixel is copied into exactly one image pixel in the
  HPX layout (or XPH for `layout=north|south`). `FitsHPX::initHeader()` then
  writes an `-HPX`/`-XPH` WCS header, and AST handles the coordinates.
- HPX is the only standard projection where HEALPix pixels line up
  one-to-one with image pixels, so the display is exact.
- Ring, nested, NUNIQ/MOC and partial maps all end up as this same
  HPX float image.
- The options come only from the filename-bracket syntax, e.g.
  `foo.fits[layout=north,quad=1,system=galactic]`. They are parsed in
  `fitsy/parser.Y` (rules `hpx`, `hpxSystem`, `hpxOrder`, `hpxLayout`) and
  stored via `FitsFile::setpHPX*()` (`fitsy/file.h/.C`).
  Note `fitsy/` is the top-level library directory, not `tksao/fitsy/`.
- Image pipeline in `FitsImage`: `fits_ -> hpx_ -> base_ -> block_ ->
  analysis_ -> image_` (see `tksao/frame/fitsimage.C` ~1315).

## Proposed approach: resample the HPX image through AST

Since every input type already becomes the HPX image, one new step can
resample that image into another projection:

1. Build the HPX image and header exactly as today (`FitsHPX`).
2. Write a target header, e.g. `GLON-AIT`/`GLAT-AIT` (or `RA---MOL`/
   `DEC--MOL`, ...):
   - CRVAL1 = chosen centre longitude (default 0), CRVAL2 = 0
   - CDELT1 < 0 (longitude increasing to the left, same as healpy
     `mollview`), |CDELT| ~ HEALPix pixel size = sqrt(4*pi/(12*nside^2)) rad
   - NAXIS1/2 big enough for the whole sky. For AIT/MOL the full extent is
     4*sqrt(2) x 2*sqrt(2) radians in the projection plane; dividing by the
     pixel size gives roughly 5.5*nside x 2.75*nside pixels (about 60% of
     the memory of HPX's 5*nside square). Other projections have different
     extents (CAR is 2*pi x pi, i.e. ~6.1*nside x 3.1*nside), so either keep
     a small per-projection table or compute the bounds with `astMapBox`.
   - CRPIX at the image centre.
3. Turn both headers into AST FrameSets with `astFitsChan` + `astRead` (the
   same pattern `fitsimage.C` already uses) and get a pixel-to-pixel mapping
   with `astConvert(hpxFS, targetFS, "SKY")`. Order matters:
   `astResample*` wants a Mapping whose *forward* direction goes from the
   input grid (HPX) to the output grid (target); it uses the inverse
   internally to find the source pixel for each output pixel.
4. Fill the target array with
   `astResampleF(..., AST__NEAREST, ..., AST__USEBAD, badval=NAN, ...)`.
   - Nearest-neighbour keeps every output value equal to a real HEALPix
     pixel value, so statistics, contours and pixel tables stay honest.
   - Pixels outside the projection's valid region (outside the AIT/MOL
     ellipse) come back bad, so they show as NaN/blank.
5. Use the target image and header as `hpx_`, and free the HPX
   intermediate.

This needs no new HEALPix maths (no ang2pix/pix2ang), it works for
RING / NESTED / NUNIQ / partial maps alike, and it works for any projection
in AST's table, not just AIT/MOL. Only the whole-sky ones make sense for
this feature, though (AIT, MOL, CAR, SFL/GLS, PAR, CEA, plus the existing
HPX/XPH). Zenithal and conic projections (TAN, SIN, COE, ...) can't show
the full sky and need a centre latitude and a field size; they were
added later as static windows (Phase 4, step 0).

### Where the code goes

`fitsy/` doesn't link AST, but `tksao/frame/` does (`astConvert` in
`base.C`/`fitsimage.C`, `astFitsChan` in `fitsimage.C`/`frsave.C`). So the
resampler should be a new `FitsFile` subclass in `tksao/frame/`, and
`initHPX()` should wrap the `FitsHPX` in it when a non-HPX/XPH projection
is requested. Nothing downstream of `hpx_` should need to change.

Option interaction: `layout` and `quad` only describe the HPX/XPH
intermediate, so when a non-HPX/XPH projection is requested they are
ignored. Build the intermediate with the default `layout=equator,quad=0`
and use `lon=` for the centre longitude instead.

## Work items

### Phase 1: Prototype (no grammar changes) -- done 2026-10-14

- [x] New class `FitsHPXReproj : public FitsFile`, for now declared and
      defined inside `tksao/frame/fitshealpix.C` (no build-system change).
      Constructor takes the built `FitsHPX*`, a projection code and a
      centre longitude.
  - [x] Target `FitsHead`: OBJECT, CRPIX at the centre, CDELT = HEALPix
        pixel size (nside recovered from the HPX CDELT), CTYPE prefix
        copied from the HPX CTYPEs, CRVAL1 = lon, CRVAL2 = 0, and a
        `HISTORY` card. (`FitsHead::insertComment()` writes
        `HISTORY = ...` because `FitsCard::setComment()` adds `= `, so the
        card is built by hand and inserted with `cardins()`.)
  - [x] Image size from a per-projection extent table (AIT, MOL, CAR,
        SFL, GLS, PAR, CEA) plus a 1-pixel margin on each side, rounded
        up to even. With an odd width the centre column sits exactly on
        the central meridian; when lon is a multiple of 90 that is a
        polar facet seam in HPX, the HPX grid position is an exact .5
        tie, and nearest-neighbour can round into the gap between facets
        (found with the nside=1024 MOC: 4 pixels came out 0 instead of 1).
  - [x] FrameSets from both headers, `astInvert` both (so the current
        Frames are GRID, same as `Base::calcAlignWCS()`), then
        `astConvert(hpxFS, tgtFS, "SKY")` and `astResampleF` with
        `AST__NEAREST`, badval NaN.
  - [x] Byte order: `FitsHPX` stores its data big-endian on little-endian
        hosts (`byteswap_ = lsb()`; downstream swaps on read). The input
        is swapped to native for AST and the output swapped back the same
        way.
  - [x] `astBegin`/`astEnd`, `astOK` checked; `valid_` only set on success.
- [x] Hook in `FitsImage::initHPX()`: temporary env vars
      `DS9_HPX_PROJ=AIT|MOL|CAR|SFL|GLS|PAR|CEA` and `DS9_HPX_LON=<deg>`.
      When set, the HPX intermediate is built with `layout=equator,quad=0`
      (any `layout`/`quad` in the brackets is ignored), wrapped, and
      deleted. Unset (or HPX/XPH): code path unchanged. Tcl's `env` array
      sets the process environment, so one ds9 can switch projections:
      `echo 'set env(DS9_HPX_PROJ) MOL' | ./bin/xpaset ds9 tcl`.
- [x] Rebuild: `make tksaoclean tksao ds9clean ds9` (clean, no warnings
      from `fitshealpix.C`).
- [x] Checks with `Tests/fits/wmap_ring.fits[system=galactic]`
      (nside=256):
  - AIT and MOL (lon=0 and lon=180), CAR, SFL, PAR, CEA (lon=90), saved
    with `save fits` and compared against
    `reproject_from_healpix(..., order='nearest-neighbor')` on the same
    header: every finite ds9 pixel is equal, 100% in all six.
  - Blank pixels are exactly the pixels outside the projection boundary
    (AIT/MOL ellipse, PAR analytic boundary checked; 0 blank inside,
    0 finite outside). `reproject` itself does not blank outside the
    AIT/MOL/SFL/PAR boundaries, so compare only where ds9 is finite.
  - 117/117 random in-sky AIT/MOL pixels match the HPX frame at the same
    galactic position (crosshair + `xpaget ds9 data`).
  - `healpix_partial.fits` and `ChandraMOC10_nograting.fits` (nside 1024,
    5663x2833) render correctly in AIT.
  - The partial map (AIT) and the MOC (MOL, lon=0) also match a
    reference built from the table exactly.
  - All of this is automated in `Tests/hpxproj.sh` (helpers in
    `Tests/hpxproj/compare.py` and `boundary.py`). Run from `Tests/`:
    `PATH="$PWD/../bin:$HOME/local/bin:$PATH" ./hpxproj.sh`. The numeric
    checks use the conda env `hpxtest` (numpy, astropy, healpy,
    astropy-healpix, reproject; override with `HPXPY=`) and are skipped
    if it is missing. When Phase 2 replaces the env vars, update
    `setproj()` in that script.
- Found while testing, **not caused by this change**: ds9 segfaults
  (`strlen(NULL)`) on `xpaget ds9 data wcs galactic 179.5 45 1 1 yes`
  for an image with an `XLON-AIT` WCS. It reproduces with a plain FITS
  image saved from the prototype, so it is in the existing `data` command
  path (`Base::getDataValuesCmd`), not in the HEALPix code.

### Phase 2: Real option plumbing -- in progress 2026-10-14

- [x] Moved `FitsHPXReproj` into `tksao/frame/fitshpxreproj.{C,h}`;
      added to the source lists in `tksao/configure.ac` and the
      checked-in `tksao/configure` by hand; `rm tksao/Makefile` and
      rebuilt (configure needs the original `PKG_CONFIG_PATH`, see
      AGENTS.md). Projection codes now match exactly (`strcmp`), not by
      prefix.
- [x] Replaced the `DS9_HPX_PROJ`/`DS9_HPX_LON` env vars with the parsed
      options.
- [x] `fitsy/file.h/.C`: `pHPXProj_` (string, default NULL = today's
      behaviour: HPX, or XPH with `layout=north|south`) and `pHPXLon0_`
      (degrees, default 0).
- [x] `fitsy/lex.L` + `fitsy/parser.Y`: keywords `proj` and `lon0`.
  - Named `lon0`, not `lon`: every bracket keyword is reserved
    (case-insensitive) inside `[...]`, so `lon` would have broken e.g.
    `[bin=lon,lat]` for a table with a LON column.
  - `proj=<STRING>` is stored as given; `tksao` upper-cases it and an
    unknown code makes the load fail. `proj=hpx` is the default
    behaviour. Projection names are not lexer keywords, so `car`,
    `par`, ... stay usable as extension/column names.
  - `lon0=<INT>` or `lon0=<STRING>` parsed with `strtod` (the lexer
    returns reals like `-60.5` as STRING). `+60.5` doesn't lex as one
    token and falls through to a parse error (filter), same as other
    numeric options.
  - Regenerated with this Mac's tools: bison 2.3 (`parser.C`/`.H`
    otherwise byte-identical) and Xcode flex. The no-op check showed
    Xcode flex is **not** byte-identical with the checked-in `lex.C`
    and its output doesn't compile against the checked-in
    `fitsy/FlexLexer.h`, so `fitsy/FlexLexer.h` is now Xcode's (plus
    the local public `begin(int,int)`) and `nrrdlex.C`/`envilex.C` were
    regenerated too (`make parser nrrdparser enviparser`; their parsers
    came out identical). Expect skeleton-only churn in the three
    `lex.C` files. Details in AGENTS.md.
  - [x] Rebuild: `make fitsyclean fitsy tksaoclean tksao ds9clean ds9`.
- [x] `Tests/hpxproj.sh` uses `proj=`/`lon0=`; adds checks for
      `proj=hpx`, case-insensitivity, unknown `proj=` failing to load,
      and a real `lon0=-60.5` (CRVAL1 299.5). All pass, plus the exact
      `reproject` comparisons.
- [x] Filename-parsing regression: the bracket expressions from
      `Tests/parse.sh`, plus filters containing `=` (`[pha=5]`,
      `[pha=1:10]`, `[pha=3:8,pi>10]`), load with the expected bin
      columns and filter text. (Not compared against a pre-change
      build.)
- [x] Docs: `ds9/doc/ref/file.html`, "FITS HEALPIX Table": description,
      `proj=`/`lon0=` in the parameter list, two examples.
- [ ] Release-notes entry: 8.8 is released and there's no
      `ds9/doc/release/r8.9.html` yet; needs the next version decided.
- [ ] Optional Tcl side: a preference or command-line option for the
      default HEALPix projection (there is no Tcl UI for the HEALPix
      options today; everything goes through the filename brackets).

### Phase 3: Testing -- done 2026-10-14

- [x] Test inputs, all in `Tests/` and exercised by `Tests/hpxproj.sh`:
  - existing: `fits/wmap_ring.fits` (full-sky RING, nside 256),
    `fits/healpix_partial.fits` (partial NESTED, EQU),
    `fits/ChandraMOC10_nograting.fits` (NUNIQ MOC, nside 1024)
  - generated by `hpxproj/make_fixtures.py` into `fits/hpxproj/`
    (nside 64, from wmap_ring): `ring64_{gal,equ,ecl,unk}.fits`
    (COORDSYS G / C / E / absent) and `nested64_gal.fits`. RING and
    NESTED versions give byte-identical HPX images, as they should.
  - `ascii32_gal.fits` (ASCII table) is generated too but **ASCII-table
    HEALPix doesn't load at all, on master either** ("Unable to load
    fits"), despite the docs: `FitsHPX` casts to the binary-table
    classes. Pre-existing, out of scope; flagged as a separate task.
- [x] Values: every fixture in AIT and MOL (and wmap in all six
      projections) matches `reproject_from_healpix` nearest-neighbour
      exactly wherever ds9 has a value; ds9 keeps the sky system
      (GLON / RA-- / ELON / XLON); blanking is exactly the projection
      boundary. The earlier 117/117 crosshair spot check against the
      HPX frame agrees.
- [x] UNKNOWN coordsys works: `XLON`/`XLAT` HPX and target headers
      convert fine through `astConvert(..., "SKY")`.
- [x] Default output byte-identical to master: built master's `fitsy` +
      `tksao` (path-limited checkout, full clean rebuild), recorded
      `save fits` + `saveimage png` sha256 for 12 default HPX loads
      (incl. `layout=north`, `quad=3`, `order=nested`) and 21
      filename-bracket parse results; the branch build matches all of
      them exactly.
- [x] Found and fixed a pre-existing grammar bug: `filename[ext,hpx]`
      (documented, e.g. `[1,order=nested]`) silently ignored the HEALPix
      options because the rule used the bracketed `hpxs` instead of
      `hpxsb`. Now `[1,proj=ait]` and `[1,layout=north]` work; all other
      recorded parse results unchanged.
- [x] Visual: AIT, MOL and CAR with a galactic grid and regions
      straddling the +/-180 seam render **byte-identically** to the same
      image reloaded as an ordinary FITS file (grid only, regions only,
      both), so the feature adds no display differences. Two general
      ds9 behaviours seen with any all-sky image: MOL grid parallels at
      +/-30 and +/-60 run past the ellipse edge, and seam-crossing
      regions are drawn in image space without wrapping (a polygon
      across the seam becomes a band across the whole image). Panner
      and compass checked from a canvas capture; the magnifier needs a
      pointer and wasn't checked.
- Found while testing, **pre-existing, not caused by this work**: listing
  regions in galactic (`xpaget ... regions -system wcs -sky galactic`)
  segfaults (`strlen(NULL)`) on an ordinary `GLON-AIT` FITS image when a
  box is centred on the seam (`box(180,-50,30,15,0)`). Same family as the
  `data`-command crash above; flagged together as a separate task.

### Phase 4 (proposal, not started): zenithal and conic projections

Sketch from 2026-10-16. Nothing here is implemented.

**Idea.** Zenithal projections (TAN, SIN, ARC, ZEA, STG, ...) can't show
the whole sky, so render a *window*: the tangent point is the current
pan position, the pixel size is the HEALPix pixel size at the tangent
point, and the window is the frame size (at the current zoom) padded
2x on each axis. When the user pans, re-centre and re-render.

**Feasibility: yes. Speed is not the problem; overlays are.**

- Cost, measured on this branch (one core, exact nearest-neighbour,
  `tol=0`): the MOC (nside 1024) to MOL, 16M output pixels, takes
  ~0.7 s, about 45 ns/pixel, plus ~0.35 s to build the HPX
  intermediate. A 1000x900 frame padded 2x is ~3.6M pixels: ~0.15 s
  per re-render. Fine to do synchronously on pan release.
- The HPX intermediate would stay resident (built once per load)
  instead of being freed after resampling; that is the ~0.35 s part.
  At very high nside it is the memory limit already noted below.
- Stress test, `/Users/kjg/acis_all_sky_gal.hpx` (nside 8192, partial
  NESTED, 17M rows, galactic; 64 GB Mac): default HPX load 17.9 s,
  40960x40960, peak 7.1 GB; `proj=ait` 65.5 s, 45288x22646, peak
  17.2 GB. The resample ran at the same ~45 ns/pixel, so a
  frame-sized window would still re-render in ~0.15 s at nside 8192.
  But keeping a 6.7 GB HPX intermediate resident (and 18 s to build it)
  is the real cost at this size. Option: skip the intermediate and look
  pixels up straight from the table (HEALPix ang2pix on the sky
  position; binary search on the sorted PIXEL column for partial maps,
  UNIQ for MOCs). That needs ang2pix in C, which AST doesn't provide.
- Fixed 2026-10-16, independent of Phase 4: `FitsHPXReproj` copied the
  whole HPX image to byte-swap it, though the intermediate is deleted
  right after. It now swaps in place: the nside-8192 AIT peak went from
  17.2 GB to 10.9 GB, same time. A full-sky AIT at nside 8192 is also a
  4 GB image that nobody can see at full resolution, which is another
  argument for windowed rendering even for AIT/MOL at high nside.
- **AST is not thread-safe here** (`ast/` is configured
  `--without-pthreads`) and the main thread uses it constantly, so
  worker threads can't call AST. See "Async" below for options.
- The hard part is that every re-render gives the image a new pixel
  grid and WCS, and the old-to-new pixel mapping is *not* affine
  (different tangent point). Everything ds9 keeps in image
  coordinates has to be remapped through the sky (see "Swap").

**Precedent in ds9: binned event tables.** Panning a binned table only
records the new centre (`FrameBase::panCmd` -> `setBinCursor()`); a bin
command then rebuilds the image around it (`FitsImage::nextBin()`,
`fitsbin.C`) and `Base::updateBin(Matrix)` shifts the crosshair,
markers and contours by the returned affine matrix. A live HEALPix view
would follow the same shape: pan sets the cursor, a "re-centre" step
rebuilds the window, then overlays are remapped. Unlike bin, ds9 should
trigger the re-centre itself on pan release (`PanRelease` in
`panzoom.tcl`) rather than wait for a menu command.

**Design sketch.**

1. *Options.* `proj=tan|sin|arc|zea|stg|...` plus `lat0=` alongside the
   existing `lon0=` for the initial centre (default: the map's 0,0, or
   the centre of the data for partial maps and MOCs).
2. *Class.* `FitsHPXView : FitsFile` owns the resident `FitsHPX` and
   the current window (data + header). `recentre(lon, lat, w, h)`
   rebuilds the target header (CRVAL = tangent point, CDELT = HEALPix
   pixel size, NAXIS = w x h) and resamples, reusing the
   `FitsHPXReproj` code. Window size is capped (e.g. 4096^2), and
   capped by the projection's valid region (TAN diverges at 90 deg, so
   limit it to ~70 deg from the centre; SIN to a hemisphere; ARC/ZEA
   can reach the whole sky).
3. *Trigger.* Re-centre on pan release, `pan to`, zoom change and frame
   resize, but only when the visible area has left the inner part of
   the window (hysteresis), not on every release. While dragging, the
   2x padding is what the user sees, so short drags never re-render.
4. *Swap.* Like `nextBin()`: replace the data and header, rebuild
   base/block/analysis/image, rebuild `ast_`, then:
   - crosshair: old image -> sky -> new image (one point, easy)
   - pan: the new tangent point is the image centre
   - contours: regenerate (they're derived data)
   - regions: the hard part. `updateMarkerCoords()` takes an affine
     Matrix; here each vertex/centre must go through the sky, and
     sizes and angles change with the projection. Options: list the
     regions in WCS and recreate them, or add a sky-based remap to the
     marker classes. Needs a closer look before committing to this.
   - scale limits: compute minmax (and probably zscale) once from the
     full map, otherwise the display brightness jumps on every pan.
5. *Async, if synchronous turns out too slow* (big frames x high nside):
   - (a) Chunk on the main thread: resample in row strips from
     `Tcl_DoWhenIdle`/timer callbacks (`astResampleF` can fill a
     sub-region via its `lbnd`/`ubnd` arguments), cancel when a new pan
     arrives. No threads, keeps the UI responsive. Recommended first.
   - (b) Threads without AST: evaluate the mapping with AST on the main
     thread on a coarse grid (e.g. every 16 pixels), then let worker
     threads interpolate pixel positions and do the nearest-neighbour
     lookups, with cells that straddle an HPX facet seam handled
     exactly. This is what `astResample`'s `tol` does internally.
     Follow `Frame3d`'s detach pattern: `fillImageDetach()`, a 125 ms
     `Tcl_CreateTimerHandler` poll of per-thread `done` flags, and an
     `abort` flag (`frame3d.C`).
   - (c) Rebuilding AST with pthreads: the biggest change, since AST
     then locks each object to one thread. Not recommended.

**Conic projections** (COE, COD, COO, COP, BON) are built around a
latitude band (`PV2_1` = theta_a, plus a half-width), so re-centring
them on every pan isn't natural. Suggest conics stay static: a fixed
window from `lon0=`/`lat0=`, with the band from the centre latitude or
an option.

**Other things to decide.**

- The panner shows only the current window, so it can't be used to
  jump across the sky. A low-res all-sky overview in the panner would
  be a separate feature.
- `save fits` and `saveimage` save the current window only.
- `frame lock wcs`: panning another frame re-centres this one too,
  which is probably what users want, but it multiplies re-renders.
- Frame matching uses one linear fit (see PR #378); that is a good fit
  for a zenithal window, better than for all-sky AIT/MOL.

**Suggested order.**

0. **Done 2026-10-16.** Static zenithal/conic windows:
   - `proj=tan|sin|stg|arc|zea` centred on `lon0=`/`lat0=` (default 0),
     `fov=` = angular diameter of the square image (defaults TAN 90,
     SIN/STG 180, ARC/ZEA 360; TAN capped at 170), converted to plane
     size with each projection's radial formula.
   - `proj=cop|coe|cod|coo|bon`: `lat0=` is the reference latitude
     theta_a (`PV2_1`, default 45; 0 is rejected as degenerate),
     `lon0=` the central meridian, `fov=` the plane width (default 360).
     CRVAL2 = theta_a for the conics, 0 for Bonne (its reference point).
   - New bracket keywords `lat0` and `fov` (`fitsy`); lon0/lat0/fov share
     one `hpxReal` rule. `lat0`/`fov` are ignored by the all-sky
     projections. Invalid `lat0` (|lat0| > 90, conic 0) fails the load.
   - The reference pixel is nudged by (.001, .0007) px. A polar TAN view
     (`lat0=90,lon0=45`) put pixel centres exactly on the HPX polar
     facet seams along the image diagonals (exact .5 ties, 20 pixels
     different from `reproject`); the even-size rule only covers the
     central row/column. Unequal offsets move pixel centres off every
     line of symmetry.
   - All ten match `reproject_from_healpix` exactly (wmap at various
     centres, plus a polar TAN of the MOC); added to `Tests/hpxproj.sh`.
     AST already blanks ARC beyond 180 deg and invalid conic regions.
   - Docs: `ds9/doc/ref/file.html`.
1. **Done 2026-10-16.** Keep the HPX intermediate resident; recentre.
   - `FitsHPXReproj` now owns the `FitsHPX`. Zenithal and conic windows
     keep it (native byte order, swapped once); all-sky images still free
     it after building. Freed with the frame.
   - `FitsHPXReproj::recentre(lon, lat)` rebuilds the header and
     resamples at the same size and pixel scale; `nativeAt(pixel)` gives
     the map's own lon/lat through the window's WCS (so no ds9 sky-frame
     conversion, and it works for XLON). Conics recentre the meridian
     and keep their reference latitude.
   - `FitsImage::hpxRecentre()` swaps the data and calls `load()` like
     `nextBin()`; `Context::hpxFinish()` redoes `loadInit`/`loadFinish`
     (which rebuilds the WCS via `block()` -> `resetWCS()`), like
     `binFinish()`; then `updateBin(Matrix())` resets the pan to the
     image centre and redraws (identity matrix: crosshair and regions
     are not remapped yet, step 2).
   - Frame command `$frame update fits center [lon lat]`, built from
     existing lexer keywords so only `tksao/frame/parser.Y` changed;
     regenerated with bison alone (byte-identical tool), not `make
     parser`, which would also run flex. Reach it through the tcl XPA
     access point. Errors: "not a HEALPix zenithal/conic window",
     "unable to recentre".
   - nside 8192 (`acis_all_sky_gal.hpx`), TAN `fov=10` (1404x1404):
     load 14.4 s, each recentre 0.22-0.24 s, 7.1 GB resident, back to
     0.4 GB after `frame delete`. The pan lands within half a pixel of
     the tangent point (ds9's usual centring of even-sized images).
   - `Tests/hpxproj.sh`: recentre on explicit lon/lat and on the pan,
     size kept, conic latitude kept, AIT refused; recentred images
     match `reproject` exactly.
2. **Done 2026-10-16.** Live, synchronous recentring. Regions deferred.
   - Trigger: after a pan is applied, never during a drag:
     `panEndCmd` (drag release), the `FrameBase` `pan`/`pan to`/
     `pan bbox` commands (click, XPA, panner, frame locking). The window
     is rebuilt once the pan point is more than 1/4 of the window from
     its centre (conics: horizontal distance only).
   - `pan to <sky>` on a window converts the target with a plain AST
     SkyFrame-to-SkyFrame conversion (map system from the CTYPE prefix)
     and, if it is outside the window or far away, rebuilds there
     directly. Going through the window's WCS put far targets at
     nonsense positions (a point >90 deg from a TAN centre). Converting
     via ds9's own frameset gave wrong answers too (its SkyFrame isn't a
     plain sky system), hence fresh SkyFrames. Frame locking sends
     `pan to` in WCS, so locked windows follow.
   - `Base::hpxRecentre(mode, lon, lat)`: modes HPXPAN (on the pan),
     HPXCENTER (`update fits center lon lat`; conic lat = new theta_a),
     HPXPANTO (pan to a sky position; conics keep theta_a). The pan and
     crosshair keep their sky positions (`Base::updateBin()` is called
     directly, since `FrameBase::updateBin()` resets the pan to the
     centre, which would lose a conic's vertical position); contours are
     regenerated with `contourUpdateFV()`, as `setSlice()` does.
   - Global scale limits: a window clips on the whole map. `FitsImage`
     keeps a persistent `FitsDatam<float>` over the kept HPX
     intermediate (through a native-byte-order view, since the FitsHPX
     still reports swapped data); `FitsData` caches its scan/zscale/
     autocut, so the whole-map pass happens once per load (+4 s at
     nside 8192) and recentres stay ~0.23 s. `min()/max()/low()/high()`
     and the string getters read it; min/max *positions* aren't
     reported for windows (they'd be HPX coords).
   - Verified: limits equal the whole-map HPX load (minmax and zscale)
     and don't change on recentre; a recentred view with contours renders
     byte-identically to a fresh load at that centre; default HPX loads
     and filename parsing still byte-identical to the Phase 3 record.
     `moc.sh` still fails here only because PR #378 isn't merged.
   - `Tests/hpxproj.sh` covers all of the above.
   - Not done: regions (step 3), and aux contours loaded from files
     (same problem as regions).
3. **Done 2026-10-16.** Region and aux contour remapping on recentre.
   - Regions (user, catalog and footprint layers) are listed one at a
     time in the map's own sky system (DS9 format, degrees, with
     properties) while the old WCS is still in place
     (`Base::hpxListMarkers`), then, after the window is rebuilt, the old
     markers are detached and each is re-created from its listing
     (`Base::hpxRestoreMarkers`, via `markerCommandCmd`). ds9's own
     sky<->pixel handling of sizes and angles does the remap, which a
     Matrix can't (not affine).
   - The new marker takes over the old one's id, selection, callbacks
     and analysis flags (`Marker::adoptState`), and the old one's
     callbacks are dropped before it is deleted, so DELETECB doesn't
     fire and open region dialogs stay attached. Region stats are moved
     to the restored id.
   - A region the new window can't place (e.g. >90 deg from a TAN
     centre) is parked with the image (`FitsImage::hpxParked()`: layer,
     id, selection, listing) and retried on every later recentre; its
     "Bad Coordinate mapping" warning is suppressed, and the new
     markers' ids are kept out of the command result. Parked regions
     lose their callbacks.
   - Not for XLON/XLAT maps (no sky system to go through): their
     regions stay in image coords.
   - Verified (`Tests/hpxproj.sh`): after a recentre the galactic region
     listing is identical, ids and selection are kept; regions parked at
     a far centre come back with their ids, selection and properties
     when panning back. Default loads/parsing unchanged.
   - Parked regions vs deletion (fixed 2026-10-16): parked regions aren't
     in any marker list, so deleting regions used to leave their parked
     copies, which came back on the next recentre ("zombies"), and the
     catalog tool regenerating while parked (it deletes by tag and
     re-creates) produced duplicates. `Base::hpxParkedDelete` now drops
     matching parked entries from `markerDeleteAllCmd(0)` (`marker
     delete [all]`), `markerDeleteCmd(tag)` and `markerDeleteCmd(id)`, in
     the current layer; `delete=0` regions are kept.
   - Regions created where the window can't place them (fixed
     2026-10-16): ds9 drops a region whose coordinates don't map, which on
     a window just means "not in this window": a region file loaded, or
     the catalog regenerated, while looking elsewhere was lost.
     `Base::hpxParseParked` (DS9 format, windows only): parse as usual; if
     `createMarker()` reported unplaceable regions (`hpxMapErrs_`), undo
     that parse and redo it statement by statement (with the global and
     coordinate-system context in effect; `||` composite continuations
     joined; '#'-prefixed shapes kept), parking the ones that fail (id
     -1: they get a new id when placed). Their callbacks are in the text.
     `hpxRestoring_` keeps the recentre's own re-creation out of this
     path.
   - Parked entries keep a copy of their callbacks and highlite state, so
     a catalog marker parked by a recentre keeps its table link; entries
     parked at creation keep the callbacks parsed from their text (a bug
     overwrote them with an empty list; fixed).
   - Listing for the remap is done at 12-digit precision (ds9's default 7
     changed the last digit on a round trip).
   - Catalogs tested (`Tests/hpxproj.sh`, local `catfits/cellout.fits` on
     a TAN window of the MOC, no network): positions, ids and
     `{cattool.N}` tags kept through a recentre and through park/restore;
     highliting a marker still selects its table row (CATHighliteCB)
     after a recentre, after park/restore, and after regenerating while
     parked; regenerating while parked gives exactly one marker per row.
   - Still untested: the footprint layer (needs a saved footprint file:
     the footprint tool queries CXC/HLA), and region dialogs/analysis
     plots staying attached (GUI).
   - Restored parked regions are appended, so the region order can change.
   - **Aux contours** (loaded from files): each image keeps a sky copy
     (`FitsImage::hpxAux()`: per ContourLevel, polylines of the map's own
     lon/lat). `Context::hpxSaveAuxContours` converts any level not yet
     in the copy (its geometry is still complete in the current window)
     and drops levels that were deleted; `Context::hpxRestoreAuxContours`
     rebuilds every level's polylines from the copy in the new window,
     splitting lines where a vertex can't be placed or where consecutive
     vertices land more than 1/4 of the window apart (a jump across a
     seam or edge). Because the copy is authoritative, parts that fall off
     one window come back in later ones. Uses the map's own system, so it
     works for XLON/XLAT maps too.
   - Verified: a recentred view's aux contours render pixel-identically
     to a fresh load at that centre with the same contour file, and after
     a far recentre (everything off the window) and back they render
     identically to the start.
4. Async, (a) above, only if measurements say it's needed.

## Open questions / risks

- **HPX gaps in MOC images:** `FitsHPX::buildMOC()` fills its image with
  0, including the gaps between polar facets, while `build()` uses NaN
  there. Existing behaviour, and harmless after the even-size fix, but
  NaN would be more consistent (it's in `fitsy/`, so out of scope here).
- ~~**UNKNOWN coordsys**~~: checked in Phase 3, `XLON`/`XLAT` works.
- **Grid/seam behaviour:** checked in Phase 3: identical to ordinary
  FITS all-sky images. ds9's general limitations remain (MOL parallels
  past the ellipse, seam-crossing regions not wrapped).
- **Interpolation:** ship nearest-neighbour only. Smoother resampling
  (`AST__LINEAR`, `AST__SINC*`) could be an option later, but it changes
  the data values and should be clearly labelled.
- **Memory at high nside:** the HPX intermediate is (5*nside)^2 floats,
  about 6.7 GB at nside=8192, and the target array adds about the same
  again at peak. This is an existing limit, but reprojection doubles it.
  If needed, resample in strips, or later build the target directly from
  the table (that would need ang2pix for RING/NESTED and a UNIQ lookup for
  MOC).
- **Output resolution:** match the HEALPix pixel size by default; consider
  a `scale=`/`width=` option for oversampling or a quicker coarse view.
- **Header provenance:** add HISTORY/COMMENT cards saying the image was
  resampled from HEALPix NSIDE=n, ORDERING=..., with nearest-neighbour, so
  saved FITS files (`File > Save`) say where they came from.

## Workaround available today

Reproject offline and load the result as an ordinary image, e.g. with
`astropy-healpix` / `reproject.reproject_from_healpix` onto an `-AIT` or
`-MOL` header. DS9 already handles those headers through AST.
