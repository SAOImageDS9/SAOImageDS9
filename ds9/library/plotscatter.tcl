#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

# used by backup
proc PlotScatterTool {} {
    global iap

    PlotScatter $iap(tt) [msgcat::mc {Scatter Plot Tool}] {} {} {} 2 {}
}

proc PlotScatter {tt wtt title xaxis yaxis dim data} {
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

    PlotScatterDialog $varname $wtt $title $xaxis $yaxis
    
    PlotDataSet $varname $dim $data
    $var(proc,updategraph) $varname
    PlotStats $varname
    PlotList $varname
}

proc PlotScatterDialog {varname wtt title xaxis yaxis} {
    upvar #0 $varname var
    global $varname

    set var(proc,addgraph) PlotScatterAddGraph
    set var(proc,updategraph) PlotUpdateGraph
    set var(proc,updateelement) PlotScatterUpdateElement
    set var(proc,highlite) PlotScatterHighliteElement
    set var(proc,button) PlotScatterButton

    PlotDialog $varname $wtt $title $xaxis $yaxis
    PlotAddGraph $varname

    # Data
    $var(mb).data add checkbutton -label [msgcat::mc {Show}] \
	-variable ${varname}(show) \
	-command [list PlotScatterUpdateElement $varname]
    $var(mb).data add separator
    $var(mb).data add cascade -label [msgcat::mc {Shape}] \
	-menu $var(mb).data.shape
    $var(mb).data add cascade -label [msgcat::mc {Error}] \
	-menu $var(mb).data.error
    $var(mb).data add separator
    $var(mb).data add command -label "[msgcat::mc {Name}]..." \
	-command [list DatasetNameDialog $varname]

    # Shape
    menu $var(mb).data.shape
    $var(mb).data.shape add radiobutton \
	-label [msgcat::mc {Circle}] \
	-variable ${varname}(shape,symbol) -value circle \
	-command [list PlotScatterUpdateElement $varname]
    $var(mb).data.shape add radiobutton \
	-label [msgcat::mc {Square}] \
	-variable ${varname}(shape,symbol) -value square \
	-command [list PlotScatterUpdateElement $varname]
    $var(mb).data.shape add radiobutton \
	-label [msgcat::mc {Diamond}] \
	-variable ${varname}(shape,symbol) -value diamond \
	-command [list PlotScatterUpdateElement $varname]
    $var(mb).data.shape add radiobutton \
	-label [msgcat::mc {Plus}] \
	-variable ${varname}(shape,symbol) -value plus \
	-command [list PlotScatterUpdateElement $varname]
    $var(mb).data.shape add radiobutton \
	-label [msgcat::mc {Cross}] \
	-variable ${varname}(shape,symbol) -value cross \
	-command [list PlotScatterUpdateElement $varname]
    $var(mb).data.shape add radiobutton \
	-label [msgcat::mc {Simple Plus}] \
	-variable ${varname}(shape,symbol) -value splus \
	-command [list PlotScatterUpdateElement $varname]
    $var(mb).data.shape add radiobutton \
	-label [msgcat::mc {Simple Cross}] \
	-variable ${varname}(shape,symbol) -value scross \
	-command [list PlotScatterUpdateElement $varname]
    $var(mb).data.shape add radiobutton \
	-label [msgcat::mc {Triangle}] \
	-variable ${varname}(shape,symbol) -value triangle \
	-command [list PlotScatterUpdateElement $varname]
    $var(mb).data.shape add radiobutton \
	-label [msgcat::mc {Arrow}] \
	-variable ${varname}(shape,symbol) -value arrow \
	-command [list PlotScatterUpdateElement $varname]
    $var(mb).data.shape add separator
    $var(mb).data.shape add checkbutton \
	-label [msgcat::mc {Fill}] \
	-variable ${varname}(shape,fill) \
	-command [list PlotScatterUpdateElement $varname]
    $var(mb).data.shape add cascade -label [msgcat::mc {Color}] \
	-menu $var(mb).data.shape.color
		  
    # Color
    PlotColorMenu $var(mb).data.shape.color $varname shape,color \
	[list PlotScatterUpdateElement $varname]

    # Error
    menu $var(mb).data.error
    $var(mb).data.error add checkbutton -label [msgcat::mc {Show}] \
	-variable ${varname}(error) \
	-command [list PlotScatterUpdateElement $varname]
    $var(mb).data.error add checkbutton -label [msgcat::mc {Cap}] \
	-variable ${varname}(error,cap) \
	-command [list PlotScatterUpdateElement $varname]
    $var(mb).data.error add separator
    $var(mb).data.error add cascade -label [msgcat::mc {Color}] \
	-menu $var(mb).data.error.color
    $var(mb).data.error add cascade -label [msgcat::mc {Width}] \
	-menu $var(mb).data.error.width

    PlotColorMenu $var(mb).data.error.color $varname error,color \
	[list PlotScatterUpdateElement $varname]
    WidthDashMenu $var(mb).data.error.width $varname error,width {} \
	[list PlotScatterUpdateElement $varname] {}
}

proc PlotScatterAddGraph {varname} {
    upvar #0 $varname var
    global $varname

    set cc  $var(graph,current)

    set var(type$cc) scatter
    set var(graph$cc) [blt::graph $var(canvas).gr$cc \
			   -width 600 \
			   -height 500 \
			   -highlightthickness 0 \
			  ]
}

proc PlotScatterUpdateElement {varname} {
    upvar #0 $varname var
    global $varname

    set tt $var(graph,total)
    set cc $var(graph,current)

    # warning: uses current vars
    if {$var(graph$cc,data,total) == 0} {
 	return
    }
    
    set nn $var(graph$cc,data,current)
    PlotGetVar $varname $nn

    if {$var(shape,symbol) == "none"} {
	set var(shape,symbol) circle
    }

    if {$var(shape,fill)} {
	set clr $var(shape,color)
    } else {
	set clr {}
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

    $var(graph$cc) element configure "d-${nn}" \
	-label $var(name) -hide [expr !$var(show)] \
	-symbol $var(shape,symbol) -fill $clr -scalesymbols no \
	-outline $var(shape,color) \
	-linewidth 0 -pixels 5 \
	-showerrorbars $show -errorbarcolor $var(error,color) \
	-errorbarwidth $var(error,width) -errorbarcap $cap

    $var(graph$cc) pen configure active -color blue \
	-symbol $var(shape,symbol) \
	-linewidth 0 -pixels 5 \
	-showerrorbars $show -errorbarcolor $var(error,color) \
	-errorbarwidth $var(error,width) -errorbarcap $cap
}

proc PlotScatterButton {varname x y} {
    upvar #0 $varname var
    global $varname

    set tt $var(graph,total)
    set cc $var(graph,current)

    if {$var(graph$cc,data,total) == 0} {
	return
    }

    if {$var(callback) == {}} {
	return
    }

    set rr [$var(graph$cc) element closest $x $y]
    set elem [lindex $rr 1]
    set row [lindex $rr 3]

    if {$elem != {}} {
	if {$row != {}} {
	    $var(graph$cc) element deactivate $elem
	    $var(graph$cc) element activate $elem $row
	    # rows start at 1
	    eval "$var(callback) [expr $row+1]"
	} else {
	    $var(graph$cc) element deactivate $elem
	    eval "$var(callback) {}"
	}
    }
}

proc PlotScatterHighliteElement {varname rowlist} {
    upvar #0 $varname var
    global $varname

    set tt $var(graph,total)
    set cc $var(graph,current)

    if {$var(graph$cc,data,total) == 0} {
	return
    }

    if {$var(show)} {
	$var(graph$cc) element deactivate d-1
	if {$rowlist != {}} {
	    # can have multiple rows
	    eval "$var(graph$cc) element activate d-1 $rowlist"
	}
    }
}
