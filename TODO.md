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
the full sky and would need a centre latitude and a field size, so leave
them out for now.

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
