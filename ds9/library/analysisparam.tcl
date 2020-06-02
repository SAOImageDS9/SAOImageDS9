#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc AnalysisParam {strname param} {
    upvar $strname str
    global ianalysis
    global ed

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
    set mb {.parammb}

    set ed(top) $w
    set ed(ok) 0

    DialogCreate $w $param ed(ok)

    $w configure -menu $mb
    ThemeMenu $mb

    # file
    $mb add cascade -label [msgcat::mc {File}] -menu $mb.file
    ThemeMenu $mb.file
    $mb.file add command -label [msgcat::mc {Apply}] -command {set ed(ok) 1}
    $mb.file add command -label [msgcat::mc {Cancel}] -command {set ed(ok) 0}

    # edit
    $mb add cascade -label [msgcat::mc {Edit}] -menu $mb.edit
    EditMenu $mb ed

    # Param
    set f [ttk::frame $w.param]

    if {$ianalysis(param,$ii,count) == 1 && $ianalysis(param,$ii,0) == {def}} {
	# simple case
	set jj 0
	for {set kk 0} {$kk<$ianalysis(param,$ii,$jj,count)} {incr kk} {
	    AnalysisParamItem $f $ii $jj $kk
	}
    } else {
	# tree view

	ttk::scrollbar $f.scroll -command [list $f.box yview]
	set ianalysis(listbox) [ttk::treeview $f.box \
				    -yscroll [list $f.scroll set] \
				    -selectmode browse \
				    -show tree \
				   ]

	grid $f.box $f.scroll -sticky news
	grid rowconfigure $f 0 -weight 1
	grid columnconfigure $f 2 -weight 1

	bind $ianalysis(listbox) <<TreeviewSelect>> AnalysisParamListUpdate

	set ianalysis(tabs) {}

	for {set jj 0} {$jj<$ianalysis(param,$ii,count)} {incr jj} {
	    set gg [ttk::frame $f.t$ii-$jj]
	    $ianalysis(listbox) insert {} end -id $gg \
		-text "$ianalysis(param,$ii,$jj)"

	    for {set kk 0} {$kk<$ianalysis(param,$ii,$jj,count)} {incr kk} {
		AnalysisParamItem $gg $ii $jj $kk
	    }
	}

	# select first item
	$ianalysis(listbox) selection set $f.t$ii-0
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
    destroy $mb

    if {$ed(ok)} {
	for {set jj 0} {$jj<$ianalysis(param,$ii,count)} {incr jj} {
	    for {set kk 0} {$kk<$ianalysis(param,$ii,$jj,count)} {incr kk} {
		set exp "\\\$$ianalysis(param,$ii,$jj,$kk,var)"
		if {[regexp $exp $str]} {
		    regsub -all $exp $str \
			"$ianalysis(param,$ii,$jj,$kk,value)" str
		}
	    }
	}
    }

    set rr $ed(ok)
    unset ed
    return $rr
}

proc AnalysisParamItem {f ii jj kk} {
    global ds9
    global pds9
    global ianalysis
    global current

    ttk::label $f.l$ii-$jj-$kk -text "$ianalysis(param,$ii,$jj,$kk,title)"

    switch -- $ianalysis(param,$ii,$jj,$kk,type) {
	entry {
	    set cmd $ianalysis(param,$ii,$jj,$kk,default)
	    AnalysisParamMacro cmd $current(frame)
	    set ianalysis(param,$ii,$jj,$kk,value) $cmd

	    ttk::entry $f.a$ii-$jj-$kk \
		-textvariable ianalysis(param,$ii,$jj,$kk,value) \
		-width 40
	}
	open {
	    set cmd $ianalysis(param,$ii,$jj,$kk,default)
	    AnalysisParamMacro cmd $current(frame)
	    set ianalysis(param,$ii,$jj,$kk,value) $cmd

	    ttk::frame $f.a$ii-$jj-$kk
	    ttk::entry $f.a$ii-$jj-$kk.e \
		-textvariable ianalysis(param,$ii,$jj,$kk,value) \
		-width 30
	    ttk::button $f.a$ii-$jj-$kk.b -text [msgcat::mc {Browse}] \
		-command \
		[list AnalysisParamFileOpen param,$ii,$jj,$kk,value]
	    grid $f.a$ii-$jj-$kk.e $f.a$ii-$jj-$kk.b \
		-padx 2 -pady 2 -sticky w
	}
	save {
	    set cmd $ianalysis(param,$ii,$jj,$kk,default)
	    AnalysisParamMacro cmd $current(frame)
	    set ianalysis(param,$ii,$jj,$kk,value) $cmd

	    ttk::frame $f.a$ii-$jj-$kk
	    ttk::entry $f.a$ii-$jj-$kk.e \
		-textvariable ianalysis(param,$ii,$jj,$kk,value) \
		-width 30
	    ttk::button $f.a$ii-$jj-$kk.b -text [msgcat::mc {Browse}] \
		-command \
		[list AnalysisParamFileSave param,$ii,$jj,$kk,value]
	    grid $f.a$ii-$jj-$kk.e $f.a$ii-$jj-$kk.b \
		-padx 2 -pady 2 -sticky w
	}
	checkbox {
	    set ianalysis(param,$ii,$jj,$kk,value) \
		$ianalysis(param,$ii,$jj,$kk,default)

	    ttk::checkbutton $f.a$ii-$jj-$kk -text {} \
		-variable ianalysis(param,$ii,$jj,$kk,value)
	}
	menu {
	    # default can contain the full menu 'aaa|bbb|ccc'
	    # set last to first item
	    set ll [split $ianalysis(param,$ii,$jj,$kk,default) |]
	    set ianalysis(param,$ii,$jj,$kk,value) [lindex $ll 0]

	    ttk::menubutton $f.a$ii-$jj-$kk \
		-text "$ianalysis(param,$ii,$jj,$kk,value)" \
		-menu $f.a$ii-$jj-$kk.menu

	    set mm [ThemeMenu $f.a$ii-$jj-$kk.menu]
	    for {set nn 0} {$nn<[llength $ll]} {incr nn} {
		$mm add command -label [lindex $ll $nn] \
		    -command "AnalysisParamMenu ianalysis(param,$ii,$jj,$kk,value) [lindex $ll $nn] $f.a$ii-$jj-$kk"
	    }
	}
    }

    ttk::label $f.i$ii-$jj-$kk -text "$ianalysis(param,$ii,$jj,$kk,info)" \
	-font "{$ds9(times)} $pds9(font,size) normal italic"

    grid $f.l$ii-$jj-$kk $f.a$ii-$jj-$kk $f.i$ii-$jj-$kk \
	-padx 2 -pady 2 -sticky w
}

proc AnalysisParamListUpdate {} {
    global ianalysis

    if {$ianalysis(tabs) != {}} {
	grid forget $ianalysis(tabs)
    }
    set ianalysis(tabs) [$ianalysis(listbox) selection]
    if {$ianalysis(tabs) != {}} {
	grid $ianalysis(tabs) -row 0 -column 2 -sticky new
    }
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

proc AnalysisParamMacro {varname {frame {}}} {
    upvar $varname var

    if {$frame == {}} {
	return
    }
    
    # escaped macros
    SetEscapedMacros var

    # $xdim,$ydim,$bitpix
    ParseXYBitpixMacro var $frame

    # $filename[$regions]
    ParseFilenameRegionMacro var $frame

    # $filename
    ParseFilenameMacro var $frame

    # $regions
    ParseRegionMacro var $frame

    # $env
    ParseEnvMacro var

    # $cen
    ParsePanMacro var $frame

    # $z
    ParseZMacro var $frame

    # escaped macros
    UnsetEscapedMacros var
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
		set kk $ianalysis(param,$ii,$jj,count)
		set ianalysis(param,$ii,$jj,$kk,var) "$p1"
		if {$p3 == {h}} {
		    set ianalysis(param,$ii,$jj,$kk,title) "(${p1})"
		} else {
		    set ianalysis(param,$ii,$jj,$kk,title) "$p1"
		}
		set ianalysis(param,$ii,$jj,$kk,info) "$p7"
		incr ianalysis(param,$ii,$jj,count)
		
		switch -- $p2 {
		    b {
			set ianalysis(param,$ii,$jj,$kk,type) checkbox
			set ianalysis(param,$ii,$jj,$kk,default) [FromYesNo $p4]
			set ianalysis(param,$ii,$jj,$kk,value) [FromYesNo $p4]
		    }
		    s {
			if {$p5 != {}} {
			    set ianalysis(param,$ii,$jj,$kk,type) menu
			    set ianalysis(param,$ii,$jj,$kk,default) "$p5"
			} else {
			    set ianalysis(param,$ii,$jj,$kk,type) entry
			    set ianalysis(param,$ii,$jj,$kk,default) "$p4"
			}
			set ianalysis(param,$ii,$jj,$kk,value) "$p4"
		    }
		    default {
			set ianalysis(param,$ii,$jj,$kk,type) entry
			set ianalysis(param,$ii,$jj,$kk,default) "$p4"
			set ianalysis(param,$ii,$jj,$kk,value) "$p4"
		    }
		}
	    }
	}
    }

    close $ch
}
