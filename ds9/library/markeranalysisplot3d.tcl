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

    set cvarname ${imarker(prefix,cutout3d)}${id}${frame}
    upvar #0 $cvarname cvar
    global $cvarname

    set var(plot3d) [info exists ${vvarname}(top)]
    set var(cutout3d) [info exists ${cvarname}(active)]
    set var(method) average

    $var(mb).analysis add checkbutton -label [msgcat::mc {Plot 3D}] \
	-variable ${varname}(plot3d) \
	-command "MarkerAnalysisPlot3dCmd $varname"
    switch -- [$frame get marker $id type] {
	circle -
	ellipse -
	box -
	polygon {
	    $var(mb).analysis add checkbutton -label [msgcat::mc {3D Cutout}] \
		-variable ${varname}(cutout3d) \
		-command "MarkerAnalysisCutout3dCmd $varname"
	}
    }
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

proc MarkerAnalysisPlot3dFrameExists {frame} {
    global ds9

    return [expr {$frame != {} &&
		  [info exists ds9(frames)] &&
		  [lsearch -exact $ds9(frames) $frame] >= 0 &&
		  [llength [info commands $frame]]}]
}

proc MarkerAnalysisPlot3dColorbarExists {frame} {
    return [expr {$frame != {} &&
		  [llength [info commands ${frame}cb]]}]
}

proc MarkerAnalysisPlot3dApplyColorbar {frame cutout} {
    if {![MarkerAnalysisPlot3dFrameExists $frame] ||
	![MarkerAnalysisPlot3dFrameExists $cutout] ||
	![MarkerAnalysisPlot3dColorbarExists $frame] ||
	![MarkerAnalysisPlot3dColorbarExists $cutout]} {
	return
    }

    if {[catch {${frame}cb get colormap} cmap]} {
	return
    }

    catch {$cutout colormap $cmap}
    catch {${cutout}cb colorbar [$cutout get colorbar]}
}

proc MarkerAnalysisPlot3dApplyScaleLimits {frame cutout vvarname} {
    upvar #0 $vvarname vvar
    global $vvarname

    if {![MarkerAnalysisPlot3dFrameExists $frame] ||
	![MarkerAnalysisPlot3dFrameExists $cutout]} {
	return
    }

    if {[catch {$frame get clip} limits]} {
	return
    }

    if {[info exists vvar(scaleLimits)] &&
	[info exists vvar(scaleFrame)] &&
	$vvar(scaleLimits) == $limits &&
	$vvar(scaleFrame) == $cutout} {
	return
    }

    catch {eval [list $cutout clip user] $limits}
    catch {$cutout clip mode user}
    set vvar(scaleLimits) $limits
    set vvar(scaleFrame) $cutout
}

proc MarkerAnalysisPlot3dSetCallback {frame id} {
    global imarker

    if {![MarkerAnalysisPlot3dFrameExists $frame]} {
	return
    }

    set enabled 0

    set vvarname ${imarker(prefix,plot3d)}${id}${frame}
    upvar #0 $vvarname vvar
    global $vvarname
    if {[info exists vvar(top)]} {
	set enabled 1
    }

    set cvarname ${imarker(prefix,cutout3d)}${id}${frame}
    upvar #0 $cvarname cvar
    global $cvarname
    if {[info exists cvar(active)]} {
	set enabled 1
    }

    catch {$frame marker $id analysis plot3d $enabled}
}

proc MarkerAnalysisPlot3dCmd {varname} {
    upvar #0 $varname var
    global $varname

    MarkerAnalysisPlot3d $var(frame) $var(id) $var(plot3d)
}

proc MarkerAnalysisCutout3dCmd {varname} {
    upvar #0 $varname var
    global $varname

    MarkerAnalysisCutout3d $var(frame) $var(id) $var(cutout3d)
}

proc MarkerAnalysisPlot3d {frame id plot} {
    global imarker

    if {![MarkerAnalysisPlot3dFrameExists $frame]} {
	return
    }

    if {$plot} {
	MarkerAnalysisPlot3dUpdate $frame $id

	set vvarname ${imarker(prefix,plot3d)}${id}${frame}
	upvar #0 $vvarname vvar
	global $vvarname

	catch {PlotRaise $vvarname}
    } else {
	MarkerAnalysisPlot3dDestroy $frame $id
    }
    MarkerAnalysisPlot3dSetCallback $frame $id
}

proc MarkerAnalysisCutout3d {frame id plot} {
    if {![MarkerAnalysisPlot3dFrameExists $frame]} {
	return
    }

    if {$plot} {
	MarkerAnalysisCutout3dCB $frame $id
    } else {
	MarkerAnalysisCutout3dDelete $frame $id
    }
    MarkerAnalysisPlot3dSetCallback $frame $id
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
	    MarkerAnalysisPlot3dAxisTitle $vvarname
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
	    MarkerAnalysisPlot3dAxisTitle $vvarname
	}
    }
}

# hardcoded marker.C
proc MarkerAnalysisPlot3dCB {frame id} {
    global imarker

    if {![MarkerAnalysisPlot3dFrameExists $frame]} {
	return
    }

    set vvarname ${imarker(prefix,plot3d)}${id}${frame}
    upvar #0 $vvarname vvar
    global $vvarname
    if {[info exists vvar(top)]} {
	MarkerAnalysisPlot3dUpdate $frame $id
    }

    set cvarname ${imarker(prefix,cutout3d)}${id}${frame}
    upvar #0 $cvarname cvar
    global $cvarname
    if {[info exists cvar(active)]} {
	MarkerAnalysisCutout3dCB $frame $id
    }
}

proc MarkerAnalysisPlot3dUpdate {frame id} {
    global imarker
    global wcs

    if {![MarkerAnalysisPlot3dFrameExists $frame]} {
	return
    }

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

    # sanity check
    if {![$frame has wcs 3d $vvar(system)]} {
	set vvar(system) image
    }

    set xdata ${vvarname}xx
    set ydata ${vvarname}yy
    global $xdata $ydata

    if {[info command $xdata] == {}} {
	blt::vector create $xdata $ydata
    }
    $frame get marker $id analysis plot3d $xdata $ydata \
	$vvar(system) $vvar(method)

    if {![PlotPing $vvarname]} {
	set vvar(bunit) [string trim [$frame get fits header keyword BUNIT]]
	if {$vvar(bunit)=={}} {
	    set vvar(bunit) {Counts}
	}
	PlotDialog $vvarname [string totitle [$frame get marker $id type]] true
	PlotAddGraph $vvarname line

	MarkerAnalysisPlot3dAxisTitle $vvarname

	set vvar(markerslice) [$vvar(graph) marker create line -element bar1 \
			     -outline cyan -linewidth 2 \
			     -bindtags [list slice]]
	$vvar(graph) configure -halo 10
	$vvar(graph) marker bind slice <B1-Motion> \
	    [list MarkerAnalysisPlot3dMotion $vvarname %x %y]

	set vvar(mode) pointer
	PlotChangeMode $vvarname

	set vvar(graph,ds,xdata) $xdata
	set vvar(graph,ds,ydata) $ydata
	PlotExternal $vvarname xy
    }

    set vvar(slice) [$frame get fits slice from image $vvar(system)]
    MarkerAnalysisPlot3dMarker $vvarname

    PlotStats $vvarname
    PlotList $vvarname
}

proc MarkerAnalysisCutout3dCB {frame id} {
    global imarker
    global current
    global tile

    if {![MarkerAnalysisPlot3dFrameExists $frame]} {
	return
    }

    set cvarname ${imarker(prefix,cutout3d)}${id}${frame}
    upvar #0 $cvarname cvar
    global $cvarname

    set cvar(active) 1
    set cvar(frame) $frame
    set cvar(id) $id

    if {[catch {$frame has fits} hasfits] || !$hasfits} {
	return
    }

    set saveframe $current(frame)
    set savecolorbar $current(colorbar)
    set datavar ${cvarname}fits
    global $datavar

    catch {unset $datavar}
    if {[catch {
	$frame get marker $id analysis plot3d $datavar __cutout3d image average
    }]} {
	return
    }
    if {![info exists $datavar]} {
	return
    }

    set newcutout 0
    if {![info exists cvar(cutoutframe)] ||
	![MarkerAnalysisPlot3dFrameExists $cvar(cutoutframe)]} {
	set olddisplay $current(display)
	Create3DFrame
	set cvar(cutoutframe) $current(frame)
	set newcutout 1
	if {$olddisplay == "single"} {
	    set current(display) tile
	    set tile(mode) grid
	    DisplayMode
	}
    }

    set cutout $cvar(cutoutframe)
    if {![MarkerAnalysisPlot3dFrameExists $cutout]} {
	return
    }

    set view {}
    if {!$newcutout} {
	catch {set view [$cutout get 3d view]}
    }
    if {$view == {}} {
	set view {45 30}
    }

    catch {GotoFrame $cutout}
    catch {LoadVar $datavar "${frame}.${id}.3d-cutout.fits" {} {}}
    MarkerAnalysisPlot3dApplyScaleLimits $frame $cutout $cvarname
    MarkerAnalysisPlot3dApplyColorbar $frame $cutout
    catch {$cutout zoom to fit}
    catch {eval [list $cutout 3d view] $view}

    if {[MarkerAnalysisPlot3dFrameExists $saveframe]} {
	catch {GotoFrame $saveframe}
	set current(colorbar) $savecolorbar
    }
}

# hardcoded marker.C
proc MarkerAnalysisPlot3dDeleteCB {frame id} {
    # this routine could be called by the region 
    # after the dialog has been deleted

    MarkerAnalysisPlot3dDestroy $frame $id
    MarkerAnalysisCutout3dDelete $frame $id
}

proc MarkerAnalysisPlot3dDestroy {frame id} {
    global imarker

    set vvarname ${imarker(prefix,plot3d)}${id}${frame}
    upvar #0 $vvarname vvar
    global $vvarname

    catch {PlotDestroy $vvarname}
}

proc MarkerAnalysisCutout3dDelete {frame id} {
    global imarker

    set cvarname ${imarker(prefix,cutout3d)}${id}${frame}
    upvar #0 $cvarname cvar
    global $cvarname

    catch {unset cvar}
}

proc MarkerAnalysisPlot3dUpdateColorbar {frame} {
    global imarker

    foreach cvarname [info globals ${imarker(prefix,cutout3d)}*] {
	upvar #0 $cvarname cvar
	if {[info exists cvar(frame)] &&
	    $cvar(frame) == $frame &&
	    [info exists cvar(cutoutframe)] &&
	    [MarkerAnalysisPlot3dFrameExists $cvar(cutoutframe)]} {
	    MarkerAnalysisCutout3dCB $cvar(frame) $cvar(id)
	}
    }
}

proc MarkerAnalysisPlot3dUpdateScale {frame} {
    global imarker

    foreach cvarname [info globals ${imarker(prefix,cutout3d)}*] {
	upvar #0 $cvarname cvar
	if {[info exists cvar(frame)] &&
	    $cvar(frame) == $frame &&
	    [info exists cvar(id)] &&
	    [MarkerAnalysisPlot3dFrameExists $frame]} {
	    MarkerAnalysisCutout3dCB $cvar(frame) $cvar(id)
	}
    }
}

# hardcoded marker.C
proc MarkerAnalysisPlot3dSliceCB {frame id} {
    global imarker

    if {![MarkerAnalysisPlot3dFrameExists $frame]} {
	return
    }

    set vvarname ${imarker(prefix,plot3d)}${id}${frame}
    upvar #0 $vvarname vvar
    global $vvarname

    # if the plot is destroyed, but marker still thinks it is good
    # this routine will be called, so check first

    if {[info exists ${vvarname}(system)]} {
	if {[catch {
	    set vvar(slice) \
		[$frame get fits slice from image $vvar(system)]
	}]} {
	    return
	}
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
