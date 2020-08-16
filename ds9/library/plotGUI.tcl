#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc PlotGUI {varname} {
    upvar #0 $varname var
    global $varname

    global ds9
    
    # see if we already have a window visible
    if {[winfo exists $var(top,gui)]} {
	raise $var(top,gui)
	return
    }

    # create the window
    set w $var(top,gui)
    set mb $var(mb,gui)

    Toplevel $w $mb 6 [msgcat::mc {Plot GUI}] [list PlotGUIDestroy $varname]

    $mb add cascade -label [msgcat::mc {File}] -menu $mb.file
    $mb add cascade -label [msgcat::mc {Edit}] -menu $mb.edit

    ThemeMenu $mb.file
    $mb.file add command -label [msgcat::mc {Close}] \
	-command [list PlotGUIDestroy $varname] -accelerator "${ds9(ctrl)}W"

    ThemeMenu $mb.edit
    $mb.edit add command -label [msgcat::mc {Cut}] \
	-command "EntryCut $var(top,gui)" -accelerator "${ds9(ctrl)}X"
    $mb.edit add command -label [msgcat::mc {Copy}] \
	-command "EntryCopy $var(top,gui)" -accelerator "${ds9(ctrl)}C"
    $mb.edit add command -label [msgcat::mc {Paste}] \
	-command "EntryPaste $var(top,gui)" -accelerator "${ds9(ctrl)}V"

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
    
    destroy $var(top,gui)
    destroy $var(mb,gui)

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

    ttk::label $f.tadd -text [msgcat::mc {Add Graph}]

    ttk::label $f.tdelete -text [msgcat::mc {Delete Graph}]

    grid $f.tselect -padx 2 -pady 2 -sticky w
    grid $f.tadd -padx 2 -pady 2 -sticky w
    grid $f.tdelete -padx 2 -pady 2 -sticky w

    # Layout
    set f [ttk::labelframe $w.canvas.layout -text [msgcat::mc {Layout}]]

    ttk::menubutton $f.layout -textvariable ${varname}(layout) \
	-menu $f.layout.menu

    ThemeMenu $f.layout.menu
    $f.layout.menu add radiobutton -label [msgcat::mc {Grid}] \
	-variable ${varname}(layout) -value grid \
	-command [list PlotChangeLayout $varname]
    $f.layout.menu add radiobutton -label [msgcat::mc {Row}] \
	-variable ${varname}(layout) -value row \
	-command [list PlotChangeLayout $varname]
    $f.layout.menu add radiobutton -label [msgcat::mc {Column}] \
	-variable ${varname}(layout) -value column \
	-command [list PlotChangeLayout $varname]
    $f.layout.menu add separator
    $f.layout.menu add radiobutton -label [msgcat::mc {Strip}] \
	-variable ${varname}(layout) -value strip \
	-command [list PlotChangeLayout $varname]

    ttk::label $f.tstrip
    ttk::button $f.strip -text [msgcat::mc {Strip Parameters}] \
	-command [list PlotStripDialog $varname]

    grid $f.layout $f.strip -padx 2 -pady 2 -sticky w

    # Font
    set f [ttk::labelframe $w.canvas.font -text [msgcat::mc {Font}]]

    ttk::label $f.ttitle -text [msgcat::mc {Title}]
    FontFamilyMenuButton $f.titlefamily $varname \
	graph,title,family [list PlotUpdateCanvasElement $varname]
    FontSizeMenuButton $f.titlesize $varname \
	graph,title,size [list PlotUpdateCanvasElement $varname]
    FontWeightMenuButton $f.titleweight $varname \
	graph,title,weight [list PlotUpdateCanvasElement $varname]
    FontSlantMenuButton $f.titleslant $varname \
	graph,title,slant [list PlotUpdateCanvasElement $varname]

    ttk::label $f.ttextlab -text [msgcat::mc {Axes Title}]
    FontFamilyMenuButton $f.textlabfamily $varname \
	axis,title,family [list PlotUpdateCanvasElement $varname]
    FontSizeMenuButton $f.textlabsize $varname \
	axis,title,size [list PlotUpdateCanvasElement $varname]
    FontWeightMenuButton $f.textlabweight $varname \
	axis,title,weight [list PlotUpdateCanvasElement $varname]
    FontSlantMenuButton $f.textlabslant $varname \
	axis,title,slant [list PlotUpdateCanvasElement $varname]

    ttk::label $f.tnumlab -text [msgcat::mc {Axes Number}]
    FontFamilyMenuButton $f.numlabfamily $varname \
	axis,font,family [list PlotUpdateCanvasElement $varname]
    FontSizeMenuButton $f.numlabsize $varname \
	axis,font,size [list PlotUpdateCanvasElement $varname]
    FontWeightMenuButton $f.numlabweight $varname \
	axis,font,weight [list PlotUpdateCanvasElement $varname]
    FontSlantMenuButton $f.numlabslant $varname \
	axis,font,slant [list PlotUpdateCanvasElement $varname]

    ttk::label $f.tlegendtitle -text [msgcat::mc {Legend Title}]
    FontFamilyMenuButton $f.legendtitlefamily $varname \
	legend,title,family [list PlotUpdateCanvasElement $varname]
    FontSizeMenuButton $f.legendtitlesize $varname \
	legend,title,size [list PlotUpdateCanvasElement $varname]
    FontWeightMenuButton $f.legendtitleweight $varname \
	legend,title,weight [list PlotUpdateCanvasElement $varname]
    FontSlantMenuButton $f.legendtitleslant $varname \
	legend,title,slant [list PlotUpdateCanvasElement $varname]

    ttk::label $f.tlegend -text [msgcat::mc {Legend}]
    FontFamilyMenuButton $f.legendfamily $varname \
	legend,font,family [list PlotUpdateCanvasElement $varname]
    FontSizeMenuButton $f.legendsize $varname \
	legend,font,size [list PlotUpdateCanvasElement $varname]
    FontWeightMenuButton $f.legendweight $varname \
	legend,font,weight [list PlotUpdateCanvasElement $varname]
    FontSlantMenuButton $f.legendslant $varname \
	legend,font,slant [list PlotUpdateCanvasElement $varname]

    grid $f.ttitle $f.titlefamily $f.titlesize \
	$f.titleweight $f.titleslant -padx 2 -pady 2 -sticky w
    grid $f.ttextlab $f.textlabfamily $f.textlabsize \
	$f.textlabweight $f.textlabslant -padx 2 -pady 2 -sticky w
    grid $f.tnumlab $f.numlabfamily $f.numlabsize \
	$f.numlabweight $f.numlabslant -padx 2 -pady 2 -sticky w
    grid $f.tlegendtitle $f.legendtitlefamily $f.legendtitlesize \
	$f.legendtitleweight $f.legendtitleslant -padx 2 -pady 2 -sticky w
    grid $f.tlegend $f.legendfamily $f.legendsize \
	$f.legendweight $f.legendslant -padx 2 -pady 2 -sticky w

    # Color
    set f [ttk::labelframe $w.canvas.color -text [msgcat::mc {Color}]]

    ttk::checkbutton $f.theme -text [msgcat::mc {Use Theme Colors}] \
	-variable ${varname}(theme) \
	-command [list PlotUpdateAllElement $varname]

    ttk::label $f.tforeground -text [msgcat::mc {Foreground}]
    ColorMenuButton $f.foreground $varname foreground \
	[list PlotUpdateCanvasElement $varname]
    ttk::label $f.tbackground -text [msgcat::mc {Background}]
    ColorMenuButton $f.background $varname background \
	[list PlotUpdateAllElement $varname]
    ttk::label $f.tgrid -text [msgcat::mc {Grid}]
    ColorMenuButton $f.grid $varname graph,grid,color \
	[list PlotUpdateCanvasElement $varname]

    grid $f.theme -padx 2 -pady 2 -sticky w
    grid $f.tforeground $f.foreground -padx 2 -pady 2 -sticky w
    grid $f.tbackground $f.background -padx 2 -pady 2 -sticky w
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

    # Axes
    set f [ttk::labelframe $w.graph.axes -text [msgcat::mc {Axes}]]

    # Legend
    set f [ttk::labelframe $w.graph.legend -text [msgcat::mc {Legend}]]

    # Titles
    set f [ttk::labelframe $w.graph.titles -text [msgcat::mc {Titles}]]

    pack $w.graph.dataset $w.graph.axes $w.graph.legend $w.graph.titles \
	-side top -fill both -expand true
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

