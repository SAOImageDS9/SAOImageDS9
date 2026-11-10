# TODO: `glyph` region shape (user-supplied image as a region)

Goal: let users place their own small image (PNG/GIF/etc.) as a region
marker, e.g. a custom glyph/symbol, analogous to the illustrate-mode
Image shape but anchored to image/WCS coordinates.

## Remaining work (as of 2026-11-07)

Phases 1-3 are done on branch `region_glyph` (commits `b44e9c2ed`,
`cdbc7ac48`, `ba981cd8c`); details are in the "Phase N status" sections
below. Checkboxes: `[x]` done, `[~]` partly done or superseded, `[ ]` open.

Open:
- [x] **Docs** (2026-11-07): `ref/region.html` (Glyph description,
      paths, transparency, color, examples), `ref/framecmd.html` (marker
      create/set/get glyph), `ref/command.html` / `xpa.html` /
      `samp.html` (catalog symbol glyph), `ref/catalog.html` (glyph entry
      rules), `user/catalogs/index.html` (glyph symbols), release notes
      `release/r8.8.2.html`. `regions shape` is documented as a generic
      `<shape>`, so it needed no change.
- [x] **Built-in glyphs** (2026-11-09): `ds9/glyphs` (SVGs from the
      Glyphs repo, resized to 64 px), named `builtin://name.svg`, kept
      verbatim on load/save/backup and resolved by `GlyphPath`.
      `GlyphPicker` (`glyphpicker.tcl`) replaces the glyph file dialogs.
- [ ] **Catalog backup:** copy glyph files into the backup, as region
      backup does (`GlyphBackup`); restore currently keeps absolute paths.
- [ ] **Symbol table paths:** relative glyph paths resolve against the
      cwd, not the `.sym` file.
- [ ] **Symbol dialog:** enable the Glyph file row only for shape glyph.
- [ ] **XML/VOTable** region output (`frmarkerxml.C`) drops glyphs.
- [ ] **Other platforms:** build and test on Linux/X11 and Windows
      (`renderWIN32` has never been compiled).
- [ ] **Check by hand:** glyph in the magnifier (XPA capture comes back
      blank), and click-to-create with the mouse (only the same proc was
      run from Tcl).
- [ ] **Tests:** add glyph region and catalog tests to the `Tests` repo.
- [ ] Optional: faster redraw for large catalogs (10k visible glyphs ~250
      ms on macOS; see Phase 3 status).

Left alone on purpose:
- PostScript keeps on/off alpha (matches illustrate).
- Saved region files keep the built-in image's bundle path
  (`//zipfs:/mntpt/doc/sun.png`).
- Illustrate's `resizePhoto` still loses partial alpha (separate fix;
  glyphs use `GlyphResizePhoto`).

Elsewhere: the `catalog symbol <N> ...` (`CatalogCmdCVAR`) fix is on
branch `fix_catalog_symbol_row` (`d151e5196`), not merged here.

## Why this is different from illustrate's Image

`ds9/library/illustrateimage.tcl` is pure Tcl: a Tk canvas `image` item
in screen coordinates, unrelated to the frame. Regions are C++ `Marker`
subclasses in `tksao/frame/`, anchored in image/WCS coordinates,
rendered into the frame pixmap, following pan/zoom/rotate/blink/tile,
and serialized by the region parsers. So this needs a **new Marker
subclass**. The closest model is `Text` (`tksao/frame/text.{h,C}`): one
center, a 4-handle bbox, no area/analysis.

**Naming:** do not call the shape `image`. `image` is a coordinate-system
keyword in region files (`image; circle(...)`), and reusing it would make
the lexers ambiguous. Do not call it `icon` either: ds9 already uses
"icon" for the graphical buttons of the Advanced view (`icons.tcl`,
`iconstop.tcl`, ...). Use `glyph`, which is unambiguously new.
(The prototype was first written as `icon` and renamed on 2026-11-07.)

## Design decisions (settle first)

- [x] **Size semantics.** Recommended: fixed **screen pixels** (like
      `point`/`text`), constant size at any zoom. Alternative: size in
      image/WCS units (like `box`), scaling with zoom. Could be added
      later as a flag.
- [x] **Rotation.** Recommended: always upright. Rotating photos is
      expensive and rarely wanted for markers.
- [x] **File reference.** Region file stores a path. Resolve relative
      paths relative to the region file. When the file is missing, draw a
      placeholder (a box with an X).
- [x] **Photo caching.** Share one Tk photo per (filename, size).
      Otherwise 1000 catalog glyphs means 1000 decoded images.

## C++ side (`tksao/`)

- [x] `frame/glyph.{h,C}` (new): `class Glyph : public Marker`, modeled
      on `Text`. Holds `fileName`, `width`, `height` and the photo name.
      Implements `renderX`, `renderPS`, `updateHandles`, `calcAllBBox`,
      `isIn`, `list` (ds9 format), and edit (resize via handles).
- [x] Rendering: `Tk_GetImage()` + `Tk_RedrawImage()` onto the Drawable.
      This composites photo alpha onto the pixmap (see "Alpha / transparency"
      below). In XOR render mode (dragging), draw only the outline box.
      Nothing in tksao uses `Tk_GetImage` yet, so there is no existing
      pattern to copy.
- [x] The `Tk_GetImage` change callback must request a frame redraw, or
      glyphs show stale content when a cached photo is updated.
- [x] `dup()` (copy/paste, undo; `Text` does `new Text(*this)`): the
      `Glyph` copy constructor must call `Tk_GetImage` again rather than
      copying the handle, or `Tk_FreeImage` runs twice.
- [x] `renderWIN32` is **not** free: it is the Windows *printing* path
      (GDI, `#ifdef __WIN32`, called from `Marker::win32()`), not screen
      drawing, and it is pure virtual. Phase 1: draw the bbox, like PS.
- [x] PostScript: phase 1 draws the bbox. Later: emit `colorimage` from
      `Tk_PhotoGetImage` data, composited on white.
      (Done differently: matches illustrate, see Phase 2 status.)
- [x] Magnifier: draw the box only at first (`x11MagnifierMarkers`,
      `base.C` ~2551). (Draws the image; see Phase 2 status.)
- [x] `configure.ac`: add `frame/glyph.C` next to `frame/text.C` (~line 218).
- [x] `base.h` / `frmarker.C`: `createGlyphCmd(...)` beside
      `createTextCmd` / `createPointCmd` (`frmarker.C` ~442), plus
      set/get commands for file and size.
- [x] `frame/parser.Y` + `lex.L`: `create glyph x y "file" w h ...`,
      `marker <id> glyph file|size ...`, `get marker <id> glyph ...`.
      Regenerate with `cd tksao && make parser`.
- [x] `frame/ds9parser.Y` + `ds9lex.L`: read/write
      `# glyph(x,y,"file",w,h)`. The `# ` prefix matches
      `text`/`vector`/`compass`, so CIAO/funtools ignore it. Regenerate
      with `cd tksao && make ds9parser`.
      Store the path in its own buffer (>= 2048, matching `MKBUFSIZE`).
      Do **not** reuse the `localText`/`localComment` pattern: those are
      `char[80]` filled with `strncpy(...,80)` (`ds9parser.Y:58`), which
      would silently truncate long paths.
- [x] Other formats (ciao/sao/pros/tng/xy): nothing to do. The base
      class's empty `listCiao` etc. already drop the shape. XML/VOTable
      (`frmarkerxml.C`) can skip it initially. **Still open**, see
      Remaining work.

**Photo loading:** keep decoding/resizing in Tcl. The C++ marker calls
back into a Tcl proc, e.g. `RegionGlyphPhoto fn w h`, which uses
`image create photo` + an alpha-preserving resize (see below) and returns
a cached photo name. This way both `ds9parser.Y` (region file load) and
the interactive path share one loader, and the C++ code needs no image
codecs.

- [x] Wrap the callback in `Tcl_SaveInterpState`/`Tcl_RestoreInterpState`.
      It runs mid-parse inside a frame command, and evaluating Tcl
      clobbers the interp result the command may be building (errors,
      `list` output).
- [x] The photo cache must refcount, or never `image delete` a photo a
      marker still holds; a deleted photo draws as nothing. (Cache never
      deletes.)

## Alpha / transparency (verified 2026-11-07 with `bin/wish9.0` and `bin/ds9`)

- **PNG load is fine.** Tk 9 round-trips partial alpha exactly
  (alpha 128 reloads as 128). Same inside ds9: PNGs are decoded by Tk
  9.0.4's built-in handler (`img::png` is not loaded; tkimg is only used
  for `-format window`).
- **Do not use `resizePhoto`.** It keeps alpha only on its fast paths
  (integer `-zoom` / `-subsample` copy). The general path uses
  `transparency get` (1-bit) and ORs it across neighbors:
  - semi-transparent pixels become opaque (alpha 128 -> 255 at 8->6);
  - opaque edge pixels next to transparent ones become fully transparent,
    eroding the glyph by ~1 px (also on non-integer upscales, 8->16x12).
  - Typo in its fast-path checks: `$newy >= $mx` / `$newy < $mx` should
    be `$my`.
- **Use `resizePhoto87`** (`resize.tcl:217`, currently unused). It keeps
  full 8-bit alpha via `get -withalpha` / `#rrggbbaa`, but:
  - [~] Premultiply: it averages RGB without weighting by alpha, so
        colors from invisible pixels bleed in. White on transparent black,
        8->5, gives an edge of `127 127 127 127` instead of
        `255 255 255 127` (grey halo). Multiply RGB by alpha before
        averaging, divide after.
  - [~] It dropped the `-subsample` fast path; restore it.
  - **Superseded for glyphs:** they use `GlyphResizePhoto` (glyph.tcl),
    a premultiplied box filter. `resizePhoto87` was left as is, and
    illustrate still uses `resizePhoto`, so illustrate's resized images
    still lose partial alpha (separate fix).
  - It is per-pixel Tcl, so large source PNGs are slow. Another reason
    the cache matters.
- **Drawing:**
  - macOS, **verified in ds9**: a Tk canvas image item (drawn with the
    same `Tk_RedrawImage` into an offscreen pixmap) holding a red PNG over
    a blue rectangle composited exactly: alpha 0 -> `0 0 255`,
    alpha 128 -> `128 0 127`, opaque -> `255 0 0`. `saveimage png`
    captured those values.
  - X11 (from Tk source only, untested): partial alpha (`COMPLEX_ALPHA`) does `XGetImage` + blend +
    `XPutImage` (`tkImgPhInstance.c` ~679-713); binary alpha uses the
    photo's valid-region clip + `XCopyArea`.
  - macOS: `TK_CAN_RENDER_RGBA` -> `TkpPutRGBAImage` with CoreGraphics
    `kCGBlendModeSourceAtop`. Source-atop draws **nothing** where the
    destination is transparent. Safe here because the frame pixmap is
    filled from `basePixmap` before markers draw (`base.C` ~2773), but
    never render glyphs onto a fresh, unfilled pixmap.
  - `saveimage png` grabs the window (`-format window`), so it captures
    whatever was composited.

Remember (see `AGENTS.md`): run a no-op regen first and confirm
`git diff` is empty before editing any `.Y`/`.L`. Rebuild with
`make tksaoclean tksao ds9clean ds9`.

## Tcl side (`ds9/`)

- [x] `ds9/library/glyph.tcl` (new): `GlyphDialog` with filename + Browse
      + size, mostly lifted from `IllustrateImageDialog`.
- [x] `ds9/library/marker.tcl`: add `glyph` to the create switch (~324),
      the default-create command (~675; uses the pref file, else the
      built-in sun.png; no prompt), and the dialog dispatch (~1596).
- [x] `ds9/library/mregion.tcl`: Shape menu radiobutton (~103) and prefs
      entry (~272), plus a `pmarker(glyph,file)` default.
- [x] `ds9/parsers/regionlex.fcl` + `regionparser.tac`: add
      `-regions shape glyph` for the command line and XPA, then regenerate
      the `.tcl` files.
- [x] Save/backup: copy referenced glyph files alongside saved regions.
      `illustrate.tcl` ~436-455 already does this for illustrate images
      and is the model.
- [x] Docs: `ds9/doc/ref/region.html` (and others, see Remaining work).

## Phasing

1. **MVP:** `Glyph` marker, fixed screen size, X11 rendering, ds9-format
   read/write, `create`/`marker` commands, dialog and menu entry. This is
   most of the work, and the two parser regenerations are the fiddly part.
   Smoke-test early via the XPA `tcl` entry point:
   `echo '$::current(frame) marker create glyph 100 100 {/path/glyph.png} 16 16' | ./bin/xpaset ds9 tcl`

### Phase 1 status (prototype on branch `region_glyph`, 2026-11-07)

Decided: fixed screen-pixel size at any zoom; always upright.

Done and smoke-tested on macOS (ds9 over XPA):
- `tksao/frame/glyph.{h,C}`: `Glyph` marker. Draws with `Tk_RedrawImage`
  clipped to the drawable; outline only in XOR (drag), when highlited,
  and as a box-with-X placeholder when there is no image. Rotation is a
  no-op (`rotate()` overridden; `ROTATE` property left alone so listings
  do not gain `rotate=0`). Handle drag resizes symmetrically; the photo is
  regenerated only on `editEnd`. PS and WIN32 print draw the outline.
  Copy constructor takes its own `Tk_GetImage`. Loader call wrapped in
  `Tcl_SaveInterpState`/`Tcl_RestoreInterpState`.
- Frame commands: `marker create glyph x y {file} ?w h?`,
  `marker <id> glyph file {file}`, `marker <id> glyph size w h`,
  `get marker <id> glyph file|size`.
- Region format: `# glyph(x,y,{file}[,w,h])` and bare `glyph(...)` both
  parse; list writes the `# ` form, size only when non-native. Path is
  never copied into an 80-char buffer.
- `ds9/library/glyph.tcl`: `RegionGlyphPhoto` (cache per file and per
  file+size, never deleted), `GlyphResizePhoto` (premultiplied box filter,
  bilinear when enlarging; no halo, partial alpha kept), `GlyphDialog`
  (file + Browse, width/height, 0 = native, one 0 keeps aspect).
  `RegionGlyphPhoto` restores `errorInfo`/`errorCode`: xpa reports any
  leftover `errorInfo` as a failure, so a missing file would otherwise
  fail `regions load`.
- Menus: Region > Shape > Glyph, prefs Shape menu, prefs Glyph file/width
  (`pmarker(glyph,file)`, `pmarker(glyph,size)`); `-regions shape glyph`.

Verified: alpha compositing exact (50% red over 245 grey -> 250 122 122,
transparent pixels untouched); size constant at zoom 0.25/1/2/4;
save/load round trip; copy/paste; move + undo; handle resize; dialog
apply; missing file -> placeholder, no error.

Not yet verified / left for later:
- Interactive click-to-create and highlite rendering were not exercised.
  (Later: create no longer prompts, see Phase 2; highlite verified in
  Phase 3.)
- Resizing a 512px source takes ~1 s in Tcl (cached afterwards).
- Not built on Linux/X11 or Windows (`renderWIN32` not compiled).
- XML/VOTable listing drops glyphs; docs (`region.html`) not written.
2. PostScript output, magnifier, path resolution relative to the region
   file, backup copying.

### Phase 2 status (2026-11-07)

Done and smoke-tested on macOS:
- **Relative paths.** `Base::markerFileDir_` holds the normalized
  directory of the region file during `marker load <fmt> <file>` and
  `marker save <file> ...` (NULL otherwise: `marker list`, paste, fd/stdin
  loads). `createGlyphCmd` resolves relative glyph names against it and
  stores them normalized; `Glyph::list` writes a name relative to it when
  the glyph lives at or below that directory, absolute otherwise. So
  `dir/a.reg` + `dir/glyphs/x.png` round-trips as `{glyphs/x.png}`, and
  saving elsewhere writes the absolute path. Relative names in loads
  without a file (XPA `regions command`, stdin) resolve against the cwd.
- **Backup.** `MarkerBackup` calls `GlyphBackup` after saving the frame's
  `ds9.reg`: each referenced glyph file is copied next to it as
  `glyph_<name>[_N].<ext>` (one copy per distinct source file) and the
  reference is rewritten to the bare name. Missing files are left as is.
  Verified: backup, move the whole backup elsewhere, restore -> glyphs
  load from the copies.
- **Magnifier.** Uses the same draw path (the magnifier pixmap is filled
  from its XImage first, so the macOS source-atop issue does not arise).
  Glyphs are drawn at their screen size, not magnified, like text and
  point markers. Not visually verified: an XPA `-format window` capture
  of the magnifier canvas comes back blank even without glyphs.

- **Default image.** Interactive create no longer prompts for a file: it
  uses `pmarker(glyph,file)` if set and readable, else the built-in
  `$ds9(root)/doc/sun.png` that illustrate mode also uses
  (`GlyphDefaultFile`). Caveat: a saved region file then contains the
  bundle path `//zipfs:/mntpt/doc/sun.png`, which only resolves in a
  bundled ds9 (backup copies it out, so backups are fine).

- **PostScript / PDF.** PS matches illustrate mode; PDF has real alpha
  for both glyphs and illustrate images (see below).
  - Illustrate prints through Tk's `canvas postscript`
    (`Tk_PostscriptPhoto` + `TkPhotoColor`): alpha 0 pixels are skipped,
    every other pixel is drawn opaque, at any PS level. Its PDF path
    (`pdf.tcl`) uses `addRawImage [$image data]`, which has no alpha:
    transparent pixels paint their stored RGB (sun.png's corners print
    black).
  - `Glyph::renderPS` does the same in PS: one 1-pixel-tall `image` /
    `colorimage` per run of non-transparent pixels, GRAY/RGB/CMYK, works
    at levels 1-3. Verified by decoding the emitted runs: 32x32 at the
    screen position, the 16 alpha-0 corner pixels skipped, 50% pixels
    solid. Placeholder (no image) prints a box with an X; highlited adds
    the outline. Not rasterized (no Ghostscript on this machine).
  - In PDF mode it emits `x y w h (photo) ds9glyph`, a private op handled
    in `Base::pdfVectorLayers`: `PDFAddPhoto` (cached per photo for the
    call) + `putImage ... -anchor nw`. Verified by
    rasterizing a saved PDF with `sips`.
  - Gotcha hit while writing this: `Marker` has members named `ra` and
    `dec`, so inside marker code `str << dec` prints that buffer instead
    of switching back to decimal. Use `std::dec` / `std::hex`.
  - **PDF now has real alpha (2026-11-07), for glyphs and illustrate
    images.** `PDFAddPhoto pdf photo` (ds9/library/pdf.tcl) builds an RGB
    image XObject plus an 8-bit DeviceGray `/SMask` holding the alpha
    (skipped when the photo is fully opaque), and adds both with
    `$pdf addTkpimgObj`, pdf4tcl's public hook for ready-made image
    objects (written for tkpath; undocumented, so recheck on a pdf4tcl
    upgrade). `/SMask` needs PDF 1.4, pdf4tcl's default. The `ds9glyph`
    handler in `Base::pdfVectorLayers` calls it (falling back to opaque
    `addRawImage` if the proc is missing, i.e. tksao without ds9);
    `pdf.tcl`'s illustrate image case uses it instead of `addRawImage`.
    Verified by rasterizing with `sips`: alpha-0 pixels show what is
    underneath (no more black corners on the illustrate sun), 50% pixels
    blend, opaque pixels are solid.
    - Speed: channels are split in Tcl (`$photo data` for RGB, `binary
      scan` + `lmap` on the rgba data for alpha): ~1.6 s per megapixel,
      instant for glyph-sized photos. `regsub` was 3x slower.
  - PostScript still matches illustrate (on/off alpha); real PS alpha
    (level 3 soft mask) was not pursued.

3. **Catalog symbols using glyphs.** Probably the biggest payoff for the
   glyph/marker use case, since catalogs generate markers in bulk. Depends
   on the photo cache.

## Untested assumptions

- `Tk_RedrawImage` alpha compositing on **X11** (Linux) and Win32
  on-screen drawing (Tk's Xlib emulation). macOS is verified, both in a
  canvas test and through the real `Glyph` path into `Base::pixmap`
  (50% red over 245 grey -> 250 122 122). Repeat on a Linux build.
- PostScript output was checked by decoding the emitted runs, not by
  rasterizing it (no Ghostscript here).

## Addendum: catalog markers

This is mostly Tcl work. Catalog symbols do not create markers directly:
`ds9/library/catreg.tcl` builds a **ds9-format region string** per row from
a template (`${sys};${shape}(${xx} ${yy} ${size}) # color=... text=...`,
~line 384) and loads it into the frame's `catalogMarkers` list. So once
the ds9 region parser understands `glyph(...)`, catalogs get the C++ side
for free. Rendering already culls off-screen markers
(`mm->isVisible(bb)` in `Base::x11Markers`, `frmarker.C` ~7110).

### Prerequisite on the region side

- [x] `ds9parser.Y` must accept `glyph(...)` **without** the leading `# `,
      the same way it accepts both `text(...)` and `# text(...)`. The
      catalog template does not emit `# `.

### Symbol database (`catsym.tcl`)

- [x] Add an `glyph` column (the file path) to the symbol starbase in
      `CATSymDBInit` (~line 437), defaulting to a new `pcat(sym,glyph)`
      pref (`cat.tcl` ~98).
- [x] Run the `glyph` value through `subst` like `text` (`catreg.tcl` ~367).
      Then `glyphs/$type.png` gives per-row glyphs from a table column, and
      combined with symbol `condition` rows it gives per-class glyphs.
- [x] **Backward compatibility:** `starbase_colnum` is a bare array
      lookup (`starbase.tcl:31`) and errors on a missing column. Saved
      `.sym` files and `CATSymLoad` (~381) predate the `glyph` column, so
      add the column on load if it is missing, or guard the lookup in
      `catreg.tcl`.
- [~] Symbol dialog: add `Glyph` to the Shape menu (~154) and a filename
      entry + Browse that is enabled only when shape is `glyph`.
      (Done, but the entry is always enabled.)

### Region generation (`catreg.tcl`)

- [x] Add `glyph` to the shape switch (~193). Map symbol `size` to glyph
      pixel size (or w/h from `size`/`size2`) and ignore `units`/`angle`,
      matching the fixed-screen-size, upright design. A missing size uses
      the image's native size.
- [x] The template needs the filename in the shape args:
      `glyph(${xx} ${yy} "${glyph}" ${w} ${h})`. Use a per-shape template
      rather than overloading `${size}`, and quote paths with spaces.
- [x] Editable catalogs (`edit=1`) attach `CATEditCB` with size/angle
      columns. For glyphs, either disable edit or map a resize back to
      the size column.

### Catalog-specific behavior

- [x] **Highlite.** Catalog rows selected in the table are drawn with
      `highlite=1`. `Glyph` needs a visible highlite rendering (e.g. a bbox
      outline in the marker color) because the image itself has no color.
- [x] **Color.** The symbol `color` is used for the outline/highlite, and
      SVG glyphs are drawn in it: `GlyphSVGRecolor` (glyph.tcl) replaces
      white (`#ffffff`, `#fff`, `white`, `rgb(255,255,255)`) and
      `currentColor` fill/stroke/color values with the marker color before
      Tk renders the svg. Photos are cached per file, size and color;
      `Point::setColor` (now overriding a virtual `Marker::setColor`)
      reloads the photo. Raster formats are not tinted.
- [x] **Performance.** This is where the photo cache matters: thousands of
      rows usually share a handful of files. Also note that on X11,
      `Tk_RedrawImage` with alpha does an `XGetImage`/blend/`XPutImage` per
      glyph per redraw. That is fine for small glyphs and a few thousand rows,
      but benchmark with a large catalog (e.g. 10k+ rows) before committing.
      If it is slow, a fallback is to convert alpha to a 1-bit clip mask
      (`XSetClipMask`) and use plain `XPutImage`.

### Command line / XPA (`ds9/parsers/catlex.fcl` + `catparser.tac`)

- [x] `-catalog symbol shape glyph` (next to `BOXCIRCLE_`: `catlex.fcl:22`,
      `catparser.tac` ~276) and
      `-catalog symbol glyph <file>`, plus the matching `xpaget` for the
      setting. Regenerate the `.tcl` files. (No xpaget exists for any
      symbol setting.)

### Other catalog paths to check

- [x] Catalog -> Regions export: should work automatically since it uses
      the same region syntax, but glyph paths in the exported file need
      the same relative-path handling as region save. (Works; writes
      absolute paths.)
- [ ] Backup/restore of catalogs with glyph symbols (copy glyph files, as
      for regions).
- [x] Catalog `ps`/print: same phase-2 PostScript caveat as regions.

### Phasing

This fits as phase 3 above. Catalog work should start only after the
region MVP and the photo cache exist, since catalogs are the
high-volume case.

### Phase 3 status (2026-11-07)

Done and smoke-tested on macOS (XPA, `img.fits` + a TSV catalog):
- **Symbol table:** new `glyph` column (`CATSymDBInit`, Add, Apply,
  dialog row with Browse, Shape > Glyph). Default `pcat(sym,glyph)` is
  empty = built-in image (`GlyphDefaultFile`). Catalog prefs have Shape >
  Glyph and a Glyph file + Browse.
- **Back compat:** `CATSymEnsureCols` appends any missing standard column
  (glyph, and for very old files width/dash/font*) to a symbol table read
  from a `.sym` file or an old backup. It checks `T(Header)`, not
  `T(col)`, because a table read over an old array keeps stale mappings.
  Called from `CATReg` (every render), the dialog, both symbol loads and
  `symbol add`/set.
  - Fixed on the way: `catalog symbol load` read into the existing array
    without clearing it (the dialog's Open clears it), leaving stale
    column mappings. With that fixed, `Tests/aux/ds9.sym` (8 columns, no
    width/dash/font) only works because of `CATSymEnsureCols`; it already
    failed through the dialog's Open on master.
- **Region generation (`CATReg`):** shape `glyph` -> `glyph(x y {file} w h)`.
  `size` = width, `size2` = height in screen pixels (expr, so `$col`
  works); empty/0 = native, one alone keeps the aspect; `units`/`angle`
  ignored. The glyph file goes through `subst` like `text`, so
  `glyphs/$type.png` picks a file per row, and is `file normalize`d (cwd).
  Edits of an editable catalog only change the display (CATEditCB has no
  glyph case).
- **Highlite:** selecting a row outlines its glyph in the symbol color.
- **CLI/XPA:** `catalog symbol shape glyph` (it also worked before via the
  STRING fallback) and `catalog symbol glyph <file>`. There is no xpaget
  for symbol settings at all, so nothing to add there.
- **Catalog > Regions** export writes glyph regions with absolute paths.

Performance, 10,000 rows, macOS, glyphs 16 px:
- generate: 1.1 s (circle points: 0.7 s)
- redraw, all visible: 253 ms (circle points: 14 ms), ~25 us per glyph
  for `Tk_RedrawImage` -> CoreGraphics. Zoomed so few are visible: 11 ms.
- So panning a fully visible 10k glyph catalog runs at ~4 fps. Fine for
  hundreds to a few thousand. If it matters, draw each distinct photo once
  into an offscreen pixmap + mask and copy per glyph, or cache the
  CGImage. Not measured on X11.

Not done / not verified:
- Catalog backup does not copy glyph files (regions do); catalog restore
  keeps absolute paths.
- Relative glyph paths in a symbol table resolve against the cwd, not
  the `.sym` file.
- Dialog's glyph row is always enabled, not only for shape glyph.

Unrelated bug seen in passing (master): `catalog symbol <N> ...` calls
`CatalogCmdCVAR` (catparser.tac:176), which does not exist; the other
handlers use `ProcessCmdCVAR`.

## Design option: glyph as a point region (evaluated 2026-11-08)

### Prototype status (2026-11-08, branch `region_glyph_point`, uncommitted)

Built with the syntax `point(x,y) # point=glyph [size] {file}` (the user
chose this over keeping `point=circle ... glyph={file}` for older ds9).

- C++: `Glyph` is gone; `Point` has a new shape `GLYPH` and owns the image
  (`glyph.C` now holds the `Point` glyph methods, `glyph.h` is deleted).
  `size_` is the box the image is fitted into keeping its aspect ratio,
  0 = native. Glyph points can be resized by dragging a handle; other point
  shapes still can't.
- Grammars: `ds9parser.Y` has `point=glyph [INT] STRING` as a local and a
  global property; the `# glyph(...)` and bare `glyph(...)` rules are
  removed. Frame commands: `marker create glyph point x y [size] {file}`,
  `marker <id> point glyph {file}`, `get marker <id> point glyph`, and
  `point shape glyph`.
- Tcl: Region > Shape > Point > Glyph (`glyph point`); the point dialog has
  a Glyph shape plus file and Browse rows (`GlyphDialog` is gone);
  `RegionGlyphPhoto fn size`; backup matches `point=glyph ... {file}`.
- Catalogs: shape `glyph point` (`glyph` still accepted) writes
  `point(...) # point=glyph [size] {file}`; `size2` no longer applies.
- Gained for free: CIAO/PROS/SAOtng/SAOimage output keeps the position as
  `point(x,y)`, plus Plot 3D, include/exclude and source/background.
- Verified over XPA: rendering, sizes, relative paths, paths with spaces,
  click-create, dialog shape switching, drag-resize, backup/restore,
  catalogs, PDF with alpha. Tests updated on Tests branch
  `region_glyph_point`: `regions.sh glyph` 9/9, the `cat.sh` glyph checks
  7/7, `xpa.sh region` and `command.sh region` clean. SAMP scripts updated
  but not re-run.
- Docs updated to `point=glyph` (region, framecmd, catalog, command, xpa,
  samp, user catalogs, release notes).

### Evaluation (before the prototype)

A glyph is fixed in screen pixels and never rotates, so it behaves like a
`point` drawn with a picture. This section looks at making it one: type
`point`, with the image as an optional property, instead of the separate
`# glyph(...)` shape on branch `region_glyph`.

### What older ds9 does with each format

Checked by loading files into a ds9 built without glyphs
(`ds9_grid_control`, 2026-11-08):

| Line | Older ds9 |
|---|---|
| `# glyph(120,120,{star.png},16,16)` (this branch) | read as a comment; other regions load; the glyph is silently gone, and lost on re-save |
| `point(120,120) # point=glyph 16 file={star.png}` | load fails at that line; only the regions before it are kept |
| `point(120,120) # point=circle color=red glyph={star.png}` | loads as a red circle point; `glyph={star.png}` survives a re-save |

The third form degrades well because `ds9parser.Y` (`shapeComment`) keeps
everything after the first unknown property as the region's comment.
Limits of that:
- the comment buffer is `localComment[80]`, so a path longer than about 70
  characters is truncated in older ds9 and corrupted if it re-saves the file
  (the relative paths this branch writes help);
- known properties written after `glyph=` are swallowed into the comment
  too, so `glyph=` must be written last.

### Proposed format

    point(120,120) # point=circle 24 color=red glyph={star.png}

- The `point=` shape is the fallback, drawn when the image can't be loaded
  and by older ds9 versions.
- The point `size` is the glyph's box. The image is scaled to fit it,
  keeping its aspect ratio, which replaces the separate width/height. If the
  native size has to stay, it would need a `glyphsize=` property, and older
  ds9 would see it as more of the comment.
- New ds9 parses `glyph=` as a real property, so there is no length limit.

### What it would gain

- The point machinery comes for free: Plot 3D analysis, include/exclude,
  source/background, the point dialog and its menus, and `regions group`.
- CIAO/PROS/SAOtng/SAOimage output keeps the position as `point(x,y)`;
  today those formats drop glyphs.
- Catalog symbols fit the existing names: `glyph point` next to
  `circle point`, `box point`, and so on.
- Older ds9 shows something in the right place and round-trips the image
  name, instead of silently losing the region.

### What it would cost

- **C++:** move the image code out of `Glyph` into a helper that `Point`
  owns: load/free, the change callback, X/PS/WIN32 rendering, the PDF
  `ds9glyph` op and relative-path listing. The class and its tests mostly
  carry over; `Point::renderX`/`renderPS`/`listPost`/`listXML` grow an
  image branch. Drop `glyph.C` and its parser rules: `# glyph(...)`, bare
  `glyph(...)`, and the `marker create/glyph` commands in `parser.Y`. Add
  `GLYPH_ '=' STRING` to the local properties in `ds9parser.Y`, plus
  `marker $id point glyph file` and get commands.
- **Tcl:**
  - the point dialog gets the file entry and Browse;
  - shape `glyph point` for click-create;
  - `GlyphBackup`'s regex changes to `glyph=\{...\}`;
  - catalogs map `glyph point` to `point=circle <size> glyph={...}`;
  - docs and the `Tests` files are redone.

  About half the existing work changes. The hard parts carry over as-is:
  compositing, resizing, PDF alpha, path handling and backup copying.
- **Meaning:** a decorative glyph (a logo or arrow) becomes an analysis
  region. It counts in CIAO export and Plot 3D unless the user sets
  `source=0` or deletes it.
- **Compatibility:** the branch's `# glyph(...)` format is unreleased (it's
  only on `region_glyph` and in the r8.8.2 release notes), so it can be
  dropped rather than kept as a second syntax.

### Open questions

- Single size (fit in a square box) or keep separate width and height?
- Should the fallback shape be configurable (`point=box` …) or fixed to
  `circle`?
- Is `glyph point` the right name in the Region > Shape menu, or should
  Glyph sit in the point dialog as a checkbox plus file?
