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

    PlotScatterProc $varname
    PlotDialog $varname $wtt $title $xaxis $yaxis
    PlotDialogScatter $varname

    PlotDataSet $varname $dim $data
    $var(proc,updategraph) $varname
    PlotStats $varname
    PlotList $varname
}

proc PlotScatterDialog {varname wtt title xaxis yaxis} {
    upvar #0 $varname var
    global $varname

    PlotScatterProc $varname
    PlotDialog $varname $wtt $title $xaxis $yaxis
    PlotDialogScatter $varname
}

proc PlotScatterProc {varname} {
    upvar #0 $varname var
    global $varname

    set var(proc,updategraph) PlotUpdateGraph
    set var(proc,updateelement) PlotScatterUpdateElement
    set var(proc,highlite) PlotScatterHighliteElement
    set var(proc,button) PlotScatterButton
}

proc PlotDialogScatter {varname} {
    upvar #0 $varname var
    global $varname

    global ds9

    set var(seq) 0

    # Dataset
    $var(mb).dataset add checkbutton -label [msgcat::mc {Show}] \
	-variable ${varname}(show) \
	-command [list PlotScatterUpdateElement $varname]
    $var(mb).dataset add separator
    $var(mb).dataset add cascade -label [msgcat::mc {Shape}] \
	-menu $var(mb).dataset.shape
    $var(mb).dataset add cascade -label [msgcat::mc {Error}] \
	-menu $var(mb).dataset.error
    $var(mb).dataset add separator
    $var(mb).dataset add command -label "[msgcat::mc {Name}]..." \
	-command [list DatasetNameDialog $varname]

    # Shape
    menu $var(mb).dataset.shape
    $var(mb).dataset.shape add radiobutton \
	-label [msgcat::mc {Circle}] \
	-variable ${varname}(shape,symbol) -value circle \
	-command [list PlotScatterUpdateElement $varname]
    $var(mb).dataset.shape add radiobutton \
	-label [msgcat::mc {Square}] \
	-variable ${varname}(shape,symbol) -value square \
	-command [list PlotScatterUpdateElement $varname]
    $var(mb).dataset.shape add radiobutton \
	-label [msgcat::mc {Diamond}] \
	-variable ${varname}(shape,symbol) -value diamond \
	-command [list PlotScatterUpdateElement $varname]
    $var(mb).dataset.shape add radiobutton \
	-label [msgcat::mc {Plus}] \
	-variable ${varname}(shape,symbol) -value plus \
	-command [list PlotScatterUpdateElement $varname]
    $var(mb).dataset.shape add radiobutton \
	-label [msgcat::mc {Cross}] \
	-variable ${varname}(shape,symbol) -value cross \
	-command [list PlotScatterUpdateElement $varname]
    $var(mb).dataset.shape add radiobutton \
	-label [msgcat::mc {Simple Plus}] \
	-variable ${varname}(shape,symbol) -value splus \
	-command [list PlotScatterUpdateElement $varname]
    $var(mb).dataset.shape add radiobutton \
	-label [msgcat::mc {Simple Cross}] \
	-variable ${varname}(shape,symbol) -value scross \
	-command [list PlotScatterUpdateElement $varname]
    $var(mb).dataset.shape add radiobutton \
	-label [msgcat::mc {Triangle}] \
	-variable ${varname}(shape,symbol) -value triangle \
	-command [list PlotScatterUpdateElement $varname]
    $var(mb).dataset.shape add radiobutton \
	-label [msgcat::mc {Arrow}] \
	-variable ${varname}(shape,symbol) -value arrow \
	-command [list PlotScatterUpdateElement $varname]
    $var(mb).dataset.shape add separator
    $var(mb).dataset.shape add checkbutton \
	-label [msgcat::mc {Fill}] \
	-variable ${varname}(shape,fill) \
	-command [list PlotScatterUpdateElement $varname]
    $var(mb).dataset.shape add cascade -label [msgcat::mc {Color}] \
	-menu $var(mb).dataset.shape.color
		  
    # Color
    PlotColorMenu $var(mb).dataset.shape.color $varname shape,color \
	[list PlotScatterUpdateElement $varname]

    # Error
    menu $var(mb).dataset.error
    $var(mb).dataset.error add checkbutton -label [msgcat::mc {Show}] \
	-variable ${varname}(error) \
	-command [list PlotScatterUpdateElement $varname]
    $var(mb).dataset.error add checkbutton -label [msgcat::mc {Cap}] \
	-variable ${varname}(error,cap) \
	-command [list PlotScatterUpdateElement $varname]
    $var(mb).dataset.error add separator
    $var(mb).dataset.error add cascade -label [msgcat::mc {Color}] \
	-menu $var(mb).dataset.error.color
    $var(mb).dataset.error add cascade -label [msgcat::mc {Width}] \
	-menu $var(mb).dataset.error.width

    PlotColorMenu $var(mb).dataset.error.color $varname error,color \
	[list PlotScatterUpdateElement $varname]
    WidthDashMenu $var(mb).dataset.error.width $varname error,width {} \
	[list PlotScatterUpdateElement $varname] {}

    # graph
    set var(type) scatter
    set var(graph) [blt::graph $var(top).scatter \
			-width 600 \
			-height 500 \
			-highlightthickness 0 \
		       ]

    pack $var(graph) -expand yes -fill both
    PlotChangeMode $varname
}

proc PlotScatterUpdateElement {varname} {
    upvar #0 $varname var
    global $varname

    # warning: uses current vars
    if {$var(data,total) == 0} {
 	return
    }
    
    set nn $var(data,current)
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

    $var(graph) element configure "d-${nn}" \
	-label "$var(name)" -hide [expr !$var(show)] \
	-symbol $var(shape,symbol) \
	-fill $clr -outline $var(shape,color) \
	-linewidth 0 -pixels 5 -scalesymbols no \
	-showerrorbars $show -errorbarcolor $var(error,color) \
	-errorbarwidth $var(error,width) -errorbarcap $cap

    $var(graph) pen configure active -color blue \
	-symbol $var(shape,symbol) \
	-linewidth 0 -pixels 5 \
	-showerrorbars $show -errorbarcolor $var(error,color) \
	-errorbarwidth $var(error,width) -errorbarcap $cap
}

proc PlotScatterButton {varname x y} {
    upvar #0 $varname var
    global $varname

    if {$var(data,total) == 0} {
	return
    }

    if {$var(callback) == {}} {
	return
    }

    set rr [$var(graph) element closest $x $y]
    set elem [lindex $rr 1]
    set row [lindex $rr 3]

    if {$elem != {}} {
	if {$row != {}} {
	    $var(graph) element deactivate $elem
	    $var(graph) element activate $elem $row
	    # rows start at 1
	    eval "$var(callback) [expr $row+1]"
	} else {
	    $var(graph) element deactivate $elem
	    eval "$var(callback) {}"
	}
    }
}

proc PlotScatterHighliteElement {varname rowlist} {
    upvar #0 $varname var
    global $varname

    if {$var(data,total) == 0} {
	return
    }

    if {$var(show)} {
	$var(graph) element deactivate d-1
	if {$rowlist != {}} {
	    # can have multiple rows
	    eval "$var(graph) element activate d-1 $rowlist"
	}
    }
}
