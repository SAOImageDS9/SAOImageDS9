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

    set mask(color) red
    set mask(mark) 1
    set mask(transparency) 0

    array set pmask [array get mask]
}

proc MaskTransparency {} {
    global mask
    global current

    if {$current(frame) != {}} {
	$current(frame) mask transparency $mask(transparency)
    }
}

proc MaskClear {} {
    global current

    if {$current(frame) != {}} {
	$current(frame) mask clear
    }
}

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

    menu $mb.file
    $mb.file add command -label "[msgcat::mc {Open}]..." \
	-command [list OpenDialog fits mask]
    $mb.file add cascade -label [msgcat::mc {Open as}] \
	-menu $mb.file.open
    $mb.file add separator
    $mb.file add cascade -label [msgcat::mc {Import}] \
	-menu $mb.file.import
    $mb.file add separator
    $mb.file add command -label [msgcat::mc {Apply}] -command MaskApplyDialog
    $mb.file add command -label [msgcat::mc {Clear}] -command MaskClear
    $mb.file add separator
    $mb.file add command -label [msgcat::mc {Close}] -command MaskDestroyDialog

    menu $mb.file.open
    $mb.file.open add command \
	-label "[msgcat::mc {Mosaic WCS}]..." \
	-command [list OpenDialog mosaicimagewcs mask]
    $mb.file.open add command \
	-label "[msgcat::mc {Mosaic WCS Segment}]..." \
	-command [list OpenDialog mosaicwcs mask]
    $mb.file.open add command \
	-label "[msgcat::mc {Mosaic IRAF}]..." \
	-command [list OpenDialog mosaicimageiraf mask]
    $mb.file.open add command \
	-label "[msgcat::mc {Mosaic IRAF Segment}]..." \
	-command [list OpenDialog mosaiciraf mask]

    menu $mb.file.import
    $mb.file.import add command \
	-label "[msgcat::mc {Array}]..." \
	-command [list ImportDialog array mask]
    $mb.file.import add command \
	-label "[msgcat::mc {NRRD}]..." \
	-command [list ImportDialog nrrd mask]

    EditMenu $mb imask

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

    set mask(color) [$current(frame) get mask color]
    set mask(mark) [$current(frame) get mask mark]
    set mask(transparency) [$current(frame) get mask transparency]

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
	}
    }
    return $rr
}

proc MaskParamsDialog {} {
    global mask
    global ed

    set w {.mskd}

    set ed(ok) 0
    set ed(color) $mask(color)
    set ed(mark) $mask(mark)

    DialogCreate $w [msgcat::mc {Mask Parameters}] ed(ok)

    # Param
    set f [ttk::frame $w.param]

    ttk::label $f.colortitle -text [msgcat::mc {Color}]
    ColorMenuButton $f.colorbutton ed color {}
    ttk::label $f.marktitle -text [msgcat::mc {Block}]
    ttk::radiobutton $f.markz -text [msgcat::mc {Zero}] \
	-variable ed(mark) -value 0 
    ttk::radiobutton $f.marknz -text [msgcat::mc {Non-zero}] \
	-variable ed(mark) -value 1
    ttk::label $f.marktitle2 -text [msgcat::mc {Value}]

    grid $f.colortitle $f.colorbutton - -padx 2 -pady 2 -sticky w
    grid $f.marktitle $f.markz $f.marknz $f.marktitle2 -padx 2 -pady 2 -sticky w

    # Buttons
    set f [ttk::frame $w.buttons]
    ttk::button $f.ok -text [msgcat::mc {OK}] -command {set ed(ok) 1} \
	-default active 
    ttk::button $f.cancel -text [msgcat::mc {Cancel}] -command {set ed(ok) 0}
    pack $f.ok $f.cancel -side left -expand true -padx 2 -pady 4

    bind $w <Return> {set ed(ok) 1}

    # Fini
    ttk::separator $w.sep -orient horizontal
    pack $w.buttons $w.sep -side bottom -fill x
    pack $w.param -side top -fill both -expand true

    DialogCenter $w 
    DialogWait $w ed(ok)
    DialogDismiss $w

    if {$ed(ok)} {
	set mask(color) [string tolower $ed(color)]
	set mask(mark) $ed(mark)
    }

    set rr $ed(ok)
    unset ed
    return $rr
}

proc MaskBackup {ch which} {
    puts $ch "$which mask color [$which get mask color]"
    puts $ch "$which mask mark [$which get mask mark]"
    puts $ch "$which mask transparency [$which get mask transparency]"
}

proc ProcessMaskCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    global mask
    global current

    set rr {}

    switch -- [string tolower [lindex $var $i]] {
	open {MaskDialog}
	close {MaskDestroyDialog}
	color {
	    incr i
	    set mask(color) [lindex $var $i]
	    if {$current(frame) != {}} {
		$current(frame) mask color $mask(color)
	    }
	}
	mark {
	    incr i
	    set mask(mark) [lindex $var $i]
	    if {$current(frame) != {}} {
		$current(frame) mask mark $mask(mark)
	    }
	}
	transparency {
	    incr i
	    set mask(transparency) [lindex $var $i]
	    if {$current(frame) != {}} {
		$current(frame) mask transparency $mask(transparency)
	    }
	    MaskTransparency
	}
	clear {
	    MaskClear
	}

	default {
	    set rr mask
	    incr i -1
	}
    }

    return $rr
}

proc ProcessSendMaskCmd {proc id param} {
    global mask

    switch -- [string tolower $param] {
	color {$proc $id "$mask(color)\n"}
	mark {$proc $id "$mask(mark)\n"}
	transparency {$proc $id "$mask(transparency)\n"}
    }
}

