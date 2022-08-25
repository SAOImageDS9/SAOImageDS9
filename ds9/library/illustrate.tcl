#  Copyright (C) 1999-2022
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc IllustrateDef {} {
    global illustrate
    global iillustrate
    global pillustrate

    set iillustrate(selected) {}
    set iillustrate(motion) none

    set illustrate(mode) pointer

    set illustrate(shape) circle
    set illustrate(color) cyan
    set illustrate(color,fill) green
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

    bind $ds9(canvas) <Shift-Button-1> {}
    bind $ds9(canvas) <Shift-B1-Motion> {}
    bind $ds9(canvas) <Shift-ButtonRelease-1> {}

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

proc IllustrateModeBegin {} {
    global iillustrate

    set iillustrate(selected) {}
    set iillustrate(motion) none

    IllustrateGraphicUnhighliteAll

    BindEventsIllustrate
    UpdateIllustrateMenu
}

proc IllustrateModeEnd {} {
    global iillustrate

    set iillustrate(selected) {}
    set iillustrate(motion) none

    IllustrateGraphicUnhighliteAll

    UnBindEventsIllustrate
    UpdateIllustrateMenu
}

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

proc IllustrateMotion {xx yy} {
    global ds9
    global illustrate
    
    global debug
    if {$debug(tcl,illustrate)} {
	puts "IllustrateMotion"
    }
}

proc IllustrateButton {xx yy} {
    global ds9
    global illustrate

    global debug
    if {$debug(tcl,illustrate)} {
	puts "IllustrateButton [$ds9(canvas) find closest $xx $yy 1]"
    }

    switch $illustrate(mode) {
	pointer {IllustrateButtonPointer $xx $yy}
	graphics {IllustrateButtonGraphic $xx $yy}
    }
}

proc IllustrateButtonPointer {xx yy} {
}

proc IllustrateButtonGraphic {xx yy} {
    global illustrate
    global iillustrate

    # see if we are on a handle
    set id [IllustrateGraphicFind handle $xx $yy]
    if {$id != {}} {
	return
    }

    # segment of polygon
    
    # see if we are on a graphic
    set id [IllustrateGraphicFind top $xx $yy]
    if {$id != {}} {
	IllustrateGraphicUnhighliteAll
	IllustrateGraphicHighlite $id
	set iillustrate(selected) $id
	set iillustrate(motion) beginMove
	return
    }

    # create new graphic
    IllustrateGraphicUnhighliteAll
    if {$iillustrate(selected) != {}} {
	set iillustrate(selected) {}
	set iillustrate(motion) none
	return
    }

    set iilustrate(motion) none

    IllustrateCreateGraphic $xx $yy
}

proc IllustrateCreateGraphic {xx yy} {
    global ds9
    global illustrate
    global iillustrate
    global pillustrate

    if {$illustrate(fill)} {
	set fill $illustrate(color,fill)
	set color $illustrate(color,fill)
    } else {
	set fill {}
	set color $illustrate(color)
    }
    if {$illustrate(dash)} {
	set dash {8 3}
    } else {
	set dash {}
    }

    switch $illustrate(shape) {
	circle {
	    set rr $pillustrate(circle,radius)
	    $ds9(canvas) create oval \
		[expr $xx-$rr] [expr $yy-$rr] \
		[expr $xx+$rr] [expr $yy+$rr]\
		-outline $color -fill $fill \
		-width $illustrate(width) \
		-dash $dash -tags top
	}
	ellipse {
	    set rr1 $pillustrate(ellipse,radius1)
	    set rr2 $pillustrate(ellipse,radius2)
	    $ds9(canvas) create oval \
		[expr $xx-$rr1] [expr $yy-$rr2] \
		[expr $xx+$rr1] [expr $yy+$rr2]\
		-outline $color -fill $fill \
		-width $illustrate(width) \
		-dash $dash -tags top
	}
	box {
	    set rr1 [expr $pillustrate(box,radius1)/2]
	    set rr2 [expr $pillustrate(box,radius2)/2]
	    $ds9(canvas) create rectangle \
		[expr $xx-$rr1] [expr $yy-$rr2] \
		[expr $xx+$rr1] [expr $yy+$rr2]\
		-outline $color -fill $fill \
		-width $illustrate(width) \
		-dash $dash -tags top
	}
	polygon {
	    set rr1 $pillustrate(polygon,width)
	    set rr2 $pillustrate(polygon,height)
	    $ds9(canvas) create polygon \
		[expr $xx-$rr1] [expr $yy-$rr2] \
		[expr $xx+$rr1] [expr $yy-$rr2] \
		[expr $xx+$rr1] [expr $yy+$rr2]\
		[expr $xx-$rr1] [expr $yy+$rr2]\
		-outline $color	-fill $fill \
		-width $illustrate(width) \
		-dash $dash -tags top
	}
	line {}
	text {
	    set txt {Text}
	    if {[EntryDialog [msgcat::mc {Text}] [msgcat::mc {Enter Text}] 40 txt]} {
		if {$txt != {}} {
		    $ds9(canvas) create text $xx $yy -text $txt \
			-fill $illustrate(color) \
			-font "{$illustrate(font)} $illustrate(font,size) $illustrate(font,weight) $illustrate(font,slant)" \
			-tags top

		}
	    }
	}
    }
}

proc IllustrateButtonMotion {xx yy} {
    global ds9
    global illustrate
    global iillustrate

    global debug
    if {$debug(tcl,illustrate)} {
	puts "IllustrateButtonMotion"
    }

    switch -- $iillustrate(motion) {
	none {}

	beginCreate -
	create {
	}

	beginMove -
	move {
	    puts "$xx $yy"
	    set iilustrate(motion) move
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
    global iillustrate

    global debug
    if {$debug(tcl,illustrate)} {
	puts "IllustrateButtonRelease"
    }

    switch -- $iillustrate(motion) {
	none {}

	beginCreate -
	create {
	}

	beginMove -
	move {
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

proc IllustrateGraphicFind {tag xx yy} {
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

    foreach id,fill $index {
	if {$fill == {}} {
	    $ds9(canvas) itemconfigure $id -fill {}
	}
    }

    # check to see if found item is a graphic
    if {$found != {}} {
	switch [$ds9(canvas) type $found] {
	    oval -
	    polygon -
	    rectangle -
	    line -
	    text {}
	    default {set found {}}
	}
    }

    return $found
}

proc IllustrateGraphicUnhighliteAll {} {
    global ds9

    foreach id [$ds9(canvas) find withtag {handle}] {
	$ds9(canvas) delete $id
    }
}

proc IllustrateGraphicHighlite {id} {
    global ds9

    set color [$ds9(canvas) itemcget $id -outline]
    switch [$ds9(canvas) type $id] {
	oval -
	polygon -
	rectangle {
	    set fill [$ds9(canvas) itemcget $id -fill]
	    if {$fill != {}} {
		set color $fill
	    }
	}
	default {}
    }

    set bbox [$ds9(canvas) bbox $id]

    set rr 2
    set x1 [lindex $bbox 0]
    set y1 [lindex $bbox 1]
    set x2 [lindex $bbox 2]
    set y2 [lindex $bbox 3]

    set h1 [$ds9(canvas) create rectangle \
		[expr $x1-$rr] [expr $y1-$rr] \
		[expr $x1+$rr] [expr $y1+$rr]\
		-outline $color -fill $color \
		-tags handle]
    $ds9(canvas) raise $h1 $id

    set h2 [$ds9(canvas) create rectangle \
		[expr $x2-$rr] [expr $y1-$rr] \
		[expr $x2+$rr] [expr $y1+$rr]\
		-outline $color -fill $color \
		-tags handle]
    $ds9(canvas) raise $h2 $id

    set h3 [$ds9(canvas) create rectangle \
		[expr $x2-$rr] [expr $y2-$rr] \
		[expr $x2+$rr] [expr $y2+$rr]\
		-outline $color -fill $color \
		-tags handle]
    $ds9(canvas) raise $h3 $id
    
    set h4 [$ds9(canvas) create rectangle \
		[expr $x1-$rr] [expr $y2-$rr] \
		[expr $x1+$rr] [expr $y2+$rr]\
		-outline $color -fill $color \
		-tags handle]
    $ds9(canvas) raise $h4 $id
}
