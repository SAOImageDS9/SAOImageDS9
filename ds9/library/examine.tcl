#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc ExamineDef {} {
    global pexamine

    # prefs only
    set pexamine(mode) new
    set pexamine(zoom) 4
}

proc ExamineButton {which x y} {
    if {![$which has fits]} {
	return
    }

    switch -- [$which get type] {
	base {ExamineButtonBase $which $x $y}
	rgb {ExamineButtonRGB $which $x $y}
	3d {ExamineButton3D $which $x $y}
    }
}

proc ExamineButtonBase {which x y} {
    global current
    global ds9
    global pexamine

    # this code will not handle mosaics.

    # current coord
    set coord [$which get coordinates $x $y physical]

    # find filename/slice
    set fn [$which get fits file name full canvas $x $y]
    set slice [$which get fits slice]
    
    # so the new frame will have all of the parent frame when created
    GotoFrame $which

    # create frame if needed
    switch -- $pexamine(mode) {
	new {CreateFrame}
	one {
	    if {[info exists pexamine(one)]} {
		if {$which == $pexamine(one)} {
		    # do nothing, we clicked in the examine frame
		    return
		}
		DeleteSingleFrame $pexamine(one)
		CreateFrame
		set pexamine(one) $current(frame)
	    } else {
		CreateFrame
		set pexamine(one) $current(frame)
	    }
	}
    }

    # go to tile mode in case
    set current(display) tile
    DisplayMode

    # load data
    LoadFitsFile $fn {} {}

    RealizeDS9

    # set slice
    $current(frame) update fits slice $slice

    # zoom to about
    if {[$current(frame) has fits bin]} {
	set bf "[$current(frame) get bin factor]"
	set bx [expr [lindex $bf 0]/$pexamine(zoom)]
	set by [expr [lindex $bf 1]/$pexamine(zoom)]
	$current(frame) bin factor to $bx $by about \
	    [lindex $coord 0] [lindex $coord 1]
    } else {
	$current(frame) zoom $pexamine(zoom) $pexamine(zoom) \
	    about physical [lindex $coord 0] [lindex $coord 1]
    }

    # back to original frame
    GotoFrame $which

    # update any dialogs
    UpdateDS9
}

proc ExamineButtonRGB {which x y} {
    global current
    global ds9
    global pexamine

    # this code is far from perfect. It assumes data is loaded into the red
    # and it is the keychannel. Furthermore, it assumes either images or bin
    # tables are loaded into each channel, but not both.
    # this code will not handle mosaics.

    # save current channel
    set channel [$which get rgb channel]

    # current coord
    $which rgb channel red
    set coord [$which get coordinates $x $y physical]

    # find filename/slice
    foreach cc {red green blue} {
	$which rgb channel $cc
	set fn($cc) [$which get fits file name full canvas $x $y]

	set slice($cc) [$which get fits slice]
    }

    # so the new frame will have all of the parent frame when created
    GotoFrame $which

    # create frame if needed
    switch -- $pexamine(mode) {
	new {CreateRGBFrame}
	one {
	    if {[info exists pexamine(one)]} {
		if {$which == $pexamine(one)} {
		    # do nothing, we clicked in the examine frame
		    return
		}
		DeleteSingleFrame $pexamine(one)
		CreateRGBFrame
		set pexamine(one) $current(frame)
	    } else {
		CreateRGBFrame
		set pexamine(one) $current(frame)
	    }
	}
    }

    # go to tile mode in case
    set current(display) tile
    DisplayMode

    # load data
    foreach cc {red green blue} {
	$current(frame) rgb channel $cc

	if {$fn($cc) != {}} {
	    LoadFitsFile $fn($cc) {} {}
	}
    }

    RealizeDS9

    # set slice
    foreach cc {red green blue} {
	$current(frame) rgb channel $cc
	$current(frame) update fits slice $slice($cc)
    }

    # zoom to about
    $current(frame) rgb channel red
    if {[$current(frame) has fits bin]} {
	foreach cc {red green blue} {
	    $which rgb channel $cc
	    $current(frame) rgb channel $cc

	    set bf "[$current(frame) get bin factor]"
	    set bx [expr [lindex $bf 0]/$pexamine(zoom)]
	    set by [expr [lindex $bf 1]/$pexamine(zoom)]
	    $current(frame) bin factor to $bx $by about \
		[lindex $coord 0] [lindex $coord 1]
	}
    } else {
	$current(frame) zoom $pexamine(zoom) $pexamine(zoom) \
	    about image [lindex $coord 0] [lindex $coord 1]
    }

    # set channel
    $current(frame) rgb channel $channel

    # back to original frame
    GotoFrame $which
    $current(frame) rgb channel $channel

    # update any dialogs
    UpdateDS9
}

proc ExamineButton3D {which x y} {
    global current
    global ds9
    global pexamine

    # this code will not handle mosaics.

    # current coord
    set coord [$which get coordinates $x $y physical]

    # find filename/slice
    set fn [$which get fits file name full canvas $x $y]
    set slice [$which get fits slice]
    
    # and 3d info
    set rr [$current(frame) get 3d view]
    set az [lindex $rr 0]
    set el [lindex $rr 1]
    set method [$current(frame) get 3d method]

    # so the new frame will have all of the parent frame when created
    GotoFrame $which

    # create frame if needed
    switch -- $pexamine(mode) {
	new {Create3DFrame}
	one {
	    if {[info exists pexamine(one)]} {
		if {$which == $pexamine(one)} {
		    # do nothing, we clicked in the examine frame
		    return
		}
		DeleteSingleFrame $pexamine(one)
		Create3DFrame
		set pexamine(one) $current(frame)
	    } else {
		Create3DFrame
		set pexamine(one) $current(frame)
	    }
	}
    }

    # go to tile mode in case
    set current(display) tile
    DisplayMode

    # load data
    LoadFitsFile $fn {} {}

    RealizeDS9

    # set slice
    $current(frame) update fits slice $slice

    # zoom to about
    if {[$current(frame) has fits bin]} {
	set bf "[$current(frame) get bin factor]"
	set bx [expr [lindex $bf 0]/$pexamine(zoom)]
	set by [expr [lindex $bf 1]/$pexamine(zoom)]
	$current(frame) bin factor to $bx $by about \
	    [lindex $coord 0] [lindex $coord 1]
    } else {
	$current(frame) zoom $pexamine(zoom) $pexamine(zoom) \
	    about physical [lindex $coord 0] [lindex $coord 1]
    }

    # set 3d
    $current(frame) 3d view $az $el
    $current(frame) 3d method $method

    # back to original frame
    GotoFrame $which

    # update any dialogs
    UpdateDS9
}

# Prefs

proc PrefsDialogExamine {} {
    global dprefs

    set w $dprefs(tab)

    $dprefs(listbox) insert {} end -id [ttk::frame $w.examine] \
	-text [msgcat::mc {Examine}]

    # Examine
    set f [ttk::labelframe $w.examine.mode -text [msgcat::mc {Mode}]]

    ttk::radiobutton $f.new -text [msgcat::mc {New Frame each Time}] \
	-variable pexamine(mode) -value new
    ttk::radiobutton $f.one -text [msgcat::mc {Examine Frame}] \
	-variable pexamine(mode) -value one

    grid $f.new -padx 2 -pady 2 -sticky w
    grid $f.one -padx 2 -pady 2 -sticky w

    set f [ttk::labelframe $w.examine.mag -text [msgcat::mc {Magnification}]]

    ttk::radiobutton $f.x1 -text {1x} -variable pexamine(zoom) -value 1
    ttk::radiobutton $f.x2 -text {2x} -variable pexamine(zoom) -value 2
    ttk::radiobutton $f.x4 -text {4x} -variable pexamine(zoom) -value 4
    ttk::radiobutton $f.x8 -text {8x} -variable pexamine(zoom) -value 8
    ttk::radiobutton $f.x16 -text {16x} -variable pexamine(zoom) -value 16

    grid $f.x1 $f.x2 $f.x4 $f.x8 $f.x16 -padx 2 -pady 2 -sticky w

    pack $w.examine.mode $w.examine.mag -side top -fill both -expand true
}

