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

    set igraph(x,min) 0
    set igraph(x,max) 1000
    set igraph(y,min) 1
    set igraph(y,max) 10000

    set graph(size) 150
    set graph(horz,grid) 1
    set graph(horz,log) false
    set graph(horz,thick) 1
    set graph(horz,method) average
    set graph(vert,grid) 1
    set graph(vert,log) false
    set graph(vert,thick) 1
    set graph(vert,method) average

    array set pgraph [array get graph]
}

proc GraphsCreate {frame} {
    global ds9
    global canvas
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
		  -font [font actual TkDefaultFont] \
		  -plotpadx 0 -plotpady 0 \
		  -plotborderwidth 0 \
		  -foreground [ThemeTreeForeground] \
		  -background [ThemeTreeBackground] \
		  -plotbackground [ThemeTreeBackground] \
		 ]

    set xv [blt::vector create ${varname}grhx]
    set yv [blt::vector create ${varname}grhy]

    $horz legend configure -hide yes
    $horz crosshairs configure -color green

    $horz xaxis configure -hide no -showticks no -linewidth 0 \
	-bg [ThemeTreeBackground] -color [ThemeTreeForeground]
    $horz x2axis configure -hide yes \
	-bg [ThemeTreeBackground] -color [ThemeTreeForeground]
    $horz yaxis configure -hide yes \
	-bg [ThemeTreeBackground] -color [ThemeTreeForeground]
    $horz y2axis configure -hide no -tickfont [font actual TkDefaultFont] \
	-bg [ThemeTreeBackground] -color [ThemeTreeForeground]
    
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
		  -font [font actual TkDefaultFont] \
		  -foreground [ThemeTreeForeground] \
		  -background [ThemeTreeBackground] \
		  -plotbackground [ThemeTreeBackground] \
		 ]

    set xv [blt::vector create ${varname}grvx]
    set yv [blt::vector create ${varname}grvy]

    $vert legend configure -hide yes
    $vert crosshairs configure -color green

    $vert xaxis configure -hide yes -descending yes \
	-bg [ThemeTreeBackground] -color [ThemeTreeForeground]
    $vert x2axis configure -hide no -descending yes \
	-showticks no -linewidth 0 \
	-bg [ThemeTreeBackground] -color [ThemeTreeForeground]

    $vert yaxis configure -hide no -descending yes \
	-tickfont [font actual TkDefaultFont] \
	-bg [ThemeTreeBackground] -color [ThemeTreeForeground]
    $vert y2axis configure -hide yes -descending yes \
	-bg [ThemeTreeBackground] -color [ThemeTreeForeground]

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
    if {$debug(tcl,events)} {
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
    if {$debug(tcl,events)} {
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

proc LayoutGraphAdjust {} {
    global graph
    global graphgr

    set ff [$graphgr(horz) y2axis cget -tickfont]

    # 6 chars
    set xstr [font measure $ff "000000"]
    set xtl [$graphgr(horz) y2axis cget -ticklength]
    set graph(horizontal,offset) [expr $xtl + $xstr + 4]

    set ytl [$graphgr(horz) xaxis cget -ticklength]
    set ysp [font metrics $ff -linespace]
    set graph(vertical,offset) [expr $ytl + $ysp + 4]
}

proc LayoutGraphHorz {frame fx fy fw fh} {
    global colorbar
    global view
    global graph
    global canvas
    
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
	incr ww $graph(horizontal,offset)
    }

    # cbvgrh
    if {!$cbh && $cbv && $grh && !$grv} {
	incr ww -$colorbar(vertical,width)
	incr ww -$canvas(gap)
	incr ww $graph(horizontal,offset)
    }
    # cbvgrv
    if {!$cbh && $cbv && !$grh && $grv} {
    }
    # cbvgrhgrv
    if {!$cbh && $cbv && $grh && $grv} {
	incr ww -$colorbar(vertical,width)
	incr ww -$canvas(gap)
	incr ww -$graph(size)
	incr ww $graph(horizontal,offset)
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
	incr ww $graph(horizontal,offset)
    }

    [subst $${varname}(horz)] configure -width $ww -height $hh
    set ${varname}(horz,xx) $xx
    set ${varname}(horz,yy) $yy
}

proc LayoutGraphVert {frame fx fy fw fh} {
    global colorbar
    global view
    global graph
    global canvas
    
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
	incr hh $graph(vertical,offset)
    }
    # cbhgrhgrv
    if {$cbh && !$cbv && $grh && $grv} {
	incr hh -$colorbar(horizontal,height)
	incr hh -$canvas(gap)
	incr hh -$graph(size)
	incr hh $graph(vertical,offset)
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
	incr hh $graph(vertical,offset)
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
	incr hh $graph(vertical,offset)
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

proc UpdateGraphFont {frame} {
    set varname ${frame}gr
    global $varname

    ${varname}(horz) y2axis configure -tickfont [font actual TkDefaultFont]
    ${varname}(vert) yaxis configure -tickfont [font actual TkDefaultFont]
}

proc UpdateGraphGrid {frame} {
    global graph

    set varname ${frame}gr
    global $varname
    
    [subst $${varname}(horz)] xaxis configure \
	-grid $graph(horz,grid) -tickdefault 4
    [subst $${varname}(horz)] y2axis configure -grid $graph(horz,grid)

    [subst $${varname}(vert)] yaxis configure \
	-grid $graph(vert,grid) -tickdefault 4
    [subst $${varname}(vert)] x2axis configure -grid $graph(vert,grid)
}

proc UpdateGraphAxis {frame} {
    return
    global ds9
    global view
    global graph

    set varname ${frame}gr
    global $varname

    if {$view(graph,horz)} {
	set gr [subst $${varname}(horz)]
	set xv [subst $${varname}(horz,vect,xx)]
	set yv [subst $${varname}(horz,vect,yy)]

	UpdateGraphXAxisHV $frame $gr $xv
	UpdateGraphYAxisHV $frame $gr $yv \
	    $graph(horz,log) $graph(horz,thick) $graph(horz,method)
    }
    
    if {$view(graph,vert)} {
	set gr [subst $${varname}(vert)]
	set xv [subst $${varname}(vert,vect,xx)]
	set yv [subst $${varname}(vert,vect,yy)]

	UpdateGraphXAxisHV $frame $gr $xv
	UpdateGraphYAxisHV $frame $gr $yv \
	    $graph(vert,log) $graph(vert,thick) $graph(vert,method)
    }
}

proc UpdateGraphXAxisHV {frame what vectorX} {
    return
    global igraph

    set varname ${frame}gr
    global $varname

    if {$frame != {}} {
#	set xMin [expr "$$vectorX\(min\)"]
#	set xMax [expr "$$vectorX\(max\)"]
	set xMin [$vectorX min]
	set xMax [$vectorX max]

	$what xaxis configure -min $xMin -max $xMax
	$what x2axis configure -min $xMin -max $xMax
    } else {
	$what xaxis configure -min $igraph(x,min) -max $igraph(x,max)
	$what x2axis configure -min $igraph(x,min) -max $igraph(x,max)
    }
}

proc UpdateGraphYAxisHV {frame what vectorY log thick method} {
    return
    global igraph

    set varname ${frame}gr
    global $varname

    if {$frame != {}} {
	set minmax [$frame get clip]
	set yMin [lindex $minmax 0]
	set yMax [lindex $minmax 1]

	# must use .eq. since "nan" is a legal double value
	if {$yMin eq "nan" || $yMax eq "nan"} {
	    set yMin 0
	    set yMax 1
	}

	if {$yMin >= $yMax} {
	    set yMax [expr $yMin + 1]
	}

	switch $method {
	    sum {
		set yMax [expr $yMax*$thick]
	    }
	    average {}
	}

	$what yaxis configure -min $yMin -max $yMax \
	    -logscale $log -tickdefault 4
	$what y2axis configure -min $yMin -max $yMax \
	    -logscale $log -tickdefault 4
    } else {
	$what yaxis configure -min $igraph(y,min) -max $igraph(y,max) \
	    -logscale $log -tickdefault 4
	$what y2axis configure -min $igraph(y,min) -max $igraph(y,max) \
	    -logscale $log -tickdefault 4
    }
}

proc ClearGraphData {frame} {
    return
    global view

    set varname ${frame}gr
    global $varname

    if {$view(graph,horz)} {
	${varname}(horz) element configure line1 -hide yes
    }    

    if {$view(graph,vert)} {
	${varname}(vert) element configure line1 -hide yes
    }
}

proc UpdateGraphData {frame xx yy sys} {
    return
    global ds9
    global view
    global graph
    global dgraph

    set varname ${frame}gr
    global $varname

    # save for later
    set dgraph(frame) $frame
    set dgraph(x) $xx
    set dgraph(y) $yy

    if {![$frame has fits]} {
	return
    }

    if {$view(graph,horz)} {
	$frame get horizontal cut \
	    ${varname}(horz,vect,xx) ${varname}(horz,vect,yy) \
	    $xx $yy $sys $graph(horz,thick) $graph(horz,method)
	${varname}(horz) element configure line1 -hide no
    }

    if {$view(graph,vert)} {
	$frame get vertical cut \
	    ${varname}(vert,vect,xx) ${varname}(vert,vect,yy) \
	    $xx $yy $sys $graph(vert,thick) $graph(vert,method)
	${varname}(vert) element configure line1 -hide no
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

    # Horizontal
    set f [ttk::labelframe $w.horz -text [msgcat::mc {Horizontal}] -padding 2]

    ttk::checkbutton $f.hgrid -text [msgcat::mc {Show Grid}] \
	-variable graph(horz,grid) \
	-command UpdateGraphGrid
    ttk::label $f.htaxis -text [msgcat::mc {Axis}]
    ttk::radiobutton $f.hlaxis -text [msgcat::mc {Linear}] \
	-variable graph(horz,log) -value false \
	-command [list UpdateGraphAxis $current(frame)]
    ttk::radiobutton $f.hgaxis -text [msgcat::mc {Log}] \
	-variable graph(horz,log) -value true \
	-command [list UpdateGraphAxis $current(frame)]
    ttk::label $f.htthick -text [msgcat::mc {Thickness}]
    ttk::entry $f.hthick -textvariable graph(horz,thick) -width 7
    ttk::label $f.htmethod -text [msgcat::mc {Method}]
    ttk::radiobutton $f.hamethod -text [msgcat::mc {Average}] \
	-variable graph(horz,method) -value average \
	-command [list UpdateGraphAxis $current(frame)]
    ttk::radiobutton $f.hsmethod -text [msgcat::mc {Sum}] \
	-variable graph(horz,method) -value sum \
	-command [list UpdateGraphAxis $current(frame)]

    grid $f.hgrid -padx 2 -pady 2 -sticky w
    grid $f.htaxis $f.hlaxis $f.hgaxis -padx 2 -pady 2 -sticky w
    grid $f.htthick $f.hthick -padx 2 -pady 2 -sticky w
    grid $f.htmethod $f.hamethod $f.hsmethod -padx 2 -pady 2 -sticky w

    # Vertical
    set f [ttk::labelframe $w.vert -text [msgcat::mc {Vertical}] -padding 2]

    ttk::checkbutton $f.vgrid -text [msgcat::mc {Show Grid}] \
	-variable graph(vert,grid) \
	-command UpdateGraphGrid
    ttk::label $f.vtaxis -text [msgcat::mc {Axis}]
    ttk::radiobutton $f.vlaxis -text [msgcat::mc {Linear}] \
	-variable graph(vert,log) -value false \
	-command [list UpdateGraphAxis $current(frame)]
    ttk::radiobutton $f.vgaxis -text [msgcat::mc {Log}] \
	-variable graph(vert,log) -value true \
	-command [list UpdateGraphAxis $current(frame)]
    ttk::label $f.vtthick -text [msgcat::mc {Thickness}]
    ttk::entry $f.vthick -textvariable graph(vert,thick) -width 7
    ttk::label $f.vtmethod -text [msgcat::mc {Method}]
    ttk::radiobutton $f.vamethod -text [msgcat::mc {Average}] \
	-variable graph(vert,method) -value average \
	-command [list UpdateGraphAxis $current(frame)]
    ttk::radiobutton $f.vsmethod -text [msgcat::mc {Sum}] \
	-variable graph(vert,method) -value sum \
	-command [list UpdateGraphAxis $current(frame)]

    grid $f.vgrid -padx 2 -pady 2 -sticky w
    grid $f.vtaxis $f.vlaxis $f.vgaxis -padx 2 -pady 2 -sticky w
    grid $f.vtthick $f.vthick -padx 2 -pady 2 -sticky w
    grid $f.vtmethod $f.vamethod $f.vsmethod -padx 2 -pady 2 -sticky w

    # Buttons
    set f [ttk::frame $w.buttons]
    ttk::button $f.apply -text [msgcat::mc {Apply}] -command GraphApplyDialog
    ttk::button $f.close -text [msgcat::mc {Close}] -command GraphDestroyDialog
    pack $f.apply $f.close -side left -expand true -padx 2 -pady 4

    # Fini
    grid $w.horz -sticky news
    grid $w.vert -sticky news
    grid $w.buttons - -sticky ew
    grid rowconfigure $w 0 -weight 1
    grid columnconfigure $w 1 -weight 1

    bind $w <<Close>> GraphDestroyDialog
}

proc GraphApplyDialog {} {
    global ds9
    global igraph
    global graph
    global dgraph
    
    if {[info exists dgraph]} {
	if {$dgraph(frame) != {}} {
	    set ii [lsearch $ds9(active) $dgraph(frame)]
	    if {$ii>=0} {
		UpdateGraphData $dgraph(frame) $dgraph(x) $dgraph(y) canvas
	    } else {
		set dgraph(frame) {}
	    }
	}
    }
}

proc GraphDestroyDialog {} {
    global igraph
    global dgraph

    if {[winfo exists $igraph(top)]} {
	destroy $igraph(top)
	destroy $igraph(mb)
	unset dgraph
    }
}

