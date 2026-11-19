#  Copyright (C) 1999-2021
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

# A catalog can have several plot and histogram windows. var(plots) and
# var(hists) list them, var(plot,var)/var(hist,var) is the current one,
# and each keeps its own settings in var(plot,<vvarname>,*) and
# var(hist,<vvarname>,*). var(plot,x) etc. hold the dialog and command
# settings, which apply to the current window.

proc CATPlot {varname} {
    if {[CATPlotDialogInit $varname]} {
	CATPlotGenerate $varname
    }
}

proc CATPlotNew {varname} {
    if {[CATPlotDialogInit $varname]} {
	CATPlotCreate $varname
    }
}

proc CATPlotDialogInit {varname} {
    upvar #0 $varname var
    global $varname

    # do we have a db?
    if {![TBLValidDB $var(tbldb)]} {
	return 0
    }

    if {$var(plot,x) == {}} {
	set var(plot,x) "\$$var(colx)"
    }
    if {$var(plot,y) == {}} {
	set var(plot,y) "\$$var(coly)"
    }

    if {[CATPlotDialog $varname]} {
	if {$var(plot,x) != {} && $var(plot,y) != {}} {
	    return 1
	}
    }
    return 0
}

# update the current plot, create one if needed
proc CATPlotGenerate {varname} {
    upvar #0 $varname var
    global $varname

    CATPlotPrune $varname
    set vvarname $var(plot,var)
    if {$vvarname == {}} {
	CATPlotCreate $varname
	return
    }

    foreach ww {x xerr y yerr} {
	set var(plot,$vvarname,$ww) $var(plot,$ww)
    }
    CATPlotData $varname $vvarname
}

proc CATPlotCreate {varname} {
    upvar #0 $varname var
    global $varname

    incr var(plot,seq)
    if {$var(plot,seq) == 1} {
	set vvarname plot${varname}
    } else {
	set vvarname plot${varname}_$var(plot,seq)
    }

    foreach ww {x xerr y yerr} {
	set var(plot,$vvarname,$ww) $var(plot,$ww)
    }
    lappend var(plots) $vvarname
    set var(plot,var) $vvarname
    set var(plot) 1

    CATPlotData $varname $vvarname
}

# regenerate all plots
proc CATPlotUpdate {varname} {
    upvar #0 $varname var
    global $varname

    CATPlotPrune $varname
    foreach vvarname $var(plots) {
	CATPlotData $varname $vvarname
    }
}

# forget plots the user has closed
proc CATPlotPrune {varname} {
    upvar #0 $varname var
    global $varname

    set ll {}
    foreach vvarname $var(plots) {
	if {[PlotPing $vvarname]} {
	    lappend ll $vvarname
	} else {
	    array unset var "plot,$vvarname,*"
	}
    }
    set var(plots) $ll

    if {[lsearch -exact $ll $var(plot,var)] < 0} {
	set var(plot,var) [lindex $ll end]
    }
    set var(plot) [expr {[llength $ll] > 0}]
}

proc CATPlotDestroy {varname} {
    upvar #0 $varname var
    global $varname

    foreach vvarname $var(plots) {
	PlotDestroy $vvarname
    }
    CATPlotPrune $varname
}

proc CATPlotData {varname vvarname} {
    # use var_ because db can have column name 'var'
    upvar #0 $varname var_
    global $varname

    set x_ $var_(plot,$vvarname,x)
    set xerr_ $var_(plot,$vvarname,xerr)
    set y_ $var_(plot,$vvarname,y)
    set yerr_ $var_(plot,$vvarname,yerr)

    if {$xerr_ == {} && $yerr_ == {}} {
	set dim xy
    } elseif {$xerr_ != {} && $yerr_ == {}} {
	set dim xyex
    } elseif {$xerr_ == {} && $yerr_ != {}} {
	set dim xyey
    } else {
	set dim xyexey
    }

    global $var_(tbldb)
    set nrows [starbase_nrows $var_(tbldb)]
    set cols [starbase_columns $var_(tbldb)]

    upvar #0 $vvarname vvar
    global $vvarname

    set xdata ${vvarname}xx
    set ydata ${vvarname}yy
    set xedata ${vvarname}xe
    set yedata ${vvarname}ye
    global $xdata $ydata $xedata $yedata

    if {[info command $xdata] == {}} {
	blt::vector create $xdata $ydata $xedata $yedata
    }

    set xx {}
    set yy {}
    set xe {}
    set ye {}
    for {set ii 1} {$ii <= $nrows} {incr ii} {
	foreach col $cols {
	    set val [starbase_get $var_(tbldb) $ii \
			 [starbase_colnum $var_(tbldb) $col]]
	    # here's a tough one-- what to do if the col is blank
	    # for now, just set it to '0'
	    if {[string trim "$val"] == {}} {
		set val 0
	    }
	    eval "set \{$col\} \{$val\}"
	}

	switch $dim {
	    xy {
		append xx [subst "$x_ "]
		append yy [subst "$y_ "]
		append xe [subst "0 "]
		append ye [subst "0 "]
	    }
	    xyex {
		append xx [subst "$x_ "]
		append yy [subst "$y_ "]
		append xe [subst "$xerr_ "]
		append ye [subst "0 "]
	    }
	    xyey {
		append xx [subst "$x_ "]
		append yy [subst "$y_ "]
		append xe [subst "0 "]
		append ye [subst "$yerr_ "]
	    }
	    xyexey {
		append xx [subst "$x_ "]
		append yy [subst "$y_ "]
		append xe [subst "$xerr_ "]
		append ye [subst "$yerr_ "]
	    }
	}
    }

    $xdata set $xx
    $ydata set $yy
    $xedata set $xe
    $yedata set $ye

    if {![PlotPing $vvarname]} {
	PlotDialog $vvarname $var_(title) true
	PlotAddGraph $vvarname line

	set vvar(mode) pointer
	PlotChangeMode $vvarname

	set vvar(callback) [list CATPlotSelectRows $varname $vvarname]
	set vvar(graph,ds,xdata) $xdata
	set vvar(graph,ds,ydata) $ydata
	set vvar(graph,ds,xedata) $xedata
	set vvar(graph,ds,yedata) $yedata
	set vvar(graph,ds,line,width) 0
	set vvar(graph,ds,line,shape,symbol) circle
	set vvar(graph,ds,line,shape,size) 5
	set vvar(graph,ds,line,shape,color) black
	set vvar(graph,ds,line,shape,fill) 1

	PlotExternal $vvarname xyexey
    }

    # colnames can change
    set xtitle [regsub -all {\$*} $x_ {}]
    set ytitle [regsub -all {\$*} $y_ {}]
    PlotTitle $vvarname $var_(title) $xtitle $ytitle
    wm title $vvar(top) "$ytitle vs $xtitle - $var_(title)"

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
    ThemeMenu $mb

    # file
    $mb add cascade -label [msgcat::mc {File}] -menu $mb.file
    ThemeMenu $mb.file
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
	-command "TBLEditDialog ed2 x $var(catdb)"
    ttk::entry $f.xerr -textvariable ed2(xerr) -width 21
    ttk::button $f.bxerr -text [msgcat::mc {Edit}] \
	-command "TBLEditDialog ed2 xerr $var(catdb)"
    ttk::menubutton $f.mx -text {Cols} -menu $f.mx.menu
    ttk::menubutton $f.mxerr -text {Cols} -menu $f.mxerr.menu

    CATPlotDialogColsMenu $varname $f.mx x
    CATPlotDialogColsMenu $varname $f.mxerr xerr

    ttk::label $f.ty -text {Y}
    ttk::entry $f.y -textvariable ed2(y) -width 21
    ttk::button $f.by -text [msgcat::mc {Edit}] \
	-command "TBLEditDialog ed2 y $var(catdb)"
    ttk::entry $f.yerr -textvariable ed2(yerr) -width 21
    ttk::button $f.byerr -text [msgcat::mc {Edit}] \
	-command "TBLEditDialog ed2 yerr $var(catdb)"
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

    DialogWait $w ed2(ok) $w.buttons.ok
    destroy $w
    destroy $mb

    if {$ed2(ok)} {
	set var(plot,x) $ed2(x)
	set var(plot,xerr) $ed2(xerr)
	set var(plot,y) $ed2(y)
	set var(plot,yerr) $ed2(yerr)
    }

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

    ThemeMenu $m
    $m configure -tearoff 0
    if {[TBLValidDB $var(catdb)]} {
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

proc CATHistogram {varname} {
    if {[CATHistogramDialogInit $varname]} {
	CATHistogramGenerate $varname
    }
}

proc CATHistogramNew {varname} {
    if {[CATHistogramDialogInit $varname]} {
	CATHistogramCreate $varname
    }
}

proc CATHistogramDialogInit {varname} {
    upvar #0 $varname var
    global $varname

    # do we have a db?
    if {![TBLValidDB $var(tbldb)]} {
	return 0
    }

    if {$var(hist,col) == {}} {
	set var(hist,col) $var(colx)
    }

    if {[CATHistogramDialog $varname]} {
	if {$var(hist,col) != {}} {
	    return 1
	}
    }
    return 0
}

# settings each histogram keeps for itself
proc CATHistogramParams {} {
    return {hist,col bar,num bar,min bar,max bar,minmax \
		graph,ds,bar,border,color graph,ds,bar,color \
		graph,ds,bar,fill}
}

# update the current histogram, create one if needed
proc CATHistogramGenerate {varname} {
    upvar #0 $varname var
    global $varname

    CATHistogramPrune $varname
    set vvarname $var(hist,var)
    if {$vvarname == {}} {
	CATHistogramCreate $varname
	return
    }

    foreach pp [CATHistogramParams] {
	set var(hist,$vvarname,$pp) $var($pp)
    }
    CATHistogramData $varname $vvarname
}

proc CATHistogramCreate {varname} {
    upvar #0 $varname var
    global $varname

    incr var(hist,seq)
    if {$var(hist,seq) == 1} {
	set vvarname hist${varname}
    } else {
	set vvarname hist${varname}_$var(hist,seq)
    }

    foreach pp [CATHistogramParams] {
	set var(hist,$vvarname,$pp) $var($pp)
    }
    lappend var(hists) $vvarname
    set var(hist,var) $vvarname
    set var(hist) 1

    # no window if it fails, so prune it
    if {![CATHistogramData $varname $vvarname]} {
	CATHistogramPrune $varname
    }
}

# regenerate all histograms
proc CATHistogramUpdate {varname} {
    upvar #0 $varname var
    global $varname

    CATHistogramPrune $varname
    foreach vvarname $var(hists) {
	CATHistogramData $varname $vvarname
    }
}

# forget histograms the user has closed
proc CATHistogramPrune {varname} {
    upvar #0 $varname var
    global $varname

    set ll {}
    foreach vvarname $var(hists) {
	if {[PlotPing $vvarname]} {
	    lappend ll $vvarname
	} else {
	    array unset var "hist,$vvarname,*"
	}
    }
    set var(hists) $ll

    if {[lsearch -exact $ll $var(hist,var)] < 0} {
	set var(hist,var) [lindex $ll end]
    }
    set var(hist) [expr {[llength $ll] > 0}]
}

proc CATHistogramDestroy {varname} {
    upvar #0 $varname var
    global $varname

    foreach vvarname $var(hists) {
	PlotDestroy $vvarname
    }
    CATHistogramPrune $varname
}

proc CATHistogramData {varname vvarname} {
    # use var_ because db can have column name 'var'
    upvar #0 $varname var_
    global $varname

    global $var_(tbldb)

    upvar #0 $vvarname vvar
    global $vvarname

    set pp hist,$vvarname
    set col $var_($pp,hist,col)

    set xdata ${vvarname}xx
    set ydata ${vvarname}yy
    global $xdata $ydata

    if {[info command $xdata] == {}} {
	blt::vector create $xdata $ydata
    }

    if {$var_($pp,bar,minmax)} {
	set min $var_($pp,bar,min)
	set max $var_($pp,bar,max)
    } else {
	CATHistogramMinMaxCalc $varname $col min max
	set var_($pp,bar,min) $min
	set var_($pp,bar,max) $max
	if {$var_(hist,var) == $vvarname} {
	    set var_(bar,min) $min
	    set var_(bar,max) $max
	}
    }
    set num $var_($pp,bar,num)

    set diff [expr {double($max)-double($min)}]
    if {$diff <= 0 || $num <= 0} {
	Error [msgcat::mc {Unable to generate plot}]
	return 0
    }
    set width [expr {$diff/double($num)}]
    set var_(bar,width) $width

    set xx {}
    set yy {}
    for {set ii 0} {$ii<$num} {incr ii} {
	lappend xx [expr {double($ii)*$width + $width/2. + $min}]
	lappend yy 0
    }

    # bin of each row (rows start at 1), -1 if none, and rows of each bin
    set rowbin {}

    set rows [starbase_nrows $var_(tbldb)]
    set colnum [starbase_colnum $var_(tbldb) $col]
    for {set ii 1} {$ii<=$rows} {incr ii} {
	lappend rowbin -1
	set vv [starbase_get $var_(tbldb) $ii $colnum]
	if {$vv != {} && [string is double $vv]} {
	    if {$vv >= $min && $vv <= $max} {
		set kk [expr {int(floor(($vv-$min)/$width))}]
		# The upper bound belongs to the last bin.  Floating-point
		# roundoff can also put values just below max in bin $num.
		if {$kk >= $num} {
		    set kk [expr {$num-1}]
		}
		lset yy $kk [expr {[lindex $yy $kk]+1}]
		lset rowbin end $kk
		lappend br($kk) $ii
	    }
	}
    }
    set binrows {}
    for {set ii 0} {$ii<$num} {incr ii} {
	if {[info exists br($ii)]} {
	    lappend binrows $br($ii)
	} else {
	    lappend binrows {}
	}
    }
    set var_($pp,rowbin) $rowbin
    set var_($pp,binrows) $binrows

    $xdata set $xx
    $ydata set $yy

    if {![PlotPing $vvarname]} {
	PlotDialog $vvarname $var_(title) true
	PlotAddGraph $vvarname bar

	set vvar(mode) pointer
	PlotChangeMode $vvarname

	set vvar(callback) [list CATHistogramSelectBins $varname $vvarname]
	set var_($pp,graph) $vvar(graph,current)

	set vvar(graph,ds,xdata) $xdata
	set vvar(graph,ds,ydata) $ydata
	set vvar(graph,ds,bar,width) $width
	PlotExternal $vvarname xy
	set var_($pp,ds) $vvar(graph,ds,current)
    } else {
	set vvar(graph,current) $var_($pp,graph)
	set vvar(graph,ds,current) $var_($pp,ds)
	PlotRestoreState $vvarname
    }

    set vvar(graph,ds,xdata) $xdata
    set vvar(graph,ds,ydata) $ydata
    set vvar(graph,ds,bar,width) $width
    PlotDataSetName $vvarname $col

    set vvar(graph,ds,bar,border,color) $var_($pp,graph,ds,bar,border,color)
    set vvar(graph,ds,bar,color) $var_($pp,graph,ds,bar,color)
    set vvar(graph,ds,bar,fill) $var_($pp,graph,ds,bar,fill)
    PlotBarUpdateElement $vvarname

    PlotTitle $vvarname $var_(title) $col {Counts}
    wm title $vvar(top) "$col - $var_(title)"

    PlotStats $vvarname
    PlotList $vvarname
    return 1
}

proc CATHistogramDialog {varname} {
    upvar #0 $varname var
    global $varname
    global ds9
    global ed3

    set w ".${varname}hist"
    set mb ".${varname}histmb"

    set ed3(ok) 0
    set ed3(col) $var(hist,col)
    set ed3(num) $var(bar,num)
    set ed3(min) $var(bar,min)
    set ed3(max) $var(bar,max)

    set ed3(graph,ds,bar,border,color) $var(graph,ds,bar,border,color)
    set ed3(graph,ds,bar,color) $var(graph,ds,bar,color)
    set ed3(graph,ds,bar,fill) $var(graph,ds,bar,fill)

    DialogCreate $w [msgcat::mc {Histogram}] ed3(ok)

    $w configure -menu $mb
    ThemeMenu $mb

    # file
    $mb add cascade -label [msgcat::mc {File}] -menu $mb.file
    ThemeMenu $mb.file
    $mb.file add command -label [msgcat::mc {Apply}] -command {set ed3(ok) 1}
    $mb.file add command -label [msgcat::mc {Cancel}] -command {set ed3(ok) 0}

    # edit
    $mb add cascade -label [msgcat::mc {Edit}] -menu $mb.edit
    EditMenu $mb $varname

    set g [ttk::frame $w.param]

    # Params
    set f [ttk::labelframe $g.hist -text [msgcat::mc {Parameters}]]

    ttk::label $f.tcol -text [msgcat::mc {Column}]
    ttk::menubutton $f.col -textvariable ed3(col) -menu $f.col.menu

    CATHistogramColsMenu $varname $f.col col [list CATHistogramMinMax $varname]

    ttk::label $f.tnum -text [msgcat::mc {Bins}]
    ttk::entry $f.num -textvariable ed3(num) -width 7

    ttk::label $f.tmin -text [msgcat::mc {Min}]
    ttk::entry $f.min -textvariable ed3(min) -width 13

    ttk::label $f.tmax -text [msgcat::mc {Max}]
    ttk::entry $f.max -textvariable ed3(max) -width 13

    grid $f.tcol $f.col -padx 2 -pady 2 -sticky ew
    grid $f.tnum $f.num -padx 2 -pady 2 -sticky ew
    grid $f.tmin $f.min -padx 2 -pady 2 -sticky ew
    grid $f.tmax $f.max -padx 2 -pady 2 -sticky ew

    # Properties
    set f [ttk::labelframe $g.prop -text [msgcat::mc {Properties}]]

    ttk::label $f.tbordercolor -text [msgcat::mc {Border}]
    ColorMenuButton $f.bordercolor ed3 graph,ds,bar,border,color {}

    ttk::label $f.tcolor -text [msgcat::mc {Color}]
    ColorMenuButton $f.color ed3 graph,ds,bar,color {}

    ttk::checkbutton $f.fill -text [msgcat::mc {Fill}] \
	-variable ed3(graph,ds,bar,fill)

    grid $f.tbordercolor $f.bordercolor -padx 2 -pady 2 -sticky ew
    grid $f.tcolor $f.color $f.fill -padx 2 -pady 2 -sticky ew

    pack $g.hist $g.prop -side top -fill both -expand true

    # Buttons
    set f [ttk::frame $w.buttons]
    ttk::button $f.ok -text [msgcat::mc {OK}] -command {set ed3(ok) 1} \
        -default active
    ttk::button $f.cancel -text [msgcat::mc {Cancel}] -command {set ed3(ok) 0}
    pack $f.ok $f.cancel -side left -expand true -padx 2 -pady 4

    bind $w <Return> {set ed3(ok) 1}

    # Fini
    ttk::separator $w.sep -orient horizontal
    pack $w.param -side top -fill both -expand true
    pack $w.buttons $w.sep -side bottom -fill x

    CATHistogramMinMax $varname

    DialogWait $w ed3(ok) $w.buttons.ok
    destroy $w
    destroy $mb

    if {$ed3(ok)} {
	set var(hist,col) $ed3(col)

	set var(bar,num) $ed3(num)
	set var(bar,min) $ed3(min)
	set var(bar,max) $ed3(max)
	set var(bar,minmax) 1

	set var(graph,ds,bar,border,color) $ed3(graph,ds,bar,border,color)
	set var(graph,ds,bar,color) $ed3(graph,ds,bar,color)
	set var(graph,ds,bar,fill) $ed3(graph,ds,bar,fill)
    }

    set rr $ed3(ok)
    unset ed3
    return $rr
}

proc CATHistogramColsMenu {varname f ww cmd} {
    upvar #0 $varname var
    global $varname
    global $var(tbldb)
    global ed3
    global ds9

    set m $f.menu

    ThemeMenu $m
    $m configure -tearoff 0
    if {[TBLValidDB $var(tbldb)]} {
	set cnt -1
	foreach col [starbase_columns $var(tbldb)] {
	    $m add command -label $col \
		-command [list CATHistogramColsMenuCmd $ww $col $cmd]

	    # wrap if needed
	    incr cnt
	    if {$cnt>=$ds9(menu,size,wrap)} {
		set cnt 0
		$m entryconfig $col -columnbreak 1
	    }
	}
    }
}

proc CATHistogramColsMenuCmd {ww col cmd} {
    global ed3

    set ed3($ww) $col
    if {$cmd != {}} {
	eval $cmd
    }
}

proc CATHistogramMinMax {varname} {
    upvar #0 $varname var
    global $varname
    global ed3

    CATHistogramMinMaxCalc $varname $ed3(col) min max

    set ed3(min) $min
    set ed3(max) $max
}

proc CATHistogramMinMaxCalc {varname col minname maxname} {
    upvar #0 $varname var
    global $varname

    upvar $minname min
    upvar $maxname max

    global $var(tbldb)

    set min 0
    set max 0

    if {$col != {} && [TBLValidDB $var(tbldb)]} {
	set rows [starbase_nrows $var(tbldb)]
	set colnum [starbase_colnum $var(tbldb) $col]
	set ll {}
	for {set ii 1} {$ii<=$rows} {incr ii} {
	    set vv [starbase_get $var(tbldb) $ii $colnum]
	    if {$vv != {} && [string is double $vv]} {
		lappend ll $vv
	    }
	}
	if {$ll != {}} {
	    set min [expr min([join $ll ,])]
	    set max [expr max([join $ll ,])]
	}
    }
}


# used by CATALOG
# highlite rows in every plot and histogram, except skip (the window
# they came from)
proc CATPlotHighliteElement {varname rowlist {skip {}}} {
    upvar #0 $varname var
    global $varname

    # rowlist starts at 1
    set result {}
    foreach rr $rowlist {
	append result "[expr $rr-1] "
    }

    foreach vvarname $var(plots) {
	if {$vvarname == $skip} {
	    continue
	}

	upvar #0 $vvarname vvar
	global $vvarname

	if {[info exists vvar(1,graph)]} {
	    # keep region select (shift-add) in sync
	    set vvar(1,select,rows) $result
	    $vvar(1,proc,highlite) $vvarname 1 1 $result
	}
    }

    # histograms: highlite every bin holding a selected row
    foreach vvarname $var(hists) {
	if {$vvarname == $skip || \
		![info exists var(hist,$vvarname,rowbin)]} {
	    continue
	}

	upvar #0 $vvarname vvar
	global $vvarname

	set bins {}
	foreach rr $rowlist {
	    set bb [lindex $var(hist,$vvarname,rowbin) [expr {$rr-1}]]
	    if {$bb != {} && $bb >= 0} {
		lappend bins $bb
	    }
	}
	set bins [lsort -integer -unique $bins]

	if {[info exists vvar(1,graph)]} {
	    set vvar(1,select,rows) $bins
	    $vvar(1,proc,highlite) $vvarname 1 1 $bins
	}
    }
}

# plot callback: select the rows in the catalog and in the other plots
proc CATPlotSelectRows {varname vvarname rowlist cc} {
    upvar #0 $varname var
    global $varname

    CATSelectRows $varname plot $rowlist $cc

    # only process from first graph
    if {$cc != 1 || ![info exists ${varname}(plots)]} {
	return
    }
    CATPlotHighliteElement $varname [lsort -unique $rowlist] $vvarname
}

# histogram callback: select the rows in the clicked bins
# binlist starts at 1
proc CATHistogramSelectBins {varname vvarname binlist cc} {
    upvar #0 $varname var
    global $varname

    if {![info exists var(hist,$vvarname,binrows)]} {
	return
    }

    set rowlist {}
    foreach bb $binlist {
	set rowlist [concat $rowlist \
			 [lindex $var(hist,$vvarname,binrows) [expr {$bb-1}]]]
    }
    set rowlist [lsort -integer -unique $rowlist]

    CATSelectRows $varname plot $rowlist $cc

    # only process from first graph
    if {$cc != 1} {
	return
    }
    CATPlotHighliteElement $varname $rowlist $vvarname
}
