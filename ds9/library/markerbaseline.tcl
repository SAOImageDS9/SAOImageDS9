#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc MarkerBaseLineDialog {varname width height} {
    upvar #0 $varname var
    global $varname

    global pmarker

    # variables - some may already initialized (ruler)
    if {![info exists ${varname}(dcoord)]} {
	set rr [$var(frame) get wcs]
	set var(dcoord) [lindex $rr 0]
	set var(dformat) $pmarker(dformat)
    }
    AdjustCoordSystem $varname dcoord

    # procs
    set var(proc,close) MarkerBaseLineClose

    # base
    MarkerBaseDialog $varname

    # init
    $var(proc,distCB) $varname

    # callbacks
    $var(frame) marker $var(id) callback move "$var(proc,editCB)" $varname
    $var(frame) marker $var(id) callback edit "$var(proc,editCB)" $varname

    set f $var(top).param

    # Points
    ttk::label $f.title -text [msgcat::mc {Points}]
    ttk::entry $f.x -textvariable ${varname}(x) -width 13
    ttk::entry $f.y -textvariable ${varname}(y) -width 13
    CoordMenuButton $f.coord $varname system 1 sky skyformat \
	[list $var(proc,coordCB) $varname]
    CoordMenuEnable $f.coord.menu $varname system 1 sky skyformat
    ttk::entry $f.x2 -textvariable ${varname}(x2) -width 13
    ttk::entry $f.y2 -textvariable ${varname}(y2) -width 13

    # Length
    ttk::label $f.dtitle -text [msgcat::mc {Length}]
    ttk::label $f.dist -textvariable ${varname}(dist) \
	-relief groove -width 12 
    DistMenuButton $f.udist $varname dcoord 1 dformat \
	[list $var(proc,distCB) $varname]
    DistMenuEnable $f.udist.menu $varname dcoord 1 dformat

    # Angle
    ttk::label $f.tangle -text [msgcat::mc {Angle}]
    ttk::label $f.angle -textvariable ${varname}(angle) \
	-relief groove -width 12 
    ttk::label $f.uangle -text [msgcat::mc {Degrees}]

    grid $f.title $f.x $f.y $f.coord -padx 2 -pady 2 -sticky w
    grid x $f.x2 $f.y2 -padx 2 -pady 2 -sticky w
    grid $f.dtitle $f.dist $f.udist -padx 2 -pady 2 -sticky w
    grid $f.tangle $f.angle $f.uangle -padx 2 -pady 2 -sticky w
}

proc MarkerBaseLineClose {varname} {
    upvar #0 $varname var
    global $varname

    $var(frame) marker $var(id) delete callback move "$var(proc,editCB)"
    $var(frame) marker $var(id) delete callback edit "$var(proc,editCB)"

    MarkerBaseClose $varname
}

proc MarkerBaseLineApply {varname} {
    upvar #0 $varname var
    global $varname

    MarkerBaseApply $varname
}

proc MarkerBaseLineEditCB {varname {dummy {}}} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,marker)} {
	puts stderr "MarkerBaseLineEditCB"
    }

    set p [$var(frame) get marker $var(id) $var(which) point $var(system) \
	       $var(sky) $var(skyformat)]

    set var(x) [lindex $p 0]
    set var(y) [lindex $p 1]
    set var(x2) [lindex $p 2]
    set var(y2) [lindex $p 3]
}
