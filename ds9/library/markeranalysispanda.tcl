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
	set sys $var(system)
    } elseif {[info exists vvar(system)]} {
	set sys $vvar(system)
    } else {
	global wcs
	set vvar(system) $wcs(system)
	set sys $wcs(system)
    }

    set ping [PlotPing $vvarname]

    if {!$ping} {
	set tt [string totitle [$frame get marker $id type]]
	PlotLineDialog $vvarname $tt "Radial Profile" $sys {}
	MarkerAnalysisPandaAxisTitle $vvarname
    }

    PlotClearData $vvarname
    PlotDataSet $vvarname 3 [$frame get marker $id analysis panda $sys]
    $vvar(proc,updategraph) $vvarname
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
	    if {[$vvar(frame) has wcs equatorial $vvar(system)]} {
		set xtitle "Avg Radius (arcsecs)"
		set ytitle "Surface Brightness (cnts/arcsec**2)"
	    } else {
		set xtitle "Avg Radius (pixels)"
		set ytitle "Surface Brightness (cnts/pixels**2)"
	    }
	}
    }

    # set for plot code
    set vvar(axis,x,title) $xtitle
    set vvar(axis,y,title) $ytitle

    # update now (may not make it into plot code)
    $vvar(graph) xaxis configure -title $xtitle
    $vvar(graph) yaxis configure -title $ytitle
}
