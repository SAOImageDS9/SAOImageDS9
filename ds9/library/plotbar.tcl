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
    $var(mb).databar add command -label "[msgcat::mc {Name}]..." \
	-command [list DatasetNameDialog $varname]
    $var(mb).databar add separator
    $var(mb).databar add cascade -label [msgcat::mc {Border Color}] \
	-menu $var(mb).databar.bordercolor
    $var(mb).databar add cascade -label [msgcat::mc {Border Width}] \
	-menu $var(mb).databar.borderwidth
    $var(mb).databar add checkbutton -label [msgcat::mc {Fill}] \
	-variable ${varname}(graph,ds,bar,fill) \
	-command [list PlotBarUpdateElement $varname]
    $var(mb).databar add cascade -label [msgcat::mc {Color}] \
	-menu $var(mb).databar.color
    $var(mb).databar add command -label "[msgcat::mc {Bar Width}]..." \
	-command [list PlotBarWidthDialog $varname]
    $var(mb).databar add separator
    $var(mb).databar add cascade -label [msgcat::mc {Error}] \
	-menu $var(mb).databar.error

    ColorMenu $var(mb).databar.bordercolor $varname graph,ds,bar,border,color \
	[list PlotBarUpdateElement $varname]

    # Width
    ThemeMenu $var(mb).databar.borderwidth
    $var(mb).databar.borderwidth add radiobutton \
	-label {1} -variable ${varname}(graph,ds,bar,border,width) \
	-value 1 -command [list PlotBarUpdateElement $varname]
    $var(mb).databar.borderwidth add radiobutton \
	-label {2} -variable ${varname}(graph,ds,bar,border,width) \
	-value 2 -command [list PlotBarUpdateElement $varname]
    $var(mb).databar.borderwidth add radiobutton \
	-label {3} -variable ${varname}(graph,ds,bar,border,width) \
	-value 3 -command [list PlotBarUpdateElement $varname]
    $var(mb).databar.borderwidth add radiobutton \
	-label {4} -variable ${varname}(graph,ds,bar,border,width) \
	-value 4 -command [list PlotBarUpdateElement $varname]

    ColorMenu $var(mb).databar.color $varname graph,ds,bar,color \
	[list PlotBarUpdateElement $varname]

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

    ColorMenu $var(mb).databar.error.color $varname graph,ds,error,color \
	[list PlotBarUpdateElement $varname]
    WidthDashMenu $var(mb).databar.error.width $varname graph,ds,error,width \
	{} [list PlotBarUpdateElement $varname] {}
}

proc PlotBarWidthDialog {varname} {
    upvar #0 $varname var
    global $varname

    global ed

    set w {.apbarwidth}
    set mb {.apbarwidthmb}

    set ed(top) $w
    set ed(ok) 0
    set ed(width) $var(graph,ds,bar,width)

    DialogCreate $w [msgcat::mc {Bar Width}] ed(ok)

    $w configure -menu $mb
    ThemeMenu $mb

    # file
    $mb add cascade -label [msgcat::mc {File}] -menu $mb.file
    ThemeMenu $mb.file
    $mb.file add command -label [msgcat::mc {Apply}] -command {set ed(ok) 1}
    $mb.file add separator
    $mb.file add command -label [msgcat::mc {Cancel}] -command {set ed(ok) 0}

    # edit
    $mb add cascade -label [msgcat::mc {Edit}] -menu $mb.edit
    EditMenu $mb ed

    # Param
    set f [ttk::frame $w.param]
    ttk::label $f.title -text [msgcat::mc {Bar Width}]
    ttk::entry $f.width -textvariable ed(width) -width 13

    grid $f.title $f.width -padx 2 -pady 2 -sticky w

    # Buttons
    set f [ttk::frame $w.buttons]
    ttk::button $f.ok -text [msgcat::mc {OK}] -command {set ed(ok) 1} \
	-default active
    ttk::button $f.cancel -text [msgcat::mc {Cancel}] -command {set ed(ok) 0}
    pack $f.ok $f.cancel -side left -expand true -padx 2 -pady 4

    bind $w <Return> {set ed(ok) 1}

    # Fini
    ttk::separator $w.sep -orient horizontal
    pack $w.buttons $w.sep -side bottom -fill x
    pack $w.param -side top -fill both -expand true

    DialogCenter $w 
    DialogWait $w ed(ok) $w.param.width
    DialogDismiss $w
    destroy $mb

    if {$ed(ok)} {
	set ${varname}(graph,ds,bar,width) $ed(width)
	PlotBarUpdateElement $varname
    }

    set rr $ed(ok)
    unset ed
    return $rr
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
    
    if {$var(canvas,theme)} {
#	set color [ThemeTreeBackground]
	set color [ThemeBold]
	set errorcolor [ThemeBold]
    } else {
	set color $var(graph,ds,bar,border,color)
	set errorcolor $var(graph,ds,error,color)
    }

    if {$var(graph,ds,bar,fill)} {
	if {$var(canvas,theme)} {
	    set fillColor [ThemeBold]
	} else {
	    set fillColor $var(graph,ds,bar,color)
	}
    } else {
	if {$var(canvas,theme)} {
	    set fillColor [ThemeTreeBackground]
	} else {
	    set fillColor $var(canvas,background)
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
