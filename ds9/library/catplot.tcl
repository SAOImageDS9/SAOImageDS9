#  Copyright (C) 1999-2021
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc CATPlot {varname} {
    upvar #0 $varname var
    global $varname

    # do we have a db?
    if {![TBLValidDB $var(tbldb)]} {
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
    # use var_ because db can have column name 'var'
    upvar #0 $varname var_
    global $varname

    if {$var_(plot,xerr) == {} && $var_(plot,yerr) == {}} {
	set dim xy
    } elseif {$var_(plot,xerr) != {} && $var_(plot,yerr) == {}} {
	set dim xyex
    } elseif {$var_(plot,xerr) == {} && $var_(plot,yerr) != {}} {
	set dim xyey
    } else {
	set dim xyexey
    }

    global $var_(tbldb)
    set nrows [starbase_nrows $var_(tbldb)]
    set cols [starbase_columns $var_(tbldb)]

    set vvarname plot${varname}
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
		append xx [subst "$var_(plot,x) "]
		append yy [subst "$var_(plot,y) "]
		append xe [subst "0 "]
		append ye [subst "0 "]
	    }
	    xyex {
		append xx [subst "$var_(plot,x) "]
		append yy [subst "$var_(plot,y) "]
		append xe [subst "$var_(plot,xerr) "]
		append ye [subst "0 "]
	    }
	    xyey {
		append xx [subst "$var_(plot,x) "]
		append yy [subst "$var_(plot,y) "]
		append xe [subst "0 "]
		append ye [subst "$var_(plot,yerr) "]
	    }
	    xyexey {
		append xx [subst "$var_(plot,x) "]
		append yy [subst "$var_(plot,y) "]
		append xe [subst "$var_(plot,xerr) "]
		append ye [subst "$var_(plot,yerr) "]
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

	set var_(plot) 1
	set var_(plot,var) $vvarname

	set vvar(callback) "CATSelectRows $varname plot"
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
    set xtitle [regsub -all {\$*} $var_(plot,x) {}]
    set ytitle [regsub -all {\$*} $var_(plot,y) {}]
    PlotTitle $vvarname $var_(title) $xtitle $ytitle

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
    upvar #0 $varname var
    global $varname

    # do we have a db?
    if {![TBLValidDB $var(tbldb)]} {
	return
    }

    if {$var(hist,col) == {}} {
	set var(hist,col) $var(colx)
    }

    if {[CATHistogramDialog $varname]} {
	if {$var(hist,col) != {}} {
	    CATHistogramGenerate $varname
	}
    }
}

proc CATHistogramGenerate {varname} {
    # use var_ because db can have column name 'var'
    upvar #0 $varname var_
    global $varname

    global $var_(tbldb)

    set vvarname hist${varname}
    upvar #0 $vvarname vvar
    global $vvarname

    set xdata ${vvarname}xx
    set ydata ${vvarname}yy
    global $xdata $ydata

    if {[info command $xdata] == {}} {
	blt::vector create $xdata $ydata
    }

    if {$var_(bar,minmax)} {
	set min $var_(bar,min)
	set max $var_(bar,max)
    } else {
	CATHistogramMinMaxCalc $varname $var_(hist,col) min max
	set var_(bar,min) $min
	set var_(bar,max) $max
    }
    set num $var_(bar,num)

    set diff [expr {double($max)-double($min)}]
    if {$diff <= 0 || $num <= 0} {
	Error [msgcat::mc {Unable to generate plot}]
	return
    }
    set width [expr {$diff/double($num)}]
    set var_(bar,width) $width

    set xx {}
    set yy {}
    for {set ii 0} {$ii<$num} {incr ii} {
	lappend xx [expr {double($ii)*$width + $width/2. + $min}]
	lappend yy 0
    }

    set rows [starbase_nrows $var_(tbldb)]
    set colnum [starbase_colnum $var_(tbldb) $var_(hist,col)]
    for {set ii 1} {$ii<=$rows} {incr ii} {
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
	    }
	}
    }

    $xdata set $xx
    $ydata set $yy

    if {![PlotPing $vvarname]} {
	PlotDialog $vvarname $var_(title) true
	PlotAddGraph $vvarname bar

	set var_(hist) 1
	set var_(hist,var) $vvarname
	set var_(hist,graph) $vvar(graph,current)

	set vvar(graph,ds,xdata) $xdata
	set vvar(graph,ds,ydata) $ydata
	set vvar(graph,ds,bar,width) $width
	PlotExternal $vvarname xy
	set var_(hist,ds) $vvar(graph,ds,current)
	} else {
	set vvar(graph,current) $var_(hist,graph)
	set vvar(graph,ds,current) $var_(hist,ds)
	PlotRestoreState $vvarname
    }

    set vvar(graph,ds,xdata) $xdata
    set vvar(graph,ds,ydata) $ydata
    set vvar(graph,ds,bar,width) $width
    PlotDataSetName $vvarname $var_(hist,col)

    set vvar(graph,ds,bar,border,color) $var_(graph,ds,bar,border,color)
    set vvar(graph,ds,bar,color) $var_(graph,ds,bar,color)
    set vvar(graph,ds,bar,fill) $var_(graph,ds,bar,fill)
    PlotBarUpdateElement $vvarname

    PlotTitle $vvarname $var_(title) $var_(hist,col) {Counts}

    PlotStats $vvarname
    PlotList $vvarname
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
proc CATPlotHighliteElement {varname rowlist} {
    upvar #0 $varname var
    global $varname

    set vvarname $var(plot,var)
    upvar #0 $vvarname vvar
    global $vvarname

    # rowlist starts at 1
    set result {}
    foreach rr $rowlist {
	append result "[expr $rr-1] "
    }

    if {[info exists vvar(1,graph)]} {
	$vvar(1,proc,highlite) $vvarname 1 1 $result
    }
}
