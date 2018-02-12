#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc PlotDialog {varname wtt title xaxis yaxis} {
    upvar #0 $varname var
    global $varname

    global ds9
    global pap

    if {[PlotRaise $varname]} {
	return
    }

    # add it to our xpa list
    global iap
    lappend iap(windows) $varname

    set var(top) ".${varname}"
    set var(mb) ".${varname}mb"
    set var(stats) 0
    set var(list) 0

    set var(mode) zoom
    set var(callback) {}

    set var(data,total) 0
    set var(data,current) 0

    set var(name) {}
    set var(xdata) {}
    set var(ydata) {}
    set var(xedata) {}
    set var(yedata) {}

    array set $varname [array get pap]

    set var(graph,title) "$title"
    set var(axis,x,title) "$xaxis"
    set var(axis,y,title) "$yaxis"

    # can be turned off for external line plots
    set var(graph,format) 1

    # create window
    Toplevel $var(top) $var(mb) 7 $wtt [list PlotDestroy $varname]

    $var(mb) add cascade -label [msgcat::mc {File}] -menu $var(mb).file
    $var(mb) add cascade -label [msgcat::mc {Edit}] -menu $var(mb).edit
    $var(mb) add cascade -label [msgcat::mc {Graph}] -menu $var(mb).graph
    $var(mb) add cascade -label [msgcat::mc {Dataset}] -menu $var(mb).dataset
    $var(mb) add cascade -label [msgcat::mc {Select}] -menu $var(mb).select

    menu $var(mb).file
    $var(mb).file add command -label "[msgcat::mc {Load Data}]..." \
	-command [list PlotLoadData $varname]
    $var(mb).file add command -label "[msgcat::mc {Save Data}]..." \
	-command [list PlotSaveData $varname]
    $var(mb).file add command -label [msgcat::mc {Clear Data}] \
	-command [list PlotClearData $varname]
    $var(mb).file add separator
    $var(mb).file add command -label [msgcat::mc {Duplicate Data}] \
	-command [list PlotDupData $varname 1]
    $var(mb).file add separator
    $var(mb).file add command -label [msgcat::mc {Statistics}] \
	-command "set ${varname}(stats) 1; PlotStats $varname"
    $var(mb).file add command -label [msgcat::mc {List Data}] \
	-command "set ${varname}(list) 1; PlotList $varname"
    $var(mb).file add separator
    $var(mb).file add command -label "[msgcat::mc {Load Configuration}]..." \
	-command [list PlotLoadConfig $varname]
    $var(mb).file add command -label "[msgcat::mc {Save Configuration}]..." \
	-command [list PlotSaveConfig $varname]
    $var(mb).file add separator
    switch $ds9(wm) {
	x11 -
	win32 {
	    $var(mb).file add command \
		-label "[msgcat::mc {Page Setup}]..." \
		-command PSPageSetup
	    $var(mb).file add command -label "[msgcat::mc {Print}]..." \
		-command [list PlotPSPrint $varname]
	}
	aqua {
	    $var(mb).file add command \
		-label "[msgcat::mc {Postscript Page Setup}]..." \
		-command PSPageSetup
	    $var(mb).file add command \
		-label "[msgcat::mc {Postscript Print}]..." \
		-command [list PlotPSPrint $varname]
	}
    }
    $var(mb).file add separator
    $var(mb).file add command -label [msgcat::mc {Close}] \
	-command [list PlotDestroy $varname]

    menu $var(mb).edit
    $var(mb).edit add command -label [msgcat::mc {Cut}] \
	-state disabled -accelerator "${ds9(ctrl)}X"
    $var(mb).edit add command -label [msgcat::mc {Copy}] \
	-state disabled -accelerator "${ds9(ctrl)}C"
    $var(mb).edit add command -label [msgcat::mc {Paste}] \
	-state disabled -accelerator "${ds9(ctrl)}V"
    $var(mb).edit add command -label [msgcat::mc {Clear}] \
	-state disabled
    $var(mb).edit add separator
    $var(mb).edit add radiobutton -label [msgcat::mc {Pointer}] \
	-variable ${varname}(mode) -value pointer \
	-command [list PlotChangeMode $varname]
    $var(mb).edit add radiobutton -label [msgcat::mc {Zoom}] \
	-variable ${varname}(mode) -value zoom \
	-command [list PlotChangeMode $varname]

    # Graph
    menu $var(mb).graph
    $var(mb).graph add cascade -label [msgcat::mc {Axes}] \
	-menu $var(mb).graph.axes
    $var(mb).graph add cascade -label [msgcat::mc {Legend}] \
	-menu $var(mb).graph.legend
    $var(mb).graph add cascade -label [msgcat::mc {Font}] \
	-menu $var(mb).graph.font
    $var(mb).graph add separator
    $var(mb).graph add command -label "[msgcat::mc {Title}]..." \
	-command [list PlotTitleDialog $varname]

    menu $var(mb).graph.axes
    $var(mb).graph.axes add checkbutton -label [msgcat::mc {X Grid}] \
	-variable ${varname}(axis,x,grid) \
	-command [list $var(proc,updategraph) $varname]
    $var(mb).graph.axes add checkbutton -label [msgcat::mc {Log}] \
	-variable ${varname}(axis,x,log) \
	-command [list $var(proc,updategraph) $varname]
    $var(mb).graph.axes add checkbutton -label [msgcat::mc {Flip}] \
	-variable ${varname}(axis,x,flip) \
	-command [list $var(proc,updategraph) $varname]
    $var(mb).graph.axes add separator
    $var(mb).graph.axes add checkbutton -label [msgcat::mc {Y Grid}] \
	-variable ${varname}(axis,y,grid) \
	-command [list $var(proc,updategraph) $varname]
    $var(mb).graph.axes add checkbutton -label [msgcat::mc {Log}] \
	-variable ${varname}(axis,y,log) \
	-command [list $var(proc,updategraph) $varname]
    $var(mb).graph.axes add checkbutton -label [msgcat::mc {Flip}] \
	-variable ${varname}(axis,y,flip) \
	-command [list $var(proc,updategraph) $varname]
    $var(mb).graph.axes add separator
    $var(mb).graph.axes add command -label "[msgcat::mc {Range}]..." \
	-command [list PlotRangeDialog $varname]

    menu $var(mb).graph.legend
    $var(mb).graph.legend add checkbutton -label [msgcat::mc {Show}] \
	-variable ${varname}(legend) \
	-command [list $var(proc,updategraph) $varname]
    $var(mb).graph.legend add separator
    $var(mb).graph.legend add radiobutton -label [msgcat::mc {Right}] \
	-variable ${varname}(legend,position) -value right \
	-command [list $var(proc,updategraph) $varname]
    $var(mb).graph.legend add radiobutton -label [msgcat::mc {Left}] \
	-variable ${varname}(legend,position) -value left \
	-command [list $var(proc,updategraph) $varname]
    $var(mb).graph.legend add radiobutton -label [msgcat::mc {Top}] \
	-variable ${varname}(legend,position) -value top \
	-command [list $var(proc,updategraph) $varname]
    $var(mb).graph.legend add radiobutton -label [msgcat::mc {Bottom}] \
	-variable ${varname}(legend,position) -value bottom \
	-command [list $var(proc,updategraph) $varname]

    menu $var(mb).graph.font
    $var(mb).graph.font add cascade -label [msgcat::mc {Title}] \
	-menu $var(mb).graph.font.title
    $var(mb).graph.font add cascade -label [msgcat::mc {Axes Title}] \
	-menu $var(mb).graph.font.textlab
    $var(mb).graph.font add cascade -label [msgcat::mc {Axes Number}] \
	-menu $var(mb).graph.font.numlab
    $var(mb).graph.font add cascade -label [msgcat::mc {Legend Title}] \
	-menu $var(mb).graph.font.legendtitle
    $var(mb).graph.font add cascade -label [msgcat::mc {Legend}] \
	-menu $var(mb).graph.font.legend

    FontMenu $var(mb).graph.font.title $varname graph,title,family graph,title,size graph,title,weight graph,title,slant [list $var(proc,updategraph) $varname]
    FontMenu $var(mb).graph.font.textlab $varname axis,title,family axis,title,size axis,title,weight axis,title,slant [list $var(proc,updategraph) $varname]
    FontMenu $var(mb).graph.font.numlab $varname axis,font,family axis,font,size axis,font,weight axis,font,slant [list $var(proc,updategraph) $varname]
    FontMenu $var(mb).graph.font.legendtitle $varname legend,title,family legend,title,size legend,title,weight legend,title,slant [list $var(proc,updategraph) $varname]
    FontMenu $var(mb).graph.font.legend $varname legend,font,family legend,font,size legend,font,weight legend,font,slant [list $var(proc,updategraph) $varname]

    # dataset
    menu $var(mb).dataset

    # select
    menu $var(mb).select
}

proc PlotChangeMode {varname} {
    upvar #0 $varname var
    global $varname

    global ds9

    blt::RemoveBindTag $var(graph) zoom-$var(graph)
    bind $var(graph) <1> {}

    switch $var(mode) {
	pointer {bind $var(graph) <1> [list PlotButton $varname %x %y]}
	zoom {
	    switch $ds9(wm) {
		x11 -
		win32 {Blt_ZoomStack $var(graph) -mode release}
		aqua {Blt_ZoomStack $var(graph) -mode release -button "ButtonPress-2"}
	    }
	}
    }
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

    DialogCenter $w 
    DialogWait $w ed(ok) $w.param.xy
    DialogDismiss $w

    if {$ed(ok)} {
	set xar $ed(dim)
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

    set ed(x,auto) $var(axis,x,auto)
    set ed(x,min) $var(axis,x,min)
    set ed(x,max) $var(axis,x,max)
    set ed(x,format) $var(axis,x,format)

    set ed(y,auto) $var(axis,y,auto)
    set ed(y,min) $var(axis,y,min)
    set ed(y,max) $var(axis,y,max)
    set ed(y,format) $var(axis,y,format)

    DialogCreate $w [msgcat::mc {Range}] ed(ok)

    # Param
    set f [ttk::frame $w.param]
    ttk::label $f.t -text [msgcat::mc {Axis}]
    ttk::label $f.tto -text [msgcat::mc {To}]
    ttk::label $f.tfrom -text [msgcat::mc {From}]
    ttk::label $f.tformat -text [msgcat::mc {Format}]
    ttk::label $f.tauto -text [msgcat::mc {Automatic}]

    ttk::label $f.x -text [msgcat::mc {X}]
    ttk::entry $f.xmin -textvariable ed(x,min) -width 12
    ttk::entry $f.xmax -textvariable ed(x,max) -width 12
    ttk::entry $f.xformat -textvariable ed(x,format) -width 8
    ttk::checkbutton $f.xauto -variable ed(x,auto)

    ttk::label $f.y -text [msgcat::mc {Y}]
    ttk::entry $f.ymin -textvariable ed(y,min) -width 12
    ttk::entry $f.ymax -textvariable ed(y,max) -width 12
    ttk::entry $f.yformat -textvariable ed(y,format) -width 8
    ttk::checkbutton $f.yauto -variable ed(y,auto)

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

    DialogCenter $w 
    DialogWait $w ed(ok) $w.param.xmin
    DialogDismiss $w

    if {$ed(ok)} {
	set var(axis,x,auto) $ed(x,auto)
	set var(axis,x,min) $ed(x,min) 
	set var(axis,x,max) $ed(x,max) 
	set var(axis,x,format) $ed(x,format)

	set var(axis,y,auto) $ed(y,auto)
	set var(axis,y,min) $ed(y,min) 
	set var(axis,y,max) $ed(y,max) 
	set var(axis,y,format) $ed(y,format)

	$var(proc,updategraph) $varname
    }
    
    set rr $ed(ok)
    unset ed
    return $rr
}

proc PlotTitleDialog {varname} {
    upvar #0 $varname var
    global $varname
    global ed

    set w {.aptitle}

    set ed(ok) 0
    set ed(graph,title) $var(graph,title)
    set ed(axis,x,title) $var(axis,x,title)
    set ed(axis,y,title) $var(axis,y,title)
    set ed(legend,title) $var(legend,title)

    DialogCreate $w [msgcat::mc {Title}] ed(ok)

    # Param
    set f [ttk::frame $w.param]
    ttk::label $f.label -text [msgcat::mc {Plot Title}]
    ttk::entry $f.title -textvariable ed(graph,title) -width 30
    ttk::label $f.xlabel -text [msgcat::mc {X Axis Title}]
    ttk::entry $f.xtitle -textvariable ed(axis,x,title) -width 30
    ttk::label $f.ylabel -text [msgcat::mc {Y Axis Title}]
    ttk::entry $f.ytitle -textvariable ed(axis,y,title) -width 30
    ttk::label $f.legendlabel -text [msgcat::mc {Legend Title}]
    ttk::entry $f.legendtitle -textvariable ed(legend,title) -width 30

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

    DialogCenter $w 
    DialogWait $w ed(ok) $w.param.title
    DialogDismiss $w

    if {$ed(ok)} {
	set var(graph,title) $ed(graph,title)
	set var(axis,x,title) $ed(axis,x,title)
	set var(axis,y,title) $ed(axis,y,title)
	set var(legend,title) $ed(legend,title)

	$var(proc,updategraph) $varname
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
    set ed(name) $var(name)

    DialogCreate $w [msgcat::mc {Dataset}] ed(ok)

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

    DialogCenter $w 
    DialogWait $w ed(ok) $w.param.name
    DialogDismiss $w

    if {$ed(ok)} {
	$var(mb).select entryconfig "$var(name)" -label "$ed(name)"
	set var(name) $ed(name)
	$var(proc,updateelement) $varname
    }
    
    set rr $ed(ok)
    unset ed
    return $rr
}

proc PlotButton {varname x y} {
    upvar #0 $varname var
    global $varname

    $var(proc,button) $varname $x $y
}

proc PlotLineShapeMenu {which var} {
    menu $which
    $which add radiobutton -label [msgcat::mc {None}] \
	-variable $var -value none
    $which add radiobutton -label [msgcat::mc {Circle}] \
	-variable $var -value circle
    $which add radiobutton -label [msgcat::mc {Square}] \
	-variable $var -value square
    $which add radiobutton -label [msgcat::mc {Diamond}] \
	-variable $var -value diamond
    $which add radiobutton -label [msgcat::mc {Plus}] \
	-variable $var -value plus
    $which add radiobutton -label [msgcat::mc {Cross}] \
	-variable $var -value cross
    $which add radiobutton -label [msgcat::mc {Simple Plus}] \
	-variable $var -value splus
    $which add radiobutton -label [msgcat::mc {Simple Cross}] \
	-variable $var -value scross
    $which add radiobutton -label [msgcat::mc {Triangle}] \
	-variable $var -value triangle
    $which add radiobutton -label [msgcat::mc {Arrow}] \
	-variable $var -value arrow
}

proc PlotLineSmoothMenu {which var} {
    menu $which
    $which add radiobutton -label [msgcat::mc {Step}] \
	-variable $var -value step
    $which add radiobutton -label [msgcat::mc {Linear}] \
	-variable $var -value linear
    $which add radiobutton -label [msgcat::mc {Cubic}] \
	-variable $var -value cubic
    $which add radiobutton -label [msgcat::mc {Quadratic}] \
	-variable $var -value quadratic
    $which add radiobutton -label [msgcat::mc {Catrom}] \
	-variable $var -value catrom
}
