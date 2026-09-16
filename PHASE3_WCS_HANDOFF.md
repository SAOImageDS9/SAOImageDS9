# Phase 3 WCS attachment — handoff

**Status: superseded — this task is done.** Written mid-task, before deciding
Option A didn't actually require a machine switch after all; kept afterward
as the design record (the content-sniffing rationale, the filename-vs-text
transport finding, the two Tcl regex bugs, the `Ident`/`wcs_[]` gap) since
`TODO.md`'s Phase 3 section summarizes the outcome but doesn't repeat this
level of detail. Read `TODO.md` first for current status and validation
evidence; come back here only for the "why," not the "what's left."

## Repo state at handoff time

Branch `asdf_support`, HEAD = `3dffe1fdf` ("WIP: Phase 2 ASDF container/pixel
reader + tclasdf extension refactor"). Working tree is clean relative to that
commit — no uncommitted edits from this session remain (two speculative
`tksao/frame/parser.Y` / `tksao/frame/lex.L` edits made mid-session were
reverted — see "What was tried and undone" below). `Tests/` and
`VBI_L1_*.asdf` in the working tree are the repo owner's own local additions,
not part of this work — leave them alone.

## The task: Phase 3, bullet 1

From `TODO.md`'s Phase 3 section:

> Production version of the Phase 1 bridge: locate `roman.meta.wcs`, resolve
> block-sourced ndarrays inline, feed to `AstYamlChan`, attach the resulting
> `AstFrameSet` the way `FitsImage::fits2ast()`/`replaceWCS()` already do.

Phase 2 (done, committed) loads a Roman ASDF file's pixel array into a frame
via `ds9/library/asdf.tcl`'s `AsdfLoadArray`, using the existing
`array ... var` load command (`FitsArrVar`) — no WCS is attached, the frame
just has pixel data. This task attaches a real WCS, derived from the same
file's GWCS YAML subtree (via AST's `AstYamlChan`, already vendored, unused
until Phase 1's spike), to that same frame.

## Important: a grammar-change-free approach looks preferable and buildable on THIS machine

**Read this section before assuming a macOS/bison detour is required.**

Phase 2's own `TODO.md` entry (lines ~289–299) records an explicit prior
decision: avoid touching `tksao/frame/parser.Y`/`lex.L` at all, specifically
*because* this checkout's bison (3.8.2) doesn't match the checked-in
generated files' stamped version (2.3), and regenerating with the wrong
bison would rewrite them wholesale (see `CLAUDE.md`'s Parser/lexer section).
Phase 2 solved this by doing everything through Tcl plus one small new C
command, reaching the existing `array ... var` load path with zero grammar
changes.

Investigating this task, the same trick applies here. DS9 already has a
Tcl-reachable command that attaches a WCS to a frame from a chunk of text
via a C++ `istream`, with two existing overloads:

```
$frame wcs replace <which> <filename>
$frame wcs replace text <which> <string>
```

Grammar: `tksao/frame/parser.Y:3135-3137` — `wcsReplace : INT STRING
{fr->wcsReplaceCmd($1,$2);} | TEXT_ INT STRING {fr->wcsReplaceTxtCmd($2,$3);}`
(plus an `INT INT` fd-based overload) → `Base::wcsReplaceCmd`/
`wcsReplaceTxtCmd` (`basecommand.C:3241`/`3265`) → both funnel into
`FitsImage::replaceWCS(istream&)` (`fitsimage.C:2083`). Today this only
understands FITS-card-style text (`parseWCS`, `fitsimage.C:1618`, expects
`KEYWORD = value` lines) — but `replaceWCS(istream&)` itself is completely
format-agnostic; it just reads from whatever `istream` it's handed.

**Important correction found while scoping this (see "Why not the `text`
overload" below): use the *filename* overload, not the `text` one.** The
`text` overload's `STRING` argument gets re-lexed through the same
bison/flex grammar as every other `$frame` command, and that lexer's
`STRING` token rules are naive, unescaped delimiter matching (`"[^"]*"`,
`{[^}]*}`) — real YAML contains literal `"`/`{`/`}` (e.g.
`axis_physical_types: ["custom:x", "custom:y"]`), so passing a whole YAML
document through it would truncate/corrupt at the first internal
occurrence, independent of any character-encoding concern. The filename
overload doesn't have this problem: only a short, controlled path string
(no special characters) travels through the grammar, while the actual YAML
bytes go through the OS filesystem and a plain `ifstream`, never touching
the flex tokenizer.

**Recommended plan**: write the extracted/reshaped GWCS YAML subtree to a
Tcl temp file, call `$frame wcs replace <which> <tempfile>`, delete the
temp file after. On the C++ side, make `FitsImage::replaceWCS(istream&)`
sniff whether the stream content is YAML (ASDF magic / `%YAML` directive /
a bare `wcs:` key at column 0 — none of these are valid FITS-card syntax,
so the sniff can't false-positive) and, if so, dispatch to a new
`replaceWCSYaml()` path instead of `parseWCS()`. Everything else
(`Base::wcsReplaceCmd`, the grammar rules, the lexer) stays untouched —
`replaceWCS(istream&)` doesn't care whether its `istream` came from an
`ifstream` (file overload) or an `istringstream` (text overload); the code
below is written directly against the `istream&` interface so it works
either way, but **only the filename overload is safe to actually use for
YAML content** per the above.

This is pure `tksao/frame/fitsimage.{h,C}` + `.tcl` work — **no bison, no
flex, buildable and testable on this Linux box** with the normal
`make tksaoclean tksao ds9clean ds9`. If this pans out, the macOS detour may
not be needed for this task at all. Recommend trying this on the current
machine before switching. Section "Option B" below is the fallback if, after
trying it, there's a concrete reason to prefer a dedicated grammar keyword
instead — in that case the macOS/bison detour really is required, and that
section has the exact starting point.

### Why not the `text` overload — and a related pre-existing bug, found not fixed

Traced exactly how `$frame someCmd ...` reaches the parser: the Tcl command's
argv words are rejoined into one string (`tksao/widget/widget.C`'s
`WidgetObjParse`) and the whole thing is re-lexed byte-by-byte through
`tksao/frame/lex.L` via a `frFlexLexer` (`tksao/frame/base.C`'s `Base::parse`)
— Tcl's own argument boundaries don't survive into the grammar at all.
`lex.L`'s `STRING` rules (`"[^"]*"` / `'[^']*'` / `{[^}]*}` / an unquoted
`[!-~][!-~]+` run) have no escape mechanism, confirmed against the existing
FITS caller (`ds9/library/wcs.tcl:581`,
`"$current(frame) wcs replace text $dwcs(ext) \{\{[WCSFromVar]\}\}"`), which
only works because real FITS header text never happens to contain a literal
`}`. A YAML document can't make that same assumption.

Separately (a **pre-existing bug, unrelated to this work, not fixed as part
of it** — flagging for awareness/future cleanup, not in scope here): the
lexer's catch-all rule (`lex.L`, near the end) is `.  {return
toupper(yytext[0]);}`. `yytext[0]` is a signed `char` on this platform;
a byte ≥0x80 that lands outside any matched quoted/braced span becomes a
negative value passed to `toupper()`, which is undefined behavior (glibc's
`ctype` tables are indexed by the raw value). This only reinforces staying
on the filename overload, where no YAML bytes ever reach the lexer at all.

## Option A — filename-transported, content-sniffed `replaceWCS` (no grammar changes)

### 1. `tksao/frame/fitsimage.h`

Add near the existing declarations (`fits2ast` at line 167, `parseWCS` at
339, `replaceWCS` at 421):

```cpp
AstFrameSet* yaml2ast(const char*);          // near fits2ast() decl
...
void replaceWCSYaml(const char*);            // near replaceWCS() decl
```

`initWCS`'s existing declaration (search `void initWCS(FitsHead*)`) needs a
second, defaulted parameter:

```cpp
void initWCS(FitsHead*, const char* yamltext = NULL);
```

No new member variables needed — reuses `ast_`, `wcsInv_`, `wcsAltHeader_`,
all already present.

### 2. `tksao/frame/fitsimage.C`

**`yaml2ast()`** — sibling to `fits2ast()` (`fitsimage.C:3611`), using a
custom AST channel source callback instead of `astPutFits`-style in-memory
loading (`AstYamlChan` has no `astPutFits` equivalent — the only way to feed
it text without a temp file is the generic AST Channel `source` callback,
confirmed via `ast/src/channel.c`'s `SourceWrap`: the callback returns one
`\n`-free line at a time, `NULL` on EOF, and `astChannelData`/
`astPutChannelData` is the existing DS9 idiom for passing per-call state to
such a callback — see `fits2TAB`, `fitsimage.C:3486`, doing exactly this for
`astTableSource`):

```cpp
namespace {
  struct YamlSourceState { const char* text; size_t pos; };

  const char* yamlSourceFunc()
  {
    YamlSourceState* st = (YamlSourceState*)astChannelData;
    if (!st || st->text[st->pos] == '\0')
      return NULL;

    static string lineBuf;   // SourceWrap copies this before the next call
    const char* start = st->text + st->pos;
    const char* nl = strchr(start, '\n');
    if (nl) {
      lineBuf.assign(start, nl - start);
      st->pos += (nl - start) + 1;
    }
    else {
      lineBuf.assign(start);
      st->pos += strlen(start);
    }
    return lineBuf.c_str();
  }
}

AstFrameSet* FitsImage::yaml2ast(const char* yamltext)
{
  astClearStatus;
  astBegin;

  if (!yamltext)
    return NULL;

  YamlSourceState state = {yamltext, 0};

  AstYamlChan* chan = astYamlChan(yamlSourceFunc, NULL, " ");
  if (!astOK || chan == AST__NULL) {
    astEnd;
    return NULL;
  }

  astPutChannelData(chan, &state);

  AstFrameSet* frameSet = (AstFrameSet*)astRead(chan);

  if (!astOK || frameSet == AST__NULL ||
      strncmp(astGetC(frameSet,"Class"), "FrameSet", 8)) {
    astAnnul(chan);
    astEnd;
    return NULL;
  }

  wcsInv_ = astGetI(frameSet, "TranInverse");
  if (!wcsInv_)
    internalError("Warning: the WCS has no defined inverse. Some functionality may not be available.");

  astExport(frameSet);
  astAnnul(chan);
  astEnd;

  return frameSet;
}
```

`AstYamlChan`/`astYamlChan` are already visible in this file — `fitsimage.C`
includes `wcsast.h`, which includes the umbrella `ast.h`, which already has
a yamlchan section (confirmed: `grep -n yamlchan ast/ast.h` finds it) — no
new `#include` needed.

**`initWCS()`** (`fitsimage.C:1087`) — the three `ast_ = fits2ast(...)`
assignment sites (lines ~1166, ~1170, ~1173) need to prefer `yaml2ast()` when
`yamltext` is given. The Chandra LONG/NPOL special-case branch (lines
1136–1171) is FITS-CTYPE-specific and must not apply when loading YAML:

```cpp
void FitsImage::initWCS(FitsHead* hd, const char* yamltext)
{
  ... // unchanged down to the shareWCS block, which should also pass
      // yamltext through to its own wcsPhyInit(hd) call unchanged (that
      // call doesn't touch ast_, see below)

  clearWCS();

  if (yamltext) {
    ast_ = yaml2ast(yamltext);
  }
  else if (hd->find("CTYPE1") && hd->find("CTYPE2")) {
    ... // unchanged Chandra LONG/NPOL block
  }
  else {
    ast_ = fits2ast(hd);
  }

  // rest of the function (axis-order fixup, scanWCS(hd), wcsState_,
  // wcsSize_, wcsPhyInit(hd)) is unchanged and format-agnostic — it only
  // reads naxis/bitpix off `hd` and inspects the already-built `ast_`.
}
```

**`replaceWCS()`** (`fitsimage.C:2083`) — add the content sniff and dispatch:

```cpp
void FitsImage::replaceWCS(istream& str)
{
  streampos start = str.tellg();
  string firstLine;
  getline(str, firstLine);
  str.clear();
  str.seekg(start);

  // FITS header cards are `KEYWORD = value`, always <=8 uppercase chars
  // with no colon in that position — none of these three YAML markers can
  // appear as a valid FITS card, so this sniff can't false-positive.
  bool isYaml = firstLine.compare(0, 5, "#ASDF") == 0 ||
                firstLine.compare(0, 5, "%YAML") == 0 ||
                firstLine.compare(0, 4, "wcs:") == 0;

  if (isYaml) {
    ostringstream ss;
    ss << str.rdbuf();
    replaceWCSYaml(ss.str().c_str());
    return;
  }

  FitsHead* hh = parseWCS(str);

  if (objectKeyword_)
    delete [] objectKeyword_;
  objectKeyword_ = dupstr(hh->getString("OBJECT"));

  if (wcsAltHeader_)
    delete wcsAltHeader_;

  wcsAltHeader_ = hh;
  initWCS(wcsAltHeader_);
}

void FitsImage::replaceWCSYaml(const char* yamltext)
{
  FitsHead* hd = image_->head();
  FitsHead* hh = new FitsHead(hd->naxis(0), hd->naxis(1), hd->naxis(2),
                               hd->bitpix());

  if (wcsAltHeader_)
    delete wcsAltHeader_;
  wcsAltHeader_ = hh;

  initWCS(wcsAltHeader_, yamltext);
}
```

No `OBJECT` keyword handling in the YAML path — there's no FITS-style
`OBJECT` card to extract; leave `objectKeyword_` alone (Phase 4+ could pull
`roman.meta.observation.*` for this, out of scope here).

### 3. Nothing else changes

`tksao/frame/basecommand.C`, `base.h`, `parser.Y`, `lex.L` — untouched. The
existing `wcs replace <which> <filename>` command already routes to
`FitsImage::replaceWCS(istream&)` for every frame slice (`findAllFits`/
`nextSlice` loop in `Base::wcsReplaceCmd`, unchanged).

Build with the normal `tksao/`-change recipe from `CLAUDE.md`:
```
make tksaoclean tksao ds9clean ds9
```
No `make parser` step, no bison/flex involved.

### 4. Tcl side — `ds9/library/asdf.tcl`

Needs a new piece: given the raw tree text (`AsdfTreeText`'s output, already
computed in `AsdfLoadArray`), extract and re-root the GWCS subtree as a
standalone top-level YAML document, mirroring
`utils/asdf_gwcs_probe/extract_subtree.py`'s `extract_key_subtree` +
`as_wcs_shell`/`as_wrapped_transform` (Python, from the Phase 1 spike — not
wired into DS9, this is the porting reference). Key real-file findings from
Phase 1 (`TODO.md` lines 205–267) that the Tcl port must account for:

- **The key name/path is not fixed across Roman product types.** Seen so
  far: `wcs_l1`/`wcs_l2` directly under `roman:` (imaging/grism WCS
  products), and `coordinate_distortion_transform` (pre-launch distortion
  file). The design doc's assumption of a fixed `roman.meta.wcs` path is
  aspirational/simplified — real files vary. A production version should
  probably try a short list of known key names (`wcs`, `wcs_l2`, `wcs_l1`)
  under `roman:` directly (matching `AsdfFindNdarray`'s existing 2-space
  indent convention) and report "no WCS" if none are found — see the
  "Defined fallback behavior" bullet in Phase 3, which is explicitly
  required, not optional.
- **Bare-transform detection.** If the found subtree's value is tagged
  `!<tag:stsci.edu:asdf/transform/...>` rather than
  `!<tag:stsci.edu:gwcs/wcs-...>`, `astRead()` will fail with "No suitable
  object was found in the supplied YAML text" (confirmed in Phase 1) unless
  it's wrapped in a synthetic minimal 2-step GWCS shell first — see
  `extract_subtree.py`'s `SHELL_TEMPLATE`/`as_wrapped_transform` for the
  exact shape to port to Tcl.
- **Unresolved question, not yet checked against a real file**: whether a
  WCS subtree can itself reference a block-sourced `core/ndarray` (e.g. a
  lookup-table-based distortion). If so, it needs the same
  `source:`→inline-`data:` resolution `resolve_ndarray.py` does before
  `astYamlChan` sees it — `AsdfFindNdarray`/`AsdfReadBlock` in `asdf.tcl`
  already have everything needed to do this in Tcl, just not wired up for
  a nested/recursive case yet. Check the 3 sample files in
  `utils/asdf_gwcs_probe/sample_data/` for whether this actually occurs
  before assuming it's needed.
- **`bounding_box` is silently dropped** by `yamlchan.c` regardless of this
  work (a pre-existing AST-layer gap, `TODO.md` line 268) — not something to
  fix as part of this task, just don't be surprised that the GWCS
  valid-pixel-domain isn't enforced.

Once the subtree text is in hand, attach it **via a temp file, not the
`text` overload** (see "Why not the `text` overload" above) — matching the
existing `file tempfile`/`try`/`finally` idiom already used elsewhere in
this codebase (`ds9/library/util.tcl:1650`, `GIFWritePhoto`):

```tcl
# after AsdfLoadArray's existing pixel-array success path
if {![catch {AsdfExtractWcsText $tree} yamltext] && $yamltext ne {}} {
    set ch [file tempfile tmpfn]
    fconfigure $ch -translation binary -encoding utf-8
    puts -nonewline $ch $yamltext
    close $ch
    try {
        # NB "which" is 1-indexed (Base::findAllFits(int which) treats 0 as
        # "stop immediately," always returning NULL - confirmed the hard
        # way via a same-message-less TCL_ERROR from the bare "result =
        # TCL_ERROR;" branch with no Tcl_AppendResult call). 1 is the
        # existing library's own convention too (ds9/library/wcs.tcl's
        # dwcs(ext) defaults to 1, never 0).
        $current(frame) wcs replace 1 $tmpfn
    } finally {
        file delete -force $tmpfn
    }
} else {
    # no WCS found or extraction failed - per Phase 3's required fallback,
    # this is not an error, the frame just has no WCS attached
}
```

(`AsdfExtractWcsText` is the new proc to write — the Tcl port of
`extract_subtree.py`'s logic described above. Exact signature/return
convention is an implementation choice; keep it consistent with the rest of
`asdf.tcl`'s style — e.g. return `{}` on "not found", like
`AsdfFindNdarray` already does.)

## Testing plan

1. Rebuild: `make tksaoclean tksao ds9clean ds9`, confirm it completes with
   no toolchain changes needed (this is the concrete proof Option A avoids
   the bison/flex problem).
2. Reuse the **already-validated** Phase 1 sample files under
   `utils/asdf_gwcs_probe/sample_data/` (`wfi01_f158_wcs.asdf`,
   `grism_wcs.asdf`, `new_distortion.asdf`) as known-good cross-checks —
   each has an independently-confirmed `astTran2` test-point result recorded
   in `TODO.md` (Phase 1 section) to compare against:
   - `wfi01_f158_wcs.asdf` (`wcs_l2`): `Nframe=5`, `astTran2(0.3,-0.2)` →
     `(-1.57103, 1.15147)`.
   - `grism_wcs.asdf` (`wcs_l2`): `Nframe=4`.
   - `new_distortion.asdf` (bare-transform, needs shell-wrapping):
     `Nframe=2`, `astTran2(0.3,-0.2)` → `(1616.98, -955.744)`.
   These are WCS-only files with no pixel array, so exercise the new WCS
   path standalone (e.g. via a small Tcl test in the `tcl` XPA entry point,
   per `CLAUDE.md`'s smoke-testing section) rather than through
   `AsdfLoadArray`'s full pipeline — confirm `$current(frame) get wcs ...`
   or an equivalent coordinate-readout command reflects a WCS with the same
   effective transform as these known `astTran2` results before trying the
   full pixel+WCS combined case.
3. For the full combined case (pixel array + WCS in one file, actually
   exercising `AsdfLoadArray` + the new WCS-attach call together), the
   previously-used real Roman file was
   `r0000101001001001001_0001_wfi01_f158_cal.asdf` (206,736,815 bytes,
   downloaded to the scratchpad during Phase 2, not committed — re-download
   if needed, see Phase 2's `TODO.md` entry for provenance). Visually
   confirm via `saveimage png` (as Phase 2 did) that the frame still renders
   correctly, then additionally confirm a grid/coordinate readout now
   reflects real sky coordinates instead of plain pixel coordinates.
4. Confirm the "no WCS, don't crash" fallback explicitly: feed a file/subtree
   that extraction can't find or that AST rejects, confirm the frame still
   loads its pixel data successfully with no WCS, no error dialog crash.
5. Specifically exercise non-ASCII content once real files are in hand: check
   whether any real Roman GWCS subtree's string fields (e.g. `name:` values,
   comments) contain non-ASCII UTF-8 bytes, and if so confirm the temp-file
   transport round-trips them intact (`fconfigure ... -encoding utf-8` on
   write, and `libyaml`/`AstYamlChan` reading the same file — this should
   just work since the temp file never goes near the flex lexer, but worth
   confirming against a real example rather than assuming).

## Option B — dedicated grammar keyword (fallback, needs macOS)

If Option A turns out to be undesirable for some concrete reason found while
implementing it, here is the alternative that was started and then reverted
this session, requiring the macOS/bison detour:

**Even in this path, keep the YAML bytes off the flex `STRING` token** — the
truncation problem described above (naive, unescaped `"[^"]*"`/`{[^}]*}`
rules) applies to *any* new grammar rule that embeds raw YAML in a `STRING`,
not just the existing `text` overload. So the new rule should take a
*filename* (or an fd, mirroring the existing `INT INT` overload), the same
transport fix as Option A — a dedicated keyword doesn't remove the need for
it.

- `tksao/frame/parser.Y`: add `%token YAML_` (alphabetically, between `XY_`
  and `YES_` in the token declaration list), and extend the `wcsReplace`
  rule (`parser.Y:3135`) with a filename-taking variant:
  ```
  wcsReplace : INT INT {fr->wcsReplaceCmd($1,$2);}
  	| INT STRING {fr->wcsReplaceCmd($1,$2);}
  	| TEXT_ INT STRING {fr->wcsReplaceTxtCmd($2,$3);}
  	| YAML_ INT STRING {fr->wcsReplaceYamlCmd($2,$3);}
  	;
  ```
- `tksao/frame/lex.L`: add `yaml  {return YAML_;}` (alphabetically, between
  `xy` and `yes` in the keyword table).
- `tksao/frame/base.h`: add `void wcsReplaceYamlCmd(int, const char*);`
  near the existing `wcsReplaceCmd` declarations (line 1786).
- `tksao/frame/basecommand.C`: add, near `wcsReplaceCmd(int, const char*)`
  (`basecommand.C:3241`) — identical to it (opens `ifstream str(fn)`) except
  calling a YAML-aware entry point instead of `rr->replaceWCS(str)`:
  ```cpp
  void Base::wcsReplaceYamlCmd(int which, const char* fn)
  {
    if (!currentContext->cfits)
      return;

    ifstream str(fn);
    if (!str) {
      Tcl_AppendResult(interp, " unable to load wcs file ", fn, NULL);
      result = TCL_ERROR;
      return;
    }

    FitsImage* rr = findAllFits(which);
    if (rr) {
      while (rr) {
        rr->replaceWCS(str);   // same content-sniffing replaceWCS() as Option A
        rr=rr->nextSlice();
      }
      regionStatsImageInvalidated();
    }
    else
      result = TCL_ERROR;
  }
  ```
  (This ends up nearly identical to plain `wcsReplaceCmd(int, const char*)`
  — the only reason to add a distinct keyword/command at all here, rather
  than just reusing the existing filename overload as Option A does, would
  be wanting the grammar itself to disambiguate instead of content-sniffing
  in C++. If that's not a strong requirement, Option A's plain reuse of the
  existing filename overload is simpler and needs none of this.)
- `FitsImage::replaceWCSYaml`/`yaml2ast`/`initWCS` changes: same as Option A.
- New Tcl side: same temp-file-based transport as Option A, just naming the
  new command: `$frame wcs replace yaml 0 $tmpfn`.

**Before making any of these edits for real**, per `CLAUDE.md`'s
Parser/lexer section: verify the toolchain first. On the macOS box, with
Homebrew bison kept off `PATH`, run a no-op regen — `cd tksao && make
parser` with **no source changes** — and confirm `git diff` is empty before
touching `.Y`/`.L`. If any of the above edits are already present in the
working tree at that point (e.g. carried over from this handoff), `git
stash` them first, run the no-op check clean, then `git stash pop` and
proceed. After editing `parser.Y`/`lex.L` for real, regenerate with the
**narrow** per-grammar target: `cd tksao && make parser` (not `make
parsers`), then `cd .. && make tksaoclean tksao ds9clean ds9`. `bison`
must stamp `2.3` and `flex` `2.6.4` in the regenerated files (macOS's
`/usr/bin/bison`/`/usr/bin/flex` match; a Homebrew `bison` 3.x on `PATH`
would rewrite the files wholesale and must be avoided).

## Recommendation

Try Option A first, on whichever machine is convenient — it doesn't need
bison/flex at all, so there's a real chance the macOS move isn't necessary
for this task. Fall back to Option B only if a concrete problem with Option
A's content-sniffing approach shows up in practice.
