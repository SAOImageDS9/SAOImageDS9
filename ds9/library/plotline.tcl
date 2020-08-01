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
    PlotAddGraph $varname line
    PlotTitle $varname $title $xaxis $yaxis
    PlotAddDataSet $varname $dim $data
    PlotStats $varname
    PlotList $varname
}

proc PlotLineMenus {varname} {
    upvar #0 $varname var
    global $varname

    # Data
    ThemeMenu $var(mb).ds
    $var(mb).ds add checkbutton -label [msgcat::mc {Show}] \
	-variable ${varname}(graph,ds,show) \
	-command [list PlotLineUpdateElement $varname]
    $var(mb).ds add separator
    $var(mb).ds add cascade -label [msgcat::mc {Color}] \
	-menu $var(mb).ds.color
    $var(mb).ds add cascade -label [msgcat::mc {Width}] \
	-menu $var(mb).ds.width
    $var(mb).ds add cascade -label [msgcat::mc {Fill}] \
	-menu $var(mb).ds.fill
    $var(mb).ds add cascade -label [msgcat::mc {Shape}] \
	-menu $var(mb).ds.shape
    $var(mb).ds add cascade -label [msgcat::mc {Smooth}] \
	-menu $var(mb).ds.smooth
    $var(mb).ds add cascade -label [msgcat::mc {Error}] \
	-menu $var(mb).ds.error
    $var(mb).ds add separator
    $var(mb).ds add command -label "[msgcat::mc {Name}]..." \
	-command [list DatasetNameDialog $varname]

    # Color
    PlotColorMenu $var(mb).ds.color $varname graph,ds,line,color \
	[list PlotLineUpdateElement $varname]

    # Width
    ThemeMenu $var(mb).ds.width
    $var(mb).ds.width add radiobutton \
	-label {0} -variable ${varname}(graph,ds,line,width) \
	-value 0 -command [list PlotLineUpdateElement $varname]
    $var(mb).ds.width add radiobutton \
	-label {1} -variable ${varname}(graph,ds,line,width) \
	-value 1 -command [list PlotLineUpdateElement $varname]
    $var(mb).ds.width add radiobutton \
	-label {2} -variable ${varname}(graph,ds,line,width) \
	-value 2 -command [list PlotLineUpdateElement $varname]
    $var(mb).ds.width add radiobutton \
	-label {3} -variable ${varname}(graph,ds,line,width) \
	-value 3 -command [list PlotLineUpdateElement $varname]
    $var(mb).ds.width add radiobutton \
	-label {4} -variable ${varname}(graph,ds,line,width) \
	-value 4 -command [list PlotLineUpdateElement $varname]
    $var(mb).ds.width add separator
    $var(mb).ds.width add checkbutton \
	-label [msgcat::mc {Dash}] -variable ${varname}(graph,ds,line,dash) \
	-command [list PlotLineUpdateElement $varname]

    # Fill
    ThemeMenu $var(mb).ds.fill
    $var(mb).ds.fill add checkbutton \
	-label [msgcat::mc {Show}] \
	-variable ${varname}(graph,ds,line,fill) \
	-command [list PlotLineUpdateElement $varname]
    $var(mb).ds.fill add separator
    $var(mb).ds.fill add cascade -label [msgcat::mc {Color}] \
	-menu $var(mb).ds.fill.color

    PlotColorMenu $var(mb).ds.fill.color \
	$varname graph,ds,line,fill,color [list PlotLineUpdateElement $varname]

    # Shape
    ThemeMenu $var(mb).ds.shape
    $var(mb).ds.shape add radiobutton \
	-label [msgcat::mc {None}] \
	-variable ${varname}(graph,ds,line,shape,symbol) -value none \
	-command [list PlotLineUpdateElement $varname]
    $var(mb).ds.shape add radiobutton \
	-label [msgcat::mc {Circle}] \
	-variable ${varname}(graph,ds,line,shape,symbol) -value circle \
	-command [list PlotLineUpdateElement $varname]
    $var(mb).ds.shape add radiobutton \
	-label [msgcat::mc {Square}] \
	-variable ${varname}(graph,ds,line,shape,symbol) -value square \
	-command [list PlotLineUpdateElement $varname]
    $var(mb).ds.shape add radiobutton \
	-label [msgcat::mc {Diamond}] \
	-variable ${varname}(graph,ds,line,shape,symbol) -value diamond \
	-command [list PlotLineUpdateElement $varname]
    $var(mb).ds.shape add radiobutton \
	-label [msgcat::mc {Plus}] \
	-variable ${varname}(graph,ds,line,shape,symbol) -value plus \
	-command [list PlotLineUpdateElement $varname]
    $var(mb).ds.shape add radiobutton \
	-label [msgcat::mc {Cross}] \
	-variable ${varname}(graph,ds,line,shape,symbol) -value cross \
	-command [list PlotLineUpdateElement $varname]
    $var(mb).ds.shape add radiobutton \
	-label [msgcat::mc {Simple Plus}] \
	-variable ${varname}(graph,ds,line,shape,symbol) -value splus \
	-command [list PlotLineUpdateElement $varname]
    $var(mb).ds.shape add radiobutton \
	-label [msgcat::mc {Simple Cross}] \
	-variable ${varname}(graph,ds,line,shape,symbol) -value scross \
	-command [list PlotLineUpdateElement $varname]
    $var(mb).ds.shape add radiobutton \
	-label [msgcat::mc {Triangle}] \
	-variable ${varname}(graph,ds,line,shape,symbol) -value triangle \
	-command [list PlotLineUpdateElement $varname]
    $var(mb).ds.shape add radiobutton \
	-label [msgcat::mc {Arrow}] \
	-variable ${varname}(graph,ds,line,shape,symbol) -value arrow \
	-command [list PlotLineUpdateElement $varname]
    $var(mb).ds.shape add separator
    $var(mb).ds.shape add checkbutton \
	-label [msgcat::mc {Fill}] \
	-variable ${varname}(graph,ds,line,shape,fill) \
	-command [list PlotLineUpdateElement $varname]
    $var(mb).ds.shape add cascade -label [msgcat::mc {Color}] \
	-menu $var(mb).ds.shape.color

    PlotColorMenu $var(mb).ds.shape.color \
	$varname graph,ds,line,shape,color [list PlotLineUpdateElement $varname]

    # Smooth
    ThemeMenu $var(mb).ds.smooth
    $var(mb).ds.smooth add radiobutton \
	-label [msgcat::mc {Step}] \
	-variable ${varname}(graph,ds,line,smooth) -value step \
	-command [list PlotLineUpdateElement $varname]
    $var(mb).ds.smooth add radiobutton \
	-label [msgcat::mc {Linear}] \
	-variable ${varname}(graph,ds,line,smooth) -value linear \
	-command [list PlotLineUpdateElement $varname]
    $var(mb).ds.smooth add radiobutton \
	-label [msgcat::mc {Cubic}] \
	-variable ${varname}(graph,ds,line,smooth) -value cubic \
	-command [list PlotLineUpdateElement $varname]
    $var(mb).ds.smooth add radiobutton \
	-label [msgcat::mc {Quadratic}] \
	-variable ${varname}(graph,ds,line,smooth) -value quadratic \
	-command [list PlotLineUpdateElement $varname]
    $var(mb).ds.smooth add radiobutton \
	-label [msgcat::mc {Catrom}] \
	-variable ${varname}(graph,ds,line,smooth) -value catrom \
	-command [list PlotLineUpdateElement $varname]

    # Error
    ThemeMenu $var(mb).ds.error
    $var(mb).ds.error add checkbutton -label [msgcat::mc {Show}] \
	-variable ${varname}(graph,ds,error) \
	-command [list PlotLineUpdateElement $varname]
    $var(mb).ds.error add checkbutton -label [msgcat::mc {Cap}] \
	-variable ${varname}(graph,ds,error,cap) \
	-command [list PlotLineUpdateElement $varname]
    $var(mb).ds.error add separator
    $var(mb).ds.error add cascade -label [msgcat::mc {Color}] \
	-menu $var(mb).ds.error.color
    $var(mb).ds.error add cascade -label [msgcat::mc {Width}] \
	-menu $var(mb).ds.error.width

    PlotColorMenu $var(mb).ds.error.color $varname graph,ds,error,color \
	[list PlotLineUpdateElement $varname]
    WidthDashMenu $var(mb).ds.error.width $varname \
	graph,ds,error,width {} [list PlotLineUpdateElement $varname] {}
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
    
    if {$var(theme)} {
	set color [ThemeBold]
	set shapecolor [ThemeBold]
	set errorcolor [ThemeBold]
    } else {
	set color $var(graph,ds,line,color)
	set shapecolor $var(graph,ds,line,shape,color)
	set errorcolor $var(graph,ds,error,color)
    }

    if {$var(graph,ds,line,fill)} {
	if {$var(theme)} {
	    set fillColor [ThemeBold]
	} else {
	    set fillColor $var(graph,ds,line,fill,color)
	}
    } else {
	set fillColor {}
    }

    if {$var(graph,ds,line,shape,fill)} {
	if {$var(theme)} {
	    set shapefillcolor [ThemeBold]
	} else {
	    set shapefillcolor $var(graph,ds,line,shape,color)
	}
    } else {
	set shapefillcolor {}
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

