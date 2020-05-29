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
    for {set ii 0} {$ii<$ianalysis(param,count)} {incr ii} {
	if {$ianalysis(param,$ii) == "$param"} {
	    break
	}
    }
    if {$ii == $ianalysis(param,count)} {
	return
    }

    set w {.param}

    set ed(ok) 0

    DialogCreate $w $param ed(ok)

    # Param
    set f [ttk::frame $w.param]

    for {set jj 0} {$jj<$ianalysis(param,$ii,count)} {incr jj} {
	set ianalysis(param,$ii,$jj,value) $ianalysis(param,$ii,$jj,last)
	ttk::label $f.l$jj -text "$ianalysis(param,$ii,$jj,title)"
	switch -- $ianalysis(param,$ii,$jj,type) {
	    entry {
		ttk::entry $f.a$jj \
		    -textvariable ianalysis(param,$ii,$jj,value) \
		    -width 40
	    }
	    open {
		ttk::frame $f.a$jj
		ttk::entry $f.a$jj.e \
		    -textvariable ianalysis(param,$ii,$jj,value) \
		    -width 30
		ttk::button $f.a$jj.b -text [msgcat::mc {Browse}] \
		    -command [list AnalysisParamFileOpen param,$ii,$jj,value]
		grid $f.a$jj.e $f.a$jj.b -padx 2 -pady 2 -sticky w
	    }
	    save {
		ttk::frame $f.a$jj
		ttk::entry $f.a$jj.e \
		    -textvariable ianalysis(param,$ii,$jj,value) \
		    -width 30
		ttk::button $f.a$jj.b -text [msgcat::mc {Browse}] \
		    -command [list AnalysisParamFileSave param,$ii,$jj,value]
		grid $f.a$jj.e $f.a$jj.b -padx 2 -pady 2 -sticky w
	    }
	    checkbox {
		ttk::checkbutton $f.a$jj -text {} \
		    -variable ianalysis(param,$ii,$jj,value)
	    }
	    menu {
		set ll [split $ianalysis(param,$ii,$jj,default) |]
		ttk::menubutton $f.a$jj \
		    -text "$ianalysis(param,$ii,$jj,value)" \
		    -menu $f.a$jj.menu
		set m [ThemeMenu $f.a$jj.menu]
		for {set kk 0} {$kk<[llength $ll]} {incr kk} {
			$m add command -label [lindex $ll $kk] \
			    -command "AnalysisParamMenu ianalysis(param,$ii,$jj,value) [lindex $ll $kk] $f.a$jj"
		}
	    }
	}
	ttk::label $f.i$jj -text "$ianalysis(param,$ii,$jj,info)" \
	    -font "{$ds9(times)} $pds9(font,size) normal italic"

	grid $f.l$jj $f.a$jj $f.i$jj -padx 2 -pady 2 -sticky w
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
	for {set jj 0} {$jj<$ianalysis(param,$ii,count)} {incr jj} {
	    set exp "\\\$$ianalysis(param,$ii,$jj,var)"
	    if {[regexp $exp $str]} {
		regsub -all $exp $str "$ianalysis(param,$ii,$jj,value)" str
	    }
	    set ianalysis(param,$ii,$jj,last) $ianalysis(param,$ii,$jj,value)
	}
    }

    set rr $ed(ok)
    unset ed
    return $rr
}

proc AnalysisParamFileOpen {which} {
    global ianalysis

    FileLast analysisparamfbox $ianalysis($which)
    set ianalysis($which) [OpenFileDialog analysisparamfbox]
}

proc AnalysisParamFileSave {which} {
    global ianalysis

    FileLast analysisparamfbox $ianalysis($which)
    set ianalysis($which) [SaveFileDialog analysisparamfbox]
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

    set ii $ianalysis(param,count)

    while {[gets $ch line] >= 0} {
	set exp {([^,]*),([^,]*),([^,]*),([^,]*),([^,]*),([^,]*),([^,]*)}
	if {[regexp $exp $line foo p1 p2 p3 p4 p5 p6 p7]} {
	    if {$p1 != {mode}} {
		regsub -all {\"} $p4 {} p4
		regsub -all {\"} $p7 {} p7
		set jj $ianalysis(param,$ii,count)
		set ianalysis(param,$ii,$jj,var) "$p1"
		if {$p3 == {h}} {
		    set ianalysis(param,$ii,$jj,title) "(${p1})"
		} else {
		    set ianalysis(param,$ii,$jj,title) "$p1"
		}
		set ianalysis(param,$ii,$jj,info) "$p7"
		incr ianalysis(param,$ii,count)
		switch -- $p2 {
		    b {
			set ianalysis(param,$ii,$jj,type) checkbox
			set ianalysis(param,$ii,$jj,default) [FromYesNo $p4]
			set ianalysis(param,$ii,$jj,last) [FromYesNo $p4]
			set ianalysis(param,$ii,$jj,value) [FromYesNo $p4]
		    }
		    s {
			if {$p5 != {}} {
			    set ianalysis(param,$ii,$jj,type) menu
			    set ianalysis(param,$ii,$jj,default) "$p5"
			} else {
			    set ianalysis(param,$ii,$jj,type) entry
			    set ianalysis(param,$ii,$jj,default) "$p4"
			}
			set ianalysis(param,$ii,$jj,last) "$p4"
			set ianalysis(param,$ii,$jj,value) "$p4"
		    }
		    default {
			set ianalysis(param,$ii,$jj,type) entry
			set ianalysis(param,$ii,$jj,default) "$p4"
			set ianalysis(param,$ii,$jj,last) "$p4"
			set ianalysis(param,$ii,$jj,value) "$p4"
		    }
		}
	    }
	}
    }

    close $ch
}
