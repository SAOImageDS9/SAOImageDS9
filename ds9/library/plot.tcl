#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc PlotDef {} {
    global iap

    set iap(tt) {ap}
    set iap(windows) {}
    set iap(unique) 0

    set iap(jpeg,quality) 75
    set iap(tiff,compress) none
    set iap(error) [msgcat::mc {An error has occurred while creating the image. Please be sure that the plot window is in the upper left corner of the default screen and the entire window is visible.}]

    PlotDefState
}

# Canvas
proc PlotDestroy {varname} {
    upvar #0 $varname var
    global $varname
    
    global iap

    # see if it still is around
    if {![PlotPing $varname]} {
 	return
    }
    
    # delete all graphs
    foreach cc $var(graphs) {
	set var(graph,current) $cc
	set var(graph,ds,current) [lindex $var($cc,dss) 0]
	PlotRestoreState $varname

	PlotDeleteGraph $varname
    }
    
    destroy $var(top)
    destroy $var(mb)

    # stats window?
    if {$var(stats)} {
	SimpleTextDestroy "${varname}stats"
    }

    # list window?
    if {$var(list)} {
	SimpleTextDestroy "${varname}list"
    }

    # delete it from the xpa list
    set ii [lsearch $iap(windows) $varname]
    if {$ii>=0} {
	set iap(windows) [lreplace $iap(windows) $ii $ii]
    }

    unset $varname
}

proc PlotLayoutCanvas {varname} {
    upvar #0 $varname var
    global $varname

    set ss [grid size $var(top)]
    for {set jj 0} {$jj<[lindex $ss 0]} {incr jj} {
	grid columnconfigure $var(top) $jj -weight 0
    }
    for {set ii 0} {$ii<[lindex $ss 1]} {incr ii} {
	grid rowconfigure $var(top) $ii -weight 0
    }
    
    foreach cc $var(graphs) {
	grid forget $var($cc,canvas)
    }

    switch $var(layout) {
	grid {
	    set num [llength $var(graphs)]
	    set nr [expr int(sqrt($num)+.5)]
	    set nc [expr int(sqrt($num-1))+1]

	    set xx 0
	    set yy 0
	    foreach cc $var(graphs) {
		grid columnconfigure $var(top) $xx -weight 1
		grid rowconfigure $var(top) $yy -weight 1
		grid $var($cc,canvas) -row $yy -column $xx -sticky news

		incr xx
		if {$xx==$nc} {
		    set xx 0
		    incr yy
		}
	    }
	}
	column {
	    set ii 0
	    grid columnconfigure $var(top) 0 -weight 1
	    foreach cc $var(graphs) {
		grid rowconfigure $var(top) $ii -weight 1
		grid $var($cc,canvas) -row $ii -column 0 -sticky news
		incr ii
	    }
	}
	row {
	    set ii 0
	    grid rowconfigure $var(top) 0 -weight 1
	    foreach cc $var(graphs) {
		grid columnconfigure $var(top) $ii -weight 1
		grid $var($cc,canvas) -row 0 -column $ii -sticky news
		incr ii
	    }
	}
	strip {
	    set ww 1
	    set ii 0
	    grid columnconfigure $var(top) 0 -weight 1
	    foreach cc $var(graphs) {
		grid rowconfigure $var(top) $ii -weight $ww
		grid $var($cc,canvas) -row $ii -column 0 -sticky news

		set ww [expr int(100./$var(layout,strip,weight))]
		incr ii
	    }
	}
    }

    # needed so layout can be properly realized
    update idletasks
}

# Graph
# used by backup
proc PlotAddGraph {varname type} {
    upvar #0 $varname var
    global $varname

    incr ${varname}(seq)
    set cc $var(seq)
    lappend var(graphs) $cc
    set var(graph,current) $cc

    # Init graph vars
    PlotInitGraph $varname

    # create graph
    set var(graph,type) $type
    switch $type {
	line {
	    PlotLineAddGraph $varname
	    set var(graph,proc,updateelement) PlotLineUpdateElement
	    set var(graph,proc,highlite) PlotHighliteElement
	    set var(graph,proc,button) PlotButton
	}
	bar {
	    PlotBarAddGraph $varname
	    set var(graph,proc,updateelement) PlotBarUpdateElement
	    set var(graph,proc,highlite) PlotHighliteElement
	    set var(graph,proc,button) PlotButton
	}
	scatter {
	    PlotScatterAddGraph $varname
	    set var(graph,proc,updateelement) PlotScatterUpdateElement
	    set var(graph,proc,highlite) PlotScatterHighliteElement
	    set var(graph,proc,button) PlotScatterButton
	}
    }

    # create menu item
    $var(mb).canvas.select add radiobutton -label $var(graph,name) \
	-variable ${varname}(graph,current) -value $cc \
	-command [list PlotCurrentGraph $varname]

    # set up zoom stack, assuming mode is zoom
    global ds9
    switch $ds9(wm) {
	x11 -
	win32 {Blt_ZoomStack $var(graph) -mode release}
	aqua {Blt_ZoomStack $var(graph) -mode release -button "ButtonPress-2"}
    }

    $var(graph,proc,updateelement) $varname
    PlotUpdateCanvas $varname
    PlotUpdateGraph $varname

    PlotUpdateMenus $varname

    PlotStats $varname
    PlotList $varname

    PlotChangeMode $varname

    grid columnconfigure $var(canvas) 0 -weight 1
    grid rowconfigure $var(canvas) 0 -weight 1
    grid $var($cc,graph) -sticky news

    PlotLayoutCanvas $varname
}

proc PlotDeleteGraphCurrent {varname} {
    upvar #0 $varname var
    global $varname

    if {[llength $var(graphs)] <= 1} {
	return
    }

    PlotDeleteGraph $varname
}

proc PlotDeleteGraph {varname} {
    upvar #0 $varname var
    global $varname

    set cc $var(graph,current)

    # remove menu item
    $var(mb).canvas.select delete $var($cc,name)

    # delete all datasets
    foreach nn $var($cc,dss) {
	set var(graph,ds,current) $nn
	PlotDeleteDataSet $varname
    }

    # delete graph
    grid forget $var(graph)
    grid forget $var(canvas)
    destroy $var(graph)
    destroy $var(canvas)

    # remove from list
    set ii [lsearch $var(graphs) $cc]
    if {$ii>=0} {
	set var(graphs) [lreplace $var(graphs) $ii $ii]
    }

    # delete all graph vars
    foreach vv [array names $varname] {
	set gr [split $vv ,]
	if {[lindex $gr 0] == $cc} {
	    unset ${varname}($vv)
	}
    }

    # if last graph, stop here
    if {[llength $var(graphs)] == 0} {
	return
    }

    # set current graph
    set var(graph,current) [lindex $var(graphs) 0]
    set cc $var(graph,current)
    set var(graph,ds,current) [lindex $var($cc,dss) 0]
    PlotRestoreState $varname

    $var(graph,proc,updateelement) $varname
    PlotUpdateCanvas $varname
    PlotUpdateGraph $varname

    PlotUpdateMenus $varname

    PlotStats $varname
    PlotList $varname

    PlotLayoutCanvas $varname
}

# Data
proc PlotAddElement {varname} {
    upvar #0 $varname var
    global $varname

    # create graph elements
    set nn $var(graph,ds,current)
    global $var(graph,ds,xdata) $var(graph,ds,ydata)
    $var(graph) element create $nn \
	-xdata $var(graph,ds,xdata) -ydata $var(graph,ds,ydata)
    if {$var(graph,ds,xedata) != {}} {
	if {[$var(graph,ds,xedata) length] != 0} {
	    $var(graph) element configure $nn -xerror $var(graph,ds,xedata)
	}
    }
    if {$var(graph,ds,yedata) != {}} {
	if {[$var(graph,ds,yedata) length] != 0} {
	    $var(graph) element configure $nn -yerror $var(graph,ds,yedata)
	}
    }

    # update menus
    $var(graph,proc,updateelement) $varname

    PlotUpdateMenus $varname

    PlotStats $varname
    PlotList $varname
}

proc PlotDeleteDataSetCurrent {varname} {
    upvar #0 $varname var
    global $varname

    if {[llength $var(graph,dss)] == 0} {
	return
    }

    if {!$var(graph,ds,manage)} {
	return
    }

    PlotDeleteDataSet $varname
}

# backward compatibility, parser
proc PlotDeleteDataSetAll {varname} {
    upvar #0 $varname var
    global $varname

    if {[llength $var(graph,dss)] == 0} {
	return
    }

    foreach nn $var(graph,dss) {
	set var(graph,ds,current) $nn
	PlotDeleteDataSet $varname
    }
}

proc PlotDeleteDataSet {varname} {
    upvar #0 $varname var
    global $varname

    set cc $var(graph,current)
    set nn $var(graph,ds,current)

    if {[llength $var($cc,dss)] == 0} {
	return
    }

    # delete element
    $var($cc,graph) element delete $nn

    # destroy vectors
    blt::vector destroy $var($cc,$nn,xdata) $var($cc,$nn,ydata)
    switch $var($cc,$nn,dim) {
	xy {}
	xyex {blt::vector destroy $var($cc,$nn,xedata)}
	xyey {blt::vector destroy $var($cc,$nn,yedata)}
	xyexey {blt::vector destroy $var($cc,$nn,xedata) $var($cc,$nn,yedata)}
    }
    set ii [lsearch $var($cc,dss) $nn]
    if {$ii>=0} {
	set var($cc,dss) [lreplace $var($cc,dss) $ii $ii]
    }

    # delete all dataset vars
    foreach vv [array names $varname] {
	set gr [split $vv ,]
	if {[lindex $gr 0] == $cc && [lindex $gr 1] == $nn} {
	    unset ${varname}($vv)
	}
    }

    # set current dataset
    set var(graph,ds,current) [lindex $var($cc,dss) 0]
    PlotRestoreState $varname

    # update menus
    $var(graph,proc,updateelement) $varname

    PlotUpdateMenus $varname

    PlotStats $varname
    PlotList $varname
}

proc PlotCurrentGraph {varname} {
    upvar #0 $varname var
    global $varname

    # reset current dataset to first
    set cc $var(graph,current)
    set var(graph,ds,current) [lindex $var($cc,dss) 0]

    PlotRestoreState $varname

    PlotUpdateMenus $varname

    PlotStats $varname
    PlotList $varname
}

proc PlotCurrentDataSet {varname} {
    upvar #0 $varname var
    global $varname

    PlotRestoreState $varname

    PlotStats $varname
    PlotList $varname
}

proc PlotAxisFormat {varname axis w nn} {
    upvar #0 $varname var
    global $varname

    return [format $var(graph,axis,$axis,format) $nn]
}

proc PlotChangeAxis {varname} {
    upvar #0 $varname var
    global $varname

    switch $var(layout) {
	grid -
	column -
	row {PlotUpdateGraph $varname}
	strip {
	    PlotUpdateCanvas $varname
	    set cc $var(graph,current)
	    set nn $var(graph,ds,current)
	    foreach gg $var(graphs) {
		set var(graph,current) $gg
		set var(graph,ds,current) [lindex $var($gg,dss) 0]
		PlotRestoreState $varname

		PlotUpdateGraph $varname
	    }
	    set var(graph,current) $cc
	    set var(graph,ds,current) $nn
	    PlotRestoreState $varname
	}
    }
}

proc PlotChangeLayout {varname} {
    upvar #0 $varname var
    global $varname

    PlotUpdateCanvas $varname
    set cc $var(graph,current)
    set nn $var(graph,ds,current)
    foreach gg $var(graphs) {
	set var(graph,current) $gg
	set var(graph,ds,current) [lindex $var($gg,dss) 0]
	PlotRestoreState $varname

	PlotUpdateGraph $varname
    }
    set var(graph,current) $cc
    set var(graph,ds,current) $nn
    PlotRestoreState $varname
    PlotUpdateMenus $varname

    PlotLayoutCanvas $varname
}

proc PlotChangeMode {varname} {
    upvar #0 $varname var
    global $varname

    set nn 1
    foreach cc $var(graphs) {
	switch $var(mode) {
	    pointer {
		blt::RemoveBindTag $var($cc,graph) zoom-$var($cc,graph)
		bind $var($cc,graph) <1> \
		    [list PlotButtonInvoke $varname $cc $nn %x %y]
	    }
	    zoom {
		bind $var($cc,graph) <1> {}
		blt::AddBindTag $var($cc,graph) zoom-$var($cc,graph)
	    }
	}
    }
}

proc PlotList {varname} {
    upvar #0 $varname var
    global $varname

    if {!$var(list)} {
	return
    }

    set rr [PlotListGenerate $varname]
    SimpleTextDialog "${varname}list" [msgcat::mc {Data}] \
	40 20 insert top $rr PlotListDestroyCB $varname
}

proc PlotListGenerate {varname} {
    upvar #0 $varname var
    global $varname

    if {$var(graph,ds,xdata) == {}} {
	return
    }

    global $var(graph,ds,xdata) $var(graph,ds,ydata) \
	$var(graph,ds,xedata) $var(graph,ds,yedata)
    set ll [$var(graph,ds,xdata) length]
    set xx [$var(graph,ds,xdata) range]
    set yy [$var(graph,ds,ydata) range]

    set rr {}
    switch $var(graph,ds,dim) {
	xy {
	    for {set ii 0} {$ii<$ll} {incr ii} {
		append rr "[lindex $xx $ii] [lindex $yy $ii]\n"
	    }
	}
	xyex {
	    set xe [$var(graph,ds,xedata) range]
	    for {set ii 0} {$ii<$ll} {incr ii} {
		append rr "[lindex $xx $ii] [lindex $yy $ii] [lindex $xe $ii]\n"
	    }
	}
	xyey {
	    set ye [$var(graph,ds,yedata) range]
	    for {set ii 0} {$ii<$ll} {incr ii} {
		append rr "[lindex $xx $ii] [lindex $yy $ii] [lindex $ye $ii]\n"
	    }
	}
	xyexey {
	    set xe [$var(graph,ds,xedata) range]
	    set ye [$var(graph,ds,yedata) range]
	    for {set ii 0} {$ii<$ll} {incr ii} {
		append rr "[lindex $xx $ii] [lindex $yy $ii] [lindex $xe $ii] [lindex $ye $ii]\n"
	    }
	}
    }

    return $rr
}

proc PlotListDestroyCB {varname} {
    upvar #0 $varname var
    global $varname

    set var(list) 0
}

proc PlotPing {varname} {
    upvar #0 $varname var
    global $varname

    if {[info exists var(top)]} {
	if {[winfo exists $var(top)]} {
	    return 1
	}
    }
    return 0
}

proc PlotRaise {varname} {
    upvar #0 $varname var
    global $varname

    if {[PlotPing $varname]} {
	raise $var(top)
	return 1
    }
    return 0
}

proc PlotStats {varname} {
    upvar #0 $varname var
    global $varname

    if {!$var(stats)} {
	return
    }

    set rr [PlotStatsGenerate $varname]
    SimpleTextDialog "${varname}stats" [msgcat::mc {Statistics}] \
	40 20 insert top $rr PlotStatsDestroyCB $varname
}

proc PlotStatsGenerate {varname} {
    upvar #0 $varname var
    global $varname

    set min {}
    set max {}
    set mean {}
    set median {}
    set varr {}
    set sdev {}

    if {$var(graph,ds,ydata) != {}} {
	if {[$var(graph,ds,ydata) length] > 0} {
	    set min [format "%6.3f" [blt::vector expr min($var(graph,ds,ydata))]]
	    set max [format "%6.3f" [blt::vector expr max($var(graph,ds,ydata))]]
	    set mean [format "%6.3f" [blt::vector expr mean($var(graph,ds,ydata))]]
	    set median [format "%6.3f" [blt::vector expr median($var(graph,ds,ydata))]]
	    set varr [format "%6.3f" [expr [blt::vector expr var($var(graph,ds,ydata))]]]
	    set sdev [format "%6.3f" [expr [blt::vector expr sdev($var(graph,ds,ydata))]]]
	}
    }
    
    set rr {}
    append rr "min $min\n"
    append rr "max $max\n"
    append rr "mean $mean\n"
    append rr "median $median\n"
    append rr "var $varr\n"
    append rr "sdev $sdev\n"
    return $rr
}

proc PlotStatsDestroyCB {varname} {
    upvar #0 $varname var
    global $varname

    set var(stats) 0
}

# procs
proc PlotUpdateCanvas {varname} {
    upvar #0 $varname var
    global $varname
    global ds9

    PlotSaveState $varname
    
    set first [lindex $var(graphs) 0]
    set last [lindex $var(graphs) end]
    
    switch $var(layout) {
	grid -
	row -
	column {
	    set legendpos $var(legend,position)

	    set var(layout,axis,x,min) 0
	    set var(layout,axis,x,max) 1
	    set var(layout,axis,x,grid) 1
	    set var(layout,axis,x,log) 0
	    set var(layout,axis,x,flip) 0
	}
	strip {
	    set legendpos plotarea

	    if {$var($first,axis,x,auto)} {
		if {[info exists ${varname}($first,1,xdata)]} {
		    set xmin [blt::vector expr min($var($first,1,xdata))]
		    set xmax [blt::vector expr max($var($first,1,xdata))]
		} else {
		    set xmin 0
		    set xmax 1
		}
	    } else {
		set xmin $var($first,axis,x,min)
		set xmax $var($first,axis,x,max)
	    }

	    set var(layout,axis,x,min) $xmin
	    set var(layout,axis,x,max) $xmax
	    set var(layout,axis,x,grid) $var($first,axis,x,grid)
	    set var(layout,axis,x,log) $var($first,axis,x,log)
	    set var(layout,axis,x,flip) $var($first,axis,x,flip)
	}
    }

    foreach cc $var(graphs) {
	switch $var($cc,type) {
	    line {}
	    bar {$var($cc,graph) configure -barmode $var(bar,mode)}
	    scatter {}
	}

	$var($cc,graph) configure -plotpadx 0 -plotpady 0 \
	    -font "{$ds9($var(graph,title,family))} $var(graph,title,size) $var(graph,title,weight) $var(graph,title,slant)" \
	    -bg $var(background) -plotbackground $var(background)

	$var($cc,graph) xaxis configure \
	    -bg $var(background) \
	    -tickfont "{$ds9($var(axis,font,family))} $var(axis,font,size) $var(axis,font,weight) $var(axis,font,slant)" \
	    -titlefont "{$ds9($var(axis,title,family))} $var(axis,title,size) $var(axis,title,weight) $var(axis,title,slant)"

	$var($cc,graph) yaxis configure \
	    -bg $var(background) \
	    -tickfont "{$ds9($var(axis,font,family))} $var(axis,font,size) $var(axis,font,weight) $var(axis,font,slant)" \
	    -titlefont "{$ds9($var(axis,title,family))} $var(axis,title,size) $var(axis,title,weight) $var(axis,title,slant)"

	$var($cc,graph) legend configure \
	    -bg $var(background) \
	    -hide [expr !$var(legend)] \
	    -position $legendpos \
	    -font "{$ds9($var(legend,font,family))} $var(legend,font,size) $var(legend,font,weight) $var(legend,font,slant)" \
	    -titlefont "{$ds9($var(legend,title,family))} $var(legend,title,size) $var(legend,title,weight) $var(legend,title,slant)"

	set var($cc,axis,x,manage) 1
	set var($cc,axis,y,manage) 1

	switch $var(layout) {
	    grid -
	    row -
	    column {
		$var($cc,graph) configure \
		    -topmargin 0 -bottommargin 0 \
		    -leftmargin 0 -rightmargin 0 \
		    -borderwidth 2 \
		    -plotrelief flat -plotborderwidth 2

		$var($cc,graph) xaxis configure -showticks 1 -linewidth 1
		$var($cc,graph) yaxis configure -showticks 1 -linewidth 1
	    }
	    strip {
		if {$cc != $first} {
		    set var($cc,axis,x,manage) 0
		    set var($cc,axis,y,manage) 1
		}

		set left \
		    [expr 10 + 8*$var(axis,font,size) + $var(axis,title,size)]
		set right 10
		
		$var($cc,graph) configure \
		    -leftmargin $left -rightmargin $right \
		    -borderwidth 0 \
		    -plotrelief solid -plotborderwidth 1

		if {$cc == $first} {
		    $var($cc,graph) configure -topmargin 0 -bottommargin 1
		} elseif {$cc == $last} {
		    $var($cc,graph) configure -topmargin 1 -bottommargin 0
		} else {
		    $var($cc,graph) configure -topmargin 1 -bottommargin 1
		}
		
		if {$cc != $last} {
		    $var($cc,graph) xaxis configure -showticks 0 -linewidth 0
		    $var($cc,graph) yaxis configure -showticks 1 -linewidth 1
		} else {
		    $var($cc,graph) xaxis configure -showticks 1 -linewidth 1
		    $var($cc,graph) yaxis configure -showticks 1 -linewidth 1
		}
	    }
	}
    }
}

proc PlotUpdateGraph {varname} {
    upvar #0 $varname var
    global $varname

    PlotSaveState $varname

    if {$var(graph,axis,x,manage)} {
	if {$var(graph,axis,x,auto)} {
	    set xmin {}
	    set xmax {}
	} else {
	    set xmin $var(graph,axis,x,min)
	    set xmax $var(graph,axis,x,max)
	}
    } else {
	set xmin $var(layout,axis,x,min)
	set xmax $var(layout,axis,x,max)
    }

    if {$var(graph,axis,y,auto)} {
	set ymin {}
	set ymax {}
    } else {
	set ymin $var(graph,axis,y,min)
	set ymax $var(graph,axis,y,max)
    }

    if {$var(graph,axis,x,manage)} {
	set xgrid $var(graph,axis,x,grid)
	set xlog $var(graph,axis,x,log)
	set xflip $var(graph,axis,x,flip)
    } else {
	set xgrid $var(layout,axis,x,grid)
	set xlog $var(layout,axis,x,log)
	set xflip $var(layout,axis,x,flip)
    }

    if {$var(graph,format)} {
	if {$var(graph,axis,x,format) != {}} {
	    $var(graph) xaxis configure \
		-command [list PlotAxisFormat $varname x]
	} else {
	    $var(graph) xaxis configure -command {}
	}
	if {$var(graph,axis,y,format) != {}} {
	    $var(graph) yaxis configure \
		-command [list PlotAxisFormat $varname y]
	} else {
	    $var(graph) yaxis configure -command {}
	}
    }

    # Graph
    $var(graph) xaxis configure \
	-min $xmin -max $xmax -descending $xflip -grid $xgrid -logscale $xlog

    $var(graph) yaxis configure \
	-min $ymin -max $ymax -descending $var(graph,axis,y,flip) \
	-grid $var(graph,axis,y,grid) -logscale $var(graph,axis,y,log)

    if {$var(graph,axis,x,manage)} {
	$var(graph) configure -plotpadx 0 -plotpady 0 -title $var(graph,title) 
    } else {
	$var(graph) configure -plotpadx 0 -plotpady 0 -title {}
    }
    
    if {[$var(graph) xaxis cget -showticks]} {
	$var(graph) xaxis configure -title $var(graph,axis,x,title)
    } else {
	$var(graph) xaxis configure -title {}
    }

    $var(graph) yaxis configure -title $var(graph,axis,y,title)
    $var(graph) legend configure -title $var(graph,legend,title)
}

proc PlotButtonInvoke {varname cc nn xx yy} {
    upvar #0 $varname var
    global $varname

    $var($cc,proc,button) $varname $cc $nn $xx $yy
}

proc PlotButton {varname cc nn xx yy} {
    upvar #0 $varname var
    global $varname
# no-op
}

proc PlotHighliteElement {varname cc nn rowlist} {
    upvar #0 $varname var
    global $varname
# no-op
}

# menus
proc PlotColorMenu {w varname color cmd} {
    upvar #0 $varname var
    global $varname

    menu $w
    $w add radiobutton -label [msgcat::mc {Black}] \
	-variable ${varname}($color) -value black -command $cmd
    $w add radiobutton -label [msgcat::mc {White}] \
	-variable ${varname}($color) -value white -command $cmd
    $w add radiobutton -label [msgcat::mc {Red}] \
	-variable ${varname}($color) -value red -command $cmd
    $w add radiobutton -label [msgcat::mc {Green}] \
	-variable ${varname}($color) -value green -command $cmd
    $w add radiobutton -label [msgcat::mc {Blue}] \
	-variable ${varname}($color) -value blue -command $cmd
    $w add radiobutton -label [msgcat::mc {Cyan}] \
	-variable ${varname}($color) -value cyan -command $cmd
    $w add radiobutton -label [msgcat::mc {Magenta}] \
	-variable ${varname}($color) -value magenta -command $cmd
    $w add radiobutton -label [msgcat::mc {Yellow}] \
	-variable ${varname}($color) -value yellow -command $cmd
    $w add separator
    $w add command -label "[msgcat::mc {Other Color}]..." \
	-command [list ColorMenuOther $varname $color $cmd]
}

proc PlotTitle {varname title xaxis yaxis} {
    upvar #0 $varname var
    global $varname

    set var(graph,title) "$title"
    set var(graph,axis,x,title) "$xaxis"
    set var(graph,axis,y,title) "$yaxis"

    PlotUpdateGraph $varname
}

proc PlotBackup {ch dir} {
    global iap

    set rdir "./[lindex [file split $dir] end]"

    # only save ap plots
    foreach ww $iap(windows) {
	if {[string range $ww 0 1] == {ap}} {
	    set fdir [file join $dir $ww]
	    
	    # create dir if needed
	    if {![file isdirectory $fdir]} {
		if {[catch {file mkdir $fdir}]} {
		    Error [msgcat::mc {An error has occurred during backup}]
		    return
		}
	    }

	    set varname $ww
	    upvar #0 $varname var
	    global $varname

	    puts $ch "PlotDialog $varname $varname"

	    set cc $var(graph,current)
	    set gr $var(graph,current)
	    set ds $var(graph,ds,current)

	    foreach cc $var(graphs) {
		set var(graph,current) $cc
		PlotCurrentGraph $varname
		puts $ch "PlotAddGraph $varname $var($cc,type)"

		foreach nn $var($cc,dss) {
		    set var(graph,ds,current) $nn
		    PlotCurrentDataSet $varname

		    PlotSaveDataFile $varname "$fdir/graph${cc}ds${nn}.dat"
		    PlotSaveConfigFile $varname "$fdir/graph${cc}ds${nn}.plt"

		    puts $ch "PlotLoadDataFile $varname $fdir/graph${cc}ds${nn}.dat $var($cc,$nn,dim)"
		    puts $ch "PlotLoadConfigFile $varname $fdir/graph${cc}ds${nn}.plt"
		}
	    }
	    puts $ch "wm geometry $var(top) [winfo width $var(top)]x[winfo height $var(top)]"

	    set var(graph,current) $gr
	    PlotCurrentGraph $varname
	    
	    set var(graph,ds,current) $ds
	    PlotCurrentDataSet $varname
	}
    }
}
