#!/bin/sh
#
# Snapshot DS9's grid annotations for a fixed set of WCS files.
#
# Diagnostic, not a test: nothing here has a baseline and it is deliberately
# not wired into Tests/. Run it twice, against two builds, and compare the
# two directories with compare.py.
#
# What it is for: the axis labels and tick values a coordinate grid draws
# are decided by AST's Unit/NormUnit handling and its SkyAxis formatting.
# No suite in Tests/ has a baseline for any of that, so a vendored AST
# update can change every grid label in the application and nothing would
# notice. This makes that visible.
#
# It is only meaningful between two runs on the SAME machine. The
# annotations are rendered text, so a different font stack moves pixels in
# every image and the comparison drowns in false positives. That is also
# why this is a local diagnostic rather than something with checked-in
# reference images.
#
#   sh grid_snap.sh <outdir>
#
# Needs `ds9' and `xpaset'/`xpaget'/`xpaaccess' on PATH, and xpans before
# ds9 starts. On macOS `ds9' must be a wrapper script that execs the real
# binary inside the .app, not a symlink - see AGENTS.md.

out=$1
if [ -z "$out" ]; then
    echo "usage: $0 <outdir>" >&2
    exit 1
fi
mkdir -p "$out" || exit 1

here=`dirname "$0"`
TESTS=${TESTS:-`cd "$here/../../Tests" 2>/dev/null && pwd`}
if [ ! -d "$TESTS/wcs" ]; then
    echo "$0: cannot find Tests/wcs (set TESTS=...)" >&2
    exit 1
fi

TITLE=GridDiag

# A crashed ds9 leaves these and the next instance opens a modal restore
# dialog that nothing in a script can dismiss - see AGENTS.md.
rm -rf "$HOME/$TITLE.auto" "$HOME/$TITLE.auto.dir"

if [ "`xpaaccess $TITLE`" = no ]; then
    ds9 -title $TITLE -geometry 800x800 &
    i=1
    while [ "$i" -le 15 ]; do
        sleep 2
        if [ "`xpaaccess $TITLE`" = yes ]; then break; fi
        i=`expr $i + 1`
    done
fi
sleep 1

if [ "`xpaaccess $TITLE`" != yes ]; then
    echo "$0: ds9 did not register with xpa" >&2
    exit 1
fi

# Errors must not raise a modal dialog, or the run stalls with xpaaccess
# still answering yes.
echo 'set pds9(confirm) 0' | xpaset $TITLE tcl

xpaset -p $TITLE grid on
xpaset -p $TITLE grid system wcs
xpaset -p $TITLE scale zscale

n=0
snap () {   # snap <file> <tag>
    xpaset -p $TITLE frame new
    xpaset -p $TITLE fits "$1" 2>/dev/null
    xpaset -p $TITLE zoom to fit
    # Both formats: they go through different AST formatting paths, and
    # sexagesimal is the one SkyAxis actually decides.
    for fmt in degrees sexagesimal; do
        xpaset -p $TITLE wcs skyformat $fmt
        sleep 1
        xpaset -p $TITLE saveimage png "$out/$2.$fmt.png"
        n=`expr $n + 1`
    done
    xpaset -p $TITLE frame delete
}

# The 1904-66 set: one image per FITS projection code, same field.
for f in "$TESTS"/wcs/*.fits; do
    [ -f "$f" ] || continue
    b=`basename "$f" .fits`
    echo " $b"
    snap "$f" "$b"
done

# Non-sky and alternate-frame cases, which is where Unit/NormUnit bites:
# a spectral (WAVE-TAB) cube, a galactic-frame image, and a plain one.
for f in "$TESTS"/wcs2/ngc4579_test_LL1_cube.fits \
         "$TESTS"/wcs2/South_galactic.fits \
         "$TESTS"/wcs2/ast.fits; do
    [ -f "$f" ] || continue
    b=`basename "$f" .fits`
    echo " $b"
    snap "$f" "$b"
done

xpaset -p $TITLE quit
rm -rf "$HOME/$TITLE.auto" "$HOME/$TITLE.auto.dir"
echo "wrote $n images to $out"
