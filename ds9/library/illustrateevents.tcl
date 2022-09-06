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

    set iillustrate(id) -1
    set iillustrate(handle) -1
    set iillustrate(ants) -1
    set iillustrate(edit) {}
    set iillustrate(motion) none
    set iillustrate(motion,xx) $xx
    set iillustrate(motion,yy) $yy

    # see if we are on a handle
    set hid [IllustrateFindGraphic handle $xx $yy]
    if {$hid != {}} {
	# find handle number
	set tags [$ds9(canvas) gettags $hid]
	if {[regexp {h([0-9]+)} $tags foo num]} {
	    set iillustrate(handle) $num
	}

	# find graphic id
	if {[regexp {gr([0-9]+)} [$ds9(canvas) gettags $hid] foo id]} {
	    set iillustrate(id) $id
	    set iillustrate(edit) [IllustrateSaveGraphic $iillustrate(id)]
	    set iillustrate(motion) beginEdit
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

    # if something selected, unselect
    if {[llength $iillustrate(selection)]} {
	IllustrateSelectNone
	return
    }

    # else, create new graphic
    set iillustrate(id) [IllustrateCreateGraphic $xx $yy]
    switch [$ds9(canvas) type $iillustrate(id)] {
	oval -
	rectangle -
	polygon {
	    set iillustrate(handle) 1
	}
	line {
	    set iillustrate(handle) 2
	}
	text {}
    }

    set iillustrate(edit) [IllustrateSaveGraphic $iillustrate(id)]
    set iillustrate(motion) beginCreate
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

	beginCreate {
	    IllustrateGraphicAntsOn $iillustrate(id)
	    IllustrateHandleOff $iillustrate(id)
	    set iillustrate(motion) create
	}
	create {
	    switch [$ds9(canvas) type $iillustrate(id)] {
		oval {IllustrateOvalEdit $iillustrate(edit) $xx $yy}
		rectangle {IllustrateBaseEdit $iillustrate(edit) $xx $yy}
		polygon {IllustratePolygonEdit $iillustrate(edit) $xx $yy}
		line {IllustrateLineEdit $iillustrate(edit) $xx $yy}
		text {}
	    }
	}

	beginMove {
	    foreach gr $iillustrate(selection) {
		foreach {id x1 y1 x2 y2 color fill dash} $gr {
		    IllustrateGraphicAntsOn $id
		    IllustrateHandleOff $id
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
		}
	    }
	}

	beginEdit {
	    IllustrateGraphicAntsOn $iillustrate(id)
	    IllustrateHandleOff $iillustrate(id)
	    set iillustrate(motion) edit
	}
	edit {
	    switch [$ds9(canvas) type $iillustrate(id)] {
		oval {IllustrateOvalEdit $iillustrate(edit) $xx $yy}
		rectangle {IllustrateBaseEdit $iillustrate(edit) $xx $yy}
		polygon {IllustratePolygonEdit $iillustrate(edit) $xx $yy}
		line {IllustrateLineEdit $iillustrate(edit) $xx $yy}
		text {}
	    }
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
	puts "IllustrateButtonRelease $iillustrate(motion) $xx $yy"
    }

    switch -- $iillustrate(motion) {
	none {}

	beginCreate {
	    # the user has just clicked, so resize to make visible or delete
	    foreach {id x1 y1 x2 y2 color fill dash} $iillustrate(edit) {
		IllustrateGraphicAntsOff $id $color $fill $dash
		switch [$ds9(canvas) type $id] {
		    oval {IllustrateDefaultOval $id}
		    rectangle {IllustrateDefaultRectangle $id}
		    polygon {IllustrateDefaultPolygon $id}
		    line {IllustrateDeleteGraphic $id}
		    text {}
		}

		IllustrateHandleOff $id
		switch [$ds9(canvas) type $id] {
		    oval -
		    rectangle -
		    polygon -
		    text {IllustrateBaseUpdateHandleCoords $id}
		    line {IllustrateLineUpdateHandleCoords $id}
		}
	    }
	}
	create {
	    # determine if this is an accident and just create the default
	    set dx [expr $xx-$iillustrate(motion,xx)]
	    set dy [expr $yy-$iillustrate(motion,yy)]
	    foreach {id x1 y1 x2 y2 color fill dash} $iillustrate(edit) {
		IllustrateGraphicAntsOff $id $color $fill $dash
		if {[expr sqrt($dx*$dx + $dy*$dy)]<2} {
		    switch [$ds9(canvas) type $id] {
			oval {IllustrateDefaultOval $id}
			rectangle {IllustrateDefaultRectangle $id}
			polygon {IllustrateDefaultPolygon $id}
			line {IllustrateDeleteGraphic $id}
			text {}
		    }
		}

		IllustrateHandleOff $id
		switch [$ds9(canvas) type $id] {
		    oval -
		    rectangle -
		    polygon -
		    text {IllustrateBaseUpdateHandleCoords $id}
		    line {IllustrateLineUpdateHandleCoords $id}
		}
	    }
	}
	
	beginMove {}
	move {
	    foreach gr $iillustrate(selection) {
		foreach {id x1 y1 x2 y2 color fill dash} $gr {
		    IllustrateGraphicAntsOff $id $color $fill $dash

		    IllustrateHandleOn $id
		    switch [$ds9(canvas) type $id] {
			oval -
			rectangle -
			polygon -
			text {IllustrateBaseUpdateHandleCoords $id}
			line {IllustrateLineUpdateHandleCoords $id}
		    }
		}
	    }
	    IllustrateUpdateSelection
	}

	beginEdit -
	edit {
	    foreach {id x1 y1 x2 y2 color fill dash} $iillustrate(edit) {
		IllustrateGraphicAntsOff $id $color $fill $dash

		IllustrateHandleOn $id
		switch [$ds9(canvas) type $id] {
		    oval -
		    rectangle -
		    polygon -
		    text {IllustrateBaseUpdateHandleCoords $id}
		    line {IllustrateLineUpdateHandleCoords $id}
		}
	    }
	    IllustrateUpdateSelection
	}

	shiftregion {
	    $ds9(canvas) delete $iillustrate(ants)

	    set ll [$ds9(canvas) find enclosed \
			$iillustrate(motion,xx) $iillustrate(motion,yy) $xx $yy]
	    foreach id $ll {
		IllustrateAddSelect $id
	    }
	}
    }

    unset iillustrate(id)
    unset iillustrate(ants)
    unset iillustrate(edit)
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

    set iillustrate(id) -1
    set iillustrate(ants) -1
    set iillustrate(edit) {}
    set iillustrate(motion) none
    set iillustrate(motion,xx) $xx
    set iillustrate(motion,yy) $yy

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
