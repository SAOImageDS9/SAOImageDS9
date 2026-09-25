#!/bin/sh
# Wrapper for testhuge: skip unless TEST_HUGE=1 is passed to make.
# testhuge takes a long time to run and significant memory resources;
# it is omitted from the default test run.
# Enable with: make check TEST_HUGE=1
#
# Optional argument: "c" or "fortran" to run only that variant.
# With no argument, both variants are run (Fortran only if ./testhuge_f exists).
if test "x${TEST_HUGE}" != "x1"; then
    echo "testhuge: skipped (re-run with TEST_HUGE=1 to enable)"
    exit 77
fi

variant="${1:-both}"

run_c() {
    echo "testhuge: running C variant"
    ./testhuge_c
}

run_fortran() {
    if test -x ./testhuge_f; then
        echo "testhuge: running Fortran variant"
        ./testhuge_f
    else
        echo "testhuge: Fortran variant not built, skipping"
    fi
}

case "$variant" in
    c)       run_c ;;
    fortran) run_fortran ;;
    both)    run_c && run_fortran ;;
    *)
        echo "testhuge.sh: unknown variant '$variant' (use 'c', 'fortran', or omit for both)" >&2
        exit 1
        ;;
esac
