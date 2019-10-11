#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc MarkerBasePandaRectDialog {varname} {
    upvar #0 $varname var
    global $varname

    # base panda dialog
    MarkerBasePandaDialog $varname

    # callbacks
    $var(frame) marker $var(id) callback rotate \
	MarkerBaseCenterRotateCB $varname

    set f $var(top).param

    # Radius
    ttk::label $f.tmajor -text [msgcat::mc {Major}]
    ttk::label $f.tminor -text [msgcat::mc {Minor}]
    ttk::label $f.touter -text [msgcat::mc {Outer}]
    ttk::entry $f.radius1 -textvariable ${varname}(radius1) -width 13 
    ttk::entry $f.radius2 -textvariable ${varname}(radius2) -width 13 
    DistMenuButton $f.uradius $varname dcoord 1 dformat \
	[list $var(proc,distCB) $varname]
    DistMenuEnable $f.uradius.menu $varname dcoord dformat
    ttk::label $f.tinner -text [msgcat::mc {Inner}]
    ttk::entry $f.radius3 -textvariable ${varname}(radius3) -width 13 

    # Annuli
    ttk::label $f.tannuli -text [msgcat::mc {Annuli}]
    ttk::entry $f.annuli -textvariable ${varname}(annuli) -width 13

    grid x $f.tmajor $f.tminor -padx 2 -pady 2 -sticky w
    grid $f.touter $f.radius1 $f.radius2 $f.uradius -padx 2 -pady 2 -sticky w
    grid $f.tinner $f.radius3 -padx 2 -pady 2 -sticky w
    grid $f.tannuli $f.annuli -padx 2 -pady 2 -sticky w

    # Angle
    ttk::label $f.tangle -text [msgcat::mc {Angle}]
    ttk::entry $f.angle -textvariable ${varname}(angle) -width 13 
    ttk::label $f.uangle -text [msgcat::mc {Degrees}]

    grid $f.tangle $f.angle $f.uangle -padx 2 -pady 2 -sticky w

    # init - do this last
    $var(proc,distCB) $varname
    MarkerBaseCenterRotateCB $varname
}

# actions

proc MarkerBasePandaRectClose {varname} {
    upvar #0 $varname var
    global $varname

    $var(frame) marker $var(id) delete callback rotate MarkerBaseCenterRotateCB

    MarkerBasePandaClose $varname
}

proc MarkerBasePandaRectApply {varname} {
    upvar #0 $varname var
    global $varname

    MarkerBasePandaApply $varname
    MarkerBaseCenterRotate $varname
}

# callbacks

proc MarkerBasePandaRectCoordCB {varname {dummy {}}} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,marker)} {
	puts stderr "MarkerBasePandaRectCoordCB"
    }

    MarkerBasePandaCoordCB $varname
    MarkerBaseCenterRotateCB $varname
}

proc MarkerBasePandaRectEditCB {varname {dummy {}}} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,marker)} {
	puts stderr "MarkerBasePandaRectEditCB"
    }

    set t [$var(frame) get marker $var(id) $var(which) radius \
	       $var(dcoord) $var(dformat)]

    set last [llength $t]
    set var(annuli) [expr $last/2-1]
    set var(radius1) [lindex $t [expr $last-2]]
    set var(radius2) [lindex $t [expr $last-1]]
    set var(radius3) [lindex $t 0]

    $var(annulitxt) delete 1.0 end
    $var(annulitxt) insert end "$t"

    set a [$var(frame) get marker $var(id) $var(which) angle \
	       $var(system) $var(sky)]

    set last [expr [llength $a]-1]
    set var(ang1) [lindex $a 0]
    set var(ang2) [lindex $a $last]
    set var(angnum) $last

    $var(angtxt) delete 1.0 end
    $var(angtxt) insert end "$a"
}

proc MarkerBasePandaRectDistCB {varname {dummy {}}} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,marker)} {
	puts stderr "MarkerBasePandaRectDistCB"
    }

    MarkerBasePandaDistCB $varname
}
