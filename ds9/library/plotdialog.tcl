#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc PlotDialog {varname wtt} {
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

    set var(graphs) {}
    set var(seq) 0

    array set $varname [array get pap]

    # create window
    Toplevel $var(top) $var(mb) 7 $wtt [list PlotDestroy $varname]

    $var(mb) add cascade -label [msgcat::mc {File}] -menu $var(mb).file
    $var(mb) add cascade -label [msgcat::mc {Edit}] -menu $var(mb).edit
    $var(mb) add cascade -label [msgcat::mc {Canvas}] -menu $var(mb).canvas
    $var(mb) add cascade -label [msgcat::mc {Graph}] -menu $var(mb).graph
    $var(mb) add cascade -label [msgcat::mc {Data}] -menu $var(mb).dataline

    # File
    menu $var(mb).file
    $var(mb).file add command -label "[msgcat::mc {Load Data}]..." \
	-command [list PlotLoadData $varname]
    $var(mb).file add command -label "[msgcat::mc {Save Data}]..." \
	-command [list PlotSaveData $varname]
    $var(mb).file add separator
    $var(mb).file add cascade -label [msgcat::mc {Export}] \
	-menu $var(mb).file.export
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

    menu $var(mb).file.export
    $var(mb).file.export add command -label {GIF...} \
	-command [list PlotExportDialog $varname gif]
    $var(mb).file.export add command -label {TIFF...} \
	-command [list PlotExportDialog $varname tiff]
    $var(mb).file.export add command -label {JPEG...} \
	-command [list PlotExportDialog $varname jpeg]
    $var(mb).file.export add command -label {PNG...} \
	-command [list PlotExportDialog $varname png]

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

    # Canvas
    menu $var(mb).canvas

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
    $var(mb).canvas add cascade -label [msgcat::mc {Legend}] \
	-menu $var(mb).canvas.legend
    $var(mb).canvas add cascade -label [msgcat::mc {Font}] \
	-menu $var(mb).canvas.font
    $var(mb).canvas add cascade -label [msgcat::mc {Background}] \
	-menu $var(mb).canvas.bg

    menu $var(mb).canvas.select

    menu $var(mb).canvas.graph
    $var(mb).canvas.graph add command -label [msgcat::mc {Line}] \
	-command [list PlotAddGraph $varname line]
    $var(mb).canvas.graph add command -label [msgcat::mc {Bar}] \
	-command [list PlotAddGraph $varname bar]
    $var(mb).canvas.graph add command -label [msgcat::mc {Scatter}] \
	-command [list PlotAddGraph $varname scatter]

    menu $var(mb).canvas.layout
    $var(mb).canvas.layout add radiobutton -label [msgcat::mc {Grid}] \
	-variable ${varname}(layout) -value grid \
	-command [list PlotChangeLayout $varname]
    $var(mb).canvas.layout add separator
    $var(mb).canvas.layout add radiobutton -label [msgcat::mc {Column}] \
	-variable ${varname}(layout) -value column \
	-command [list PlotChangeLayout $varname]
    $var(mb).canvas.layout add radiobutton -label [msgcat::mc {Row}] \
	-variable ${varname}(layout) -value row \
	-command [list PlotChangeLayout $varname]
    $var(mb).canvas.layout add separator
    $var(mb).canvas.layout add checkbutton -label [msgcat::mc {Lock Axis}] \
	-variable ${varname}(layout,lock) \
	-command [list PlotChangeLayout $varname]

    menu $var(mb).canvas.legend
    $var(mb).canvas.legend add checkbutton -label [msgcat::mc {Show}] \
	-variable ${varname}(legend) \
	-command [list PlotUpdateCanvas $varname]
    $var(mb).canvas.legend add separator
    $var(mb).canvas.legend add radiobutton -label [msgcat::mc {Right}] \
	-variable ${varname}(legend,position) -value right \
	-command [list PlotUpdateCanvas $varname]
    $var(mb).canvas.legend add radiobutton -label [msgcat::mc {Left}] \
	-variable ${varname}(legend,position) -value left \
	-command [list PlotUpdateCanvas $varname]
    $var(mb).canvas.legend add radiobutton -label [msgcat::mc {Top}] \
	-variable ${varname}(legend,position) -value top \
	-command [list PlotUpdateCanvas $varname]
    $var(mb).canvas.legend add radiobutton -label [msgcat::mc {Bottom}] \
	-variable ${varname}(legend,position) -value bottom \
	-command [list PlotUpdateCanvas $varname]

    menu $var(mb).canvas.font
    $var(mb).canvas.font add cascade -label [msgcat::mc {Title}] \
	-menu $var(mb).canvas.font.title
    $var(mb).canvas.font add cascade -label [msgcat::mc {Axes Title}] \
	-menu $var(mb).canvas.font.textlab
    $var(mb).canvas.font add cascade -label [msgcat::mc {Axes Number}] \
	-menu $var(mb).canvas.font.numlab
    $var(mb).canvas.font add cascade -label [msgcat::mc {Legend Title}] \
	-menu $var(mb).canvas.font.legendtitle
    $var(mb).canvas.font add cascade -label [msgcat::mc {Legend}] \
	-menu $var(mb).canvas.font.legend

    FontMenu $var(mb).canvas.font.title \
	$varname graph,title,family graph,title,size graph,title,weight \
	graph,title,slant [list PlotUpdateCanvas $varname]
    FontMenu $var(mb).canvas.font.textlab \
	$varname axis,title,family axis,title,size axis,title,weight \
	axis,title,slant [list PlotUpdateCanvas $varname]
    FontMenu $var(mb).canvas.font.numlab \
	$varname axis,font,family axis,font,size axis,font,weight \
	axis,font,slant [list PlotUpdateCanvas $varname]
    FontMenu $var(mb).canvas.font.legendtitle \
	$varname legend,title,family legend,title,size legend,title,weight \
	legend,title,slant [list PlotUpdateCanvas $varname]
    FontMenu $var(mb).canvas.font.legend \
	$varname legend,font,family legend,font,size legend,font,weight \
	legend,font,slant [list PlotUpdateCanvas $varname]

    PlotColorMenu $var(mb).canvas.bg $varname background \
	[list PlotUpdateCanvas $varname]

    # Graph
    menu $var(mb).graph

    $var(mb).graph add cascade -label [msgcat::mc {Select Dataset}] \
	-menu $var(mb).graph.select
    $var(mb).graph add separator
    $var(mb).graph add command -label [msgcat::mc {Duplicate Dataset}] \
	-command [list PlotDupDataSet $varname]
    $var(mb).graph add command -label [msgcat::mc {Delete Dataset}] \
	-command [list PlotDeleteDataSetCurrent $varname]
    $var(mb).graph add separator
    $var(mb).graph add command -label [msgcat::mc {Statistics}] \
	-command "set ${varname}(stats) 1; PlotStats $varname"
    $var(mb).graph add command -label [msgcat::mc {List Data}] \
	-command "set ${varname}(list) 1; PlotList $varname"
    $var(mb).graph add separator

    $var(mb).graph add cascade -label [msgcat::mc {Axes}] \
	-menu $var(mb).graph.axes
    $var(mb).graph add separator
    $var(mb).graph add command -label "[msgcat::mc {Titles}]..." \
	-command [list PlotGraphTitleDialog $varname]
    $var(mb).graph add separator
    $var(mb).graph add cascade -label [msgcat::mc {Bar Mode}] \
	-menu $var(mb).graph.barmode

    menu $var(mb).graph.select

    menu $var(mb).graph.axes
    $var(mb).graph.axes add checkbutton -label [msgcat::mc {X Grid}] \
	-variable ${varname}(graph,axis,x,grid) \
	-command [list PlotChangeAxis $varname]
    $var(mb).graph.axes add checkbutton -label [msgcat::mc {Log}] \
	-variable ${varname}(graph,axis,x,log) \
	-command [list PlotChangeAxis $varname]
    $var(mb).graph.axes add checkbutton -label [msgcat::mc {Flip}] \
	-variable ${varname}(graph,axis,x,flip) \
	-command [list PlotChangeAxis $varname]
    $var(mb).graph.axes add separator
    $var(mb).graph.axes add checkbutton -label [msgcat::mc {Y Grid}] \
	-variable ${varname}(graph,axis,y,grid) \
	-command [list PlotChangeAxis $varname]
    $var(mb).graph.axes add checkbutton -label [msgcat::mc {Log}] \
	-variable ${varname}(graph,axis,y,log) \
	-command [list PlotChangeAxis $varname]
    $var(mb).graph.axes add checkbutton -label [msgcat::mc {Flip}] \
	-variable ${varname}(graph,axis,y,flip) \
	-command [list PlotChangeAxis $varname]
    $var(mb).graph.axes add separator
    $var(mb).graph.axes add command -label "[msgcat::mc {Range}]..." \
	-command [list PlotRangeDialog $varname]

    # Graph Mode
    menu $var(mb).graph.barmode
    $var(mb).graph.barmode add radiobutton -label [msgcat::mc {Normal}] \
	-variable ${varname}(bar,mode) -value normal \
	-command [list PlotUpdateCanvas $varname]
    $var(mb).graph.barmode add radiobutton -label [msgcat::mc {Stacked}] \
	-variable ${varname}(bar,mode) -value stacked \
	-command [list PlotUpdateCanvas $varname]
    $var(mb).graph.barmode add radiobutton -label [msgcat::mc {Aligned}] \
	-variable ${varname}(bar,mode) -value aligned \
	-command [list PlotUpdateCanvas $varname]
    $var(mb).graph.barmode add radiobutton -label [msgcat::mc {Overlap}] \
	-variable ${varname}(bar,mode) -value overlap \
	-command [list PlotUpdateCanvas $varname]

    PlotLineMenus $varname
    PlotBarMenus $varname
    PlotScatterMenus $varname
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

    DialogCenter $w 
    DialogWait $w ed(ok) $w.param.xmin
    DialogDismiss $w

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

    DialogCenter $w 
    DialogWait $w ed(ok) $w.param.title
    DialogDismiss $w

    if {$ed(ok)} {
	set var(graph,title) $ed(graph,title)
	set var(graph,axis,x,title) $ed(graph,axis,x,title)
	set var(graph,axis,y,title) $ed(graph,axis,y,title)
	set var(graph,legend,title) $ed(graph,legend,title)

	PlotUpdateGraph $varname
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

    DialogCenter $w 
    DialogWait $w ed(ok) $w.param.name
    DialogDismiss $w

    if {$ed(ok)} {
	$var(mb).graph.select entryconfig "$var(graph,ds,name)" \
	    -label "$ed(name)"
	set var(graph,ds,name) $ed(name)
	$var(graph,proc,updateelement) $varname
    }
    
    set rr $ed(ok)
    unset ed
    return $rr
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

proc PlotExportDialog {varname format} {
    upvar #0 $varname var
    global $varname

    global giffbox
    global jpegfbox
    global tifffbox
    global pngfbox
    global iap

    switch -- $format {
	gif {set fn [SaveFileDialog giffbox]}
	jpeg {set fn [SaveFileDialog jpegfbox]}
	tiff {set fn [SaveFileDialog tifffbox]}
	png {set fn [SaveFileDialog pngfbox]}
    }

    if {$fn != {}} {
	set ok 1
	switch -- $format {
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
    update

    # for darwin only
    set geom [DarwinPhotoFix $var(top) 0 0]

    set rr [catch {image create photo -format window -data $var(top)} ph]
    if {$rr} {
	Error $iap(error)
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
    DarwinPhotoRestore $var(top) $geom
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
    switch $var(layout) {
	grid {
	    $var(mb).canvas.layout entryconfig [msgcat::mc {Lock Axis}] \
		-state disabled
	}
	row -
	column {
	    $var(mb).canvas.layout entryconfig [msgcat::mc {Lock Axis}] \
		-state normal
	}
    }

    # Graph
    if {[llength $var(graph,dss)] == 0} {
	$var(mb).graph entryconfig [msgcat::mc {Duplicate Dataset}] \
	    -state disabled
	$var(mb).graph entryconfig [msgcat::mc {Delete Dataset}] \
	    -state disabled
    } else {
	$var(mb).graph entryconfig [msgcat::mc {Duplicate Dataset}] \
	    -state normal

	if {!$var(graph,ds,manage)} {
	    $var(mb).graph entryconfig [msgcat::mc {Delete Dataset}] \
		-state disabled
	} else {
	    $var(mb).graph entryconfig [msgcat::mc {Delete Dataset}] \
		-state normal
	}
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
	    $var(mb).graph entryconfig [msgcat::mc {Bar Mode}] -state disabled
	}
	bar {
	    $var(mb) add cascade -label [msgcat::mc {Data}] \
		-menu $var(mb).databar
	    $var(mb).graph entryconfig [msgcat::mc {Bar Mode}] -state normal
	}
	scatter {
	    $var(mb) add cascade -label [msgcat::mc {Data}] \
		-menu $var(mb).datascatter
	    $var(mb).graph entryconfig [msgcat::mc {Bar Mode}] -state disabled
	}
    }

    if {[llength $var(graph,dss)] == 0} {
	$var(mb) entryconfig [msgcat::mc {Data}] -state disabled
    } else {
	$var(mb) entryconfig [msgcat::mc {Data}] -state normal
    }
}
