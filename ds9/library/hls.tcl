#  Copyright (C) 1999-2021
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc HLSDef {} {
    global hls
    global ihls

    set ihls(top) .hls
    set ihls(mb) .hlsmb

    set hls(hue) 1
    set hls(lightness) 1
    set hls(saturation) 1
    set hls(system) wcs
    set hls(lock,wcs) 0
    set hls(lock,crop) 0
    set hls(lock,slice) 0
    set hls(lock,bin) 0
    set hls(lock,axes) 0
    set hls(lock,scale) 0
    set hls(lock,colorbar) 0
    set hls(lock,block) 0
    set hls(lock,smooth) 0
}

proc HLSChannel {} {
    global current

    if {$current(frame) != {}} {
	if {[$current(frame) get type] == {hls}} {
	    $current(colorbar) hls channel $current(hls)
	}
	$current(frame) hls channel $current(hls)
	UpdateDS9
    }
}

proc HLSView {} {
    global current
    global hls

    if {$current(frame) != {}} {
	$current(frame) hls view $hls(hue) $hls(lightness) $hls(saturation)
    }
}

proc HLSSystem {} {
    global current
    global hls

    if {$current(frame) != {}} {
	$current(frame) hls system $hls(system)
    }
}

# used by backup
proc HLSDialog {} {
    global hls
    global ihls

    global current
    global ds9

    # see if we already have a window visible
    if {[winfo exists $ihls(top)]} {
	raise $ihls(top)
	return
    }

    # create the hls window
    set w $ihls(top)
    set mb $ihls(mb)

    Toplevel $w $mb 6 [msgcat::mc {HLS}] HLSDestroyDialog

    $mb add cascade -label [msgcat::mc {File}] -menu $mb.file
    $mb add cascade -label [msgcat::mc {Align}] -menu $mb.align
    $mb add cascade -label [msgcat::mc {Lock}] -menu $mb.lock

    ThemeMenu $mb.file
    $mb.file add command -label [msgcat::mc {Close}] \
	-command HLSDestroyDialog -accelerator "${ds9(ctrl)}W"

    CoordMenu $mb.align hls system 1 {} {} HLSSystem

    ThemeMenu $mb.lock
    $mb.lock add checkbutton -label [msgcat::mc {WCS}] \
	-variable hls(lock,wcs)
    $mb.lock add checkbutton -label [msgcat::mc {Crop}] \
	-variable hls(lock,crop)
    $mb.lock add checkbutton -label [msgcat::mc {Slice}] \
	-variable hls(lock,slice)
    $mb.lock add checkbutton -label [msgcat::mc {Bin}] \
	-variable hls(lock,bin)
    $mb.lock add checkbutton -label [msgcat::mc {Axes Order}] \
	-variable hls(lock,axes)
    $mb.lock add checkbutton -label [msgcat::mc {Scale}] \
	-variable hls(lock,scale)
    $mb.lock add checkbutton -label [msgcat::mc {Colorbar}] \
	-variable hls(lock,colorbar)
    $mb.lock add checkbutton -label [msgcat::mc {Block}] \
	-variable hls(lock,block)
    $mb.lock add checkbutton -label [msgcat::mc {Smooth}] \
	-variable hls(lock,smooth)

    # Param
    set f [ttk::frame $w.param]
    ttk::label $f.currenttitle -text [msgcat::mc {Current}]
    ttk::label $f.viewtitle -text [msgcat::mc {View}]
    ttk::label $f.huetitle -text [msgcat::mc {Hue}]
    ttk::label $f.saturationtitle -text [msgcat::mc {Saturation}]
    ttk::label $f.lightnesstitle -text [msgcat::mc {Lightness}]

    ttk::radiobutton $f.huecurrent -variable current(hls) \
	-value hue -command HLSChannel
    ttk::radiobutton $f.lightnesscurrent -variable current(hls) \
	-value lightness -command HLSChannel
    ttk::radiobutton $f.saturationcurrent -variable current(hls) \
	-value saturation -command HLSChannel

    ttk::checkbutton $f.hueview -variable hls(hue) -command HLSView
    ttk::checkbutton $f.lightnessview -variable hls(lightness) -command HLSView
    ttk::checkbutton $f.saturationview -variable hls(saturation) -command HLSView

    grid x $f.currenttitle $f.viewtitle -padx 2 -pady 2 -sticky w
    grid $f.huetitle $f.huecurrent $f.hueview -padx 2 -pady 2 -sticky w
    grid $f.lightnesstitle $f.lightnesscurrent $f.lightnessview -padx 2 -pady 2 -sticky w
    grid $f.saturationtitle $f.saturationcurrent $f.saturationview -padx 2 -pady 2 -sticky w

    # Buttons
    set f [ttk::frame $w.buttons]
    ttk::button $f.close -text [msgcat::mc {Close}] -command HLSDestroyDialog
    pack $f.close -side left -expand true -padx 2 -pady 4

    # Fini
    ttk::separator $w.sep -orient horizontal
    pack $w.buttons $w.sep -side bottom -fill x
    pack $w.param -side top -fill both -expand true

    bind $w <<Close>> HLSDestroyDialog
}

proc HLSDestroyDialog {} {
    global ihls

    if {[winfo exists $ihls(top)]} {
	destroy $ihls(top)
	destroy $ihls(mb)
    }
}

proc UpdateHLSMenu {} {
    # can be changed by wcs
    SetCoordSystem hls system {} {}
}

proc UpdateHLSDialog {} {
    global hls
    global ihls
    global current

    global debug
    if {$debug(tcl,update)} {
	puts stderr "UpdateHLSDialog"
    }

    if {![winfo exists $ihls(top)]} {
	return
    }

    if {$current(frame) != {}} {
	set hls(frame) $current(frame)
	if {[$current(frame) has fits]} {
	    # now make sure we have the coord systems
	    AdjustCoordSystem hls system
	    CoordMenuEnable $ihls(mb).align hls system {} {}
	} else {
	    CoordMenuReset $ihls(mb).align hls system {} {}
	}
    }

    if {$current(frame) != {}} {
	set current(hls) [$current(frame) get hls channel]
	set r [$current(frame) get hls view]
	set hls(hue) [lindex $r 0]
	set hls(lightness) [lindex $r 1]
	set hls(saturation) [lindex $r 2]
	set hls(system) [$current(frame) get hls system]
    }
}

proc HLSBackup {ch which} {
    puts $ch "$which hls channel [$which get hls channel]"
    puts $ch "$which hls view [$which get hls view]"
    puts $ch "$which hls system [$which get hls system]"
}

# Process Cmds

proc ProcessHLSCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    HLSDialog

    hls::YY_FLUSH_BUFFER
    hls::yy_scan_string [lrange $var $i end]
    hls::yyparse
    incr i [expr $hls::yycnt-1]
}

proc ProcessSendHLSCmd {proc id param {sock {}} {fn {}}} {
    global parse
    set parse(proc) $proc
    set parse(id) $id

    hlssend::YY_FLUSH_BUFFER
    hlssend::yy_scan_string $param
    hlssend::yyparse
}

