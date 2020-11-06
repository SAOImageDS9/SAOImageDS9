#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

# used by backup
proc PlotLineTool {} {
    global iap

    PlotLine $iap(tt) [msgcat::mc {Line Plot Tool}] {} {} {} 2 {} true
}

proc PlotLine {tt wtt title xaxis yaxis dim data theme} {
    global iap

    # make the window name unique
    set ii [lsearch $iap(plots) $tt]
    if {$ii>=0} {
	incr iap(unique)
	append tt $iap(unique)
    }

    # set the window title if none
    if {$wtt == {}} {
	set wtt $tt
    }

    set varname $tt
    upvar #0 $varname var
    global $varname
    
    PlotDialog $varname $wtt $theme
    PlotAddGraph $varname line
    PlotTitle $varname $title $xaxis $yaxis
    PlotAddDataSet $varname $dim $data
    PlotStats $varname
    PlotList $varname
}

proc PlotLineMenus {varname} {
    upvar #0 $varname var
    global $varname

    ThemeMenu $var(mb).dataline
    $var(mb).dataline add checkbutton -label [msgcat::mc {Show}] \
	-variable ${varname}(graph,ds,show) \
	-command [list PlotLineUpdateElement $varname]
    $var(mb).dataline add command -label "[msgcat::mc {Name}]..." \
	-command [list DatasetNameDialog $varname]
    $var(mb).dataline add separator
    $var(mb).dataline add cascade -label [msgcat::mc {Color}] \
	-menu $var(mb).dataline.color
    $var(mb).dataline add cascade -label [msgcat::mc {Width}] \
	-menu $var(mb).dataline.width
    $var(mb).dataline add cascade -label [msgcat::mc {Shadow}] \
	-menu $var(mb).dataline.fill
    $var(mb).dataline add cascade -label [msgcat::mc {Shape}] \
	-menu $var(mb).dataline.shape
    $var(mb).dataline add cascade -label [msgcat::mc {Smooth}] \
	-menu $var(mb).dataline.smooth
    $var(mb).dataline add separator
    $var(mb).dataline add cascade -label [msgcat::mc {Errorbar}] \
	-menu $var(mb).dataline.error

    ColorMenu $var(mb).dataline.color $varname graph,ds,line,color \
	[list PlotLineUpdateElement $varname]

    PlotLineWidthMenu $var(mb).dataline.width $varname \
	[list PlotLineUpdateElement $varname]

    ThemeMenu $var(mb).dataline.fill
    $var(mb).dataline.fill add checkbutton \
	-label [msgcat::mc {Fill}] \
	-variable ${varname}(graph,ds,line,fill) \
	-command [list PlotLineUpdateElement $varname]
    $var(mb).dataline.fill add separator
    $var(mb).dataline.fill add cascade -label [msgcat::mc {Color}] \
	-menu $var(mb).dataline.fill.color

    ColorMenu $var(mb).dataline.fill.color \
	$varname graph,ds,line,fill,color [list PlotLineUpdateElement $varname]

    ThemeMenu $var(mb).dataline.shape
    $var(mb).dataline.shape add checkbutton \
	-label [msgcat::mc {Fill}] \
	-variable ${varname}(graph,ds,line,shape,fill) \
	-command [list PlotLineUpdateElement $varname]
    $var(mb).dataline.shape add separator
    $var(mb).dataline.shape add cascade -label [msgcat::mc {Symbol}] \
	-menu $var(mb).dataline.shape.symbol
    $var(mb).dataline.shape add cascade -label [msgcat::mc {Color}] \
	-menu $var(mb).dataline.shape.color

    PlotLineShapeMenu $var(mb).dataline.shape.symbol $varname \
	[list PlotLineUpdateElement $varname]
    ColorMenu $var(mb).dataline.shape.color \
	$varname graph,ds,line,shape,color \
	[list PlotLineUpdateElement $varname]
    
    PlotLineSmoothMenu $var(mb).dataline.smooth $varname \
	[list PlotLineUpdateElement $varname]
    
    ThemeMenu $var(mb).dataline.error
    $var(mb).dataline.error add checkbutton -label [msgcat::mc {Show}] \
	-variable ${varname}(graph,ds,error) \
	-command [list PlotLineUpdateElement $varname]
    $var(mb).dataline.error add checkbutton -label [msgcat::mc {Cap}] \
	-variable ${varname}(graph,ds,error,cap) \
	-command [list PlotLineUpdateElement $varname]
    $var(mb).dataline.error add separator
    $var(mb).dataline.error add cascade -label [msgcat::mc {Color}] \
	-menu $var(mb).dataline.error.color
    $var(mb).dataline.error add cascade -label [msgcat::mc {Width}] \
	-menu $var(mb).dataline.error.width

    ColorMenu $var(mb).dataline.error.color $varname graph,ds,error,color \
	[list PlotLineUpdateElement $varname]
    WidthDashMenu $var(mb).dataline.error.width $varname \
	graph,ds,error,width {} [list PlotLineUpdateElement $varname] {}
}

proc PlotLineWidthMenu {w varname cmd} {
    ThemeMenu $w
    $w add radiobutton -label {0} \
	-variable ${varname}(graph,ds,line,width) \
	-value 0 -command $cmd
    $w add radiobutton -label {1} \
	-variable ${varname}(graph,ds,line,width) \
	-value 1 -command $cmd
    $w add radiobutton -label {2} \
	-variable ${varname}(graph,ds,line,width) \
	-value 2 -command $cmd
    $w add radiobutton -label {3} \
	-variable ${varname}(graph,ds,line,width) \
	-value 3 -command $cmd
    $w add radiobutton -label {4} \
	-variable ${varname}(graph,ds,line,width) \
	-value 4 -command $cmd
    $w add separator
    $w add checkbutton -label [msgcat::mc {Dash}] \
	-variable ${varname}(graph,ds,line,dash) -command $cmd
}

proc PlotLineShapeMenu {w varname cmd} {
    ThemeMenu $w
    $w add radiobutton -label [msgcat::mc {None}] \
	-variable ${varname}(graph,ds,line,shape,symbol) \
	-value none -command $cmd
    $w add radiobutton -label [msgcat::mc {Circle}] \
	-variable ${varname}(graph,ds,line,shape,symbol) \
	-value circle -command $cmd
    $w add radiobutton -label [msgcat::mc {Square}] \
	-variable ${varname}(graph,ds,line,shape,symbol) \
	-value square -command $cmd
    $w add radiobutton -label [msgcat::mc {Diamond}] \
	-variable ${varname}(graph,ds,line,shape,symbol) \
	-value diamond -command $cmd
    $w add radiobutton -label [msgcat::mc {Plus}] \
	-variable ${varname}(graph,ds,line,shape,symbol) \
	-value plus -command $cmd
    $w add radiobutton -label [msgcat::mc {Cross}] \
	-variable ${varname}(graph,ds,line,shape,symbol) \
	-value cross -command $cmd
    $w add radiobutton -label [msgcat::mc {Simple Plus}] \
	-variable ${varname}(graph,ds,line,shape,symbol) \
	-value splus -command $cmd
    $w add radiobutton -label [msgcat::mc {Simple Cross}] \
	-variable ${varname}(graph,ds,line,shape,symbol) \
	-value scross -command $cmd
    $w add radiobutton -label [msgcat::mc {Triangle}] \
	-variable ${varname}(graph,ds,line,shape,symbol) \
	-value triangle -command $cmd
    $w add radiobutton -label [msgcat::mc {Arrow}] \
	-variable ${varname}(graph,ds,line,shape,symbol) \
	-value arrow -command $cmd
}

proc PlotLineSmoothMenu {w varname cmd} {
    ThemeMenu $w
    $w add radiobutton -label [msgcat::mc {Step}] \
	-variable ${varname}(graph,ds,line,smooth) \
	-value step -command $cmd
    $w add radiobutton -label [msgcat::mc {Linear}] \
	-variable ${varname}(graph,ds,line,smooth) \
	-value linear -command $cmd
    $w add radiobutton -label [msgcat::mc {Cubic}] \
	-variable ${varname}(graph,ds,line,smooth) \
	-value cubic -command $cmd
    $w add radiobutton -label [msgcat::mc {Quadratic}] \
	-variable ${varname}(graph,ds,line,smooth) \
	-value quadratic -command $cmd
    $w add radiobutton -label [msgcat::mc {Catrom}] \
	-variable ${varname}(graph,ds,line,smooth) \
	-value catrom -command $cmd
}

proc PlotLineAddGraph {varname} {
    upvar #0 $varname var
    global $varname

    set var(graph,type) line
    blt::graph $var(graph) \
	-width 600 \
	-height 500 \
	-highlightthickness 0
}

proc PlotLineUpdateElement {varname} {
    upvar #0 $varname var
    global $varname
    
    PlotSaveState $varname

    set cc $var(graph,current)
    if {[llength $var($cc,dss)] == 0} {
 	return
    }
    
    if {$var(canvas,theme)} {
	set color [ThemeBold]
	set shapecolor [ThemeBold]
	set errorcolor [ThemeBold]
    } else {
	set color $var(graph,ds,line,color)
	set shapecolor $var(graph,ds,line,shape,color)
	set errorcolor $var(graph,ds,error,color)
    }

    if {$var(graph,ds,line,fill)} {
	if {$var(canvas,theme)} {
	    set fillColor [ThemeBold]
	} else {
	    set fillColor $var(graph,ds,line,fill,color)
	}
    } else {
	set fillColor {}
    }

    if {$var(graph,ds,line,shape,fill)} {
	if {$var(canvas,theme)} {
	    set shapefillcolor [ThemeBold]
	} else {
	    set shapefillcolor $var(graph,ds,line,shape,color)
	}
    } else {
	set shapefillcolor $var(canvas,background)
    }

    if {$var(graph,ds,line,dash)} {
	set dash {8 3}
    } else {
	set dash { }
    }

    if {$var(graph,ds,error)} {
	set show both
    } else {
	set show none
    }

    if {$var(graph,ds,error,cap)} {
	set cap [expr $var(graph,ds,error,width)+3]
    } else {
	set cap 0
    }

    set nn $var(graph,ds,current)
    $var(graph) element configure ${nn} \
	-label $var(graph,ds,name) \
	-hide [expr !$var(graph,ds,show)] \
	-color $color \
	-areabackground $fillColor \
	-outline $shapecolor \
	-fill $shapefillcolor \
	-symbol $var(graph,ds,line,shape,symbol) \
	-scalesymbols no \
	-pixels 5 \
	-smooth $var(graph,ds,line,smooth) \
	-linewidth $var(graph,ds,line,width) \
	-dashes $dash \
	-showerrorbars $show \
	-errorbarcolor $errorcolor \
	-errorbarwidth $var(graph,ds,error,width) \
	-errorbarcap $cap
}


proc PlotPrefsLine {w} {
    set f [ttk::labelframe $w.line -text [msgcat::mc {Line}]]

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
    PlotLineShapeMenu $f.shape.menu pap {}
    ttk::label $f.tshapecolor -text [msgcat::mc {Color}]
    ColorMenuButton $f.shapecolor pap graph,ds,line,shape,color {}
    ttk::checkbutton $f.shapefill -text [msgcat::mc {Fill}] \
	-variable pap(graph,ds,line,shape,fill)

    ttk::label $f.tsmooth -text [msgcat::mc {Smooth}]
    ttk::menubutton $f.smooth -textvariable pap(graph,ds,line,smooth) \
	-menu $f.smooth.menu
    PlotLineSmoothMenu $f.smooth.menu pap {}

    grid $f.tcolor $f.color -padx 2 -pady 2 -sticky w
    grid $f.twidth $f.width -padx 2 -pady 2 -sticky w
    grid $f.tshadow $f.fillcolor $f.fill -padx 2 -pady 2 -sticky w
    grid $f.tshape $f.shape $f.tshapecolor $f.shapecolor $f.shapefill \
	-padx 2 -pady 2 -sticky w
    grid $f.tsmooth $f.smooth -padx 2 -pady 2 -sticky w
}

proc PlotGUILine {varname w} {
    upvar #0 $varname var
    global $varname

    # Line
    set f [ttk::labelframe $w.line -text [msgcat::mc {Line Dataset}]]

    ttk::checkbutton $f.show -text [msgcat::mc {Show}] \
	-variable ${varname}(graph,ds,show) \
	-command [list PlotLineUpdateElement $varname]

    ttk::label $f.tname -text [msgcat::mc {Dataset Name}]
    ttk::entry $f.name -textvariable ${varname}(graph,ds,name) -width 20

    grid $f.show -padx 2 -pady 2 -sticky ew
    grid $f.tname $f.name -padx 2 -pady 2 -sticky ew

    # Params
    set f [ttk::labelframe $w.params -text [msgcat::mc {Properties}]]

    # Color
    ttk::label $f.tcolor -text [msgcat::mc {Color}]
    ttk::menubutton $f.color \
	-textvariable ${varname}(graph,ds,line,color) \
	-menu $f.color.menu
    $var(mb).dataline.color clone $f.color.menu

    # Width
    ttk::label $f.twidth -text [msgcat::mc {Width}]
    ttk::menubutton $f.width \
	-textvariable ${varname}(graph,ds,line,width) \
	-menu $f.width.menu
    $var(mb).dataline.width clone $f.width.menu

    # Shadow
    ttk::label $f.tshadow -text [msgcat::mc {Shadow}]
    ttk::menubutton $f.fillcolor \
	-textvariable ${varname}(graph,ds,line,fill,color) \
	-menu $f.fillcolor.menu
    $var(mb).dataline.fill.color clone $f.fillcolor.menu
    ttk::checkbutton $f.fill -text [msgcat::mc {Fill}] \
	-variable ${varname}(graph,ds,line,fill) \
	-command [list PlotLineUpdateElement $varname]

    # Shape
    ttk::label $f.tshape -text [msgcat::mc {Shape}]
    ttk::menubutton $f.shape \
	-textvariable ${varname}(graph,ds,line,shape,symbol) \
	-menu $f.shape.menu
    $var(mb).dataline.shape.symbol clone $f.shape.menu

    ttk::label $f.tshapecolor -text [msgcat::mc {Color}]
    ttk::menubutton $f.shapecolor \
	-textvariable ${varname}(graph,ds,line,shape,color) \
	-menu $f.shapecolor.menu
    $var(mb).dataline.shape.color clone $f.shapecolor.menu

    ttk::checkbutton $f.shapefill -text [msgcat::mc {Fill}] \
	-variable ${varname}(graph,ds,line,shape,fill) \
	-command [list PlotLineUpdateElement $varname]

    # Smooth
    ttk::label $f.tsmooth -text [msgcat::mc {Smooth}]
    ttk::menubutton $f.smooth \
	-textvariable ${varname}(graph,ds,line,smooth) \
	-menu $f.smooth.menu
    $var(mb).dataline.smooth clone $f.smooth.menu

    grid $f.tcolor $f.color -padx 2 -pady 2 -sticky ew
    grid $f.twidth $f.width -padx 2 -pady 2 -sticky ew
    grid $f.tshadow $f.fillcolor $f.fill -padx 2 -pady 2 -sticky ew
    grid $f.tshape $f.shape $f.tshapecolor $f.shapecolor \
	$f.shapefill  -padx 2 -pady 2 -sticky ew
    grid $f.tsmooth $f.smooth -padx 2 -pady 2 -sticky ew

    # Errorbar
    set f [ttk::labelframe $w.error -text [msgcat::mc {Errorbar}]]

    ttk::checkbutton $f.show -text [msgcat::mc {Show}] \
	-variable ${varname}(graph,ds,error) \
	-command [list PlotLineUpdateElement $varname]

    ttk::checkbutton $f.cap -text [msgcat::mc {Cap}] \
	-variable ${varname}(graph,ds,error,cap) \
	-command [list PlotLineUpdateElement $varname]

    ttk::label $f.tcolor -text [msgcat::mc {Color}]
    ttk::menubutton $f.color \
	-textvariable ${varname}(graph,ds,error,color) \
	-menu $f.color.menu
    $var(mb).dataline.error.color clone $f.color.menu

    ttk::label $f.twidth -text [msgcat::mc {Width}]
    ttk::menubutton $f.width \
	-textvariable ${varname}(graph,ds,error,width) \
	-menu $f.width.menu
    $var(mb).dataline.error.width clone $f.width.menu

    grid $f.show $f.cap -padx 2 -pady 2 -sticky ew
    grid $f.tcolor $f.color -padx 2 -pady 2 -sticky ew
    grid $f.twidth $f.width -padx 2 -pady 2 -sticky ew

    pack $w.line $w.params $w.error -side top -fill both -expand true
}
