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
    
    global debug
    if {$debug(tcl,illustrate)} {
	puts "IllustrateMotion"
    }

    # see if we are on a handle
    if {[IllustrateFind handle $xx $yy]} {
	SetCursor sizing
	return
    }

    # segement of a polygon
    if {[IllustrateFind node $xx $yy]} {
	SetCursor dotbox
	return
    }

    # see if we are on a graphic
    set id [IllustrateFind graphic $xx $yy]
    if {$id} {
	if {[IllustrateIsSelected $id]} {
	    SetCursor fleur
	    return
	}
    }

    # else, set no cursor
    SetCursor {}
}

# Button

proc IllustrateButton {xx yy} {
    global ds9
    global iillustrate

    global debug
    if {$debug(tcl,illustrate)} {
	puts "IllustrateButton $xx $yy"
    }

    set iillustrate(id) 0
    set iillustrate(handle) 0
    set iillustrate(node) 0
    set iillustrate(ants) 0
    set iillustrate(edit) {}
    set iillustrate(motion) none
    set iillustrate(motion,xx) $xx
    set iillustrate(motion,yy) $yy

    # see if we are on a handle
    set hid [IllustrateFind handle $xx $yy]
    if {$hid} {
	set hh [IllustrateFindHandleNumber $hid]
	if {$hh} {
	    set iillustrate(handle) $hh
	}

	set id [IllustrateFindGraphicFromHandle $hid]
	if {$id} {
	    set iillustrate(id) $id
	    set iillustrate(edit) [IllustrateSaveGraphic $id]
	    set iillustrate(motion) beginEdit
	}
	return
    }
    
    # see if we are on a polygon node
    set nid [IllustrateFind node $xx $yy]
    if {$nid} {
	set iillustrate(node) $nid
	set id [IllustrateFindGraphicFromNode $nid]
	if {$id} {
	    set iillustrate(id) $id
	    set iillustrate(edit) [IllustrateSaveGraphic $id]
	    set iillustrate(motion) beginEdit
	}
	return
    }
    
    # see if we are on a graphic
    set id [IllustrateFind graphic $xx $yy]
    if {$id} {
	set iillustrate(motion) beginMove

	# if selected, don't do anything
	if {[IllustrateIsSelected $id]} {
	    return
	}

	# if not selected, select it, unselect all others
	IllustrateSelectNone
	IllustrateAddToSelection $id
	return
    }	

    # if something selected, unselect
    if {[llength $iillustrate(selection)]} {
	IllustrateSelectNone
	return
    }

    # else, create new graphic
    set iillustrate(id) [IllustrateCreateGraphic $xx $yy]
    if {$iillustrate(id)} {
	switch [$ds9(canvas) type $iillustrate(id)] {
	    oval -
	    rectangle -
	    polygon {set iillustrate(handle) 1}
	    line {set iillustrate(handle) 2}
	    text {}
	}

	set iillustrate(edit) [IllustrateSaveGraphic $iillustrate(id)]
	set iillustrate(motion) beginCreate
    }
}

proc IllustrateButtonMotion {xx yy} {
    global ds9
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
		oval {IllustrateEditOval $iillustrate(edit) $xx $yy}
		rectangle {IllustrateEditBase $iillustrate(edit) $xx $yy}
		polygon {IllustrateEditPolygon $iillustrate(edit) $xx $yy}
		line {IllustrateEditLine $iillustrate(edit) $xx $yy}
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
		    switch [$ds9(canvas) type $id] {
			oval -
			rectangle -
			polygon {IllustrateMoveToBase $gr $xx $yy}
			line {IllustrateMoveToLine $gr $xx $yy}
			text {IllustrateMoveToText $gr $xx $yy}
		    }
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
		oval {IllustrateEditOval $iillustrate(edit) $xx $yy}
		rectangle {IllustrateEditBase $iillustrate(edit) $xx $yy}
		polygon {IllustrateEditPolygon $iillustrate(edit) $xx $yy}
		line {IllustrateEditLine $iillustrate(edit) $xx $yy}
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
    global iillustrate

    global debug
    if {$debug(tcl,illustrate)} {
	puts "IllustrateButtonRelease $iillustrate(motion) $xx $yy"
    }

    switch -- $iillustrate(motion) {
	none {}

	beginCreate {
	    # the user has just clicked, so resize to make visible or delete
	    IllustrateGraphicAntsOff $iillustrate(edit)
	    foreach {id x1 y1 x2 y2 color fill dash} $iillustrate(edit) {
		switch [$ds9(canvas) type $id] {
		    oval {IllustrateDefaultOval $id}
		    rectangle {IllustrateDefaultRectangle $id}
		    polygon {}
		    line {IllustrateDeleteGraphic $id}
		    text {}
		}

		IllustrateHandleOff $id
		switch [$ds9(canvas) type $id] {
		    oval -
		    rectangle -
		    text {IllustrateUpdateHandleCoordsBase $id}
		    polygon {IllustrateUpdateHandleCoordsPolygon $id}
		    line {IllustrateUpdateHandleCoordsLine $id}
		}
	    }
	}
	create {
	    # determine if this is an accident and just create the default
	    set dx [expr $xx-$iillustrate(motion,xx)]
	    set dy [expr $yy-$iillustrate(motion,yy)]
	    IllustrateGraphicAntsOff $iillustrate(edit)
	    foreach {id x1 y1 x2 y2 color fill dash} $iillustrate(edit) {
		if {[expr sqrt($dx*$dx + $dy*$dy)]<4} {
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
		    text {IllustrateUpdateHandleCoordsBase $id}
		    polygon {IllustrateUpdateHandleCoordsPolygon $id}
		    line {IllustrateUpdateHandleCoordsLine $id}
		}
	    }
	}
	
	beginMove {}
	move {
	    foreach gr $iillustrate(selection) {
		IllustrateGraphicAntsOff $gr
		foreach {id x1 y1 x2 y2 color fill dash} $gr {
		    IllustrateHandleOn $id
		    switch [$ds9(canvas) type $id] {
			oval -
			rectangle -
			text {IllustrateUpdateHandleCoordsBase $id}
			polygon {IllustrateUpdateHandleCoordsPolygon $id}
			line {IllustrateUpdateHandleCoordsLine $id}
		    }
		}
	    }
	    IllustrateUpdateSelection
	}

	beginEdit -
	edit {
	    IllustrateGraphicAntsOff $iillustrate(edit)
	    foreach {id x1 y1 x2 y2 color fill dash} $iillustrate(edit) {
		IllustrateHandleOn $id
		switch [$ds9(canvas) type $id] {
		    oval -
		    rectangle -
		    text {IllustrateUpdateHandleCoordsBase $id}
		    polygon {IllustrateUpdateHandleCoordsPolygon $id}
		    line {IllustrateUpdateHandleCoordsLine $id}
		}
	    }
	    IllustrateUpdateSelection
	}

	shiftregion {
	    $ds9(canvas) delete $iillustrate(ants)

	    set ll [$ds9(canvas) find enclosed \
			$iillustrate(motion,xx) $iillustrate(motion,yy) $xx $yy]
	    foreach id $ll {
		IllustrateAddToSelection $id
	    }
	}
    }

    unset iillustrate(id)
    unset iillustrate(handle)
    unset iillustrate(node)
    unset iillustrate(ants)
    unset iillustrate(edit)
    unset iillustrate(motion)
    unset iillustrate(motion,xx)
    unset iillustrate(motion,yy)
}

# Shift Button

proc IllustrateShiftButton {xx yy} {
    global ds9
    global iillustrate

    global debug
    if {$debug(tcl,illustrate)} {
	puts "IllustrateShiftButton $xx $yy"
    }

    set iillustrate(id) 0
    set iillustrate(ants) 0
    set iillustrate(handle) 0
    set iillustrate(node) 0
    set iillustrate(edit) {}
    set iillustrate(motion) none
    set iillustrate(motion,xx) $xx
    set iillustrate(motion,yy) $yy

    # if on graphic, add to selection, start move
    set id [IllustrateFind graphic $xx $yy]
    if {$id} {
	# if selected, unselect
	if {[IllustrateIsSelected $id]} {
	    IllustrateUnselect $id
	    set iillustrate(motion) none
	    return
	}

	# if not selected, add to selection
	IllustrateAddToSelection $id
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
	k {
	    event generate $ds9(canvas) <Motion> -warp 1 -x $xx -y [expr $yy-1]
	    IllustrateMoveSelection 0 -1
	}
	Down -
	j {
	    event generate $ds9(canvas) <Motion> -warp 1 -x $xx -y [expr $yy+1]
	    IllustrateMoveSelection 0 1
	}
	Left -
	h {
	    event generate $ds9(canvas) <Motion> -warp 1 -x [expr $xx-1] -y $yy
	    IllustrateMoveSelection -1 0
	}
	Right -
	l {
	    event generate $ds9(canvas) <Motion> -warp 1 -x [expr $xx+1] -y $yy
	    IllustrateMoveSelection 1 0
	}
    }
}

proc IllustrateKeyRelease {K A xx yy} {
    global ds9

    # MacOSX and Ubuntu returns bogus values in xx,yy
    # calculate our own values
    set xx [expr {[winfo pointerx $ds9(canvas)] - [winfo rootx $ds9(canvas)]}]
    set yy [expr {[winfo pointery $ds9(canvas)] - [winfo rooty $ds9(canvas)]}]

    global debug
    if {$debug(tcl,illustrate)} {
	puts "IllustrateKeyRelease $K $A $xx $yy"
    }
}
