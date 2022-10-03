#  Copyright (C) 1999-2022
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc IllustrateTextCreate {xx yy txt color font fontsize fontweight fontslant} {
    global ds9

    set id [$ds9(canvas) create text \
		$xx $yy \
		-text $txt \
		-fill $color \
		-font "$font $fontsize $fontweight $fontslant" \
		-tags {text graphic}
	   ]

    IllustrateBaseCreateHandles $id [$ds9(canvas) itemcget $id -fill]
    return $id
}

proc IllustrateTextDefault {id} {
}

proc IllustrateTextDup {param} {
    global ds9
    
    foreach {coords txt color font} $param {
	set id [$ds9(canvas) create text \
		    $coords \
		    -text $txt \
		    -fill $color \
		    -font $font \
		    -tags {text graphic}
	       ]
    }

    IllustrateBaseCreateHandles $id [$ds9(canvas) itemcget $id -fill]
    return $id
}

proc IllustrateTextSave {id} {
    global ds9

    set fillcolor [$ds9(canvas) itemcget $id -fill]

    return [list $id {} $fillcolor {}]
}

proc IllustrateTextCopy {id} {
    global ds9
    
    set coords [$ds9(canvas) coords $id]
    set txt [$ds9(canvas) itemcget $id -text]
    set color [$ds9(canvas) itemcget $id -fill]
    set font [$ds9(canvas) itemcget $id -font]

    return [list text [list $coords $txt $color $font]]
}

proc IllustrateTextSet {id param} {
    global ds9
    
    foreach {coords txt color font} $param {
	$ds9(canvas) coords $id $coords
	$ds9(canvas) itemconfigure $id -text $txt
	$ds9(canvas) itemconfigure $id -fill $color
	$ds9(canvas) itemconfigure $id -font $font
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
    set ff [$ds9(canvas) itemcget $id -font]
    set txt [$ds9(canvas) itemcget $id -text]

    set font [lindex $ff 0]
    set fontsize [lindex $ff 1]
    set fontweight [lindex $ff 2]
    set fontslant [lindex $ff 3]

    set rr "text $coords \"$txt\""

    if {$color != {cyan} ||
	$font != {helvetica} || $fontsize != 12 ||
	$fontweight != {normal} || $fontslant != {roman} } {

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
    }
    
    return $rr
}

proc IllustrateTextAntsOn {id} {
    global ds9

    $ds9(canvas) itemconfigure $id \
	-fill white
}

proc IllustrateTextAntsOff {gr} {
    global ds9

    foreach {id color fillcolor dashlist} $gr {
	$ds9(canvas) itemconfigure $id \
	    -fill $fillcolor
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
	[list IllustrateTextColor $varname] [list IllustrateTextColor $varname]
    FontMenu $var(mb).font $varname font size weight slant \
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

    # Text
    set f $var(top).param
    ttk::label $f.ttxt -text [msgcat::mc {Text}]
    ttk::entry $f.txt -textvariable ${varname}(txt) -width 40
    grid $f.ttxt $f.txt -padx 2 -pady 2 -sticky w

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
    IllustrateTextColorCB $var(id)
    IllustrateTextFontCB $var(id)
}

proc IllustrateTextColorSet {id color} {
    global ds9
    
    $ds9(canvas) itemconfigure $id \
	-fill $color

    # handles/nodes
    foreach hh [$ds9(canvas) find withtag gr${id}] {
	$ds9(canvas) itemconfigure $hh -outline $color -fill $color
    }
}

proc IllustrateTextColor {varname} {
    upvar #0 $varname var
    global $varname

    IllustrateTextColorSet $var(id) $var(color) $var(fill)
}

proc IllustrateTextFont {varname} {
    upvar #0 $varname var
    global $varname

    global ds9
    
    $ds9(canvas) itemconfigure $id \
	-font $font

    IllustrateBaseUpdateHandle $id
}

proc IllustrateTextApply {varname} {
    upvar #0 $varname var
    global $varname

    global ds9
    
    if {$var(xc) != {} && $var(yc) != {}} {
	$ds9(canvas) coords $var(id) $var(xc) $var(yc)
	
	$ds9(canvas) itemconfigure $var(id) -text $var(txt)

	IllustrateBaseUpdateHandle $var(id)
    }
}

# callbacks

proc IllustrateTextEditCB {id} {
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

    set var(color) [$ds9(canvas) itemcget $var(id) -fill]
}

proc IllustrateTextFontCB {id} {
    global iillustrate

    set varname ${iillustrate(prefix,dialog)}${id}
    global $varname
    upvar #0 $varname var

    if {![info exists $varname]} {
	return
    }

    global ds9

    set rr $ds9(canvas) itemcget $var(id) -font
    set var(font) [lindex $rr 0]
    set var(font,size) [lindex $rr 1]
    set var(weight) [lindex $rr 2]
    set var(slant) [lindex $rr 3]
}

