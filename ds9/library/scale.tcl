#  Copyright (C) 1999-2018
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
    set scale(mode) minmax
    set scale(scope) local
    set scale(datasec) 1

    set pscale(type) $scale(type)
    set pscale(log) $scale(log)
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
	RGBEvalLockCurrent rgb(lock,scale) [list $current(frame) datasec $scale(datasec)]
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

	RGBEvalLockCurrent rgb(lock,scale) [list $current(frame) colorscale log $scale(log)]
	RGBEvalLockCurrent rgb(lock,scale) [list $current(frame) colorscale $scale(type)]
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

	RGBEvalLockCurrent rgb(lock,scale) [list $current(frame) clip mode $scale(mode)]
	UpdateScale
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
	RGBEvalLockCurrent rgb(lock,scale) [list $current(frame) clip user $scale(min) $scale(max)]
	RGBEvalLockCurrent rgb(lock,scale) [list $current(frame) clip mode $scale(mode)]
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

	RGBEvalLockCurrent rgb(lock,scale) [list $current(frame) clip scope $scale(scope)]
	UpdateScale
    }
}

proc ChangeMinMax {} {
    global current
    global minmax
    global rgb

    if {$current(frame) != {}} {
	RGBEvalLockCurrent rgb(lock,scale) \
	    [list $current(frame) clip minmax $minmax(sample) $minmax(mode)]
	UpdateScale
    }
}

proc RescanMinMax {} {
    global current
    global minmax
    global rgb

    if {$current(frame) != {}} {
	RGBEvalLockCurrent rgb(lock,scale) [list $current(frame) clip minmax rescan]
	UpdateScale
    }
}

proc ChangeZScale {} {
    global current
    global zscale
    global rgb

    if {$current(frame) != {}} {
	RGBEvalLockCurrent rgb(lock,scale) [list $current(frame) clip zscale $zscale(contrast) $zscale(sample) $zscale(line)]
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
    UpdateGraphAxis $current(frame)
    UpdateInfoBoxFrame $current(frame)
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
    $mb.scale add separator
    $mb.scale add command -label "[msgcat::mc {Log Exponent}]..." \
	-command ScaleLogDialog

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
    $mb.minmax add command -label "[msgcat::mc {Sample Parameters}]..." \
	-command MinMaxDialog

    ThemeMenu $mb.param 
    $mb.param add checkbutton -label "[msgcat::mc {Use}] DATASEC" \
	-variable scale(datasec) -command ChangeDATASEC
    $mb.param add separator
    $mb.param add command -label {ZScale...} -command ZScaleDialog

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

    set dscale(xdata) histX
    set dscale(ydata) histY
    blt::vector create $dscale(xdata) $dscale(ydata)
    $dscale(hist) element create bar1 \
	-smooth step  \
	-xdata $dscale(xdata) \
	-ydata $dscale(ydata) \
	-areabackground [ThemeTreeForeground] \
	-color [ThemeTreeForeground]

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
	RGBEvalLockCurrent rgb(lock,scale) [list $current(frame) clip user $scale(min) $scale(max)]
	RGBEvalLockCurrent rgb(lock,scale) [list $current(frame) clip mode $scale(mode)]
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
	RGBEvalLockCurrent rgb(lock,scale) [list $current(frame) clip user $scale(min) $scale(max)]
	RGBEvalLockCurrent rgb(lock,scale) [list $current(frame) clip mode $scale(mode)]

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

	# "nan" will not pass
	if {[$current(frame) has fits] && ![$current(frame) has iis] &&
	    ($dscale(min)<$dscale(max))} {

	    set limits [$current(frame) get minmax]

	    set dscale(minmin) [lindex $limits 0]
	    set dscale(minmax) [lindex $limits 1]

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

	    return
	}
    }

    $dscale(hist) element configure bar1 -hide yes
    $dscale(hist) xaxis configure -hide yes
    $dscale(hist) yaxis configure -hide yes

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
}

proc ScaleYAxisDialog {} {
    global scale
    global dscale

    switch -- $scale(yaxis) {
	linear {$dscale(hist) yaxis configure -logscale 0 -min 0}
	log {$dscale(hist) yaxis configure -logscale 1 -min 1}
    }
}

proc ScaleXAxisDialog {} {
    global scale
    global dscale

    switch -- $scale(xaxis) { 
	full {
	    set width [expr abs(1.0*($dscale(minmax)-$dscale(minmin))/ \
				    [$dscale(xdata) length])]

	    $dscale(hist) xaxis configure \
		-min [expr $dscale(minmin)-$width] \
		-max [expr $dscale(minmax)+$width]
	}
	current {
	    set width [expr abs(1.0*($dscale(max)-$dscale(min))/ \
				    [$dscale(xdata) length])]

	    if {[expr abs($dscale(max)-$dscale(min)) > 0]} {
		set diff [expr $dscale(max)-$dscale(min)]
		set per .10
		set a [expr $dscale(min)-($diff*$per)]
		set b [expr $dscale(max)+($diff*$per)]
		$dscale(hist) xaxis configure -min $a -max $b
	    }
	}
    }
}

proc ScaleLogDialog {} {
    global scale

    if {[EntryDialog [msgcat::mc {Scale}] [msgcat::mc {Log Exponent}] 10 scale(log)]} {
	ChangeScale
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
	    RGBEvalLock rgb(lock,scale) $ff [list $ff colorscale $type]
	    RGBEvalLock rgb(lock,scale) $ff [list $ff colorscale log $log]
	    RGBEvalLock rgb(lock,scale) $ff [list $ff clip user $limits]
	    RGBEvalLock rgb(lock,scale) $ff [list $ff clip mode $mode]
	    RGBEvalLock rgb(lock,scale) $ff [list $ff clip scope $scope]
	    RGBEvalLock rgb(lock,scale) $ff \
		[list $ff clip minmax $mmsample $mmmode]
	    RGBEvalLock rgb(lock,scale) $ff \
		[list $ff clip zscale $zscontrast $zssample $zsline]
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
    set scope [$which get clip scope]
    set mmmode [$which get clip minmax mode]
    set mmsample [$which get clip minmax sample]
    set zscontrast [$which get clip zscale contrast]
    set zssample [$which get clip zscale sample]
    set zsline [$which get clip zscale line]

    # do all frames as we are changing mode to user
    foreach ff $ds9(frames) {
	RGBEvalLock rgb(lock,scalelimits) $ff [list $ff clip mode $mode]
	RGBEvalLock rgb(lock,scalelimits) $ff [list $ff clip user $limits]
	RGBEvalLock rgb(lock,scalelimits) $ff [list $ff colorscale $type]
	RGBEvalLock rgb(lock,scalelimits) $ff [list $ff colorscale log $log]
	RGBEvalLock rgb(lock,scalelimits) $ff [list $ff clip scope $scope]
	RGBEvalLock rgb(lock,scalelimits) $ff \
	    [list $ff clip minmax $mmsample $mmmode]
	RGBEvalLock rgb(lock,scalelimits) $ff \
	    [list $ff clip zscale $zscontrast $zssample $zsline]
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
	rgb {ScaleBackupRGB $ch $which}
    }
}

proc ScaleBackupBase {ch which} {
    puts $ch "$which colorscale [$which get colorscale]"
    puts $ch "$which colorscale log [$which get colorscale log]"
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
