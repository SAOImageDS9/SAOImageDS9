#  Copyright (C) 1999-2022
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc IllustrateDef {} {
    global illustrate

    set illustrate(top) .illustrate
    set illustrate(mode) pointer

    set illustrate(text,color) green
    set illustrate(text,font,family) helvetica
    set illustrate(text,font,size) 12
    set illustrate(text,font,weight) normal
    set illustrate(text,font,slant) roman
}

proc IllustrateDialog {} {
    global illustrate

    # see if we already have a window visible
    if {[winfo exists $illustrate(top)]} {
	raise $illustrate(top)
	return
    }

    # create the window
    set w $illustrate(top)

    Toplevel $w {} 6 [msgcat::mc {Illustrate}] IllustrateDestroyDialog

    bind $w <<Close>> IllustrateDestroyDialog

    RadioButton $w.pointer [msgcat::mc {Pointer}] illustrate mode pointer {}
    RadioButton $w.circle [msgcat::mc {Circle}] illustrate mode circle {}
    RadioButton $w.ellipse [msgcat::mc {Ellipse}] illustrate mode ellipse {}
    RadioButton $w.box [msgcat::mc {Box}] illustrate mode box {}
    RadioButton $w.line [msgcat::mc {Line}] illustrate mode line {}
    RadioButton $w.text [msgcat::mc {Text}] illustrate mode text {}
    
    ButtonButton $w.front [msgcat::mc {Front}] {}
    ButtonButton $w.prev [msgcat::mc {Previous}] {}
    ButtonButton $w.next [msgcat::mc {Next}] {}
    ButtonButton $w.back [msgcat::mc {Back}] {}

    ttk::menubutton $w.textcolor \
	-textvariable illustrate(text,color) \
	-menu $w.textcolor.m

    ColorMenu $w.textcolor.m illustrate text,color {}

    ttk::menubutton $w.textfont \
	-textvariable illustrate(text,font,family) \
	-menu $w.textfont.m

    FontMenu $w.textfont.m illustrate \
	text,font,family text,font,size text,font,weight text,font,slant {}

    pack $w.pointer $w.circle $w.ellipse $w.box $w.line $w.text \
	$w.front $w.prev $w.next $w.back \
	$w.textcolor $w.textfont \
	-side top -fill both -expand true
}

proc IllustrateDestroyDialog {} {
    global illustrate

    if {[winfo exists $illustrate(top)]} {
	destroy $illustrate(top)
    }
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

    global debug
    if {$debug(tcl,illustrate)} {
	puts "IllustrateButton [$ds9(canvas) find closest $xx $yy 1]"
    }

    switch $illustrate(mode) {
	pointer {}
	circle {}
	ellispe {}
	box {}
	line {}
	text {
	    set txt {Text}
	    if {[EntryDialog [msgcat::mc {Text}] [msgcat::mc {Enter Text}] 20 txt]} {
		if {$txt != {}} {
		    $ds9(canvas) create text $xx $yy -text $txt \
			-fill $illustrate(text,color) \
			-font "{$illustrate(text,font,family)} $illustrate(text,font,size) $illustrate(text,font,weight) $illustrate(text,font,slant)"
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
