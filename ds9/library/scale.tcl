#  Copyright (C) 1999-2021
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc ScaleDef {} {
    global scale
    global iscale
    global pscale

    set iscale(top) .scale
    set iscale(mb) .scalemb

    set scale(min) 1
    set scale(max) 100
    set scale(xaxis) full
    set scale(yaxis) log
    set scale(bins) 512

    set scale(lock) 0
    set scale(lock,limits) 0

    set scale(type) linear
    set scale(log) 1000
    # GHS: sp/lp/hp are data values or auto (sp,lp = low, hp = high)
    set scale(ghs,stretch) 5
    set scale(ghs,intensity) 0
    set scale(ghs,sp) auto
    set scale(ghs,lp) auto
    set scale(ghs,hp) auto
    set scale(mode) minmax
    set scale(scope) local
    set scale(datasec) 1

    set pscale(type) $scale(type)
    set pscale(log) $scale(log)
    foreach kk {stretch intensity sp lp hp} {
	set pscale(ghs,$kk) $scale(ghs,$kk)
    }
    set pscale(mode) $scale(mode)
    set pscale(scope) $scale(scope)
    set pscale(datasec) $scale(datasec)
}

proc MinMaxDef {} {
    global minmax
    global pminmax

    set minmax(mode) scan
    set minmax(sample) 25

    array set pminmax [array get minmax]
}

proc ZScaleDef {} {
    global zscale
    global pzscale

    set zscale(contrast) .25
    set zscale(sample) 600
    set zscale(line) 120

    array set pzscale [array get zscale]
}

proc ChangeDATASEC {} {
    global current
    global scale
    global rgb

    if {$current(frame) != {}} {
	EvalLockCurrent lock,scale [list $current(frame) datasec $scale(datasec)]
	UpdateScale
    }
}

proc ChangeScale {} {
    global current
    global scale
    global rgb

    if {$current(frame) != {}} {
	if {[$current(frame) has iis]} {
	    return {}
	}

	EvalLockCurrent lock,scale [list $current(frame) colorscale log $scale(log)]
	EvalLockCurrent lock,scale [list $current(frame) colorscale ghs {*}[ScaleGhsList]]
	EvalLockCurrent lock,scale [list $current(frame) colorscale $scale(type)]
	UpdateScale
    }
}

proc ChangeScaleMode {} {
    global current
    global scale
    global rgb

    if {$current(frame) != {}} {
	if {[$current(frame) has iis]} {
	    return {}
	}

	EvalLockCurrent lock,scale [list $current(frame) clip mode $scale(mode)]
	UpdateScale
    }
}

proc ChangeScaleModeDialog {} {
    global scale

    set mm $scale(mode)
    if {![string is double $mm]} {
	set mm 100
    }
    if {[EntryDialog [msgcat::mc {Scale Mode}] [msgcat::mc {Percent}] 10 mm]} {
	set scale(mode) $mm
	ChangeScaleMode
    }
}

proc ChangeScaleLimit {} {
    global current
    global scale
    global rgb

    if {$current(frame) != {}} {
	if {[$current(frame) has iis]} {
	    return {}
	}

	set scale(mode) user
	EvalLockCurrent lock,scale [list $current(frame) clip user $scale(min) $scale(max)]
	EvalLockCurrent lock,scale [list $current(frame) clip mode $scale(mode)]
	UpdateScale
    }
}

proc ChangeScaleScope {} {
    global current
    global scale
    global rgb

    if {$current(frame) != {}} {
	if {[$current(frame) has iis]} {
	    return {}
	}

	EvalLockCurrent lock,scale [list $current(frame) clip scope $scale(scope)]
	UpdateScale
    }
}

proc ChangeMinMax {} {
    global current
    global minmax
    global rgb

    if {$current(frame) != {}} {
	EvalLockCurrent lock,scale \
	    [list $current(frame) clip minmax $minmax(sample) $minmax(mode)]
	UpdateScale
    }
}

proc RescanMinMax {} {
    global current
    global minmax
    global rgb

    if {$current(frame) != {}} {
	EvalLockCurrent lock,scale [list $current(frame) clip minmax rescan]
	UpdateScale
    }
}

proc ChangeZScale {} {
    global current
    global zscale
    global rgb

    if {$current(frame) != {}} {
	EvalLockCurrent lock,scale [list $current(frame) clip zscale $zscale(contrast) $zscale(sample) $zscale(line)]
	UpdateScale
    }
}

proc UpdateScale {} {
    global current

    global debug
    if {$debug(tcl,update)} {
	puts stderr "UpdateScale"
    }

    LockScaleCurrent
    LockScaleLimitsCurrent
    UpdateScaleMenu
    UpdateScaleDialog
    UpdateContourScale
    UpdateInfoBoxFrame $current(frame)
    UpdateGraphAxes $current(frame)
    MarkerAnalysisPlot3dUpdateScale $current(frame)
    UpdateMain
}

proc ScaleDialog {} {
    global scale
    global iscale
    global dscale

    global current
    global ds9
    global minmax
    global canvas

    # see if we already have a window visible

    if {[winfo exists $iscale(top)]} {
	raise $iscale(top)
	return
    }

    # create the window
    set w $iscale(top)
    set mb $iscale(mb)

    Toplevel $w $mb 6 [msgcat::mc {Scale Parameters}] ScaleDestroyDialog

    $mb add cascade -label [msgcat::mc {File}] -menu $mb.file
    $mb add cascade -label [msgcat::mc {Edit}] -menu $mb.edit
    $mb add cascade -label [msgcat::mc {Scale}] -menu $mb.scale
    $mb add cascade -label [msgcat::mc {Limits}] -menu $mb.limit
    $mb add cascade -label [msgcat::mc {Scope}] -menu $mb.scope
    $mb add cascade -label [msgcat::mc {Min Max}] -menu $mb.minmax
    $mb add cascade -label [msgcat::mc {Parameters}] -menu $mb.param
    $mb add cascade -label [msgcat::mc {Graph}] -menu $mb.graph

    ThemeMenu $mb.file
    $mb.file add command -label [msgcat::mc {Apply}] -command ScaleApplyDialog
    $mb.file add separator
    $mb.file add command -label [msgcat::mc {Close}] \
	-command ScaleDestroyDialog -accelerator "${ds9(ctrl)}W"

    EditMenu $mb iscale

    ThemeMenu $mb.scale
    $mb.scale add radiobutton -label [msgcat::mc {Linear}] \
	-variable scale(type) -command ChangeScale -value linear
    $mb.scale add radiobutton -label [msgcat::mc {Log}] \
	-variable scale(type) -command ChangeScale -value log
    $mb.scale add radiobutton -label [msgcat::mc {Power}] \
	-variable scale(type) -command ChangeScale -value pow
    $mb.scale add radiobutton -label [msgcat::mc {Square Root}] \
	-variable scale(type) -command ChangeScale -value sqrt
    $mb.scale add radiobutton -label [msgcat::mc {Squared}] \
	-variable scale(type) -command ChangeScale -value squared
    $mb.scale add radiobutton -label {ASINH} \
	-variable scale(type) -command ChangeScale -value asinh
    $mb.scale add radiobutton -label {SINH} \
	-variable scale(type) -command ChangeScale -value sinh
    $mb.scale add radiobutton -label [msgcat::mc {Histogram Equalization}] \
	-variable scale(type) -command ChangeScale -value histequ
    $mb.scale add radiobutton -label {GHS} \
	-variable scale(type) -command ChangeScale -value ghs
    $mb.scale add separator
    $mb.scale add command -label [msgcat::mc {Log Exponent}] \
	-command ScaleLogDialog
    $mb.scale add command -label "GHS [msgcat::mc {Parameters}]..." \
	-command ScaleGhsDialog

    ThemeMenu $mb.limit
    $mb.limit add radiobutton -label [msgcat::mc {Min Max}] \
	-variable scale(mode) -command ChangeScaleMode -value minmax
    $mb.limit add separator
    $mb.limit add radiobutton -label {99.5%} \
	-variable scale(mode) -command ChangeScaleMode -value 99.5
    $mb.limit add radiobutton -label {99%} \
	-variable scale(mode) -command ChangeScaleMode -value 99
    $mb.limit add radiobutton -label  {98%} \
	-variable scale(mode) -command ChangeScaleMode -value 98
    $mb.limit add radiobutton -label  {97%} \
	-variable scale(mode) -command ChangeScaleMode -value 97
    $mb.limit add radiobutton -label  {96%} \
	-variable scale(mode) -command ChangeScaleMode -value 96
    $mb.limit add radiobutton -label {95%} \
	-variable scale(mode) -command ChangeScaleMode -value 95
    $mb.limit add radiobutton -label {92.5%} \
	-variable scale(mode) -command ChangeScaleMode -value 92.5
    $mb.limit add radiobutton -label {90%} \
	-variable scale(mode) -command ChangeScaleMode -value 90
    $mb.limit add separator
    $mb.limit add radiobutton -label {ZScale} \
	-variable scale(mode) -command ChangeScaleMode -value zscale
    $mb.limit add radiobutton -label {ZMax} \
	-variable scale(mode) -command ChangeScaleMode -value zmax
    $mb.limit add radiobutton -label [msgcat::mc {User}] \
	-variable scale(mode) -command ChangeScaleMode -value user
    $mb.limit add separator
    $mb.limit add command -label [msgcat::mc {Other}] \
	-command ChangeScaleModeDialog

    ThemeMenu $mb.scope 
    $mb.scope add radiobutton -label [msgcat::mc {Global}] \
	-variable scale(scope) -command ChangeScaleScope -value global
    $mb.scope add radiobutton -label [msgcat::mc {Local}] \
	-variable scale(scope) -command ChangeScaleScope -value local

    ThemeMenu $mb.minmax 
    $mb.minmax add radiobutton -label [msgcat::mc {Scan}] \
	-variable minmax(mode) -value scan -command ChangeMinMax
    $mb.minmax add radiobutton -label [msgcat::mc {Sample}] \
	-variable minmax(mode) -value sample -command ChangeMinMax
    $mb.minmax add radiobutton -label {DATAMIN DATAMAX} \
	-variable minmax(mode) -value datamin -command ChangeMinMax
    $mb.minmax add radiobutton -label {IRAF-MIN IRAF-MAX} \
	-variable minmax(mode) -value irafmin -command ChangeMinMax
    $mb.minmax add separator
    $mb.minmax add command -label [msgcat::mc {Sample Parameters}] \
	-command MinMaxDialog

    ThemeMenu $mb.param 
    $mb.param add checkbutton -label "[msgcat::mc {Use}] DATASEC" \
	-variable scale(datasec) -command ChangeDATASEC
    $mb.param add separator
    $mb.param add command -label {ZScale} -command ZScaleDialog

    ThemeMenu $mb.graph 
    $mb.graph add radiobutton -label [msgcat::mc {Linear}] \
	-value linear -variable scale(yaxis) -command ScaleYAxisDialog
    $mb.graph add radiobutton -label [msgcat::mc {Log}] \
	-value log -variable scale(yaxis) -command ScaleYAxisDialog
    $mb.graph add separator
    $mb.graph add radiobutton -label [msgcat::mc {Full Range}] \
	-value full -variable scale(xaxis) -command ScaleXAxisDialog
    $mb.graph add radiobutton -label [msgcat::mc {Current Range}] \
	-value current -variable scale(xaxis) -command ScaleXAxisDialog

    # Graph
    set f [ttk::frame $w.ch]

    set dscale(hist) [blt::graph $f.chart \
			  -width 500 \
			  -height 200 \
			  -title [msgcat::mc {Pixel Distribution}] \
			  -font [font actual TkDefaultFont] \
			  -plotrelief groove \
			  -plotborderwidth 2 \
			  -foreground [ThemeTreeForeground] \
			  -background [ThemeTreeBackground] \
			  -plotbackground [ThemeTreeBackground] \
			 ]

    $dscale(hist) legend configure -hide yes

    $dscale(hist) xaxis configure \
	-hide yes \
	-grid no \
	-ticklength 3 \
	-tickfont [font actual TkDefaultFont] \
	-bg [ThemeTreeBackground] \
	-color [ThemeTreeForeground] \
	-titlecolor [ThemeTreeForeground]

    $dscale(hist) yaxis configure \
	-hide yes \
	-grid yes \
	-ticklength 3 \
	-tickfont [font actual TkDefaultFont] \
	-bg [ThemeTreeBackground] \
	-color [ThemeTreeForeground] \
	-titlecolor [ThemeTreeForeground]

    set dscale(curvecolor) #2f80ed
    set dscale(xdata) scaleHistX
    set dscale(ydata) scaleHistY
    blt::vector create $dscale(xdata) $dscale(ydata)

    $dscale(hist) element create bar1 \
	-smooth step  \
	-xdata $dscale(xdata) \
	-ydata $dscale(ydata) \
	-areabackground [ThemeTreeForeground] \
	-color [ThemeTreeForeground]

    # Scale function: scaled value (0-1, right axis) against data value
    $dscale(hist) y2axis configure \
	-hide yes \
	-min 0 -max 1 -stepsize .25 \
	-ticklength 3 \
	-tickfont [font actual TkDefaultFont] \
	-bg [ThemeTreeBackground] \
	-color [ThemeTreeForeground] \
	-titlecolor [ThemeTreeForeground]

    set dscale(curvex) scaleCurveX
    set dscale(curvey) scaleCurveY
    blt::vector create $dscale(curvex) $dscale(curvey)

    $dscale(hist) element create curve \
	-xdata $dscale(curvex) \
	-ydata $dscale(curvey) \
	-mapy y2 \
	-symbol none \
	-linewidth 2 \
	-color $dscale(curvecolor) \
	-hide yes
    # the first element listed is drawn on top
    $dscale(hist) element show {curve bar1}

    # GHS symmetry point / protect shadows / protect highlights: dashed
    # guide lines (the draggable handles are created after the limit lines,
    # so they sit on top of them)
    foreach mm {sp lp hp} {
	set dscale(ghs$mm) [$dscale(hist) marker create line \
				-mapy y2 \
				-outline $dscale(curvecolor) \
				-dashes {4 3} \
				-hide yes \
			       ]
    }

    # Cut Lines
    $dscale(hist) marker bind min <B1-Motion> \
	[list ScaleMotionDialog %x %y dscale(min)]
    $dscale(hist) marker bind max <B1-Motion> \
	[list ScaleMotionDialog %x %y dscale(max)]
    $dscale(hist) marker bind up <ButtonRelease-1> ScaleReleaseDialog

    set dscale(histmin) [$dscale(hist) marker create line \
			     -element bar1 \
			     -outline red \
			     -bindtags [list min up] \
			    ]
    set dscale(histmax) [$dscale(hist) marker create line \
			     -element bar1 \
			     -outline green \
			     -bindtags [list max up] \
			    ]

    # GHS handles on the curve. Drag sideways to move LP/SP/HP. Created
    # LP, HP, SP so SP is on top when two coincide (e.g. both at the low
    # limit with auto): SP is the one you want to pull away first.
    # (tkblt has only line, polygon and text markers: the handle is a
    # filled text tab, centred on the curve)
    foreach mm {lp hp sp} {
	set dscale(ghs${mm}handle) [$dscale(hist) marker create text \
					-mapy y2 \
					-text " [string toupper $mm] " \
					-anchor center \
					-foreground white \
					-background $dscale(curvecolor) \
					-font [font actual TkDefaultFont] \
					-bindtags [list ghs$mm ghsup] \
					-hide yes \
				       ]
	$dscale(hist) marker bind ghs$mm <B1-Motion> \
	    [list ScaleGhsMotionDialog %x %y $mm]
	$dscale(hist) marker bind ghs$mm <Enter> \
	    [list $dscale(hist) configure -cursor sb_h_double_arrow]
	$dscale(hist) marker bind ghs$mm <Leave> \
	    [list $dscale(hist) configure -cursor {}]
    }
    $dscale(hist) marker bind ghsup <ButtonRelease-1> ScaleGhsReleaseDialog

    # Cut Levels
    set f [ttk::frame $w.param]

    ttk::label $f.title -text [msgcat::mc {Limits}]
    ttk::label $f.ltitle -text [msgcat::mc {Low}]
    ttk::entry $f.lvalue -textvariable dscale(min) -width 13
    ttk::label $f.htitle -text [msgcat::mc {High}]
    ttk::entry $f.hvalue -textvariable dscale(max) -width 13

    pack $dscale(hist) -fill both -expand true
    pack $f.title $f.ltitle $f.lvalue $f.htitle $f.hvalue \
	-side left -padx 2 -pady 2

    # Buttons
    set f [ttk::frame $w.buttons]
    ttk::button $f.apply -text [msgcat::mc {Apply}] -command ScaleApplyDialog
    ttk::button $f.close -text [msgcat::mc {Close}] -command ScaleDestroyDialog
    pack $f.apply $f.close -side left -expand true -padx 2 -pady 4

    # Fini
    pack $w.ch -side top -fill both -expand true
    ttk::separator $w.sep -orient horizontal
    ttk::separator $w.sep2 -orient horizontal
    pack $w.buttons $w.sep2 $w.param $w.sep -side bottom -fill x

    bind $w <<Close>> ScaleDestroyDialog

    switch $ds9(wm) {
	x11 -
	win32 {bind $dscale(hist) <<ThemeChanged>> {ThemeConfigScale %W}}
	aqua {}
    }

    UpdateScaleDialog
}

proc ThemeConfigScale {w} {
    $w configure -foreground [ThemeTreeForeground] \
	-background [ThemeTreeBackground] -plotbackground [ThemeTreeBackground]

    $w xaxis configure -bg [ThemeTreeBackground] -color [ThemeTreeForeground] \
	-titlecolor [ThemeTreeForeground]
    $w yaxis configure -bg [ThemeTreeBackground] -color [ThemeTreeForeground] \
	-titlecolor [ThemeTreeForeground]
    $w y2axis configure -bg [ThemeTreeBackground] -color [ThemeTreeForeground] \
	-titlecolor [ThemeTreeForeground]

    $w element configure bar1 -areabackground [ThemeTreeForeground] \
	-color [ThemeTreeForeground]
}

proc ScaleApplyDialog {} {
    global scale
    global dscale
    global current
    global rgb

    if {$current(frame) != {} && 
	$dscale(min) != {} && 
	$dscale(max) != {}} {
	$dscale(hist) marker configure $dscale(histmin) \
	    -coords "$dscale(min) -Inf $dscale(min) Inf"
	$dscale(hist) marker configure $dscale(histmax) \
	    -coords "$dscale(max) -Inf $dscale(max) Inf"

	set scale(min) $dscale(min)
	set scale(max) $dscale(max)

	set scale(mode) user
	EvalLockCurrent lock,scale [list $current(frame) clip user $scale(min) $scale(max)]
	EvalLockCurrent lock,scale [list $current(frame) clip mode $scale(mode)]
	UpdateScale
    }
}

proc ScaleDestroyDialog {} {
    global scale
    global iscale
    global dscale

    if {[winfo exists $iscale(top)]} {
	destroy $iscale(top)
	destroy $iscale(mb)
	blt::vector destroy $dscale(xdata) $dscale(ydata)
	blt::vector destroy $dscale(curvex) $dscale(curvey)
	destroy $dscale(hist)
	if {[info exists dscale(ghspending)]} {
	    after cancel $dscale(ghspending)
	}
	unset dscale
    }
}

proc ScaleMotionDialog {x y varname} {
    upvar $varname var
    global scale
    global dscale

    set var [lindex [$dscale(hist) invtransform $x $y] 0]
    if {$dscale(min) > $dscale(max)} {
	if {$varname == "dscale(min)"} {
	    set var $dscale(max)
	} else {
	    set var $dscale(min)
	}
    }

    $dscale(hist) marker configure $dscale(histmin) \
	-coords "$dscale(min) -Inf $dscale(min) Inf"
    $dscale(hist) marker configure $dscale(histmax) \
	-coords "$dscale(max) -Inf $dscale(max) Inf"
}

proc ScaleReleaseDialog {} {
    global scale
    global dscale
    global current
    global rgb

    if {$current(frame) != {} && 
	$dscale(min) != {} && 
	$dscale(max) != {}} {

	set scale(min) $dscale(min)
	set scale(max) $dscale(max)
    
	set scale(mode) user
	EvalLockCurrent lock,scale [list $current(frame) clip user $scale(min) $scale(max)]
	EvalLockCurrent lock,scale [list $current(frame) clip mode $scale(mode)]

	UpdateScale
	ScaleXAxisDialog
    }
}

proc UpdateScaleDialog {} {
    global scale
    global iscale
    global dscale

    global current

    global debug
    if {$debug(tcl,update)} {
	puts stderr "UpdateScaleDialog"
    }

    if {![winfo exists $iscale(top)]} {
	return
    }

    set dscale(min) {}
    set dscale(max) {}

    if {$current(frame) != {}} {
	set limits [$current(frame) get clip]

	set dscale(min) [lindex $limits 0]
	set dscale(max) [lindex $limits 1]

	set limits {}
	if {[$current(frame) has fits] && ![$current(frame) has iis]} {
	    set limits [$current(frame) get minmax]
	}
	set mn [lindex $limits 0]
	set mx [lindex $limits 1]

	# an image of all NaN's has limits but no data range
	if {[ScaleFinite $dscale(min) $dscale(max) $mn $mx] &&
	    $dscale(min)<$dscale(max)} {

	    set dscale(minmin) $mn
	    set dscale(minmax) $mx

	    $current(frame) get histogram \
		$dscale(xdata) $dscale(ydata) $scale(bins)

	    # we seem to need to do this so that the min/max values are known
	    blt::vector expr min($dscale(ydata))
	    blt::vector expr max($dscale(ydata))

 	    $dscale(hist) element configure bar1 -hide no

	    $dscale(hist) xaxis configure -hide no
	    $dscale(hist) yaxis configure -hide no -min 1

	    $dscale(hist) marker configure $dscale(histmin) \
		-coords "$dscale(min) -Inf $dscale(min) Inf"
	    $dscale(hist) marker configure $dscale(histmax) \
		-coords "$dscale(max) -Inf $dscale(max) Inf"

	    if {[$current(frame) has datamin]} {
		$iscale(mb).minmax \
		    entryconfig {DATAMIN DATAMAX} -state normal
	    } else {
		$iscale(mb).minmax \
		    entryconfig {DATAMIN DATAMAX} -state disabled
	    }
	    if {[$current(frame) has irafmin]} {
		$iscale(mb).minmax \
		    entryconfig {IRAF-MIN IRAF-MAX} -state normal
	    } else {
		$iscale(mb).minmax \
		    entryconfig {IRAF-MIN IRAF-MAX} -state disabled
	    }

	    ScaleYAxisDialog
	    ScaleXAxisDialog
	    ScaleCurveDialog

	    return
	}
    }

    $dscale(hist) element configure bar1 -hide yes
    $dscale(hist) xaxis configure -hide yes
    $dscale(hist) yaxis configure -hide yes
    ScaleCurveHideDialog

    $iscale(mb) entryconfig [msgcat::mc {Scope}] -state normal
    $iscale(mb).minmax entryconfig {DATAMIN DATAMAX} -state normal
    $iscale(mb).minmax entryconfig {IRAF-MIN IRAF-MAX} -state normal
}

proc UpdateScaleDialogFont {} {
    global iscale
    global dscale

    if {![winfo exists $iscale(top)]} {
	return
    }

    $dscale(hist) configure -font [font actual TkDefaultFont]
    $dscale(hist) xaxis configure -tickfont [font actual TkDefaultFont]
    $dscale(hist) yaxis configure -tickfont [font actual TkDefaultFont]
    $dscale(hist) y2axis configure -tickfont [font actual TkDefaultFont]
}

proc ScaleCurveHideDialog {} {
    global dscale

    $dscale(hist) element configure curve -hide yes
    $dscale(hist) y2axis configure -hide yes
    foreach mm {sp lp hp} {
	$dscale(hist) marker configure $dscale(ghs$mm) -hide yes
	$dscale(hist) marker configure $dscale(ghs${mm}handle) -hide yes
    }
}

# Draw the current scale function over the histogram. The inverse levels
# ('get colorscale level') are the data values where the scaled value
# reaches k/(n-1): the curve sampled evenly in output, so it's dense where
# the curve is steep, and it works for every scale type.
proc ScaleCurveDialog {} {
    global dscale
    global current

    set fr $current(frame)
    set type [$fr get colorscale]
    set lo $dscale(min)
    set hi $dscale(max)
    if {[$fr has iis] || ![string is double -strict $lo] ||
	![string is double -strict $hi] || $lo >= $hi} {
	ScaleCurveHideDialog
	return
    }

    set nn 257
    set levels [$fr get colorscale level $nn $lo $hi $type \
		    [$fr get colorscale log]]

    # flat at 0 below the low limit and at 1 above the high limit, out to
    # whichever is wider: the data range or the current-range view
    set ext [expr {($hi-$lo)*.1}]
    set left [expr {min($dscale(minmin),$lo-$ext)}]
    set right [expr {max($dscale(minmax),$hi+$ext)}]

    set xx [list $left]
    set yy [list 0]
    set ii 0
    foreach ll $levels {
	lappend xx $ll
	lappend yy [expr {double($ii)/($nn-1)}]
	incr ii
    }
    lappend xx $right
    lappend yy 1

    $dscale(curvex) set $xx
    $dscale(curvey) set $yy
    $dscale(hist) element configure curve -hide no
    $dscale(hist) y2axis configure -hide no

    ScaleGhsHandlesDialog [expr {$type == {ghs}}]
}

# Place the GHS handles on the curve, and the dashed guide lines for
# parameters given as data values. Handles for auto parameters sit at the
# limit they stand for.
proc ScaleGhsHandlesDialog {show} {
    global dscale
    global scale

    foreach mm {sp lp hp} {
	if {!$show} {
	    $dscale(hist) marker configure $dscale(ghs$mm) -hide yes
	    $dscale(hist) marker configure $dscale(ghs${mm}handle) -hide yes
	    continue
	}

	set xx [ScaleGhsResolve $mm]
	set yy [ScaleCurveAt $xx]
	# keep the tab inside the plot: half outside, BLT won't pick it
	if {$yy < .1} {
	    set anchor s
	} elseif {$yy > .9} {
	    set anchor n
	} else {
	    set anchor center
	}
	$dscale(hist) marker configure $dscale(ghs${mm}handle) \
	    -coords "$xx $yy" -anchor $anchor -hide no
	if {[string is double -strict $scale(ghs,$mm)]} {
	    $dscale(hist) marker configure $dscale(ghs$mm) \
		-coords "$xx 0 $xx 1" -hide no
	} else {
	    $dscale(hist) marker configure $dscale(ghs$mm) -hide yes
	}
    }
}

# GHS parameter as a data value: auto means the low (sp, lp) or high (hp)
# limit. Clamped to the limits, as the curve does.
proc ScaleGhsResolve {mm} {
    global dscale
    global scale

    set lo $dscale(min)
    set hi $dscale(max)
    set vv $scale(ghs,$mm)
    if {![string is double -strict $vv]} {
	return [expr {$mm == {hp} ? $hi : $lo}]
    }
    return [expr {min(max($vv,$lo),$hi)}]
}

# scaled value of the drawn curve at data value xx (linear interpolation)
proc ScaleCurveAt {xx} {
    global dscale

    set px [$dscale(curvex) range 0 end]
    set py [$dscale(curvey) range 0 end]
    set nn [llength $px]
    if {$nn == 0} {
	return 0
    }
    if {$xx <= [lindex $px 0]} {
	return [lindex $py 0]
    }
    for {set ii 1} {$ii < $nn} {incr ii} {
	set x1 [lindex $px $ii]
	if {$xx <= $x1} {
	    set x0 [lindex $px [expr {$ii-1}]]
	    set y0 [lindex $py [expr {$ii-1}]]
	    set y1 [lindex $py $ii]
	    if {$x1 == $x0} {
		return $y1
	    }
	    return [expr {$y0+($y1-$y0)*($xx-$x0)/($x1-$x0)}]
	}
    }
    return [lindex $py end]
}

# drag a GHS handle: clamp to the limits and keep LP <= SP <= HP, move the
# handle now, and apply once per idle so the image follows the drag
proc ScaleGhsMotionDialog {x y mm} {
    global dscale
    global scale

    set xx [lindex [$dscale(hist) invtransform $x $y] 0]
    set xx [expr {min(max($xx,$dscale(min)),$dscale(max))}]
    set lp [ScaleGhsResolve lp]
    set sp [ScaleGhsResolve sp]
    set hp [ScaleGhsResolve hp]
    switch -- $mm {
	lp {set xx [expr {min($xx,$sp)}]}
	sp {set xx [expr {min(max($xx,$lp),$hp)}]}
	hp {set xx [expr {max($xx,$sp)}]}
    }
    set scale(ghs,$mm) [format %.6g $xx]

    ScaleGhsHandlesDialog 1
    if {![info exists dscale(ghspending)]} {
	set dscale(ghspending) [after idle ScaleGhsDragApplyDialog]
    }
}

proc ScaleGhsDragApplyDialog {} {
    global dscale

    unset -nocomplain dscale(ghspending)
    ChangeScale
}

proc ScaleGhsReleaseDialog {} {
    global dscale

    if {[info exists dscale(ghspending)]} {
	after cancel $dscale(ghspending)
	unset dscale(ghspending)
    }
    ChangeScale
}

proc ScaleYAxisDialog {} {
    global scale
    global dscale

    switch -- $scale(yaxis) {
	linear {$dscale(hist) yaxis configure -logscale 0 -min 0}
	log {$dscale(hist) yaxis configure -logscale 1 -min 1}
    }
}

# 1 if every arg is a finite number. 'get minmax' and 'get clip' give
# "nan" for an image with no finite pixels, which expr can't use.
proc ScaleFinite {args} {
    foreach vv $args {
	if {![string is double -strict $vv] || ![expr {isfinite($vv)}]} {
	    return 0
	}
    }
    return 1
}

proc ScaleXAxisDialog {} {
    global scale
    global dscale

    # no histogram to fit the axis to
    if {![info exists dscale(minmin)] || ![info exists dscale(minmax)] ||
	![ScaleFinite $dscale(minmin) $dscale(minmax) \
	      $dscale(min) $dscale(max)]} {
	return
    }

    switch -- $scale(xaxis) { 
	full {
	    set diff \
		[expr {double($dscale(minmax)-$dscale(minmin))/[$dscale(xdata) length]}]

	    if {[expr abs($diff)] > 0} {
		set a [expr $dscale(minmin)-$diff]
		set b [expr $dscale(minmax)+$diff]
		$dscale(hist) xaxis configure -min $a -max $b
	    }
	}
	current {
	    set diff [expr $dscale(max)-$dscale(min)]

	    if {[expr abs($diff)] > 0} {
		set per .10
		set a [expr $dscale(min)-($diff*$per)]
		set b [expr $dscale(max)+($diff*$per)]
		$dscale(hist) xaxis configure -min $a -max $b
	    }
	}
    }
}

proc ScaleLogDialog {} {
    if {[EntryDialogGlobal [msgcat::mc {Scale}] [msgcat::mc {Log Exponent}] 10 scale log]} {
	ChangeScale
    }
}

# GHS (Generalized Hyperbolic Stretch) parameters, in the order the frame
# command 'colorscale ghs' takes them
proc ScaleGhsList {} {
    global scale

    return [list $scale(ghs,stretch) $scale(ghs,intensity) \
		$scale(ghs,sp) $scale(ghs,lp) $scale(ghs,hp)]
}

# set scale(ghs,*) from 'get colorscale ghs'
proc ScaleGhsSet {ll} {
    global scale

    foreach kk {stretch intensity sp lp hp} vv $ll {
	set scale(ghs,$kk) $vv
    }
}

# a data value or auto
proc ScaleGhsValue {vv} {
    set vv [string trim $vv]
    if {$vv == {} || [string equal -nocase $vv auto]} {
	return auto
    }
    if {[string is double -strict $vv]} {
	return $vv
    }
    return {}
}

# GHS Parameters dialog. Not modal, so the image, the Scale dialog graph
# and the limits stay usable while tuning. Moving the sliders updates the
# display at once; the data-value entries apply with Apply or Return.
# Applying switches the scale to GHS, since that's what the dialog is for;
# Reset restores the parameters and scale type from when it was opened.
proc ScaleGhsDialog {} {
    global scale
    global dghs

    set w {.ghs}

    if {[winfo exists $w]} {
	raise $w
	return
    }

    foreach kk {stretch intensity sp lp hp} {
	set dghs($kk) $scale(ghs,$kk)
	set dghs(orig,$kk) $scale(ghs,$kk)
    }
    set dghs(orig,type) $scale(type)

    Toplevel $w {} 6 "GHS [msgcat::mc {Parameters}]" ScaleGhsDestroyDialog

    # Param
    set f [ttk::frame $w.param]
    # float limits, so SliderCmd doesn't round to integers
    slider $f.sstretch 0. 20. [msgcat::mc {Stretch Factor}] \
	dghs(stretch) ScaleGhsLiveDialog
    slider $f.sintensity -5. 15. [msgcat::mc {Local Intensity}] \
	dghs(intensity) ScaleGhsLiveDialog
    grid $f.sstretch - -padx 2 -pady 2 -sticky ew
    grid $f.sintensity - -padx 2 -pady 2 -sticky ew

    ttk::label $f.tsp -text [msgcat::mc {Symmetry Point}]
    ttk::entry $f.sp -textvariable dghs(sp) -width 14
    ttk::label $f.tlp -text [msgcat::mc {Protect Shadows}]
    ttk::entry $f.lp -textvariable dghs(lp) -width 14
    ttk::label $f.thp -text [msgcat::mc {Protect Highlights}]
    ttk::entry $f.hp -textvariable dghs(hp) -width 14
    ttk::label $f.note \
	-text [msgcat::mc {Data values, or auto for the scale limits}]
    grid $f.tsp $f.sp -padx 2 -pady 2 -sticky w
    grid $f.tlp $f.lp -padx 2 -pady 2 -sticky w
    grid $f.thp $f.hp -padx 2 -pady 2 -sticky w
    grid $f.note - -padx 2 -pady 2 -sticky w
    grid columnconfigure $f 1 -weight 1

    foreach ee {sp lp hp} {
	bind $f.$ee <Return> ScaleGhsApplyDialog
    }

    # Buttons
    set f [ttk::frame $w.buttons]
    ttk::button $f.apply -text [msgcat::mc {Apply}] \
	-command ScaleGhsApplyDialog -default active
    ttk::button $f.reset -text [msgcat::mc {Reset}] \
	-command ScaleGhsResetDialog
    ttk::button $f.close -text [msgcat::mc {Close}] \
	-command ScaleGhsDestroyDialog
    pack $f.apply $f.reset $f.close -side left -expand true -padx 2 -pady 4

    # Fini
    ttk::separator $w.sep -orient horizontal
    pack $w.buttons $w.sep -side bottom -fill x
    pack $w.param -side top -fill both -expand true
}

proc ScaleGhsDestroyDialog {} {
    global dghs

    if {[winfo exists .ghs]} {
	destroy .ghs
    }
    if {[info exists dghs(pending)]} {
	after cancel $dghs(pending)
    }
    unset -nocomplain dghs
}

# validate dghs and apply it; returns 1 if applied
proc ScaleGhsApplyDialog {{quiet 0}} {
    global scale
    global dghs

    foreach kk {stretch intensity} {
	if {![string is double -strict $dghs($kk)]} {
	    if {!$quiet} {
		Error "GHS [msgcat::mc {Parameters}]: [msgcat::mc {invalid value}] $dghs($kk)"
	    }
	    return 0
	}
    }
    foreach kk {sp lp hp} {
	set vv [ScaleGhsValue $dghs($kk)]
	if {$vv == {}} {
	    if {!$quiet} {
		Error "GHS [msgcat::mc {Parameters}]: [msgcat::mc {invalid value}] $dghs($kk)"
	    }
	    return 0
	}
	set val($kk) $vv
    }

    foreach kk {stretch intensity} {
	set scale(ghs,$kk) $dghs($kk)
    }
    foreach kk {sp lp hp} {
	set scale(ghs,$kk) $val($kk)
	set dghs($kk) $val($kk)
    }
    set scale(type) ghs
    ChangeScale
    return 1
}

# slider moved: apply once per idle, so a drag doesn't queue a redraw per
# motion event
proc ScaleGhsLiveDialog {} {
    global dghs

    # sliders give long fractions; 0.01 is plenty
    foreach kk {stretch intensity} {
	if {[string is double -strict $dghs($kk)]} {
	    set dghs($kk) [expr {round($dghs($kk)*100)/100.}]
	}
    }

    if {![info exists dghs(pending)]} {
	set dghs(pending) [after idle ScaleGhsLiveDoDialog]
    }
}

proc ScaleGhsLiveDoDialog {} {
    global dghs

    unset -nocomplain dghs(pending)
    if {[winfo exists .ghs]} {
	ScaleGhsApplyDialog 1
    }
}

proc ScaleGhsResetDialog {} {
    global scale
    global dghs

    foreach kk {stretch intensity sp lp hp} {
	set dghs($kk) $dghs(orig,$kk)
	set scale(ghs,$kk) $dghs(orig,$kk)
    }
    set scale(type) $dghs(orig,type)
    ChangeScale
}

# keep the dialog in step with the current frame (called from
# UpdateScaleMenu)
proc UpdateScaleGhsDialog {} {
    global scale
    global dghs

    if {![winfo exists .ghs]} {
	return
    }
    foreach kk {stretch intensity sp lp hp} {
	set dghs($kk) $scale(ghs,$kk)
    }
}

proc MinMaxDialog {} {
    global minmax
    global ed

    set w {.sample}

    set ed(ok) 0
    set ed(sample) $minmax(sample)

    DialogCreate $w [msgcat::mc {Sample Parameters}] ed(ok)

    # Param
    set f [ttk::frame $w.param]
    slider $f.ssample 0 100 [msgcat::mc {Sample Increment}] ed(sample) {}
    grid $f.ssample -padx 2 -pady 2 -sticky ew
    grid columnconfigure $f 0 -weight 1

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

    DialogWait $w ed(ok)
    destroy $w

    if {$ed(ok)} {
	if {$ed(sample) == 0} {
	    set ed(sample) 1
	}
	set minmax(sample) $ed(sample)
	ChangeMinMax
    }

    unset ed
}

proc ZScaleDialog {} {
    global zscale
    global ed

    set w {.zscale}

    set ed(ok) 0
    array set ed [array get zscale]

    DialogCreate $w "ZScale [msgcat::mc {Parameters}]" ed(ok)

    # Param
    set f [ttk::frame $w.param]
    slider $f.scontrast 0. 1. [msgcat::mc {Contrast}] ed(contrast) {}
    slider $f.ssize 0 1000 [msgcat::mc {Number of Samples}] ed(sample) {}
    slider $f.sline 0 500 [msgcat::mc {Samples per Line}] ed(line) {}

    grid $f.scontrast -padx 2 -pady 2 -sticky ew
    grid $f.ssize -padx 2 -pady 2 -sticky ew
    grid $f.sline -padx 2 -pady 2 -sticky ew
    grid columnconfigure $f 0 -weight 1

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

    DialogWait $w ed(ok)
    destroy $w

    if {$ed(ok)} {
	if {$ed(line) == 0} {
	    set ed(line) 1
	}
	array set zscale [array get ed]
	ChangeZScale
    }

    unset ed
}

proc MatchScaleCurrent {} {
    global current

    if {$current(frame) != {}} {
	MatchScale $current(frame)
    }
}

proc MatchScaleLimitsCurrent {} {
    global current

    if {$current(frame) != {}} {
	MatchScaleLimits $current(frame)
    }
}

proc MatchScale {which} {
    global ds9
    global rgb
    global scale

    set type [$which get colorscale]
    set log  [$which get colorscale log]
    set ghs  [$which get colorscale ghs]
    set limits [$which get clip]
    set mode [$which get clip mode]
    set scope [$which get clip scope]
    set mmsample [$which get clip minmax sample]
    set mmmode [$which get clip minmax mode]
    set zscontrast [$which get clip zscale contrast]
    set zssample [$which get clip zscale sample]
    set zsline [$which get clip zscale line]

    foreach ff $ds9(frames) {
	if {$ff != $which} {
	    EvalLock lock,scale $ff [list $ff colorscale $type]
	    EvalLock lock,scale $ff [list $ff colorscale log $log]
	    EvalLock lock,scale $ff [list $ff colorscale ghs {*}$ghs]
	    EvalLock lock,scale $ff [list $ff clip user $limits]
	    EvalLock lock,scale $ff [list $ff clip mode $mode]
	    EvalLock lock,scale $ff [list $ff clip scope $scope]
	    EvalLock lock,scale $ff \
		[list $ff clip minmax $mmsample $mmmode]
	    EvalLock lock,scale $ff \
		[list $ff clip zscale $zscontrast $zssample $zsline]

	    UpdateColormapLevelFrame $ff
	}
    }
}

proc MatchScaleLimits {which} {
    global ds9
    global rgb
    global scale

    set mode user
    set limits [$which get clip]
    set type [$which get colorscale]
    set log  [$which get colorscale log]
    set ghs  [$which get colorscale ghs]
    set scope [$which get clip scope]
    set mmmode [$which get clip minmax mode]
    set mmsample [$which get clip minmax sample]
    set zscontrast [$which get clip zscale contrast]
    set zssample [$which get clip zscale sample]
    set zsline [$which get clip zscale line]

    # do all frames as we are changing mode to user
    foreach ff $ds9(frames) {
	EvalLock lock,scalelimits $ff [list $ff clip mode $mode]
	EvalLock lock,scalelimits $ff [list $ff clip user $limits]
	EvalLock lock,scalelimits $ff [list $ff colorscale $type]
	EvalLock lock,scalelimits $ff [list $ff colorscale log $log]
	EvalLock lock,scalelimits $ff [list $ff colorscale ghs {*}$ghs]
	EvalLock lock,scalelimits $ff [list $ff clip scope $scope]
	EvalLock lock,scalelimits $ff \
	    [list $ff clip minmax $mmsample $mmmode]
	EvalLock lock,scalelimits $ff \
	    [list $ff clip zscale $zscontrast $zssample $zsline]

	UpdateColormapLevelFrame $ff
    }
}

proc LockScaleCurrent {} {
    global current
    
    if {$current(frame) != {}} {
	LockScale $current(frame)
    }
}

proc LockScaleLimitsCurrent {} {
    global current
    
    if {$current(frame) != {}} {
	LockScaleLimits $current(frame)
    }
}

proc LockScale {which} {
    global scale

    if {$scale(lock)} {
	MatchScale $which
    }
}

proc LockScaleLimits {which} {
    global scale

    if {$scale(lock,limits)} {
	MatchScaleLimits $which
    }
}

proc ScaleBackup {ch which} {
    switch -- [$which get type] {
	base -
	3d {ScaleBackupBase $ch $which}
	multicolor {ScaleBackupMultiColor $ch $which}
	rgb {ScaleBackupRGB $ch $which}
	hsv {ScaleBackupHSV $ch $which}
	hls {ScaleBackupHLS $ch $which}
    }
}

proc ScaleBackupBase {ch which} {
    puts $ch "$which colorscale [$which get colorscale]"
    puts $ch "$which colorscale log [$which get colorscale log]"
    puts $ch "$which colorscale ghs [$which get colorscale ghs]"
    puts $ch "$which datasec [$which get datasec]"
    puts $ch "$which clip user [$which get clip]"
    puts $ch "$which clip mode [$which get clip mode]"
    puts $ch "$which clip scope [$which get clip scope]"
    puts $ch "$which clip minmax mode [$which get clip minmax mode]"
    puts $ch "$which clip minmax sample [$which get clip minmax sample]"
    puts $ch "$which clip zscale contrast [$which get clip zscale contrast]"
    puts $ch "$which clip zscale sample [$which get clip zscale sample]"
    puts $ch "$which clip zscale line [$which get clip zscale line]"
}

proc ScaleBackupRGB {ch which} {
    set sav [$which get rgb channel]
    foreach cc {red green blue} {
	$which rgb channel $cc
	puts $ch "$which rgb channel $cc"
	ScaleBackupBase $ch $which
    }
    $which rgb channel $sav
    puts $ch "$which rgb channel $sav"
}

proc ScaleBackupHSV {ch which} {
    set sav [$which get hsv channel]
    foreach cc {hue saturation value} {
	$which hsv channel $cc
	puts $ch "$which hsv channel $cc"
	ScaleBackupBase $ch $which
    }
    $which hsv channel $sav
    puts $ch "$which hsv channel $sav"
}

proc ScaleBackupHLS {ch which} {
    set sav [$which get hls channel]
    foreach cc {hue lightness saturation} {
	$which hls channel $cc
	puts $ch "$which hls channel $cc"
	ScaleBackupBase $ch $which
    }
    $which hls channel $sav
    puts $ch "$which hls channel $sav"
}

proc ScaleBackupMultiColor {ch which} {
    set sav [$which get layer layerno]
    set count [$which get layer count]
    for {set ii 1} {$ii <= $count} {incr ii} {
	$which layer layerno $ii
	puts $ch "$which layer layerno $ii"
	ScaleBackupBase $ch $which
    }
    $which layer layerno $sav
    puts $ch "$which layer layerno $sav"
}

# Process Cmds

proc ProcessScaleCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    scale::YY_FLUSH_BUFFER
    scale::yy_scan_string [lrange $var $i end]
    scale::yyparse
    incr i [expr $scale::yycnt-1]
}

proc ProcessSendScaleCmd {proc id param {sock {}} {fn {}}} {
    global parse
    set parse(proc) $proc
    set parse(id) $id

    scalesend::YY_FLUSH_BUFFER
    scalesend::yy_scan_string $param
    scalesend::yyparse
}

proc ProcessMinMaxCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    minmax::YY_FLUSH_BUFFER
    minmax::yy_scan_string [lrange $var $i end]
    minmax::yyparse
    incr i [expr $minmax::yycnt-1]
}

proc ProcessSendMinMaxCmd {proc id param {sock {}} {fn {}}} {
    global parse
    set parse(proc) $proc
    set parse(id) $id

    minmaxsend::YY_FLUSH_BUFFER
    minmaxsend::yy_scan_string $param
    minmaxsend::yyparse
}

proc ProcessZScaleCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    zscale::YY_FLUSH_BUFFER
    zscale::yy_scan_string [lrange $var $i end]
    zscale::yyparse
    incr i [expr $zscale::yycnt-1]
}

proc ProcessSendZScaleCmd {proc id param {sock {}} {fn {}}} {
    global parse
    set parse(proc) $proc
    set parse(id) $id

    zscalesend::YY_FLUSH_BUFFER
    zscalesend::yy_scan_string $param
    zscalesend::yyparse
}
