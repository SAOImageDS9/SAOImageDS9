#  Copyright (C) 1999-2020
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc FITSRead {t fn} {
    upvar #0 $t T
    global $t

    global ds9

    global debug
    if {$debug(tcl,cat)} {
	puts stderr "FITSRead $t"
    }

    if {$fn == {}} {
	return
    }

    set load mmapincr
    switch $ds9(wm) {
	x11 -
	aqua {
	    # compressed?
	    catch {
		set ch [open $fn r]
		fconfigure $ch -encoding binary -translation binary
		set bb [read $ch 2]
		close $ch
		binary scan $bb H4 cc
		if {$cc == {1f8b}} {
		    set load allocgz
		}
	    }
	}
	win32 {
	    set load allocgz
	}
    }

    fitsy open $fn $load -1
    fitsy table $t false 0 10000
    fitsy close

    set T(HLines) 2
    set T(H_1) $T(Header)
    set T(H_2) [regsub -all {[A-Za-z0-9]} $T(Header) {-}]
    starbase_colmap $t
}
