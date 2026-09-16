#!/bin/sh
# Re-run gen_keymap_mapsz and require its output to match the committed
# fixture byte for byte.
#
# fixtures/oracle/keymap_mapsz.txt records the MapSz card a freshly built KeyMap
# carries for a range of key populations.  MapSz is the size of the hash table
# and the only observable of the table's growth policy, because HashFun and
# DoubleTableSize are both static in keymap.c.  The fixture exists so a port can
# be held to that policy from outside; this test is what keeps the fixture
# honest, by checking it still describes this library.
#
# A byte comparison is right here: every value is an integer produced by integer
# arithmetic over ASCII keys, with no floating point anywhere, so unlike the
# transform oracles there is no platform variation to tolerate.  A difference is
# a change in the growth policy, in HashFun, or in the dump.
srcdir=${srcdir:-.}
ref=${srcdir}/fixtures/oracle/keymap_mapsz.txt
out=keymap_mapsz.out

# Not distributed outside a git checkout: this holds the library to a committed
# capture of KeyMap's growth policy, which a user's build cannot affect.  77 is
# the exit code automake reads as "skipped", as testhuge.sh uses.
if [ ! -f "$ref" ]; then
    echo "keymap_mapsz: skipped (fixture not distributed)"
    exit 77
fi

./gen_keymap_mapsz > "$out" || exit 1

if diff -u "$ref" "$out"; then
    rm -f "$out"
    exit 0
fi

cat >&2 <<'MSG'
fixtures/oracle/keymap_mapsz.txt no longer describes this library.  If KeyMap's
growth policy or hash function changed deliberately, install the new output and
regenerate any port that reads it; otherwise this is a defect in that change.
MSG
exit 1
