#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

# used by backup
proc PlotLineTool {} {
    global iap
    PlotLine $iap(tt) [msgcat::mc {Line Plot Tool}] {} {} {} 2 {}
}

proc PlotLine {tt wtt title xaxis yaxis dim data} {
    global iap

    # make the window name unique
    set ii [lsearch $iap(windows) $tt]
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

    PlotLineProc $varname
    PlotDialog $varname $wtt $title $xaxis $yaxis
    PlotDialogLine $varname

    PlotDataSet $varname $dim $data
    $var(proc,updategraph) $varname
    PlotStats $varname
    PlotList $varname
}

proc PlotLineDialog {varname wtt title xaxis yaxis} {
    upvar #0 $varname var
    global $varname

    PlotLineProc $varname
    PlotDialog $varname $wtt $title $xaxis $yaxis
    PlotDialogLine $varname
}

proc PlotLineProc {varname} {
    upvar #0 $varname var
    global $varname

    set var(proc,updategraph) PlotUpdateGraph
    set var(proc,updateelement) PlotLineUpdateElement
    set var(proc,highlite) PlotLineHighliteElement
    set var(proc,button) PlotLineButton
}

proc PlotDialogLine {varname} {
    upvar #0 $varname var
    global $varname

    global ds9

    set var(seq) 1

    # Dataset
    $var(mb).dataset add checkbutton -label [msgcat::mc {Show}] \
	-variable ${varname}(show) \
	-command [list PlotLineUpdateElement $varname]
    $var(mb).dataset add separator
    $var(mb).dataset add cascade -label [msgcat::mc {Shape}] \
	-menu $var(mb).dataset.shape
    $var(mb).dataset add cascade -label [msgcat::mc {Smooth}] \
	-menu $var(mb).dataset.smooth
    $var(mb).dataset add cascade -label [msgcat::mc {Color}] \
	-menu $var(mb).dataset.color
    $var(mb).dataset add cascade -label [msgcat::mc {Width}] \
	-menu $var(mb).dataset.width
    $var(mb).dataset add cascade -label [msgcat::mc {Fill}] \
	-menu $var(mb).dataset.fill
    $var(mb).dataset add cascade -label [msgcat::mc {Error}] \
	-menu $var(mb).dataset.error
    $var(mb).dataset add separator
    $var(mb).dataset add command -label "[msgcat::mc {Name}]..." \
	-command [list DatasetNameDialog $varname]

    # Shape
    menu $var(mb).dataset.shape
    $var(mb).dataset.shape add radiobutton \
	-label [msgcat::mc {None}] \
	-variable ${varname}(shape,symbol) -value none \
	-command [list PlotLineUpdateElement $varname]
    $var(mb).dataset.shape add radiobutton \
	-label [msgcat::mc {Circle}] \
	-variable ${varname}(shape,symbol) -value circle \
	-command [list PlotLineUpdateElement $varname]
    $var(mb).dataset.shape add radiobutton \
	-label [msgcat::mc {Square}] \
	-variable ${varname}(shape,symbol) -value square \
	-command [list PlotLineUpdateElement $varname]
    $var(mb).dataset.shape add radiobutton \
	-label [msgcat::mc {Diamond}] \
	-variable ${varname}(shape,symbol) -value diamond \
	-command [list PlotLineUpdateElement $varname]
    $var(mb).dataset.shape add radiobutton \
	-label [msgcat::mc {Plus}] \
	-variable ${varname}(shape,symbol) -value plus \
	-command [list PlotLineUpdateElement $varname]
    $var(mb).dataset.shape add radiobutton \
	-label [msgcat::mc {Cross}] \
	-variable ${varname}(shape,symbol) -value cross \
	-command [list PlotLineUpdateElement $varname]
    $var(mb).dataset.shape add radiobutton \
	-label [msgcat::mc {Simple Plus}] \
	-variable ${varname}(shape,symbol) -value splus \
	-command [list PlotLineUpdateElement $varname]
    $var(mb).dataset.shape add radiobutton \
	-label [msgcat::mc {Simple Cross}] \
	-variable ${varname}(shape,symbol) -value scross \
	-command [list PlotLineUpdateElement $varname]
    $var(mb).dataset.shape add radiobutton \
	-label [msgcat::mc {Triangle}] \
	-variable ${varname}(shape,symbol) -value triangle \
	-command [list PlotLineUpdateElement $varname]
    $var(mb).dataset.shape add radiobutton \
	-label [msgcat::mc {Arrow}] \
	-variable ${varname}(shape,symbol) -value arrow \
	-command [list PlotLineUpdateElement $varname]
    $var(mb).dataset.shape add separator
    $var(mb).dataset.shape add checkbutton \
	-label [msgcat::mc {Fill}] \
	-variable ${varname}(shape,fill) \
	-command [list PlotLineUpdateElement $varname]
    $var(mb).dataset.shape add cascade -label [msgcat::mc {Color}] \
	-menu $var(mb).dataset.shape.color

    PlotColorMenu $var(mb).dataset.shape.color $varname shape,color \
	[list PlotLineUpdateElement $varname]

    # Smooth
    menu $var(mb).dataset.smooth
    $var(mb).dataset.smooth add radiobutton \
	-label [msgcat::mc {Step}] \
	-variable ${varname}(smooth) -value step \
	-command [list PlotLineUpdateElement $varname]
    $var(mb).dataset.smooth add radiobutton \
	-label [msgcat::mc {Linear}] \
	-variable ${varname}(smooth) -value linear \
	-command [list PlotLineUpdateElement $varname]
    $var(mb).dataset.smooth add radiobutton \
	-label [msgcat::mc {Cubic}] \
	-variable ${varname}(smooth) -value cubic \
	-command [list PlotLineUpdateElement $varname]
    $var(mb).dataset.smooth add radiobutton \
	-label [msgcat::mc {Quadratic}] \
	-variable ${varname}(smooth) -value quadratic \
	-command [list PlotLineUpdateElement $varname]
    $var(mb).dataset.smooth add radiobutton \
	-label [msgcat::mc {Catrom}] \
	-variable ${varname}(smooth) -value catrom \
	-command [list PlotLineUpdateElement $varname]

    # Color
    PlotColorMenu $var(mb).dataset.color $varname color \
	[list PlotLineUpdateElement $varname]

    # Width
    WidthDashMenu $var(mb).dataset.width $varname width dash \
	[list PlotLineUpdateElement $varname] \
	[list PlotLineUpdateElement $varname]

    # Fill
    menu $var(mb).dataset.fill
    $var(mb).dataset.fill add checkbutton \
	-label [msgcat::mc {Show}] \
	-variable ${varname}(fill) \
	-command [list PlotLineUpdateElement $varname]
    $var(mb).dataset.fill add separator
    $var(mb).dataset.fill add cascade -label [msgcat::mc {Color}] \
	-menu $var(mb).dataset.fill.color

    PlotColorMenu $var(mb).dataset.fill.color $varname fill,color \
	[list PlotLineUpdateElement $varname]

    # Error
    menu $var(mb).dataset.error
    $var(mb).dataset.error add checkbutton -label [msgcat::mc {Show}] \
	-variable ${varname}(error) \
	-command [list PlotLineUpdateElement $varname]
    $var(mb).dataset.error add checkbutton -label [msgcat::mc {Cap}] \
	-variable ${varname}(error,cap) \
	-command [list PlotLineUpdateElement $varname]
    $var(mb).dataset.error add separator
    $var(mb).dataset.error add cascade -label [msgcat::mc {Color}] \
	-menu $var(mb).dataset.error.color
    $var(mb).dataset.error add cascade -label [msgcat::mc {Width}] \
	-menu $var(mb).dataset.error.width

    PlotColorMenu $var(mb).dataset.error.color $varname error,color \
	[list PlotLineUpdateElement $varname]
    WidthDashMenu $var(mb).dataset.error.width $varname error,width {} \
	[list PlotLineUpdateElement $varname] {}

    # graph
    set var(type) line
    set var(graph) [blt::graph $var(top).line \
			-width 600 \
			-height 500 \
			-highlightthickness 0 \
		       ]

    pack $var(graph) -expand yes -fill both
    PlotChangeMode $varname
}

proc PlotLineUpdateElement {varname} {
    upvar #0 $varname var
    global $varname
    
    # warning: uses current vars
    if {$var(data,total) == 0} {
 	return
    }
    
    set nn $var(data,current)
    PlotGetVar $varname $nn

    if {$var(fill)} {
	set fillClr $var(fill,color)
    } else {
	set fillClr {}
    }

    if {$var(shape,fill)} {
	set clr $var(shape,color)
    } else {
	set clr {}
    }

    if {$var(dash)} {
	set dash {8 3}
    } else {
	set dash { }
    }

    if {$var(error)} {
	set show both
    } else {
	set show none
    }

    if {$var(error,cap)} {
	set cap [expr $var(error,width)+3]
    } else {
	set cap 0
    }

    $var(graph) element configure "d-${nn}" \
	-label $var(name) -hide [expr !$var(show)] \
	-symbol $var(shape,symbol) -fill $clr -scalesymbols no \
	-pixels 5 -outline $var(shape,color) \
	-smooth $var(smooth) \
	-color $var(color) -areabackground $fillClr \
	-linewidth $var(width) -dashes $dash \
	-showerrorbars $show -errorbarcolor $var(error,color) \
	-errorbarwidth $var(error,width) -errorbarcap $cap
}

proc PlotLineButton {varname x y} {
    upvar #0 $varname var
    global $varname
}

proc PlotLineHighliteElement {varname rowlist} {
    upvar #0 $varname var
    global $varname
}

