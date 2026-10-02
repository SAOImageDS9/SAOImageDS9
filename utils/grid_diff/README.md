# grid_diff — did a library change move any grid annotation?

Diagnostic, not a test. Nothing here has a checked-in baseline and nothing
is wired into `Tests/`; it exists to answer one question when a vendored
library is updated:

> Did any coordinate grid label, tick value or axis unit change?

## Why it exists

A coordinate grid's annotations — the axis labels, the tick values, the
units — come from AST: its `Unit`/`NormUnit` handling and its `SkyAxis`
formatting decide them. **No suite in `Tests/` has a baseline for any of
it.** `asdf.sh` checks coordinate *readout* at a handful of pixels, which
catches a WCS that moved but not a label that is formatted differently.

That gap became concrete when the vendored `ast` went from 9.4.1 to 9.5.0
(`b64c29f10`). That release reworked `unit.c`, `axis.c`, `frame.c`,
`skyframe.c` and `skyaxis.c` — "derive NormUnit from the Unit the Frame
reports", "do not normalise a Unit that describes the axis values" — and
nothing in the suite could have told us whether every grid in the
application had changed. This is how that was answered: 70 images, both
builds, all identical.

## Using it

Capture once per build, then compare:

```
sh grid_snap.sh /tmp/before      # on the old build
# ... rebuild against the new library ...
sh grid_snap.sh /tmp/after       # on the new build
python3 compare.py /tmp/before /tmp/after
```

`compare.py` exits 0 when every image matches, 1 otherwise. It needs
Pillow and numpy; the `ds9asdf` conda environment has both.

`grid_snap.sh` needs `ds9`, `xpaset`/`xpaget`/`xpaaccess` on `PATH`, and
`xpans` on `PATH` *before* ds9 starts. On macOS `ds9` must be a wrapper
script that `exec`s the binary inside the `.app` — a symlink does not work.
See `AGENTS.md`.

## What it covers

32 files from the 1904-66 set (one per FITS projection code, same field) ×
two sky formats, plus a `WAVE-TAB` spectral cube, a galactic-frame image
and a plain one: 70 images. Both sky formats are captured deliberately —
they take different formatting paths, and sexagesimal is the one `SkyAxis`
actually decides.

## The one real caveat

**Only compare two runs on the same machine.** The annotations are
rendered text, so a different font stack moves pixels in every image and
the comparison drowns in false positives. That is also why there are no
reference images checked in here: they would be worthless on anyone else's
machine.

## Reading the output

`compare.py` reports a differing-pixel count *and* a bounding box, because
where a difference falls is what tells one kind from another:

- confined to the margins → the axis annotation changed
- spread over the image → the grid lines, or the data, changed

## Checking the harness can fail

A clean "0 differing" is also what a broken harness reports, so confirm it
can detect something before believing it. The cheapest check needs no
rebuild: the two sky formats of the same file must differ.

```
python3 compare.py /tmp/before /tmp/before   # 0 differing, exit 0
```
```
mkdir /tmp/a /tmp/b
cp /tmp/before/1904-66_TAN.degrees.png     /tmp/a/x.png
cp /tmp/before/1904-66_TAN.sexagesimal.png /tmp/b/x.png
python3 compare.py /tmp/a /tmp/b            # ~63000 pixels, exit 1
```

Worth one more control when the point is comparing two builds: prove the
two builds really differ in something observable, or an identical result
may just mean the rebuild did not take.
