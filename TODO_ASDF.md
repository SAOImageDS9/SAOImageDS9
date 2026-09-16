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
      three patched `configure` files pass `bash -n` syntax checks, but **only `ds9/unix`
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
      `$frame has wcs wcs` reports `1`, with `$frame get coordinates 2044 2044 wcs fk5
      degrees` returning `269.7077160072 65.9862233765` for the image center and
      `269.8604193977 66.0474793179` for pixel (1,1). **Independently cross-checked**
      against the file's own embedded processing log (`S_REGION VALUES: POLYGON ICRS
      269.986945913 ... 65.974342004`, from `romancal.assign_wcs`'s own recorded footprint)
      — same region of sky, not just "produces some number."
- [ ] Defined fallback behavior on failure (unsupported tag/version, non-Roman GWCS shape) —
      report "no WCS," don't crash. (The extraction/attach step is already wrapped in a
      `catch` in `AsdfLoadArray` so a missing/unparseable WCS doesn't block the pixel load —
      not yet exercised against a real file that actually lacks a recognizable WCS, so
      leaving this unchecked until that's tried.)
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
