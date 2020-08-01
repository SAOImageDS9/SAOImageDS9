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
    ThemeMenu $var(mb).ds
    $var(mb).ds add checkbutton -label [msgcat::mc {Show}] \
	-variable ${varname}(graph,ds,show) \
	-command [list PlotBarUpdateElement $varname]
    $var(mb).ds add separator
    $var(mb).ds add cascade -label [msgcat::mc {Color}] \
	-menu $var(mb).ds.color
    $var(mb).ds add cascade -label [msgcat::mc {Width}] \
	-menu $var(mb).ds.width
    $var(mb).ds add cascade -label [msgcat::mc {Fill}] \
	-menu $var(mb).ds.fill
    $var(mb).ds add cascade -label [msgcat::mc {Error}] \
	-menu $var(mb).ds.error
    $var(mb).ds add separator
    $var(mb).ds add command -label "[msgcat::mc {Name}]..." \
	-command [list DatasetNameDialog $varname]

    PlotColorMenu $var(mb).ds.color $varname graph,ds,bar,border,color \
	[list PlotBarUpdateElement $varname]

    # Width
    ThemeMenu $var(mb).ds.width
    $var(mb).ds.width add radiobutton \
	-label {0} -variable ${varname}(graph,ds,bar,border,width) \
	-value 0 -command [list PlotBarUpdateElement $varname]
    $var(mb).ds.width add radiobutton \
	-label {1} -variable ${varname}(graph,ds,bar,border,width) \
	-value 1 -command [list PlotBarUpdateElement $varname]
    $var(mb).ds.width add radiobutton \
	-label {2} -variable ${varname}(graph,ds,bar,border,width) \
	-value 2 -command [list PlotBarUpdateElement $varname]
    $var(mb).ds.width add radiobutton \
	-label {3} -variable ${varname}(graph,ds,bar,border,width) \
	-value 3 -command [list PlotBarUpdateElement $varname]
    $var(mb).ds.width add radiobutton \
	-label {4} -variable ${varname}(graph,ds,bar,border,width) \
	-value 4 -command [list PlotBarUpdateElement $varname]

    # Fill
    ThemeMenu $var(mb).ds.fill
    $var(mb).ds.fill add checkbutton \
	-label [msgcat::mc {Show}] \
	-variable ${varname}(graph,ds,bar,fill) \
	-command [list PlotBarUpdateElement $varname]
    $var(mb).ds.fill add separator
    $var(mb).ds.fill add cascade -label [msgcat::mc {Color}] \
	-menu $var(mb).ds.fill.color

    PlotColorMenu $var(mb).ds.fill.color $varname graph,ds,bar,fill,color \
	[list PlotBarUpdateElement $varname]

    # Error
    ThemeMenu $var(mb).ds.error
    $var(mb).ds.error add checkbutton -label [msgcat::mc {Show}] \
	-variable ${varname}(graph,ds,error) \
	-command [list PlotBarUpdateElement $varname]
    $var(mb).ds.error add checkbutton -label [msgcat::mc {Cap}] \
	-variable ${varname}(graph,ds,error,cap) \
	-command [list PlotBarUpdateElement $varname]
    $var(mb).ds.error add separator
    $var(mb).ds.error add cascade -label [msgcat::mc {Color}] \
	-menu $var(mb).ds.error.color
    $var(mb).ds.error add cascade -label [msgcat::mc {Width}] \
	-menu $var(mb).ds.error.width

    PlotColorMenu $var(mb).ds.error.color $varname graph,ds,error,color \
	[list PlotBarUpdateElement $varname]
    WidthDashMenu $var(mb).ds.error.width $varname graph,ds,error,width \
	{} [list PlotBarUpdateElement $varname] {}
}

proc PlotBarAddGraph {varname} {
    upvar #0 $varname var
    global $varname

    set var(graph,type) bar
    blt::barchart $var(graph) \
	-width 600 \
	-height 500 \
	-highlightthickness 0 \
	-barmode normal
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
    
    if {$var(theme)} {
	set color [ThemeTreeBackground]
	set errorcolor [ThemeBold]
    } else {
	set color $var(graph,ds,bar,border,color)
	set errorcolor $var(graph,ds,error,color)
    }

    if {$var(graph,ds,bar,fill)} {
	if {$var(theme)} {
	    set fillColor [ThemeBold]
	} else {
	    set fillColor $var(graph,ds,bar,fill,color)
	}
    } else {
	if {$var(theme)} {
	    set fillColor [ThemeTreeBackground]
	} else {
	    set fillColor $var(background)
	}
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
	-outline $color \
	-fill $fillColor \
	-borderwidth $var(graph,ds,bar,border,width) \
	-relief flat \
	-barwidth $var(graph,ds,bar,width) \
	-showerrorbars $show \
	-errorbarcolor $errorcolor \
	-errorbarwidth $var(graph,ds,error,width) \
	-errorbarcap $cap
}
