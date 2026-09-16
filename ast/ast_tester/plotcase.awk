# Look up one case in fixtures/plot/cases.txt and emit tcsh assignments for
# it, so that the legacy harness scripts read the manifest once per case
# instead of once per field.  Invoke as
#
#    eval `awk -f plotcase.awk -v name=<case> fixtures/plot/cases.txt`
#
# and the following are set:
#
#    head   the header to plot, as a path relative to this directory
#    attr1  Plot attributes, or a single space if the case sets none
#    attr2  FitsChan attributes, or a single space if the case sets none
#    box    the plotting box, as a (possibly empty) word list
#
# head is set empty when the case is not listed, which is how the callers
# distinguish a registered case from an ad-hoc header name.  The head column
# is relative to the fixture root, so the "fixtures/" prefix is added here.

function trim( s ) {
    gsub( /^[ \t]+|[ \t]+$/, "", s )
    return s
}

# plotter.f takes attributes as a positional argument, so an unset column has
# to be passed as a space rather than as an empty string.
function orblank( s ) {
    return s == "" ? " " : s
}

BEGIN { FS = "|"; found = 0 }

/^[ \t]*#/ { next }
NF < 5 { next }

trim( $1 ) == name {
    printf "set head = 'fixtures/%s';", trim( $2 )
    printf "set attr1 = '%s';", orblank( trim( $3 ) )
    printf "set attr2 = '%s';", orblank( trim( $4 ) )
    printf "set box = ( %s );\n", trim( $5 )
    found = 1
    exit
}

END { if( !found ) print "set head = '';" }
