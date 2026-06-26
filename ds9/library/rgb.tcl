#  Copyright (C) 1999-2021
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc RGBDef {} {
    global rgb
    global irgb

    set irgb(top) .rgb
    set irgb(mb) .rgbmb

    set rgb(red) 1
    set rgb(green) 1
    set rgb(blue) 1
    set rgb(system) wcs
    set rgb(lock,wcs) 0
    set rgb(lock,crop) 0
    set rgb(lock,slice) 0
    set rgb(lock,bin) 0
    set rgb(lock,axes) 0
    set rgb(lock,scale) 0
    set rgb(lock,scalelimits) 0
    set rgb(lock,colorbar) 0
    set rgb(lock,block) 0
    set rgb(lock,smooth) 0
}

proc MultiColorDef {} {
    global multicolor
    global imulticolor

    set imulticolor(top) .multicolor
    set imulticolor(mb) .multicolormb

    set multicolor(layer) 1
    set multicolor(count) 1
    set multicolor(color) red
    set multicolor(blend) screen
    set multicolor(transparency) 0
    set multicolor(view) 1

    set imulticolor(rowcount) 0
    set imulticolor(updating) 0
}

proc RGBChannel {} {
    global current

    if {$current(frame) != {}} {
	if {[$current(frame) get type] == {rgb}} {
	    $current(colorbar) rgb channel $current(rgb)
	}
	$current(frame) rgb channel $current(rgb)
	UpdateDS9
    }
}

proc RGBView {} {
    global current
    global rgb

    if {$current(frame) != {}} {
	$current(frame) rgb view $rgb(red) $rgb(green) $rgb(blue)
    }
}

proc RGBSystem {} {
    global current
    global rgb

    if {$current(frame) != {}} {
	$current(frame) rgb system $rgb(system)
    }
}

# used by backup
proc RGBDialog {} {
    global rgb
    global irgb

    global current
    global ds9

    # see if we already have a window visible
    if {[winfo exists $irgb(top)]} {
	raise $irgb(top)
	return
    }

    # create the rgb window
    set w $irgb(top)
    set mb $irgb(mb)

    Toplevel $w $mb 6 [msgcat::mc {RGB}] RGBDestroyDialog

    $mb add cascade -label [msgcat::mc {File}] -menu $mb.file
    $mb add cascade -label [msgcat::mc {Align}] -menu $mb.align
    $mb add cascade -label [msgcat::mc {Lock}] -menu $mb.lock

    ThemeMenu $mb.file
    $mb.file add command -label [msgcat::mc {Close}] \
	-command RGBDestroyDialog -accelerator "${ds9(ctrl)}W"

    CoordMenu $mb.align rgb system 1 {} {} RGBSystem

    ThemeMenu $mb.lock
    $mb.lock add checkbutton -label [msgcat::mc {WCS}] \
	-variable rgb(lock,wcs)
    $mb.lock add checkbutton -label [msgcat::mc {Crop}] \
	-variable rgb(lock,crop)
    $mb.lock add checkbutton -label [msgcat::mc {Slice}] \
	-variable rgb(lock,slice)
    $mb.lock add checkbutton -label [msgcat::mc {Bin}] \
	-variable rgb(lock,bin)
    $mb.lock add checkbutton -label [msgcat::mc {Axes Order}] \
	-variable rgb(lock,axes)
    $mb.lock add checkbutton -label [msgcat::mc {Scale}] \
	-variable rgb(lock,scale)
    $mb.lock add checkbutton -label [msgcat::mc {Scale and Limits}] \
	-variable rgb(lock,scalelimits)
    $mb.lock add checkbutton -label [msgcat::mc {Colorbar}] \
	-variable rgb(lock,colorbar)
    $mb.lock add checkbutton -label [msgcat::mc {Block}] \
	-variable rgb(lock,block)
    $mb.lock add checkbutton -label [msgcat::mc {Smooth}] \
	-variable rgb(lock,smooth)

    # Param
    set f [ttk::frame $w.param]
    ttk::label $f.currenttitle -text [msgcat::mc {Current}]
    ttk::label $f.viewtitle -text [msgcat::mc {View}]
    ttk::label $f.redtitle -text [msgcat::mc {Red}]
    ttk::label $f.bluetitle -text [msgcat::mc {Blue}]
    ttk::label $f.greentitle -text [msgcat::mc {Green}]

    ttk::radiobutton $f.redcurrent -variable current(rgb) \
	-value red -command RGBChannel
    ttk::radiobutton $f.greencurrent -variable current(rgb) \
	-value green -command RGBChannel
    ttk::radiobutton $f.bluecurrent -variable current(rgb) \
	-value blue -command RGBChannel

    ttk::checkbutton $f.redview -variable rgb(red) -command RGBView
    ttk::checkbutton $f.greenview -variable rgb(green) -command RGBView
    ttk::checkbutton $f.blueview -variable rgb(blue) -command RGBView

    grid x $f.currenttitle $f.viewtitle -padx 2 -pady 2 -sticky w
    grid $f.redtitle $f.redcurrent $f.redview -padx 2 -pady 2 -sticky w
    grid $f.greentitle $f.greencurrent $f.greenview -padx 2 -pady 2 -sticky w
    grid $f.bluetitle $f.bluecurrent $f.blueview -padx 2 -pady 2 -sticky w

    # Buttons
    set f [ttk::frame $w.buttons]
    ttk::button $f.close -text [msgcat::mc {Close}] -command RGBDestroyDialog
    pack $f.close -side left -expand true -padx 2 -pady 4

    # Fini
    ttk::separator $w.sep -orient horizontal
    pack $w.buttons $w.sep -side bottom -fill x
    pack $w.param -side top -fill both -expand true

    bind $w <<Close>> RGBDestroyDialog
}

proc RGBDestroyDialog {} {
    global irgb

    if {[winfo exists $irgb(top)]} {
	destroy $irgb(top)
	destroy $irgb(mb)
    }
}

proc MultiColorDialog {} {
    global imulticolor
    global ds9

    if {[winfo exists $imulticolor(top)]} {
	raise $imulticolor(top)
	UpdateMultiColorDialog
	return
    }

    set imulticolor(rowcount) 0

    set w $imulticolor(top)
    set mb $imulticolor(mb)

    Toplevel $w $mb 6 [msgcat::mc {Multi-Color}] MultiColorDestroyDialog

    $mb add cascade -label [msgcat::mc {File}] -menu $mb.file
    ThemeMenu $mb.file
    $mb.file add command -label [msgcat::mc {Close}] \
	-command MultiColorDestroyDialog -accelerator "${ds9(ctrl)}W"

    set f [ttk::frame $w.layers]

    ttk::label $f.current -text [msgcat::mc {Current}]
    ttk::label $f.color -text [msgcat::mc {Color}]
    ttk::label $f.blend -text [msgcat::mc {Blend}]
    ttk::label $f.trans -text [msgcat::mc {Transparency}]
    ttk::label $f.view -text [msgcat::mc {Show}]
    ttk::label $f.move -text [msgcat::mc {Move}]
    ttk::label $f.delete -text [msgcat::mc {Delete}]

    grid $f.current $f.color $f.blend $f.trans - $f.view $f.move $f.delete \
	-padx 2 -pady 2 -sticky w
    grid columnconfigure $f 3 -weight 1

    set f [ttk::frame $w.buttons]
    ttk::button $f.add -text [msgcat::mc {Add}] -command MultiColorAddLayer
    ttk::button $f.close -text [msgcat::mc {Close}] \
	-command MultiColorDestroyDialog
    pack $f.add $f.close -side left -expand true -padx 2 -pady 4

    ttk::separator $w.sep -orient horizontal
    pack $w.buttons $w.sep -side bottom -fill x
    pack $w.layers -side top -fill both -expand true -padx 2 -pady 2

    bind $w <<Close>> MultiColorDestroyDialog
    UpdateMultiColorDialog
}

proc MultiColorDestroyDialog {} {
    global imulticolor

    if {[winfo exists $imulticolor(top)]} {
	destroy $imulticolor(top)
	destroy $imulticolor(mb)
    }

    set imulticolor(rowcount) 0
}

proc MultiColorCurrentFrame {} {
    global current

    if {$current(frame) == {}} {
	return {}
    }

    if {[$current(frame) get type] != {multicolor}} {
	return {}
    }

    return $current(frame)
}

proc MultiColorMakeLayerRow {f ii} {
    global multicolor

    ttk::radiobutton $f.current$ii -text $ii -variable multicolor(layer) \
	-value $ii -command [list MultiColorLayerSelect $ii]

    ColorMenuButton $f.color$ii multicolor color,$ii \
	[list MultiColorLayerColor $ii]

    ttk::combobox $f.blend$ii -textvariable multicolor(blend,$ii) \
	-values {source screen darken lighten} -state readonly -width 10
    bind $f.blend$ii <<ComboboxSelected>> [list MultiColorLayerBlend $ii]

    ttk::scale $f.trans$ii -variable multicolor(transparency,$ii) \
	-from 0 -to 100 -orient horizontal \
	-command [list MultiColorLayerTransparency $ii]
    ttk::label $f.transvalue$ii -textvariable multicolor(transparency,$ii) \
	-width 5

    ttk::checkbutton $f.view$ii -variable multicolor(view,$ii) \
	-command [list MultiColorLayerView $ii]

    ttk::frame $f.move$ii
    ttk::button $f.move$ii.up -text {<} -width 2 \
	-command [list MultiColorLayerUp $ii]
    ttk::button $f.move$ii.down -text {>} -width 2 \
	-command [list MultiColorLayerDown $ii]
    pack $f.move$ii.up $f.move$ii.down -side left

    ttk::button $f.delete$ii -text {-} -width 2 \
	-command [list MultiColorLayerDelete $ii]

    grid $f.current$ii $f.color$ii $f.blend$ii $f.trans$ii \
	$f.transvalue$ii $f.view$ii $f.move$ii $f.delete$ii \
	-padx 2 -pady 2 -sticky ew
    grid columnconfigure $f 3 -weight 1
}

proc MultiColorClearLayerRows {f} {
    foreach child [winfo children $f] {
	set name [winfo name $child]
	if {[regexp {^(current|color|blend|trans|transvalue|view|move|delete)[0-9]+$} $name]} {
	    destroy $child
	}
    }
}

proc MultiColorLayerSelect {layer} {
    global imulticolor

    if {$imulticolor(updating)} {
	return
    }

    set which [MultiColorCurrentFrame]
    if {$which == {}} {
	return
    }

    $which layer layerno $layer
    ${which}cb colorbar [$which get colorbar]
    UpdateDS9
}

proc MultiColorLayerColor {layer} {
    global multicolor
    global imulticolor

    if {$imulticolor(updating)} {
	return
    }

    set which [MultiColorCurrentFrame]
    if {$which == {}} {
	return
    }

    $which layer $layer color $multicolor(color,$layer)
    ${which}cb colorbar [$which get colorbar]
    UpdateDS9
}

proc MultiColorLayerBlend {layer} {
    global multicolor
    global imulticolor

    if {$imulticolor(updating)} {
	return
    }

    set which [MultiColorCurrentFrame]
    if {$which == {}} {
	return
    }

    $which layer $layer blend $multicolor(blend,$layer)
    UpdateDS9
}

proc MultiColorLayerTransparency {layer value} {
    global multicolor
    global imulticolor

    if {$imulticolor(updating)} {
	return
    }

    set which [MultiColorCurrentFrame]
    if {$which == {}} {
	return
    }

    set multicolor(transparency,$layer) [format %.0f $value]
    $which layer $layer transparency $multicolor(transparency,$layer)
    UpdateDS9
}

proc MultiColorLayerView {layer} {
    global multicolor
    global imulticolor

    if {$imulticolor(updating)} {
	return
    }

    set which [MultiColorCurrentFrame]
    if {$which == {}} {
	return
    }

    if {$multicolor(view,$layer)} {
	$which layer $layer show
    } else {
	$which layer $layer hide
    }

    ${which}cb colorbar [$which get colorbar]
    UpdateDS9
}

proc MultiColorLayerDelete {layer} {
    set which [MultiColorCurrentFrame]
    if {$which == {}} {
	return
    }

    $which layer $layer delete
    ${which}cb colorbar [$which get colorbar]
    UpdateDS9
}

proc MultiColorLayerUp {layer} {
    set which [MultiColorCurrentFrame]
    if {$which == {}} {
	return
    }

    $which layer $layer up
    ${which}cb colorbar [$which get colorbar]
    UpdateDS9
}

proc MultiColorLayerDown {layer} {
    set which [MultiColorCurrentFrame]
    if {$which == {}} {
	return
    }

    $which layer $layer down
    ${which}cb colorbar [$which get colorbar]
    UpdateDS9
}

proc MultiColorAddLayer {} {
    global multicolor

    set which [MultiColorCurrentFrame]
    if {$which == {}} {
	return
    }

    $which layer create
    set multicolor(layer) [$which get layer layerno]
    ${which}cb colorbar [$which get colorbar]
    UpdateDS9
}

proc UpdateMultiColorMenu {} {
}

proc UpdateMultiColorDialog {} {
    global multicolor
    global imulticolor

    if {![winfo exists $imulticolor(top)]} {
	return
    }

    set which [MultiColorCurrentFrame]
    if {$which == {}} {
	set multicolor(count) 0
	if {$imulticolor(rowcount) != 0} {
	    MultiColorClearLayerRows $imulticolor(top).layers
	    set imulticolor(rowcount) 0
	}
	return
    }

    set f $imulticolor(top).layers

    set count [$which get layer count]
    if {$imulticolor(rowcount) != $count} {
	MultiColorClearLayerRows $f
	for {set ii 1} {$ii <= $count} {incr ii} {
	    MultiColorMakeLayerRow $f $ii
	}
	set imulticolor(rowcount) $count
    }

    set imulticolor(updating) 1
    set multicolor(layer) [$which get layer layerno]
    set multicolor(count) $count
    for {set ii 1} {$ii <= $multicolor(count)} {incr ii} {
	set multicolor(color,$ii) [$which get layer color $ii]
	set multicolor(blend,$ii) [$which get layer blend $ii]
	set multicolor(transparency,$ii) \
	    [format %.0f [$which get layer transparency $ii]]
	set multicolor(view,$ii) [$which get layer view $ii]
    }
    set imulticolor(updating) 0
}

proc UpdateRGBMenu {} {
    # can be changed by wcs
    SetCoordSystem rgb system {} {}
}

proc UpdateRGBDialog {} {
    global rgb
    global irgb
    global current

    global debug
    if {$debug(tcl,update)} {
	puts stderr "UpdateRGBDialog"
    }

    if {![winfo exists $irgb(top)]} {
	return
    }

    if {$current(frame) != {}} {
	set rgb(frame) $current(frame)
	if {[$current(frame) has fits]} {
	    # now make sure we have the coord systems
	    AdjustCoordSystem rgb system
	    CoordMenuEnable $irgb(mb).align rgb system {} {}
	} else {
	    CoordMenuReset $irgb(mb).align rgb system {} {}
	}
    }

    if {$current(frame) != {}} {
	set current(rgb) [$current(frame) get rgb channel]
	set r [$current(frame) get rgb view]
	set rgb(red) [lindex $r 0]
	set rgb(green) [lindex $r 1]
	set rgb(blue) [lindex $r 2]
	set rgb(system) [$current(frame) get rgb system]
    }
}

proc RGBBackup {ch which} {
    puts $ch "$which rgb channel [$which get rgb channel]"
    puts $ch "$which rgb view [$which get rgb view]"
    puts $ch "$which rgb system [$which get rgb system]"
}

# Process Cmds

proc ProcessRGBCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    RGBDialog

    rgb::YY_FLUSH_BUFFER
    rgb::yy_scan_string [lrange $var $i end]
    rgb::yyparse
    incr i [expr $rgb::yycnt-1]
}

proc ProcessSendRGBCmd {proc id param {sock {}} {fn {}}} {
    global parse
    set parse(proc) $proc
    set parse(id) $id

    rgbsend::YY_FLUSH_BUFFER
    rgbsend::yy_scan_string $param
    rgbsend::yyparse
}
