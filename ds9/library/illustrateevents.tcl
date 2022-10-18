#  Copyright (C) 1999-2022
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc IllustrateBindEvents {} {
    global ds9

    global debug
    if {$debug(tcl,events)} {
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
    bind $ds9(canvas) <Shift-Motion> {IllustrateShiftMotion %x %y}

    bind $ds9(canvas) <Button-1> {IllustrateButton %x %y}
    bind $ds9(canvas) <Shift-Button-1> {IllustrateShiftButton %x %y}
    bind $ds9(canvas) <B1-Motion> {IllustrateButtonMotion %x %y}
    bind $ds9(canvas) <ButtonRelease-1> {IllustrateButtonRelease %x %y}

    bind $ds9(canvas) <Double-1> {IllustrateDoubleButton %x %y}
    bind $ds9(canvas) <Double-ButtonRelease-1> \
	{IllustrateDoubleReleaseButton %x %y}

    bind $ds9(canvas) <Key> {IllustrateKey %K %A %x %y}
    bind $ds9(canvas) <KeyRelease> {IllustrateKeyRelease %K %A %x %y}
}

proc IllustrateUnBindEvents {} {
    global ds9

    global debug
    if {$debug(tcl,events)} {
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
    bind $ds9(canvas) <Shift-Motion> {}

    bind $ds9(canvas) <Button-1> {}
    bind $ds9(canvas) <Shift-Button-1> {}
    bind $ds9(canvas) <B1-Motion> {}
    bind $ds9(canvas) <ButtonRelease-1> {}

    bind $ds9(canvas) <Double-1> {}
    bind $ds9(canvas) <Double-ButtonRelease-1> {}

    bind $ds9(canvas) <Key> {}
    bind $ds9(canvas) <KeyRelease> {}
}

# Enter/Leave

proc IllustrateEnter {} {
    global ds9
    
    global debug
    if {$debug(tcl,events)} {
	puts stderr "IllustrateEnter"
    }

    # check to see if this event was generated while processing other events
    if {$ds9(b1) || $ds9(sb1)} {
	return
    }

    focus $ds9(canvas)
}

proc IllustrateLeave {} {
    global ds9

    global debug
    if {$debug(tcl,events)} {
	puts stderr "IllustrateLeave"
    }

    # check to see if this event was generated while processing other events
    if {$ds9(b1) || $ds9(sb1)} {
	return
    }

    focus {}
}

# Motion

proc IllustrateMotion {xx yy} {
    global ds9
    
    global debug
    if {$debug(tcl,events)} {
	puts "IllustrateMotion"
    }

    IllustrateDoMotion $xx $yy sizing
}

proc IllustrateShiftMotion {xx yy} {
    global ds9

    global debug
    if {$debug(tcl,events)} {
	puts "IllustrateShiftMotion"
    }

    IllustrateDoMotion $xx $yy exchange
}

proc IllustrateDoMotion {xx yy cursor} {
    global ds9

    # see if we are on a handle
    if {[IllustrateFind handle $xx $yy]} {
	SetCursor $cursor
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

    # let others know that the mouse is down
    set ds9(b1) 1

    global debug
    if {$debug(tcl,events)} {
	puts "IllustrateButton $xx $yy $ds9(b1) $ds9(sb1)"
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
	    IllustrateSaveUndo edit $id
	    set iillustrate(id) $id
	    set iillustrate(edit) [IllustrateSaveSelection $id]
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
	    set iillustrate(edit) [IllustrateSaveSelection $id]
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
	    set iillustrate(edit) [IllustrateSaveSelection $id]
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
	set iillustrate(edit) [IllustrateSaveSelection $id]
	set iillustrate(motion) beginCreate
    }
}

proc IllustrateShiftButton {xx yy} {
    global ds9
    global iillustrate

    # let others know that the mouse is down
    set ds9(sb1) 1

    global debug
    if {$debug(tcl,events)} {
	puts "IllustrateShiftButton $xx $yy $ds9(b1) $ds9(sb1)"
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
	    IllustrateSaveUndo edit $id
	    set iillustrate(id) $id
	    set iillustrate(edit) [IllustrateSaveSelection $id]
	    set iillustrate(motion) beginRotate
	}
	return
    }

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

proc IllustrateButtonMotion {xx yy} {
    global ds9
    global iillustrate

    global debug
    if {$debug(tcl,events)} {
	puts "IllustrateButtonMotion $iillustrate(motion) $xx $yy $ds9(b1) $ds9(sb1)"
    }

    # abort if we are here by accident (such as a double click)
    if {($ds9(b1) == 0) && ($ds9(sb1) == 0)} {
	return
    }

    set id $iillustrate(id)
    switch -- $iillustrate(motion) {
	none {}

	beginCreate {
	    IllustrateAntsOn $id
	    IllustrateHandleOff $id
	    switch [IllustrateGetType $id] {
		polygon {}
		default {set iillustrate(motion) create}
	    }
	}
	create {
	    IllustrateEdit $id $xx $yy
	}

	beginMove {
	    foreach gr $iillustrate(selection) {
		foreach {id color fill width dash} $gr {
		    IllustrateAntsOn $id
		    IllustrateHandleOff $id
		}
	    }
	    set iillustrate(motion) move
	}
	move {
	    foreach gr $iillustrate(selection) {
		foreach {id color fill width dash} $gr {
		    set dx [expr $xx-$iillustrate(motion,xx)]
		    set dy [expr $yy-$iillustrate(motion,yy)]
		    $ds9(canvas) move $id $dx $dy
		    IllustrateEditCB $id
		}
	    }
	    set iillustrate(motion,xx) $xx
	    set iillustrate(motion,yy) $yy
	}

	beginEdit {
	    IllustrateAntsOn $id
	    IllustrateHandleOff $id
	    set iillustrate(motion) edit
	}
	edit {
	    IllustrateEdit $id $xx $yy
	    IllustrateEditCB $id
	}

	beginRotate {
	    IllustrateAntsOn $id
	    IllustrateHandleOff $id
	    set iillustrate(motion) rotate
	}
	rotate {
	    IllustrateRotate $id $xx $yy
	    IllustrateRotateCB $id
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
    if {$debug(tcl,events)} {
	puts "IllustrateButtonRelease $iillustrate(motion) $xx $yy $ds9(b1) $ds9(sb1)"
    }

    # abort if we are here by accident (such as a double click)
    if {($ds9(b1) == 0) && ($ds9(sb1) == 0)} {
	return
    }

    set id $iillustrate(id)
    switch -- $iillustrate(motion) {
	none {}

	beginCreate {
	    # the user has just clicked, so resize to make visible or delete
	    IllustrateAntsOff $iillustrate(edit)
	    IllustrateDefault $id
	    IllustrateUpdateHandle $id
	}
	create {
	    # determine if this is an accident and just create the default
	    set dx [expr $xx-$iillustrate(motion,xx)]
	    set dy [expr $yy-$iillustrate(motion,yy)]
	    IllustrateAntsOff $iillustrate(edit)
	    if {[expr sqrt($dx*$dx + $dy*$dy)]<4} {
		IllustrateDefault $id
	    }

	    IllustrateHandleOff $id
	    IllustrateUpdateHandle $id
	}
	
	beginMove {}
	move {
	    foreach gr $iillustrate(selection) {
		IllustrateAntsOff $gr
		foreach {id color fill width dash} $gr {
		    IllustrateHandleOn $id
		    IllustrateUpdateHandle $id
		    IllustrateEditCB $id
		}
	    }
	    IllustrateUpdateSelection
	}

	beginEdit -
	edit {
	    IllustrateAntsOff $iillustrate(edit)
	    IllustrateHandleOn $id
	    IllustrateUpdateHandle $id
	    IllustrateUpdateSelection
	}

	beginRotate -
	rotate {
	    IllustrateAntsOff $iillustrate(edit)
	    IllustrateHandleOn $id
	    IllustrateUpdateHandle $id
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

    # let others know that the mouse is up
    set ds9(b1) 0
    set ds9(sb1) 0

    # for undo/cut/copy/paste
    UpdateEditMenu
}

# Double Button

proc IllustrateDoubleButton {xx yy} {
    global ds9
    global iillustrate

    global debug
    if {$debug(tcl,events)} {
	puts "IllustrateDoubleButton $xx $yy"
    }

    # see if we are on a graphic
    set id [IllustrateFind graphic $xx $yy]
    if {$id} {
	IllustrateDialog $id
    }
}

proc IllustrateDoubleReleaseButton {xx yy} {
    global ds9
    global iillustrate

    global debug
    if {$debug(tcl,events)} {
	puts "IllustrateDoubleReleaseButton $xx $yy"
    }

}

# Key

proc IllustrateKey {K A xx yy} {
    global ds9

    # MacOSX and maybe Ubuntu returns bogus values in xx,yy
    # calculate our own values
    set xx [expr {[winfo pointerx $ds9(canvas)] - [winfo rootx $ds9(canvas)]}]
    set yy [expr {[winfo pointery $ds9(canvas)] - [winfo rooty $ds9(canvas)]}]

    global debug
    if {$debug(tcl,events)} {
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
    if {$debug(tcl,events)} {
	puts "IllustrateKeyRelease $K $A $xx $yy"
    }

    # for undo/cut/copy/paste
    UpdateEditMenu
}

# util

proc IllustrateMoveSelection {dx dy} {
    global ds9
    global iillustrate

    foreach gr $iillustrate(selection) {
	foreach {id color fill width dash} $gr {
	    $ds9(canvas) move $id $dx $dy
	    IllustrateEditCB $id
	    IllustrateUpdateHandle $id
	}
    }
}
