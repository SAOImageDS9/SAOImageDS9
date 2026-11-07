# TODO: `glyph` region shape (user-supplied image as a region)

Goal: let users place their own small image (PNG/GIF/etc.) as a region
marker, e.g. a custom glyph/symbol, analogous to the illustrate-mode
Image shape but anchored to image/WCS coordinates.

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

- [ ] **Size semantics.** Recommended: fixed **screen pixels** (like
      `point`/`text`), constant size at any zoom. Alternative: size in
      image/WCS units (like `box`), scaling with zoom. Could be added
      later as a flag.
- [ ] **Rotation.** Recommended: always upright. Rotating photos is
      expensive and rarely wanted for markers.
- [ ] **File reference.** Region file stores a path. Resolve relative
      paths relative to the region file. When the file is missing, draw a
      placeholder (a box with an X).
- [ ] **Photo caching.** Share one Tk photo per (filename, size).
      Otherwise 1000 catalog glyphs means 1000 decoded images.

## C++ side (`tksao/`)

- [ ] `frame/glyph.{h,C}` (new): `class Glyph : public Marker`, modeled
      on `Text`. Holds `fileName`, `width`, `height` and the photo name.
      Implements `renderX`, `renderPS`, `updateHandles`, `calcAllBBox`,
      `isIn`, `list` (ds9 format), and edit (resize via handles).
- [ ] Rendering: `Tk_GetImage()` + `Tk_RedrawImage()` onto the Drawable.
      This composites photo alpha onto the pixmap (see "Alpha / transparency"
      below). In XOR render mode (dragging), draw only the outline box.
      Nothing in tksao uses `Tk_GetImage` yet, so there is no existing
      pattern to copy.
- [ ] The `Tk_GetImage` change callback must request a frame redraw, or
      glyphs show stale content when a cached photo is updated.
- [ ] `dup()` (copy/paste, undo; `Text` does `new Text(*this)`): the
      `Glyph` copy constructor must call `Tk_GetImage` again rather than
      copying the handle, or `Tk_FreeImage` runs twice.
- [ ] `renderWIN32` is **not** free: it is the Windows *printing* path
      (GDI, `#ifdef __WIN32`, called from `Marker::win32()`), not screen
      drawing, and it is pure virtual. Phase 1: draw the bbox, like PS.
- [ ] PostScript: phase 1 draws the bbox. Later: emit `colorimage` from
      `Tk_PhotoGetImage` data, composited on white.
- [ ] Magnifier: draw the box only at first (`x11MagnifierMarkers`,
      `base.C` ~2551).
- [ ] `configure.ac`: add `frame/glyph.C` next to `frame/text.C` (~line 218).
- [ ] `base.h` / `frmarker.C`: `createGlyphCmd(...)` beside
      `createTextCmd` / `createPointCmd` (`frmarker.C` ~442), plus
      set/get commands for file and size.
- [ ] `frame/parser.Y` + `lex.L`: `create glyph x y "file" w h ...`,
      `marker <id> glyph file|size ...`, `get marker <id> glyph ...`.
      Regenerate with `cd tksao && make parser`.
- [ ] `frame/ds9parser.Y` + `ds9lex.L`: read/write
      `# glyph(x,y,"file",w,h)`. The `# ` prefix matches
      `text`/`vector`/`compass`, so CIAO/funtools ignore it. Regenerate
      with `cd tksao && make ds9parser`.
      Store the path in its own buffer (>= 2048, matching `MKBUFSIZE`).
      Do **not** reuse the `localText`/`localComment` pattern: those are
      `char[80]` filled with `strncpy(...,80)` (`ds9parser.Y:58`), which
      would silently truncate long paths.
- [ ] Other formats (ciao/sao/pros/tng/xy): nothing to do. The base
      class's empty `listCiao` etc. already drop the shape. XML/VOTable
      (`frmarkerxml.C`) can skip it initially.

**Photo loading:** keep decoding/resizing in Tcl. The C++ marker calls
back into a Tcl proc, e.g. `RegionGlyphPhoto fn w h`, which uses
`image create photo` + an alpha-preserving resize (see below) and returns
a cached photo name. This way both `ds9parser.Y` (region file load) and
the interactive path share one loader, and the C++ code needs no image
codecs.

- [ ] Wrap the callback in `Tcl_SaveInterpState`/`Tcl_RestoreInterpState`.
      It runs mid-parse inside a frame command, and evaluating Tcl
      clobbers the interp result the command may be building (errors,
      `list` output).
- [ ] The photo cache must refcount, or never `image delete` a photo a
      marker still holds; a deleted photo draws as nothing.

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
  - [ ] Premultiply: it averages RGB without weighting by alpha, so
        colors from invisible pixels bleed in. White on transparent black,
        8->5, gives an edge of `127 127 127 127` instead of
        `255 255 255 127` (grey halo). Multiply RGB by alpha before
        averaging, divide after.
  - [ ] It dropped the `-subsample` fast path; restore it.
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

- [ ] `ds9/library/glyph.tcl` (new): `GlyphDialog` with filename + Browse
      + size, mostly lifted from `IllustrateImageDialog`.
- [ ] `ds9/library/marker.tcl`: add `glyph` to the create switch (~324),
      the default-create command (~675; prompt for a file or use a pref
      default), and the dialog dispatch (~1596).
- [ ] `ds9/library/mregion.tcl`: Shape menu radiobutton (~103) and prefs
      entry (~272), plus a `pmarker(glyph,file)` default.
- [ ] `ds9/parsers/regionlex.fcl` + `regionparser.tac`: add
      `-regions shape glyph` for the command line and XPA, then regenerate
      the `.tcl` files.
- [ ] Save/backup: copy referenced glyph files alongside saved regions.
      `illustrate.tcl` ~436-455 already does this for illustrate images
      and is the model.
- [ ] Docs: `ds9/doc/ref/region.html`.

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
- Interactive click-to-create (opens a file dialog when no default file
  is set) and highlite rendering were not exercised.
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

- `Tk_RedrawImage` alpha compositing on **X11** (Linux). macOS is
  verified (see "Alpha / transparency"); repeat that test on a Linux
  build. Win32 on-screen drawing goes through Tk's Xlib emulation and is
  also untested. (Win32 *printing* is `renderWIN32`, which draws no image
  in phase 1.)
- The real `Glyph` marker path: `Tk_GetImage` against the frame's tkwin
  and drawing into `Base::pixmap`. Re-run the blue-background test once
  `Glyph` exists.

## Addendum: catalog markers

This is mostly Tcl work. Catalog symbols do not create markers directly:
`ds9/library/catreg.tcl` builds a **ds9-format region string** per row from
a template (`${sys};${shape}(${xx} ${yy} ${size}) # color=... text=...`,
~line 384) and loads it into the frame's `catalogMarkers` list. So once
the ds9 region parser understands `glyph(...)`, catalogs get the C++ side
for free. Rendering already culls off-screen markers
(`mm->isVisible(bb)` in `Base::x11Markers`, `frmarker.C` ~7110).

### Prerequisite on the region side

- [ ] `ds9parser.Y` must accept `glyph(...)` **without** the leading `# `,
      the same way it accepts both `text(...)` and `# text(...)`. The
      catalog template does not emit `# `.

### Symbol database (`catsym.tcl`)

- [ ] Add an `glyph` column (the file path) to the symbol starbase in
      `CATSymDBInit` (~line 437), defaulting to a new `pcat(sym,glyph)`
      pref (`cat.tcl` ~98).
- [ ] Run the `glyph` value through `subst` like `text` (`catreg.tcl` ~367).
      Then `glyphs/$type.png` gives per-row glyphs from a table column, and
      combined with symbol `condition` rows it gives per-class glyphs.
- [ ] **Backward compatibility:** `starbase_colnum` is a bare array
      lookup (`starbase.tcl:31`) and errors on a missing column. Saved
      `.sym` files and `CATSymLoad` (~381) predate the `glyph` column, so
      add the column on load if it is missing, or guard the lookup in
      `catreg.tcl`.
- [ ] Symbol dialog: add `Glyph` to the Shape menu (~154) and a filename
      entry + Browse that is enabled only when shape is `glyph`.

### Region generation (`catreg.tcl`)

- [ ] Add `glyph` to the shape switch (~193). Map symbol `size` to glyph
      pixel size (or w/h from `size`/`size2`) and ignore `units`/`angle`,
      matching the fixed-screen-size, upright design. A missing size uses
      the image's native size.
- [ ] The template needs the filename in the shape args:
      `glyph(${xx} ${yy} "${glyph}" ${w} ${h})`. Use a per-shape template
      rather than overloading `${size}`, and quote paths with spaces.
- [ ] Editable catalogs (`edit=1`) attach `CATEditCB` with size/angle
      columns. For glyphs, either disable edit or map a resize back to
      the size column.

### Catalog-specific behavior

- [ ] **Highlite.** Catalog rows selected in the table are drawn with
      `highlite=1`. `Glyph` needs a visible highlite rendering (e.g. a bbox
      outline in the marker color) because the image itself has no color.
- [ ] **Color.** The symbol `color` does not tint the image. Use it for
      the outline/highlite only, and document that.
- [ ] **Performance.** This is where the photo cache matters: thousands of
      rows usually share a handful of files. Also note that on X11,
      `Tk_RedrawImage` with alpha does an `XGetImage`/blend/`XPutImage` per
      glyph per redraw. That is fine for small glyphs and a few thousand rows,
      but benchmark with a large catalog (e.g. 10k+ rows) before committing.
      If it is slow, a fallback is to convert alpha to a 1-bit clip mask
      (`XSetClipMask`) and use plain `XPutImage`.

### Command line / XPA (`ds9/parsers/catlex.fcl` + `catparser.tac`)

- [ ] `-catalog symbol shape glyph` (next to `BOXCIRCLE_`: `catlex.fcl:22`,
      `catparser.tac` ~276) and
      `-catalog symbol glyph <file>`, plus the matching `xpaget` for the
      setting. Regenerate the `.tcl` files.

### Other catalog paths to check

- [ ] Catalog -> Regions export: should work automatically since it uses
      the same region syntax, but glyph paths in the exported file need
      the same relative-path handling as region save.
- [ ] Backup/restore of catalogs with glyph symbols (copy glyph files, as
      for regions).
- [ ] Catalog `ps`/print: same phase-2 PostScript caveat as regions.

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
