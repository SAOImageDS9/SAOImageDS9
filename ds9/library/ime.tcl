#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc IMEDef {} {
    global iime
    global ime
    global pime
    
    set ime(task) stats
    set ime(shape) circle

    array set pime [array get ime]
}

proc IMEChangeTask {} {
    global current

    if {$current(frame) == {}} {
	return
    }

    if {$current(mode) != {analysis}} {
	return
    }

    UpdateTaskMenu
    IMEChangeShape
}

proc IMEChangeShape {} {
    global ime
    global ds9
    global current

    switch $ime(task) {
	stats -
	hist {
	    switch $ime(shape) {
		circle -
		ellipse -
		box -
		polygon {}
		default {set ime(shape) circle}
	    }
	}
	radial {
	    switch $ime(shape) {
		annulus -
		ellipseannulus -
		boxannulus {}
		default {set ime(shape) annulus}
	    }
	}
	plot2d {}
	plot3d {
	    switch $ime(shape) {
		circle -
		ellipse -
		box -
		polygon -
		point {}
		default {set ime(shape) point}
	    }
	}
    }

    foreach ff $ds9(frames) {
	$ff marker analysis unselect all
	set coord [$ff get crosshair canvas]
	set XX [lindex $coord 0]
	set YY [lindex $coord 1]

	$ff analysis shape $ime(shape) $XX $YY

	if {$current(frame) == $ff} {
	    IMEDoTask $current(frame)
	}
    }
}

proc IMEDoTask {which} {
    global ime

    if {![$which has fits]} {
	return
    }

    switch $ime(task) {
	stats {IMEStatsTask $which}
	hist {IMEHistTask $which}
	radial {IMERadialTask $which}
	plot2d {IMEPlot2DTask $which}
	plot3d {IMEPlot3DTask $which}
    }
}

proc IMEKey {which K xx yy} {
    global ime

    # always available
    switch $K {
	question {
	    IMEHelp
	    return
	}
    }

    if {![$which has fits]} {
	return
    }

    switch $K {
	a {
	    # FWHM (Aperture Sum)
	}
	b {
	    # Box Coords?
	}
	c {
	    # Column Cut
	}
	d {
	    # remap (Load Display)
	    set ime(task) plot3d
	    IMEKeyTask $which $xx $yy
	}
	e {
	    # remap (Contour)
	}
	f {
	    # remap (Redraw)
	}
	g {
	    # remap (Graphics Cursor)
	}
	h {
	    set ime(task) hist
	    IMEKeyTask $which $xx $yy
	}
	i {
	    # remap (Image Cursor)
	}
	j {
	    # Line Guassian Fit
	}
	k {
	    # Col Gaussian Fit
	}
	l {
	    # Line Cut
	}
	m {
	    set ime(task) stats
	    IMEKeyTask $which $xx $yy
	}
	n {
	    # remap (Next Frame)
	}
	o {
	    # remap (Overplot)
	}
	p {
	    # remap (Prev Frame)
	}
	q {
	    # remap (Quit)
	}
	r {
	    set ime(task) radial
	    IMEKeyTask $which $xx $yy
	}
	s {
	    # Surface Plot
	}
	t {
	    # remap (Output Image)
	}
	u {
	    # Vector Plot
	}
	v {
	    set ime(task) plot2d
	    IMEKeyTask $which $xx $yy
	}
	w {
	    # remap (Toggle Logfile)
	}
	x {
	    # Print coords/values
	}
	y {
	    # remap (Set Origin)
	}
	z {
	    # Print value grid
	}
	, {
	    # Quick Profile Photometry
	}
	. {
	    # Quick Radial Profile Plot and Fit
	}
    }
}

proc IMEKeyTask {which xx yy} {
    global ime

    $which crosshair canvas $xx $yy

    $which analysis shape $ime(shape) $xx $yy
    IMEDoTask $which

    UpdateColormapLevelMosaic $which $xx $yy canvas
    UpdateInfoBox $which $xx $yy canvas
    UpdatePixelTableDialog $which $xx $yy canvas
    UpdateGraphLayout $which
    UpdateGraphAxis $which
    UpdateGraphData $which $xx $yy canvas
}

proc IMEButton {which xx yy} {
    global ime
    global imarker

    global debug
    if {$debug(tcl,ime)} {
	puts stderr "IMEButton $which $xx $yy"
    }

    # see if we are on a handle
    set hh [$which get marker analysis handle $xx $yy]
    set id [lindex $hh 0]
    set imarker(handle) [lindex $hh 1]

    if {$imarker(handle)} {
	$which marker analysis $id edit begin $imarker(handle)
	set imarker(motion) beginEdit
	return
    }

    # else, see if we are on a segment of a polygon
    set hh [$which get marker analysis polygon segment $xx $yy]
    set id [lindex $hh 0]
    set segment [lindex $hh 1]
    if {$segment} {
	$which marker analysis $id create polygon vertex $segment $xx $yy
	$which marker analysis $id edit begin $imarker(handle)
	set imarker(handle) [expr 4+$segment+1]
	set imarker(motion) beginEdit
	return
    }

    # see if any markers are selected
    if {[$which get marker analysis select number]>0} {
	# else, see if we are on a marker
	if {[$which get marker analysis id $xx $yy]} {
	    $which marker analysis $id move begin
	    set imarker(motion) beginMove
	    return
	} else {
	    $which marker analysis unselect all
	    set imarker(motion) none
	    return
	}
    }

    $which marker analysis $id move begin
    set imarker(motion) beginMove
    
    $which crosshair canvas $xx $yy
    $which analysis shape $ime(shape) $xx $yy
    IMEDoTask $which
}

proc IMEShift {which xx yy} {
    global ime
    global imarker

    global debug
    if {$debug(tcl,ime)} {
	puts stderr "IMEShift $which $xx $yy"
    }

    # see if we are on a handle
    set hh [$which get marker analysis handle $xx $yy]
    set id [lindex $hh 0]
    set imarker(handle) [lindex $hh 1]

    if {$imarker(handle)} {
	$which marker analysis $id rotate begin
	set imarker(motion) beginRotate
    }
}

proc IMEDouble {which xx yy} {
    global ime
    global imarker

    global debug
    if {$debug(tcl,ime)} {
	puts stderr "IMEDouble $which $xx $yy"
    }

    if {[$which get marker analysis id $xx $yy]} {
	$which marker analysis select only $xx $yy
    }
}

proc IMEMotion {which xx yy} {
    global ime
    global imarker

    global debug
    if {$debug(tcl,ime)} {
	puts stderr "IMEMotion $which $xx $yy"
    }

    switch -- $imarker(motion) {
	none {}
	beginMove -
	move {
	    $which marker analysis move motion $x $y
	    set imarker(motion) move
	    $which crosshair canvas $xx $yy
	    $which analysis shape $ime(shape) $xx $yy
	    IMEDoTask $which
	}
	beginEdit -
	edit {
	    set imarker(motion) edit
	    $which marker analysis edit motion $xx $yy $imarker(handle)
	    IMEDoTask $which
	}
	beginRotate -
	rotate {
	    set imarker(motion) rotate
	    $which marker analysis rotate motion $xx $yy $imarker(handle)
	    IMEDoTask $which
	}
	region -
	shiftregion {}
    }
}

proc IMERelease {which xx yy} {
    global ime
    global imarker

    global debug
    if {$debug(tcl,ime)} {
	puts stderr "IMERelease $which $xx $yy"
    }

    switch -- $imarker(motion) {
	none {}
	beginMove -
	beginRotate {}
	beginEdit {}
	move {
	    $which marker analysis move end
	    IMEDoTask $which
	}
	edit {
	    $which marker analysis edit end
	    IMEDoTask $which
	}
	rotate {
	    $which marker analysis rotate end
	    IMEDoTask $which
	}
	region -
	shiftregion {}
    }

    set imarker(motion) none
    set imarker(handle) -1
}

proc IMEArrowKey {which xx yy} {
    global ime
    global ds9

    global debug
    if {$debug(tcl,ime)} {
	puts stderr "IMEArrow $which $xx $yy"
    }

    $which crosshair warp $xx $yy

    set coord [$which get crosshair canvas]
    set XX [lindex $coord 0]
    set YY [lindex $coord 1]

    $which analysis shape $ime(shape) $XX $YY
    IMEDoTask $which

    UpdateColormapLevelMosaic $which $XX $YY canvas
    UpdateInfoBox $which $XX $YY canvas
    UpdatePixelTableDialog $which $XX $YY canvas
    UpdateGraphData $which $XX $YY canvas
}

proc IMEHelp {} {
    global ime

    set rr "\tAnalysis Help\n\n?\tPrint Help\nd\tPlot 3D\nm\tStatistics\nv\tPlot 2D\n"

    SimpleTextDialog imehlp "Analysis Help" 80 20 insert top $rr
}

proc IMEStatsTask {which} {
    global ime

    set rr [$which get marker analysis hide analysis stats physical fk5]

    SimpleTextDialog "imestat" "Statistics" 80 20 insert top $rr
}

proc IMEHistTask {which} {
    global iime
    global ime

    set id 0
 
    set varname imehist
    global $varname
    upvar #0 $varname var

    set vvarname analysishist
    upvar #0 $vvarname vvar
    global $vvarname

    set xdata ${vvarname}x
    set ydata ${vvarname}y
    global $xdata $ydata

    set ping [PlotPing $vvarname]

    if {!$ping} {
	PlotLineDialog $vvarname Histogram {} Values Counts

	set vvar(manage) 0
	set vvar(dim) xy
	set vvar(xdata) $xdata
	set vvar(ydata) $ydata
	blt::vector create $xdata $ydata
    }

    $which get marker analysis hide analysis histogram $xdata $ydata 512

    if {!$ping} {
	PlotExternal $vvarname
	set vvar(smooth) step
	set vvar(fill) 1
	$vvar(proc,updateelement) $vvarname
	$vvar(proc,updategraph) $vvarname
    }

    PlotStats $vvarname
    PlotList $vvarname
}

proc IMERadialTask {which} {
    global iime
    global ime

    set varname imerad
    global $varname
    upvar #0 $varname var

    set vvarname analysisrad
    upvar #0 $vvarname vvar
    global $vvarname

    set vvar(system) physical

    set xdata ${vvarname}x
    set ydata ${vvarname}y
    set yedata ${vvarname}ye
    global $xdata $ydata $yedata

    set ping [PlotPing $vvarname]

    if {!$ping} {
	PlotLineDialog $vvarname "Radial Profile" {} physical {}
	MarkerAnalysisRadialAxisTitle $vvarname

	set vvar(manage) 0
	set vvar(dim) xyey
	set vvar(xdata) $xdata
	set vvar(ydata) $ydata
	set vvar(yedata) $yedata
	blt::vector create $xdata $ydata $yedata
    }

    $which get marker analysis hide analysis radial $xdata $ydata $yedata physical

    if {!$ping} {
	PlotExternal $vvarname
	$vvar(proc,updateelement) $vvarname
	$vvar(proc,updategraph) $vvarname
    }

    PlotStats $vvarname
    PlotList $vvarname
}

proc IMEPlot2DTask {which} {
    global iime
    global ime

    set varname imeplot2d
    global $varname
    upvar #0 $varname var

    set vvarname analysisplot2d
    upvar #0 $vvarname vvar
    global $vvarname

    set vvar(system) physical
    set vvar(sky) fk5
    set vvar(method) average

    set xdata ${vvarname}x
    set ydata ${vvarname}y
    set xcdata ${vvarname}xc
    set ycdata ${vvarname}yc
    global $xdata $ydata $xcdata $ycdata

    set ping [PlotPing $vvarname]

    if {!$ping} {
	PlotLineDialog $vvarname Plot2D {} physical Counts
	MarkerAnalysisPlot2dXAxisTitle $vvarname
	MarkerAnalysisPlot2dYAxisTitle $vvarname

	# setup our own formatting
	set vvar(graph,format) 0
	set vvar(xcdata) $xcdata
	set vvar(ycdata) $ycdata
	$vvar(graph) xaxis configure \
	    -command "MarkerAnalysisPlot2dXAxis $vvarname"

	set vvar(manage) 0
	set vvar(dim) xy
	set vvar(xdata) $xdata
	set vvar(ydata) $ydata
	blt::vector create $xdata $ydata $xcdata $ycdata
    }

    $which get marker analysis hide analysis plot2d $xdata $ydata $xcdata $ycdata physical fk5 average

    if {!$ping} {
	PlotExternal $vvarname
	$vvar(proc,updateelement) $vvarname
	$vvar(proc,updategraph) $vvarname
    }

    PlotStats $vvarname
    PlotList $vvarname
}

proc IMEPlot3DTask {which} {
    global iime
    global ime

    set varname imeplot3d
    global $varname
    upvar #0 $varname var

    set vvarname analysisplot3d
    upvar #0 $vvarname vvar
    global $vvarname

    set vvar(system) image
    set vvar(method) average

    set xdata ${vvarname}x
    set ydata ${vvarname}y
    global $xdata $ydata

    set ping [PlotPing $vvarname]

    if {!$ping} {
	PlotLineDialog $vvarname Plot3D {} image Counts
	MarkerAnalysisPlot3dXAxisTitle $vvarname
	MarkerAnalysisPlot3dYAxisTitle $vvarname

	set vvar(manage) 0
	set vvar(dim) xy
	set vvar(xdata) $xdata
	set vvar(ydata) $ydata
	blt::vector create $xdata $ydata
    }

    $which get marker analysis hide analysis plot3d $xdata $ydata physical average

    if {!$ping} {
	PlotExternal $vvarname
	$vvar(proc,updateelement) $vvarname
	$vvar(proc,updategraph) $vvarname
    }

    PlotStats $vvarname
    PlotList $vvarname
}

