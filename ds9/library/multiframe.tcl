#  Copyright (C) 1999-2021
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc LoadMultiFrameFile {fn} {
    set path {}
    if {[string range $fn 0 4] == "stdin" || 
	[string range $fn 0 4] == "STDIN" ||
	[string range $fn 0 0] == "-"} {
	set path [tmpnam {.fits}]
	catch {
	    set ch [open "$path" w]
	    fconfigure stdin -translation binary -encoding iso8859-1
	    fconfigure $ch -translation binary -encoding iso8859-1
	    puts -nonewline $ch [read stdin]
	    close $ch
	}
    }

    LoadMultiFrameAlloc $path $fn
}

proc LoadMultiFrameSocket {sock fn} {
    set path [tmpnam {.fits}]
    catch {
	set ch [open "$path" w]
	fconfigure $ch -translation binary -encoding iso8859-1
	fconfigure $sock -translation binary -encoding iso8859-1
	puts -nonewline $ch [read $sock]
	close $ch
    }

    set rr [LoadMultiFrameAlloc $path $fn]
    if {!$rr} {
	if {$path != {}} {
	    catch {file delete -force $path}
	}
    }
    return $rr
}

proc LoadMultiFrameAlloc {path fn} {
    global loadParam
    global current
    global ds9

    set ext 0
    set cnt 0
    set did 0
    set need 0

    # start with new frame?
    if {$current(frame) != {}} {
	switch -- [$current(frame) get type] {
	    base {
		if {[$current(frame) has fits]} {
		    CreateFrame
		    set did 1
		}
	    }
	    rgb -
	    3d {
		CreateFrame
		set did 1
	    }
	}
    } else {
	CreateFrame
    }

    while {1} {

	# create a new frame
	if {$need} {
	    CreateFrame
	    set did 1
	}

	# ProcessLoad will clear loadParam each time
	# can be gz, so use allocgz
	set loadParam(file,type) fits
	set loadParam(file,mode) {}
	set loadParam(load,type) allocgz
	set loadParam(load,layer) {}
	if {$path != {}} {
	    set loadParam(file,name) "stdin\[$ext\]"
	    set loadParam(file,fn) "$path\[$ext\]"
	} else {
	    set loadParam(file,name) "$fn\[$ext\]"
	    set loadParam(file,fn) "$fn\[$ext\]"
	}

	if  {![ProcessLoad 0]} {
	    if {$ext} {
		InitError xpa

		if {$did} {
		    DeleteCurrentFrame
		    incr ds9(seq) -1
		}
		if {!$cnt} {
		    Error "[msgcat::mc {Unable to load}] $loadParam(file,type) $loadParam(file,mode) $loadParam(file,name)"
		    return 0
		}
		break;
	    }
	} else {
	    # ignore any bin tables
	    if {![$current(frame) has fits bin]}  {
		incr cnt
		set need 1
	    } else {
		set need 0
	    }
	}

	incr ext
    }

    if {$path != {}} {
	catch {file delete -force $path}
    }

    # go into tile mode if more than one
    if {$cnt && $current(display) != "tile"} {
	set current(display) tile
	DisplayMode
    }

    return 1
}

proc ProcessMultiFrameCmd {varname iname sock fn} {
    upvar $varname var
    upvar $iname i

    global parse
    set parse(sock) $sock
    set parse(fn) $fn

    multiframe::YY_FLUSH_BUFFER
    multiframe::yy_scan_string [lrange $var $i end]
    multiframe::yyparse
    incr i [expr $multiframe::yycnt-1]
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
    set multicolor(system) wcs

    set imulticolor(rowcount) 0
    set imulticolor(updating) 0
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
    $mb add cascade -label [msgcat::mc {Align}] -menu $mb.align

    ThemeMenu $mb.file
    $mb.file add command -label [msgcat::mc {Close}] \
	-command MultiColorDestroyDialog -accelerator "${ds9(ctrl)}W"

    CoordMenu $mb.align multicolor system 1 {} {} MultiColorSystem

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

proc MultiColorSystem {} {
    global multicolor

    set which [MultiColorCurrentFrame]
    if {$which == {}} {
	return
    }

    $which multicolor system $multicolor(system)
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
    # can be changed by wcs
    SetCoordSystem multicolor system {} {}
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
	CoordMenuReset $imulticolor(mb).align multicolor system {} {}
	return
    }

    set multicolor(frame) $which
    if {[$which has fits]} {
	AdjustCoordSystem multicolor system
	CoordMenuEnable $imulticolor(mb).align multicolor system {} {}
    } else {
	CoordMenuReset $imulticolor(mb).align multicolor system {} {}
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
    set multicolor(system) [$which get multicolor system]
    for {set ii 1} {$ii <= $multicolor(count)} {incr ii} {
	set multicolor(color,$ii) [$which get layer color $ii]
	set multicolor(blend,$ii) [$which get layer blend $ii]
	set multicolor(transparency,$ii) \
	    [format %.0f [$which get layer transparency $ii]]
	set multicolor(view,$ii) [$which get layer view $ii]
    }
    set imulticolor(updating) 0
}

proc ProcessMultiColorCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    multicolor::YY_FLUSH_BUFFER
    multicolor::yy_scan_string [lrange $var $i end]
    multicolor::yyparse
    incr i [expr $multicolor::yycnt-1]
}

proc MultiColorBackup {ch which} {
    if {[$which get type] == {multicolor}} {
	puts $ch "$which multicolor system [$which get multicolor system]"
    }
}

proc MultiframeCmdLoad {param} {
    global parse

    if {$parse(sock) != {}} {
	# xpa
	global tcl_platform
	switch $tcl_platform(os) {
	    Linux -
	    Darwin {
		if {![LoadMultiFrameSocket $parse(sock) $param]} {
		    InitError xpa
		    LoadMultiFrameFile $param
		}
	    }
	    {Windows NT} {LoadMultiFrameFile $param}
	}
    } else {
	# comm
	if {$parse(fn) != {}} {
	    LoadMultiFrameAlloc $parse(fn) $param
	} else {
	    LoadMultiFrameFile $param
	}
    }
    FinishLoad
}
