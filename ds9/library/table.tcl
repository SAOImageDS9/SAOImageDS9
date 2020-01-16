#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc TBLValidDB {varname} {
    upvar #0 $varname var
    global $varname

    if {[info exists var(Nrows)] && 
	[info exists var(Ncols)] &&
	[info exists var(HLines)] &&
	[info exists var(Header)]} {
	return 1
    } else {
	return 0
    }
}

proc TBLSelectTimer {varname layer} {
    upvar #0 $varname var
    global $varname

    switch -- $var(blink) {
	0 {
	    set var(blink) 0
	    set var(blink,count) 0
	    set var(blink,marker) {}
	    set var(blink,marker,color) {}
	}
	1 {
	    for {set ii 0} {$ii<[llength $var(blink,marker)]} {incr ii} {
		set mm [lindex $var(blink,marker) $ii]
		set clr [lindex $var(blink,marker,color) $ii]

		if {[info commands $var(frame)] != {}} {
		    if {[$var(frame) has fits]} {
			if {$var(blink,count) < 4} {
			    switch $clr {
				red {$var(frame) marker $layer $mm color green}
				default {$var(frame) marker $layer $mm color red}
			    }
			}
			$var(frame) marker $layer $mm highlite
		    }
		}
	    }
	    
	    incr ${varname}(blink,count)
	    if {$var(blink,count) < 5} {
		set var(blink) 2
	    } else {
		set var(blink) 0
	    }

	    after 250 [list TBLSelectTimer $varname $layer]
	}
	2 {
	    for {set ii 0} {$ii<[llength $var(blink,marker)]} {incr ii} {
		set mm [lindex $var(blink,marker) $ii]
		set clr [lindex $var(blink,marker,color) $ii]

		if {[info commands $var(frame)] != {}} {
		    if {[$var(frame) has fits]} {
			$var(frame) marker $layer $mm color $clr
			$var(frame) marker $layer $mm unhighlite
		    }
		}
	    }
	    set var(blink) 1

	    after 250 [list TBLSelectTimer $varname $layer]
	}
    }
}

proc TBLSelectTimerCancel {varname layer} {
    upvar #0 $varname var
    global $varname
    
    if {$var(blink)} {
	# cancel all pending
	foreach aa [after info] {
	    set id [string range $aa 6 end]
	    after cancel $aa
	}

	for {set ii 0} {$ii<[llength $var(blink,marker)]} {incr ii} {
	    set mm [lindex $var(blink,marker) $ii]
	    set clr [lindex $var(blink,marker,color) $ii]

	    if {[info commands $var(frame)] != {}} {
		if {[$var(frame) has fits]} {
		    $var(frame) marker $layer $mm color $clr
		}
	    }
	}
    }

    $var(frame) marker $layer $varname unhighlite

    # init timer vars
    set var(blink) 0
    set var(blink,count) 0
    set var(blink,marker) {}
    set var(blink,marker,color) {}
}
