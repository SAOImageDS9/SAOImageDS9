#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc MarkerBasePandaDialog {varname} {
    upvar #0 $varname var
    global $varname

    global pmarker

    # variables
    set rr [$var(frame) get wcs]
    set var(dcoord) [lindex $rr 0]
    set var(dformat) $pmarker(dformat)
    AdjustCoordSystem $varname dcoord

    set var(method) dist
    set var(init) 0

    # base
    MarkerBaseAnnulusDialog $varname

    # menus
    MarkerBaseAnnulusMethodMenu $varname

    # analysis
    $var(mb) add cascade -label [msgcat::mc {Analysis}] -menu $var(mb).analysis
    menu $var(mb).analysis

    MarkerAnalysisStatsDialog $varname
    MarkerAnalysisPandaDialog $varname

    # callbacks
#    $var(frame) marker $var(id) callback move $var(proc,editCB) $varname
    $var(frame) marker $var(id) callback edit $var(proc,editCB) $varname
    $var(frame) marker $var(id) callback end edit $var(proc,editCB) $varname

    set f $var(top).param

    # Angles
    ttk::label $f.tang1 -text [msgcat::mc {Start}]
    ttk::label $f.tang2 -text [msgcat::mc {End}]
    ttk::label $f.tangles -text [msgcat::mc {Angles}]
    ttk::entry $f.ang1 -textvariable ${varname}(ang1) -width 13
    ttk::entry $f.ang2 -textvariable ${varname}(ang2) -width 13
    ttk::label $f.uangles -text [msgcat::mc {Degrees}]
    ttk::label $f.tangnum -text [msgcat::mc {Number}]
    ttk::entry $f.angnum -textvariable ${varname}(angnum) -width 13

    grid x $f.tang1 $f.tang2 -padx 2 -pady 2 -sticky w
    grid $f.tangles $f.ang1 $f.ang2 $f.uangles -padx 2 -pady 2 -sticky w
    grid $f.tangnum $f.angnum -padx 2 -pady 2 -sticky w

    # Radius
    set f [ttk::labelframe $var(top).radius -text [msgcat::mc {Radius}] \
	       -padding 2]
    set var(annulitxt) [text $f.txt \
			    -height 15 \
			    -width 15 \
			    -wrap none \
			    -font [font actual TkDefaultFont] \
			    -yscrollcommand [list $f.yscroll set] \
			    ]
    ttk::scrollbar $f.yscroll -command [list $var(annulitxt) yview] \
	-orient vertical

    grid $var(annulitxt) $f.yscroll -sticky news
    grid rowconfigure $f 0 -weight 1
    grid columnconfigure $f 0 -weight 1

    # Radius Fini
    grid $var(top).radius -row 0 -column 1 -sticky news
    grid rowconfigure $var(top) 0 -weight 1
    grid columnconfigure $var(top) 1 -weight 1

    # Angles
    set f [ttk::labelframe $var(top).angles -text [msgcat::mc {Angles}] \
	       -padding 2]

    set var(angtxt) [text $f.txt \
			    -height 15 \
			    -width 15 \
			    -wrap none \
			    -font [font actual TkDefaultFont] \
			    -yscrollcommand [list $f.yscroll set] \
			    ]
    ttk::scrollbar $f.yscroll -command [list $var(angtxt) yview] \
	-orient vertical

    grid $var(angtxt) $f.yscroll -sticky news
    grid rowconfigure $f 0 -weight 1
    grid columnconfigure $f 0 -weight 1

    # Angles Fini
    grid $var(top).angles -row 0 -column 2 -sticky news
    grid rowconfigure $var(top) 0 -weight 1
    grid columnconfigure $var(top) 2 -weight 1

    set var(init) 1
}

# actions

proc MarkerBasePandaClose {varname} {
    upvar #0 $varname var
    global $varname

#    $var(frame) marker $var(id) delete callback move $var(proc,editCB)
    $var(frame) marker $var(id) delete callback edit $var(proc,editCB)
    $var(frame) marker $var(id) delete callback end edit $var(proc,editCB)

    MarkerBaseCenterClose $varname
}

proc MarkerBasePandaApply {varname} {
    upvar #0 $varname var
    global $varname

    set levels {}
    regsub -all "\n" "[$var(annulitxt) get 1.0 end]" " " levels
    # and trim any trailing spaces
    set levels [string trimright $levels " "]

    set angles {}
    regsub -all "\n" "[$var(angtxt) get 1.0 end]" " " angles
    # and trim any trailing spaces
    set angles [string trimright $angles " "]

    if {($levels != {}) && ($angles != {})} {
	$var(frame) marker $var(id) $var(which) edit \
	    "\{$angles\}" "\{$levels\}" $var(system) $var(sky) \
	    $var(dcoord) $var(dformat)
    }

    MarkerBaseCenterApply $varname
}

proc MarkerBasePandaGenerateAngles {varname} {
    upvar #0 $varname var
    global $varname

    $var(angtxt) delete 1.0 end

    set ang1 $var(ang1)
    set ang2 $var(ang2)
    set angnum $var(angnum)

    if {($ang1 != {}) && ($ang2 != {}) && ($angnum != {})} {
	# normalize between 0 <= ang < 360
	if {[::math::fuzzy::tgt $ang1 0]} {
	    while {[::math::fuzzy::tge $ang1 360]} {
		set ang1 [expr $ang1-360]
	    }
	} else {
	    while {[::math::fuzzy::tlt $ang1 0]} {
		set ang1 [expr $ang1+360]
	    }
	}

	if {[::math::fuzzy::tgt $ang2 0]} {
	    while {[::math::fuzzy::tge $ang2 360]} {
		set ang2 [expr $ang2-360]
	    }
	} else {
	    while {[::math::fuzzy::tlt $ang2 0]} {
		set ang2 [expr $ang2+360]
	    }
	}

	# with ang2 > ang1
	while {[::math::fuzzy::tge $ang1 $ang2]} {
	    set ang2 [expr $ang2+360]
	}

	for {set i 0} {$i<=$angnum} {incr i} {
	    set v [expr ((($ang2-$ang1)/double($angnum))*$i)+$ang1]
	    $var(angtxt) insert end "$v\n"
	}
    }
}

# callbacks


proc MarkerBasePandaCoordCB {varname {dummy {}}} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,marker)} {
	puts stderr "MarkerBasePandaCoordCB"
    }

    MarkerAnalysisPandaSystem $varname
    MarkerAnalysisStatsSystem $varname
    MarkerBaseCoordCB $varname
    MarkerBaseCenterMoveCB $varname
    if {$var(init)} {
	$var(proc,editCB) $varname
    }
}

proc MarkerBasePandaDistCB {varname {dummy {}}} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,marker)} {
	puts stderr "MarkerBasePandaDistCB"
    }

    $var(proc,editCB) $varname
}

