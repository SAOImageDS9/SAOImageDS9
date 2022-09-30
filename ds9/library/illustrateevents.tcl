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

    # node of a polygon
    if {[IllustrateFind node $xx $yy]} {
	SetCursor dotbox
	return
    }

    # segment of polygon
    set cnt 0
    set id [IllustratePolygonFindSegment $xx $yy cnt]
    if {$id} {
	if {[IllustrateIsSelected $id]} {
	    SetCursor draped_box
	    return
	}
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
	    IllustrateSaveUndo edit $id
	    set iillustrate(id) $id
	    set iillustrate(motion) beginEdit
	}
	return
    }
    
    # see if we are on a polygon node
    set nid [IllustrateFind node $xx $yy]
    if {$nid} {
	set id [IllustrateFindGraphicFromNode $nid]
	if {$id} {
	    IllustrateSaveUndo edit $id
	    set iillustrate(id) $id
	    set iillustrate(node) $nid
	    set iillustrate(motion) beginEdit
	    return
	}
    }
    
    # see if we are on a segment of polygon
    set cnt 0
    set id [IllustratePolygonFindSegment $xx $yy cnt]
    if {$id} {
	IllustratePolygonCreateNode $id $cnt $xx $yy
	set nid [IllustrateFind node $xx $yy]
	if {$nid} {
	    IllustrateSaveUndo edit $id
	    set iillustrate(id) $id
	    set iillustrate(node) $nid
	    set iillustrate(motion) beginEdit
	    return
	}
    }

    # see if we are on a graphic
    set id [IllustrateFind graphic $xx $yy]
    if {$id} {
	set iillustrate(motion) beginMove

	# if selected, don't do anything
	if {[IllustrateIsSelected $id]} {
	    IllustrateSaveUndo selectedit {}
	    return
	}

	# if not selected, select it, unselect all others
	IllustrateSelectNone
	IllustrateAddToSelection $id
	IllustrateSaveUndo selectedit {}
	return
    }	

    # if something selected, unselect
    if {[llength $iillustrate(selection)]} {
	IllustrateSelectNone
	return
    }

    # else, create new graphic
    set id [IllustrateCreateGraphic $xx $yy]
    if {$id} {
	IllustrateSaveUndo create $id
	switch [IllustrateGetType $id] {
	    circle {set iillustrate(handle) 1}
	    ellipse {set iillustrate(handle) 3}
	    box {set iillustrate(handle) 3}
	    polygon {set iillustrate(handle) 1}
	    line {set iillustrate(handle) 2}
	    text {}
	}
	set iillustrate(id) $id
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

    set id $iillustrate(id)
    switch -- $iillustrate(motion) {
	none {}

	beginCreate {
	    IllustrateGraphicAntsOn [IllustrateSaveGraphic $id]
	    IllustrateHandleOff $id
	    switch [IllustrateGetType $id] {
		polygon -
		text {}
		default {set iillustrate(motion) create}
	    }
	}
	create {
	    switch [IllustrateGetType $id] {
		circle {
		    IllustrateCircleEdit $id $xx $yy
		}
		ellipse -
		box {
		    IllustrateBaseEdit $id $xx $yy
		}
		polygon {}
		line {
		    IllustrateLineEdit $id $xx $yy
		}
		text {}
	    }
	}

	beginMove {
	    foreach gr $iillustrate(selection) {
		foreach {id color fillcolor dashlist} $gr {
		    IllustrateGraphicAntsOn $id
		    IllustrateHandleOff $id
		}
	    }
	    set iillustrate(motion) move
	}
	move {
	    foreach gr $iillustrate(selection) {
		foreach {id color fillcolor dashlist} $gr {
		    set dx [expr $xx-$iillustrate(motion,xx)]
		    set dy [expr $yy-$iillustrate(motion,yy)]
		    $ds9(canvas) move $id $dx $dy
		    switch [IllustrateGetType $id] {
			circle {IllustrateCircleEditCB $id}
			ellipse {}
			box {}
			polygon {}
			line {}
			text {}
		    }
		}
	    }
	    set iillustrate(motion,xx) $xx
	    set iillustrate(motion,yy) $yy
	}

	beginEdit {
	    IllustrateGraphicAntsOn $id
	    IllustrateHandleOff $id
	    set iillustrate(motion) edit
	}
	edit {
	    switch [IllustrateGetType $id] {
		circle {
		    IllustrateCircleEdit $id $xx $yy
		}
		ellipse -
		box {
		    IllustrateBaseEdit $id $xx $yy
		}
		polygon {
		    IllustratePolygonEdit $id $xx $yy
		}
		line {
		    IllustrateLineEdit $id $xx $yy
		}
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

    set id $iillustrate(id)
    switch -- $iillustrate(motion) {
	none {}

	beginCreate {
	    # the user has just clicked, so resize to make visible or delete
	    IllustrateGraphicAntsOff [IllustrateSaveGraphic $id]
	    switch [IllustrateGetType $id] {
		circle {
		    IllustrateCircleDefault $id
		    IllustrateBaseUpdateHandle $id
		}
		ellipse {
		    IllustrateEllipseDefault $id
		    IllustrateBaseUpdateHandle $id
		}
		box {
		    IllustrateBoxDefault $id
		    IllustrateBaseUpdateHandle $id
		}
		polygon {
		    IllustratePolygonDefault $id
		    IllustratePolygonUpdateHandle $id
		}
		line {IllustrateDeleteGraphicOne $id}
		text {}
	    }
	}
	create {
	    # determine if this is an accident and just create the default
	    set dx [expr $xx-$iillustrate(motion,xx)]
	    set dy [expr $yy-$iillustrate(motion,yy)]
	    IllustrateGraphicAntsOff [IllustrateSaveGraphic $id]
	    if {[expr sqrt($dx*$dx + $dy*$dy)]<4} {
		switch [IllustrateGetType $id] {
		    circle {
			IllustrateCircleDefault $id
			IllustrateBaseUpdateHandle $id
		    }
		    ellipse {
			IllustrateEllipseDefault $id
			IllustrateBaseUpdateHandle $id
		    }
		    box {
			IllustrateBoxDefault $id
			IllustrateBaseUpdateHandle $id
		    }
		    polygon {}
		    line {IllustrateDeleteGraphicOne $id}
		    text {}
		}
	    }

	    IllustrateHandleOff $id
	    switch [IllustrateGetType $id] {
		circle -
		ellipse -
		box -
		text {IllustrateBaseUpdateHandle $id}
		polygon {IllustratePolygonUpdateHandle $id}
		line {IllustrateLineUpdateHandle $id}
	    }
	}
	
	beginMove {}
	move {
	    foreach gr $iillustrate(selection) {
		IllustrateGraphicAntsOff $gr
		foreach {id color fillcolor dashlist} $gr {
		    IllustrateHandleOn $id
		    switch [IllustrateGetType $id] {
			circle {
			    IllustrateCircleEditCB $id
			    IllustrateBaseUpdateHandle $id
			}
			ellipse {
			    IllustrateBaseUpdateHandle $id
			}
			box {
			    IllustrateBaseUpdateHandle $id
			}
			text {
			    IllustrateBaseUpdateHandle $id
			}
			polygon {
			    IllustratePolygonUpdateHandle $id
			}
			line {
			    IllustrateLineUpdateHandle $id
			}
		    }
		}
	    }
	    IllustrateUpdateSelection
	}

	beginEdit -
	edit {
	    IllustrateGraphicAntsOff [IllustrateSaveGraphic $id]
	    IllustrateHandleOn $id
	    switch [IllustrateGetType $id] {
		circle -
		ellipse -
		box -
		text {IllustrateBaseUpdateHandle $id}
		polygon {
		    IllustratePolygonCleanup $id
		    IllustratePolygonUpdateHandle $id
		}
		line {IllustrateLineUpdateHandle $id}
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
    unset iillustrate(motion)
    unset iillustrate(motion,xx)
    unset iillustrate(motion,yy)

    # for undo/cut/copy/paste
    UpdateEditMenu
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
	BackSpace {
	    # see if we are on a polygon node
	    set nid [IllustrateFind node $xx $yy]
	    if {$nid} {
		set id [IllustrateFindGraphicFromNode $nid]
		IllustrateSaveUndo edit $id
		IllustratePolygonDeleteNode $nid
	    } else {
		IllustrateSaveUndo selectdelete {}
		IllustrateDeleteSelect
	    }
	}

	Up -
	k {
	    IllustrateSaveUndo selectedit {}
	    event generate $ds9(canvas) <Motion> -warp 1 -x $xx -y [expr $yy-1]
	    IllustrateMoveSelection 0 -1
	}
	Down -
	j {
	    IllustrateSaveUndo selectedit {}
	    event generate $ds9(canvas) <Motion> -warp 1 -x $xx -y [expr $yy+1]
	    IllustrateMoveSelection 0 1
	}
	Left -
	h {
	    IllustrateSaveUndo selectedit {}
	    event generate $ds9(canvas) <Motion> -warp 1 -x [expr $xx-1] -y $yy
	    IllustrateMoveSelection -1 0
	}
	Right -
	l {
	    IllustrateSaveUndo selectedit {}
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

    # for undo/cut/copy/paste
    UpdateEditMenu
}
