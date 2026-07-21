#  Copyright (C) 1999-2021
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc PolygonDialog {varname} {
    upvar #0 $varname var
    global $varname

    # see if we already have a header window visible
    if {[winfo exists $var(top)]} {
	raise $var(top)
	return
    }

    # variables

    # procs
    set var(proc,apply) PolygonApply
    set var(proc,close) PolygonClose
    set var(proc,coordCB) PolygonCoordCB

    # base
    MarkerBaseCenterDialog $varname

    # analysis
    $var(mb) add cascade -label [msgcat::mc {Analysis}] -menu $var(mb).analysis
    ThemeMenu $var(mb).analysis

    MarkerAnalysisStatsDialog $varname
    MarkerAnalysisHistogramDialog $varname
    MarkerAnalysisPlot3dDialog $varname

    # init
    MarkerBaseCenterRotateCB $varname

    # callbacks
    $var(frame) marker $var(id) callback rotate MarkerBaseCenterRotateCB $varname
    $var(frame) marker $var(id) callback edit PolygonPointCB $varname
    $var(frame) marker $var(id) callback end edit PolygonPointCB $varname

    set f $var(top).param

    # Angle
    ttk::label $f.tangle -text [msgcat::mc {Angle}]
    ttk::entry $f.angle -textvariable ${varname}(angle) -width 13
    ttk::label $f.uangle -text [msgcat::mc {Degrees}]

    grid $f.tangle $f.angle $f.uangle -padx 2 -pady 2 -sticky w

    # Points
    set f [ttk::labelframe $var(top).points -text [msgcat::mc {Points}] \
	       -padding 2]

    set var(pointtxt) [text $f.txt \
			   -height 10 \
			   -width 25 \
			   -wrap none \
			   -font [font actual TkDefaultFont] \
			   -yscrollcommand [list $f.yscroll set] \
			   -fg [ThemeTreeForeground] \
			   -bg [ThemeTreeBackground]]
    ttk::scrollbar $f.yscroll -command [list $var(pointtxt) yview] \
	-orient vertical

    grid $var(pointtxt) $f.yscroll -sticky news
    grid rowconfigure $f 0 -weight 1
    grid columnconfigure $f 0 -weight 1

    pack forget $var(top).param
    pack $var(top).points -side right -fill both -expand true
    pack $var(top).param -side left -fill both -expand true

    PolygonPointCB $varname
}

# actions

proc PolygonClose {varname} {
    upvar #0 $varname var
    global $varname

    $var(frame) marker $var(id) delete callback rotate MarkerBaseCenterRotateCB
    $var(frame) marker $var(id) delete callback edit PolygonPointCB
    $var(frame) marker $var(id) delete callback end edit PolygonPointCB

    MarkerBaseCenterClose $varname
}

proc PolygonApply {varname} {
    upvar #0 $varname var
    global $varname

    set points [string trim [$var(pointtxt) get 1.0 end]]
    if {$points != [string trim $var(points)]} {
	regsub -all "\n" $points " " points
	$var(frame) marker $var(id) polygon point \
	    $var(system) $var(sky) $var(skyformat) "\{$points\}"
	MarkerBaseApply $varname
    } else {
	MarkerBaseCenterRotate $varname
	MarkerBaseCenterApply $varname
    }
}

# callbacks

proc PolygonCoordCB {varname {dummy {}}} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,marker)} {
	puts stderr "PolygonCoordCB"
    }

    MarkerAnalysisStatsSystem $varname
    MarkerAnalysisPlot3dSystem $varname
    MarkerBaseCoordCB $varname
    MarkerBaseCenterMoveCB $varname
    MarkerBaseCenterRotateCB $varname
    PolygonPointCB $varname
}

proc PolygonPointCB {varname {dummy {}}} {
    upvar #0 $varname var
    global $varname

    if {![info exists var(pointtxt)] || ![winfo exists $var(pointtxt)]} {
	return
    }

    set var(points) [$var(frame) get marker $var(id) polygon point \
			 $var(system) $var(sky) $var(skyformat)]
    $var(pointtxt) delete 1.0 end
    $var(pointtxt) insert end [string trimright $var(points)]
}
