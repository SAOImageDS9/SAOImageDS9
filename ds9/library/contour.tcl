#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc ContourDef {} {
    global contour
    global icontour
    global pcontour

    set icontour(top) .ct
    set icontour(mb) .ctmb

    set contour(view) 0
    set contour(copy) {}

    set contour(color) green
    set contour(width) 1
    set contour(dash) 0

    set contour(method) block
    set contour(smooth) 4
    set contour(numlevel) 5

    set contour(scale) linear
    set contour(mode) minmax
    set contour(log) 1000
    set contour(scope) local
    set contour(min) {}
    set contour(max) {}

    # used for command line options
    # example % ds9 -contour log foo.fits -zscale -contour
    # .. contour scale is log, not zscale
    set contour(init,scale) 0
    set contour(init,mode) 0
    set contour(init,scope) 0
    set contour(init,limits) 0

    set pcontour(view) $contour(view)
    set pcontour(method) $contour(method)
    set pcontour(color) $contour(color)
    set pcontour(width) $contour(width)
    set pcontour(dash) $contour(dash)
    set pcontour(smooth) $contour(smooth)
    set pcontour(numlevel) $contour(numlevel)
}

proc UpdateContour {} {
    global contour
    global icontour
    global dcontour
    global current

    global debug
    if {$debug(tcl,update)} {
	puts stderr "UpdateContour"
    }

    if {$current(frame) == {}} {
	return
    }

    if {![$current(frame) has fits]} {
	return
    }

    if {!$contour(view)} {
	$current(frame) contour delete
	return
    }	

    ContourCheckParams
    if {[winfo exists $icontour(top)]} {
	set levels [$dcontour(txt) get 1.0 end]
	# remove endl and trim
	regsub -all "\n" $levels " " levels
	set levels [string trimright $levels " "]

	if {$levels == {}} {
	    ContourGenerateDialog
	    set levels [$dcontour(txt) get 1.0 end]
	    # remove endl and trim
	    regsub -all "\n" $levels " " levels
	    set levels [string trimright $levels " "]
	}

	if {$levels != {} && [ContourCheckMinMax]} {
    $current(frame) contour create \
		$contour(color) $contour(width) $contour(dash) \
		$contour(method) $contour(numlevel) $contour(smooth) \
		$contour(scale) $contour(log) $contour(mode) $contour(scope) \
		$contour(min) $contour(max) \
		"\"$levels\""
	}
    } else {
	set contour(scale) [$current(frame) get colorscale]
	set contour(log) [$current(frame) get colorscale log]
	set contour(mode) [$current(frame) get clip mode]
	set contour(scope) [$current(frame) get clip scope]
	set limits [$current(frame) get clip $contour(mode) $contour(scope)]
	set contour(min) [lindex $limits 0]
	set contour(max) [lindex $limits 1]

	if {[ContourCheckMinMax]} {
	    $current(frame) contour create \
		$contour(color) $contour(width) $contour(dash) \
		$contour(method) $contour(numlevel) $contour(smooth) \
		$contour(scale) $contour(log) $contour(mode) $contour(scope) \
		$contour(min) $contour(max) \
		"{}"
	}
    }
}

proc ContourCheckParams {} {
    global contour

    if {$contour(smooth) < 1} {
	set contour(smooth) 1
    }
    if {$contour(numlevel) < 1} {
	set contour(numlevel) 1
    }
}

proc ContourCheckMinMax {} {
    global contour

    if {$contour(min) != {} &&
	$contour(max) != {} &&
	!($contour(min) eq "nan") &&
	!($contour(max) eq "nan") &&
	[string is double $contour(min)] && 
	[string is double $contour(max)]
    } {
	return 1
    } else {
	return 0
    }
}

proc ContourDialog {} {
    global contour
    global icontour
    global dcontour
    global current
    global ds9

    # see if we already have a ctr window visible
    if {[winfo exists $icontour(top)]} {
	raise $icontour(top)
	return
    }

    # create the contour window
    set w $icontour(top)
    set mb $icontour(mb)

    Toplevel $w $mb 6 [msgcat::mc {Contour Parameters}] ContourDestroyDialog

    # local variables
    $mb add cascade -label [msgcat::mc {File}] -menu $mb.file
    $mb add cascade -label [msgcat::mc {Edit}] -menu $mb.edit
    $mb add cascade -label [msgcat::mc {Color}] -menu $mb.color
    $mb add cascade -label [msgcat::mc {Width}] -menu $mb.width
    $mb add cascade -label [msgcat::mc {Scale}] -menu $mb.scale
    $mb add cascade -label [msgcat::mc {Limits}] -menu $mb.limit
    $mb add cascade -label [msgcat::mc {Scope}] -menu $mb.scope
    $mb add cascade -label [msgcat::mc {Method}] -menu $mb.method

    menu $mb.file
    $mb.file add command -label [msgcat::mc {Apply}] \
	-command ContourApplyDialog
    $mb.file add command -label [msgcat::mc {Generate}] \
	-command ContourGenerateDialog
    $mb.file add command -label [msgcat::mc {Clear}] \
	-command ContourOffDialog
    $mb.file add separator
    $mb.file add command -label [msgcat::mc {Copy Contours}] \
	-command ContourCCopyDialog
    $mb.file add command -label "[msgcat::mc {Paste Contours}]..." \
	-command ContourCPasteDialog
    $mb.file add separator
    $mb.file add command -label "[msgcat::mc {Load Contours}]..." \
	-command ContourLoadDialog
    $mb.file add command -label "[msgcat::mc {Save Contours}]..." \
	-command ContourSaveDialog
    $mb.file add separator
    $mb.file add command -label "[msgcat::mc {Load Contour Levels}]..." \
	-command ContourLoadLevels
    $mb.file add command -label "[msgcat::mc {Save Contour Levels}]..." \
	-command ContourSaveLevels
    $mb.file add separator
    $mb.file add command -label [msgcat::mc {Convert to Polygons}] \
	-command Contour2Polygons
    $mb.file add separator
    $mb.file add command -label [msgcat::mc {Close}] \
	-command ContourDestroyDialog

    menu $mb.edit
    $mb.edit add command -label [msgcat::mc {Cut}] \
	-command ContourCutDialog -accelerator "${ds9(ctrl)}X"
    $mb.edit add command -label [msgcat::mc {Copy}] \
	-command ContourCopyDialog -accelerator "${ds9(ctrl)}C"
    $mb.edit add command -label [msgcat::mc {Paste}] \
	-command ContourPasteDialog -accelerator "${ds9(ctrl)}V"

    ColorMenu $mb.color contour color {}
    WidthDashMenu $mb.width contour width dash {} {}

    menu $mb.scale
    $mb.scale add radiobutton -label [msgcat::mc {Linear}] \
	-variable contour(scale) -value linear
    $mb.scale add radiobutton -label [msgcat::mc {Log}] \
	-variable contour(scale) -value log
    $mb.scale add radiobutton -label [msgcat::mc {Power}] \
	-variable contour(scale) -value pow
    $mb.scale add radiobutton -label [msgcat::mc {Square Root}] \
	-variable contour(scale) -value sqrt
    $mb.scale add radiobutton -label [msgcat::mc {Squared}] \
	-variable contour(scale) -value squared
    $mb.scale add radiobutton -label {ASINH} \
	-variable contour(scale) -value asinh
    $mb.scale add radiobutton -label {SINH} \
	-variable contour(scale) -value sinh
    $mb.scale add radiobutton \
	-label [msgcat::mc {Histogram Equalization}] \
	-variable contour(scale) -value histequ
    $mb.scale add separator
    $mb.scale add command -label "[msgcat::mc {Log Exponent}]..." \
	-command ContourLogDialog

    menu $mb.limit
    $mb.limit add radiobutton -label [msgcat::mc {Min Max}] \
	-variable contour(mode) -value minmax -command ContourModeDialog
    $mb.limit add separator
    $mb.limit add radiobutton -label {99.5%} \
	-variable contour(mode) -value 99.5 -command ContourModeDialog
    $mb.limit add radiobutton -label {99%} \
	-variable contour(mode) -value 99 -command ContourModeDialog
    $mb.limit add radiobutton -label {98%} \
	-variable contour(mode) -value 98 -command ContourModeDialog
    $mb.limit add radiobutton -label {95%} \
	-variable contour(mode) -value 95 -command ContourModeDialog
    $mb.limit add radiobutton -label {90%} \
	-variable contour(mode) -value 90 -command ContourModeDialog
    $mb.limit add separator
    $mb.limit add radiobutton -label {ZScale} \
	-variable contour(mode) -value zscale -command ContourModeDialog
    $mb.limit add radiobutton -label {ZMax} \
	-variable contour(mode) -value zmax -command ContourModeDialog
    $mb.limit add radiobutton -label [msgcat::mc {User}] \
	-variable contour(mode) -value user -command ContourModeDialog

    menu $mb.scope 
    $mb.scope add radiobutton -label [msgcat::mc {Global}] \
	-variable contour(scope) -value global -command ContourModeDialog
    $mb.scope add radiobutton -label [msgcat::mc {Local}] \
	-variable contour(scope) -value local -command ContourModeDialog

    menu $mb.method
    $mb.method add radiobutton -label [msgcat::mc {Block}] \
	-variable contour(method) -value block
    $mb.method add radiobutton -label [msgcat::mc {Smooth}] \
	-variable contour(method) -value smooth

    # Param
    set f [ttk::labelframe $w.param -text [msgcat::mc {Contour}] -padding 2]

    slider $f.nslider 0 50 [msgcat::mc {Levels}] contour(numlevel) {}
    slider $f.rslider 0 32 [msgcat::mc {Smoothness}] contour(smooth) {}

    ttk::label $f.title -text [msgcat::mc {Limits}]
    ttk::label $f.ltitle -text [msgcat::mc {Low}]
    ttk::entry $f.low -textvariable contour(min) -width 10
    ttk::label $f.htitle -text [msgcat::mc {High}]
    ttk::entry $f.high -textvariable contour(max) -width 10

    grid $f.nslider -columnspan 6 -padx 2 -pady 2
    grid $f.rslider -columnspan 6 -padx 2 -pady 2
    grid $f.title $f.ltitle $f.low $f.htitle $f.high -padx 2 -pady 2

    # Levels
    set f [ttk::labelframe $w.levels -text [msgcat::mc {Levels}] -padding 2]

    set dcontour(txt) [text $f.text \
			   -wrap none \
			   -width 15 \
			   -height 10 \
			   -font [font actual TkDefaultFont] \
			   -yscrollcommand [list $f.yscroll set] \
		      ]
    ttk::scrollbar $f.yscroll -command [list $dcontour(txt) yview] \
	-orient vertical

    grid $f.text $f.yscroll -sticky news
    grid rowconfigure $f 0 -weight 1
    grid columnconfigure $f 0 -weight 1

    # Buttons
    set f [ttk::frame $w.buttons]
    ttk::button $f.apply -text [msgcat::mc {Apply}] \
	-command ContourApplyDialog
    ttk::button $f.generate -text [msgcat::mc {Generate}] \
	-command ContourGenerateDialog
    ttk::button $f.clear -text [msgcat::mc {Clear}] \
	-command ContourOffDialog
    ttk::button $f.close -text [msgcat::mc {Close}] \
	-command ContourDestroyDialog
    pack $f.apply $f.generate $f.clear $f.close \
	-side left -expand true -padx 2 -pady 4

    # Fini
    grid $w.param $w.levels -sticky news
    grid $w.buttons - -sticky ew
    grid rowconfigure $w 0 -weight 1
    grid columnconfigure $w 1 -weight 1

    UpdateContourDialog
}

proc ContourApplyDialog {} {
    global contour

    set contour(view) 1
    UpdateContour
}

proc ContourDestroyDialog {} {
    global contour
    global icontour
    global dcontour

    if {[winfo exists $icontour(top)]} {
	destroy $icontour(top)
	destroy $icontour(mb)
    }

    unset dcontour
}

proc ContourGenerateDialog {} {
    global contour
    global dcontour
    global current

    ContourCheckParams

    $dcontour(txt) delete 1.0 end
    if {$current(frame) != {}} {
	if {([$current(frame) has fits]) && [ContourCheckMinMax]} {
	    set ll [$current(frame) get colorscale level $contour(numlevel) \
			$contour(min) $contour(max) \
			$contour(scale) $contour(log)]
	    regsub -all " " "$ll" "\n" ll
	    $dcontour(txt) insert end "$ll"
	}
    }
}

proc ContourOffDialog {} {
    global contour
    global current

    set contour(view) 0
    if {$current(frame) != {}} {
	$current(frame) contour delete
	$current(frame) contour delete aux
    }
    UpdateContourScale
    UpdateContourDialog
}

proc ContourCutDialog {} {
    global icontour
    global dcontour

    if {[winfo exists $icontour(top)]} {
	set w [focus -displayof $icontour(top)]
	if {$w == $dcontour(txt)} {
	    tk_textCut $w
	} else {
	    EntryCut $icontour(top)
	}
    }
}

proc ContourCopyDialog {} {
    global icontour
    global dcontour

    if {[winfo exists $icontour(top)]} {
	set w [focus -displayof $icontour(top)]
	if {$w == $dcontour(txt)} {
	    tk_textCopy $w
	} else {
	    EntryCopy $icontour(top)
	}
    }
}

proc ContourPasteDialog {} {
    global icontour
    global dcontour

    if {[winfo exists $icontour(top)]} {
	set w [focus -displayof $icontour(top)]
	if {$w == $dcontour(txt)} {
	    tk_textPaste $w
	} else {
	    EntryPaste $icontour(top)
	}
    }
}

proc ContourCCopyDialog {} {
    global contour
    global current

    set contour(copy) $current(frame)
    UpdateContourDialog
}

proc ContourCPasteDialog {} {
    global ds9
    global current
    global contour
    global ed

    if {$current(frame) == {} || $contour(copy) == {}} {
	return
    }

    set w {.ctld}

    set ed(ok) 0
    set ed(system) wcs
    set ed(sky) fk5
    set ed(color) green
    set ed(width) 1
    set ed(dash) 0
    set ed(frame) $current(frame)
    set ed(original) 0

    SetCoordSystem ed system sky {}
    AdjustCoordSystem ed system

    DialogCreate $w [msgcat::mc {Contour Paste}] ed(ok)

    # Param
    set f [ttk::frame $w.param1]

    ttk::checkbutton $f.original -text [msgcat::mc {Use Original Color/Width}] -variable ed(original)
    grid $f.original -padx 2 -pady 2 -sticky w

    set f [ttk::frame $w.param]

    ttk::label $f.coordtitle -text [msgcat::mc {Coordinate System}]

    CoordMenuButton $f.coordbutton ed system 1 {} {} {}
    CoordMenuEnable $f.coordbutton.menu ed system 1 {} {}

    ttk::label $f.colortitle -text [msgcat::mc {Color}]
    ColorMenuButton $f.colorbutton ed color {}

    ttk::label $f.widthtitle -text [msgcat::mc {Width}]
    ttk::menubutton $f.widthbutton -textvariable ed(width) \
	-menu $f.widthbutton.menu
    WidthDashMenu $f.widthbutton.menu ed width dash {} {}

    grid $f.coordtitle $f.coordbutton -padx 2 -pady 2 -sticky w
    grid $f.colortitle $f.colorbutton -padx 2 -pady 2 -sticky w
    grid $f.widthtitle $f.widthbutton -padx 2 -pady 2 -sticky w

    # Buttons
    set f [ttk::frame $w.buttons]
    ttk::button $f.ok -text [msgcat::mc {OK}] -command {set ed(ok) 1} \
	-default active 
    ttk::button $f.cancel -text [msgcat::mc {Cancel}] -command {set ed(ok) 0}
    pack $f.ok $f.cancel -side left -expand true -padx 2 -pady 4

    bind $w <Return> {set ed(ok) 1}

    # Fini
    ttk::separator $w.sep -orient horizontal
    ttk::separator $w.sep2 -orient horizontal
    pack $w.buttons $w.sep -side bottom -fill x
#    pack $w.param1 $w.sep2 $w.param2 -side top -fill both -expand true
    pack $w.param -side top -fill both -expand true

    DialogCenter $w 
    DialogWait $w ed(ok)
    DialogDismiss $w

    if {$ed(ok)} {
	set ed(color) [string tolower $ed(color)]

	if {$current(frame) == $contour(copy)} {
	    set ed(system) physical
	}

	set cc [$contour(copy) get contour $ed(system) fk5]
	if {$ed(original)} {
	    $current(frame) contour paste cc
	} else {
	    $current(frame) contour paste cc $ed(color) $ed(width) $ed(dash)
	}
	UpdateContourDialog
    }

    set rr $ed(ok)
    unset ed
    return $rr
}

proc ContourModeDialog {} {
    global current
    global contour

    if {$current(frame) != {}} {
	set limits [$current(frame) get clip $contour(mode) $contour(scope)]
	set contour(min) [lindex $limits 0]
	set contour(max) [lindex $limits 1]
    }
}

proc ContourLoadLevels {} {
    set fn [OpenFileDialog contourlevlfbox]

    ContourLoadLevelsNow $fn
}

proc ContourLoadLevelsNow {fn} {
    global dcontour

    if {$fn == {}} {
	return
    }

    $dcontour(txt) delete 1.0 end
    set ch [open $fn r]
    if {[file extension $fn] == {.lev}} {
	$dcontour(txt) insert end [read $ch]
    } else {
	ContourLoadLevelsNew $ch
    }
    close $ch
}

proc ContourLoadLevelsNew {ch} {
    global dcontour

    while {[gets $ch line] != -1} {
	set aa [split $line {= }]
	regsub -all {[{}]} $aa {} aa
	regsub -all { +} $aa { } aa
	set aa [string trim $aa]

	if {![string compare -nocase [lindex $aa 0] {level}]} {
	    set value [string trim [lindex $aa 1]]
	    if {[string is double $value]} {
		$dcontour(txt) insert end "$value\n"
	    }
	}
    }
}

proc ContourSaveLevels {} {
    set fn [SaveFileDialog contourlevsfbox]
    ContourSaveLevelsNow $fn
}

proc ContourSaveLevelsNow {fn} {
    global dcontour

    if {$fn == {}} {
	return
    }

    set id [open $fn w]
    puts -nonewline $id "[$dcontour(txt) get 1.0 end]"
    close $id
}

proc ContourSaveDialog {} {
    global ds9
    global current
    global contour
    global ed
    global wcs

    set fn [SaveFileDialog contoursfbox]

    if {$fn == {} || $current(frame) == {}} {
	return
    }

    set w {.ctld}

    set ed(ok) 0
    set ed(system) wcs
    set ed(sky) fk5
    set ed(skyformat) degrees
    set ed(frame) $current(frame)

    SetCoordSystem ed system sky {}
    AdjustCoordSystem ed system

    DialogCreate $w [msgcat::mc {Contour Save}] ed(ok)

    # Param
    set f [ttk::frame $w.param]

    ttk::label $f.coordtitle -text [msgcat::mc {Coordinate System}]

    CoordMenuButton $f.coordbutton ed system 1 sky skyformat {}
    CoordMenuEnable $f.coordbutton.menu ed system 1 sky skyformat
    grid $f.coordtitle $f.coordbutton -padx 2 -pady 2 -sticky w

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
	switch -- $ed(system) {
	    image -
	    physical -
	    detector -
	    amplifier {}
	    default {
		if {![$current(frame) has wcs $ed(system)]} {
		    Error "[msgcat::mc {Invalid WCS}] $ed(system)"
		    return $ed(ok)
		}
	    }
	}

	$current(frame) contour save "\{$fn\}" $ed(system) $ed(sky)
	UpdateContourDialog
    }

    set rr $ed(ok)
    unset ed
    return $rr
}

proc ContourLoadDialog {} {
    global ds9
    global current
    global contour
    global ed

    set fn [OpenFileDialog contourlfbox]

    if {$fn == {} || $current(frame) == {}} {
	return
    }

    set w {.ctld}

    set ed(ok) 0
    set ed(color) green
    set ed(width) 1
    set ed(dash) 0
    set ed(frame) $current(frame)
    set ed(original) 0
    if {[file extension $fn] == {.con}} {
	ContourLoadOldDialog $fn
    } else {
	ContourLoadNewDialog $fn
    }
}

proc ContourLoadOldDialog {fn} {
    global ds9
    global current
    global contour
    global ed

    set w {.ctld}

    set ed(ok) 0
    set ed(system) wcs
    set ed(sky) fk5
    set ed(color) green
    set ed(width) 1
    set ed(dash) 0
    set ed(frame) $current(frame)

    SetCoordSystem ed system sky {}
    AdjustCoordSystem ed system

    DialogCreate $w [msgcat::mc {Contour Paste}] ed(ok)

    # Param
    set f [ttk::frame $w.param]

    ttk::label $f.coordtitle -text [msgcat::mc {Coordinate System}]

    CoordMenuButton $f.coordbutton ed system 1 {} {} {}
    CoordMenuEnable $f.coordbutton.menu ed system 1 {} {}

    ttk::label $f.colortitle -text [msgcat::mc {Color}]
    ColorMenuButton $f.colorbutton ed color {}

    ttk::label $f.widthtitle -text [msgcat::mc {Width}]
    ttk::menubutton $f.widthbutton -textvariable ed(width) \
	-menu $f.widthbutton.menu
    WidthDashMenu $f.widthbutton.menu ed width dash {} {}

    grid $f.coordtitle $f.coordbutton -padx 2 -pady 2 -sticky w
    grid $f.colortitle $f.colorbutton -padx 2 -pady 2 -sticky w
    grid $f.widthtitle $f.widthbutton -padx 2 -pady 2 -sticky w

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
	set ed(color) [string tolower $ed(color)]
	$current(frame) contour load $ed(color) $ed(width) $ed(dash) \
	    "\{$fn\}" $ed(system) $ed(sky)
	UpdateContourDialog
    }

    set rr $ed(ok)
    unset ed
    return $rr
}

proc ContourLoadNewDialog {fn} {
    global ds9
    global current
    global contour
    global ed

    set w {.ctld}

    set ed(ok) 0
    set ed(color) green
    set ed(width) 1
    set ed(dash) 0
    set ed(frame) $current(frame)
    set ed(original) 0

    DialogCreate $w [msgcat::mc {Contour Paste}] ed(ok)

    # Param
    set f [ttk::frame $w.param1]

    ttk::checkbutton $f.original -text [msgcat::mc {Use Original Color/Width}] \
	-variable ed(original)

    grid $f.original -padx 2 -pady 2 -sticky w

    set f [ttk::frame $w.param2]

    ttk::label $f.colortitle -text [msgcat::mc {Color}]
    ColorMenuButton $f.colorbutton ed color {}

    ttk::label $f.widthtitle -text [msgcat::mc {Width}]
    ttk::menubutton $f.widthbutton -textvariable ed(width) \
	-menu $f.widthbutton.menu
    WidthDashMenu $f.widthbutton.menu ed width dash {} {}

    grid $f.colortitle $f.colorbutton -padx 2 -pady 2 -sticky w
    grid $f.widthtitle $f.widthbutton -padx 2 -pady 2 -sticky w

    # Buttons
    set f [ttk::frame $w.buttons]
    ttk::button $f.ok -text [msgcat::mc {OK}] -command {set ed(ok) 1} \
	-default active 
    ttk::button $f.cancel -text [msgcat::mc {Cancel}] -command {set ed(ok) 0}
    pack $f.ok $f.cancel -side left -expand true -padx 2 -pady 4

    bind $w <Return> {set ed(ok) 1}

    # Fini
    ttk::separator $w.sep -orient horizontal
    ttk::separator $w.sep2 -orient horizontal
    pack $w.buttons $w.sep -side bottom -fill x
    pack $w.param1 $w.sep2 $w.param2 -side top -fill both -expand true

    DialogCenter $w 
    DialogWait $w ed(ok)
    DialogDismiss $w

    if {$ed(ok)} {
	set ed(color) [string tolower $ed(color)]

	if {$ed(original)} {
	    $current(frame) contour load "\{$fn\}"
	} else {
	    $current(frame) contour load "\{$fn\}" \
		$ed(color) $ed(width) $ed(dash)
	}
	UpdateContourDialog
    }

    set rr $ed(ok)
    unset ed
    return $rr
}

proc Contour2Polygons {} {
    global current
    global contour

    if {$current(frame) != {}} {
	$current(frame) contour create polygon
	$current(frame) contour delete
    }    
}

proc UpdateContourMenu {} {
    global contour
    global current

    global debug
    if {$debug(tcl,update)} {
	puts stderr "UpdateContourMenu"
    }

    if {($current(frame) == {})} {
	return
    }

    if {![$current(frame) has fits]} {
	return
    }

    set contour(view) [$current(frame) has contour]

    if {[$current(frame) has contour]} {
	set contour(color) [$current(frame) get contour color]
	set contour(width) [$current(frame) get contour width]
	set contour(dash) [$current(frame) get contour dash]
	set contour(method) [$current(frame) get contour method]
	set contour(smooth) [$current(frame) get contour smooth]
	set contour(numlevel) [$current(frame) get contour number level]
    }

    UpdateContourScale
}

proc UpdateContourScale {} {
    global contour
    global current
    global ds9

    global debug
    if {$debug(tcl,update)} {
	puts stderr "UpdateContourScale"
    }

    if {$current(frame) == {}} {
	return
    }

    if {![$current(frame) has fits]} {
	return
    }

    if {[$current(frame) has contour]} {
	set contour(scale) [$current(frame) get contour colorscale]
	set contour(mode) [$current(frame) get contour clip mode]
	set contour(scope) [$current(frame) get contour clip scope]
	set contour(log) [$current(frame) get contour colorscale log]
	set limits [$current(frame) get clip $contour(mode) $contour(scope)]
	set contour(min) [lindex $limits 0]
	set contour(max) [lindex $limits 1]
    } else {
	if {!($ds9(init) && $contour(init,scale))} {
	    set contour(scale) [$current(frame) get colorscale]
	    set contour(log) [$current(frame) get colorscale log]
	}
	if {!($ds9(init) && $contour(init,mode))} {
	    set contour(mode) [$current(frame) get clip mode]
	}
	if {!($ds9(init) && $contour(init,scope))} {
	    set contour(scope) [$current(frame) get clip scope]
	}
	if {!($ds9(init) && $contour(init,limits))} {
	    set limits [$current(frame) get clip $contour(mode) $contour(scope)]
	    set contour(min) [lindex $limits 0]
	    set contour(max) [lindex $limits 1]
	}
    }
}

proc UpdateContourDialog {} {
    global contour
    global icontour
    global dcontour
    global current

    global debug
    if {$debug(tcl,update)} {
	puts stderr "UpdateContourDialog"
    }

    if {![winfo exists $icontour(top)]} {
	return
    }

    if {$current(frame) == {}} {
	return
    }

    if {![$current(frame) has fits]} {
	return
    }

    if {[$current(frame) has contour]} {
	set levels [$current(frame) get contour level]
	regsub -all "\n" "$levels" " " levels
	set levels [join $levels "\n"]
	if {$levels != {}} {
	    $dcontour(txt) delete 1.0 end
	    $dcontour(txt) insert end $levels
	} else {
	    ContourGenerateDialog
	}
    } else {
	ContourGenerateDialog
    }
}

proc ContourLogDialog {} {
    global contour

    EntryDialog [msgcat::mc {Scale}] [msgcat::mc {Log Exponent}] 10 contour(log)
}

proc ContourBackup {ch which fdir rdir} {
    switch [$which get type] {
	base -
	3d {ContourBackupBase $ch $which $fdir $rdir}
	rgb {ContourBackupRGB $ch $which $fdir $rdir}
    }
}

proc ContourBackupBase {ch which fdir rdir} {
    if {[$which has contour]} {
	set color [$which get contour color]
	set width [$which get contour width]
	set dash [$which get contour dash]
	set method [$which get contour method]
	set numlevel [$which get contour number level]
	set smooth [$which get contour smooth]
	set scale [$which get contour colorscale]
	set log [$which get contour colorscale log]
	set mode [$which get contour clip mode]
	set scope [$which get contour clip scope]
	set limits [$which get contour clip]
	set levels [$which get contour level]

	puts $ch "$which contour create $color $width $dash $method $numlevel $smooth $scale $log $mode $scope $limits \{\"$levels\"\}"
    }

    # delete old contours
    foreach ff [glob -directory $fdir -nocomplain "aux*.ctr"] {
	catch {file delete -force $ff}
    }

    if {[$which has contour aux]} {
	set fn $fdir/aux.ctr
	set rfn $rdir/aux.ctr
	$which contour save aux \"$fn\" physical fk5
	puts $ch "$which contour load \{\"$rfn\"\}"
    }
}

proc ContourBackupRGB {ch which fdir rdir} {
    set sav [$which get rgb channel]
    foreach cc {red green blue} {
	$which rgb channel $cc
	puts $ch "$which rgb channel $cc"
	ContourBackupBase $ch $which $fdir $rdir
    }
    $which rgb channel $sav
    puts $ch "$which rgb channel $sav"
}

proc PrefsDialogContour {} {
    global dprefs

    set w $dprefs(tab)

    $dprefs(list) insert end [msgcat::mc {Contours}]
    lappend dprefs(tabs) [ttk::frame $w.contour]

    set f [ttk::labelframe $w.contour.param -text [msgcat::mc {Contours}]]

    ttk::label $f.mtitle -text [msgcat::mc {Method}]
    ttk::menubutton $f.method -textvariable pcontour(method) \
	-menu $f.method.menu

    global pcontour
    ttk::label $f.ctitle -text [msgcat::mc {Color}]
    ColorMenuButton $f.color pcontour color {}

    ttk::label $f.wtitle -text [msgcat::mc {Width}]
    ttk::menubutton $f.width -textvariable pcontour(width) -menu $f.width.menu
    WidthDashMenu $f.width.menu pcontour width dash {} {}

    grid $f.mtitle $f.method -padx 2 -pady 2 -sticky w
    grid $f.ctitle $f.color -padx 2 -pady 2 -sticky w
    grid $f.wtitle $f.width -padx 2 -pady 2 -sticky w

    set m $f.method.menu 
    menu $m
    $m add radiobutton -label [msgcat::mc {Block}] \
	-variable pcontour(method) -value block
    $m add radiobutton -label [msgcat::mc {Smooth}] \
	-variable pcontour(method) -value smooth

    pack $f -side top -fill both -expand true
}

proc ProcessContourCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    global contour
    global current

    # we need to be realized
    ProcessRealizeDS9

    switch -- [string tolower [lindex $var $i]] {
	open {ContourDialog}
	close {ContourDestroyDialog}
	clear {ContourOffDialog}
	load {
	    incr i
	    set fn [lindex $var $i]
	    if {$fn != {}} {
		if {[file extension $fn] == {.con}} {
		    # backward compatibility
		    incr i
		    set sys [lindex $var $i]
		    incr i
		    set sky [lindex $var $i]
		    incr i
		    set color [lindex $var $i]
		    incr i
		    set width [lindex $var $i]
		    incr i
		    set dash [lindex $var $i]
		    incr i [ProcessContourFix sys sky color width dash]
		    $current(frame) contour load $color $width $dash \
			"\{$fn\}" $sys $sky
		} else {
		    incr i
		    set color [lindex $var $i]
		    if {$color == {} || [string range $color 0 0] == "-"} {
			$current(frame) contour load "\{$fn\}"
			incr i -1
		    } else {
			incr i
			set width [lindex $var $i]
			incr i
			set dash [FromYesNo [lindex $var $i]]
			$current(frame) contour load "\{$fn\}" \
			    $color $width $dash
		    }
		}
	    }

	    FileLast contourlfbox $fn
	    UpdateContourDialog
	}
	save {
	    incr i
	    set fn [lindex $var $i]
	    incr i
	    set sys [lindex $var $i]
	    incr i
	    set sky [lindex $var $i]

	    # Backward compatibility
	    incr i
	    set color {}
	    incr i
	    set width {}
	    incr i
	    set dash {}
	    incr i [ProcessContourFix sys sky color width dash]

	    if {$fn != {}} {
		$current(frame) contour save "\{$fn\}" $sys $sky
	    }
	    FileLast contoursfbox $fn
	}
	convert {Contour2Polygons}
	loadlevels {
	    ContourDialog
	    incr i
	    ContourLoadLevelsNow [lindex $var $i]
	    UpdateContour
	}
	savelevels {
	    ContourDialog
	    incr i
	    ContourSaveLevelsNow [lindex $var $i]
	}

	copy {ContourCCopyDialog}
	paste {
	    incr i
	    set sys [lindex $var $i]
	    incr i
	    set sky [lindex $var $i]
	    incr i
	    # backward compatibility
	    set color [lindex $var $i]
	    incr i
	    set width [lindex $var $i]
	    incr i
	    set dash [lindex $var $i]
	    incr i [ProcessContourFix sys sky color width dash]

	    if {$current(frame) != {} && $contour(copy) != {}} {
		set cc [$contour(copy) get contour $sys $sky]
		$current(frame) contour paste cc $color $width $dash
	    }
	}

	color {
	    ContourDialog

	    incr i
	    set contour(color) [lindex $var $i]
	    UpdateContour
	}
	width {
	    ContourDialog

 	    incr i
	    set contour(width) [lindex $var $i]
	    UpdateContour
	}
	dash {
	    ContourDialog

	    incr i
	    set contour(dash) [FromYesNo [lindex $var $i]]
	    UpdateContour
	}

	smooth {
	    ContourDialog

	    incr i
	    set contour(smooth) [lindex $var $i]
	    ContourGenerateDialog
	    UpdateContour
	}
	method {
	    ContourDialog

	    incr i
	    set contour(method) [lindex $var $i]
	    ContourGenerateDialog
	    UpdateContour
	}

	nlevels {
	    ContourDialog

	    incr i
	    set contour(numlevel) [lindex $var $i]
	    ContourGenerateDialog
	    UpdateContour
	}
	scale {
	    set contour(init,scale) 1
	    ContourDialog

	    incr i
	    set contour(scale) [string tolower [lindex $var $i]]
	    ContourGenerateDialog
	    UpdateContour
	}
	log {
	    set contour(init,scale) 1
	    ContourDialog

	    incr i
	    switch -- [string tolower [lindex $var $i]] {
		exp {
		    incr i
		    set contour(log) [string tolower [lindex $var $i]]
		}
		default {
		    incr i -1
		    set contour(log) [string tolower [lindex $var $i]]
		}
	    }
	    ContourGenerateDialog
	    UpdateContour
	}
	mode {
	    set contour(init,mode) 1
	    ContourDialog

	    incr i
	    set contour(mode) [lindex $var $i]
	    ContourModeDialog
	    ContourGenerateDialog
	    UpdateContour
	}
	scope {
	    set contour(init,scope) 1
	    ContourDialog

	    incr i
	    set contour(scope) [lindex $var $i]
	    ContourModeDialog
	    ContourGenerateDialog
	    UpdateContour
	}
	limits {
	    set contour(init,limits) 1
	    ContourDialog

	    incr i
	    set contour(min) [lindex $var $i]
	    incr i
	    set contour(max) [lindex $var $i]
	    ContourGenerateDialog
	    UpdateContour
	}

	levels {
	    ContourDialog

	    global dcontour
	    $dcontour(txt) delete 1.0 end
	    incr i
	    $dcontour(txt) insert end [lindex $var $i]
	    UpdateContour
	}

	generate {
	    ContourDialog

	    ContourGenerateDialog
	    UpdateContour
	}

	yes -
	true -
	on -
	1 -
	no -
	false -
	off -
	0 {
	    set contour(view) [FromYesNo [lindex $var $i]]
	    UpdateContour
	}

	default {
	    set contour(view) 1
	    UpdateContour
	    incr i -1
	}
    }
}

proc ProcessContourFix {sysname skyname colorname widthname dashname} {
    upvar $sysname sys
    upvar $skyname sky
    upvar $colorname color
    upvar $widthname width
    upvar $dashname dash

    global current

    set rr 0

    # sys
    switch -- $sys {
	image -
	physical -
	detector -
	amplifier -
	wcs -
	wcsa -
	wcsb -
	wcsc -
	wcsd -
	wcse -
	wcsf -
	wcsg -
	wcsh -
	wcsi -
	wcsj -
	wcsk -
	wcsl -
	wcsm -
	wcsn -
	wcso -
	wcsp -
	wcsq -
	wcsr -
	wcss -
	wcst -
	wcsu -
	wcsv -
	wcsw -
	wcsx -
	wcsy -
	wcsz {}
	default {
	    set dash $width
	    set width $color
	    set color $sky
	    set sky $sys
	    if {[$current(frame) has wcs wcs]} {
		set sys wcs
	    } else {
		set sys physical
	    }
	    incr rr -1
	}
    }

    # sky
    switch -- $sky {
	fk4 -
	b1950 -
	fk5 -
	j2000 -
	icrs -
	galactic -
	ecliptic {}
	default {
	    set dash $width
	    set width $color
	    set color $sky
	    set sky fk5
	    incr rr -1
	}
    }

    # color
    if {[string range $color 0 0] == {-} || $color == {}} {
	set color {}
	set width {}
	set dash {}
	return -3
    }
    switch -- $color {
	white -
	black -
	red -
	green -
	blue -
	cyan -
	magenta -
	yellow {}
	default {
	    if {[string range $color 0 0] != "#"} {
		set dash $width
		set width $color
		set color green
		incr rr -1
	    }
	}
    }

    # width
    if {![string is integer $width]} {
	set dash $width
	set width 1
	incr rr -1
    }

    # dash
    switch -- $dash {
	yes -
	no -
	on -
	off -
	true -
	false -
	0 -
	1 {set dash [FromYesNo $dash]}
	default {
	    set dash 0
	    incr rr -1
	}
    }

    return $rr
}

proc ProcessSendContourCmd {proc id param sock fn} {
    global contour

    switch -- [lindex $param 0] {
	{} {$proc $id [ToYesNo $contour(view)]}
	color {$proc $id "$contour(color)\n"}
	width {$proc $id "$contour(width)\n"}
	dash  {$proc $id [ToYesNo $contour(dash)]}
	smooth {$proc $id "$contour(smooth)\n"}
	method {$proc $id "$contour(method)\n"}
	nlevels {$proc $id "$contour(numlevel)\n"}
	scale {$proc $id "$contour(scale)\n"}
	log -
	{log exp} {$proc $id "$contour(log)\n"}
	mode {$proc $id "$contour(mode)\n"}
	scope {$proc $id "$contour(scope)\n"}
	limits {$proc $id "$contour(min) $contour(max)\n"}
	levels {
	    global dcontour
	    ContourDialog
	    $proc $id "[$dcontour(txt) get 1.0 end]"
	}
	default {
	    global current
	    if {$current(frame) != {}} {
		ProcessSend $proc $id $sock $fn {.ctr} \
		    [$current(frame) get contour [lindex $param 0] [lindex $param 1]]
	    }
	}
    }
}
