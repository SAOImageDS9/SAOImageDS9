#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

# support

proc MarkerAnalysisPlot2dDialog {varname} {
    upvar #0 $varname var
    global $varname

    global imarker

    set id $var(id)
    set frame $var(frame)

    set vvarname ${imarker(prefix,plot2d)}${id}${frame}
    upvar #0 $vvarname vvar
    global $vvarname

    set var(plot2d) [info exists ${vvarname}(top)]
    set var(method) average

    $var(mb).analysis add checkbutton -label [msgcat::mc {Plot 2D}] \
	-variable ${varname}(plot2d) \
	-command "MarkerAnalysisPlot2dCmd $varname"
    $var(mb).analysis add separator
    $var(mb).analysis add cascade \
	-label [msgcat::mc {Method}] \
	-menu $var(mb).analysis.method

    menu $var(mb).analysis.method
    $var(mb).analysis.method add radiobutton \
	-label [msgcat::mc {Average}] \
	-variable ${varname}(method) -value average \
	-command "MarkerAnalysisPlot2dMethod $varname"
    $var(mb).analysis.method add radiobutton \
	-label [msgcat::mc {Sum}] \
	-variable ${varname}(method) -value sum \
	-command "MarkerAnalysisPlot2dMethod $varname"
}

proc MarkerAnalysisPlot2dCmd {varname} {
    upvar #0 $varname var
    global $varname

    MarkerAnalysisPlot2d $var(frame) $var(id) $var(plot2d)
}

proc MarkerAnalysisPlot2d {frame id plot} {
    global imarker

    $frame marker $id analysis plot2d $plot
    if {$plot} {
	MarkerAnalysisPlot2dCB $frame $id

	set vvarname ${imarker(prefix,plot2d)}${id}${frame}
	upvar #0 $vvarname vvar
	global $vvarname

	PlotRaise $vvarname
    } else {
	MarkerAnalysisPlot2dDeleteCB $frame $id
    }
}

proc MarkerAnalysisPlot2dMethod {varname} {
    upvar #0 $varname var
    global $varname

    global imarker

    set frame $var(frame)
    set id $var(id)

    set vvarname ${imarker(prefix,plot2d)}${id}${frame}
    upvar #0 $vvarname vvar
    global $vvarname

    if {[info exists var(plot2d)]} {
	if {$var(plot2d)} {
	    MarkerAnalysisPlot2dCB $var(frame) $var(id)
	    MarkerAnalysisPlot2dYAxisTitle $vvarname
	}
    }
}

proc MarkerAnalysisPlot2dSystem {varname} {
    upvar #0 $varname var
    global $varname

    global imarker

    set frame $var(frame)
    set id $var(id)

    set vvarname ${imarker(prefix,plot2d)}${id}${frame}
    upvar #0 $vvarname vvar
    global $vvarname

    if {[info exists var(plot2d)]} {
	if {$var(plot2d)} {
	    MarkerAnalysisPlot2dCB $var(frame) $var(id)
	    MarkerAnalysisPlot2dXAxisTitle $vvarname
	}
    }
}

# hardcoded marker.C
proc MarkerAnalysisPlot2dCB {frame id} {
    global imarker

    set varname ${imarker(prefix,dialog)}${id}${frame}
    global $varname
    upvar #0 $varname var

    set vvarname ${imarker(prefix,plot2d)}${id}${frame}
    upvar #0 $vvarname vvar
    global $vvarname

    set vvar(frame) $frame
    set vvar(id) $id

    if {[info exists var(system)]} {
	set vvar(system) $var(system)
	set sys $var(system)
    } elseif {[info exists vvar(system)]} {
	set sys $vvar(system)
    } else {
	global wcs
	set vvar(system) $wcs(system)
	set sys $wcs(system)
    }

    if {[info exists var(sky)]} {
	set vvar(sky) $var(sky)
	set sky $var(sky)
    } elseif {[info exists vvar(sky)]} {
	set sky $vvar(sky)
    } else {
	global wcs
	set sky $wcs(sky)
    }

    if {[info exists var(method)]} {
	set vvar(method) $var(method)
	set method $var(method)
    } elseif {[info exists vvar(method)]} {
	set method $vvar(method)
    } else {
	set vvar(method) average
	set method average
    }

    set xdata ${vvarname}x
    set ydata ${vvarname}y
    set xcdata ${vvarname}xc
    set ycdata ${vvarname}yc
    global $xdata $ydata $xcdata $ycdata

    set ping [PlotPing $vvarname]

    if {!$ping} {
	set tt [string totitle [$frame get marker $id type]]
	PlotLineDialog $vvarname $tt Plot2D $sys Counts
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

    $frame get marker $id analysis plot2d $xdata $ydata $xcdata $ycdata \
	$sys $sky $method

    if {!$ping} {
	PlotExternal $vvarname
	$vvar(proc,updateelement) $vvarname
	$vvar(proc,updategraph) $vvarname
    }

    PlotStats $vvarname
    PlotList $vvarname
}

proc MarkerAnalysisPlot2dDeleteCB {frame id} {
    # this routine could be called by the region 
    # after the dialog has been deleted

    global imarker

    set vvarname ${imarker(prefix,plot2d)}${id}${frame}
    upvar #0 $vvarname vvar
    global $vvarname

    set xcdata ${vvarname}xc
    set ycdata ${vvarname}yc

    # clear extra vectors
    global $xcdata $ycdata
    catch {blt::vector destroy $xcdata $ycdata}

    # clear any errors
    global errorInfo
    set errorInfo {}

    PlotDestroy $vvarname
}

proc MarkerAnalysisPlot2dXAxisTitle {vvarname} {
    upvar #0 $vvarname vvar
    global $vvarname

    switch -- $vvar(system) {
	image -
	physical -
	amplifier -
	detector {set xtitle "$vvar(system)"}
	default {
	    if {[$vvar(frame) has wcs equatorial $vvar(system)]} {
		set xtitle "$vvar(system)"
	    } else {
		set xtitle "[$vvar(frame) get wcs name $vvar(system)]"
	    }
	}
    }

    # set for plot code
    set vvar(axis,x,title) $xtitle

    # update now (may not make it into plot code)
    $vvar(graph) xaxis configure -title $xtitle
}

proc MarkerAnalysisPlot2dYAxisTitle {vvarname} {
    upvar #0 $vvarname vvar
    global $vvarname

    # set for plot code
    set vvar(axis,y,title) "Counts [string totitle $vvar(method)]"

    # update now (may not make it into plot code)
    $vvar(graph) yaxis configure -title $vvar(axis,y,title)
}

proc MarkerAnalysisPlot2dXAxis {vvarname w xx} {
    upvar #0 $vvarname vvar
    global $vvarname

    set x [expr $xx-1]

    global $vvar(xcdata) $vvar(ycdata)
    # sometimes, $x equals $vvar(xcdata) length
    set ll [$vvar(xcdata) length]
    if {($ll>=1) && ($x>=0) && ($x<$ll)} {
	set a [format "%6.3f" [expr "$$vvar(xcdata)\($x\)"]]
	set b [format "%6.3f" [expr "$$vvar(ycdata)\($x\)"]]
	return "$a\n$b"
    } else {
	return {}
    }
}
