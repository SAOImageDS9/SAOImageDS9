#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc SegmentDialog {varname} {
    upvar #0 $varname var
    global $varname

    # see if we already have a header window visible
    if {[winfo exists $var(top)]} {
	raise $var(top)
	return
    }

    # procs
    set var(proc,apply) SegmentApply
    set var(proc,close) SegmentClose
    set var(proc,coordCB) SegmentCoordCB

    # base
    MarkerBaseCenterDialog $varname

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

proc SegmentClose {varname} {
    upvar #0 $varname var
    global $varname

    $var(frame) marker $var(id) delete callback rotate MarkerBaseCenterRotateCB

    MarkerBaseCenterClose $varname
}

proc SegmentApply {varname} {
    upvar #0 $varname var
    global $varname

    MarkerBaseCenterRotate $varname
    MarkerBaseCenterApply $varname
}

# callbacks

proc SegmentCoordCB {varname {dummy {}}} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,marker)} {
	puts stderr "SegmentCoordCB"
    }

    MarkerBaseCoordCB $varname
    MarkerBaseCenterMoveCB $varname
    MarkerBaseCenterRotateCB $varname
}
