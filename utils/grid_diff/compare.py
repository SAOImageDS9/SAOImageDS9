#!/usr/bin/env python3
"""Compare two directories of grid snapshots, pixel for pixel.

Diagnostic companion to grid_snap.sh; see the README. Only meaningful
between two runs on the same machine, because the thing being compared is
rendered text.

    python3 compare.py <before_dir> <after_dir>

Exit status is 0 when every image matches, 1 when any differs or the two
directories do not hold the same set of images.

Reports the differing-pixel count and the bounding box of the difference,
because where a change falls is what tells one kind from another: a
difference confined to the margins is the axis annotation, one spread over
the image is the grid lines or the data itself.

Needs Pillow and numpy.
"""

import os
import sys

import numpy as np
from PIL import Image


def load(path):
    with Image.open(path) as im:
        return np.asarray(im.convert("RGB"), dtype=np.int16)


def main(argv):
    if len(argv) != 3:
        print(__doc__.strip(), file=sys.stderr)
        return 2
    a_dir, b_dir = argv[1], argv[2]

    a_set = {n for n in os.listdir(a_dir) if n.endswith(".png")}
    b_set = {n for n in os.listdir(b_dir) if n.endswith(".png")}

    missing = False
    for n in sorted(a_set - b_set):
        print("ONLY IN %s: %s" % (a_dir, n))
        missing = True
    for n in sorted(b_set - a_set):
        print("ONLY IN %s: %s" % (b_dir, n))
        missing = True

    rows = []
    same = 0
    for n in sorted(a_set & b_set):
        aa = load(os.path.join(a_dir, n))
        bb = load(os.path.join(b_dir, n))
        if aa.shape != bb.shape:
            rows.append((n, -1, aa.shape, bb.shape, None))
            continue
        d = np.any(aa != bb, axis=2)
        npx = int(d.sum())
        if npx == 0:
            same += 1
            continue
        ys, xs = np.nonzero(d)
        bbox = (int(xs.min()), int(ys.min()), int(xs.max()) + 1, int(ys.max()) + 1)
        rows.append((n, npx, aa.shape, bb.shape, bbox))

    total = len(a_set & b_set)
    print("\n%d identical, %d differing, of %d compared" % (same, len(rows), total))

    if rows:
        print("\n%-44s %9s  %s" % ("image", "pixels", "bbox (l,t,r,b)"))
        print("-" * 84)
        for n, npx, sa, sb, bbox in sorted(rows, key=lambda r: -(r[1] or 0)):
            if npx == -1:
                print("%-44s   SIZE %s vs %s" % (n, sa, sb))
            else:
                print("%-44s %9d  %s" % (n, npx, bbox))

    return 1 if (rows or missing) else 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
