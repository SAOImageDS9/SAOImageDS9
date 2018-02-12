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
    set varname $iap(tt)
    set id 0

    # check for next command line option
    if {[string range [lindex $xar $i] 0 0] != {-}} {

	# determine which plot
	switch -- [string tolower [lindex $xar $i]] {
	    {} -
	    bar -
	    scatter -
	    new {}

	    data -
	    load -
	    save -
	    clear -
	    dup -
	    duplicate -
	    stats -
	    statistics -
	    list -
	    loadconfig -
	    saveconfig -
	    page -
	    pagesetup -
	    print -
	    close -

	    mode -
	    axis -
	    legend -
	    font -
	    title -
	    show -
	    color -
	    fill -
	    fillcolor -
	    error -
	    errorbar -
	    barmode -
	    name -
	    shape -
	    relief -
	    smooth -
	    width -
	    dash -
	    dataset -
	    select -

	    graph -
	    line -
	    view {
		set varname [lindex $iap(windows) end]
		set id [lsearch $iap(windows) $varname]
	    }

	    default {
		set varname [lindex $xar $i]
		set id [lsearch $iap(windows) $varname]
		incr i
	    }
	}
    }

    # we better have a tt by now
    if {$id == -1} {
	Error "[msgcat::mc {Unable to find plot window}] $varname"
	return
    }

    upvar #0 $varname var
    global $varname

    # check for next command line option
    if {[string range [lindex $xar $i] 0 0] != {-}} {

	# now, process plot command
	switch -- [string tolower [lindex $xar $i]] {
	    {} -
	    bar -
	    scatter {
		if {$buf != {}} {
		    ProcessPlotNew $varname $xarname $iname $buf
		} elseif {$fn != {}} {
		    if {[file exists $fn]} {
			set ch [open $fn r]
			set txt [read $ch]
			close $ch
			ProcessPlotNew $varname $xarname $iname $txt
		    }
		} else {
		    ProcessPlotNew $varname $xarname $iname {}
		}
	    }
	    new {
		incr i
		switch -- [lindex $xar $i] {
		    name {
			set varname [lindex $xar [expr $i+1]]
			incr i 2
		    }
		}
		if {$buf != {}} {
		    ProcessPlotNew $varname $xarname $iname $buf
		} elseif {$fn != {}} {
		    if {[file exists $fn]} {
			set ch [open $fn r]
			set txt [read $ch]
			close $ch
			ProcessPlotNew $varname $xarname $iname $txt
		    }
		} else {
		    ProcessPlotNew $varname $xarname $iname {}
		}
	    }
	    data {
		incr i
		if {$buf != {}} {
		    ProcessPlotData $varname $xarname $iname $buf
		} elseif {$fn != {}} {
		    if {[file exists $fn]} {
			set ch [open $fn r]
			set txt [read $ch]
			close $ch
			ProcessPlotData $varname $xarname $iname $txt
		    }
		}
	    }

	    load {
		# File Menu
		set ff [lindex $xar [expr $i+1]]
		set dim [lindex $xar [expr $i+2]]
		incr i 2
		PlotLoadDataFile $varname $ff $dim
		FileLast apdatafbox $ff
	    }
	    save {
		# File Menu
		incr i
		set ff [lindex $xar $i]
		PlotSaveDataFile $varname $ff
		FileLast apdatafbox $ff
	    }
	    clear {
		# File Menu
		PlotClearData $varname
	    }
	    dup -
	    duplicate {
		# File Menu
		incr i
		set mm [lindex $xar $i]
		if {$mm == {}} {
		    set mm 1
		} elseif {![string is integer $mm]} {
		    set mm 1
		    incr i -1
		}
		PlotDupData $varname $mm
	    }
	    stats -
	    statistics {
		# File Menu
		set var(stats) 1
		PlotStats $varname
	    }
	    list {
		# File Menu
		set var(list) 1
		PlotList $varname
	    }
	    loadconfig {
		# File Menu
		incr i
		set ff [lindex $xar $i]
		PlotLoadConfigFile $varname $ff
		FileLast apconfigfbox $ff
	    }
	    saveconfig {
		# File Menu
		incr i
		set ff [lindex $xar $i]
		PlotSaveConfigFile $varname $ff
		FileLast apconfigfbox $ff
	    }
	    page -
	    pagesetup {
		# File Menu
		incr i
		ProcessPlotPageSetup $varname $xarname $iname
	    }
	    print {
		# File Menu
		incr i
		ProcessPlotPrint $varname $xarname $iname
	    }
	    close {
		# File Menu
		PlotDestroy $varname
	    }

	    mode {
		# Edit Menu
		incr i
		set var(mode) [lindex $xar $i]
		PlotChangeMode $varname
	    }

	    axis {
		# Graph Menu
		incr i
		ProcessPlotAxis $varname $xarname $iname
	    }
	    legend {
		# Graph Menu
		incr i
		ProcessPlotLegend $varname $xarname $iname
	    }
	    font {
		# Graph Menu
		incr i
		ProcessPlotFont $varname $xarname $iname
	    }
	    title {
		# Graph Menu
		incr i
		ProcessPlotTitle $varname $xarname $iname
	    }
	    barmode {
		incr i
		set var(bar,mode) [lindex $xar $i]
		$var(proc,updategraph) $varname
	    }

	    show {
		# Dataset Menu
		incr i
		set var(show) [FromYesNo [lindex $xar $i]]
		$var(proc,updateelement) $varname
	    }
	    color {
		incr i
		ProcessPlotColor $varname $xarname $iname
	    }
	    fill {
		incr i
		set var(fill) [FromYesNo [lindex $xar $i]]
		$var(proc,updateelement) $varname
	    }
	    fillcolor {
		incr i
		set var(fill,color) [lindex $xar $i]
		$var(proc,updateelement) $varname
	    }
	    error -
	    errorbar {
		# Dataset Menu
		incr i
		ProcessPlotErrorBar $varname $xarname $iname
	    }
	    name {
		# Dataset Menu
		incr i
		set var(name) [lindex $xar $i]
		$var(proc,updateelement) $varname
	    }
	    shape {
		# Dataset Line Menu
		incr i
		ProcessPlotShape $varname $xarname $iname
	    }
	    relief {
		# Dataset Bar Menu
		incr i
		set var(bar,relief) [lindex $xar $i]
		$var(proc,updateelement) $varname
	    }
	    smooth {
		# Dataset Line Menu
		incr i
		set var(smooth) [lindex $xar $i]
		$var(proc,updateelement) $varname
	    }
	    width {
		# Dataset Line Menu
		incr i
		set var(width) [lindex $xar $i]
		$var(proc,updateelement) $varname
	    }
	    dash {
		# Dataset Line Menu
		incr i
		set var(dash) [FromYesNo [lindex $xar $i]]
		$var(proc,updateelement) $varname
	    }

	    dataset -
	    select {
		# Select Menu
		incr i
		set var(data,current) [lindex $xar $i]
		PlotCurrentData $varname
	    }

	    graph {
		# backward compatibility
		incr i
		ProcessPlotGraph $varname $xarname $iname
	    }
	    line {
		# backward compatibility
		incr i
		ProcessPlotLine $varname $xarname $iname
	    }
	    view {
		# backward compatibility
		incr i
		ProcessPlotView $varname $xarname $iname
	    }
	}
    } else {
	ProcessPlotNew $varname $xarname $iname {}
    }

    # force update
    update idletasks
}

proc ProcessPlotNew {varname xarname iname buf} {
    upvar #0 $varname var
    global $varname

    upvar 2 $xarname xar
    upvar 2 $iname i

    # check for next command line option
    if {[string range [lindex $xar $i] 0 0] != {-}} {
	switch -- [string tolower [lindex $xar $i]] {
	    line {incr i; ProcessPlotNewOne line $varname $xarname $iname $buf}
	    bar {incr i;ProcessPlotNewOne bar $varname $xarname $iname $buf}
	    scatter {
		incr i
		ProcessPlotNewOne scatter $varname $xarname $iname $buf
	    }
	    default {ProcessPlotNewOne line $varname $xarname $iname $buf}
	}
    } else {
	PlotLine $varname {} {} {} {} xy $buf
	incr i -1
    }
}

proc ProcessPlotNewOne {which varname xarname iname buf} {
    upvar #0 $varname var
    global $varname

    upvar 3 $xarname xar
    upvar 3 $iname i

    if {[string range [lindex $xar $i] 0 0] != {-}} {
	switch -- [string tolower [lindex $xar $i]] {
	    stdin {incr i; AnalysisPlotStdin $which $varname {} $buf}
	    {} {
		switch $which {
		    line {PlotLine $varname {} {} {} {} xy $buf}
		    bar {PlotBar $varname {} {} {} {} xy $buf}
		    scatter {PlotScatter $varname {} {} {} {} xy $buf}
		}
	    }
	    default {
		switch $which {
		    line {
			PlotLine $varname {} \
			    [lindex $xar $i] \
			    [lindex $xar [expr $i+1]] \
			    [lindex $xar [expr $i+2]] \
			    [lindex $xar [expr $i+3]] \
			    $buf
		    }
		    bar {
			PlotBar $varname {} \
			    [lindex $xar $i] \
			    [lindex $xar [expr $i+1]] \
			    [lindex $xar [expr $i+2]] \
			    [lindex $xar [expr $i+3]] \
			    $buf
		    }
		    scatter {
			PlotScatter $varname {} \
			    [lindex $xar $i] \
			    [lindex $xar [expr $i+1]] \
			    [lindex $xar [expr $i+2]] \
			    [lindex $xar [expr $i+3]] \
			    $buf
		    }
		}
		incr i 3
	    }
	}
    } else {
	switch $which {
	    line {PlotLine $varname {} {} {} {} xy $buf}
	    bar {PlotBar $varname {} {} {} {} xy $buf}
	    scatter {PlotScatter $varname {} {} {} {} xy $buf}
	}
	incr i -1
    }
}

proc ProcessPlotData {varname xarname iname buf} {
    upvar #0 $varname var
    global $varname

    upvar 2 $xarname xar
    upvar 2 $iname i

    PlotRaise $varname
    PlotDataSet $varname [lindex $xar $i] $buf
    $var(proc,updategraph) $varname
    PlotStats $varname
    PlotList $varname
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

proc ProcessSendPlotCmd {proc id param} {
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
