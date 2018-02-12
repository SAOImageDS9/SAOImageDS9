#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc RGBDef {} {
    global rgb
    global irgb

    set irgb(top) .rgb
    set irgb(mb) .rgbmb

    set rgb(red) 1
    set rgb(green) 1
    set rgb(blue) 1
    set rgb(system) wcs
    set rgb(lock,wcs) 0
    set rgb(lock,crop) 0
    set rgb(lock,slice) 0
    set rgb(lock,bin) 0
    set rgb(lock,axes) 0
    set rgb(lock,scale) 0
    set rgb(lock,scalelimits) 0
    set rgb(lock,colorbar) 0
    set rgb(lock,block) 0
    set rgb(lock,smooth) 0
}

proc RGBEvalLockCurrent {varname cmd} {
    global current

    global rgb
    global crop
    global cube
    global bin
    global scale
    global colorbar
    global block
    global smooth

    RGBEvalLock $varname $current(frame) $cmd
}

proc RGBEvalLock {varname which cmd} {
    upvar $varname var

    global rgb
    global crop
    global cube
    global bin
    global scale
    global colorbar
    global block
    global smooth

    if {$var && [$which get type] == {rgb}} {
	set ch [$which get rgb channel]
	foreach cc {red green blue} {
	    $which rgb channel $cc
	    eval $cmd
	}
	$which rgb channel $ch
    } else {
	eval $cmd
    }
}

proc RGBEvalLockColorbar {cmd} {
    global current
    global scale
    global rgb

    if {$rgb(lock,colorbar) && [$current(frame) get type] == {rgb}} {
	set ch $current(rgb)
	foreach c {red green blue} {
	    colorbarrgb rgb channel $c
	    eval $cmd
	}
	set current(rgb) $ch
	colorbarrgb rgb channel $current(rgb)
    } else {
	eval $cmd
    }
}

proc RGBChannel {} {
    global current

    if {$current(frame) != {}} {
	if {[$current(frame) get type] == {rgb}} {
	    colorbarrgb rgb channel $current(rgb)
	}
	$current(frame) rgb channel $current(rgb)
	UpdateDS9
    }
}

proc RGBView {} {
    global current
    global rgb

    if {$current(frame) != {}} {
	$current(frame) rgb view $rgb(red) $rgb(green) $rgb(blue)
    }
}

proc RGBSystem {} {
    global current
    global rgb

    if {$current(frame) != {}} {
	$current(frame) rgb system $rgb(system)
    }
}

# used by backup
proc RGBDialog {} {
    global rgb
    global irgb

    global current
    global ds9

    # see if we already have a window visible
    if {[winfo exists $irgb(top)]} {
	raise $irgb(top)
	return
    }

    # create the rgb window
    set w $irgb(top)
    set mb $irgb(mb)

    Toplevel $w $mb 6 [msgcat::mc {RGB}] RGBDestroyDialog

    $mb add cascade -label [msgcat::mc {File}] -menu $mb.file
    $mb add cascade -label [msgcat::mc {Align}] -menu $mb.align
    $mb add cascade -label [msgcat::mc {Lock}] -menu $mb.lock

    menu $mb.file
    $mb.file add command -label [msgcat::mc {Close}] -command RGBDestroyDialog

    CoordMenu $mb.align rgb system 1 {} {} RGBSystem

    menu $mb.lock
    $mb.lock add checkbutton -label [msgcat::mc {WCS}] \
	-variable rgb(lock,wcs)
    $mb.lock add checkbutton -label [msgcat::mc {Crop}] \
	-variable rgb(lock,crop)
    $mb.lock add checkbutton -label [msgcat::mc {Slice}] \
	-variable rgb(lock,slice)
    $mb.lock add checkbutton -label [msgcat::mc {Bin}] \
	-variable rgb(lock,bin)
    $mb.lock add checkbutton -label [msgcat::mc {Axes Order}] \
	-variable rgb(lock,axes)
    $mb.lock add checkbutton -label [msgcat::mc {Scale}] \
	-variable rgb(lock,scale)
    $mb.lock add checkbutton -label [msgcat::mc {Scale and Limits}] \
	-variable rgb(lock,scalelimits)
    $mb.lock add checkbutton -label [msgcat::mc {Colorbar}] \
	-variable rgb(lock,colorbar)
    $mb.lock add checkbutton -label [msgcat::mc {Block}] \
	-variable rgb(lock,block)
    $mb.lock add checkbutton -label [msgcat::mc {Smooth}] \
	-variable rgb(lock,smooth)

    # Param
    set f [ttk::frame $w.param]
    ttk::label $f.currenttitle -text [msgcat::mc {Current}]
    ttk::label $f.viewtitle -text [msgcat::mc {View}]
    ttk::label $f.redtitle -text [msgcat::mc {Red}]
    ttk::label $f.bluetitle -text [msgcat::mc {Blue}]
    ttk::label $f.greentitle -text [msgcat::mc {Green}]

    ttk::radiobutton $f.redcurrent -variable current(rgb) \
	-value red -command RGBChannel
    ttk::radiobutton $f.greencurrent -variable current(rgb) \
	-value green -command RGBChannel
    ttk::radiobutton $f.bluecurrent -variable current(rgb) \
	-value blue -command RGBChannel

    ttk::checkbutton $f.redview -variable rgb(red) -command RGBView
    ttk::checkbutton $f.greenview -variable rgb(green) -command RGBView
    ttk::checkbutton $f.blueview -variable rgb(blue) -command RGBView

    grid x $f.currenttitle $f.viewtitle -padx 2 -pady 2 -sticky w
    grid $f.redtitle $f.redcurrent $f.redview -padx 2 -pady 2 -sticky w
    grid $f.greentitle $f.greencurrent $f.greenview -padx 2 -pady 2 -sticky w
    grid $f.bluetitle $f.bluecurrent $f.blueview -padx 2 -pady 2 -sticky w

    # Buttons
    set f [ttk::frame $w.buttons]
    ttk::button $f.close -text [msgcat::mc {Close}] \
	-command RGBDestroyDialog
    pack $f.close -side left -expand true -padx 2 -pady 4

    # Fini
    ttk::separator $w.sep -orient horizontal
    pack $w.buttons $w.sep -side bottom -fill x
    pack $w.param -side top -fill both -expand true
}

proc RGBDestroyDialog {} {
    global irgb

    if {[winfo exists $irgb(top)]} {
	destroy $irgb(top)
	destroy $irgb(mb)
    }
}

proc UpdateRGBMenu {} {
    # can be changed by wcs
    SetCoordSystem rgb system {} {}
}

proc UpdateRGBDialog {} {
    global rgb
    global irgb
    global current

    global debug
    if {$debug(tcl,update)} {
	puts stderr "UpdateRGBDialog"
    }

    if {![winfo exists $irgb(top)]} {
	return
    }

    if {$current(frame) != {}} {
	set rgb(frame) $current(frame)
	if {[$current(frame) has fits]} {
	    # now make sure we have the coord systems
	    AdjustCoordSystem rgb system
	    CoordMenuEnable $irgb(mb).align rgb system 1 {} {}
	} else {
	    CoordMenuReset $irgb(mb).align rgb system 1 {} {}
	}
    }

    if {$current(frame) != {}} {
	set current(rgb) [$current(frame) get rgb channel]
	set r [$current(frame) get rgb view]
	set rgb(red) [lindex $r 0]
	set rgb(green) [lindex $r 1]
	set rgb(blue) [lindex $r 2]
	set rgb(system) [$current(frame) get rgb system]
    }
}

proc RGBBackup {ch which} {
    puts $ch "$which rgb channel [$which get rgb channel]"
    puts $ch "$which rgb view [$which get rgb view]"
    puts $ch "$which rgb system [$which get rgb system]"
}

# Process Cmds

proc ProcessRGBCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    global current
    global rgb

    RGBDialog

    switch -- [string tolower [lindex $var $i]] {
	open {}
	close {RGBDestroyDialog}
	red -
	green -
	blue {
	    set current(rgb) [string tolower [lindex $var $i]]
	    RGBChannel
	}
	channel {
	    incr i
	    set current(rgb) [string tolower [lindex $var $i]]
	    RGBChannel
	}
	lock {
	    incr i
	    set item [string tolower [lindex $var $i]]
	    incr i
	    if {!([string range [lindex $var $i] 0 0] == "-")} {
		set rr [FromYesNo [lindex $var $i]]
	    } else {
		set rr 1
		incr i -1
	    }
	    switch -- $item {
		wcs {set rgb(lock,wcs) $rr}
		crop {set rgb(lock,crop) $rr}
		slice {set rgb(lock,slice) $rr}
		bin {set rgb(lock,bin) $rr}
		axes -
		order {set rgb(lock,axes) $rr}
		scale {set rgb(lock,scale) $rr}
		limits -
		scalelimits {set rgb(lock,scalelimits) $rr}
		color -
		colormap -
		colorbar {set rgb(lock,colorbar) $rr}
		block {set rgb(lock,block) $rr}
		smooth {set rgb(lock,smooth) $rr}
	    }
	}
	system {
	    incr i
	    set rgb(system) [string tolower [lindex $var $i]]
	    RGBSystem
	}
	view {
	    set w [lindex $var [expr $i+1]]
	    set yesno [lindex $var [expr $i+2]]
	    switch -- [string tolower $w] {
		red {set rgb(red) [FromYesNo $yesno]; RGBView}
		green {set rgb(green) [FromYesNo $yesno]; RGBView}
		blue {set rgb(blue) [FromYesNo $yesno]; RGBView}
	    }
	    incr i 2
	}
	default {
	    CreateRGBFrame
	    incr i -1
	}
    }
}

proc ProcessSendRGBCmd {proc id param} {
    global current
    global rgb

    switch -- [lindex $param 0] {
	channel {$proc $id "$current(rgb)\n"}
	lock {
	    switch -- [string tolower [lindex $param 1]] {
		wcs {$proc $id [ToYesNo $rgb(lock,wcs)]}
		crop {$proc $id [ToYesNo $rgb(lock,crop)]}
		slice {$proc $id [ToYesNo $rgb(lock,slice)]}
		bin {$proc $id [ToYesNo $rgb(lock,bin)]}
		axes -
		order {$proc $id [ToYesNo $rgb(lock,axes)]}
		scale {$proc $id [ToYesNo $rgb(lock,scale)]}
		limits -
		scalelimits {$proc $id [ToYesNo $rgb(lock,scalelimits)]}
		colorbar {$proc $id [ToYesNo $rgb(lock,colorbar)]}
		block {$proc $id [ToYesNo $rgb(lock,block)]}
		smooth {$proc $id [ToYesNo $rgb(lock,smooth)]}
	    }
	}
	system {$proc $id "$rgb(system)\n"}
	view {
	    switch -- [lindex $param 1] {
		red {$proc $id [ToYesNo $rgb(red)]}
		green {$proc $id [ToYesNo $rgb(green)]}
		blue {$proc $id [ToYesNo $rgb(blue)]}
	    }
	}
    }
}

