# Agent notes for building SAOImageDS9 from source

This repo is built from this top-level directory. A full build takes
10+ minutes, so prefer the targeted rebuild commands below whenever
possible instead of rebuilding everything from scratch.

**Working on the native ASDF support?** Read `TODO.md`'s "Current state —
read this first" section at the top before anything else. It carries what
works, the eleven upstream AST bugs (eight patched locally in
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

**There is no header dependency tracking.** Editing a `.h` does *not*
mark the `.o` files that include it as stale, so a plain `make tksao`
after a header change relinks objects compiled against the old layout.
The symptom is not a build error — it is a working binary that crashes
somewhere unrelated. Changing `fitsy/file.h` and rebuilding without the
`clean` cost an hour here: ds9 segfaulted in `strlen` during startup,
long before the changed code ran. That is what the `clean` in
`make tksaoclean tksao ds9clean ds9` is for, and why it is not optional
when a header moved. The same applies one level down: after touching
anything in `fitsy/`, run `make fitsy` (which also reinstalls its headers
into `include/`) before rebuilding `tksao`.

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

**A `.L` edit is still possible, because that churn is characterized.**
Measured again 2026-09-18 on `frame/lex.L`: the local flex differs from
whatever produced the checked-in `lex.C` by exactly 45 lines in 13 hunks,
all of it skeleton type-width churn (`int`→`size_t`/`ssize_t`/
`yy_size_t`, plus one buffer-growth overflow guard). None of it touches
the DFA tables or the rule actions. So the recipe is: generate the no-op
diff from `HEAD`'s `.L` first, regenerate from your edited `.L`, then
reverse-apply that no-op diff hunk by hunk to the new output. What is
left carries nothing but your change. Verify before installing it — the
remaining diff should be table sizes, table contents, `YY_NUM_RULES`,
`#line` shifts and your new action, and nothing else.

Note the local `patch` is not GNU patch and has no `-R`; reverse-apply
with `git apply -R` or a short script that swaps each hunk's `+` side for
its `-` side. Also: regenerate into a scratch directory laid out the same
way (`frame/lex.L` → `frame/lex.C`), because flex writes the output path
into `#line` directives and a different cwd makes every one of them differ.

Adding a token alphabetically to `parser.Y` renumbers every token after
it, so a one-line grammar change produces a ~11k-line `parser.C` diff.
That is inherent to bison, not a sign the regen went wrong.

Note that `bison -d -o foo.C` writes the header as `foo.H` (it maps the
output extension's case), which is what the repo tracks. On macOS's
case-insensitive APFS `foo.h` and `foo.H` are the same file; on Linux
they are not, but bison produces `.H` on both, so this is consistent.

## Adding or removing a vendored package

A vendored Tcl extension is wired into **seven** places besides its own
directory, and all three platform trees carry their own copy of four of
them. Removing `tclasdf` meant touching every one:

- `{unix,macos,win}/Makefile.in` — the package name in the `saods9`
  build-order list.
- `make.include` — the build target and its `<pkg>/Makefile` configure
  rule, the `<pkg>clean` and `<pkg>distclean` targets, and **three**
  separate `.PHONY` lists.
- `ds9/{unix,macos,win}/Makefile.in` — a `<pkg>_LIB_SPEC= @<pkg>_LIB_SPEC@`
  declaration and an entry in `EXT_SPECS`. Watch the trailing backslashes:
  if the entry is last in the list, the line before it has to lose one.
- `ds9/{unix,macos,win}/configure.ac` — `TEA_PATH_CONFIG(<pkg>)` and
  `TEA_LOAD_CONFIG(<pkg>)`.
- `ds9/{unix,macos,win}/configure` — **the ~255-line block those two
  macros generate**, plus 8 `<pkg>_*` names in the `ac_subst_vars` list
  and one `--with-<pkg>` help-text line.
- `ds9/{unix,macos,win}/ds9.C` — the `<Pkg>_Init` declaration and the
  `Tcl_StaticPackage` registration.
- `Manifest.md` — its row.

**There is no autoconf on this box**, so the generated `configure` is
hand-edited. That is also how these blocks got there: copied from a
neighbouring package's block and renamed. The generated block is
delimited by its own `# Ok, lets find the <pkg> configuration` marker and
runs to the `    #` line that opens the next package's block — cut on
those, and assert the region mentions no other package name before
writing.

Adding a *source file* to an existing TEA package is much smaller: add it
to `TEA_ADD_SOURCES` in `configure.ac` **and** to the identical `vars="`
list in the generated `configure` (headers likewise, via
`TEA_ADD_HEADERS`, which is what installs them into `include/`). Then
delete that package's `Makefile` and let `make <pkg>` re-run `./configure`
— `make.include` only runs configure when the `Makefile` is missing.

Don't forget the top-level `Makefile`: it is generated by
`{unix,macos,win}/configure` from that tree's `Makefile.in`, so re-run
the one for your platform and diff the result to confirm only the
intended line moved.

## Running ds9 / smoke-testing over XPA

`xpans` (the XPA name server) must be on the `PATH` **before** ds9
launches, or ds9 starts fine but never registers and every `xpaget`/
`xpaset` fails. The tools live in `bin/` alongside `ds9`:

```
PATH="$PWD/bin:$PATH" ./bin/ds9 &
```

**On macOS the build produces an app bundle, not `bin/ds9`** — the binary
is `bin/SAOImageDS9.app/Contents/MacOS/ds9`. The test scripts invoke a
bare `ds9`, so put one on `PATH` as a **wrapper script**, not a symlink:

```
mkdir -p /tmp/tb && printf '#!/bin/sh\nexec %s/bin/SAOImageDS9.app/Contents/MacOS/ds9 "$@"\n' "$PWD" > /tmp/tb/ds9 && chmod +x /tmp/tb/ds9 && cp bin/xpa* /tmp/tb/
```

then run the suites with `PATH=/tmp/tb:$PATH`. A *symlink* named `ds9`
does not work: ds9 exits immediately and silently, because it resolves
its support files relative to the path it was invoked through.
`exec`ing the real path fixes it. `xpans` has to be in there too, or
nothing registers.

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

### Stop ds9 opening modal dialogs at you

`Error`/`Warning`/`Info` all go through `ProcessMessage` (`error.tcl`),
which raises a `tk_messageBox` only when `ds9(msg,src)` is `tcl` *and*
`pds9(confirm)` is set. Turn the second one off as soon as an instance
registers and errors stop blocking:

```
echo 'set pds9(confirm) 0' | ./bin/xpaset ds9 tcl
```

To see them instead of losing them, replace the proc outright:

```
echo 'proc ProcessMessage {level msg} {global ds9; set ds9(msg,level) $level; set ds9(msg) $msg; puts stderr "DS9-$level: $msg"}' | ./bin/xpaset ds9 tcl
```

### A crashed ds9 leaves a landmine for the next one

On exit ds9 deletes its auto-recovery files; on a *crash* it can't, and
the next instance **with the same `-title`** finds them and opens a modal
"Found Auto Backup, restore?" (`AutoSaveRestore`, `autosave.tcl`). That
dialog appears during startup, before the main loop, and nothing in a
script can dismiss it. The failure mode is confusing on purpose-built
tests: ds9 registers with XPA, so `xpaaccess` answers **yes**, but every
`xpaset` then reports `no response from server during handshake`.

The files are `~/<title>.auto` and `~/<title>.auto.dir`, keyed by window
title — so a session that ran a dozen differently-titled instances leaves
a dozen separate traps. Clear them before launching:

```
rm -rf ~/DS9Test.auto ~/DS9Test.auto.dir
```

### Diagnosing a ds9 that stops answering

A ds9 sitting at ~110% CPU and answering nothing is usually *not* an
infinite loop — it is a modal dialog spinning its own event loop. On
macOS, `sample <pid> 2` settles it in seconds: a stack through
`-[NSAlert runModal]` means a dialog, and a stack through
`Tcl_FSEvalFileEx`/`Tk_MainEx` without `Tk_MainLoop` means it happened
during startup. Crash reports land in
`~/Library/Logs/DiagnosticReports/ds9-*.ips` (JSON, two documents
concatenated — parse the second) and `atos -o <binary> -offset <hex>`
symbolizes the frames.

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

### Windows: `<windows.h>` and `using namespace std`

`include/bzlib.h` includes `<windows.h>` under `_WIN32`. That header's
`rpcndr.h` does `typedef unsigned char byte` and then *uses* a bare
`byte` in `wtypesbase.h`, `objidl.h`, `oaidl.h` and a dozen more places.
C++17 has `std::byte`, so if any using-directive for `std` is in effect
when those headers are parsed, every one of those uses is ambiguous and
mingw's gcc emits pages of `reference to 'byte' is ambiguous`.

So in a C++ file, **include `bzlib.h` (or anything else that reaches
`windows.h`) before `<string>`/`<vector>` and before any fitsy header**.
The fitsy part is the trap: `fitsy/card.h` carries its own
`using namespace std`, and `head.h` and `file.h` both pull it in, so
including one fitsy header first is enough to trigger this even if the
file never writes a using-directive of its own. `fitsy/asdf.C` has a
comment at the top saying as much; don't tidy that include block.

Two related things: `windows.h` also macro-izes `min`, `max`, `small`
and friends, so check a new file for those identifiers; and this whole
class of breakage is invisible on macOS and Linux, where `bzlib.h`
includes no such thing.

## Running the test suites (`Tests/`, a separate git repo)

Each suite is a shell script driven by XPA; `io.sh` and `all.sh` group
them. Most take a mode: `./asdf.sh xpa` compares against baselines,
`./asdf.sh command` relaunches ds9 once per file to exercise the command
line, and no argument runs both.

Four things that cost time to rediscover:

- **Never run `<suite>.sh save` to add one baseline.** It regenerates
  *every* `.sav` in the suite from current behaviour, which silently
  turns a regression check into a rubber stamp. To add one fixture, run
  the suite normally — it reports `NO BASELINE` and prints that file's
  probe output — and write the `.sav` from that by hand.
- **Start ds9 from the suite's own directory.** The scripts pass
  relative paths (`asdf/fixtures/...`), and ds9 resolves them against
  *its own* cwd. Reusing an instance you started elsewhere fails every
  case with "unable to open", which looks like a reader bug and is not.
  `StartDS9` only launches when `xpaaccess` says no, so a stray instance
  gets silently reused.
- **`xpaget ds9 data image x y 1 1` always reads slice 1**, for FITS as
  much as for anything else, so it cannot verify per-slice behaviour of a
  cube. `xpaget ds9 scale limits` under `xpaset -p ds9 scale mode minmax`
  can: each slice reports its own range.
- **Sanity-check a new reader against FITS before calling it a bug.**
  Most "this behaves oddly" moments this session were DS9 behaving that
  way for FITS too — the sticky Cube panel, the slice-1 probe. Load the
  equivalent FITS file and compare before digging.

## Testing C++ in isolation

Driving the GUI to test a `fitsy` class is slow and buries failures in
Tcl. The libraries link standalone; a scratch `main()` against the
installed archive is far quicker:

```
g++ -o /tmp/t /tmp/t.C -I include \
    lib/fitsy1.0/libtcl9fitsy1.0.a lib/liblz4.a lib/libbz2.a lib/libz.a \
    lib/libtclstub.a
```

`fitsy` calls `internalError()`, which lives in the application, so
define a one-line stub in the test file. This is how the ASDF reader's
tree walk, block decode and header construction were checked against a
real 197MB Roman file without starting ds9 once.
