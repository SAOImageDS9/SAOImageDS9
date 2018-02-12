#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc MarkerAnalysisHistogramDialog {varname} {
    upvar #0 $varname var
    global $varname

    global imarker

    set id $var(id)
    set frame $var(frame)

    set vvarname ${imarker(prefix,histogram)}${id}${frame}
    upvar #0 $vvarname vvar
    global $vvarname

    set var(histogram) [info exists ${vvarname}(top)]

    $var(mb).analysis add checkbutton -label [msgcat::mc {Histogram}] \
	-variable ${varname}(histogram) \
	-command "MarkerAnalysisHistogramCmd $varname"
}

# support

proc MarkerAnalysisHistogramCmd {varname} {
    upvar #0 $varname var
    global $varname

    MarkerAnalysisHistogram $var(frame) $var(id) $var(histogram)
}

proc MarkerAnalysisHistogram {frame id plot} {
    global imarker

    $frame marker $id analysis histogram $plot
    if {$plot} {
	MarkerAnalysisHistogramCB $frame $id

	set vvarname ${imarker(prefix,histogram)}${id}${frame}
	upvar #0 $vvarname vvar
	global $vvarname

	PlotRaise $vvarname
    } else {
	MarkerAnalysisHistogramDeleteCB $frame $id
    }
}

# hardcoded marker.C
proc MarkerAnalysisHistogramCB {frame id} {
    global imarker

    set varname ${imarker(prefix,dialog)}${id}${frame}
    global $varname
    upvar #0 $varname var

    set vvarname ${imarker(prefix,histogram)}${id}${frame}
    upvar #0 $vvarname vvar
    global $vvarname

    set vvar(frame) $frame
    set vvar(id) $id
    set vvar(nbins) 512

    set xdata ${vvarname}x
    set ydata ${vvarname}y
    global $xdata $ydata

    set ping [PlotPing $vvarname]

    if {!$ping} {
	set tt [string totitle [$frame get marker $id type]]
	PlotLineDialog $vvarname $tt Histogram Values Counts

	set vvar(manage) 0
	set vvar(dim) xy
	set vvar(xdata) $xdata
	set vvar(ydata) $ydata
	blt::vector create $xdata $ydata
    }

    $frame get marker $id analysis histogram $xdata $ydata $vvar(nbins)

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

# hardcoded marker.C
proc MarkerAnalysisHistogramDeleteCB {frame id} {
    # this routine could be called by the region 
    # after the dialog has been deleted

    global imarker

    set vvarname ${imarker(prefix,histogram)}${id}${frame}
    upvar #0 $vvarname vvar
    global $vvarname

    # clear any errors
    global errorInfo
    set errorInfo {}

    PlotDestroy $vvarname
}
