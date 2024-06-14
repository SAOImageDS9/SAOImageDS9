#  Copyright (C) 1999-2021
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc HSVDef {} {
    global hsv
    global ihsv

    set ihsv(top) .hsv
    set ihsv(mb) .hsvmb

    set hsv(hue) 1
    set hsv(saturation) 1
    set hsv(value) 1
    set hsv(system) wcs
    set hsv(lock,wcs) 0
    set hsv(lock,crop) 0
    set hsv(lock,slice) 0
    set hsv(lock,bin) 0
    set hsv(lock,axes) 0
    set hsv(lock,scale) 0
    set hsv(lock,scalelimits) 0
    set hsv(lock,colorbar) 0
    set hsv(lock,block) 0
    set hsv(lock,smooth) 0
}

proc HSVEvalLockCurrent {varname cmd} {
    global current

    global hsv
    global crop
    global cube
    global bin
    global scale
    global colorbar
    global block
    global smooth

    HSVEvalLock $varname $current(frame) $cmd
}

proc HSVEvalLock {varname which cmd} {
    upvar $varname var

    global hsv
    global crop
    global cube
    global bin
    global scale
    global colorbar
    global block
    global smooth

    if {$var && [$which get type] == {hsv}} {
	set ch [$which get hsv channel]
	foreach cc {hue saturation value} {
	    $which hsv channel $cc
	    eval $cmd
	}
	$which hsv channel $ch
    } else {
	eval $cmd
    }
}

proc HSVEvalLockColorbarCurrent {cmd} {
    global current
    
    HSVEvalLockColorbar $current(frame) $cmd
}

proc HSVEvalLockColorbar {which cmd} {
    global current
    global scale
    global hsv

    set cb ${which}cb
    if {$hsv(lock,colorbar) && [$which get type] == {hsv}} {
	set ch [$which get hsv channel]
	foreach cc {hue saturation value} {
	    $which hsv channel $cc
	    $cb hsv channel $cc
	    eval $cmd
	}
	$which hsv channel $ch
	$cb hsv channel $ch
    } else {
	eval $cmd
    }
}

proc HSVChannel {} {
    global current

    if {$current(frame) != {}} {
	if {[$current(frame) get type] == {hsv}} {
	    $current(colorbar) hsv channel $current(hsv)
	}
	$current(frame) hsv channel $current(hsv)
	UpdateDS9
    }
}

proc HSVView {} {
    global current
    global hsv

    if {$current(frame) != {}} {
	$current(frame) hsv view $hsv(hue) $hsv(saturation) $hsv(value)
    }
}

proc HSVSystem {} {
    global current
    global hsv

    if {$current(frame) != {}} {
	$current(frame) hsv system $hsv(system)
    }
}

# used by backup
proc HSVDialog {} {
    global hsv
    global ihsv

    global current
    global ds9

    # see if we already have a window visible
    if {[winfo exists $ihsv(top)]} {
	raise $ihsv(top)
	return
    }

    # create the hsv window
    set w $ihsv(top)
    set mb $ihsv(mb)

    Toplevel $w $mb 6 [msgcat::mc {HSV}] HSVDestroyDialog

    $mb add cascade -label [msgcat::mc {File}] -menu $mb.file
    $mb add cascade -label [msgcat::mc {Align}] -menu $mb.align
    $mb add cascade -label [msgcat::mc {Lock}] -menu $mb.lock

    ThemeMenu $mb.file
    $mb.file add command -label [msgcat::mc {Close}] \
	-command HSVDestroyDialog -accelerator "${ds9(ctrl)}W"

    CoordMenu $mb.align hsv system 1 {} {} HSVSystem

    ThemeMenu $mb.lock
    $mb.lock add checkbutton -label [msgcat::mc {WCS}] \
	-variable hsv(lock,wcs)
    $mb.lock add checkbutton -label [msgcat::mc {Crop}] \
	-variable hsv(lock,crop)
    $mb.lock add checkbutton -label [msgcat::mc {Slice}] \
	-variable hsv(lock,slice)
    $mb.lock add checkbutton -label [msgcat::mc {Bin}] \
	-variable hsv(lock,bin)
    $mb.lock add checkbutton -label [msgcat::mc {Axes Order}] \
	-variable hsv(lock,axes)
    $mb.lock add checkbutton -label [msgcat::mc {Scale}] \
	-variable hsv(lock,scale)
    $mb.lock add checkbutton -label [msgcat::mc {Scale and Limits}] \
	-variable hsv(lock,scalelimits)
    $mb.lock add checkbutton -label [msgcat::mc {Colorbar}] \
	-variable hsv(lock,colorbar)
    $mb.lock add checkbutton -label [msgcat::mc {Block}] \
	-variable hsv(lock,block)
    $mb.lock add checkbutton -label [msgcat::mc {Smooth}] \
	-variable hsv(lock,smooth)

    # Param
    set f [ttk::frame $w.param]
    ttk::label $f.currenttitle -text [msgcat::mc {Current}]
    ttk::label $f.viewtitle -text [msgcat::mc {View}]
    ttk::label $f.huetitle -text [msgcat::mc {Hue}]
    ttk::label $f.valuetitle -text [msgcat::mc {Value}]
    ttk::label $f.saturationtitle -text [msgcat::mc {Saturation}]

    ttk::radiobutton $f.huecurrent -variable current(hsv) \
	-value hue -command HSVChannel
    ttk::radiobutton $f.saturationcurrent -variable current(hsv) \
	-value saturation -command HSVChannel
    ttk::radiobutton $f.valuecurrent -variable current(hsv) \
	-value value -command HSVChannel

    ttk::checkbutton $f.hueview -variable hsv(hue) -command HSVView
    ttk::checkbutton $f.saturationview -variable hsv(saturation) -command HSVView
    ttk::checkbutton $f.valueview -variable hsv(value) -command HSVView

    grid x $f.currenttitle $f.viewtitle -padx 2 -pady 2 -sticky w
    grid $f.huetitle $f.huecurrent $f.hueview -padx 2 -pady 2 -sticky w
    grid $f.saturationtitle $f.saturationcurrent $f.saturationview -padx 2 -pady 2 -sticky w
    grid $f.valuetitle $f.valuecurrent $f.valueview -padx 2 -pady 2 -sticky w

    # Buttons
    set f [ttk::frame $w.buttons]
    ttk::button $f.close -text [msgcat::mc {Close}] -command HSVDestroyDialog
    pack $f.close -side left -expand true -padx 2 -pady 4

    # Fini
    ttk::separator $w.sep -orient horizontal
    pack $w.buttons $w.sep -side bottom -fill x
    pack $w.param -side top -fill both -expand true

    bind $w <<Close>> HSVDestroyDialog
}

proc HSVDestroyDialog {} {
    global ihsv

    if {[winfo exists $ihsv(top)]} {
	destroy $ihsv(top)
	destroy $ihsv(mb)
    }
}

proc UpdateHSVMenu {} {
    # can be changed by wcs
    SetCoordSystem hsv system {} {}
}

proc UpdateHSVDialog {} {
    global hsv
    global ihsv
    global current

    global debug
    if {$debug(tcl,update)} {
	puts stderr "UpdateHSVDialog"
    }

    if {![winfo exists $ihsv(top)]} {
	return
    }

    if {$current(frame) != {}} {
	set hsv(frame) $current(frame)
	if {[$current(frame) has fits]} {
	    # now make sure we have the coord systems
	    AdjustCoordSystem hsv system
	    CoordMenuEnable $ihsv(mb).align hsv system {} {}
	} else {
	    CoordMenuReset $ihsv(mb).align hsv system {} {}
	}
    }

    if {$current(frame) != {}} {
	set current(hsv) [$current(frame) get hsv channel]
	set r [$current(frame) get hsv view]
	set hsv(hue) [lindex $r 0]
	set hsv(saturation) [lindex $r 1]
	set hsv(value) [lindex $r 2]
	set hsv(system) [$current(frame) get hsv system]
    }
}

proc HSVBackup {ch which} {
    puts $ch "$which hsv channel [$which get hsv channel]"
    puts $ch "$which hsv view [$which get hsv view]"
    puts $ch "$which hsv system [$which get hsv system]"
}

# Process Cmds

proc ProcessHSVCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    HSVDialog

    hsv::YY_FLUSH_BUFFER
    hsv::yy_scan_string [lrange $var $i end]
    hsv::yyparse
    incr i [expr $hsv::yycnt-1]
}

proc ProcessSendHSVCmd {proc id param {sock {}} {fn {}}} {
    global parse
    set parse(proc) $proc
    set parse(id) $id

    hsvsend::YY_FLUSH_BUFFER
    hsvsend::yy_scan_string $param
    hsvsend::yyparse
}

