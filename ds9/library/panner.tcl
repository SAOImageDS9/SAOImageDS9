#  Copyright (C) 1999-2021
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc CreatePanner {} {
    global ipanner
    global ppanner
    global ds9

    foreach aa {x y} {
	if {![string is integer -strict $ppanner(size,$aa)] ||
	    $ppanner(size,$aa) < 32 || $ppanner(size,$aa) > 512} {
	    set ppanner(size,$aa) 128
	}
	set ipanner(size,$aa) $ppanner(size,$aa)
    }

    set ds9(panner) [ttk::frame $ds9(header).panner]

    set ds9(panner,canvas) \
	[canvas $ds9(panner).canvas \
	     -width $ipanner(size,x) \
	     -height $ipanner(size,y) \
	     -relief groove \
	     -borderwidth 2 \
	     -highlightthickness 0 \
	     -insertofftime 0 \
	     -bg [ThemeTreeBackground] \
	    ]

    $ds9(panner,canvas) create panner$ds9(visual) \
	-width $ipanner(size,x) \
	-height $ipanner(size,y) \
	-command panner \
	-tag panner \
	-helvetica $ds9(helvetica) \
	-courier $ds9(courier) \
	-times $ds9(times) \
	-fg [ThemeTreeForeground] \
	-bg [ThemeTreeBackground]

    set ds9(panner,align) \
	[ttk::button $ds9(panner).align -takefocus 0 \
	     -command [list IconMenuButtonCmd current rotate 0 ChangeRotate]]
    tooltip::tooltip $ds9(panner).align [msgcat::mc {Align North Up}]

    set ds9(panner,center) \
	[ttk::button $ds9(panner).center -takefocus 0 \
	     -command CenterCurrentFrame ]
    tooltip::tooltip $ds9(panner).center [msgcat::mc {Pan to Center}]

    ConfigureIconsPanner

    pack $ds9(panner,canvas) -side top
    pack $ds9(panner,align) -side left
    pack $ds9(panner,center) -side left

    switch $ds9(wm) {
	x11 -
	win32 {
	    bind $ds9(panner,canvas) <<ThemeChanged>> {ThemeConfigPanner %W}
	}
	aqua {}
    }
}

proc ConfigureIconsPanner {} {
    global ds9

    $ds9(panner).align configure \
        -image [image create photo -file "$ds9(icons,ui)/north_up.png"]
    $ds9(panner).center configure \
        -image [image create photo -file "$ds9(icons,ui)/center.png"]

}



proc ThemeConfigPanner {w} {
    $w configure -bg [ThemeTreeBackground]
    $w itemconfigure panner -bg [ThemeTreeBackground]
}

proc PannerDef {} {
    global ipanner
    global ppanner

    set ipanner(size,x) 128
    set ipanner(size,y) 128

    # prefs only
    set ppanner(size,x) 128
    set ppanner(size,y) 128
    set ppanner(compass) 1
}

proc InitPanner {} {
    global ds9
    global ppanner

    # other bindings
    BindEventsPanner

    bind $ds9(panner,canvas) <Tab> [list NextFrame]
    bind $ds9(panner,canvas) <Shift-Tab> [list PrevFrame]

    switch $ds9(wm) {
	x11 {bind $ds9(panner,canvas) <ISO_Left_Tab> [list PrevFrame]}
	aqua -
	win32 {}
    }

    bind $ds9(panner,canvas) <Enter> [list focus $ds9(panner,canvas)]
    bind $ds9(panner,canvas) <Leave> [list focus {}]

    # compass
    panner compass $ppanner(compass)
}

proc BindEventsPanner {} {
    global ds9

    $ds9(panner,canvas) bind panner <Enter> [list EnterPanner %x %y]
    $ds9(panner,canvas) bind panner <Leave> [list LeavePanner]
    $ds9(panner,canvas) bind panner <Motion> [list MotionPanner %x %y]
    $ds9(panner,canvas) bind panner <Button-1> [list Button1Panner %x %y]
    $ds9(panner,canvas) bind panner <B1-Motion> [list Motion1Panner %x %y]
    $ds9(panner,canvas) bind panner <ButtonRelease-1> [list Release1Panner %x %y]

    switch $ds9(wm) {
	x11 -
	win32 {
	    $ds9(panner,canvas) bind panner <ButtonRelease-2> \
		[list Release2Panner %x %y]
	}
	aqua {
	    $ds9(panner,canvas) bind panner <ButtonRelease-3> \
		[list Release2Panner %x %y]
	}
    }


    $ds9(panner,canvas) bind panner <Key> [list KeyPanner panner %K %A %x %y]
    $ds9(panner,canvas) bind panner <KeyRelease> \
	[list KeyReleasePanner panner %K %A %x %y]
}

proc UnBindEventsPanner {} {
    global ds9

    MotionDispatchCancel panner

    $ds9(panner,canvas) bind panner <Enter> {}
    $ds9(panner,canvas) bind panner <Leave> {}
    $ds9(panner,canvas) bind panner <Motion> {}
    $ds9(panner,canvas) bind panner <Button-1> {}
    $ds9(panner,canvas) bind panner <B1-Motion> {}
    $ds9(panner,canvas) bind panner <ButtonRelease-1> {}

    switch $ds9(wm) {
	x11 -
	win32 {$ds9(panner,canvas) bind panner <ButtonRelease-2> {}}
	aqua {$ds9(panner,canvas) bind panner <ButtonRelease-3> {}}
    }

    $ds9(panner,canvas) bind panner <Key> {}
    $ds9(panner,canvas) bind panner <KeyRelease> {}
}

proc EnterPanner {x y} {
    global ds9
    global current

    global debug
    if {$debug(tcl,events)} {
	puts stderr "EnterPanner"
    }

    $ds9(panner,canvas) focus panner

    if {$current(frame) != {}} {
	EnterInfoBox $current(frame)
	UpdateInfoBox $current(frame) $x $y panner
	UpdatePixelTableDialog $current(frame) $x $y panner
    }
}

proc LeavePanner {} {
    global ds9

    global debug
    if {$debug(tcl,events)} {
	puts stderr "LeavePanner"
    }

    panner highlite off
    $ds9(panner,canvas) focus {}

    LeaveInfoBox
    PixelTableClearDialog
}

proc MotionPanner {x y} {
    global current

    global debug
    if {$debug(tcl,events)} {
	puts stderr "MotionPanner"
    }

    panner highlite $x $y
    if {$current(frame) != {}} {
	UpdateColormapLevelMosaic $current(frame) $x $y panner
	UpdateInfoBox $current(frame) $x $y panner
	UpdatePixelTableDialog $current(frame) $x $y panner
    }
}

proc Button1Panner {x y} {
    global ds9

    global debug
    if {$debug(tcl,events)} {
	puts stderr "Button1Panner"
    }

    MotionDispatchCancel panner
    panner pan begin $x $y
}

proc Motion1Panner {x y} {
    MotionDispatch panner [list Motion1PannerNow $x $y]
}

proc Motion1PannerNow {x y} {
    global ds9
    global current

    global debug
    if {$debug(tcl,events)} {
	puts stderr "Motion1Panner"
    }

    panner pan motion $x $y
    if {$current(frame) != {}} {
	$current(frame) pan bbox [panner get bbox]

	UpdateColormapLevelMosaic $current(frame) $x $y panner
	UpdateInfoBox $current(frame) $x $y panner
	UpdatePixelTableDialog $current(frame) $x $y panner
    }
}

proc Release1Panner {x y} {
    global ds9
    global current

    global debug
    if {$debug(tcl,events)} {
	puts stderr "Release1Panner"
    }

    # Panner end and pan bbox apply the release coordinates themselves.
    MotionDispatchCancel panner
    panner pan end $x $y
    if {$current(frame) != {}} {
	$current(frame) pan bbox [panner get bbox]

	UpdateColormapLevelMosaic $current(frame) $x $y panner
	UpdateInfoBox $current(frame) $x $y panner
	UpdatePixelTableDialog $current(frame) $x $y panner

	LockFrameCurrent
	UpdatePanZoomDialog
	SAMPSendCoordPointAtSkyCmd $current(frame)
    }
}

proc Release2Panner {x y} {
    global ds9
    global current

    if {$current(frame) != {}} {
	panner pan to $x $y
	$current(frame) pan bbox [panner get bbox]

	UpdateColormapLevelMosaic $current(frame) $x $y panner
	UpdateInfoBox $current(frame) $x $y panner
	UpdatePixelTableDialog $current(frame) $x $y panner

	LockFrameCurrent
	UpdatePanZoomDialog
	SAMPSendCoordPointAtSkyCmd $current(frame)
    }
}

proc KeyPanner {which K A xx yy} {
    global ds9
    global current

    global debug
    if {$debug(tcl,events)} {
	puts stderr "KeyPanner $which $K $A $xx $yy"
    }

    if {$K == {Control_R} ||
	$K == {Control_L} ||
	$K == {Meta_R} ||
	$K == {Meta_L} ||
	$K == {Alt_R} ||
	$K == {Alt_L} ||
	$K == {Super_R} ||
	$K == {Super_L}} {
	set ds9(modifier) 1
    }

    if {$ds9(modifier)} {
	return
    }

    switch -- $K {
	Up -
	k {PannerArrowKey $which 0 -1}
	Down -
	j {PannerArrowKey $which 0 1}
	Left -
	h {PannerArrowKey $which -1 0}
	Right -
	l {PannerArrowKey $which 1 0}
    }
}

proc KeyReleasePanner {which K A xx yy} {
    global ds9

    global debug
    if {$debug(tcl,events)} {
	puts stderr "KeyReleasePanner $which $K $A $xx $yy"
    }

    if {$K == {Control_R} ||
	$K == {Control_L} ||
	$K == {Meta_R} ||
	$K == {Meta_L} ||
	$K == {Alt_R} ||
	$K == {Alt_L} ||
	$K == {Super_R} ||
	$K == {Super_L}} {
	set ds9(modifier) 0
    }
}

proc PannerArrowKey {which x y} {
    global current
    global ds9

    WarpCursor $ds9(panner,canvas) $which $x $y
    SAMPSendCoordPointAtSkyCmd $current(frame)
}

proc PannerBackup {ch} {
    global ppanner

    puts $ch "panner compass $ppanner(compass)"
}

# Prefs

proc PrefsDialogPanner {} {
    global dprefs

    set w $dprefs(tab)

    $dprefs(listbox) insert {} end -id [ttk::frame $w.panner] \
	-text [msgcat::mc {Panner}]

    set f [ttk::labelframe $w.panner.param -text [msgcat::mc {Panner}]]

    ttk::checkbutton $f.compass \
	-text [msgcat::mc {Show Compass}] \
	-variable ppanner(compass) -command PrefsPannerCompass

    ttk::label $f.tsizex -text [msgcat::mc {X Size}]
    ttk::entry $f.sizex -textvariable ppanner(size,x) \
	-validate focusout -validatecommand [list PrefsPannerSize x] -width 8
    ttk::label $f.tpixelsx -text [msgcat::mc {pixels (32-512)}]

    ttk::label $f.tsizey -text [msgcat::mc {Y Size}]
    ttk::entry $f.sizey -textvariable ppanner(size,y) \
	-validate focusout -validatecommand [list PrefsPannerSize y] -width 8
    ttk::label $f.tpixelsy -text [msgcat::mc {pixels (32-512)}]

    grid $f.compass - -padx 2 -pady 2 -sticky w
    grid $f.tsizex $f.sizex $f.tpixelsx -padx 2 -pady 2 -sticky w
    grid $f.tsizey $f.sizey $f.tpixelsy -padx 2 -pady 2 -sticky w

    pack $f -side top -fill both -expand true
}

proc PrefsPannerCompass {} {
    global ppanner

    panner compass $ppanner(compass)
}

proc PrefsPannerSize {axis} {
    global ds9
    global ipanner
    global ppanner

    if {![string is integer -strict $ppanner(size,$axis)] ||
	$ppanner(size,$axis) < 32 || $ppanner(size,$axis) > 512} {
	set ppanner(size,$axis) $ipanner(size,$axis)
	return true
    }

    set ipanner(size,$axis) $ppanner(size,$axis)

    $ds9(panner,canvas) configure \
	-width $ipanner(size,x) -height $ipanner(size,y)
    $ds9(panner,canvas) itemconfigure panner \
	-width $ipanner(size,x) -height $ipanner(size,y)

    foreach ff $ds9(frames) {
	$ff panner 'panner' $ipanner(size,x) $ipanner(size,y)
	$ff panner update
    }

    LayoutView
    return true
}
