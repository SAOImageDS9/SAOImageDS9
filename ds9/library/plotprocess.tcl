#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc PrefsDialogPlot {} {
    global dprefs

    set w $dprefs(tab)

    $dprefs(listbox) insert {} end -id [ttk::frame $w.plot] \
	-text [msgcat::mc {Plot}]

    # Canvas
    set f [ttk::labelframe $w.plot.graph -text [msgcat::mc {Canvas}]]

    ttk::label $f.tlayout -text [msgcat::mc {Layout}]
    ttk::menubutton $f.layout -textvariable pap(canvas,layout) \
	-menu $f.layout.menu

    ThemeMenu $f.layout.menu
    $f.layout.menu add radiobutton -label [msgcat::mc {Grid}] \
	-variable pap(canvas,layout) -value grid
    $f.layout.menu add radiobutton -label [msgcat::mc {Row}] \
	-variable pap(canvas,layout) -value row
    $f.layout.menu add radiobutton -label [msgcat::mc {Column}] \
	-variable pap(canvas,layout) -value column
    $f.layout.menu add separator
    $f.layout.menu add radiobutton -label [msgcat::mc {Strip}] \
	-variable pap(canvas,layout) -value strip

    ttk::label $f.tfg -text [msgcat::mc {Foreground}]
    ColorMenuButton $f.fg pap canvas,foreground {}
    ttk::label $f.tbg -text [msgcat::mc {Background}]
    ColorMenuButton $f.bg pap canvas,background {}
    ttk::label $f.tgrid -text [msgcat::mc {Grid}]
    ColorMenuButton $f.grid pap canvas,grid,color {}

    ttk::label $f.ttitle -text [msgcat::mc {Title}]
    FontMenuButton $f.title pap canvas,title,family \
	canvas,title,size canvas,title,weight \
	canvas,title,slant {}

    ttk::label $f.tlegendtitle -text [msgcat::mc {Legend Title}]
    FontMenuButton $f.legendtitle pap canvas,legend,title,family \
	canvas,legend,title,size canvas,legend,title,weight \
	canvas,legend,title,slant {}

    ttk::label $f.tlegend -text [msgcat::mc {Legend}]
    FontMenuButton $f.legend pap canvas,legend,font,family \
	canvas,legend,font,size canvas,legend,font,weight \
	canvas,legend,font,slant {}

    ttk::label $f.ttextlab -text [msgcat::mc {Axis Title}]
    FontMenuButton $f.textlab pap canvas,axis,title,family \
	canvas,axis,title,size canvas,axis,title,weight \
	canvas,axis,title,slant {}

    ttk::label $f.tnumlab -text [msgcat::mc {Axis Numbers}]
    FontMenuButton $f.numlab pap canvas,axis,font,family \
	canvas,axis,font,size canvas,axis,font,weight \
	canvas,axis,font,slant {}

    grid $f.tlayout $f.layout -padx 2 -pady 2 -sticky w
    grid $f.tfg $f.fg -padx 2 -pady 2 -sticky w
    grid $f.tbg $f.bg -padx 2 -pady 2 -sticky w
    grid $f.tgrid $f.grid -padx 2 -pady 2 -sticky w
    grid $f.ttitle $f.title -padx 2 -pady 2 -sticky w
    grid $f.tlegendtitle $f.legendtitle -padx 2 -pady 2 -sticky w
    grid $f.tlegend $f.legend -padx 2 -pady 2 -sticky w
    grid $f.ttextlab $f.textlab  -padx 2 -pady 2 -sticky w
    grid $f.tnumlab $f.numlab -padx 2 -pady 2 -sticky w
    
    # Graph
    set f [ttk::labelframe $w.plot.axis -text [msgcat::mc {Graph}]]

    ttk::checkbutton $f.legend -text [msgcat::mc {Show Legend}] \
	-variable pap(graph,legend)

    ttk::label $f.tlegendposition -text [msgcat::mc {Legend Position}]
    ttk::menubutton $f.legendposition -textvariable pap(graph,legend,position) \
	-menu $f.legendposition.menu

    ThemeMenu $f.legendposition.menu
    $f.legendposition.menu add radiobutton -label [msgcat::mc {Right}] \
	-variable pap(graph,legend,position) -value right
    $f.legendposition.menu add radiobutton -label [msgcat::mc {Left}] \
	-variable pap(graph,legend,position) -value left
    $f.legendposition.menu add radiobutton -label [msgcat::mc {Top}] \
	-variable pap(graph,legend,position) -value top
    $f.legendposition.menu add radiobutton -label [msgcat::mc {Bottom}] \
	-variable pap(graph,legend,position) -value bottom
    $f.legendposition.menu add radiobutton -label [msgcat::mc {Plot Area}] \
	-variable pap(graph,legend,position) -value plotarea

    ttk::label $f.xtitle -text [msgcat::mc {X Axis}]
    ttk::checkbutton $f.x -text [msgcat::mc {Grid}] \
	-variable pap(graph,axis,x,grid)
    ttk::radiobutton $f.xlinear -text [msgcat::mc {Linear}] \
	-variable pap(graph,axis,x,log) -value 0
    ttk::radiobutton $f.xlog -text [msgcat::mc {Log}] \
	-variable pap(graph,axis,x,log) -value 1

    ttk::label $f.ytitle -text [msgcat::mc {Y Axis}]
    ttk::checkbutton $f.y -text [msgcat::mc {Grid}] \
	-variable pap(graph,axis,y,grid)
    ttk::radiobutton $f.ylinear -text [msgcat::mc {Linear}] \
	-variable pap(graph,axis,y,log) -value 0
    ttk::radiobutton $f.ylog -text [msgcat::mc {Log}] \
	-variable pap(graph,axis,y,log) -value 1

    grid $f.legend -padx 2 -pady 2 -sticky w
    grid $f.tlegendposition $f.legendposition - -padx 2 -pady 2 -sticky w
    grid $f.xtitle $f.x $f.xlinear $f.xlog -padx 2 -pady 2 -sticky w
    grid $f.ytitle $f.y $f.ylinear $f.ylog -padx 2 -pady 2 -sticky w

    # Data
    set f [ttk::labelframe $w.plot.ds -text [msgcat::mc {Dataset}]]

    #  Show
    ttk::checkbutton $f.show -text [msgcat::mc {Show}] \
	-variable pap(graph,ds,show)
    grid $f.show -padx 2 -pady 2 -sticky w

    # Line
    set f [ttk::labelframe $w.plot.line -text [msgcat::mc {Line}]]

    ttk::label $f.tcolor -text [msgcat::mc {Color}]
    ColorMenuButton $f.color pap graph,ds,line,color {}

    ttk::label $f.twidth -text [msgcat::mc {Width}]
    ttk::menubutton $f.width -textvariable pap(graph,ds,line,width) \
	-menu $f.width.menu
    WidthDashMenu $f.width.menu pap graph,ds,line,width graph,ds,line,dash {} {}

    ttk::label $f.tshadow -text [msgcat::mc {Shadow}]
    ColorMenuButton $f.fillcolor pap graph,ds,line,fill,color {}
    ttk::checkbutton $f.fill -text [msgcat::mc {Fill}] \
	-variable pap(graph,ds,line,fill)

    ttk::label $f.tshape -text [msgcat::mc {Shape}]
    ttk::menubutton $f.shape -textvariable pap(graph,ds,line,shape,symbol) \
	-menu $f.shape.menu
    PlotLineShapeMenu $f.shape.menu pap(graph,ds,line,shape,symbol) {}
    ttk::label $f.tshapecolor -text [msgcat::mc {Color}]
    ColorMenuButton $f.shapecolor pap graph,ds,line,shape,color {}
    ttk::checkbutton $f.shapefill -text [msgcat::mc {Fill}] \
	-variable pap(graph,ds,line,shape,fill)

    ttk::label $f.tsmooth -text [msgcat::mc {Smooth}]
    ttk::menubutton $f.smooth -textvariable pap(graph,ds,line,smooth) \
	-menu $f.smooth.menu
    PlotLineSmoothMenu $f.smooth.menu pap(graph,ds,line,smooth) {}

    grid $f.tcolor $f.color -padx 2 -pady 2 -sticky w
    grid $f.twidth $f.width -padx 2 -pady 2 -sticky w
    grid $f.tshadow $f.fillcolor $f.fill -padx 2 -pady 2 -sticky w
    grid $f.tshape $f.shape $f.tshapecolor $f.shapecolor $f.shapefill \
	-padx 2 -pady 2 -sticky w
    grid $f.tsmooth $f.smooth -padx 2 -pady 2 -sticky w

    # Bar
    set f [ttk::labelframe $w.plot.bar -text [msgcat::mc {Bar}]]

    ttk::label $f.tborder -text [msgcat::mc {Border}]
    ColorMenuButton $f.bordercolor pap graph,ds,bar,border,color {}
    ttk::label $f.tborderwidth -text [msgcat::mc {Width}]
    ttk::menubutton $f.borderwidth \
	-textvariable pap(graph,ds,bar,border,width) -menu $f.borderwidth.menu
    WidthDashMenu $f.borderwidth.menu pap graph,ds,bar,border,width {} {} {}

    ttk::label $f.tcolor -text [msgcat::mc {Color}]
    ColorMenuButton $f.color pap graph,ds,bar,color {}
    ttk::checkbutton $f.fill -text [msgcat::mc {Fill}] \
	-variable pap(graph,ds,bar,fill)

    ttk::label $f.twidth -text [msgcat::mc {Width}]
    ttk::entry $f.width -textvariable pap(graph,ds,bar,width) -width 7

    grid $f.tborder $f.bordercolor $f.tborderwidth $f.borderwidth \
	-padx 2 -pady 2 -sticky w
    grid $f.tcolor $f.color $f.fill -padx 2 -pady 2 -sticky w
    grid $f.twidth $f.width -padx 2 -pady 2 -sticky w

    # Scatter
    set f [ttk::labelframe $w.plot.scatter -text [msgcat::mc {Scatter}]]

    ttk::label $f.tshape -text [msgcat::mc {Shape}]
    ttk::menubutton $f.shape -textvariable pap(graph,ds,scatter,symbol) \
	-menu $f.shape.menu
    PlotScatterShapeMenu $f.shape.menu pap(graph,ds,scatter,symbol) {}
    ttk::label $f.tshapecolor -text [msgcat::mc {Color}]
    ColorMenuButton $f.shapecolor pap graph,ds,scatter,color {}
    ttk::checkbutton $f.shapefill -text [msgcat::mc {Fill}] \
	-variable pap(graph,ds,scatter,fill)

    grid $f.tshape $f.shape $f.tshapecolor $f.shapecolor $f.shapefill \
	-padx 2 -pady 2 -sticky w

    # Error
    set f [ttk::labelframe $w.plot.error -text [msgcat::mc {Error Bar}]]

    ttk::checkbutton $f.show -text [msgcat::mc {Show}] \
	-variable pap(graph,ds,error)
    ttk::checkbutton $f.cap -text [msgcat::mc {Cap}] \
	-variable pap(graph,ds,error,cap)
    
    ttk::label $f.tcolor -text [msgcat::mc {Color}]
    ColorMenuButton $f.color pap graph,ds,error,color {}

    ttk::label $f.twidth -text [msgcat::mc {Width}]
    ttk::menubutton $f.width -textvariable pap(graph,ds,error,width) \
	-menu $f.width.menu
    WidthDashMenu $f.width.menu pap \
	graph,ds,error,width graph,ds,error,dash {} {}

    grid $f.show $f.cap -padx 2 -pady 2 -sticky w
    grid $f.tcolor $f.color $f.twidth $f.width -padx 2 -pady 2 -sticky w

    pack $w.plot.graph $w.plot.axis $w.plot.ds \
	$w.plot.line $w.plot.bar $w.plot.scatter $w.plot.error \
	-side top -fill both -expand true
}

proc ProcessPlotCmd {xarname iname buf fn} {
    upvar $xarname xar
    upvar $iname i

    global iap
    global parse
    set parse(buf) $buf
    set parse(fn) $fn
    set parse(tt) $iap(tt)

    set ref [lindex $iap(plots) end]
    global cvarname
    set cvarname $ref

    plot::YY_FLUSH_BUFFER
    plot::yy_scan_string [lrange $xar $i end]
    plot::yyparse
    incr i [expr $plot::yycnt-1]
}

proc ProcessSendPlotCmd {proc id param {sock {}} {fn {}}} {
    global iap
    global parse
    set parse(proc) $proc
    set parse(id) $id

    set ref [lindex $iap(plots) end]
    global cvarname
    set cvarname $ref

    plotsend::YY_FLUSH_BUFFER
    plotsend::yy_scan_string $param
    plotsend::yyparse
}

proc PlotCmdRef {ref} {
    global iap
    global cvarname

    set id [lsearch $iap(plots) $ref]

    # look for reference in current list
    if { $id < 0} {
	Error "[msgcat::mc {Unable to find plot window}] $ref"
	return
    }

    set iap(plots) [lreplace $iap(plots) $id $id]
    lappend iap(plots) $ref
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

proc PlotCmdNewFile {fn ref} {
    global parse

    if {$ref != {}} {
	set parse(tt) $ref
    }

    if {[file exists $fn]} {
	set ch [open $fn r]
	set parse(buf) [read $ch]
	close $ch
	return
    } else {
	Error "[msgcat::mc {file not found}]: $fn"
    }
}

# special case, is 1st arg a file? or ref?
proc PlotCmdNewParam1 {proc fn} {
    if {[file exists $fn]} {
	PlotCmdNewFile $fn {}
    } else {
	PlotCmdNew $fn
    }
    $proc {} {} {} xy
}

proc PlotCmdNewParam5 {proc fn title xaxis yaxis dim} {
    if {[file exists $fn]} {
	PlotCmdNewFile $fn {}
    } else {
	PlotCmdNew $fn
    }
    $proc $title $xaxis $yaxis $dim
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
    PlotAddDataSet $cvarname $dim $parse(buf)
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

proc PlotCmdUpdateElement {which value} {
    global cvarname
    upvar #0 $cvarname cvar

    set cvar($which) $value
    $cvar(graph,proc,updateelement) $cvarname
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
    PlotUpdateCanvasElement $cvarname
}

proc PlotCmdExport {format fn} {
    global cvarname
    upvar #0 $cvarname cvar

    switch -- $format {
	gif {FileLast giffbox $fn}
	jpeg {FileLast jpegfbox $fn}
	tiff {FileLast tifffbox $fn}
	png {FileLast pngfbox $fn}
	default {
	    Error "[msgcat::mc {Not valid export format}] $format"
	    return
	}
    }
    PlotExport $cvarname $fn $format
}

