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
	set sys $var(system)
    } elseif {[info exists vvar(system)]} {
	set sys $vvar(system)
    } else {
	global wcs
	set vvar(system) $wcs(system)
	set sys $wcs(system)
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
    global $xdata $ydata

    set ping [PlotPing $vvarname]

    if {!$ping} {
	set tt [string totitle [$frame get marker $id type]]
	PlotLineDialog $vvarname $tt Plot3D $sys Counts
	MarkerAnalysisPlot3dXAxisTitle $vvarname
	MarkerAnalysisPlot3dYAxisTitle $vvarname

	set vvar(manage) 0
	set vvar(dim) xy
	set vvar(xdata) $xdata
	set vvar(ydata) $ydata
	blt::vector create $xdata $ydata
    }

    $frame get marker $id analysis plot3d $xdata $ydata $sys $method

    if {!$ping} {
	PlotExternal $vvarname
	$vvar(proc,updateelement) $vvarname
	$vvar(proc,updategraph) $vvarname
    }

    PlotStats $vvarname
    PlotList $vvarname
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
    set vvar(axis,x,title) $xtitle

    # update now (may not make it into plot code)
    $vvar(graph) xaxis configure -title $xtitle
}

proc MarkerAnalysisPlot3dYAxisTitle {vvarname} {
    upvar #0 $vvarname vvar
    global $vvarname

    # set for plot code
    set vvar(axis,y,title) "Counts [string totitle $vvar(method)]"

    # update now (may not make it into plot code)
    $vvar(graph) yaxis configure -title $vvar(axis,y,title)
}
