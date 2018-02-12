#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc CompositeDialog {varname} {
    upvar #0 $varname var
    global $varname

    # see if we already have a header window visible
    if {[winfo exists $var(top)]} {
	raise $var(top)
	return
    }

    # variables
    set var(global) [$var(frame) get marker $var(id) composite global]

    # procs
    set var(proc,apply) CompositeApply
    set var(proc,close) CompositeClose
    set var(proc,coordCB) CompositeCoordCB

    # base
    MarkerBaseCenterDialog $varname

    # init
    MarkerBaseCenterRotateCB $varname

   # callbacks
    $var(frame) marker $var(id) callback rotate CompositeRotateCB $varname

    set f $var(top).param

    # Angle
    ttk::label $f.tangle -text [msgcat::mc {Angle}]
    ttk::entry $f.angle -textvariable ${varname}(angle) -width 13
    ttk::label $f.uangle -text [msgcat::mc {Degrees}]
    ttk::label $f.tcomp -text [msgcat::mc {Angle Complement}]
    ttk::label $f.comp -textvariable ${varname}(comp) -width 13 -anchor w
    ttk::label $f.ucomp -text [msgcat::mc {Degrees}]

    # Global
    ttk::label $f.tglobal -text [msgcat::mc {Global Properties}]
    ttk::checkbutton $f.global -variable ${varname}(global) \
	-command "CompositeGlobal $varname"

    grid $f.tangle $f.angle x $f.uangle -padx 2 -pady 2 -sticky w
    grid $f.tcomp $f.comp x $f.ucomp -padx 2 -pady 2 -sticky w
    grid $f.tglobal $f.global -padx 2 -pady 2 -sticky w

    CompositeCompAngle $varname
}

# actions

proc CompositeClose {varname} {
    upvar #0 $varname var
    global $varname

    $var(frame) marker $var(id) delete callback rotate CompositeRotateCB

    MarkerBaseCenterClose $varname
}

proc CompositeApply {varname} {
    upvar #0 $varname var
    global $varname

    CompositeRotate $varname
    MarkerBaseCenterApply $varname
}

proc CompositeRotate {varname} {
    upvar #0 $varname var
    global $varname

    $var(frame) marker $var(id) angle $var(angle) $var(system) $var(sky)

    CompositeCompAngle $varname
}

proc CompositeCompAngle {varname} {
    upvar #0 $varname var
    global $varname

    set comp [expr 360-$var(angle)]

    if {[::math::fuzzy::tge $comp 360]} {
	set comp [expr $comp - 360]
    }
    if {[::math::fuzzy::tlt $comp 0]} {
	set comp [expr $comp + 360]
    }

    set var(comp) $comp
}

proc CompositeGlobal {varname} {
    upvar #0 $varname var
    global $varname

    $var(frame) marker $var(id) composite global $var(global)
}

# callbacks

proc CompositeCoordCB {varname {dummy {}}} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,marker)} {
	puts stderr "CompositeCoordCB"
    }

    MarkerBaseCoordCB $varname
    MarkerBaseCenterMoveCB $varname
    MarkerBaseCenterRotateCB $varname
}

proc CompositeRotateCB {varname {dummy {}}} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,marker)} {
	puts stderr "CompositeRotateCB"
    }

    set var(angle) [$var(frame) get marker $var(id) angle \
			$var(system) $var(sky)]

    CompositeCompAngle $varname
}
