# Native ASDF Support — Phased TODO

Working plan for `ASDF_NATIVE_SUPPORT_DESIGN.md`, broken into the same phases as that
document's §11, with concrete engineering steps under each. Check items off as they land;
add findings inline rather than in a separate log, so this file stays the single source of
truth for where things stand.

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
  - [ ] Unvalidated: no mingw or macOS cross-toolchain is available in this dev environment,
        so the `win`/`macos` prerequisite-list and `$(CONFIGFLAGS)`/`$(TARGET)` fix above are
        reasoned from reading the existing `xpa`/`funtools` pattern, not build-tested. Needs
        an actual cross-build attempt on a machine with the right toolchain before trusting
        it fully.
  - [ ] Still open: a real end-to-end `unix/configure && make` pass through the *actual*
        dependency chain (`dirs tcl tk openssl xpa funtools libyaml ast ...`) on Linux,
        rather than the isolated scratch-prefix validation above.
  - [ ] Nothing has been `git add`ed or committed yet — working tree only.
- [ ] Locally patch the five remaining `MAKE_TEST` minor-version ceilings in
      `ast/src/yamlchan.c` identified above (`Polynomial`, `Compose`, `Concatenate`,
      `Shift`, `Remap_Axes`). Track as a `dirty` change in `Manifest.md` until upstream
      Starlink catches up, per the design doc's recommendation. Before bumping each
      ceiling, check whether the newer minor version changed/added fields the reader logic
      doesn't yet populate.

## Phase 1 — Spike: prove the AST/GWCS bridge works (no DS9 UI yet)

- [ ] Hand-extract a real Roman file's `roman.meta.wcs` YAML subtree (from the sample file
      already downloaded during design research).
- [ ] Resolve every block-sourced `core/ndarray` node reachable from that subtree
      (coefficients, etc.) and splice in inline YAML literals (design doc §7b/§8.3).
- [ ] Write a minimal C test harness that calls `astYamlChanFor`/`astRead` on the resolved
      text and confirms it returns a usable `AstFrameSet`.
- [ ] Record any further tag/version/semantics gaps this turns up beyond the 8 already
      checked — this is the step most likely to move the overall schedule (design doc §13).

## Phase 2 — Container reader + pixel path (no WCS yet)

- [ ] New ASDF container reader (magic line, YAML tree via `libyaml`, binary block index +
      decompression) — likely `tksao/frame/fitsasdf.C` or a helper class it uses.
- [ ] Resolve `roman.data` (Roman-specific fixed path) to its `core/ndarray` block and wire
      the decoded buffer into the existing `Arr*`-family ingestion path
      (`Base::loadArrAllocCmd` et al.) — no cfitsio/`fitsy` involvement.
- [ ] Visually confirm a real Roman file's image renders in DS9, no WCS attached yet.

## Phase 3 — WCS path + Roman-native "Open ASDF"

- [ ] Production version of the Phase 1 bridge: locate `roman.meta.wcs`, resolve
      block-sourced ndarrays inline, feed to `AstYamlChan`, attach the resulting
      `AstFrameSet` the way `FitsImage::fits2ast()`/`replaceWCS()` already do.
- [ ] Defined fallback behavior on failure (unsupported tag/version, non-Roman GWCS shape) —
      report "no WCS," don't crash.
- [ ] Header/metadata display: feed the YAML tree text into DS9's existing header-viewer
      widget.
- [ ] Tcl UI: `LoadAsdfFile`/`AsdfLoadDialog` pair, File menu/button entry, following
      `LoadFitsFile`/`WCSLoadFile`.
- [ ] Scripting surface: `ProcessAsdfCmd` parallel to `ProcessFitsCmd` for XPA/SAMP-driven
      loads.
- [ ] Test against multiple public Roman Data Workshop sample files, not just the one used
      for design validation.

## Phase 4 — Generalize beyond Roman's fixed paths

- [ ] Arbitrary-path support for non-Roman ASDF files: either pds9's `path:inner/path`
      text-entry convention, or a tree-browser dialog enumerating every `core/ndarray` node
      the container reader finds.
- [ ] Robustness pass on the fallback path for tags/paths the reader can't resolve.

## Phase 5 — Stretch (open-ended, not scheduled)

- [ ] Broaden AST tag/version coverage as other missions' ASDF files are encountered.
- [ ] Contribute the version-ceiling bumps (and any other fixes) upstream to Starlink rather
      than carrying them as a permanent local patch.

## Process notes

- Share the design doc (and the §7c finding in particular) with the `asdf-format/pds9`/
  STScI team before or alongside starting Phase 1 — see design doc §12.
- The `Proposal.md` unsolicited-funding draft assumes roughly Phases 0–3 as its 1
  person-month scope; Phase 4 is a stretch within that estimate, Phase 5 is explicitly out
  of scope for it.
