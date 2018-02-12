#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc AnnulusDialog {varname} {
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
    
    set var(method) dist

    # procs
    set var(which) annulus
    set var(proc,apply) AnnulusApply
    set var(proc,close) AnnulusClose
    set var(proc,generate) AnnulusGenerate
    set var(proc,coordCB) AnnulusCoordCB
    set var(proc,editCB) AnnulusEditCB
    set var(proc,distCB) AnnulusDistCB

    # base
    MarkerBaseAnnulusDialog $varname

    # menus
    MarkerBaseAnnulusMethodMenu $varname

    # analysis
    $var(mb) add cascade -label [msgcat::mc {Analysis}] -menu $var(mb).analysis
    menu $var(mb).analysis

    MarkerAnalysisStatsDialog $varname
    MarkerAnalysisRadialDialog $varname

    # callbacks
    $var(frame) marker $var(id) callback edit AnnulusEditCB $varname
    $var(frame) marker $var(id) callback end edit AnnulusEditCB $varname

    set f $var(top).param

    # Annuli
    ttk::label $f.tinner -text [msgcat::mc {Inner}]
    ttk::label $f.touter -text [msgcat::mc {Outer}]
    ttk::label $f.tradius -text [msgcat::mc {Radius}]
    ttk::entry $f.inner -textvariable ${varname}(inner) -width 13
    ttk::entry $f.outer -textvariable ${varname}(outer) -width 13
    DistMenuButton $f.uradius $varname dcoord 1 dformat \
	[list AnnulusDistCB $varname]
    DistMenuEnable $f.uradius.menu $varname dcoord 1 dformat
    ttk::label $f.tannuli -text [msgcat::mc {Annuli}]
    ttk::entry $f.annuli -textvariable ${varname}(annuli) -width 13

    grid x $f.tinner $f.touter -padx 2 -pady 2 -sticky w
    grid $f.tradius $f.inner $f.outer $f.uradius -padx 2 -pady 2 -sticky w
    grid $f.tannuli $f.annuli -padx 2 -pady 2 -sticky w

    # Radius
    set f [ttk::labelframe $var(top).radius -text [msgcat::mc {Radius}] \
	       -padding 2]

    set var(annulitxt) [text $f.txt \
			    -height 10 \
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

    # init - do this last
    AnnulusDistCB $varname
}

# actions

proc AnnulusClose {varname} {
    upvar #0 $varname var
    global $varname

    $var(frame) marker $var(id) delete callback edit AnnulusEditCB
    $var(frame) marker $var(id) delete callback end edit AnnulusEditCB

    MarkerBaseCenterClose $varname
}

proc AnnulusApply {varname} {
    upvar #0 $varname var
    global $varname

    set levels {}
    regsub -all "\n" "[$var(annulitxt) get 1.0 end]" " " levels
    # and trim any trailing spaces
    set levels [string trimright $levels " "]

    if {$levels != {}} {
	$var(frame) marker $var(id) annulus radius "\{$levels\}" \
	    $var(dcoord) $var(dformat)
    }

    MarkerBaseCenterApply $varname
}

proc AnnulusGenerate {varname} {
    upvar #0 $varname var
    global $varname

    MarkerBaseAnnulusGenerateCircle $varname
}

# callbacks

proc AnnulusCoordCB {varname {dummy {}}} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,marker)} {
	puts stderr "AnnulusCoordCB"
    }

    MarkerAnalysisRadialSystem $varname
    MarkerAnalysisStatsSystem $varname
    MarkerBaseCoordCB $varname
    MarkerBaseCenterMoveCB $varname
}

proc AnnulusEditCB {varname {dummy {}}} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,marker)} {
	puts stderr "AnnulusEditCB"
    }
    
    set t [$var(frame) get marker $var(id) annulus radius \
	       $var(dcoord) $var(dformat)]

    set last [expr [llength $t]-1]
    set var(inner) [lindex $t 0]
    set var(outer) [lindex $t $last]
    set var(annuli) $last

    $var(annulitxt) delete 1.0 end
    $var(annulitxt) insert end "$t"
}

proc AnnulusDistCB {varname {dummy {}}} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,marker)} {
	puts stderr "AnnulusDistCB"
    }

    AnnulusEditCB $varname
}
