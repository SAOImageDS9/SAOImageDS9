#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

# used by backup
proc PlotBarTool {} {
    global iap
    PlotBar $iap(tt) [msgcat::mc {Bar Plot Tool}] {} {} {} 2 {}
}

proc PlotBar {tt wtt title xaxis yaxis dim data} {
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

    PlotBarProc $varname
    PlotDialog $varname $wtt $title $xaxis $yaxis
    PlotDialogBar $varname

    PlotDataSet $varname $dim $data
    $var(proc,updategraph) $varname
    PlotStats $varname
    PlotList $varname
}

proc PlotBarDialog {varname wtt title xaxis yaxis} {
    upvar #0 $varname var
    global $varname

    PlotBarProc $varname
    PlotDialog $varname $wtt $title $xaxis $yaxis
    PlotDialogBar $varname
}

proc PlotBarProc {varname} {
    upvar #0 $varname var
    global $varname

    set var(proc,updategraph) PlotBarUpdateGraph
    set var(proc,updateelement) PlotBarUpdateElement
    set var(proc,highlite) PlotBarHighliteElement
    set var(proc,button) PlotBarButton
}

proc PlotDialogBar {varname} {
    upvar #0 $varname var
    global $varname

    global ds9

    set var(seq) 1

    # Graph
    $var(mb).graph add separator
    $var(mb).graph add cascade -label "[msgcat::mc {Mode}]..." \
	-menu $var(mb).graph.mode

    # Graph Mode
    menu $var(mb).graph.mode
    $var(mb).graph.mode add radiobutton -label [msgcat::mc {Normal}] \
	-variable ${varname}(bar,mode) -value normal \
	-command [list $var(proc,updategraph) $varname]
    $var(mb).graph.mode add radiobutton -label [msgcat::mc {Stacked}] \
	-variable ${varname}(bar,mode) -value stacked \
	-command [list $var(proc,updategraph) $varname]
    $var(mb).graph.mode add radiobutton -label [msgcat::mc {Aligned}] \
	-variable ${varname}(bar,mode) -value aligned \
	-command [list $var(proc,updategraph) $varname]
    $var(mb).graph.mode add radiobutton -label [msgcat::mc {Overlap}] \
	-variable ${varname}(bar,mode) -value overlap \
	-command [list $var(proc,updategraph) $varname]

    # Dataset
    $var(mb).dataset add checkbutton -label [msgcat::mc {Show}] \
	-variable ${varname}(show) \
	-command [list PlotBarUpdateElement $varname]
    $var(mb).dataset add separator
    $var(mb).dataset add cascade -label [msgcat::mc {Color}] \
	-menu $var(mb).dataset.color
    $var(mb).dataset add cascade -label [msgcat::mc {Relief}] \
	-menu $var(mb).dataset.relief
    $var(mb).dataset add cascade -label [msgcat::mc {Error}] \
	-menu $var(mb).dataset.error
    $var(mb).dataset add separator
    $var(mb).dataset add command -label "[msgcat::mc {Name}]..." \
	-command [list DatasetNameDialog $varname]

    PlotColorMenu $var(mb).dataset.color $varname color \
	[list PlotBarUpdateElement $varname]

    # Relief
    menu $var(mb).dataset.relief
    $var(mb).dataset.relief add radiobutton -label [msgcat::mc {Flat}] \
	-variable ${varname}(bar,relief) -value flat \
	-command [list PlotBarUpdateElement $varname]
    $var(mb).dataset.relief add radiobutton -label [msgcat::mc {Sunken}] \
	-variable ${varname}(bar,relief) -value sunken \
	-command [list PlotBarUpdateElement $varname]
    $var(mb).dataset.relief add radiobutton -label [msgcat::mc {Raised}] \
	-variable ${varname}(bar,relief) -value raised \
	-command [list PlotBarUpdateElement $varname]
    $var(mb).dataset.relief add radiobutton -label [msgcat::mc {Solid}] \
	-variable ${varname}(bar,relief) -value solid \
	-command [list PlotBarUpdateElement $varname]
    $var(mb).dataset.relief add radiobutton -label [msgcat::mc {Groove}] \
	-variable ${varname}(bar,relief) -value groove \
	-command [list PlotBarUpdateElement $varname]

    # Error
    menu $var(mb).dataset.error
    $var(mb).dataset.error add checkbutton -label [msgcat::mc {Show}] \
	-variable ${varname}(error) \
	-command [list PlotBarUpdateElement $varname]
    $var(mb).dataset.error add checkbutton -label [msgcat::mc {Cap}] \
	-variable ${varname}(error,cap) \
	-command [list PlotBarUpdateElement $varname]
    $var(mb).dataset.error add separator
    $var(mb).dataset.error add cascade -label [msgcat::mc {Color}] \
	-menu $var(mb).dataset.error.color
    $var(mb).dataset.error add cascade -label [msgcat::mc {Width}] \
	-menu $var(mb).dataset.error.width

    PlotColorMenu $var(mb).dataset.error.color $varname error,color \
	[list PlotBarUpdateElement $varname]
    WidthDashMenu $var(mb).dataset.error.width $varname error,width {} \
	[list PlotBarUpdateElement $varname] {}

    # graph
    set var(type) bar
    set var(graph) [blt::barchart $var(top).bar \
			-width 600 \
			-height 500 \
			-highlightthickness 0 \
		       ]

    $var(graph) xaxis configure -grid no -stepsize 0
    $var(graph) yaxis configure -grid yes

    pack $var(graph) -expand yes -fill both
    PlotChangeMode $varname
}

proc PlotBarUpdateGraph {varname} {
    upvar #0 $varname var
    global $varname

    PlotUpdateGraph $varname
    $var(graph) configure -barmode $var(bar,mode)
}

proc PlotBarUpdateElement {varname} {
    upvar #0 $varname var
    global $varname

    set nn $var(data,current)
    PlotGetVar $varname $nn

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
	-relief $var(bar,relief) -color $var(color) \
	-showerrorbars $show -errorbarcolor $var(error,color) \
	-errorbarwidth $var(error,width) -errorbarcap $cap
}

proc PlotBarButton {varname x y} {
    upvar #0 $varname var
    global $varname
}

proc PlotBarHighliteElement {varname rowlist} {
    upvar #0 $varname var
    global $varname
}
