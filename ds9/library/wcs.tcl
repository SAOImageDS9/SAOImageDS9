#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc WCSDef {} {
    global wcs
    global pwcs
    global iwcs

    set iwcs(top) .wcs
    set iwcs(mb) .wcsmb

    set wcs(system) wcs
    set wcs(sky) fk5
    set wcs(skyformat) sexagesimal

    array set pwcs [array get wcs]
}

proc UpdateWCS {} {
    global wcs
    global ds9
    global current

    # frame
    if {$current(frame) != {}} {
	$current(frame) wcs $wcs(system) $wcs(sky) $wcs(skyformat)

	AlignWCSFrame
	set wcs(frame) $current(frame)
	if {[$current(frame) has fits]} {
	    CoordMenuEnable $ds9(mb).wcs wcs system 0 sky skyformat
	} else {
	    CoordMenuReset $ds9(mb).wcs wcs system 0 sky skyformat
	}
	LayoutWCSInfoBox $current(frame)
    }

    # grid
    global grid
    set grid(system) $wcs(system)
    set grid(sky) $wcs(sky)
    set grid(skyformat) $wcs(skyformat)
    GridUpdateCurrent

    # panzoom dialog
    global panzoom
    set panzoom(system) $wcs(system)
    set panzoom(sky) $wcs(sky)
    set panzoom(skyformat) $wcs(skyformat)
    UpdatePanZoomDialog

    # crosshair dialog
    global crosshair
    set crosshair(system) $wcs(system)
    set crosshair(sky) $wcs(sky)
    set crosshair(skyformat) $wcs(skyformat)
    UpdateCrosshairDialog

    # crop dialog
    global crop
    set crop(system) $wcs(system)
    set crop(sky) $wcs(sky)
    set crop(skyformat) $wcs(skyformat)
    UpdateCropDialog

    # cube
    global cube
    set cube(system) $wcs(system)
    UpdateCubeDialog

    # rgb
    global rgb
    set rgb(system) $wcs(system)
    RGBSystem

    # regions
    global marker
    set marker(system) $wcs(system)
    set marker(sky) $wcs(sky)
    set marker(skyformat) $wcs(skyformat)
    AdjustCoordSystem marker system
}

proc LayoutWCSInfoBox {which} {
    global wcs
    global view

    # if one wcs coord system is visible, change it
    set cnt 0
    set vv {}
    foreach ll {{} a b c d e f g h i j k l m n o p q r s t u v w x y z} {
	if {$view(info,wcs$ll)} {
	    incr cnt
	    set vv wcs$ll
	}
    }
    if {$cnt == 1} {
	set ww [lindex [$which get wcs] 0]
	if {$view(info,$vv) != $view(info,$ww)} {
	    foreach ll {{} a b c d e f g h i j k l m n o p q r s t u v w x y z} {
		set view(info,wcs$ll) 0
	    }
	    set view(info,$ww) 1
	    LayoutInfoPanel
	}
    }
}

proc WCSBackup {ch which fdir rdir} {
    # simple case
    puts $ch "$which wcs [$which get wcs]"
    if {[$which has wcs alt]} {
	set fn $fdir/ds9.wcs
	set rfn $rdir/ds9.wcs

	catch {file delete -force $fn}
	WCSToVar [$which get fits header wcs 1]
	WCSSaveFile $fn
	puts $ch "WCSLoadFile $rfn"
	puts $ch "$which wcs replace text 1 \\\{\[WCSFromVar\]\\\}"
	puts $ch "RealizeDS9"
    }
}

proc WCSDialog {} {
    global wcs
    global iwcs
    global dwcs
    global ds9

    # see if we already have a window visible
    if {[winfo exists $iwcs(top)]} {
	raise $iwcs(top)
	return
    }

    # create the window
    set w $iwcs(top)
    set mb $iwcs(mb)

    # vars
    set dwcs(system) $wcs(system)
    set dwcs(ext) 1
    set dwcs(prev) {}

    Toplevel $w $mb 6 [msgcat::mc {WCS Parameters}] WCSDestroyDialog

    $mb add cascade -label [msgcat::mc {File}] -menu $mb.file
    $mb add cascade -label [msgcat::mc {Edit}] -menu $mb.edit
    $mb add cascade -label [msgcat::mc {WCS}] -menu $mb.wcs
    $mb add cascade -label [msgcat::mc {Extention}] -menu $mb.ext

    menu $mb.file
    $mb.file add command -label [msgcat::mc {Apply}] -command WCSApplyDialog
    $mb.file add command -label [msgcat::mc {Reset}] -command WCSResetDialog
    $mb.file add separator
    $mb.file add command -label "[msgcat::mc {Load}]..." -command WCSLoadDialog
    $mb.file add command -label "[msgcat::mc {Save}]..." -command WCSSaveDialog
    $mb.file add separator
    $mb.file add command -label [msgcat::mc {Close}] -command WCSDestroyDialog

    EditMenu $mb iwcs

    menu $mb.wcs
    $mb.wcs add radiobutton -label [msgcat::mc {WCS}] \
	-variable dwcs(system) -value wcs -command ConfigWCSDialog
    $mb.wcs add separator
    foreach l {a b c d e f g h i j k l m n o p q r s t u v w x y z} {
	$mb.wcs add radiobutton -label "[msgcat::mc {WCS}] $l" \
	    -variable dwcs(system) -value "wcs$l" -command ConfigWCSDialog
    }

    # configured later
    menu $mb.ext

    # Param
    set tt [ttk::notebook $w.param]
    set base [ttk::frame $tt.base]
    set pv00 [ttk::frame $tt.pv00]
    set pv12 [ttk::frame $tt.pv12]
    set pv24 [ttk::frame $tt.pv24]
    set ab0 [ttk::frame $tt.ab0]
    set ab2 [ttk::frame $tt.ab2]
    set ab4 [ttk::frame $tt.ab4]
    set apbp0 [ttk::frame $tt.apbp0]
    set apbp2 [ttk::frame $tt.apbp2]
    set apbp4 [ttk::frame $tt.apbp4]
    $tt add $base -text {Keyword}
    $tt add $pv00 -text {PVi_00}
    $tt add $pv12 -text {PVi_12}
    $tt add $pv24 -text {PVi_24}
    $tt add $ab0 -text {A_0}
    $tt add $ab2 -text {A_2}
    $tt add $ab4 -text {A_4}
    $tt add $apbp0 -text {AP_0}
    $tt add $apbp2 -text {AP_2}
    $tt add $apbp4 -text {AP_4}
    $tt select $base

    ttk::label $base.tmjdobs -text "MJD-OBS"
    ttk::entry $base.mjdobs -textvariable dwcs(mjd-obs) -width 14

    ttk::label $base.tdateobs -text "DATE-OBS"
    ttk::entry $base.dateobs -textvariable dwcs(date-obs) -width 14

    ttk::label $base.tdate -text "DATE"
    ttk::entry $base.date -textvariable dwcs(date) -width 14

    ttk::label $base.tepoch -text "EPOCH"
    ttk::entry $base.epoch -textvariable dwcs(epoch) -width 14

    foreach aa {{} a b c d e f g h i j k l m n o p q r s t u v w x y z} {
	set bb [string toupper $aa]

	ttk::label $base.twcsname${aa} -text "WCSNAME${bb}"
	ttk::entry $base.wcsname${aa} \
	    -textvariable dwcs(wcsname${aa}) -width 14

	ttk::label $base.tradesys${aa} -text "RADESYS${bb}"
	ttk::entry $base.radesys${aa} \
	    -textvariable dwcs(radesys${aa}) -width 14

	ttk::label $base.tequinox${aa} -text "EQUINOX${bb}"
	ttk::entry $base.equinox${aa} \
	    -textvariable dwcs(equinox${aa}) -width 14

	ttk::label $base.tlatpole${aa} -text "LATPOLE${bb}"
	ttk::entry $base.latpole${aa} \
	    -textvariable dwcs(latpole${aa}) -width 14

	ttk::label $base.tlonpole${aa} -text "LONPOLE${bb}"
	ttk::entry $base.lonpole${aa} \
	    -textvariable dwcs(lonpole${aa}) -width 14

	for {set ii 1} {$ii<=3} {incr ii} {
	    ttk::label $base.tctype${ii}${aa} -text "CTYPE${ii}${bb}"
	    ttk::entry $base.ctype${ii}${aa} \
		-textvariable dwcs(ctype${ii}${aa}) -width 14

	    ttk::label $base.tcrpix${ii}${aa} -text "CRPIX${ii}${bb}"
	    ttk::entry $base.crpix${ii}${aa} \
		-textvariable dwcs(crpix${ii}${aa}) -width 14

	    ttk::label $base.tcrval${ii}${aa} -text "CRVAL${ii}${bb}"
	    ttk::entry $base.crval${ii}${aa} \
		-textvariable dwcs(crval${ii}${aa}) -width 14

	    ttk::label $base.tcunit${ii}${aa} -text "CUNIT${ii}${bb}"
	    ttk::entry $base.cunit${ii}${aa} \
		-textvariable dwcs(cunit${ii}${aa}) -width 14

	    ttk::label $base.tcdelt${ii}${aa} -text "CDELT${ii}${bb}"
	    ttk::entry $base.cdelt${ii}${aa} \
		-textvariable dwcs(cdelt${ii}${aa}) -width 14
	}

	for {set ii 1} {$ii<=2} {incr ii} {
	    for {set jj 1} {$jj<=2} {incr jj} {
		ttk::label $base.tcd${ii}_${jj}${aa} -text "CD${ii}_${jj}${bb}"
		ttk::entry $base.cd${ii}_${jj}${aa} \
		    -textvariable dwcs(cd${ii}_${jj}${aa}) -width 14
	    }
	    for {set jj 1} {$jj<=2} {incr jj} {
		ttk::label $base.tpc${ii}_${jj}${aa} \
		    -text "PC${ii}_${jj}${bb}"
		ttk::entry $base.pc${ii}_${jj}${aa} \
		    -textvariable dwcs(pc${ii}_${jj}${aa}) -width 14
	    }

	    for {set mm 0} {$mm<12} {incr mm} {
		ttk::label $pv00.tpv${ii}_${mm}${aa} \
		    -text "PV${ii}_${mm}${bb}"
		ttk::entry $pv00.pv${ii}_${mm}${aa} \
		    -textvariable dwcs(pv${ii}_${mm}${aa}) -width 14
	    }
	    for {set mm 12} {$mm<24} {incr mm} {
		ttk::label $pv12.tpv${ii}_${mm}${aa} \
		    -text "PV${ii}_${mm}${bb}"
		ttk::entry $pv12.pv${ii}_${mm}${aa} \
		    -textvariable dwcs(pv${ii}_${mm}${aa}) -width 14
	    }
	    for {set mm 24} {$mm<36} {incr mm} {
		ttk::label $pv24.tpv${ii}_${mm}${aa} \
		    -text "PV${ii}_${mm}${bb}"
		ttk::entry $pv24.pv${ii}_${mm}${aa} \
		    -textvariable dwcs(pv${ii}_${mm}${aa}) -width 14
	    }
	}

	ttk::label $base.tcd3_3${aa} -text "CD3_3${bb}"
	ttk::entry $base.cd3_3${aa} -textvariable dwcs(cd3_3${aa}) -width 14
	ttk::label $base.tpc3_3${aa} -text "PC3_3${bb}"
	ttk::entry $base.pc3_3${aa} -textvariable dwcs(pc3_3${aa}) -width 14
    }

    # only in primary
    ttk::label $ab0.ta -text "A_ORDER"
    ttk::entry $ab0.a -textvariable dwcs(a_order) -width 14
    for {set mm 0} {$mm<2} {incr mm} {
	for {set nn 0} {$nn<6} {incr nn} {
	    ttk::label $ab0.ta_${mm}_${nn} -text "A_${mm}_${nn}"
	    ttk::entry $ab0.a_${mm}_${nn} \
		-textvariable dwcs(a_${mm}_${nn}) -width 14
	}
    }
    for {set mm 2} {$mm<4} {incr mm} {
	for {set nn 0} {$nn<6} {incr nn} {
	    ttk::label $ab2.ta_${mm}_${nn} -text "A_${mm}_${nn}"
	    ttk::entry $ab2.a_${mm}_${nn} \
		-textvariable dwcs(a_${mm}_${nn}) -width 14
	}
    }
    for {set mm 4} {$mm<6} {incr mm} {
	for {set nn 0} {$nn<6} {incr nn} {
	    ttk::label $ab4.ta_${mm}_${nn} -text "A_${mm}_${nn}"
	    ttk::entry $ab4.a_${mm}_${nn} \
		-textvariable dwcs(a_${mm}_${nn}) -width 14
	}
    }

    ttk::label $ab0.tb -text "B_ORDER"
    ttk::entry $ab0.b -textvariable dwcs(b_order) -width 14
    for {set mm 0} {$mm<2} {incr mm} {
	for {set nn 0} {$nn<6} {incr nn} {
	    ttk::label $ab0.tb_${mm}_${nn} -text "B_${mm}_${nn}"
	    ttk::entry $ab0.b_${mm}_${nn} \
		-textvariable dwcs(b_${mm}_${nn}) -width 14
	}
    }
    for {set mm 2} {$mm<4} {incr mm} {
	for {set nn 0} {$nn<6} {incr nn} {
	    ttk::label $ab2.tb_${mm}_${nn} -text "B_${mm}_${nn}"
	    ttk::entry $ab2.b_${mm}_${nn} \
		-textvariable dwcs(b_${mm}_${nn}) -width 14
	}
    }
    for {set mm 4} {$mm<6} {incr mm} {
	for {set nn 0} {$nn<6} {incr nn} {
	    ttk::label $ab4.tb_${mm}_${nn} -text "B_${mm}_${nn}"
	    ttk::entry $ab4.b_${mm}_${nn} \
		-textvariable dwcs(b_${mm}_${nn}) -width 14
	}
    }

    ttk::label $apbp0.tap -text "AP_ORDER"
    ttk::entry $apbp0.ap -textvariable dwcs(ap_order) -width 14
    for {set mm 0} {$mm<2} {incr mm} {
	for {set nn 0} {$nn<6} {incr nn} {
	    ttk::label $apbp0.tap_${mm}_${nn} -text "AP_${mm}_${nn}"
	    ttk::entry $apbp0.ap_${mm}_${nn} \
		-textvariable dwcs(ap_${mm}_${nn}) -width 14
	}
    }
    for {set mm 2} {$mm<4} {incr mm} {
	for {set nn 0} {$nn<6} {incr nn} {
	    ttk::label $apbp2.tap_${mm}_${nn} -text "AP_${mm}_${nn}"
	    ttk::entry $apbp2.ap_${mm}_${nn} \
		-textvariable dwcs(ap_${mm}_${nn}) -width 14
	}
    }
    for {set mm 4} {$mm<6} {incr mm} {
	for {set nn 0} {$nn<6} {incr nn} {
	    ttk::label $apbp4.tap_${mm}_${nn} -text "AP_${mm}_${nn}"
	    ttk::entry $apbp4.ap_${mm}_${nn} \
		-textvariable dwcs(ap_${mm}_${nn}) -width 14
	}
    }

    ttk::label $apbp0.tbp -text "BP_ORDER"
    ttk::entry $apbp0.bp -textvariable dwcs(bp_order) -width 14
    for {set mm 0} {$mm<2} {incr mm} {
	for {set nn 0} {$nn<6} {incr nn} {
	    ttk::label $apbp0.tbp_${mm}_${nn} -text "BP_${mm}_${nn}"
	    ttk::entry $apbp0.bp_${mm}_${nn} \
		-textvariable dwcs(bp_${mm}_${nn}) -width 14
	}
    }
    for {set mm 2} {$mm<4} {incr mm} {
	for {set nn 0} {$nn<6} {incr nn} {
	    ttk::label $apbp2.tbp_${mm}_${nn} -text "BP_${mm}_${nn}"
	    ttk::entry $apbp2.bp_${mm}_${nn} \
		-textvariable dwcs(bp_${mm}_${nn}) -width 14
	}
    }
    for {set mm 4} {$mm<6} {incr mm} {
	for {set nn 0} {$nn<6} {incr nn} {
	    ttk::label $apbp4.tbp_${mm}_${nn} -text "BP_${mm}_${nn}"
	    ttk::entry $apbp4.bp_${mm}_${nn} \
		-textvariable dwcs(bp_${mm}_${nn}) -width 14
	}
    }

    # Buttons
    set f [ttk::frame $w.buttons]
    ttk::button $f.apply -text [msgcat::mc {Apply}] -command WCSApplyDialog
    ttk::button $f.reset -text [msgcat::mc {Reset}] -command WCSResetDialog
    ttk::button $f.close -text [msgcat::mc {Close}] -command WCSDestroyDialog
    pack $f.apply $f.reset $f.close -side left -expand true -padx 2 -pady 4

    # Fini
    pack $w.buttons -side bottom -fill x
    pack $w.param -side top -fill both -expand true

    ConfigWCSDialog
    UpdateWCSDialog
}

proc WCSApplyDialog {} {
    global dwcs
    global current
    global rgb

    if {$current(frame) != {}} {
	RGBEvalLock rgb(lock,wcs) $current(frame) "$current(frame) wcs replace text $dwcs(ext) \{\{[WCSFromVar]\}\}"
	UpdateWCS
	CATUpdateWCS
    }
}

proc WCSResetDialog {} {
    global dwcs
    global current
    global rgb

    if {$current(frame) != {}} {
	RGBEvalLock rgb(lock,wcs) $current(frame) [list $current(frame) wcs reset $dwcs(ext)]
	UpdateWCS
	CATUpdateWCS
	UpdateWCSDialog
    }
}

proc WCSDestroyDialog {} {
    global iwcs
    global dwcs

    if {[winfo exists $iwcs(top)]} {
	destroy $iwcs(top)
	destroy $iwcs(mb)
    }

    unset dwcs
}

proc WCSSaveDialog {} {
    global dwcs

    set fn [SaveFileDialog wcsfbox]
    WCSSaveFile $fn
}

# used by backup
proc WCSSaveFile {fn} {
    if {[catch {open $fn w} fp]} {
	Error "[msgcat::mc {Unable to open file}] $fn: $fp"
	return
    }
    puts $fp [WCSFromVar]
    catch {close $fp}
}

proc WCSLoadDialog {} {
    global dwcs

    set fn [OpenFileDialog wcsfbox]
    WCSLoadFile $fn
}

# used by backup
proc WCSLoadFile {fn} {
    if {$fn != {}} {
	if {[catch {open $fn r} fp]} {
	    Error "[msgcat::mc {Unable to open file}] $fn: $fp"
	    return
	}
	WCSToVar [read -nonewline $fp]
	catch {close $fp}
    }
}

proc UpdateWCSDialog {} {
    global iwcs
    global current

    global debug
    if {$debug(tcl,update)} {
	puts stderr "UpdateWCSDialog"
    }

    if {![winfo exists $iwcs(top)]} {
	return
    }

    ConfigWCSDialogExtMenu
    UpdateWCSVars
}

proc UpdateWCSVars {} {
    global dwcs
    global current

    if {$current(frame) != {}} {
	if {[$current(frame) has fits]} {
	    WCSToVar [$current(frame) get fits header wcs $dwcs(ext)]
	    return
	}
    }

    WCSToVar {}
}

proc ConfigWCSDialog {{force {0}}} {
    global wcs
    global iwcs
    global dwcs
    global current

    global debug
    if {$debug(tcl,update)} {
	puts stderr "ConfigWCSDialog"
    }

    if {![winfo exists $iwcs(top)]} {
	return
    }

    # do we need to re-grid wcs vars?
    if {!$force && $dwcs(prev) == $dwcs(system)} {
	return
    }

    set tt $iwcs(top).param
    set base $tt.base
    set pv00 $tt.pv00
    set pv12 $tt.pv12
    set pv24 $tt.pv24
    set ab0 $tt.ab0
    set ab2 $tt.ab2
    set ab4 $tt.ab4
    set apbp0 $tt.apbp0
    set apbp2 $tt.apbp2
    set apbp4 $tt.apbp4

    grid forget $base.tmjdobs $base.mjdobs
    grid forget $base.tdateobs $base.dateobs
    grid forget $base.tdate $base.date
    grid forget $base.tepoch $base.epoch

    # forget current sys vars
    set aa [string tolower [string range $dwcs(prev) 3 3]]

    grid forget $base.twcsname${aa} $base.wcsname${aa}
    grid forget $base.tradesys${aa} $base.radesys${aa}
    grid forget $base.tequinox${aa} $base.equinox${aa}
    grid forget $base.tlatpole${aa} $base.latpole${aa}
    grid forget $base.tlonpole${aa} $base.lonpole${aa}

    for {set ii 1} {$ii<=3} {incr ii} {
	grid forget $base.tctype${ii}${aa} $base.ctype${ii}${aa}
	grid forget $base.tcunit${ii}${aa} $base.cunit${ii}${aa}
	grid forget $base.tcrpix${ii}${aa} $base.crpix${ii}${aa}
	grid forget $base.tcrval${ii}${aa} $base.crval${ii}${aa}
	grid forget $base.tcdelt${ii}${aa} $base.cdelt${ii}${aa}
    }

    for {set ii 1} {$ii<=2} {incr ii} {
	for {set jj 1} {$jj<=2} {incr jj} {
	    grid forget $base.tcd${ii}_${jj}${aa} $base.cd${ii}_${jj}${aa}
	    grid forget $base.tpc${ii}_${jj}${aa} $base.pc${ii}_${jj}${aa}
	}

	for {set mm 0} {$mm<12} {incr mm} {
	    grid forget $pv00.tpv${ii}_${mm}${aa} $pv00.pv${ii}_${mm}${aa}
	}
	for {set mm 12} {$mm<24} {incr mm} {
	    grid forget $pv12.tpv${ii}_${mm}${aa} $pv12.pv${ii}_${mm}${aa}
	}
	for {set mm 24} {$mm<36} {incr mm} {
	    grid forget $pv24.tpv${ii}_${mm}${aa} $pv24.pv${ii}_${mm}${aa}
	}
    }

    grid forget $base.tcd3_3${aa} $base.cd3_3${aa}
    grid forget $base.tpc3_3${aa} $base.pc3_3${aa}

    # only in primary
    grid forget $ab0.ta $ab0.a
    for {set mm 0} {$mm<2} {incr mm} {
	for {set nn 0} {$nn<6} {incr nn} {
	    grid forget $ab0.ta_${mm}_${nn} $ab0.a_${mm}_${nn}
	}
    }
    for {set mm 2} {$mm<4} {incr mm} {
	for {set nn 0} {$nn<6} {incr nn} {
	    grid forget $ab2.ta_${mm}_${nn} $ab2.a_${mm}_${nn}
	}
    }
    for {set mm 4} {$mm<6} {incr mm} {
	for {set nn 0} {$nn<6} {incr nn} {
	    grid forget $ab4.ta_${mm}_${nn} $ab4.a_${mm}_${nn}
	}
    }

    grid forget $ab0.tb $ab0.b
    for {set mm 0} {$mm<2} {incr mm} {
	for {set nn 0} {$nn<6} {incr nn} {
	    grid forget $ab0.tb_${mm}_${nn} $ab0.b_${mm}_${nn}
	}
    }
    for {set mm 2} {$mm<4} {incr mm} {
	for {set nn 0} {$nn<6} {incr nn} {
	    grid forget $ab2.tb_${mm}_${nn} $ab2.b_${mm}_${nn}
	}
    }
    for {set mm 4} {$mm<6} {incr mm} {
	for {set nn 0} {$nn<6} {incr nn} {
	    grid forget $ab4.tb_${mm}_${nn} $ab4.b_${mm}_${nn}
	}
    }

    grid forget $apbp0.tap $apbp0.ap
    for {set mm 0} {$mm<2} {incr mm} {
	for {set nn 0} {$nn<6} {incr nn} {
	    grid forget $apbp0.tap_${mm}_${nn} $apbp0.ap_${mm}_${nn}
	}
    }
    for {set mm 2} {$mm<4} {incr mm} {
	for {set nn 0} {$nn<6} {incr nn} {
	    grid forget $apbp2.tap_${mm}_${nn} $apbp2.ap_${mm}_${nn}
	}
    }
    for {set mm 4} {$mm<6} {incr mm} {
	for {set nn 0} {$nn<6} {incr nn} {
	    grid forget $apbp4.tap_${mm}_${nn} $apbp4.ap_${mm}_${nn}
	}
    }

    grid forget $apbp0.tbp $apbp0.bp
    for {set mm 0} {$mm<2} {incr mm} {
	for {set nn 0} {$nn<6} {incr nn} {
	    grid forget $apbp0.tbp_${mm}_${nn} $apbp0.bp_${mm}_${nn}
	}
    }
    for {set mm 2} {$mm<4} {incr mm} {
	for {set nn 0} {$nn<6} {incr nn} {
	    grid forget $apbp2.tbp_${mm}_${nn} $apbp2.bp_${mm}_${nn}
	}
    }
    for {set mm 4} {$mm<6} {incr mm} {
	for {set nn 0} {$nn<6} {incr nn} {
	    grid forget $apbp4.tbp_${mm}_${nn} $apbp4.bp_${mm}_${nn}
	}
    }

    # display new sys vars
    set dwcs(prev) $dwcs(system)
    set aa [string tolower [string range $dwcs(system) 3 3]]

    grid $base.twcsname${aa} $base.wcsname${aa} -padx 2 -pady 2 -sticky w
    grid $base.tradesys${aa} $base.radesys${aa} -padx 2 -pady 2 -sticky w

    grid $base.tequinox${aa} $base.equinox${aa} \
	$base.tepoch $base.epoch -padx 2 -pady 2 -sticky w
    grid $base.tmjdobs $base.mjdobs \
	$base.tdateobs $base.dateobs \
	$base.tdate $base.date \
	-padx 2 -pady 2 -sticky w

    grid $base.tctype1${aa} $base.ctype1${aa} \
	$base.tctype2${aa} $base.ctype2${aa} \
	$base.tctype3${aa} $base.ctype3${aa} \
	-padx 2 -pady 2 -sticky w
    grid $base.tcrpix1${aa} $base.crpix1${aa} \
	$base.tcrpix2${aa} $base.crpix2${aa} \
	$base.tcrpix3${aa} $base.crpix3${aa} \
	-padx 2 -pady 2 -sticky w
    grid $base.tcrval1${aa} $base.crval1${aa} \
	$base.tcrval2${aa} $base.crval2${aa} \
	$base.tcrval3${aa} $base.crval3${aa} \
	-padx 2 -pady 2 -sticky w
    grid $base.tcunit1${aa} $base.cunit1${aa} \
	$base.tcunit2${aa} $base.cunit2${aa} \
	$base.tcunit3${aa} $base.cunit3${aa} \
	-padx 2 -pady 2 -sticky w
    grid $base.tcdelt1${aa} $base.cdelt1${aa} \
	$base.tcdelt2${aa} $base.cdelt2${aa} \
	$base.tcdelt3${aa} $base.cdelt3${aa} \
	-padx 2 -pady 2 -sticky w

    grid $base.tcd1_1${aa} $base.cd1_1${aa} \
	$base.tcd2_1${aa} $base.cd2_1${aa} \
	-padx 2 -pady 2 -sticky w
    grid $base.tcd1_2${aa} $base.cd1_2${aa} \
	$base.tcd2_2${aa} $base.cd2_2${aa} \
	$base.tcd3_3${aa} $base.cd3_3${aa} \
	-padx 2 -pady 2 -sticky w

    grid $base.tpc1_1${aa} $base.pc1_1${aa} \
	$base.tpc2_1${aa} $base.pc2_1${aa} \
	-padx 2 -pady 2 -sticky w
    grid $base.tpc1_2${aa} $base.pc1_2${aa} \
	$base.tpc2_2${aa} $base.pc2_2${aa} \
	$base.tpc3_3${aa} $base.pc3_3${aa} \
	-padx 2 -pady 2 -sticky w

    grid $base.tlatpole${aa} $base.latpole${aa} \
	$base.tlonpole${aa} $base.lonpole${aa} -padx 2 -pady 2 -sticky w

    for {set mm 0} {$mm<12} {incr mm} {
	grid $pv00.tpv1_${mm}${aa} $pv00.pv1_${mm}${aa} \
	    $pv00.tpv2_${mm}${aa} $pv00.pv2_${mm}${aa} \
	    -padx 2 -pady 2 -sticky w
    }
    for {set mm 12} {$mm<24} {incr mm} {
	grid $pv12.tpv1_${mm}${aa} $pv12.pv1_${mm}${aa} \
	    $pv12.tpv2_${mm}${aa} $pv12.pv2_${mm}${aa} \
	    -padx 2 -pady 2 -sticky w
    }
    for {set mm 24} {$mm<36} {incr mm} {
	grid $pv24.tpv1_${mm}${aa} $pv24.pv1_${mm}${aa} \
	    $pv24.tpv2_${mm}${aa} $pv24.pv2_${mm}${aa} \
	    -padx 2 -pady 2 -sticky w
    }

    # only in primary
    grid $ab0.ta $ab0.a $ab0.tb $ab0.b -padx 2 -pady 2 -sticky w
    for {set mm 0} {$mm<2} {incr mm} {
	for {set nn 0} {$nn<6} {incr nn} {
	    grid $ab0.ta_${mm}_${nn} $ab0.a_${mm}_${nn} \
		$ab0.tb_${mm}_${nn} $ab0.b_${mm}_${nn} \
		-padx 2 -pady 2 -sticky w
	}
    }
    for {set mm 2} {$mm<4} {incr mm} {
	for {set nn 0} {$nn<6} {incr nn} {
	    grid $ab2.ta_${mm}_${nn} $ab2.a_${mm}_${nn} \
		$ab2.tb_${mm}_${nn} $ab2.b_${mm}_${nn} \
		-padx 2 -pady 2 -sticky w
	}
    }
    for {set mm 4} {$mm<6} {incr mm} {
	for {set nn 0} {$nn<6} {incr nn} {
	    grid $ab4.ta_${mm}_${nn} $ab4.a_${mm}_${nn} \
		$ab4.tb_${mm}_${nn} $ab4.b_${mm}_${nn} \
		-padx 2 -pady 2 -sticky w
	}
    }

    grid $apbp0.tap $apbp0.ap $apbp0.tbp $apbp0.bp -padx 2 -pady 2 -sticky w
    for {set mm 0} {$mm<2} {incr mm} {
	for {set nn 0} {$nn<6} {incr nn} {
	    grid $apbp0.tap_${mm}_${nn} $apbp0.ap_${mm}_${nn} \
		$apbp0.tbp_${mm}_${nn} $apbp0.bp_${mm}_${nn} \
		-padx 2 -pady 2 -sticky w
	}
    }
    for {set mm 2} {$mm<4} {incr mm} {
	for {set nn 0} {$nn<6} {incr nn} {
	    grid $apbp2.tap_${mm}_${nn} $apbp2.ap_${mm}_${nn} \
		$apbp2.tbp_${mm}_${nn} $apbp2.bp_${mm}_${nn} \
		-padx 2 -pady 2 -sticky w
	}
    }
    for {set mm 4} {$mm<6} {incr mm} {
	for {set nn 0} {$nn<6} {incr nn} {
	    grid $apbp4.tap_${mm}_${nn} $apbp4.ap_${mm}_${nn} \
		$apbp4.tbp_${mm}_${nn} $apbp4.bp_${mm}_${nn} \
		-padx 2 -pady 2 -sticky w
	}
    }
}

proc ConfigWCSDialogExtMenu {} {
    global iwcs
    global dwcs
    global ds9
    global current

    $iwcs(mb).ext delete $ds9(menu,start) end
    set dwcs(ext) 1

    set nn 0
    set last {}
    set cnt [$current(frame) get fits count]

    for {set ii 1} {$ii <= $cnt} {incr ii} {
	set fn [$current(frame) get fits file name $ii]
	if {$fn != $last} {
	    incr nn
	    set item($nn) $fn
	    set val($nn) $ii
	    set last $fn
	}
    }

    if {$nn > 1} {
	$iwcs(mb) entryconfig [msgcat::mc {Extention}] -state normal

	for {set ii 1} {$ii<=$nn} {incr ii} {
	    $iwcs(mb).ext add radiobutton -label $item($ii) \
	    -variable dwcs(ext) -value $val($ii) -command UpdateWCSVars
	}
    } else {
	$iwcs(mb) entryconfig [msgcat::mc {Extention}] -state disabled
    }
}

# used by backup
proc WCSToVar {txt} {
    global wcs
    global dwcs
    global iwcs

    # clear all
    set dwcs(mjd-obs) {}
    set dwcs(date-obs) {}
    set dwcs(date) {}
    set dwcs(epoch) {}

    foreach aa {{} a b c d e f g h i j k l m n o p q r s t u v w x y z} {
	set dwcs(wcsname${aa}) {}
	set dwcs(radesys${aa}) {}
	set dwcs(equinox${aa}) {}
	set dwcs(latpole${aa}) {}
	set dwcs(lonpole${aa}) {}

	for {set ii 1} {$ii<=3} {incr ii} {
	    set dwcs(ctype${ii}${aa}) {}
	    set dwcs(cunit${ii}${aa}) {}
	    set dwcs(crpix${ii}${aa}) {}
	    set dwcs(crval${ii}${aa}) {}
	    set dwcs(cdelt${ii}${aa}) {}
	}

	for {set ii 1} {$ii<=2} {incr ii} {
	    for {set jj 1} {$jj<=2} {incr jj} {
		set dwcs(cd${ii}_${jj}${aa}) {}
		set dwcs(pc${ii}_${jj}${aa}) {}
	    }

	    for {set mm 0} {$mm<36} {incr mm} {
		set dwcs(pv${ii}_${mm}${aa}) {}
	    }
	}

	set dwcs(cd3_3${aa}) {}
	set dwcs(pc3_3${aa}) {}
    }
    
    # primary only
    set dwcs(a_order) {}
    for {set mm 0} {$mm<6} {incr mm} {
	for {set nn 0} {$nn<6} {incr nn} {
	    set dwcs(a_${mm}_${nn}) {}
	}
    }
    set dwcs(b_order) {}
    for {set mm 0} {$mm<6} {incr mm} {
	for {set nn 0} {$nn<6} {incr nn} {
	    set dwcs(b_${mm}_${nn}) {}
	}
    }
    set dwcs(ap_order) {}
    for {set mm 0} {$mm<6} {incr mm} {
	for {set nn 0} {$nn<6} {incr nn} {
	    set dwcs(ap_${mm}_${nn}) {}
	}
    }
    set dwcs(bp_order) {}
    for {set mm 0} {$mm<6} {incr mm} {
	for {set nn 0} {$nn<6} {incr nn} {
	    set dwcs(bp_${mm}_${nn}) {}
	}
    }

    set lines [split $txt "\n"]

    # check for fits header, do it the hard way
    if {[llength $lines] == 1} {
	set lines {}
	while {"$txt" != {}} {
	    lappend lines "[string range $txt 0 79]"
	    set txt "[string replace $txt 0 79]"
	}
    }

    for {set ll 0} {$ll<[llength $lines]} {incr ll} {
	set line [lindex $lines $ll]
	set pp [split $line {=}]
	set key [string tolower [string trim [lindex $pp 0]]]

	# drop comments
	#   some keywords can have '/' in the value (such as a date)
	#   try the easy approach first
	set ee [lindex $pp 1]
	set dd [split $ee {/}]
	switch [llength $dd] {
	    0 -
	    1 -
	    2 {set aa [lindex $dd 0]}
	    default {
		set ff [string first { /} $ee]
		if {$ff > 0} {
		    set aa [string range $ee 0 $ff]
		} else {
		    set aa [lindex $dd 0]
		}
	    }
	}

	# drop any white space
	set bb [string trim $aa]
	# drop any single quotes
	set cc [string trim $bb {'}]
	# drop any white space
	set val [string trim $cc]

	# sanity check
	if {$key == {longpole}} {
	    set key lonpole
	}
	if {$key == {radecsys}} {
	    set key radesys
	}

	switch [string range $key 0 6] {
	    mjd-obs -
	    date-ob {
		set dwcs($key) $val
	    }
	}
	switch [string range $key 0 5] {
	    wcsnam -
	    radesy -
	    equino -
	    latpol -
	    lonpol -
	    ctype1 -
	    ctype2 -
	    ctype3 -
	    cunit1 -
	    cunit2 -
	    cunit3 -
	    crpix1 -
	    crpix2 -
	    crpix3 -
	    crval1 -
	    crval2 -
	    crval3 -
	    cdelt1 -
	    cdelt2 -
	    cdelt3 -
	    cd3_3 -
	    pc3_3 -
	    a_orde -
	    b_orde -
	    ap_ord -
	    bp_ord {
		set dwcs($key) $val
	    }
	}
	switch [string range $key 0 3] {
	    epoc -
	    date -
	    cd1_ -
	    cd1_ -
	    cd2_ -
	    cd2_ -
	    pc1_ -
	    pc1_ -
	    pc2_ -
	    pc2_ -
	    pv1_ -
	    pv2_ {
		set dwcs($key) $val
	    }
	}
	switch [string range $key 0 2] {
	    ap_ -
	    bp_ {
		set dwcs($key) $val
	    }
	}
	switch [string range $key 0 1] {
	    a_ -
	    b_ {
		set dwcs($key) $val
	    }
	}
    }
}

# used by backup
proc WCSFromVar {} {
    global wcs
    global dwcs
    global iwcs

    set rr {}

    if {$dwcs(mjd-obs) != {}} {
	append rr "MJD-OBS = $dwcs(mjd-obs)\n"
    }
    if {$dwcs(date-obs) != {}} {
	append rr "DATE-OBS = '$dwcs(date-obs)'\n"
    }
    if {$dwcs(date) != {}} {
	append rr "DATE = '$dwcs(date)'\n"
    }
    if {$dwcs(epoch) != {}} {
	append rr "EPOCH = $dwcs(epoch)\n"
    }

    foreach aa {{} a b c d e f g h i j k l m n o p q r s t u v w x y z} {
	set bb [string toupper $aa]

	if {$dwcs(wcsname${aa}) != {}} {
	    append rr "WCSNAME${bb} = '$dwcs(wcsname${aa})'\n"
	}
	if {$dwcs(radesys${aa}) != {}} {
	    append rr "RADESYS${bb} = '$dwcs(radesys${aa})'\n"
	}
	if {$dwcs(equinox${aa}) != {}} {
	    append rr "EQUINOX${bb} = $dwcs(equinox${aa})\n"
	}
	if {$dwcs(latpole${aa}) != {}} {
	    append rr "LATPOLE${bb} = $dwcs(latpole${aa})\n"
	}
	if {$dwcs(lonpole${aa}) != {}} {
	    append rr "LONPOLE${bb} = $dwcs(lonpole${aa})\n"
	}

	for {set ii 1} {$ii<=3} {incr ii} {
	    if {$dwcs(ctype${ii}${aa}) != {}} {
		append rr "CTYPE${ii}${bb} = '$dwcs(ctype${ii}${aa})'\n"
	    }
	    if {$dwcs(cunit${ii}${aa}) != {}} {
		append rr "CUNIT${ii}${bb} = '$dwcs(cunit${ii}${aa})'\n"
	    }
	    if {$dwcs(crpix${ii}${aa}) != {}} {
		append rr "CRPIX${ii}${bb} = $dwcs(crpix${ii}${aa})\n"
	    }
	    if {$dwcs(crval${ii}${aa}) != {}} {
		append rr "CRVAL${ii}${bb} = $dwcs(crval${ii}${aa})\n"
	    }
	    if {$dwcs(cdelt${ii}${aa}) != {}} {
		append rr "CDELT${ii}${bb} = $dwcs(cdelt${ii}${aa})\n"
	    }
	}

	for {set ii 1} {$ii<=2} {incr ii} {
	    for {set jj 1} {$jj<=2} {incr jj} {
		if {$dwcs(cd${ii}_${jj}${aa}) != {}} {
		    append rr "CD${ii}_${jj}${bb} = $dwcs(cd${ii}_${jj}${aa})\n"
		}
		if {$dwcs(pc${ii}_${jj}${aa}) != {}} {
		    append rr "PC${ii}_${jj}${bb} = $dwcs(pc${ii}_${jj}${aa})\n"
		}
	    }

	    for {set mm 0} {$mm<36} {incr mm} {
		if {$dwcs(pv${ii}_${mm}${aa}) != {}} {
		    append rr "PV${ii}_${mm}${bb} = $dwcs(pv${ii}_${mm}${aa})\n"
		}
	    }
	}

	if {$dwcs(cd3_3${aa}) != {}} {
	    append rr "CD3_3${bb} = $dwcs(cd3_3${aa})\n"
	}
	if {$dwcs(pc3_3${aa}) != {}} {
	    append rr "PC3_3${bb} = $dwcs(pc3_3${aa})\n"
	}
    }

    if {$dwcs(a_order) != {}} {
	append rr "A_ORDER = $dwcs(a_order)\n"
    }
    for {set mm 0} {$mm<6} {incr mm} {
	for {set nn 0} {$nn<6} {incr nn} {
	    if {$dwcs(a_${mm}_${nn}) != {}} {
		append rr "A_${mm}_${nn} = $dwcs(a_${mm}_${nn})\n"
	    }
	}
    }
    if {$dwcs(b_order) != {}} {
	append rr "B_ORDER = $dwcs(b_order)\n"
    }
    for {set mm 0} {$mm<6} {incr mm} {
	for {set nn 0} {$nn<6} {incr nn} {
	    if {$dwcs(b_${mm}_${nn}) != {}} {
		append rr "B_${mm}_${nn} = $dwcs(b_${mm}_${nn})\n"
	    }
	}
    }

    if {$dwcs(ap_order) != {}} {
	append rr "AP_ORDER = $dwcs(ap_order)\n"
    }
    for {set mm 0} {$mm<6} {incr mm} {
	for {set nn 0} {$nn<6} {incr nn} {
	    if {$dwcs(ap_${mm}_${nn}) != {}} {
		append rr "AP_${mm}_${nn} = $dwcs(ap_${mm}_${nn})\n"
	    }
	}
    }
    if {$dwcs(bp_order) != {}} {
	append rr "BP_ORDER = $dwcs(bp_order)\n"
    }
    for {set mm 0} {$mm<6} {incr mm} {
	for {set nn 0} {$nn<6} {incr nn} {
	    if {$dwcs(bp_${mm}_${nn}) != {}} {
		append rr "BP_${mm}_${nn} = $dwcs(bp_${mm}_${nn})\n"
	    }
	}
    }

    return $rr
}

# Process Cmds

proc ProcessWCSCmd {varname iname sock fn} {
    upvar $varname var
    upvar $iname i

    global wcs
    global current
    global rgb

    set item [string tolower [lindex $var $i]]
    switch -- $item {
	open {WCSDialog}
	close {WCSDestroyDialog}
	system {
	    incr i
	    set wcs(system) [string tolower [lindex $var $i]]
	    UpdateWCS
	}
	sky {
	    incr i
	    set wcs(sky) [string tolower [lindex $var $i]]
	    UpdateWCS
	}
	format -
	skyformat {
	    incr i
	    switch -- [string tolower [lindex $var $i]] {
		deg -
		degree -
		degrees {set wcs(skyformat) degrees}
		default {set wcs(skyformat) [string tolower [lindex $var $i]]}
	    }
	    UpdateWCS
	}
	align {
	    incr i
	    set current(align) [FromYesNo [lindex $var $i]]
	    AlignWCSFrame
	}
	reset {
	    set ext 1
	    set nn [lindex $var [expr $i+1]]
	    if {[string is integer -strict $nn]} {
		incr i
		set ext $nn
	    }

	    RGBEvalLock rgb(lock,wcs) $current(frame) [list $current(frame) wcs reset $ext]
	    UpdateWCS
	}
	replace -
	append {
	    set ext 1
	    set nn [lindex $var [expr $i+1]]
	    if {[string is integer -strict $nn]} {
		incr i
		set ext $nn
	    }

	    if {$sock != {}} {
		incr i
		if {[lindex $var $i] == {}} {
		    RGBEvalLock rgb(lock,wcs) $current(frame) [list $current(frame) wcs $item $ext $sock]
		    incr i -1
		} else {
		    RGBEvalLock rgb(lock,wcs) $current(frame) "$current(frame) wcs $item $ext \{\{[lindex $var $i]\}\}"
		}
	    } elseif {$fn != {}} {
		RGBEvalLock rgb(lock,wcs) $current(frame) "$current(frame) wcs $item $ext \{\{$fn\}\}"
	    } else {
		incr i
		if {[lindex $var $i] == "file"} {
		    incr i
		}
		RGBEvalLock rgb(lock,wcs) $current(frame) "$current(frame) wcs $item $ext \{\{[lindex $var $i]\}\}"
	    }
	    UpdateWCS
	}

	fk4 -
	fk5 -
	icrs -
	galactic -
	ecliptic {
	    set wcs(sky) $item
	    UpdateWCS
	}

	degrees -
	sexagesimal {
	    set wcs(skyformat) $item
	    UpdateWCS
	}

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
	wcsz {
	    set wcs(system) $item
	    UpdateWCS
	}
    }
}

proc WCSResetCmd {ext} {
    global current
    global rgb

    RGBEvalLock rgb(lock,wcs) $current(frame) \
	[list $current(frame) wcs reset $ext]
    UpdateWCS
}

proc ProcessSendWCSCmd {proc id param} {
    global current
    global wcs

    switch -- [string tolower $param] {
	align {$proc $id [ToYesNo $current(align)]}
	system {$proc $id "$wcs(system)\n"}
	sky  {$proc $id "$wcs(sky)\n"}
	format -
	skyformat {$proc $id "$wcs(skyformat)\n"}
	default {$proc $id "$wcs(system)\n"}
    }
}

# backward compatibilty
proc ProcessAlignCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    global current
    switch -- [string tolower [lindex $var $i]] {
	yes -
	true -
	on -
	1 -
	no -
	false -
	off -
	0 {
	    set current(align) [FromYesNo [lindex $var $i]]
	    AlignWCSFrame
	}
	default {
	    set current(align) 1
	    AlignWCSFrame
	    incr i -1
	}
    }
}

proc ProcessSendAlignCmd {proc id param} {
    global current

    $proc $id [ToYesNo $current(align)]
}

