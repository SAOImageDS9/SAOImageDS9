# ASDF Tables in DS9 — Design/Analysis Document

**Status:** analysis, no code written. Companion to `ASDF_NATIVE_SUPPORT_DESIGN.md`, which
covers the image/WCS half and is complete. Read `TODO.md`'s "Current state" section first
for where the ASDF work stands generally.

Every measurement below was taken against this checkout and the eight Roman sample files in
`utils/asdf_gwcs_probe/sample_data/`, not inferred from documentation.

## 1. Question being answered

The image half of native ASDF support is done. ASDF files also carry *tables* — Roman
source catalogues, and per-product metadata tables. Two DS9 surfaces could consume them:

- **Prism**, the FITS browser (`ds9/library/prism.tcl`), which lists extensions, shows
  headers, displays table rows and plots/histograms columns.
- **Catalogs** (`ds9/library/cat*.tcl`), which overlay a table's sky positions on the
  frame as symbols, with filtering, sorting, region export and cross-matching.

How much work is each, what do they share, and which is worth doing first?

Short answer: they share almost all of it — one reader function — and the **catalog** side
is the cheaper and more useful half, which is the reverse of the order the question is
usually asked in.

## 2. What an ASDF table actually is

Two representations, and the one that looks canonical is not the one in the data.

### 2a. Structured (record) ndarray

A `core/ndarray` whose `datatype:` is a YAML list of named field maps rather than a scalar
type. One block, columns interleaved:

```yaml
data: !core/ndarray-1.1.0
  source: 0
  datatype:
  - {byteorder: big, datatype: float32, name: x}
  - {byteorder: big, datatype: int16, name: y}
  byteorder: big
  shape: [8, 8]
```

This is what `Tests/asdf/arrays/struct2d.asdf` pins, and the reader currently refuses it
(`asdfBitpix` gets an empty datatype, so the node reports no BITPIX — see the fixture's
baseline). **It does not occur in any of the eight Roman sample files: zero instances.**

### 2b. `astropy/table/table-1.3.0` — what Roman actually writes

The L3 coadd contains **18** of these. One binary block *per column*:

```yaml
background: !<tag:astropy.org:astropy/table/table-1.3.0>
  colnames: [level, subtracted, method]
  columns:
  - !table/column-1.2.0
    data: !core/ndarray-1.1.0
      source: 123
      datatype: float64
      byteorder: little
      shape: [1]
    name: level
  - !table/column-1.2.0
    data: !core/ndarray-1.1.0 {source: 125, datatype: [ucs4, 5], ...}
    name: method
  qtable: false
```

Three things in that very first real table matter for scoping:

- **String columns.** `datatype: [ucs4, 5]` — fixed-width UCS-4, five codepoints, 20 bytes
  per element. Common throughout the metadata tables. A numeric-only reader would show
  mostly blanks.
- **Non-uniform column wrappers.** A `!time/time-1.4.0` column puts its ndarray at
  `.../value`, not `.../data`.
- **`bool8`** columns, which the image path already maps to BITPIX 8.

### 2c. The container reader already finds all of it

No change is needed to *locate* table data. Running the existing enumerator over the coadd:

```
valid=1 nodes=146 blocks=146
  col: roman/meta/individual_image_meta/background/columns/0/data   float64    ndim=1 dim0=1
  col: roman/meta/individual_image_meta/background/columns/1/data   bool8      ndim=1 dim0=1
  col: roman/meta/individual_image_meta/background/columns/2/data   [ucs4, 5]  ndim=1 dim0=1
  ...
  total column arrays enumerated: 136
```

Paths, datatypes and shapes all come out correctly, and `[ucs4, 5]` survives verbatim as the
datatype string, ready to be parsed. `FitsAsdfFile::find()` (`fitsy/asdf.h:102`) resolves any
of them by path, and `fitsy asdf block` already returns decoded bytes.

## 3. Relevant DS9 internals

### 3a. Prism's only backend is the `fitsy` command

`prism.tcl` reaches C++ exclusively through the `fitsy` Tcl command from `tclfitsy` —
`dir`, `open`, `close`, `header`, `istable`, `rows`, `colnum`, `keyword`, `minmax`, `table`,
`histogram`, `plot`. That is the same command this branch already extended with
`fitsy asdf tree|arrays|block` (`tclfitsy/tclfitsy.C:122`), so an ASDF arm is an extension of
a surface that already has one, not a new integration.

### 3b. Prism already has two backends

`var(type)` is `fits` or `ascii`, dispatched at **7 `switch` statements** (prism.tcl lines
401, 926, 1295, 1385, 1682, 1975, 2160) plus **4 `!= {fits}` guards** (1574, 1595, 1620,
1645). The `fits` arm pages through a table in C++; the `ascii` arm (VOTable/RDB/TSV
import) loads the whole table into a Tcl starbase array and the table widget reads from
that.

### 3c. The catalog system is reader-pluggable, and the plug-in is tiny

`CATLoadFn {varname fn reader}` (`cat.tcl:367`) calls `$reader $var(catdb) $fn` and does
everything else itself. The registered readers are `VOTRead`, `TSVRead`, `starbase_read`
and `FITSRead` — all with the identical `{t fn}` signature.

`catfits.tcl` — the *entire* FITS-table catalog integration — is 45 lines:

```tcl
proc FITSRead {t fn} {
    ...choose load mode...
    fitsy open $fn $load -1
    fitsy table $t false 0 10000
    fitsy close
    set T(HLines) 2
    set T(H_1) $T(Header)
    set T(H_2) [regsub -all {[A-Za-z0-9]} $T(Header) {-}]
    starbase_colmap $t
}
```

### 3d. Prism's import path uses the same contract

`PrismImportFn {varname fn reader}` (`prism.tcl:588`) calls `$reader $var(tbldb) $fn` and
sets `var(type) ascii`. **The reader contract is identical to the catalog one**, so a single
function serves both consumers.

### 3e. The starbase array contract

A reader must set, in the array it is handed: `T(Nrows)`, `T(Ncols)`, `T(Header)` (a list of
column names), `T(HLines)`, `T(H_1)`, `T(H_2)`, and the cells `T(row,col)` 1-based. Then
`starbase_colmap` (`starbase.tcl:85`) fills `T($colname)` → index and `T(0,$c)` → name.
That is the whole interface.

### 3f. Two behaviours that de-risk the catalog path

- **RA/Dec auto-detection is case-insensitive.** `CATConfigColsSearch` (`cat.tcl:790`)
  retries every candidate name lowercased, so Roman's `ra`/`dec` are found with no addition
  to the name table in `CATConfigCols` (`cat.tcl:631`).
- **DS9's own FITS catalog reader caps at 10000 rows** — the literal in `FITSRead` above.
  A row cap in an ASDF reader is therefore consistent with shipped behaviour rather than a
  compromise, which removes most of the "what about a huge source catalogue" concern *for
  the catalog path*.

## 4. The architecture this implies

One shared component and two thin consumers:

```
                      ASDFRead {t fn}          <- the whole job
                    (fills a starbase array)
                       /            \
          CATLoadFn $v $fn      PrismImportFn $v $fn
          (Catalog)              (Prism, as var(type) ascii)
                |                      |
     symbols, filter, sort,     table widget, plot,
     region export, match,      histogram, goto, backup
     backup
```

Everything downstream of the starbase array is already written and already works for
VOTable, so it costs nothing here.

## 5. Options considered

**Option A — native Prism arm.** Add `var(type) asdf` at all 11 dispatch sites and a
`fitsy asdf table/rows/colnum/minmax/histogram/plot` family in C++, paging by row range.
Gives tree browsing, the Image button, and scaling to a large catalogue. Roughly 400–600
lines of C++ on top of everything in §6.

**Option B — shared reader, both consumers.** Build `ASDFRead` and register it with the
catalog loader and Prism's import menu. Prism then treats an ASDF table exactly as it
treats a VOTable, so none of the 11 dispatch sites is touched.

**Option B is recommended.** It is a small fraction of the work, it has a 45-line precedent
to copy, and it delivers the catalog surface — which is the one that puts Roman sources on
the sky. What it gives up is Prism's extension-tree browsing and its Image button for ASDF;
option A remains available afterwards and nothing in B forecloses it.

## 6. Task breakdown

### Shared: `ASDFRead`

| # | Task | Where | Size |
|---|---|---|---|
| 1 | Recognize table nodes — `astropy/table/table-*` first, record dtype later | `fitsy/asdf.{h,C}` | M |
| 2 | Column → array resolution, including `!time/...` wrappers at `/value` | `fitsy/asdf.C` | S |
| 3 | Parse `[ucs4, N]`; decode UCS-4 to UTF-8; `bool8` | `fitsy/asdf.C` | M |
| 4 | Expose it: `fitsy asdf tables <file>` and `fitsy asdf column <file> <path>` | `tclfitsy/tclfitsy.C` | S |
| 5 | Table selector when a file holds several — mirror `AsdfPathDialog` (`asdf.tcl:807`) | `ds9/library/asdf.tcl` | S |
| 6 | `ASDFRead {t fn}` itself: fill the starbase array | new `ds9/library/catasdf.tcl` | S |

### Catalog consumer

| # | Task | Where | Size |
|---|---|---|---|
| 7 | File → Load → ASDF menu entry + `catasdffbox`, mirroring `CATLoadFITSFile` (`cat.tcl:356`) | `cat.tcl`, prefs | XS |
| 8 | Backup: record the reader name (`cat.tcl:868` hardcodes `VOTRead`) | `cat.tcl` | S |

### Prism consumer

| # | Task | Where | Size |
|---|---|---|---|
| 9 | File → Import → ASDF menu entry, mirroring `PrismImportVOTFile` | `prism.tcl` | XS |

### Both

| # | Task | Where | Size |
|---|---|---|---|
| 10 | Fixtures + a test phase (see §8) | `Tests/` | M |
| 11 | Docs: `catalog.html`, `prism.html`, TODO | `ds9/doc/ref/` | S |

## 7. Risks, unknowns and decisions needed

- **No realistic test data.** Every table in the eight samples is one-row metadata. The
  coadd's `source_catalog` key is pipeline *log text*, not a table. The real article is a
  Roman `*_cat.asdf`, which we do not have. Both consumers can be built and tested against
  synthetic fixtures plus the coadd's 18 metadata tables, but "does this work on a real
  Roman catalogue" stays unanswered until one is downloaded. **This is the single biggest
  hole and the cheapest to close — do it before task 1.**
- **Column types beyond the simple ones.** Multidimensional cells (a column whose element
  is itself an array) and `!time/time-1.4.0` columns need a *display* decision more than
  code: show a summary, the first element, or refuse the column.
- **Units.** `qtable: true` marks unit-carrying columns. Prism shows units from `TUNITn`;
  catalogs ignore them. Needs a decision.
- **Row cap.** Follow `FITSRead`'s 10000, or read all and let Tcl memory decide? The former
  is consistent; the latter is honest. Probably the former, with a warning when truncating
  — which is more than `FITSRead` does today.
- **Structured ndarrays (§2a) are speculative.** No real-data example exists. Implement the
  astropy form first and leave `struct2d` refused, rather than building for a shape nothing
  writes.
- **Scope creep toward "ASDF browser".** The coadd has 146 arrays. Presenting them as a flat
  extension list is noise; presenting the tree is a new UI. Option B sidesteps this
  entirely, and that boundary should stay decided unless someone asks for it.

## 8. Test plan sketch

- Hand-written fixtures under `Tests/asdf/tables/`, following
  `make_adversarial_fixtures.py`'s pattern (no asdf library needed): a numeric table, one
  with `ucs4` string columns, one with `bool8`, one with a `time` column, one with several
  tables in a file, and one with a column whose block is missing.
- A `tables` phase in `asdf.sh` asserting column names, row counts and specific cell values
  — the same style as the `mask` phase, which exists precisely because per-file probing
  cannot see multi-step state.
- A catalog assertion: load an ASDF catalogue over a frame with a WCS and check that
  `CATConfigCols` found the sky columns and that symbols land at the expected positions.
- Against the coadd's real metadata tables, since they are real ecosystem output even
  though they are small.

## 9. What this does not cover

- Writing ASDF tables. DS9 exports catalogs as VOTable/TSV/RDB; adding ASDF output is a
  separate question and probably not wanted.
- Prism's native ASDF arm (option A) — tree browsing, the Image button, C++ row paging.
  Deferred until there is a real catalogue to justify it.
- ASDF files whose tables use tags from outside the astropy/asdf-standard set.
