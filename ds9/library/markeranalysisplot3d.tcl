#  Copyright (C) 1999-2021
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

    $var(mb).analysis add checkbutton -label [msgcat::mc {3D Cutout}] \
	-variable ${varname}(plot3d) \
	-command "MarkerAnalysisPlot3dCmd $varname"
    $var(mb).analysis add separator
    $var(mb).analysis add cascade \
	-label [msgcat::mc {Method}] \
	-menu $var(mb).analysis.method

    ThemeMenu $var(mb).analysis.method
    $var(mb).analysis.method add radiobutton \
	-label [msgcat::mc {Average}] \
	-variable ${varname}(method) -value average \
	-command "MarkerAnalysisPlot3dMethod $varname"
    $var(mb).analysis.method add radiobutton \
	-label [msgcat::mc {Sum}] \
	-variable ${varname}(method) -value sum \
	-command "MarkerAnalysisPlot3dMethod $varname"
    $var(mb).analysis.method add radiobutton \
	-label [msgcat::mc {Median}] \
	-variable ${varname}(method) -value median \
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
	}
    }
}

# hardcoded marker.C
proc MarkerAnalysisPlot3dCB {frame id} {
    global imarker
    global wcs
    global current
    global ds9
    global tile

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
	AdjustCoordSystem $vvarname system
    }

    if {[info exists var(method)]} {
	set vvar(method) $var(method)
    } elseif {[info exists vvar(method)]} {
    } else {
	set vvar(method) average
    }

    if {![$frame has fits]} {
	return
    }

    set saveframe $current(frame)
    set savecolorbar $current(colorbar)
    set datavar ${vvarname}fits
    global $datavar

    catch {unset $datavar}
    $frame get marker $id analysis plot3d $datavar __cutout3d image average
    if {![info exists $datavar]} {
	return
    }

    if {![info exists vvar(cutoutframe)] ||
	[lsearch -exact $ds9(frames) $vvar(cutoutframe)] < 0} {
	set olddisplay $current(display)
	Create3DFrame
	set vvar(cutoutframe) $current(frame)
	if {$olddisplay == "single"} {
	    set current(display) tile
	    set tile(mode) grid
	    DisplayMode
	}
    }

    set cutout $vvar(cutoutframe)

    GotoFrame $cutout
    LoadVar $datavar "${frame}.${id}.3d-cutout.fits" {} {}
    catch {$cutout colormap [${frame}cb get colormap]}
    catch {$cutout 3d view 45 30}
    catch {$cutout zoom to fit}

    if {$saveframe != {} && [lsearch -exact $ds9(frames) $saveframe] >= 0} {
	GotoFrame $saveframe
	set current(colorbar) $savecolorbar
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

    if {[info exists vvar(cutoutframe)]} {
	global ds9
	if {[lsearch -exact $ds9(frames) $vvar(cutoutframe)] >= 0} {
	    DeleteFrame $vvar(cutoutframe)
	}
    }
    catch {unset vvar}
}

proc MarkerAnalysisPlot3dUpdateColorbar {frame} {
    global imarker
    global ds9

    foreach vvarname [info globals ${imarker(prefix,plot3d)}*] {
	upvar #0 $vvarname vvar
	if {[info exists vvar(frame)] &&
	    $vvar(frame) == $frame &&
	    [info exists vvar(cutoutframe)] &&
	    [lsearch -exact $ds9(frames) $vvar(cutoutframe)] >= 0} {
	    catch {$vvar(cutoutframe) colormap [${frame}cb get colormap]}
	}
    }
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
	    [$frame get fits slice from image $vvar(system)]
	MarkerAnalysisPlot3dMarker $vvarname
    }
}

proc MarkerAnalysisPlot3dMotion {vvarname xx yy} {
    upvar #0 $vvarname vvar
    global $vvarname

    if {$vvar(mode) != "pointer"} {
	return
    }

    set cc 1
    if {[info exists vvar($cc,graph)]} {
	set vvar(slice) [lindex [$vvar($cc,graph) invtransform $xx $yy] 0]
	$vvar(frame) update fits slice $vvar(slice) $vvar(system)
	MarkerAnalysisPlot3dMarker $vvarname
    }

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

    set cc 1
    if {[info exists vvar($cc,graph)]} {
	$vvar($cc,graph) marker configure $vvar(markerslice) \
	    -coords "$vvar(slice) -Inf $vvar(slice) Inf"
    }
}

proc MarkerAnalysisPlot3dAxisTitle {vvarname} {
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

    set ytitle "$vvar(bunit) [string totitle $vvar(method)]"

    PlotTitle $vvarname {} $xtitle $ytitle
}
