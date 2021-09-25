#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc GraphDef {} {
    global igraph
    global pgraph
    global graph

    set igraph(top) .grph
    set igraph(mb) .grphmb

    set igraph(tick,len) 4
    set igraph(x,min) 0
    set igraph(x,max) 100
    set igraph(y,min) 1
    set igraph(y,max) 100

    set graph(horz,offset) 100
    set graph(vert,offset) 0

    set graph(font) helvetica
    set graph(font,size) 9
    set graph(font,weight) normal
    set graph(font,slant) roman

    set graph(size) 150
    set graph(grid) 1
    set graph(log) 0
    set graph(thick) 1
    set graph(method) average

    array set pgraph [array get graph]
}

proc GraphsCreate {frame} {
    global ds9
    global canvas
    global igraph
    global graph

    set varname ${frame}gr
    global $varname

    # horizontal
    set hg [string tolower ${frame}grh]
    set horz [blt::graph $ds9(main).$hg \
		  -width $canvas(width) \
		  -height $graph(size) \
		  -takefocus 0 \
		  -highlightthickness 0 \
		  -plotpadx 0 -plotpady 0 \
		  -plotborderwidth 0 \
		  -foreground [ThemeTreeForeground] \
		  -background [ThemeTreeBackground] \
		  -plotbackground [ThemeTreeBackground] \
		  -rightmargin $graph(horz,offset) \
		 ]

    set xv [blt::vector create ${varname}grhx]
    set yv [blt::vector create ${varname}grhy]

    $horz legend configure -hide yes
    $horz crosshairs configure -color green

    $horz xaxis configure -hide no -showticks no -linewidth 0 \
	-bg [ThemeTreeBackground] -color [ThemeTreeForeground] \
	-tickdefault $igraph(tick,len) \
	-min $igraph(x,min) -max $igraph(x,max) 
    $horz x2axis configure -hide yes \
	-bg [ThemeTreeBackground] -color [ThemeTreeForeground] \
	-min $igraph(x,min) -max $igraph(x,max)
    $horz yaxis configure -hide yes \
	-bg [ThemeTreeBackground] -color [ThemeTreeForeground] \
	-min $igraph(y,min) -max $igraph(y,max)
    $horz y2axis configure -hide no \
	-bg [ThemeTreeBackground] -color [ThemeTreeForeground] \
	-min $igraph(y,min) -max $igraph(y,max)
    
    $horz element create line1 -xdata $xv -ydata $yv \
	-symbol none -color [ThemeTreeForeground]

    # blt graph
    set ${varname}(horz) $horz
    # blt vectors
    set ${varname}(horz,vect,xx) $xv
    set ${varname}(horz,vect,yy) $yv
    # canvas window id
    set ${varname}(horz,id) 0
    # canvas coords
    set ${varname}(horz,xx) 0
    set ${varname}(horz,yy) 0

    # vertical
    set vg [string tolower ${frame}grv]
    set vert [blt::graph $ds9(main).$vg \
		  -invertxy yes \
		  -width $graph(size) \
		  -height $canvas(height) \
		  -takefocus 0 \
		  -highlightthickness 0 \
		  -plotborderwidth 0 \
		  -foreground [ThemeTreeForeground] \
		  -background [ThemeTreeBackground] \
		  -plotbackground [ThemeTreeBackground] \
		 ]

    set xv [blt::vector create ${varname}grvx]
    set yv [blt::vector create ${varname}grvy]

    $vert legend configure -hide yes
    $vert crosshairs configure -color green

    $vert xaxis configure -hide yes -descending yes \
	-bg [ThemeTreeBackground] -color [ThemeTreeForeground] \
	-min $igraph(x,min) -max $igraph(x,max) 
    $vert x2axis configure -hide no -descending yes \
	-showticks no -linewidth 0 \
	-bg [ThemeTreeBackground] -color [ThemeTreeForeground] \
	-min $igraph(x,min) -max $igraph(x,max) 

    $vert yaxis configure -hide no -descending yes \
	-bg [ThemeTreeBackground] -color [ThemeTreeForeground] \
	-min $igraph(y,min) -max $igraph(y,max)
    $vert y2axis configure -hide yes -descending yes \
	-bg [ThemeTreeBackground] -color [ThemeTreeForeground] \
	-tickdefault $igraph(tick,len) \
	-min $igraph(y,min) -max $igraph(y,max)

    $vert element create line1 -xdata $xv -ydata $yv \
	-symbol none -color [ThemeTreeForeground]

    # blt graph
    set ${varname}(vert) $vert
    # blt vectors
    set ${varname}(vert,vect,xx) $xv
    set ${varname}(vert,vect,yy) $yv
    # canvas window id
    set ${varname}(vert,id) 0
    # canvas coords
    set ${varname}(vert,xx) 0
    set ${varname}(vert,yy) 0

    UpdateGraphGrid $frame
    UpdateGraphFont $frame horz
    UpdateGraphFont $frame vert
    BindEventsGraphs $frame
}

proc GraphsDelete {frame} {
    global ds9

    set varname ${frame}gr
    global $varname

    # horizontal
    if {[subst $${varname}(horz,id)]} {
	$ds9(canvas) delete [subst $${varname}(horz,id)]
    }
    destroy [subst $${varname}(horz)]
    destroy [subst $${varname}(horz,vect,xx)]
    destroy [subst $${varname}(horz,vect,yy)]

    # vertical
    if {[subst $${varname}(vert,id)]} {
	$ds9(canvas) delete [subst $${varname}(vert,id)]
    }
    destroy [subst $${varname}(vert)]
    destroy [subst $${varname}(vert,vect,xx)]
    destroy [subst $${varname}(vert,vect,yy)]

    unset $varname
}

proc BindEventsGraphs {frame} {
    global ds9
    
    global debug
    if {$debug(tcl,graph)} {
	puts stderr "BindEventsGraphs $frame"
    }
    
    set varname ${frame}gr
    global $varname

    # horizontal
    set horz [subst $${varname}(horz)]
    bind $horz <Enter> [list EnterGraph $horz 1]
    bind $horz <Leave> [list LeaveGraph $horz]
    bind $horz <Button-1> [list MotionGraph $horz %x %y 1]
    bind $horz <B1-Motion> [list MotionGraph $horz %x %y 1]
    bind $horz <Up> [list ArrowKeyGraph $horz 0 -1 1]
    bind $horz <Down> [list ArrowKeyGraph $horz 0 1 1]
    bind $horz <Left> [list ArrowKeyGraph $horz -1 0 1]
    bind $horz <Right> [list ArrowKeyGraph $horz 1 0 1]

    switch $ds9(wm) {
	x11 -
	win32 {bind $horz <<ThemeChanged>> {ThemeConfigGraph %W}}
	aqua {}
    }

    # vertical
    set vert [subst $${varname}(vert)]
    bind $vert <Enter> [list EnterGraph $vert 0]
    bind $vert <Leave> [list LeaveGraph $vert]
    bind $vert <Button-1> [list MotionGraph $vert %x %y 0]
    bind $vert <B1-Motion> [list MotionGraph $vert %x %y 0]
    bind $vert <Up> [list ArrowKeyGraph $vert 0 -1 0]
    bind $vert <Down> [list ArrowKeyGraph $vert 0 1 0]
    bind $vert <Left> [list ArrowKeyGraph $vert -1 0 0]
    bind $vert <Right> [list ArrowKeyGraph $vert 1 0 0]

    switch $ds9(wm) {
	x11 -
	win32 {bind $vert <<ThemeChanged>> {ThemeConfigGraph %W}}
	aqua {}
    }
}

proc UnBindEventsGraphs {frame} {
    global ds9
    
    global debug
    if {$debug(tcl,graph)} {
	puts stderr "UnBindEventsGraphs $frame"
    }

    set varname ${frame}gr
    global $varname

    # horizontal
    set horz [subst $${varname}(horz)]
    bind $horz <Enter> {}
    bind $horz <Leave> {}
    bind $horz <Button-1> {}
    bind $horz <B1-Motion> {}
    bind $horz <Up> {}
    bind $horz <Down> {}
    bind $horz <Left> {}
    bind $horz <Right> {}

    switch $ds9(wm) {
	x11 -
	win32 {bind $horz <<ThemeChanged>> {}}
	aqua {}
    }

    # vertical
    set vert [subst $${varname}(vert)]
    bind $vert <Enter> {}
    bind $vert <Leave> {}
    bind $vert <Button-1> {}
    bind $vert <B1-Motion> {}
    bind $vert <Up> {}
    bind $vert <Down> {}
    bind $vert <Left> {}
    bind $vert <Right> {}

    switch $ds9(wm) {
	x11 -
	win32 {bind $vert <<ThemeChanged>> {}}
	aqua {}
    }
}

proc LayoutGraphsAdjust {} {
    global graph
    global graphgr

    set ff [$graphgr(horz) xaxis cget -tickfont]
    set tl [$graphgr(horz) xaxis cget -ticklength]
    set sp [font metrics $ff -linespace]
    set graph(vert,offset) [expr $tl + $sp + 4]
}

proc LayoutGraphHorz {frame fx fy fw fh} {
    global colorbar
    global view
    global graph
    global canvas
    
    global debug
    if {$debug(tcl,graph)} {
	puts stderr "LayoutGraphHorz $frame $fx $fy $fw $fh"
    }

    set varname ${frame}gr
    global $varname

    set cbh [expr $view(colorbar) && !$colorbar(orientation)]
    set cbv [expr $view(colorbar) &&  $colorbar(orientation)]
    set grh $view(graph,horz)
    set grv $view(graph,vert)

    set xx $fx
    set yy [expr $fy + $fh - $graph(size)]
    set ww $fw
    set hh $graph(size)

    # cbh
    if {$cbh && !$cbv && !$grh && !$grv} {
    }
    # cbv
    if {!$cbh && $cbv && !$grh && !$grv} {
    }

    # cbhgrh
    if {$cbh && !$cbv && $grh && !$grv} {
    }
    # cbhgrv
    if {$cbh && !$cbv && !$grh && $grv} {
    }
    # cbhgrhgrv
    if {$cbh && !$cbv && $grh && $grv} {
	incr ww -$graph(size)
	incr ww $graph(horz,offset)
    }

    # cbvgrh
    if {!$cbh && $cbv && $grh && !$grv} {
	incr ww -$colorbar(vertical,width)
	incr ww -$canvas(gap)
	incr ww $graph(horz,offset)
    }
    # cbvgrv
    if {!$cbh && $cbv && !$grh && $grv} {
    }
    # cbvgrhgrv
    if {!$cbh && $cbv && $grh && $grv} {
	incr ww -$colorbar(vertical,width)
	incr ww -$canvas(gap)
	incr ww -$graph(size)
	incr ww $graph(horz,offset)
    }

    # grh
    if {!$cbh && !$cbv && $grh && !$grv} {
    }
    # grv
    if {!$cbh && !$cbv && !$grh && $grv} {
    }
    # grhgrv
    if {!$cbh && !$cbv && $grh && $grv} {
	incr ww -$graph(size)
	incr ww $graph(horz,offset)
    }

    # sanity check
    if {$xx<0 || $yy<0 || $ww<0 || $hh<0} {
	return 0
    }

    [subst $${varname}(horz)] configure -width $ww -height $hh
    set ${varname}(horz,xx) $xx
    set ${varname}(horz,yy) $yy

    return 1
}

proc LayoutGraphVert {frame fx fy fw fh} {
    global colorbar
    global view
    global graph
    global canvas
    
    global debug
    if {$debug(tcl,graph)} {
	puts stderr "LayoutGraphVert $frame $fx $fy $fw $fh"
    }

    set varname ${frame}gr
    global $varname

    set cbh [expr $view(colorbar) && !$colorbar(orientation)]
    set cbv [expr $view(colorbar) &&  $colorbar(orientation)]
    set grh $view(graph,horz)
    set grv $view(graph,vert)

    set xx [expr $fx + $fw - $graph(size)]
    set yy $fy
    set ww $graph(size)
    set hh $fh

    # cbh
    if {$cbh && !$cbv && !$grh && !$grv} {
    }
    # cbv
    if {!$cbh && $cbv && !$grh && !$grv} {
    }

    # cbhgrh
    if {$cbh && !$cbv && $grh && !$grv} {
    }
    # cbhgrv
    if {$cbh && !$cbv && !$grh && $grv} {
	incr hh -$colorbar(horizontal,height)
	incr hh -$canvas(gap)
	incr hh $graph(vert,offset)
    }
    # cbhgrhgrv
    if {$cbh && !$cbv && $grh && $grv} {
	incr hh -$colorbar(horizontal,height)
	incr hh -$canvas(gap)
	incr hh -$graph(size)
	incr hh $graph(vert,offset)
    }

    # cbvgrh
    if {!$cbh && $cbv && $grh && !$grv} {
    }
    # cbvgrv
    if {!$cbh && $cbv && !$grh && $grv} {
    }
    # cbvgrhgrv
    if {!$cbh && $cbv && $grh && $grv} {
	incr hh -$graph(size)
	incr hh $graph(vert,offset)
    }

    # grh
    if {!$cbh && !$cbv && $grh && !$grv} {
    }
    # grv
    if {!$cbh && !$cbv && !$grh && $grv} {
    }
    # grhgrv
    if {!$cbh && !$cbv && $grh && $grv} {
	incr hh -$graph(size)
	incr hh $graph(vert,offset)
    }

    # sanity check
    if {$xx<0 || $yy<0 || $ww<0 || $hh<0} {
	return 0
    }

    [subst $${varname}(vert)] configure -width $ww -height $hh
    set ${varname}(vert,xx) $xx
    set ${varname}(vert,yy) $yy

    return 1
}

proc GraphShow {frame which} {
    global ds9

    set varname ${frame}gr
    global $varname

    set gr [subst $${varname}($which)]
    set id [subst $${varname}($which,id)]
    set xx [subst $${varname}($which,xx)]
    set yy [subst $${varname}($which,yy)]

    if {!$id} {
	set ${varname}($which,id) [$ds9(canvas) create window $xx $yy \
				       -window $gr -anchor nw]
    } else {
	$ds9(canvas) coords $gr $xx $yy
    }

    if {$id} {
	$ds9(canvas) raise $id
    }
}

proc GraphHide {frame which} {
    global ds9

    set varname ${frame}gr
    global $varname

    set id [subst $${varname}($which,id)]
    if {$id} {
	$ds9(canvas) delete $id
	set ${varname}($which,id) 0
    }
}

proc ThemeConfigGraph {w} {
    # invoked from ThemeConfigCanvas

    $w configure -fg [ThemeTreeForeground] -bg [ThemeTreeBackground] \
	-plotbackground [ThemeTreeBackground]

    $w xaxis configure -bg [ThemeTreeBackground] -color [ThemeTreeForeground]
    $w x2axis configure -bg [ThemeTreeBackground] -color [ThemeTreeForeground]

    $w yaxis configure -bg [ThemeTreeBackground] -color [ThemeTreeForeground]
    $w y2axis configure -bg [ThemeTreeBackground] -color [ThemeTreeForeground]

    $w element configure line1 -color [ThemeTreeForeground]
}

# Events
proc EnterGraph {which horz} {
    global current

    focus $which
    $which crosshairs on

    if {$current(frame) != {}} {
	switch $current(mode) {
	    crosshair -
	    analysis {

		set xx [$which crosshairs cget -x]
		set yy [$which crosshairs cget -y]

		set coord [$current(frame) get crosshair canvas]
		set XX [lindex $coord 0]
		set YY [lindex $coord 1]

		if {$horz} {
		    EnterInfoBox $current(frame)
		    UpdateInfoBox $current(frame) $xx $YY canvas
		    UpdatePixelTableDialog $current(frame) $xx $YY canvas
		} else {
		    EnterInfoBox $current(frame)
		    UpdateInfoBox $current(frame) $XX $yy canvas
		    UpdatePixelTableDialog $current(frame) $XX $yy canvas
		}
	    }
	}
    }
}

proc LeaveGraph {which} {
    focus {}
    $which crosshairs off

    LeaveInfoBox
    PixelTableClearDialog
}

proc MotionGraph {which xx yy horz} {
    global current

    $which crosshairs configure -x $xx -y $yy

    if {$current(frame) != {}} {
	switch $current(mode) {
	    crosshair -
	    analysis {
		set coord [$current(frame) get crosshair canvas]
		set XX [lindex $coord 0]
		set YY [lindex $coord 1]
		if {$horz} {
		    UpdateInfoBox $current(frame) $xx $YY canvas
		    UpdatePixelTableDialog $current(frame) $xx $YY canvas
		} else {
		    UpdateInfoBox $current(frame) $XX $yy canvas
		    UpdatePixelTableDialog $current(frame) $XX $yy canvas
		}
	    }    
	}
    }
}

proc ArrowKeyGraph {which xx yy horz} {
    set cx [$which crosshairs cget -x]
    set cy [$which crosshairs cget -y]

    set cx [expr $cx+$xx]
    set cy [expr $cy+$yy]

    MotionGraph $which $cx $cy $horz
}

# Update procs

proc UpdateGraphsFont {} {
    global ds9
    
    global debug
    if {$debug(tcl,graph)} {
	puts "UpdateGraphsFont"
    }

    UpdateGraphFont graph horz
    UpdateGraphFont graph vert
    foreach ff $ds9(frames) {
	UpdateGraphFont $ff horz
	UpdateGraphFont $ff vert
    }
}

proc UpdateGraphFont {frame which} {
    global graph
    global ds9

    set varname ${frame}gr
    global $varname

    [subst $${varname}($which)] y2axis configure -tickfont "$ds9($graph(font)) $graph(font,size) $graph(font,weight) $graph(font,slant)"
    [subst $${varname}($which)] yaxis configure -tickfont "$ds9($graph(font)) $graph(font,size) $graph(font,weight) $graph(font,slant)"
}

proc UpdateGraphsMethod {} {
    global ds9
    
    global debug
    if {$debug(tcl,graph)} {
	puts "UpdateGraphsMethod"
    }

    UpdateGraphMethod graph
    foreach ff $ds9(frames) {
	UpdateGraphMethod $ff
    }
}

proc UpdateGraphMethod {frame} {
    set varname ${frame}gr
    global $varname
    
    InitGraphData $frame horz
    InitGraphData $frame vert
}

proc UpdateGraphsGrid {} {
    global ds9
    
    global debug
    if {$debug(tcl,graph)} {
	puts "UpdateGraphsGrid"
    }

    UpdateGraphGrid graph
    foreach ff $ds9(frames) {
	UpdateGraphGrid $ff
    }
}

proc UpdateGraphGrid {frame} {
    global ds9
    global graph

    set varname ${frame}gr
    global $varname
    
    [subst $${varname}(horz)] xaxis configure -grid $graph(grid)
    [subst $${varname}(horz)] y2axis configure -grid $graph(grid) \
	-logscale $graph(log)

    [subst $${varname}(vert)] yaxis configure -grid $graph(grid) \
	-logscale $graph(log)
    [subst $${varname}(vert)] x2axis configure -grid $graph(grid)
}

proc InitGraphsDataCurrent {} {
    global current

    if {$current(frame) != {}} {
	InitGraphsData $current(frame)
    }
}

proc InitGraphsData {frame} {
    global debug
    if {$debug(tcl,graph)} {
	puts "InitGraphsData $frame" 
    }

    # sanity check
    if {$frame == {}} {
	return
    }

    # don't process default graph
    if {$frame == {graph}} {
	return
    }

    InitGraphData $frame horz
    InitGraphData $frame vert
}

proc InitGraphData {frame which} {
    global ds9
    global current

    global debug
    if {$debug(tcl,graph)} {
	puts "InitGraphData $frame $which" 
    }

    switch $current(mode) {
	crosshair {
	    set coord [$frame get crosshair canvas]
	    set xx [lindex $coord 0]
	    set yy [lindex $coord 1]
	}
	default {
	    set xx [$ds9(canvas) itemcget $frame -x]
	    set yy [$ds9(canvas) itemcget $frame -y]
	}
    }

    # we need xmin/xmax from screen
    # we need ymin/ymax from data
    UpdateGraphData $frame $which $xx $yy canvas
    UpdateGraphAxisX $frame $which
    UpdateGraphAxisY $frame $which
}

proc UpdateGraphsData {frame xx yy sys} {
    global view

    global debug
    if {$debug(tcl,graph)} {
	puts "UpdateGraphsData $frame $xx $yy $sys" 
    }

    # don't process default graph
    if {$frame == {graph}} {
	return
    }

    if {![$frame has fits]} {
	return
    }

    if {$view(graph,horz)} {
	UpdateGraphData $frame horz $xx $yy $sys
    }
    if {$view(graph,vert)} {
	UpdateGraphData $frame vert $xx $yy $sys
    }
}

proc UpdateGraphData {frame which xx yy sys} {
    global graph

    global debug
    if {$debug(tcl,graph)} {
	puts "UpdateGraphData $frame $which $xx $yy $sys" 
    }

    set varname ${frame}gr
    global $varname

    switch $which {
	horz {set key horizontal}
	vert {set key vertical}
    }

    $frame get $key cut \
	[subst $${varname}($which,vect,xx)] \
	[subst $${varname}($which,vect,yy)] \
	$xx $yy $sys $graph(thick) $graph(method)
}

proc ShowGraphsData {frame} {
    global view

    global debug
    if {$debug(tcl,graph)} {
	puts "ShowGraphsData $frame"
    }

    # don't process default graph
    if {$frame == {graph}} {
	return
    }

    if {$view(graph,horz)} {
	ShowGraphData $frame horz
    }
    if {$view(graph,vert)} {
	ShowGraphData $frame vert
    }
}

proc ShowGraphData {frame which} {
    set varname ${frame}gr
    global $varname

    [subst $${varname}($which)] element configure line1 -hide no
}

proc ClearGraphsData {frame} {
    global view

    global debug
    if {$debug(tcl,graph)} {
	puts "ClearGraphsData $frame"
    }

    # don't process default graph
    if {$frame == {graph}} {
	return
    }

    if {$view(graph,horz)} {
	ClearGraphData $frame horz
    }
    if {$view(graph,vert)} {
	ClearGraphData $frame vert
    }
}

proc ClearGraphData {frame which} {
    set varname ${frame}gr
    global $varname

    [subst $${varname}($which)] element configure line1 -hide yes
}

proc UpdateGraphAxisX {frame which} {
    global igraph

    global debug
    if {$debug(tcl,graph)} {
	puts "UpdateGraphAxisX $frame $which"
    }

    set varname ${frame}gr
    global $varname

    set gr [subst $${varname}($which)]
    set xv [subst $${varname}($which,vect,xx)]

    if {[$frame has fits]} {
	set xmin [$xv min]
	set xmax [$xv max]

	$gr xaxis configure -min $xmin -max $xmax
	$gr x2axis configure -min $xmin -max $xmax
    } else {
	$gr xaxis configure -min $igraph(x,min) -max $igraph(x,max)
	$gr x2axis configure -min $igraph(x,min) -max $igraph(x,max)
    }
}

proc UpdateGraphAxisY {frame which} {
    global igraph
    global graph

    global debug
    if {$debug(tcl,graph)} {
	puts "UpdateGraphAxisY $frame $which"
    }

    set varname ${frame}gr
    global $varname

    set gr [subst $${varname}($which)]

    if {[$frame has fits]} {
	set minmax [$frame get clip]
	set ymin [lindex $minmax 0]
	set ymax [lindex $minmax 1]

	# must use .eq. since "nan" is a legal double value
	if {$ymin eq "nan" || $ymax eq "nan"} {
	    set ymin 0
	    set ymax 1
	}

	if {$ymin >= $ymax} {
	    set ymax [expr $ymin + 1]
	}

	switch $graph(method) {
	    sum {set ymax [expr $ymax*$graph(thick)]}
	    average {}
	}

	$gr yaxis configure -min $ymin -max $ymax
	$gr y2axis configure -min $ymin -max $ymax
    } else {
	$gr yaxis configure -min $igraph(y,min) -max $igraph(y,max)
	$gr y2axis configure -min $igraph(y,min) -max $igraph(y,max)
    }
}

# Dialog
proc GraphDialog {} {
    global igraph
    global graph
    global current
    global ds9

    # see if we already have a window visible
    if {[winfo exists $igraph(top)]} {
	raise $igraph(top)
	return
    }

    # create the window
    set w $igraph(top)
    set mb $igraph(mb)

    Toplevel $w $mb 6 [msgcat::mc {Graph Parameters}] GraphDestroyDialog
    $mb add cascade -label [msgcat::mc {File}] -menu $mb.file
    $mb add cascade -label [msgcat::mc {Edit}] -menu $mb.edit

    ThemeMenu $mb.file
    $mb.file add command -label [msgcat::mc {Apply}] \
	-command GraphApplyDialog
    $mb.file add separator
    $mb.file add command -label [msgcat::mc {Close}] \
	-command GraphDestroyDialog -accelerator "${ds9(ctrl)}W"

    EditMenu $mb igraph

    set f [ttk::labelframe $w.gr -text [msgcat::mc {graph}] -padding 2]

    ttk::label $f.tsize -text [msgcat::mc {Size}]
    ttk::entry $f.size -textvariable graph(size) -width 7
    ttk::label $f.tthick -text [msgcat::mc {Thickness}]
    ttk::entry $f.thick -textvariable graph(thick) -width 7

    grid $f.tsize $f.size -padx 2 -pady 2 -sticky w
    grid $f.tthick $f.thick -padx 2 -pady 2 -sticky w

    # Buttons
    set f [ttk::frame $w.buttons]
    ttk::button $f.apply -text [msgcat::mc {Apply}] -command GraphApplyDialog
    ttk::button $f.close -text [msgcat::mc {Close}] -command GraphDestroyDialog
    pack $f.apply $f.close -side left -expand true -padx 2 -pady 4

    # Fini
    grid $w.gr -sticky news
    grid $w.buttons - -sticky ew
    grid rowconfigure $w 0 -weight 1
    grid columnconfigure $w 1 -weight 1

    bind $w <<Close>> GraphDestroyDialog
}

proc GraphApplyDialog {} {
    # size changes layout
    LayoutFrames
}

proc GraphDestroyDialog {} {
    global igraph

    if {[winfo exists $igraph(top)]} {
	destroy $igraph(top)
	destroy $igraph(mb)
    }
}

# Process Cmds

proc ProcessGraphCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    graph::YY_FLUSH_BUFFER
    graph::yy_scan_string [lrange $var $i end]
    graph::yyparse
    incr i [expr $graph::yycnt-1]
}

proc ProcessSendGraphCmd {proc id param {sock {}} {fn {}}} {
    global parse
    set parse(proc) $proc
    set parse(id) $id

    graphsend::YY_FLUSH_BUFFER
    graphsend::yy_scan_string $param
    graphsend::yyparse
}
