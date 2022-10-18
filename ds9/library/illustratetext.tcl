#  Copyright (C) 1999-2022
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc IllustrateTextCreate {xx yy txt color \
			       font fontsize fontweight fontslant \
			       angle justify} {
    global ds9
    set id [$ds9(canvas) create text \
		$xx $yy \
		-text [string map [list "\\n" "\n"] $txt] \
		-fill $color \
		-font "$font $fontsize $fontweight $fontslant" \
		-angle $angle \
		-justify $justify \
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

proc IllustrateTextSaveSelection {id} {
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
    set justify [$ds9(canvas) itemcget $id -justify]
    foreach {font fontsize fontweight fontslant} \
	[$ds9(canvas) itemcget $id -font] {}

    set rr "text $coords \"[string map [list "\n" "\\n"] $txt]\""

    if {$color != {cyan} ||
	$font != {helvetica} || $fontsize != 12 ||
	$fontweight != {normal} || $fontslant != {roman} ||
	$angle != 0 || $justify != {left}} {

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
	if {$justify != {left}} {
	    append rr " justify = $justify"
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

    foreach {id color fill width dash} $gr {
	$ds9(canvas) itemconfigure $id -fill $fill
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

    # window
    Toplevel $var(top) $var(mb) 6 [msgcat::mc {Text}] \
	[list IllustrateTextClose $varname]

    $var(mb) add cascade -label [msgcat::mc {File}] -menu $var(mb).file
    $var(mb) add cascade -label [msgcat::mc {Edit}] -menu $var(mb).edit
    $var(mb) add cascade -label [msgcat::mc {Color}] -menu $var(mb).color
    $var(mb) add cascade -label [msgcat::mc {Font}] -menu $var(mb).font
    $var(mb) add cascade -label [msgcat::mc {Justify}] -menu $var(mb).justify

    ThemeMenu $var(mb).file
    $var(mb).file add command -label [msgcat::mc {Apply}] \
	-command [list IllustrateTextApply $varname]
    $var(mb).file add separator
    $var(mb).file add command -label [msgcat::mc {Open}] \
	-command "EditTextLoadFile $varname" -accelerator "${ds9(ctrl)}O"
    $var(mb).file add command -label [msgcat::mc {Save}] \
	-command "SimpleTextSaveFile $varname" -accelerator "${ds9(ctrl)}S"
    $var(mb).file add separator
    $var(mb).file add command -label [msgcat::mc {Close}] \
	-command [list IllustrateTextClose $varname] \
	-accelerator "${ds9(ctrl)}W"
    bind $var(top) <<Close>> [list IllustrateTextClose $varname]

    ThemeMenu $var(mb).edit
    $var(mb).edit add command -label [msgcat::mc {Cut}] \
	-command "SimpleTextCut $varname" -accelerator "${ds9(ctrl)}X"
    $var(mb).edit add command -label [msgcat::mc {Copy}] \
	-command "SimpleTextCopy $varname" -accelerator "${ds9(ctrl)}C"
    $var(mb).edit add command -label [msgcat::mc {Paste}] \
	-command "EditTextPaste $varname" -accelerator "${ds9(ctrl)}V"
    $var(mb).edit add command -label [msgcat::mc {Clear}] \
	-command "EditTextClear $varname"
    $var(mb).edit add separator
    $var(mb).edit add command -label [msgcat::mc {Select All}] \
	-command "SimpleTextSelectAll $varname"
    $var(mb).edit add command -label [msgcat::mc {Select None}] \
	-command "SimpleTextSelectNone $varname"

    ColorFillMenu $var(mb).color $varname color fill \
	[list IllustrateTextColorVar $varname] \
	[list IllustrateTextColorVar $varname]
    FontMenu $var(mb).font $varname font font,size font,weight font,slant \
	[list IllustrateTextFont $varname]

    ThemeMenu $var(mb).justify
    $var(mb).justify add radiobutton -label [msgcat::mc {Left}] \
	-variable ${varname}(justify) -value left \
	-command [list IllustrateTextJustify $varname]
    $var(mb).justify add radiobutton -label [msgcat::mc {Center}] \
	-variable ${varname}(justify) -value center \
	-command [list IllustrateTextJustify $varname]
    $var(mb).justify add radiobutton -label [msgcat::mc {Right}] \
	-variable ${varname}(justify) -value right \
	-command [list IllustrateTextJustify $varname]

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
    set f [ttk::frame $var(top).txt]
    set height 10
    set width 80

    set var(text) [text $f.text]
    $var(text) configure \
	-height $height \
	-width $width \
	-wrap none \
	-yscrollcommand [list $f.yscroll set] \
	-xscrollcommand [list $f.xscroll set] \
	-fg [ThemeTreeForeground] \
	-bg [ThemeTreeBackground] \
	-state normal

    ttk::scrollbar $f.yscroll \
	-command [list roText::$var(text) yview] -orient vertical
    ttk::scrollbar $f.xscroll \
	-command [list roText::$var(text) xview] -orient horizontal

    grid $var(text) $f.yscroll -sticky news
    grid $f.xscroll -stick news
    grid rowconfigure $f 0 -weight 1
    grid columnconfigure $f 0 -weight 1

#    ttk::label $f.ttxt -text [msgcat::mc {Text}]
#    ttk::entry $f.txt -textvariable ${varname}(txt) -width 40
#    grid $f.ttxt $f.txt - -padx 2 -pady 2 -sticky w

    # Buttons
    set f [ttk::frame $var(top).buttons]
    ttk::button $f.apply -text [msgcat::mc {Apply}] \
	-command [list IllustrateTextApply $varname]
    ttk::button $f.close -text [msgcat::mc {Close}] \
	-command [list IllustrateTextClose $varname]
    pack $f.apply $f.close -side left -expand true -padx 2 -pady 4

#    bind $var(top) <Return> [list IllustrateTextApply $varname]

    # Fini
    ttk::separator $var(top).sep -orient horizontal
    pack $var(top).buttons $var(top).sep -side bottom -fill x
    pack $var(top).param -side top -fill both -expand true
    pack $var(top).txt -side bottom -fill both -expand true
    
    # init
    IllustrateTextEditCB $id
    IllustrateTextRotateCB $id
    IllustrateTextColorCB $id
    IllustrateTextTextCB $id
    IllustrateTextFontCB $id 
    IllustrateTextJustifyCB $id

    $var(text) delete 1.0 end
    $var(text) insert end $var(txt)
    $var(text) see end
}

proc IllustrateTextDialogClose {id} {
    global iillustrate

    set varname ${iillustrate(prefix,dialog)}${id}
    global $varname
    upvar #0 $varname var

    IllustrateTextClose $varname
}

proc IllustrateTextClose {varname} {
    upvar #0 $varname var
    global $varname

    set var(txt) [$var(text) get 1.0 end-1c]

    # destroy the window and menubar
    if {[winfo exists $var(top)]} {
	destroy $var(top)
	destroy $var(mb)
    }
    unset $varname
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

proc IllustrateTextJustify {varname} {
    upvar #0 $varname var
    global $varname

    global ds9
    $ds9(canvas) itemconfigure $var(id) -justify $var(justify)
}

proc IllustrateTextApply {varname} {
    upvar #0 $varname var
    global $varname

    global ds9
    
    set var(txt) [$var(text) get 1.0 end-1c]
    $ds9(canvas) itemconfigure $var(id) -text $var(txt)
    
    if {$var(angle) != {}} {
	$ds9(canvas) itemconfigure $var(id) -angle $var(angle)
    }
    if {$var(xc) != {} && $var(yc) != {} && $var(angle) != {}} {
	$ds9(canvas) coords $var(id) $var(xc) $var(yc)

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

proc IllustrateTextJustifyCB {id} {
    global iillustrate

    set varname ${iillustrate(prefix,dialog)}${id}
    global $varname
    upvar #0 $varname var

    global ds9
    set var(justify) [$ds9(canvas) itemcget $id -justify]
}

