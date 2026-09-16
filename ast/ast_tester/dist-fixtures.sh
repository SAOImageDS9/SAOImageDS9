#!/bin/sh
# Print the fixture paths a manifest selects, relative to the ast_tester
# directory, one per line.
#
# A line ending in "/" includes everything beneath that directory; any other
# line is a glob matched against the path relative to fixtures/, in which "*"
# does not cross a "/".  Comments and blank lines are ignored.
#
# Every entry must match at least one file: a pattern that has stopped matching
# means the manifest no longer describes the tree, and shipping silently fewer
# fixtures than intended is the failure this exists to prevent.
set -e
manifest=${1:?usage: dist-fixtures.sh <manifest>}

pats=`sed -e 's/#.*//' -e 's/[[:space:]]*$//' "$manifest" | grep . || true`
# An explicit template: BSD mktemp, which is what macOS ships, requires one.
out=`mktemp "${TMPDIR:-/tmp}/ast_distfx.XXXXXX"`
trap 'rm -f "$out"' EXIT

# A for-loop, not a "| while read" pipeline: the loop body must be able to fail
# the whole script, and a pipeline runs it in a subshell where exit cannot.
for pat in $pats; do
    case $pat in
        */) found=`find "fixtures/$pat" -type f ! -name '.*' 2>/dev/null || true` ;;
        *)  found=`for f in fixtures/$pat; do test -f "$f" && echo "$f"; done || true` ;;
    esac
    if test -z "$found"; then
        echo "dist-fixtures.sh: $manifest: pattern matches nothing: $pat" >&2
        exit 1
    fi
    printf '%s\n' "$found" >> "$out"
done
sort -u "$out"
