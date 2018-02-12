#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc CircleDialog {varname} {
    upvar #0 $varname var
    global $varname

    global pmarker

    # see if we already have a header window visible
    if {[winfo exists $var(top)]} {
	raise $var(top)
	return
    }

    # variables
    set rr [$var(frame) get wcs]
    set var(dcoord) [lindex $rr 0]
    set var(dformat) $pmarker(dformat)
    AdjustCoordSystem $varname dcoord
    set var(fill) [$var(frame) get marker $var(id) circle fill]

    # procs
    set var(proc,apply) CircleApply
    set var(proc,close) CircleClose
    set var(proc,coordCB) CircleCoordCB

    # base
    MarkerBaseCenterDialog $varname

    # menu
    $var(mb).width add separator
    $var(mb).width add checkbutton -label [msgcat::mc {Fill}] \
	-variable ${varname}(fill) -command [list CircleFill $varname]

    # analysis
    $var(mb) add cascade -label [msgcat::mc {Analysis}] -menu $var(mb).analysis
    menu $var(mb).analysis

    MarkerAnalysisStatsDialog $varname
    MarkerAnalysisHistogramDialog $varname
    MarkerAnalysisPlot3dDialog $varname

    # init
    CircleEditCB $varname

    # callbacks
    $var(frame) marker $var(id) callback edit CircleEditCB $varname

    set f $var(top).param

    # Radius
    ttk::label $f.tradius -text [msgcat::mc {Radius}]
    ttk::entry $f.radius -textvariable ${varname}(radius) -width 13 
    DistMenuButton $f.uradius $varname dcoord 1 dformat \
	[list CircleEditCB $varname]
    DistMenuEnable $f.uradius.menu $varname dcoord 1 dformat

    grid $f.tradius $f.radius $f.uradius -padx 2 -pady 2 -sticky w
}

# actions

proc CircleClose {varname} {
    upvar #0 $varname var
    global $varname

    $var(frame) marker $var(id) delete callback edit CircleEditCB

    MarkerBaseCenterClose $varname
}

proc CircleApply {varname} {
    upvar #0 $varname var
    global $varname

    $var(frame) marker $var(id) circle radius $var(radius) \
	$var(dcoord) $var(dformat)

    MarkerBaseCenterApply $varname
}

# support

proc CircleFill {varname} {
    upvar #0 $varname var
    global $varname

    $var(frame) marker $var(id) circle fill $var(fill)
}

# callbacks

proc CircleCoordCB {varname {dummy {}}} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,marker)} {
	puts stderr "CircleCoordCB"
    }

    MarkerAnalysisStatsSystem $varname
    MarkerAnalysisPlot3dSystem $varname
    MarkerBaseCoordCB $varname
    MarkerBaseCenterMoveCB $varname
}

proc CircleEditCB {varname {dummy {}}} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,marker)} {
	puts stderr "CircleEditCB"
    }

    set var(radius) [$var(frame) get marker $var(id) circle radius \
			 $var(dcoord) $var(dformat)]
}
