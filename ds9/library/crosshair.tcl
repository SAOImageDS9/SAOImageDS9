#  Copyright (C) 1999-2021
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc CrosshairDef {} {
    global crosshair
    global icrosshair

    set icrosshair(top) .ch
    set icrosshair(mb) .chmb

    set crosshair(lock) none

    # set via wcs()
    set crosshair(system) wcs
    set crosshair(sky) fk5
    set crosshair(skyformat) degrees
}

proc CrosshairButton {which x y} {
    global ds9
    global crosshair

    $which crosshair canvas $x $y
    UpdateCrosshairDialog
    LockCrosshair $which
}

proc CrosshairArrowKey {which x y} {
    global ds9
    global crosshair

    $which crosshair warp $x $y
    UpdateCrosshairDialog
    LockCrosshair $which

    set coord [$which get crosshair canvas]
    set X [lindex $coord 0]
    set Y [lindex $coord 1]

    UpdateColormapLevelMosaic $which $X $Y canvas
    UpdateInfoBox $which $X $Y canvas
    UpdatePixelTableDialog $which $X $Y canvas
    UpdateGraphsData $which $X $Y canvas
}

proc CrosshairTo {x y sys sky} {
    global crosshair
    global current
    global ds9

    set current(mode) crosshair
    ChangeMode

    if {$current(frame) != {}} {
	$current(frame) crosshair $sys $sky $x $y
	set coord [$current(frame) get crosshair canvas]
	UpdateColormapLevelMosaic $current(frame) \
	    [lindex $coord 0] [lindex $coord 1] canvas
	UpdateInfoBox $current(frame) \
	    [lindex $coord 0] [lindex $coord 1] canvas

	if {$crosshair(lock) != "none"} {
	    set coord [$current(frame) get crosshair $crosshair(lock)]
	    foreach f $ds9(frames) {
		if {$f != $current(frame) && [$f has system $crosshair(lock)]} {
		    $f crosshair $crosshair(lock) $coord
		}
	    }
	}
	UpdateCrosshairDialog
    }
}

proc MatchCrosshairCurrent {sys} {
    global current

    if {$current(frame) != {}} {
	MatchCrosshair $current(frame) $sys
    }
}

proc MatchCrosshair {which sys} {
    global crosshair
    global ds9
    global current

    if {$current(mode) != {crosshair}} {
	return
    }

    switch -- $sys {
	image -
	physical -
	amplifier -
	detector {
	    set coord [$which get crosshair $sys]
	    foreach ff $ds9(frames) {
		if {$ff != $which} {
		    $ff crosshair $sys $coord 
		}
	    }
	}
	wcs {
	    set ss [lindex [$which get wcs] 0]
	    if {[$which has wcs $ss]} {
		set coord [$which get crosshair $ss]
		foreach ff $ds9(frames) {
		    if {$ff != $which} {
			if {[$ff has wcs $ss]} {
			    $ff crosshair $ss $coord 
			}
		    }
		}
	    }
	}
    }
}

proc LockCrosshairCurrent {} {
    global current
    
    if {$current(frame) != {}} {
	LockCrosshair $current(frame)
    }
}

proc LockCrosshair {which} {
    global crosshair

    switch -- $crosshair(lock) {
	none {}
	default {MatchCrosshair $which $crosshair(lock)}
    }
}

proc CrosshairDialog {} {
    global crosshair
    global icrosshair
    global dcrosshair
    global current
    global ds9

    # see if we already have a window visible
    if {[winfo exists $icrosshair(top)]} {
	raise $icrosshair(top)
	return
    }

    # create the window
    set w $icrosshair(top)
    set mb $icrosshair(mb)

    Toplevel $w $mb 6 [msgcat::mc {Crosshair Parameters}] \
	CrosshairDestroyDialog

    # for CoordMenuButton
    set crosshair(frame) $current(frame)

    $mb add cascade -label [msgcat::mc {File}] -menu $mb.file
    $mb add cascade -label [msgcat::mc {Edit}] -menu $mb.edit

    ThemeMenu $mb.file
    $mb.file add command -label [msgcat::mc {Apply}] \
	-command CrosshairApplyDialog
    $mb.file add separator
    $mb.file add command -label [msgcat::mc {Close}] \
	-command CrosshairDestroyDialog -accelerator "${ds9(ctrl)}W"

    EditMenu $mb icrosshair

    # Param
    set f [ttk::frame $w.param]

    ttk::label $f.title -text [msgcat::mc {Crosshair}]
    ttk::entry $f.x -textvariable dcrosshair(x) -width 14
    ttk::entry $f.y -textvariable dcrosshair(y) -width 14
    set dcrosshair(cb) $f.system 
    CoordMenuButton $dcrosshair(cb) crosshair system 1 sky skyformat \
	UpdateCrosshairDialog

    grid $f.title $f.x $f.y $f.system -padx 2 -pady 2

    # Buttons
    set f [ttk::frame $w.buttons]
    ttk::button $f.apply -text [msgcat::mc {Apply}] \
	-command CrosshairApplyDialog
    ttk::button $f.close -text [msgcat::mc {Close}] \
	-command CrosshairDestroyDialog
    pack $f.apply $f.close -side left -expand true -padx 2 -pady 4

    # Fini
    ttk::separator $w.sep -orient horizontal
    pack $w.buttons $w.sep -side bottom -fill x
    pack $w.param -side top -fill both -expand true

    $w.param.x select range 0 end

    bind $w <<Close>> CrosshairDestroyDialog

    UpdateCrosshairDialog
}

proc CrosshairApplyDialog {} {
    global crosshair
    global dcrosshair

    CrosshairTo $dcrosshair(x) $dcrosshair(y) $crosshair(system) $crosshair(sky)
}

proc CrosshairDestroyDialog {} {
    global icrosshair
    global dcrosshair

    if {[winfo exists $icrosshair(top)]} {
	destroy $icrosshair(top)
	destroy $icrosshair(mb)
	unset dcrosshair
    }
}

proc UpdateCrosshairDialog {} {
    global crosshair
    global icrosshair
    global dcrosshair
    global current

    global debug
    if {$debug(tcl,update)} {
	puts stderr "UpdateCrosshairDialog"
    }

    if {![winfo exists $icrosshair(top)]} {
	return
    }

    if {$current(frame) != {}} {
	set crosshair(frame) $current(frame)
	if {[$current(frame) has fits]} {
	    # now make sure we have the coord systems
	    AdjustCoordSystem crosshair system
	    CoordMenuEnable $dcrosshair(cb).menu crosshair system sky skyformat
	    CoordMenuButtonCmd crosshair system sky {}
	} else {
	    CoordMenuReset $dcrosshair(cb).menu crosshair system sky skyformat
	}
    }

    if {$current(frame) != {}} {
	set coord [$current(frame) get crosshair $crosshair(system) \
		       $crosshair(sky) $crosshair(skyformat)]
	set dcrosshair(x) [lindex $coord 0]
	set dcrosshair(y) [lindex $coord 1]
    } else {
	set dcrosshair(x) {}
	set dcrosshair(y) {}
    }
}

proc ProcessCrosshairCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    # we need to be realized
    ProcessRealizeDS9

    crosshair::YY_FLUSH_BUFFER
    crosshair::yy_scan_string [lrange $var $i end]
    crosshair::yyparse
    incr i [expr $crosshair::yycnt-1]
}

proc ProcessSendCrosshairCmd {proc id param {sock {}} {fn {}}} {
    global parse
    set parse(proc) $proc
    set parse(id) $id

    crosshairsend::YY_FLUSH_BUFFER
    crosshairsend::yy_scan_string $param
    crosshairsend::yyparse
}

proc CrosshairBackup {ch which} {
    puts $ch "$which crosshair physical [$which get crosshair physical]"
}
