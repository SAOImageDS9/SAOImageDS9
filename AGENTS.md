# Agent notes for building SAOImageDS9 from source

This repo is built from this top-level directory. A full build takes
10+ minutes, so prefer the targeted rebuild commands below whenever
possible instead of rebuilding everything from scratch.

**Working on the native ASDF support?** Read `TODO.md`'s "Current state —
read this first" section at the top before anything else. It carries what
works, the eleven upstream AST bugs (seven patched locally in
`ast/src/yamlchan.c`), the open items in priority order, and the failure
modes that cost the most to rediscover. `Tests/` is a separate git repo.

## Rebuilding after code changes

- Changed files under `tksao/` (the C++ canvas-item rendering code:
  frames, colorbar, panner, magnifier, etc.)?

  ```
  make tksaoclean tksao ds9clean ds9
  ```

- Changed files under `ds9/` (the Tcl/Tk UI library and app code)?

  ```
  make ds9clean ds9
  ```

`ds9` links against `tksao`, so a `tksao` change requires relinking
`ds9` afterward — the first command handles both in the right order.
Don't fall back to a full top-level rebuild just because a change
touched C++ code; these targeted clean+build pairs are the normal
workflow here.

## Parser/lexer changes (bison/flex)

Several `tksao` subsystems (e.g. `tksao/frame/parser.Y` + `lex.L`) have
generated `.C` files checked in, regenerated via `bison`/`flex` rules in
`tksao/Makefile.in`.

**`make parser` is a dependency-free phony target** — plain
`make tksaoclean tksao` does *not* regenerate anything. After editing a
`.Y`/`.L`, the sequence is:

```
cd tksao && make parser        # or the matching target: ciaoparser, ds9parser, ...
cd .. && make tksaoclean tksao ds9clean ds9
```

Use the narrow per-grammar target, **not** `make parsers`, which
regenerates every grammar in the tree and invites unrelated drift.

Version sensitivity: the checked-in generated files are tied to specific
tool versions — `parser.C` is stamped `made by GNU Bison 2.3` and
`lex.C` `YY_FLEX 2.6.4`. A Homebrew bison (3.x) on `PATH` would rewrite
these files wholesale — keep it off the `PATH` for this build.

Measured on macOS 2026-09-16 by actually running the no-op regen: bison
matches, flex does not. `/usr/bin/bison` 2.3 reproduces `parser.C`
byte-identically. `/usr/bin/flex` reports 2.6.4 but is a different build
from whatever produced the checked-in `lex.C` — it emits
`size_t`/`ssize_t`/`yy_size_t` where the tracked file has `int`, a
22-insertion/24-deletion diff of pure type-width churn. A `.Y` edit is
safe there; a `.L` edit is not. `make parser` runs both tools, so
regenerating only a grammar means calling `bison` directly or reverting
`lex.C` afterwards.

Note also that DS9's *own* command grammars (`ds9/parsers/*.tac`/`*.fcl`)
are a different toolchain entirely — the vendored pure-Tcl taccle/fickle,
driven from `ds9/make.include`. Changing a DS9 command needs no bison or
flex; `make ds9` regenerates them.

Before editing any `.Y`/`.L`, sanity-check the toolchain with a no-op
regen: run the target with no source changes and confirm `git diff` is
empty. If it isn't, stop and fix the toolchain first — otherwise your
real change will be buried in thousands of lines of incidental churn.

Note that `bison -d -o foo.C` writes the header as `foo.H` (it maps the
output extension's case), which is what the repo tracks. On macOS's
case-insensitive APFS `foo.h` and `foo.H` are the same file; on Linux
they are not, but bison produces `.H` on both, so this is consistent.

## Running ds9 / smoke-testing over XPA

`xpans` (the XPA name server) must be on the `PATH` **before** ds9
launches, or ds9 starts fine but never registers and every `xpaget`/
`xpaset` fails. The tools live in `bin/` alongside `ds9`:

```
PATH="$PWD/bin:$PATH" ./bin/ds9 &
```

Then confirm registration before sending anything (it takes ~1s):

```
./bin/xpaaccess ds9
```

To reach C++ frame commands that have no Tcl/menu plumbing yet, use the
`tcl` XPA entry point, which does `uplevel #0` on whatever it receives
(local connections only). This is the fastest way to exercise a new
grammar rule in isolation:

```
echo '$::current(frame) reveal 400' | ./bin/xpaset ds9 tcl
```

Shut ds9 down with `./bin/xpaset -p ds9 exit` rather than killing the
process — that is the supported way and it exits cleanly. (`pkill` also
tends to miss the `./bin/ds9` wrapper and leave a stray process that
holds the XPA name, so the next launch registers a second instance and
`xpaget` answers from both.)

Errors surface as `XPA$ERROR ...` on the `xpaset` call. To capture
richer results, have the sent Tcl write to a file rather than trying to
read a return value. Useful handles: `$::current(frame)` is the frame's
canvas-item command (e.g. `Frame1` — a canvas item, *not* a window, so
`winfo` does not work on it); its on-screen size comes from
`$::ds9(canvas) itemcget $::current(frame) -width`. For visual checks,
`./bin/xpaset -p ds9 saveimage png /path/out.png` captures the canvas,
and comparing sha256 of before/after captures makes render changes and
clean round-trips objectively verifiable. Shut down with
`./bin/xpaset -p ds9 exit`.
