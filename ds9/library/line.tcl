#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc LineDialog {varname} {
    upvar #0 $varname var
    global $varname

    # see if we already have a header window visible
    if {[winfo exists $var(top)]} {
	raise $var(top)
	return
    }

    # variables
    set arrows [$var(frame) get marker $var(id) line arrow]
    set var(p1arrow) [lindex $arrows 0]
    set var(p2arrow) [lindex $arrows 1]

    # procs
    set var(which) line
    set var(proc,apply) LineApply
    set var(proc,coordCB) LineCoordCB
    set var(proc,editCB) LineEditCB
    set var(proc,distCB) LineDistCB

    # base
    MarkerBaseLineDialog $varname 375 150
    # raise plot?
    global marker
    set var(plot2d) $marker(plot2d)

    # analysis
    $var(mb) add cascade -label [msgcat::mc {Analysis}] -menu $var(mb).analysis
    menu $var(mb).analysis

    # plot2d
    MarkerAnalysisPlot2dDialog $varname

    set f $var(top).param

    # Arrows
    ttk::label $f.tarrow -text [msgcat::mc {Arrow}]
    ttk::checkbutton $f.p1arrow -variable ${varname}(p1arrow) \
	-text [msgcat::mc {Left}] -command "LineArrow $varname"
    ttk::checkbutton $f.p2arrow -variable ${varname}(p2arrow) \
	-text [msgcat::mc {Right}] -command "LineArrow $varname"

    grid $f.tarrow $f.p1arrow $f.p2arrow -padx 2 -pady 2 -sticky w
}

# actions

proc LineApply {varname} {
    upvar #0 $varname var
    global $varname

    $var(frame) marker $var(id) line point $var(system) $var(sky) \
	$var(x) $var(y) $var(x2) $var(y2)

    MarkerBaseLineApply $varname
}

# support

proc LineArrow {varname} {
    upvar #0 $varname var
    global $varname

    $var(frame) marker $var(id) line arrow $var(p1arrow) $var(p2arrow)
}

# callbacks

proc LineCoordCB {varname {dummy {}}} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,marker)} {
	puts stderr "LineCoordCB"
    }

    MarkerAnalysisPlot2dSystem $varname
    MarkerBaseCoordCB $varname
    LineEditCB $varname
}

proc LineEditCB {varname {dummy {}}} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,marker)} {
	puts stderr "LineEditCB"
    }

    MarkerBaseLineEditCB $varname

    set var(dist) [$var(frame) get marker $var(id) line length \
		       $var(dcoord) $var(dformat)]
    set var(angle) [$var(frame) get marker $var(id) angle \
			$var(system) $var(sky)]
}

proc LineDistCB {varname {dummy {}}} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,marker)} {
	puts stderr "LineDistCB"
    }

    set var(dist) [$var(frame) get marker $var(id) line length \
		       $var(dcoord) $var(dformat)]
}


