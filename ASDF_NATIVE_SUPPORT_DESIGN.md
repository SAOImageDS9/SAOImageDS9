# Native ASDF Support in DS9 — Design/Concept Document

**Status:** draft concept for discussion. No code changes made. Written in response to a
progress report from the `asdf-format/pds9` project (https://github.com/asdf-format/pds9),
which currently loads Roman Space Telescope ASDF images into DS9 via an external Python
process talking SAMP.

## 1. Question being answered

Could DS9 read ASDF files itself — no Python process, no SAMP round-trip — and if so,
roughly how much work is that, and where would it plug into the existing C++ codebase?

Short answer: partially, and cheaper than it looks, because DS9 already vendors a library
(Starlink's AST) that upstream has quietly grown a class specifically for reading ASDF/GWCS
YAML. The pixel-data half of the problem is small and well-specified. The WCS half looks
solved but has a few real compatibility gaps, confirmed against an actual Roman file rather
than assumed (see §6, §7, §8) — all small and mechanical, none of them a fundamental
blocker, and upstream Starlink is actively closing at least one of them already. Nothing
existing is anywhere close to a drop-in "libasdf for DS9."

## 2. What pds9 does today

From its README and the reporter's description: a separate Python process (requiring
`astropy`, `numpy`, `asdf`, and the SAMP client `ds9samp`) walks the ASDF tree, extracts the
image array, and pushes it into DS9 as a plain pixel buffer over SAMP (`ds9.set`/`ds9.get`
message types). All ASDF/GWCS-specific logic — tree navigation, block decoding, and for
Roman specifically fitting the GWCS distortion model to an equivalent FITS **SIP**
polynomial via `gwcs.wcs.WCS.to_fits_sip()` — happens in Python before anything reaches
DS9. DS9's own contribution is only a File-menu button/menu item wired to launch/attach to
that Python process, plus a lifecycle handshake (killing DS9 kills the Python dialogs). The
header viewer, file browser, and internal-path picker are all Tk windows on the Python
side, not DS9 widgets. This is a reasonable, low-risk way to prototype the feature without
touching DS9's C++ at all, but it makes DS9 depend on a full Python+astropy+gwcs
installation to view Roman data, and (today, before general-GWCS support lands) the WCS DS9
actually renders is a numerical *approximation*, not the exact instrument distortion model.

## 3. What ASDF actually is

Confirmed directly against a real Build22 workshop file
(`r0000101001001001001_0001_wfi01_f158_cal.asdf`, fetched via HTTP range request rather than
guessed from docs):

```
#ASDF 1.0.0
#ASDF_STANDARD 1.6.0
%YAML 1.1
%TAG ! tag:stsci.edu:asdf/
--- !core/asdf-1.1.0
asdf_library: !core/software-1.0.0 {author: The ASDF Developers, ...}
...
roman: !<asdf://stsci.edu/datamodels/roman/tags/wfi_image-2.0.0>
  meta:
    ...
    wcs: !<tag:stsci.edu:gwcs/wcs-1.4.0>
      ...
  data: !core/ndarray-1.1.0
    source: 21
    datatype: float32
    byteorder: little
    shape: [4088, 4088]
  dq: !core/ndarray-1.1.0
    source: 22
    ...
```

So the file is: an ASCII magic line, a plain-YAML tree (custom tags via `!<...>` or `%TAG`
shorthand — an ASDF file with no arrays is just YAML and needs no special binary handling),
followed by a sequence of binary blocks, each starting with a 4-byte magic (`\323BLK`) and a
header giving compressed/uncompressed size, compression codec, and an MD5 checksum, followed
by an optional trailing block-offset index for fast seeking. Any array in the tree —
whether it's the 4088×4088 science image or a 6×6 polynomial coefficient matrix — is
represented the same way: a `!core/ndarray-1.1.0` node giving `source` (block index),
`datatype`, `byteorder`, `shape` (and optionally `strides`/`offset` for non-contiguous
views). Confirmed on the real file: **every** ndarray we found, large or small, uses
`source:` (a binary block), not an inline literal. Spec:
https://www.asdf-format.org/projects/asdf-standard/en/latest/file_layout.html.

For Roman specifically: the pixel path is `roman.data` (plus `roman.dq`, `roman.err`,
`roman.var_poisson`, ... as siblings), and the WCS path is `roman.meta.wcs`, tagged
`!<tag:stsci.edu:gwcs/wcs-1.4.0>`. Both are fixed by the `roman_datamodels`/`rad` schema, so
Roman-specific native support does not need a general "browse the tree" UI the way pds9's
generic-ASDF mode does — only *arbitrary* ASDF files need that.

## 4. Relevant DS9 internals (as they exist today)

- **Loading is transport-pluggable, not format-pluggable.** `FitsImage`
  (`tksao/frame/fitsimage.h`) owns "raw pixel data + header" for every loaded image, and
  `Frame`/`Base` render from whatever `FitsImage*` they hold. The ~19 `FitsImage` subclasses
  vary only by *transport* — malloc'd buffer, mmap, socket, Tcl channel, shared memory, or a
  headerless raw "array" — never by file format. `Base::load*Cmd` in
  `tksao/frame/baseload.C` (e.g. `loadArrAllocCmd`/`loadArrMMapCmd`/`loadArrSocketCmd`/
  `loadArrVarCmd`, lines ~97–160) is the dispatch layer. This "array" family — pixel buffer
  + explicit dims/datatype, no embedded header — is exactly pds9's current SAMP payload
  shape, and exactly the shape a native ASDF reader would hand off too.
- **WCS is delegated entirely to AST, never hand-parsed.** `FitsImage::fits2ast()`
  (`fitsimage.C:3611`) builds an `AstFitsChan`, feeds it FITS cards, sets
  `astSetI(chan,"SipReplace",0)`, and calls `astRead(chan)` to get an `AstFrameSet*`. SIP
  distortion support in DS9 is AST's `FitsChan`, not DS9 code.
  `FitsImage::replaceWCS(istream&)` (`fitsimage.C:2083`) — reachable from Tcl via
  `WCSLoadFile`/`WCSToVar` (`ds9/library/wcs.tcl:648`) — is the general "hand DS9 a WCS as
  text" entry point pds9's SIP-header injection presumably already uses.
- **Vendored-library pattern.** Every third-party package is a top-level subdirectory with
  its own `configure`/`Makefile.in`, built in a fixed order set in `unix/Makefile.in`
  (`ast` and `fitsy` build before `tksao` links against them). `Manifest.md` tracks
  version/dirty status per package.
- **Tcl UI pattern.** A file-browser dialog proc calls the shared `OpenFileDialog` helper,
  then hands the path to a format-specific `Load<Format>File` proc (e.g. `LoadFitsFile`,
  `ds9/library/fits.tcl:7`; `WCSLoadFile`, `ds9/library/wcs.tcl:649`), which calls down into
  C++. `ProcessFitsCmd` (`ds9/library/fits.tcl:111`) is the parallel XPA/SAMP-facing
  dispatch for scripted loads. A native ASDF integration would add `LoadAsdfFile`/
  `AsdfLoadDialog` and a `ProcessAsdfCmd` following this exact shape.

## 5. Existing C/C++ ASDF libraries — survey result

- **`libasdf`** (https://github.com/asdf-format/libasdf, STScI-affiliated): alpha
  (`v0.1.0a2`), BSD-3, wraps `libfyaml`, has typed getters for `core/ndarray`, and an
  explicitly-named-but-nascent **`libasdf-gwcs`** extension aimed at reading GWCS
  transforms. Worth tracking, but pre-1.0 and STScI's own framing is that Python remains the
  only *complete* ASDF implementation.
- **`asdf-cxx`** (https://github.com/eschnett/asdf-cxx): more mature/tested, supports a
  range of ASDF spec versions and compression codecs, but deliberately round-trips
  *unknown* tags rather than resolving them — no GWCS/schema semantics, just a faithful
  generic tree+block reader/writer.

Neither is a substitute for what §6 describes DS9 already has for the WCS half. Both are
plausible substitutes for a hand-rolled *container* (tree+block) reader if their license and
build-system fit are acceptable — but the container format is simple enough (§3) that a
purpose-built ~500-line reader using an existing YAML library is a comparably small lift and
avoids taking on an alpha or GWCS-blind dependency.

## 6. The key discovery: AST already speaks ASDF/GWCS

This checkout's vendored `ast/` (version 9.2.14, **not** SAO-patched — stock upstream) ships
`ast/src/yamlchan.c`/`.h`: an `AstYamlChan` class, a sibling of `AstFitsChan` in the same
`Channel` family, whose documented purpose is reading/writing AST objects using "the ASDF
YAML schema defined by STScI." It has explicit handling for `gwcs/wcs`, `gwcs/step`,
`gwcs/frame`/`frame2d`, and dozens of `asdf/transform/*` tags (polynomial, shift, scale,
rotate3d, concatenate, compose, remap_axes, and the standard sky projections) spanning
~18,000 lines. It is driven identically to `FitsChan`: hand it a YAML text stream via
`astRead(yamlchan)`, get back an `AstMapping`/`AstFrameSet`. Nothing in `ds9/` or `tksao/`
currently calls it — it is dead code from DS9's point of view, present purely because it's
part of upstream AST.

If this works as documented, the WCS half of native ASDF support could bypass the SIP
approximation pds9 currently needs entirely: instead of numerically *fitting* a polynomial
to the GWCS transform (lossy, Roman-specific, ~0.25px accuracy per `gwcs`'s own docs), DS9
could read the **exact** GWCS transform chain directly into an `AstFrameSet` and use it like
any other WCS. That would be a genuine improvement over what the Python prototype offers
today, not just a native reimplementation of it.

## 7. But: two gaps found by checking real data, not assuming

**7a. Tag-scheme mismatch, partially.** AST's `yamlchan.c` recognizes only the *legacy*
tag scheme: `#define STSCI_TAG "tag:stsci.edu:"`, `GWCS_TAG STSCI_TAG"gwcs/"`. The real
Roman file's `core` extension metadata (`asdf_library`, `history.extensions`, etc.) uses the
*newer* URI-style scheme (`asdf://asdf-format.org/core/extensions/core-1.6.0`), which
`yamlchan.c` does not appear to handle. The good news: the object that actually matters —
`roman.meta.wcs` — is still tagged the old way in this real file, `!<tag:stsci.edu:gwcs/
wcs-1.4.0>`, as are its `gwcs/step`, `gwcs/frame2d`, and `transform/*` children. So the WCS
subtree specifically looks compatible; the *rest* of the file (metadata, provenance) may
not parse via `YamlChan` as-is, which is fine since DS9 doesn't need AST to read that part
(see §8, header display path) — but this should not be assumed to generalize to future
ASDF/asdf-standard releases that may migrate GWCS tags to the URI scheme too, since ASDF as
a format is actively moving that direction.

**7b. Inline-array assumption is violated on real Roman data.** `yamlchan.c` contains an
explicit check: `astError(AST__BYAML, "astRead(YamlChan): ndarray is not defined inline -
AST can only handle ndarrays that are defined inline")`. On the real file, the polynomial
distortion coefficients — small 6×6 `float64` matrices, one might expect these inlined as a
YAML literal — are **still block-sourced** (`coefficients: !core/ndarray-1.1.0 \n
source: 0`), exactly like the large image arrays. Handing the raw `wcs:` subtree text
straight to `astRead(yamlchan)` will therefore fail on today's real Roman files. This is not
a dead end — it just means the bridge described in §8 (component 3) is required, not
optional: DS9's own container reader must resolve every block-sourced ndarray reachable
from the WCS subtree and rewrite it as an inline YAML literal before handing that text to
AST. Since these coefficient arrays are tiny, this substitution is cheap; it just cannot be
skipped.

**7c. Version-ceiling gate — real, but small and closing fast (checked 2026-09-11).**
Beyond tag *naming*, `yamlchan.c` also gates every recognized tag by a hardcoded
major/minor ceiling (a `MAKE_TEST(Class,Schema,Major,Minor)` macro per tag), and rejects
anything with a *higher* minor version than the compiled-in ceiling — i.e. it is not
forward-tolerant of newer schema minor versions. This checkout's vendored AST (9.2.14)
rejects essentially every tag the real Roman file uses (`wcs-1.4.0` vs. a ceiling of `1.0`,
`compose-1.4.0` vs. `1.2`, etc.). Checked against upstream: Starlink shipped **AST v9.4.0
the day before this check**, and active commits to `yamlchan.c` (through August 2026) show
this is a live area of upstream work, not an abandoned class. Diffing v9.4.0's ceilings
against the real file's tags: `Wcs`, `Step`, and `Frame2d` are now accepted outright;
`Polynomial`, `Compose`, `Concatenate`, `Shift`, and `Remap_Axes` are each still exactly one
minor version short. Net assessment: **not a fundamental blocker** — the gate is a single
integer literal per tag, not parsing logic, and upstream is already most of the way there —
but "just take the AST that's already vendored" is not sufficient today. The realistic
options are (a) request the remaining bumps from Starlink upstream, or (b) carry a small
local patch bumping those five constants, tracked as a `dirty` change per the
`Manifest.md` convention, until upstream catches up. Either way, before bumping a ceiling,
confirm the newer minor version didn't also add/change fields the reader logic below the
`IsA*` check doesn't yet populate — a version gate passing is necessary but not sufficient
for a correct read.

## 8. Proposed architecture

Five new/changed components, each mapped onto an existing DS9 pattern rather than a new one:

1. **ASDF container reader** (new, small — e.g. `tksao/frame/fitsasdf.C` or a standalone
   helper class used by it). Parses the magic line, hands the YAML-tree bytes to a YAML
   parser, and separately indexes the binary blocks (magic, header fields, optional
   zlib/bzip2/lz4 decompression, using the trailing block index when present for O(1)
   seeking). Exposes: "get parsed tree", "resolve dotted/colon path to a node", "get raw
   bytes for block N (decompressed)". This is the one piece of genuinely new C++ code;
   everything else is existing DS9/AST machinery pointed at its output.

2. **Pixel-array path.** Resolve the requested path (`roman.data` for Roman; user-specified
   `path:inner/path` for generic files, matching pds9's colon syntax) to a `core/ndarray`
   node, pull `datatype`/`shape`/`byteorder`/`source`, decompress that block, and hand the
   resulting buffer + explicit dims to the *existing* `Arr*`-family ingestion path
   (`Base::loadArrAllocCmd` et al., §4) — no cfitsio/`fitsy` involvement at all, same as
   pds9's SAMP payload today.

3. **WCS path.** Locate the WCS subtree (`roman.meta.wcs` for Roman), walk it, and for every
   block-sourced `core/ndarray` reachable within it (§7b), substitute an inline YAML literal
   using the already-decompressed block bytes. Serialize the resulting self-contained YAML
   text and feed it to `astRead()` on an `AstYamlChan` (new to DS9, but zero new code inside
   AST itself — just the C++ glue mirroring `FitsImage::fits2ast()`). On success, attach the
   resulting `AstFrameSet` the same way `fits2ast()`/`replaceWCS()` already do. On failure
   (tag not recognized, schema too new, non-Roman GWCS shape AST doesn't cover) — and this
   *must* have a defined fallback, not a crash — fall back to the SIP-approximation strategy
   pds9 already validated, OR simply report "no WCS" and let the user load the image
   unregistered, same as any other today's DS9 image lacking usable WCS keywords.

4. **Header/metadata display.** The full YAML tree (with block-sourced arrays reported by
   shape/dtype rather than dumped) is already human-readable text — feed it into DS9's
   existing FITS-header-viewer window verbatim instead of a card list. No new UI concept
   needed, just a new text source for a widget that already exists.

5. **UI and scripting surface.** Tcl: a `LoadAsdfFile`/`AsdfLoadDialog` pair following
   `LoadFitsFile`/`WCSLoadFile` (§4), added to the File menu/button row, using the shared
   `OpenFileDialog` helper. For generic (non-Roman) files where the image path inside the
   tree isn't fixed, either reuse pds9's `path:inner/path` text-entry convention, or add a
   simple tree-browser dialog enumerating every `core/ndarray` node found by the container
   reader (cheap, since resolving a path only requires the YAML tree, not any block bytes).
   Scripting/XPA/SAMP: a `ProcessAsdfCmd` parallel to `ProcessFitsCmd`, so `xpaset`/SAMP
   callers get the same capability pds9 exposes today — this is what would let pds9's *own*
   external tooling (or anyone else's) drive native loading without needing DS9's GUI, and
   is also the piece that would let DS9 fully retire the need for a Python process for the
   common Roman case.

## 9. Build/dependency changes required

- `ast/configure.ac` currently auto-detects `libyaml` via `AC_CHECK_LIB` and silently
  compiles out `YamlChan` (`NOYAML`) if absent, with no build-time error or warning anywhere
  else in the tree. Any design relying on `YamlChan` must turn this into a hard requirement
  (fail configure if missing) or vendor `libyaml` outright, following the existing pattern
  in `Manifest.md` for other bundled dependencies — an optional, silently-disabled feature
  is not an acceptable foundation for a shipped capability.
- The new container-reader component needs a YAML parser for the tree. Reusing `libyaml`
  (now a hard dependency anyway per above) avoids adding a second YAML implementation to the
  tree.
- Compression: at minimum zlib (already linked elsewhere in the DS9/cfitsio/fitsy stack)
  needs to be wired to the new block reader; bzip2/lz4 block support can be deferred until a
  file using them is actually seen in practice — `log`/error clearly if an unsupported codec
  is hit rather than silently misreading.
- No changes anticipated to `tk9.0`/`tcl9.0`/`fitsy`/`funtools` — this is additive.

## 10. What this does *not* replace

- **Arbitrary ASDF files with exotic/custom tags** (non-Roman missions, user-defined
  extensions) beyond what AST's `YamlChan` and the container reader understand. pds9's
  Python approach, which can fall back to the full Python `asdf`/`gwcs` stack for anything
  DS9-native can't parse, remains strictly more general. A native implementation should
  aim to cover the common/Roman case well and degrade gracefully (§8.3's fallback) rather
  than promise full generality.
- **Full GWCS coverage.** AST's tag list is broad but was not written with Roman in mind
  specifically and has not been validated by DS9's team against real data beyond the one
  file checked here. This needs real testing across the Roman Data Workshop's sample files
  (https://github.com/spacetelescope/roman-data-workshop/, linked download script at
  `data/download.py`) before any claim of "supports Roman WCS" is made.
- **Schema/JSON-Schema validation** of ASDF trees — neither AST's `YamlChan` nor the
  proposed container reader validates against `asdf-standard` schemas; both just navigate
  and extract. This is fine for a *viewer* (DS9's job) and is exactly the same posture DS9
  already takes toward FITS headers (it doesn't validate against a FITS standard schema
  either).

## 11. Phased roadmap

1. **Spike (no UI):** upgrade the vendored `ast/` to at least v9.4.0, locally patch the five
   remaining `MAKE_TEST` minor-version ceilings identified in §7c, then hand-verify the AST
   bridge — take a real `wcs:` subtree from a downloaded Roman file, resolve its
   block-sourced coefficient arrays by hand/script, inline them, and confirm `astRead()` on
   an `AstYamlChan` actually produces a working `AstFrameSet`. This is the single
   highest-uncertainty step (§6/§7) and should happen before committing to the rest of the
   design.
2. **Container reader + pixel path only:** parse a real Roman file's tree/blocks, extract
   `roman.data`, load it through the existing `Arr*` path with no WCS — visually confirms
   the image renders, decoupled from the WCS question.
3. **WCS path + Roman-specific native "Open ASDF":** wire in component 3, add the File
   menu/XPA/SAMP entry points scoped to the fixed Roman `roman.data`/`roman.meta.wcs` paths
   — this alone would let DS9 display Roman images with exact (not SIP-approximated) WCS,
   with no Python process required for the common case.
4. **Generalize:** arbitrary-path support (colon syntax or tree browser) for non-Roman ASDF
   files, matching pds9's current generic-file UX.
5. **Stretch:** broaden AST tag/version coverage as needed by other missions' ASDF files as
   they come up; consider contributing any AST fixes/URI-tag support upstream to Starlink
   rather than patching a local fork, keeping `ast/` on the `Manifest.md` "not dirty" list
   status quo.

## 12. Recommendation for engaging with the pds9/STScI team

Worth sharing back with them (this document, or a summary of §6/§7 in particular) since:

- The AST `YamlChan` finding may be new information to them too — it changes "approximate
  GWCS via SIP" into a potential "read exact GWCS via a C library DS9 already ships,"
  which is directly relevant to their own stated plan to "handle any ASDF GWCS imaging
  model" eventually.
- They're better positioned than we are to say whether the tag-scheme/inline-array gaps
  (§7) are edge cases or will hit every file, and whether asdf-standard's URI-tag migration
  is close enough to worry about now.
- Their heads-up request about internal DS9 changes, and their question about release
  freeze timing and PR lead time for eventual inclusion in the standard distribution, are
  process questions for the DS9 maintainer to answer directly — not addressed in this
  document, which is scoped to the technical design only.

## 13. Resource estimate (AI-assisted implementation)

Rough, phase-by-phase, assuming one developer working with AI assistance (e.g. Claude
Code) for the actual coding, against the roadmap in §11. The estimate distinguishes
*coding* effort, which AI assistance genuinely compresses, from *validation* effort
(building/testing against real hardware and real sample files, and any external
coordination), which it mostly does not — those steps are inherently serial and
human-gated regardless of how fast the code gets written.

| Phase | What's being done | AI-assisted coding | Realistic calendar time | Main gating factor |
|---|---|---|---|---|
| 1. Spike | Patch AST's 5 remaining version ceilings (§7c); hand-build a resolved WCS subtree from a real file; confirm `astRead(AstYamlChan)` actually produces a usable `AstFrameSet` | hours | 2–4 days | Unknowns here are empirical, not coding — every additional tag/version gap this spike turns up (beyond the 8 already checked) adds iteration, and each iteration needs a real AST rebuild/test cycle |
| 2. Container reader + pixel path | New ASDF tree/block reader (~500 LOC); wire into existing `Arr*` ingestion | 2–3 days | 4–6 days | Needs real builds against `tksao`/`Manifest.md` conventions and visual confirmation against actual Roman files; codec/byte-order edge cases surface only by testing real files |
| 3. WCS path + Roman-native "Open ASDF" | Block-resolution bridge in production code; AST glue mirroring `fits2ast()`; Tcl dialog + File menu entry; `ProcessAsdfCmd` XPA/SAMP surface; defined fallback behavior | 3–5 days | 1.5–2.5 weeks | This is where feature surface area (UI, scripting, error/fallback handling, header viewer wiring) dominates, and where testing against several distinct sample files from the Roman Data Workshop (not just one) is required before calling it solid |
| 4. Generalize (arbitrary ASDF paths) | Colon-path parsing or tree-browser dialog; robustness for tags/paths the container reader can't resolve | 2–3 days | 4–7 days | Mostly UI/UX polish and defensive-path testing, lower risk than phases 1–3 |
| 5. Stretch | Broader tag/version coverage as new missions' files surface; upstreaming AST fixes | open-ended | ongoing | Not schedulable now — driven by what files actually show up, and by Starlink's own release cadence if pursuing the upstream route over a local patch |

**Rolled up:** roughly **4–6 weeks of one developer's calendar time** to get through
Phases 1–4 (a working, native, Roman-scoped ASDF load path with reasonable generalization),
assuming the local-AST-patch route for §7c rather than waiting on an upstream Starlink
release, and assuming testing stays scoped to the public Roman Data Workshop sample files
rather than a broader mission archive. That number is a rough planning input, not a
committed schedule — the single largest source of variance is Phase 1: if the spike turns
up more version-ceiling or tag-scheme gaps than the 8 tags already checked here, or if
`AstYamlChan`'s output turns out to need more post-processing than a straight
`FitsImage::fits2ast()`-style attach, Phase 3's estimate grows with it.

What AI assistance changes here is mainly *who* can do this work and how fast the first
draft of each component gets written — the container reader, the AST glue, the Tcl
boilerplate, and even the AST macro patch are all the kind of well-specified, precedent-
following code an AI assistant can draft quickly once the target behavior is pinned down
(as this document tries to do). It does not remove the need for a human to drive real
builds, look at real rendered images, and decide what "close enough" WCS fallback behavior
should be — those remain the pacing items above.
