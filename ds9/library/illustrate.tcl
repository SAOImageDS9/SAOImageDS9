#  Copyright (C) 1999-2022
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc IllustrateDef {} {
    global illustrate
    global iillustrate
    global pillustrate

    set iillustrate(selection) {}

    set illustrate(shape) circle
    set illustrate(color) cyan
    set illustrate(fill) 0
    set illustrate(width) 1
    set illustrate(dash) 0
    set illustrate(font) helvetica
    set illustrate(font,size) 12
    set illustrate(font,weight) normal
    set illustrate(font,slant) roman

    array set pillustrate [array get illustrate]

    set pillustrate(circle,radius) 20
    set pillustrate(ellipse,radius1) 40
    set pillustrate(ellipse,radius2) 20
    set pillustrate(box,radius1) 80
    set pillustrate(box,radius2) 40
    set pillustrate(polygon,width) 20
    set pillustrate(polygon,height) 20
}

# Events

proc BindEventsIllustrate {} {
    global ds9

    global debug
    if {$debug(tcl,illustrate)} {
	puts stderr "BindEventsIllustrate"
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

proc UnBindEventsIllustrate {} {
    global ds9

    global debug
    if {$debug(tcl,illustrate)} {
	puts stderr "UnBindEventsIllustrate"
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

# Mode

proc IllustrateModeBegin {} {
    global iillustrate

    IllustrateUnselectAll

    BindEventsIllustrate
    UpdateIllustrateMenu
}

proc IllustrateModeEnd {} {
    global iillustrate

    IllustrateUnselectAll

    UnBindEventsIllustrate
    UpdateIllustrateMenu
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
	IllustrateUnselectAll
	IllustrateAddSelection $id
	return
    }	

    # create new graphic
    if {[llength $iillustrate(selection)]} {
	IllustrateUnselectAll
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
		    # graphic
		    $ds9(canvas) itemconfigure $id \
			-outline white \
			-fill {} \
			-dash {8 3}

		    # handles
		    foreach hh [$ds9(canvas) find withtag gr${id}] {
			$ds9(canvas) itemconfigure $hh -state hidden
		    }
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

		    # handles
		    set rr 2
		    set bbox [$ds9(canvas) bbox $id]
		    set bbx1 [lindex $bbox 0]
		    set bby1 [lindex $bbox 1]
		    set bbx2 [lindex $bbox 2]
		    set bby2 [lindex $bbox 3]

		    set hh [$ds9(canvas) find withtag "gr${id} && h1"]
		    $ds9(canvas) coords $hh \
			[expr $bbx1-$rr] [expr $bby1-$rr] \
			[expr $bbx1+$rr] [expr $bby1+$rr]

		    set hh [$ds9(canvas) find withtag "gr${id} && h2"]
		    $ds9(canvas) coords $hh \
			[expr $bbx2-$rr] [expr $bby1-$rr] \
			[expr $bbx2+$rr] [expr $bby1+$rr]\

		    set hh [$ds9(canvas) find withtag "gr${id} && h3"]
		    $ds9(canvas) coords $hh \
			[expr $bbx2-$rr] [expr $bby2-$rr] \
			[expr $bbx2+$rr] [expr $bby2+$rr]\

		    set hh [$ds9(canvas) find withtag "gr${id} && h4"]
		    $ds9(canvas) coords $hh \
			[expr $bbx1-$rr] [expr $bby2-$rr] \
			[expr $bbx1+$rr] [expr $bby2+$rr]\
		    }
	    }
	}

	beginEdit -
	edit {
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
		    # graphic
		    $ds9(canvas) itemconfigure $id \
			-outline $color \
			-fill $fill \
			-dash $dash

		    # handles
		    foreach hh [$ds9(canvas) find withtag gr${id}] {
			$ds9(canvas) itemconfigure $hh -state normal
		    }
		}
	    }

	    IllustrateUpdateSelection
	}

	beginEdit -
	edit {
	}

	beginRotate -
	rotate {
	}

	shiftregion {
	    $ds9(canvas) delete $iillustrate(ants)

	    set ll [$ds9(canvas) find enclosed \
			$iillustrate(motion,xx) $iillustrate(motion,yy) $xx $yy]
	    foreach id $ll {
		IllustrateAddSelection $id
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
	IllustrateAddSelection $id
	set iillustrate(motion) beginMove
	return
    }	

    # otherwise, dancing ants
    IllustrateUnselectAll
    
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
	BackSpace {}

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

# Graphics

proc IllustrateCreateGraphic {xx yy} {
    global ds9
    global illustrate
    global iillustrate
    global pillustrate

    if {$illustrate(fill)} {
	set fill $illustrate(color)
    } else {
	set fill {}
    }
    if {$illustrate(dash)} {
	set dash {8 3}
    } else {
	set dash {}
    }

    set id {}
    switch $illustrate(shape) {
	circle {
	    set rr $pillustrate(circle,radius)
	    set id [$ds9(canvas) create oval \
			[expr $xx-$rr] [expr $yy-$rr] \
			[expr $xx+$rr] [expr $yy+$rr]\
			-outline $illustrate(color) \
			-fill $fill \
			-width $illustrate(width) \
			-dash $dash -tags graphic]
	}
	ellipse {
	    set rr1 $pillustrate(ellipse,radius1)
	    set rr2 $pillustrate(ellipse,radius2)
	    set id [$ds9(canvas) create oval \
			[expr $xx-$rr1] [expr $yy-$rr2] \
			[expr $xx+$rr1] [expr $yy+$rr2]\
			-outline $illustrate(color) \
			-fill $fill \
			-width $illustrate(width) \
			-dash $dash -tags graphic]
	}
	box {
	    set rr1 [expr $pillustrate(box,radius1)/2]
	    set rr2 [expr $pillustrate(box,radius2)/2]
	    set id [$ds9(canvas) create rectangle \
			[expr $xx-$rr1] [expr $yy-$rr2] \
			[expr $xx+$rr1] [expr $yy+$rr2]\
			-outline $illustrate(color) \
			-fill $fill \
			-width $illustrate(width) \
			-dash $dash -tags graphic]
	}
	polygon {
	    set rr1 $pillustrate(polygon,width)
	    set rr2 $pillustrate(polygon,height)
	    set id [$ds9(canvas) create polygon \
			[expr $xx-$rr1] [expr $yy-$rr2] \
			[expr $xx+$rr1] [expr $yy-$rr2] \
			[expr $xx+$rr1] [expr $yy+$rr2]\
			[expr $xx-$rr1] [expr $yy+$rr2]\
			-outline $illustrate(color)	\
			-fill $fill \
			-width $illustrate(width) \
			-dash $dash -tags graphic]
	}
	line {}
	text {
	    set txt {Text}
	    if {[EntryDialog [msgcat::mc {Text}] [msgcat::mc {Enter Text}] 40 txt]} {
		if {$txt != {}} {
		    set id [$ds9(canvas) create text $xx $yy -text $txt \
				-fill $illustrate(color) \
				-font "{$illustrate(font)} $illustrate(font,size) $illustrate(font,weight) $illustrate(font,slant)" \
				-tags graphic]

		}
	    }
	}
    }
    if {$id != {}} {
	IllustrateCreateGraphicHandle $id
    }
}

proc IllustrateCreateGraphicHandle {id} {
    global ds9

    set rr 2

    set color [$ds9(canvas) itemcget $id -outline]
    set bbox [$ds9(canvas) bbox $id]

    set bbx1 [lindex $bbox 0]
    set bby1 [lindex $bbox 1]
    set bbx2 [lindex $bbox 2]
    set bby2 [lindex $bbox 3]

    set h1 [$ds9(canvas) create rectangle \
		[expr $bbx1-$rr] [expr $bby1-$rr] \
		[expr $bbx1+$rr] [expr $bby1+$rr]\
		-outline $color -fill $color \
		-state hidden \
		-tags [list handle gr${id} h1]]
    $ds9(canvas) raise $h1 $id

    set h2 [$ds9(canvas) create rectangle \
		[expr $bbx2-$rr] [expr $bby1-$rr] \
		[expr $bbx2+$rr] [expr $bby1+$rr]\
		-outline $color -fill $color \
		-state hidden \
		-tags [list handle gr${id} h2]]
    $ds9(canvas) raise $h2 $id

    set h3 [$ds9(canvas) create rectangle \
		[expr $bbx2-$rr] [expr $bby2-$rr] \
		[expr $bbx2+$rr] [expr $bby2+$rr]\
		-outline $color -fill $color \
		-state hidden \
		-tags [list handle gr${id} h3]]
    $ds9(canvas) raise $h3 $id
    
    set h4 [$ds9(canvas) create rectangle \
		[expr $bbx1-$rr] [expr $bby2-$rr] \
		[expr $bbx1+$rr] [expr $bby2+$rr]\
		-outline $color -fill $color \
		-state hidden \
		-tags [list handle gr${id} h4]]
    $ds9(canvas) raise $h4 $id
}

proc IllustrateUpdateGraphic {} {
    global ds9
    global illustrate
    global iillustrate
    
    set color $illustrate(color)
    if {$illustrate(fill)} {
	set fill $illustrate(color)
    } else {
	set fill {}
    }
    if {$illustrate(dash)} {
	set dash {8 3}
    } else {
	set dash {}
    }

    set old $iillustrate(selection)
    set iillustrate(selection) {}
    foreach gr $old {
	foreach {id x1 y1 x2 y2 ocolor ofill odash} $gr {
	    # graphic
	    switch [$ds9(canvas) type $id] {
		oval -
		polygon -
		rectangle {
		    $ds9(canvas) itemconfigure $id \
			-outline $color \
			-fill $fill \
			-width $illustrate(width) \
			-dash $dash
		}
		line {
		}
		text {
		    $ds9(canvas) itemconfigure $id \
			-fill $fill \
			-font "{$illustrate(font)} $illustrate(font,size) $illustrate(font,weight) $illustrate(font,slant)"

		}
		default {}
	    }
	    
	    # handles
	    foreach hh [$ds9(canvas) find withtag gr${id}] {
		$ds9(canvas) itemconfigure $hh -outline $color -fill $color
	    }

	    # update selection list
	    lappend iillustrate(selection) \
		[list $id $x1 $y1 $x2 $y2 $color $fill $dash]
	}
    }
}

proc IllustrateFindGraphic {tag xx yy} {
    global ds9

    set found {}
    
    # must turn on fill for 'find closest' to work
    set index {}
    foreach id [$ds9(canvas) find withtag $tag] {
	switch [$ds9(canvas) type $id] {
	    oval -
	    polygon -
	    rectangle {
		# is fill on?
		set fill [$ds9(canvas) itemcget $id -fill]
		lappend index [list $id $fill]
		if {$fill == {}} {
		    $ds9(canvas) itemconfigure $id -fill black
		}
	    }
	    default {}
	}
    }
    
    set found [$ds9(canvas) find closest $xx $yy 1]

    foreach gr $index {
	foreach {id fill} $gr {
	    if {$fill == {}} {
		$ds9(canvas) itemconfigure $id -fill {}
	    }
	}
    }

    # check to see if found item is a graphic
    if {$found != {}} {
	if {[lsearch [$ds9(canvas) gettags $found] $tag] == -1} {
	    set found {}
	}
    }

    return $found
}

# Current Selection

proc IllustrateIsSelected {id} {
    global ds9
    global illustrate
    global iillustrate
    
    foreach gr $iillustrate(selection) {
	foreach {idd x1 y1 x2 y2 color fill dash} $gr {
	    if {$id == $idd} {
		return 1
	    }
	}
    }
    return 0
}

proc IllustrateUpdateSelection {} {
    global ds9
    global illustrate
    global iillustrate

    set old $iillustrate(selection)
    set iillustrate(selection) {}
    foreach gr $old {
	foreach {id x1 y1 x2 y2 color fill dash} $gr {
	    set coords [$ds9(canvas) coords $id]
	    set color [$ds9(canvas) itemcget $id -outline]
	    set fill [$ds9(canvas) itemcget $id -fill]
	    set dash [$ds9(canvas) itemcget $id -dash]

	    lappend iillustrate(selection) [list $id [lindex $coords 0] [lindex $coords 1] [lindex $coords 2] [lindex $coords 3] $color $fill $dash]
	}
    }
}

proc IllustrateAddSelection {id} {
    global ds9
    global illustrate
    global iillustrate

    foreach hh [$ds9(canvas) find withtag gr${id}] {
	$ds9(canvas) itemconfigure $hh -state normal
    }

    set coords [$ds9(canvas) coords $id]
    set color [$ds9(canvas) itemcget $id -outline]
    set fill [$ds9(canvas) itemcget $id -fill]
    set dash [$ds9(canvas) itemcget $id -dash]

    lappend iillustrate(selection) [list $id [lindex $coords 0] [lindex $coords 1] [lindex $coords 2] [lindex $coords 3] $color $fill $dash]

}

proc IllustrateUnselect {id} {
    global ds9
    global illustrate
    global iillustrate
    
    foreach hh [$ds9(canvas) find withtag gr${id}] {
	$ds9(canvas) itemconfigure $hh -state hidden
    }
    
    set old $iillustrate(selection)
    set iillustrate(selection) {}
    foreach gr $old {
	foreach {idd x1 y1 x2 y2 color fill dash} $gr {
	    if {$id != $idd} {
		lappend iillustrate(selection) $gr
	    }
	}
    }
}

proc IllustrateUnselectAll {} {
    global ds9
    global illustrate
    global iillustrate
    
    foreach id [$ds9(canvas) find withtag {handle}] {
	$ds9(canvas) itemconfigure $id -state hidden
    }
    set iillustrate(selection) {}
}

# Util

proc IllustrateDumpAll {} {
    global ds9
    
    foreach id [$ds9(canvas) find all] {
	puts "$id: [$ds9(canvas) gettags $id]"
    }
}
