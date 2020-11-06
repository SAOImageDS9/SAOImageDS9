#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc MarkerAnalysisPandaDialog {varname} {
    upvar #0 $varname var
    global $varname

    global imarker

    set id $var(id)
    set frame $var(frame)

    set vvarname ${imarker(prefix,panda)}${id}${frame}
    upvar #0 $vvarname vvar
    global $vvarname

    set var(panda) [info exists ${vvarname}(top)]

    $var(mb).analysis add checkbutton -label [msgcat::mc {Radial Profile}] \
	-variable ${varname}(panda) \
	-command "MarkerAnalysisPandaCmd $varname"
}

proc MarkerAnalysisPandaCmd {varname} {
    upvar #0 $varname var
    global $varname

    MarkerAnalysisPanda $var(frame) $var(id) $var(panda)
}

proc MarkerAnalysisPanda {frame id panda} {
    global imarker

    $frame marker $id analysis panda $panda
    if {$panda} {
	MarkerAnalysisPandaCB $frame $id

	set vvarname ${imarker(prefix,panda)}${id}${frame}
	upvar #0 $vvarname vvar
	global $vvarname

	PlotRaise $vvarname
    } else {
	MarkerAnalysisPandaDeleteCB $frame $id
    }
}

proc MarkerAnalysisPandaSystem {varname} {
    upvar #0 $varname var
    global $varname

    global imarker

    set frame $var(frame)
    set id $var(id)

    set vvarname ${imarker(prefix,panda)}${id}${frame}
    upvar #0 $vvarname vvar
    global $vvarname

    if {[info exists var(panda)]} {
	if {$var(panda)} {
	    MarkerAnalysisPandaCB $var(frame) $var(id)
	    MarkerAnalysisPandaAxisTitle $vvarname
	}
    }
}

# hardcoded marker.C
proc MarkerAnalysisPandaCB {frame id} {
    global imarker
    global wcs

    set varname ${imarker(prefix,dialog)}${id}${frame}
    global $varname
    upvar #0 $varname var

    set vvarname ${imarker(prefix,panda)}${id}${frame}
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

    for {set jj 0} {$jj<$var(angnum)} {incr jj} {
	set xdata ${vvarname}xx$jj
	set ydata ${vvarname}yy$jj
	set yedata ${vvarname}ye$jj
	global $xdata $ydata $yedata

	if {[info command $xdata] == {}} {
	    blt::vector create $xdata $ydata $yedata
	}
	$frame get marker $id analysis panda $xdata $ydata $yedata \
	    $vvar(system) $jj
    }

    if {![PlotPing $vvarname]} {
	PlotDialog $vvarname [string totitle [$frame get marker $id type]] true
	PlotAddGraph $vvarname line

	MarkerAnalysisPandaAxisTitle $vvarname

	for {set jj 0} {$jj<$var(angnum)} {incr jj} {
	    set vvar(graph,ds,xdata) ${vvarname}xx$jj
	    set vvar(graph,ds,ydata) ${vvarname}yy$jj
	    set vvar(graph,ds,yedata) ${vvarname}ye$jj
	    PlotExternal $vvarname xyey
	}
    }

    PlotStats $vvarname
    PlotList $vvarname
}

proc MarkerAnalysisPandaDeleteCB {frame id} {
    # this routine could be called by the region 
    # after the dialog has been deleted

    global imarker

    set vvarname ${imarker(prefix,panda)}${id}${frame}
    upvar #0 $vvarname vvar
    global $vvarname

    # clear any errors
    global errorInfo
    set errorInfo {}

    PlotDestroy $vvarname
}

proc MarkerAnalysisPandaAxisTitle {vvarname} {
    upvar #0 $vvarname vvar
    global $vvarname

    switch -- $vvar(system) {
	image -
	physical -
	amplifier -
	detector {
	    set xtitle "Avg Radius (pixels)"
	    set ytitle "Surface Brightness (cnts/pixels**2)"
	}
	default {
	    if {[$vvar(frame) has wcs celestial $vvar(system)]} {
		set xtitle "Avg Radius (arcsecs)"
		set ytitle "Surface Brightness (cnts/arcsec**2)"
	    } else {
		set xtitle "Avg Radius (pixels)"
		set ytitle "Surface Brightness (cnts/pixels**2)"
	    }
	}
    }

    PlotTitle $vvarname "Radial Profile" $xtitle $ytitle
}
