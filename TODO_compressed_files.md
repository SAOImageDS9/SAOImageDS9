# TODO: read compressed non-FITS files without shelling out

Written 2026-11-26 against `master` (0bcdf263b), `kjg/asdf_support_rebase`
and `origin/xisf_support`.

Status: Option 1 (Phase 1) is implemented on branch `compressed_files`, in
`ds9/library/decompress.tcl`. See "Option 1: as built" below.

## The problem

When ds9 opens a compressed region file, it runs an external program to
decompress it. `MarkerLoadFile` (`ds9/library/marker.tcl:1494`) picks the
program by file extension and writes the result to a temp file:

```tcl
switch [file extension $filename] {
    .gz {set app gunzip}
    .bz - .bz2 {set app bunzip2}
    .Z {set app uncompress}
}
...
exec $app < $srcfilename > $filename      ;# filename = [tmpnam ...]
```

On Windows there is usually no `gunzip`, `bunzip2` or `uncompress` on the
`PATH`, so this fails. It also fails on a minimal Linux or macOS install that
lacks `uncompress`. Region files are the only non-FITS loader that tries to
handle compression at all. Every other non-FITS reader opens the file directly
and fails on compressed input.

FITS has the same problem for `.bz2` and `.Z`. `.gz` works everywhere because
`fitsy/allocgz.C` reads it in-process with `gzopen`:

| Where | What it runs |
|---|---|
| `load.tcl:471` `BZip2File` | `open "\| bunzip2 < $root.bz2"` |
| `load.tcl:486` `CompressFile` | `open "\| uncompress < $root.Z"` |
| `url.tcl:292-303`, `imgsvr.tcl:448-459`, `hvsup.tcl:1249-1260` | `bunzip2`, `uncompress`, `pcat`, chosen by HTTP `Content-Encoding` |

FITS is outside the scope of this TODO, but the same mechanism can replace
these call sites (Phase 4).

## What we already have, and what the branches add

| Codec | Magic bytes | On `master` | On the asdf/xisf branches |
|---|---|---|---|
| gzip (`.gz`) | `1f 8b` | **Tcl 9 built-in `zlib`** (`zlib push gunzip`, `zlib gunzip`); zlib inside fitsy (`gzopen`) | vendored `zlib/` (static `libz.a`) |
| bzip2 (`.bz2`, `.bz`) | `42 5a 68` (`BZh`) | none | vendored `bzip2/` (`libbz2.a`), stream API already used in `fitsy/asdf.C` (`BZ2_bzDecompressInit/BZ2_bzDecompress`) |
| zstd (`.zst`) | `28 b5 2f fd` | none | vendored `zstd/` on `xisf_support` only (`libzstd.a`) |
| lz4 frame (`.lz4`) | `04 22 4d 18` | none | vendored `lz4/` (`liblz4.a`). ASDF/XISF use the *block* API; `.lz4` files need `lz4frame.h`, which is part of the same library |
| Unix compress (`.Z`, LZW) | `1f 9d` | none | **none**: zlib does not decode LZW. Write our own (see "Decoding `.Z`") |
| xz/lzma (`.xz`) | `fd 37 7a 58 5a 00` | none | none (out of scope unless someone asks) |

On the branches, the libraries are linked statically into the `ds9` binary
(`ds9/unix/Makefile.in`: `liblz4.a libbz2.a libzstd.a`). Any C code in
`fitsy`, `tksao` or `tclfitsy` can call them without a new build dependency.

Some notes on that table:

- **gzip works today on all three platforms with no new code in C.** Tcl 9
  always ships zlib (`tcl9.0/compat/zlib` on platforms that don't provide it).
  `zlib gunzip $data` decompresses in memory. `zlib push gunzip $ch` stacks
  a decompressing transform on a channel, **but don't use it**: on a
  truncated `.gz` the transformed channel never reaches eof (it reports
  `fblocked` forever), so `read`, `fcopy` and `gets` loops hang. `zlib
  gunzip` fails cleanly with `stream error`. This was checked with Tcl 9.0.
- The ASDF/XISF codec code in `fitsy/asdf.C` and `fitsy/xisf.C` decodes
  buffer to buffer, where the output size is known up front. Files have no
  declared size, so we need the libraries' *streaming* APIs (`inflate`/
  `gzread`, `BZ2_bzDecompress` in a loop, `ZSTD_decompressStream`,
  `LZ4F_decompress`). The ASDF bzip2 path already loops over
  `BZ2_bzDecompress`, so that pattern can be reused almost unchanged.
- `.Z` needs its own LZW decoder. Nothing needs vendoring: write it
  ourselves (see "Decoding `.Z`" below). Alternatively, drop `.Z` for
  non-FITS files: compressed region files in `.Z` format are rare.

## Decoding `.Z`

`.Z` is the LZW format of the old Unix `compress` program. There is no
standard library for it. Every tool that reads `.Z` carries its own copy of
the decoder. A decoder is about 150-200 lines of C, so we should write our
own, based on a source with a safe license, rather than vendor anything.

Possible sources:

| Source | License | Use? |
|---|---|---|
| libarchive `archive_read_support_filter_compress.c` | BSD-2 | **Yes.** About 400 lines and cleanly written. Adapt this one file; don't vendor libarchive. |
| ncompress `compress.c` (the maintained `compress`) | Public domain | **Yes.** Its decompress function is easy to extract. |
| gzip `unlzw.c` | GPL | No. |
| cfitsio `zuncompress.c` | Derived from gzip, probably GPL | No, unless its license is checked and turns out to allow it. |

The LZW code already in the tree can't be reused. `tkimg/libtiff` (TIFF
LZW) and `tkimg/gif`, `tkimg/compat/libjpeg/rdgif.c` (GIF LZW) use different
variants: they pack bits in a different order, have no `1f 9d` header, and
handle the dictionary-reset code differently.

The format:

- A 3-byte header: the magic bytes `1f 9d`, then a flag byte. Its low 5 bits
  give the maximum code width (9-16 bits). Its top bit (`0x80`) says whether
  the encoder emits the dictionary-reset code (256).
- Codes start 9 bits wide and are packed least-significant bit first. The
  width grows by one bit each time the dictionary fills, up to the maximum.
- The usual LZW dictionary: up to 65,536 entries (a prefix code plus a last
  byte). Decode each code by walking its chain backwards onto a stack. Handle
  the KwKwK case, where a code refers to the entry being defined.
- The quirk every from-scratch decoder gets wrong at first: `compress` reads
  codes in groups of 8. When the code width grows, or after a reset code, it
  discards the rest of the current group and resumes at the next multiple of
  8 codes.

The decoder goes in `fitsy/decompress.C` (Option 2), behind the same
streaming interface as the other codecs. To test it, compress files of
various sizes with `compress` (ncompress, on Linux), including files large
enough to reach 16-bit codes and to trigger resets. Then check that our output
matches `uncompress` byte for byte. Include files created with `compress -b 9`
through `-b 15` and an empty file.

## Who would use a shared mechanism

These are all the loaders on `master` that read a non-FITS file by name. They
fall into two groups, depending on who opens the file.

### A. Tcl opens the file (`open $fn r`, then reads)

Changing the `open` call is enough for these:

- Catalogs: `VOTRead` (`vot.tcl:53`, VOTable XML), `TSVRead` (`tsv.tcl:21`),
  `starbase_read` (`starbase.tcl:305`, RDB/starbase). All three go through
  `CATLoadFn` (`cat.tcl:376`), which also checks `file exists $fn` first.
- Plot data: `PlotLoadDataFile` (`plotdata.tcl:384`), `plotprocess.tcl:291,312,374`.
- Contour levels: `ContourLoadLevelsNow` (`contour.tcl:1038`).
- Colormaps (the Tcl side): `colorbar.tcl:855,1064`.
- Analysis files, plus the analysis-related reads in `analysis.tcl:200,2032-2066`.
- Prism (`prism.tcl:512`), the illustrate format (`illustratecommand.tcl:290`),
  backup restore (`backup.tcl:146`), and a few others found by
  `grep -n 'open \$fn' ds9/library/*.tcl`.

Most of these will never see a compressed file in practice. The ones worth
doing are **catalogs (VOT/TSV/RDB), plot data and contour files**, because
those are the data products that tend to be archived as `.gz`.

### B. C++ opens the file by name (`ifstream str(fn)`)

Tcl passes the filename into the frame command, and the C++ code opens it:

- Regions: `Base::markerLoadCmd(fm, const char* fn, ...)` (`frmarker.C:5328`)
  and templates (`createTemplateCmd`, `frmarker.C:930,941`).
- Contours: `Base::contourLoadCmd` (`basecommand.C:767,776,787`).
- WCS append/replace from a file (`basecommand.C:4322,4421`).
- Colormap files (`colorbar/colorbar.C:813`, `sao.C:63`, `lut.C:54`).
- Regions in FITS format (`markerLoadFitsCmd`) go through fitsy, so `.gz`
  already works.

The marker loader also has an fd form, `markerLoad : markerFormat INT`
(`parser.Y:2796`). It wraps the fd in `boost::fdistream`
(`tksao/tkutil/fdstream.hpp`) and is used for XPA sockets (`marker.tcl:1816`).
That shows a `std::istream` from another source is enough for
`parseMarker()`.

## Options

### Option 1: Tcl-level `DecompressOpen` plus a temp file for C++ (smallest)

Add a helper, for example `ds9/library/decompress.tcl`:

```tcl
# returns a readable channel positioned at the start of the
# *decompressed* data, or the plain file if it isn't compressed
proc DecompressOpen {fn {mode r}} { ... }

# for C++ consumers that need a filename: returns $fn unchanged if
# not compressed, otherwise a tmpnam file holding the decompressed bytes
# (caller deletes it)
proc DecompressToTmp {fn} { ... }
```

- Detect the format from **magic bytes**, not the extension. Read 6 bytes in
  binary mode. The extension can be wrong, for example `foo.reg` that is
  really gzip, or a `.gz` name from a URL that was already decoded. Keep the
  extension as the fallback only for naming the temp file (`.reg`, `.xml`).
- gzip: read the file in binary mode and `zlib gunzip` it in memory (not
  `zlib push`, see above). Pure Tcl, works on Windows today, needs no branch.
- bzip2/zstd/lz4/LZW need a C entry point (Option 2). Until then, fall back to
  the current `exec`, so nothing regresses on Unix.
- `MarkerLoadFile` swaps its `exec` for `DecompressToTmp`. `CATLoadFn`,
  `PlotLoadDataFile` and the contour loaders swap `open` for
  `DecompressOpen`.

The gzip part of this could land on `master` alone, without either branch.
It fixes `.gz` regions and catalogs on Windows immediately.

#### Option 1: as built (branch `compressed_files`)

`ds9/library/decompress.tcl`:

- `DecompressType fn`: `gzip`, `bzip2`, `compress`, `zstd`, `lz4`, `xz`, or
  empty, from the first 6 bytes.
- `DecompressData fn`: the whole decompressed file, as bytes. gzip uses
  `zlib gunzip`. The others run `bzip2 -dc`, `uncompress -c` (or `gzip -dc`),
  `zstd -dcq`, `lz4 -dc` or `xz -dc`, found with `auto_execok` and run with
  `open |[list ...]`, so the filename is never parsed by a shell. A failed
  program raises its error when the pipe closes. If no decoder is installed,
  the error is `no decoder for <type>`.
- `DecompressOpen fn`: plain `open $fn r` if the file is not compressed.
  Otherwise a read-only in-memory channel (`chan create`, handler
  `DecompressChan`) over `DecompressData`, set to `-translation auto
  -encoding [encoding system]`, the same as a plain `open`. ds9 bundles
  only a few tcllib modules, and the tcllib virtual channels aren't among
  them, so the handler is a few lines of our own.
- `DecompressToTmp fn` / `DecompressCleanup tmp`: for readers that need a
  file name. The temp file is `<tmpdir>/ds9<clicks>/<name minus .gz etc.>`,
  so the C++ contour set name and the `.con`/`.lev` extension checks still
  see the real name. Cleanup only deletes paths that `DecompressToTmp`
  created, never the caller's original file. `DecompressCleanupAll`
  (called from `QuitDS9`) removes any still open, e.g. a Prism window left
  open at exit.

Call sites:

- Regions: `MarkerLoadFile` (its body moved to `MarkerLoadFileNow`, with
  cleanup in `try`/`finally`). This fixes both bugs listed under "Things
  to watch".
- Catalogs and Prism imports: `VOTRead`, `TSVRead`, `starbase_read` use
  `DecompressOpen`.
- Prism FITS: `PrismLoad` leaves gzip to fitsy (`allocgz`) and decompresses
  anything else to a temp file. `PrismClear`/`PrismDestroy` remove it.
- Plot data: `PlotLoadDataFile` (backup restore) and the `plot` command
  and SAMP paths in `plotprocess.tcl` (`PlotCmdNew`, `PlotCmdNewFile`,
  `PlotCmdLoad...`) use `DecompressOpen`. Contour levels
  (`ContourLoadLevelsNow`) do too. Contour files: the new `ContourLoadFn` wraps all four
  `contour load` frame calls with `DecompressToTmp`.

Tested on Linux (Xvfb `:99`): `Tests/regions.sh` 124/124, and a smoke test
comparing each compressed load against the plain file. It covers regions
(.gz/.bz2/.Z/.xz/.zst, gzip named `.reg`, spaces in the path, truncated
.gz), Prism FITS (.gz/.bz2/.xz) and imports (VOT/TSV/RDB as .gz/.bz2),
catalog imports, plot data, contours (.ctr/.con by render hash) and contour
levels, plus temp-dir cleanup on clear, close and exit. Not yet tested
on Windows or macOS.

Whole-file-in-memory cost: a 16 MB, 600k-row TSV loads in 630 ms from
`.gz`, against 571 ms uncompressed (Linux).
### Option 2: a native `decompress` Tcl command in `tclfitsy` (the general fix)

`tclfitsy` is already a Tcl package (`Tcl_CreateCommand(interp, "fitsy", ...)`)
that links fitsy, and fitsy is where the codecs live on the branches. Add a
codec-neutral layer in fitsy and expose it to Tcl:

- `fitsy/decompress.{h,C}` holds one streaming reader per codec behind a
  common interface (`open(fn)`, `read(buf,n)`, `close()`, plus a
  `detect(magic)`), with a passthrough reader for uncompressed files. The
  bzip2 loop from `fitsy/asdf.C` and the zstd/lz4 includes from
  `fitsy/xisf.C` move here, and ASDF/XISF could later share the helpers.
- The Tcl surface comes in two levels:
  1. `fitsy decompress <infile> <outfile>`: whole file to a temp file. This
     is trivial, and it is all that the temp-file path in Option 1 needs.
  2. `fitsy decompress push $ch`: a stacked channel transform
     (`Tcl_StackChannel` with a `Tcl_ChannelType` whose `inputProc` calls the
     streaming reader), the same idea as `zlib push`. With it,
     `DecompressOpen` returns a real channel for every codec, and large
     catalogs never touch disk.
- Build: the source files go in `fitsy/configure.ac` *and* the checked-in
  `fitsy/configure` by hand (see AGENTS.md; don't run autoconf). The link
  flags already exist on the branches.

Level 1 is enough for every case in group B and is simple to get right. Do
level 2 only if a real need appears: a very large `.xml.gz` catalog, or
reading from a socket.

### Option 3: give the C++ loaders a decompressing `std::istream`

Replace `ifstream str(fn)` in the group B loaders with something like
`DecompressIStream str(fn)`, a `std::streambuf` over the fitsy reader from
Option 2. Then `marker load ds9 foo.reg.gz` works directly from XPA, SAMP,
backups and the command line, with no Tcl temp file and no Tcl changes. The
cost is about 8 call sites in `tksao`. `tksao` also needs to include fitsy's
new header, which means the full `make fitsyclean fitsy tksaoclean tksao
ds9clean ds9` cycle.

This is the cleanest end state for group B. Option 1's temp file gives the
same user-visible result with less C++ change.

## Recommended phasing

1. **gzip, Tcl only, on `master`** (done on `compressed_files`). Add
   `DecompressOpen`/`DecompressToTmp` with magic-byte detection and
   `zlib gunzip`. Wire it into `MarkerLoadFile`,
   `CATLoadFn` (VOT/TSV/RDB), `PlotLoadDataFile` and the contour loaders. For
   other codecs, keep the existing `exec` as the fallback. No C changes. Fixes
   the most common Windows case.
2. **Native bzip2/zstd/lz4 via `fitsy decompress in out`**, once the codec
   libraries are on `master` (that is, after asdf/xisf merges). Remove the
   `exec` fallback for these codecs.
3. **`.Z`**: write our own LZW decoder, adapted from libarchive (BSD-2) or
   ncompress (public domain); see "Decoding `.Z`". Since the same decoder
   also fixes FITS `.Z` in Phase 4, it is worth doing rather than dropping
   `.Z`.
4. **Optional:** replace the FITS `exec` paths (`BZip2File`, `CompressFile`,
   and the `Content-Encoding` switches in `url.tcl`, `imgsvr.tcl` and
   `hvsup.tcl`) with the same reader, which removes the last decompression
   `exec` calls from ds9. `pcat` (pack) has no library; drop it.
5. **Optional:** Option 3 (`std::istream`) for the C++ loaders, and
   `fitsy decompress push` for streaming, if needed.

## Things to watch

- **Encoding/translation:** decompress as bytes, *then* give the channel
  `-translation auto -encoding [encoding system]`, as a plain `open`
  would. Tcl 9's strict encoding profile raises an error on invalid UTF-8.
  (VOT uses XML, which may declare its own encoding.)
- **`file exists` checks** (e.g. `CATLoadFn`) still pass, because the
  compressed file exists.
- **Region files with `[ext]` suffixes:** `MarkerLoadFile` strips `[...]`
  before opening. Detection must run on the stripped base name, the same way
  `GzipFile` in `load.tcl` does.
- **A region file that is really FITS:** `MarkerLoadFile` sniffs
  `SIMPLE  =` *after* decompressing. Keep that order. A `.fits.gz` region file
  could also go straight to fitsy, which already handles gzip.
- **Temp files:** reuse `tmpnam` and delete in a `finally`/`catch`. The
  current `MarkerLoadFile` leaks the temp file on every `return -code error`
  path (`marker.tcl:1530-1562`). It also calls `FileLast markerfbox
  $filename` *after* reassigning `filename` to the temp file, so the
  file dialog's last-used path points at a deleted temp file. Use the
  original name.
- **Concatenated gzip members** (`cat a.gz b.gz`): `gzread` handles them,
  but `zlib gunzip` stops after the first member. This rarely matters,
  but note it in the tests.
- **Save paths:** this TODO is about reading only. Writing compressed region
  and catalog files is a separate feature.
- **Docs:** update `ds9/doc/ref/region.html` and `catalogs.html` to list the
  supported compressions, and the file-dialog filters in `stdfbox.tcl`
  (`*.reg.gz`, `*.xml.gz`, ...).

## Tests to add (in `Tests/`)

- `foo.reg` and `foo.xml` (VOT), `.tsv`, `.rdb`, and a plot `.dat`, each
  compressed with gzip, bzip2, zstd and lz4. Load each over XPA and compare
  `xpaget ds9 regions` and the catalog row count with the uncompressed load.
- A gzip file named without `.gz` (magic-byte detection).
- A `.gz` region file whose contents are FITS.
- On Windows, run the above with no `gunzip`/`bunzip2` on `PATH`.
