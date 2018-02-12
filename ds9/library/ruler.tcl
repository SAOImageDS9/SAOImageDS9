#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc RulerDialog {varname} {
    upvar #0 $varname var
    global $varname

    # see if we already have a header window visible
    if {[winfo exists $var(top)]} {
	raise $var(top)
	return
    }

    # variables
    set s [$var(frame) get marker $var(id) ruler system]
    set var(system) [lindex $s 0]
    set var(sky) [lindex $s 1]
    set var(skyformat) degrees
    set var(dcoord) [lindex $s 2]
    set var(dformat) [lindex $s 3]
    set var(spec) [$var(frame) get marker $var(id) ruler format]

    # procs
    set var(which) ruler
    set var(proc,apply) RulerApply
    set var(proc,coordCB) RulerCoordCB
    set var(proc,editCB) RulerEditCB
    set var(proc,distCB) RulerDistCB

    # base
    MarkerBaseLineDialog $varname 375 200

    set f $var(top).param

    # Axis Length
    ttk::label $f.tlen -text [msgcat::mc {Axis Length}]
    ttk::label $f.rx -textvariable ${varname}(distx) -relief groove -width 12 
    ttk::label $f.ry -textvariable ${varname}(disty) -relief groove -width 12 
    ttk::label $f.ulen -textvariable ${varname}(dcoord,msg)

    ttk::label $f.tspec -text [msgcat::mc {Format}]
    ttk::entry $f.spec -textvariable ${varname}(spec) -width 13

    grid $f.tlen $f.rx $f.ry $f.ulen -padx 2 -pady 2 -sticky w
    grid $f.tspec $f.spec -padx 2 -pady 2 -sticky w
}

# actions

proc RulerApply {varname} {
    upvar #0 $varname var
    global $varname

    $var(frame) marker $var(id) ruler point $var(system) $var(sky) \
	$var(x) $var(y) $var(x2) $var(y2)

    $var(frame) marker $var(id) ruler format "\"$var(spec)\""

    MarkerBaseLineApply $varname
}

# callbacks

proc RulerCoordCB {varname {dummy {}}} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,marker)} {
	puts stderr "RulerCoordCB"
    }

    MarkerBaseCoordCB $varname

    $var(frame) marker $var(id) ruler system $var(system) $var(sky) \
	$var(dcoord) $var(dformat)

    RulerEditCB $varname
}

proc RulerEditCB {varname {dummy {}}} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,marker)} {
	puts stderr "RulerEditCB"
    }

    MarkerBaseLineEditCB $varname

    set d [$var(frame) get marker $var(id) ruler length \
	       $var(dcoord) $var(dformat)]
    set var(dist) [lindex $d 0]
    set var(distx) [lindex $d 1]
    set var(disty) [lindex $d 2]

    set var(angle) [$var(frame) get marker $var(id) angle \
			$var(system) $var(sky)]
}

proc RulerDistCB {varname {dummy {}}} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,marker)} {
	puts stderr "RulerDistCB"
    }

    $var(frame) marker $var(id) ruler system $var(system) $var(sky) \
	$var(dcoord) $var(dformat)

    set d [$var(frame) get marker $var(id) ruler length \
	       $var(dcoord) $var(dformat)]
    set var(dist) [lindex $d 0]
    set var(distx) [lindex $d 1]
    set var(disty) [lindex $d 2]
}


