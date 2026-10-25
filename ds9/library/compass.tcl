#  Copyright (C) 1999-2021
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc CompassDialog {varname} {
    upvar #0 $varname var
    global $varname

    # see if we already have a header window visible
    if {[winfo exists $var(top)]} {
	raise $var(top)
	return
    }

    # variables
    set arrows [$var(frame) get marker $var(id) compass end]
    set var(narrow) [lindex $arrows 0]
    set var(earrow) [lindex $arrows 1]

    set labels [$var(frame) get marker $var(id) compass label]
    set var(north) [lindex $labels 0]
    set var(east) [lindex $labels 1]

    set s [$var(frame) get marker $var(id) compass system]
    set var(system) [lindex $s 0]
    set var(sky) [lindex $s 1]
    set var(skyformat) degrees

    # procs
    set var(which) compass
    set var(proc,apply) CompassApply
    set var(proc,close) CompassClose
    set var(proc,coordCB) CompassCoordCB

    # base
    MarkerBaseCenterDialog $varname

    set f $var(top).param

    # Labels
    ttk::label $f.ntitle -text [msgcat::mc {North}]
    ttk::entry $f.north -textvariable ${varname}(north) -width 13
    MarkerBaseLineEndButton $f.narrow $varname narrow CompassArrow
    ttk::label $f.etitle -text [msgcat::mc {East}]
    ttk::entry $f.east -textvariable ${varname}(east) -width 13
    MarkerBaseLineEndButton $f.earrow $varname earrow CompassArrow

    grid $f.ntitle $f.north $f.narrow -padx 2 -pady 2 -sticky w
    grid $f.etitle $f.east $f.earrow -padx 2 -pady 2 -sticky w
}

# actions

proc CompassClose {varname} {
    upvar #0 $varname var
    global $varname

    MarkerBaseCenterClose $varname
}

proc CompassApply {varname} {
    upvar #0 $varname var
    global $varname

    $var(frame) marker $var(id) compass label "\{$var(north)\}" "\{$var(east)\}"

    MarkerBaseCenterApply $varname
}

proc CompassArrow {varname} {
    upvar #0 $varname var
    global $varname

    $var(frame) marker $var(id) compass end $var(narrow) $var(earrow)
}

# callbacks

proc CompassCoordCB {varname {dummy {}}} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,marker)} {
	puts stderr "CompassCoordCB"
    }

    MarkerBaseCoordCB $varname
    MarkerBaseCenterMoveCB $varname

    $var(frame) marker $var(id) compass system $var(system) $var(sky)
}



