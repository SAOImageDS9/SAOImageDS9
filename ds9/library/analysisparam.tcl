#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc AnalysisParam {strname param} {
    upvar $strname str
    global ianalysis
    global ed

    global ds9
    global pds9

    # find it
    for {set i 0} {$i<$ianalysis(param,count)} {incr i} {
	if {$ianalysis(param,$i) == "$param"} {
	    break
	}
    }
    if {$i == $ianalysis(param,count)} {
	return
    }

    set w {.param}

    set ed(ok) 0

    DialogCreate $w $param ed(ok)

    # Param
    set f [ttk::frame $w.param]

    for {set j 0} {$j<$ianalysis(param,$i,count)} {incr j} {
	set ianalysis(param,$i,$j,value) $ianalysis(param,$i,$j,last)
	ttk::label $f.l$j -text "$ianalysis(param,$i,$j,title)"
	switch -- $ianalysis(param,$i,$j,type) {
	    entry {
		ttk::entry $f.a$j \
		    -textvariable ianalysis(param,$i,$j,value) \
		    -width 40
	    }
	    checkbox {
		ttk::checkbutton $f.a$j -text {} \
		    -variable ianalysis(param,$i,$j,value)
	    }
	    menu {
		set l [split $ianalysis(param,$i,$j,default) |]
		ttk::menubutton $f.a$j \
		    -text "$ianalysis(param,$i,$j,value)" \
		    -menu $f.a$j.menu
		set m [menu $f.a$j.menu]
		for {set k 0} {$k<[llength $l]} {incr k} {
			$m add command -label [lindex $l $k] \
			    -command "AnalysisParamMenu ianalysis(param,$i,$j,value) [lindex $l $k] $f.a$j"
		}
	    }
	}
	ttk::label $f.i$j -text "$ianalysis(param,$i,$j,info)" \
	    -font "{$ds9(times)} $pds9(font,size) normal italic"

	grid $f.l$j $f.a$j $f.i$j -padx 2 -pady 2 -sticky w
    }

    # Buttons
    set f [ttk::frame $w.buttons]
    ttk::button $f.ok -text [msgcat::mc {OK}] -command {set ed(ok) 1} \
	-default active
    ttk::button $f.cancel -text [msgcat::mc {Cancel}] -command {set ed(ok) 0}
    pack $f.ok $f.cancel -side left -expand true -padx 2 -pady 4

    bind $w <Return> {set ed(ok) 1}

    # Fini
    ttk::separator $w.sep -orient horizontal
    pack $w.buttons $w.sep -side bottom -fill x
    pack $w.param -side top -fill both -expand true

    DialogCenter $w 
    DialogWait $w ed(ok) $w.buttons.ok
    DialogDismiss $w

    if {$ed(ok)} {
	for {set j 0} {$j<$ianalysis(param,$i,count)} {incr j} {
	    set exp "\\\$$ianalysis(param,$i,$j,var)"
	    if {[regexp $exp $str]} {
		regsub -all $exp $str "$ianalysis(param,$i,$j,value)" str
	    }
	    set ianalysis(param,$i,$j,last) $ianalysis(param,$i,$j,value)
	}
    }

    set rr $ed(ok)
    unset ed
    return $rr
}

proc AnalysisParamMenu {varname value menu} {
    upvar $varname var

    set var $value
    $menu configure -text $value
}

proc ParseIRAFParam {filename} {
    global ianalysis
    global env

    # we are only concerned with unix like os
    set uparm {}
    if {[info exists env(UPARM)]} {
	set uparm "$env(UPARM)/$filename"
    }
    set iraf {}
    if {[info exists env(HOME)]} {
	set iraf "$env(HOME)/$filename"
    }
    
    if {[file exists "$filename"]} {
	catch {set ch [open "$filename"]}
    } elseif {[file exists "$uparm"]} {
	catch {set ch [open "$uparm"]}
    } elseif {[file exists "$iraf"]} {
	catch {set ch [open "$iraf"]}
    } else {
	return
    }

    set i $ianalysis(param,count)

    while {[gets $ch line] >= 0} {
	set exp {([^,]*),([^,]*),([^,]*),([^,]*),([^,]*),([^,]*),([^,]*)}
	if {[regexp $exp $line foo p1 p2 p3 p4 p5 p6 p7]} {
	    if {$p1 != {mode}} {
		regsub -all {\"} $p4 {} p4
		regsub -all {\"} $p7 {} p7
		set j $ianalysis(param,$i,count)
		set ianalysis(param,$i,$j,var) "$p1"
		if {$p3 == {h}} {
		    set ianalysis(param,$i,$j,title) "(${p1})"
		} else {
		    set ianalysis(param,$i,$j,title) "$p1"
		}
		set ianalysis(param,$i,$j,info) "$p7"
		incr ianalysis(param,$i,count)
		switch -- $p2 {
		    b {
			set ianalysis(param,$i,$j,type) checkbox
			set ianalysis(param,$i,$j,default) [FromYesNo $p4]
			set ianalysis(param,$i,$j,last) [FromYesNo $p4]
			set ianalysis(param,$i,$j,value) [FromYesNo $p4]
		    }
		    s {
			if {$p5 != {}} {
			    set ianalysis(param,$i,$j,type) menu
			    set ianalysis(param,$i,$j,default) "$p5"
			} else {
			    set ianalysis(param,$i,$j,type) entry
			    set ianalysis(param,$i,$j,default) "$p4"
			}
			set ianalysis(param,$i,$j,last) "$p4"
			set ianalysis(param,$i,$j,value) "$p4"
		    }
		    default {
			set ianalysis(param,$i,$j,type) entry
			set ianalysis(param,$i,$j,default) "$p4"
			set ianalysis(param,$i,$j,last) "$p4"
			set ianalysis(param,$i,$j,value) "$p4"
		    }
		}
	    }
	}
    }

    close $ch
}
