# Oracles

Captures of what this library does, for a port to be held to without reading the
C.  Four files: three transform oracles, described first, and
`keymap_mapsz.txt`, described at the end.

## Transform oracles

`simplify_fixtures.oracle`, `headers.oracle` and `framesets.oracle` record what
the library's transforms produce for every fixture the generator can drive, so a
port has something to be checked against that does not depend on reading the C.

Regenerate all three together, to temporary files first so the diff can be read
before it is installed:

    cmake --build build --target gen_transform_oracle
    build/ast_tester/gen_transform_oracle ast_tester/fixtures \
        /tmp/simplify.oracle /tmp/headers.oracle /tmp/framesets.oracle

Section headers name paths relative to `ast_tester/fixtures`, so a section
identifies its fixture unambiguously even where two directories hold a file of
the same name — `car1.head` through `car5.head` exist under both
`wcsconv/inputs/` and `programs/joye_car_headers/`.

### Fixtures with no section

A fixture absent from an oracle is silently untested, so every absence is
accounted for here.  An absence for any other reason is a bug.

The generator writes a section whenever a fixture's object has a forward *or* an
inverse transformation.  These nine have neither, so there is nothing to record:

    simplify/cap_matrixmap_04.map
    simplify/cap_specmap_02.map
    simplify/cap_specmap_02.simp
    simplify/neg_ratemap_different_inner.map
    simplify/neg_ratemap_diff_indices.map
    simplify/neg_ratemap_diff_inner.map
    simplify/ratemap_inverse_cancel.map
    simplify/selectormap_inverse_cancel.map
    simplify/selectormap_inverse_cancel_tail.map

Nothing else is skipped.  The generator used to skip any fixture containing an
IntraMap, because such a fixture names a private transformation function that has
to be registered before its dump can be read; it now makes the same four
registrations `simplify.c` does, so those ten fixtures are covered.

### Sampling domain

A fixture's inputs are sampled over the domain it was built for, which for a
FITS header is its NAXIS pixel grid.  A dump under `wcsconv/framesets/` is the
object read from one wcsconv input, and its name is that input's filename with
each `.` replaced by `-`, so the generator recovers the input and takes its grid.

That matters rather than being tidy.  A SIP distortion is a polynomial fitted
over the image and its inverse is iterative: sampled a few times beyond the
image the iteration need not converge, and a default 1..1000 range over a
256-pixel image produced round-trip errors above 100 pixels that said nothing
about the library.  The same mappings round-trip cleanly over their own grid.

### Checks that are disabled, and why

`transform_oracle_overrides.txt` carries them, each with its reason.  Two entries
name the same object twice, once as the header and once as the dump under
`wcsconv/framesets/`, because an override is keyed on the relpath: `tnx-cheb` has
no inverse at all, its TNX Chebyshev distortion building a ChebyMap that cannot
represent its own Jacobian.

### Values

The recorded values are this library's, on the host that generated them.  Ports
compare against them with a tolerance -- last-bit differences between platforms'
maths libraries are expected, and an angular axis may legitimately come out as 0
where another platform gives 2*pi, or -pi where another gives +pi.

## `keymap_mapsz.txt`

Eighteen rows of `<label> sizeguess=<n> nkey=<n> MapSz=<n>`: the `MapSz` card a
freshly built KeyMap carries for a range of key populations.

`MapSz` is the size of the hash table and the only observable of the table's
growth policy, because `HashFun` and `DoubleTableSize` are both `static` in
`keymap.c`.  A port cannot be checked against those directly, so the populations
here sit either side of each growth threshold instead, which pins the policy from
outside.  The colliding-key rows are the ones that actually drive
`DoubleTableSize` -- forty keys landing in one bucket give `MapSz=128` where
forty spread keys do not -- and `gen_keymap_mapsz.c` chooses them with a copy of
`keymap.c`'s djb2 arithmetic, used only to pick keys and never to check a result.

Regenerate with:

    cmake --build build --target gen_keymap_mapsz
    ./build/ast_tester/gen_keymap_mapsz > ast_tester/fixtures/oracle/keymap_mapsz.txt

Unlike the transform oracles this one is checked, by the `keymap_mapsz` ctest,
which re-runs the generator and requires byte-identical output.  A byte
comparison is right here and a tolerance is not: every value is an integer
produced by integer arithmetic over ASCII keys, with no floating point anywhere,
so there is no platform variation to absorb and a difference is a real change in
the growth policy, in `HashFun`, or in the dump.

The rows are consumed by the Rust port
(`crates/ast-core/tests/test_keymap_serial.rs`, `map_sz_matches_c_oracle`), which
rebuilds each population and compares its own `MapSz`.  Nothing in this suite
reads them -- the ctest regenerates rather than reads -- so the file is here
because the fixture tree is shared with that port and a capture of this library
has to be taken from this library.
