#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc TextDialog {varname} {
    upvar #0 $varname var
    global $varname

    # see if we already have a header window visible
    if {[winfo exists $var(top)]} {
	raise $var(top)
	return
    }

    # variables
    set var(canrotate) [$var(frame) get marker $var(id) text rotate]

    # procs
    set var(which) text
    set var(proc,apply) TextApply
    set var(proc,close) TextClose
    set var(proc,coordCB) TextCoordCB

    # base
    MarkerBaseCenterDialog $varname

    # init
    MarkerBaseCenterRotateCB $varname

    # callbacks
    $var(frame) marker $var(id) callback rotate MarkerBaseCenterRotateCB \
	$varname

    set f $var(top).param

    # Angle
    ttk::label $f.tangle -text [msgcat::mc {Angle}]
    ttk::entry $f.angle -textvariable ${varname}(angle) -width 13
    ttk::label $f.uangle -text [msgcat::mc {Degrees}]

    # Rotate
    ttk::label $f.trotate -text [msgcat::mc {Rotate}]
    ttk::checkbutton $f.rotate -variable ${varname}(canrotate) \
	-command "TextRotate $varname"

    grid $f.tangle $f.angle $f.uangle -padx 2 -pady 2 -sticky w
    grid $f.trotate $f.rotate -padx 2 -pady 2 -sticky w
}

# actions

proc TextClose {varname} {
    upvar #0 $varname var
    global $varname

    $var(frame) marker $var(id) delete callback rotate MarkerBaseCenterRotateCB

    MarkerBaseCenterClose $varname
}

proc TextApply {varname} {
    upvar #0 $varname var
    global $varname

    MarkerBaseCenterRotate $varname
    MarkerBaseCenterApply $varname
}

proc TextRotate {varname} {
    upvar #0 $varname var
    global $varname

    $var(frame) marker $var(id) text rotate $var(canrotate)
}

# callbacks

proc TextCoordCB {varname {dummy {}}} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,marker)} {
	puts stderr "TextCoordCB"
    }

    MarkerBaseCoordCB $varname
    MarkerBaseCenterMoveCB $varname
    MarkerBaseCenterRotateCB $varname
}

