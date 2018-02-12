#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc MarkerBaseCenterDialog {varname} {
    upvar #0 $varname var
    global $varname

    # variables
    set var(x) 0
    set var(y) 0

    # base
    MarkerBaseDialog $varname

    # init
    MarkerBaseCenterMoveCB $varname

    # callbacks
    $var(frame) marker $var(id) callback move MarkerBaseCenterMoveCB $varname

    set f $var(top).param

    # Center
    ttk::label $f.tcenter -text [msgcat::mc {Center}]
    ttk::entry $f.centerx -textvariable ${varname}(x) -width 13
    ttk::entry $f.centery -textvariable ${varname}(y) -width 13

    CoordMenuButton $f.ucenter $varname system 1 sky skyformat \
	[list $var(proc,coordCB) $varname]
    CoordMenuEnable $f.ucenter.menu $varname system 1 sky skyformat

    grid $f.tcenter $f.centerx $f.centery $f.ucenter -padx 2 -pady 2 -sticky w
}

proc MarkerBaseCenterClose {varname} {
    upvar #0 $varname var
    global $varname

    $var(frame) marker $var(id) delete callback move MarkerBaseCenterMoveCB

    MarkerBaseClose $varname
}

proc MarkerBaseCenterApply {varname} {
    upvar #0 $varname var
    global $varname

    if {$var(x) != {} &&
	$var(y) != {}} {
	$var(frame) marker $var(id) move to $var(system) $var(sky) \
	    $var(x) $var(y)
    }

    MarkerBaseApply $varname
}

proc MarkerBaseCenterRotate {varname} {
    upvar #0 $varname var
    global $varname

    $var(frame) marker $var(id) angle $var(angle) $var(system) $var(sky)
}

# callbacks

proc MarkerBaseCenterMoveCB {varname {dummy {}}} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,marker)} {
	puts stderr "MarkerBaseCenterMoveCB"
    }

    set center [$var(frame) get marker $var(id) center $var(system) $var(sky) \
		    $var(skyformat)]
    set var(x) [lindex $center 0]
    set var(y) [lindex $center 1]
}

proc MarkerBaseCenterRotateCB {varname {dummy {}}} {
    upvar #0 $varname var
    global $varname

    set var(angle) [$var(frame) get marker $var(id) angle \
			$var(system) $var(sky)]
}

