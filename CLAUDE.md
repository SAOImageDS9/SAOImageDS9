# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## Project overview

SAOImageDS9 is an astronomical imaging and data visualization application (FITS images/binary tables, frame buffers, region manipulation, scaling/colormaps, XPA/SAMP interop). This checkout root also vendors ~30 third-party libraries it builds against (Tcl/Tk 9.0, Tk extensions, AST, funtools, XPA, openssl, etc.) — see `Manifest.md` for the full list of bundled packages, their versions, and upstream links. Packages marked `y` under "SAO" are maintained/forked by the DS9 team; `dirty` means locally patched beyond upstream.

The two directories with actual DS9-specific application code are:
- `ds9/` — the Tcl/Tk UI library and application code (`ds9/library/*.tcl`)
- `tksao/` — the C++ canvas-item rendering engine (frames, colorbar, panner, magnifier, widgets)

`ds9` (the app) links against `tksao` (the rendering library).

## Native ASDF support — start here

This checkout is the `asdf_support` branch, adding native ASDF/GWCS reading to DS9.
**Read `TODO.md`'s "Current state — read this first" section at the top before doing
anything on this project.** It carries what works, the five upstream AST bugs (four
patched locally), the open items in priority order, and the failure modes that are
expensive to rediscover — chiefly that almost every GWCS problem presents identically as
"no WCS", so bisecting to a bare `transform: identity` fixture is the fastest diagnosis.

Companions: `ASDF_NATIVE_SUPPORT_DESIGN.md` (design), `WCS_TEST_PLAN.md` (the WCS test
matrix and the DS9/XPA gotchas in its §3), and `Tests/asdf/README.md` (the fixtures, their
generators, and the GWCS-specific gotchas). `Tests/` is a **separate git repo** — commit
there separately.

## Build commands

The repo builds from this top-level directory. A full build takes 10+ minutes — prefer targeted rebuilds:

```
unix/configure && make        # full build (Linux/X11, macOS/X11, Cygwin)
```
```
macos/configure && make       # macOS, requires XCode; produces SAOImageDS9.app
```
```
win/configure && make         # Windows, requires cygwin + mingw
```

**After changing files under `tksao/`** (C++ rendering code):
```
make tksaoclean tksao ds9clean ds9
```

**After changing files under `ds9/`** (Tcl/Tk UI/app code):
```
make ds9clean ds9
```

Don't fall back to a full top-level rebuild for ordinary C++/Tcl edits — a `tksao` change requires relinking `ds9` afterward, which the first command handles in the right order.

### Two separate parser toolchains — don't confuse them

`tksao/`'s C++ grammars use **bison/flex**. DS9's own command grammars
(`ds9/parsers/*.tac` + `*.fcl`, backing XPA/SAMP/command-line commands) use
**taccle/fickle**, the pure-Tcl generators vendored at `taccle/` and
`fickle/`, driven by rules in `ds9/make.include`. Adding or changing a DS9
command therefore needs no bison and no flex at all — a plain `make ds9`
regenerates the affected `.tcl` from the `.tac`/`.fcl`.

The same no-op-regen discipline applies to them. Measured 2026-09-16: the
vendored taccle (1.4) and fickle (2.2) reproduce the checked-in parsers
byte-identically *except* for the generator version banner in one comment
line (the checked-in files say `1.3`/`2.1`). Harmless, but it means a newly
generated parser's banner won't match its neighbors until someone
regenerates them all.

### Parser/lexer changes (bison/flex)

Several `tksao` subsystems (e.g. `tksao/frame/parser.Y` + `lex.L`, and per-dialect grammars like `ds9parser.Y`/`ds9lex.L`, `ciaoparser.Y`, `contourparser.Y`, `saoparser.Y`, `tngparser.Y`, `xyparser.Y`, `prosparser.Y`) have generated `.C`/`.H` files checked into git, produced by `bison`/`flex` rules in `tksao/Makefile.in`.

`make parser` is a dependency-free phony target — plain `make tksaoclean tksao` does **not** regenerate anything. After editing a `.Y`/`.L`:

```
cd tksao && make parser        # or the matching target: ciaoparser, ds9parser, ...
cd .. && make tksaoclean tksao ds9clean ds9
```

Use the narrow per-grammar target, **not** `make parsers` (plural), which regenerates every grammar in the tree and invites unrelated drift.

Version sensitivity: the checked-in generated files are tied to specific tool versions — `parser.C` is stamped `made by GNU Bison 2.3` and `lex.C` `YY_FLEX 2.6.4`. A Homebrew bison (3.x) on `PATH` would rewrite these files wholesale — keep it off the `PATH` for this build.

**Measured on this macOS box (2026-09-16), by running the no-op regen below: bison matches, flex does not.** `/usr/bin/bison` 2.3 reproduces `parser.C` byte-identically. `/usr/bin/flex` *reports* 2.6.4 but is a different build from whatever produced the checked-in `lex.C`: it emits `size_t`/`ssize_t`/`yy_size_t` where the tracked file has `int` (`ssize_t yyFlexLexer::LexerInput`, `yy_size_t yy_buf_size`, and similar), a 22-insertion/24-deletion diff of pure type-width churn. So on this machine a `.Y` edit is safe, but a `.L` edit is not — it needs a matching GNU flex, or the real change hand-applied on top of the checked-in file. Note `make parser` runs *both* tools, so regenerating a grammar alone means invoking `bison` directly, or reverting `lex.C` afterwards.

Before editing any `.Y`/`.L`, sanity-check the toolchain with a no-op regen: run the target with no source changes and confirm `git diff` is empty. If it isn't, stop and fix the toolchain first — otherwise a real change gets buried in incidental churn.

Bison writes the header from `bison -d -o foo.C` as `foo.H` (it maps the output extension's case), which is what the repo tracks. On macOS's case-insensitive APFS, `foo.h` and `foo.H` are the same file; on Linux they are not, but bison produces `.H` on both, so this stays consistent.

## Running / smoke-testing ds9 over XPA

`xpans` (the XPA name server) must be on `PATH` **before** ds9 launches, or ds9 starts but never registers and every `xpaget`/`xpaset` fails. Tools live in `bin/` alongside `ds9`:

```
PATH="$PWD/bin:$PATH" ./bin/ds9 &
```

Confirm registration before sending anything (takes ~1s):
```
./bin/xpaaccess ds9
```

To reach C++ frame commands that have no Tcl/menu plumbing yet, use the `tcl` XPA entry point, which does `uplevel #0` on whatever it receives (local connections only) — the fastest way to exercise a new grammar rule in isolation:
```
echo '$::current(frame) reveal 400' | ./bin/xpaset ds9 tcl
```

Shut ds9 down with `./bin/xpaset -p ds9 exit` rather than killing the process — that's the supported clean exit. `pkill` tends to miss the `./bin/ds9` wrapper and leave a stray process holding the XPA name, so the next launch registers a second instance and `xpaget` answers from both.

Errors surface as `XPA$ERROR ...` on the `xpaset` call. For richer results, have the sent Tcl write to a file rather than trying to read a return value.

Useful handles for visual/interactive checks:
- `$::current(frame)` — the frame's canvas-item command (e.g. `Frame1`; a canvas item, *not* a window, so `winfo` does not work on it)
- `$::ds9(canvas) itemcget $::current(frame) -width` — the frame's on-screen size
- `./bin/xpaset -p ds9 saveimage png /path/out.png` — captures the canvas; comparing sha256 of before/after captures makes render changes and clean round-trips objectively verifiable

## Architecture notes

- `ds9/library/*.tcl` — one file per feature/dialog (region shapes like `circle.tcl`/`box.tcl`/`bpanda.tcl`, catalog clients `cat*.tcl`, coordinate handling `coord.tcl`, etc.). This is the Tk UI layer and drives the C++ layer via widget commands.
- `tksao/frame/` — C++ canvas items for image rendering; per-dialect coordinate/region grammars are implemented as bison/flex parsers here (see Parser/lexer section above).
- `tksao/colorbar/`, `tksao/panner/`, `tksao/magnifier/`, `tksao/widget/`, `tksao/tkutil/` — other canvas-item subsystems, same C++ build/rebuild rules as `tksao/frame`.
- Communication with external tools (analysis tasks, scripting) goes through XPA (`xpa/`) and SAMP.
- Everything else at the top level (`tcl9.0/`, `tk9.0/`, `ast/`, `funtools/`, `openssl/`, `tkimg/`, etc.) is a vendored third-party dependency built as part of the full build; treat these as upstream code, not application code — check `Manifest.md` before patching one, since several are already marked `dirty` (locally patched) and patches should stay minimal and tracked.
