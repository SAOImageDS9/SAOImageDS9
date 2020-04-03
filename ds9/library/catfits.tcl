#  Copyright (C) 1999-2020
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc FITSRead {t fn} {
    upvar #0 $t T
    global $t

    global debug
    if {$debug(tcl,cat)} {
	puts stderr "FITSRead"
    }

    if {$fn == {}} {
	return
    }

    # init db
    set T(Nrows) 0
    set T(Ncols) 0
    set T(Header) {}
    set T(HLines) 0

    fitsy table $fn foo

#    set T(Dashes) [regsub -all {[A-Za-z0-9]} $T(H_$n) {-}]
#    set T(Ndshs) [llength $T(Header)]

#    incr ${t}(HLines)
#    set n $T(HLines)
#    set T(H_$n) [join $T(Dashes)]
#    starbase_colmap $t

}
