#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc BoxDialog {varname} {
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
    set var(fill) [$var(frame) get marker $var(id) box fill]

    # procs
    set var(proc,apply) BoxApply
    set var(proc,close) BoxClose
    set var(proc,coordCB) BoxCoordCB

    # base
    MarkerBaseCenterDialog $varname

    # menu
    $var(mb).width add separator
    $var(mb).width add checkbutton -label [msgcat::mc {Fill}] \
	-variable ${varname}(fill) -command [list BoxFill $varname]

    # analysis
    $var(mb) add cascade -label [msgcat::mc {Analysis}] -menu $var(mb).analysis
    menu $var(mb).analysis

    MarkerAnalysisStatsDialog $varname
    MarkerAnalysisHistogramDialog $varname
    MarkerAnalysisPlot3dDialog $varname

    # init
    BoxEditCB $varname
    MarkerBaseCenterRotateCB $varname

    # callbacks
    $var(frame) marker $var(id) callback edit BoxEditCB $varname
    $var(frame) marker $var(id) callback rotate \
	MarkerBaseCenterRotateCB $varname

    set f $var(top).param

    # Radius
    ttk::label $f.tradius -text Size
    ttk::entry $f.radius1 -textvariable ${varname}(radius1) -width 13 
    ttk::entry $f.radius2 -textvariable ${varname}(radius2) -width 13 
    DistMenuButton $f.uradius $varname dcoord 1 dformat \
	[list BoxEditCB $varname]
    DistMenuEnable $f.uradius.menu $varname dcoord 1 dformat

    # Angle
    ttk::label $f.tangle -text [msgcat::mc {Angle}]
    ttk::entry $f.angle -textvariable ${varname}(angle) -width 13 
    ttk::label $f.uangle -text [msgcat::mc {Degrees}]

    grid $f.tradius $f.radius1 $f.radius2 $f.uradius -padx 2 -pady 2 -sticky w
    grid $f.tangle $f.angle $f.uangle -padx 2 -pady 2 -sticky w
}

# actions

proc BoxClose {varname} {
    upvar #0 $varname var
    global $varname

    $var(frame) marker $var(id) delete callback edit BoxEditCB
    $var(frame) marker $var(id) delete callback rotate MarkerBaseCenterRotateCB

    MarkerBaseCenterClose $varname
}

proc BoxApply {varname} {
    upvar #0 $varname var
    global $varname

    if {$var(radius1) != {} &&
	$var(radius2) !={}} {
	$var(frame) marker $var(id) box radius \
	    $var(radius1) $var(radius2) $var(dcoord) $var(dformat)
    }

    MarkerBaseCenterRotate $varname
    MarkerBaseCenterApply $varname
}

# support

proc BoxFill {varname} {
    upvar #0 $varname var
    global $varname

    $var(frame) marker $var(id) box fill $var(fill)
}

# callbacks

proc BoxCoordCB {varname {dummy {}}} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,marker)} {
	puts stderr "BoxCoordCB"
    }

    MarkerAnalysisStatsSystem $varname
    MarkerAnalysisPlot3dSystem $varname
    MarkerBaseCoordCB $varname
    MarkerBaseCenterMoveCB $varname
    MarkerBaseCenterRotateCB $varname
}

proc BoxEditCB {varname {dummy {}}} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,marker)} {
	puts stderr "BoxEditCB"
    }

    set r [$var(frame) get marker $var(id) box radius \
	       $var(dcoord) $var(dformat)]
    set var(radius1) [lindex $r 0]
    set var(radius2) [lindex $r 1]
}
