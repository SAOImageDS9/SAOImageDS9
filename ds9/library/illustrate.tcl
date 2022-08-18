#  Copyright (C) 1999-2022
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc IllustrateDef {} {
    global illustrate
    global pillustrate

    set illustrate(mode) pointer

    set illustrate(color) green
    set illustrate(color,fill) green
    set illustrate(fill) 1
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
    global pillustrate

    global debug
    if {$debug(tcl,illustrate)} {
	puts "IllustrateButton [$ds9(canvas) find closest $xx $yy 1]"
    }

    if {$illustrate(fill)} {
	set fill $illustrate(color,fill)
    } else {
	set fill {}
    }
    if {$illustrate(dash)} {
	set dash {8 3}
    } else {
	set dash {}
    }
    switch $illustrate(mode) {
	pointer {}
	circle {
	    set rr $pillustrate(circle,radius)
	    $ds9(canvas) create oval \
		[expr $xx-$rr] [expr $yy-$rr] \
		[expr $xx+$rr] [expr $yy+$rr]\
		-outline $illustrate(color) \
		-fill $fill \
		-width $illustrate(width) \
		-dash $dash
	}
	ellipse {
	    set rr1 $pillustrate(ellipse,radius1)
	    set rr2 $pillustrate(ellipse,radius2)
	    $ds9(canvas) create oval \
		[expr $xx-$rr1] [expr $yy-$rr2] \
		[expr $xx+$rr1] [expr $yy+$rr2]\
		-outline $illustrate(color) \
		-fill $fill \
		-width $illustrate(width) \
		-dash $dash
	}
	box {
	    set rr1 [expr $pillustrate(box,radius1)/2]
	    set rr2 [expr $pillustrate(box,radius2)/2]
	    $ds9(canvas) create rectangle \
		[expr $xx-$rr1] [expr $yy-$rr2] \
		[expr $xx+$rr1] [expr $yy+$rr2]\
		-outline $illustrate(color) \
		-fill $fill \
		-width $illustrate(width) \
		-dash $dash
	}
	polygon {
	    set rr1 $pillustrate(polygon,width)
	    set rr2 $pillustrate(polygon,height)
	    $ds9(canvas) create polygon \
		[expr $xx-$rr1] [expr $yy-$rr2] \
		[expr $xx+$rr1] [expr $yy-$rr2] \
		[expr $xx+$rr1] [expr $yy+$rr2]\
		[expr $xx-$rr1] [expr $yy+$rr2]\
		-outline $illustrate(color) \
		-fill $fill \
		-width $illustrate(width) \
		-dash $dash
	}
	line {}
	text {
	    set txt {Text}
	    if {[EntryDialog [msgcat::mc {Text}] [msgcat::mc {Enter Text}] 40 txt]} {
		if {$txt != {}} {
		    $ds9(canvas) create text $xx $yy -text $txt \
			-fill $illustrate(color) \
			-font "{$illustrate(font)} $illustrate(font,size) $illustrate(font,weight) $illustrate(font,slant)"
		}
	    }
	}
    }
}

proc IllustrateButtonMotion {xx yy} {
    global ds9
    global illustrate

    global debug
    if {$debug(tcl,illustrate)} {
	puts "IllustrateButtonMotion"
    }
}

proc IllustrateButtonRelease {xx yy} {
    global ds9
    global illustrate

    global debug
    if {$debug(tcl,illustrate)} {
	puts "IllustrateButtonRelease"
    }
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
