#  Copyright (C) 1999-2022
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc IllustrateMoveFront {} {
    global ds9
    global illustrate
    global iillustrate

    set ll [$ds9(canvas) find withtag {graphic}]
    set top [lindex $ll end]

    # graphic
    foreach gr $iillustrate(selection) {
	foreach {id x1 y1 x2 y2 color fill dash} $gr {
	    if {$id != $top} {
		$ds9(canvas) raise $id $top
	    }
	}
    }
    
    # now sort out the handles
    foreach id [$ds9(canvas) find withtag {graphic}] {
	foreach hh [$ds9(canvas) find withtag gr${id}] {
	    $ds9(canvas) raise $hh $id
	}
    }
}

proc IllustrateMoveBack {} {
    global ds9
    global illustrate
    global iillustrate

    set ll [$ds9(canvas) find withtag {graphic}]
    set bottom [lindex $ll 0]

    # graphic
    foreach gr $iillustrate(selection) {
	foreach {id x1 y1 x2 y2 color fill dash} $gr {
	    if {$id != $bottom} {
		$ds9(canvas) lower $id $bottom
	    }
	}
    }
    
    # now sort out the handles
    foreach id [$ds9(canvas) find withtag {graphic}] {
	foreach hh [$ds9(canvas) find withtag gr${id}] {
	    $ds9(canvas) raise $hh $id
	}
    }
}

proc IllustrateDeleteSelect {} {
    global ds9
    global illustrate
    global iillustrate

    foreach gr $iillustrate(selection) {
	foreach {id x1 y1 x2 y2 color fill dash} $gr {
	    # handles
	    foreach hh [$ds9(canvas) find withtag gr${id}] {
		$ds9(canvas) delete $hh
	    }

	    # graphic
	    $ds9(canvas) delete $id
	}
    }

    set iillustrate(selection) {}
}

proc IllustrateDeleteAll {} {
    global ds9
    global illustrate
    global iillustrate

    # graphic
    foreach id [$ds9(canvas) find withtag {graphic}] {
	$ds9(canvas) delete $id
    }

    # handles
    foreach id [$ds9(canvas) find withtag {handle}] {
	$ds9(canvas) delete $id
    }

    set iillustrate(selection) {}
}

proc IllustrateSelectAll {} {
    global ds9
    global illustrate
    global iillustrate
    
    foreach id [$ds9(canvas) find withtag {graphic}] {
	IllustrateAddSelect $id
    }
}

proc IllustrateSelectNone {} {
    global ds9
    global illustrate
    global iillustrate
    
    foreach id [$ds9(canvas) find withtag {handle}] {
	$ds9(canvas) itemconfigure $id -state hidden
    }
    set iillustrate(selection) {}
}

proc IllustrateInvertSelect {} {
    global ds9
    global illustrate
    global iillustrate

    set ll [$ds9(canvas) find withtag {graphic}]
    foreach id $ll {
	if {[IllustrateIsSelected $id]} {
	    IllustrateUnselect $id
	} else {
	    IllustrateAddSelect $id
	}
    }
}
