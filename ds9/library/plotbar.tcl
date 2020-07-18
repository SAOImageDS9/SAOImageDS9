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

    PlotDialog $varname $wtt
    PlotAddGraph $varname bar
    PlotTitle $varname $title $xaxis $yaxis
    PlotAddDataSet $varname $dim $data
    PlotStats $varname
    PlotList $varname
}

proc PlotBarMenus {varname} {
    upvar #0 $varname var
    global $varname

    # Data
    ThemeMenu $var(mb).databar
    $var(mb).databar add checkbutton -label [msgcat::mc {Show}] \
	-variable ${varname}(graph,ds,show) \
	-command [list PlotBarUpdateElement $varname]
    $var(mb).databar add separator
    $var(mb).databar add cascade -label [msgcat::mc {Color}] \
	-menu $var(mb).databar.color
    $var(mb).databar add cascade -label [msgcat::mc {Relief}] \
	-menu $var(mb).databar.relief
    $var(mb).databar add cascade -label [msgcat::mc {Error}] \
	-menu $var(mb).databar.error
    $var(mb).databar add separator
    $var(mb).databar add command -label "[msgcat::mc {Name}]..." \
	-command [list DatasetNameDialog $varname]

    PlotColorMenu $var(mb).databar.color $varname graph,ds,color \
	[list PlotBarUpdateElement $varname]

    # Relief
    ThemeMenu $var(mb).databar.relief
    $var(mb).databar.relief add radiobutton -label [msgcat::mc {Flat}] \
	-variable ${varname}(graph,ds,bar,relief) -value flat \
	-command [list PlotBarUpdateElement $varname]
    $var(mb).databar.relief add radiobutton -label [msgcat::mc {Sunken}] \
	-variable ${varname}(graph,ds,bar,relief) -value sunken \
	-command [list PlotBarUpdateElement $varname]
    $var(mb).databar.relief add radiobutton -label [msgcat::mc {Raised}] \
	-variable ${varname}(graph,ds,bar,relief) -value raised \
	-command [list PlotBarUpdateElement $varname]
    $var(mb).databar.relief add radiobutton -label [msgcat::mc {Solid}] \
	-variable ${varname}(graph,ds,bar,relief) -value solid \
	-command [list PlotBarUpdateElement $varname]
    $var(mb).databar.relief add radiobutton -label [msgcat::mc {Groove}] \
	-variable ${varname}(graph,ds,bar,relief) -value groove \
	-command [list PlotBarUpdateElement $varname]

    # Error
    ThemeMenu $var(mb).databar.error
    $var(mb).databar.error add checkbutton -label [msgcat::mc {Show}] \
	-variable ${varname}(graph,ds,error) \
	-command [list PlotBarUpdateElement $varname]
    $var(mb).databar.error add checkbutton -label [msgcat::mc {Cap}] \
	-variable ${varname}(graph,ds,error,cap) \
	-command [list PlotBarUpdateElement $varname]
    $var(mb).databar.error add separator
    $var(mb).databar.error add cascade -label [msgcat::mc {Color}] \
	-menu $var(mb).databar.error.color
    $var(mb).databar.error add cascade -label [msgcat::mc {Width}] \
	-menu $var(mb).databar.error.width

    PlotColorMenu $var(mb).databar.error.color $varname graph,ds,error,color \
	[list PlotBarUpdateElement $varname]
    WidthDashMenu $var(mb).databar.error.width $varname graph,ds,error,width \
	{} [list PlotBarUpdateElement $varname] {}
}

proc PlotBarAddGraph {varname} {
    upvar #0 $varname var
    global $varname

    set var(graph,type) bar
    blt::barchart $var(graph) -width 600 -height 500 -highlightthickness 0

    $var(graph) xaxis configure -grid no -stepsize 0
    $var(graph) yaxis configure -grid yes
}

proc PlotBarUpdateElement {varname} {
    upvar #0 $varname var
    global $varname

    PlotSaveState $varname

    set cc $var(graph,current)
    if {[llength $var($cc,dss)] == 0} {
 	return
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
    $var(graph) element configure $nn \
	-label $var(graph,ds,name) \
	-hide [expr !$var(graph,ds,show)] \
	-color $var(graph,ds,color) \
	-relief $var(graph,ds,bar,relief) \
	-barwidth $var(graph,ds,bar,width) \
	-showerrorbars $show \
	-errorbarcolor $var(graph,ds,error,color) \
	-errorbarwidth $var(graph,ds,error,width) \
	-errorbarcap $cap
}
