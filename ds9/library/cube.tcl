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
# axes cnt starts at 0
    set cube(system) wcs
    set cube(sky) fk5
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

    set ss [$which get fits slice]
    set wss [$which get fits slice from image $sys fk5]
    
    foreach ff $ds9(frames) {
	if {$ff != $which} {
	    RGBEvalLock rgb(lock,slice) $ff "$ff update fits slice $wss $sys fk5"
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

proc CubeSlice {ss} {
    global dcube
    global cube

    global current
    global rgb

    RGBEvalLockCurrent rgb(lock,slice) "$current(frame) update fits slice $ss"

    set dcube(image) $ss
    set dcube(wcs) \
	[$current(frame) get fits slice from image $cube(system) $cube(sky)]

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
	    set slice [$current(frame) get fits slice]
	    # get cropped version
	    set ss [$current(frame) get crop 3d image]
	    set first [lindex $ss 0]
	    set last [lindex $ss 1]

	    if {$slice == $last} {
		set slice $first
	    } else {
		set slice [expr $slice+1]
	    }

	    CubeSlice $slice
	} else {
	    set dcube(image) 1
	    set dcube(wcs) 1
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
	    # get cropped version
	    set ss [$current(frame) get crop 3d image]
	    set first [lindex $ss 0]
	    CubeSlice $first
	} else {
	    set dcube(image) 1
	    set dcube(wcs) 1
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
	    set slice [$current(frame) get fits slice]
	    # get cropped version
	    set ss [$current(frame) get crop 3d image]
	    set first [lindex $ss 0]
	    set last [lindex $ss 1]

	    if {$slice == $first} {
		set slice $last
	    } else {
		set slice [expr $slice-1]
	    }

	    CubeSlice $slice
	} else {
	    set dcube(image) 1
	    set dcube(wcs) 1
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
	    set slice [$current(frame) get fits slice]
	    # get cropped version
	    set ss [$current(frame) get crop 3d image]
	    set first [lindex $ss 0]
	    set last [lindex $ss 1]

	    if {$slice == $last} {
		set slice $first
	    } else {
		set slice [expr $slice+1]
	    }

	    CubeSlice $slice
	} else {
	    set dcube(image) 1
	    set dcube(wcs) 1
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
	    # get cropped version
	    set ss [$current(frame) get crop 3d image]
	    set last [lindex $ss 1]
	    CubeSlice $last
	} else {
	    set dcube(image) 1
	    set dcube(wcs) 1
	}
	UpdateCube
    }
}

proc CubeApply {} {
    global dcube
    global cube

    global current
    global rgb

    CubeStop

    if {$current(frame) == {}} {
	return
    }
    if {![$current(frame) has fits]} {
	return
    }

    set ss $dcube(image)
    if {$ss<1} {
	set ss 1
    }
    set depth [$current(frame) get fits depth]
    if {$ss>$depth} {
	set ss $depth
    }
    
    RGBEvalLockCurrent rgb(lock,slice) "$current(frame) update fits slice $ss"

    set dcube(image) $ss
    set dcube(wcs) \
	[$current(frame) get fits slice from image $cube(system) $cube(sky)]

    UpdateCube
}

proc CubeApplyWCS {} {
    global dcube
    global cube
    global current
    global rgb

    CubeStop

    if {$current(frame) == {}} {
	return
    }
    if {![$current(frame) has fits]} {
	return
    }

    set ss [$current(frame) get fits slice to image $dcube(wcs) $cube(system) $cube(sky)]
    if {$ss<1} {
	set ss 1
    }
    set depth [$current(frame) get fits depth]
    if {$ss>$depth} {
	set ss $depth
    }
    
    RGBEvalLockCurrent rgb(lock,slice) "$current(frame) update fits slice $ss"

    set dcube(image) $ss
    set dcube(wcs) \
	[$current(frame) get fits slice from image $cube(system) $cube(sky)]

    UpdateCube
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

    # for CoordMenuButton
    set cube(frame) $current(frame)

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

    CoordMenu $mb.coord cube system 2 sky {} UpdateCubeDialog

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
    set dcube(twcs) \
	[ttk::label $f.twcs -textvariable dcube(vcoord) -anchor center]
    set dcube(wcsentry) [ttk::entry $f.slice -textvariable dcube(wcs) -width 10]
    bind $dcube(wcsentry) <Return> [list CubeApplyWCS]
    set dcube(slider) \
	[slider $f.scale 0 100 {} dcube(image) [list CubeApply] 4 10]

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
	unset dcube
    }
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

    # is there a dialog
    if {![winfo exists $icube(top)]} {
	return
    }

    # special case, no frame
    if {$current(frame) == {}} {
	UpdateCubeDialogNoImage
	return
    }
	
    # special case, no image
    if {![$current(frame) has fits]} {
	UpdateCubeDialogNoImage
	return
    }
    
    set w $icube(top)
    set mb $icube(mb)

    set cube(frame) $current(frame)

    # get number of axes
    set naxes [$current(frame) get fits naxes]
    
    # special case, 2D image
    if {$naxes == 2} {
	UpdateCubeDialog2Axes
	return
    }

    # now make sure we have the coord systems
    AdjustCoordSystem3d cube system
    CoordMenuEnable3d $mb.coord cube system sky {}

    # enable/disable Axes Reorder
    $mb entryconfig [msgcat::mc {Axes Order}] -state normal

    # get cropped version
    set ss [$current(frame) get crop 3d image]
    set dcube(from) [lindex $ss 0]
    set dcube(to) [lindex $ss 1]

    set dcube(from,wcs) [$current(frame) get fits slice from image $dcube(from) $cube(system) $cube(sky)]    
    set dcube(to,wcs) [$current(frame) get fits slice from image $dcube(to) $cube(system) $cube(sky)]    

    # forget everything
    grid forget $dcube(taxis) $dcube(twcs)
    grid forget $dcube(slider) $dcube(wcsentry)

    # show it
    grid columnconfigure $w.param 1 -weight 1
    grid columnconfigure $w.param 2 -weight 0
    grid x $dcube(twcs) -padx 2 -pady 2 -sticky ew
    switch $cube(system) {
	image {
	    grid x $dcube(slider) -padx 2 -pady 2 -sticky ew
	}
	default {
	    grid $dcube(wcsentry) $dcube(slider) -padx 2 -pady 2 -sticky ew
	}
    }
    
    # set intervals
    set diff [expr $dcube(to)-$dcube(from)+1]
    if {$diff>4} {
	set diff 4
    }
    SliderFromTo $dcube(slider) $dcube(from) $dcube(to)
    SliderMinMax $dcube(slider) $dcube(from,wcs) $dcube(to,wcs) $diff 4

    set dcube(vcoord) $cube(system)
    switch $cube(system) {
	image {}
	default {
	    set w [string range $cube(system) 3 3]
	    set key "CTYPE3$w"
	    set tt [string trim [$current(frame) get fits header keyword \{$key\}]]
	    if {$tt != {}} {
		set dcube(vcoord) $tt
	    }
	}
    }

    # we must do this after the scale has been configured
    set dcube(image) [$current(frame) get fits slice]
    set dcube(wcs) [$current(frame) get fits slice from image $cube(system) $cube(sky)]
}

proc UpdateCubeDialogNoImage {} {
    global icube
    global dcube
    global cube
    global ds9

    set w $icube(top)
    set mb $icube(mb)

    # reset coord menu
    CoordMenuReset3d $mb.coord cube system {} {}

    # disable Axes Reorder
    $mb entryconfig [msgcat::mc {Axes Order}] -state disabled

    # set from/to
    set dcube(from) 1
    set dcube(to) 1
    set dcube(from,wcs) 1
    set dcube(to,wcs) 1

    # forget everything
    grid forget $dcube(taxis) $dcube(twcs)
    grid forget $dcube(slider) $dcube(wcsentry)

    # no frame, no checkbox
    grid columnconfigure $w.param 1 -weight 1
    grid columnconfigure $w.param 2 -weight 0
    grid x $dcube(twcs) -padx 2 -pady 2 -sticky ew
    grid x $dcube(slider) -padx 2 -pady 2 -sticky ew

    # set intervals
    SliderFromTo $dcube(slider) $dcube(from) $dcube(to)
    SliderMinMax $dcube(slider) $dcube(from) $dcube(to) 1 4
    set dcube(vcoord) image

    # we must do this after the scale has been configured
    set dcube(image) 1
    set dcube(wcs) 1
}

proc UpdateCubeDialog2Axes {} {
    global icube
    global dcube
    global cube
    global ds9

    set w $icube(top)
    set mb $icube(mb)

    # enable/disable Axes Reorder
    $mb entryconfig [msgcat::mc {Axes Order}] -state disabled

    # set from/to
    set dcube(from) 1
    set dcube(to) 1
    set dcube(from,wcs) 1
    set dcube(to,wcs) 1

    # forget everything
    grid forget $dcube(taxis) $dcube(twcs)
    grid forget $dcube(slider) $dcube(wcsentry)

    # show it
    grid columnconfigure $w.param 1 -weight 1
    grid columnconfigure $w.param 2 -weight 0
    grid x $dcube(twcs) -padx 2 -pady 2 -sticky ew
    switch $cube(system) {
	image {
	    grid x $dcube(slider) -padx 2 -pady 2 -sticky ew
	}
	default {
	    grid $dcube(wcsentry) $dcube(slider) -padx 2 -pady 2 -sticky ew
	}
    }

    # set intervals
    SliderFromTo $dcube(slider) $dcube(from) $dcube(to)
    SliderMinMax $dcube(slider) $dcube(from) $dcube(to) 1 4
    set dcube(vcoord) image

    # we must do this after the scale has been configured
    set dcube(image) 1
    set dcube(wcs) 1
}

proc UpdateCubeMotionDialog {} {
    global icube
    global dcube
    global cube
    global current

    global debug
    if {$debug(tcl,update)} {
	puts stderr "UpdateCubeMotionDialog"
    }

    CubeStop

    if {![winfo exists $icube(top)]} {
	return
    }
    # current frame only
    if {$current(frame) == {}} {
	return
    }

    # we must do this after the scale has been configured
    set dcube(image) [$current(frame) get fits slice]
    set dcube(wcs) [$current(frame) get fits slice from image $cube(system) $cube(sky)]
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
	set depth [$which get fits depth]
	if {$depth>1} {
	    puts $ch "$which update fits slice [$which get fits slice]"
	} else {
	    break
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

    CubeDialog

    cube::YY_FLUSH_BUFFER
    cube::yy_scan_string [lrange $var $i end]
    cube::yyparse
    incr i [expr $cube::yycnt-1]
}

proc CubeCmd {ss} {
    global dcube
    global cube
    global current
    global rgb

    CubeStop

    if {$current(frame) == {}} {
	return
    }
    if {![$current(frame) has fits]} {
	return
    }

    RGBEvalLockCurrent rgb(lock,slice) "$current(frame) update fits slice $ss"

    set dcube(image) $ss
    set dcube(wcs) \
	[$current(frame) get fits slice from image $cube(system) $cube(sky)]

    UpdateCube
}

proc CubeCmdCoord {ss sys sky} {
    global dcube
    global cube
    global current
    global rgb

    CubeStop

    if {$current(frame) == {}} {
	return
    }
    if {![$current(frame) has fits]} {
	return
    }

    set ss [$current(frame) get fits slice to image $ss $sys $sky]
    if {$ss<1} {
	set ss 1
    }
    
    RGBEvalLockCurrent rgb(lock,slice) "$current(frame) update fits slice $ss"

    set dcube(image) $ss
    set dcube(wcs) \
	[$current(frame) get fits slice from image $cube(system) $cube(sky)]

    UpdateCube
}

proc ProcessSendCubeCmd {proc id param {sock {}} {fn {}}} {
    global parse
    set parse(proc) $proc
    set parse(id) $id

    cubesend::YY_FLUSH_BUFFER
    cubesend::yy_scan_string $param
    cubesend::yyparse
}

