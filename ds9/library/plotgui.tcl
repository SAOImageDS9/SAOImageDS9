#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0


proc PlotGUI {varname} {
    upvar #0 $varname var
    global $varname

    global ds9
    
    # see if we already have a window visible
    if {[winfo exists $var(gui,top)]} {
	raise $var(gui,top)
	return
    }

    # create the window
    set w $var(gui,top)
    set mb $var(gui,mb)

    Toplevel $w $mb 6 [msgcat::mc {Plot Control Panel}] \
	[list PlotGUIDestroy $varname]

    $mb add cascade -label [msgcat::mc {File}] -menu $mb.file
    $mb add cascade -label [msgcat::mc {Edit}] -menu $mb.edit

    ThemeMenu $mb.file
    $mb.file add command -label [msgcat::mc {Apply}] \
	-command [list PlotGUIApply $varname]
    $mb.file add separator
    $mb.file add command -label "[msgcat::mc {Load Data}]..." \
	-command [list PlotLoadData $varname]
    $mb.file add command -label "[msgcat::mc {Save Data}]..." \
	-command [list PlotSaveData $varname]
    $mb.file add separator
    $mb.file add cascade -label [msgcat::mc {Export}] \
	-menu $mb.file.export
    $mb.file add separator
    $mb.file add command -label [msgcat::mc {Statistics}] \
       -command "set ${varname}(stats) 1; PlotStats $varname"
    $mb.file add command -label [msgcat::mc {List Data}] \
       -command "set ${varname}(list) 1; PlotList $varname"
    $mb.file add separator
    $mb.file add command -label "[msgcat::mc {Backup}]..." \
	-command [list PlotBackupDialog $varname]
    $mb.file add command -label "[msgcat::mc {Restore}]..." \
	-command [list PlotRestoreDialog $varname]
    $mb.file add separator
    $mb.file add command \
	-label "[msgcat::mc {Page Setup}]..." \
	-command PSPageSetup -accelerator "${ds9(shiftctrl)}P"
    $mb.file add command -label "[msgcat::mc {Print}]..." \
	-command [list PlotPSPrint $varname] -accelerator "${ds9(ctrl)}P"
    $mb.file add separator
    $mb.file add command -label [msgcat::mc {Close}] \
	-command [list PlotGUIDestroy $varname] -accelerator "${ds9(ctrl)}W"

    $var(mb).file.export clone $mb.file.export

    ThemeMenu $mb.edit
    $mb.edit add command -label [msgcat::mc {Cut}] \
	-command "EntryCut $var(gui,top)" -accelerator "${ds9(ctrl)}X"
    $mb.edit add command -label [msgcat::mc {Copy}] \
	-command "EntryCopy $var(gui,top)" -accelerator "${ds9(ctrl)}C"
    $mb.edit add command -label [msgcat::mc {Paste}] \
	-command "EntryPaste $var(gui,top)" -accelerator "${ds9(ctrl)}V"
    $mb.edit add separator
    $mb.edit add radiobutton -label [msgcat::mc {Pointer}] \
	-variable ${varname}(mode) -value pointer \
	-command [list PlotChangeMode $varname]
    $mb.edit add radiobutton -label [msgcat::mc {Zoom}] \
	-variable ${varname}(mode) -value zoom \
	-command [list PlotChangeMode $varname]

    set ff [ttk::frame $w.param]

    # List
    set f [ttk::frame $ff.canvas]
    PlotGUICanvas $varname $f

    set f [ttk::frame $ff.graph]
    PlotGUIGraph $varname $f

    set f [ttk::frame $ff.dataset]
    PlotGUIDataset $varname $f

    pack $ff.canvas $ff.graph $ff.dataset \
	-side left -fill y -expand true

    # Buttons
    set f [ttk::frame $w.buttons]
    ttk::button $f.apply -text [msgcat::mc {Apply}] \
	-command [list PlotGUIApply $varname]
    ttk::button $f.close -text [msgcat::mc {Close}] \
	-command [list PlotGUIDestroy $varname]
    pack $f.apply $f.close -side left -expand true -padx 2 -pady 4

    # Fini
    ttk::separator $w.sep -orient horizontal
    pack $w.buttons $w.sep -side bottom -fill x
    pack $w.param -fill both -expand true

    bind $w <<Close>> [list PlotGUIDestroy $varname]

    PlotGUICurrentGraph $varname
    PlotUpdateGUI $varname
}

proc PlotGUIDestroy {varname} {
    upvar #0 $varname var
    global $varname
    
    destroy $var(gui,top)
    destroy $var(gui,mb)
}

proc PlotGUIApply {varname} {
    upvar #0 $varname var
    global $varname

    # special case
    if {$var(graph,ds,name) == {}} {
	set nn $var(graph,ds,current)
	set var(graph,ds,name) "Dataset $nn"
    }

    # update the world?
    $var(graph,proc,updateelement) $varname

    PlotChangeLayout $varname
    PlotChangeAxis $varname
    PlotUpdateCanvas $varname
    PlotUpdateGraph $varname
    PlotUpdateMenus $varname
    PlotUpdateGUI $varname
}

proc PlotGUICanvas {varname w} {
    upvar #0 $varname var
    global $varname

    # Canvas
    set f [ttk::labelframe $w.canvas -text [msgcat::mc {Plot}]]

    ttk::label $f.tselect -text [msgcat::mc {Select Graph}]
    ttk::menubutton $f.select -textvariable ${varname}(graph,name) \
	-menu $f.select.menu
    $var(mb).canvas.select clone $f.select.menu

    ttk::button $f.line -text [msgcat::mc {Add Line Graph}] \
	-command [list PlotAddGraph $varname line]
    ttk::button $f.bar -text [msgcat::mc {Add Bar Graph}] \
	-command [list PlotAddGraph $varname bar]
    ttk::button $f.delete -text [msgcat::mc {Delete Graph}] \
	-command [list PlotDeleteGraphCurrent $varname]

    grid $f.tselect $f.select -padx 2 -pady 2 -sticky w
    grid $f.line $f.bar -padx 2 -pady 2 -sticky w
    grid $f.delete -padx 2 -pady 2 -sticky w

    # Layout
    set g [ttk::labelframe $w.layout -text [msgcat::mc {Layout}]]

    set f [ttk::frame $g.arrange]
    ttk::radiobutton $f.grid -text [msgcat::mc {Grid}] \
	-variable ${varname}(canvas,layout) -value grid \
	-command [list PlotChangeLayout $varname]
    ttk::radiobutton $f.row -text [msgcat::mc {Row}] \
	-variable ${varname}(canvas,layout) -value row \
	-command [list PlotChangeLayout $varname]
    ttk::radiobutton $f.column -text [msgcat::mc {Column}] \
	-variable ${varname}(canvas,layout) -value column \
	-command [list PlotChangeLayout $varname]
    ttk::radiobutton $f.strip -text [msgcat::mc {Strip}] \
	-variable ${varname}(canvas,layout) -value strip \
	-command [list PlotChangeLayout $varname]
    pack $f.grid $f.row $f.column $f.strip -side left -padx 2

    set f [ttk::frame $g.strip]
    ttk::label $f.tscale -text [msgcat::mc {Strip Scale}]
    ttk::entry $f.scale -textvariable ${varname}(canvas,layout,strip,scale) \
	-width 6
    ttk::label $f.scalet -text {%}
    pack $f.tscale $f.scale $f.scalet -side left -padx 2

    pack $g.arrange $g.strip -side top -fill both -expand true \
	-padx 2 -pady 2

    # Font
    set f [ttk::labelframe $w.font -text [msgcat::mc {Font}]]

    ttk::label $f.ttitle -text [msgcat::mc {Title}]
    ttk::menubutton $f.title -textvariable \
	${varname}(canvas,title,family)	-menu $f.title.menu
    $var(mb).canvas.title clone $f.title.menu

    ttk::label $f.ttextlab -text [msgcat::mc {Axes Title}]
    ttk::menubutton $f.textlab \
	-textvariable ${varname}(canvas,axis,title,family) \
	-menu $f.textlab.menu
    $var(mb).canvas.textlab clone $f.textlab.menu

    ttk::label $f.tnumlab -text [msgcat::mc {Axes Number}]
    ttk::menubutton $f.numlab \
	-textvariable ${varname}(canvas,axis,font,family) \
	-menu $f.numlab.menu
    $var(mb).canvas.numlab clone $f.numlab.menu

    ttk::label $f.tlegendtitle -text [msgcat::mc {Legend Title}]
    ttk::menubutton $f.legendtitle \
	-textvariable ${varname}(canvas,legend,title,family) \
	-menu $f.legendtitle.menu
    $var(mb).canvas.legendtitle clone $f.legendtitle.menu

    ttk::label $f.tlegend -text [msgcat::mc {Legend}]
    ttk::menubutton $f.legend \
	-textvariable ${varname}(canvas,legend,font,family) \
	-menu $f.legend.menu
    $var(mb).canvas.legend clone $f.legend.menu

    grid $f.ttitle $f.title -padx 2 -pady 2 -sticky w
    grid $f.ttextlab $f.textlab -padx 2 -pady 2 -sticky w
    grid $f.tnumlab $f.numlab -padx 2 -pady 2 -sticky w
    grid $f.tlegendtitle $f.legendtitle -padx 2 -pady 2 -sticky w
    grid $f.tlegend $f.legend -padx 2 -pady 2 -sticky w

    # Color
    set f [ttk::labelframe $w.color -text [msgcat::mc {Color}]]

    ttk::checkbutton $f.theme -text [msgcat::mc {Use Theme Colors}] \
	-variable ${varname}(canvas,theme) \
	-command [list PlotUpdateAllElement $varname]

    ttk::label $f.tfg -text [msgcat::mc {Foreground}]
    ttk::menubutton $f.fg -textvariable ${varname}(canvas,foreground) \
	-menu $f.fg.menu
    $var(mb).canvas.fg clone $f.fg.menu

    ttk::label $f.tbg -text [msgcat::mc {Background}]
    ttk::menubutton $f.bg -textvariable ${varname}(canvas,background) \
	-menu $f.bg.menu
    $var(mb).canvas.bg clone $f.bg.menu

    ttk::label $f.tgrid -text [msgcat::mc {Grid}]
    ttk::menubutton $f.grid -textvariable ${varname}(canvas,grid,color) \
	-menu $f.grid.menu
    $var(mb).canvas.grid clone $f.grid.menu

    grid $f.theme -padx 2 -pady 2 -sticky w
    grid $f.tfg $f.fg -padx 2 -pady 2 -sticky w
    grid $f.tbg $f.bg -padx 2 -pady 2 -sticky w
    grid $f.tgrid $f.grid -padx 2 -pady 2 -sticky w

    pack $w.canvas $w.layout $w.font $w.color \
	-side top -fill both -expand true
}

proc PlotGUIGraph {varname w} {
    upvar #0 $varname var
    global $varname

    # Graph
    set f [ttk::labelframe $w.graph -text [msgcat::mc {Graph}]]

    ttk::label $f.tselect -text [msgcat::mc {Select Datatset}]
    ttk::menubutton $f.select -textvariable ${varname}(graph,ds,name) \
	-menu $f.select.menu
    $var(mb).graph.select clone $f.select.menu

    grid $f.tselect $f.select -padx 2 -pady 2 -sticky w

    # Dataset
    set f [ttk::labelframe $w.dataset -text [msgcat::mc {Dataset}]]

    ttk::button $f.duplicate -text [msgcat::mc {Duplicate Dataset}] \
	-command [list PlotDupDataSet $varname]
    ttk::button $f.delete -text [msgcat::mc {Delete Dataset}] \
	-command [list PlotDeleteDataSetCurrent $varname]

    grid $f.duplicate $f.delete -padx 2 -pady 2 -sticky w

    # Legend
    set f [ttk::labelframe $w.legend -text [msgcat::mc {Legend}]]

    ttk::checkbutton $f.show -text [msgcat::mc {Show}] \
	-variable ${varname}(graph,legend) \
	-command [list PlotChangeLegend $varname]

    ttk::label $f.tposition -text [msgcat::mc {Position}]
    ttk::menubutton $f.position \
	-textvariable ${varname}(graph,legend,position) \
	-menu $f.position.menu

    ThemeMenu $f.position.menu
    $f.position.menu add radiobutton -label [msgcat::mc {Right}] \
	-variable ${varname}(graph,legend,position) -value right \
	-command [list PlotChangeLegend $varname]
    $f.position.menu add radiobutton -label [msgcat::mc {Left}] \
	-variable ${varname}(graph,legend,position) -value left \
	-command [list PlotChangeLegend $varname]
    $f.position.menu add radiobutton -label [msgcat::mc {Top}] \
	-variable ${varname}(graph,legend,position) -value top \
	-command [list PlotChangeLegend $varname]
    $f.position.menu add radiobutton -label [msgcat::mc {Bottom}] \
	-variable ${varname}(graph,legend,position) -value bottom \
	-command [list PlotChangeLegend $varname]
    $f.position.menu add radiobutton -label [msgcat::mc {Plot Area}] \
	-variable ${varname}(graph,legend,position) -value plotarea \
	-command [list PlotChangeLegend $varname]

    grid $f.show -padx 2 -pady 2 -sticky w
    grid $f.tposition $f.position -padx 2 -pady 2 -sticky w

    # Axis
    set f [ttk::labelframe $w.axis -text [msgcat::mc {Axis}]]

    ttk::label $f.txaxis -text [msgcat::mc {X Axis}]
    ttk::checkbutton $f.xlog -text [msgcat::mc {Log}] \
	-variable ${varname}(graph,axis,x,log) \
	-command [list PlotChangeAxis $varname]
    ttk::checkbutton $f.xflip -text [msgcat::mc {Flip}] \
	-variable ${varname}(graph,axis,x,flip) \
	-command [list PlotChangeAxis $varname]
    ttk::checkbutton $f.xgrid -text [msgcat::mc {Grid}] \
	-variable ${varname}(graph,axis,x,grid) \
	-command [list PlotChangeAxis $varname]

    ttk::label $f.tyaxis -text [msgcat::mc {Y Axis}]
    ttk::checkbutton $f.ylog -text [msgcat::mc {Log}] \
	-variable ${varname}(graph,axis,y,log) \
	-command [list PlotChangeAxis $varname]
    ttk::checkbutton $f.yflip -text [msgcat::mc {Flip}] \
	-variable ${varname}(graph,axis,y,flip) \
	-command [list PlotChangeAxis $varname]
    ttk::checkbutton $f.ygrid -text [msgcat::mc {Grid}] \
	-variable ${varname}(graph,axis,y,grid) \
	-command [list PlotChangeAxis $varname]

    grid $f.txaxis $f.xlog $f.xflip $f.xgrid -padx 2 -pady 2 -sticky w
    grid $f.tyaxis $f.ylog $f.yflip $f.ygrid -padx 2 -pady 2 -sticky w

    # Range
    set f [ttk::labelframe $w.range -text [msgcat::mc {Range}]]

    ttk::label $f.t -text [msgcat::mc {Axis}]
    ttk::label $f.tto -text [msgcat::mc {To}]
    ttk::label $f.tfrom -text [msgcat::mc {From}]
    ttk::label $f.tformat -text [msgcat::mc {Format}]
    ttk::label $f.tauto -text [msgcat::mc {Automatic}]

    ttk::label $f.x -text [msgcat::mc {X}]
    ttk::entry $f.xmin -textvariable ${varname}(graph,axis,x,min) -width 12
    ttk::entry $f.xmax -textvariable ${varname}(graph,axis,x,max) -width 12
    ttk::entry $f.xformat -textvariable ${varname}(graph,axis,x,format) -width 8
    ttk::checkbutton $f.xauto -variable ${varname}(graph,axis,x,auto) \
	-command [list PlotChangeAxis $varname]

    ttk::label $f.y -text [msgcat::mc {Y}]
    ttk::entry $f.ymin -textvariable ${varname}(graph,axis,y,min) -width 12
    ttk::entry $f.ymax -textvariable ${varname}(graph,axis,y,max) -width 12
    ttk::entry $f.yformat -textvariable ${varname}(graph,axis,y,format) -width 8
    ttk::checkbutton $f.yauto -variable ${varname}(graph,axis,y,auto) \
	-command [list PlotChangeAxis $varname]

    grid $f.t $f.tfrom $f.tto $f.tformat $f.tauto -padx 2 -pady 2 -sticky w
    grid $f.x $f.xmin $f.xmax $f.xformat $f.xauto -padx 2 -pady 2 -sticky w
    grid $f.y $f.ymin $f.ymax $f.yformat $f.yauto -padx 2 -pady 2 -sticky w

    # Titles
    set f [ttk::labelframe $w.titles -text [msgcat::mc {Titles}]]

    ttk::label $f.label -text [msgcat::mc {Title}]
    ttk::entry $f.title -textvariable ${varname}(graph,title) -width 30
    ttk::label $f.xlabel -text [msgcat::mc {X Axis Title}]
    ttk::entry $f.xtitle -textvariable ${varname}(graph,axis,x,title) -width 30
    ttk::label $f.ylabel -text [msgcat::mc {Y Axis Title}]
    ttk::entry $f.ytitle -textvariable ${varname}(graph,axis,y,title) -width 30
    ttk::label $f.legendlabel -text [msgcat::mc {Legend Title}]
    ttk::entry $f.legendtitle -textvariable ${varname}(graph,legend,title) \
	-width 30

    grid $f.label $f.title -padx 2 -pady 2 -sticky ew
    grid $f.xlabel $f.xtitle -padx 2 -pady 2 -sticky ew
    grid $f.ylabel $f.ytitle -padx 2 -pady 2 -sticky ew
    grid $f.legendlabel $f.legendtitle -padx 2 -pady 2 -sticky ew

    pack $w.graph $w.dataset $w.legend $w.axis $w.range $w.titles \
	-side top -fill both -expand true
}

proc PlotGUIDataset {varname w} {
    upvar #0 $varname var
    global $varname

    set ff [ttk::frame $w.line]
    PlotGUILine $varname $ff

    set ff [ttk::frame $w.bar]
    PlotGUIBar $varname $ff

    # backward compatibility
    set ff [ttk::frame $w.scatter]
    PlotGUIScatter $varname $ff
}

proc PlotGUICurrentGraph {varname} {
    upvar #0 $varname var
    global $varname

    if {[winfo exists $var(gui,top)]} {
	set w $var(gui,top).param.dataset
	
	pack forget $w.line
	pack forget $w.bar
	# backward compatibility
	pack forget $w.scatter

	switch $var(graph,type) {
	    line {pack $w.line}
	    bar {pack $w.bar}
	    scatter {
		# backward compatibility
		pack $w.scatter
	    }
	}
    }
}

proc PlotUpdateGUI {varname} {
    upvar #0 $varname var
    global $varname

    if {![winfo exists $var(gui,top)]} {
	return
    }

    set f $var(gui,top).param.graph.axis
    switch $var(canvas,layout) {
	grid -
	row -
	column {
	    $f.xlog configure -state normal
	    $f.xflip configure -state normal
	    $f.xgrid configure -state normal
	}
	strip {
	    set cc $var(graph,current)
	    set first [lindex $var(graphs) 0]
	    if {$cc == $first} {
		$f.xlog configure -state normal
		$f.xflip configure -state normal
		$f.xgrid configure -state normal
	    } else {
		$f.xlog configure -state disabled
		$f.xflip configure -state disabled
		$f.xgrid configure -state disabled
	    }
	}
    }

    set f $var(gui,top).param.graph.dataset
    if {[llength $var(graph,dss)] == 0} {
	$f.duplicate configure -state disabled
	$f.delete configure -state disabled
    } else {
	$f.duplicate configure -state normal
	$f.delete configure -state normal
    }
}
