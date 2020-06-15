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

    # temp
    set wcs(load,sock) {}
    set wcs(load,fn) {}
    
    array set pwcs [array get wcs]

    # temp
    set wcs(load,sock) {}
    set wcs(load,fn) {}
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
	    CoordMenuEnable $ds9(mb).wcs wcs system sky skyformat
	} else {
	    CoordMenuReset $ds9(mb).wcs wcs system sky skyformat
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

    global debug
    if {$debug(tcl,events)} {
	puts stderr "LayoutWCSInfoBox $which"
    }

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

    ThemeMenu $mb.file
    $mb.file add command -label "[msgcat::mc {Open}]..." \
	-command WCSLoadDialog -accelerator "${ds9(ctrl)}O"
    $mb.file add command -label "[msgcat::mc {Save}]..." \
	-command WCSSaveDialog -accelerator "${ds9(ctrl)}S"
    $mb.file add separator
    $mb.file add command -label [msgcat::mc {Apply}] -command WCSApplyDialog
    $mb.file add command -label [msgcat::mc {Reset}] -command WCSResetDialog
    $mb.file add separator
    $mb.file add command -label [msgcat::mc {Close}] \
	-command WCSDestroyDialog -accelerator "${ds9(ctrl)}W"

    EditMenu $mb iwcs

    ThemeMenu $mb.wcs
    $mb.wcs add radiobutton -label [msgcat::mc {WCS}] \
	-variable dwcs(system) -value wcs -command ConfigWCSDialog
    $mb.wcs add separator
    foreach l {a b c d e f g h i j k l m n o p q r s t u v w x y z} {
	$mb.wcs add radiobutton -label "[msgcat::mc {WCS}] $l" \
	    -variable dwcs(system) -value "wcs$l" -command ConfigWCSDialog
    }

    # configured later
    ThemeMenu $mb.ext

    # Param
    set tt [ttk::notebook $w.param]
    set base [ttk::frame $tt.base]
    set pv00 [ttk::frame $tt.pv00]
    set pv18 [ttk::frame $tt.pv18]
    set aa0 [ttk::frame $tt.aa0]
    set bb0 [ttk::frame $tt.bb0]
    set ap0 [ttk::frame $tt.ap0]
    set bp0 [ttk::frame $tt.bp0]
    $tt add $base -text {Keyword}
    $tt add $pv00 -text {PVi_00}
    $tt add $pv18 -text {PVi_18}
    $tt add $aa0 -text {A_p_q}
    $tt add $bb0 -text {B_p_q}
    $tt add $ap0 -text {AP_p_q}
    $tt add $bp0 -text {BP_p_q}
    $tt select $base

    ttk::label $base.tmjdobs -text "MJD-OBS"
    ttk::entry $base.mjdobs -textvariable dwcs(mjd-obs) -width 14

    ttk::label $base.tdateobs -text "DATE-OBS"
    ttk::entry $base.dateobs -textvariable dwcs(date-obs) -width 14

    ttk::label $base.tepoch -text "EPOCH"
    ttk::entry $base.epoch -textvariable dwcs(epoch) -width 14

    foreach aa {{} a b c d e f g h i j k l m n o p q r s t u v w x y z} {
	set bb [string toupper $aa]

	ttk::label $base.twcsname${aa} -text "WCSNAME${bb}"
	ttk::entry $base.wcsname${aa} \
	    -textvariable dwcs(wcsname${aa}) -width 14

	ttk::label $base.twcsaxes${aa} -text "WCSAXES${bb}"
	ttk::entry $base.wcsaxes${aa} \
	    -textvariable dwcs(wcsaxes${aa}) -width 14

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

	# CTYPEx CRPIXx CRVALx CUNITx CDELTx
	for {set ii 1} {$ii<=4} {incr ii} {
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

	# CDx_x PCx_x
	for {set ii 1} {$ii<=4} {incr ii} {
	    for {set jj 1} {$jj<=4} {incr jj} {
		ttk::label $base.tcd${ii}_${jj}${aa} \
		    -text "CD${ii}_${jj}${bb}"
		ttk::entry $base.cd${ii}_${jj}${aa} \
		    -textvariable dwcs(cd${ii}_${jj}${aa}) -width 14

		ttk::label $base.tpc${ii}_${jj}${aa} \
		    -text "PC${ii}_${jj}${bb}"
		ttk::entry $base.pc${ii}_${jj}${aa} \
		    -textvariable dwcs(pc${ii}_${jj}${aa}) -width 14

	    }
	}

	# PSx_x
	for {set ii 1} {$ii<=4} {incr ii} {
	    for {set jj 0} {$jj<=1} {incr jj} {
		ttk::label $base.tps${ii}_${jj}${aa} \
		    -text "PS${ii}_${jj}${bb}"
		ttk::entry $base.ps${ii}_${jj}${aa} \
		    -textvariable dwcs(ps${ii}_${jj}${aa}) -width 14
	    }
	}


	# PVx_x
	for {set ii 1} {$ii<=4} {incr ii} {
	    for {set mm 0} {$mm<18} {incr mm} {
		ttk::label $pv00.tpv${ii}_${mm}${aa} \
		    -text "PV${ii}_${mm}${bb}"
		ttk::entry $pv00.pv${ii}_${mm}${aa} \
		    -textvariable dwcs(pv${ii}_${mm}${aa}) -width 14
	    }
	    for {set mm 18} {$mm<36} {incr mm} {
		ttk::label $pv18.tpv${ii}_${mm}${aa} \
		    -text "PV${ii}_${mm}${bb}"
		ttk::entry $pv18.pv${ii}_${mm}${aa} \
		    -textvariable dwcs(pv${ii}_${mm}${aa}) -width 14
	    }
	}
    }

    # only in primary
    ttk::label $aa0.ta -text "A_ORDER"
    ttk::entry $aa0.a -textvariable dwcs(a_order) -width 14
    ttk::label $aa0.tx -text "A_DMAX"
    ttk::entry $aa0.x -textvariable dwcs(a_dmax) -width 14

    for {set mm 0} {$mm<=9} {incr mm} {
	for {set nn 0} {$nn<=9} {incr nn} {
	    if {[expr ($nn+$mm) <= 9]} {
		ttk::label $aa0.ta_${mm}_${nn} -text "A_${mm}_${nn}"
		ttk::entry $aa0.a_${mm}_${nn} \
		    -textvariable dwcs(a_${mm}_${nn}) -width 14
	    }
	}
    }

    ttk::label $bb0.tb -text "B_ORDER"
    ttk::entry $bb0.b -textvariable dwcs(b_order) -width 14
    ttk::label $bb0.tx -text "B_DMAX"
    ttk::entry $bb0.x -textvariable dwcs(b_dmax) -width 14

    for {set mm 0} {$mm<=9} {incr mm} {
	for {set nn 0} {$nn<=9} {incr nn} {
	    ttk::label $bb0.tb_${mm}_${nn} -text "B_${mm}_${nn}"
	    ttk::entry $bb0.b_${mm}_${nn} \
		-textvariable dwcs(b_${mm}_${nn}) -width 14
	}
    }

    ttk::label $ap0.ta -text "AP_ORDER"
    ttk::entry $ap0.a -textvariable dwcs(a_order) -width 14

    for {set mm 0} {$mm<=9} {incr mm} {
	for {set nn 0} {$nn<=9} {incr nn} {
	    ttk::label $ap0.ta_${mm}_${nn} -text "AP_${mm}_${nn}"
	    ttk::entry $ap0.a_${mm}_${nn} \
		-textvariable dwcs(a_${mm}_${nn}) -width 14
	}
    }

    ttk::label $bp0.tb -text "BP_ORDER"
    ttk::entry $bp0.b -textvariable dwcs(b_order) -width 14

    for {set mm 0} {$mm<=9} {incr mm} {
	for {set nn 0} {$nn<=9} {incr nn} {
	    ttk::label $bp0.tb_${mm}_${nn} -text "BP_${mm}_${nn}"
	    ttk::entry $bp0.b_${mm}_${nn} \
		-textvariable dwcs(b_${mm}_${nn}) -width 14
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

    bind $w <<Open>> WCSLoadDialog
    bind $w <<Save>> WCSSaveDialog
    bind $w <<Close>> WCSDestroyDialog

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
	FPUpdateWCS
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
	FPUpdateWCS
	UpdateWCSDialog
    }
}

proc WCSDestroyDialog {} {
    global iwcs
    global dwcs

    if {[winfo exists $iwcs(top)]} {
	destroy $iwcs(top)
	destroy $iwcs(mb)
	unset dwcs
    }
}

proc WCSSaveDialog {} {
    global iwcs
    global dwcs

    set fn [SaveFileDialog wcsfbox $iwcs(top)]
    if {$fn != {}} {
	WCSSaveFile $fn
    }
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
    global iwcs
    global dwcs

    set fn [OpenFileDialog wcsfbox $iwcs(top)]
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
    set pv18 $tt.pv18
    set aa0 $tt.aa0
    set bb0 $tt.bb0
    set ap0 $tt.ap0
    set bp0 $tt.bp0

    grid forget $base.tmjdobs $base.mjdobs
    grid forget $base.tdateobs $base.dateobs
    grid forget $base.tepoch $base.epoch

    # forget current sys vars
    set aa [string tolower [string range $dwcs(prev) 3 3]]

    grid forget $base.twcsname${aa} $base.wcsname${aa}
    grid forget $base.twcsaxes${aa} $base.wcsaxes${aa}
    grid forget $base.tradesys${aa} $base.radesys${aa}
    grid forget $base.tequinox${aa} $base.equinox${aa}
    grid forget $base.tlatpole${aa} $base.latpole${aa}
    grid forget $base.tlonpole${aa} $base.lonpole${aa}

    for {set ii 1} {$ii<=4} {incr ii} {
	grid forget $base.tctype${ii}${aa} $base.ctype${ii}${aa}
	grid forget $base.tcunit${ii}${aa} $base.cunit${ii}${aa}
	grid forget $base.tcrpix${ii}${aa} $base.crpix${ii}${aa}
	grid forget $base.tcrval${ii}${aa} $base.crval${ii}${aa}
	grid forget $base.tcdelt${ii}${aa} $base.cdelt${ii}${aa}
    }

    for {set ii 1} {$ii<=4} {incr ii} {
	for {set jj 1} {$jj<=4} {incr jj} {
	    grid forget $base.tcd${ii}_${jj}${aa} $base.cd${ii}_${jj}${aa}
	    grid forget $base.tpc${ii}_${jj}${aa} $base.pc${ii}_${jj}${aa}
	}
    }

    for {set ii 1} {$ii<=4} {incr ii} {
	for {set jj 0} {$jj<=1} {incr jj} {
	    grid forget $base.tps${ii}_${jj}${aa} $base.ps${ii}_${jj}${aa}
	}
    }

    for {set ii 1} {$ii<=4} {incr ii} {
	for {set mm 0} {$mm<18} {incr mm} {
	    grid forget $pv00.tpv${ii}_${mm}${aa} $pv00.pv${ii}_${mm}${aa}
	}
	for {set mm 18} {$mm<36} {incr mm} {
	    grid forget $pv18.tpv${ii}_${mm}${aa} $pv18.pv${ii}_${mm}${aa}
	}
    }

    # only in primary
    grid forget $aa0.ta $aa0.a
    grid forget $aa0.tx $aa0.x
    for {set mm 0} {$mm<=9} {incr mm} {
	for {set nn 0} {$nn<=9} {incr nn} {
	    if {[expr ($nn+$mm) <= 9]} {
		grid forget $aa0.ta_${mm}_${nn} $aa0.a_${mm}_${nn}
	    }
	}
    }

    grid forget $bb0.tb $bb0.b
    grid forget $bb0.tx $bb0.x
    for {set mm 0} {$mm<=9} {incr mm} {
	for {set nn 0} {$nn<=9} {incr nn} {
	    grid forget $bb0.tb_${mm}_${nn} $bb0.b_${mm}_${nn}
	}
    }

    grid forget $ap0.ta $ap0.a
    for {set mm 0} {$mm<=9} {incr mm} {
	for {set nn 0} {$nn<=9} {incr nn} {
	    grid forget $ap0.ta_${mm}_${nn} $ap0.a_${mm}_${nn}
	}
    }

    grid forget $bp0.tb $bp0.b
    for {set mm 0} {$mm<=9} {incr mm} {
	for {set nn 0} {$nn<=9} {incr nn} {
	    grid forget $bp0.tb_${mm}_${nn} $bp0.b_${mm}_${nn}
	}
    }

    # display new sys vars
    set dwcs(prev) $dwcs(system)
    set aa [string tolower [string range $dwcs(system) 3 3]]

    grid $base.twcsname${aa} $base.wcsname${aa} -padx 2 -pady 2 -sticky w
    grid $base.twcsaxes${aa} $base.wcsaxes${aa} -padx 2 -pady 2 -sticky w
    grid $base.tradesys${aa} $base.radesys${aa} -padx 2 -pady 2 -sticky w

    grid $base.tequinox${aa} $base.equinox${aa} \
	$base.tepoch $base.epoch -padx 2 -pady 2 -sticky w
    grid $base.tmjdobs $base.mjdobs \
	$base.tdateobs $base.dateobs \
	-padx 2 -pady 2 -sticky w

    grid $base.tctype1${aa} $base.ctype1${aa} \
	$base.tctype2${aa} $base.ctype2${aa} \
	$base.tctype3${aa} $base.ctype3${aa} \
	$base.tctype4${aa} $base.ctype4${aa} \
	-padx 2 -pady 2 -sticky w
    grid $base.tcrpix1${aa} $base.crpix1${aa} \
	$base.tcrpix2${aa} $base.crpix2${aa} \
	$base.tcrpix3${aa} $base.crpix3${aa} \
	$base.tcrpix4${aa} $base.crpix4${aa} \
	-padx 2 -pady 2 -sticky w
    grid $base.tcrval1${aa} $base.crval1${aa} \
	$base.tcrval2${aa} $base.crval2${aa} \
	$base.tcrval3${aa} $base.crval3${aa} \
	$base.tcrval4${aa} $base.crval4${aa} \
	-padx 2 -pady 2 -sticky w
    grid $base.tcunit1${aa} $base.cunit1${aa} \
	$base.tcunit2${aa} $base.cunit2${aa} \
	$base.tcunit3${aa} $base.cunit3${aa} \
	$base.tcunit4${aa} $base.cunit4${aa} \
	-padx 2 -pady 2 -sticky w
    grid $base.tcdelt1${aa} $base.cdelt1${aa} \
	$base.tcdelt2${aa} $base.cdelt2${aa} \
	$base.tcdelt3${aa} $base.cdelt3${aa} \
	$base.tcdelt4${aa} $base.cdelt4${aa} \
	-padx 2 -pady 2 -sticky w

    grid $base.tcd1_1${aa} $base.cd1_1${aa} \
	$base.tcd2_1${aa} $base.cd2_1${aa} \
	$base.tcd3_1${aa} $base.cd3_1${aa} \
	$base.tcd4_1${aa} $base.cd4_1${aa} \
	-padx 2 -pady 2 -sticky w
    grid $base.tcd1_2${aa} $base.cd1_2${aa} \
	$base.tcd2_2${aa} $base.cd2_2${aa} \
	$base.tcd3_2${aa} $base.cd3_2${aa} \
	$base.tcd4_2${aa} $base.cd4_2${aa} \
	-padx 2 -pady 2 -sticky w
    grid $base.tcd1_3${aa} $base.cd1_3${aa} \
	$base.tcd2_3${aa} $base.cd2_3${aa} \
	$base.tcd3_3${aa} $base.cd3_3${aa} \
	$base.tcd4_3${aa} $base.cd4_3${aa} \
	-padx 2 -pady 2 -sticky w
    grid $base.tcd1_4${aa} $base.cd1_4${aa} \
	$base.tcd2_4${aa} $base.cd2_4${aa} \
	$base.tcd3_4${aa} $base.cd3_4${aa} \
	$base.tcd4_4${aa} $base.cd4_4${aa} \
	-padx 2 -pady 2 -sticky w

    grid $base.tpc1_1${aa} $base.pc1_1${aa} \
	$base.tpc2_1${aa} $base.pc2_1${aa} \
	$base.tpc3_1${aa} $base.pc3_1${aa} \
	$base.tpc4_1${aa} $base.pc4_1${aa} \
	-padx 2 -pady 2 -sticky w
    grid $base.tpc1_2${aa} $base.pc1_2${aa} \
	$base.tpc2_2${aa} $base.pc2_2${aa} \
	$base.tpc3_2${aa} $base.pc3_2${aa} \
	$base.tpc4_2${aa} $base.pc4_2${aa} \
	-padx 2 -pady 2 -sticky w
    grid $base.tpc1_3${aa} $base.pc1_3${aa} \
	$base.tpc2_3${aa} $base.pc2_3${aa} \
	$base.tpc3_3${aa} $base.pc3_3${aa} \
	$base.tpc4_3${aa} $base.pc4_3${aa} \
	-padx 2 -pady 2 -sticky w
    grid $base.tpc1_4${aa} $base.pc1_4${aa} \
	$base.tpc2_4${aa} $base.pc2_4${aa} \
	$base.tpc3_4${aa} $base.pc3_4${aa} \
	$base.tpc4_4${aa} $base.pc4_4${aa} \
	-padx 2 -pady 2 -sticky w

    grid $base.tps1_0${aa} $base.ps1_0${aa} \
	$base.tps2_0${aa} $base.ps2_0${aa} \
	$base.tps3_0${aa} $base.ps3_0${aa} \
	$base.tps4_0${aa} $base.ps4_0${aa} \
	-padx 2 -pady 2 -sticky w
    grid $base.tps1_1${aa} $base.ps1_1${aa} \
	$base.tps2_1${aa} $base.ps2_1${aa} \
	$base.tps3_1${aa} $base.ps3_1${aa} \
	$base.tps4_1${aa} $base.ps4_1${aa} \
	-padx 2 -pady 2 -sticky w

    grid $base.tlatpole${aa} $base.latpole${aa} \
	$base.tlonpole${aa} $base.lonpole${aa} -padx 2 -pady 2 -sticky w

    for {set mm 0} {$mm<18} {incr mm} {
	grid $pv00.tpv1_${mm}${aa} $pv00.pv1_${mm}${aa} \
	    $pv00.tpv2_${mm}${aa} $pv00.pv2_${mm}${aa} \
	    $pv00.tpv3_${mm}${aa} $pv00.pv3_${mm}${aa} \
	    $pv00.tpv4_${mm}${aa} $pv00.pv4_${mm}${aa} \
	    -padx 2 -pady 2 -sticky w
    }
    for {set mm 18} {$mm<36} {incr mm} {
	grid $pv18.tpv1_${mm}${aa} $pv18.pv1_${mm}${aa} \
	    $pv18.tpv2_${mm}${aa} $pv18.pv2_${mm}${aa} \
	    $pv18.tpv3_${mm}${aa} $pv18.pv3_${mm}${aa} \
	    $pv18.tpv4_${mm}${aa} $pv18.pv4_${mm}${aa} \
	    -padx 2 -pady 2 -sticky w
    }

    # only in primary
    grid $aa0.ta $aa0.a $aa0.tx $aa0.x -padx 2 -pady 2 -sticky w
    for {set mm 0} {$mm<=9} {incr mm} {
	for {set nn 0} {$nn<=9} {incr nn} {
	    if {[expr (($nn+$mm) <= 9) && !($nn == 0 && $mm == 0)]} {
		set rr [expr $mm*3 + 2]
		set cc [expr $nn*2]
		if {[expr $nn >= 4]} {
		    incr rr
		    incr cc -8
		}
		if {[expr $nn >= 8]} {
		    incr rr
		    incr cc -8
		}
		grid configure \
		    $aa0.ta_${mm}_${nn} \
		    -row $rr -column $cc -padx 2 -pady 2 -sticky w
		incr cc
		grid configure \
		    $aa0.a_${mm}_${nn} \
		    -row $rr -column $cc -padx 2 -pady 2 -sticky w
	    }
	}
    }

    grid $bb0.tb $bb0.b $bb0.tx $bb0.x -padx 2 -pady 2 -sticky w
    for {set mm 0} {$mm<=9} {incr mm} {
	for {set nn 0} {$nn<=9} {incr nn} {
	    if {[expr (($nn+$mm) <= 9) && !($nn == 0 && $mm == 0)]} {
		set rr [expr $mm*3 + 2]
		set cc [expr $nn*2]
		if {[expr $nn >= 4]} {
		    incr rr
		    incr cc -8
		}
		if {[expr $nn >= 8]} {
		    incr rr
		    incr cc -8
		}
		grid configure \
		    $bb0.tb_${mm}_${nn} \
		    -row $rr -column $cc -padx 2 -pady 2 -sticky w
		incr cc
		grid configure \
		    $bb0.b_${mm}_${nn} \
		    -row $rr -column $cc -padx 2 -pady 2 -sticky w
	    }
	}
    }

    grid $ap0.ta $ap0.a -padx 2 -pady 2 -sticky w
    for {set mm 0} {$mm<=9} {incr mm} {
	for {set nn 0} {$nn<=9} {incr nn} {
	    if {[expr (($nn+$mm) <= 9) && !($nn == 0 && $mm == 0)]} {
		set rr [expr $mm*3 + 2]
		set cc [expr $nn*2]
		if {[expr $nn >= 4]} {
		    incr rr
		    incr cc -8
		}
		if {[expr $nn >= 8]} {
		    incr rr
		    incr cc -8
		}
		grid configure \
		    $ap0.ta_${mm}_${nn} \
		    -row $rr -column $cc -padx 2 -pady 2 -sticky w
		incr cc
		grid configure \
		    $ap0.a_${mm}_${nn} \
		    -row $rr -column $cc -padx 2 -pady 2 -sticky w
	    }
	}
    }

    grid $bp0.tb $bp0.b -padx 2 -pady 2 -sticky w
    for {set mm 0} {$mm<=9} {incr mm} {
	for {set nn 0} {$nn<=9} {incr nn} {
	    if {[expr (($nn+$mm) <= 9) && !($nn == 0 && $mm == 0)]} {
		set rr [expr $mm*3 + 2]
		set cc [expr $nn*2]
		if {[expr $nn >= 4]} {
		    incr rr
		    incr cc -8
		}
		if {[expr $nn >= 8]} {
		    incr rr
		    incr cc -8
		}
		grid configure \
		    $bp0.tb_${mm}_${nn} \
		    -row $rr -column $cc -padx 2 -pady 2 -sticky w
		incr cc
		grid configure \
		    $bp0.b_${mm}_${nn} \
		    -row $rr -column $cc -padx 2 -pady 2 -sticky w
	    }
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
    if {$current(frame)!={}} {
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
    set dwcs(epoch) {}

    foreach aa {{} a b c d e f g h i j k l m n o p q r s t u v w x y z} {
	set dwcs(wcsname${aa}) {}
	set dwcs(wcsaxes${aa}) {}
	set dwcs(radesys${aa}) {}
	set dwcs(equinox${aa}) {}
	set dwcs(latpole${aa}) {}
	set dwcs(lonpole${aa}) {}

	for {set ii 1} {$ii<=4} {incr ii} {
	    set dwcs(ctype${ii}${aa}) {}
	    set dwcs(cunit${ii}${aa}) {}
	    set dwcs(crpix${ii}${aa}) {}
	    set dwcs(crval${ii}${aa}) {}
	    set dwcs(cdelt${ii}${aa}) {}
	}

	for {set ii 1} {$ii<=4} {incr ii} {
	    for {set jj 1} {$jj<=4} {incr jj} {
		set dwcs(cd${ii}_${jj}${aa}) {}
		set dwcs(pc${ii}_${jj}${aa}) {}
	    }
	}

	for {set ii 1} {$ii<=4} {incr ii} {
	    for {set jj 0} {$jj<=1} {incr jj} {
		set dwcs(ps${ii}_${jj}${aa}) {}
	    }
	}

	for {set ii 1} {$ii<=4} {incr ii} {
	    for {set mm 0} {$mm<36} {incr mm} {
		set dwcs(pv${ii}_${mm}${aa}) {}
	    }
	}
    }
    
    # primary only
    set dwcs(a_order) {}
    set dwcs(a_dmax) {}
    for {set mm 0} {$mm<6} {incr mm} {
	for {set nn 0} {$nn<6} {incr nn} {
	    set dwcs(a_${mm}_${nn}) {}
	}
    }
    set dwcs(b_order) {}
    set dwcs(b_dmax) {}
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
	
	# fix for PC00_00
	if {[regexp {pc0([1-9])_0([1-9])} $key dummy aa bb]} {
	    set key pc${aa}_${bb}
	}
	# fix for PC00x00x
	if {[regexp {pc00([1-9])00([1-9])} $key dummy aa bb]} {
	    set key pc${aa}_${bb}
	}

	switch [string range $key 0 6] {
	    mjd-obs -
	    date-ob {
		set dwcs($key) $val
	    }
	}
	switch [string range $key 0 5] {
	    wcsnam -
	    wcsaxe -
	    radesy -
	    equino -
	    latpol -
	    lonpol -
	    a_orde -
	    a_dmax -
	    b_orde -
	    b_dmax -
	    ap_ord -
	    bp_ord {
		set dwcs($key) $val
	    }
	}
	switch [string range $key 0 4] {
	    ctype -
	    cunit -
	    crpix -
	    crval -
	    cdelt {
		set dwcs($key) $val
	    }
	}
	switch [string range $key 0 3] {
	    epoc -
	    date -
	    cd1_ -
	    cd2_ -
	    cd3_ -
	    cd4_ -
	    pc1_ -
	    pc2_ -
	    pc3_ -
	    pc4_ -
	    ps1_ -
	    ps2_ -
	    ps3_ -
	    ps4_ -
	    pv1_ -
	    pv2_ -
	    pv3_ -
	    pv4_ {
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
    if {$dwcs(epoch) != {}} {
	append rr "EPOCH = $dwcs(epoch)\n"
    }

    foreach aa {{} a b c d e f g h i j k l m n o p q r s t u v w x y z} {
	set bb [string toupper $aa]

	if {$dwcs(wcsname${aa}) != {}} {
	    append rr "WCSNAME${bb} = '$dwcs(wcsname${aa})'\n"
	}
	if {$dwcs(wcsaxes${aa}) != {}} {
	    append rr "WCSAXES${bb} = '$dwcs(wcsaxes${aa})'\n"
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

	for {set ii 1} {$ii<=4} {incr ii} {
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

	for {set ii 1} {$ii<=4} {incr ii} {
	    for {set jj 1} {$jj<=4} {incr jj} {
		if {$dwcs(cd${ii}_${jj}${aa}) != {}} {
		    append rr "CD${ii}_${jj}${bb} = $dwcs(cd${ii}_${jj}${aa})\n"
		}
		if {$dwcs(pc${ii}_${jj}${aa}) != {}} {
		    append rr "PC${ii}_${jj}${bb} = $dwcs(pc${ii}_${jj}${aa})\n"
		}
	    }
	}

	for {set ii 1} {$ii<=4} {incr ii} {
	    for {set jj 0} {$jj<=1} {incr jj} {
		if {$dwcs(ps${ii}_${jj}${aa}) != {}} {
		    append rr \
			"PS${ii}_${jj}${bb} = '$dwcs(ps${ii}_${jj}${aa})'\n"
		}
	    }
	}

	for {set ii 1} {$ii<=4} {incr ii} {
	    for {set mm 0} {$mm<36} {incr mm} {
		if {$dwcs(pv${ii}_${mm}${aa}) != {}} {
		    append rr "PV${ii}_${mm}${bb} = $dwcs(pv${ii}_${mm}${aa})\n"
		}
	    }
	}
    }

    if {$dwcs(a_order) != {}} {
	append rr "A_ORDER = $dwcs(a_order)\n"
    }
    if {$dwcs(a_dmax) != {}} {
	append rr "A_DMAX = $dwcs(a_dmax)\n"
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
    if {$dwcs(b_dmax) != {}} {
	append rr "B_DMAX = $dwcs(b_dmax)\n"
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

    global parse
    set parse(sock) $sock
    set parse(fn) $fn

    wcs::YY_FLUSH_BUFFER
    wcs::yy_scan_string [lrange $var $i end]
    wcs::yyparse
    incr i [expr $wcs::yycnt-1]
}

proc WCSCmdReset {ext} {
    global rgb
    global current
    
    if {$current(frame) == {}} {
	return
    }

    RGBEvalLock rgb(lock,wcs) $current(frame) \
	[list $current(frame) wcs reset $ext]
    UpdateWCS
    CATUpdateWCS
    FPUpdateWCS
    UpdateWCSDialog
}

proc WCSCmdLoad {cmd ext} {
    global current
    global rgb
    global parse

    if {$current(frame) == {}} {
	return
    }

    if {$parse(sock) != {}} {
	RGBEvalLock rgb(lock,wcs) $current(frame) [list $current(frame) wcs $cmd $ext $parse(sock)]
    } elseif {$parse(fn) != {}} {
	RGBEvalLock rgb(lock,wcs) $current(frame) "$current(frame) wcs $cmd $ext \{\{$parse(fn)\}\}"
    }

    UpdateWCS
    CATUpdateWCS
    FPUpdateWCS
    UpdateWCSDialog
}

proc WCSCmdLoadFn {cmd ext fn} {
    global current
    global rgb

    if {$current(frame) == {}} {
	return
    }

    RGBEvalLock rgb(lock,wcs) $current(frame) "$current(frame) wcs $cmd $ext \{\{$fn\}\}"
    UpdateWCS
    CATUpdateWCS
    FPUpdateWCS
    UpdateWCSDialog
}

proc ProcessSendWCSCmd {proc id param {sock {}} {fn {}}} {
    global parse
    set parse(proc) $proc
    set parse(id) $id

    wcssend::YY_FLUSH_BUFFER
    wcssend::yy_scan_string $param
    wcssend::yyparse
}

# backward compatibilty
proc ProcessAlignCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    align::YY_FLUSH_BUFFER
    align::yy_scan_string [lrange $var $i end]
    align::yyparse
    incr i [expr $align::yycnt-1]
}

proc ProcessSendAlignCmd {proc id param {sock {}} {fn {}}} {
    global current
    $proc $id [ToYesNo $current(align)]
}

