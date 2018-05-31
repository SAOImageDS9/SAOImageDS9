#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc PrefsDialogPlot {} {
    global dprefs

    set w $dprefs(tab)

    $dprefs(list) insert end [msgcat::mc {Plot}]
    lappend dprefs(tabs) [ttk::frame $w.plot]

    # Grid
    set f [ttk::labelframe $w.plot.grid -text [msgcat::mc {Grid}]]
    ttk::label $f.ttitle -text [msgcat::mc {Title}]
    FontMenuButton $f.title pap graph,title,family graph,title,size graph,title,weight graph,title,slant {}

    grid $f.ttitle $f.title -padx 2 -pady 2 -sticky w

    # Axis
    set f [ttk::labelframe $w.plot.axis -text [msgcat::mc {Axis}]]

    ttk::label $f.xtitle -text [msgcat::mc {X}]
    ttk::checkbutton $f.x -text [msgcat::mc {Grid}] -variable pap(axis,x,grid)
    ttk::radiobutton $f.xlinear -text [msgcat::mc {Linear}] \
	-variable pap(axis,x,log) -value 0
    ttk::radiobutton $f.xlog -text [msgcat::mc {Log}] \
	-variable pap(axis,x,log) -value 1

    ttk::label $f.ytitle -text [msgcat::mc {Y}]
    ttk::checkbutton $f.y -text [msgcat::mc {Grid}] -variable pap(axis,y,grid)
    ttk::radiobutton $f.ylinear -text [msgcat::mc {Linear}] \
	-variable pap(axis,y,log) -value 0
    ttk::radiobutton $f.ylog -text [msgcat::mc {Log}] \
	-variable pap(axis,y,log) -value 1

    ttk::label $f.ttextlab -text [msgcat::mc {Axis Title}]
    FontMenuButton $f.textlab pap axis,title,family axis,title,size axis,title,weight axis,title,slant {}
    ttk::label $f.tnumlab -text [msgcat::mc {Axis Numbers}]
    FontMenuButton $f.numlab pap axis,font,family axis,font,size axis,font,weight axis,font,slant {}

    grid $f.xtitle $f.x $f.xlinear $f.xlog -padx 2 -pady 2 -sticky w
    grid $f.ytitle $f.y $f.ylinear $f.ylog -padx 2 -pady 2 -sticky w
    grid $f.ttextlab $f.textlab  -padx 2 -pady 2 -sticky w
    grid $f.tnumlab $f.numlab -padx 2 -pady 2 -sticky w

    # Dataset
    set f [ttk::labelframe $w.plot.dataset -text [msgcat::mc {Dataset}]]

    #  Show
    ttk::checkbutton $f.show -text [msgcat::mc {Show}] -variable pap(show)
    grid $f.show -padx 2 -pady 2 -sticky w

    #  Shape
    ttk::label $f.shapetitle -text [msgcat::mc {Shape}]
    ttk::menubutton $f.shape -textvariable pap(shape,symbol) \
	-menu $f.shape.menu
    PlotLineShapeMenu $f.shape.menu pap(shape,symbol)
    ttk::checkbutton $f.shapefill -text [msgcat::mc {Fill}] \
	-variable pap(shape,fill)
    ColorMenuButton $f.shapecolor pap shape,color {}
    grid $f.shapetitle $f.shape $f.shapefill $f.shapecolor \
	-padx 2 -pady 2 -sticky w

    #  Smooth
    ttk::label $f.smoothtitle -text [msgcat::mc {Smooth}]
    ttk::menubutton $f.smooth -textvariable pap(smooth) \
	-menu $f.smooth.menu
    PlotLineSmoothMenu $f.smooth.menu pap(smooth)
    grid $f.smoothtitle $f.smooth -padx 2 -pady 2 -sticky w

    #  Color
    ttk::label $f.colortitle -text [msgcat::mc {Color}]
    ColorMenuButton $f.color pap color {}
    grid $f.colortitle $f.color -padx 2 -pady 2 -sticky w

    #  Width
    ttk::label $f.widthtitle -text [msgcat::mc {Width}]
    ttk::menubutton $f.width -textvariable pap(width) -menu $f.width.menu
    WidthDashMenu $f.width.menu pap width dash {} {}
    grid $f.widthtitle $f.width -padx 2 -pady 2 -sticky w

    #  Error
    ttk::label $f.errortitle -text [msgcat::mc {Error}]
    ttk::checkbutton $f.error -text [msgcat::mc {Show}] \
	-variable pap(error)
    ttk::checkbutton $f.errorcap -text [msgcat::mc {Cap}] \
	-variable pap(error,cap)
    ColorMenuButton $f.errorcolor pap error,color {}
    ttk::menubutton $f.errorwidth -textvariable pap(error,width) \
	-menu $f.errorwidth.menu
    WidthDashMenu $f.errorwidth.menu pap width dash {} {}
    grid $f.errortitle $f.error $f.errorcap $f.errorcolor $f.errorwidth \
	-padx 2 -pady 2 -sticky w

    pack $w.plot.grid $w.plot.axis $w.plot.dataset \
	-side top -fill both -expand true
}

proc ProcessPlotCmd {xarname iname buf fn} {
    upvar $xarname xar
    upvar $iname i
    global iap

    set ref [lindex $iap(windows) end]
    global cvarname
    set cvarname $ref
    global parse
    set parse(buf) $buf
    set parse(fn) $fn
    set parse(tt) $iap(tt)

    plot::YY_FLUSH_BUFFER
    plot::yy_scan_string [lrange $xar $i end]
    plot::yyparse
    incr i [expr $plot::yycnt-1]
}

proc PlotCmdCheck {} {
    global cvarname
    upvar #0 $cvarname cvar

    if {![info exists cvar(top)]} {
	Error "[msgcat::mc {Unable to find plot window}] $cvarname"
	return 0
    }
    if {![winfo exists $cvar(top)]} {
	Error "[msgcat::mc {Unable to find plot window}] $cvarname"
	return 0
    }
    return 1
}

proc PlotCmdRef {ref} {
    global iap
    global cvarname

    # look for reference in current list
    if {[lsearch $iap(windows) $ref] < 0} {
	Error "[msgcat::mc {Unable to find plot window}] $ref"
	return 0
    }

    set cvarname $ref
    return [PlotCmdCheck]
}

proc PlotCmdNew {name} {
    global parse

    if {$name != {}} {
	set parse(tt) $name
    }

    if {$parse(buf) != {}} {
	return
    } elseif {$parse(fn) != {}} {
	if {[file exists $parse(fn)]} {
	    set ch [open $parse(fn) r]
	    set parse(buf) [read $ch]
	    close $ch
	    return
	}
    }
    set parse(buf) {}
}

proc PlotCmdLine {title xaxis yaxis dim} {
    global parse
    PlotLine $parse(tt) {} $title $xaxis $yaxis $dim $parse(buf)
}

proc PlotCmdBar {title xaxis yaxis dim} {
    global parse
    PlotBar $parse(tt) {} $title $xaxis $yaxis $dim $parse(buf)
}

proc PlotCmdScatter {title xaxis yaxis dim} {
    global parse
    PlotScatter $parse(tt) {} $title $xaxis $yaxis $dim $parse(buf)
}

proc PlotCmdAnalysisPlotStdin {which} {
    global parse
    AnalysisPlotStdin $which $parse(tt) {} $parse(buf)
}

proc PlotCmdData {dim} {
    global parse
    global cvarname
    upvar #0 $cvarname cvar

    if {$parse(buf) == {}} {
	if {$parse(fn) != {}} {
	    if {[file exists $parse(fn)]} {
		set ch [open $parse(fn) r]
		set parse(buf) [read $ch]
		close $ch
	    }
	}
	if {$parse(buf) == {}} {
	    Error "[msgcat::mc {Unable to load plot data}] $fn"
	}
    }
    
    PlotRaise $cvarname
    PlotDataSet $cvarname $dim $parse(buf)
    $cvar(proc,updategraph) $cvarname
    PlotStats $cvarname
    PlotList $cvarname
}

proc PlotCmdLoad {fn dim} {
    global cvarname
    
    if {$fn != {}} {
	PlotLoadDataFile $cvarname $fn $dim
	FileLast apdatafbox $fn
    }
}

proc PlotCmdSave {fn} {
    global cvarname
    
    if {$fn != {}} {
	PlotSaveDataFile $cvarname $fn
	FileLast apdatafbox $fn
    }
}

proc PlotCmdLoadConfig {fn} {
    global cvarname
    
    if {$fn != {}} {
	PlotLoadConfigFile $cvarname $fn
	FileLast apconfigfbox $fn
    }
}

proc PlotCmdSaveConfig {fn} {
    global cvarname
    
    if {$fn != {}} {
	PlotSaveConfigFile $cvarname $fn
	FileLast apconfigfbox $fn
    }
}

proc PlotCmdSet {which value {cmd {}}} {
    global cvarname
    upvar #0 $cvarname cvar

    set cvar($which) $value
    if {$cmd != {}} {
	eval $cmd $cvarname
    }
}

proc PlotCmdPrint {} {
    global cvarname

    PlotPostScript $cvarname
}

proc PlotCmdUpdateGraph {which value} {
    global cvarname
    upvar #0 $cvarname cvar

    set cvar($which) $value
    $cvar(proc,updategraph) $cvarname
}

proc PlotCmdUpdateElement {which value} {
    global cvarname
    upvar #0 $cvarname cvar

    set cvar($which) $value
    $cvar(proc,updateelement) $cvarname
}

proc PlotCmdFontStyle {which value} {
    global cvarname
    upvar #0 $cvarname cvar

    switch $value {
	normal {
	    set cvar($which,weight) normal
	    set cvar($which,slant) roman
	}
	bold {
	    set cvar($which,weight) bold
	    set cvar($which,slant) roman
	}
	italic {
	    set cvar($which,weight) normal
	    set cvar($which,slant) italic
	}
    }

    $cvar(proc,updategraph) $cvarname
}

proc PlotCmdSelect {value} {
    global cvarname
    upvar #0 $cvarname cvar

    set cvar(data,current) $value
    PlotCurrentData $cvarname
}

# File Menu
proc ProcessPlotPrint {varname xarname iname} {
    upvar #0 $varname var
    global $varname

    upvar 2 $xarname xar
    upvar 2 $iname i

    global ps
    global current

    switch -- [string tolower [lindex $xar $i]] {
	destination {incr i; set ps(dest) [lindex $xar $i]}
	command {incr i; set ps(cmd) [lindex $xar $i]}
	filename {incr i; set ps(filename) [lindex $xar $i] }
	palette -
	color {incr i; set ps(color) [lindex $xar $i] }

	{} {PlotPostScript $varname}
	default {incr i -1; PlotPostScript $varname}
    }
}

proc ProcessPlotPageSetup {varname xarname iname} {
    upvar #0 $varname var
    global $varname

    upvar 2 $xarname xar
    upvar 2 $iname i

    global ps

    switch -- [string tolower [lindex $xar $i]] {
	orientation -
	orient {incr i; set ps(orient) [lindex $xar $i]}
	pagesize -
	size {incr i; set ps(size) [lindex $xar $i] }
    }
}

# Graph Menu
proc ProcessPlotAxis {varname xarname iname} {
    upvar #0 $varname var
    global $varname

    upvar 2 $xarname xar
    upvar 2 $iname i

    switch -- [string tolower [lindex $xar $i]] {
	x {
	    incr i
	    switch -- [string tolower [lindex $xar $i]] {
		grid {incr i; set var(axis,x,grid) [FromYesNo [lindex $xar $i]]}
		log {incr i; set var(axis,x,log) [FromYesNo [lindex $xar $i]]}
		flip {incr i; set var(axis,x,flip) [FromYesNo [lindex $xar $i]]}
		auto {incr i; set var(axis,x,auto) [FromYesNo [lindex $xar $i]]}
		min {incr i; set var(axis,x,min) [lindex $xar $i]}
		max {incr i; set var(axis,x,max) [lindex $xar $i]}
		format {incr i; set var(axis,x,format) [lindex $xar $i]}
	    }
	}
	y {
	    incr i
	    switch -- [string tolower [lindex $xar $i]] {
		grid {incr i; set var(axis,y,grid) [FromYesNo [lindex $xar $i]]}
		log {incr i; set var(axis,y,log) [FromYesNo [lindex $xar $i]]}
		flip {incr i; set var(axis,y,flip) [FromYesNo [lindex $xar $i]]}
		auto {incr i; set var(axis,y,auto) [FromYesNo [lindex $xar $i]]}
		min {incr i; set var(axis,y,min) [lindex $xar $i]}
		max {incr i; set var(axis,y,max) [lindex $xar $i]}
		format {incr i; set var(axis,y,format) [lindex $xar $i]}
	    }
	}
    }

    $var(proc,updategraph) $varname
}

proc ProcessPlotLegend  {varname xarname iname} {
    upvar #0 $varname var
    global $varname

    upvar 2 $xarname xar
    upvar 2 $iname i

    switch -- [string tolower [lindex $xar $i]] {
	position {incr i; set var(legend,position) [lindex $xar $i]}
	default {set var(legend) [FromYesNo [lindex $xar $i]]}
    }

    $var(proc,updategraph) $varname
}

proc ProcessPlotFont  {varname xarname iname} {
    upvar #0 $varname var
    global $varname

    upvar 2 $xarname xar
    upvar 2 $iname i

    switch -- [string tolower [lindex $xar $i]] {
	title {
	    incr i
	    switch -- [string tolower [lindex $xar $i]] {
		family -
		font {incr i; set var(graph,title,family) [lindex $xar $i]}
		size {incr i; set var(graph,title,size) [lindex $xar $i]}
		weight {incr i; set var(graph,title,weight) [lindex $xar $i]}
		slant {incr i; set var(graph,title,slant) [lindex $xar $i]}
		style {
		    # backward compatibility
		    incr i
		    switch [string tolower [lindex $xar $i]] {
			normal {
			    set var(graph,title,weight) normal
			    set var(graph,title,slant) roman
			}
			bold {
			    set var(graph,title,weight) bold
			    set var(graph,title,slant) roman
			}
			italic {
			    set var(graph,title,weight) normal
			    set var(graph,title,slant) italic
			}
		    }
		}
	    }
	}
	axestitle -
	labels {
	    incr i
	    switch -- [string tolower [lindex $xar $i]] {
		family -
		font {incr i; set var(axis,title,family) [lindex $xar $i]}
		size {incr i; set var(axis,title,size) [lindex $xar $i]}
		weight {incr i; set var(axis,title,weight) [lindex $xar $i]}
		slant {incr i; set var(axis,title,slant) [lindex $xar $i]}
		style {
		    # backward compatibility
		    incr i
		    switch [string tolower [lindex $xar $i]] {
			normal {
			    set var(axis,title,weight) normal
			    set var(axis,title,slant) roman
			}
			bold {
			    set var(axis,title,weight) bold
			    set var(axis,title,slant) roman
			}
			italic {
			    set var(axis,title,weight) normal
			    set var(axis,title,slant) italic
			}
		    }
		}
	    }
	}
	axesnumbers -
	numbers {
	    incr i
	    switch -- [string tolower [lindex $xar $i]] {
		family -
		font {incr i; set var(axis,font,family) [lindex $xar $i]}
		size {incr i; set var(axis,font,size) [lindex $xar $i]}
		weight {incr i; set var(axis,font,weight) [lindex $xar $i]}
		slant {incr i; set var(axis,font,slant) [lindex $xar $i]}
		style {
		    # backward compatibility
		    incr i
		    switch [string tolower [lindex $xar $i]] {
			normal {
			    set var(axis,font,weight) normal
			    set var(axis,font,slant) roman
			}
			bold {
			    set var(axis,font,weight) bold
			    set var(axis,font,slant) roman
			}
			italic {
			    set var(axis,font,weight) normal
			    set var(axis,font,slant) italic
			}
		    }
		}
	    }
	}
	legendtitle {
	    incr i
	    switch -- [string tolower [lindex $xar $i]] {
		family -
		font {incr i; set var(legend,title,family) [lindex $xar $i]}
		size {incr i; set var(legend,title,size) [lindex $xar $i]}
		weight {incr i; set var(legend,title,weight) [lindex $xar $i]}
		slant {incr i; set var(legend,title,slant) [lindex $xar $i]}
		style {
		    # backward compatibility
		    incr i
		    switch [string tolower [lindex $xar $i]] {
			normal {
			    set var(legend,title,weight) normal
			    set var(legend,title,slant) roman
			}
			bold {
			    set var(legend,title,weight) bold
			    set var(legend,title,slant) roman
			}
			italic {
			    set var(legend,title,weight) normal
			    set var(legend,title,slant) italic
			}
		    }
		}
	    }
	}
	legend {
	    incr i
	    switch -- [string tolower [lindex $xar $i]] {
		family -
		font {incr i; set var(legend,font,family) [lindex $xar $i]}
		size {incr i; set var(legend,font,size) [lindex $xar $i]}
		weight {incr i; set var(legend,font,weight) [lindex $xar $i]}
		slant {incr i; set var(legend,font,slant) [lindex $xar $i]}
		style {
		    # backward compatibility
		    incr i
		    switch [string tolower [lindex $xar $i]] {
			normal {
			    set var(legend,font,weight) normal
			    set var(legend,font,slant) roman
			}
			bold {
			    set var(legend,font,weight) bold
			    set var(legend,font,slant) roman
			}
			italic {
			    set var(legend,font,weight) normal
			    set var(legend,font,slant) italic
			}
		    }
		}
	    }
	}
    }

    $var(proc,updategraph) $varname
}

proc ProcessPlotTitle {varname xarname iname} {
    upvar #0 $varname var
    global $varname

    upvar 2 $xarname xar
    upvar 2 $iname i

    switch -- [string tolower [lindex $xar $i]] {
	x -
	xaxis {incr i; set var(axis,x,title) [lindex $xar $i]}
	y -
	yaxis {incr i; set var(axis,y,title) [lindex $xar $i]}
	legend {incr i; set var(legend,title) [lindex $xar $i]}
	default {set var(graph,title) [lindex $xar $i]}
    }

    $var(proc,updategraph) $varname
}

proc ProcessPlotErrorBar {varname xarname iname} {
    upvar #0 $varname var
    global $varname

    upvar 2 $xarname xar
    upvar 2 $iname i

    switch -- [string tolower [lindex $xar $i]] {
	cap {incr i; set var(error,cap) [FromYesNo [lindex $xar $i]]}
	color {incr i; set var(error,color) [lindex $xar $i]}
	width {incr i; set var(error,width) [lindex $xar $i]}
	default {set var(error) [FromYesNo [lindex $xar $i]]}
    }

    $var(proc,updateelement) $varname
}

# Dataset Menu
proc ProcessPlotShape {varname xarname iname} {
    upvar #0 $varname var
    global $varname

    upvar 2 $xarname xar
    upvar 2 $iname i

    switch -- [string tolower [lindex $xar $i]] {
	fill {incr i; set var(shape,fill) [FromYesNo [lindex $xar $i]]}
	color {incr i; set var(shape,color) [lindex $xar $i]}
	default {set var(shape,symbol) [lindex $xar $i]}
    }

    $var(proc,updateelement) $varname
}

proc ProcessPlotColor  {varname xarname iname} {
    upvar #0 $varname var
    global $varname

    upvar 2 $xarname xar
    upvar 2 $iname i

    switch -- [string tolower [lindex $xar $i]] {
	discrete -
	line -
	linear -
	step -
	quadratic -
	bar {
	    # backward compatibility
	    incr i
	    set var(color) [lindex $xar $i]
	}
	error -
	errorbar {
	    # backward compatibility
	    incr i
	    set var(error,color) [lindex $xar $i]
	}
	default {
	    # Dataset Menu
	    set var(color) [lindex $xar $i]
	}
    }

    $var(proc,updateelement) $varname
}

# backward compatibility
proc ProcessPlotGraph  {varname xarname iname} {
    upvar #0 $varname var
    global $varname

    upvar 2 $xarname xar
    upvar 2 $iname i

    switch -- [string tolower [lindex $xar $i]] {
	grid {
	    incr i; 
	    switch -- [string tolower [lindex $xar $i]] {
		x {incr i; set var(axis,x,grid) [FromYesNo [lindex $xar $i]]}
		y {incr i; set var(axis,y,grid) [FromYesNo [lindex $xar $i]]}
		default {
		    # backward compatibility
		    set var(axis,y,grid) [FromYesNo [lindex $xar $i]]
		    set var(axis,x,grid) [FromYesNo [lindex $xar $i]]
		}
	    }
	}
	log {
	    incr i; 
	    switch -- [string tolower [lindex $xar $i]] {
		x {incr i; set var(axis,x,log) [FromYesNo [lindex $xar $i]]}
		y {incr i; set var(axis,y,log) [FromYesNo [lindex $xar $i]]}
	    }
	}
	flip {
	    incr i; 
	    switch -- [string tolower [lindex $xar $i]] {
		x {incr i; set var(axis,x,flip) [FromYesNo [lindex $xar $i]]}
		y {incr i; set var(axis,y,flip) [FromYesNo [lindex $xar $i]]}
	    }
	}
	format {
	    incr i
	    switch -- [string tolower [lindex $xar $i]] {
		x {incr i; set var(axis,x,format) [lindex $xar $i]}
		y {incr i; set var(axis,y,format) [lindex $xar $i]}
	    }
	}
	range {
	    incr i
	    switch -- [string tolower [lindex $xar $i]] {
		x {
		    incr i
		    switch -- [string tolower [lindex $xar $i]] {
			auto {
			    incr i
			    set var(axis,x,auto) [FromYesNo [lindex $xar $i]]
			}
			min {incr i; set var(axis,x,min) [lindex $xar $i]}
			max {incr i; set var(axis,x,max) [lindex $xar $i]}
		    }
		}
		y {
		    incr i
		    switch -- [string tolower [lindex $xar $i]] {
			auto {
			    incr i
			    set var(axis,y,auto) [FromYesNo [lindex $xar $i]]
			}
			min {incr i; set var(axis,y,min) [lindex $xar $i]}
			max {incr i; set var(axis,y,max) [lindex $xar $i]}
		    }
		}
	    }
	}
	labels {
	    incr i
	    switch -- [string tolower [lindex $xar $i]] {
		title {incr i; set var(graph,title) [lindex $xar $i]}
		xaxis {incr i; set var(axis,x,title) [lindex $xar $i]}
		yaxis {incr i; set var(axis,y,title) [lindex $xar $i]}
		legend {incr i; set var(legend,title) [lindex $xar $i]}
	    }
	}
	type {
	    # backward compatibility
	    incr i
	    switch -- [string tolower [lindex $xar $i]] {
		line -
		bar {}
	    }
	}
	scale {
	    # backward compatibility
	    incr i
	    switch -- [string tolower [lindex $xar $i]] {
		linearlinear {
		    set var(axis,x,log) 0
		    set var(axis,y,log) 0
		}
		linearlog {
		    set var(axis,x,log) 0
		    set var(axis,y,log) 1
		}
		loglinear {
		    set var(axis,x,log) 1
		    set var(axis,y,log) 0
		}
		loglog {
		    set var(axis,x,log) 1
		    set var(axis,y,log) 1
		}
	    }
	}
    }

    $var(proc,updategraph) $varname
}

# backward compatibility
proc ProcessPlotView  {varname xarname iname} {
    upvar #0 $varname var
    global $varname

    upvar 2 $xarname xar
    upvar 2 $iname i

    switch -- [string tolower [lindex $xar $i]] {
	discrete {
	    incr i
	    set var(show) [FromYesNo [lindex $xar $i]]
	}
	line -
	linear {
	    incr i
	    if {[FromYesNo [lindex $xar $i]]} {
		set var(show) 1
		set var(smooth) linear
	    }
	}
	step {
	    incr i
	    if {[FromYesNo [lindex $xar $i]]} {
		set var(show) 1
		set var(smooth) step
	    }
	}
	quadratic {
	    incr i
	    if {[FromYesNo [lindex $xar $i]]} {
		set var(show) 1
		set var(smooth) quadratic
	    }
	}
	error -
	errorbar {
	    incr i
	    set var(error) [FromYesNo [lindex $xar $i]]
	}
    }

    $var(proc,updateelement) $varname
}

# backward compatibility
proc ProcessPlotLine  {varname xarname iname} {
    upvar #0 $varname var
    global $varname

    upvar 2 $xarname xar
    upvar 2 $iname i

    switch -- [string tolower [lindex $xar $i]] {
	discrete {
	    incr i
	    set var(shape,symbol) [lindex $xar $i]
	}
	line -
	linear -
	step -
	quadratic -
	error -
	errorbar {
	    incr i
	    switch -- [string tolower [lindex $xar $i]] {
		width {
		    incr i
		    set var(width) [lindex $xar $i]
		}
		dash {
		    incr i
		    set var(dash) [FromYesNo [lindex $xar $i]]
		}
		style {
		    incr i
		    set var(error) 1
		}
	    }
	}
    }

    $var(proc,updateelement) $varname
}

proc ProcessSendPlotCmd {proc id param {sock {}} {fn {}}} {
    global iap

    set i 0

    # determine which plot
    switch -- [string tolower [lindex $param $i]] {
	{} -
	stats -
	statistics -
	list -
	mode -
	axis -
	legend -
	font -
	title -
	barmode -
	show -
	color -
	error -
	errorbar -
	name -
	shape -
	relief -
	smooth -
	width -
	dash -
	dataset -
	select {
	    set varname [lindex $iap(windows) end]
	    set idd [lsearch $iap(windows) $varname]
	}

	default {
	    set varname [lindex $param $i]
	    set idd [lsearch $iap(windows) $varname]
	    incr i
	}
    }

    # we better have a tt by now
    if {$idd == -1} {
	Error "[msgcat::mc {Unable to find plot window}] $varname"
	return
    }

    upvar #0 $varname var
    global $varname

    # now, process plot command
    switch -- [string tolower [lindex $param $i]] {
	{} {$proc $id "$iap(windows)\n"}
	stats -
	statistics {$proc $id "[PlotStatsGenerate $varname]"}
	list {$proc $id "[PlotListGenerate $varname]"}
	mode {$proc $id "$var(mode)\n"}
	axis {
	    incr i
	    switch -- [string tolower [lindex $param $i]] {
		x {
		    incr i
		    switch -- [string tolower [lindex $param $i]] {
			grid {$proc $id [ToYesNo $var(axis,x,grid)]} 
			log {$proc $id [ToYesNo $var(axis,x,log)]} 
			flip {$proc $id [ToYesNo $var(axis,x,flip)]} 
			auto {$proc $id [ToYesNo $var(axis,x,auto)]} 
			min {$proc $id "$var(axis,x,min)\n"}
			max {$proc $id "$var(axis,x,max)\n"}
			format {$proc $id "$var(axis,x,format)\n"}
		    }
		}
		y {
		    incr i
		    switch -- [string tolower [lindex $param $i]] {
			grid {$proc $id [ToYesNo $var(axis,y,grid)]} 
			log {$proc $id [ToYesNo $var(axis,y,log)]} 
			flip {$proc $id [ToYesNo $var(axis,y,flip)]} 
			auto {$proc $id [ToYesNo $var(axis,y,auto)]} 
			min {$proc $id "$var(axis,y,min)\n"}
			max {$proc $id "$var(axis,y,max)\n"}
			format {$proc $id "$var(axis,y,format)\n"}
		    }
		}
	    }
	}
	legend {
	    incr i
	    switch -- [string tolower [lindex $param $i]] {
		position {$proc $id "$var(legend,position)\n"}
		default {$proc $id [ToYesNo $var(legend)]} 
	    }
	}
	font {
	    incr i
	    switch -- [string tolower [lindex $param $i]] {
		title {
		    incr i
		    switch -- [string tolower [lindex $param $i]] {
			family -
			font {$proc $id "$var(graph,title,family)\n"}
			size {$proc $id "$var(graph,title,size)\n"}
			weight {$proc $id "$var(graph,title,weight)\n"}
			slant {$proc $id "$var(graph,title,slant)\n"}
			style {
			    # backward compatibility
			    $proc $id "$var(graph,title,weight)\n"
			}
		    }
		}
		axestitle -
		labels {
		    incr i
		    switch -- [string tolower [lindex $param $i]] {
			family -
			font {$proc $id "$var(axis,title,family)\n"}
			size {$proc $id "$var(axis,title,size)\n"}
			weight {$proc $id "$var(axis,title,weight)\n"}
			slant {$proc $id "$var(axis,title,slant)\n"}
			style {
			    # backward compatibility
			    $proc $id "$var(axis,title,weight)\n"
			}
		    }
		}
		axesnumbers -
		numbers {
		    incr i
		    switch -- [string tolower [lindex $param $i]] {
			family -
			font {$proc $id "$var(axis,font,family)\n"}
			size {$proc $id "$var(axis,font,size)\n"}
			weight {$proc $id "$var(axis,font,weight)\n"}
			slant {$proc $id "$var(axis,font,slant)\n"}
			style {
			    # backward compatibility
			    $proc $id "$var(axis,font,weight)\n"
			}
		    }
		}
		legendtitle {
		    incr i
		    switch -- [string tolower [lindex $param $i]] {
			family -
			font {$proc $id "$var(legend,title,family)\n"}
			size {$proc $id "$var(legend,title,size)\n"}
			weight {$proc $id "$var(legend,title,weight)\n"}
			slant {$proc $id "$var(legend,title,slant)\n"}
			style {
			    # backward compatibility
			    $proc $id "$var(legend,title,weight)\n"
			}
		    }
		}
		legend {
		    incr i
		    switch -- [string tolower [lindex $param $i]] {
			family -
			font {$proc $id "$var(legend,font,family)\n"}
			size {$proc $id "$var(legend,font,size)\n"}
			weight {$proc $id "$var(legend,font,weight)\n"}
			slant {$proc $id "$var(legend,font,slant)\n"}
			style {
			    # backward compatibility
			    $proc $id "$var(legend,font,weight)\n"
			}
		    }
		}
	    }
	}
	title {
	    incr i
	    switch -- [string tolower [lindex $param $i]] {
		x -
		xaxis {$proc $id "$var(axis,x,title)\n"}
		y -
		yaxis {$proc $id "$var(axis,y,title)\n"}
		legend {$proc $id "$var(legend,title)\n"}
		default {$proc $id "$var(graph,title)\n"}
	    }
	}
	barmode {$proc $id "$var(bar,mode)\n"}

	show {$proc $id [ToYesNo $var(show)]} 
	color {$proc $id "$var(color)\n"}
	fill {$proc $id [ToYesNo $var(fill)]}
	fillcolor {$proc $id "$var(fill,color)\n"}
	error -
	errorbar {
	    incr i
	    switch -- [string tolower [lindex $param $i]] {
		cap {$proc $id [ToYesNo $var(error,cap)]} 
		color {$proc $id "$var(error,color)\n"}
		width {$proc $id "$var(error,width)\n"}
		default {$proc $id [ToYesNo $var(error)]} 
	    }
	}
	name {$proc $id "$var(name)\n"}
	shape {
	    incr i
	    switch -- [string tolower [lindex $param $i]] {
		fill {$proc $id [ToYesNo $var(shape,fill)]} 
		color {$proc $id "$var(shape,color)\n"}
		default {$proc $id "$var(shape,symbol)\n"}
	    }
	}
	relief {$proc $id "$var(bar,relief)\n"}
	smooth {$proc $id "$var(smooth)\n"}
	width {$proc $id "$var(width)\n"}
	dash {$proc $id [ToYesNo $var(dash)]} 
	dataset -
	select {$proc $id "$var(data,current)\n"}
    }
}
