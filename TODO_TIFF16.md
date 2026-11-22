# Native full-depth TIFF import — review and phased TODO

Plan for teaching DS9 to read TIFF pixels **at their stored depth** (16-bit integer,
32-bit integer and float, signed or not), alongside today's 8-bit photo path. Written
2026-11-22 on the `xisf_support` branch. The plan follows the pattern that XISF used
(`TODO_XISF.md`, `fitsy/xisf.{h,C}`): a `FitsFile` subclass in `fitsy/`, a `load tiff`
verb in tksao, and a small Tcl surface. Check items off as they land and add findings
inline, as the other TODO files do.

**Status (2026-11-22): Phase 0 is done; the next step is Phase 1.** Work is on the
`tiff16_support` branch, in both this repo and `Tests/`, **cut from `master`**.
**XISF references in this file** (`fitsy/xisf.C`, `TODO_XISF.md`, `framergb.C`'s RGB load,
the `load xisf` parser recipe) **point at the `xisf_support` branch**, not at master: XISF
is the model this work copies, and it has not merged yet.
**Phase 0 was built and measured on an `xisf_support` tree** carrying these same
changes. The port to master was only syntax-checked (tiff.C and tclfitsy.C against
master's headers). The first full build of this branch, the probe run, and a no-op
parser regen against *master's* `lex.C`/`parser.C` are still to do.
- **libtiff is reachable from fitsy through the tifftcl stubs.**
  `fitsy/tiff.{h,C}` has a probe, `tiffProbe()`, and tclfitsy exposes it as
  `fitsy tiff info|decode <file>`.
- **All 101 loadable fixtures decode inside ds9**, with exact min/max/sum against the
  manifest (`Tests/tiff/check_probe.py`).
- **Nothing loads into a frame yet.** That is Phase 1.

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
| IEEEFP 16 (half) | -32 | convert on read; rare, so v1 may reject it |
| UINT 1/2/4/12/… | — | reject in v1 with a clear message. 12-bit packed exists in some camera/microscopy TIFFs and is a possible later phase |
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
- **Possible later item:** some capture tools write FITS cards into `ImageDescription`.
  If it parses as 80-column cards, merge them as XISF merges `<FITSKeyword>`. Look for
  real examples before building this.
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

### Phase 1 — grayscale, single IFD, file-based (the core ask)
- [ ] `FitsTiff`: open, read tags, check them against §2.3/§2.5, decode strips or tiles,
      flip rows, build the header.
- [ ] `FitsImageTiff` + `loadTiffCmd` + the `load tiff` grammar rule. Exercise it raw over
      XPA: `echo '$::current(frame) load tiff {/path/f.tif} {} {} {}' | xpaset ds9 tcl`.
- [ ] Check: `xpaget ds9 data image x y w h yes` and pixel values against the FITS twin;
      `saveimage png` sha256 against the twin loaded the same way.

### Phase 2 — Tcl surface and the option
- [ ] `tiff.tcl`, `tiffparser`, the preference, the menu items, drop/open, recent-files
      (`RecentAdd`), backup.
- [ ] `auto` mode probe: either a tiny `$frame get tiff info fn` C++ query, or a Tcl read
      of the first IFD (tag 258/339/262 only). The C++ query is cleaner.
- [ ] AVM WCS through `AVMLoadPhoto` after the native load. Test with an AVM-tagged
      16-bit TIFF.

### Phase 3 — RGB, planar, multi-page
- [ ] RGB into an RGB frame (all three channels) and into a base frame as a 3-plane cube.
- [ ] Multi-IFD stacks as cubes, skipping reduced-resolution pages; `slice` mode.
- [ ] `mask` layer load.

### Phase 4 — the remaining pieces
- [ ] Orientation 2–8, if not already done in Phase 1.
- [ ] stdin/socket/XPA data through `TIFFClientOpen` on memory.
- [ ] Half-float, packed 12-bit (only if a real user file needs them).
- [ ] FITS cards in `ImageDescription` (only if real examples turn up).

### Phase 5 — platforms and suites
- [ ] `Tests/tiff.sh`, which reproduces every baseline from the FITS twins (same shape as
      `Tests/xisf.sh`). Add it to `Tests/all.sh`. **`Tests/` is a separate repo.**
- [ ] Linux and Windows builds in CI. On Windows, the stubs and include path go through
      `win/Makefile.in` and `ds9/win/Makefile.in`.
- [ ] Note in `Manifest.md` that fitsy now depends on tifftcl.

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

1. **Default mode**: `auto` (recommended) or `photo` (pixel values unchanged for existing
   scripts). `auto` changes what an existing 16-bit TIFF shows, from 8-bit luminance to
   real values, which is the point. It would still surprise any script that relies on
   0–255.
2. **RGB in a base frame**: 3-plane cube (recommended, lossless) or a full-depth luminance
   mix (what the photo path does at 8 bits).
3. **Menu**: a separate "TIFF (full depth)" item, or one TIFF item that follows the
   preference.
4. ~~**Branch**~~: settled 2026-11-22. `tiff16_support` is cut from `master`, so it
   stays independent of the unmerged XISF work.
