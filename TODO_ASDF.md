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
  - [ ] Windows/mingw beyond this point is still unvalidated — the build had not reached
        `ast`/`tclasdf` yet. Next most likely trouble spots, in build order, all of them
        packages whose recipes I touched or added:
    - **`zlib`** — its hand-written configure *runs* test programs to probe features, which
      cross-compilation cannot do, and picks flags from `uname -s`. `$(CONFIGFLAGS)` is
      passed as an env prefix (it does not parse `VAR=value` positionally), so `CC`/`AR`
      reach it, but whether it produces a correct mingw `libz.a` is untested.
    - **`lz4`** — `CC`/`AR` go in as ordinary make-variable overrides, which its plain
      Makefile honors; it may additionally want `TARGET_OS=MINGW`.
    - **`ast`** — omits `$(TARGET)` (pre-existing, not mine), so autoconf may not realize it
      is cross-compiling. My only change there is `--with-yaml=$(prefix)`, which links rather
      than runs, so it should survive; note 9.4.1 hard-fails configure via `AC_MSG_ERROR`
      if YAML is requested and not found, which makes a libyaml problem loud rather than
      silent.
    - **`tclasdf`** — passes `$(WITHTCL) $(PREFIX) $(STD)` plus explicit
      `CPPFLAGS`/`LDFLAGS`/`LIBS` for lz4, and no `$(CACHE)`, unlike its `vector`/`fitsy`
      siblings. Harmless (the cache is only an optimization and this recipe sets no `CC` or
      aliases, so it cannot trip the check either way), left alone rather than changed
      untested.
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
      than carrying them as a permanent local patch.
- [x] **Test fixtures ready ahead of time**, living in the separate `Tests` repo (DS9's own
      test-suite checkout, `github.com/SAOImageDS9/Tests`) at `Tests/asdf/`, not in this
      repo — moved there from an initial `utils/asdf_fits_testsuite/` location once it was
      clear these are fixtures for that test suite, not this project's own dev tooling. 84
      small ASDF files (21 of the `Tests` repo's own `fits/` sample images x 4
      block-compression codecs: `none`/`zlib`/`lz4`/`bzp2`), covering every BITPIX type plus
      `BLANK`/`BSCALE`-`BZERO`/NaN/Inf edge cases. Deliberately flat (non-Roman-nested)
      trees, since these are for Phase 4/5's arbitrary-path generalization, not a regression
      check against the current Roman-only reader. `bzp2` isn't supported by
      `AsdfReadBlock` yet — included anyway so broadening compression support has a real
      fixture to build against.
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

## Process notes

- Share the design doc (and the §7c finding in particular) with the `asdf-format/pds9`/
  STScI team before or alongside starting Phase 1 — see design doc §12.
- The `Proposal.md` unsolicited-funding draft assumes roughly Phases 0–3 as its 1
  person-month scope; Phase 4 is a stretch within that estimate, Phase 5 is explicitly out
  of scope for it.
