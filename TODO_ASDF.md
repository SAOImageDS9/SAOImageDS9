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
  - [ ] Nothing has been `git add`ed or committed yet beyond the WIP commit already made —
        this build-validation pass itself hasn't been committed (there's nothing to commit
        for it besides `full_build.log`, which shouldn't be tracked).
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
  - [ ] Same caveat as `libyaml`/`ast`: no mingw or macOS cross-toolchain available here,
        so the `win`/`macos` wiring (prerequisite list + `$(CONFIGFLAGS)` env-prefix) is
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
  - [ ] Same caveat as the other packages: no mingw/macOS cross-toolchain available here,
        so the `win`/`macos` wiring is reasoned, not build-tested.
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
