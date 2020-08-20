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

    Toplevel $w $mb 6 [msgcat::mc {Plot GUI}] [list PlotGUIDestroy $varname]

    $mb add cascade -label [msgcat::mc {File}] -menu $mb.file
    $mb add cascade -label [msgcat::mc {Edit}] -menu $mb.edit

    ThemeMenu $mb.file
    $mb.file add command -label [msgcat::mc {Close}] \
	-command [list PlotGUIDestroy $varname] -accelerator "${ds9(ctrl)}W"

    ThemeMenu $mb.edit
    $mb.edit add command -label [msgcat::mc {Cut}] \
	-command "EntryCut $var(gui,top)" -accelerator "${ds9(ctrl)}X"
    $mb.edit add command -label [msgcat::mc {Copy}] \
	-command "EntryCopy $var(gui,top)" -accelerator "${ds9(ctrl)}C"
    $mb.edit add command -label [msgcat::mc {Paste}] \
	-command "EntryPaste $var(gui,top)" -accelerator "${ds9(ctrl)}V"

    # List
    set f [ttk::frame $w.param]
    ttk::scrollbar $f.scroll -command [list $f.box yview]
    set var(listbox) [ttk::treeview $f.box \
			  -yscroll [list $f.scroll set] \
			  -selectmode browse \
			  -height 28 \
			  -show tree \
			 ]

    grid $f.box $f.scroll -sticky news
    grid rowconfigure $f 0 -weight 1
    grid columnconfigure $f 2 -weight 1

    set var(tab) $f
    set var(tabs) {}

    bind $var(listbox) <<TreeviewSelect>> [list PlotGUIListUpdate $varname]
  
    PlotGUICanvas $varname
    PlotGUIGraph $varname
    PlotGUIDataset $varname

    # Buttons
    set f [ttk::frame $w.buttons]
    ttk::button $f.close -text [msgcat::mc {Close}] \
	-command [list PlotGUIDestroy $varname]
    pack $f.close -side left -expand true -padx 2 -pady 4

    # Fini
    ttk::separator $w.sep -orient horizontal
    pack $w.buttons $w.sep -side bottom -fill x
    pack $w.param -fill both -expand true

    bind $w <<Close>> [list PlotGUIDestroy $varname]

    # select first item
    $var(listbox) selection set $var(tabs)
}

proc PlotGUIDestroy {varname} {
    upvar #0 $varname var
    global $varname
    
    destroy $var(gui,top)
    destroy $var(gui,mb)

    unset ${varname}(listbox)
    unset ${varname}(tab)
    unset ${varname}(tabs)
}

proc PlotGUIListUpdate {varname} {
    upvar #0 $varname var
    global $varname

    if {$var(tabs) != {}} {
	grid forget $var(tabs)
    }
    set var(tabs) [$var(listbox) selection]
    if {$var(tabs) != {}} {
	grid $var(tabs) -row 0 -column 2 -sticky new
    }
}

proc PlotGUICanvas {varname} {
    upvar #0 $varname var
    global $varname

    set w $var(tab)

    set gg [ttk::frame $w.canvas]
    $var(listbox) insert {} end -id $gg -text [msgcat::mc {Canvas}]
    # This is our first item
    set var(tabs) $gg

    # Graph
    set f [ttk::labelframe $w.canvas.graph -text [msgcat::mc {Graph}]]

    ttk::label $f.tselect -text [msgcat::mc {Select Graph}]
    ttk::menubutton $f.select -textvariable ${varname}(graph,name) \
	-menu $f.select.menu
    $var(mb).canvas.select clone $f.select.menu

    ttk::menubutton $f.add -text [msgcat::mc {Add Graph}] \
	-menu $f.add.menu
    $var(mb).canvas.graph clone $f.add.menu

    ttk::button $f.delete -text [msgcat::mc {Delete Graph}] \
	-command [list PlotDeleteGraphCurrent $varname]

    grid $f.tselect $f.select -padx 2 -pady 2 -sticky w
    grid $f.add $f.delete -padx 2 -pady 2 -sticky w

    # Layout
    set f [ttk::labelframe $w.canvas.layout -text [msgcat::mc {Layout}]]

    ttk::menubutton $f.layout -textvariable ${varname}(canvas,layout) \
	-menu $f.layout.menu

    ThemeMenu $f.layout.menu
    $f.layout.menu add radiobutton -label [msgcat::mc {Grid}] \
	-variable ${varname}(canvas,layout) -value grid \
	-command [list PlotChangeLayout $varname]
    $f.layout.menu add radiobutton -label [msgcat::mc {Row}] \
	-variable ${varname}(canvas,layout) -value row \
	-command [list PlotChangeLayout $varname]
    $f.layout.menu add radiobutton -label [msgcat::mc {Column}] \
	-variable ${varname}(canvas,layout) -value column \
	-command [list PlotChangeLayout $varname]
    $f.layout.menu add separator
    $f.layout.menu add radiobutton -label [msgcat::mc {Strip}] \
	-variable ${varname}(canvas,layout) -value strip \
	-command [list PlotChangeLayout $varname]

    ttk::label $f.tstrip -text [msgcat::mc {Strip Scale}]
    ttk::entry $f.strip -textvariable ${varname}(canvas,layout,strip,scale) \
	-width 6
    ttk::label $f.stript -text {%}

    grid $f.layout $f.tstrip $f.strip $f.stript -padx 2 -pady 2 -sticky w

    # Font
    set f [ttk::labelframe $w.canvas.font -text [msgcat::mc {Font}]]

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
    set f [ttk::labelframe $w.canvas.color -text [msgcat::mc {Color}]]

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

    pack $w.canvas.graph $w.canvas.layout $w.canvas.font $w.canvas.color \
	-side top -fill both -expand true
}

proc PlotGUIGraph {varname} {
    upvar #0 $varname var
    global $varname

    set w $var(tab)

    set gg [ttk::frame $w.graph]
    $var(listbox) insert {} end -id $gg -text [msgcat::mc {Graph}]

    # Dataset
    set f [ttk::labelframe $w.graph.dataset -text [msgcat::mc {DataSet}]]

    ttk::label $f.tselect -text [msgcat::mc {Select Datatset}]
    ttk::menubutton $f.select -textvariable ${varname}(graph,ds,name) \
	-menu $f.select.menu
    $var(mb).graph.select clone $f.select.menu

    ttk::button $f.duplicate -text [msgcat::mc {Duplicate Graph}] \
	-command [list PlotDupDataSet $varname]

    ttk::button $f.delete -text [msgcat::mc {Delete Graph}] \
	-command [list PlotDeleteDataSetCurrent $varname]

    grid $f.tselect $f.select -padx 2 -pady 2 -sticky w
    grid $f.duplicate $f.delete -padx 2 -pady 2 -sticky w

    # Data
    set f [ttk::labelframe $w.graph.data -text [msgcat::mc {Data}]]

    ttk::button $f.stats -text [msgcat::mc {Statistics}] \
	-command "set ${varname}(stats) 1; PlotStats $varname"

    ttk::button $f.list -text [msgcat::mc {List Data}] \
	-command "set ${varname}(list) 1; PlotList $varname"

    grid $f.stats $f.list -padx 2 -pady 2 -sticky w

    # Axes
    set f [ttk::labelframe $w.graph.axes -text [msgcat::mc {Axes}]]

    ttk::menubutton $f.legend -text [msgcat::mc {Legend}] \
	-menu $f.legend.menu
    $var(mb).graph.legend clone $f.legend.menu

    ttk::menubutton $f.xaxis -text [msgcat::mc {X Axis}] \
	-menu $f.xaxis.menu
    $var(mb).graph.xaxis clone $f.xaxis.menu

    ttk::menubutton $f.yaxis -text [msgcat::mc {Y Axis}] \
	-menu $f.yaxis.menu
    $var(mb).graph.yaxis clone $f.yaxis.menu

    grid $f.legend $f.xaxis $f.yaxis -padx 2 -pady 2 -sticky w

    # Range
    set f [ttk::labelframe $w.graph.range -text [msgcat::mc {Range}]]

    ttk::label $f.t -text [msgcat::mc {Axis}]
    ttk::label $f.tto -text [msgcat::mc {To}]
    ttk::label $f.tfrom -text [msgcat::mc {From}]
    ttk::label $f.tformat -text [msgcat::mc {Format}]
    ttk::label $f.tauto -text [msgcat::mc {Automatic}]

    ttk::label $f.x -text [msgcat::mc {X}]
    ttk::entry $f.xmin -textvariable ${varname}(graph,axis,x,min) -width 12
    ttk::entry $f.xmax -textvariable ${varname}(graph,axis,x,max) -width 12
    ttk::entry $f.xformat -textvariable ${varname}(graph,axis,x,format) -width 8
    ttk::checkbutton $f.xauto -variable ${varname}(graph,axis,x,auto)

    ttk::label $f.y -text [msgcat::mc {Y}]
    ttk::entry $f.ymin -textvariable ${varname}(graph,axis,y,min) -width 12
    ttk::entry $f.ymax -textvariable ${varname}(graph,axis,y,max) -width 12
    ttk::entry $f.yformat -textvariable ${varname}(graph,axis,y,format) -width 8
    ttk::checkbutton $f.yauto -variable ${varname}(graph,axis,y,auto)

    grid $f.t $f.tfrom $f.tto $f.tformat $f.tauto -padx 2 -pady 2 -sticky w
    grid $f.x $f.xmin $f.xmax $f.xformat $f.xauto -padx 2 -pady 2 -sticky w
    grid $f.y $f.ymin $f.ymax $f.yformat $f.yauto -padx 2 -pady 2 -sticky w

    # Titles
    set f [ttk::labelframe $w.graph.titles -text [msgcat::mc {Titles}]]

    ttk::label $f.label -text [msgcat::mc {Title}]
    ttk::entry $f.title -textvariable ${varname}(graph,title) -width 30
    ttk::label $f.xlabel -text [msgcat::mc {X Axis Title}]
    ttk::entry $f.xtitle -textvariable ${varname}(graph,axis,x,title) -width 30
    ttk::label $f.ylabel -text [msgcat::mc {Y Axis Title}]
    ttk::entry $f.ytitle -textvariable ${varname}(graph,axis,y,title) -width 30
    ttk::label $f.legendlabel -text [msgcat::mc {Legend Title}]
    ttk::entry $f.legendtitle -textvariable ${varname}(graph,legend,title) -width 30

    grid $f.label $f.title -padx 2 -pady 2 -sticky ew
    grid $f.xlabel $f.xtitle -padx 2 -pady 2 -sticky ew
    grid $f.ylabel $f.ytitle -padx 2 -pady 2 -sticky ew
    grid $f.legendlabel $f.legendtitle -padx 2 -pady 2 -sticky ew

    pack $w.graph.dataset $w.graph.data $w.graph.axes $w.graph.range \
	$w.graph.titles -side top -fill both -expand true
}

proc PlotGUIDataset {varname} {
    upvar #0 $varname var
    global $varname

    set w $var(tab)

    set gg [ttk::frame $w.dataset]
    $var(listbox) insert {} end -id $gg -text [msgcat::mc {Dataset}]

    # forget all
    if {[info exists $w.dataset.error]} {
	pack forget $w.dataset.error
	$w.dataset.error delete
    }
    if {[info exists $w.dataset.line]} {
	pack forget $w.dataset.line
	$w.dataset.line delete
    }
    if {[info exists $w.dataset.bar]} {
	pack forget $w.dataset.bar
	$w.dataset.bar delete
    }
    if {[info exists $w.dataset.scatter]} {
	pack forget $w.dataset.scatter
	$w.dataset.scatter delete
    }

    # Error
    set f [ttk::labelframe $w.dataset.error -text [msgcat::mc {Error}]]

    # Params
    switch $var(graph,type) {
	line {
	    set f [ttk::labelframe $w.dataset.line -text [msgcat::mc {Line}]]

	    ttk::checkbutton $f.show -text [msgcat::mc {Show}] \
		-variable ${varname}(graph,ds,show) \
		-command [list PlotLineUpdateElement $varname]

	    ttk::label $f.tcolor -text [msgcat::mc {Color}]
	    ttk::menubutton $f.color \
		-textvariable ${varname}(graph,ds,line,color) \
		-menu $f.color.menu
	    $var(mb).dataline.color clone $f.color.menu

	    ttk::label $f.twidth -text [msgcat::mc {Width}]
	    ttk::menubutton $f.width \
		-textvariable ${varname}(graph,ds,line,width) \
		-menu $f.width.menu
	    $var(mb).dataline.width clone $f.width.menu

	    grid $f.show -padx 2 -pady 2 -sticky ew
	    grid $f.tcolor $f.color -padx 2 -pady 2 -sticky ew
	    grid $f.twidth $f.width -padx 2 -pady 2 -sticky ew

	    pack $w.dataset.line $w.dataset.error \
		-side top -fill both -expand true
	}
	bar {
	    set f [ttk::labelframe $w.dataset.bar -text [msgcat::mc {Bar}]]
	    pack $w.dataset.bar $w.dataset.error \
		-side top -fill both -expand true
	}
	scatter {
	    set f [ttk::labelframe $w.dataset.scatter -text [msgcat::mc {Scatter}]]
	    pack $w.dataset.scatter $w.dataset.error \
		-side top -fill both -expand true
	}
    }
}

