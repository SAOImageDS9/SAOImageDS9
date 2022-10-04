#  Copyright (C) 1999-2022
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc IllustrateTextCreate {xx yy txt color \
			       font fontsize fontweight fontslant angle} {
    global ds9

    set id [$ds9(canvas) create text \
		$xx $yy \
		-text $txt \
		-fill $color \
		-font "$font $fontsize $fontweight $fontslant" \
		-angle $angle \
		-tags {text graphic}
	   ]

    IllustrateBaseCreateHandles $id [$ds9(canvas) itemcget $id -fill]
    return $id
}

proc IllustrateTextDefault {id} {
}

proc IllustrateTextDup {param} {
    global ds9
    
    foreach {coords txt color font angle} $param {
	set id [$ds9(canvas) create text \
		    $coords \
		    -text $txt \
		    -fill $color \
		    -font $font \
		    -angle $angle \
		    -tags {text graphic}
	       ]
    }

    IllustrateBaseCreateHandles $id [$ds9(canvas) itemcget $id -fill]
    return $id
}

proc IllustrateTextSave {id} {
    global ds9

    set fillcolor [$ds9(canvas) itemcget $id -fill]

    return [list $id {} $fillcolor {} {}]
}

proc IllustrateTextCopy {id} {
    global ds9
    
    set coords [$ds9(canvas) coords $id]
    set txt [$ds9(canvas) itemcget $id -text]
    set color [$ds9(canvas) itemcget $id -fill]
    set font [$ds9(canvas) itemcget $id -font]
    set angle [$ds9(canvas) itemcget $id -angle]

    return [list text [list $coords $txt $color $font $angle]]
}

proc IllustrateTextSet {id param} {
    global ds9
    
    foreach {coords txt color font angle} $param {
	$ds9(canvas) coords $id $coords
	$ds9(canvas) itemconfigure $id -text $txt
	$ds9(canvas) itemconfigure $id -fill $color
	$ds9(canvas) itemconfigure $id -font $font
	$ds9(canvas) itemconfigure $id -angle $angle
    }

    # handles/nodes
    foreach hh [$ds9(canvas) find withtag gr${id}] {
	$ds9(canvas) itemconfigure $hh -outline $fill -fill $fill
    }

    IllustrateBaseUpdateHandle $id
}

proc IllustrateTextList {id} {
    global ds9

    set coords [$ds9(canvas) coords $id]
    set color [$ds9(canvas) itemcget $id -fill]
    set txt [$ds9(canvas) itemcget $id -text]
    set angle [$ds9(canvas) itemcget $id -angle]
    foreach {font fontsize fontweight fontslant} \
	[$ds9(canvas) itemcget $id -font] {}

    set rr "text $coords \"$txt\""

    if {$color != {cyan} ||
	$font != {helvetica} || $fontsize != 12 ||
	$fontweight != {normal} || $fontslant != {roman} || $angle != 0} {

	append rr " #"
	if {$color != {cyan}} {
	    append rr " color = $color"
	}
	if {$font != {helvetica}} {
	    append rr " font = $font"
	}
	if {$fontsize != 12} {
	    append rr " fontsize = $fontsize"
	}
	if {$fontweight != {normal}} {
	    append rr " fontweight = $fontweight"
	}
	if {$fontslant != {roman}} {
	    append rr " fontslant = $fontslant"
	}
	if {$angle != 0} {
	    append rr " angle = $angle"
	}
    }
    
    return $rr
}

proc IllustrateTextAntsOn {id} {
    global ds9

    $ds9(canvas) itemconfigure $id -fill white
}

proc IllustrateTextAntsOff {gr} {
    global ds9

    foreach {id color fillcolor width dashlist} $gr {
	$ds9(canvas) itemconfigure $id -fill $fillcolor
    }
}

# Dialog

proc IllustrateTextDialog {id} {
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
    set var(font) {}
    set var(txt) {}

    # window
    Toplevel $var(top) $var(mb) 6 [msgcat::mc {Text}] \
	[list IllustrateBaseClose $varname]

    $var(mb) add cascade -label [msgcat::mc {File}] -menu $var(mb).file
    $var(mb) add cascade -label [msgcat::mc {Edit}] -menu $var(mb).edit
    $var(mb) add cascade -label [msgcat::mc {Color}] -menu $var(mb).color
    $var(mb) add cascade -label [msgcat::mc {Font}] -menu $var(mb).font

    ThemeMenu $var(mb).file
    $var(mb).file add command -label [msgcat::mc {Apply}] \
	-command [list IllustrateTextApply $varname]
    $var(mb).file add separator
    $var(mb).file add command -label [msgcat::mc {Close}] \
	-command [list IllustrateBaseClose $varname] \
	-accelerator "${ds9(ctrl)}W"
    bind $var(top) <<Close>> [list IllustrateBaseClose $varname]

    EditMenu $var(mb) $varname
    ColorFillMenu $var(mb).color $varname color fill \
	[list IllustrateTextColorVar $varname] \
	[list IllustrateTextColorVar $varname]
    FontMenu $var(mb).font $varname font font,size font,weight font,slant \
	[list IllustrateTextFont $varname]

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

    # Angle
    ttk::label $f.tangle -text [msgcat::mc {Angle}]
    ttk::entry $f.angle -textvariable ${varname}(angle) -width 13
    grid $f.tangle $f.angle -padx 2 -pady 2 -sticky w
    
    # Text
    set f $var(top).param
    ttk::label $f.ttxt -text [msgcat::mc {Text}]
    ttk::entry $f.txt -textvariable ${varname}(txt) -width 40
    grid $f.ttxt $f.txt - -padx 2 -pady 2 -sticky w

    # Buttons
    set f [ttk::frame $var(top).buttons]
    ttk::button $f.apply -text [msgcat::mc {Apply}] \
	-command [list IllustrateTextApply $varname]
    ttk::button $f.close -text [msgcat::mc {Close}] \
	-command [list IllustrateBaseClose $varname]
    pack $f.apply $f.close -side left -expand true -padx 2 -pady 4

    bind $var(top) <Return> [list IllustrateTextApply $varname]

    # Fini
    ttk::separator $var(top).sep -orient horizontal
    pack $var(top).buttons $var(top).sep -side bottom -fill x
    pack $var(top).param -side top -fill both -expand true
    
    # init
    IllustrateTextEditCB $var(id)
    IllustrateTextRotateCB $var(id)
    IllustrateTextColorCB $var(id)
    IllustrateTextTextCB $var(id)
    IllustrateTextFontCB $var(id)
}

proc IllustrateTextColor {id color} {
    global ds9
    
    $ds9(canvas) itemconfigure $id -fill $color

    # handles/nodes
    foreach hh [$ds9(canvas) find withtag gr${id}] {
	$ds9(canvas) itemconfigure $hh -outline $color -fill $color
    }
}

proc IllustrateTextColorVar {varname} {
    upvar #0 $varname var
    global $varname

    IllustrateTextColor $var(id) $var(color)
    IllustrateUpdateSelection
}

proc IllustrateTextFont {varname} {
    upvar #0 $varname var
    global $varname

    global ds9
    
    $ds9(canvas) itemconfigure $var(id) \
	-font "$var(font) $var(font,size) $var(font,weight) $var(font,slant)"

    IllustrateBaseUpdateHandle $var(id)
}

proc IllustrateTextApply {varname} {
    upvar #0 $varname var
    global $varname

    global ds9
    
    if {$var(xc) != {} && $var(yc) != {}} {
	$ds9(canvas) coords $var(id) $var(xc) $var(yc)
	$ds9(canvas) itemconfigure $var(id) -angle $var(angle)
	$ds9(canvas) itemconfigure $var(id) -text $var(txt)

	IllustrateBaseUpdateHandle $var(id)
    }
}

proc IllustrateTextEdit {id xx yy} {
    global ds9
    
    $ds9(canvas) coords $xx $yy
}

proc IllustrateTextRotate {id xx yy} {
    global ds9
    global iillustrate

    foreach {bbx1 bby1 bbx2 bby2} [$ds9(canvas) bbox $id] {}
    set xc [expr ($bbx2-$bbx1)/2.+$bbx1]
    set yc [expr ($bby2-$bby1)/2.+$bby1]

    set dx [expr $xx-$xc]
    set dy [expr $yy-$yc]
    set aa [expr -atan2($dy,$dx)*180./3.1415]

    switch $iillustrate(handle) {
	1 {
	    set bx [expr $bbx1-$xc]
	    set by [expr $bby1-$yc]
	}
	2 {
	    set bx [expr $bbx2-$xc]
	    set by [expr $bby1-$yc]
	}
	3 {
	    set bx [expr $bbx2-$xc]
	    set by [expr $bby2-$yc]
	}
	4 {
	    set bx [expr $bbx1-$xc]
	    set by [expr $bby2-$yc]
	}
    }
    set bb [expr -atan2($by,$bx)*180./3.1415]
    
    set angle [expr $aa-$bb]
    
    $ds9(canvas) itemconfigure $id -angle $angle
}

# callbacks

proc IllustrateTextEditCB {id} {
    global iillustrate

    set varname ${iillustrate(prefix,dialog)}${id}
    global $varname
    upvar #0 $varname var

    if {![info exists $varname]} {
	return
    }
    
    global ds9

    foreach {xc yc} [$ds9(canvas) coords $id] {
	set var(xc) $xc
	set var(yc) $yc
    }
}

proc IllustrateTextRotateCB {id} {
    global iillustrate

    set varname ${iillustrate(prefix,dialog)}${id}
    global $varname
    upvar #0 $varname var

    if {![info exists $varname]} {
	return
    }
    
    global ds9

    set var(angle) [$ds9(canvas) itemcget $id -angle]
}

proc IllustrateTextColorCB {id} {
    global iillustrate

    set varname ${iillustrate(prefix,dialog)}${id}
    global $varname
    upvar #0 $varname var

    if {![info exists $varname]} {
	return
    }

    global ds9

    set var(color) [$ds9(canvas) itemcget $id -fill]
}

proc IllustrateTextTextCB {id} {
    global iillustrate

    set varname ${iillustrate(prefix,dialog)}${id}
    global $varname
    upvar #0 $varname var

    global ds9
   
    set var(txt) [$ds9(canvas) itemcget $id -text]
}

proc IllustrateTextFontCB {id} {
    global iillustrate

    set varname ${iillustrate(prefix,dialog)}${id}
    global $varname
    upvar #0 $varname var

    global ds9
   
    foreach {font fontsize fontweight fontslant} \
	[$ds9(canvas) itemcget $id -font] {
	    set var(font) $font
	    set var(font,size) $fontsize
	    set var(font,weight) $fontweight
	    set var(font,slant) $fontslant
	}
}

