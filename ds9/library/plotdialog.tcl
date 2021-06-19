#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

# used by backup (need the hidden param)
proc PlotDialog {varname wtt {theme true}} {
    upvar #0 $varname var
    global $varname

    global ds9
    global pap

    if {[PlotRaise $varname]} {
	return
    }

    # add it to our xpa list
    global iap
    lappend iap(plots) $varname

    # plot window
    set var(top) ".${varname}"
    set var(mb) ".${varname}mb"
    set var(tt) $wtt

    # gui tool
    set var(gui,top) ".${varname}gui"
    set var(gui,mb) ".${varname}guimb"

    set var(stats) 0
    set var(list) 0

    set var(mode) zoom
    set var(callback) {}

    set var(graphs) {}
    set var(seq) 0

    # set canvas vars
    array set $varname [array get pap "canvas,*"]
    if {!$theme} {
	set var(canvas,theme) 0
    }	

    # create window
    Toplevel $var(top) $var(mb) 7 $wtt [list PlotDestroy $varname]
    wm geometry $var(top) "600x500"

    $var(mb) add cascade -label [msgcat::mc {File}] -menu $var(mb).file
    $var(mb) add cascade -label [msgcat::mc {Edit}] -menu $var(mb).edit
    $var(mb) add cascade -label [msgcat::mc {Control Panel}] -menu $var(mb).gui
    $var(mb) add cascade -label [msgcat::mc {Plot}] -menu $var(mb).canvas
    $var(mb) add cascade -label [msgcat::mc {Graph}] -menu $var(mb).graph
    $var(mb) add cascade -label [msgcat::mc {Data}] -menu $var(mb).dataline

    # File
    ThemeMenu $var(mb).file
    $var(mb).file add command -label "[msgcat::mc {Load Data}]..." \
	-command [list PlotLoadData $varname]
    $var(mb).file add command -label "[msgcat::mc {Save Data}]..." \
	-command [list PlotSaveData $varname]
    $var(mb).file add separator
    $var(mb).file add cascade -label [msgcat::mc {Export}] \
	-menu $var(mb).file.export
    $var(mb).file add separator
    $var(mb).file add command -label [msgcat::mc {Statistics}] \
       -command "set ${varname}(stats) 1; PlotStats $varname"
    $var(mb).file add command -label [msgcat::mc {List Data}] \
       -command "set ${varname}(list) 1; PlotList $varname"
    $var(mb).file add separator
    $var(mb).file add command -label "[msgcat::mc {Backup}]..." \
	-command [list PlotBackupDialog $varname]
    $var(mb).file add command -label "[msgcat::mc {Restore}]..." \
	-command [list PlotRestoreDialog $varname]
    $var(mb).file add separator
    $var(mb).file add command \
	-label "[msgcat::mc {Page Setup}]..." \
	-command PSPageSetup -accelerator "${ds9(shiftctrl)}P"
    $var(mb).file add command -label "[msgcat::mc {Print}]..." \
	-command [list PlotPSPrint $varname] -accelerator "${ds9(ctrl)}P"

    $var(mb).file add separator
    $var(mb).file add command -label [msgcat::mc {Close}] \
	-command [list PlotDestroy $varname] -accelerator "${ds9(ctrl)}W"

    ThemeMenu $var(mb).file.export
    $var(mb).file.export add command -label {EPS...} \
	-command [list PlotExportDialog $varname eps]
    $var(mb).file.export add command -label {GIF...} \
	-command [list PlotExportDialog $varname gif]
    $var(mb).file.export add command -label {TIFF...} \
	-command [list PlotExportDialog $varname tiff]
    $var(mb).file.export add command -label {JPEG...} \
	-command [list PlotExportDialog $varname jpeg]
    $var(mb).file.export add command -label {PNG...} \
	-command [list PlotExportDialog $varname png]

    ThemeMenu $var(mb).edit
    $var(mb).edit add command -label [msgcat::mc {Cut}] \
	-state disabled -accelerator "${ds9(ctrl)}X"
    $var(mb).edit add command -label [msgcat::mc {Copy}] \
	-state disabled -accelerator "${ds9(ctrl)}C"
    $var(mb).edit add command -label [msgcat::mc {Paste}] \
	-state disabled -accelerator "${ds9(ctrl)}V"
    $var(mb).edit add separator
    $var(mb).edit add radiobutton -label [msgcat::mc {Pointer}] \
	-variable ${varname}(mode) -value pointer \
	-command [list PlotChangeMode $varname]
    $var(mb).edit add radiobutton -label [msgcat::mc {Zoom}] \
	-variable ${varname}(mode) -value zoom \
	-command [list PlotChangeMode $varname]

    # Canvas
    ThemeMenu $var(mb).canvas

    $var(mb).canvas add cascade -label [msgcat::mc {Select Graph}] \
	-menu $var(mb).canvas.select
    $var(mb).canvas add separator
    $var(mb).canvas add cascade -label [msgcat::mc {Add Graph}] \
	-menu $var(mb).canvas.graph
    $var(mb).canvas add command -label [msgcat::mc {Delete Graph}] \
	-command [list PlotDeleteGraphCurrent $varname]
    $var(mb).canvas add separator
    $var(mb).canvas add cascade -label [msgcat::mc {Layout}] \
	-menu $var(mb).canvas.layout
    $var(mb).canvas add separator
    $var(mb).canvas add cascade -label [msgcat::mc {Title}] \
	-menu $var(mb).canvas.title
    $var(mb).canvas add cascade -label [msgcat::mc {Axes Title}] \
	-menu $var(mb).canvas.textlab
    $var(mb).canvas add cascade -label [msgcat::mc {Axes Number}] \
	-menu $var(mb).canvas.numlab
    $var(mb).canvas add cascade -label [msgcat::mc {Legend Title}] \
	-menu $var(mb).canvas.legendtitle
    $var(mb).canvas add cascade -label [msgcat::mc {Legend}] \
	-menu $var(mb).canvas.legend

    $var(mb).canvas add separator
    $var(mb).canvas add checkbutton -label [msgcat::mc {Use Theme Colors}] \
	-variable ${varname}(canvas,theme) \
	-command [list PlotUpdateAllElement $varname]
    $var(mb).canvas add separator
    $var(mb).canvas add cascade -label [msgcat::mc {Forground}] \
	-menu $var(mb).canvas.fg
    $var(mb).canvas add cascade -label [msgcat::mc {Background}] \
	-menu $var(mb).canvas.bg
    $var(mb).canvas add cascade -label [msgcat::mc {Grid}] \
	-menu $var(mb).canvas.grid

    ThemeMenu $var(mb).canvas.select

    ThemeMenu $var(mb).canvas.graph
    $var(mb).canvas.graph add command -label [msgcat::mc {Line}] \
	-command [list PlotAddGraph $varname line]
    $var(mb).canvas.graph add command -label [msgcat::mc {Bar}] \
	-command [list PlotAddGraph $varname bar]

    ThemeMenu $var(mb).canvas.layout
    $var(mb).canvas.layout add radiobutton -label [msgcat::mc {Grid}] \
	-variable ${varname}(canvas,layout) -value grid \
	-command [list PlotChangeLayout $varname]
    $var(mb).canvas.layout add radiobutton -label [msgcat::mc {Row}] \
	-variable ${varname}(canvas,layout) -value row \
	-command [list PlotChangeLayout $varname]
    $var(mb).canvas.layout add radiobutton -label [msgcat::mc {Column}] \
	-variable ${varname}(canvas,layout) -value column \
	-command [list PlotChangeLayout $varname]
    $var(mb).canvas.layout add separator
    $var(mb).canvas.layout add radiobutton -label [msgcat::mc {Strip}] \
	-variable ${varname}(canvas,layout) -value strip \
	-command [list PlotChangeLayout $varname]
    $var(mb).canvas.layout add separator
    $var(mb).canvas.layout add command \
	-label "[msgcat::mc {Strip Parameters}]..." \
	-command [list PlotStripDialog $varname]

    FontMenu $var(mb).canvas.title \
	$varname canvas,title,family canvas,title,size \
	canvas,title,weight canvas,title,slant \
	[list PlotUpdateCanvasElement $varname]
    FontMenu $var(mb).canvas.textlab \
	$varname canvas,axis,title,family canvas,axis,title,size \
	canvas,axis,title,weight canvas,axis,title,slant \
	[list PlotUpdateCanvasElement $varname]
    FontMenu $var(mb).canvas.numlab \
	$varname canvas,axis,font,family canvas,axis,font,size \
	canvas,axis,font,weight canvas,axis,font,slant \
	[list PlotUpdateCanvasElement $varname]
    FontMenu $var(mb).canvas.legendtitle \
	$varname canvas,legend,title,family canvas,legend,title,size \
	canvas,legend,title,weight canvas,legend,title,slant \
	[list PlotUpdateCanvasElement $varname]
    FontMenu $var(mb).canvas.legend \
	$varname canvas,legend,font,family canvas,legend,font,size \
	canvas,legend,font,weight canvas,legend,font,slant \
	[list PlotUpdateCanvasElement $varname]

    ColorMenu $var(mb).canvas.fg $varname canvas,foreground \
	[list PlotUpdateCanvasElement $varname]
    ColorMenu $var(mb).canvas.bg $varname canvas,background \
	[list PlotUpdateAllElement $varname]
    ColorMenu $var(mb).canvas.grid $varname canvas,grid,color \
	[list PlotUpdateCanvasElement $varname]

    # Graph
    ThemeMenu $var(mb).graph

    $var(mb).graph add cascade -label [msgcat::mc {Select Dataset}] \
	-menu $var(mb).graph.select
    $var(mb).graph add separator
    $var(mb).graph add command -label [msgcat::mc {Duplicate Dataset}] \
	-command [list PlotDupDataSet $varname]
    $var(mb).graph add command -label [msgcat::mc {Delete Dataset}] \
	-command [list PlotDeleteDataSetCurrent $varname]
    $var(mb).graph add separator
    $var(mb).graph add cascade -label [msgcat::mc {Legend}] \
	-menu $var(mb).graph.legend
    $var(mb).graph add separator
    $var(mb).graph add cascade -label [msgcat::mc {X Axis}] \
	-menu $var(mb).graph.xaxis
    $var(mb).graph add cascade -label [msgcat::mc {Y Axis}] \
	-menu $var(mb).graph.yaxis
    $var(mb).graph add separator
    $var(mb).graph add command -label "[msgcat::mc {Axes Range}]..." \
	-command [list PlotRangeDialog $varname]
    $var(mb).graph add command -label "[msgcat::mc {Titles}]..." \
	-command [list PlotGraphTitleDialog $varname]

    ThemeMenu $var(mb).graph.select

    ThemeMenu $var(mb).graph.xaxis
    $var(mb).graph.xaxis add checkbutton -label [msgcat::mc {Log}] \
	-variable ${varname}(graph,axis,x,log) \
	-command [list PlotChangeAxis $varname]
    $var(mb).graph.xaxis add checkbutton -label [msgcat::mc {Flip}] \
	-variable ${varname}(graph,axis,x,flip) \
	-command [list PlotChangeAxis $varname]
    $var(mb).graph.xaxis add checkbutton -label [msgcat::mc {Grid}] \
	-variable ${varname}(graph,axis,x,grid) \
	-command [list PlotChangeAxis $varname]

    ThemeMenu $var(mb).graph.yaxis
    $var(mb).graph.yaxis add checkbutton -label [msgcat::mc {Log}] \
	-variable ${varname}(graph,axis,y,log) \
	-command [list PlotChangeAxis $varname]
    $var(mb).graph.yaxis add checkbutton -label [msgcat::mc {Flip}] \
	-variable ${varname}(graph,axis,y,flip) \
	-command [list PlotChangeAxis $varname]
    $var(mb).graph.yaxis add checkbutton -label [msgcat::mc {Grid}] \
	-variable ${varname}(graph,axis,y,grid) \
	-command [list PlotChangeAxis $varname]

    ThemeMenu $var(mb).graph.legend
    $var(mb).graph.legend add checkbutton -label [msgcat::mc {Show}] \
	-variable ${varname}(graph,legend) \
	-command [list PlotChangeLegend $varname]
    $var(mb).graph.legend add separator
    $var(mb).graph.legend add radiobutton -label [msgcat::mc {Right}] \
	-variable ${varname}(graph,legend,position) -value right \
	-command [list PlotChangeLegend $varname]
    $var(mb).graph.legend add radiobutton -label [msgcat::mc {Left}] \
	-variable ${varname}(graph,legend,position) -value left \
	-command [list PlotChangeLegend $varname]
    $var(mb).graph.legend add radiobutton -label [msgcat::mc {Top}] \
	-variable ${varname}(graph,legend,position) -value top \
	-command [list PlotChangeLegend $varname]
    $var(mb).graph.legend add radiobutton -label [msgcat::mc {Bottom}] \
	-variable ${varname}(graph,legend,position) -value bottom \
	-command [list PlotChangeLegend $varname]
    $var(mb).graph.legend add radiobutton -label [msgcat::mc {Plot Area}] \
	-variable ${varname}(graph,legend,position) -value plotarea \
	-command [list PlotChangeLegend $varname]

    PlotLineMenus $varname
    PlotBarMenus $varname
    # backward compatibility
    PlotScatterMenus $varname

    # GUI
    ThemeMenu $var(mb).gui
    $var(mb).gui add command -label [msgcat::mc {Open}] \
	-command [list PlotGUI $varname]

    bind $var(top) <<Close>> [list PlotDestroy $varname]
    bind $var(top) <<PageSetup>> PSPageSetup
    bind $var(top) <<Print>> [list PlotPSPrint $varname]
}

proc PlotDataFormatDialog {xarname} {
    upvar $xarname xar
    global ed

    set w {.apdata}

    set ed(ok) 0
    set ed(dim) $xar

    DialogCreate $w [msgcat::mc {Data Format}] ed(ok)

    # Param
    set f [ttk::frame $w.param]

    ttk::label $f.title -text [msgcat::mc {Data Format}]
    ttk::radiobutton $f.xy -text {X Y} -variable ed(dim) -value xy
    ttk::radiobutton $f.xyex -text {X Y XErr} -variable ed(dim) -value xyex
    ttk::radiobutton $f.xyey -text {X Y YErr} -variable ed(dim) -value xyey
    ttk::radiobutton $f.xyexey -text {X Y XErr YErr} -variable ed(dim) \
	-value xyexey

    grid $f.title -padx 2 -pady 2 -sticky w
    grid $f.xy -padx 2 -pady 2 -sticky w
    grid $f.xyex -padx 2 -pady 2 -sticky w
    grid $f.xyey -padx 2 -pady 2 -sticky w
    grid $f.xyexey -padx 2 -pady 2 -sticky w

    # Buttons
    set f [ttk::frame $w.buttons]
    ttk::button $f.ok -text [msgcat::mc {OK}] -command {set ed(ok) 1} \
	-default active 
    ttk::button $f.cancel -text [msgcat::mc {Cancel}] -command {set ed(ok) 0}
    pack $f.ok $f.cancel -side left -expand true -padx 2 -pady 4

    bind $w <Return> {set ed(ok) 1}

    # Fini
    ttk::separator $w.sep -orient horizontal
    pack $w.buttons $w.sep -side bottom -fill x
    pack $w.param -side top -fill both -expand true

    DialogWait $w ed(ok) $w.param.xy
    destroy $w

    if {$ed(ok)} {
	set xar $ed(dim)
    }

    set rr $ed(ok)
    unset ed
    return $rr
}

proc PlotStripDialog {varname} {
    upvar #0 $varname var
    global $varname

    global ed

    set w {.aptitle}

    set ed(ok) 0

    set ed(canvas,layout,strip,scale) $var(canvas,layout,strip,scale)

    DialogCreate $w [msgcat::mc {Strip Parameters}] ed(ok)

    # Param
    set f [ttk::frame $w.param]
    ttk::label $f.t -text [msgcat::mc {Scale}]
    ttk::entry $f.ww -textvariable ed(canvas,layout,strip,scale) -width 6
    ttk::label $f.tt -text {%}

    grid $f.t $f.ww $f.tt -padx 2 -pady 2 -sticky w

    # Buttons
    set f [ttk::frame $w.buttons]
    ttk::button $f.ok -text [msgcat::mc {OK}] -command {set ed(ok) 1} \
	-default active 
    ttk::button $f.cancel -text [msgcat::mc {Cancel}] -command {set ed(ok) 0}
    pack $f.ok $f.cancel -side left -expand true -padx 2 -pady 4

    bind $w <Return> {set ed(ok) 1}

    # Fini
    ttk::separator $w.sep -orient horizontal
    pack $w.buttons $w.sep -side bottom -fill x
    pack $w.param -side top -fill both -expand true

    DialogWait $w ed(ok) $w.param.ww
    destroy $w

    if {$ed(ok)} {
	set var(canvas,layout,strip,scale) $ed(canvas,layout,strip,scale)
	PlotChangeLayout $varname
    }
    
    set rr $ed(ok)
    unset ed
    return $rr
}

proc PlotRangeDialog {varname} {
    upvar #0 $varname var
    global $varname

    global ed

    set w {.aptitle}

    set ed(ok) 0

    set ed(graph,axis,x,auto) $var(graph,axis,x,auto)
    set ed(graph,axis,x,min) $var(graph,axis,x,min)
    set ed(graph,axis,x,max) $var(graph,axis,x,max)
    set ed(graph,axis,x,format) $var(graph,axis,x,format)

    set ed(graph,axis,y,auto) $var(graph,axis,y,auto)
    set ed(graph,axis,y,min) $var(graph,axis,y,min)
    set ed(graph,axis,y,max) $var(graph,axis,y,max)
    set ed(graph,axis,y,format) $var(graph,axis,y,format)

    DialogCreate $w [msgcat::mc {Range}] ed(ok)

    # Param
    set f [ttk::frame $w.param]
    ttk::label $f.t -text [msgcat::mc {Axis}]
    ttk::label $f.tto -text [msgcat::mc {To}]
    ttk::label $f.tfrom -text [msgcat::mc {From}]
    ttk::label $f.tformat -text [msgcat::mc {Format}]
    ttk::label $f.tauto -text [msgcat::mc {Automatic}]

    ttk::label $f.x -text [msgcat::mc {X}]
    ttk::entry $f.xmin -textvariable ed(graph,axis,x,min) -width 12
    ttk::entry $f.xmax -textvariable ed(graph,axis,x,max) -width 12
    ttk::entry $f.xformat -textvariable ed(graph,axis,x,format) -width 8
    ttk::checkbutton $f.xauto -variable ed(graph,axis,x,auto)

    ttk::label $f.y -text [msgcat::mc {Y}]
    ttk::entry $f.ymin -textvariable ed(graph,axis,y,min) -width 12
    ttk::entry $f.ymax -textvariable ed(graph,axis,y,max) -width 12
    ttk::entry $f.yformat -textvariable ed(graph,axis,y,format) -width 8
    ttk::checkbutton $f.yauto -variable ed(graph,axis,y,auto)

    grid $f.t $f.tfrom $f.tto $f.tformat $f.tauto -padx 2 -pady 2 -sticky w
    grid $f.x $f.xmin $f.xmax $f.xformat $f.xauto -padx 2 -pady 2 -sticky w
    grid $f.y $f.ymin $f.ymax $f.yformat $f.yauto -padx 2 -pady 2 -sticky w

    # Buttons
    set f [ttk::frame $w.buttons]
    ttk::button $f.ok -text [msgcat::mc {OK}] -command {set ed(ok) 1} \
	-default active 
    ttk::button $f.cancel -text [msgcat::mc {Cancel}] -command {set ed(ok) 0}
    pack $f.ok $f.cancel -side left -expand true -padx 2 -pady 4

    bind $w <Return> {set ed(ok) 1}

    # Fini
    ttk::separator $w.sep -orient horizontal
    pack $w.buttons $w.sep -side bottom -fill x
    pack $w.param -side top -fill both -expand true

    DialogWait $w ed(ok) $w.param.xmin
    destroy $w

    if {$ed(ok)} {
	set var(graph,axis,x,auto) $ed(graph,axis,x,auto)
	set var(graph,axis,x,min) $ed(graph,axis,x,min) 
	set var(graph,axis,x,max) $ed(graph,axis,x,max) 
	set var(graph,axis,x,format) $ed(graph,axis,x,format)

	set var(graph,axis,y,auto) $ed(graph,axis,y,auto)
	set var(graph,axis,y,min) $ed(graph,axis,y,min) 
	set var(graph,axis,y,max) $ed(graph,axis,y,max) 
	set var(graph,axis,y,format) $ed(graph,axis,y,format)

	PlotChangeAxis $varname
    }
    
    set rr $ed(ok)
    unset ed
    return $rr
}

proc PlotGraphTitleDialog {varname} {
    upvar #0 $varname var
    global $varname
    global ed

    set w {.applottitle}

    set ed(ok) 0
    set ed(graph,title) $var(graph,title)
    set ed(graph,axis,x,title) $var(graph,axis,x,title)
    set ed(graph,axis,y,title) $var(graph,axis,y,title)
    set ed(graph,legend,title) $var(graph,legend,title)

    DialogCreate $w [msgcat::mc {Title}] ed(ok)

    # Param
    set f [ttk::frame $w.param]
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
    grid columnconfigure $f 1 -weight 1

    # Buttons
    set f [ttk::frame $w.buttons]
    ttk::button $f.ok -text [msgcat::mc {OK}] -command {set ed(ok) 1} \
	-default active 
    ttk::button $f.cancel -text [msgcat::mc {Cancel}] -command {set ed(ok) 0}
    pack $f.ok $f.cancel -side left -expand true -padx 2 -pady 4

    bind $w <Return> {set ed(ok) 1}

    # Fini
    ttk::separator $w.sep -orient horizontal
    pack $w.buttons $w.sep -side bottom -fill x
    pack $w.param -side top -fill both -expand true

    DialogWait $w ed(ok) $w.param.title
    destroy $w

    if {$ed(ok)} {
	set var(graph,title) $ed(graph,title)
	set var(graph,axis,x,title) $ed(graph,axis,x,title)
	set var(graph,axis,y,title) $ed(graph,axis,y,title)
	set var(graph,legend,title) $ed(graph,legend,title)

	PlotChangeTitle $varname
    }
    
    set rr $ed(ok)
    unset ed
    return $rr
}

proc DatasetNameDialog {varname} {
    upvar #0 $varname var
    global $varname
    global ed

    set w {.aptitle}

    set ed(ok) 0
    set ed(name) $var(graph,ds,name)

    DialogCreate $w [msgcat::mc {Data}] ed(ok)

    # Param
    set f [ttk::frame $w.param]
    ttk::label $f.label -text [msgcat::mc {Dataset Name}]
    ttk::entry $f.name -textvariable ed(name) -width 30

    grid $f.label $f.name -padx 2 -pady 2 -sticky ew
    grid columnconfigure $f 1 -weight 1

    # Buttons
    set f [ttk::frame $w.buttons]
    ttk::button $f.ok -text [msgcat::mc {OK}] -command {set ed(ok) 1} \
	-default active 
    ttk::button $f.cancel -text [msgcat::mc {Cancel}] -command {set ed(ok) 0}
    pack $f.ok $f.cancel -side left -expand true -padx 2 -pady 4

    bind $w <Return> {set ed(ok) 1}

    # Fini
    ttk::separator $w.sep -orient horizontal
    pack $w.buttons $w.sep -side bottom -fill x
    pack $w.param -side top -fill both -expand true

    DialogWait $w ed(ok) $w.param.name
    destroy $w

    if {$ed(ok)} {
	PlotDataSetName $varname $ed(name)
    }
    
    set rr $ed(ok)
    unset ed
    return $rr
}

proc PlotExportDialog {varname format} {
    upvar #0 $varname var
    global $varname

    global giffbox
    global jpegfbox
    global tifffbox
    global pngfbox
    global iap

    switch -- $format {
	eps {set fn [SaveFileDialog epsfbox $var(top)]}
	gif {set fn [SaveFileDialog giffbox $var(top)]}
	jpeg {set fn [SaveFileDialog jpegfbox $var(top)]}
	tiff {set fn [SaveFileDialog tifffbox $var(top)]}
	png {set fn [SaveFileDialog pngfbox $var(top)]}
    }

    if {$fn != {}} {
	set ok 1
	switch -- $format {
	    eps {}
	    gif {}
	    jpeg {set ok [JPEGExportDialog iap(jpeg,quality)]}
	    tiff {set ok [TIFFExportDialog iap(tiff,compress)]}
	    png {}
	}

	if {$ok} {
	    PlotExport $varname $fn $format
	}
    }
}

proc PlotExport {varname fn format} {
    upvar #0 $varname var
    global $varname

    global ds9
    global iap

    if {$fn == {}} {
	return
    }

    # be sure we are on top
    raise $var(top)

    # and realized
    global debug
    if {$debug(tcl,idletasks)} {
	puts stderr "PlotExport update"
    }
    update

    switch -- $format {
	eps {PlotEPS $varname $fn}
	gif -
	tiff -
	jpeg -
	png {PlotExportPhoto $varname $fn $format}
    }
}

proc PlotExportPhoto {varname fn format} {
    upvar #0 $varname var
    global $varname
    global iap

    set geom [MacOSPhotoFix $var(top) 0 0]

    set rr [catch {image create photo -format window -data $var(top)} ph]
    if {$rr} {
	Error [msgcat::mc {An error has occurred while creating}]
	return
    }

    switch -- $format {
	gif -
	png {$ph write $fn -format $format}
	jpeg {$ph write $fn \
		  -format [list $format -quality $iap(jpeg,quality)]}
	tiff {$ph write $fn \
		  -format [list $format -compression $iap(tiff,compress)]}
    }

    image delete $ph

    # reset if needed
    MacOSPhotoRestore $var(top) $geom
}

proc PlotUpdateMenus {varname} {
    upvar #0 $varname var
    global $varname

    # File
    if {$var(graph,ds,xdata) != {}} {
	$var(mb).file entryconfig "[msgcat::mc {Save Data}]..." -state normal
    } else {
	$var(mb).file entryconfig "[msgcat::mc {Save Data}]..." -state disabled
    }

    # Canvas

    # Graph
    switch $var(canvas,layout) {
	grid -
	row -
	column {
	    $var(mb).graph.xaxis entryconfig [msgcat::mc {Log}] -state normal
	    $var(mb).graph.xaxis entryconfig [msgcat::mc {Flip}] -state normal
	    $var(mb).graph.xaxis entryconfig [msgcat::mc {Grid}] -state normal

	    $var(mb).graph.yaxis entryconfig [msgcat::mc {Log}] -state normal
	    $var(mb).graph.yaxis entryconfig [msgcat::mc {Flip}] -state normal
	    $var(mb).graph.yaxis entryconfig [msgcat::mc {Grid}] -state normal
	}
	strip {
	    set cc $var(graph,current)
	    set first [lindex $var(graphs) 0]
	    if {$cc == $first} {
		$var(mb).graph.xaxis entryconfig [msgcat::mc {Log}] \
		    -state normal
		$var(mb).graph.xaxis entryconfig [msgcat::mc {Flip}] \
		    -state normal
		$var(mb).graph.xaxis entryconfig [msgcat::mc {Grid}] \
		    -state normal

	    } else {
		$var(mb).graph.xaxis entryconfig [msgcat::mc {Log}] \
		    -state disabled
		$var(mb).graph.xaxis entryconfig [msgcat::mc {Flip}] \
		    -state disabled
		$var(mb).graph.xaxis entryconfig [msgcat::mc {Grid}] \
		    -state disabled
	    }

	    $var(mb).graph.yaxis entryconfig [msgcat::mc {Log}] -state normal
	    $var(mb).graph.yaxis entryconfig [msgcat::mc {Flip}] -state normal
	    $var(mb).graph.yaxis entryconfig [msgcat::mc {Grid}] -state normal
	}
    }

    if {[llength $var(graph,dss)] == 0} {
	$var(mb).graph entryconfig [msgcat::mc {Duplicate Dataset}] \
	    -state disabled
	$var(mb).graph entryconfig [msgcat::mc {Delete Dataset}] \
	    -state disabled
    } else {
	$var(mb).graph entryconfig [msgcat::mc {Duplicate Dataset}] \
	    -state normal
	$var(mb).graph entryconfig [msgcat::mc {Delete Dataset}] \
	    -state normal
    }

    $var(mb).graph.select delete 0 end
    set cc $var(graph,current)
    foreach nn $var(graph,dss) {
	$var(mb).graph.select add radiobutton -label "$var($cc,$nn,name)" \
	    -variable ${varname}(graph,ds,current) -value $nn \
	    -command [list PlotCurrentDataSet $varname]
    }

    # Data
    $var(mb) delete [msgcat::mc {Data}]
    switch $var(graph,type) {
	line {
	    $var(mb) add cascade -label [msgcat::mc {Data}] \
		-menu $var(mb).dataline
	}
	bar {
	    $var(mb) add cascade -label [msgcat::mc {Data}] \
		-menu $var(mb).databar
	}
	scatter {
	    # backward compatibility
	    $var(mb) add cascade -label [msgcat::mc {Data}] \
		-menu $var(mb).datascatter
	}
    }
}
