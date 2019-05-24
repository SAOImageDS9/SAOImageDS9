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

    PlotLineDialog $varname $wtt $title $xaxis $yaxis

    PlotDataSet $varname $dim $data
    $var(proc,updategraph) $varname
    PlotStats $varname
    PlotList $varname
}

proc PlotLineDialog {varname wtt title xaxis yaxis} {
    upvar #0 $varname var
    global $varname

    set var(proc,addgraph) PlotLineAddGraph
    set var(proc,updategraph) PlotUpdateGraph
    set var(proc,updateelement) PlotLineUpdateElement
    set var(proc,highlite) PlotLineHighliteElement
    set var(proc,button) PlotLineButton

    PlotDialog $varname $wtt $title $xaxis $yaxis
    PlotAddGraph $varname

    # Data
    $var(mb).data add checkbutton -label [msgcat::mc {Show}] \
	-variable ${varname}(show) \
	-command [list PlotLineUpdateElement $varname]
    $var(mb).data add separator
    $var(mb).data add cascade -label [msgcat::mc {Shape}] \
	-menu $var(mb).data.shape
    $var(mb).data add cascade -label [msgcat::mc {Smooth}] \
	-menu $var(mb).data.smooth
    $var(mb).data add cascade -label [msgcat::mc {Color}] \
	-menu $var(mb).data.color
    $var(mb).data add cascade -label [msgcat::mc {Width}] \
	-menu $var(mb).data.width
    $var(mb).data add cascade -label [msgcat::mc {Fill}] \
	-menu $var(mb).data.fill
    $var(mb).data add cascade -label [msgcat::mc {Error}] \
	-menu $var(mb).data.error
    $var(mb).data add separator
    $var(mb).data add command -label "[msgcat::mc {Name}]..." \
	-command [list DatasetNameDialog $varname]

    # Shape
    menu $var(mb).data.shape
    $var(mb).data.shape add radiobutton \
	-label [msgcat::mc {None}] \
	-variable ${varname}(shape,symbol) -value none \
	-command [list PlotLineUpdateElement $varname]
    $var(mb).data.shape add radiobutton \
	-label [msgcat::mc {Circle}] \
	-variable ${varname}(shape,symbol) -value circle \
	-command [list PlotLineUpdateElement $varname]
    $var(mb).data.shape add radiobutton \
	-label [msgcat::mc {Square}] \
	-variable ${varname}(shape,symbol) -value square \
	-command [list PlotLineUpdateElement $varname]
    $var(mb).data.shape add radiobutton \
	-label [msgcat::mc {Diamond}] \
	-variable ${varname}(shape,symbol) -value diamond \
	-command [list PlotLineUpdateElement $varname]
    $var(mb).data.shape add radiobutton \
	-label [msgcat::mc {Plus}] \
	-variable ${varname}(shape,symbol) -value plus \
	-command [list PlotLineUpdateElement $varname]
    $var(mb).data.shape add radiobutton \
	-label [msgcat::mc {Cross}] \
	-variable ${varname}(shape,symbol) -value cross \
	-command [list PlotLineUpdateElement $varname]
    $var(mb).data.shape add radiobutton \
	-label [msgcat::mc {Simple Plus}] \
	-variable ${varname}(shape,symbol) -value splus \
	-command [list PlotLineUpdateElement $varname]
    $var(mb).data.shape add radiobutton \
	-label [msgcat::mc {Simple Cross}] \
	-variable ${varname}(shape,symbol) -value scross \
	-command [list PlotLineUpdateElement $varname]
    $var(mb).data.shape add radiobutton \
	-label [msgcat::mc {Triangle}] \
	-variable ${varname}(shape,symbol) -value triangle \
	-command [list PlotLineUpdateElement $varname]
    $var(mb).data.shape add radiobutton \
	-label [msgcat::mc {Arrow}] \
	-variable ${varname}(shape,symbol) -value arrow \
	-command [list PlotLineUpdateElement $varname]
    $var(mb).data.shape add separator
    $var(mb).data.shape add checkbutton \
	-label [msgcat::mc {Fill}] \
	-variable ${varname}(shape,fill) \
	-command [list PlotLineUpdateElement $varname]
    $var(mb).data.shape add cascade -label [msgcat::mc {Color}] \
	-menu $var(mb).data.shape.color

    PlotColorMenu $var(mb).data.shape.color $varname shape,color \
	[list PlotLineUpdateElement $varname]

    # Smooth
    menu $var(mb).data.smooth
    $var(mb).data.smooth add radiobutton \
	-label [msgcat::mc {Step}] \
	-variable ${varname}(smooth) -value step \
	-command [list PlotLineUpdateElement $varname]
    $var(mb).data.smooth add radiobutton \
	-label [msgcat::mc {Linear}] \
	-variable ${varname}(smooth) -value linear \
	-command [list PlotLineUpdateElement $varname]
    $var(mb).data.smooth add radiobutton \
	-label [msgcat::mc {Cubic}] \
	-variable ${varname}(smooth) -value cubic \
	-command [list PlotLineUpdateElement $varname]
    $var(mb).data.smooth add radiobutton \
	-label [msgcat::mc {Quadratic}] \
	-variable ${varname}(smooth) -value quadratic \
	-command [list PlotLineUpdateElement $varname]
    $var(mb).data.smooth add radiobutton \
	-label [msgcat::mc {Catrom}] \
	-variable ${varname}(smooth) -value catrom \
	-command [list PlotLineUpdateElement $varname]

    # Color
    PlotColorMenu $var(mb).data.color $varname color \
	[list PlotLineUpdateElement $varname]

    # Width
    menu $var(mb).data.width
    $var(mb).data.width add radiobutton \
	-label {0} -variable ${varname}(width) \
	-value 0 -command [list PlotLineUpdateElement $varname]
    $var(mb).data.width add radiobutton \
	-label {1} -variable ${varname}(width) \
	-value 1 -command [list PlotLineUpdateElement $varname]
    $var(mb).data.width add radiobutton \
	-label {2} -variable ${varname}(width) \
	-value 2 -command [list PlotLineUpdateElement $varname]
    $var(mb).data.width add radiobutton \
	-label {3} -variable ${varname}(width) \
	-value 3 -command [list PlotLineUpdateElement $varname]
    $var(mb).data.width add radiobutton \
	-label {4} -variable ${varname}(width) \
	-value 4 -command [list PlotLineUpdateElement $varname]
    $var(mb).data.width add separator
    $var(mb).data.width add checkbutton \
	-label [msgcat::mc {Dash}] -variable ${varname}(dash) \
	-command [list PlotLineUpdateElement $varname]

    # Fill
    menu $var(mb).data.fill
    $var(mb).data.fill add checkbutton \
	-label [msgcat::mc {Show}] \
	-variable ${varname}(fill) \
	-command [list PlotLineUpdateElement $varname]
    $var(mb).data.fill add separator
    $var(mb).data.fill add cascade -label [msgcat::mc {Color}] \
	-menu $var(mb).data.fill.color

    PlotColorMenu $var(mb).data.fill.color $varname fill,color \
	[list PlotLineUpdateElement $varname]

    # Error
    menu $var(mb).data.error
    $var(mb).data.error add checkbutton -label [msgcat::mc {Show}] \
	-variable ${varname}(error) \
	-command [list PlotLineUpdateElement $varname]
    $var(mb).data.error add checkbutton -label [msgcat::mc {Cap}] \
	-variable ${varname}(error,cap) \
	-command [list PlotLineUpdateElement $varname]
    $var(mb).data.error add separator
    $var(mb).data.error add cascade -label [msgcat::mc {Color}] \
	-menu $var(mb).data.error.color
    $var(mb).data.error add cascade -label [msgcat::mc {Width}] \
	-menu $var(mb).data.error.width

    PlotColorMenu $var(mb).data.error.color $varname error,color \
	[list PlotLineUpdateElement $varname]
    WidthDashMenu $var(mb).data.error.width $varname error,width {} \
	[list PlotLineUpdateElement $varname] {}

}

proc PlotLineAddGraph {varname} {
    upvar #0 $varname var
    global $varname

    set cc  $var(graph,current)

    set var(type$cc) line
    set var(graph$cc) [blt::graph $var(canvas).gr$cc \
			   -width 600 \
			   -height 500 \
			   -highlightthickness 0 \
			  ]
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

