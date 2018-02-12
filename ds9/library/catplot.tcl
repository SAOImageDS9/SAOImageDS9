#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc CATPlot {varname} {
    upvar #0 $varname var
    global $varname

    # do we have a db?
    if {![CATValidDB $var(tbldb)]} {
	return
    }

    if {$var(plot,x) == {}} {
	set var(plot,x) "\$$var(colx)"
    }
    if {$var(plot,y) == {}} {
	set var(plot,y) "\$$var(coly)"
    }

    if {[CATPlotDialog $varname]} {
	if {$var(plot,x) != {} && $var(plot,y) != {}} {
	    CATPlotGenerate $varname
	}
    }
}

proc CATPlotGenerate {varname} {
    upvar #0 $varname var
    global $varname

    if {$var(plot,xerr) == {} && $var(plot,yerr) == {}} {
	set dim xy
    } elseif {$var(plot,xerr) != {} && $var(plot,yerr) == {}} {
	set dim xyex
    } elseif {$var(plot,xerr) == {} && $var(plot,yerr) != {}} {
	set dim xyey
    } else {
	set dim xyexey
    }

    global $var(tbldb)
    set nrows [starbase_nrows $var(tbldb)]
    set cols [starbase_columns $var(tbldb)]

    set rr {}
    for {set ii 1} {$ii <= $nrows} {incr ii} {
	foreach col $cols {
	    set val [starbase_get $var(tbldb) $ii \
			 [starbase_colnum $var(tbldb) $col]]
	    # here's a tough one-- what to do if the col is blank
	    # for now, just set it to '0'
	    if {[string trim "$val"] == {}} {
		set val 0
	    }
	    eval "set \{$col\} \{$val\}"
	}

	switch $dim {
	    xy {append rr [subst "$var(plot,x), $var(plot,y)\n"]}
	    xyex {append rr [subst "$var(plot,x), $var(plot,y), $var(plot,xerr)\n"]}
	    xyey {append rr [subst "$var(plot,x), $var(plot,y), $var(plot,yerr)\n"]}
	    xyexey {append rr [subst "$var(plot,x), $var(plot,y), $var(plot,xerr), $var(plot,yerr)\n"]}
	}
    }

    set xtitle [regsub -all {\$*} $var(plot,x) {}]
    set ytitle [regsub -all {\$*} $var(plot,y) {}]

    set vvarname plot${varname}
    upvar #0 $vvarname vvar
    global $vvarname

    set ping [PlotPing $vvarname]

    if {!$ping} {
	PlotScatterDialog $vvarname $var(title) {} {} {}
	set vvar(callback) "CATSelectRows $varname plot"
	set var(plot) 1
	set var(plot,var) $vvarname
    }

    PlotClearData $vvarname
    PlotDataSet $vvarname $dim $rr
    PlotTitle $vvarname $var(title) $xtitle $ytitle
    $vvar(proc,updategraph) $vvarname
    PlotStats $vvarname
    PlotList $vvarname
}

proc CATPlotDialog {varname} {
    upvar #0 $varname var
    global $varname
    global ds9
    global ed2

    set w ".${varname}plot"
    set mb ".${varname}plotmb"

    set ed2(ok) 0
    set ed2(x) $var(plot,x)
    set ed2(xerr) $var(plot,xerr)
    set ed2(y) $var(plot,y)
    set ed2(yerr) $var(plot,yerr)

    DialogCreate $w [msgcat::mc {Plot}] ed2(ok)

    $w configure -menu $mb
    menu $mb

    # file
    $mb add cascade -label [msgcat::mc {File}] -menu $mb.file
    menu $mb.file
    $mb.file add command -label [msgcat::mc {Apply}] -command {set ed2(ok) 1}
    $mb.file add command -label [msgcat::mc {Cancel}] -command {set ed2(ok) 0}

    # edit
    $mb add cascade -label [msgcat::mc {Edit}] -menu $mb.edit
    EditMenu $mb $varname

    # param
    set f [ttk::frame $w.param]

    ttk::label $f.taxis -text {Axis}
    ttk::label $f.terr -text {Error}

    ttk::label $f.tx -text {X}
    ttk::entry $f.x -textvariable ed2(x) -width 21
    ttk::button $f.bx -text [msgcat::mc {Edit}] \
	-command "CATEditDialog ed2 x $var(catdb)"
    ttk::entry $f.xerr -textvariable ed2(xerr) -width 21
    ttk::button $f.bxerr -text [msgcat::mc {Edit}] \
	-command "CATEditDialog ed2 xerr $var(catdb)"
    ttk::menubutton $f.mx -text {Cols} -menu $f.mx.menu
    ttk::menubutton $f.mxerr -text {Cols} -menu $f.mxerr.menu

    CATPlotDialogColsMenu $varname $f.mx x
    CATPlotDialogColsMenu $varname $f.mxerr xerr

    ttk::label $f.ty -text {Y}
    ttk::entry $f.y -textvariable ed2(y) -width 21
    ttk::button $f.by -text [msgcat::mc {Edit}] \
	-command "CATEditDialog ed2 y $var(catdb)"
    ttk::entry $f.yerr -textvariable ed2(yerr) -width 21
    ttk::button $f.byerr -text [msgcat::mc {Edit}] \
	-command "CATEditDialog ed2 yerr $var(catdb)"
    ttk::menubutton $f.my -text {Cols} -menu $f.my.menu
    ttk::menubutton $f.myerr -text {Cols} -menu $f.myerr.menu

    CATPlotDialogColsMenu $varname $f.my y
    CATPlotDialogColsMenu $varname $f.myerr yerr

    grid x $f.taxis x $f.terr -padx 2 -pady 2 -sticky ew
    grid $f.tx $f.x $f.bx $f.xerr $f.bxerr -padx 2 -pady 2 -sticky ew
    grid x $f.mx x $f.mxerr -padx 2 -pady 2 -sticky ew
    grid $f.ty $f.y $f.by $f.yerr $f.byerr -padx 2 -pady 2 -sticky ew
    grid x $f.my x $f.myerr -padx 2 -pady 2 -sticky ew

    # Buttons
    set f [ttk::frame $w.buttons]
    ttk::button $f.ok -text [msgcat::mc {OK}] -command {set ed2(ok) 1} \
        -default active 
    ttk::button $f.cancel -text [msgcat::mc {Cancel}] -command {set ed2(ok) 0}
    pack $f.ok $f.cancel -side left -expand true -padx 2 -pady 4

    bind $w <Return> {set ed2(ok) 1}

    # Fini
    ttk::separator $w.sep -orient horizontal
    pack $w.param -side top -fill both -expand true
    pack $w.buttons $w.sep -side bottom -fill x

    DialogCenter $w
    DialogWait $w ed2(ok) $w.buttons.ok

    if {$ed2(ok)} {
	set var(plot,x) $ed2(x)
	set var(plot,xerr) $ed2(xerr)
	set var(plot,y) $ed2(y)
	set var(plot,yerr) $ed2(yerr)
    }

    DialogDismiss $w
    destroy $mb

    set rr $ed2(ok)
    unset ed2
    return $rr
}

proc CATPlotDialogColsMenu {varname f ww} {
    upvar #0 $varname var
    global $varname
    global $var(catdb)
    global ed2
    global ds9

    set m $f.menu

    menu $m -tearoff 0
    if {[CATValidDB $var(catdb)]} {
	set cnt -1
	foreach col [starbase_columns $var(catdb)] {
	    $m add command -label $col -command "set ed2($ww) \\$$col"

	    # wrap if needed
	    incr cnt
	    if {$cnt>=$ds9(menu,size,wrap)} {
		set cnt 0
		$m entryconfig $col -columnbreak 1
	    }
	}
    }
}
