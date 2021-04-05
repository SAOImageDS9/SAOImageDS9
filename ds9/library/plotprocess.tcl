#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc PrefsDialogPlot {} {
    global dprefs

    set w $dprefs(tab)

    $dprefs(listbox) insert {} end -id [ttk::frame $w.plot] \
	-text [msgcat::mc {Plot}]

    # Left
    set ff [ttk::frame $w.plot.left]

    # Canvas
    set f [ttk::labelframe $ff.canvas -text [msgcat::mc {Plot}]]

    ttk::checkbutton $f.theme -text [msgcat::mc {Use Theme Colors}] \
	-variable pap(canvas,theme)

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

    grid $f.theme -padx 2 -pady 2 -sticky w
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
    set f [ttk::labelframe $ff.graph -text [msgcat::mc {Graph}]]

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
    ttk::checkbutton $f.xlog -text [msgcat::mc {Log}] \
	-variable pap(graph,axis,x,log)
    ttk::checkbutton $f.xflip -text [msgcat::mc {Flip}] \
	-variable pap(graph,axis,x,flip)

    ttk::label $f.ytitle -text [msgcat::mc {Y Axis}]
    ttk::checkbutton $f.y -text [msgcat::mc {Grid}] \
	-variable pap(graph,axis,y,grid)
    ttk::checkbutton $f.ylog -text [msgcat::mc {Log}] \
	-variable pap(graph,axis,y,log)
    ttk::checkbutton $f.yflip -text [msgcat::mc {Flip}] \
	-variable pap(graph,axis,y,flip)

    grid $f.legend -padx 2 -pady 2 -sticky w
    grid $f.tlegendposition $f.legendposition - -padx 2 -pady 2 -sticky w
    grid $f.xtitle $f.x $f.xlog $f.xflip -padx 2 -pady 2 -sticky w
    grid $f.ytitle $f.y $f.ylog $f.yflip -padx 2 -pady 2 -sticky w

    # Right
    set ff [ttk::frame $w.plot.right]

    # Data
    set f [ttk::labelframe $ff.ds -text [msgcat::mc {Dataset}]]

    #  Show
    ttk::checkbutton $f.show -text [msgcat::mc {Show}] \
	-variable pap(graph,ds,show)
    grid $f.show -padx 2 -pady 2 -sticky w

    PlotPrefsLine $ff
    PlotPrefsBar $ff

    # Error
    set f [ttk::labelframe $ff.error -text [msgcat::mc {Errorbar}]]

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
    grid $f.tcolor $f.color -padx 2 -pady 2 -sticky w
    grid $f.twidth $f.width -padx 2 -pady 2 -sticky w

    pack $w.plot.left.canvas $w.plot.left.graph \
	-side top -fill both -expand true
    pack $w.plot.right.ds $w.plot.right.line $w.plot.right.bar \
	$w.plot.right.error -side top -fill both -expand true

    pack $w.plot.left $w.plot.right \
	-side left -fill both -expand true
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

proc PlotSendCmdRef {} {
    global iap
    global parse

    $parse(proc) $parse(id) "[lindex $iap(plots) end]\n"
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

    if {![file exists $fn]} {
	Error "[msgcat::mc {File not found}]: $fn"
	return
    }

    set ch [open $fn r]
    set parse(buf) [read $ch]
    close $ch
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

# special case, is 1st arg a file? or ref?
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
    PlotLine $parse(tt) {} $title $xaxis $yaxis $dim $parse(buf) false
}

proc PlotCmdBar {title xaxis yaxis dim} {
    global parse
    PlotBar $parse(tt) {} $title $xaxis $yaxis $dim $parse(buf) false
}

# backward compatibility
proc PlotCmdScatter {title xaxis yaxis dim} {
    global parse
    PlotScatter $parse(tt) {} $title $xaxis $yaxis $dim $parse(buf) false
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
	    if {![file exists $parse(fn)]} {
		Error "[msgcat::mc {File not found}]: $parse(fn)"
		return
	    }

	    set ch [open $parse(fn) r]
	    set parse(buf) [read $ch]
	    close $ch
	} else {
	    Error "[msgcat::mc {Unable to load plot data}] $parse(fn)"
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

proc PlotCmdBackup {fn} {
    global cvarname
    
    if {$fn != {}} {
	PlotBackup $cvarname $fn
	FileLast apconfigfbox $fn
    }
}

proc PlotCmdRestore {fn} {
    global cvarname
    
    if {$fn != {}} {
	PlotRestore $cvarname $fn
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
	eps {FileLast epsbox $fn}
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

