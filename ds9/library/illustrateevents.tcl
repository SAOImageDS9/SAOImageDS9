#  Copyright (C) 1999-2022
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc IllustrateBindEvents {} {
    global ds9

    global debug
    if {$debug(tcl,illustrate)} {
	puts stderr "IllustrateBindEvents"
    }

    bind $ds9(canvas) <Enter> IllustrateEnter
    bind $ds9(canvas) <Leave> IllustrateLeave
    switch $ds9(wm) {
	x11 {}
	aqua -
	win32 {bind $ds9(canvas) <MouseWheel> {}}
    }

    bind $ds9(canvas) <Tab> {}
    bind $ds9(canvas) <Shift-Tab> {}
    switch $ds9(wm) {
	x11 {bind $ds9(canvas) <ISO_Left_Tab> {}}
	aqua -
	win32 {}
    }

    bind $ds9(canvas) <Motion> {IllustrateMotion %x %y}

    bind $ds9(canvas) <Button-1> {IllustrateButton %x %y}
    bind $ds9(canvas) <B1-Motion> {IllustrateButtonMotion %x %y}
    bind $ds9(canvas) <ButtonRelease-1> {IllustrateButtonRelease %x %y}

    bind $ds9(canvas) <Shift-Button-1> {IllustrateShiftButton %x %y}

    bind $ds9(canvas) <Key> {IllustrateKey %K %A %x %y}
    bind $ds9(canvas) <KeyRelease> {IllustrateKeyRelease %K %A %x %y}
}

proc IllustrateUnBindEvents {} {
    global ds9

    global debug
    if {$debug(tcl,illustrate)} {
	puts stderr "IllustrateUnBindEvents"
    }

    bind $ds9(canvas) <Enter> {}
    bind $ds9(canvas) <Leave> {}
    switch $ds9(wm) {
	x11 {}
	aqua -
	win32 {bind $ds9(canvas) <MouseWheel> {}}
    }

    bind $ds9(canvas) <Tab> {}
    bind $ds9(canvas) <Shift-Tab> {}
    switch $ds9(wm) {
	x11 {bind $ds9(canvas) <ISO_Left_Tab> {}} 
	aqua -
	win32 {}
    }

    bind $ds9(canvas) <Motion> {}

    bind $ds9(canvas) <Button-1> {}
    bind $ds9(canvas) <B1-Motion> {}
    bind $ds9(canvas) <ButtonRelease-1> {}

    bind $ds9(canvas) <Shift-Button-1> {}

    bind $ds9(canvas) <Key> {}
    bind $ds9(canvas) <KeyRelease> {}
}

# Enter/Leave

proc IllustrateEnter {} {
    global ds9
    
    global debug
    if {$debug(tcl,illustrate)} {
	puts stderr "IllustrateEnter"
    }

    focus $ds9(canvas)
}

proc IllustrateLeave {} {
    global ds9

    global debug
    if {$debug(tcl,illustrate)} {
	puts stderr "IllustrateLeave"
    }

    focus {}
}

# Motion

proc IllustrateMotion {xx yy} {
    global ds9
    global illustrate
    global iillustrate
    
    global debug
    if {$debug(tcl,illustrate)} {
	puts "IllustrateMotion"
    }
}

# Button

proc IllustrateButton {xx yy} {
    global ds9
    global illustrate
    global iillustrate

    global debug
    if {$debug(tcl,illustrate)} {
	puts "IllustrateButton $xx $yy"
    }

    set iillustrate(motion) none
    set iillustrate(motion,xx) {}
    set iillustrate(motion,yy) {}

    # see if we are on a handle
    set id [IllustrateFindGraphic handle $xx $yy]
    if {$id != {}} {
	if {[regexp {gr([0-9]+)} [$ds9(canvas) gettags $id] foo gr]} {
	    set iillustrate(handle,id) $id
	    set iillustrate(handle,graphic,id) $gr
	    set iillustrate(motion) beginEdit
	} else {
	    # should not happen
	}
	return
    }
    
    # segment of polygon
    
    # see if we are on a graphic
    set id [IllustrateFindGraphic graphic $xx $yy]
    if {$id != {}} {
	set iillustrate(motion) beginMove

	# if selected, don't do anything
	if {[IllustrateIsSelected $id]} {
	    return
	}

	# if not selected, select it, unselect all others
	IllustrateSelectNone
	IllustrateAddSelect $id
	return
    }	

    # create new graphic
    if {[llength $iillustrate(selection)]} {
	IllustrateSelectNone
	return
    }

    IllustrateCreateGraphic $xx $yy
}

proc IllustrateButtonMotion {xx yy} {
    global ds9
    global illustrate
    global iillustrate

    global debug
    if {$debug(tcl,illustrate)} {
	puts "IllustrateButtonMotion $iillustrate(motion) $xx $yy"
    }

    switch -- $iillustrate(motion) {
	none {}

	beginCreate -
	create {
	}

	beginMove {
	    set iillustrate(motion,xx) $xx
	    set iillustrate(motion,yy) $yy

	    foreach gr $iillustrate(selection) {
		foreach {id x1 y1 x2 y2 color fill dash} $gr {
		    IllustrateGraphicAntsOn $id
		}
	    }
	    set iillustrate(motion) move
	}
	move {
	    foreach gr $iillustrate(selection) {
		foreach {id x1 y1 x2 y2 color fill dash} $gr {
		    set dx [expr $xx-$iillustrate(motion,xx)]
		    set dy [expr $yy-$iillustrate(motion,yy)]

		    # graphic
		    set nx1 [expr $dx+$x1]
		    set ny1 [expr $dy+$y1]
		    $ds9(canvas) moveto $id $nx1 $ny1

		    IllustrateUpdateHandlesCoords $id
		}
	    }
	}

	beginEdit {
	    set iillustrate(motion,xx) $xx
	    set iillustrate(motion,yy) $yy

	    foreach gr $iillustrate(selection) {
		foreach {id x1 y1 x2 y2 color fill dash} $gr {
		    if {$id == $iillustrate(handle,graphic,id)} {
			IllustrateGraphicAntsOn $id
			break
		    }
		}
	    }

	    # find handle number
	    set tags [$ds9(canvas) gettags $iillustrate(handle,id)]
	    if {[regexp {h([0-9]+)} $tags foo hh]} {
		set iillustrate(handle,num) $hh
		set iillustrate(motion) edit
	    } else {
		# should not happen
	    }
	}
	edit {
	    set dx [expr $xx-$iillustrate(motion,xx)]
	    set dy [expr $yy-$iillustrate(motion,yy)]

	    foreach gr $iillustrate(selection) {
		foreach {id x1 y1 x2 y2 color fill dash} $gr {
		    if {$id != $iillustrate(handle,graphic,id)} {
			continue
		    }

		    # resize
		    switch $iillustrate(handle,num) {
			0 {
			    # should not happen
			}
			1 {
			    $ds9(canvas) coords $id $xx $yy $x2 $y2
			}
			2 {
			    $ds9(canvas) coords $id $x1 $yy $xx $y2
			}
			3 {
			    $ds9(canvas) coords $id $x1 $y1 $xx $yy
			}
			4 {
			    $ds9(canvas) coords $id $xx $y1 $x2 $yy
			}
			default {}
		    }
		}
	    }
	}

	beginRotate -
	rotate {
	}

	shiftregion {
	    $ds9(canvas) coords $iillustrate(ants) \
		$iillustrate(motion,xx) $iillustrate(motion,yy) \
		$xx $yy
	}
    }
}

proc IllustrateButtonRelease {xx yy} {
    global ds9
    global illustrate
    global iillustrate

    global debug
    if {$debug(tcl,illustrate)} {
	puts "IllustrateButtonRelease $xx $yy"
    }

    switch -- $iillustrate(motion) {
	none {}

	beginCreate -
	create {
	}

	beginMove {}
	move {
	    foreach gr $iillustrate(selection) {
		foreach {id x1 y1 x2 y2 color fill dash} $gr {
		    IllustrateGraphicAntsOff $id $color $fill $dash
		}
	    }

	    IllustrateUpdateSelectionCoords
	}

	beginEdit -
	edit {
	    foreach gr $iillustrate(selection) {
		foreach {id x1 y1 x2 y2 color fill dash} $gr {
		    if {$id == $iillustrate(handle,graphic,id)} {
			IllustrateGraphicAntsOff $id $color $fill $dash
			IllustrateUpdateHandlesCoords $id
			IllustrateUpdateSelectionCoords
		    }
		}
	    }

	    unset iillustrate(handle,id)
	    unset iillustrate(handle,graphic,id)
	}

	beginRotate -
	rotate {
	}

	shiftregion {
	    $ds9(canvas) delete $iillustrate(ants)

	    set ll [$ds9(canvas) find enclosed \
			$iillustrate(motion,xx) $iillustrate(motion,yy) $xx $yy]
	    foreach id $ll {
		IllustrateAddSelect $id
	    }

	    unset iillustrate(ants)
	}
    }

    unset iillustrate(motion)
    unset iillustrate(motion,xx)
    unset iillustrate(motion,yy)
}

# Shift Button

proc IllustrateShiftButton {xx yy} {
    global ds9
    global illustrate
    global iillustrate

    global debug
    if {$debug(tcl,illustrate)} {
	puts "IllustrateShiftButton $xx $yy"
    }

    set iillustrate(motion) none
    set iillustrate(motion,xx) $xx
    set iillustrate(motion,yy) $yy


    # if on handle, start rotate
    set id [IllustrateFindGraphic handle $xx $yy]
    if {$id != {}} {
	set iillustrate(motion) beginRotate
	return
    }

    # if on graphic, add to selection, start move
    set id [IllustrateFindGraphic graphic $xx $yy]
    if {$id != {}} {
	# if selected, unselect
	if {[IllustrateIsSelected $id]} {
	    IllustrateUnselect $id
	    set iillustrate(motion) none
	    return
	}

	# if not selected, add to selection
	IllustrateAddSelect $id
	set iillustrate(motion) beginMove
	return
    }	

    # otherwise, dancing ants
    IllustrateSelectNone
    
    set iillustrate(ants) [$ds9(canvas) create rectangle \
			       $xx $yy $xx $yy \
			       -outline white \
			       -dash {8 3} -tags ants]
    set iillustrate(motion) shiftregion
}

# Key

proc IllustrateKey {K A xx yy} {
    global ds9
    global illustrate

    # MacOSX and maybe Ubuntu returns bogus values in xx,yy
    # calculate our own values
    set xx [expr {[winfo pointerx $ds9(canvas)] - [winfo rootx $ds9(canvas)]}]
    set yy [expr {[winfo pointery $ds9(canvas)] - [winfo rooty $ds9(canvas)]}]

    global debug
    if {$debug(tcl,illustrate)} {
	puts "IllustrateKey $K $A $xx $yy"
    }

    switch -- $K {
	Delete -
	BackSpace {IllustrateDeleteSelect}

	Up -
	k {event generate $ds9(canvas) <Motion> -warp 1 -x $xx -y [expr $yy-1]}
	Down -
	j {event generate $ds9(canvas) <Motion> -warp 1 -x $xx -y [expr $yy+1]}
	Left -
	h {event generate $ds9(canvas) <Motion> -warp 1 -x [expr $xx-1] -y $yy}
	Right -
	l {event generate $ds9(canvas) <Motion> -warp 1 -x [expr $xx+1] -y $yy}
    }
}

proc IllustrateKeyRelease {K A xx yy} {
    global ds9
    global illustrate

    # MacOSX and Ubuntu returns bogus values in xx,yy
    # calculate our own values
    set xx [expr {[winfo pointerx $ds9(canvas)] - [winfo rootx $ds9(canvas)]}]
    set yy [expr {[winfo pointery $ds9(canvas)] - [winfo rooty $ds9(canvas)]}]

    global debug
    if {$debug(tcl,illustrate)} {
	puts "IllustrateKeyRelease $K $A $xx $yy"
    }
}
