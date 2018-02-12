#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc CubeDef {} {
    global icube
    global cube

    set icube(top) .cube
    set icube(mb) .cubemb
    set icube(id) 0

    set cube(lock) none
    set cube(lock,axes) 0
# needs work, at high values, but cropped, causes problems
#    set cube(format) {%.5g}
# axes cnt starts at 0
    set cube(axis) 2
    set cube(system) wcs
    set cube(axes) 123
}

proc MatchCubeCurrent {sys} {
    global current

    if {$current(frame) != {}} {
	MatchCube $current(frame) $sys
    }
}

proc MatchCube {which sys} {
    global cube
    global ds9
    global rgb

    set naxes [$which get fits naxes]
    for {set ii 2} {$ii<$naxes} {incr ii} {
	set slice($ii) [$which get fits slice $ii $sys]
    }

    foreach ff $ds9(frames) {
	if {$ff != $which} {
	    for {set ii 2} {$ii<$naxes} {incr ii} {
		RGBEvalLock rgb(lock,slice) $ff "$ff update fits slice $ii $slice($ii) $sys"
	    }
	}
    }
}

proc LockCubeCurrent {} {
    global current
    
    if {$current(frame) != {}} {
	LockCube $current(frame)
    }
}

proc LockCube {which} {
    global cube

    switch -- $cube(lock) {
	none {}
	default {MatchCube $which $cube(lock)}
    }
}

proc CubeSlice {slice} {
    global dcube
    global cube

    global current
    global rgb

    RGBEvalLockCurrent rgb(lock,slice) "$current(frame) update fits slice $cube(axis) $slice"
    set dcube(image,$cube(axis)) $slice
    set dcube(wcs,$cube(axis)) [$current(frame) get coordinates $slice image $cube(system) $cube(axis)]

    UpdateCube
}

proc CubeStop {} {
    global icube

    if {$icube(id)>0} {
	after cancel $icube(id)
	set icube(id) 0
    }
}

proc CubePlay {} {
    global icube

    if {$icube(id) == 0} {
	CubeTimer
    }
}

proc CubeTimer {} {
    global icube
    global dcube
    global cube

    global current
    global blink
    global rgb

    if {$current(frame) != {}} {
	if {[$current(frame) has fits]} {
	    set slice [$current(frame) get fits slice $cube(axis)]
	    if {$cube(axis)==2} {
		# get cropped version
		set ss [$current(frame) get crop 3d image]
		set first [lindex $ss 0]
		set last [lindex $ss 1]
	    } else {
		set first 1
		set last [$current(frame) get fits depth $cube(axis)]
	    }

	    if {$slice == $last} {
		set slice $first
	    } else {
		set slice [expr $slice+1]
	    }

	    CubeSlice $slice
	} else {
	    set dcube(image,$cube(axis)) 1
	    set dcube(wcs,$cube(axis)) 1
	}
	UpdateCube
    }

    set icube(id) [after $blink(interval) CubeTimer]
}

proc CubeFirst {} {
    global dcube
    global cube

    global current
    global rgb

    CubeStop

    if {$current(frame) != {}} {
	if {[$current(frame) has fits]} {
	    if {$cube(axis)==2} {
		# get cropped version
		set ss [$current(frame) get crop 3d image]
		set first [lindex $ss 0]
	    } else {
		set first 1
	    }
	    CubeSlice $first
	} else {
	    set dcube(image,$cube(axis)) 1
	    set dcube(wcs,$cube(axis)) 1
	}
	UpdateCube
    }
}

proc CubePrev {} {
    global dcube
    global cube

    global current
    global rgb

    CubeStop

    if {$current(frame) != {}} {
	if {[$current(frame) has fits]} {
	    set slice [$current(frame) get fits slice $cube(axis)]
	    if {$cube(axis)==2} {
		# get cropped version
		set ss [$current(frame) get crop 3d image]
		set first [lindex $ss 0]
		set last [lindex $ss 1]
	    } else {
		set first 1
		set last [$current(frame) get fits depth $cube(axis)]
	    }

	    if {$slice == $first} {
		set slice $last
	    } else {
		set slice [expr $slice-1]
	    }

	    CubeSlice $slice
	} else {
	    set dcube(image,$cube(axis)) 1
	    set dcube(wcs,$cube(axis)) 1
	}
	UpdateCube
    }
}

proc CubeNext {} {
    global dcube
    global cube

    global current
    global rgb

    CubeStop

    if {$current(frame) != {}} {
	if {[$current(frame) has fits]} {
	    set slice [$current(frame) get fits slice $cube(axis)]
	    if {$cube(axis)==2} {
		# get cropped version
		set ss [$current(frame) get crop 3d image]
		set first [lindex $ss 0]
		set last [lindex $ss 1]
	    } else {
		set first 1
		set last [$current(frame) get fits depth $cube(axis)]
	    }

	    if {$slice == $last} {
		set slice $first
	    } else {
		set slice [expr $slice+1]
	    }

	    CubeSlice $slice
	} else {
	    set dcube(image,$cube(axis)) 1
	    set dcube(wcs,$cube(axis)) 1
	}
	UpdateCube
    }
}

proc CubeLast {} {
    global dcube
    global cube

    global current
    global rgb

    CubeStop

    if {$current(frame) != {}} {
	if {[$current(frame) has fits]} {
	    if {$cube(axis)==2} {
		# get cropped version
		set ss [$current(frame) get crop 3d image]
		set last [lindex $ss 1]
	    } else {
		set last [$current(frame) get fits depth $cube(axis)]
	    }

	    CubeSlice $last
	} else {
	    set dcube(image,$cube(axis)) 1
	    set dcube(wcs,$cube(axis)) 1
	}
	UpdateCube
    }
}

proc CubeApply {ii} {
    global dcube
    global cube

    global current
    global rgb

    CubeStop

    if {$current(frame) != {}} {
	if {[$current(frame) has fits]} {
	    set ss [expr int([$current(frame) get coordinates $dcube(wcs,$ii) $cube(system) image $cube(axis)])]
	    
	    if {$ss<1} {
		set ss 1
	    }
	    set depth [$current(frame) get fits depth $ii]
	    if {$ss>$depth} {
		set ss $depth
	    }
	    set dcube(image,$ii) $ss
	    set dcube(wcs,$ii) [$current(frame) get coordinates $dcube(image,$ii) image $cube(system) $cube(axis)]
	    RGBEvalLockCurrent rgb(lock,slice) "$current(frame) update fits slice $ii $ss"
	} else {
	    set dcube(image,$cube(axis)) 1
	    set dcube(wcs,$cube(axis)) 1
	}
	UpdateCube
    }
}

proc UpdateCube {} {
    global current

    LockCubeCurrent
    UpdateScaleDialog
    UpdateContourScale
    UpdateContourDialog
    UpdateGraphAxis $current(frame)
    UpdateInfoBoxFrame $current(frame)
    UpdateMain
}

# used by backup
proc CubeDialog {} {
    global icube
    global dcube
    global cube

    global current
    global ds9
    global blink

    # see if we already have a window visible
    if {[winfo exists $icube(top)]} {
	raise $icube(top)
	return
    }

    # create the cube window
    set w $icube(top)
    set mb $icube(mb)

    Toplevel $w $mb 6 [msgcat::mc {Cube}] CubeDestroyDialog

    $mb add cascade -label [msgcat::mc {File}] -menu $mb.file
    $mb add cascade -label [msgcat::mc {Edit}] -menu $mb.edit
    $mb add cascade -label [msgcat::mc {Interval}] -menu $mb.blink
    $mb add cascade -label [msgcat::mc {Coordinate}] -menu $mb.coord
    $mb add cascade -label [msgcat::mc {Axes Order}] -menu $mb.axes

    menu $mb.file
    $mb.file add command -label [msgcat::mc {First}] -command CubeFirst
    $mb.file add command -label [msgcat::mc {Previous}] -command CubePrev
    $mb.file add command -label [msgcat::mc {Stop}] -command CubeStop
    $mb.file add command -label [msgcat::mc {Play}] -command CubePlay
    $mb.file add command -label [msgcat::mc {Next}] -command CubeNext
    $mb.file add command -label [msgcat::mc {Last}] -command CubeLast
    $mb.file add separator
    $mb.file add command -label [msgcat::mc {Close}] \
	-command CubeDestroyDialog

    EditMenu $mb icube

    menu $mb.blink
    $mb.blink add radiobutton -label ".125 [msgcat::mc {Seconds}]" \
	-variable blink(interval) -value 125
    $mb.blink add radiobutton -label ".25 [msgcat::mc {Seconds}]" \
	-variable blink(interval) -value 250
    $mb.blink add radiobutton -label ".5 [msgcat::mc {Seconds}]" \
	-variable blink(interval) -value 500
    $mb.blink add radiobutton -label "1 [msgcat::mc {Seconds}]" \
	-variable blink(interval) -value 1000
    $mb.blink add radiobutton -label "2  [msgcat::mc {Seconds}]" \
	-variable blink(interval) -value 2000
    $mb.blink add radiobutton -label "4 [msgcat::mc {Seconds}]" \
	-variable blink(interval) -value 4000
    $mb.blink add radiobutton -label "8 [msgcat::mc {Seconds}]" \
	-variable blink(interval) -value 8000

    CoordMenu $mb.coord cube system 2 {} {} UpdateCubeDialog

    menu $mb.axes
    $mb.axes add radiobutton -label {1 2 3} -variable cube(axes) \
	-value 123 -command CubeAxes
    $mb.axes add radiobutton -label {1 3 2} -variable cube(axes) \
	-value 132 -command CubeAxes
    $mb.axes add radiobutton -label {2 1 3} -variable cube(axes) \
	-value 213 -command CubeAxes
    $mb.axes add radiobutton -label {2 3 1} -variable cube(axes) \
	-value 231 -command CubeAxes
    $mb.axes add radiobutton -label {3 1 2} -variable cube(axes) \
	-value 312 -command CubeAxes
    $mb.axes add radiobutton -label {3 2 1} -variable cube(axes) \
	-value 321 -command CubeAxes

    # Param
    set f [ttk::frame $w.param]

    set dcube(taxis) [ttk::label $f.taxis -text [msgcat::mc {Axis}]]
    set dcube(tslice) [ttk::label $f.tslice -text [msgcat::mc {Slice}]]
    set dcube(twcs) [ttk::label $f.twcs -textvariable dcube(vcoord) \
			 -anchor center]
    for {set ii 2} {$ii<$ds9(FTY_MAXAXES)} {incr ii} {
	set dcube(chk,$ii) [ttk::radiobutton $f.chk$ii \
				-text [expr $ii+1] \
				-variable cube(axis) \
				-value $ii]
	set dcube(lslice,$ii) [ttk::label $f.slice$ii \
				  -textvariable dcube(image,$ii) \
				  -width 5 -anchor center]
	set dcube(sslice,$ii) [slider $f.scale$ii 0 100 {} \
				   dcube(wcs,$ii) [list CubeApply $ii] 4 10]
    }

    # Buttons
    set f [ttk::frame $w.buttons]
    ttk::button $f.first -text [msgcat::mc {First}] -width -6 -command CubeFirst
    ttk::button $f.prev -text [msgcat::mc {Previous}] -width -6 \
	-command CubePrev
    ttk::button $f.stop -text [msgcat::mc {Stop}] -width -6 -command CubeStop
    ttk::button $f.play -text [msgcat::mc {Play}] -width -6 -command CubePlay
    ttk::button $f.next -text [msgcat::mc {Next}] -width -6 -command CubeNext
    ttk::button $f.last -text [msgcat::mc {Last}] -width -6 -command CubeLast
    pack $f.first $f.prev $f.stop $f.play $f.next $f.last \
	-side left -expand true -padx 2 -pady 4

    # Fini
    ttk::separator $w.sep -orient horizontal
    pack $w.buttons $w.sep -side bottom -fill x
    pack $w.param -side top -fill both -expand true

    UpdateCubeDialog
}

proc CubeDestroyDialog {} {
    global icube
    global dcube

    CubeStop

    if {[winfo exists $icube(top)]} {
	destroy $icube(top)
	destroy $icube(mb)
    }

    unset dcube
}

proc UpdateCubeMenu {} {
    global cube
    global current

    global debug
    if {$debug(tcl,update)} {
	puts stderr "UpdateCubeMenu"
    }

    if {$current(frame) != {}} {
	set cube(axes) [$current(frame) get cube axes]
    }

    # can be changed by wcs
    SetCoordSystem cube system {} {}
}

proc UpdateCubeDialog {} {
    global icube
    global dcube
    global cube

    global current
    global ds9

    global debug
    if {$debug(tcl,update)} {
	puts stderr "UpdateCubeDialog"
    }

    # don't stop during init process
    # user may have started via command line
    if {!$ds9(init)} {
	CubeStop
    }

    if {![winfo exists $icube(top)]} {
	return
    }

    set w $icube(top)
    set mb $icube(mb)

    if {$current(frame) != {}} {
	if {[$current(frame) has fits]} {
	    # now make sure we have the coord systems
	    AdjustCoordSystem3d cube system
	    CoordMenuEnable $mb.coord cube system 2 {} {}
	} else {
	    CoordMenuReset $mb.coord cube system 2 {} {}
	}
    }

    # get number of axes
    if {$current(frame) != {}} {
	set naxes [$current(frame) get fits naxes]
    } else {
	set naxes 2
    }
    
    # enable/disable Axes Reorder
    if {$naxes > 2} {
	$mb entryconfig [msgcat::mc {Axes Order}] -state normal
    } else {
	$mb entryconfig [msgcat::mc {Axes Order}] -state disabled
    }

    # set from/to
    set depth 1
    if {$naxes == 2} {
	set dcube(from,2) 1
	set dcube(to,2) 1
    } else {
	for {set ii 2} {$ii<$naxes} {incr ii} {
	    set dcube(from,$ii) 1
	    set dcube(to,$ii) 1

	    if {$ii==2} {
		# get cropped version
		set ss [$current(frame) get crop 3d $cube(system)]
		set dcube(from,$ii) [lindex $ss 0]
		set dcube(to,$ii) [lindex $ss 1]
	    } else {
		set depth [$current(frame) get fits depth $ii]
		set dcube(from,$ii) [$current(frame) get coordinates 1 image $cube(system) $ii]
		set dcube(to,$ii) [$current(frame) get coordinates $depth image $cube(system) $ii]
	    }
	}
    }
    
    # forget everything
    grid forget $dcube(tslice) $dcube(taxis) $dcube(twcs)
    for {set ii 2} {$ii<$ds9(FTY_MAXAXES)} {incr ii} {
	grid forget $dcube(chk,$ii) $dcube(sslice,$ii) $dcube(lslice,$ii)
    }

    # show it
    if {$naxes <= 3} {
	# special chase, no checkbox
	grid columnconfigure $w.param 1 -weight 1
	grid columnconfigure $w.param 2 -weight 0
	grid $dcube(tslice) $dcube(twcs) -padx 2 -pady 2 -sticky ew
	grid $dcube(lslice,2) $dcube(sslice,2) -padx 2 -pady 2 -sticky ew
    } else {
	grid columnconfigure $w.param 1 -weight 0
	grid columnconfigure $w.param 2 -weight 1
	grid $dcube(taxis) $dcube(tslice) $dcube(twcs) \
	    -padx 2 -pady 2 -sticky ew
	for {set ii 2} {$ii<$naxes} {incr ii} {
	    grid $dcube(chk,$ii) $dcube(lslice,$ii) \
		$dcube(sslice,$ii) -padx 2 -pady 2 -sticky ew
	}
    }

    # set intervals
    if {$naxes  == 2} {
	SliderMinMax $dcube(sslice,2) $dcube(from,2) $dcube(to,2) 4
	set dcube(vcoord) $cube(system)
    } else {
	for {set ii 2} {$ii<$naxes} {incr ii} {
	    set dcube(vcoord) $cube(system)
	    switch $cube(system) {
		image {
		    set dcube(from,$ii) [expr int($dcube(from,$ii))]
		    set dcube(to,$ii) [expr int($dcube(to,$ii))]
		}
		default {
		    set w [string range $cube(system) 3 3]
		    set key "CTYPE[expr $cube(axis)+1]$w"
		    set tt [string trim [$current(frame) get fits header keyword \{$key\}]]
		    if {$tt != {}} {
			set dcube(vcoord) $tt
		    }
		}
	    }
	    SliderMinMax $dcube(sslice,$ii) $dcube(from,$ii) $dcube(to,$ii) 4
	}
    }

    # reset cube(axis) if needed
    if {$cube(axis) > [expr $naxes-1]} {
	set cube(axis) [expr $naxes-1]
	if {$cube(axis) < 2} {
	    set cube(axis) 2
	}
    }

    # we must do this after the scale has been configured
    if {$naxes == 2} {
	set dcube(image,2) 1
	set dcube(wcs,2) 1
    } else {
	for {set ii 2} {$ii<$naxes} {incr ii} {
	    set slice  [$current(frame) get fits slice $ii]
	    set dcube(image,$ii) $slice
	    set dcube(wcs,$ii) [$current(frame) get coordinates $slice image $cube(system) $ii]
	}
    }
}

proc CubeBackup {ch which} {
    switch [$which get type] {
	base -
	3d {CubeBackupBase $ch $which}
	rgb {CubeBackupRGB $ch $which}
    }
}

proc CubeBackupBase {ch which} {
    global ds9

    set axes [$which get cube axes]
    puts $ch "$which cube axes $axes"

    if {[$which has fits cube]} {
	for {set ii 2} {$ii<$ds9(FTY_MAXAXES)} {incr ii} {
	    set depth [$which get fits depth $ii]
	    if {$depth>1} {
		puts $ch "$which update fits slice $ii [$which get fits slice $ii]"
	    } else {
		break
	    }
	}

	puts $ch "CubeDialog"
    }
}

proc CubeBackupRGB {ch which} {
    set sav [$which get rgb channel]
    foreach cc {red green blue} {
	$which rgb channel $cc
	puts $ch "$which rgb channel $cc"
	CubeBackupBase $ch $which
    }
    $which rgb channel $sav
    puts $ch "$which rgb channel $sav"
}

proc MatchAxesCurrent {} {
    global current

    if {$current(frame) != {}} {
	MatchAxes $current(frame)
    }
}

proc MatchAxes {which} {
    global cube
    global ds9
    global rgb
    global grid

    set axes [$which get cube axes]
    foreach ff $ds9(frames) {
	if {$ff != $which} {
	    RGBEvalLock rgb(lock,axes) $ff "$ff cube axes $axes"

	    # grid
	    if {[$ff has grid]} {
		array set ogrid [array get grid]
		array set grid [$ff get grid var]

		GridUpdate $ff

		array set grid [array get ogrid]
	    }
	}
    }
}

proc LockAxesCurrent {} {
    global current
    
    if {$current(frame) != {}} {
	LockAxes $current(frame)
    }
}

proc LockAxes {which} {
    global cube

    if {$cube(lock,axes)} {
	MatchAxes $which
    }
}

proc CubeAxes {} {
    global cube
    global current
    global rgb

    if {$current(frame) != {}} {
	SetWatchCursor
	RGBEvalLockCurrent rgb(lock,axes) \
	    "$current(frame) cube axes $cube(axes)"
	ResetWatchCursor

	LockAxesCurrent
	UpdateHeaderDialog
	UpdateWCS
	UpdateDS9
	UpdateMain
    }
}

# Process Cmds

proc ProcessCubeCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    global cube
    global dcube

    global blink
    global current
    global rgb

    CubeDialog

    switch -- [string tolower [lindex $var $i]] {
	match {
	    incr i
	    if {!([string range [lindex $var $i] 0 0] == "-")} {
		switch -- [lindex $var $i] {
		    {} {MatchCubeCurrent image}
		    default {MatchCubeCurrent [lindex $var $i]}
		}
	    } else {
		MatchCubeCurrent image
		incr i -1
	    }
	}
	lock {
	    incr i
	    if {!([string range [lindex $var $i] 0 0] == "-")} {
		switch -- [lindex $var $i] {
		    {} -
		    yes -
		    1 {set cube(lock) image}
		    no -
		    0 {set cube(lock) none}
		    default {set cube(lock) [lindex $var $i]}
		}
	    } else {
		set cube(lock) image
		incr i -1
	    }
	    LockCubeCurrent
	}
	open {}
	close {CubeDestroyDialog}
	play {CubePlay}
	stop {CubeStop}
	next {CubeNext}
	prev {CubePrev}
	first {CubeFirst}
	last {CubeLast}
	interval {
	    incr i
	    set blink(interval) [expr int([lindex $var $i]*1000)]
	}
	axis {
	    incr i; 
	    set item [lindex $var $i]
	    if {[string is integer $item]} {
		set cube(axis) [expr $item-1]
		if {$cube(axis) < 2} {
		    set cube(axis) 2
		}
	    }
	}
	axes -
	order {
	    incr i; 
	    switch -- [string tolower [lindex $var $i]] {
		lock {
		    incr i; 
		    if {!([string range [lindex $var $i] 0 0] == "-")} {
			set cube(lock,axes) [FromYesNo [lindex $var $i]]
		    } else {
			set cube(lock,axes) 1
			incr i -1
		    }
		    LockAxesCurrent
		}
		default {
		    set cube(axes) [lindex $var $i]
		    CubeAxes
		}
	    }
	}
    	default {
	    # defaults
	    set ss 1
	    set sys image
	    set axis 2

	    # slice
	    set item [lindex $var $i]
	    if {$item != {}} {
		if {!([string range $item 0 0] == "-")} {
		    if {[string is double $item]} {
			set ss $item
		    } else {
			set sys $item
		    }

		    # sys
		    set item [lindex $var [expr $i+1]]
		    if {$item != {}} {
			if {!([string range $item 0 0] == "-")} {
			    incr i
			    if {[string is integer $item]} {
				set axis [expr $item-1]
			    } else {
				set sys $item
			    }

			    # axis
			    set item [lindex $var [expr $i+1]]
			    if {$item != {}} {
				if {!([string range $item 0 0] == "-")} {
				    incr i
				    if {[string is integer $item]} {
					set axis [expr $item-1]
				    }
				}
			    }
			}
		    }
		} else {
		    incr i -1
		}
	    }

	    set dcube(wcs,$axis) $ss
	    set cube(system) $sys
	    set cube(axis) $axis
	    if {$cube(axis) < 2} {
		set cube(axis) 2
	    }
	    CubeApply $cube(axis)
	}
    }
}

proc ProcessSendCubeCmd {proc id param} {
    global cube
    global current
    global blink

    switch -- [string tolower [lindex $param 0]] {
	lock {$proc $id "$cube(lock)\n"}
	axes -
	order {
	    switch -- [string tolower [lindex $param 1]] {
		lock {$proc $id [ToYesNo $cube(lock,axes)]}
		default {$proc $id "$cube(axes)\n"}
	    }
	}
	interval {$proc $id "[expr $blink(interval)/1000.]\n"}
	axis {$proc $id "$cube(axis)\n"}
	default {
	    if {$current(frame) != {}} {
		$proc $id "[$current(frame) get fits slice $cube(axis)]\n"
	    } else {
		$proc $id "1\n"
	    }
	}
    }
}
