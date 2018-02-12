#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

# Table Commands

proc CATSelectCmd {varname ss rc} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,cat)} {
	puts stderr "CATSelectCmd $varname $ss $rc"
    }

    if {$var(edit)} {
	CATSelectEditCmd $varname $ss $rc
    } else {
	CATSelectBrowseCmd $varname $ss $rc
    }
}

proc CATSelectEditCmd {varname ss rc} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,cat)} {
	puts stderr "CATSelectEditCmd $varname $rc"
    }

    if {[info commands $var(frame)] == {}} {
	return
    }

    if {![$var(frame) has fits]} {
	return
    }

    $var(frame) marker catalog $varname unselect

    set last [lindex [split $ss ,] 0]
    set next [lindex [split $rc ,] 0]
    
    if {[string is integer -strict $last]} {
	CATGenerateUpdate $varname $last
    }
    
    if {[string is integer -strict $next]} {
	set mk "\{${varname}.${next}\}"
	CATPanTo $varname $mk
	$var(frame) marker catalog $mk select
    }
}

proc CATSelectBrowseCmd {varname ss rc} {
    upvar #0 $varname var
    global $varname

    # starts at 1
    global debug
    if {$debug(tcl,cat)} {
	puts stderr "CATSelectBrowseCmd $varname ss=$ss rc=$rc"
    }

    global $var(catdb)
    if {![CATValidDB $var(catdb)]} {
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

    # needed for plot, status, samp
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
    CATStatusRows $varname $rowlist

    # plot
    if {$var(plot)} {
	PlotHighliteElement $var(plot,var) $rowlist
    }

    # samp
    SAMPSendTableRowListCmd $varname $rowlist

    # panto
    CATPanTo $varname [lindex $var(blink,marker) 0]

    # start timer, if needed
    if {!$var(blink)} {
	set var(blink) 1
	CATSelectTimer $varname
    }
}

proc CATSelectRows {varname src rowlist} {
    upvar #0 $varname var
    global $varname

    # just in case?
    set rowlist [lsort -unique $rowlist]

    # rows start at 1
    global debug
    if {$debug(tcl,cat)} {
	puts stderr "CATSelectRows $varname $src $rowlist"
    }

    if {![info exists ${varname}(top)]} {
	return
    }

    global $var(catdb)
    if {![CATValidDB $var(catdb)]} {
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
    CATStatusRows $varname $rowlist

    # source of call
    switch $src {
	samp {
	    if {$var(plot)} {
		PlotHighliteElement $var(plot,var) $rowlist
	    }
	}
	plot {
	    SAMPSendTableRowListCmd $varname $rowlist
	}
    }

    # panto
    CATPanTo $varname [lindex $var(blink,marker) 0]

    # start timer, if needed
    if {!$var(blink)} {
	set var(blink) 1
	CATSelectTimer $varname
    }
}

proc CATPanTo {varname mk} {
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

proc CATSelectTimer {varname} {
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

	    after 250 [list CATSelectTimer $varname]
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

	    after 250 [list CATSelectTimer $varname]
	}
    }
}

# Marker Callbacks
#   call backs can't call other procs
proc CATHighliteCB {tag id} {
    global debug
    if {$debug(tcl,cat)} {
	puts stderr "CATHighliteCB $tag $id"
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

proc CATUnhighliteCB {tag id} {
    global debug
    if {$debug(tcl,cat)} {
	puts stderr "CATUnhighliteCB $tag $id"
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

proc CATEditCB {tag id} {
    global debug
    if {$debug(tcl,cat)} {
	puts stderr "CATEditCB $tag $id"
    }

    if {[info commands $var(frame)] == {}} {
	return
    }

    if {![$var(frame) has fits]} {
	return
    }

    set t [split $tag .]
    set varname [lindex $t 0]
    set row [lindex $t 1]
    set szcol [lindex $t 2]
    set sz2col [lindex $t 3]
    set units [lindex $t 4]
    set angcol [lindex $t 5]

    upvar #0 $varname var
    global $varname
    global $var(tbldb)

    if {![info exists ${varname}(top)]} {
	return
    }

    if {[info commands $var(frame)] == {}} {
	return
    }

    if {![$var(frame) has fits]} {
	return
    }

    # shape
    set shape [$var(frame) get marker catalog $id type]

    # skyformat
    switch -- $units {
	degrees -
	arcmin -
	arcsec {
	    set skyformat $units
	}
	default {
	    set skyformat degrees
	}
    }

    # get center and format
    switch $shape {
	circle {
	    if {$szcol>0} {
		set rr [$var(frame) get marker catalog $id $shape radius \
			    $var(psystem) $skyformat]
		starbase_set $var(tbldb) $row $szcol $rr
	    }
	}
	ellipse -
	box {
	    if {$szcol>0 && $sz2col>0} {
		set rr [$var(frame) get marker catalog $id $shape radius \
			    $var(psystem) $skyformat]
		starbase_set $var(tbldb) $row $szcol [lindex $rr 0]
		starbase_set $var(tbldb) $row $sz2col [lindex $rr 1]
	    }
	}
	vector {
	    if {$szcol>0} {
		set ll [$var(frame) get marker catalog $id $shape length \
			    $var(psystem) $skyformat]
		starbase_set $var(tbldb) $row $szcol $ll
	    }
	    
	    if {$angcol>0} {
		set ang [$var(frame) get marker catalog $id angle \
			     $var(psystem) $p(sky)]
		starbase_set $var(tbldb) $row $angcol $ang
	    }
	}
	default {}
    }
}

proc CATMoveCB {tag id} {
    global debug
    if {$debug(tcl,cat)} {
	puts stderr "CATMoveCB $tag $id"
    }

    if {[info commands $var(frame)] == {}} {
	return
    }

    if {![$var(frame) has fits]} {
	return
    }

    set t [split $tag .]
    set varname [lindex $t 0]
    set row [lindex $t 1]

    upvar #0 $varname var
    global $varname
    global $var(tbldb)

    if {![info exists ${varname}(top)]} {
	return
    }

    # center
    set coord [$var(frame) get marker catalog $id center \
		   $var(psystem) $var(sky) degrees]

    starbase_set $var(tbldb) $row [starbase_colnum $var(tbldb) $var(colx)] \
	[lindex $coord 0]
    starbase_set $var(tbldb) $row [starbase_colnum $var(tbldb) $var(coly)] \
	[lindex $coord 1]
}    

proc CATRotateCB {tag id} {
    global debug
    if {$debug(tcl,cat)} {
	puts stderr "CATRotateCB $tag $id"
    }

    global debug
    if {$debug(tcl,cat)} {
	puts stderr "CATMoveCB $tag $id"
    }

    if {[info commands $var(frame)] == {}} {
	return
    }

    if {![$var(frame) has fits]} {
	return
    }

    set t [split $tag .]
    set varname [lindex $t 0]
    set row [lindex $t 1]
    set angcol [lindex $t 2]

    upvar #0 $varname var
    global $varname
    global $var(tbldb)

    if {[info commands $var(frame)] == {}} {
	return
    }

    if {![info exists ${varname}(top)]} {
	return
    }

    # shape
    set shape [$var(frame) get marker catalog $id type]

    # get center and format
    switch $shape {
	ellipse -
	box {
	    if {$angcol>0} {
		set ang [$var(frame) get marker catalog $id angle \
			     $var(psystem) $var(sky)]
		starbase_set $var(tbldb) $row $angcol $ang
	    }
	}
	default {}
    }
}

proc CATDeleteCB {tag id} {
    global debug
    if {$debug(tcl,cat)} {
	puts stderr "CATDeleteCB $tag $id"
    }
}

# Tcl Commands

proc CATButton {which x y} {
    global imarker

    global debug
    if {$debug(tcl,cat)} {
	puts stderr "CATButton $which $x $y"
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

proc CATShift {which x y} {
    global imarker

    global debug
    if {$debug(tcl,cat)} {
	puts stderr "CATShift $which $x $y"
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

proc CATMotion {which x y} {
    global imarker

    global debug
    if {$debug(tcl,cat)} {
	puts stderr "CATMotion $which $x $y"
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

proc CATRelease {which x y} {
    global imarker
    global samp

    global debug
    if {$debug(tcl,cat)} {
	puts stderr "CATRelease $which $x $y"
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

    # plot, stats, samp
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
		    CATStatusRows $varname $rowlist
		    # plot
		    if {$var(plot)} {
			PlotHighliteElement $var(plot,var) $rowlist
		    }
		    # samp
		    if {[info exists samp]} {
			if {$samp(apps,votable) != {}} {
			    SAMPSendTableRowListCmd $varname $rowlist
			}
		    }
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
	    CATStatusRows $varname $rowlist
	    #plot
	    if {$var(plot)} {
		PlotHighliteElement $var(plot,var) $rowlist
	    }
	    # samp
	    if {[info exists samp]} {
		if {$samp(apps,votable) != {}} {
		    SAMPSendTableRowListCmd $varname $rowlist
		}
	    }
	}
    }
}
