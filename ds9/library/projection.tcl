#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc ProjectionDialog {varname} {
    upvar #0 $varname var
    global $varname

    # see if we already have a header window visible
    if {[winfo exists $var(top)]} {
	raise $var(top)
	return
    }

    # variables
    set rr [$var(frame) get wcs]
    set var(tcoord) [lindex $rr 0]
    set var(tformat) degrees
    AdjustCoordSystem $varname tcoord

    # procs
    set var(which) projection
    set var(proc,apply) ProjectionApply
    set var(proc,coordCB) ProjectionCoordCB
    set var(proc,editCB) ProjectionEditCB
    set var(proc,distCB) ProjectionDistCB

    # base
    MarkerBaseLineDialog $varname 500 200

    # analysis
    $var(mb) add cascade -label [msgcat::mc {Analysis}] -menu $var(mb).analysis
    menu $var(mb).analysis

    # plot2d
    MarkerAnalysisPlot2dDialog $varname

    # init
    ProjectionThickCB $varname

    set f $var(top).param

    # Thick
    ttk::label $f.tthick -text [msgcat::mc {Thickness}]
    ttk::entry $f.thick -textvariable ${varname}(thick) -width 13
    DistMenuButton $f.uthick $varname tcoord 1 tformat \
	[list ProjectionThickCB $varname]
    DistMenuEnable $f.uthick.menu $varname tcoord 1 tformat

    grid $f.tthick $f.thick $f.uthick -padx 2 -pady 2 -sticky w
}

# actions

proc ProjectionApply {varname} {
    upvar #0 $varname var
    global $varname

    $var(frame) marker $var(id) projection $var(system) $var(sky) \
	$var(x) $var(y) $var(x2) $var(y2) \
	$var(thick) $var(tcoord) $var(tformat)

    MarkerBaseLineApply $varname
}

# callbacks

proc ProjectionCoordCB {varname {dummy {}}} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,marker)} {
	puts stderr "ProjectionCoordCB"
    }

    MarkerAnalysisPlot2dSystem $varname
    MarkerBaseCoordCB $varname
    ProjectionEditCB $varname
}

proc ProjectionEditCB {varname {dummy {}}} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,marker)} {
	puts stderr "ProjectionEditCB"
    }

    MarkerBaseLineEditCB $varname

    set var(dist) [$var(frame) get marker $var(id) projection length \
		       $var(dcoord) $var(dformat)]
    set var(thick) [$var(frame) get marker $var(id) projection thick \
			$var(tcoord) $var(tformat)]
    set var(angle) [$var(frame) get marker $var(id) angle \
			$var(system) $var(sky)]
}

proc ProjectionDistCB {varname {dummy {}}} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,marker)} {
	puts stderr "ProjectionDistCB"
    }

    set var(dist) [$var(frame) get marker $var(id) projection length \
		       $var(dcoord) $var(dformat)]
}

proc ProjectionThickCB {varname {dummy {}}} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,marker)} {
	puts stderr "ProjectionThickCB"
    }

    set var(thick) [$var(frame) get marker $var(id) projection thick \
			$var(tcoord) $var(tformat)]
}

