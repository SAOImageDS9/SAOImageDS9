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
    if {![CATValidDB $var(tbldb)]} {
	return
    }

    if {[info commands $var(frame)] == {}} {
	return
    }

    if {![$var(frame) has fits]} {
	return
    }

    $var(frame) marker catalog $varname unhighlite

    # init timer vars
    set var(blink,count) 0
    set var(blink,marker) {}
    set var(blink,marker,color) {}

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
	    [$var(frame) get marker catalog $tag color]
    }

    # status
    FPStatusRows $varname $rowlist

    # panto
    FPPanTo $varname [lindex $var(blink,marker) 0]

    # start timer, if needed
    if {!$var(blink)} {
	set var(blink) 1
	FPSelectTimer $varname
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

    global $var(tbldb)
    if {![CATValidDB $var(tbldb)]} {
	return
    }

    # rowlist can be empty
    if {$rowlist == {}} {
	if {[info exists ${varname}(tbl)]} {
	    $var(tbl) selection clear all
	}
	$var(frame) marker catalog $varname unhighlite
	return
    }

    if {[info exists ${varname}(tbl)]} {
	$var(tbl) selection clear all
	foreach rr $rowlist {
	    $var(tbl) selection set $rr,1
	}
	$var(tbl) see [lindex $rowlist 0],1
    }

    $var(frame) marker catalog $varname unhighlite

    # init timer vars
    set var(blink,count) 0
    set var(blink,marker) {}
    set var(blink,marker,color) {}

    foreach rr $rowlist {
	set tag "\{${varname}.${rr}\}"
	lappend ${varname}(blink,marker) $tag
	lappend ${varname}(blink,marker,color) \
	    [$var(frame) get marker catalog $tag color]
    }

    # status
    FPStatusRows $varname $rowlist

    # panto
    FPPanTo $varname [lindex $var(blink,marker) 0]

    # start timer, if needed
    if {!$var(blink)} {
	set var(blink) 1
	FPSelectTimer $varname
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
	set tt [$var(frame) get marker catalog $mk tag]
	if {$tt!={}} {
	    set cc [$var(frame) get marker catalog $tt center \
			$var(psystem) $var(psky)]
	    PanToFrame $var(frame) [lindex $cc 0] [lindex $cc 1] \
		$var(psystem) $var(psky)
	}
    }
}

proc FPSelectTimer {varname} {
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
				red {$var(frame) marker catalog $mm color green}
				default {$var(frame) marker catalog $mm color red}
			    }
			}
			$var(frame) marker catalog $mm highlite
		    }
		}
	    }
	    
	    incr ${varname}(blink,count)
	    if {$var(blink,count) < 5} {
		set var(blink) 2
	    } else {
		set var(blink) 0
	    }

	    after 250 [list FPSelectTimer $varname]
	}
	2 {
	    for {set ii 0} {$ii<[llength $var(blink,marker)]} {incr ii} {
		set mm [lindex $var(blink,marker) $ii]
		set clr [lindex $var(blink,marker,color) $ii]

		if {[info commands $var(frame)] != {}} {
		    if {[$var(frame) has fits]} {
			$var(frame) marker catalog $mm color $clr
			$var(frame) marker catalog $mm unhighlite
		    }
		}
	    }
	    set var(blink) 1

	    after 250 [list FPSelectTimer $varname]
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
    set h [$which get marker catalog handle $x $y]
    set id [lindex $h 0]
    set imarker(handle) [lindex $h 1]

    if {$imarker(handle)} {
	$which marker catalog $id edit begin $imarker(handle)
	set imarker(motion) beginEdit
	return
    }

    # else, see if we are on a segment of a polygon
    set h [$which get marker catalog polygon segment $x $y]
    set id [lindex $h 0]
    set segment [lindex $h 1]
    if {$segment} {
	$which marker catalog $id create polygon vertex $segment $x $y
	$which marker catalog $id edit begin $imarker(handle)
	set imarker(handle) [expr 4+$segment+1]
	set imarker(motion) beginEdit
	return
    }

    # else, see if we are on a marker
    set id [$which get marker catalog id $x $y]
    if {$id != 0} {
	# select
	if {[$which get marker catalog $id property select]} {
	    $which marker catalog select only $x $y
	    $which marker catalog move begin $x $y
	    set imarker(motion) beginMove
	    return
	}
	# highlite
	if {[$which get marker catalog $id property highlite]} {
	    $which marker catalog $id highlite only
	    $which marker catalog $id move back
	    set imarker(motion) none
	    return
	}
    }

    # see if any markers are selected
    if {[$which get marker catalog select number]>0} {
	$which marker catalog unselect all
	set imarker(motion) none
	return
    }

    # see if any markers are selected
    if {[$which get marker catalog highlite number]>0} {
	$which marker catalog unhighlite all
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
    set h [$which get marker catalog handle $x $y]
    set id [lindex $h 0]
    set imarker(handle) [lindex $h 1]

    if {$imarker(handle)} {
	$which marker catalog $id rotate begin
	set imarker(motion) beginRotate
	return
    }

    # else, see if we are on a marker
    if {[$which marker catalog select toggle $x $y]} {
	$which marker catalog move begin $x $y
	set imarker(motion) beginMove
	return
    }

    if {[$which marker catalog highlite toggle $x $y]} {
	set imarker(motion) none
	return
    }

    # else, start a region select
    $which region catalog select begin $x $y
    # $which region catalog highlite begin $x $y
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
	    $which marker catalog move motion $x $y
	    set imarker(motion) move
	}

	beginEdit -
	edit {
	    $which marker catalog edit motion $x $y $imarker(handle)
	    set imarker(motion) edit
	}

	beginRotate -
	rotate {
	    $which marker catalog rotate motion $x $y $imarker(handle)
	    set imarker(motion) rotate
	}

	region -
	shiftregion {
	    $which region catalog select motion $x $y
	    # $which region catalog highlite motion $x $y
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
	move {$which marker catalog move end}
	edit {$which marker catalog edit end}
	rotate {$which marker catalog rotate end}
	region {
	    $which region catalog select end
	    $which region catalog catalog highlite end
	}
	shiftregion {
	    $which region catalog select shift end
	    $which region catalog highlite shift end
	}
    }

    set imarker(motion) none
    set imarker(handle) -1

    # stats
    set rr {}
    foreach mm [$which get marker catalog highlite] {
	lappend rr [string trim [lindex [$which get marker catalog $mm tag] 1]]
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
