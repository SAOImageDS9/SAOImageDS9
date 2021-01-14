#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc MarkerAnalysisStatsDialog {varname} {
    upvar #0 $varname var
    global $varname

    global imarker

    set frame $var(frame)
    set id $var(id)

    set vvarname ${imarker(prefix,stats)}${id}${frame}
    upvar #0 $vvarname vvar
    global $vvarname

    set var(stats) [info exists ${vvarname}(top)]

    $var(mb).analysis add checkbutton \
	-label [msgcat::mc {Statistics}] \
	-variable ${varname}(stats) \
	-command "MarkerAnalysisStatsCmd $varname"
}

proc MarkerAnalysisStatsCmd {varname} {
    upvar #0 $varname var
    global $varname

    MarkerAnalysisStats $var(frame) $var(id) $var(stats)
}

proc MarkerAnalysisStats {frame id stats} {
    $frame marker $id analysis stats $stats
    if {$stats} {
	MarkerAnalysisStatsCB $frame $id
    } else {
	MarkerAnalysisStatsDeleteCB $frame $id
    }
}

proc MarkerAnalysisStatsSystem {varname} {
    upvar #0 $varname var
    global $varname

    if {[info exists var(stats)]} {
	if {$var(stats)} {
	    MarkerAnalysisStatsCB $var(frame) $var(id)
	}
    }
}

# hardcoded marker.C
proc MarkerAnalysisStatsCB {frame id} {
    global imarker
    global wcs

    set varname ${imarker(prefix,dialog)}${id}${frame}
    global $varname
    upvar #0 $varname var

    set vvarname ${imarker(prefix,stats)}${id}${frame}
    upvar #0 $vvarname vvar
    global $vvarname

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

    set tt [string totitle [$frame get marker $id type]]
    set rr [$frame get marker $id analysis stats $vvar(system) $vvar(sky)]
    SimpleTextDialog $vvarname $tt 80 20 insert top $rr
}

proc MarkerAnalysisStatsDeleteCB {frame id} {
    global imarker

    set vvarname ${imarker(prefix,stats)}${id}${frame}
    upvar #0 $vvarname vvar
    global $vvarname

    if {[info exists $vvarname]} {
	SimpleTextDestroy $vvarname
    }
}
