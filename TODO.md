# Native ASDF Support — Phased TODO

Working plan for `ASDF_NATIVE_SUPPORT_DESIGN.md`, broken into the same phases as that
document's §11, with concrete engineering steps under each. Check items off as they land;
add findings inline rather than in a separate log, so this file stays the single source of
truth for where things stand.

## Current state — read this first (as of 2026-09-17)

A summary written deliberately for someone (or some future session) picking this up cold.
Detail lives in the phase sections below; this is the map.

### What works today

- **Phases 0–4 and Backup/restore: complete.** Reading Roman ASDF natively — arbitrary
  array paths, all four block codecs (`none`/`zlib`/`lz4`/`bzp2`), both mask forms with FITS
  integer-null semantics, GWCS via AST, header viewer, XPA/SAMP/CLI, menus, buttonbar, docs,
  portable backup/restore.
- **`WCS_TEST_PLAN.md` is fully executed: 76 PASS / 1 GAP / 1 BY DESIGN** across its 78
  matrix rows (counted from the rows themselves; the older "77 PASS / 3 GAP" tally
  totalled 80 and had drifted). The one remaining GAP is C-9, the ruler in angular
  units, which is R10. H-7 is the BY DESIGN one — see below.
- **L3 coadds work**, via a `fitswcs_imaging` → FITS-card translation in `asdf.tcl`
  (`f59e6a180`) plus `FitsImage::wcsCards_` in tksao so the cards survive `resetWCS()`.
- **The container reader is C++**, in `fitsy/asdf.{h,C}` — see "The C++ port" below.
- **All three platforms are validated**, not just built: the fixture suite passes on
  macOS, Linux and Windows/mingw. Windows needed four build fixes (`7d722dbef`); see
  Phase 0, and one more for the C++ port (`601ff9737`) — see below.
- **A real test suite** in the sibling `Tests` repo, wired into its `io.sh`. 192 fixtures:
  `arrays/int16_cube3` came with the port and the six under `asdf/malformed/` with the
  review fixes. `asdf.sh` also has a `mask` phase now, for the frame state a single-file
  probe cannot see.

### The C++ port (2026-09-18)

The container reader moved out of Tcl and into `fitsy/asdf.{h,C}`, which is where the
design doc always put it (§8.1 — the Tcl version was a deliberate detour, taken to avoid
regenerating `tksao/frame/lex.C`). Two classes: `FitsAsdfFile` for the container (magic
line, YAML tree, ndarray enumeration, block reads, all four codecs) and
`FitsAsdf : FitsFile` for one named array (widening, mask → BLANK/NaN, its own
`FitsHead`). The frame reaches it through a new `load asdf {name} {file} {path} layer`
command, exactly as `load nrrd mmap` reaches `FitsNRRDMMap`.

`ds9/library/asdf.tcl` lost 725 lines and kept 202: what is left is the GWCS subtree
extraction and the UI/scripting plumbing. It reaches the same C++ reader for the tree
text, the array listing and a single block through `fitsy asdf tree|arrays|block`, added
to `tclfitsy` — so the format has one implementation, not one for pixels and another for
metadata.

Worth not re-deriving:

- **The file is no longer read whole.** The Tcl reader had to hold all of it in a Tcl
  string to reach a block, so a 197MB Roman product cost ~197MB of byte array plus a
  second copy for the decoded block. `FitsAsdf` seeks.
- **The flex risk that motivated the Tcl detour is characterized, not fatal.**
  `/usr/bin/bison` 2.3 reproduces the checked-in `parser.C` byte-identically. The local
  flex differs from whatever produced `lex.C` only by a 45-line skeleton type-width churn,
  always the same 13 hunks — so: regenerate, reverse-apply that no-op diff hunk by hunk,
  and the result carries nothing but the new keyword's DFA tables. Verified by diffing
  before installing it. Adding the token alphabetically renumbers every token, which is
  why `parser.C`'s diff is ~11k lines for a one-line grammar change; that is inherent to
  bison, not a sign anything went wrong.
- **A cube needs a next-slice reader, and nothing tested that.** DS9 presents a rank-3
  array as a chain of one-plane images: `Context::load` asks for `nhdu()-1` of them, and
  the new `MemType` fell through that switch's `default`, leaving a NULL that
  `next->isValid()` dereferenced — an outright segfault on `roman/amp33`. `FitsAsdfNext`
  fixes it. The suite had one rank-3 fixture, `arrays/int16_plane1`, and it is depth 1,
  which never asks for a slice at all and passed throughout. `arrays/int16_cube3` (three
  planes, each offset by 10000) is the regression test; its planes were verified against
  an identically-shaped FITS cube, per-slice, through `scale limits`.
- **`tclasdf/` is gone.** `asdflz4decompress`, `asdfbz2decompress`, `asdfconvert` and
  `asdfmask` existed only for the parts of the Tcl path too slow in Tcl; all four are
  inside `fitsy/asdf.C` now. Removing the package meant unwinding it from six places
  besides the directory itself: the build order in `{unix,macos,win}/Makefile.in`, the
  target/clean/distclean rules in `make.include`, `tclasdf_LIB_SPEC` in each
  `ds9/*/Makefile.in`, `TEA_PATH_CONFIG`/`TEA_LOAD_CONFIG` in each `ds9/*/configure.ac`
  **and the ~255-line block each of those generated into `ds9/*/configure`** (hand-edited,
  since there is no autoconf on this box — the same way the block was added), the
  `Tcl_StaticPackage` registration in each `ds9/*/ds9.C`, and the `Manifest.md` row.
  `liblz4`/`libbz2` stay: fitsy's reader is their consumer now.
- **A trailing length-1 axis is already collapsed.** `arrays/int16_plane1` is shape
  `[1, 64, 64]` and loads with `NAXIS = 2` and no `NAXIS3` - `FitsHead(w,h,d,bitpix)`
  writes `NAXIS` as `depth>1 ? 3 : 2`, so depth 1 never produces a third axis and never
  opens the Cube panel. Checked on the synthetic header itself, not inferred. Only a
  genuine depth > 1 array (`int16_cube3`, `roman/amp33`) is a cube.
- **The Cube panel is sticky.** `LoadUpdate` opens it when `has fits cube` and nothing
  ever closes it, so after one cube every later load in that session still shows it -
  identical for FITS, and easy to mistake for "everything is opening as a cube".
- **`xpaget data image x y 1 1` always reads slice 1**, for FITS as much as for ASDF. It
  is the wrong probe for per-slice verification; `scale limits` under `scale mode minmax`
  is a right one.
- **Windows found one portability bug the other two platforms cannot.**
  `include/bzlib.h` includes `<windows.h>` under `_WIN32`, whose `rpcndr.h` typedefs
  `byte` and then uses a bare `byte` in `wtypesbase.h`/`objidl.h`/`oaidl.h` and more.
  C++17 has `std::byte`, so with a using-directive for `std` already in effect every one
  of those is ambiguous and mingw's gcc dies inside `windows.h`, before reaching any of
  our code. Fixed by including the codec headers before `<string>`/`<vector>` and before
  any fitsy header — the fitsy half matters too, since `card.h` carries its own
  `using namespace std` and both `head.h` and `file.h` reach it. `file.h` declares
  `parseNRRD(istream&)` unqualified, so the directive must still precede `asdf.h`, which
  pins the order from both ends. `fitsy/asdf.C` says so at the top; do not tidy it.
- **A crashed ds9 leaves `~/<title>.auto` behind**, and the next instance with that title
  opens a modal "Found Auto Backup, restore?" (`AutoSaveRestore`) that nothing can
  dismiss from a script: it registers with XPA and then answers nothing. `xpaaccess`
  says yes, every `xpaset` says "no response from server during handshake". Delete the
  file. Relatedly, `set pds9(confirm) 0` through the `tcl` entry point stops `Error`/
  `Warning` from opening dialogs at all.

### The review pass (2026-09-19)

Six findings against the port, all reproduced before being fixed (`1264369ed`). The two
worth remembering as *classes* of mistake rather than as individual bugs:

- **A layered load ran the image's post-load work.** `AsdfLoadArray` attached the WCS and
  cached the YAML tree against `$current(frame)` whatever layer had just been loaded, so
  an ASDF mask from a same-grid file moved the displayed image's coordinates and made the
  header viewer show the mask product — or, over a FITS image, show YAML for a file with
  a real FITS header. Everything after `ProcessLoad` is image-only now. The general
  lesson: `layer` is consulted on the way *in* to the load and was then forgotten, and
  nothing downstream re-checks it.
- **`BLANK` is an `int` all the way down** — `FitsImageHDU::blank_` and `FitsData::blank_`
  both — so an `int64` sentinel outside that range was truncated and stopped matching the
  pixels it marked, turning nulls back into data. The port inherited this from the Tcl
  version and I kept it deliberately for parity; parity with a broken behaviour was the
  wrong call. `int64` now takes its BLANK candidates from the `int` extremes, a masked
  value that does not fit falls through to them, and a scalar mask that does not fit is
  declined rather than truncated.

The rest: block sizes and the shape product are overflow-checked (they come straight off
disk, and `uLong` is 32-bit on Windows); the `#ASDF-FITS-WCS` sentinel is stripped before
the cards are parsed and cached, instead of being taken as a keyword on every
`resetWCS()`; and mask decode failures reach the user through `internalError` rather than
being dropped.

Two testing notes from it:

- **`xpaset ... tcl` evaluates a line at a time.** A `;`-separated one-liner fails with
  `wrong # args`; send a newline-separated script. It also returns nothing, so a value
  has to come back through a file.
- **`block <n>` is relative; `block to <n>` is absolute.** The grammar
  (`ds9/parsers/blockparser.tac`) is `numeric {Block $1 $1}` against
  `TO_ blockTo {ProcessCmdSet block factor ...}`, so `block 2` then `block 1` multiplies
  by 2 and then by 1 and leaves the factor at **2**, not 1. `frame new` also inherits the
  current frame's factor, so a fresh frame is not necessarily at 1. Between them these
  produced a confident and completely wrong measurement here — that sky position does not
  survive a block round trip for any WCS source. It does: with `block to 2` then
  `block to 1`, from a known starting factor, plain FITS cards, a GWCS ASDF and the L3
  coadd's synthesized cards all return the identical sky position. That round trip is
  therefore a good `resetWCS()` persistence check, which is what it was reached for.

### A default array is not always called `data`

`-asdf file.asdf` with no `:path` used to resolve only `data`, `roman/<key>` or a unique
tail match, and refuse anything else with *"ambiguous or unknown array data"*. A file whose
single array is called something else — `picture`, in the report that turned this up — was
refused from the command line **while opening fine through File → Open As → ASDF**, because
`AsdfPathDialog` has always taken the sole loadable array and nothing else knew that rule.
`AsdfDefaultPath` now applies it everywhere: prefer `data`, else the only loadable array,
else say so. A key the caller *did* supply is still resolved strictly — guessing a
different array because the requested one is absent would load the wrong pixels silently.
Fixture: `arrays/named_picture`.

This is the third instance of the same shape of bug — the GUI route works and a
non-GUI route quietly does something else (see also the `CommandLineLoad` gap, and the mask
layer running the image's post-load work). **When adding an ASDF entry point, check what
the dialog path already does that the new one will not.**

### Channel-last image arrays — DS9 already handles this, no ASDF work needed

The same file exposed a second thing. Its array is `[333, 151, 4]` — an RGBA picture, 333
high by 151 wide by 4 channels — and the rank-3 rule reads `(nplane, ny, nx)`, FITS cube
order, so it first appears as a 4×151 image of 333 planes. Correct per row-major, useless
in fact.

**The answer is DS9's existing axis reordering**, not anything in the ASDF reader:
Cube → Axes Order in the GUI, `cube order 231` / `cube axes 231` / a bare `cube 231` in the
grammar (`cubeparser.tac`, one of 123/132/213/231/312/321 — no spaces). For `[333,151,4]`,
`231` gives a 151×333 image of 4 planes, which renders the picture correctly. Note the
setting is a *global preference* that survives across loads, so a file loaded after one
reorder comes out already reordered.

Do **not** add an auto-detect heuristic. "Trailing dimension of 3 or 4 means channels"
would break real Roman data: `roman/border_ref_pix_left` is `[10, 4096, 4]` and is not
RGBA. DS9's precedent for FITS is the same — the user declares an RGB cube (`-rgbcube`)
rather than DS9 guessing.

**Caveat, and it is upstream DS9, not ours:** `cube order`/`cube axes` is a *no-op over XPA
and the command line*. `cubeparser.tac:69` is `ProcessCmdSet cube axes $1` with no callback
argument, so it sets `cube(axes)` and never calls `CubeAxes`, which is what the menu's
radiobuttons invoke. Confirmed on a plain FITS cube with no ASDF involved: after
`xpaset ds9 cube order 231`, `xpaget ds9 cube axes` reports 231 while size and depth are
unchanged; calling `CubeAxes` by hand then applies it. This branch has never touched
`cube.tcl` or `cubeparser.tac` (the only diff against master is the taccle version banner
in the generated `.tcl`).

### Tables — analysed, not started

ASDF files also carry tables: Roman source catalogues, and per-product metadata tables (the
L3 coadd holds 18). `ASDF_TABLES_DESIGN.md` is the analysis. The headline, so it does not
have to be rediscovered:

- **The catalog surface is far cheaper than Prism**, which is the reverse of the intuition.
  Catalog readers are pluggable — `CATLoadFn` calls `$reader $db $fn` — and `catfits.tcl`,
  the whole FITS-table catalog integration, is 45 lines. Prism's *import* path takes the
  identical reader contract, so one `ASDFRead {t fn}` filling a starbase array serves both,
  and every downstream feature (symbols, filter, sort, region export, match, plot,
  histogram) is already written against that array.
- **Real Roman tables are `astropy/table/table-1.3.0`, one block per column** — not the
  structured-ndarray form. Zero structured dtypes across all eight sample files, so
  `arrays/struct2d` should stay refused rather than driving the design.
- **The container reader already finds the data**: 136 of the coadd's 146 enumerated nodes
  are table columns, with correct paths, datatypes and shapes. Nothing in `fitsy/asdf.C`
  needs to change to *locate* a table.
- **The blocker is test data.** Every table in our samples is one-row metadata; the coadd's
  `source_catalog` key is pipeline log text. A real Roman `*_cat.asdf` needs downloading
  before any of this is worth building.

### Masks

An ASDF array can be loaded into a frame's mask layer, so a quality array can be laid over
the science array it belongs to — `roman/dq` over `roman/data` being the case this was
built for. Reachable three ways, all verified by comparing rendered PNGs before and after
(the mask is only observable in the render; the frame keeps reporting the *image* as its
file, which is correct for an overlay):

- **Analysis → Mask Parameters → File → Open as → ASDF** (`mask.tcl`). The dialog's own
  Open menu lists the formats a mask can come from, and ASDF was missing from it; that
  was a one-line menu entry, since `OpenDialog`'s dispatch already handled `asdf` and
  `layer == mask` independently.
- **XPA/SAMP `asdf mask <file>[:<path>]`**, added to the grammar as an `opts` alternative
  the way `nrrd` and `array` do it. `AsdfCmdLoad` and `LoadAsdfFile` already took a layer
  and passed it through, so nothing below the parser changed.
- **`-asdf -mask <file>[:<path>] -nomask`** on the command line, which already worked: the
  generic `-mask` switch sets `file(layer)` for whatever format follows. Verified to
  produce a render byte-identical to the XPA route.

`mask mark`'s default is NONZERO, which is exactly what a data-quality array wants, so a
dq mask needs no threshold set by hand.

### RGB, HLS, HSV, 3D and multi-color frames

An ASDF array loads into the current channel of an RGB/HLS/HSV frame, and into a 3D or
multi-color frame, exactly as a FITS image does. **XPA and SAMP always worked** — verified
before changing anything, all four frame types, every channel.

**The command line did not**, and the failure was silent. `CommandLineLoad` dispatches on
the *current frame's type*, and only `base` and `multicolor` route to
`CommandLineLoadBase` — the one proc that had an `asdf` case. `CommandLineLoadRGB`,
`CommandLineLoadT` (hls/hsv) and `CommandLineLoad3D` each carry their own
`switch -- $file(type)` listing every format they accept, and `asdf` was in none of them,
so the filename fell through with no load and **no error**. Each now has an `asdf` case
mirroring its own `fits` case (3D wraps it in `MultiLoad`, the others do not).

Two things this turned up that are worth not re-deriving:

- **`multicolor` was never broken.** It routes through `CommandLineLoadBase`, so it
  already had the case. Its "a second load makes a second frame" behaviour is identical
  for FITS, i.e. it is `MultiLoad`'s general behaviour and not an ASDF gap.
- **A GUI route working tells you nothing about the CLI.** The GUI goes through `Open`,
  which never touches these three procs. That is exactly how this stayed hidden.

### The upstream AST branches

`ast_upstream/` carries the nine fixes in two shapes, so the maintainer can take whichever
suits:

- **Nine single-issue branches**, `fix/yamlchan-*`, each one commit off `master` with its
  own regression test and fixtures. One PR per issue.
- **`fix/yamlchan-asdf-all`**, the same nine commits on one branch, in the order
  libyaml → healpix → linear1d → gettime → azp → ortho → earthlocation →
  asdf-standard-header → ceilings. One PR to cherry-pick from, which avoids nine
  overlapping PRs against the same two files.

The nine are deliberately **independent**: every branch's test fixtures use schema versions
`master` already accepts, so no commit depends on the ceilings bump and any subset can be
taken in any order. Verified by building and running the yamlchan test at *each* of the
nine commits — all pass individually — plus the full `ctest` at the tip: **2444/2444**, with
all 16 yamlchan tests. `src/yamlchan.c` never conflicted (the fixes are in different
functions); only `ast_tester/testyamlchan.c` did, and only because each commit appends a
declaration, a call and a function in the same three places.

Build tools are not on this box by default. `mamba create -n astbuild cmake pkg-config yaml`
then `cmake -S ast_upstream -B <dir> -DCMAKE_PREFIX_PATH=$CONDA_PREFIX -DBUILD_TESTING=ON`
is enough; conda lives at `$HOME/miniforge`.

### Overlap with upstream AST PRs (reviewed 2026-09-22)

Our nine are PR **#91**. Checked against every open PR on Starlink/ast; the ones that
matter are **#66** (embray, misc YamlChan fixes), **#88** (= #66's 13 commits **plus** two
adding `fitswcs_imaging`) and **#67** (embray, libfyaml backend). #80/#81 are timj's
cmpmap/ChebyMap work and touch no yamlchan at all.

| our fix | status |
|---|---|
| 1 LibYamlWriter `size_t` | **duplicated by #67**, which renames it `AstYamlWriter` and uses `size_t` |
| 2 HEALPix recognizers | **unique** — `IsASkyProjection` still omits both in #66/#67/#88 |
| 3 ReadLinear1d | **duplicated by #88, and theirs is better** — see below |
| 4 GetTime epoch prefix | **unique** — all three still test `format`, not `value` |
| 5 zenithal_perspective → AZP | **unique** — `AST__AZP` appears nowhere in any PR |
| 6 ortho_polynomial basis | **unique** — `polynomial_type` still write-only everywhere |
| 7 MAKE_TEST ceilings | **duplicated by #88** — we raise 53, they raise 52, and they overlap on all but `NDArray` |
| 8 earthlocation prefix | **duplicated by #88**, equivalently (they keep the `-`, we match both spellings) |
| 9 ASDF standard header | **unique** — no PR emits `#ASDF_STANDARD` |

**Withdraw our linear1d commit.** Theirs fixes a second bug we missed: the ASDF property is
`intercept`, not `offset`, so master was reading the default 0 for every linear1d. Our
fixture sets *both* `intercept: 0.0` and `offset: 7.0`, so it passes against `offset` and
**fails against their fix** — verified by building #88 with our test and fixture only:
`linear1d(0): got 0 expected 7`. Ours is not merely redundant, it would break their build.

**The ceilings need a merge, not a choice.** Only two classes differ: they set
`Concatenate` 1.6 where we set 1.4 (take theirs), and we set `NDArray` 1.2 where they leave
1.1 (the one line of ours worth keeping). They also add `Fitswcs_Imaging`, which master
lacks.

**If #88 lands first**, `src/yamlchan.c` conflicts only for those three duplicates; the
other six conflict solely in `ast_tester/testyamlchan.c`, which #88 restructured heavily —
mechanical test-registration conflicts, not semantic ones. `libyaml-writer-size-t` applies
clean.

**#88 also makes a DS9 workaround retirable.** It reads *and* writes
`gwcs/fitswcs_imaging` natively, via the full shift/affine/scale/projection chain, correct
for zenithal projections including gnomonic/TAN. That is exactly the tag
`AsdfFitsWcsImagingCards` translates to FITS cards by hand for L3 coadds
(`ds9/library/asdf.tcl`). When #88 lands and the vendored AST is updated, that translation
and `FitsImage::wcsCards_` can both go — and #88's version is more general than ours, which
only ever handled gnomonic.

### The AST bugs — eight fixed locally, two open

All in `ast/src/yamlchan.c` unless noted. `ast` is already marked `dirty` in `Manifest.md`.
**All are upstream Starlink code, not ours**, and all should go upstream together. Item 9
is a finding about the ecosystem rather than a defect.

1. **`LibYamlWriter` signature — FIXED (`8064e7408`).** Declared its size argument
   `long unsigned int` where libyaml's `yaml_write_handler_t` uses `size_t`. Identical on
   LP64, different on LLP64 (mingw: `long` is 32 bits), and only *fatal* from GCC 14, which
   promoted `-Wincompatible-pointer-types` to an error. Its sibling `LibYamlReader` already
   used `size_t`. Breaks any Windows build of AST with YAML enabled.
2. **Both HEALPix projections were dead code — FIXED (`a78206bf2`).**
   `ReadSkyProjection()` has `/healpix-` and `/healpix_polar-` branches, but
   `IsASkyProjection()` ORs six family recognizers (conic, cylindrical, pseudo-conic,
   pseudo-cylindrical, quad-cube, zenithal) and HEALPix is in none of them, so neither tag
   was ever recognized and both loaded with no WCS.
3. **`ReadLinear1d()` read an uninitialized variable — FIXED (`2cf57a92a`).** It set
   `outa = offset`, overwrote it with `outa = 2*offset`, and never assigned `outb` before
   passing `&outb` to `astWinMap()`. Every `linear1d` was built from stack garbage:
   arbitrary and not reproducible.
4. **`GetTime()` tested the wrong string for its epoch prefix — FIXED (see below).** Each
   branch read `strncasecmp( format, "B", 1 )` where it plainly meant `value` — asking
   whether the *value* already carries the prefix. Since `"jyear"` itself begins with a
   `j`, every branch was dead, so an equinox of `2000.0` reached `astUnformat()` with the
   TimeFrame's default format and was read as **MJD 2000, i.e. 1864** — about 1.8 degrees
   of precession from J2000. Affected `byear`, `jyear` and `jd`; `mjd` escaped only because
   it is the default. This is why the FK4/FK5/ecliptic frame fixtures were silently
   *wrong* rather than failing outright.
5. **`zenithal_perspective` mapped to the wrong projection — FIXED.**
   `ReadSkyProjection()` sent it to `AST__SZP` with `pv1=mu, pv2=gamma`; those are AZP's
   PV2_1/PV2_2, while SZP's 2nd and 3rd parameters are phi_c/theta_c, so gamma arrived as
   phi_c. The writer had the matching half: **two `type == AST__SZP` branches**, the second
   — writing mu and gamma for `zenithal_perspective` — unreachable, so `AST__AZP` was never
   wired up in either direction. One token in each place.

   Verified twice. Upstream, by a round trip: an AZP WCS built from FITS cards through a
   FitsChan, written as ASDF and read back, gives identical sky positions (and the write
   fails outright without the change). Locally, against the fixture's own twin:
   `Tests/asdf/gwcs/zenithal_perspective.asdf` was **4195″ (1.17°)** from
   `Tests/wcs/1904-66_AZP.fits` and is now **0.0250″**, which is the same FK5→ICRS frame
   bias every other projection in that set shows. That makes it 26 of 27 verified.
6. **`ortho_polynomial` ignored `polynomial_type` on read — FIXED.** `ReadPoly()` is
   called with `isortho=1` and went straight to `astChebyMap()`; the field was never read
   on input, only ever *written*. The schema makes it **required** with enum
   `[chebyshev, legendre, hermite]` (checked in `asdf_transform_schemas`, all three of
   `ortho_polynomial-1.0.0/1.1.0/1.2.0`), so a legendre or hermite polynomial was read with
   entirely different basis functions — the same silent-wrongness class as bug 4.
   Measured before the fix, with three fixtures identical but for that one field and a
   single degree-2 term (`c[2][0] = 1`, value `10 + f2(x)`), at x = 0.3:

   | declared | correct | AST returned |
   |---|---|---|
   | chebyshev, `T2 = 2x²−1` | 9.180° | 9.17999° |
   | legendre, `P2 = (3x²−1)/2` | 9.635° | 9.17999° |
   | hermite, `H2 = 4x²−2` | 8.360° | 9.17999° |

   Fixed by reading the field in `ReadPoly()` and erroring unless it is `chebyshev`,
   naming the basis. **Deliberately lenient when the field is absent** (defaults to
   chebyshev): that only ever turns a silently-wrong read into an error, never a working
   read into one. Verified after the fix on files written by astropy itself — a Legendre2D
   is refused by name, a Chebyshev2D still reads, and plain `polynomial` is untouched.
   **This had to be fixed together with bug 7**: before the ceiling bump a real astropy
   `ortho_polynomial-1.2.0` was rejected on version, so bumping alone would have converted
   a loud failure into a quiet wrong answer.
7. **The `MAKE_TEST` minor-version ceilings put most celestial frames out of reach —
   FIXED, 45 ceilings raised.** `MAKE_TEST` errors when `minor > Minor`, and the frame
   ceilings were `Fk4/Fk4Noeterms/Fk5/Galactic/SuperGalactic = 1.0`, `Icrs = 1.1`, while
   **astropy 8.0.1 writes `fk5-1.2.0`, `fk4-1.2.0`, `fk4noeterms-1.2.0` and
   `galactic-1.2.0`** — all rejected outright with *"unsupported minor version number 2"*.
   The tag does not depend on the asdf-standard version passed to `write_to` (1.3.0,
   1.4.0 and 1.5.0 all produced `fk5-1.2.0`), so there was no way to write a readable one.

   Every ceiling is now the newest version shipped by the installed
   `asdf-transform-schemas` 0.6.0, `asdf-coordinates-schemas` 0.5.1, `asdf-wcs-schemas`
   0.5.0 and `asdf-standard` 1.5.0. **Not raised blindly**: each of the 45 schemas was
   diffed between the old ceiling and the new version, normalising `id`/`tag` lines and
   `$ref` version strings. 36 were textually identical apart from those; the other 9
   (`baseframe`, `earthlocation`, `fk4`, `fk4noeterms`, `fk5`, `frame`, `ndarray`,
   `quantity`, `time`) changed only by dropping a `$ref` in favour of a `tag:` constraint,
   by making `frame`'s `unit` an `anyOf` (*more* permissive), or by adding optional
   properties — `quantity`'s `datatype`, and `time`'s extended `format` enum plus a new
   `base_format`. None alters the meaning of a field the reader uses.

   Verified after the bump against files written by astropy itself, comparing DS9's ICRS
   readout with astropy's own conversion of the same position:

   | frame | astropy | DS9 | Δ |
   |---|---|---|---|
   | icrs | 10.0000000 20.0000000 | 10.0000000 20.0000000 | exact |
   | fk5 | 9.9999915 19.9999985 | 9.9999915 19.9999985 | exact |
   | fk4 | 10.6589673 20.2738672 | 10.6589781 20.2738582 | 0.039″ |
   | fk4noeterms | 10.6589653 20.2738922 | 10.6589761 20.2738832 | 0.039″ |
   | galactic | 254.2849436 −9.7822288 | 254.2849436 −9.7822284 | 0.0014″ |

   FK4 landing at 10.659/20.274 rather than 10/20 is what proves the B1950 equinox is
   actually being honoured; a dropped equinox would be over half a degree out, not 0.04″.
   That residual is the known SLALIB-vs-ERFA difference in the FK4 model, not a reading
   error.

   Note `icrs-1.1.0` — what every real Roman file uses — had been sitting exactly *at* the
   old ceiling with no headroom, while `icrs-1.2.0` and `-1.3.0` already existed. Astropy
   8.0.1 still emits `icrs-1.1.0` at every asdf-standard version from 1.2.0 to 1.6.0, so
   nothing was broken yet; one bump on that one frame would have stopped Roman WCS loading
   entirely. **Re-run the ceiling check whenever the schema packages move** — the
   comparison is mechanical and worth automating if this recurs.

   Incidental, not fixed: the error text reads *"unsupported minor version number 2 (should
   be at least 0)"*, where it means **at most**.
8. **Four astropy-writable frames are not recognized at all — NOT FIXED.** `gcrs`,
   `cirs`, `tete` and `precessedgeocentric` all serialize fine from astropy but have no
   recognizer, so `ReadCelestialFrame()` rejects them with *"has class ... which is not of
   the required class 'baseframe'"*. Lower priority than 7 (no Roman product uses an
   observed or intermediate frame) but they are frames a real file can contain, unlike
   the next item.
9. **What AST recognizes but no astropy can write.** `supergalactic`, every ecliptic
   frame, `altaz`, `itrs` and `galactocentric` are *not serializable to ASDF at all* by
   astropy 8.0.1 — `asdf-coordinates-schemas` ships no schema for them (its 36 frame
   schemas cover baseframe, cirs, fk4, fk4noeterms, fk5, galactic, galactocentric, gcrs,
   icrs, itrs, precessedgeocentric, teme, tete; `galactocentric` and `itrs` have schemas
   but still refuse to write). So AST's `SuperGalactic`, `Ecliptic` and `Altaz` handlers
   are unreachable from any real file today, and our fixtures for them are necessarily
   synthetic. **This supersedes the earlier suspicion that `ecliptic` was merely keyed on
   the wrong spelling** — the spelling question is moot while astropy writes no ecliptic
   tag at all, and it is also why the `altaz` fixture had no reference serialization to be
   checked against.

10. **The `earthlocation` dispatch branch was unreachable — FIXED. This was the altaz
    mystery.** `IsA()` dispatches on a class prefix, and its branch read
    `strncmp( km_class, "astropy/coordinates/earthlocation/", 34 )` — **with a trailing
    slash**. Astropy writes an EarthLocation as
    `astropy/coordinates/earthlocation-1.2.0`, with no class component at all (confirmed by
    serializing one), so the branch could never be entered and `IsAEarthLocation()` was
    dead code. Exactly the same shape as bug 2: a working handler nothing could reach.
    Comparing 33 characters instead, without the slash, matches both spellings.

    **This is what had defeated the altaz fixture all along**, and it is worth recording
    that the earlier hypothesis in this file was wrong: the `MAKE_TEST` prefix match *does*
    work (it compares only up to the version dash), so `IsAEarthLocation` was never the
    problem — the caller was. The observable was the misleading part: the error named the
    *frame* (`Property 'location' ... is not of the required class 'earthlocation'`), so
    the search kept going to the serialization of the location rather than to the branch
    that decides whether to look at it.

    With this fixed, the altaz fixture reads (`nframe = 2`) and converts **correctly**:
    for its site and epoch, AzEl (16°,16°) should be ICRS 268.061422 +38.675185 by
    astropy's own reckoning, and DS9 reports 268.062201 +38.675213 — 2.8″ in RA and 0.1″
    in Dec, the expected AST-vs-astropy level for an AzEl conversion, where refraction,
    UT1 and polar-motion defaults differ.

    One loose end, cosmetic and left alone: DS9 prints that readout in **radians**
    (`4.678568 0.6750098`) even though `degrees` was requested. DS9 has no azel display
    system, so the SkyFrame's format is never set for it.


11. **Heap overread in `winmap.c`'s `MapMerge` — NOT FIXED, and it is a memory bug, so
    treat it as the most serious of the open ones.** Found because
    `Tests/asdf/transform/fix_inputs.asdf` behaved differently on macOS and Linux from
    identical bytes: macOS built the WCS and warned "the WCS has no defined inverse",
    while Linux failed with

        astInitCmpMap(CmpMap): The number of output coordinates per point (2) for the
        first Mapping supplied does not match the number of input coordinates (1) for
        the second Mapping.
        Error occurred when reading an ASDF 'concatenate' object.

    AddressSanitizer names it exactly — a heap-buffer-overflow, READ of 8 bytes 0 bytes
    past a 32-byte (4-double) allocation, at **`winmap.c:1352` in `MapMerge`**, on a
    buffer allocated by `WinTerms` at `winmap.c:3657`, reached from
    `ReadConcatenate` -> `astSimplify` -> CmpMap/ShiftMap/WinMap `MapMerge`.

    The mechanism. When a WinMap has a parallel CmpMap as a series neighbour, this
    merger converts the WinMap into two WinMaps, one per CmpMap component, by splitting
    the scale and zero terms `astWinTerms` returned:

        (void) astWinTerms( oldwm, 0, &a, &b );        /* return value DISCARDED */
        ...
        nin  = cmlow ? astGetNout( mc[0] ) : astGetNin( mc[0] );
        ...      (newwm ->a)[i] = a[i];
        nin2 = cmlow ? astGetNout( mc[1] ) : astGetNin( mc[1] );
        ...      (newwm2->a)[i] = a[i + nin];          /* <- overreads */

    `astWinTerms` returns the number of axes, which is the length of both arrays, and
    the caller throws it away; nothing then ties `nin + nin2` to that length. Instrumented,
    the failing case is **`nax=1` with `nin=nin2=1`**: a one-axis WinMap against a parallel
    CmpMap of two 2-in/1-out MatrixMaps (`CmpMap Nin=4 Nout=2`), which cannot be a series
    neighbour of a 1-axis WinMap at all. So the real defect is upstream of the read — the
    merger is reached with an incompatible pair — and the overread is how it manifests.

    **Do not "fix" it by guarding the split alone.** Tried: adding `if( nin + nin2 == nax )`
    stops the overread, and macOS then fails *exactly* the way Linux does, so there is a
    second problem behind it and the guard only removes the accident that was hiding it.
    Reverted rather than shipped. That experiment is the useful part of this entry: **the
    macOS success was reading uninitialized heap**, so Linux's error is the honest outcome
    and any "it works on macOS" conclusion about this shape is worthless.

    **The trigger is two `planar2d`s in a parallel CmpMap.** Each becomes
    `CmpMap(MatrixMap(2->1), ShiftMap(1))`, and two of those in parallel leave a one-axis
    WinMap beside a parallel CmpMap of two 2-in/1-out MatrixMaps. `fix_inputs` reached it
    only because each half wrapped one; `polynomial` and `ortho_polynomial` do not, because
    they become PolyMaps with no WinMap involved. To reproduce: build AST with
    `-fsanitize=address`, build `yamlchan_probe` against it, and read a fixture whose
    transform concatenates two planar2ds. The upstream clone's
    `AST_ISSUES.md` carries that as issue 1's primary reproducer.

    Two fixtures were affected and both are rebuilt to shapes that are clean under ASan:
    `Tests/asdf/transform/fix_inputs.asdf` and `Tests/asdf/transform/planar2d.asdf`, each
    now pairing one of the primitive with a unit scale. **Finding the second one cost an
    extra round trip through the user**, because the first was fixed on report rather than
    by auditing: an ASan sweep of all 185 fixtures is cheap (a loop over
    `yamlchan_probe`), found both, and now reports 0 of 185. Re-run it after adding any
    fixture that combines 2-in/1-out transforms; `Tests/asdf/README.md` says how.

### Open items, roughly in priority order

1. **`altaz` now works** — see AST bug 10. It had nothing to do with the serialization
   of `location` or `obstime`; the `earthlocation` dispatch branch in `IsA()` required a
   trailing slash that astropy's tag does not have, so the handler was unreachable. The
   fixture reads and converts to within 2.8″ of astropy's own AzEl→ICRS. Remaining and
   deliberately not chased: DS9 prints an azel readout in radians, since it has no azel
   display system. Note that **astropy cannot serialize an AltAz frame to ASDF at all**
   (bug 9), so this fixture is still synthetic and no real product exercises the path —
   but the `earthlocation` half of the fix matters on its own, since astropy *can* write
   an EarthLocation.
2. **`ortho_polynomial` builds a WCS but reads nothing back.** `has wcs wcs` is 1, yet
   DS9 gives no readout: AST supplies no inverse for a ChebyMap, and plain `polynomial`
   only escapes this because AST inverts a degree-1 one itself. This is a finding, not a
   bug to chase — it explains the large explicit `inverse:` blocks the real Roman
   distortion polynomials carry, and the fixture records `expect_readout: no` in its own
   metadata so the absence is stated rather than silent. Worth revisiting only if a Roman
   product ever ships a Chebyshev *without* an inverse. Every other GWCS primitive is now
   covered; `fix_inputs` warns "no defined inverse" while still returning the right
   numbers, which is also not a failure.
3. **Send the nine AST fixes upstream** (eight are also applied to the vendored `ast/`;
   the ninth, the `#ASDF_STANDARD` header, is write-side only and so does not affect us),
   and report the three still open. The
   version-ceiling bumps (bug 7) and the `polynomial_type` check (bug 6) belong in the
   same patch, since the first makes the second reachable. Of the open ones, **bug 11 (the
   `winmap.c` overread) should go first**: it is a memory error with an ASan trace, and it
   silently produces different WCS results on different platforms.
4. **R9/R10**, both generic DS9 rather than ours but far more visible on Roman: region
   *angles* use one image-wide rotation, and angular *lengths* use one scalar scale while
   the Roman GWCS is ~2% anisotropic. `WCS_TEST_PLAN.md` §1 has the measurements.
5. **R6: AST drops `bounding_box`**, so nothing enforces the valid-pixel domain, and the
   inverse also stops converging outside the detector (A-5).
6. Smaller: an ASDF icon for the top icon row (needs PNG artwork for `ds9/icons/ui/` and
   `ui_dark/`); `uint16`/`uint32` masked arrays would need the FITS `BZERO` convention; the
   array browser offers WCS-internal coefficient matrices as loadable images.

### Things that are expensive to rediscover

The full lists are in **`WCS_TEST_PLAN.md` §3** (DS9/XPA gotchas) and
**`Tests/asdf/README.md`** (fixture and GWCS gotchas). The few that matter most:

- **Nearly every GWCS failure presents identically as "no WCS."** A wrong tag version, a
  missing key, a bad indent, an unrecognized class — all the same symptom. The fastest way
  in is to bisect down to a fixture whose transform is nothing but
  `!transform/identity-1.4.0 {n_dims: 2}` and add pieces back.
- **`axis_physical_types` is effectively mandatory** on both frames, despite reading as
  optional metadata. Without it AST builds no FrameSet at all.
- **Frame tags need the authority prefix**, `tag:astropy.org:astropy/coordinates/frames/...`.
  Dropping it silently yields no WCS.
- **DS9 feeds its image coordinate straight into the GWCS**, with no 1-based/0-based
  correction — the opposite of what the FITS↔gwcs convention difference suggests.
- **Raise `prefs precision` before measuring anything.** The default truncates degrees at
  7 dp, which was the binding constraint on several test-plan numbers.
- **zsh eats `:r`**: `"$F:roman/data"` silently loads `<basename-minus-extension>oman/data`.
- **`frame frame <n>` is a parse error, not a frame switch** — it is `frame <n>`. With
  `xpaset -p` the error is easy to miss, and two of my own test runs reported a clean PASS
  from zero measurements because of this class of mistake. Assert a non-zero sample count.
- **Two tools make GWCS questions answerable instead of guessable**, and both were
  learned late:
  - **`utils/asdf_gwcs_probe/yamlchan_probe.c` prints AST's real error message**, which
    DS9 swallows (`yaml2ast()` calls `astClearStatus` and returns NULL, so every cause
    arrives as the same "could not read this WCS"). It also prints `astTran2` of one
    point, which is the only way to see a forward transform whose inverse does not exist.
    Build it with the line in its own header comment; it reads a fixture `.asdf`
    directly, block and all.
  - **AddressSanitizer on AST turns "platform-dependent" into a line number.** A
    `make -C ast CFLAGS="-g -O1 -fsanitize=address -fno-omit-frame-pointer" libast.la`
    (touch `ast/src/*.c` first — a CFLAGS change alone does not trigger a rebuild) plus a
    probe linked with the same flags found AST bug 11 in one run, after code reading had
    gone down two wrong paths. Rebuild clean afterwards and re-copy to `lib/`, or the next
    link fails on missing `__asan_*` symbols. Mixing sanitized and plain objects in the
    archive is what produces that error.
  - **A conda env with the real thing**: `/Users/kjg/miniforge/envs/ds9asdf` has astropy
    8.0.1, asdf 5.4.0 and gwcs 1.0.3 (`conda` is at `/Users/kjg/miniforge`, and its
    `bin/conda` shebang needs invoking through `bin/python3.12` explicitly). Use it to
    settle *what astropy actually writes* rather than reasoning from the schemas — that is
    what turned AST bugs 6–9 from suspicion into measurement. Write test files with
    `all_array_storage="inline"`, since AST reads only inline ndarrays and `asdf.tcl`'s
    `AsdfResolveNdarrays` (which does that job in DS9) is not in the path when probing.
- **Never let the build re-run autotools on a vendored package.** `ast` and `libyaml` are
  the only two that use automake, and neither declares `AM_MAINTAINER_MODE`, so automake's
  rebuild rules are always live: a checkout's arbitrary mtimes can leave `configure.ac`
  looking newer than `configure`, and the build then tries to regenerate it with whatever
  autotools are installed and fails. Both rules in `make.include` now `touch` the whole
  generated set so the rules cannot fire. **Reconfiguring the package instead is the wrong
  fix** — it rewrote ~7000 lines of tracked `configure`/`aclocal.m4`/`Makefile.in` and had
  to be reverted (`187aa9c4b`). Everything else vendored here is TEA or plain autoconf,
  which emits no such rules.
- **An abandoned `iexam` wedges DS9 against all XPA** until a real click; only a restart
  clears it. Do not start one from a script.

### Where things live

- **Reader**: `fitsy/asdf.{h,C}` (the container and the pixel path — the bulk),
  `ds9/library/asdf.tcl` (the GWCS subtree extraction and the UI/scripting plumbing),
  `tclfitsy/tclfitsy.C` (`fitsy asdf tree|arrays|block`, the Tcl door into the same
  reader), `tksao/frame/{fitsimage,base,frame,context}.{h,C}` and
  `tksao/frame/parser.Y`+`lex.L` (the `load asdf` command, `FitsImageAsdf`,
  `FitsImageAsdfNext`), plus `tksao/frame/fitsimage.{h,C}`'s `yaml2ast`,
  `replaceWCSYaml`/`wcsYaml_` and `replaceWCSCards`/`wcsCards_` for the WCS.
- **Tests** are a **separate git repo** at `Tests/` (`github.com/SAOImageDS9/Tests`) — commit
  there separately. `asdf.sh` drives them, `io.sh` lists them, baselines are `.sav` next to
  each fixture, and files are found with `find` so new ones are picked up automatically.
  Four fixture families: `asdf/fixtures/` (108 container), `asdf/gwcs/` (27 projections,
  25 verified), `asdf/transform/` + `asdf/frames/` (26, 23 verified exactly), and
  `asdf/arrays/` (24 atypical ndarray descriptions — byte order, `offset`/`strides` views,
  odd ranks, and the dtypes the mapping table claims). 185 baselines in all. Five
  generators live in `asdf/`.
- **Sample data**: `utils/asdf_gwcs_probe/sample_data/`. The large Roman files and the L3
  coadd are in `.git/info/exclude` (local-only, never committed) and are re-downloadable
  from the Build22 example data. That host **serves GET but refuses HEAD**, so `curl -I`
  misleadingly 403s.
- **Running the suite** needs `ds9` and the XPA tools on `PATH` under the name `ds9`; on
  macOS the binary is `bin/SAOImageDS9.app/Contents/MacOS/ds9`, so a small wrapper on
  `PATH` is the easy way.

### Upstream AST patches, ready to send

`ast_upstream/` is a clone of `github.com/Starlink/ast` (excluded from this repo's git via
`.git/info/exclude`), with one branch per issue off `master` at 9cf7f8ff. Every branch
builds with cmake and passes AST's own suite, **2444 tests, 100%**, and each one that can
be tested at runtime adds a `test_*` to `ast_tester/testyamlchan.c` plus a plain-YAML
fixture under `ast_tester/fixtures/programs/testyamlchan/` — that directory is covered by
a `programs/` line in `fixtures/DIST_MANIFEST`, so nothing needs registering. Each test
was confirmed to fail without its fix.

```
fix/yamlchan-libyaml-writer-size-t      LLP64 build break (no runtime test possible)
fix/yamlchan-healpix-unreachable        + test_healpix_projections, 2 fixtures
fix/yamlchan-linear1d-uninitialised     + test_linear1d
fix/yamlchan-gettime-epoch-prefix       + test_jyear_equinox
fix/yamlchan-ortho-polynomial-basis     + test_ortho_polynomial_basis, 2 fixtures
fix/yamlchan-schema-version-ceilings    55 ceilings + test_current_schema_versions
fix/yamlchan-earthlocation-dispatch     + test_earthlocation
fix/yamlchan-zenithal-perspective-azp   + test_zenithal_perspective_roundtrip
fix/yamlchan-asdf-standard-header       + test_asdf_standard_header
```

Note the ceilings branch raises **55**, not the 45 we applied here: the vendored copy
already carried 10 earlier bumps.

**What else in AST's suite was worth running.** Two things, and both paid off:

- **The whole suite under AddressSanitizer** — 2444 tests, and they pass with **zero ASan
  reports**, including the 828-fixture `simplify` corpus and the 476-fixture `wcsconv`
  corpus. So AST bug 11 is not something its own corpora reach: our GWCS shapes get into a
  simplify path nothing there exercises, which is why it survived. Also means there is no
  other latent memory bug of that kind sitting in those corpora, which is worth knowing
  given DS9 calls `astSimplify` on every GWCS read and FitsChan on every FITS image.
- **`ast_tester/asdftest.py`**, which compares YamlChan's output against the `gwcs` package
  and is **not wired into ctest at all** — it needs asdf and gwcs, so a normal build never
  runs it. Running it found the missing `#ASDF_STANDARD` header (the 9th branch above).

Not yet looked at: `fixtures/oracle` (6 files, `check_transform_oracle.c`),
`fixtures/serialisation` (27, `compare_dumps.c`) and `fixtures/plot` (21). The wcsconv
corpus is the one most worth mining for DS9's own FITS-WCS behaviour, since it is 476 real
headers and DS9's entire WCS layer is AST FitsChan — but nothing there is ASDF-specific.

Three findings have no patch and are written up in **`AST_ISSUES.md`** in this repo,
ready to paste into upstream issues: the `winmap.c` overread (bug 11, with the ASan trace
and a self-contained fixture), the confusing error for a projection with no ASDF class
(ZPN/NCP/GLS/TPN have no writer branch, and the NULL return surfaces as
`astIsAObject(<NULL>)` rather than naming the projection), and the four unrecognised
observed frames (bug 8). They live in this repo rather than the clone because the clone is
excluded from git and disposable.

Two things to know before building the clone: it has no `configure` (the repo ships
`CMakeLists.txt` and a `bootstrap` needing autotools), so use cmake — there is an
`astbuild` conda env with cmake and libyaml. And **a program linking the shared libast
must define `astPutErr_`**, or AST's error delivery calls through a null pointer and any
reported error looks like a segfault. That cost real time here: it made two non-crashes
look like crashes.

### This session's commits, for orientation

Main repo, newest first. `Tests` is a separate repo with its own history, and the
`ast_upstream/` clone has its own branches (see above).

```
831c4e3b3 AST: zenithal_perspective is AZP, not SZP
927255699 TODO: the upstream AST branches, and zenithal_perspective solved
ebeba58f6 libyaml: reconfigure to fix timestamps
3cda8fc3f TODO: AST bug 11, a heap overread in winmap.c's MapMerge
4e5d25e70 Refuse an ndarray with no byteorder instead of guessing one
d01cfa592 TODO: a fourth fixture family, and the byteorder-default question
5c8860baf AST: raise 45 version ceilings, and fix what that exposed
556c9465b Measure the GWCS gaps against real astropy instead of guessing
fe7c005c6 Document what of a GWCS is read, and what is not
11f09650d Agent docs: five AST bugs, four patched
890936e85 TODO: refresh the handoff now that every GWCS primitive is covered
3fddb73c3 AST: GetTime tested the wrong string for its epoch prefix
438935616 TODO: a handoff summary at the top, and point the agent docs at it
2cf57a92a AST: ReadLinear1d built its WinMap from an uninitialized variable
a78206bf2 AST: make both HEALPix sky projections reachable
924864b74 Find a top-level wcs key, not just Roman's indents
7d722dbef Windows/mingw builds clean from a clean tree
b612f0743 win: name the target's pkg-config so libxml2 resolves to mingw
8064e7408 Fix AST's LibYamlWriter signature for LLP64 (Windows build)
0d81beff2 Set the Info panel filename for ASDF loads, naming the array too
f59e6a180 Read L3 coadd WCS by translating fitswcs_imaging to FITS cards
1364a1bb9 WCS test plan J-4: L3 coadds load pixels but get no WCS
28e4a4c97 WCS test plan: finish sections A/B/D/E/G/H/I/J, 21 more cells
fc9541661 Don't attach the GWCS to arrays it does not describe
```

`Tests` repo:

```
d66ab57 zenithal_perspective verified: 26 of 27 projections
d524a88 fix_inputs: use a shape that does not read past a buffer
9dc5eea int16_no_byteorder is now refused, not guessed
b21ff65 Add 24 fixtures for atypical ndarray descriptions
4cda1f7 altaz works: 23 of 26 transforms and frames verified
f2f9cab Exercise the asdf command from command.sh, xpa.sh and samp.sh
2b64c50 Add the last seven GWCS transforms; 22 of 26 verified
a5cbf83 Fix four of the five frame fixtures; 16 of 19 now verified
2f62e22 Add fixtures for the GWCS transforms and frames, 13 of 19 verified
```

Every commit message here is deliberately long and carries the reasoning, the measurements
and the rejected alternatives. If this summary is ever thinner than you need,
`git show <sha>` is the fuller record.

### What is pushed, and where

- **Main repo** → `https://github.com/kglotfelty/SAOImageDS9`, branch `asdf_support`, last pushed at
  `8636e142f TODO: AST bug 11's real trigger, and the sweep that finds it`, with **3 local commit(s) ahead** of that. This is a
  personal fork, not `SAOImageDS9/SAOImageDS9`; nothing has gone to the DS9 project itself.
- **`Tests`** → `github.com/SAOImageDS9/Tests`, branch `master`, pushed and **up to date**
  at `d86f746 planar2d: the other fixture that read past a buffer`. Note this one is the project's own repo, not a fork.
- **`ast_upstream/`** → nothing pushed. All nine branches are local, with no upstream
  tracking ref; the PRs and the `AST_ISSUES.md` issues are the user's to open.

Check rather than assume: `git log --oneline origin/asdf_support..HEAD` here, and
`git log --oneline @{u}..HEAD` in `Tests`. This section replaces an earlier one claiming
nothing had been pushed anywhere, which stopped being true once the fork was pushed to.

## Phase 0 — Build foundation (vendoring)

- [x] Vendor the latest upstream AST release. Latest tag as of 2026-09-16 is **v9.4.1**
      (released 2026-09-11, one point release past the v9.4.0 checked during design
      research) — `ast/` replaced wholesale with that release's tarball contents
      (`ast` was not marked `dirty` in `Manifest.md`, so no local patches needed
      preserving). `Manifest.md`'s `ast` row updated to `9.4.1`.
  - Re-checked the 5 `MAKE_TEST` ceilings still short as of v9.4.0 (design doc §7c) against
    v9.4.1: **unchanged** — `Polynomial`, `Compose`, `Concatenate`, `Shift`, `Remap_Axes`
    are each still exactly one minor version short of what real Roman data uses. v9.4.1
    appears to be a bugfix release that didn't touch `yamlchan.c` further. The local-patch
    task below still stands.
  - Bonus finding: 9.4.1's `configure.ac` replaced the old bare `AC_CHECK_LIB`-only YAML
    probe with a proper `--with-yaml[=DIR]` option (plus `YAML_CFLAGS`/`YAML_LIBS` escape
    hatches) that **hard-fails configure via `AC_MSG_ERROR`** if YAML was explicitly
    requested but not found. This resolves the "silent `NOYAML`" risk from design doc
    §7c/§9 for free — no need to patch AST's fallback behavior ourselves, just pass
    `--with-yaml=$(prefix)` and let it point at wherever vendored `libyaml` installs.
- [x] Vendor `libyaml` (latest tagged release, `0.2.5`) as a new top-level static-lib
      package, following the same pattern as `vector`/`fitsy`/`ast` (own subdirectory, own
      `configure`/`Makefile.in`, built via a `make.include` stanza, static archive only —
      **no shared lib**, matching every other vendored package).
  - [x] Added `libyaml/` (upstream release tarball, unmodified) and a `Manifest.md` row.
  - [x] Added a `libyaml` build stanza to `make.include` (configure/build/install +
        `libyamlclean`/`libyamldistclean`, `.PHONY` entries), configured
        `--disable-shared --enable-static`.
  - [x] Added `libyaml` to the `saods9` prerequisite list in `unix/Makefile.in`, ordered
        *before* `ast`.
  - [x] Updated AST's `make.include` configure invocation to add `--with-yaml=$(prefix)`
        (see the 9.4.1 finding above — simpler than the raw `CPPFLAGS`/`LDFLAGS` approach
        originally planned).
  - [x] Validated in isolation (scratch `--prefix`, outside the tracked tree state):
        `libyaml` configures and installs `libyaml.a` only (no `.so`); AST's configure
        against `--with-yaml=<scratch prefix>` reports `checking for yaml_parser_initialize
        in libyaml... yes` and sets `YAML = 1` in its generated `Makefile`; building
        `libast.la` compiles `src/libast_la-yamlchan.o`, links `-lyaml` from the scratch
        prefix, and the resulting `.libs/libast.a` contains 14 `yamlchan`/`YamlChan`
        symbols (`nm` confirmed). Both directories were `make distclean`'d back to a
        pristine vendored state afterward — the working-tree diff is only the genuine
        vendoring change, no leftover build artifacts.
  - [x] Checked `macos/Makefile.in` and `win/Makefile.in`: both `include ./make.include`
        too (it's genuinely shared across all three platforms), so the `libyaml` build
        stanza and AST's `--with-yaml=$(prefix)` flag already apply everywhere for free.
        What each platform *does* keep separately is its own `saods9` prerequisite list —
        added `libyaml` before `ast` there too, mirroring the `unix/Makefile.in` edit.
  - [x] Found and fixed a real cross-compile gap this surfaced: `libyaml` is a plain C
        library (not a Tcl extension), same category as `ast`/`xpa`/`funtools` — those three
        get an explicit `$(CONFIGFLAGS)` (`CC=$(TARGET)-gcc AR=$(TARGET)-ar`, only non-empty
        on `win/`) passed to their `./configure`, where Tcl-extension packages
        (`vector`/`fitsy`) instead inherit the cross-toolchain for free via `--with-tcl`/
        `--with-tk`. The `libyaml` stanza was modeled on `vector`/`fitsy` and would have
        silently used the *host*'s native compiler under a Windows cross-build. Fixed by
        adding `$(CONFIGFLAGS) $(TARGET)` to its recipe, matching `xpa`/`funtools` (`ast`'s
        own recipe omits `$(TARGET)`, which looks like a pre-existing inconsistency in
        `make.include` predating this work — left alone, not this task's to fix).
  - [x] **macOS half now validated** (2026-09-16, on a real Mac with Xcode, not
        cross-compiled): `macos/configure && make` builds the whole chain, `lib/libyaml.a`
        installs static-only (zero `.dylib`/`.so` anywhere in `lib/`), and the resulting
        `lib/libast.a` carries `yamlchan` symbols, so `--with-yaml=$(prefix)` took effect
        on this platform too.
  - [x] **Windows/mingw: first real cross-build attempt (2026-09-17) found a genuine bug in
        this stanza, now fixed.** `libyaml/Makefile` passed **both** `$(CACHE)` and
        `$(CONFIGFLAGS) $(TARGET)`, and those are mutually exclusive — `libyaml` was the only
        package in `make.include` combining them. Symptom on `win/`:
        ```
        configure: error: `build_alias' was not set in the previous run
        configure: error: `CC' was not set in the previous run
        configure: error: changes in the environment can compromise the build
        ```
    - Why: the shared `$(prefix)/config.cache` is written by the `$(CACHE)`-using packages
      (`vector`, `fitsy`, `tkblt`, tcl/tk …), which inherit the cross toolchain via
      `--with-tcl`/`--with-tk` and therefore never set `build_alias`/`host_alias`/
      `target_alias`/`CC`. A configure run that *does* set them then aborts on cache load.
      Verified against the macOS cache directly: it records `ac_cv_env_CC_set=` and
      `ac_cv_env_build_alias_set=` **empty**. On macOS/unix `$(CONFIGFLAGS)` and `$(TARGET)`
      are both empty so `libyaml`'s run also set nothing — consistent, which is exactly why
      this could never reproduce here.
    - The tree already encoded the rule and I missed it: every cross-flagged package
      (`xpa`, `funtools`, `ast`) omits `$(CACHE)`, and there is a literal `# no config.cache`
      comment above the `xpa` stanza. The libyaml stanza was modeled on `vector`/`fitsy`
      (which use `$(CACHE)`) and then had `$(CONFIGFLAGS) $(TARGET)` added on top.
    - **The latent second half was worse than the reported failure**: had libyaml's configure
      *succeeded* with `$(CACHE)` on a cross build, it would have written `CC` and the
      aliases into the shared cache and broken every `$(CACHE)`-using package afterwards
      with the mirror-image error. Nobody hit that only because libyaml fails first.
    - Fix: drop `$(CACHE)`, with a comment recording the invariant so it is not re-added.
      Re-audited `make.include` programmatically afterwards — no package combines them now.
      Rebuilt `libyaml` from a `distclean`'d pristine state on macOS: configures with no cache
      warning, installs the same 396,912-byte static-only `libyaml.a`, and the
      libyaml→ast→`yamlchan` chain still reads a real GWCS (corner unchanged at
      `269.9869455 65.9742651`).
  - [x] **Second Windows libyaml failure, same root cause family: a hard hang at
        `libtool --mode=link`.** Reported as stuck with a running `sed` and no further
        output. Diagnosed from a tar of the user's configured tree, not guessed — two of my
        first hypotheses (a lost `--disable-shared`, an anomalous `max_cmd_len`) were wrong
        and the tree disproved them: `build_libtool_libs=no`, every cross tool correctly
        resolved to `x86_64-w64-mingw32-*`, and `max_cmd_len=8192` is just libtool's
        hardcoded punt for Windows hosts.
    - The tell was in the tree's own `libtool`: `to_host_file_cmd=func_convert_file_msys_to_w32`
      and `to_tool_file_cmd=func_convert_file_msys_to_w32` — **MSYS** functions on a
      **cygwin** box. `config.status` showed why: `build='x86_64-w64-mingw32'`,
      `build_os='mingw32'`.
    - Chain, each link read off the user's own files: `configure:1196` handles a bare
      positional arg as `: "${build_alias=$ac_option} ${host_alias=$ac_option}
      ${target_alias=$ac_option}"` — it sets **all three**, `build_alias` included. The rule
      passed `$(TARGET)` positionally, so configure believed it was *running on* mingw.
      `configure:5108` then picks libtool's path-conversion function from `$build`
      (`*-*-mingw*` → "# actually msys"), and `libtool:3370` is
      `` `( cmd //c echo "$1" ) 2>/dev/null | $SED ...` ``. `//c` is an MSYS path-mangling
      artifact; on cygwin it reaches `cmd.exe` verbatim, cmd sees no `/c`, opens an
      interactive session and blocks on stdin, and the `$SED` on the far end of that pipe
      waits forever. Hence a stuck `sed` and silence.
    - Fix: `--host=$(TARGET)` instead of the bare triplet, so `build` is guessed as cygwin
      and libtool selects `func_convert_file_cygwin_to_w32` (`cygpath -m`) plus
      `func_convert_file_noop` — no `cmd` invocation anywhere. Written as
      `$(if $(TARGET),--host=$(TARGET),)` so it stays a no-op on unix/macos and needs no
      `win/configure` re-run, the same guard idiom used for bzip2's `RANLIB`.
    - **Only libyaml needed it**, and it is worth recording why the others are safe: it is
      the one package that both sets `host` and uses libtool. `ast` uses libtool but never
      passes the triplet, so its `$host` stays cygwin and the mingw branch is never taken;
      `xpa`/`funtools` pass it but have no libtool to mislead. Their bare positional args
      are still wrong in the same way — they make `cross_compiling=no` for a cross build —
      but they configure and build today, so they were left alone rather than churned.
    - Also confirmed dead: the `CFLAGS=-DYAML_DECLARE_STATIC` workaround found online cannot
      do anything here. `libyaml/include/yaml.h:29` tests `__MINGW32__` *before* `_WIN32`,
      and mingw-w64 defines it even for x86_64, so `YAML_DECLARE(type)` is plain `type` and
      the whole `YAML_DECLARE_STATIC`/`EXPORT`/`dllimport` ladder is unreachable on this
      toolchain. That advice is for MSVC. Worse, passing `CFLAGS=` to configure *replaces*
      `-g -O2` — visible in the reported link line, which is how it was clear the tree had
      been hand-configured.
    - macOS regression checked: the guard expands to nothing, the configure line is
      byte-identical to before, and a from-scratch `git clean -xdf libyaml && make libyaml`
      reinstalls the same 396,912-byte static-only `libyaml.a` with
      `to_host_file_cmd=func_convert_file_noop`.
  - [x] **Third Windows failure, at the final link: `undefined reference to
        __imp_xmlParserVersion`.** Not ASDF-related - it reproduced on master, and was
        triggered by a cygwin update. Diagnosed from the tree rather than the log.
    - `__imp_` is the Windows DLL-import decoration, and `xmlParserVersion` is a libxml2
      *global variable* - ld can often auto-import a function but not data, which is why
      this symbol and not a function was the one to fail.
    - Chain: `ds9/win/configure` is handed no `--host` (its rule uses `$(CACHE)`, which is
      mutually exclusive with it), so autoconf leaves `ac_tool_prefix` empty and the
      `AC_PATH_TOOL` behind `PKG_CHECK_MODULES([XML2],[libxml-2.0])` falls through to the
      plain `pkg-config`. On cygwin that reads `/usr/lib/pkgconfig` and returns the
      **cygwin** libxml2, whose import library is for `cygxml2-2.dll`. The build actually
      wants the mingw one - `ds9/win/Makefile.in` ships `libxml2-2.dll` out of the mingw
      sys-root. The cygwin update presumably installed/refreshed cygwin's libxml2-devel so
      that its `.pc` began shadowing the mingw one.
    - Fix: a `PKGCONFIG = PKG_CONFIG=$(TARGET)-pkg-config` in `win/Makefile.in`, passed to
      the three packages that call `PKG_CHECK_MODULES` (ds9, tclxml, tksao). Checked that
      `PKG_CONFIG` is **not** a precious variable in any of their generated configures
      (`ac_env_PKG_CONFIG_set` absent), so unlike `CC`/`AR` it is not written into the
      shared `config.cache` and cannot trip the `$(CACHE)` environment check - which is why
      this could not simply be folded into `$(CONFIGFLAGS)`.
    - Explicitly *not* the fix: tclxml's `--with-xml-static` (`-DLIBXML_STATIC`). That would
      silence the `__imp_` by switching the headers to static mode, but this tree links
      libxml2 dynamically on purpose. The `__imp_` reference was correct; the import library
      was what was missing.
  - [x] **Windows/mingw now builds clean from a completely clean directory (2026-09-17).**
        The whole chain, `zlib lz4 bzip2 xpa funtools libyaml ast vector fitsy tclasdf ...
        tksao ds9`, completes with no errors. That closes the longest-standing open item in
        this file. It took four distinct fixes, none of which were visible on unix or macOS:
    - `libyaml` + `$(CACHE)` — `build_alias' was not set in the previous run. Dropped
      `$(CACHE)`; the latent half was worse than the reported failure (see above).
    - `libyaml` + a bare positional triplet — a hard hang in `libtool --mode=link`, because
      autoconf set `build_alias` too, so libtool chose the **MSYS** path-conversion function
      and ran `cmd //c echo` on cygwin. Fixed with `--host=`.
    - `ast` — `LibYamlWriter` declared `long unsigned int` where libyaml uses `size_t`.
      Identical on LP64, different on LLP64, and only fatal from GCC 14, which promoted
      `-Wincompatible-pointer-types` to an error. An upstream AST bug; fixed locally.
    - `ds9`/`tclxml`/`tksao` — `undefined reference to __imp_xmlParserVersion`, because
      `PKG_CHECK_MODULES` used the build machine's `pkg-config` and got cygwin's libxml2.
      Fixed with `PKGCONFIG` in `win/Makefile.in`.
    - The three predictions in the old version of this item were all wrong, which is worth
      recording: `zlib` (feared for running test programs), `lz4` (suspected of wanting
      `TARGET_OS=MINGW`) and `tclasdf` (flagged over its missing `$(CACHE)`) all built
      without any change. `ast` was rightly suspected, but for the wrong reason - its
      missing `$(TARGET)` turned out to be harmless here (its `config.h` still measured the
      real compiler: `SIZEOF_LONG 4`), and the actual failure was a type signature.
  - [x] **Windows is exercised, not just built.** The 185-fixture suite passes there, as
        it does on macOS and Linux, so everything listed below is now covered. It was worth
        listing because a clean build said nothing about whether the ASDF path worked, and
        these pieces are platform-sensitive in ways a build cannot catch:
    - `tclasdf`'s three codec commands - `asdfbz2decompress` and `asdflz4decompress` in
      particular, since they are the newest and link freshly vendored libraries.
    - Block decompression across all four codecs, i.e. the 108 `Tests/asdf/fixtures` sweep.
    - The GWCS bridge end to end: does `libyaml` + `ast` actually read a Roman WCS on
      Windows, and does the ground-truth corner still come out at
      `269.986945544 65.974265112`?
    - `asdfmask`'s byte handling and `asdfconvert`'s float16 widening - both do explicit
      byte-order work, which is exactly where an LLP64/endianness difference would show.
    - Backup/restore, which writes absolute paths and copies files.
  - [x] Ran a real, full `unix/configure && make` from a completely clean tree (no prior
        build state) through the actual dependency chain
        (`dirs tcl tk openssl xpa funtools libyaml ast vector fitsy ... tksao ds9`) — not
        just the isolated scratch-prefix validation above. Result: `bin/ds9` built and
        runs (`./bin/ds9 -version` → `ds9 8.8b2`). Confirmed in the real install tree (not
        a scratch prefix): `lib/libyaml.a` installed static-only (no `.so`); `ast/configure`
        logged `checking for yaml_parser_initialize in libyaml... yes` against
        `--with-yaml=$(prefix)`; `lib/libast.a` (36MB) contains the same 14
        `yamlchan`/`YamlChan` symbols found in the earlier isolated test; and `ds9`'s final
        link line pulls in `lib/libast.a`/`lib/libast_err.a`/`lib/libast_pal.a`/
        `lib/libast_cminpack.a` directly alongside `libxpa.a`/`libfuntools.a`. Full log kept
        at `full_build.log` (untracked, not committed).
  - Noted one pre-existing, unrelated build failure surfaced during this run, not caused by
    this work: `funtools/util`'s optional `gcat` command-line utility fails to link
    (`ld: cannot find .../lib/libz.a: No such file or directory`) because `funtools`'s own
    `make.include` recipe passes `--with-zlib=$(libdir)/libz.a`, but nothing in the build
    ever actually produces `lib/libz.a` at that path — there's no `zlib` package/target
    upstream of `funtools` in `make.include` at all. Non-fatal (the rest of `funtools`,
    and the whole `saods9` chain through `ds9`, built fine regardless), but worth a
    separate look — not folded into this ASDF task's scope.
  - [x] Stale as written — the vendoring work is committed (`e5a01f30e` onward). Nothing
        was ever outstanding for it beyond `full_build.log`, which is untracked by design.
- [x] Vendored `zlib` (latest tag, `1.3.2`) as a new top-level static-lib package, both as
      the baseline codec the ASDF binary-block reader will need (design doc §9) and to fix
      the pre-existing `funtools`/`gcat` gap above in one move — `funtools`'s own recipe
      already expects exactly `$(libdir)/libz.a`, so no changes were needed there at all.
  - [x] Added `zlib/` (upstream release tarball, unmodified) and a `Manifest.md` row.
  - [x] Added a `zlib` build stanza to `make.include` (+ `zlibclean`/`zlibdistclean`,
        `.PHONY` entries), configured `--static` (zlib's own flag spelling for
        static-only — it has a hand-written `configure`, not autoconf, so it doesn't
        understand `--disable-shared`/`--exec-prefix`/`--config-cache` the way the
        autoconf-based packages do; used `--prefix=`/`--libdir=`/`--includedir=` instead of
        the shared `$(PREFIX)`/`$(CACHE)` variables for that reason).
  - [x] Same plain-C-library cross-compile issue as `libyaml`: added `$(CONFIGFLAGS)` for
        `win`, but since zlib's configure doesn't parse `VAR=value` positional arguments
        either (unlike the autoconf packages), it's placed as a literal shell-env prefix
        (`$(CONFIGFLAGS) ./configure ...`) rather than a positional argument — the
        positional form would have been silently ignored on `win`, same failure mode as
        the `libyaml` fix but a different reason underneath.
  - [x] Found and worked around a second, zlib-specific quirk: its tarball ships a
        placeholder `Makefile` ("Please use ./configure first") *alongside* `Makefile.in`,
        and — worse — its real `distclean` target deliberately *recreates* that same
        placeholder. Keying the `make.include` dependency off `zlib/Makefile` (the pattern
        every other package uses) would therefore never detect that a (re)configure is
        needed. Fixed by keying off `zlib/configure.log` instead — written only by
        `./configure` itself, genuinely removed (not recreated) by `distclean` — rather
        than by deleting the shipped placeholder, so `zlib/` stays an unmodified vendored
        copy like every other non-`dirty` package.
  - [x] Added `zlib` to the `saods9` prerequisite list in `unix/Makefile.in`,
        `macos/Makefile.in`, and `win/Makefile.in`, right after `openssl` and before
        `xpa`/`funtools`.
  - [x] Validated in isolation first (scratch prefix): `--static` installs `libz.a` only,
        no `.so`. Then validated for real in the already-built tree from the prior full
        build: `make zlib` installed `lib/libz.a` (static-only, confirmed no `.so`
        anywhere in `lib/`); `make funtoolsclean funtools` rebuilt cleanly and `gcat` now
        links successfully against `lib/libz.a` (previously the one failure in the whole
        tree). Did not re-run a full from-scratch `unix/configure && make` after this
        change — validated incrementally against the already-built tree instead, which
        confirms the specific regression is fixed but doesn't re-prove the *whole* chain
        builds clean from zero with `zlib` newly in the prerequisite order.
  - [x] macOS validated 2026-09-16 by a real `macos/configure && make`: `lib/libz.a`
        installs static-only, in prerequisite order (`macos/Makefile.in` line 56).
  - [ ] Windows/mingw wiring (prerequisite list + `$(CONFIGFLAGS)` env-prefix) still
        reasoned, not build-tested.
- [x] Vendored `lz4` (latest tag, `1.10.0`) as a new top-level static-lib package —
      following up directly on the Phase 1 finding that real Roman ASDF files use
      `lz4`-compressed binary blocks, not `zlib`, so Phase 2's future container reader in
      `tksao/` will need it. Unlike `zlib`/`libyaml`, this has **no consumer in the build
      yet** — it's forward-looking infrastructure, not a fix for an existing failure.
  - [x] `lz4` ships a plain hand-written `Makefile`, not autoconf and not even a
        `./configure`-shaped script like `zlib`'s — no configure step exists at all.
        Static-only is its own `BUILD_SHARED=no`/`BUILD_STATIC=yes` switch, and (unlike
        `zlib`'s script) a plain Makefile understands `CC=`/`AR=` overrides natively, so
        `$(CONFIGFLAGS)` is passed as an ordinary variable override, not an env-prefix
        trick. No configure step also means no placeholder-Makefile trap and no
        "has it been configured yet" file-gate is needed in `make.include` — `lz4/lib`'s
        own Makefile already tracks object-file staleness like every other already-built
        package's repeated `install` calls do.
  - [x] Added a `lz4` build stanza to `make.include` (+ `lz4clean`/`lz4distclean`,
        `.PHONY` entries) and `lz4` to the `saods9` prerequisite list in all three
        `Makefile.in`s, right after `zlib`.
  - [x] Validated in isolation first (scratch prefix): `BUILD_SHARED=no` installs
        `liblz4.a` only, confirmed no `.so`. Then validated for real in the tree: `make
        lz4` installed `lib/liblz4.a` + headers; a standalone `LZ4_compress_default`/
        `LZ4_decompress_safe` round-trip test linked against it and passed, not just a
        successful install. Ran `make lz4clean` afterward to restore `lz4/` to a pristine
        vendored state before committing, same discipline as the other packages.
  - [x] macOS validated 2026-09-16: `lib/liblz4.a` builds and installs static-only from a
        real `macos/configure && make`, and `tclasdf` links against it in the shipped
        `SAOImageDS9.app`.
  - [ ] Windows/mingw wiring still reasoned, not build-tested.
- [x] Locally patched the five remaining `MAKE_TEST` minor-version ceilings in
      `ast/src/yamlchan.c` (`Remap_Axes` 1,4→1,5; `Shift` 1,3→1,4; `Compose` 1,3→1,4;
      `Concatenate` 1,3→1,4; `Polynomial` 1,2→1,3), each behind a one-line comment pointing
      back to this file rather than a long inline explanation (matches the project's
      no-multi-line-comments convention). Marked `ast` `dirty` in `Manifest.md` with a
      footnote explaining why, per the design doc's recommendation.
  - Before patching, diffed every affected schema version pair on GitHub
    (`asdf-format/asdf-transform-schemas`, e.g. `compose-1.3.0.yaml` vs `compose-1.4.0.yaml`)
    against what the real Roman file uses. Result across all five: every change is a
    version-string bump or a validation-only tag-pin relaxation (e.g. exact
    `quantity-1.2.0` → wildcard `quantity-1.*`) — never a new/renamed field. Since AST
    doesn't do JSON-Schema validation at all (it only navigates named YAML keys), none of
    these relaxations are visible to its reader either way. Safe to raise, confirmed by
    evidence rather than assumed.
  - Rebuilt `libast.la` after the patch (`touch src/yamlchan.c && make libast.la`) — compiles
    clean, `.libs/libast.a` copied back into the shared `lib/`.
  - **Wrote a real functional probe, not just a compile check** — a minimal C program
    (mirroring `ast/ast_tester/testyamlchan.c`'s own `astYamlChan(NULL,NULL," ")` +
    `SourceFile=` pattern) reading a hand-built synthetic 3-step GWCS document that
    exercises all five bumped tags (`wcs-1.4.0`/`step-1.3.0`/`frame2d-1.2.0` too, already
    fine pre-patch) with inline (`data:`, not `source:`) coefficient arrays. First attempt
    hit an `astInitCmpMap` dimension-mismatch error from a bug in the test's own transform
    chain (not a version error) — telling on its own: no "unsupported minor version" error
    appeared anywhere in the trace, meaning every bumped tag had already passed its version
    check and been constructed before the unrelated dimensional error fired. Fixed the test
    chain (`remap_axes[0,1,0,1]` feeding `concatenate(polynomial,polynomial)` directly,
    matching the real file's actual structure, rather than my first attempt's wrong nesting)
    and got a clean result: `astRead` → `FrameSet`, `Nframe = 3`, and `astTran2(0.3,-0.2)` →
    `(-2049.93, -1019.09)` — sane numeric output through the full patched chain, not just a
    non-crashing parse. Needed ~19 trivial stub functions (`astGLine`, `astG3DMark`, etc.)
    to satisfy the static linker for `Plot`/`Plot3D` graphics callbacks the probe never
    calls — an AST linking quirk, unrelated to this patch.
  - **New gap found along the way, not fixed**: `bounding_box` (present on the real file's
    `compose` transform, e.g. `!transform/property/bounding_box-1.2.0`) has zero handling
    anywhere in `yamlchan.c` — not even a version-ceiling check, just no code path reads
    that key at all. AST will still produce a working, coordinate-correct `AstFrameSet`
    without it, but the GWCS-defined valid-pixel-domain information is silently dropped,
    not just approximated. Logged here as a real semantics gap for Phase 1/3, not attempted.

## Phase 1 — Spike: prove the AST/GWCS bridge works (no DS9 UI yet)

**Status: done, against three real downloaded Roman files, not synthetic data.** Source
files (in the scratchpad, not committed — see "what's not yet in the repo" below):
`r0000101001001001001_0001_wfi01_f158_wcs.asdf` (imaging WCS product, both `wcs_l1` and
`wcs_l2`), `r0000201001001001001_0001_wfi01_grism_wcs.asdf` (grism WCS product), and
`Build16/new_distortion.asdf` (a pre-launch pysiaf-derived distortion reference file — the
"functionally equivalent to SIP" file type the original pds9 report singled out).

- [x] Hand-extract a real Roman file's WCS YAML subtree. Used the dedicated small
      `_wcs.asdf` product (49KB) rather than a full `_cal.asdf` (which also carries the
      multi-hundred-MB pixel arrays) — the Roman Data Workshop ships these WCS-only files
      specifically, and they contain the exact same GWCS structure. Key name in this product
      is `wcs_l2`/`wcs_l1` (both under `roman:` directly, not nested under `roman.meta` as
      the earlier partial `_cal.asdf` inspection suggested — the key location isn't fixed
      across Roman product types, worth remembering for Phase 3's path logic).
- [x] Resolve every block-sourced `core/ndarray` node reachable from that subtree against
      **real binary block bytes**, not placeholders. Wrote a real ASDF block-index +
      block-header parser (magic `\xd3BLK`, big-endian header fields per the
      asdf-standard file_layout spec) and a `source: N` → inline `data:` substitution pass.
      **Important, concrete finding: these real files use `lz4` block compression, not
      `zlib`.** Design doc §9 said "at minimum zlib... lz4 can be deferred until a file
      using it is actually seen in practice" — one is now seen. ASDF's own `lz4` framing
      (confirmed against `asdf/_compression.py` upstream) chunks the payload with a 4-byte
      big-endian compressed-length prefix per chunk, each chunk itself in `lz4.block`
      format (which carries its own 4-byte little-endian uncompressed-size prefix,
      `python-lz4`'s own convention) — not a bare LZ4 frame. **Phase 2's container reader
      needs `lz4` support, not just `zlib`, and per this project's "don't rely on whatever
      happens to be on the build machine" vendoring convention (design doc §7c/§9), that
      likely means vendoring `liblz4` the same way as `libyaml`/`zlib`, not just linking
      the system copy this dev machine happens to have.** Done — see the `lz4` vendoring
      entry under Phase 0 above (added right after this finding prompted it).
- [x] Write a minimal C test harness that calls `astYamlChan`/`astRead` on the resolved
      text and confirms it returns a usable `AstFrameSet` — reused as-is against all three
      real files below (`SourceFile=` pattern + the ~19 `Plot`/`Plot3D` stub functions).
- [x] Record any further tag/version/semantics gaps beyond the original 8 — this is
      exactly where the schedule moved (design doc §13 flagged this as the highest-variance
      step, correctly). Full results:
  - **`wfi01_f158_wcs.asdf` (`wcs_l2`)**: first pass hit `asdf/transform/scale-1.4.0`
    "unsupported minor version" — a genuinely new gap the original 8-tag check (based on a
    partial `_cal.asdf` download) never saw, because `Scale` simply didn't appear in that
    partial excerpt. Diffed its schema (same pure-version-bump pattern as before), patched,
    rebuilt, retested — hit `divide-1.4.0`, then `affine-1.5.0`, then `constant-1.6.0`, then
    `identity-1.4.0`, each in turn, each diffed and confirmed pure-version-bump/relaxation-
    only, each patched. **5 additional `MAKE_TEST` ceilings raised** (`Scale` 1,3→1,4;
    `Divide` 1,3→1,4; `Affine` 1,4→1,5; `Constant` 1,5→1,6; `Identity` 1,3→1,4), on top of
    the original 5 from earlier — **10 total, all in `ast/src/yamlchan.c`, all following the
    identical due-diligence pattern (diff the real schema pair on GitHub before bumping)**.
    After all 10: `astRead` → `FrameSet`, `Nframe = 5`, `astTran2(0.3,-0.2)` →
    `(-1.57103, 1.15147)` — clean pass, sane numeric output.
  - **`grism_wcs.asdf` (`wcs_l2`)**: passed cleanly on the *first* try against the
    now-fully-patched ceiling set — every tag it uses (`wcs`/`step`/`frame2d`/
    `celestial_frame`/`spherical_cartesian`/`compose`/`concatenate`/`polynomial`/
    `remap_axes`/`scale`/`shift`) was already covered. `Nframe = 4`. Good cross-check that
    the 10 patches generalize across Roman product types, not just the one file that
    happened to demand them.
  - **`new_distortion.asdf`**: a *different kind* of gap, not a version ceiling. This file's
    interesting content (`roman.coordinate_distortion_transform`) is a **bare
    `!transform/compose-1.2.0` value with no `gwcs/wcs` wrapper at all** — exactly the
    "pre-launch distortion file, functionally SIP-equivalent" shape the original pds9 email
    described. Feeding it to `astRead` directly (even under a key literally named `wcs:`)
    failed with `"No suitable object was found in the supplied YAML text"` — **AST's public
    `astRead()` top-level dispatch only recognizes a proper `gwcs/wcs` document shape; it
    will not construct a bare transform as the document root, key name notwithstanding.**
    Fix, confirmed working: wrap the bare transform as the `transform:` of a synthetic
    2-step `gwcs/wcs` shell (`step 1`: detector frame + the real transform; `step 2`: a
    bare terminal frame) before handing to AST. After wrapping: `astRead` → `FrameSet`,
    `Nframe = 2`, `astTran2(0.3,-0.2)` → `(1616.98, -955.744)`. **This is a real Phase 3
    design requirement, not optional**: the production bridge needs to detect "is this
    subtree already a `gwcs/wcs` object, or a bare transform?" and synthesize the shell in
    the latter case — pre-launch distortion-only files are exactly the case the whole
    project started from (per the original user email), so this can't be skipped.
  - **New, unrelated-to-versioning gap, not fixed**: `bounding_box` (present on real
    `compose` transforms, e.g. `!transform/property/bounding_box-1.2.0`) has zero handling
    anywhere in `yamlchan.c` — not a version-ceiling miss, just no code path reads that key
    at all. AST still produces a working, coordinate-correct `FrameSet` without it, but the
    GWCS-defined valid-pixel-domain is silently dropped, not approximated. Logged for
    Phase 3, not attempted.

Consolidated and saved under `utils/asdf_gwcs_probe/` (cleaned-up, parameterized versions
of the throwaway scripts above, plus the 3 real sample files and a README walking through
the pipeline): `parse_blocks.py`, `resolve_ndarray.py`, `extract_subtree.py`,
`yamlchan_probe.c`. Re-ran all three real-file cases through the consolidated tools before
committing anything, not just the original ad-hoc scripts — same results reproduced exactly
(`wfi01_f158_wcs.asdf` → `Nframe=5`, `grism_wcs.asdf` → `Nframe=4`, `new_distortion.asdf`
with `--bare-transform` → `Nframe=2`, all three with a working `astTran2`). These are
developer/debugging tools for iterating on the AST bridge, not part of the DS9 build or the
eventual Phase 2 C++ container reader — see `utils/asdf_gwcs_probe/README.md`.

## Phase 2 — Container reader + pixel path (no WCS yet)

**Status: done, validated against a real, full 197MB Roman file, not a synthetic one.**

- [x] **Architecture pivot from the original design doc sketch, decided explicitly with the
      user before implementing** (not a silent deviation): rather than a new C++
      `FitsImage` subclass in `tksao/frame/` wired in via a new grammar keyword in
      `parser.Y`/`lex.L`, this is **Tcl-driven with one small new C command**. Reasons:
      (a) avoids any bison/flex regeneration, which carries real toolchain-version risk on
      this checkout (this box's `bison` 3.8.2 vs. the checked-in files' stamped `2.3`,
      exactly the class of risk CLAUDE.md warns about); (b) DS9's existing `array ... var
      ...` load command (`fitsy/var.C`'s `FitsArrVar`, reads pixel bytes straight from a
      Tcl global variable, no temp file) was already sitting there, fully working, and
      reachable from Tcl with zero grammar changes — see design doc §8 point 1/2 for the
      updated writeup.
- [x] New ASDF container reader — `ds9/library/asdf.tcl` (magic line, YAML tree via
      targeted `regexp`/`string first` rather than a general YAML parser — see below —
      binary block index + per-block header via `binary scan`, decompression per codec).
  - [x] `AsdfTreeText` — isolate the YAML tree text (everything before the first `\xd3BLK`
        magic).
  - [x] `AsdfBlockIndex` — parse the trailing `#ASDF BLOCK INDEX` section into a list of
        byte offsets.
  - [x] `AsdfFindNdarray` — locate a top-level-under-`roman:` key's `core/ndarray` node and
        pull `source`/`datatype`/`byteorder`/`shape` via bounded regexp (not a full YAML
        parse — deliberately narrow, matches Phase 2's fixed-path scope). Validated against
        the real file's actual tree text before wiring into the full pipeline: correctly
        found `source=21 datatype=float32 byteorder=little shape={4088 4088}` for
        `roman.data`, matching independently-verified values from the Phase 1
        `utils/asdf_gwcs_probe` tooling.
  - [x] `AsdfReadBlock` — parse one block's header (magic/`header_size`/flags/compression/
        allocated/used/decoded, all via `binary scan`) and dispatch decompression by codec.
        Validated the exact header-field parsing against real captured bytes from block 21
        of the real cal file via standalone `tclsh9.0` (not yet inside `ds9`) before trusting
        it: got `compression=lz4 allocated=67101959 used=67101959 decoded=66846976`,
        matching the Python-side parse from Phase 1 exactly. Caught and fixed a real bug
        this way — an earlier draft's `binary scan ... Iu5 ...` line was wrong (a `count>1`
        format spec fills *one* list variable, not several positional ones); simplified to
        just what's actually used.
  - [x] `AsdfLz4DecompressPayload` — splits the lz4 payload into ASDF's chunk framing
        (4-byte big-endian compressed length per chunk) and calls the new
        `asdflz4decompress` C command once per chunk.
  - [x] `AsdfDatatypeToBitpix` — ASDF/numpy datatype name to FITS BITPIX, matching
        `fitsy/parser.Y`'s `[xdim=...,bitpix=...]` array-header grammar (confirmed the exact
        key spelling — `xdim`/`ydim`/`bitpix`/`arch`, `little`/`big` — by reading that
        grammar directly, not guessing). Currently covers `float32`/`float64`/`int16`/
        `int32`/`int64`/`uint8`; unsigned 16/32-bit are not mapped (not needed for Roman's
        `data` array, which is `float32`) and would need fitsy's separate unsigned-handling
        convention investigated before adding.
  - [x] **New C command, `asdflz4decompress` — revised into its own `tclasdf/` package**
        after the user flagged the first version's placement (a function written directly
        into `ds9/unix/ds9.C`, registered in `SAOAppInit`). That worked, but `ds9.C` is
        genuinely triplicated with real per-platform differences across `ds9/unix/`,
        `ds9/macos/`, and `ds9/win/` (confirmed by diffing all three, not assumed) — meaning
        the same ~35-line function would have needed hand-duplicating and keeping in sync
        three times forever. Restructured as `tclasdf/`, a small standalone Tcl C extension
        matching the project's own `vector`/`fitsy`/`tclsignal` pattern exactly (its own
        `configure.ac`/`Makefile.in`/`tclconfig/`), so the logic exists once
        (`tclasdf/asdf_ext.c`) and each platform's `ds9.C` only needs the same tiny 3-line
        `Tcl_StaticPackage` registration block every other vendored package already has —
        no large duplicated function body anywhere.
    - Templated directly off `tclsignal/` (copied its scaffold, renamed throughout) rather
      than starting a TEA package from scratch.
    - **Found this environment's `aclocal` cannot regenerate `tclconfig/tcl.m4`-based
      packages at all** — confirmed it fails identically on an untouched copy of
      `tclsignal` itself, so it's a pre-existing toolchain quirk, not something this work
      introduced. Worked around it by hand-adapting `tclsignal`'s own already-generated
      `configure`/`aclocal.m4` (sed-renaming `tclsignal`→`tclasdf`) instead of regenerating
      from `configure.ac` — safe here specifically because the only real difference from
      `tclsignal`'s own `configure.ac` is naming (no new `AC_CHECK_LIB` logic was kept —
      see below).
    - lz4 itself isn't found by any TEA macro, so `make.include`'s `tclasdf` recipe passes
      `CPPFLAGS`/`LDFLAGS`/`LIBS` explicitly on the `./configure` command line — matching
      the precedent of `ast`'s explicit `CPPFLAGS` and `tls`'s `--with-openssl-dir`, rather
      than adding new autoconf detection logic. (An `AC_CHECK_LIB([lz4], ...)` addition was
      tried first but reverted, once passing the flags directly turned out to need no new
      configure.ac logic at all, keeping the file a pure rename of `tclsignal`'s.)
    - Hit and fixed a second, real build-system bug this surfaced: `ds9/unix/configure`
      (and `macos`/`win`) are **checked-in, pre-generated files**, not rebuilt from
      `configure.ac` automatically — editing `configure.ac` alone silently did nothing
      (confirmed by the literal string `@tclasdf_LIB_SPEC@` surviving into the final
      Makefile unexpanded). Since the same `aclocal` breakage rules out a full
      regeneration here too, fixed it the same way: located `tclsignal`'s own
      already-generated `TEA_PATH_CONFIG`/`TEA_LOAD_CONFIG` shell block inside
      `ds9/unix/configure` (lines 6305–6557), duplicated and renamed it for `tclasdf`, and
      separately added `tclasdf`'s 8 `_LIB_SPEC`/`_BIN_DIR`/etc. variable names to the
      `ac_subst_vars` list near the top of the file (a second, easy-to-miss registration
      point `config.status` needs independently of the shell logic that computes the
      values — missing it was the actual cause of the unexpanded `@tclasdf_LIB_SPEC@`).
      Caught and fixed a case-sensitivity bug in the rename along the way (`TCLSIGNAL_STUB_
      LIB_SPEC`'s uppercase form wasn't touched by a naive lowercase-only substitution).
      Repeated for `ds9/macos/configure`, duplicating its own `tclsignal` block the same way
      (verified against `ds9/macos/configure.ac`'s original `TEA_PATH_CONFIG` ordering that
      `tclsignal` was directly followed by `tclxml`, to find the correct block boundary, and
      re-checked the new block for the same uppercase-leftover bug — none found this time).
      `ds9/win/configure` never had `tclsignal` support to begin with (no POSIX signal
      handling on Windows), so there was no matching block to copy there; used the adjacent
      `fitsy` block instead (`TEA_PATH_CONFIG(fitsy)` is directly followed by
      `TEA_PATH_CONFIG(tclasdf)` in `ds9/win/configure.ac`, so its generated block is the
      right template — every `TEA_PATH_CONFIG`-generated block has the same shape regardless
      of which package it names). Both `macos` and `win` also got the `ac_subst_vars`
      registration and the cosmetic `--with-tclasdf` help-text line, mirroring `unix`. All
      three patched `configure` files pass `bash -n` syntax checks. **`ds9/macos` is now
      build-tested too** (2026-09-16): a real macOS build expands `tclasdf_LIB_SPEC` and
      links `lib/tclasdf1.0/libtcl9tclasdf1.0.a` into `SAOImageDS9.app`, so the hand-copied
      `TEA_PATH_CONFIG` block and `ac_subst_vars` registration are confirmed correct there,
      not just syntactically valid. Originally **only `ds9/unix`
      was actually build-tested** (see the real-data re-run below) — this environment has no
      macOS or Windows cross-toolchain, so the `macos`/`win` `configure` hand-patches are
      reasoned from the same known-working pattern but unvalidated by an actual build, same
      caveat as every other `macos`/`win` wiring change made in this phase.
  - [x] Build wiring, revised: `ds9/unix|macos|win/Makefile.in` each get a
        `tclasdf_LIB_SPEC= @tclasdf_LIB_SPEC@` declaration and `$(tclasdf_LIB_SPEC)` added
        to `EXT_SPECS`; `$(libdir)/liblz4.a` (the transitive dependency `tclasdf`'s own
        `_LIB_SPEC` doesn't carry) stays explicit in `LLIBS` alongside `libast.a`/
        `libfuntools.a`/`libxpa.a`, in all three platform Makefiles now, not just `unix`.
        The earlier `-I$(includedir)` addition to `ds9/unix/Makefile.in`'s `INCLUDES` was
        reverted — no longer needed since `ds9.C` itself doesn't include `lz4.h` anymore.
  - [x] Hit and fixed a real Tcl 9 compatibility bug along the way: `-encoding binary` was
        removed in Tcl 9 (`fconfigure` now errors: `"unknown encoding \"binary\": No longer
        supported"`); the correct idiom, confirmed by checking how `load.tcl`'s own
        `channel` load case already does it, is `-translation binary -encoding iso8859-1`.
  - [x] Confirmed `Su`/`Iu`/`Wu` (big-endian unsigned 16/32/64-bit) is Tcl's real `binary
        scan` syntax by reading `tcl9.0/doc/binary.n` directly rather than assuming, and
        confirmed concatenated specs like `WuWuWu` (three 64-bit fields, one call) work via
        a standalone round-trip test before relying on it.
- [x] Resolve `roman.data` to its `core/ndarray` block and wire the decoded buffer into the
      existing `Arr*`-family ingestion path — done via `FitsArrVar`/`var`, not
      `loadArrAllocCmd`/`alloc` as originally guessed, since a Tcl-variable handoff needs no
      temp file. No cfitsio/`fitsy` ASDF-specific parsing anywhere.
- [x] **Visually confirmed** a real Roman file's image renders in DS9, no WCS attached yet —
      not just "dimensions match," an actual look at the rendered pixels:
  - Downloaded the *full* real `r0000101001001001001_0001_wfi01_f158_cal.asdf` (206,736,815
    bytes — the earlier Phase 1 work used WCS-only sample files with no pixel data at all).
  - `AsdfLoadArray <file> data` returned success in ~5.3 seconds; `$current(frame) get fits
    width/height/bitpix` reported `4088 4088 -32`, matching the real file's actual
    `roman.data` shape/datatype exactly.
  - `$current(frame) clip mode zscale` + `zoom to fit` + `saveimage png` produced a 545KB
    PNG (a first attempt at the default, unscaled clip limits produced a ~4KB
    near-solid-color PNG — not a failure, just uninformative scaling, dominated by one large
    negative outlier in the real pixel range) — **visually a recognizable WFI starfield**,
    point sources with the expected blocky pixel-sampled PSF shape, plus a band of
    detector-amplifier-boundary artifacts along one edge that's a known real feature of WFI
    data, not a rendering bug.
  - Pixel value range from `$current(frame) get minmax`: `-187169 6059.94` (raw), zscale
    clip settled on `-0.0365814 0.451135` — both look like plausible calibrated
    detector-count ranges, not degenerate/garbage values.
  - **Re-ran this exact test after the `tclasdf` refactor above** (not just re-checked the
    build) — identical result: `AsdfLoadArray` succeeded in ~5.2 seconds, same
    `4088 4088 -32`, and `saveimage png` produced a byte-for-byte identical 545,345-byte
    PNG to the pre-refactor run. The architecture change is a real refactor, not a
    regression.

**Known limitations, deliberately deferred, not oversights:**
- Reads the *entire* file into a Tcl string before doing anything (`AsdfLoadArray`'s `read
  $fh`) rather than seeking/streaming just the tree text and the one target block. Fine for
  a 197MB proof-of-concept load taking ~5 seconds; real production code (Phase 3+) should
  read lazily instead, particularly once files get larger or loads need to feel instant.
- `AsdfFindNdarray`'s path resolution is hardcoded to "one level under `roman:`, no further
  nesting" (matches `roman.data` exactly) — arbitrary/nested paths are explicitly Phase 4
  scope (`path:inner/path` or a tree browser), not attempted here.
- Only tested on the science `data` array of one real file. `dq`/`err`/`var_poisson` (seen
  as siblings in the real tree during Phase 1) should parse identically in principle
  (same `core/ndarray` shape) but haven't been tried.
- Not tested on macOS/Windows (same caveat as every build-system change this session) —
  `asdflz4decompress` is pure standard C against `lz4.h`, so no obvious platform-specific
  risk, but genuinely unverified.

## Phase 3 — WCS path + Roman-native "Open ASDF"

- [x] **Production version of the Phase 1 bridge — done, validated end-to-end against the
      same real 197MB Roman cal file Phase 2 used, not a synthetic one.** Locates the GWCS
      subtree, resolves block-sourced ndarrays inline, feeds the result to `AstYamlChan`,
      and attaches the resulting `AstFrameSet` the way `FitsImage::fits2ast()`/
      `replaceWCS()` already do for FITS files — architecture and full design writeup in
      `PHASE3_WCS_HANDOFF.md` (written mid-task when a machine switch looked necessary;
      superseded once that turned out unnecessary — kept for the design record and the real
      bugs it documents).
  - [x] **No `parser.Y`/`lex.L` changes needed, matching Phase 2's own precedent.**
        Investigated reusing the existing `wcs replace <which> <filename>` command
        (`Base::wcsReplaceCmd`, already wired) instead of adding a grammar keyword — the
        *filename* overload, specifically, not `wcs replace text <which> <string>`: tracing
        exactly how a `$frame` command reaches `tksao/frame/lex.L` (the full Tcl argv is
        rejoined into one line and re-lexed byte-by-byte, `tksao/widget/widget.C`'s
        `WidgetObjParse` → `Base::parse`) found that the `text` overload's `STRING` token
        rules (`"[^"]*"`/`{[^}]*}`, no escaping) would truncate/corrupt real YAML containing
        literal `"`/`{`/`}` — a structural problem independent of any character-encoding
        concern, plus a real (separate, pre-existing, not fixed here) UB bug in the lexer's
        catch-all rule (`toupper()` on a signed `char`, undefined for bytes ≥0x80). Fix:
        write the extracted GWCS YAML to a Tcl temp file (`file tempfile`, the same idiom
        `ds9/library/util.tcl`'s `GIFWritePhoto` already uses) and pass the *filename*
        through instead — a short, delimiter-free string the lexer handles trivially,
        keeping the actual YAML bytes off the grammar entirely.
  - [x] `tksao/frame/fitsimage.{h,C}`: `yaml2ast()` (sibling to `fits2ast()`, using AST's
        generic Channel `source` callback — `AstYamlChan` has no `astPutFits`-style
        in-memory loader — via the same `astChannelData`/`astPutChannelData` idiom
        `fits2TAB`/`astTableSource` already establishes in this file); `initWCS()` gained an
        optional `yamltext` parameter (bypasses `fits2ast()`/the Chandra LONG/NPOL special
        case entirely when set); `replaceWCS(istream&)` sniffs the stream's first line
        (`#ASDF`/`%YAML`/bare `wcs:` — none valid FITS-card syntax, so this can't
        false-positive) and dispatches to the new `replaceWCSYaml()` instead of
        `parseWCS()`. `tksao/frame/basecommand.C`/`base.h`/`parser.Y`/`lex.L`: **zero
        changes** — confirmed via `git diff` showing no delta in any of them.
  - [x] `ds9/library/asdf.tcl`: ported the Phase 1 Python spike's subtree-extraction and
        ndarray-resolution logic to Tcl (`AsdfExtractKeySubtree`, `AsdfAsWcsShell`,
        `AsdfIsBareTransform`/`AsdfWrapBareTransform`, `AsdfResolveNdarrays`,
        `AsdfBinaryFmt`/`AsdfNest`/`AsdfNestValues`, `AsdfExtractWcsText`), wired into
        `AsdfLoadArray` as a best-effort step after the pixel load succeeds.
    - **Real, confirmed finding, not in the original design doc**: the WCS key's location
      is genuinely different between product types, beyond what Phase 1 already found. The
      small WCS-only distribution products use `wcs`/`wcs_l2`/`wcs_l1` directly under
      `roman:` at 2-space indent — but the *full* science-product `*_cal.asdf` file (the
      one with real pixel data, downloaded for Phase 2) puts it at `roman.meta.wcs`, 4-space
      indent, matching the design doc's original assumption exactly. `AsdfExtractWcsText`
      tries the 2-space direct-under-`roman:` keys first, then falls back to the 4-space
      `meta:`-nested `wcs` key.
    - **Real embedded-ndarray finding, also not optional**: every real WCS subtree tested
      (all 3 Phase 1 sample files, and the full cal file's `roman.meta.wcs`) contains
      multiple block-sourced `core/ndarray` coefficient arrays (Polynomial transform
      matrices, an Affine matrix/translation) — resolving these inline is required for
      *any* real Roman GWCS document to parse, not a rare edge case, confirming Phase 1's
      note about this. `AsdfResolveNdarrays` reuses `AsdfBlockIndex`/`AsdfReadBlock` (the
      same block-decompression machinery Phase 2 built) against the *original full file's*
      raw bytes, since block offsets are global to the file, not the extracted subtree.
    - **Two real Tcl-regex bugs hit and fixed while writing `AsdfResolveNdarrays`**, both
      confirmed against the real multi-hundred-line subtree, not assumed: (1) Tcl's `.`
      matches newlines by default (unlike most other regex flavors) — a naive `.*\n` per
      mid-line let one "line" swallow arbitrarily many real lines; fixed with `[^\n]*`. (2)
      Tcl's regex engine picks an overall leftmost-*longest* match (POSIX semantics), not
      Perl-style leftmost-shortest, so even a properly line-bounded `*?` non-greedy loop
      still matched through hundreds of extra lines to a wrong, much-later `shape:`
      occurrence; fixed with an explicit `(?!shape:)` negative lookahead so a `shape:` line
      can never be consumed by the generic loop at all, removing the ambiguity instead of
      relying on greediness.
    - **The standalone document needs its own `%TAG !` directive**, mirroring Python's
      `extract_subtree.py`'s `HEADER` constant exactly — real GWCS subtrees use YAML's
      short-tag shorthand (`!transform/compose-1.4.0`) throughout, not just at the document
      root, and that shorthand only expands to the full `tag:stsci.edu:asdf:...` form with
      this directive present. Missing it produced a real, confirmed AST error ("wrong
      prefix") on the very first real-file test.
  - [x] **A second, distinct integration gap found and fixed, past just building `ast_`
        correctly**: `scanWCS()` (existing code, unchanged) populates `wcs_[]` — the flags
        `hasWCS()`/`has wcs wcs` actually query — by reading each member AST Frame's
        `Ident` attribute and mapping FITS's alternate-WCS lettering convention (`' '` →
        primary, `'A'`–`'Z'` → alternate), which `fits2ast()` gets for free from
        `astRead(FitsChan)`. A GWCS document has no equivalent concept — none of its Frames
        carry an `Ident` at all — so `ast_` was genuinely valid (confirmed via a standalone
        AST test program reproducing the exact same source-callback mechanism outside DS9)
        while `has wcs wcs` still reported false, silently gating off WCS-dependent UI
        functionality even though the math worked. Fix: `yaml2ast()` explicitly sets
        `Ident=" "` (the "primary/unlettered WCS" marker) on the FrameSet's current member
        Frame specifically — `Ident` is a generic `AstObject` attribute, not Frame-specific,
        so setting it on the FrameSet container itself (tried first) has no effect on the
        member Frames `scanWCS()` actually inspects via `astGetFrame()`; it must go on the
        extracted Frame handle itself (a reference to the real stored Frame, not a deep
        copy).
    - Also hit and fixed, unrelated to any of the above: `Base::findAllFits(int which)`
      treats `which=0` as "stop immediately" (the loop condition itself is `while (ptr &&
      which)`), always returning `NULL` — `which` is 1-indexed, matching
      `ds9/library/wcs.tcl`'s own `dwcs(ext)` convention (`set dwcs(ext) 1`, never 0).
      Calling `wcs replace 0 ...` silently no-ops via the bare `result = TCL_ERROR;` branch
      with no `Tcl_AppendResult` call — an empty-message Tcl error, easy to misread as "no
      error, but nothing happened" as opposed to "wrong argument."
  - [x] **Validated real, independently-checkable results, not just "doesn't crash":**
    - All 3 Phase 1 sample files (`wfi01_f158_wcs.asdf`, `grism_wcs.asdf`,
      `new_distortion.asdf`) reproduce the *exact* `Nframe`/`astTran2` results already
      recorded in Phase 1 above, via the new pure-Tcl extraction path feeding the same
      `yamlchan_probe` tool — `(-1.57103, 1.15147)` / `Nframe=5`, `Nframe=4`, and
      `(1616.98, -955.744)` / `Nframe=2` respectively (the bare-transform-wrapping path
      exercised too, not just the common case).
    - The real 197MB `r0000101001001001001_0001_wfi01_f158_cal.asdf` (Phase 2's file):
      `AsdfLoadArray` still loads the pixel array in ~6 seconds, `saveimage png` still
      produces the byte-for-byte identical 545,345-byte PNG Phase 2 recorded (confirming
      the WCS-attach step is purely additive, no regression to the pixel path) — and now
      `$frame has wcs wcs` reports `1`.
      - **Correction to this entry's original numbers, found when re-validating on the macOS
        box.** It recorded `$frame get coordinates 2044 2044 wcs fk5 degrees` →
        `269.7077160072 65.9862233765` as "the image center." That command does not take
        image coordinates: `Base::getCoordCmd` (`basecommand.C:1428`) resolves its argument
        as `Coord::CANVAS` via `isInCFits(vv,Coord::CANVAS,NULL)` and returns the literal
        string `"0 0"` when the canvas point falls outside the frame. Those two figures were
        therefore canvas-coordinate readouts, not sky coordinates of the pixels named. The
        conclusion they supported (a real WCS, right region of sky) was still correct; the
        numbers were mislabeled. Use `crosshair <x> <y> image` + `xpaget ds9 crosshair wcs
        ... degrees` for an image→sky readout instead.
      - **Re-done properly, and the result is much stronger than "same region of sky."**
        Compared all four image corners against the file's own embedded
        `romancal.assign_wcs` footprint (`roman.meta.wcs_info.s_region`, `POLYGON ICRS
        269.986945544 65.974265112 269.986740134 66.097228761 269.676782229 66.097195774
        269.680113321 65.974342049`). DS9's readout at image (-0.5,-0.5), (-0.5,4087.5),
        (4087.5,4087.5), (4087.5,-0.5) matches all four corners to **≤0.0002 arcsec** — i.e.
        to the rounding of DS9's own 7-decimal output, across the full 4088² field. The
        -0.5 offset is exactly the expected 1-based-FITS vs 0-based-numpy origin convention
        (checked by walking (0,0)/(0.5,0.5)/(1,1)/(-1,-1) and confirming the residual was a
        constant one-pixel shift, not a divergent error). So the GWCS transform DS9 computes
        through `AstYamlChan` is *numerically identical* to romancal's own, not an
        approximation of it — which is the specific claim the whole project exists to make
        against pds9's SIP-fitting approach.
      - Pixel path re-confirmed visually on macOS: `saveimage png` renders the same
        recognizable WFI starfield (blocky pixel-sampled PSFs, the known
        detector-amplifier-boundary artifact band along one edge) with `get minmax` giving
        the identical `-187169 6059.94` Phase 2 recorded. The PNG is *not* byte-identical to
        the Linux run's 545,345 bytes (this one is 278,005) — `saveimage` captures the
        canvas at the current window size, so that comparison is only meaningful within one
        machine/WM, not across them.
- [x] **Defined fallback behavior on failure — done, and exercised against real files that
      actually hit each path, not reasoned about.** Four new downloads made this testable
      (see the "sample files" note at the end of this phase): `*_segm.asdf` genuinely has no
      WCS subtree at all, and `roman.amp33`/`roman.border_ref_pix_*` are genuinely rank-3.
  - `AsdfLoadArray`'s failure paths, before this pass, either crashed with a raw Tcl error
    or — worse — loaded silently wrong data. Each now reports a specific message and returns
    0, confirmed by a headless harness driving the real files:
    - Missing/unreadable file: `open`/`read` were uncaught, so a raw Tcl error escaped to
      the caller. Now caught → `Unable to load <fn>: <reason>`.
    - **Non-ASDF file: no magic check existed at all.** A FITS file fell through to the tree
      walk and failed with a confusing `could not find ndarray roman.data`. New `AsdfIsAsdf`
      checks the mandatory `#ASDF ` first-line magic up front → `ASDF: not an ASDF file`.
    - **Rank > 2 was a real silent-corruption bug, not just a bad message.** `xdim`/`ydim`
      are taken as `shapelist[1]`/`[0]`, so a rank-3 array's third axis just fell off the
      end and the frame loaded as the wrong 2-d shape with no complaint — e.g. `roman.amp33`
      (`[10,4096,128]`) would have rendered as a 4096×10 frame. Now rejected explicitly →
      `ASDF: unsupported ndarray rank roman.amp33 [10, 4096, 128]`.
    - `AsdfReadBlock` returning `{}` (bad block magic at the indexed offset) was `lassign`ed
      into empty `compression`/`decoded` and loaded as an empty buffer. Now checked.
    - Short/truncated block: fitsy's array path trusts the declared dimensions and never
      checks the buffer against them, so a short decompression would have rendered real
      pixels followed by whatever memory followed. Now length-checked against
      `xdim*ydim*|bitpix|/8`.
  - WCS attach: the single blanket `catch` that swallowed everything is replaced by three
    distinguished outcomes — no subtree found is normal and silent (real case: `*_segm.asdf`),
    while a subtree that IS found but that extraction or AST then rejects reports via
    `Warning` (routes to `ds9(msg)` for XPA/SAMP, a non-modal notice in the GUI) and leaves
    the pixel load standing. Factored the temp-file transport into `AsdfAttachWcs` so it
    stops swallowing its own errors.
  - Added `uint16` → BITPIX `-16`. That is not a real FITS BITPIX — it is fitsy's own
    private code for unsigned 16-bit (`fitsy/parser.Y`'s compact `atype` rule maps `'u'` to
    it, and `FitsFile::validParams` in `fitsy/file.C` accepts it). Read that switch directly
    rather than assuming: the complete set fitsy accepts is exactly
    `{8, 16, -16, 32, 64, -32, -64}`.
  - **Real datatype gap this surfaced, not fixed — needs a decision.** `uint32` and `float16`
    have no representation in that set, and both occur on real Roman science arrays:
    `*_segm.asdf`'s `roman.data` (the segmentation map, the whole point of that product) is
    `uint32`, and every `*_cal.asdf`'s `roman.var_poisson` is `float16`. They now fail
    cleanly (`ASDF: unsupported ndarray datatype uint32`) rather than being coerced to a
    narrower or differently-signed type, but that means **DS9 cannot display a Roman
    segmentation map at all today**. `uint32` → BITPIX 64 is exactly lossless and `float16` →
    `-32` is too, but converting 4088² values in pure Tcl is far too slow — both would want a
    widening command in `tclasdf/` alongside `asdflz4decompress`. Deferred, not attempted.
- [x] **Header/metadata display — done.** The YAML tree text goes verbatim into the same
      `SimpleTextDialog` widget the FITS header viewer already uses (`header.tcl`'s
      `DisplayHeader`), inheriting its Save/Print/Find menus for free.
  - Design doc §8 point 4 anticipated needing a pass to "report block-sourced arrays by
    shape/dtype rather than dumping them." **Not needed** — ASDF never writes an array
    inline in the tree, only a `source: N` reference plus `datatype`/`shape`, so the tree is
    already exactly the right thing to show. Confirmed on the real 197MB cal file: its whole
    tree is 61,442 bytes of readable YAML.
  - The tree is cached in Tcl (`asdf(tree,$frame)`/`asdf(file,$frame)`), not on the C++
    side, because nothing under `tksao/` ever sees the ASDF container — the frame receives
    only a raw pixel buffer through the array/var path, and its synthetic FITS header
    carries nothing but the dimensions DS9 itself supplied.
  - **Cache lifecycle, which is the part that can silently go wrong**: cleared in
    `ProcessLoad` (`load.tcl`) alongside the existing `BookmarksClearFrame` call, under the
    same "not a layer load" guard — that is the one place every format's load funnels
    through, so a FITS file loaded over an ASDF frame cannot show the previous file's tree.
    Also cleared in `ClearFrame` (`frame.tcl`) on unload. Note the ordering constraint:
    `AsdfLoadArray` must set the cache *after* its `ProcessLoad` call, not before, or
    `ProcessLoad` wipes it immediately. Hooking `DestroyHeader` instead would have had the
    same problem from the other direction (`FinishLoad` → `LoadUpdate` → `DestroyHeader`
    runs after `AsdfLoadArray` returns).
  - Routed the `header` XPA/SAMP command surface too (`headerparser.tac` →
    `DisplayHeaderCmd`/`CloseHeaderCmd`/`SaveHeaderCmd`), not just the File menu. The `id`
    argument is a FITS extension number with no ASDF counterpart, so it is ignored on that
    path rather than given an invented meaning. `header close` closes the viewer but keeps
    the cache, so File→Header reopens it; only a reload or unload drops it.
  - Verified live over the `tcl`/XPA entry points against the real cal file: viewer opens
    titled with the ASDF filename holding all 61,442 characters; `xpaset -p ds9 header save
    <fn>` writes a byte-exact 61,442-byte copy of the tree; a FITS frame still routes to the
    FITS viewer (`hd-*` window created, ASDF window not) — no regression; and both the
    load-over and frame-unload paths clear cache and window together.
- [x] **Tcl UI — done, except the icon-button row (see below).** Rather than a separate
      `AsdfLoadDialog`, ASDF plugs into the *existing* dialog machinery as just another
      format, which turned out to need less new code than the design doc's sketch:
  - `LoadAsdfFile {fn layer mode}` in `asdf.tcl`, deliberately mirroring `LoadFitsFile`'s
    signature so `open.tcl`'s `Open` switch dispatches to it like any other format
    (`asdf {LoadAsdfFile $fn $layer $mode}`). `mode` has no ASDF meaning — for FITS it
    selects slice/mosaic variants, all FITS-container concepts — and is accepted only to
    keep that signature.
  - `OpenDialog` learned to pick a file box per format (`asdffbox` vs the hardcoded
    `fitsfbox`); `asdffbox` added to `stdfbox.tcl` with `*.asdf`/`*.ASDF` only — ASDF
    compresses per binary block *inside* the container, so unlike FITS there is no
    `.asdf.gz`-style compressed variant to list.
  - File → Open as → **ASDF**, at the top of that cascade (`mfile.tcl`).
  - Verified live: the menu entry resolves to `OpenDialog asdf`, and driving the exact call
    `OpenDialog` makes after the file chooser returns (`Open <fn> asdf {} {} wcs`) loads
    pixels, WCS and header tree together. That last check also confirms the cache-ordering
    fix holds through `Open`'s own trailing `FinishLoad`.
  - [ ] **Not done: the File icon-button row** (`iconstop.tcl`). pds9 put an ASDF button
        there, but every button in that row is `-image`-configured from a PNG in
        `ds9/icons/ui/` *and* `ds9/icons/ui_dark/`, so this needs an actual icon asset
        drawn to match the existing set. Left for the repo owner rather than inventing
        artwork — the menu entry above covers the functionality meanwhile.
- [x] **Scripting surface — done, and wider than the original bullet: XPA, SAMP/comm, and
      the command line.**
  - `ds9/parsers/asdfparser.tac` + `asdflex.fcl`, generated through the normal build rule
    (`ds9/make.include`'s taccle/fickle rules) — **no bison/flex anywhere**, these are the
    in-tree pure-Tcl generators. Grammar deliberately minimal: `asdf [new] <filename>`.
  - **Ran the same no-op-regen toolchain check CLAUDE.md prescribes for bison, on
    taccle/fickle, before generating anything** — regenerated the existing `fitsparser`/
    `fitslex` from their checked-in `.tac`/`.fcl` and diffed. Result: the *only* difference
    from the checked-in files is one comment line, the generator's own version banner
    (`taccle (version 1.4)` vs the checked-in `1.3`, `fickle (version 2.2)` vs `2.1`) —
    generated code byte-identical otherwise, and `fitsparser.tab.tcl` identical outright.
    So generating here is safe. Note the new `asdfparser.tcl`/`asdflex.tcl` therefore carry
    a `1.4`/`2.2` banner while every other checked-in parser says `1.3`/`2.1` — cosmetic
    only, but a real inconsistency the repo owner may want to resolve by regenerating all
    of them at once.
  - `ProcessAsdfCmd`/`AsdfCmdLoad` in `asdf.tcl`, parallel to `ProcessFitsCmd`/
    `FitsCmdLoad`. **One deliberate difference: no socket/stdin variant.** `FitsCmdLoad`
    tries `LoadFitsSocket` first so `cat x.fits | xpaset ds9 fits` works; that cannot work
    for ASDF, because resolving an ndarray's `source: N` requires the block index written
    at the *end* of the file, so a forward-only stream would have to be spooled to a temp
    file first and gains nothing over naming the file. Handed no filename it says so
    (`ASDF: a filename is required`) rather than silently doing nothing.
  - Registered in `xpa.tcl` (`xpacmdadd $xpa asdf` + `XPARcvdAsdf`, alphabetically after
    `array`), `comm.tcl`'s `CommSet` switch (the SAMP/hv dispatch), and `command.tcl`
    (`-asdf` option + an `asdf` branch in `CommandLineLoadBase`).
  - Verified live: `xpaset -p ds9 asdf <file>` loads in ~3s with correct WCS;
    `xpaset -p ds9 asdf new <file>` creates a frame first; `ds9 -asdf <file>` works from
    the command line; and both error cases surface properly as `XPA$ERROR ASDF: a filename
    is required` / `XPA$ERROR ASDF: not an ASDF file <fn>`. **SAMP itself was not exercised
    against a real hub** — `comm.tcl` routes to the same `ProcessAsdfCmd` proven over XPA,
    but that is reasoning, not a test.
- [x] **Tested against multiple public Roman Data Workshop sample files.** Downloaded four
      Build22 products beyond the single `f158_cal` used for design validation:
      `f158_cal` (197MB), `grism_cal` (197MB), `prism_cal` (197MB), `f158_segm` (64MB),
      plus the three small WCS-only files already committed under
      `utils/asdf_gwcs_probe/sample_data/`.
  - `grism_cal` and `prism_cal`: both load 4088×4088 float32 with a working WCS, and each
    one's corner readout matches **its own** embedded `romancal` `s_region` to 7 decimals
    (`269.9869459 65.9742650` vs `269.986945913 65.974265020`). Both render as recognizable
    fields under zscale, with genuinely distinct pixel data (`minmax` `-1437 7881.56` and
    `-13220.6 70236.4` respectively, vs `f158_cal`'s `-187169 6059.94`). So the GWCS bridge
    generalizes across Roman product types, not just the one file that drove the design.
  - `f158_segm`, and all three WCS-only samples: fail cleanly with specific messages
    (`unsupported ndarray datatype uint32`, `could not find ndarray roman.data`) — no
    crash, which is the fallback bullet above exercised on real files.
  - **The most important finding of this pass, and it is not good news.** Enumerating every
    top-level array in a real `*_cal.asdf` shows **only 1 of 15 is loadable today**:

    | key | datatype | shape | status |
    |---|---|---|---|
    | `data` | float32 | [4088, 4088] | **works** |
    | `dq` | uint32 | [4088, 4088] | unsupported datatype |
    | `err` | float16 | [4088, 4088] | unsupported datatype |
    | `var_poisson`, `chisq`, `dumo` | float16 | [4088, 4088] | unsupported datatype |
    | `amp33` | uint16 | [10, 4096, 128] | rank 3 |
    | `border_ref_pix_*` (4) | float32 | [10, 4096, 4] etc. | rank 3 |
    | `dq_border_ref_pix_*` (4) | uint32 | [4096, 4] etc. | unsupported datatype |

    This **falsifies Phase 2's recorded assumption** that "`dq`/`err`/`var_poisson` should
    parse identically in principle (same `core/ndarray` shape)" — the shape is indeed
    identical; the *datatype* is not, and that is what blocks them. `err` and `dq` are the
    two arrays users want most after `data`.
  - **Resolved — see the first Phase 4 bullet below.** Both widenings plus rank-3 cube
    support landed, taking a `*_cal.asdf` from 1 loadable array of 15 to all 15. Note that
    fixing the datatype alone did not make them *reachable*: `LoadAsdfFile` still hardcodes
    the `data` key, so selecting a sibling array needs the Phase 4 path/browser work.

## Phase 4 — Generalize beyond Roman's fixed paths

- [x] **Datatype widening + rank-3 cube support — done.** Closes the "only 1 of 15 arrays
      loadable" finding from Phase 3. All 15 top-level arrays in a real `*_cal.asdf` now
      load.
  - New `asdfconvert` command in `tclasdf/asdf_ext.c`, alongside `asdflz4decompress` and
    there for the same reason: too slow in Tcl over 16.7M elements. Signature
    `asdfconvert <bytes> <fromType> <fromByteorder> <toType>`; always emits little-endian
    so the caller passes a fixed `arch=little` rather than tracking it.
  - Two conversions, both **exactly lossless**, which is the only reason they are
    acceptable — a narrowing or sign-changing coercion would quietly alter pixel values:
    - `float16` → `float32` (BITPIX -32): covers `roman.err`, `var_poisson`, `chisq`,
      `dumo`.
    - `uint32` → `int64` (BITPIX 64): covers `roman.dq` and the `dq_border_ref_pix_*` set.
    `uint64` has no lossless target in fitsy's `{8,16,-16,32,64,-32,-64}` set and is
    deliberately still unmapped.
  - Rank-3 arrays now load as **data cubes** rather than being refused: fitsy's array
    grammar already has `zdim` alongside `xdim`/`ydim` (`fitsy/parser.Y`'s `arr` rule), so
    an ASDF row-major `[nz,ny,nx]` maps straight onto it. Covers `roman.amp33`
    (`[10,4096,128]`) and the four `border_ref_pix_*` arrays. Rank 4+ is still refused
    explicitly rather than silently truncated.
  - **Validated exhaustively, not by spot check.** Fed **all 65,536** half-precision bit
    patterns through `asdfconvert` and compared against Python's own `struct` `'<e'`→`'<f'`
    conversion: 63,490 exact byte matches, plus all 2,046 NaN patterns preserved with the
    correct sign *and* payload — zero mismatches. Signed zeros, the full subnormal range
    (min subnormal `5.960464477539063e-08` through max subnormal `6.097555160522461e-05`),
    min normal, max finite `65504.0`, and ±inf all confirmed individually.
    `uint32`→`int64` checked against `struct` for 14 boundary values in **both** byteorders
    — byte-identical, including everything above 2^31 that an `int32` coercion would have
    corrupted. Both error paths (unsupported pair, non-multiple buffer length) reject
    rather than misread.
  - **Cross-checked the real-file results independently of fitsy**, by decoding each block
    and computing min/max directly with `binary scan`, bypassing the array-load path
    entirely. Every DS9 reading was confirmed:

    | array | independent check | DS9 |
    |---|---|---|
    | `amp33` | genuinely all-zero (0 of 5,242,880 nonzero) | `0 0` |
    | `border_ref_pix_top` | genuinely all-zero | `0 0` |
    | `dq_border_ref_pix_left` | uniformly 2147483648 (2^31) | `2.14748e+09` |
    | `dq` | min 0, max 34677763, 949739 nonzero | `0 3.46778e+07` |

    That `dq_border_ref_pix_left` value is the concrete case for losslessness: a
    `uint32`→`int32` coercion would have rendered all 16,384 of those pixels as
    -2147483648. The two all-zero results are real properties of this simulated file, not
    a read bug — worth knowing before anyone reads `0 0` as a failure.
  - `roman.err` renders as a physically coherent error map: elevated error exactly at the
    `roman.data` star positions, same amplifier-boundary band, values 0.03-0.05 against
    data whose zscale range was -0.037 to 0.451. Each array loads in ~2.6s.

- [x] **Arbitrary-path support — done, and both options the bullet offered, not one.**
  - `AsdfEnumNdarrays` replaces the Phase 2 reader's "one level under `roman:`, 2-space
    indent" assumption with a real indent walker that finds every block-sourced
    `core/ndarray` anywhere in the tree and gives each a root-relative slash path
    (`roman/data`, or `roman/meta/wcs/steps/0/transform/forward/0/.../coefficients`).
    Sequence elements get a numeric component, which is not cosmetic: a GWCS document has
    a dozen `coefficients` keys and only the step index distinguishes them. Elements are
    pushed at a half indent level so a following element pops the previous one while
    leaving its parent key, and a deeper mapping key pops neither.
  - Checked the structural assumptions against every sample file *before* writing it
    rather than after: all `core/ndarray` nodes in all 7 files are block-style mapping
    values — none in a sequence, none in flow style — at consistent 2-space indent.
  - **Validated two independent ways.** First against a separately-written Python
    implementation of the same walk: byte-identical output across all 7 files, 123 nodes.
    That shares an algorithm though, so also checked against something that does not —
    the raw count of `!core/ndarray-` occurrences per file (27/2/23/23/16/8/24). Every
    file matched exactly, so no node is missed or double-counted.
  - **pds9's `<file>:<path>` convention** (`AsdfSplitPath`), so Roman users' existing
    muscle memory and scripts carry over to native loading. The split is decided by
    whether the text before the last colon actually names an existing file, not by
    pattern-matching — which is what makes `C:/data/x.asdf` safe on Windows, since `C` is
    not a file. Works everywhere a filename is accepted: File menu, `xpaset ds9 asdf`,
    `ds9 -asdf`.
  - A bare name still resolves as before (`data` → `roman/data`), so every Phase 2/3
    caller is unchanged; failing that, a *unique* match on the last path component is
    accepted (`dq` → `roman/dq`), and an ambiguous one is refused rather than guessed.
  - **Array browser** (`AsdfPathDialog`), shown by `OpenDialog` after the file chooser,
    reusing the existing `DisplayHeaderListDialog` widget rather than writing another one.
    Lists path/shape/datatype, sorted by element count descending so a file's science
    arrays sort above its 6×6 coefficient matrices — for the real cal file that is 25
    offered out of 27 enumerated, science arrays first. Only reads the first 4MB, since
    the tree precedes the first binary block; listing a 197MB file's contents never reads
    its pixels. A file with exactly one loadable array is selected without prompting.
  - Verified live for `roman/dq` (uint32→64), `roman/err` (float16→-32), the bare name
    `dq`, `roman/amp33` (rank-3 cube, depth 10), a fully-nested WCS coefficient path
    (6×6 float64), and a nonexistent path (clean error). `*_segm.asdf` — which could not
    be opened at all before this session — now renders as a textbook segmentation map,
    discrete labeled blobs on zero background, labels 0–135, positions matching the
    starfield in `roman/data`.
- [x] **Robustness pass — done.** Beyond the Phase 3 fallback work, three gaps the
      path/browser work exposed:
  - **`offset`/`strides` on a `core/ndarray` were being ignored, which is a silent-misread
    risk, not just a missing feature.** asdf-standard lets those describe a non-contiguous
    *view* into a block, in which case the block's raw bytes are not the array and handing
    them to the array load path renders wrong pixels with no complaint. No real file uses
    either — every `offset:` in the Roman files is a `!transform/shift` parameter, checked,
    not an ndarray field — so rather than implement striding on speculation, the enumerator
    records it and the loader refuses. Proved the refusal fires by building a synthetic
    file: took a real `*_segm.asdf`, inserted `offset: 128` on its `roman/data` node, and
    clawed the same number of characters back from a harmless URL value so the tree length
    stayed byte-identical and the trailing block index remained valid. Result: `ASDF:
    unsupported ndarray view roman/data (offset)`, while the unmodified file still loads.
  - A file with no trailing `#ASDF BLOCK INDEX` (optional in asdf-standard) reported
    "block index out of range", which describes a different problem. Now says the file has
    no block index — this reader does not walk blocks from the first magic instead.
  - The browser only offers arrays that will actually load — right rank, and a datatype
    that is either native or losslessly widenable — so nothing listed can fail on
    selection.
  - Known, deliberate limitation: an ndarray written in YAML *flow* style
    (`{source: 0, ...}`) is skipped by the enumerator rather than misread. None of the 7
    sample files use it.

## Backup/restore

Checked on request after Phase 4. A backup must be **portable** — written here, handed to
a colleague, restored on their machine — which is what decided the design below.

- [x] **ASDF frames now round-trip exactly.** Before: pixels and GUI state survived but the
      WCS and the ASDF metadata were silently lost. After: every measured field is identical
      across backup → quit → restore (`size/bitpix`, `minmax`, `has wcs wcs`, the 61,442-byte
      YAML tree, the sky corner to 7 decimals, cmap and scale).
  - Cause of the original loss: `BackupFrameLoadAlloc` saw `file,type array` and wrote the
    frame out as FITS (`ds9.fits`, 66MB). That keeps pixels but cannot keep a GWCS — it has
    no FITS-card representation to convert into — nor the YAML tree.
  - Fix: `AsdfLoadArray` records `loadParam(asdf,file)`/`(asdf,path)`, which
    `ProcessLoadSaveParams` already persists per frame for free, and `BackupFrameLoadParam`
    uses them to emit `LoadAsdfFile <file>:<path>` instead of the FITS conversion. New
    `BackupAsdfFile` copies the `.asdf` into the backup dir, deliberately mirroring
    `BackupFrameLoadMMap` including honoring `pds9(backup)` — so the backup carries the real
    file rather than a path that only exists on the machine that wrote it. Falls back to the
    FITS conversion if the source file is gone, so pixels survive even then.
  - **Portability verified for real, not assumed**: copied the backup to a different
    directory, *deleted the original source file*, and restored — everything came back
    identical.
  - A second, separate bug fixed on the way: `WCSBackup` (`ds9/library/wcs.tcl`) took its
    alternate-WCS branch whenever `has wcs alt` was true, which an ASDF frame reports
    (`replaceWCSYaml` sets `wcsAltHeader_`) even though it has no cards to write. That wrote
    a **1-byte** `ds9.wcs` and made the restore run `wcs replace text 1 {}` *after* the frame
    loaded, replacing a good WCS with nothing. Now skipped when the header is empty.
    Confirmed the genuine FITS alternate-WCS path is unaffected: a replaced TAN WCS still
    writes 973 real bytes and restores to exactly its `CRVAL` (100, 20).
- [x] **Found and fixed a real Phase 3 bug this exposed, wider than backup: blocking dropped
      the GWCS entirely.** `Frame1 block to 1 1` — a *no-op* 1×1 block — left the frame with
      no WCS at all. Bisecting the restore script with probes located it precisely: the WCS
      was present immediately after `LoadAsdfFile` and gone ten lines later.
  - `FitsImage::resetWCS()` rebuilds the WCS whenever the image is rebuilt, deliberately
    discarding `wcsAltHeader_` and re-deriving from the image header. That is right for a
    user-supplied `wcs replace` override. But an ASDF frame's GWCS is the file's *own* WCS,
    not an override — it only went through the override mechanism as transport — and the
    image header has no WCS cards to fall back on, so the frame ended up with nothing.
  - Fix: `FitsImage` keeps the GWCS document itself in a new `wcsYaml_` member (the
    symmetric counterpart of the FITS path's cards living on in the header it re-reads), and
    `resetWCS()` reapplies it.
  - Verified the result is numerically correct, not merely present: at block 2×2 the frame
    halves to 2044² and image (-0.5,-0.5) reads `269.9870207 65.9742353`, which is exactly
    the unblocked (-1.5,-1.5) position to the 7th decimal — i.e. the block factor is applied
    to the GWCS correctly, one blocked pixel being two unblocked.
- Also fixed, pre-existing and unrelated to ASDF — see commit `2902603bd`: streaming a
  `VectorStr` with NULL members segfaults, so asking any WCS-less frame for a sky coordinate
  took DS9 down. Reachable from stock DS9 (`xpaset ds9 array` + `xpaget ds9 crosshair wcs`),
  no ASDF involved.

## Phase 5 — Stretch (open-ended, not scheduled)

- [ ] Broaden AST tag/version coverage as other missions' ASDF files are encountered.
- [ ] Contribute the version-ceiling bumps (and any other fixes) upstream to Starlink rather
      than carrying them as a permanent local patch. Now includes a genuine portability bug,
      not just our version ceilings: `LibYamlWriter` in `ast/src/yamlchan.c` declared its
      size argument as `long unsigned int` while libyaml's `yaml_write_handler_t` uses
      `size_t`. Identical on LP64 (macOS/Linux), different on **LLP64** (mingw: `long` is 32
      bits, `size_t` 64), so `yaml_emitter_set_output` gets an incompatible function pointer.
      Invisible until GCC 14, which promoted `-Wincompatible-pointer-types` from a warning to
      an error - and the tree's `-w` does not suppress errors. Its sibling `LibYamlReader`
      already used `size_t`, so the writer was simply inconsistent. Fixed locally; worth
      sending upstream since it breaks any Windows build of AST with YAML enabled.
  - **Second AST bug, found by the GWCS projection fixtures: both HEALPix branches are dead
    code.** `ReadSkyProjection()` has handlers for `/healpix-` and `/healpix_polar-`, but
    `IsASkyProjection()` ORs six family recognizers - conic, cylindrical, pseudo-conic,
    pseudo-cylindrical, quad-cube, zenithal - and HEALPix belongs to none of them. So
    neither tag was ever recognized as a sky projection, the handlers were unreachable, and
    any ASDF file using either loaded its pixels with no WCS at all. Fixed locally by naming
    both in `IsASkyProjection()`; `healpix` then agrees with its 1904-66 twin to 0.027".
  - **Third AST bug, also from the fixtures: `ReadLinear1d()` read an uninitialized
    variable.** It set `outa = offset`, then immediately overwrote it with `outa = 2*offset`,
    and never assigned `outb` at all before passing `&outb` to `astWinMap()`. So every
    `linear1d` transform was built from whatever was on the stack - arbitrary, and not even
    reproducible run to run. Fixed locally with the obvious 1-D WinMap corners (x=0 ->
    offset, x=1 -> slope+offset); `linear1d` then lands exactly on its closed-form expected
    value. This one is a plain coding error rather than a design gap, so it should be an easy
    sell upstream.
  - **Fourth, not fixed - `zenithal_perspective` is mapped to the wrong projection.**
    `ReadSkyProjection()` maps it to `AST__SZP` with `pv1=mu, pv2=gamma`. AZP and SZP are
    different projections and SZP's second and third parameters are phi_c/theta_c, so the
    result is out by ~6500" even with demonstrably correct parameters. Left alone because
    it needs an upstream decision about which AST projection AZP should map to (AST has
    `AST__AZP`), not a local patch.
- [x] **Test fixtures ready ahead of time**, living in the separate `Tests` repo (DS9's own
      test-suite checkout, `github.com/SAOImageDS9/Tests`) at `Tests/asdf/`, not in this
      repo — moved there from an initial `utils/asdf_fits_testsuite/` location once it was
      clear these are fixtures for that test suite, not this project's own dev tooling. 84
      small ASDF files (21 of the `Tests` repo's own `fits/` sample images x 4
      block-compression codecs: `none`/`zlib`/`lz4`/`bzp2`), covering every BITPIX type plus
      `BLANK`/`BSCALE`-`BZERO`/NaN/Inf edge cases. Deliberately flat (non-Roman-nested)
      trees, since these are for Phase 4/5's arbitrary-path generalization, not a regression
      check against the current Roman-only reader. `bzp2` was not supported by
      `AsdfReadBlock` when these were written — included anyway so broadening compression
      support would have a real fixture to build against, which is exactly how it played
      out (see "bzip2 vendored" below).
  - [x] The 4 `_blank` files (integer data with a `BLANK` sentinel) are written as numpy
        masked arrays, not converted to float+NaN the way astropy's default scaling would —
        `asdf` serializes this natively as a `mask:` sibling ndarray next to `data:`
        (confirmed by inspecting the written YAML, not assumed), keeping the original
        integer dtype intact. The first pass of this fixture set got this wrong (used
        astropy's default NaN-converting scaling for these too, silently promoting them to
        float and defeating the point of an integer-with-nulls fixture) — caught by the
        user asking directly "are you using the mask value?", not found independently.
  - [x] All 84 round-trip validated against the original FITS pixel values — NaN
        positions/values for the float files; mask positions, unmasked values, and dtype
        preservation for the 4 masked `_blank` files — both before and after the move to
        `Tests/asdf/` (path handling in the conversion script changed, since it now resolves
        `fits/` as a sibling directory within the same `Tests` checkout instead of reaching
        into this repo). Nothing has been committed in either repo yet. See
        `Tests/asdf/README.md` for the full file/codec breakdown and regeneration
        instructions.

- [x] **Ran the 84 fixtures through the real reader (2026-09-17) — and they immediately
      earned their keep by catching a silent-misread bug in the Phase 4 enumerator.**
  - **The bug**: asdf serializes a numpy masked array as a `mask:` ndarray *nested inside*
    the `data:` one, with the parent's own `datatype`/`shape` following *after* that nested
    block. `AsdfEnumNdarrays` collected every key inside a pending ndarray as a field of
    that one node, so the two got merged last-write-wins and `data` came back carrying the
    **mask's** `source:`. Loading `roman`-less `data` therefore read the boolean mask block
    as if it were the image.
    - Two different consequences, from one root cause: `char_blank` is `uint8`, and a
      `bool8` mask is also 1 byte/element, so 256×256 comes to the same 65536 bytes — the
      length check **passes** and it silently displays the mask. `short/int/long_blank` are
      wider, so the mask block is too short and the length check **catches** it with a clean
      error. The uint8 case is the dangerous one and is exactly the sort of thing only a
      fixture with a real masked array would find.
  - **Fix**: the enumerator's single pending node becomes a *stack*, so a nested
    `core/ndarray` pushes its own node instead of leaking fields into its parent. `data` now
    reports `source=0` and the mask appears as its own path, `data/mask`.
  - Also mapped `bool8` → BITPIX 8 (a direct, exact mapping — `bool8` is one byte per
    element in both numpy and asdf-standard), so a mask is viewable rather than rejected.
    `data/mask` loads as 256×256 bitpix 8, minmax `0 1`, and the array browser offers both.
  - **Regression guard worth keeping**: per file, the number of nodes the enumerator reports
    must equal the raw count of `!core/ndarray-` occurrences in the tree text. That is
    algorithm-independent, it would have caught this bug (the old code enumerated 1 node per
    `_blank` file where the raw count is 2), and it now holds for all 28 files checked
    (7 Roman + 21 fixtures, 148 nodes, zero mismatches).
  - **Results of the full run**, using DS9's own reading of the source FITS images as the
    reference rather than re-deriving expected values:
    - **63/63 of the `none`/`zlib`/`lz4` fixtures load, with dimensions matching 63/63 and
      `minmax` matching 63/63** — pixel values identical to what DS9 renders from the
      original FITS, across all 21 images × 3 supported codecs.
    - All 21 `bzp2` files fail with a single clean message, `unsupported ASDF block
      compression: bzp2` — the expected outcome, and the fixture set now gives bzip2 support
      something concrete to be built against.
    - 12 `bitpix` differences (4 base names × 3 codecs), all `_bscale`, all correct: the
      fixtures store BSCALE/BZERO-resolved physical values as float where FITS stores raw
      integers plus the keywords. `minmax` matches, which is the part that matters.
  - **The fixture README's expectation is now out of date, in a good way.** It says these
    flat trees "will **not** be found" by the reader, which was true of the Phase 2/3
    Roman-only path it was written against. Phase 4's enumerator resolves a bare `data` via
    its unique-last-component rule, so all 21 load without a Roman-style path. Worth
    correcting in `Tests/asdf/README.md` when that repo is next touched.
- [x] **Null pixels now follow the FITS integer-null convention — integers retained, nulls
      known, nothing promoted to float.**
  - DS9's existing machinery was already exactly right and needed no change:
    `FitsDatam<T>` keeps native integer storage and substitutes `NAN` only at the
    `getValueFloat()` boundary, and the min/max scan `continue`s past blank pixels
    (`tksao/frame/fitsdata.C`, ~12 sites). The whole job was *transport*: getting a `BLANK`
    value in.
  - **The array/var path cannot carry one.** fitsy's array-header grammar is
    `xdim`/`ydim`/`zdim`/`dim`/`bitpix`/`skip`/`arch` only (`fitsy/parser.Y`'s `arr` rule;
    confirmed there is no `blank` token in `fitsy/lex.L` either), and adding one would mean
    regenerating fitsy's flex scanner — which this checkout's flex cannot reproduce
    byte-identically. So that route was rejected, not overlooked.
  - **Route taken instead, with no grammar changes at all**: build a genuine minimal FITS
    in memory (`SIMPLE`/`BITPIX`/`NAXIS`/`NAXIS1`/`NAXIS2`/`BLANK`/`END`, 2880-padded) and
    load it through `FitsFitsVar`/`Base::loadFitsVarCmd` — the same no-temp-file
    Tcl-variable transport the array path already uses, but with a real header. Only masked
    integer arrays take it; everything else keeps the raw array path, so there is no cost to
    the common case.
  - New `asdfmaskblank` in `tclasdf/asdf_ext.c` does the mask→sentinel resolution and the
    byte-swap to FITS big-endian in one pass (too slow in Tcl over millions of elements).
    Sentinel choice, in order:
    1. If every masked pixel holds the same value **and no unmasked pixel holds it**, that
       is `BLANK` and the data is left untouched. This is the exact case a FITS→ASDF
       conversion produces, so the original `BLANK` is recovered losslessly — verified: the
       fixtures' `BLANK` values are 128/256/256/256 and those come back.
    2. Otherwise an unused extreme of the type, written into the masked pixels (min for
       signed, max for unsigned — `0` is too commonly real data to prefer for unsigned).
    3. If neither extreme is free, refuse rather than blank a genuine value.
  - Mapped integer datatypes to real FITS BITPIX (`uint8`→8, `int16`→16, `int32`→32,
    `int64`→64). `uint16`/`uint32` are deliberately absent: they would need FITS's
    `BZERO` unsigned-offset convention, no sample file has a masked one, and guessing at it
    untested is worse than falling back to the array path.
  - **Validated against DS9's own reading of the source FITS as the reference.** All 4
    `_blank` files × 3 supported codecs: BITPIX matches exactly (8/16/32/64 — no float
    promotion), null pixels report `blank` just as the FITS does, and sampled pixel rows are
    **byte-identical** to the FITS. Before this, a null pixel read back as its raw sentinel
    (`128`) instead of `blank`.
    - Worth recording *how* this was observed: the fixtures' `BLANK` values are all
      **interior** to the data range, so `minmax` and `bitpix` are identical either way —
      the full 84-file sweep shows **zero** diff before vs after. Only a pixel-level probe
      at a known blank coordinate reveals it. A test that only compared minmax would have
      called this feature working when it was not.
    - All five branches of the sentinel logic unit-tested directly, including the two subtle
      ones: a masked value that also occurs unmasked is rejected as `BLANK` (so a real pixel
      is never blanked), and a type with both extremes in use errors out rather than
      corrupting data.
  - Roman regression clean: the 197MB cal file still loads 4088×4088 bitpix -32 with its
    corner at `269.9869455 65.9742651`, and the full 84-fixture sweep is unchanged at 63 OK
    / 21 `bzp2`.
- [x] **Scalar `mask` support — the other form the format allows, checked against the spec
      rather than assumed.** The user recalled ASDF also permitting a single fill value like
      FITS `BLANK`; confirmed correct from `asdf-standard` itself.
  - `core/ndarray`'s `mask` is `anyOf`: **a scalar number** ("that number is used to
    represent missing values"), a `complex-1.0.0`, or a `bool8` ndarray "broadcastable to the
    dimensions of this array". Verified in **all three** schema versions
    (`ndarray-1.0.0`/`1.1.0`/`1.2.0`), in each of which `mask: -999` is a documented
    example — and note the example is on **`float64`** data, so the scalar form's headline
    use is floating point, not integer.
  - **Why no sample file had one**: asdf's Python *writer* cannot emit it. Its ndarray
    converter does `result["mask"] = data.mask` unconditionally, so a numpy masked array
    always serializes as a boolean array. The reader handles the scalar form fine
    (`NDArrayType._apply_mask` → `ma.masked_values`). So scalar masks come from other
    writers, and a reader has to support both. Checked in the installed asdf 5.4.0 source,
    not inferred.
  - **Four real gaps this review exposed**, all now closed:
    1. **Scalar mask was silently ignored** — captured as a node field and dropped, so nulls
       displayed as the raw fill value.
    2. **Float data + any mask was ignored.** FITS marks float nulls with NaN and the data is
       already float, so there is no cost and no promotion — this was simply missing.
    3. **A broadcastable-but-not-identically-shaped mask array was silently skipped**; the
       code required an exact shape match where the spec says broadcastable. Now the
       degenerate cases (one element per pixel, or a single element) are accepted and
       anything else is *refused* rather than guessed at, since a wrong partial broadcast
       would mismark real pixels.
    4. **A complex mask fell through with no message.** Now flagged unsupported and warned.
  - Implementation: `asdfmaskblank` generalized into `asdfmask` (one command handling both
    mask forms and both integer and float data). Integer → `BLANK` sentinel; float → NaN
    written into the masked pixels. A scalar mask needs no scan and no rewrite at all — it
    *is* the sentinel. Scalar matching is exact, deliberately unlike numpy's
    `ma.masked_values` tolerance-based comparison (a fill value is stored exactly, and exact
    equality is what FITS `BLANK` means); a NaN scalar mask is special-cased to `isnan()`
    the same way asdf's own reader does it.
  - Datatypes with no real FITS BITPIX (`uint16`/`uint32`, which would need FITS's `BZERO`
    unsigned-offset convention, and `float16`) fall back to the plain array path **with a
    warning** rather than loading as though they had no nulls.
- [x] **Added the `_blank_scalar` fixture set — 24 files, 6 base names × 4 codecs** (in the
      `Tests` repo at `Tests/asdf/fixtures/`, with `Tests/asdf/make_scalar_mask_fixtures.py`).
  - Needs its own generator precisely because asdf cannot write this form. Each output is
    built by **re-treeing an existing fixture**: the data block is copied byte for byte and
    only the YAML tree is rewritten and the block index recomputed. That yields all four
    codecs — **including `lz4`, with no compressor needed** — and guarantees the pixel bytes
    are identical to the sibling fixture.
  - Two flavors: the four integer `*_blank_scalar` use the source FITS file's **own `BLANK`**
    (128/256/256/256) as the scalar, so they must render identically to that FITS file; and
    `float_blank_scalar`/`double_blank_scalar` put a scalar mask on floating point data,
    covering the schema's headline case. The float sentinel is chosen as a value that
    genuinely occurs (255.0, 256 pixels), so the fixture actually masks something — the
    generator asserts this rather than trusting it.
  - **Validated with the reference implementation, not just our reader**: every one is read
    back with `asdf.open()` and checked for dtype preservation, exact mask positions against
    the source FITS, and unmasked pixel equality. 24/24. A conda env (`ds9asdf`: python
    3.12, numpy 2.5.3, astropy 8.0.1, asdf 5.4.0, lz4 4.4.5) was created for this.
    - Note asdf hands back a lazy `NDArrayType`, not an array; the mask is applied only when
      it is materialized, so a validator must slice it (`af["data"][:]`) or it will conclude
      no mask is present. The first version of the check did exactly that and reported a
      false failure.
  - **Results through DS9**: the 12 integer scalar-mask files match the equivalent FITS
    `BLANK` file exactly — same bitpix, and a real blank pixel reads `blank` in both. The 6
    float ones keep bitpix -32/-64 and read `nan` at the sentinel pixel. Full sweep now 108
    files: 81 OK, 27 `bzp2` (the expected single failure mode). Roman regression unchanged.
  - Unit-tested the enumerator's mask classification across all forms: scalar int, negative,
    float, `.nan`, complex, a non-numeric string, and no mask — each classified correctly as
    a usable sentinel or as unsupported.

- [x] **bzip2 vendored and `bzp2` blocks supported** — the last unsupported codec, and the
      one the fixtures were built to drive.
  - **Vendored `bzip2/` = upstream 1.0.8 unpruned**, matching what `zlib`, `lz4` and
    `libyaml` already do here (all three carry their upstream docs and tests). Source is
    `https://sourceware.org/pub/bzip2/bzip2-1.0.8.tar.gz`, sha256
    `ab5a0317...0c4a2269`, verified against the published digest before use. Keeps a future
    version bump a plain tarball overlay. Added a small `bzip2/.gitignore` (the tarball has
    none of its own) so its objects don't become untracked noise the way `zlib`'s are.
  - **Three traps in bzip2's hand-written Makefile**, all documented at the build rule in
    `make.include` rather than just worked around:
    1. `all` is `libbz2.a bzip2 bzip2recover test` — it builds the CLI tools *and runs the
       compression test suite*; `install` then copies tools and man pages into
       `$(PREFIX)/bin` and `$(PREFIX)/man`. Only `libbz2.a` and `bzlib.h` are wanted, so
       the rule builds that one target by name and places the two files itself.
    2. `install` understands only `PREFIX`, with `lib/`/`include/`/`man/` hard-coded
       beneath it — no `LIBDIR`/`INCLUDEDIR` the way lz4's Makefile has.
    3. **`distclean` deletes `manual.ps`/`manual.html`/`manual.pdf`, which are tracked
       upstream files.** So `bzip2distclean` runs `clean`, not `distclean` — the same
       choice `lz4distclean` already made. (This is the same class of bug as the
       `libyamldistclean` one that deleted `fitsy/fitsyConfig.sh`.)
  - `RANLIB`: bzip2 archives with `ar cq`, which writes no symbol index, then runs
    `$(RANLIB)`. The tree's shared `$(CONFIGFLAGS)` sets only `CC` and `AR`, so a cross
    build would have indexed a mingw archive with the host ranlib; the rule names
    `$(TARGET)-ranlib` where `$(TARGET)` is set, which is `win/Makefile.in` only.
  - The `bzip2` target had to join `.PHONY` — the target name and the directory name
    collide, so without it make would call the target up to date. (`lz4` has the same
    collision and is already phony; this is easy to miss.)
  - **`asdfbz2decompress`** added to `tclasdf` (now four commands), with `-lbz2` on the
    extension's `LIBS` and `$(libdir)/libbz2.a` in all three `ds9/*/Makefile.in` link
    lists, alongside `liblz4.a`.
  - **The framing is *not* like lz4's, and this was checked against the fixtures rather
    than assumed.** lz4.block has no stream format, so asdf frames it as length-prefixed
    chunks; bzip2 does, so a `bzp2` payload is one plain stream — every fixture payload
    starts with `BZh9` at byte 0 and `used` is the whole compressed length. So the Tcl side
    needs no chunk loop, just `asdfbz2decompress $payload $decoded`.
  - Used the streaming `bz_stream` API rather than one-shot `BZ2_bzBuffToBuffDecompress`,
    for two reasons: the one-shot call takes `unsigned int` lengths, and it cannot span
    concatenated streams. asdf's own writer emits a single stream and its reader would stop
    at the first stream end, but tolerating a concatenation costs one re-init and means a
    block from some other writer isn't silently truncated.
  - **Results.** Full sweep is now **108/108** — 27/27 in each of `none`/`zlib`/`lz4`/
    `bzp2`, up from 81/108.
    - Every `bzp2` fixture is identical to its `none` twin on dimensions, BITPIX, `minmax`,
      the `BLANK` card **and a SHA-256 over every pixel** read back through
      `xpaget ds9 data` — 27/27, no differences.
    - All **31** compressed blocks in the 27 files (the 4 `_blank` files carry a second
      block for the mask) decode **byte-identical to Python's `bz2`**.
    - Null handling confirmed at the pixel level, not just via `minmax` — which per the
      Phase 5 note above cannot reveal it, since these fixtures' BLANK values are interior
      to the data range. A known masked pixel in `short_blank` reads `blank` and an
      unmasked one reads its value, identically for `none` and `bzp2`.
    - Error paths, on four hand-corrupted copies: truncated payload, corrupted bit stream,
      understated `decoded` size, and empty payload each produce a distinct message
      (`truncated bzip2 stream`, `bzip2 decompress failed`, `bzip2 output exceeds block
      decoded size`), leave the frame empty rather than partly filled, and don't take DS9
      down.
    - Roman regression clean: the 197MB cal file still loads 4088×4088 bitpix -32 with a
      valid GWCS readout at image centre.
  - Not done: Windows. The `bzip2` rule is written for the cross build (and fixes the
    ranlib gap above) but, like everything after `libyaml`, is unvalidated there.

## WCS test plan execution

Running `WCS_TEST_PLAN.md` section by section. Sections C and F done 2026-09-17: **14 cells
closed, 41 TODO -> 27**, now 54 PASS / 3 GAP.

- [x] **Section C — Regions (8 cells).** C-4 (xml), C-5, C-7, C-8, C-10, C-11, C-12 PASS;
      C-9 is a GAP. All 16 shapes round-trip image->wcs->image; save/load 4.7e-4 px;
      cross-frame region files land on the exact detector pixel.
- [x] **Section F — Multi-frame match and lock (6 cells).** F-3, F-5, F-6, F-7, F-8, F-9
      PASS. Three different Roman products (f158/grism/prism) match to 0.000104″. The
      `block` lock is the notable one — it exercises the `wcsYaml_` fix across frames and
      leaves the sky readout bit-identical.
- [x] **Raised the output precision first, on the user's tip** — `prefs precision`. The
      default `8 7 4 3 8 7 5 3 8` truncates at 7 dp on degrees, which had been the binding
      constraint on several measurements (the old C-6 number, 0.004 px, was print noise).
      At `12 12 7 6 12 12 10 8 12` the same circle round-trip resolves to 2.3e-5 px, so these
      tolerances are now bounded by the GWCS numerical inverse rather than by formatting.
      Recorded in the plan's §3.
- [x] **Two new risks, both quantified against a purpose-built FITS TAN control frame** so
      that "GWCS problem" and "generic DS9 behaviour" stay distinguishable:
  - **R9 — region angles use one image-wide rotation.** `Base::mapAngleFromRef`
    (`tksao/frame/frmap.C:9`) adds `getWCSRotation(sys,sky)`, evaluated per *image*, not at
    the region's position. A rotated box writes the field-centre sky angle wherever it sits.
    Generic — an 800² TAN frame does the same — but the error goes as field size × sin(dec),
    so Roman's true local-north spread is **0.587°** (±0.29° at the edges) against 0.060° on
    the TAN frame. Self-consistent inside DS9; it bites on export. *Compass is exempt* —
    `compass.C:322-331` steps ±δ in dec/RA from its own centre, so it is locally correct.
  - **R10 — angular lengths use one scalar scale; the Roman GWCS is ~2% anisotropic.**
    Centre: x 0.1103417″/px vs y 0.1082827″/px, ratio 1.019, varying 1.014–1.024 across the
    detector. DS9 reports the dec-axis value, so a 400 px radius is 0.84″ (7.7 px) short of
    the true separation along x. The TAN control is exactly 1.00000 isotropic, so this is
    invisible on ordinary data. Corroborated three ways — direct central differences, the
    file's own `s_region` footprint, and DS9's own *anisotropic* zoom under `lock frame wcs`
    (ASDF zoom 1 -> TAN zoom `0.981544 1.00034`), which shows the machinery to handle it
    already exists elsewhere in DS9.
- [x] **BUG (ours, not DS9's): the GWCS is attached to arrays it does not describe — FIXED.**
      Found by F-8. `AsdfLoadArray` (`ds9/library/asdf.tcl:1336-1344`) calls `AsdfAttachWcs`
      unconditionally on whatever array was loaded, with no check that the array's grid is the
      one the WCS describes. So `roman/amp33` (128×4096, reference pixels) and the four
      `border_ref_pix_*` arrays report the **science array's** sky coordinates — `roman/data`
      and `roman/amp33` both answer `269.981972490569 66.035639172244` at `image(64,2048)`.
      Worse than no WCS, because the values are in-footprint and so look plausible.
  - Same-grid siblings (`err`, `dq`, `var_poisson`, `chisq`, `dumo`, all 4088²) are correct
    and must keep it, so the fix is a shape guard, not removing the attach.
  - R6 blocks the principled version: AST drops `bounding_box`, so the WCS's declared domain
    is unavailable. The guard therefore has to compare the loaded array's shape against the
    science array's shape read from the YAML tree — `<prefix>/data` alongside the
    `<prefix>/meta/wcs` subtree that `AsdfExtractWcsText` already locates.
  - The user chose the exact-shape-match guard, so: `AsdfWcsGridShape` resolves the science
    array through the loader's existing `AsdfResolvePath ... data` convention (roman/data
    first, else any uniquely matching */data) rather than inventing a second rule, and
    `AsdfSameGrid` compares the **trailing two** dimensions. Trailing rather than strictly
    exact because a 2-D WCS legitimately describes each plane of a same-grid rank-3 stack
    ([nplane, ydim, xdim] vs [ydim, xdim]); that still rejects amp33's [10, 4096, 128].
    Unit-tested over 8 shape pairs.
  - The two failure cases got different severities on purpose. Grid mismatch is **silent**:
    it is the normal result of loading a reference-pixel array, the shapes are visible in the
    browser, and `Warning` would make a *successful* load return `XPA$ERROR` to an xpaset
    caller. Being unable to identify the grid at all does warn - that is the surprising case,
    and the one where exact-match could wrongly drop a WCS that used to work (a non-Roman
    file whose science array is not named `data`). That asymmetry is the one judgement call
    here and is easy to flip if it proves wrong.
  - Verified: six same-grid arrays (`data`/`err`/`dq`/`var_poisson`/`chisq`/`dumo`) keep the
    WCS with identical readouts; five off-grid arrays (`amp33`, four `border_ref_pix_*`) load
    with pixels intact and no WCS, emitting nothing. No regressions: ground-truth corner still
    `269.9869455 65.9742651`, `block 2` then `block 1` still round-trips the GWCS exactly,
    backup/restore still preserves it exactly, and all 108 `Tests/asdf` fixtures still load.
- [ ] Also noticed, cosmetic: the array browser offers **25** loadable arrays for a real
      `*_cal.asdf`, of which 10 are `roman/meta/wcs/.../coefficients` and `.../matrix` blocks
      (6×6 and 2×2 float64). Genuine `core/ndarray`s, but nobody wants to display a
      polynomial coefficient matrix. They already sort last. (This also reconciles the
      "15 top-level arrays" figure recorded in Phase 3/4 with today's 25.)
- [x] **Sections A, B, D, E, G, H, I, J finished (2026-09-17) - 21 more cells closed.**
      With J-4 added below, the plan is now **fully executed: 77 PASS / 3 GAP / 0 TODO**.
  - Highlights: `image(-0.5,-0.5)` now reproduces the `s_region` corner **exactly to 9 dp**
    at the raised precision, not just to 0.0002"; contours on a `block 4` frame map through
    the blocked WCS to 0.00000000"; contour copy/paste across frames is exact; region
    templates (both `resetWCS0` callers) leave the WCS untouched; `wcs replace` then
    `wcs reset` hands the GWCS back exactly; three ASDF frames each restore their own array
    with the right pixels; and the five sky frames were checked against an independent
    rotation (galactic 0.014", ecliptic 0.027") rather than just for parser acceptance.
  - Two cells needed synthetic files because the real products are not downloaded: J-3's
    rank-4 refusal (a `[4,4,2,2]` array; the real 331MB uncal ramp should re-confirm it) and
    I-5's unreadable GWCS.
  - **A-5 is worth knowing beyond "it extrapolates":** outside the detector the *inverse*
    also stops converging. `image(-10000,-10000)` round-trips back to `(-8751, -8952)`,
    ~1250 px out, and at 1e6 it diverges entirely. So R6's missing `bounding_box` costs
    reliability in both directions, not just domain checking.
  - Three cells are inherently not scriptable and are recorded as such rather than guessed:
    `iexam`'s click (B-4), the pixel table's hover (B-5), and glyph-level grid label
    legibility (E-5). In each case the underlying value path was verified instead - and for
    B-5 the non-population was confirmed generic by reproducing it on a FITS frame.
- [x] **I-5 found a real diagnostic gap, now fixed.** `$frame wcs replace` returns *cleanly*
      when AstYamlChan cannot build a FrameSet (unknown tag, version past yamlchan.c's
      MAKE_TEST ceilings), leaving the frame with no WCS and **no message at all** - the one
      outcome the three branches in `AsdfLoadArray` were written to avoid, and contrary to
      that code's own comment. Now checks `has wcs wcs` after attaching and warns.
      `has wcs alt` would not work as the probe: it reads 1 either way, because
      `replaceWCSYaml` sets `wcsAltHeader_` regardless (R2). Verified the warning fires only
      for the unreadable-GWCS case and stays silent for no-WCS-subtree, a good GWCS, and a
      grid mismatch.
- [x] **J-4 done - and it found the biggest coverage gap yet: L3 coadds get no WCS.**
      Downloaded `r00001_p_v01001001001001_270p65x69y48_f158_coadd.asdf` (113.6 MB) and its
      `_asn.json` (1.1 KB) from the Build22 example data. Both added to
      `.git/info/exclude`; the coadd is large and re-downloadable, and the json is listed
      only so nothing in the batch gets committed by accident (it is small enough to track
      if wanted).
  - First, a correction to the plan's framing: **`_asn` is not an image**. It is a JSON
    association manifest - skycell geometry plus the list of member exposures (this one
    names the `f158_cal.asdf` already in the tree). Nothing for DS9 to open. The testable
    artifact is the `*_coadd.asdf`.
  - The coadd's arrays all load correctly: `data`, `context`, `err`, `weight`,
    `var_poisson`, `var_rnoise`, all 5000x5000 (`context` is `[1,5000,5000]`, so rank 3 with
    trailing dims equal to the science grid - the exact case the trailing-two-dims rule in
    `AsdfSameGrid` was written for). Much of the skycell reads `nan` with `weight` 0, which
    is right: one input exposure into a 5000^2 tile.
  - **But no WCS.** The coadd expresses its WCS as a single
    `!<tag:stsci.edu:gwcs/fitswcs_imaging-1.0.0>` node bundling `crpix`, `crval`, `cdelt`,
    `pc` and a `gnomonic` projection, instead of the explicit
    `compose`/`shift`/`polynomial`/`gnomonic` chain the L2 `*_cal.asdf` files use.
    `ast/src/yamlchan.c` has no handler for that tag.
  - **The I-5 fix earned its keep immediately.** `wcs replace` fails silently on this, so
    before this morning's `has wcs wcs` check the coadd would simply have appeared to have
    no WCS, with no clue why. Instead it now says
    `ASDF: AST could not read this WCS, loading without it roman/data`.
  - **The parameters themselves are fine**, which makes this the easiest gap in the plan to
    close. The `_asn.json` is independent ground truth (`ra_center=269.6395821835357`,
    `dec_center=65.99501049470986`, `orientat=0.36041781306266785`, 0.055"/px), and
    deprojecting the coadd's own crpix/crval/cdelt/pc by hand as a plain TAN at 0-based
    pixel (2499.5, 2499.5) reproduces those to **0.000000 arcsec**. (My first attempt was
    mirrored about crval1 - a sign error in my own atan2, not a file inconsistency: the
    declination matched to 10 dp throughout.)
  - **Fixed (option 2, the user's choice): translate the node to FITS cards in `asdf.tcl`.**
    `AsdfFitsWcsImagingCards` emits `CRPIX`/`CRVAL`/`CTYPE`/`CUNIT`/`CD`/`RADESYS` and DS9's
    own FITS WCS path takes it from there. No AST change. Two conversions matter and both
    were verified against ground truth: **CRPIX is 1-based in FITS but 0-based in gwcs** (the
    node's own `bounding_box` runs `[-0.5, n-0.5]`, which is the 0-based range), and
    **`CD_ij = cdelt_i * pc_ij`**. Only `gnomonic` and the equatorial frames
    (`icrs`/`fk5`/`fk4`) are translated; anything else declines rather than emit an untested
    CTYPE.
  - **It needed one small tksao addition, which is worth knowing about.** Cards pushed
    through plain `wcs replace` were *correct* but vanished on the first `block` - by design:
    `resetWCS()` deletes `wcsAltHeader_` because `wcs replace` is a user override. Measured
    it rather than assuming: replace gave the right sky, `block 2` gave nothing, `block 1`
    did not bring it back. So `FitsImage::wcsCards_` now remembers the card text and
    `resetWCS()` re-parses it, exactly mirroring `wcsYaml_`. The ASDF path is distinguished
    from a user override by an `#ASDF-FITS-WCS` sentinel first line - the same trick
    `replaceWCS()` already uses to spot YAML, so no grammar change and no new subcommand
    (which matters: touching the tksao `.L` would have hit the flex-reproducibility problem
    in CLAUDE.md).
    - Regression-checked explicitly that ordinary `wcs replace` is **unchanged**: the
      override still applies, is still dropped by a block cycle, and `wcs reset` still
      restores the GWCS.
  - **Results.** All six science-grid arrays (`data`, `context`, `err`, `weight`,
    `var_poisson`, `var_rnoise`) load 5000^2 with the WCS at **0.00000000"** from the
    `_asn.json` centre - `context` included, at `[1,5000,5000]`, via the trailing-dims rule
    in `AsdfSameGrid`. Pixel scale 0.054983"/px against a declared 0.055, and anisotropy only
    **0.03%**, so R10 does not apply to resampled L3 products the way it does to L2. Survives
    block 2/4/1, smooth and crop, and backup/restore. `match frame wcs` between the L3 coadd
    and the L2 exposure it was built from is exact (0.000000") - a combination that simply
    did not work before. No regressions: L2 ground truth unchanged, 108/108 fixtures, and
    the three warning cases (unreadable / no-subtree / grid-mismatch) all still behave.
  - **A trap in the ground truth itself:** `asn.json`'s `orientat` is *not* the position
    angle of the +y axis. Its value `+0.36041781306` is exactly -dRA from the projection
    centre (`269.6395821835 - 270.0`) to ten significant figures, which no position angle
    would match identically. The real local-north PA there is dRA*sin(dec) = -0.3293 deg and
    DS9 measures -0.3257 deg, i.e. DS9 correctly tracks meridian convergence and the field
    does not mean what its name suggests. My first run scored this as a FAIL against DS9;
    recorded in the plan's §2 so the next reader does not repeat it.
  - Still lost: the node's explicit `bounding_box` (`[-0.5, 4999.5]`), which R6 discards.
- [ ] Rough edge left alone: a WCS-only `*_wcs.asdf` has no science array, so loading one of
      its coefficient matrices by explicit path warns `cannot tell which array the WCS
      describes`. Correct outcome, noisy message, and it reaches xpaset as `XPA$ERROR`.
      Narrowing it means recognising that the array lives inside the WCS subtree.

## Process notes

- Share the design doc (and the §7c finding in particular) with the `asdf-format/pds9`/
  STScI team before or alongside starting Phase 1 — see design doc §12.
- The `Proposal.md` unsolicited-funding draft assumes roughly Phases 0–3 as its 1
  person-month scope; Phase 4 is a stretch within that estimate, Phase 5 is explicitly out
  of scope for it.
