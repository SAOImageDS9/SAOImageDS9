# Native full-depth TIFF import — review and phased TODO

Plan for teaching DS9 to read TIFF pixels **at their stored depth** (16-bit integer,
32-bit integer and float, signed or not), alongside today's 8-bit photo path. Written
2026-11-22 on the `xisf_support` branch. The plan follows the pattern that XISF used
(`TODO_XISF.md`, `fitsy/xisf.{h,C}`): a `FitsFile` subclass in `fitsy/`, a `load tiff`
verb in tksao, and a small Tcl surface. Check items off as they land and add findings
inline, as the other TODO files do.

**Status (2026-11-22): every phase is done.** Linux and Windows build cleanly in CI
(SAOImageDS9/SAOImageDS9#457).
- **Phase 4:** half floats, packed unsigned depths (1–15 bits) and FITS cards in
  ImageDescription.
- **Checks** (`Tests/tiff`, 126 fixtures):
  - `tiff.sh`: 126 XPA probes and 15 RGB-frame probes
  - `check_load.py`: 121 loads, 15 RGB-frame loads, 5 refusals
  - `check_probe.py`: 121/121
  - `check_entry.py`: 31/31
  - The load and probe checks pass under Guard Malloc.
- **Phase 5:** `Tests/tiff.sh` passes (111 XPA and 14 RGB-frame probes against
  baselines taken from the FITS twins), and TIFF smoke tests are in `command.sh`,
  `xpa.sh` and `samp/tiff.samp`.
- **Still to do:**
  - the test suites on Linux and Windows, since CI only builds
  - Phase 4's optional items (half floats, packed 12-bit, FITS cards in
    ImageDescription)
- **Branch:** `tiff16_support`, in both this repo and `Tests/`, **cut from `master`**.
- **What loads at full depth:**
  - grayscale TIFFs, and stacks of them as cubes
  - RGB TIFFs: all three channels into an RGB frame, or as one luminance image in any
    other frame
- **Entry points:** every one, as of Phase 2. The choice of reader follows
  `pds9(tiff,mode)` (default `auto`: native when deeper than 8 bits or not unsigned).
- **Real-world check:** the Chandra `trebleclef.tif` (7200×5361, 16-bit RGB, AVM WCS)
  now loads at full depth in about 2 s in either kind of frame. Its pixels match
  tifffile and its WCS matches astropy.
- **Checks** (`Tests/tiff`):
  - `check_load.py`: 104 loads, 14 RGB-frame loads, 7 refusals
  - `check_entry.py`: 31/31
  - `check_probe.py`: 104/104
  - `check_fixtures.py`: 111/111
  - The load and probe checks were also rerun under Guard Malloc.
- **XISF references in this file** (`fitsy/xisf.C`, `TODO_XISF.md`, `framergb.C`'s RGB
  load) **point at the `xisf_support` branch**, not at master. XISF is the model this
  work copies, and it has not merged yet.

---

## 1. Review: what happens to a TIFF today

### 1.1 The load path

There is no Python in this path. TIFF goes through **tkimg**, the same way GIF, JPEG
and PNG do:

```
File > Import > TIFF / -tiff foo.tif / xpaset ds9 tiff
  ds9/library/import.tcl   Import ... tiff  ->  ImportPhotoFile $fn $mode
  ds9/library/photo.tcl    image create photo -file $fn        (tkimg img::tiff)
  tkimg/tiff/tiff.c:745    TIFFReadRGBAImage(tif, w, h, raster, 0)
                           -> 8-bit RGBA, whatever the file held
  ProcessLoad -> $frame load photo $ph
  fitsy/photo.C            FitsPhoto: (.299 R + .587 G + .114 B) + .5 -> BITPIX 8
                           (FitsPhotoCube keeps R, G, B as 3 BITPIX-8 planes, for RGB frames / slice mode)
  AVMLoadPhoto             reads AVM/XMP tags from the raw file bytes for WCS
```

So the depth is lost in two places:

1. **`TIFFReadRGBAImage`** in tkimg reduces every sample to 8 bits. It drops the low byte
   of 16-bit data, and it handles float data badly or not at all.
2. **Tk photo images** hold only 8 bits per channel. Even a patched tkimg could not pass
   more depth through `image create photo`.

Point 2 rules out fixing this inside tkimg. **The pixels have to bypass the photo image
completely.** That means a native reader in C++, as XISF has.

### 1.2 What is already in the build

Most of what this needs is already linked in:

- **libtiff 4.7.2 is already statically linked into ds9.** It is vendored as tkimg's
  `tifftcl` package (`tkimg/libtiff/`, `lib/tifftcl4.7.2/libtcl9tifftcl4.7.2.a`), and
  `ds9/{unix,macos,win}/ds9.C` calls `Tifftcl_Init` and `Tkimgtiff_Init` at startup.
  **No new vendored package is needed.** The seven-place wiring in AGENTS.md does not
  apply here.
- **The codecs are split between two packages.** `tifftcl`'s libtiff has these built in:
  none, LZW, PackBits, CCITT/fax, NeXT, ThunderScan, LogLuv. Deflate/AdobeDeflate, JPEG
  and PixarLog are **registered at runtime by `Tkimgtiff_Init`**
  (`tkimg/tiff/tiff.c:172-179`, `TIFFRegisterCODEC`). Since ds9 runs `Tkimgtiff_Init` at
  startup, a native reader gets Deflate (the most common scientific TIFF compression)
  as long as it runs inside ds9. A standalone `tclfitsy` or a `utils/` tool would not
  have it unless it also loads `img::tiff`. LZMA, ZSTD and WebP are not available. Report
  "unsupported compression" for those, and don't vendor more codecs in v1.
- **The stubs table covers every call we need.** `include/tifftclDecls.h` has 115
  entries, including `TIFFOpen`, `TIFFClientOpen`, `TIFFGetField(Defaulted)`,
  `TIFFReadEncodedStrip/Tile`, `TIFFReadScanline`, `TIFFIsTiled`, `TIFFStripSize`,
  `TIFFTileSize`, `TIFFNumberOfDirectories`, `TIFFSetDirectory`,
  `TIFFSetErrorHandler/WarningHandler`. The static archive also exports the plain
  `_TIFF*` symbols (`nm` shows `T _TIFFOpen`).
- **libtiff gives back samples in native byte order.** Its post-decode step swabs 16-, 32-
  and 64-bit data from big-endian (`MM`) files. The reader sets `byteswap_ = 0` and
  `endian_ = native`, and never swaps.
- **BigTIFF** comes free with libtiff 4.x.

### 1.3 A partial workaround that exists today

An **uncompressed, single-strip (or contiguous-strip), chunky, grayscale** 16-bit TIFF
can already be opened as a raw array:
`-array 'foo.tif[xdim=W,ydim=H,bitpix=-16,skip=OFFSET,arch=little]'`, with `OFFSET`
taken from the `StripOffsets` tag. The image comes out upside down, and the approach
fails for compressed, tiled or multi-strip files, which is most real files. It is not a
solution. It is useful as an **independent cross-check** for the first fixtures (§5).

---

## 2. Design

### 2.1 Where the code goes

| Layer | New / changed | Modelled on |
|---|---|---|
| `fitsy/tiff.{h,C}` | `FitsTiff : FitsFile` (one image or one IFD as a FITS-like image), `FitsTiffNext` for later planes | `fitsy/xisf.{h,C}`, `fitsy/envi.C`, `fitsy/photo.C` |
| `tksao/frame/fitsimage.{h,C}` | `FitsImageTiff`, `FitsImageTiffNext` | `FitsImageXisf(Next)` |
| `tksao/frame/{base,frame,framergb}.h`, `baseload.C`, `frameload.C`, `frameaload.C` | `loadTiffCmd(fn, ..., LayerType)` | `loadXisfCmd` |
| `tksao/frame/parser.Y` + `lex.L` | `load tiff` token/rule | the `load xisf` rule. **Mind the flex rule:** on this box, regenerating `lex.C` adds type-width churn, so hand-apply the `lex.L` change to `lex.C`, as AGENTS.md describes for `xisf` |
| `ds9/library/tiff.tcl` (new) | `ImportTiffFile`, `TiffCmdLoad`, `ProcessTIFFCmd` | `ds9/library/xisf.tcl` |
| `ds9/parsers/tiffparser.tac` + `tifflex.fcl` (new) | `tiff [new\|slice\|mask\|native\|photo] [file]` | `xisfparser.tac`. TIFF currently **shares `photoparser`** with GIF/JPEG/PNG, so it needs its own parser to take new keywords |
| `fitsy/Makefile.in`, `configure.ac` | `-I` for the libtiff headers, link `libtifftclstub.a` | how XISF added `XML2_LIBS` |

### 2.2 How fitsy reaches libtiff

Recommended: **use the tifftcl stubs.** Call `Tifftcl_InitStubs(interp, "4.7", 0)` once
in the `FitsTiff` constructor, which already gets `interp` as `FitsPhoto` does, and link
`libtifftclstub.a`. This is how tkimg's own `img::tiff` does it, and it keeps working if
anyone builds tkimg shared.

The other option is to link the `_TIFF*` symbols straight from the static
`libtcl9tifftcl4.7.2.a`. It is simpler, but it ties fitsy to a static build and can give
duplicate symbols if a system libtiff gets dragged in.

**Header gotcha (settled in Phase 0; see §4 for what was done).** `include/tifftclDecls.h` does
`#include "../compat/libtiff/libtiff/tiffio.h"` plus the *internal* `tiffiop.h` and
`tif_predict.h`. That path resolves only from the tkimg source tree, not from the
installed `include/`. fitsy needs
`-I$(top)/tkimg/compat/libtiff/libtiff -I$(top)/tkimg/libtiff/libtiff` (the second for
the generated `tif_config.h`/`tiffconf.h`), or an include of `tifftcl.h` from
`tkimg/libtiff/`. `tiffiop.h` also defines macros (`INLINE`, `streq`, etc.) that may
collide with fitsy. Keep every libtiff include inside `tiff.C`, never in `tiff.h`.

### 2.3 Sample-type mapping

| TIFF `SampleFormat` / `BitsPerSample` | BITPIX | Notes |
|---|---|---|
| UINT 8 | 8 | same values as today, but **no luminance mix** for RGB (see §2.5) |
| UINT 16 | **-16** | fitsy's private unsigned-16, the same choice XISF made (`xisf.C:1856`) |
| INT 16 | 16 | |
| UINT 32 | 64 | widened, as XISF does for UInt32 (`xisf.C:1722`); add a header COMMENT |
| INT 32 | 32 | |
| IEEEFP 32 | -32 | common: Siril/PixInsight/Photoshop 32-bit exports, often 0–1 normalised |
| IEEEFP 64 | -64 | |
| IEEEFP 16 (half) | -32 | converted exactly on read (Phase 4) |
| UINT 1–7 bits (packed) | 8 | unpacked; raw counts, not rescaled (Phase 4) |
| UINT 9–15 bits (packed) | -16 | unpacked; raw counts, e.g. 12-bit 0–4095 (Phase 4) |
| VOID / COMPLEXINT / COMPLEXIEEEFP | — | reject |

`SampleFormat` is missing in most files; it defaults to UINT.

### 2.4 Geometry and orientation

- **Row flip.** TIFF row 0 is the top row (`Orientation` = 1, TOPLEFT, the default), and
  FITS row 1 is the bottom row. Flip rows on read, as `FitsPhoto` and `FitsXisf` do.
- **Honour `Orientation` 1–8.** Camera and phone TIFFs use these. Map each to
  flip/transpose. If this is deferred, warn instead of silently showing the image
  mirrored.
- **Strips and tiles.** Support both: `TIFFReadEncodedStrip` / `TIFFReadEncodedTile`
  into the output buffer, clipping the edge tiles. `Predictor` (2 = horizontal, 3 =
  floating point) is undone inside libtiff.
- **`PlanarConfiguration`** contig (chunky) and separate (planar) both map to N planes.
  Separate is easier: one plane per sample.
- **Multi-page (several IFDs).** Same-geometry, same-type IFDs become planes of a cube.
  This is the TIFF stack that microscopy and some astro tools write. Pages that differ
  (thumbnails, reduced-resolution `NewSubfileType` bit 0) are skipped, and the header
  says how many were. SubIFDs (DNG) are out of scope.
- **Memory.** Compressed data can't be mmap'd. Allocate `W*H*planes*bytes` and decode
  into it. Check for overflow, as the XISF size checks do.

### 2.5 Colour and Photometric

The current path averages RGB to luminance. For a *full-depth* import, recommend this
instead:

- `MINISBLACK` (1 sample): one plane. This is the main case (astro cameras, scientific
  exports).
- `MINISWHITE`: load the raw values unchanged and add a header COMMENT. Inverting would
  stop it being "raw".
- `RGB` (3 samples, plus optional `ExtraSamples` alpha, which is dropped): **in an RGB
  frame, fill the three channels in one load**, as XISF's Phase 5 did (`framergb.C`). **In
  a base frame, load a 3-plane cube.** Add a `-luminance` option (or preference) only if
  someone asks for today's behaviour at full depth.
- `PALETTE`, `YCbCr` (JPEG-in-TIFF), `CMYK`, `CIELAB`, `LOGLUV`, `SEPARATED`: **not native
  in v1.** Report a clear reason, and in `auto` mode (§3) fall back to the photo path,
  since these are display images and 8 bits loses nothing.

### 2.6 Header and WCS

Build a FITS header the way `FitsPhoto` does with `FitsHead(w, h, d, bitpix)`, then add:

- `ORIGIN`/`CREATOR` from `Software`, `DATE` from `DateTime`, `OBSERVER` from `Artist`,
  `IMAGEDESCRIPTION` as COMMENT lines.
- A short dump of the structural tags (compression, predictor, planar, tile/strip size,
  original BitsPerSample/SampleFormat, IFD index, pages skipped) as COMMENT/HISTORY, so
  the header dialog shows what was decoded.
- **WCS:** keep the existing **`AVMLoadPhoto`** path. It parses AVM/XMP from the raw file
  bytes in Tcl, so it works unchanged once the native loader has run. Don't put XMP
  parsing in C++ in v1.
- **FITS cards in `ImageDescription`** are merged (Phase 4): see §4, Phase 4.
- GeoTIFF is out of scope.

### 2.7 Errors

Install `TIFFSetErrorHandler`/`TIFFSetWarningHandler` (or the `*Ext` variants, which take
a user pointer) so that libtiff messages go into the Tcl result instead of stderr. Restore
the previous handlers afterwards, because tkimg's photo reader shares the same libtiff
and its own handlers. Follow `ef6264252` ("report the reader's reason when a load fails")
so that a failed native load says *why*.

---

## 3. User-facing option

Today `tiff` means "load through tkimg". Proposed:

- **Command line / XPA / SAMP:** `-tiff [native|photo] [new|slice|mask] foo.tif`, through
  the new `tiffparser`. `native` is full depth. `photo` is today's path, unchanged.
- **Preference** `pds9(tiff,mode)` = `photo` | `native` | **`auto`**. `auto` uses native
  when `BitsPerSample > 8`, or `SampleFormat` is INT/IEEEFP, or Photometric is
  MINISBLACK/MINISWHITE with more than 8 bits, and uses photo otherwise. Recommended
  default: **`auto`**. Ordinary 8-bit RGB TIFFs keep loading exactly as they do now, and
  every 16/32-bit or float file gets its real values. (Ship with the default at `photo`
  if backward compatibility of pixel values matters more. **Open decision — see §6.**)
- **Menu:** File > Import > "TIFF (full depth)…", next to the existing TIFF item, plus the
  matching Import Slice entry and button-bar entries (`mfile.tcl`, `pbuttons`). Or a
  single TIFF entry that follows the preference.
- **Drag-and-drop** (`drop.tcl:291`) and **Open** with a `.tif`/`.tiff` extension follow
  the preference.
- **Backup/restore** (`backup.tcl`) and the **header** dialog: copy what XISF added.
- **stdin / socket / XPA data:** v1 handles files only, with photo as the fallback. Later,
  use `TIFFClientOpen` over an in-memory buffer (the read/seek/size callbacks are about 40
  lines) so `cat foo.tif | xpaset ds9 tiff native` works.
- **Docs:** `ds9/doc/ref/{command,xpa,samp,file}.html`, the same set XISF touched.

---

## 4. Phases

### Phase 0 — toolchain and fixtures (done 2026-11-22)
- [x] **fitsy compiles against `tifftcl.h` through the stubs.** What it took:
  - **Include paths.** `TEA_ADD_INCLUDES` gained `-I${prefix}/tkimg/libtiff`, so
    `tifftclDecls.h`'s `../compat/libtiff/libtiff/tiffio.h` resolves, and
    `-I${prefix}/tkimg/libtiff/libtiff`, for the generated `tif_config.h`/`tiffconf.h`.
    These went into both `configure.ac` and the checked-in `configure`, by hand.
  - **C linkage.** `tifftcl.h` declares `Tifftcl_InitStubs` without C linkage, so
    `tiff.C` wraps the include in `extern "C"`.
  - **Macro clash.** `tif_config.h` redefines `PACKAGE_*` over fitsy's `-D` flags, so
    `tiff.C` `#undef`s them first. That leaves `tiff.C` warning-free.
  - **Linking.** Nothing to add on macOS: ds9's `LIBS` already has `-ltifftclstub`
    (from `TEA_LOAD_CONFIG(tifftcl)`, for tkimg), and it comes after `fitsy` on the
    link line. The final binary has one `tifftclStubsPtr`. Linux and Windows have the
    same `TEA_LOAD_CONFIG(tifftcl)`, but neither has been built yet.
  - **Build order (a real bug for clean builds).** `fitsy` was built *before* `tkimg`
    in all three `{unix,macos,win}/Makefile.in`, so on a clean tree `tifftcl.h` and
    `tiffconf.h` would not exist yet. `fitsy tclfitsy` now come right after `tkimg`.
    Nothing between their old and new places depends on them. The untracked top-level
    `Makefile` got the same edit by hand.
- [x] **Probe**: `fitsy tiff info <file>` returns the tags of every directory.
  `fitsy tiff decode <file>` also decodes every strip or tile of each one (edge tiles
  and short last strips clipped) and reports nsamples/min/max/sum. libtiff's
  error/warning handlers are swapped in only for the length of a call. Checked: after
  a probe, the photo TIFF import still loads, and ds9's stderr stays empty.
- [x] **Codecs, as measured in ds9.** Decoded exactly: none, PackBits, LZW, Deflate
  (both 8 and 32946), with Predictor 2 and 3. Deflate works because `Tkimgtiff_Init`
  registers it at startup. LZMA and ZSTD fail with libtiff's own clear message,
  `LZMA compression support is not configured`, which Phase 1 can pass straight
  through. Gotcha: asking an unconfigured codec for `TIFFTAG_PREDICTOR` adds a
  spurious "plugin is not configured" error ahead of that message, so the predictor
  is read only for LZW/Deflate.
- [x] **Before/after, the problem shown:** `xpaset tiff dtype/gray_u2_deflate.tif`
  (the photo path) loads at BITPIX 8, and the twin's 65535 reads back as 255.
- [x] **No-op parser regen** (scratch copy of `frame/`, per AGENTS.md): bison 2.3
  reproduces `parser.C`/`.H` byte for byte. flex gives the known skeleton churn in
  `lex.C`, now **46** lines (AGENTS.md says 45; the XISF token probably accounts for
  the extra line). So the `load tiff` rule needs the same hand-applied `lex.C`
  recipe that `load xisf` used.
- [x] **Fixtures**: `Tests/tiff/make_tiff_fixtures.py` writes 107 deterministic
  fixtures (1.8 MB), each with a FITS twin, plus `MANIFEST.tsv`:
  - 35 dtype × compression; 14 tiled (16×16 tiles over 50×40); 14 big-endian;
    7 predictor
  - 13 RGB/RGBA: contig and planar, strip and tile
  - 4 multi-page: a stack, a tiled stack, one with a reduced-resolution page, one with
    mixed geometry
  - Orientation 1–8; MINISWHITE; BigTIFF; RowsPerStrip 1 and H; 1×N and N×1
  - 6 `refuse`: LZMA, ZSTD, half float, palette, JPEG/YCbCr, 1-bit

  `check_fixtures.py` checks every one independently with tifffile (tags against the
  manifest, pixels against the twin): 107/107. The generator needs `tifffile` and
  `imagecodecs`, which were installed into the `ds9asdf` conda env on 2026-11-22
  (tifffile 2026.11.16, imagecodecs 2026.8.16).
- [ ] Add a few real-world files if any can be found: a 16-bit camera TIFF (e.g. from
      DSLR raw conversion), a Siril or PixInsight 32-bit float export, a microscopy stack.
      Carried over; not blocking Phase 1.

Findings for later phases:
- **libtiff decodes the palette and JPEG fixtures without error**, but the raw decode of
  JPEG-in-TIFF gives YCbCr samples, not RGB, unless `TIFFTAG_JPEGCOLORMODE` is set to
  `JPEGCOLORMODE_RGB`. That is fine, because §2.5 sends both to the photo path. The
  native reader must *refuse* them by Photometric, not rely on a decode error.
- **Stats in the probe are per directory**, and the manifest records directory 0 plus
  `ndirs`. Phase 3's stack checks need per-plane comparison against the twin (load
  and `data` per slice, see AGENTS.md's slice-1 caveat), not just the probe.

### Phase 1 — grayscale, single IFD, file-based (done 2026-11-22)
Built from clean on the master-based branch: `make -k distclean` on the old tree, then
`macos/configure && make`, in about 7 minutes. That clean build also confirms the
Phase 0 build-order fix.
- [x] **`FitsTiff`** (`fitsy/tiff.C`) reads directory 0.
  - **What it accepts** (`tiffLoadable`): one sample per pixel, MinIsBlack or
    MinIsWhite, and a sample type from §2.3.
  - **Types:** int8 is widened to BITPIX 16 and uint32 to 64. uint16 is fitsy's
    private BITPIX -16. uint64 and half floats are refused.
  - **Layout:** decodes strips or tiles, clips edge tiles, and checks every strip/tile
    buffer against the rows it must hold.
  - **Orientation 1–8 is applied in the same pass that flips the rows** (`tiffDest`),
    so Phase 4's orientation item is done.
  - **Header:** `CREATOR`, `DATE` (ISO 8601) and `OBSERVER` come from
    Software/DateTime/Artist. COMMENT cards describe the directory, compression,
    predictor and layout, any orientation applied, MinIsWhite, widening and pages
    not loaded, followed by the ImageDescription.
  - **Errors:** a refusal is appended to the Tcl result as `tiff: <reason>`, and
    libtiff's own messages pass through (e.g. `LZMA compression support is not
    configured`).
- [x] **tksao:**
  - `FitsImageTiff`, `Base::loadTiffCmd`, and `Frame::loadTiffCmd` for the mask
    layer, plus the grammar rule `load tiff STRING layerType`.
  - **MemType `PHOTO`:** `FitsImagePhotoCubeNext` steps planes by the header's
    `imgbytes`, which suits a TIFF cube of any BITPIX. That is the plan for Phase 3.
  - **FrameRGB/HLS/HSV** use Base's version, which loads into the current channel.
- [x] **Parser regen, master-specific:** master's checked-in `parser.C`/`lex.C` carry
  `#line "frame/parser.Y"` paths, so on this branch bison and flex must run **from a
  `tksao/`-level scratch copy** (`bison -d -p fr -o frame/parser.C frame/parser.Y`). Run
  from inside `frame/`, as AGENTS.md describes for `load xisf` on `xisf_support`, every
  `#line` changes.
  - From the right level, the no-op run is byte-identical for `parser.C`/`.H`, and
    `lex.C` shows the usual 46 lines of flex churn.
  - The `TIFF_` change to `lex.C` was hand-applied, and what remains against a fresh
    flex output is exactly the no-op churn.
  - No ds9 Tcl code passes a bare `tiff` word to a frame command, so the new keyword
    shadows nothing.
- [x] **Checks** (`Tests/tiff/check_load.py`). Each fixture is loaded with
  `load tiff`, written back with `save fits file`, and compared with its twin;
  BITPIX comes from `get fits header`. Two behaviours of ds9's `save fits` (not the
  reader's) shape the check, and both were confirmed with the FITS twins as controls:
  - **BITPIX -16 is saved as BITPIX 32**, losslessly, whereas the same image loaded
    from a BZERO FITS file saves as 16/BZERO. So BITPIX is checked in memory, not in
    the saved file.
  - **A 1×N image is saved 1-D**, so shapes are compared squeezed.
- [x] **Rendering:** with `scale mode minmax`, `saveimage png` of the TIFF and of its
  twin give the same sha256 for u2, f4, i4, tiled u4, orient6, big-endian f8 and
  MinIsWhite.
- [x] **Mask layer:** `load tiff <file> mask` adds a mask over the loaded image.
  Pre-existing, not TIFF: a *failed* mask load still leaves an empty mask layer
  behind, as failed FITS and NRRD mask loads do.
- [x] **New fixture** `header/texttags_u2.tif`: Software (with an apostrophe, too long
  for one card), DateTime, Artist (with an apostrophe) and a 200-character
  ImageDescription. Now 108 fixtures, 102 loadable.

**A crash, its cause, and how the fix was verified.** The first Phase 1 build crashed
(`ds9-2026-11-22-141214.ips`, `EXC_BREAKPOINT` inside `_xzm_xzone_malloc_freelist`).
That is malloc finding its free list corrupted, the mark of an earlier heap overrun.
- **Cause:** fitsy's `FitsCard::setComment` and `setString` copy into the 80-byte card
  (`new char[80]`) with no length check. `setComment` also writes `NAME = value`
  rather than a FITS COMMENT card.
- **How it overflowed:** the first header code used `insertComment` with 72-character
  chunks. Two of its comments were long enough to need a full chunk (the MinIsWhite
  note, and the Deflate 32946 compression line), so 82 bytes went into an 80-byte
  card.
- **Fix:** `tiff.C` now builds every card itself (`tiffCard`, `tiffComment`,
  `tiffString`), bounded, with quotes doubled as FITS 4.2.1 requires, and the value
  cut short rather than overrunning the card.
- **Verification** under Guard Malloc (`DYLD_INSERT_LIBRARIES=/usr/lib/libgmalloc.dylib`):
  - **Positive control first:** a harness calling the old `insertComment` against the
    real fitsy library faults at a 72-character comment and passes at 70. Plain malloc
    survives it silently, which is how the overflow went unnoticed.
  - **A second bug found that way:** the Phase 0 probe *read* 1536 bytes past a strip
    of `unsupported/rgb_u1_jpeg.tif`, because a subsampled YCbCr strip is smaller than
    rows × width × 3. It now has the loader's size guards and reports
    `decoded strip smaller than its rows (subsampled YCbCr?)`.
  - **Then everything ran clean**: the probe, every load and refusal, the renders and
    a clean exit, with no new crash report.
  - **Launch gotcha:** don't start ds9 through `/usr/bin/nohup` (or any other
    SIP-protected binary), because macOS strips `DYLD_*` variables and Guard Malloc
    silently never loads. Check with `vmmap <pid> | grep libgmalloc`.
- **Open, pre-existing:** the unbounded `setString`/`setComment` stay in fitsy, and
  any caller passing a long value overruns the card. That is worth its own fix.

### Phase 2 — Tcl surface and the option (done 2026-11-22)
Decisions taken (§6): **default `auto`**, and **one TIFF menu item** that follows the
preference.
- [x] **`ds9/library/tiff.tcl`** (new) chooses a reader per file with `TIFFChoose`:
  - **The choice:** `photo` always uses tkimg. `native` uses FitsTiff whenever it can
    load the file. `auto` uses FitsTiff when it can *and* the samples are deeper than
    8 bits or not unsigned (`fitsy tiff loadable` gives `{ok deep why}`). A file
    libtiff cannot open, or the native reader refuses, goes to photo in every mode.
  - **Slice mode is photo only** until Phase 3. **Mask is native only:** the photo
    path has no mask load, and a mask request for a photo-only file is refused with a
    reason.
  - **Native loads go through `ProcessLoad` as `alloc`**, so the C++ command is
    `$frame load tiff {name} alloc {path} ?layer?` (new grammar alternative; the bare
    `load tiff path` stays for scripts). This is NRRD's convention: the name shown,
    then the path read. So stdin, XPA data and SAMP downloads (written to a temporary
    file in `ds9(tmpdir)`, removed afterwards) show the right name.
  - **Everything else needed no special case:** backup, the Windows load-type
    restriction and `ProcessLoadSaveParams` already handle `alloc`.
  - **WCS:** `AVMLoadPhoto` runs after a native load, as after a photo load. It has
    not been tested with a real AVM-tagged TIFF yet (below).
- [x] **Parser:** `ds9/parsers/tiffparser.tac` + `tifflex.fcl` (new). TIFF no longer
  shares `photoparser`. Options come in any order before the file name: `new`,
  `slice`, `mask`, `native`, `photo`, `auto`.
  - Generated by hand with the vendored taccle/fickle: no conflicts, and the lexer's
    token numbers match the `.tab.tcl`.
  - Tested standalone in tclsh, including a quoted file name with a space.
- [x] **`command.tcl`:** `-tiff` takes an optional `native|photo|auto` that applies to
  the TIFFs after it (`file(tiff)`).
  - The base, 3D and RGB loaders call `ImportTIFFFile`, and pass the mask layer
    (`ds9 img.fits -mask -tiff native mask.tif`).
  - HLS/HSV frames still load no TIFF, as before.
- [x] **Wiring:**
  - `import.tcl` (File > Import > TIFF, slice included)
  - `photo.tcl`: `ProcessTIFFCmd` moved to `tiff.tcl`, so `pkg_mkIndex` sees one
    definition
  - `recent.tcl`: type `tiff`, labelled TIFF, reopened through `Import ... tiff`, so
    it follows the preference
  - `backup.tcl`: a native TIFF backed up by copy also points `file,fn` at the copy;
    one from stdin is saved as FITS
  - `ds9.tcl`: `pds9(tiff,mode) auto`. The whole `pds9` array is saved with the
    preferences, and defaults are set before a prefs file is read, so older prefs
    files get `auto`.
  - `mfile.tcl`: a Preferences > File > Menu > TIFF Import cascade (Automatic / Full
    Depth / 8-bit Photo).
  - Drag-and-drop already went through `ProcessTIFFCmd`.
- [x] **Docs:** `command.html`, `xpa.html`, `samp.html`: the syntax, the three readers,
  what is read natively, and examples.
- [x] **Checks:** `Tests/tiff/check_entry.py` (27 checks) drives XPA and relaunches ds9
  for the command line. It tells native from photo by the header comment and BITPIX:
  - XPA by file name: auto, native, photo, slice; 8-bit gray, float, colour, and
    palette (native falls back)
  - the preference, and an explicit mode overriding it
  - mask (native, and the refusal)
  - XPA data in auto and photo, with the temporary file removed
  - the SAMP path, showing its given name
  - recent files (recorded as `tiff`, reopened natively)
  - backup/restore of a native load
  - the command line: `-tiff`, `-tiff native`, `-tiff photo`, `-tiff -` (stdin),
    `-mask -tiff native`

  The check saves and restores the user's recent-files list. `check_load.py` and
  `check_probe.py` were rerun after the grammar change, and the TIFF Import cascade
  was confirmed inside the real Preferences dialog.
- [x] AVM WCS on a native load: done in Phase 3 with the Chandra `trebleclef.tif`.
- [ ] Carried over: "TIFF (full depth)" has no button-bar entry of its own. The
  existing TIFF button follows the preference, as the menu does.

### Phase 3 — RGB, planar, multi-page (done 2026-11-22)
Decisions taken (§6): **an RGB TIFF in a non-RGB frame is one full-depth luminance
image** (.299R + .587G + .114B, the photo path's weights), not a 3-plane cube. **`auto`
stays depth-only:** an 8-bit stack still goes to photo (first page only) unless `native`
is asked for.
- [x] **`FitsTiff` modes** (`fitsy/tiff.{h,C}`):
  - **`TIFF_IMAGE`** (ordinary frame, mask): directory 0, plus every later directory
    that is full resolution (NewSubfileType bit 0 clear) and matches it in size, sample
    type, samples, alpha, photometric and orientation, each as a plane of a cube. An
    RGB directory becomes one luminance plane, computed in double, rounded to nearest
    for integers, stored in the plane's own type. The header counts the planes loaded
    and the directories skipped (reduced resolution, or another size/type).
  - **`TIFF_PLANE`** (slice mode): directory 0 as one plane.
  - **`TIFF_RGB`** (RGB frame): directory 0's R, G and B as three planes, and refused
    for anything that isn't RGB.
- [x] **Decoder:** each strip or tile is decoded once, and every wanted sample is
  scattered to its plane, chunky or planar (a pass per wanted sample over that
  sample's own strips/tiles). Each page re-reads its own strip/tile layout and codec.
  Extra samples are never loaded.
- [x] **What is accepted** (`tiffLoadable`):
  - MinIsBlack/MinIsWhite with one sample plus any alpha (ExtraSamples type 1/2).
    Grayscale with *unspecified* extra samples is multi-band data, and is refused
    rather than cut to band 1.
  - RGB with three samples plus any extra samples.
  - Palette, YCbCr, CMYK and the like stay photo-only, with a reason.
- [x] **tksao:**
  - `FitsImageTiff` takes the mode.
  - `FrameRGB::loadTiffCmd` (with `tiffIsRGB`) sends an RGB TIFF through
    `loadRGBCube(PHOTO, ...)`; a grayscale TIFF still goes to the current channel.
  - `Base::loadSliceTiffCmd` + `load tiff slice {name} alloc {path}` (bison regen at
    the `tksao/` level; no new token, `parser.H` unchanged).
  - A stack's later planes come from `Context::load(PHOTO, ...)` through
    `FitsImagePhotoCubeNext`, as planned in Phase 1.
- [x] **Tcl:** slice mode follows the chosen reader instead of always using photo, and
  recent files keep the mode.
- [x] **Fixtures:** 111 now. Every loadable RGB fixture has a second twin,
  `<name>.lum.fits`, with the luminance of each page, computed in numpy in the
  C++'s order and precision. New fixtures: `pages/stack2_rgb_u2`,
  `rgb/graya_u2_contig` and `unsupported/multiband_u2`. `check_fixtures.py` recomputes
  every luminance twin from tifffile's own reading of the file.
- [x] **Checks:**
  - `check_load.py` now loads every fixture into an ordinary frame (stacks compared as
    whole cubes, RGB against the luminance twin) and every RGB fixture into an RGB
    frame (`save fits rgb cube`, compared with R, G, B): 104 + 14 loads and 7
    refusals, 0 failed.
  - `check_entry.py` gained: a 16-bit RGB in auto → native luminance; an 8-bit RGB →
    photo; a 16-bit stack → a 3-plane cube; an RGB frame filled natively; slice mode,
    native and photo. 31/31.
  - Probe 104/104. The load and probe checks also pass under Guard Malloc.
- [x] **Real file:** `https://chandra.si.edu/photo/2026/trebleclef/trebleclef.tif`
  (154 MB, 16-bit RGB, LZW, AVM WCS for an 864×643 version, so it is rescaled by
  8.33):
  - **Ordinary frame:** BITPIX -16, range 0–65535, loaded in about 2 s.
  - **RGB frame:** three BITPIX -16 channels.
  - **Pixels:** six pixels, coloured ones included, match tifffile's luminance and
    its R, G, B exactly.
  - **WCS:** the AVM WCS gives the same ICRS positions as an astropy WCS built from
    the tags, to 1e-7°, in both frame types. This closes Phase 2's carried-over AVM
    item.
  - Not added to `Tests/`, because of its size and because it is a published image.
- Memory: the luminance path holds the three channels of one directory as well as the
  output, so the Chandra image peaks at about 4× its luminance plane (≈300 MB). Fine
  for now; a per-strip luminance would avoid it if it ever matters.
- The RGB frame takes directory 0 of an RGB stack only. HLS/HSV frames load any TIFF
  into the current channel (luminance for RGB), as Base does.

### Phase 4 — the remaining pieces (done 2026-11-22)
- [x] Orientation 2–8: done in Phase 1.
- [x] stdin/socket/XPA data: done in Phase 2, through a temporary file rather than
      `TIFFClientOpen` on memory. Revisit only if the temporary file proves a problem.
- [x] **Half floats** (SampleFormat IEEEFP, 16 bits) → BITPIX -32. `tiffHalf`
  converts exactly, every half being a float: ±0, subnormals (renormalised),
  infinities and NaN included. It works with the floating-point predictor (3), which
  libtiff undoes before the conversion. The probe folds halves the same way.
- [x] **Packed unsigned depths**, 1–15 bits other than 8 → BITPIX 8 (1–7 bits) or -16
  (9–15).
  - Raw counts, not rescaled; the header says so with the range (e.g. "uint12 ...
    0-4095").
  - `tiffUnpack` reads most-significant-bit first, each row starting on a byte
    boundary (libtiff applies FillOrder before handing the bytes over), into whole
    samples. The existing scatter then places them, so orientation, planar layout,
    tiles, stacks and RGB (luminance or the RGB frame) all work unchanged. A chunky
    12-bit RGB has samples straddling bytes, and is a fixture.
  - Strip and tile row sizes are computed from bits, and every buffer is checked
    against the rows it must hold.
  - `auto` reads 9–15 bits natively (deeper than 8); 1–4 bits stay with photo unless
    `native` is asked for.
  - Signed packed depths are refused. tifffile can't write one, so there is no
    fixture.
- [x] **FITS cards in `ImageDescription`** (`tiffFitsCards`):
  - **What counts as FITS:** every line must be a FITS card (fixed format: an
    8-character A–Z 0–9 _ - keyword, then `= ` for a value card, or COMMENT, HISTORY
    or blank), with at least three value cards. Lines are separated by newlines, or
    are 80-character cards back to back; `END` ends them.
  - **What is merged:** the cards go in right after the structural ones, minus SIMPLE,
    BITPIX, NAXISn, EXTEND, BZERO, BSCALE, BLANK, XTENSION, PCOUNT, GCOUNT, CHECKSUM
    and DATASUM (fitsy writes its own, and the checksums no longer apply). A FITS card
    wins over the CREATOR/DATE/OBSERVER taken from TIFF tags.
  - **When nothing is merged** (the description is kept as COMMENT text, with the
    reason): the cards' NAXIS1/NAXIS2 don't match the image, or the image has an
    Orientation, since either way their pixel coordinates can't be trusted.
  - **Assumption:** a writer that put a FITS WCS in a TIFF stored the rows top-down,
    as TIFF requires, so the row flip back to FITS order makes the WCS line up again.
    The fixtures are built that way, and the centre pixel (CRPIX) lands on CRVAL
    exactly. **No real file of this kind has been found yet**, so the rule is
    deliberately strict.
  - An AVM WCS, applied by `AVMLoadPhoto` after the load, still replaces a merged one.
- [x] **Fixtures** (126; `check_fixtures.py` 126/126):
  - `dtype/gray_f2_none` (moved from `unsupported/`, now loadable),
    `gray_f2_adobe_deflate_predictor`, `gray_f2_special`.
  - `packed/`: 1, 2, 4, 10, 12 and 14-bit grayscale, 12-bit tiled, 12-bit RGB, 1-bit
    MinIsBlack (moved from `unsupported/`) and MinIsWhite.
  - `header/`: `fitscards_newline_u2` and `fitscards_80_u2` (merged, with a TAN WCS,
    a quote in OBJECT and a DATE that overrides the TIFF DateTime; their twins carry
    the same cards), `fitscards_badnaxis_u2` (not merged), `imagej_u2` (not FITS).
  - tifffile writes packed depths only uncompressed, so no fixture combines packing
    with a codec. libtiff decompresses before the unpacking, so that path is the same.
- [x] **Checks:**
  - `check_load.py` maps float16 to BITPIX -32. It also requires a merged file's ds9
    header to carry the twin's OBJECT, EXPTIME, DATE and WCS keys, and an unmerged
    one to have no OBJECT.
  - `tiff.sh`'s probe gained the sky at the centre pixel, so the merged WCS is
    checked against the twin's in the shell suite too.
- [x] Docs: the command/xpa/samp pages now say what is read natively. That paragraph
  had still described Phase 2 (grayscale only, slice always photo).

### Phase 5 — platforms and suites (macOS done 2026-11-22)
- [x] **`Tests/tiff.sh`**, shell only, on the `asdf.sh` model, and added to `io.sh`.
  - **Modes:**
    - `command`: every fixture with `-tiff native` (smoke test)
    - `xpa`: every fixture loaded with `tiff native`; the probe (size, depth, three
      pixels, min/max of every slice) is diffed with `<file>.sav`
    - `rgb`: every RGB fixture in an RGB frame, each channel probed against
      `<file>.rgb.sav`
    - `baselines`
  - **Baselines come from the FITS twins**, never from a TIFF load (`.lum.fits`
    loaded with `fits` for an RGB fixture, the twin loaded with `rgbcube` for the
    RGB frame), so a reader bug can't write its own baseline. A fixture the native
    reader refuses has no twin; its baseline is a `tiff photo` load, which is where
    `native` falls back.
  - **Result:** command PASSED, xpa 111/111, rgb 14/14.
  - **Two fixture changes the suite needed**, both checked by `check_fixtures.py`
    (111/111) and every other check:
    - Stack pages now have ranges of their own (integer page k divided by k+1,
      float page k multiplied by k+1). `xpaget data` always reads slice 1, the
      pixel table needs real mouse motion, and `pattern()` gives every page the
      full range, so per-slice min/max was the only way to tell the slices apart.
    - uint32 twins are int64 (BITPIX 64). With astropy's BITPIX 32 + BZERO, ds9
      printed scaled values in `%g` form (`6.74594e+08`), which a text baseline
      can't match against the native load's exact integers.
  - BITPIX isn't in the probe: a BZERO twin reports 16 where the native load
    reports -16, and the pixel values carry the depth instead.
- [x] **Smoke tests in the shared runners** (the HiPS commit's pattern):
  - **`command.sh`:** `-tiff` alone, `native`, `photo` and `auto`; 16-bit RGB; a
    stack; `-mask -tiff native`. Passes, with no error in the log.
  - **`xpa.sh`:** native/photo/piped data with BITPIX and a pixel; 16-bit RGB as
    luminance; stack depth; RGB frame, green channel; native slice depth; native
    mask. The output is diffed against `xpa/tiff.xpa`, written by hand from the
    twins' values. Passes, as does the `file` section (`file photo ...` goes through
    `ProcessTIFFCmd`).
  - **`samp/tiff.samp`:** native/photo BITPIX, the SAMP file-URL path (`set file:...
    tiff`), stack depth, and an RGB frame. Run against a live ds9 through a real hub,
    every command returns `samp.ok` with the expected values. `samp.tcl` sources
    ds9's client code from `/scratch1/...` (another machine), so it was run from a
    copy with those six paths pointed at this checkout. `samp.tcl` itself is
    unchanged.
- [x] **`check_load.py`** makes a frame first if ds9 has none. Found by running it
  after the SAMP test had deleted every frame, when all 111 failed.
- [x] **`Manifest.md`** note (9): fitsy depends on tkimg's `tifftcl`, by stubs, built
  after tkimg.
- [x] **Linux and Windows build in CI** (SAOImageDS9/SAOImageDS9#457, 2026-11-22). All
  eight jobs pass: Ubuntu, Windows (Cygwin/mingw), and macOS Intel, ARM and Universal.
  - **No warnings in new code:** `tiff.C` compiles with no warning under `gcc -Wall`
    (Ubuntu) and `x86_64-w64-mingw32-gcc -Wall` (Windows). So the include order and
    `tifftcl.h`'s relative `../compat/libtiff` path both work there.
  - **The only warnings in a touched file** are two `-Wstringop-truncation` warnings
    in `fitsimage.C`'s `strncpy(str,"XLON-",5)`. They're pre-existing (lines
    1153–1160 on master, from 2024) and only moved down because `FitsImageTiff` was
    added above them.
  - **The build order holds on a clean Windows build:** tkimg's TIFF module (20:45:05)
    is built before fitsy's `tiff.C` (20:45:20).
- [ ] Run `tiff.sh` and the Python checks on Linux and Windows.

---

## 5. How to verify each step

1. **Pixel equality against the twin**: load `x.tif` and `x.fits` into two frames and
   compare `xpaget ds9 data` blocks, or `saveimage` sha256 with matching scale limits.
   Byte-exact for integer types, exact for float.
2. **Independent cross-check** on uncompressed, single-strip fixtures: the `-array ...skip=`
   load from §1.3, flipped, must agree with `native`.
3. **Header**: `xpaget ds9 fits header` shows BITPIX matching §2.3, NAXIS3 for
   stacks/RGB, and the tag COMMENTs.
4. **Regression**: `-tiff photo foo.tif` (and the default, when the preference is `photo`)
   gives the same `saveimage` sha256 as the current build, for 8-bit RGB fixtures.
5. Keep the AGENTS.md rules in mind: launch with `xpans` on `PATH`, avoid modal dialogs,
   clean up crash-recovery files, and exit with `xpaset -p ds9 exit`.

---

## 6. Open decisions

1. ~~**Default mode**~~: settled 2026-11-22: `auto`. It changes what an existing
   16-bit TIFF shows, from 8-bit luminance to real values, which is the point. A
   script that relies on 0–255 can ask for `photo` (or set the preference).
2. ~~**RGB in a base frame**~~: settled 2026-11-22: one full-depth luminance image.
3. ~~**Menu**~~: settled 2026-11-22: one TIFF item that follows the preference.
4. ~~**Branch**~~: settled 2026-11-22. `tiff16_support` is cut from `master`, so it
   stays independent of the unmerged XISF work.
