#  Copyright (C) 1999-2021
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc IllustrateBaseSaveSelection {id} {
    global ds9

    set color [$ds9(canvas) itemcget $id -outline]
    set fillcolor [$ds9(canvas) itemcget $id -fill]
    set width [$ds9(canvas) itemcget $id -width]
    set dashlist [$ds9(canvas) itemcget $id -dash]

    return [list $id $color $fillcolor $width $dashlist]
}

proc IllustrateBaseCopy {id} {
    global ds9
    
    set type [IllustrateGetType $id]
    
    set coords [$ds9(canvas) coords $id]
    set color [$ds9(canvas) itemcget $id -outline]
    set fill [$ds9(canvas) itemcget $id -fill]
    set width [$ds9(canvas) itemcget $id -width]
    set dash [$ds9(canvas) itemcget $id -dash]

    return [list $type [list $coords $color $fill $width $dash]]
}

proc IllustrateBaseSet {id param} {
    global ds9
    
    foreach {coords color fill width dash} $param {
	$ds9(canvas) coords $id $coords
	$ds9(canvas) itemconfigure $id -outline $color
	$ds9(canvas) itemconfigure $id -fill $fill
	$ds9(canvas) itemconfigure $id -width $width
	$ds9(canvas) itemconfigure $id -dash $dash
    }

    # handles/nodes
    foreach hh [$ds9(canvas) find withtag gr${id}] {
	$ds9(canvas) itemconfigure $hh -outline $color -fill $color
    }

    IllustrateBaseUpdateHandle $id
}

proc IllustrateBaseDup {type param} {
    global ds9
    
    switch $type {
	circle -
	ellipse {set tt oval}
	box {set tt rectangle}
    }

    foreach {coords color fill width dash} $param {
	set id [$ds9(canvas) create $tt \
		    $coords \
		    -outline $color \
		    -fill $fill \
		    -width $width \
		    -dash $dash \
		    -tags [list $type graphic]
	       ]
    }
    IllustrateBaseCreateHandles $id [$ds9(canvas) itemcget $id -outline]

    return $id
}

proc IllustrateBaseCreateHandles {id color} {
    global ds9

    set rr 2

    foreach {bbx1 bby1 bbx2 bby2} [$ds9(canvas) bbox $id] {}

    set h1 [$ds9(canvas) create rectangle \
		[expr $bbx1-$rr] [expr $bby1-$rr] \
		[expr $bbx1+$rr] [expr $bby1+$rr]\
		-outline $color -fill $color \
		-state hidden \
		-tags [list handle gr${id} h1]]
    $ds9(canvas) raise $h1 $id

    set h2 [$ds9(canvas) create rectangle \
		[expr $bbx2-$rr] [expr $bby1-$rr] \
		[expr $bbx2+$rr] [expr $bby1+$rr]\
		-outline $color -fill $color \
		-state hidden \
		-tags [list handle gr${id} h2]]
    $ds9(canvas) raise $h2 $id

    set h3 [$ds9(canvas) create rectangle \
		[expr $bbx2-$rr] [expr $bby2-$rr] \
		[expr $bbx2+$rr] [expr $bby2+$rr]\
		-outline $color -fill $color \
		-state hidden \
		-tags [list handle gr${id} h3]]
    $ds9(canvas) raise $h3 $id
    
    set h4 [$ds9(canvas) create rectangle \
		[expr $bbx1-$rr] [expr $bby2-$rr] \
		[expr $bbx1+$rr] [expr $bby2+$rr]\
		-outline $color -fill $color \
		-state hidden \
		-tags [list handle gr${id} h4]]
    $ds9(canvas) raise $h4 $id
}

proc IllustrateBaseUpdateHandle {id} {
    global ds9
    global illustrate
    global iillustrate

    set rr 2
    foreach {bbx1 bby1 bbx2 bby2} [$ds9(canvas) bbox $id] {}

    set hh [$ds9(canvas) find withtag "gr${id} && h1"]
    $ds9(canvas) coords $hh \
	[expr $bbx1-$rr] [expr $bby1-$rr] \
	[expr $bbx1+$rr] [expr $bby1+$rr]

    set hh [$ds9(canvas) find withtag "gr${id} && h2"]
    $ds9(canvas) coords $hh \
	[expr $bbx2-$rr] [expr $bby1-$rr] \
	[expr $bbx2+$rr] [expr $bby1+$rr]

    set hh [$ds9(canvas) find withtag "gr${id} && h3"]
    $ds9(canvas) coords $hh \
	[expr $bbx2-$rr] [expr $bby2-$rr] \
	[expr $bbx2+$rr] [expr $bby2+$rr]

    set hh [$ds9(canvas) find withtag "gr${id} && h4"]
    $ds9(canvas) coords $hh \
	[expr $bbx1-$rr] [expr $bby2-$rr] \
	[expr $bbx1+$rr] [expr $bby2+$rr]
}

proc IllustrateBaseListProps {id} {
    global ds9
    
    set color [$ds9(canvas) itemcget $id -outline]
    if {[$ds9(canvas) itemcget $id -fill] != {}} {
	set fill 1
    } else {
	set fill 0
    }
    set width [$ds9(canvas) itemcget $id -width]

    set dashlist [$ds9(canvas) itemcget $id -dash]
    if {$dashlist != {}} {
	set dash 1
    } else {
	set dash 0
    }

    set rr {}
    if {$color != {cyan} || $fill || $width != 1 || $dash} {

	append rr " #"
	if {$color != {cyan}} {
	    append rr " color = $color"
	}
	if {$fill} {
	    append rr " fill = yes"
	}
	if {$width != 1} {
	    append rr " width = $width"
	}
	if {$dash} {
	    append rr " dash = yes "
	}
    }

    return $rr
}

proc IllustrateBaseAntsOn {id} {
    global ds9

    $ds9(canvas) itemconfigure $id \
	-outline white \
	-fill {} \
	-width 1 \
	-dash {8 3}
}

proc IllustrateBaseAntsOff {gr} {
    global ds9

    foreach {id color fill width dash} $gr {
	$ds9(canvas) itemconfigure $id \
	    -outline $color \
	    -fill $fill \
	    -width $width \
	    -dash $dash
    }
}

# Dialog

proc IllustrateBaseDialog {varname} {
    global $varname
    upvar #0 $varname var

    global ds9

    set type [string totitle [IllustrateGetType $var(id)]]
    
    # variables
    set var(xc) 0
    set var(yc) 0

    # window
    Toplevel $var(top) $var(mb) 6 [msgcat::mc "$type"] \
	[list IllustrateBaseClose $varname]

    $var(mb) add cascade -label [msgcat::mc {File}] -menu $var(mb).file
    $var(mb) add cascade -label [msgcat::mc {Edit}] -menu $var(mb).edit
    $var(mb) add cascade -label [msgcat::mc {Color}] -menu $var(mb).color
    $var(mb) add cascade -label [msgcat::mc {Width}] -menu $var(mb).width

    ThemeMenu $var(mb).file
    $var(mb).file add command -label [msgcat::mc {Apply}] \
	-command [list $var(proc,apply) $varname]
    $var(mb).file add separator
    $var(mb).file add command -label [msgcat::mc {Close}] \
	-command [list IllustrateBaseClose $varname] \
	-accelerator "${ds9(ctrl)}W"
    bind $var(top) <<Close>> [list IllustrateBaseClose $varname]

    EditMenu $var(mb) $varname
    ColorFillMenu $var(mb).color $varname color fill \
	[list IllustrateBaseColorVar $varname] \
	[list IllustrateBaseColorVar $varname]
    WidthDashMenu $var(mb).width $varname width dash \
	[list IllustrateBaseWidth $varname] [list IllustrateBaseWidth $varname]

    set f $var(top).param

    # Param
    set f [ttk::frame $var(top).param]
    ttk::label $f.tid -text [msgcat::mc {Number}]
    ttk::label $f.id -text "$var(id)"
    grid $f.tid $f.id -padx 2 -pady 2 -sticky w

    # Center
    ttk::label $f.tcenter -text [msgcat::mc {Center}]
    ttk::entry $f.centerx -textvariable ${varname}(xc) -width 13
    ttk::entry $f.centery -textvariable ${varname}(yc) -width 13
    grid $f.tcenter $f.centerx $f.centery -padx 2 -pady 2 -sticky w

    # Buttons
    set f [ttk::frame $var(top).buttons]
    ttk::button $f.apply -text [msgcat::mc {Apply}] \
	-command [list $var(proc,apply) $varname]
    ttk::button $f.close -text [msgcat::mc {Close}] \
	-command [list IllustrateBaseClose $varname]
    pack $f.apply $f.close -side left -expand true -padx 2 -pady 4

    bind $var(top) <Return> [list $var(proc,apply) $varname]

    # Fini
    ttk::separator $var(top).sep -orient horizontal
    pack $var(top).buttons $var(top).sep -side bottom -fill x
    pack $var(top).param -side top -fill both -expand true
}

proc IllustrateBaseDialogClose {id} {
    global iillustrate

    set varname ${iillustrate(prefix,dialog)}${id}
    global $varname
    upvar #0 $varname var

    IllustrateBaseClose $varname
}

proc IllustrateBaseClose {varname} {
    upvar #0 $varname var
    global $varname

    # destroy the window and menubar
    if {[winfo exists $var(top)]} {
	destroy $var(top)
	destroy $var(mb)
    }
    unset $varname
}

proc IllustrateBaseColorVar {varname} {
    upvar #0 $varname var
    global $varname

    IllustrateBaseColor $var(id) $var(color) $var(fill)
    IllustrateUpdateSelection
}

proc IllustrateBaseColor {id color fill} {
    global ds9
    
    if {$fill} {
	set fillcolor $color
    } else {
	set fillcolor {}
    }

    $ds9(canvas) itemconfigure $id \
	-outline $color \
	-fill $fillcolor

    # handles/nodes
    foreach hh [$ds9(canvas) find withtag gr${id}] {
	$ds9(canvas) itemconfigure $hh -outline $color -fill $color
    }
}

proc IllustrateBaseWidth {varname} {
    upvar #0 $varname var
    global $varname

    IllustrateBaseWidthSet $var(id) $var(width) $var(dash)
    IllustrateUpdateSelection
}

proc IllustrateBaseWidthSet {id width dash} {
    global ds9
    global illustrate
    
    if {$dash} {
	set dashlist $illustrate(dashlist)
    } else {
	set dashlist {}
    }

    $ds9(canvas) itemconfigure $id \
	-width $width \
	-dash $dashlist

    IllustrateUpdateSelection
}

# Callbacks

proc IllustrateBaseDeleteCB {id} {
    global iillustrate

    set varname ${iillustrate(prefix,dialog)}${id}
    global $varname
    upvar #0 $varname var

    if {![info exists $varname]} {
	return
    }

    IllustrateBaseClose $varname
}

proc IllustrateBaseColorCB {id} {
    global iillustrate

    set varname ${iillustrate(prefix,dialog)}${id}
    global $varname
    upvar #0 $varname var

    if {![info exists $varname]} {
	return
    }

    global ds9

    set var(color) [$ds9(canvas) itemcget $var(id) -outline]
    if {[$ds9(canvas) itemcget $var(id) -fill] != {}} {
	set var(fill) 1
    } else {
	set var(fill) 0
    }
}

proc IllustrateBaseWidthCB {id} {
    global iillustrate

    set varname ${iillustrate(prefix,dialog)}${id}
    global $varname
    upvar #0 $varname var

    if {![info exists $varname]} {
	return
    }

    global ds9

    set var(width) [expr int([$ds9(canvas) itemcget $var(id) -width])]
    if {[$ds9(canvas) itemcget $var(id) -dash] != {}} {
	set var(dash) 1
    } else {
	set var(dash) 0
    }
}


