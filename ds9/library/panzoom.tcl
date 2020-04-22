#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc PanZoomDef {} {
    global panzoom
    global ipanzoom
    global ppanzoom
    global tcl_platform

    set ipanzoom(top) .pz
    set ipanzoom(mb) .pzmb
    set ipanzoom(speed) 512
    set ipanzoom(x) 0
    set ipanzoom(last) {0 0}
    set ipanzoom(state) 1

    set panzoom(preserve) 0
    set panzoom(lock) none

    # set via wcs()
    set panzoom(system) wcs
    set panzoom(sky) fk5
    set panzoom(skyformat) degrees

    set ppanzoom(preserve) $panzoom(preserve)

    # prefs only
    set ppanzoom(mode) click
    set ppanzoom(wheel) 1
    set ppanzoom(wheel,factor) 1.2
    # special case
    switch -- $tcl_platform(os) {
	Darwin {
	    switch [lindex [split $tcl_platform(osVersion) {.}] 0] {
		11 {set ppanzoom(wheel,factor) 1.01}
	    }
	}
    }
}

# Pan

proc CenterCurrentFrame {} {
    global current

    CenterFrame $current(frame)
}

proc CenterAllFrame {} {
    global ds9

    foreach ff $ds9(frames) {
	CenterFrame $ff
    }
}

proc CenterFrame {which} {
    if {$which != {}} {
	$which center

	UpdatePan $which
        UpdateZoomMenu
    }
}

proc PanCanvas {x y} {
    global current

    if {$current(frame) != {}} {
	$current(frame) pan $x $y
	UpdatePan $current(frame)
    }
}

proc Pan {x y sys sky} {
    global current

    if {$current(frame) != {}} {
	$current(frame) pan $sys $sky $x $y
	UpdatePan $current(frame)
    }
}

proc PanTo {x y sys sky} {
    global current

    PanToFrame $current(frame) $x $y $sys $sky
}

proc PanToFrame {which x y sys sky} {
    global current

    if {$which != {}} {
	$which pan to $sys $sky $x $y
	UpdatePan $which
    }
}

proc PanButton {which x y} {
    global ppanzoom

    switch -- $ppanzoom(mode) {
	click {}
	drag {$which pan motion begin $x $y}
	panzoom {}
    }
}

proc PanMotion {which x y} {
    global ppanzoom

    switch -- $ppanzoom(mode) {
	click {}
	drag {$which pan motion $x $y}
	panzoom {}
    }
}

proc PanRelease {which x y} {
    global panzoom
    global ipanzoom
    global ppanzoom
    global current

    switch -- $ppanzoom(mode) {
	click {$which pan to $x $y}
	drag {$which pan motion end $x $y}
	panzoom {
	    if {$ipanzoom(last) != "$x $y"} {
		set ipanzoom(state) 1
	    }
	    switch -- $ipanzoom(state) {
		1 {
		    $which pan to $x $y
		    $which update now
		    set cc [$which get cursor canvas]
		    set xx [expr int([lindex $cc 0])]
		    set yy [expr int([lindex $cc 1])]
		    $which warp to $xx $yy
		    set ipanzoom(last) "$xx $yy"

		    set z [$current(frame) get zoom]
		    if {$z < 2} {
			set ipanzoom(state) 2
		    } elseif {$z < 4} {
			set ipanzoom(state) 3
		    } elseif {$z < 8} {
			set ipanzoom(state) 4
		    } else {
			set ipanzoom(state) 5
		    }
		}
		2 {
		    $which zoom to 2 2 about $x $y
		    set ipanzoom(state) 3
		}
		3 {
		    $which zoom to 4 4 about $x $y
		    set ipanzoom(state) 4
		}
		4 {
		    $which zoom to 8 8 about $x $y
		    set ipanzoom(state) 5
		}
		5 {
		    $which zoom to 1 1 about $x $y
		    set ipanzoom(state) 2
		}
	    }
	    if {$which == $current(frame)} {
		set current(zoom) [$current(frame) get zoom]
	    }
	}
    }

    UpdatePan $which
}

proc PreservePan {} {
    global current
    global panzoom

    if {$current(frame) != {}} {
	$current(frame) pan preserve $panzoom(preserve)
    }
}

proc UpdatePan {which} {
    LockFrame $which
    UpdateGraphAxis $which
    UpdatePanZoomDialog
    SAMPSendCoordPointAtSkyCmd $which
}

# Zoom

proc ZoomToFit {} {
    global current
    global grid

    if {$current(frame) != {}} {
	# we need to update the grid because titles are zoom dependant
	if {$grid(view) && $grid(type) == "publication"} {
	    # recalculate to make room for labels
	    $current(frame) zoom to fit .8
	    set current(zoom) [$current(frame) get zoom]
	} else {
	    $current(frame) zoom to fit
	    set current(zoom) [$current(frame) get zoom]
	}
	UpdateZoom $current(frame)
    }
}

proc ChangeZoom {} {
    global current

    if {$current(frame) != {}} {
	$current(frame) zoom to $current(zoom)
	UpdateZoom $current(frame)
    }
}

proc ZoomTo {zx zy} {
    global current

    set current(zoom) "$zx $zy"
    ChangeZoom
}

proc Zoom {zx zy} {
    global current

    if {$current(frame) != {}} {
	ZoomFrame $current(frame) $zx $zy
    }
}

proc ZoomFrame {which zx zy} {
    global current

    $which zoom $zx $zy
    if {$which == $current(frame)} {
	set current(zoom) [$current(frame) get zoom]
    }
    UpdateZoom $which
}

proc ZoomButton {which x y} {
    global current

    $which zoom 2 2 about $x $y
    if {$current(frame) == $which} {
	set current(zoom) [$current(frame) get zoom]
    }
    UpdateZoom $which
}

proc ZoomShift {which} {
    global current

    $which zoom .5 .5
    if {$current(frame) == $which} {
	set current(zoom) [$current(frame) get zoom]
    }
    UpdateZoom $which
}

proc UpdateZoom {which} {
    LockFrame $which
    UpdateGraphAxis $which
    UpdatePanZoomDialog
    GridUpdateZoom
    RefreshInfoBox $which
}

# Orient

proc ChangeOrient {} {
    global current

    if {$current(frame) != {}} {
	$current(frame) orient $current(orient)
	UpdateRotate $current(frame)
    }
}

# Rotate

proc Rotate {value} {
    global current

    if {$current(frame) != {}} {
	$current(frame) rotate $value
	set current(rotate) [$current(frame) get rotate]
	UpdateRotate $current(frame)
    }
}

proc ChangeRotate {} {
    global current

    if {$current(frame) != {}} {
	$current(frame) rotate to $current(rotate)
	UpdateRotate $current(frame)
    }
}

proc RotateButton {which x y} {
    global ipanzoom

    $which rotate motion begin
    set ipanzoom(x) $x
}

proc RotateMotion {which x y} {
    global current
    global ipanzoom
    global icursor

    $which rotate motion [expr double($ipanzoom(x)-$x)/$ipanzoom(speed) * 180.]
    if {$current(frame) == $which} {
	set current(rotate) [$which get rotate]
    }
    RefreshInfoBox $which
}

proc RotateRelease {which x y} {
    global current

    $which rotate motion end
    if {$current(frame) == $which} {
	set current(rotate) [$which get rotate]
    }
    UpdateRotate $which
}

proc UpdateRotate {which} {
    LockFrame $which
    UpdateGraphAxis $which
    UpdatePanZoomDialog
    RefreshInfoBox $which
}

proc PanZoomDialog {} {
    global panzoom
    global ipanzoom
    global dpanzoom
    global ds9
    global current

    # see if we already have a window visible
    if {[winfo exists $ipanzoom(top)]} {
	raise $ipanzoom(top)
	return
    }

    # create the window
    set w $ipanzoom(top)
    set mb $ipanzoom(mb)

    Toplevel $w $mb 6 [msgcat::mc {Pan Zoom Rotate Parameters}] \
	PanZoomDestroyDialog

    # for CoordMenuButton
    set panzoom(frame) $current(frame)

    $mb add cascade -label [msgcat::mc {File}] -menu $mb.file
    $mb add cascade -label [msgcat::mc {Edit}] -menu $mb.edit
    $mb add cascade -label [msgcat::mc {Pan}] -menu $mb.pan
    $mb add cascade -label [msgcat::mc {Zoom}] -menu $mb.zoom
    $mb add cascade -label [msgcat::mc {Orientation}] -menu $mb.orient
    $mb add cascade -label [msgcat::mc {Rotate}] -menu $mb.rotate

    ThemeMenu $mb.file
    $mb.file add command -label [msgcat::mc {Apply}] \
	-command PanZoomApplyDialog
    $mb.file add separator
    $mb.file add command -label [msgcat::mc {Close}] \
	-command PanZoomDestroyDialog -accelerator "${ds9(ctrl)}W"

    EditMenu $mb ipanzoom

    ThemeMenu $mb.pan
    $mb.pan add command -label [msgcat::mc {Center Image}] \
	-command CenterCurrentFrame
    $mb.pan add checkbutton -label [msgcat::mc {Align}] \
	-variable current(align) -command AlignWCSFrame

    ThemeMenu $mb.zoom
    $mb.zoom add command -label [msgcat::mc {Zoom In}] \
	-command {Zoom 2 2} -accelerator "${ds9(ctrl)}+"
    $mb.zoom add command -label [msgcat::mc {Zoom Out}] \
	-command {Zoom .5 .5} -accelerator "${ds9(ctrl)}-"
    $mb.zoom add command -label [msgcat::mc {Zoom Fit}] -command ZoomToFit
    $mb.zoom add separator
    $mb.zoom add radiobutton -label "[msgcat::mc {Zoom}] 1/32" \
 	-variable current(zoom) -value {0.03125 0.03125} -command ChangeZoom
    $mb.zoom add radiobutton -label "[msgcat::mc {Zoom}] 1/16" \
	-variable current(zoom) -value {0.0625 0.0625} -command ChangeZoom
    $mb.zoom add radiobutton -label "[msgcat::mc {Zoom}] 1/8" \
	-variable current(zoom) -value {0.125 0.125} -command ChangeZoom
    $mb.zoom add radiobutton -label "[msgcat::mc {Zoom}] 1/4" \
	-variable current(zoom) -value {0.25 0.25} -command ChangeZoom
    $mb.zoom add radiobutton -label "[msgcat::mc {Zoom}] 1/2" \
	-variable current(zoom) -value {0.5 0.5} -command ChangeZoom
    $mb.zoom add radiobutton -label "[msgcat::mc {Zoom}] 1" \
	-variable current(zoom) -value {1 1} -command ChangeZoom
    $mb.zoom add radiobutton -label "[msgcat::mc {Zoom}] 2" \
	-variable current(zoom) -value {2 2}  -command ChangeZoom
    $mb.zoom add radiobutton -label "[msgcat::mc {Zoom}] 4" \
	-variable current(zoom) -value {4 4} -command ChangeZoom
    $mb.zoom add radiobutton -label "[msgcat::mc {Zoom}] 8" \
	-variable current(zoom) -value {8 8} -command ChangeZoom
    $mb.zoom add radiobutton -label "[msgcat::mc {Zoom}] 16" \
	-variable current(zoom) -value {16 16} -command ChangeZoom
    $mb.zoom add radiobutton -label "[msgcat::mc {Zoom}] 32" \
 	-variable current(zoom) -value {32 32} -command ChangeZoom

    ThemeMenu $mb.orient
    $mb.orient add radiobutton -label [msgcat::mc {None}] \
	-variable current(orient) -value none -command ChangeOrient
    $mb.orient add radiobutton  -label "[msgcat::mc {Invert}] X" \
	-variable current(orient) -value x -command ChangeOrient
    $mb.orient add radiobutton -label "[msgcat::mc {Invert}] Y" \
	-variable current(orient) -value y -command ChangeOrient
    $mb.orient add radiobutton -label "[msgcat::mc {Invert}] XY" \
	-variable current(orient) -value xy -command ChangeOrient

    ThemeMenu $mb.rotate
    $mb.rotate add radiobutton -label "0 [msgcat::mc {Degrees}]" \
	-variable current(rotate) -value 0 -command ChangeRotate
    $mb.rotate add radiobutton -label "90 [msgcat::mc {Degrees}]" \
	-variable current(rotate) -value 90 -command ChangeRotate
    $mb.rotate add radiobutton -label "180 [msgcat::mc {Degrees}]" \
	-variable current(rotate) -value 180 -command ChangeRotate
    $mb.rotate add radiobutton -label "270 [msgcat::mc {Degrees}]" \
	-variable current(rotate) -value 270 -command ChangeRotate

    # Param
    set f [ttk::frame $w.param]

    ttk::label $f.zoomtitle -text [msgcat::mc {Zoom}]
    ttk::entry $f.zoomx -textvariable dpanzoom(zoom,x) -width 14
    ttk::entry $f.zoomy -textvariable dpanzoom(zoom,y) -width 14

    ttk::label $f.rottitle -text [msgcat::mc {Rotate}]
    ttk::entry $f.rotvalue -textvariable dpanzoom(rotate) -width 14
    ttk::label $f.rottitle2 -text [msgcat::mc {Degrees}]

    ttk::label $f.pantitle -text [msgcat::mc {Pan}]
    ttk::entry $f.panx -textvariable dpanzoom(x) -width 14
    ttk::entry $f.pany -textvariable dpanzoom(y) -width 14
    set dpanzoom(cb) $f.pansystem 
    CoordMenuButton $dpanzoom(cb) panzoom system 1 sky skyformat \
	UpdatePanZoomDialog

    grid $f.zoomtitle $f.zoomx $f.zoomy -padx 2 -pady 2
    grid $f.rottitle $f.rotvalue $f.rottitle2 -padx 2 -pady 2 -sticky w
    grid $f.pantitle $f.panx $f.pany $f.pansystem -padx 2 -pady 2

    # Buttons
    set f [ttk::frame $w.buttons]
    ttk::button $f.apply -text [msgcat::mc {Apply}] -command PanZoomApplyDialog
    ttk::button $f.close -text [msgcat::mc {Close}] \
	-command PanZoomDestroyDialog
    pack $f.apply $f.close -side left -expand true -padx 2 -pady 4

    # Fini
    ttk::separator $w.sep -orient horizontal
    pack $w.buttons $w.sep -side bottom -fill x
    pack $w.param -side top -fill both -expand true

    $w.param.zoomx select range 0 end

    bind $w <<ZoomIn>> [list Zoom 2 2]
    bind $w <<ZoomOut>> [list Zoom .5 .5]
    bind $w <<Close>> PanZoomDestroyDialog

    UpdatePanZoomDialog
}

proc PanZoomApplyDialog {} {
    global panzoom
    global ipanzoom
    global dpanzoom
    global current

    if {$current(frame) != {}} {
	set current(zoom) "$dpanzoom(zoom,x) $dpanzoom(zoom,y)"
	set current(rotate) $dpanzoom(rotate)

	$current(frame) zoom to $current(zoom) about \
	    $panzoom(system) $panzoom(sky) $dpanzoom(x) $dpanzoom(y) 
	$current(frame) rotate to $current(rotate)

	LockFrameCurrent
	UpdateGraphAxis $current(frame)
	UpdatePanZoomDialog
	GridUpdateZoom
	RefreshInfoBox $current(frame)
	UpdateZoomMenu
	SAMPSendCoordPointAtSkyCmd $current(frame)
    }
}

proc PanZoomDestroyDialog {} {
    global ipanzoom
    global dpanzoom

    if {[winfo exists $ipanzoom(top)]} {
	destroy $ipanzoom(top)
	destroy $ipanzoom(mb)
	unset dpanzoom
    }
}

proc UpdatePanZoomMenu {} {
    # can be changed by wcs
    SetCoordSystem panzoom system sky skyformat
}

proc UpdatePanZoomDialog {} {
    global panzoom
    global ipanzoom
    global dpanzoom
    global current

    global debug
    if {$debug(tcl,update)} {
	puts stderr "UpdatePanZoomDialog"
    }

    if {![winfo exists $ipanzoom(top)]} {
	return
    }

    if {$current(frame) != {}} {
	set panzoom(frame) $current(frame)
	if {[$current(frame) has fits]} {
	    # now make sure we have the coord systems
	    AdjustCoordSystem panzoom system
	    CoordMenuEnable $dpanzoom(cb).menu panzoom system sky skyformat
	    CoordMenuButtonCmd panzoom system sky {}
	} else {
	    CoordMenuReset $dpanzoom(cb).menu panzoom system sky skyformat
	}
    }

    if {$current(frame) != {}} {
	set zz [$current(frame) get zoom]
	set dpanzoom(zoom,x) [lindex $zz 0]
	set dpanzoom(zoom,y) [lindex $zz 1]
	set dpanzoom(rotate) [$current(frame) get rotate]

	set coord [$current(frame) get cursor $panzoom(system) \
		       $panzoom(sky) $panzoom(skyformat)]
	set dpanzoom(x) [lindex $coord 0]
	set dpanzoom(y) [lindex $coord 1]
    } else {
	set dpanzoom(zoom,x) {}
	set dpanzoom(zoom,y) {}
	set dpanzoom(rotate) {}

	set dpanzoom(x) {}
	set dpanzoom(y) {}
    }
}

# Other

proc AlignWCSFrame {} {
    global current
    global ds9

    if {$current(frame) != {}} {
	$current(frame) wcs align $current(align)

	LockFrameCurrent
	UpdateGraphAxis $current(frame)
    }
}

proc MatchFrameCurrent {sys} {
    global current

    if {$current(frame) != {}} {
	MatchFrame $current(frame) $sys
    }
}

proc MatchFrame {which sys} {
    global ds9
    global current

    # NO-make sure matrices have been updated
    # really messes up mousewheel events, just assume all is good
    #   RealizeDS9

    switch -- $sys {
	image -
	physical -
	amplifier -
	detector {
	    set current(align) 0
	    $which wcs align 0

	    set pan [$which get cursor $sys]
	    set zoom [$which get zoom]
	    set rotate [$which get rotate]
	    set orient [$which get orient]
	    foreach ff $ds9(frames) {
		if {$ff != $which} {
		    $ff pan to $sys $pan
		    $ff zoom to $zoom
		    $ff rotate to $rotate
		    $ff orient $orient

		    $ff wcs align 0
		}
	    }
	}
	wcs {
	    set www [$which get wcs]
	    set sys [lindex $www 0]
	    set sky [lindex $www 1]
	    if {[$which has wcs $sys]} {
		set current(align) 1
		$which wcs align 1
		set align [$which get wcs align pointer]
		set pan [$which get cursor $sys FK5]
		set zoom [$which get zoom]
		set rotate [$which get rotate]
		set orient [$which get orient]

		foreach ff $ds9(frames) {
		    if {$ff != $which} {
			if {[$ff has wcs $sys]} {
			    $ff pan to $sys FK5 $pan
			    $ff zoom to $zoom
			    $ff rotate to $rotate
			    $ff orient $orient

			    $ff wcs align $align
			}
		    }
		}
	    }
	}
    }
}

proc LockFrameCurrent {} {
    global current
    
    if {$current(frame) != {}} {
	LockFrame $current(frame)
    }
}

proc LockFrame {which} {
    global panzoom

    switch -- $panzoom(lock) {
	none {}
	default {MatchFrame $which $panzoom(lock)}
    }
}

# Backup

proc PanZoomBackup {ch which} {
    puts $ch "$which pan preserve [$which get pan preserve]"
    puts $ch "$which pan to physical [$which get cursor physical]"
    puts $ch "$which zoom to [$which get zoom]"
    puts $ch "$which rotate to [$which get rotate]"
    puts $ch "$which orient [$which get orient]"
    puts $ch "$which wcs align [$which get wcs align]"
}

# Process Cmds

proc ProcessPanCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    # we need to be realized
    ProcessRealizeDS9

    pan::YY_FLUSH_BUFFER
    pan::yy_scan_string [lrange $var $i end]
    pan::yyparse
    incr i [expr $pan::yycnt-1]
}

proc ProcessSendPanCmd {proc id param {sock {}} {fn {}}} {
    global parse
    set parse(proc) $proc
    set parse(id) $id

    pansend::YY_FLUSH_BUFFER
    pansend::yy_scan_string $param
    pansend::yyparse
}

proc ProcessZoomCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    # we need to be realized
    ProcessRealizeDS9

    zoom::YY_FLUSH_BUFFER
    zoom::yy_scan_string [lrange $var $i end]
    zoom::yyparse
    incr i [expr $zoom::yycnt-1]
}

proc ProcessSendZoomCmd {proc id param {sock {}} {fn {}}} {
    global current

    set z1 [lindex $current(zoom) 0]
    set z2 [lindex $current(zoom) 1]
    if {$z1 != $z2} {
	$proc $id "$current(zoom)\n"
    } else {
	$proc $id "$z1\n"
    }
}

proc ProcessOrientCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    # we need to be realized
    ProcessRealizeDS9

    orient::YY_FLUSH_BUFFER
    orient::yy_scan_string [lrange $var $i end]
    orient::yyparse
    incr i [expr $orient::yycnt-1]
}

proc ProcessSendOrientCmd {proc id param {sock {}} {fn {}}} {
    global current
    $proc $id "$current(orient)\n"
}

proc ProcessRotateCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    # we need to be realized
    ProcessRealizeDS9

    rotate::YY_FLUSH_BUFFER
    rotate::yy_scan_string [lrange $var $i end]
    rotate::yyparse
    incr i [expr $rotate::yycnt-1]
}

proc ProcessSendRotateCmd {proc id param {sock {}} {fn {}}} {
    global current
    $proc $id "$current(rotate)\n"
}

