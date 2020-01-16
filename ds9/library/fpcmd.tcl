#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

# Table Commands

proc FPStatusRows {varname rowlist} {
    upvar #0 $varname var
    global $varname

    # rowlist start at 1
    if {[llength $rowlist]>0} {
	ARStatus $varname "[msgcat::mc {Row}] [join $rowlist {,}]"
    } else {
	ARStatus $varname {}
    }
}

proc FPSelectCmd {varname ss rc} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,fp)} {
	puts stderr "FPSelectCmd $varname $ss $rc"
    }

    FPSelectBrowseCmd $varname $ss $rc
}

proc FPSelectBrowseCmd {varname ss rc} {
    upvar #0 $varname var
    global $varname

    # starts at 1
    global debug
    if {$debug(tcl,fp)} {
	puts stderr "FPSelectBrowseCmd $varname ss=$ss rc=$rc"
    }

    global $var(tbldb)
    if {![TBLValidDB $var(tbldb)]} {
	return
    }

    if {[info commands $var(frame)] == {}} {
	return
    }

    if {![$var(frame) has fits]} {
	return
    }

    # are we still blinking?
    TBLSelectTimerCancel $varname footprint

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
	lappend ${varname}(blink,marker) $tag
	lappend ${varname}(blink,marker,color) \
	    [$var(frame) get marker footprint $tag color]
    }

    # status
    FPStatusRows $varname $rowlist

    # panto
    FPPanTo $varname [lindex $var(blink,marker) 0]

    # start timer, if needed
    if {!$var(blink)} {
	set var(blink) 1
	TBLSelectTimer $varname footprint
    }
}

proc FPSelectRows {varname src rowlist cc} {
    upvar #0 $varname var
    global $varname

    # only process from first graph
    if {$cc != 1} {
	return
    }

    # just in case?
    set rowlist [lsort -unique $rowlist]

    # rows start at 1
    global debug
    if {$debug(tcl,fp)} {
	puts stderr "FPSelectRows $varname $src $rowlist $cc"
    }

    if {![info exists ${varname}(top)]} {
	return
    }

    # are we still blinking?
    TBLSelectTimerCancel $varname footprint

    global $var(tbldb)
    if {![TBLValidDB $var(tbldb)]} {
	return
    }

    # rowlist can be empty
    if {$rowlist == {}} {
	if {[info exists ${varname}(tbl)]} {
	    $var(tbl) selection clear all
	}
	$var(frame) marker footprint $varname unhighlite
	return
    }

    if {[info exists ${varname}(tbl)]} {
	$var(tbl) selection clear all
	foreach rr $rowlist {
	    $var(tbl) selection set $rr,1
	}
	$var(tbl) see [lindex $rowlist 0],1
    }

    $var(frame) marker footprint $varname unhighlite

    # init timer vars
    set var(blink,count) 0
    set var(blink,marker) {}
    set var(blink,marker,color) {}

    foreach rr $rowlist {
	set tag "\{${varname}.${rr}\}"
	lappend ${varname}(blink,marker) $tag
	lappend ${varname}(blink,marker,color) \
	    [$var(frame) get marker footprint $tag color]
    }

    # status
    FPStatusRows $varname $rowlist

    # panto
    FPPanTo $varname [lindex $var(blink,marker) 0]

    # start timer, if needed
    if {!$var(blink)} {
	set var(blink) 1
	TBLSelectTimer $varname footprint
    }
}

proc FPPanTo {varname mk} {
    upvar #0 $varname var
    global $varname

    if {[info commands $var(frame)] == {}} {
	return
    }

    if {![$var(frame) has fits]} {
	return
    }

    # pan to first region
    if {$var(panto) && $mk != {}} {
	set tt [$var(frame) get marker footprint $mk tag]
	if {$tt!={}} {
	    set cc [$var(frame) get marker footprint $tt center \
			$var(psystem) $var(psky)]
	    PanToFrame $var(frame) [lindex $cc 0] [lindex $cc 1] \
		$var(psystem) $var(psky)
	}
    }
}

# Marker Callbacks
#   call backs can't call other procs
proc FPHighliteCB {tag id} {
    global debug
    if {$debug(tcl,fp)} {
	puts stderr "FPHighliteCB $tag $id"
    }

    set t [split $tag .]
    set varname [lindex $t 0]
    set row [lindex $t 1]

    upvar #0 $varname var
    global $varname

    if {![info exists ${varname}(top)]} {
	return
    }

    if {!$var(blink)} {
	if {[info exists ${varname}(tbl)]} {
	    $var(tbl) selection set $row,1
	    $var(tbl) see $row,1
	}
    }
}

proc FPUnhighliteCB {tag id} {
    global debug
    if {$debug(tcl,fp)} {
	puts stderr "FPUnhighliteCB $tag $id"
    }

    set t [split $tag .]
    set varname [lindex $t 0]
    set row [lindex $t 1]

    upvar #0 $varname var
    global $varname

    if {![info exists ${varname}(top)]} {
	return
    }

    if {!$var(blink)} {
	if {[info exists ${varname}(tbl)]} {
	    $var(tbl) selection clear $row,1
	}
    }
}

proc FPDeleteCB {tag id} {
    global debug
    if {$debug(tcl,fp)} {
	puts stderr "FPDeleteCB $tag $id"
    }
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

    # see if we are on a handle
    set h [$which get marker footprint handle $x $y]
    set id [lindex $h 0]
    set imarker(handle) [lindex $h 1]

    if {$imarker(handle)} {
	$which marker footprint $id edit begin $imarker(handle)
	set imarker(motion) beginEdit
	return
    }

    # else, see if we are on a segment of a polygon
    set h [$which get marker footprint polygon segment $x $y]
    set id [lindex $h 0]
    set segment [lindex $h 1]
    if {$segment} {
	$which marker footprint $id create polygon vertex $segment $x $y
	$which marker footprint $id edit begin $imarker(handle)
	set imarker(handle) [expr 4+$segment+1]
	set imarker(motion) beginEdit
	return
    }

    # else, see if we are on a marker
    set id [$which get marker footprint id $x $y]
    if {$id != 0} {
	# select
	if {[$which get marker footprint $id property select]} {
	    $which marker footprint select only $x $y
	    $which marker footprint move begin $x $y
	    set imarker(motion) beginMove
	    return
	}
	# highlite
	if {[$which get marker footprint $id property highlite]} {
	    $which marker footprint $id highlite only
	    $which marker footprint $id move back
	    set imarker(motion) none
	    return
	}
    }

    # see if any markers are selected
    if {[$which get marker footprint select number]>0} {
	$which marker footprint unselect all
	set imarker(motion) none
	return
    }

    # see if any markers are selected
    if {[$which get marker footprint highlite number]>0} {
	$which marker footprint unhighlite all
	set imarker(motion) none
	return
    }

    set imarker(motion) none
    set imarker(handle) -1
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

    # see if we are on a handle
    set h [$which get marker footprint handle $x $y]
    set id [lindex $h 0]
    set imarker(handle) [lindex $h 1]

    if {$imarker(handle)} {
	$which marker footprint $id rotate begin
	set imarker(motion) beginRotate
	return
    }

    # else, see if we are on a marker
    if {[$which marker footprint select toggle $x $y]} {
	$which marker footprint move begin $x $y
	set imarker(motion) beginMove
	return
    }

    if {[$which marker footprint highlite toggle $x $y]} {
	set imarker(motion) none
	return
    }

    # else, start a region select
    $which region footprint select begin $x $y
    # $which region footprint highlite begin $x $y
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

	beginMove -
	move {
	    $which marker footprint move motion $x $y
	    set imarker(motion) move
	}

	beginEdit -
	edit {
	    $which marker footprint edit motion $x $y $imarker(handle)
	    set imarker(motion) edit
	}

	beginRotate -
	rotate {
	    $which marker footprint rotate motion $x $y $imarker(handle)
	    set imarker(motion) rotate
	}

	region -
	shiftregion {
	    $which region footprint select motion $x $y
	    # $which region footprint highlite motion $x $y
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
	beginMove -
	beginRotate {}
	beginEdit {}
	move {$which marker footprint move end}
	edit {$which marker footprint edit end}
	rotate {$which marker footprint rotate end}
	region {
	    $which region footprint select end
	    $which region footprint catalog highlite end
	}
	shiftregion {
	    $which region footprint select shift end
	    $which region footprint highlite shift end
	}
    }

    set imarker(motion) none
    set imarker(handle) -1

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
		    FPStatusRows $varname $rowlist
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
	    FPStatusRows $varname $rowlist
	}
    }
}
