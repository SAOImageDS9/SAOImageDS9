#  Copyright (C) 1999-2022
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc IllustrateLineCreate {x1 y1 x2 y2 color width dash} {
    global ds9
    global illustrate

    if {$dash} {
	set dashlist $illustrate(dashlist)
    } else {
	set dashlist {}
    }

    set id [$ds9(canvas) create line \
		$x1 $y1 $x2 $y2 \
		-fill $color \
		-width $width \
		-dash $dashlist \
		-tags {line graphic}]

    IllustrateLineCreateHandles $id
    return $id
}

proc IllustrateLineDefault {id} {
    global ds9

    set coords [$ds9(canvas) coords $id]
    set x1 [lindex $coords 0]
    set y1 [lindex $coords 1]
    set x2 [lindex $coords 2]
    set y2 [lindex $coords 3]

    $ds9(canvas) coords $id $x1 $y1 [expr $x2+100] $y2

    IllustrateLineUpdateHandle $id
}

proc IllustrateLineDup {param} {
    global ds9
    
    foreach {coords color width dash} $param {
	set id [$ds9(canvas) create line \
		    $coords \
		    -fill $color \
		    -width $width \
		    -dash $dash \
		    -tags {line graphic}]
    }
    IllustrateLineCreateHandles $id

    return $id
}

proc IllustrateLineSave {id} {
    global ds9

    set fillcolor [$ds9(canvas) itemcget $id -fill]
    set dashlist [$ds9(canvas) itemcget $id -dash]

    return [list $id {} $fillcolor $dashlist]
}

proc IllustrateLineCopy {id} {
    global ds9
    
    set coords [$ds9(canvas) coords $id]
    set color [$ds9(canvas) itemcget $id -fill]
    set width [$ds9(canvas) itemcget $id -width]
    set dash [$ds9(canvas) itemcget $id -dash]

    return [list line [list $coords $color $width $dash]]
}

proc IllustrateLineSet {id param} {
    global ds9

    foreach {coords color width dash} $param {
	$ds9(canvas) coords $id $coords
	$ds9(canvas) itemconfigure $id -fill $color
	$ds9(canvas) itemconfigure $id -width $width
	$ds9(canvas) itemconfigure $id -dash $dash
    }

    # handles/nodes
    foreach hh [$ds9(canvas) find withtag gr${id}] {
	$ds9(canvas) itemconfigure $hh -outline $fill -fill $fill
    }

    IllustrateLineUpdateHandle $id
}

proc IllustrateLineList {id} {
    global ds9

    set coords [$ds9(canvas) coords $id]
    set color [$ds9(canvas) itemcget $id -fill]
    set width [$ds9(canvas) itemcget $id -width]

    if {[$ds9(canvas) itemcget $id -dash] != {}} {
	set dash 1
    } else {
	set dash 0
    }
    
    set rr "line $coords"

    if {$color != {cyan} || $width != 1 || $dash} {

	append rr " #"
	if {$color != {cyan}} {
	    append rr " color = $color"
	}
	if {$width != 1} {
	    append rr " width = $width"
	}
	if {$dash} {
	    append rr " dash = yes"
	}
    }

    return $rr
}

proc IllustrateLineCreateHandles {id} {
    global ds9

    set rr 2

    set color [$ds9(canvas) itemcget $id -fill]
    set bbox [$ds9(canvas) coords $id]

    set bbx1 [lindex $bbox 0]
    set bby1 [lindex $bbox 1]
    set bbx2 [lindex $bbox 2]
    set bby2 [lindex $bbox 3]

    set h1 [$ds9(canvas) create rectangle \
		[expr $bbx1-$rr] [expr $bby1-$rr] \
		[expr $bbx1+$rr] [expr $bby1+$rr]\
		-outline $color -fill $color \
		-state hidden \
		-tags [list handle gr${id} h1]]
    $ds9(canvas) raise $h1 $id

    set h2 [$ds9(canvas) create rectangle \
		[expr $bbx2-$rr] [expr $bby2-$rr] \
		[expr $bbx2+$rr] [expr $bby2+$rr]\
		-outline $color -fill $color \
		-state hidden \
		-tags [list handle gr${id} h2]]
    $ds9(canvas) raise $h2 $id
}

proc IllustrateLineUpdateHandle {id} {
    global ds9
    global illustrate
    global iillustrate

    set rr 2
    set bbox [$ds9(canvas) coords $id]
    set bbx1 [lindex $bbox 0]
    set bby1 [lindex $bbox 1]
    set bbx2 [lindex $bbox 2]
    set bby2 [lindex $bbox 3]

    set hh [$ds9(canvas) find withtag "gr${id} && h1"]
    $ds9(canvas) coords $hh \
	[expr $bbx1-$rr] [expr $bby1-$rr] \
	[expr $bbx1+$rr] [expr $bby1+$rr]

    set hh [$ds9(canvas) find withtag "gr${id} && h2"]
    $ds9(canvas) coords $hh \
	[expr $bbx2-$rr] [expr $bby2-$rr] \
	[expr $bbx2+$rr] [expr $bby2+$rr]
}

proc IllustrateLineEdit {id xx yy} {
    global ds9
    global iillustrate
    
    set coords [$ds9(canvas) coords $id]
    set x1 [lindex $coords 0]
    set y1 [lindex $coords 1]
    set x2 [lindex $coords 2]
    set y2 [lindex $coords 3]

    switch $iillustrate(handle) {
	1 {$ds9(canvas) coords $id $xx $yy $x2 $y2}
	2 {$ds9(canvas) coords $id $x1 $y1 $xx $yy}
    }
}

proc IllustrateLineAntsOn {id} {
    global ds9
    
    $ds9(canvas) itemconfigure $id \
	-fill white \
	-dash {8 3}
}

proc IllustrateLineAntsOff {gr} {
    global ds9

    foreach {id color fillcolor dashlist} $gr {
	$ds9(canvas) itemconfigure $id \
	    -fill $fillcolor \
	    -dash $dashlist
    }
}

# Dialog

proc IllustrateLineDialog {id} {
    global iillustrate

    set varname ${iillustrate(prefix,dialog)}${id}
    global $varname
    upvar #0 $varname var

    global ds9

    set var(id) $id
    set var(top) ".${varname}"
    set var(mb) ".${varname}mb"

    # see if we already have a header window visible
    if {[winfo exists $var(top)]} {
	raise $var(top)
	return
    }

    # variables
    set var(x1) 0
    set var(y1) 0
    set var(x2) 0
    set ver(y2) 0

    # window
    Toplevel $var(top) $var(mb) 6 [msgcat::mc {Line}] \
	[list IllustrateBaseClose $varname]

    $var(mb) add cascade -label [msgcat::mc {File}] -menu $var(mb).file
    $var(mb) add cascade -label [msgcat::mc {Edit}] -menu $var(mb).edit
    $var(mb) add cascade -label [msgcat::mc {Color}] -menu $var(mb).color
    $var(mb) add cascade -label [msgcat::mc {Width}] -menu $var(mb).width

    ThemeMenu $var(mb).file
    $var(mb).file add command -label [msgcat::mc {Apply}] \
	-command [list IllustrateLineApply $varname]
    $var(mb).file add separator
    $var(mb).file add command -label [msgcat::mc {Close}] \
	-command [list IllustrateBaseClose $varname] \
	-accelerator "${ds9(ctrl)}W"
    bind $var(top) <<Close>> [list IllustrateBaseClose $varname]

    EditMenu $var(mb) $varname
    ColorMenu $var(mb).color $varname color \
	[list IllustrateLineColor $varname]
    WidthDashMenu $var(mb).width $varname width dash \
	[list IllustrateBaseWidth $varname] [list IllustrateBaseWidth $varname]

    set f $var(top).param

    # Param
    set f [ttk::frame $var(top).param]
    ttk::label $f.tid -text [msgcat::mc {Number}]
    ttk::label $f.id -text "$var(id)"
    grid $f.tid $f.id -padx 2 -pady 2 -sticky w

    # Center
    ttk::label $f.ttitle -text [msgcat::mc {Points}]
    ttk::entry $f.x1 -textvariable ${varname}(x1) -width 13
    ttk::entry $f.y1 -textvariable ${varname}(y1) -width 13
    ttk::entry $f.x2 -textvariable ${varname}(x2) -width 13
    ttk::entry $f.y2 -textvariable ${varname}(y2) -width 13
    grid $f.ttitle $f.x1 $f.y1 -padx 2 -pady 2 -sticky w
    grid x $f.x2 $f.y2 -padx 2 -pady 2 -sticky w

    # Buttons
    set f [ttk::frame $var(top).buttons]
    ttk::button $f.apply -text [msgcat::mc {Apply}] \
	-command [list IllustrateLineApply $varname]
    ttk::button $f.close -text [msgcat::mc {Close}] \
	-command [list IllustrateBaseClose $varname]
    pack $f.apply $f.close -side left -expand true -padx 2 -pady 4

    bind $var(top) <Return> [list IllustrateLineApply $varname]

    # Fini
    ttk::separator $var(top).sep -orient horizontal
    pack $var(top).buttons $var(top).sep -side bottom -fill x
    pack $var(top).param -side top -fill both -expand true
    
    # init
    IllustrateLineEditCB $var(id)
    IllustrateLineColorCB $var(id)
    IllustrateBaseWidthCB $var(id)
}

proc IllustrateLineColor {varname} {
    upvar #0 $varname var
    global $varname

    IllustrateLineColorSet $var(id) $var(color)
}

proc IllustrateLineColorSet {id color} {
    global ds9
    
    $ds9(canvas) itemconfigure $id \
	-fill $color

    # handles/nodes
    foreach hh [$ds9(canvas) find withtag gr${id}] {
	$ds9(canvas) itemconfigure $hh -outline $color -fill $color
    }
}

proc IllustrateLineApply {varname} {
    upvar #0 $varname var
    global $varname

    global ds9
    
    if {$var(x1) != {} && $var(y1) != {} &&
	$var(x2) != {} && $var(y2) != {}} {

	$ds9(canvas) coords $var(id) \
	    $var(x1) $var(y1) $var(x2) $var(y2)

	IllustrateLineUpdateHandle $var(id)
    }
}

# callbacks

proc IllustrateLineEditCB {id} {
    global iillustrate

    set varname ${iillustrate(prefix,dialog)}${id}
    global $varname
    upvar #0 $varname var

    if {![info exists $varname]} {
	return
    }

    global ds9

    set coords [$ds9(canvas) coords $id]
    set var(x1) [lindex $coords 0]
    set var(y1) [lindex $coords 1]
    set var(x2) [lindex $coords 2]
    set var(y2) [lindex $coords 3]
}

proc IllustrateLineColorCB {id} {
    global iillustrate

    set varname ${iillustrate(prefix,dialog)}${id}
    global $varname
    upvar #0 $varname var

    if {![info exists $varname]} {
	return
    }

    global ds9

    set var(color) [$ds9(canvas) itemcget $var(id) -fill]
}

