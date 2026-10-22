#  Copyright (C) 1999-2021
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc PlotDef {} {
    global iap

    set iap(tt) {ap}
    set iap(plots) {}
    set iap(tools) {}
    set iap(unique) 1

    set iap(jpeg,quality) 75
    set iap(tiff,compress) none

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

    # gui window?
    if {[winfo exists $var(gui,top)]} {
	PlotGUIDestroy $varname
    }

    # stats window?
    if {$var(stats)} {
	SimpleTextDestroy "${varname}stats"
    }

    # list window?
    if {$var(list)} {
	SimpleTextDestroy "${varname}list"
    }

    # delete it from the list
    set ii [lsearch $iap(plots) $varname]
    if {$ii>=0} {
	set iap(plots) [lreplace $iap(plots) $ii $ii]
    }

    unset $varname
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
    set var(graph) $var(top).gr$var(graph,current)
    set var(graph,name) "Graph $var(seq)"

    # create graph
    set var(graph,type) $type
    switch $type {
	line {
	    PlotLineAddGraph $varname
	    set var(graph,proc,updateelement) PlotLineUpdateElement
	    set var(graph,proc,highlite) PlotLineHighliteElement
	    set var(graph,proc,button) PlotLineButton
	}
	bar {
	    PlotBarAddGraph $varname
	    set var(graph,proc,updateelement) PlotBarUpdateElement
	    set var(graph,proc,highlite) PlotHighliteElement
	    set var(graph,proc,button) PlotButton
	}
	scatter {
	    # backward compatibility
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
    PlotUpdateGUI $varname

    PlotStats $varname
    PlotList $varname

    PlotGUICurrentGraph $varname
    PlotChangeMode $varname
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
    place forget $var(graph)
    destroy $var(graph)

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
    PlotUpdateGUI $varname

    PlotStats $varname
    PlotList $varname

    PlotLayoutCanvas $varname
}

# Data
proc PlotAddElement {varname} {
    upvar #0 $varname var
    global $varname

    global ds9

    # create graph elements
    set nn $var(graph,ds,current)
    global $var(graph,ds,xdata) $var(graph,ds,ydata)
    
    $var(graph) element create $nn \
	-xdata $var(graph,ds,xdata) -ydata $var(graph,ds,ydata) \
    
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
    PlotUpdateGUI $varname

    PlotStats $varname
    PlotList $varname
}

proc PlotDeleteDataSetCurrent {varname} {
    upvar #0 $varname var
    global $varname

    if {[llength $var(graph,dss)] == 0} {
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
    PlotUpdateGUI $varname

    PlotStats $varname
    PlotList $varname
}

# used by backup
proc PlotCurrentGraph {varname} {
    upvar #0 $varname var
    global $varname

    # reset current dataset to first
    set cc $var(graph,current)
    set var(graph,ds,current) [lindex $var($cc,dss) 0]

    PlotRestoreState $varname
    PlotUpdateMenus $varname
    PlotUpdateGUI $varname

    PlotStats $varname
    PlotList $varname

    PlotGUICurrentGraph $varname
}

# used by backup
proc PlotCurrentDataSet {varname} {
    upvar #0 $varname var
    global $varname

    PlotRestoreState $varname

    PlotStats $varname
    PlotList $varname
}

proc PlotChangeAxis {varname} {
    upvar #0 $varname var
    global $varname

    switch $var(canvas,layout) {
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

proc PlotChangeLegend {varname} {
    upvar #0 $varname var
    global $varname

    switch $var(canvas,layout) {
	grid -
	column -
	row {PlotUpdateGraph $varname}
	strip {
	    PlotUpdateCanvas $varname
	    PlotUpdateGraph $varname
	}
    }
}

# used by backup
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
    PlotUpdateGUI $varname

    PlotLayoutCanvas $varname
    PlotChangeMode $varname
}

proc PlotChangeTitle {varname} {
    upvar #0 $varname var
    global $varname

    switch $var(canvas,layout) {
	grid -
	column -
	row {PlotUpdateGraph $varname}
	strip {PlotChangeLayout $varname}
    }
}

proc PlotUpdateAllElement {varname} {
    upvar #0 $varname var
    global $varname

    set cc $var(graph,current)
    set nn $var(graph,ds,current)
    foreach gg $var(graphs) {
	set var(graph,current) $gg
	foreach hh $var($gg,dss) {
	    set var(graph,ds,current) $hh
	    PlotRestoreState $varname
	    $var(graph,proc,updateelement) $varname
	}
    }
    set var(graph,current) $cc
    set var(graph,ds,current) $nn
    PlotRestoreState $varname

    PlotUpdateCanvasElement $varname
}

# used by backup
proc PlotChangeMode {varname} {
    upvar #0 $varname var
    global $varname

    set nn 1
    set first [lindex $var(graphs) 0]
    foreach cc $var(graphs) {
	PlotSelectUnbind $varname $cc
	switch $var(mode) {
	    pointer {
		blt::RemoveBindTag $var($cc,graph) zoom-$var($cc,graph)
		bind $var($cc,graph) <1> \
		    [list PlotButtonInvoke $varname $cc $nn %x %y]
	    }
	    selectbox -
	    selectcircle -
	    selectpolygon -
	    selectfreehand {
		blt::RemoveBindTag $var($cc,graph) zoom-$var($cc,graph)
		PlotSelectBind $varname $cc $nn $var(mode)
	    }
	    zoom {
		bind $var($cc,graph) <1> {}
		switch $var(canvas,layout) {
		    grid -
		    row -
		    column {
			blt::AddBindTag $var($cc,graph) zoom-$var($cc,graph)
		    }
		    strip {
			if {$cc == $first} {
			    blt::AddBindTag $var($cc,graph) \
				zoom-$var($cc,graph)
			} else {
			    blt::RemoveBindTag $var($cc,graph) \
				zoom-$var($cc,graph)
			}
		    }
		}
	    }
	}
    }
}

# Region selection: select every point inside a box, circle, polygon
# or freehand outline drawn on the graph. Shift adds to the current
# region selection. For box, circle and freehand a click without a
# drag falls back to the pointer-mode single point pick. Polygons are
# built by clicking vertices and closed with a double-click; Escape
# cancels.
proc PlotSelectBind {varname cc nn shape} {
    upvar #0 $varname var
    global $varname

    set g $var($cc,graph)
    set var($cc,select,shape) $shape
    switch $shape {
	selectpolygon {
	    bind $g <ButtonPress-1> \
		[list PlotSelectPolygonVertex $varname $cc %x %y 0]
	    bind $g <Shift-ButtonPress-1> \
		[list PlotSelectPolygonVertex $varname $cc %x %y 1]
	    bind $g <Motion> [list PlotSelectMotion $varname $cc %x %y]
	    bind $g <Double-ButtonPress-1> \
		[list PlotSelectFinish $varname $cc $nn %x %y]
	}
	default {
	    bind $g <ButtonPress-1> \
		[list PlotSelectStart $varname $cc %x %y 0]
	    bind $g <Shift-ButtonPress-1> \
		[list PlotSelectStart $varname $cc %x %y 1]
	    bind $g <B1-Motion> [list PlotSelectMotion $varname $cc %x %y]
	    bind $g <ButtonRelease-1> \
		[list PlotSelectFinish $varname $cc $nn %x %y]
	}
    }
    bind $g <KeyPress-Escape> [list PlotSelectCancel $varname $cc]
}

proc PlotSelectUnbind {varname cc} {
    upvar #0 $varname var
    global $varname

    set g $var($cc,graph)
    foreach ev {<ButtonPress-1> <Shift-ButtonPress-1> <B1-Motion> \
		    <ButtonRelease-1> <Motion> <Double-ButtonPress-1> \
		    <KeyPress-Escape>} {
	bind $g $ev {}
    }
    PlotSelectCancel $varname $cc
}

proc PlotSelectCancel {varname cc} {
    upvar #0 $varname var
    global $varname

    set g $var($cc,graph)
    if {[$g marker exists selectOutline]} {
	$g marker delete selectOutline
    }
    unset -nocomplain var($cc,select,pts)
}

proc PlotSelectStart {varname cc xx yy add} {
    upvar #0 $varname var
    global $varname

    set var($cc,select,pts) [list $xx $yy]
    set var($cc,select,add) $add
}

proc PlotSelectPolygonVertex {varname cc xx yy add} {
    upvar #0 $varname var
    global $varname

    if {![info exists var($cc,select,pts)]} {
	PlotSelectStart $varname $cc $xx $yy $add
	# for Escape
	focus $var($cc,graph)
    } else {
	lappend var($cc,select,pts) $xx $yy
    }
    PlotSelectOutline $varname $cc $var($cc,select,pts)
}

proc PlotSelectMotion {varname cc xx yy} {
    upvar #0 $varname var
    global $varname

    if {![info exists var($cc,select,pts)]} {
	return
    }

    set pts $var($cc,select,pts)
    switch $var($cc,select,shape) {
	selectbox {
	    lassign $pts x0 y0
	    set pts [list $x0 $y0 $xx $y0 $xx $yy $x0 $yy]
	}
	selectcircle {
	    lassign $pts x0 y0
	    set pts [PlotSelectCirclePoly $x0 $y0 \
			 [expr {hypot($xx-$x0,$yy-$y0)}]]
	}
	selectpolygon {
	    # rubber band to the cursor
	    lappend pts $xx $yy
	}
	selectfreehand {
	    # skip sub-pixel jitter
	    if {abs($xx-[lindex $pts end-1]) < 2 && \
		    abs($yy-[lindex $pts end]) < 2} {
		return
	    }
	    lappend var($cc,select,pts) $xx $yy
	    set pts $var($cc,select,pts)
	}
    }
    PlotSelectOutline $varname $cc $pts
}

# screen coords polygon approximating a circle
proc PlotSelectCirclePoly {x0 y0 rr} {
    set pts {}
    set nn 64
    for {set ii 0} {$ii<$nn} {incr ii} {
	set aa [expr {2*3.14159265358979*$ii/$nn}]
	# axis invtransform requires integer pixels
	lappend pts [expr {round($x0+$rr*cos($aa))}] \
	    [expr {round($y0+$rr*sin($aa))}]
    }
    return $pts
}

# draw a closed outline given screen coords
proc PlotSelectOutline {varname cc pts} {
    upvar #0 $varname var
    global $varname

    set g $var($cc,graph)
    lappend pts [lindex $pts 0] [lindex $pts 1]
    set coords {}
    foreach {xx yy} $pts {
	lappend coords [$g xaxis invtransform $xx] [$g yaxis invtransform $yy]
    }

    if {[$g marker exists selectOutline]} {
	$g marker configure selectOutline -coords $coords
    } else {
	$g marker create line selectOutline -coords $coords \
	    -dashes 4 -linewidth 1 \
	    -mapx [lindex [$g xaxis use] 0] -mapy [lindex [$g yaxis use] 0]
    }
}

proc PlotSelectFinish {varname cc nn xx yy} {
    upvar #0 $varname var
    global $varname

    if {![info exists var($cc,select,pts)]} {
	return
    }
    set g $var($cc,graph)
    set shape $var($cc,select,shape)
    set pts $var($cc,select,pts)
    set add $var($cc,select,add)
    PlotSelectCancel $varname $cc

    lassign $pts x0 y0
    switch $shape {
	selectbox -
	selectcircle -
	selectfreehand {
	    # treat a tiny drag as a click
	    if {abs($xx-$x0) < 3 && abs($yy-$y0) < 3 && [llength $pts] <= 4} {
		set var($cc,select,rows) {}
		PlotButtonInvoke $varname $cc $nn $xx $yy
		return
	    }
	}
	selectpolygon {
	    # the double-click's first press already added the last vertex
	    if {[llength $pts] < 6} {
		return
	    }
	}
    }

    if {[llength $var($cc,dss)] == 0 || !$var($cc,$nn,show)} {
	return
    }

    set xmin [expr {min($x0,$xx)}]
    set xmax [expr {max($x0,$xx)}]
    set ymin [expr {min($y0,$yy)}]
    set ymax [expr {max($y0,$yy)}]
    set r2 [expr {($xx-$x0)**2 + ($yy-$y0)**2}]

    set xv $var($cc,$nn,xdata)
    set yv $var($cc,$nn,ydata)
    global $xv $yv

    # test in screen coords so shapes match what was drawn, even for
    # log axes. graph element indices start at 0
    set xlog [$g xaxis cget -log]
    set ylog [$g yaxis cget -log]
    set rows {}
    set ii -1
    foreach x [$xv range] y [$yv range] {
	incr ii
	# skip NaN, Inf, and <= 0 on log axes. Filter here rather than
	# catch, since transform errors on NaN and a caught error still
	# leaves errorInfo set, which XPACatchError reports
	if {$x != $x || $y != $y || abs($x) == Inf || abs($y) == Inf || \
		($xlog && $x <= 0) || ($ylog && $y <= 0)} {
	    continue
	}
	set sx [$g xaxis transform $x]
	set sy [$g yaxis transform $y]
	switch $shape {
	    selectbox {
		set in [expr {$sx >= $xmin && $sx <= $xmax && \
				  $sy >= $ymin && $sy <= $ymax}]
	    }
	    selectcircle {
		set in [expr {($sx-$x0)**2 + ($sy-$y0)**2 <= $r2}]
	    }
	    selectpolygon -
	    selectfreehand {
		set in [PlotSelectInPolygon $sx $sy $pts]
	    }
	}
	if {$in} {
	    lappend rows $ii
	}
    }

    if {$add && [info exists var($cc,select,rows)]} {
	set rows [lsort -integer -unique [concat $var($cc,select,rows) $rows]]
    }
    set var($cc,select,rows) $rows

    $var($cc,proc,highlite) $varname $cc $nn $rows

    if {$var(callback) != {}} {
	# callback rows start at 1
	set rr {}
	foreach ii $rows {
	    lappend rr [expr {$ii+1}]
	}
	eval "$var(callback) [list $rr] $cc"
    }
}

# even-odd ray casting; pts is a flat x y list, implicitly closed
proc PlotSelectInPolygon {xx yy pts} {
    set in 0
    set xj [lindex $pts end-1]
    set yj [lindex $pts end]
    foreach {xi yi} $pts {
	if {(($yi > $yy) != ($yj > $yy)) && \
		($xx < ($xj-$xi)*($yy-$yi)/double($yj-$yi) + $xi)} {
	    set in [expr {!$in}]
	}
	set xj $xi
	set yj $yi
    }
    return $in
}

proc PlotAxisFormat {varname axis w nn} {
    upvar #0 $varname var
    global $varname

    return [format $var(graph,axis,$axis,format) $nn]
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

proc PlotLayoutCanvas {varname} {
    upvar #0 $varname var
    global $varname

    foreach cc $var(graphs) {
	place forget $var($cc,graph)
    }

    switch $var(canvas,layout) {
	grid {
	    set ll [llength $var(graphs)]
	    set nr [expr int(sqrt($ll)+.5)]
	    set nc [expr int(sqrt($ll-1))+1]

	    set z1 [expr 1./$nc]
	    set z2 [expr 1./$nr]

	    set xx 0
	    set yy 0
	    foreach cc $var(graphs) {
		set var($cc,tx) [expr $xx*$z1]
		set var($cc,ty) [expr $yy*$z2]

		place $var($cc,graph) -in $var(main) \
		    -relwidth $z1 -relheight $z2 \
		    -relx [expr $xx*$z1] -rely [expr $yy*$z2] \
		    -anchor nw

		incr xx
		if {$xx==$nc} {
		    set xx 0
		    incr yy
		}
	    }
	}
	row {
	    set zz [expr 1./[llength $var(graphs)]]
	    set ii 0
	    foreach cc $var(graphs) {
		set var($cc,tx) [expr $ii*$zz]
		set var($cc,ty) 0

		place $var($cc,graph) -in $var(main) \
		    -relwidth $zz -relheight 1 \
		    -relx [expr $ii*$zz] -rely .5 \
		    -anchor w
		incr ii
	    }
	}
	column {
	    set zz [expr 1./[llength $var(graphs)]]
	    set ii 0
	    foreach cc $var(graphs) {
		set var($cc,tx) 0
		set var($cc,ty) [expr $ii*$zz]

		place $var($cc,graph) -in $var(main) \
		    -relwidth 1 -relheight $zz \
		    -relx .5 -rely [expr $ii*$zz] \
		    -anchor n
		incr ii
	    }
	}
	strip {
	    set pp [expr $var(canvas,layout,strip,scale)/100.]
	    if {$pp<0 && $pp>1} {
		set pp 1
	    }
	    
	    set ll [llength $var(graphs)]
	    set tt [expr int(1./$pp)+($ll-1)]
	    set z2 [expr 1./$tt]
	    set z1 [expr 1.-(($ll-1)*$z2)]

	    set ii 0
	    foreach cc $var(graphs) {
		if {$ii == 0} {
		    set var($cc,tx) 0
		    set var($cc,ty) 0

		    place $var($cc,graph) -in $var(main) \
			-relwidth 1 -relheight $z1 \
			-x 0 -y 0
		} else {
		    set var($cc,tx) 0
		    set var($cc,ty) [expr ($ii-1)*$z2 + $z1]

		    place $var($cc,graph) -in $var(main) \
			-relwidth 1 -relheight $z2 \
			-relx .5 -rely [expr $ii*$z2 + $z1] \
			-anchor s
		}
		incr ii
	    }
	}
    }

    PlotRestoreState $varname

    # needed so layout can be properly realized
    global debug
    if {$debug(tcl,idletasks)} {
	puts stderr "PlotLayoutCanvas"
    }
    update idletasks
}

proc PlotCalcMargins {varname rpixname lpixname} {
    upvar $rpixname rpix
    upvar $lpixname lpix
    upvar #0 $varname var
    global $varname

    set rpix 0
    set lpix 0

    set lchar 0
    set rchar 0
    set ytitle 0
    foreach cc $var(graphs) {
	# y axis title
	if {$var($cc,axis,y,title) !={}} {
	    set ytitle 1
	}

	# legend
	if {$var($cc,legend)} {
	    # find max legend dataset name width
	    set nc 0
	    foreach nn $var($cc,dss) {
		set nr [string length $var($cc,$nn,name)]
		if {$nr > $nc} {
		    set nc $nr
		}
	    }
	    switch $var($cc,legend,position) {
		top {}
		bottom {}
		right {
		    if {$nc > $rchar} {
			set rchar $nc
		    }
		}
		left {
		    if {$nc > $lchar} {
			set lchar $nc
		    }
		}
		plotarea {}
	    }
	}
    }
    if {$rchar>0} {
	set rpix [expr $rpix + int(($var(canvas,legend,title,size)*4 + $var(canvas,legend,font,size)*$rchar)*.75)]
    }
    if {$lchar>0} {
	set lpix [expr $lpix + int(($var(canvas,legend,title,size)*4 + $var(canvas,legend,font,size)*$lchar)*.75)]
    }

    set rpix [expr 10 + $rpix]
    set lpix [expr 8*$var(canvas,axis,font,size) + $ytitle*$var(canvas,axis,title,size) + $lpix]
}


# procs
# used by backup
proc PlotUpdateCanvas {varname} {
    upvar #0 $varname var
    global $varname
    global ds9

    PlotSaveState $varname

    set first [lindex $var(graphs) 0]
    set last [lindex $var(graphs) end]
    
    switch $var(canvas,layout) {
	grid -
	row -
	column {
	    set var(layout,axis,x,title) {}
	    set var(layout,axis,x,min) 0
	    set var(layout,axis,x,max) 1
	    set var(layout,axis,x,grid) 1
	    set var(layout,axis,x,log) 0
	    set var(layout,axis,x,flip) 0
	}
	strip {
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

	    set var(layout,axis,x,title) $var($first,axis,x,title)
	    set var(layout,axis,x,min) $xmin
	    set var(layout,axis,x,max) $xmax
	    set var(layout,axis,x,grid) $var($first,axis,x,grid)
	    set var(layout,axis,x,log) $var($first,axis,x,log)
	    set var(layout,axis,x,flip) $var($first,axis,x,flip)
	}
    }
    
    set right 0
    set left 0
    switch $var(canvas,layout) {
	grid -
	row -
	column {}
	strip {
	    PlotCalcMargins $varname right left
	}
    }
    
    foreach cc $var(graphs) {
	switch $var(canvas,layout) {
	    grid -
	    row -
	    column {
		set var($cc,layout,x,manage) 1
		$var($cc,graph) configure \
		    -topmargin 0 -bottommargin 0 \
		    -leftmargin 0 -rightmargin 0 \
		    -borderwidth 2

		$var($cc,graph) xaxis configure -showticks 1 -linewidth 1
		$var($cc,graph) yaxis configure -showticks 1 -linewidth 1
	    }
	    strip {
		if {$cc == $first} {
		    set var($cc,layout,x,manage) 1
		} else {
		    set var($cc,layout,x,manage) 0
		}

		$var($cc,graph) configure \
		    -leftmargin $left -rightmargin $right \
		    -borderwidth 2

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

    PlotUpdateCanvasElement $varname
}

proc PlotUpdateGraph {varname} {
    upvar #0 $varname var
    global $varname

    PlotSaveState $varname

    if {$var(graph,layout,x,manage)} {
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

    if {$var(graph,layout,x,manage)} {
	set xtitle $var(graph,axis,x,title)
	set xgrid $var(graph,axis,x,grid)
	set xlog $var(graph,axis,x,log)
	set xflip $var(graph,axis,x,flip)
    } else {
	set xtitle $var(layout,axis,x,title)
	set xgrid $var(layout,axis,x,grid)
	set xlog $var(layout,axis,x,log)
	set xflip $var(layout,axis,x,flip)
    }

    if {$var(graph,axis,x,labels) != {}} {
	$var(graph) xaxis configure \
	    -command [list PlotXAxisLabel $varname]
    } elseif {$var(graph,format)} {
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

    if {$var(graph,layout,x,manage)} {
	$var(graph) configure -plotpadx 0 -plotpady 0 -title $var(graph,title) 
    } else {
	$var(graph) configure -plotpadx 0 -plotpady 0 -title {}
    }
    
    if {[$var(graph) xaxis cget -showticks]} {
	$var(graph) xaxis configure -title $xtitle
    } else {
	$var(graph) xaxis configure -title {}
    }

    $var(graph) yaxis configure -title $var(graph,axis,y,title)

    switch $var(canvas,layout) {
	grid -
	row -
	column {
	    $var(graph) legend configure -hide [expr !$var(graph,legend)] \
		-title $var(graph,legend,title) \
		-position $var(graph,legend,position)
	}
	strip {
	    switch $var(graph,legend,position) {
		top {
		    if {$var(graph,layout,x,manage)} {
			$var(graph) legend configure \
			    -hide [expr !$var(graph,legend)] \
			    -title $var(graph,legend,title) \
			    -position $var(graph,legend,position)
		    } else {
			$var(graph) legend configure -hide yes
		    }
		}
		bottom {
		    if {[$var(graph) xaxis cget -showticks]} {
			$var(graph) legend configure \
			    -hide [expr !$var(graph,legend)] \
			    -title $var(graph,legend,title) \
			    -position $var(graph,legend,position)
		    } else {
			$var(graph) legend configure -hide yes
		    }
		}
		right -
		left -
		plotarea {
		    $var(graph) legend configure \
			-hide [expr !$var(graph,legend)] \
			-title $var(graph,legend,title) \
			-position $var(graph,legend,position)
		}
	    }
	}
    }
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

proc PlotXAxisLabel {varname w xx} {
    upvar #0 $varname var
    global $varname

    set ii [expr {int($xx)-1}]
    if {$ii >= 0 && $ii < [llength $var(graph,axis,x,labels)]} {
	return [lindex $var(graph,axis,x,labels) $ii]
    }
    return {}
}

# menus
proc PlotTitle {varname title xaxis yaxis} {
    upvar #0 $varname var
    global $varname

    set var(graph,title) "$title"
    set var(graph,axis,x,title) "$xaxis"
    set var(graph,axis,y,title) "$yaxis"

    PlotChangeTitle $varname
}

proc PlotDataSetName {varname name} {
    upvar #0 $varname var
    global $varname

    if {[llength $var(graph,dss)] == 0} {
	return
    }

    if {$name == {}} {
	set nn $var(graph,ds,current)
	set name "Dataset $nn"
    }
    $var(mb).graph.select entryconfig "$var(graph,ds,name)" -label "$name"
    set var(graph,ds,name) $name
    $var(graph,proc,updateelement) $varname

    switch $var(canvas,layout) {
	grid -
	row -
	column {}
	strip {PlotUpdateCanvas $varname}
    }
}

proc PlotUpdateCanvasElement {varname} {
    upvar #0 $varname var
    global $varname
    global ds9

    if {$var(canvas,theme)} {
	set fg [ThemeTreeForeground]
	set bg [ThemeTreeBackground]
    } else {
	set fg $var(canvas,foreground)
	set bg $var(canvas,background)
    }

    foreach cc $var(graphs) {
	$var($cc,graph) configure -plotpadx 0 -plotpady 0 \
	    -bg $bg \
	    -plotbackground $bg \
	    -fg $fg \
	    -font "{$ds9($var(canvas,title,family))} $var(canvas,title,size) $var(canvas,title,weight) $var(canvas,title,slant)"

	$var($cc,graph) xaxis configure \
	    -bg $bg \
	    -color $fg \
	    -titlecolor $fg \
	    -gridcolor $var(canvas,grid,color) \
	    -gridminorcolor $var(canvas,grid,color) \
	    -tickfont "{$ds9($var(canvas,axis,font,family))} $var(canvas,axis,font,size) $var(canvas,axis,font,weight) $var(canvas,axis,font,slant)" \
	    -titlefont "{$ds9($var(canvas,axis,title,family))} $var(canvas,axis,title,size) $var(canvas,axis,title,weight) $var(canvas,axis,title,slant)"

	$var($cc,graph) yaxis configure \
	    -bg $bg \
	    -color $fg \
	    -titlecolor $fg \
	    -gridcolor $var(canvas,grid,color) \
	    -gridminorcolor $var(canvas,grid,color) \
	    -tickfont "{$ds9($var(canvas,axis,font,family))} $var(canvas,axis,font,size) $var(canvas,axis,font,weight) $var(canvas,axis,font,slant)" \
	    -titlefont "{$ds9($var(canvas,axis,title,family))} $var(canvas,axis,title,size) $var(canvas,axis,title,weight) $var(canvas,axis,title,slant)"

	$var($cc,graph) legend configure \
	    -bg $bg \
	    -fg $fg \
	    -titlecolor $fg \
	    -font "{$ds9($var(canvas,legend,font,family))} $var(canvas,legend,font,size) $var(canvas,legend,font,weight) $var(canvas,legend,font,slant)" \
	    -titlefont "{$ds9($var(canvas,legend,title,family))} $var(canvas,legend,title,size) $var(canvas,legend,title,weight) $var(canvas,legend,title,slant)"
    }
}
