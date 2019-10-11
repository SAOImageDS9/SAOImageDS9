#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc PandaDialog {varname} {
    upvar #0 $varname var
    global $varname

    # see if we already have a header window visible
    if {[winfo exists $var(top)]} {
	raise $var(top)
	return
    }

    # procs
    set var(which) panda
    set var(proc,apply) PandaApply
    set var(proc,close) PandaClose
    set var(proc,generate) PandaGenerate
    set var(proc,coordCB) PandaCoordCB
    set var(proc,editCB) PandaEditCB
    set var(proc,distCB) PandaDistCB

    # base panda dialog
    MarkerBasePandaDialog $varname

    set f $var(top).param

    # Radius
    ttk::label $f.tinner -text [msgcat::mc {Inner}]
    ttk::label $f.touter -text [msgcat::mc {Outer}]
    ttk::label $f.tradius -text [msgcat::mc {Radius}]
    ttk::entry $f.inner -textvariable ${varname}(inner) -width 13
    ttk::entry $f.outer -textvariable ${varname}(outer) -width 13
    DistMenuButton $f.uradius $varname dcoord 1 dformat \
	[list $var(proc,distCB) $varname]
    DistMenuEnable $f.uradius.menu $varname dcoord dformat

    # Annuli
    ttk::label $f.tannuli -text [msgcat::mc {Annuli}]
    ttk::entry $f.annuli -textvariable ${varname}(annuli) -width 13

    grid x $f.tinner $f.touter -padx 2 -pady 2 -sticky w
    grid $f.tradius $f.inner $f.outer $f.uradius -padx 2 -pady 2 -sticky w
    grid $f.tannuli $f.annuli -padx 2 -pady 2 -sticky w

    # init - do this last
    PandaDistCB $varname
}

# actions

proc PandaClose {varname} {
    upvar #0 $varname var
    global $varname

    MarkerBasePandaClose $varname
}

proc PandaApply {varname} {
    upvar #0 $varname var
    global $varname

    MarkerBasePandaApply $varname
}

proc PandaGenerate {varname} {
    upvar #0 $varname var
    global $varname

    MarkerBaseAnnulusGenerateCircle $varname
    MarkerBasePandaGenerateAngles $varname
}

# callbacks

proc PandaCoordCB {varname {dummy {}}} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,marker)} {
	puts stderr "PandaCoordCB"
    }

    MarkerBasePandaCoordCB $varname
}

proc PandaEditCB {varname {dummy {}}} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,marker)} {
	puts stderr "PandaEditCB"
    }

    set t [$var(frame) get marker $var(id) panda radius \
	       $var(dcoord) $var(dformat)]

    set last [expr [llength $t]-1]
    set var(inner) [lindex $t 0]
    set var(outer) [lindex $t $last]
    set var(annuli) $last

    $var(annulitxt) delete 1.0 end
    $var(annulitxt) insert end "$t"

    set a [$var(frame) get marker $var(id) panda angle $var(system) $var(sky)]

    set last [expr [llength $a]-1]
    set var(ang1) [lindex $a 0]
    set var(ang2) [lindex $a $last]
    set var(angnum) $last

    $var(angtxt) delete 1.0 end
    $var(angtxt) insert end "$a"
}

proc PandaDistCB {varname {dummy {}}} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,marker)} {
	puts stderr "PandaDistCB"
    }

    MarkerBasePandaDistCB $varname
}
