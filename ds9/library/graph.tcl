#  Copyright (C) 1999-2021
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc GraphDef {} {
    global igraph
    global dgraph
    global pgraph
    global graph

    set igraph(top) .grph
    set igraph(mb) .grphmb

    set igraph(tick,len) 4
    set igraph(x,max) 100
    set igraph(y,max) 100

    set dgraph(horz,offset) 100
    set dgraph(vert,offset) 0

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
    global dgraph
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
		  -rightmargin $dgraph(horz,offset) \
		 ]

    set xv [blt::vector create ${varname}grhx]
    set yv [blt::vector create ${varname}grhy]

    $horz legend configure -hide yes
    $horz crosshairs configure -color green

    $horz xaxis configure -hide no -showticks no -linewidth 0 \
	-bg [ThemeTreeBackground] -color [ThemeTreeForeground] \
	-tickdefault $igraph(tick,len) \
	-min 0 -max $igraph(x,max) 
    $horz x2axis configure -hide yes \
	-bg [ThemeTreeBackground] -color [ThemeTreeForeground] \
	-min 0 -max $igraph(x,max)
    $horz yaxis configure -hide yes \
	-bg [ThemeTreeBackground] -color [ThemeTreeForeground] \
	-min 1 -max $igraph(y,max)
    $horz y2axis configure -hide no \
	-bg [ThemeTreeBackground] -color [ThemeTreeForeground] \
	-min 1 -max $igraph(y,max)
    
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
	-min 0 -max $igraph(x,max) 
    $vert x2axis configure -hide no -descending yes \
	-showticks no -linewidth 0 \
	-bg [ThemeTreeBackground] -color [ThemeTreeForeground] \
	-min 0 -max $igraph(x,max) 

    $vert yaxis configure -hide no -descending yes \
	-bg [ThemeTreeBackground] -color [ThemeTreeForeground] \
	-min 1 -max $igraph(y,max)
    $vert y2axis configure -hide yes -descending yes \
	-bg [ThemeTreeBackground] -color [ThemeTreeForeground] \
	-tickdefault $igraph(tick,len) \
	-min 1 -max $igraph(y,max)

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
    BindEventsGraph $frame
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

proc BindEventsGraph {frame} {
    global ds9
    
    global debug
    if {$debug(tcl,graph)} {
	puts stderr "BindEventsGraph $frame"
    }
    
    set varname ${frame}gr
    global $varname

    # horizontal
    set horz [subst $${varname}(horz)]
    bind $horz <Enter> [list EnterGraph $frame horz]
    bind $horz <Leave> [list LeaveGraph $frame horz]

    bind $horz <Button-1> [list MotionGraph $frame %x %y horz]
    bind $horz <B1-Motion> [list MotionGraph $frame %x %y horz]
    bind $horz <Up> [list ArrowKeyGraph $frame 0 -1 horz]
    bind $horz <Down> [list ArrowKeyGraph $frame 0 1 horz]
    bind $horz <Left> [list ArrowKeyGraph $frame -1 0 horz]
    bind $horz <Right> [list ArrowKeyGraph $frame 1 0 horz]

    switch $ds9(wm) {
	x11 -
	win32 {bind $horz <<ThemeChanged>> {ThemeConfigGraph %W}}
	aqua {}
    }

    # vertical
    set vert [subst $${varname}(vert)]
    bind $vert <Enter> [list EnterGraph $frame vert]
    bind $vert <Leave> [list LeaveGraph $frame vert]
    bind $vert <Button-1> [list MotionGraph $frame %x %y vert]
    bind $vert <B1-Motion> [list MotionGraph $frame %x %y vert]
    bind $vert <Up> [list ArrowKeyGraph $frame 0 -1 vert]
    bind $vert <Down> [list ArrowKeyGraph $frame 0 1 vert]
    bind $vert <Left> [list ArrowKeyGraph $frame -1 0 vert]
    bind $vert <Right> [list ArrowKeyGraph $frame 1 0 vert]

    switch $ds9(wm) {
	x11 -
	win32 {bind $vert <<ThemeChanged>> {ThemeConfigGraph %W}}
	aqua {}
    }
}

proc UnBindEventsGraph {frame} {
    global ds9
    
    global debug
    if {$debug(tcl,graph)} {
	puts stderr "UnBindEventsGraph $frame"
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
    global dgraph
    global graphgr

    set ff [$graphgr(horz) xaxis cget -tickfont]
    set tl [$graphgr(horz) xaxis cget -ticklength]
    set sp [font metrics $ff -linespace]
    set dgraph(vert,offset) [expr $tl + $sp + 4]
}

proc LayoutGraphHorz {frame fx fy fw fh} {
    global colorbar
    global view
    global dgraph
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
	incr ww $dgraph(horz,offset)
    }

    # cbvgrh
    if {!$cbh && $cbv && $grh && !$grv} {
	incr ww -$colorbar(vertical,width)
	incr ww -$canvas(gap)
	incr ww $dgraph(horz,offset)
    }
    # cbvgrv
    if {!$cbh && $cbv && !$grh && $grv} {
    }
    # cbvgrhgrv
    if {!$cbh && $cbv && $grh && $grv} {
	incr ww -$colorbar(vertical,width)
	incr ww -$canvas(gap)
	incr ww -$graph(size)
	incr ww $dgraph(horz,offset)
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
	incr ww $dgraph(horz,offset)
    }

    # sanity check
    if {$xx<0} {
	set xx 0
    }
    if {$yy<0} {
	set yy 0
    }
    if {$ww<0} {
	set ww 1
    }
    if {$hh<0} {
	set hh 1
    }

    [subst $${varname}(horz)] configure -width $ww -height $hh
    set ${varname}(horz,xx) $xx
    set ${varname}(horz,yy) $yy
}

proc LayoutGraphVert {frame fx fy fw fh} {
    global colorbar
    global view
    global dgraph
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
	incr hh $dgraph(vert,offset)
    }
    # cbhgrhgrv
    if {$cbh && !$cbv && $grh && $grv} {
	incr hh -$colorbar(horizontal,height)
	incr hh -$canvas(gap)
	incr hh -$graph(size)
	incr hh $dgraph(vert,offset)
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
	incr hh $dgraph(vert,offset)
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
	incr hh $dgraph(vert,offset)
    }

    # sanity check
    if {$xx<0} {
	set xx 0
    }
    if {$yy<0} {
	set yy 0
    }
    if {$ww<0} {
	set ww 1
    }
    if {$hh<0} {
	set hh 1
    }

    [subst $${varname}(vert)] configure -width $ww -height $hh
    set ${varname}(vert,xx) $xx
    set ${varname}(vert,yy) $yy
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

    # canvas raise has no affect on windows
    raise $gr
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
proc EnterGraph {frame which} {
    set varname ${frame}gr
    global $varname

    set gr [subst $${varname}($which)]
    set xx [$gr crosshairs cget -x]
    set yy [$gr crosshairs cget -y]

    focus $gr
    $gr crosshairs on

    MotionGraph $frame $xx $yy $which
}

proc LeaveGraph {frame which} {
    set varname ${frame}gr
    global $varname

    set gr [subst $${varname}($which)]

    focus {}
    $gr crosshairs off

    LeaveInfoBox
    PixelTableClearDialog
}

proc MotionGraph {frame xx yy which} {
    global current

    set varname ${frame}gr
    global $varname

    set gr [subst $${varname}($which)]
    set x0 [subst $${varname}($which,xx)]
    set y0 [subst $${varname}($which,yy)]

    $gr crosshairs configure -x $xx -y $yy

    # don't process default graph
    if {$frame == {graph}} {
	return
    }

    switch $current(mode) {
	crosshair -
	analysis {
	    set coord [$frame get crosshair canvas]
	    set XX [lindex $coord 0]
	    set YY [lindex $coord 1]

	    set X0 [expr $xx+$x0]
	    set Y0 [expr $yy+$y0]

	    switch $which {
		horz {
		    UpdateInfoBox $frame $X0 $YY canvas
		    UpdatePixelTableDialog $frame $X0 $YY canvas
		}
		vert {
		    UpdateInfoBox $frame $XX $Y0 canvas
		    UpdatePixelTableDialog $frame $XX $Y0 canvas
		}
	    }
	}
    }
}

proc ArrowKeyGraph {frame xx yy which} {
    set varname ${frame}gr
    global $varname

    set gr [subst $${varname}($which)]
    set cx [$gr crosshairs cget -x]
    set cy [$gr crosshairs cget -y]
    set cx [expr $cx+$xx]
    set cy [expr $cy+$yy]
    MotionGraph $frame $cx $cy $which
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

    # don't process default
    # UpdateGraphMethod graph
    foreach ff $ds9(frames) {
	UpdateGraphMethod $ff
    }
}

proc UpdateGraphMethod {frame} {
    set varname ${frame}gr
    global $varname
    
    # don't process default graph
    if {$frame == {graph}} {
	return
    }

    UpdateGraphAxis $frame horz
    UpdateGraphAxis $frame vert
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

proc UpdateGraphsAxis {frame} {
    global debug
    if {$debug(tcl,graph)} {
	puts "UpdateGraphsAxis $frame" 
    }

    # sanity check
    if {$frame == {}} {
	return
    }

    # don't process default graph
    if {$frame == {graph}} {
	return
    }

    UpdateGraphAxis $frame horz
    UpdateGraphAxis $frame vert
}

proc UpdateGraphAxis {frame which} {
    global ds9
    global current

    global debug
    if {$debug(tcl,graph)} {
	puts "UpdateGraphAxis $frame $which" 
    }

    UpdateGraphAxisX $frame $which
    UpdateGraphAxisY $frame $which
}

proc UpdateGraphAxisX {frame which} {
    global ds9
    global igraph

    global debug
    if {$debug(tcl,graph)} {
	puts "UpdateGraphAxisX $frame $which"
    }

    set varname ${frame}gr
    global $varname

    set gr [subst $${varname}($which)]

    if {[$frame has fits]} {
	set xmax [$ds9(canvas) itemcget $frame -width]
	$gr xaxis configure -min 0 -max $xmax
	$gr x2axis configure -min 0 -max $xmax
    } else {
	$gr xaxis configure -min 0 -max $igraph(x,max)
	$gr x2axis configure -min 0 -max $igraph(x,max)
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
	set minmax [$frame get minmax]
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
	$gr yaxis configure -min 1 -max $igraph(y,max)
	$gr y2axis configure -min 1 -max $igraph(y,max)
    }
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

    if {![$frame has fits]} {
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

proc HideGraphsData {frame} {
    global view

    global debug
    if {$debug(tcl,graph)} {
	puts "HideGraphsData $frame"
    }

    # don't process default graph
    if {$frame == {graph}} {
	return
    }

    if {$view(graph,horz)} {
	HideGraphData $frame horz
    }
    if {$view(graph,vert)} {
	HideGraphData $frame vert
    }
}

proc HideGraphData {frame which} {
    set varname ${frame}gr
    global $varname

    [subst $${varname}($which)] element configure line1 -hide yes
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

proc PrefsDialogGraph {} {
    global dprefs
    global ds9
    global pds9
    global pmagnifier
    global current
    global pgraph

    set w $dprefs(tab)

    $dprefs(listbox) insert {} end -id [ttk::frame $w.graph] \
	-text [msgcat::mc {Graphs}]

    # Graph
    set f [ttk::labelframe $w.graph.gr -text [msgcat::mc {Graph}]]

    ttk::checkbutton $f.grid -text [msgcat::mc {Grid}] \
	-variable pgraph(grid)
    ttk::label $f.taxis -text [msgcat::mc {Axis}]
    ttk::radiobutton $f.laxis -text [msgcat::mc {Linear}] \
	-variable pgraph(log) -value 0
    ttk::radiobutton $f.gaxis -text [msgcat::mc {Log}] \
	-variable pgraph(log) -value 1
    ttk::label $f.tmethod -text [msgcat::mc {Method}]
    ttk::radiobutton $f.amethod -text [msgcat::mc {Average}] \
	-variable pgraph(method) -value average
    ttk::radiobutton $f.smethod -text [msgcat::mc {Sum}] \
	-variable pgraph(method) -value sum
    ttk::label $f.tfont -text [msgcat::mc {Font}]
    ttk::label $f.tsize -text [msgcat::mc {Size}]
    ttk::entry $f.size -textvariable pgraph(size) -width 7
    ttk::label $f.tthick -text [msgcat::mc {Thickness}]
    ttk::entry $f.thick -textvariable pgraph(thick) -width 7

    FontMenuButton $f.font pgraph font font,size font,weight font,slant {}

    grid $f.grid -padx 2 -pady 2 -sticky w
    grid $f.taxis $f.laxis $f.gaxis -padx 2 -pady 2 -sticky w
    grid $f.tmethod $f.amethod $f.smethod -padx 2 -pady 2 -sticky w
    grid $f.tfont $f.font -padx 2 -pady 2 -sticky w
    grid $f.tsize $f.size -padx 2 -pady 2 -sticky w
    grid $f.tthick $f.thick -padx 2 -pady 2 -sticky w

    pack $w.graph.gr -side top -fill both -expand true
}

