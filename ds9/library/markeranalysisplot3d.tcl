#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc MarkerAnalysisPlot3dDialog {varname} {
    upvar #0 $varname var
    global $varname

    global imarker

    set id $var(id)
    set frame $var(frame)

    set vvarname ${imarker(prefix,plot3d)}${id}${frame}
    upvar #0 $vvarname vvar
    global $vvarname

    set var(plot3d) [info exists ${vvarname}(top)]
    set var(method) average

    $var(mb).analysis add checkbutton -label [msgcat::mc {Plot 3D}] \
	-variable ${varname}(plot3d) \
	-command "MarkerAnalysisPlot3dCmd $varname"
    $var(mb).analysis add separator
    $var(mb).analysis add cascade \
	-label [msgcat::mc {Method}] \
	-menu $var(mb).analysis.method

    menu $var(mb).analysis.method
    $var(mb).analysis.method add radiobutton \
	-label [msgcat::mc {Average}] \
	-variable ${varname}(method) -value average \
	-command "MarkerAnalysisPlot3dMethod $varname"
    $var(mb).analysis.method add radiobutton \
	-label [msgcat::mc {Sum}] \
	-variable ${varname}(method) -value sum \
	-command "MarkerAnalysisPlot3dMethod $varname"
}

# support

proc MarkerAnalysisPlot3dCmd {varname} {
    upvar #0 $varname var
    global $varname

    MarkerAnalysisPlot3d $var(frame) $var(id) $var(plot3d)
}

proc MarkerAnalysisPlot3d {frame id plot} {
    global imarker

    $frame marker $id analysis plot3d $plot
    if {$plot} {
	MarkerAnalysisPlot3dCB $frame $id

	set vvarname ${imarker(prefix,plot3d)}${id}${frame}
	upvar #0 $vvarname vvar
	global $vvarname

	PlotRaise $vvarname
    } else {
	MarkerAnalysisPlot3dDeleteCB $frame $id
    }
}

proc MarkerAnalysisPlot3dMethod {varname} {
    upvar #0 $varname var
    global $varname

    global imarker

    set frame $var(frame)
    set id $var(id)

    set vvarname ${imarker(prefix,plot3d)}${id}${frame}
    upvar #0 $vvarname vvar
    global $vvarname

    if {[info exists var(plot3d)]} {
	if {$var(plot3d)} {
	    MarkerAnalysisPlot3dCB $frame $id
	    MarkerAnalysisPlot3dYAxisTitle $vvarname
	}
    }
}

proc MarkerAnalysisPlot3dSystem {varname} {
    upvar #0 $varname var
    global $varname

    global imarker

    set frame $var(frame)
    set id $var(id)

    set vvarname ${imarker(prefix,plot3d)}${id}${frame}
    upvar #0 $vvarname vvar
    global $vvarname

    if {[info exists var(plot3d)]} {
	if {$var(plot3d)} {
	    MarkerAnalysisPlot3dCB $frame $id
	    MarkerAnalysisPlot3dXAxisTitle $vvarname
	}
    }
}

# hardcoded marker.C
proc MarkerAnalysisPlot3dCB {frame id} {
    global imarker
    global wcs

    set varname ${imarker(prefix,dialog)}${id}${frame}
    global $varname
    upvar #0 $varname var

    set vvarname ${imarker(prefix,plot3d)}${id}${frame}
    upvar #0 $vvarname vvar
    global $vvarname

    set vvar(frame) $frame
    set vvar(id) $id

    if {[info exists var(system)]} {
	set vvar(system) $var(system)
    } elseif {[info exists vvar(system)]} {
    } else {
	set vvar(system) $wcs(system)
    }

    if {[info exists var(sky)]} {
	set vvar(sky) $var(sky)
    } elseif {[info exists vvar(sky)]} {
    } else {
	set vvar(sky) $wcs(sky)
    }

    if {[info exists var(method)]} {
	set vvar(method) $var(method)
    } elseif {[info exists vvar(method)]} {
    } else {
	set vvar(method) average
    }

    # sanity check
    if {![$frame has wcs 3d $vvar(system)]} {
	set vvar(system) image
    }

    set xdata ${vvarname}x
    set ydata ${vvarname}y
    global $xdata $ydata

    set ping [PlotPing $vvarname]

    if {!$ping} {
	set tt [string totitle [$frame get marker $id type]]
	set vvar(bunit) [string trim [$frame get fits header keyword BUNIT]]
	if {$vvar(bunit)=={}} {
	    set vvar(bunit) {Counts}
	}
	PlotLineDialog $vvarname $tt {} $vvar(system) $vvar(bunit)
	MarkerAnalysisPlot3dXAxisTitle $vvarname
	MarkerAnalysisPlot3dYAxisTitle $vvarname

	set vvar(markerslice) [$vvar(graph) marker create line -element bar1 \
			     -outline cyan -linewidth 2 \
			     -bindtags [list slice]]
	$vvar(graph) marker bind slice <B1-Motion> \
	    [list MarkerAnalysisPlot3dMotion $vvarname %x %y]

	set vvar(mode) pointer
	PlotChangeMode $vvarname

	set vvar(graph,ds,manage) 0
	set vvar(graph,ds,dim) xy
	set vvar(graph,ds,xdata) $xdata
	set vvar(graph,ds,ydata) $ydata
	blt::vector create $xdata $ydata
    }

    $frame get marker $id analysis plot3d $xdata $ydata \
	$vvar(system) $vvar(sky) $vvar(method)

    set vvar(slice) [$frame get fits slice from image $vvar(system) $vvar(sky)]
    MarkerAnalysisPlot3dMarker $vvarname

    if {!$ping} {
	PlotExternal $vvarname
	$vvar(proc,updateelement) $vvarname
	$vvar(proc,updategraph) $vvarname
    }

    PlotStats $vvarname
    PlotList $vvarname
}

proc MarkerAnalysisPlot3dMotion {vvarname xx yy} {
    upvar #0 $vvarname vvar
    global $vvarname

    if {$vvar(mode) != "pointer"} {
	return
    }

    set vvar(slice) [lindex [$vvar(graph) invtransform $xx $yy] 0]
    $vvar(frame) update fits slice $vvar(slice) $vvar(system) $vvar(sky)

    MarkerAnalysisPlot3dMarker $vvarname

    # current frame only
    global current
    if {$vvar(frame) == $current(frame)} {
	UpdateCubeMotionDialog
	UpdateScaleDialog
	UpdateContourScale
	UpdateContourDialog
    }
}

proc MarkerAnalysisPlot3dMarker {vvarname} {
    upvar #0 $vvarname vvar
    global $vvarname

    set ss [$vvar(frame) get crop 3d $vvar(system) $vvar(sky)]
    set min [lindex $ss 0]
    set max [lindex $ss 1]
    set delta [expr ($max-$min)*.0001]
    if {[::math::fuzzy::tle $vvar(slice) $min]} {
	set vvar(slice) [expr $min+$delta]
    }
    if {[::math::fuzzy::tge $vvar(slice) $max]} {
	set vvar(slice) [expr $max-$delta]
    }

    $vvar(graph) marker configure $vvar(markerslice) \
	-coords "$vvar(slice) -Inf $vvar(slice) Inf"
}

# hardcoded marker.C
proc MarkerAnalysisPlot3dSliceCB {frame id} {
    global imarker

    set vvarname ${imarker(prefix,plot3d)}${id}${frame}
    upvar #0 $vvarname vvar
    global $vvarname

    # if the plot is destroyed, but marker still thinks it is good
    # this routine will be called, so check first

    if {[info exists ${vvarname}(system)]} {
	set vvar(slice) \
	    [$frame get fits slice from image $vvar(system) $vvar(sky)]
	MarkerAnalysisPlot3dMarker $vvarname
    }
}

# hardcoded marker.C
proc MarkerAnalysisPlot3dDeleteCB {frame id} {
    # this routine could be called by the region 
    # after the dialog has been deleted

    global imarker

    set vvarname ${imarker(prefix,plot3d)}${id}${frame}
    upvar #0 $vvarname vvar
    global $vvarname

    # clear any errors
    global errorInfo
    set errorInfo {}

    PlotDestroy $vvarname
}

proc MarkerAnalysisPlot3dXAxisTitle {vvarname} {
    upvar #0 $vvarname vvar
    global $vvarname

    switch -- $vvar(system) {
	image -
	physical -
	amplifier -
	detector {set xtitle "$vvar(system)"}
	default {
	    set w [string range $vvar(system) 3 3]
	    set tt [string trim [$vvar(frame) get fits header keyword \{CTYPE3$w\}]]
	    if {$tt != {}} {
		set xtitle "$tt"
	    } else {
		set xtitle "$vvar(system)"
	    }
	}
    }

    # set for plot code
    set vvar(graph,axis,x,title) $xtitle

    # update now (may not make it into plot code)
    $vvar(graph) xaxis configure -title $xtitle
}

proc MarkerAnalysisPlot3dYAxisTitle {vvarname} {
    upvar #0 $vvarname vvar
    global $vvarname

    # set for plot code
    set vvar(graph,axis,y,title) "$vvar(bunit) [string totitle $vvar(method)]"

    # update now (may not make it into plot code)
    $vvar(graph) yaxis configure -title $vvar(graph,axis,y,title)
}
