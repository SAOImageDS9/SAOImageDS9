#  Copyright (C) 1999-2021
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc CreatePanner {} {
    global ipanner
    global ds9

    set ds9(panner) [ttk::frame $ds9(header).panner]

    set ds9(panner,canvas) \
	[canvas $ds9(panner).canvas \
	     -width $ipanner(size) \
	     -height $ipanner(size) \
	     -relief groove \
	     -borderwidth 2 \
	     -highlightthickness 0 \
	     -insertofftime 0 \
	     -takefocus 0 \
	     -bg [ThemeTreeBackground] \
	    ]

    $ds9(panner,canvas) create panner$ds9(visual) \
	-width $ipanner(size) \
	-height $ipanner(size) \
	-command panner \
	-tag panner \
	-helvetica $ds9(helvetica) \
	-courier $ds9(courier) \
	-times $ds9(times) \
	-fg [ThemeTreeForeground] \
	-bg [ThemeTreeBackground]

    set ds9(panner,align) \
	[ttk::button $ds9(panner).align -takefocus 0 \
	     -command [list IconMenuButtonCmd current rotate 0 ChangeRotate] \
	     -image [image create photo -file "$ds9(icons,ui)/north_up.png"]]
    tooltip::tooltip $ds9(panner).align [msgcat::mc {Align North Up}]

    set ds9(panner,center) \
	[ttk::button $ds9(panner).center -takefocus 0 \
	     -command CenterCurrentFrame \
	     -image [image create photo -file "$ds9(icons,ui)/center.png"]]
    tooltip::tooltip $ds9(panner).center [msgcat::mc {Pan to Center}]

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

proc ThemeConfigPanner {w} {
    $w configure -bg [ThemeTreeBackground]
    $w itemconfigure panner -bg [ThemeTreeBackground]
}

proc PannerDef {} {
    global ipanner
    global ppanner

    set ipanner(size) 128

    # prefs only
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

    switch $ds9(wm) {
	x11 -
	aqua {
	    bind $ds9(panner,canvas) <Enter> [list focus $ds9(panner,canvas)]
	    bind $ds9(panner,canvas) <Leave> [list focus {}]
	}
	win32 {}
    }

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


    $ds9(panner,canvas) bind panner <Up> [list ArrowKeyPanner 0 -1]
    $ds9(panner,canvas) bind panner <Down> [list ArrowKeyPanner 0 1]
    $ds9(panner,canvas) bind panner <Left> [list ArrowKeyPanner -1 0]
    $ds9(panner,canvas) bind panner <Right> [list ArrowKeyPanner 1 0]
}

proc UnBindEventsPanner {} {
    global ds9

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

    $ds9(panner,canvas) bind panner <Up> {}
    $ds9(panner,canvas) bind panner <Down> {}
    $ds9(panner,canvas) bind panner <Left> {}
    $ds9(panner,canvas) bind panner <Right> {}
}

proc EnterPanner {x y} {
    global ds9
    global current

    global debug
    if {$debug(tcl,events)} {
	puts stderr "EnterPanner"
    }

    switch $ds9(wm) {
	x11 {
	    focus $ds9(panner,canvas)
	    $ds9(panner,canvas) focus panner
	}
	aqua -
	win32 {}
    }

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
    switch $ds9(wm) {
	x11 {
	    $ds9(panner,canvas) focus {}
	    focus {}
	}
	aqua -
	win32 {}
    }

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

    panner pan begin $x $y
}

proc Motion1Panner {x y} {
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

proc ArrowKeyPanner {x y} {
    global current

    panner warp $x $y
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

    grid $f.compass -padx 2 -pady 2 -sticky w

    pack $f -side top -fill both -expand true
}

proc PrefsPannerCompass {} {
    global ppanner

    panner compass $ppanner(compass)
}
