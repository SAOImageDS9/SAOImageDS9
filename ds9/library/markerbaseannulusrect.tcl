#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc MarkerBaseAnnulusRectDialog {varname unit major minor} {
    upvar #0 $varname var
    global $varname

    global pmarker

    set unit2 [string totitle $unit]

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

    # base
    MarkerBaseAnnulusDialog $varname

    # menus
    MarkerBaseAnnulusMethodMenu $varname

    # analysis
    $var(mb) add cascade -label [msgcat::mc {Analysis}] -menu $var(mb).analysis
    ThemeMenu $var(mb).analysis

    MarkerAnalysisStatsDialog $varname
    MarkerAnalysisRadialDialog $varname

    # callbacks
#    $var(frame) marker $var(id) callback move $var(proc,editCB) $varname
    $var(frame) marker $var(id) callback edit $var(proc,editCB) $varname
    $var(frame) marker $var(id) callback end edit $var(proc,editCB) $varname
    $var(frame) marker $var(id) callback rotate MarkerBaseCenterRotateCB $varname

    set f $var(top).param

    # Radius
    ttk::label $f.majorTitle -text $major
    ttk::label $f.minorTitle -text $minor
    ttk::label $f.outerTitle -text [msgcat::mc "Outer"]
    ttk::entry $f.radius1 -textvariable ${varname}(radius1) -width 13 
    ttk::entry $f.radius2 -textvariable ${varname}(radius2) -width 13 
    DistMenuButton $f.uradius $varname dcoord 1 dformat \
	[list $var(proc,distCB) $varname]
    DistMenuEnable $f.uradius.menu $varname dcoord dformat
    ttk::label $f.innerTitle -text [msgcat::mc "Inner"]
    ttk::entry $f.radius3 -textvariable ${varname}(radius3) -width 13 

    # Annulus
    ttk::label $f.tannuli -text [msgcat::mc {Annuli}]
    ttk::entry $f.vannuli -textvariable ${varname}(annuli) -width 13 

    # Angle
    ttk::label $f.tangle -text [msgcat::mc {Angle}]
    ttk::entry $f.vangle -textvariable ${varname}(angle) -width 13 
    ttk::label $f.uangle -text [msgcat::mc {Degrees}]

    grid x $f.majorTitle $f.minorTitle -padx 2 -pady 2 -sticky w
    grid $f.outerTitle $f.radius1 $f.radius2 $f.uradius \
	-padx 2 -pady 2 -sticky w
    grid $f.innerTitle $f.radius3 -padx 2 -pady 2 -sticky w
    grid $f.tannuli $f.vannuli -padx 2 -pady 2 -sticky w
    grid $f.tangle $f.vangle $f.uangle -padx 2 -pady 2 -sticky w

    # Annuli
    set f [ttk::labelframe $var(top).annuli -text [msgcat::mc {Annuli}] \
	       -padding 2]

    set var(annulitxt) [text $f.txt \
			    -height 10 \
			    -width 15 \
			    -wrap none \
			    -font [font actual TkDefaultFont] \
			    -yscrollcommand [list $f.yscroll set] \
			    -fg [ThemeTreeForeground] \
			    -bg [ThemeTreeBackground] \
			    ]
    ttk::scrollbar $f.yscroll -command [list $var(annulitxt) yview] \
	-orient vertical

    grid $var(annulitxt) $f.yscroll -sticky news
    grid rowconfigure $f 0 -weight 1
    grid columnconfigure $f 0 -weight 1

    # Fini
    grid $var(top).annuli -row 0 -column 1 -sticky news
    grid rowconfigure $var(top) 0 -weight 1
    grid columnconfigure $var(top) 1 -weight 1

    # init - do this last
    $var(proc,distCB) $varname
    MarkerBaseCenterRotateCB $varname
}

# actions

proc MarkerBaseAnnulusRectClose {varname} {
    upvar #0 $varname var
    global $varname

 #   $var(frame) marker $var(id) delete callback move $var(proc,editCB)
    $var(frame) marker $var(id) delete callback edit $var(proc,editCB)
    $var(frame) marker $var(id) delete callback end edit $var(proc,editCB)
    $var(frame) marker $var(id) delete callback rotate MarkerBaseCenterRotateCB

    MarkerBaseCenterClose $varname
}

proc MarkerBaseAnnulusRectApply {varname} {
    upvar #0 $varname var
    global $varname

    set levels {}
    regsub -all "\n" "[$var(annulitxt) get 1.0 end]" " " levels
    # and trim any trailing spaces
    set levels [string trimright $levels " "]

    if {$levels != {}} {
	$var(frame) marker $var(id) $var(which) radius "\{$levels\}" \
	    $var(dcoord) $var(dformat)
    }

    MarkerBaseCenterRotate $varname
    MarkerBaseCenterApply $varname
}

# callbacks

proc MarkerBaseAnnulusRectCoordCB {varname {dummy {}}} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,marker)} {
	puts stderr "MarkerBaseAnnulusRectCoordCB"
    }

    MarkerAnalysisRadialSystem $varname
    MarkerAnalysisStatsSystem $varname
    MarkerBaseCoordCB $varname
    MarkerBaseCenterMoveCB $varname
    MarkerBaseCenterRotateCB $varname
}

proc MarkerBaseAnnulusRectEditCB {varname {dummy {}}} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,marker)} {
	puts stderr "MarkerBaseAnnulusRectEditCB"
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
}

proc MarkerBaseAnnulusRectDistCB {varname {dummy {}}} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,marker)} {
	puts stderr "MarkerBaseAnnulusRectDistCB"
    }

    $var(proc,editCB) $varname
}
