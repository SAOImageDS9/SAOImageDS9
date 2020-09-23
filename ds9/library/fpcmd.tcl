#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

# Table Commands

proc FPSelectCmd {varname ss rc} {
    upvar #0 $varname var
    global $varname

    # starts at 1
    global debug
    if {$debug(tcl,fp)} {
	puts stderr "FPSelectCmd $varname ss=$ss rc=$rc"
    }

    global $var(catdb)
    if {![TBLValidDB $var(catdb)]} {
	return
    }

    if {[info commands $var(frame)] == {}} {
	return
    }

    if {![$var(frame) has fits]} {
	return
    }

    # clear all highlited
    $var(frame) marker footprint $varname color green
    $var(frame) marker footprint $varname unhighlite

    global $var(catdb)
    if {![TBLValidDB $var(catdb)]} {
	return
    }

    # now see the current selection
    set last [lindex [split $ss ,] 0]
    set row [lindex [split $rc ,] 0]

    # needed for status
    # starts at 0
    set rowlist {}
    foreach sel [$var(tbl) curselection] {
	set rr [lindex [split $sel ,] 0]
	lappend rowlist $rr
    }
    set rowlist [lsort -unique $rowlist]

    # kludge
    # tktable can return bogus numbers if arrow keys are used
    # try to fix
    if {$row == 0} {
	set row 1
    }
    if {[llength $rowlist] <= 1} {
	set rowlist $row
    }

    foreach rr $rowlist {
	set tag "\{${varname}.${rr}\}"
	$var(frame) marker footprint $tag highlite
	$var(frame) marker footprint $tag color red
	$var(frame) marker footprint $tag move back
	TBLPanTo $varname $tag footprint
    }

    # status
    TBLStatusRows $varname $rowlist
}

# Tcl Commands

proc FPButton {which x y} {
    global imarker

    global debug
    if {$debug(tcl,fp)} {
	puts stderr "FPButton $which $x $y"
    }

    # if nothing is loaded, abort
    if {![$which has fits]} {
	return
    }

    set imarker(motion) none

    # else, see if we are on a marker, then highlite
    set id [$which get marker footprint id $x $y]
    if {$id != 0} {
	if {[$which get marker footprint $id property highlite]} {
	    $which marker footprint $id highlite only
	    $which marker footprint $id move back
	    return
	}
    }

    # nope, unhighlite all
    if {[$which get marker footprint highlite number]>0} {
	$which marker footprint unhighlite all
	return
    }
}

proc FPShift {which x y} {
    global imarker

    global debug
    if {$debug(tcl,fp)} {
	puts stderr "FPShift $which $x $y"
    }

    # if nothing is loaded, abort
    if {![$which has fits]} {
	return
    }

    if {[$which marker footprint highlite toggle $x $y]} {
	set imarker(motion) none
	return
    }

    # else, start a region select
    $which region footprint highlite begin $x $y
    set imarker(motion) shiftregion
}

proc FPMotion {which x y} {
    global imarker

    global debug
    if {$debug(tcl,fp)} {
	puts stderr "FPMotion $which $x $y"
    }

    # if nothing is loaded, abort
    if {![$which has fits]} {
	return
    }

    switch -- $imarker(motion) {
	none {}
	shiftregion {
	    $which region footprint highlite motion $x $y
	}
    }
}

proc FPRelease {which x y} {
    global imarker

    global debug
    if {$debug(tcl,fp)} {
	puts stderr "FPRelease $which $x $y"
    }

    # if nothing is loaded, abort
    if {![$which has fits]} {
	return
    }

    switch -- $imarker(motion) {
	none {}
	shiftregion {
	    $which region footprint highlite shift end
	}
    }

    set imarker(motion) none

    # stats
    set rr {}
    foreach mm [$which get marker footprint highlite] {
	lappend rr [string trim [lindex [$which get marker footprint $mm tag] 1]]
    }

    if {$rr != {}} {
	set rr [lsort $rr]
	set varname {}
	set rowlist {}
	foreach ss $rr {
	    set tt [split $ss {.}]
	    set varr [lindex $tt 0]
	    set row [lindex $tt 1]
	    if {$varname != $varr} {
		# dump what we have
		if {$varname != {}} {
		    upvar #0 $varname var
		    global $varname

		    # status
		    TBLStatusRows $varname $rowlist
		}

		# now a new list
		set varname $varr
		set rowlist {}
	    } 
	    lappend rowlist $row
	}

	if {$varname != {}} {
	    upvar #0 $varname var
	    global $varname

	    # status
	    TBLStatusRows $varname $rowlist
	}
    } else {
	global ifp
	foreach varname $ifp(fps) {
	    TBLStatusRows $varname {}
	}
    }
}


# Marker Callbacks
#   call backs can't call other procs
proc FPHighliteCB {tag id} {
    set t [split $tag .]
    set varname [lindex $t 0]
    set row [lindex $t 1]

    upvar #0 $varname var
    global $varname

    if {![info exists ${varname}(top)]} {
	return
    }

    $var(frame) marker footprint $tag color red
    
    if {!$var(blink)} {
	if {[info exists ${varname}(tbl)]} {
	    $var(tbl) selection set $row,1
	    $var(tbl) see $row,1
	}
    }
}

proc FPUnhighliteCB {tag id} {
    set t [split $tag .]
    set varname [lindex $t 0]
    set row [lindex $t 1]

    upvar #0 $varname var
    global $varname

    if {![info exists ${varname}(top)]} {
	return
    }

    $var(frame) marker footprint $tag color green

    if {!$var(blink)} {
	if {[info exists ${varname}(tbl)]} {
	    $var(tbl) selection clear $row,1
	}
    }
}

