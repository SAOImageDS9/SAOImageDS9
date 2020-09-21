#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc MaskDef {} {
    global mask
    global imask
    global pmask

    set imask(top) .msk
    set imask(mb) .mskmb

    set mask(transparency) 0
    set mask(system) physical

    set mask(color) red
    set mask(mark) nonzero
    set mask(low) 0
    set mask(high) 0
    set mask(blend) screen

    array set pmask [array get mask]
}

proc MaskMark {} {
    global mask
    global current

    if {$current(frame) != {}} {
	$current(frame) mask mark $mask(mark)
	# for backward compatibility
	set mask(mark) [$current(frame) get mask mark]
    }
}

proc MaskBlend {} {
    global mask
    global current

    if {$current(frame) != {}} {
	$current(frame) mask blend $mask(blend)
    }
}

proc MaskRange {} {
    global mask
    global current

    if {$current(frame) != {}} {
	$current(frame) mask range $mask(low) $mask(high)
    }
}

proc MaskColor {} {
    global mask
    global current

    if {$current(frame) != {}} {
	$current(frame) mask color $mask(color)
    }
}

proc MaskTransparency {} {
    global mask
    global current

    if {$current(frame) != {}} {
	$current(frame) mask transparency $mask(transparency)
    }
}

proc MaskSystem {} {
    global mask
    global current

    if {$current(frame) != {}} {
	$current(frame) mask system $mask(system)
    }
}

proc MaskClear {} {
    global current

    if {$current(frame) != {}} {
	$current(frame) mask clear
    }
}

# used in Backup
proc MaskDialog {} {
    global mask
    global imask
    global current
    global ds9

    # see if we already have a ctr window visible
    if {[winfo exists $imask(top)]} {
	raise $imask(top)
	return
    }

    # create the mask window
    set w $imask(top)
    set mb $imask(mb)

    Toplevel $w $mb 6 [msgcat::mc {Mask Parameters}] MaskDestroyDialog

    $mb add cascade -label [msgcat::mc {File}] -menu $mb.file
    $mb add cascade -label [msgcat::mc {Edit}] -menu $mb.edit
    $mb add cascade -label [msgcat::mc {Align}] -menu $mb.align
    $mb add cascade -label [msgcat::mc {Blend}] -menu $mb.blend

    ThemeMenu $mb.file
    $mb.file add command -label "[msgcat::mc {Open}]..." \
	-command [list OpenDialog fits mask] -accelerator "${ds9(ctrl)}O"
    $mb.file add cascade -label [msgcat::mc {Open as}] \
	-menu $mb.file.open
    $mb.file add separator
    $mb.file add cascade -label [msgcat::mc {Import}] \
	-menu $mb.file.import
    $mb.file add separator
    $mb.file add command -label [msgcat::mc {Apply}] -command MaskApplyDialog
    $mb.file add command -label [msgcat::mc {Clear}] -command MaskClear
    $mb.file add separator
    $mb.file add command -label [msgcat::mc {Close}] \
	-command MaskDestroyDialog -accelerator "${ds9(ctrl)}W"

    ThemeMenu $mb.file.open
    $mb.file.open add command -label "[msgcat::mc {Mosaic WCS}]..." \
	-command [list OpenDialog mosaicimagewcs mask]
    $mb.file.open add command -label "[msgcat::mc {Mosaic WCS Segment}]..." \
	-command [list OpenDialog mosaicwcs mask]
    $mb.file.open add command -label "[msgcat::mc {Mosaic IRAF}]..." \
	-command [list OpenDialog mosaicimageiraf mask]
    $mb.file.open add command -label "[msgcat::mc {Mosaic IRAF Segment}]..." \
	-command [list OpenDialog mosaiciraf mask]
    $mb.file.open add command -label "[msgcat::mc {Mosaic WFPC2}]..." \
	-command [list OpenDialog mosaicimagewfpc2 mask]

    ThemeMenu $mb.file.import
    $mb.file.import add command -label "[msgcat::mc {Array}]..." \
	-command [list ImportDialog array mask]
    $mb.file.import add command -label {NRRD} \
	-command [list ImportDialog nrrd mask]

    EditMenu $mb imask

    CoordMenu $mb.align mask system 1 {} {} MaskSystem

    ThemeMenu $mb.blend
    $mb.blend add radiobutton -label [msgcat::mc {Source}] \
	-variable mask(blend) -value source -command MaskBlend
    $mb.blend add radiobutton -label [msgcat::mc {Screen}] \
	-variable mask(blend) -value screen -command MaskBlend
    $mb.blend add radiobutton -label [msgcat::mc {Darken}] \
	-variable mask(blend) -value darken -command MaskBlend
    $mb.blend add radiobutton -label [msgcat::mc {Lighten}] \
	-variable mask(blend) -value lighten -command MaskBlend

    # Param
    set f [ttk::frame $w.param]

    slider $f.slider 0 100 [msgcat::mc {Transparency}] \
	mask(transparency) [list MaskTransparency]

    grid $f.slider -padx 2 -pady 2 -sticky ew
    grid columnconfigure $f 0 -weight 1

    # Buttons
    set f [ttk::frame $w.buttons]
    ttk::button $f.apply -text [msgcat::mc {Apply}] -command MaskApplyDialog
    ttk::button $f.clear -text [msgcat::mc {Clear}] -command MaskClear
    ttk::button $f.close -text [msgcat::mc {Close}] -command MaskDestroyDialog
    pack $f.apply $f.clear $f.close -side left -expand true -padx 2 -pady 4

    # Fini
    ttk::separator $w.sep -orient horizontal
    pack $w.buttons $w.sep -side bottom -fill x
    pack $w.param -side top -fill both -expand true

    bind $w <<Open>> [list OpenDialog fits mask]
    bind $w <<Close>> MaskDestroyDialog
}

proc MaskApplyDialog {} {
    global mask

    MaskTransparency
}

proc MaskDestroyDialog {} {
    global imask

    if {[winfo exists $imask(top)]} {
	destroy $imask(top)
	destroy $imask(mb)
    }
}

proc UpdateMaskMenu {} {
    global mask
    global current
    global ds9

    global debug
    if {$debug(tcl,update)} {
	puts stderr "UpdateMaskMenu"
    }

    if {$current(frame) == {}} {
	return
    }

    set mask(transparency) [$current(frame) get mask transparency]
    set mask(system) [$current(frame) get mask system]

    set mask(color) [$current(frame) get mask color]
    set mask(mark) [$current(frame) get mask mark]
    set mask(blend) [$current(frame) get mask blend]
    set range [$current(frame) get mask range]
    set mask(low) [lindex $range 0]
    set mask(high) [lindex $range 1]

    switch -- [$current(frame) get type] {
	base {
	    $ds9(mb).analysis entryconfig \
		"[msgcat::mc {Mask Parameters}]..." -state normal
	}
	3d -
	rgb {
	    $ds9(mb).analysis entryconfig \
		"[msgcat::mc {Mask Parameters}]..." -state disabled
	}
    }
}

proc MaskLoad {} {
    global current
    global mask

    set rr [MaskParamsDialog]
    if {$current(frame) != {}} {
	if {$rr} {
	    $current(frame) mask color $mask(color)
	    $current(frame) mask mark $mask(mark)
	    $current(frame) mask range $mask(low) $mask(high)
	}
    }
    return $rr
}

proc MaskParamsDialog {} {
    global mask
    global ed2

    set w {.mskd}

    set ed2(ok) 0
    set ed2(color) $mask(color)
    set ed2(mark) $mask(mark)
    set ed2(low) $mask(low)
    set ed2(high) $mask(high)

    DialogCreate $w [msgcat::mc {Mask Parameters}] ed2(ok)

    # Param
    set f [ttk::frame $w.param]

    ttk::label $f.colortitle -text [msgcat::mc {Color}]
    ColorMenuButton $f.colorbutton ed2 color {}

    ttk::label $f.marktitle -text [msgcat::mc {Block Pixel}]
    set mb $f.markbutton.menu
    ttk::menubutton $f.markbutton -textvariable ed2(mark) -menu $mb
    ThemeMenu $mb
    $mb add radiobutton -label [msgcat::mc {Zero}] \
	-variable ed2(mark) -value zero
    $mb add radiobutton -label [msgcat::mc {Non-Zero}] \
	-variable ed2(mark) -value nonzero
    $mb add radiobutton -label [msgcat::mc {NAN}] \
	-variable ed2(mark) -value nan
    $mb add radiobutton -label [msgcat::mc {Non-NAN}] \
	-variable ed2(mark) -value nonnan
    $mb add radiobutton -label [msgcat::mc {Range}] \
	-variable ed2(mark) -value range

    ttk::label $f.rangetitle -text [msgcat::mc {Range}]
    ttk::entry $f.low -textvariable ed2(low) -width 13
    ttk::entry $f.high -textvariable ed2(high) -width 13

    grid $f.colortitle $f.colorbutton -padx 2 -pady 2 -sticky w
    grid $f.marktitle $f.markbutton -padx 2 -pady 2 -sticky w
    grid $f.rangetitle $f.low $f.high -padx 2 -pady 2 -sticky w

    # Buttons
    set f [ttk::frame $w.buttons]
    ttk::button $f.ok -text [msgcat::mc {OK}] -command {set ed2(ok) 1} \
	-default active 
    ttk::button $f.cancel -text [msgcat::mc {Cancel}] -command {set ed2(ok) 0}
    pack $f.ok $f.cancel -side left -expand true -padx 2 -pady 4

    bind $w <Return> {set ed2(ok) 1}

    # Fini
    ttk::separator $w.sep -orient horizontal
    pack $w.buttons $w.sep -side bottom -fill x
    pack $w.param -side top -fill both -expand true

    DialogWait $w ed2(ok)
    destroy $w

    if {$ed2(ok)} {
	set mask(color) [string tolower $ed2(color)]
	set mask(mark) $ed2(mark)
	set mask(low) $ed2(low)
	set mask(high) $ed2(high)
    }

    set rr $ed2(ok)
    unset ed2
    return $rr
}

proc MaskBackup {ch which} {
    puts $ch "$which mask transparency [$which get mask transparency]"
    puts $ch "$which mask system [$which get mask system]"

    puts $ch "$which mask color [$which get mask color]"
    puts $ch "$which mask mark [$which get mask mark]"
    puts $ch "$which mask range [$which get mask range]"
}

proc ProcessMaskCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    global mask
    global parse
    set parse(result) {}

    MaskDialog

    mask::YY_FLUSH_BUFFER
    mask::yy_scan_string [lrange $var $i end]
    mask::yyparse
    incr i [expr $mask::yycnt-1]

    return $parse(result)
}

proc ProcessSendMaskCmd {proc id param {sock {}} {fn {}}} {
    global parse
    set parse(proc) $proc
    set parse(id) $id

    masksend::YY_FLUSH_BUFFER
    masksend::yy_scan_string $param
    masksend::yyparse
}
