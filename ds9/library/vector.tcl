#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc VectorDialog {varname} {
    upvar #0 $varname var
    global $varname

    global pmarker

    # see if we already have a header window visible
    if {[winfo exists $var(top)]} {
	raise $var(top)
	return
    }

    # variables
    set rr [$var(frame) get wcs]
    set var(dcoord) [lindex $rr 0]
    set var(dformat) $pmarker(dformat)
    AdjustCoordSystem $varname dcoord

    set var(arrow) [$var(frame) get marker $var(id) vector arrow]

    # procs
    set var(which) vector
    set var(proc,apply) VectorApply
    set var(proc,close) VectorClose
    set var(proc,coordCB) VectorCoordCB
    set var(proc,editCB) VectorEditCB
    set var(proc,distCB) VectorDistCB

    # base
    MarkerBaseDialog $varname

    # analysis
    $var(mb) add cascade -label [msgcat::mc {Analysis}] -menu $var(mb).analysis
    menu $var(mb).analysis

    # plot2d
    MarkerAnalysisPlot2dDialog $varname
    # raise plot?
    global marker
    set var(plot2d) $marker(plot2d)

    # init
    VectorDistCB $varname

    # callbacks
    $var(frame) marker $var(id) callback move "VectorEditCB" $varname
    $var(frame) marker $var(id) callback edit "VectorEditCB" $varname

    set f $var(top).param

    # Point
    ttk::label $f.tpt -text [msgcat::mc {Point}]
    ttk::entry $f.x -textvariable ${varname}(x) -width 13
    ttk::entry $f.y -textvariable ${varname}(y) -width 13
    CoordMenuButton $f.upt $varname system 1 sky skyformat \
	[list $var(proc,coordCB) $varname]

    # Length
    ttk::label $f.tdist -text [msgcat::mc {Length}]
    ttk::entry $f.dist -textvariable ${varname}(dist) -width 13
    DistMenuButton $f.udist $varname dcoord 1 dformat \
	[list VectorDistCB $varname]
    DistMenuEnable $f.udist.menu $varname dcoord 1 dformat

    # Angle
    ttk::label $f.tangle -text [msgcat::mc {Angle}]
    ttk::entry $f.angle -textvariable ${varname}(angle) -width 13
    ttk::label $f.uangle -text [msgcat::mc {Degrees}]

    # Arrow
    ttk::label $f.tarrow -text [msgcat::mc {Arrow}]
    ttk::checkbutton $f.arrow -variable ${varname}(arrow) \
	-command "VectorArrow $varname"

    grid $f.tpt $f.x $f.y $f.upt -padx 2 -pady 2 -sticky w
    grid $f.tdist $f.dist $f.udist -padx 2 -pady 2 -sticky w
    grid $f.tangle $f.angle $f.uangle -padx 2 -pady 2 -sticky w
    grid $f.tarrow $f.arrow -padx 2 -pady 2 -sticky w
}

# actions

proc VectorClose {varname} {
    upvar #0 $varname var
    global $varname

    $var(frame) marker $var(id) delete callback move "VectorEditCB"
    $var(frame) marker $var(id) delete callback edit "VectorEditCB"

    MarkerBaseClose $varname
}

proc VectorApply {varname} {
    upvar #0 $varname var
    global $varname

    $var(frame) marker $var(id) vector point $var(system) $var(sky) \
	$var(x) $var(y) $var(dcoord) $var(dformat) $var(dist) $var(angle)

    MarkerBaseLineApply $varname
}

proc VectorArrow {varname} {
    upvar #0 $varname var
    global $varname

    $var(frame) marker $var(id) vector arrow $var(arrow)
}

# callbacks

proc VectorCoordCB {varname {dummy {}}} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,marker)} {
	puts stderr "VectorCoordCB"
    }

    MarkerAnalysisPlot2dSystem $varname
    MarkerBaseCoordCB $varname
    VectorEditCB $varname
}

proc VectorEditCB {varname {dummy {}}} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,marker)} {
	puts stderr "VectorEditCB"
    }

    set p [$var(frame) get marker $var(id) vector point \
	       $var(system) $var(sky) $var(skyformat)]

    set var(x) [lindex $p 0]
    set var(y) [lindex $p 1]

    set var(dist) [$var(frame) get marker $var(id) vector length \
		       $var(dcoord) $var(dformat)]

    set var(angle) [$var(frame) get marker $var(id) angle \
			$var(system) $var(sky)]
}

proc VectorDistCB {varname {dummy {}}} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,marker)} {
	puts stderr "VectorDistCB"
    }

    set var(dist) [$var(frame) get marker $var(id) vector length \
		       $var(dcoord) $var(dformat)]
}
