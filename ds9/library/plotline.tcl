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

    set tt $var(graph,total)
    set cc $var(graph,current)

    # Data
    $var(mb).data add checkbutton -label [msgcat::mc {Show}] \
	-variable ${varname}(graph$cc,show) \
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
	-variable ${varname}(graph$cc,smooth) -value step \
	-command [list PlotLineUpdateElement $varname]
    $var(mb).data.smooth add radiobutton \
	-label [msgcat::mc {Linear}] \
	-variable ${varname}(graph$cc,smooth) -value linear \
	-command [list PlotLineUpdateElement $varname]
    $var(mb).data.smooth add radiobutton \
	-label [msgcat::mc {Cubic}] \
	-variable ${varname}(graph$cc,smooth) -value cubic \
	-command [list PlotLineUpdateElement $varname]
    $var(mb).data.smooth add radiobutton \
	-label [msgcat::mc {Quadratic}] \
	-variable ${varname}(graph$cc,smooth) -value quadratic \
	-command [list PlotLineUpdateElement $varname]
    $var(mb).data.smooth add radiobutton \
	-label [msgcat::mc {Catrom}] \
	-variable ${varname}(graph$cc,smooth) -value catrom \
	-command [list PlotLineUpdateElement $varname]

    # Color
    PlotColorMenu $var(mb).data.color $varname graph$cc,color \
	[list PlotLineUpdateElement $varname]

    # Width
    menu $var(mb).data.width
    $var(mb).data.width add radiobutton \
	-label {0} -variable ${varname}(graph$cc,width) \
	-value 0 -command [list PlotLineUpdateElement $varname]
    $var(mb).data.width add radiobutton \
	-label {1} -variable ${varname}(graph$cc,width) \
	-value 1 -command [list PlotLineUpdateElement $varname]
    $var(mb).data.width add radiobutton \
	-label {2} -variable ${varname}(graph$cc,width) \
	-value 2 -command [list PlotLineUpdateElement $varname]
    $var(mb).data.width add radiobutton \
	-label {3} -variable ${varname}(graph$cc,width) \
	-value 3 -command [list PlotLineUpdateElement $varname]
    $var(mb).data.width add radiobutton \
	-label {4} -variable ${varname}(graph$cc,width) \
	-value 4 -command [list PlotLineUpdateElement $varname]
    $var(mb).data.width add separator
    $var(mb).data.width add checkbutton \
	-label [msgcat::mc {Dash}] -variable ${varname}(graph$cc,dash) \
	-command [list PlotLineUpdateElement $varname]

    # Fill
    menu $var(mb).data.fill
    $var(mb).data.fill add checkbutton \
	-label [msgcat::mc {Show}] \
	-variable ${varname}(graph$cc,fill) \
	-command [list PlotLineUpdateElement $varname]
    $var(mb).data.fill add separator
    $var(mb).data.fill add cascade -label [msgcat::mc {Color}] \
	-menu $var(mb).data.fill.color

    PlotColorMenu $var(mb).data.fill.color $varname graph$cc,fill,color \
	[list PlotLineUpdateElement $varname]

    # Error
    PlotErrorMenu $varname
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
    
    set tt $var(graph,total)
    set cc $var(graph,current)

    # warning: uses current vars
    if {$var(graph$cc,data,total) == 0} {
 	return
    }
    
    PlotSaveState $varname

    if {$var(graph$cc,fill)} {
	set fillClr $var(graph$cc,fill,color)
    } else {
	set fillClr {}
    }

    if {$var(graph$cc,shape,fill)} {
	set clr $var(graph$cc,shape,color)
    } else {
	set clr {}
    }

    if {$var(graph$cc,dash)} {
	set dash {8 3}
    } else {
	set dash { }
    }

    if {$var(graph$cc,error)} {
	set show both
    } else {
	set show none
    }

    if {$var(graph$cc,error,cap)} {
	set cap [expr $var(graph$cc,error,width)+3]
    } else {
	set cap 0
    }

    set nn $var(graph$cc,data,current)
    $var(graph$cc) element configure "d-${nn}" \
	-label $var(graph$cc,name) -hide [expr !$var(graph$cc,show)] \
	-symbol $var(graph$cc,shape,symbol) -fill $clr -scalesymbols no \
	-pixels 5 -outline $var(graph$cc,shape,color) \
	-smooth $var(graph$cc,smooth) \
	-color $var(graph$cc,color) -areabackground $fillClr \
	-linewidth $var(graph$cc,width) -dashes $dash \
	-showerrorbars $show -errorbarcolor $var(graph$cc,error,color) \
	-errorbarwidth $var(graph$cc,error,width) -errorbarcap $cap
}

proc PlotLineButton {varname x y} {
    upvar #0 $varname var
    global $varname
}

proc PlotLineHighliteElement {varname rowlist} {
    upvar #0 $varname var
    global $varname
}

