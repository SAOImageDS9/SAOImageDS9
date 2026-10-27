# Design notes: multi-cell frame spans in Tile/Grid mode

Status: design settled, not yet implemented. The open questions from the
first draft have been answered (see "Decisions" at the end); the body below
reflects those answers.

## The ask

DS9 already has `grid`, `row` ("horizontal"), and `column` ("vertical") tile
modes, where `row`/`column` are just `grid` with one dimension fixed at 1.
Every mode places exactly one frame per grid cell, and cells are always the
same size.

The new mode should let a frame occupy a **rowspan × colspan block** of
cells — e.g. a 3-column × 2-row grid where one frame fills the left 2×2
block and two more frames fill the two remaining 1×1 cells on the right.
The user picks a fixed grid size and then needs a GUI to
assign/resize/reposition each frame's block within it.

## Current architecture (as of this review)

All of this lives in `ds9/library/layout.tcl` and `ds9/library/frame.tcl`;
no C++ changes are needed for the layout math itself (see "Why no tksao
changes are needed" below).

### State

- `tile(mode)`: `grid` | `row` | `column` — set via the Frame > Parameters >
  Tile menu (`ds9/library/mframe.tcl:287-292`) or the `tile` XPA command
  (`ds9/parsers/tileparser.tac`). `row`/`column` are legacy/back-compat
  aliases for a 1×N or Nx1 grid. `tile(grid,mode)` is only consulted when
  `tile(mode)` is `grid`.
- `tile(grid,mode)`: `automatic` | `manual`. Automatic picks
  `numx = int(sqrt(n-1))+1` (= `ceil(sqrt(n))`), `numy = round(sqrt(n))`
  from the active frame count (e.g. 6 frames → 3×2). Manual uses the
  user-supplied `tile(grid,col)` / `tile(grid,row)` (default 10×10, set in
  `TileDef`, `ds9/library/layout.tcl:100`); if there are more active frames
  than cells it raises an `Error` and falls back to automatic for that
  layout pass.
- `tile(grid,dir)`: `x` | `y` — whether frames fill the grid row-major or
  column-major (`TileDialog`'s "Direction" radio).
- `tile(grid,gap)`: pixel gap between cells.
- `ds9(active)`: ordered list of active frame names (`Frame1 Frame2 ...`),
  maintained by `UpdateActiveFrames` (`ds9/library/frame.tcl:1994`). Order
  here is what currently determines which frame lands in which cell — the
  Nth active frame goes into the Nth cell in fill order.
- All of `tile(...)` is saved/restored verbatim by `Backup`
  (`ds9/library/backup.tcl:795-800`, dumps `array get tile`). Preferences
  go through a shadow `ptile` array (`ds9/library/prefs.tcl:230-235`):
  `TileDef` copies `tile` → `ptile` once at init, prefs save `ptile`, and
  prefs load does `array set tile [array get ptile]`. So any `tile` key set
  in `TileDef` *before* the `array set ptile` line becomes a preference;
  keys set after it, or created later at runtime, never do.

### Layout algorithm

`LayoutFrames` (`ds9/library/layout.tcl:718`) is the entry point, called any
time the canvas resizes, a frame is added/removed, or a menu changes
something. It calls `LayoutFramesOneOrMore` (`ds9/library/layout.tcl:825`),
which for tile display with 2+ active frames reaches `LayoutFrame`
(`ds9/library/layout.tcl:1232`) or, when View > Multiple Colorbars is off
(`view(multi)` = 0), `LayoutFrameNone` (`ds9/library/layout.tcl:1265`) —
same dispatch, different rect-application function. In the `None` path all
frames are still tiled and shown, but the grid is computed inside the
canvas area left over after reserving room for a single shared
colorbar/graph strip, and only `current(frame)`'s colorbar/graphs are
displayed (laid out against the full canvas).

With exactly one active frame, `LayoutFramesOneOrMore` always uses
`LayoutFrameOne` (full canvas), regardless of `tile(grid,mode)`. Separately,
`DisplayMode` (`ds9/library/frame.tcl:2151`) sets `ds9(display)` to
`single` for one frame in `automatic` and keeps `tile` in `manual` — but
even in `manual`, the one-frame layout still goes through `LayoutFrameOne`.

`LayoutFrame`/`LayoutFrameNone` switch on `tile(mode)`/`tile(grid,mode)` to
pick `numx`/`numy`, then call `TileRect numx numy`
(`ds9/library/layout.tcl:1298`) or `TileRectNone numx numy`
(`ds9/library/layout.tcl:1372`). These:

1. Compute a uniform cell size: `ww = (canvas_width - gap*(numx-1)) / numx`,
   same for `hh`.
2. Precompute each cell's `(x, y)` origin into arrays `xx($n)`/`yy($n)`,
   walking either row-major or column-major depending on `tile(grid,dir)`.
3. Walk `ds9(active)` in order, and for cell index `ii` (0, 1, 2, ...):
   load that frame's per-frame colorbar settings into the globals
   (`ColorbarGlobalSetFromFrame $ff` + `LayoutColorbarAdjust`), inset the
   cell rect with `LayoutFrameAdjust`/`LayoutFrameOriginAdjust`, then
   `$ff configure -x ... -y ... -width ... -height ... -anchor nw`,
   then `$ff show` and raise it. Colorbar and graphs for that frame are
   positioned off the same `(xx($ii), yy($ii), ww, hh)` rect.

So today, a frame's screen rect is entirely `(cell size × cell position)`,
with no per-frame width/height override and no concept of a frame spanning
more than one cell.

### Why no tksao (C++) changes are needed

The frame is a Tk canvas item (`tksao/frame/*`) configured purely through
`-x -y -width -height -anchor`, same mechanism `TileRect` already uses per
cell. Colorbar and graphs for a frame are likewise positioned from an
arbitrary `(x, y, w, h)` rect passed in from Tcl (`LayoutColorbar`,
`LayoutGraphHorz/Vert`). A frame spanning a 2×2 block is just a bigger rect
built from the same four numbers — the rendering side has no notion of
"cells" at all. This makes the feature a **Tcl-side layout problem**:
computing the right rect per frame and driving a new GUI, not a rendering
change.

### The dialog

`TileDialog` (`ds9/library/frame.tcl:2507`) is a small non-modal toplevel:
a "Grid" box with Automatic/Manual radios, a "Direction" box (x/y), a
"Layout" box with Columns × Rows entries, a "Gap" entry, and Apply/Close
buttons. `TileApplyDialog` copies the working `dtile(...)` values back into
`tile(...)` and calls `DisplayMode`, which re-runs `LayoutFrames`.

### XPA plumbing

`ds9/parsers/tileparser.tac` + `tilelex.fcl` (set) and
`tilesendparser.tac` + `tilesendlex.fcl` (get). The generated
`tileparser.tcl`, `tileparser.tab.tcl`, `tilelex.tcl` and their `tilesend*`
counterparts are **tracked in git**; they regenerate on `make ds9` and the
regenerated files must be committed with the grammar change. Existing set
rules use `ProcessCmdSet` (`ds9/library/util.tcl:318`), which only assigns
the array element and runs a callback — it has no validation hook.

## Design

### 1. New tile mode

Add a third `tile(grid,mode)` value, **`span`**, alongside
`automatic`/`manual`. Its user-facing label is **"Manual Layout"** (dialog
radio, docs). The internal/XPA token is deliberately *not* `layout`:
`LAYOUT_` already means "grid size" in `tile grid layout C R`, and the
dialog's Columns × Rows box is already titled "Layout".

Span mode only applies when `tile(mode)` is `grid`; the Frame > Parameters >
Tile > Columns/Rows menu entries still override it, exactly as they
override `automatic`/`manual` today.

`automatic`/`manual` stay exactly as they are — `span` is purely additive,
so no migration path is needed for existing sessions/preferences.

### 2. Span grid size: its own keys

Span mode gets its **own** grid size, `tile(span,col)` / `tile(span,row)`,
rather than reusing `tile(grid,col)` / `tile(grid,row)`.

Reason: if the two modes shared a size, switching to Manual, running
`tile grid layout 2 2`, and switching back would invalidate every span
outside 2×2 without any span-mode command ever running — so the
command-path validation in §6 could never catch it. With separate keys,
`tile grid layout C R` keeps meaning "manual mode, this size" (including
its existing side effect of switching to `manual`), and the span grid
size only changes through paths that validate it.

- **Default / seeding:** `TileDef` sets `tile(span,col)` and
  `tile(span,row)` to `0` *after* its `array set ptile [array get tile]`
  line, so they never become preferences. `0` means "unset": on first
  entry into span mode, seed them from the automatic `numx`/`numy` for the
  current active-frame count (minimum 1×1).

### 3. Placed (pinned) frames and flowing frames

A frame that has been placed or resized by hand (dragged in the editor,
or set with `tile grid span ...`) is **pinned**: `tile(span,$ff)` holds its
block `{col row colspan rowspan}` (1-based col/row of the top-left cell,
plus width/height in cells), and it keeps that block no matter what
happens to the other frames. Every other active frame **flows**: in
`ds9(active)` order, each takes the next free 1×1 cell around the pinned
blocks. So Frame > Move, show/hide, new and deleted frames all take
effect on screen at once, and only the flowing frames move.

Example: Frame21 pinned 2×2, then Frame22 moved to First. Frame21 stays
put, Frame22 takes the first free cell, everything else shifts along one
cell, and Frame20 ends up in the cell Frame22 left.

`tile(span,blocks)` is derived: one block per active frame, recomputed by
`TileSpanLayout` on every layout. It is not user state.

How this model was reached: the first version pinned every frame by name,
so Frame > Move and show/hide did nothing visible in this mode. The second
version flowed every frame through an ordered list of blocks, so moving
one frame shifted pinned-looking blocks onto other frames. KJG: any frame
that has been manually positioned or resized should always keep that
location/size; the other frames flow around it.

- **Unpinning:** double-click a frame in the editor, or
  `tile grid span none` for the current frame. Reset unpins every frame.
- **Hidden pinned frames** keep their pin but don't hold their cells
  while hidden, so flowing frames may use them. When the frame is shown
  again it gets its block back and the flowing frames move around it.
- **Conflicting pins:** a pin that no longer fits the grid, or overlaps
  an active pinned frame earlier in `ds9(active)` (e.g. a frame shown
  again after its cells were pinned by another frame), is dropped and that
  frame flows.
- **Per session only, not a preference.** Pins and the span grid size are
  created after `TileDef`'s `tile` → `ptile` copy, so they never reach
  prefs.
- **Backup/Restore: no extra plumbing.** `BackupGUI` dumps
  `array get tile` after the per-frame blocks, and restore recreates
  frames under their original names, so `tile(span,FrameN)` pins land on
  the right frames.
- **Frame delete:** `unset -nocomplain tile(span,$ff)` in `DeleteFrame`,
  because frame names are reused (`frame 3` recreates `Frame3`).

### 4. Auto-assignment for new/unassigned frames

Users will rarely want to hand-place every frame. Policy:

1. Mark the cells of every active pinned frame (dropping conflicting pins,
   §3).
2. Each flowing frame, in `ds9(active)` order, takes the first free 1×1
   cell, scanning in the `tile(grid,dir)` direction: `x` = row-major, `y`
   = column-major. This repurposes the Direction control instead of
   leaving it dead in span mode.
3. **No free cell → grow the grid** along the fill direction: `dir x` adds
   a row (`tile(span,row)++`, like text wrapping onto a new line), `dir y`
   adds a column (`tile(span,col)++`). Growing shrinks every block's
   on-screen size; that is expected. The grid never shrinks on its own.

Flow (`TileSpanLayout`, `ds9/library/tilespan.tcl`) runs from
the `span` arm of `LayoutFrame`/`LayoutFrameNone`, just before the rects
are computed. Every path that changes frames or mode (frame new/delete,
activation, mode switch, Restore, canvas resize) funnels through there, and
the proc changes nothing when every active frame already has a valid block.
The rect computation itself (`TileRectCells`) stays side-effect free.

Growth is the *only* thing that enlarges the grid implicitly. Explicit
span commands that fall outside the grid are rejected (§6), not grown into.

### 5. Layout algorithm: `TileRectSpan`

Parallel function to `TileRect`, selected when `tile(grid,mode) == span`:

1. Compute base cell size exactly as `TileRect` does today, using
   `tile(span,col)` / `tile(span,row)`:
   `cellw = (canvas_width - gap*(numx-1)) / numx`, same for `cellh`.
2. For the Nth active frame, read the Nth entry of `tile(span,blocks)`
   (guaranteed valid by §4 and §6) and compute, with `col0 = col-1`,
   `row0 = row-1`:
   ```
   fx = col0 * (cellw + gap)
   fy = row0 * (cellh + gap)
   fw = colspan * cellw + (colspan - 1) * gap
   fh = rowspan * cellh + (rowspan - 1) * gap
   ```
3. Same `LayoutFrameOriginAdjust`/`LayoutFrameAdjust` per-frame
   colorbar/graph inset math applies unchanged, since it only needs a rect.
4. `$ff configure -x $fx -y $fy -width $fw -height $fh -anchor nw`, same as
   today.

`TileRectSpan` does not validate; invariants are enforced on write (§6).

**`view(multi)` off** needs `TileRectSpanNone`: same span math, applied
inside the inset rect `TileRectNone` computes, with no per-frame
colorbar/graph layout.

**A lone active frame stays confined to its block** (it does not fill the
canvas). That needs two changes:

- `DisplayMode` (`ds9/library/frame.tcl:2167`): add a `span` arm that keeps
  `ds9(display)` as `tile` (like `manual`). Without it, `span` matches
  neither arm and leaves `ds9(display)` stale.
- `LayoutFramesOneOrMore` (`ds9/library/layout.tcl:834-843`): in tile
  display, route a single active frame to `LayoutFrame`/`LayoutFrameNone`
  (not `LayoutFrameOne`) when `tile(mode)` is `grid` and
  `tile(grid,mode)` is `span`. Leave the `automatic`/`manual` one-frame
  behavior unchanged.

### 6. Invariants and where they are enforced

Invariants for the pinned frames that are active:

- `col, row, colspan, rowspan` are integers ≥ 1;
- every pinned block is in bounds: `col+colspan-1 <= tile(span,col)` and
  `row+rowspan-1 <= tile(span,row)`;
- no two pinned blocks overlap. Flowing frames never conflict, because
  they are placed around the pins on every layout.

All of them are checked by one shared proc (`TileSpanCheck`) used by
**every write path**:

| Write path                                  | On violation                     |
|---------------------------------------------|----------------------------------|
| `tile grid span ...` (XPA/command line)     | `Error`, state unchanged         |
| `tile grid span size C R` (XPA/command line)| `Error`, state unchanged         |
| Dialog size entries                         | `Error`, entries revert          |
| Mini-canvas drag/resize (§7)                | reject the move live             |
| Auto-assignment / grow (§4)                 | valid by construction            |

**Shrinking the grid is rejected** (not clamped) if a pinned frame would
fall outside the new size. Flowing frames never block a shrink; if they
no longer fit, the grid grows again along the Direction.

Because the XPA set rules need validation, they call a dedicated proc
rather than `ProcessCmdSet`.

Backup/Restore writes `tile(...)` directly; that state was valid when
saved, so it is not re-validated.

### 7. GUI: a grid designer

This is the biggest new piece of surface area. Two options:

**A. Extend `TileDialog` with a mini canvas editor (build first).** Add a
third radio, "Manual Layout", in the Grid box next to Automatic/Manual.
When selected:

- The manual-mode "Layout" box is hidden and a "Manual Layout" box is
  shown in its place, with its own Columns/Rows entries that edit
  `tile(span,col)` / `tile(span,row)` (via `dtile`), not
  `tile(grid,col/row)`. A size is accepted on Return/focus-out only if
  every block still fits (§6); otherwise it reverts with an error.
- A Reset button unpins every frame, so they all flow in Direction order.
- Clicking a frame (press and release without dragging) makes it the
  current frame in the main window (`GotoFrame`); a drag does not change
  the current frame. Double-click unpins.
- Growing the grid from the editor (a drag or unpin that makes the flow
  run out of cells) also updates the Columns/Rows entries
  (`TileSpanDialogLayout`). Otherwise stale entry text would be taken as
  a resize on the next focus-out and shrink the grid back.
- The Direction radio stays visible and sets the auto-assignment scan /
  grow direction (§4).
- The dialog grows a plain `tk::canvas` (not a `tksao` frame — this is a
  configuration widget, not a rendering surface) showing a `numx × numy`
  grid with one rectangle per active frame, labeled with the frame's
  number, colored to match its highlight color if DS9 tracks one.
- Drag a block's body to move it; drag a corner/edge handle to resize its
  span. Both snap to the grid and live-reject moves that would overlap
  another block or leave the grid. A handful of canvas bindings on
  rectangle items is enough — no C++.
- **The whole Tile dialog is live; there is no Apply button.** Radios
  (Grid mode, Direction) apply on click. Entries (Columns/Rows, Gap,
  Manual Layout Columns/Rows) apply on Return or focus-out, and only if
  the value changed. Editor changes (drag release, Reset) apply at once;
  a drag applies once on release, not on every motion event. Every change
  goes through `TileApplyDialog`, which validates first: a bad value
  reverts the dialog to the current state and shows an error.
- **The dialog always shows the current state.** `UpdateTileDialog`
  rebuilds the dialog's copy from `tile` at the end of every
  `LayoutFrames` (and from `UpdateDS9`). Changes made from the menus or
  the command line, frames added or removed, and Move First/Back/... all
  show up without user action. (The first version kept Apply for
  everything except Manual Layout. A user could select Automatic, leave
  it unapplied, and do Frame > Move > First while the display was still
  in span mode: nothing visible happened until Apply. That mismatch is
  why the dialog is now fully live.)

Optional, low priority: since "Layout" now sits next to a "Manual Layout"
radio, consider retitling the Columns × Rows box to "Size" (a `msgcat`
string change).

**B. Direct manipulation on the main canvas (later, optional).** A "Grid
Edit" mode that lets users drag actual frame edges on the real display,
snapping to grid lines. Gives WYSIWYG feedback but is a larger change: it
means teaching the main canvas's mouse-mode dispatch (pan/zoom/crosshair/
region modes) about a new mode and reusing whatever hit-testing the frame
canvas item does for its border, and the `tile(grid,gap)`-pixel gutter
between frames is a narrow target to grab.

### 8. Command-line / XPA scripting

Span commands act on the **current frame**, like most DS9 per-frame
commands, so set and get are symmetric:

```
tile grid mode span                          ; # new tile(grid,mode) value
tile grid span <col> <row> <colspan> <rowspan>  ; # set current frame's block
tile grid span size <cols> <rows>            ; # set span grid size
tile grid span none                          ; # unpin current frame
```

Scripting several frames is `frame 3; tile grid span 1 1 2 2; frame 4; ...`.

Unlike `tile grid layout C R` (which switches to `manual`), the two span
set commands do **not** switch `tile(grid,mode)`; use `tile grid mode span`.

Get side (`tilesendparser.tac`):

```
xpaget ds9 tile grid mode        ; # → span
xpaget ds9 tile grid span        ; # → <col> <row> <colspan> <rowspan> of current frame
xpaget ds9 tile grid span size   ; # → <cols> <rows>
```

Grammar changes: add `SPAN_` and `SIZE_` tokens to `tilelex.fcl` and
`tilesendlex.fcl`; add `SPAN_` to `tileGridMode`; add `SPAN_ INT_ INT_ INT_
INT_` and `SPAN_ SIZE_ INT_ INT_` productions to `tileGrid` (they're
distinguishable on the token after `SPAN_`, so LALR has no conflict). Both
set productions call validating procs (§6).

`tile grid layout C R` is unchanged: it still sets `tile(grid,col/row)` and
switches to `manual`.

Full-session round-trip does not depend on these get commands — Backup
already saves all spans via `array get tile` (§3).

### 9. Interaction with existing features

- **Frame > Move / `MoveFrameToFramePosition`**: unchanged code. In span
  mode it reorders the flowing frames on screen; pinned frames stay put
  (§3).
- **Tab/Shift-Tab (`NextFrame`/`PrevFrame`)**: keep following
  `ds9(active)` order, consistent with leaving Frame > Move alone.
- **Preferences**: only `tile(grid,mode)` itself could ever be a saved
  preference (via `ptile`); spans and the span grid size never are. A
  fresh launch that ends up in span mode simply auto-assigns (§4).

## Implementation order

1. Data model (`tile(span,col/row)`, `tile(span,$ff)`), `TileSpanValidate`,
   auto-assignment + grow, `TileRectSpan`/`TileRectSpanNone`, and the
   `DisplayMode` / `LayoutFramesOneOrMore` changes. Drive it via the
   `tcl` XPA entry point (`$::tile(span,blocks)`) to validate the
   layout math before any grammar/UI work.
2. Check that frame move/show/hide/new/delete fill blocks in order, and
   verify a Backup/Restore round-trip (needs no backup code changes).
3. XPA grammar: `tile grid mode span`, `tile grid span ...`,
   `tile grid span size ...`, and the get side. Commit the regenerated
   parser `.tcl` files.
4. `TileDialog` "Manual Layout" radio + mini canvas editor (§7 A).
5. Docs: `doc/ref/command.html`, `doc/ref/xpa.html`, `doc/ref/samp.html`
   (all document `tile grid`).
6. (Later, optional) direct manipulation on the main canvas (§7 B).

## Decisions

Answers to the first draft's open questions (KJG = user's answer; the rest
are review recommendations adopted where KJG didn't decide):

- **Mode name**: label "Manual Layout" (KJG); internal/XPA value `span`
  (avoids clashing with the existing `layout` = grid-size meaning).
- **Spans as preferences**: per session only, not preferences (KJG).
- **Shrinking below an existing block**: reject the resize until blocks
  are fixed (KJG). Only active frames block a shrink.
- **`tile(grid,dir)` in span mode**: repurposed as the auto-assignment scan
  direction (KJG), and also the grow direction.
- **Lone frame**: stays confined to its block (KJG); needs both the
  `DisplayMode` arm and the `LayoutFramesOneOrMore` routing change.
- **No free cell**: grow the grid in the `tile(grid,dir)` direction (KJG):
  `x` adds a row, `y` adds a column. Growth happens at assignment time,
  not in the layout pass.
- **Invariant enforcement**: validate in the command path (KJG) — every
  write path, via one shared validator; layout does not validate.
- **Resizing the grid from XPA**: separate grid-size command (KJG):
  `tile grid span size C R`, backed by separate `tile(span,col/row)` keys
  so manual mode can't invalidate spans.
- **Frame reordering**: left as is (KJG): the move code is unchanged, and
  it reorders the display in every mode, Manual Layout included. That's
  what led to the blocks-filled-in-order model in §3 (KJG: "all the frame
  re-ordering, show/hide/etc actions ... should happen just as they have
  been and not be gated by the grid mode").
- **XPA get**: returns the block the current frame occupies (KJG); the set command
  likewise takes no frame argument and acts on the current frame.
- **Pinned vs flowing** (KJG): frames placed or resized by hand keep
  their location and size; all others flow around them (§3).
- **Inactive frames**: hold no cells while hidden; a pinned frame gets
  its block back when shown again.
- **Tab/Shift-Tab order**: unchanged (`ds9(active)` order).
