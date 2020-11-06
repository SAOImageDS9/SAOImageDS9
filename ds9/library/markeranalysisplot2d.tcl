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

    ThemeMenu $var(mb).analysis.method
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
	    MarkerAnalysisPlot2dAxisTitle $vvarname
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
	    MarkerAnalysisPlot2dAxisTitle $vvarname
	}
    }
}

# hardcoded marker.C
proc MarkerAnalysisPlot2dCB {frame id} {
    global imarker
    global wcs

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
    } elseif {[info exists vvar(system)]} {
    } else {
	set vvar(system) $wcs(system)
	AdjustCoordSystem $vvarname system
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

    set xdata ${vvarname}xx
    set ydata ${vvarname}yy
    set xcdata ${vvarname}xc
    set ycdata ${vvarname}yc
    global $xdata $ydata $xcdata $ycdata

    if {[info command $xdata] == {}} {
	blt::vector create $xdata $ydata
    }
    # vectors may still be present due to previous graph deletion
    if {[info command $xcdata] == {}} {
	blt::vector create $xcdata $ycdata
    }
    $frame get marker $id analysis plot2d $xdata $ydata $xcdata $ycdata \
	$vvar(system) $vvar(sky) $vvar(method)
    
    if {![PlotPing $vvarname]} {
	set vvar(bunit) [string trim [$frame get fits header keyword BUNIT]]
	if {$vvar(bunit)=={}} {
	    set vvar(bunit) {Counts}
	}
	PlotDialog $vvarname [string totitle [$frame get marker $id type]] true
	PlotAddGraph $vvarname line

	MarkerAnalysisPlot2dAxisTitle $vvarname

	# setup our own formatting
	set vvar(graph,format) 0
	set vvar(xcdata) $xcdata
	set vvar(ycdata) $ycdata

	$vvar(graph) xaxis configure \
	    -command "MarkerAnalysisPlot2dXAxis $vvarname"

	set vvar(graph,ds,xdata) $xdata
	set vvar(graph,ds,ydata) $ydata
	PlotExternal $vvarname xy
    }

    PlotStats $vvarname
    PlotList $vvarname
}

# hardcoded marker.C
proc MarkerAnalysisPlot2dDeleteCB {frame id} {
    # this routine could be called by the region 
    # after the dialog has been deleted

    global imarker

    set vvarname ${imarker(prefix,plot2d)}${id}${frame}
    upvar #0 $vvarname vvar
    global $vvarname

    # clear any errors
    global errorInfo
    set errorInfo {}

    PlotDestroy $vvarname

    # clear extra vectors
    set xcdata ${vvarname}xc
    set ycdata ${vvarname}yc
    global $xcdata $ycdata
    blt::vector destroy $xcdata $ycdata
}

proc MarkerAnalysisPlot2dAxisTitle {vvarname} {
    upvar #0 $vvarname vvar
    global $vvarname

    switch -- $vvar(system) {
	image -
	physical -
	amplifier -
	detector {set xtitle "$vvar(system)"}
	default {
	    if {[$vvar(frame) has wcs celestial $vvar(system)]} {
		set xtitle "$vvar(system)"
	    } else {
		set xtitle "[$vvar(frame) get wcs name $vvar(system)]"
	    }
	}
    }

    set ytitle "$vvar(bunit) [string totitle $vvar(method)]"

    PlotTitle $vvarname {} $xtitle $ytitle
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
