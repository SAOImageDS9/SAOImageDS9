#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc PointDialog {varname} {
    upvar #0 $varname var
    global $varname

    # see if we already have a header window visible
    if {[winfo exists $var(top)]} {
	raise $var(top)
	return
    }

    # procs
    set var(proc,apply) PointApply
    set var(proc,close) PointClose
    set var(proc,coordCB) PointCoordCB

    # base
    MarkerBaseCenterDialog $varname

    # menus
    $var(mb) add cascade -label [msgcat::mc {Shape}] -menu $var(mb).shape
    menu $var(mb).shape
    $var(mb).shape add radiobutton -label [msgcat::mc {Circle}] \
	-variable ${varname}(shape) -value circle \
	-command "PointShape $varname"
    $var(mb).shape add radiobutton -label [msgcat::mc {Box}] \
	-variable ${varname}(shape) -value box \
	-command "PointShape $varname"
    $var(mb).shape add radiobutton -label [msgcat::mc {Diamond}] \
	-variable ${varname}(shape) -value diamond \
	-command "PointShape $varname"
    $var(mb).shape add radiobutton -label [msgcat::mc {Cross}] \
	-variable ${varname}(shape) -value cross \
	-command "PointShape $varname"
    $var(mb).shape add radiobutton -label [msgcat::mc {X}] \
	-variable ${varname}(shape) -value x \
	-command "PointShape $varname"
    $var(mb).shape add radiobutton -label [msgcat::mc {Arrow}] \
	-variable ${varname}(shape) -value arrow \
	-command "PointShape $varname"
    $var(mb).shape add radiobutton -label [msgcat::mc {BoxCircle}] \
	-variable ${varname}(shape) -value boxcircle \
	-command "PointShape $varname"

    # analysis
    $var(mb) add cascade -label [msgcat::mc {Analysis}] -menu $var(mb).analysis
    menu $var(mb).analysis

    # plot3d
    MarkerAnalysisPlot3dDialog $varname

    # init
    set var(shape) [$var(frame) get marker $var(id) point shape]
    set var(size) [$var(frame) get marker $var(id) point size]

    set f $var(top).param

    # size
    ttk::label $f.tsize -text [msgcat::mc {Size}]
    ttk::entry $f.size -textvariable ${varname}(size) -width 13 
    ttk::label $f.usize -text [msgcat::mc {Pixels}]

    grid $f.tsize $f.size $f.usize -padx 2 -pady 2 -sticky w
}

# actions

proc PointClose {varname} {
    upvar #0 $varname var
    global $varname

    MarkerBaseCenterClose $varname
}

proc PointApply {varname} {
    upvar #0 $varname var
    global $varname

    $var(frame) marker $var(id) point size $var(size)
    MarkerBaseCenterApply $varname
}

# callbacks

proc PointCoordCB {varname {dummy {}}} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,marker)} {
	puts stderr "PointCoordCB"
    }

    MarkerAnalysisPlot3dSystem $varname
    MarkerBaseCoordCB $varname
    MarkerBaseCenterMoveCB $varname
}

# support

proc PointShape {varname} {
    upvar #0 $varname var
    global $varname

    $var(frame) marker $var(id) point shape $var(shape)
}
