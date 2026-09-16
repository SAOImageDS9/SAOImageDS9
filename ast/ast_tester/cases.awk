# Normalize a pipe-delimited fixture manifest into whitespace-delimited
# records, one line per case, for the legacy harness scripts to iterate over:
#
#    foreach rec ( "`awk -f cases.awk fixtures/wcsconv/cases.txt`" )
#       set f = ( $rec )
#
# Comment and blank lines are dropped and surrounding space is stripped from
# every field.  An empty field becomes "-" so that csh word splitting keeps
# the columns lined up; the callers translate "-" back to an empty string.
#
# This suits any manifest whose fields are single words, which is every one
# except fixtures/plot/cases.txt -- its box column is a list of numbers, so
# plot cases are read with plotcase.awk instead.

function trim( s ) {
    gsub( /^[ \t]+|[ \t]+$/, "", s )
    return s
}

BEGIN { FS = "|" }

/^[ \t]*#/ { next }
NF < 2 { next }

{
    for( i = 1; i <= NF; i++ ) {
        f = trim( $i )
        printf "%s%s", ( f == "" ? "-" : f ), ( i < NF ? " " : "\n" )
    }
}
