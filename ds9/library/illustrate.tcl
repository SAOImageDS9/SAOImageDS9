#  Copyright (C) 1999-2022
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc IllustrateDef {} {
    global illustrate
    global iillustrate
    global pillustrate

    set iillustrate(selection) {}
    set iillustrate(motion) none

    set illustrate(mode) graphics

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
    bind $ds9(canvas) <Shift-B1-Motion> {IllustrateShiftButtonMotion %x %y}
    bind $ds9(canvas) <Shift-ButtonRelease-1> {IllustrateShiftButtonRelease %x %y}

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
    bind $ds9(canvas) <Shift-B1-Motion> {}
    bind $ds9(canvas) <Shift-ButtonRelease-1> {}

    bind $ds9(canvas) <Key> {}
    bind $ds9(canvas) <KeyRelease> {}
}

# Mode

proc IllustrateModeBegin {} {
    global iillustrate

    set iillustrate(selection) {}
    set iillustrate(motion) none

    IllustrateGraphicUnhighliteAll

    BindEventsIllustrate
    UpdateIllustrateMenu
}

proc IllustrateModeEnd {} {
    global iillustrate

    set iillustrate(selection) {}
    set iillustrate(motion) none

    IllustrateGraphicUnhighliteAll

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
    
    global debug
    if {$debug(tcl,illustrate)} {
	puts "IllustrateMotion"
    }

    switch $illustrate(mode) {
	pointer {}
	graphics {IllustrateMotionGraphic $xx $yy}
    }
}

proc IllustrateMotionGraphic {xx yy} {
    global ds9
    global illustrate
    global iillustrate

    if {[llength $iillustrate(selection)]} {
    }
}

# Button

proc IllustrateButton {xx yy} {
    global ds9
    global illustrate

    global debug
    if {$debug(tcl,illustrate)} {
	puts "IllustrateButton $xx $yy"
    }

    switch $illustrate(mode) {
	pointer {}
	graphics {IllustrateButtonGraphic $xx $yy}
    }
}

proc IllustrateButtonGraphic {xx yy} {
    global ds9
    global illustrate
    global iillustrate

    # see if we are on a handle
    set id [IllustrateFindGraphic handle $xx $yy]
    if {$id != {}} {
	return
    }
    
    # segment of polygon
    
    IllustrateDumpAll
    # see if we are on a graphic
    set id [IllustrateFindGraphic graphic $xx $yy]
    if {$id != {}} {
	puts $id
	IllustrateGraphicUnhighliteAll
	IllustrateGraphicHighlite $id

	set coords [$ds9(canvas) coords $id]
	set color [$ds9(canvas) itemcget $id -outline]
	set fill [$ds9(canvas) itemcget $id -fill]
	set dash [$ds9(canvas) itemcget $id -dash]

	set iillustrate(selection) [list [list $id [lindex $coords 0] [lindex $coords 1] [lindex $coords 2] [lindex $coords 3] $color $fill $dash]]

	set iillustrate(selection,xx) $xx
	set iillustrate(selection,yy) $yy
	set iillustrate(motion) beginMove

	return
    }

    # create new graphic
    IllustrateGraphicUnhighliteAll
    if {[llength $iillustrate(selection)]} {
	set iillustrate(selection) {}
	set iillustrate(motion) none
	return
    }

    set iilustrate(motion) none

    IllustrateCreateGraphic $xx $yy
}

proc IllustrateButtonMotion {xx yy} {
    global ds9
    global illustrate

    global debug
    if {$debug(tcl,illustrate)} {
	puts "IllustrateButtonMotion $xx $yy"
    }

    switch $illustrate(mode) {
	pointer {}
	graphics {IllustrateButtonMotionGraphic $xx $yy}
    }
}

proc IllustrateButtonMotionGraphic {xx yy} {
    global ds9
    global illustrate
    global iillustrate

    switch -- $iillustrate(motion) {
	none {}

	beginCreate -
	create {
	}

	beginMove {
	    set dx [expr $xx-$iillustrate(selection,xx)]
	    set dy [expr $yy-$iillustrate(selection,yy)]

	    if {$dx==0 && $dy==0} {
		return
	    }

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
		    set dx [expr $xx-$iillustrate(selection,xx)]
		    set dy [expr $yy-$iillustrate(selection,yy)]

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

	region -
	shiftregion {
	}
    }
}

proc IllustrateButtonRelease {xx yy} {
    global ds9
    global illustrate

    global debug
    if {$debug(tcl,illustrate)} {
	puts "IllustrateButtonRelease $xx $yy"
    }

    switch $illustrate(mode) {
	pointer {}
	graphics {IllustrateButtonReleaseGraphic $xx $yy}
    }
}

proc IllustrateButtonReleaseGraphic {xx yy} {
    global ds9
    global illustrate
    global iillustrate

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
	}

	beginEdit -
	edit {
	}

	beginRotate -
	rotate {
	}

	region -
	shiftregion {
	}
    }
    set iilustrate(motion) none
}

# Shift Button

proc IllustrateShiftButton {xx yy} {
    global ds9
    global illustrate

    global debug
    if {$debug(tcl,illustrate)} {
	puts "IllustrateShiftButton $xx $yy"
    }

    switch $illustrate(mode) {
	pointer {}
	graphics {}
    }
}

proc IllustrateShiftButtonMotion {xx yy} {
    global ds9
    global illustrate

    global debug
    if {$debug(tcl,illustrate)} {
	puts "IllustrateShiftButtonMotion"
    }

    switch $illustrate(mode) {
	pointer {}
	graphics {}
    }
}

proc IllustrateShiftButtonRelease {xx yy} {
    global ds9
    global illustrate

    global debug
    if {$debug(tcl,illustrate)} {
	puts "IllustrateShiftButtonRelease"
    }

    switch $illustrate(mode) {
	pointer {}
	graphics {}
    }
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
	    $ds9(canvas) itemconfigure $id \
		-outline $color \
		-fill $fill \
		-width $illustrate(width) \
		-dash $dash
	    
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

proc IllustrateGraphicUnhighliteAll {} {
    global ds9

    foreach id [$ds9(canvas) find withtag {handle}] {
	$ds9(canvas) itemconfigure $id -state hidden
    }
}

proc IllustrateGraphicHighlite {id} {
    global ds9

    foreach hh [$ds9(canvas) find withtag gr${id}] {
	$ds9(canvas) itemconfigure $hh -state normal
    }
}

proc IllustrateDumpAll {} {
    global ds9
    
    foreach id [$ds9(canvas) find all] {
	puts "$id: [$ds9(canvas) gettags $id]"
    }
}
