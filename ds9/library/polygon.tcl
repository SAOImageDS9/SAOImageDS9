#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc PolygonDialog {varname} {
    upvar #0 $varname var
    global $varname

    # see if we already have a header window visible
    if {[winfo exists $var(top)]} {
	raise $var(top)
	return
    }

    # variables
    set var(fill) [$var(frame) get marker $var(id) polygon fill]

    # procs
    set var(proc,apply) PolygonApply
    set var(proc,close) PolygonClose
    set var(proc,coordCB) PolygonCoordCB

    # base
    MarkerBaseCenterDialog $varname

    # menu
    $var(mb).width add separator
    $var(mb).width add checkbutton -label [msgcat::mc {Fill}] \
	-variable ${varname}(fill) -command [list PolygonFill $varname]

    # analysis
    $var(mb) add cascade -label [msgcat::mc {Analysis}] -menu $var(mb).analysis
    menu $var(mb).analysis

    MarkerAnalysisStatsDialog $varname
    MarkerAnalysisHistogramDialog $varname
    MarkerAnalysisPlot3dDialog $varname

    # init
    MarkerBaseCenterRotateCB $varname

    # callbacks
    $var(frame) marker $var(id) callback rotate MarkerBaseCenterRotateCB $varname

    set f $var(top).param

    # Angle
    ttk::label $f.tangle -text [msgcat::mc {Angle}]
    ttk::entry $f.angle -textvariable ${varname}(angle) -width 13
    ttk::label $f.uangle -text [msgcat::mc {Degrees}]

    grid $f.tangle $f.angle $f.uangle -padx 2 -pady 2 -sticky w
}

# actions

proc PolygonClose {varname} {
    upvar #0 $varname var
    global $varname

    $var(frame) marker $var(id) delete callback rotate MarkerBaseCenterRotateCB

    MarkerBaseCenterClose $varname
}

proc PolygonApply {varname} {
    upvar #0 $varname var
    global $varname

    MarkerBaseCenterRotate $varname
    MarkerBaseCenterApply $varname
}

# support

proc PolygonFill {varname} {
    upvar #0 $varname var
    global $varname

    $var(frame) marker $var(id) polygon fill $var(fill)
}

# callbacks

proc PolygonCoordCB {varname {dummy {}}} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,marker)} {
	puts stderr "PolygonCoordCB"
    }

    MarkerAnalysisStatsSystem $varname
    MarkerAnalysisPlot3dSystem $varname
    MarkerBaseCoordCB $varname
    MarkerBaseCenterMoveCB $varname
    MarkerBaseCenterRotateCB $varname
}
