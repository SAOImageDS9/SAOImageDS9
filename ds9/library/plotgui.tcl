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

    grid $f.tselect $f.select $f.add $f.delete -padx 2 -pady 2 -sticky w

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

    grid $f.tselect $f.select $f.duplicate $f.delete -padx 2 -pady 2 -sticky w

    # Data
    set f [ttk::labelframe $w.graph.data -text [msgcat::mc {Data}]]

    ttk::button $f.stats -text [msgcat::mc {Statistics}] \
	-command "set ${varname}(stats) 1; PlotStats $varname"

    ttk::button $f.list -text [msgcat::mc {List Data}] \
	-command "set ${varname}(list) 1; PlotList $varname"

    grid $f.stats $f.list -padx 2 -pady 2 -sticky w

    # Axes
    set f [ttk::labelframe $w.graph.axes -text [msgcat::mc {Axes}]]

    ttk::menubutton $f.axis -text [msgcat::mc {Axes}] \
	-menu $f.axis.menu
    $var(mb).graph.axes clone $f.axis.menu

    ttk::menubutton $f.legend -text [msgcat::mc {Legend}] \
	-menu $f.legend.menu
    $var(mb).graph.legend clone $f.legend.menu

    # Titles
    set f [ttk::labelframe $w.graph.titles -text [msgcat::mc {Titles}]]

    ttk::label $f.label -text [msgcat::mc {Title}]
    ttk::entry $f.title -textvariable ed(graph,title) -width 30
    ttk::label $f.xlabel -text [msgcat::mc {X Axis Title}]
    ttk::entry $f.xtitle -textvariable ed(graph,axis,x,title) -width 30
    ttk::label $f.ylabel -text [msgcat::mc {Y Axis Title}]
    ttk::entry $f.ytitle -textvariable ed(graph,axis,y,title) -width 30
    ttk::label $f.legendlabel -text [msgcat::mc {Legend Title}]
    ttk::entry $f.legendtitle -textvariable ed(graph,legend,title) -width 30

    grid $f.label $f.title -padx 2 -pady 2 -sticky ew
    grid $f.xlabel $f.xtitle -padx 2 -pady 2 -sticky ew
    grid $f.ylabel $f.ytitle -padx 2 -pady 2 -sticky ew
    grid $f.legendlabel $f.legendtitle -padx 2 -pady 2 -sticky ew

    pack $w.graph.dataset $w.graph.data $w.graph.axes \
	$w.graph.titles -side top -fill both -expand true
}

proc PlotGUIDataset {varname} {
    upvar #0 $varname var
    global $varname

    set w $var(tab)

    set gg [ttk::frame $w.dataset]
    $var(listbox) insert {} end -id $gg -text [msgcat::mc {Dataset}]

    # Params
    set f [ttk::labelframe $w.dataset.param -text [msgcat::mc {Params}]]

    # Error
    set f [ttk::labelframe $w.dataset.error -text [msgcat::mc {Error}]]

    pack $w.dataset.param $w.dataset.error \
	-side top -fill both -expand true
}

