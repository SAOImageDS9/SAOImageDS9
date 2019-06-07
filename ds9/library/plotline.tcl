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
    set var(proc,updatecanvas) PlotUpdateCanvas
    set var(proc,updategraph) PlotUpdateGraph
    set var(proc,updateelement) PlotLineUpdateElement
    set var(proc,highlite) PlotHighliteElement
    set var(proc,button) PlotButton

    PlotDialog $varname $wtt $title $xaxis $yaxis
    PlotAddGraph $varname

    # Data
    $var(mb).data add checkbutton -label [msgcat::mc {Show}] \
	-variable ${varname}(graph,ds,show) \
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
    PlotShapeMenu $varname

    # Smooth
    menu $var(mb).data.smooth
    $var(mb).data.smooth add radiobutton \
	-label [msgcat::mc {Step}] \
	-variable ${varname}(graph,ds,smooth) -value step \
	-command [list PlotLineUpdateElement $varname]
    $var(mb).data.smooth add radiobutton \
	-label [msgcat::mc {Linear}] \
	-variable ${varname}(graph,ds,smooth) -value linear \
	-command [list PlotLineUpdateElement $varname]
    $var(mb).data.smooth add radiobutton \
	-label [msgcat::mc {Cubic}] \
	-variable ${varname}(graph,ds,smooth) -value cubic \
	-command [list PlotLineUpdateElement $varname]
    $var(mb).data.smooth add radiobutton \
	-label [msgcat::mc {Quadratic}] \
	-variable ${varname}(graph,ds,smooth) -value quadratic \
	-command [list PlotLineUpdateElement $varname]
    $var(mb).data.smooth add radiobutton \
	-label [msgcat::mc {Catrom}] \
	-variable ${varname}(graph,ds,smooth) -value catrom \
	-command [list PlotLineUpdateElement $varname]

    # Color
    PlotColorMenu $var(mb).data.color $varname graph,ds,color \
	[list PlotLineUpdateElement $varname]

    # Width
    menu $var(mb).data.width
    $var(mb).data.width add radiobutton \
	-label {0} -variable ${varname}(graph,ds,width) \
	-value 0 -command [list PlotLineUpdateElement $varname]
    $var(mb).data.width add radiobutton \
	-label {1} -variable ${varname}(graph,ds,width) \
	-value 1 -command [list PlotLineUpdateElement $varname]
    $var(mb).data.width add radiobutton \
	-label {2} -variable ${varname}(graph,ds,width) \
	-value 2 -command [list PlotLineUpdateElement $varname]
    $var(mb).data.width add radiobutton \
	-label {3} -variable ${varname}(graph,ds,width) \
	-value 3 -command [list PlotLineUpdateElement $varname]
    $var(mb).data.width add radiobutton \
	-label {4} -variable ${varname}(graph,ds,width) \
	-value 4 -command [list PlotLineUpdateElement $varname]
    $var(mb).data.width add separator
    $var(mb).data.width add checkbutton \
	-label [msgcat::mc {Dash}] -variable ${varname}(graph,ds,dash) \
	-command [list PlotLineUpdateElement $varname]

    # Fill
    menu $var(mb).data.fill
    $var(mb).data.fill add checkbutton \
	-label [msgcat::mc {Show}] \
	-variable ${varname}(graph,ds,fill) \
	-command [list PlotLineUpdateElement $varname]
    $var(mb).data.fill add separator
    $var(mb).data.fill add cascade -label [msgcat::mc {Color}] \
	-menu $var(mb).data.fill.color

    PlotColorMenu $var(mb).data.fill.color $varname graph,ds,fill,color \
	[list PlotLineUpdateElement $varname]

    # Error
    PlotErrorMenu $varname

    $var(proc,updatecanvas) $varname
}

proc PlotLineAddGraph {varname} {
    upvar #0 $varname var
    global $varname

    set cc $var(graph,current)

    set var($cc,type) line
    set var($cc) [blt::graph $var(canvas).$cc -width 600 -height 500 \
		      -highlightthickness 0]
}

proc PlotLineUpdateElement {varname} {
    upvar #0 $varname var
    global $varname
    
    set cc $var(graph,current)

    # warning: uses current vars
    if {$var($cc,data,total) == 0} {
 	return
    }
    
    PlotSaveState $varname

    if {$var(graph,ds,fill)} {
	set fillClr $var(graph,ds,fill,color)
    } else {
	set fillClr {}
    }

    if {$var(graph,ds,shape,fill)} {
	set clr $var(graph,ds,shape,color)
    } else {
	set clr {}
    }

    if {$var(graph,ds,dash)} {
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

    set nn $var($cc,data,current)
    $var(graph) element configure "d-${nn}" \
	-label $var(graph,ds,name) -hide [expr !$var(graph,ds,show)] \
	-symbol $var(graph,ds,shape,symbol) -fill $clr -scalesymbols no \
	-pixels 5 -outline $var(graph,ds,shape,color) \
	-smooth $var(graph,ds,smooth) \
	-color $var(graph,ds,color) -areabackground $fillClr \
	-linewidth $var(graph,ds,width) -dashes $dash \
	-showerrorbars $show -errorbarcolor $var(graph,ds,error,color) \
	-errorbarwidth $var(graph,ds,error,width) -errorbarcap $cap
}

