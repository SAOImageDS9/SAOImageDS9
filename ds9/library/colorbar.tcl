#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc ColorbarDef {} {
    global colorbar
    global icolorbar
    global pcolorbar

    global ds9

    set icolorbar(top) .clrbar
    set icolorbar(mb) .clrbarmb

    set icolorbar(vertical,width) 75
    set icolorbar(horizontal,height) 45
    set icolorbar(num) 1024
    set icolorbar(start) $ds9(menu,start)
    set icolorbar(end) 0
    set icolorbar(count) 0

    set icolorbar(h5) 0
    set icolorbar(h5,fn) [list h5_autumn.sao h5_bluered.sao h5_bone.sao h5_cool.sao h5_copper.sao h5_dkbluered.sao h5_gray.sao h5_green.sao h5_hot.sao h5_hsv.sao h5_jet.sao h5_pink.sao h5_spring.sao h5_summer.sao h5_winter.sao h5_yarg.sao h5_yellow.sao
]

    set icolorbar(matplotlib) 0
    set icolorbar(matplotlib,fn) [list viridis.lut]

    set icolorbar(cubehelix) 0
    set icolorbar(cubehelix,fn) [list ch05m151008.sao ch05m151010.sao ch05m151012.sao ch05m151410.sao ch05p151010.sao ch20m151010.sao - cubehelix0.sao cubehelix1.sao]

    set icolorbar(gist) 0
    set icolorbar(gist,fn) [list gist_earth.sao gist_heat.sao gist_rainbow.sao gist_yarg.sao gist_gray.sao gist_ncar.sao gist_stern.sao]

    set icolorbar(topo) 0
    set icolorbar(topo,fn) [list tpglarf.sao tpglhcf.sao tpglhwf.sao tpglpof.sao tpglarm.sao tpglhcm.sao tpglhwm.sao tpglpom.sao]

    set icolorbar(user) 0
    set icolorbar(user,fn) {}

    set colorbar(lock) 0
    set colorbar(size) 20
    set colorbar(ticks) 11
    set colorbar(map) grey
    set colorbar(invert) 0
    set colorbar(numerics) 1
    set colorbar(space) 0
    set colorbar(orientation) horizontal
    set colorbar(tag) red
    set colorbar(font) helvetica
    set colorbar(font,size) 9
    set colorbar(font,weight) normal
    set colorbar(font,slant) roman

    array set pcolorbar [array get colorbar]
}

proc CreateColorbar {} {
    global icolorbar

    global ds9
    global canvas
    global view

    $ds9(canvas) create colorbar$ds9(visual)$ds9(depth) \
	-colors 2048 \
	-tag colorbar \
	-anchor nw \
	-helvetica $ds9(helvetica) \
	-courier $ds9(courier) \
	-times $ds9(times)

    $ds9(canvas) bind colorbar <Motion> [list ColorbarMotion %x %y]
    $ds9(canvas) bind colorbar <Enter> [list ColorbarEnter %x %y]
    $ds9(canvas) bind colorbar <Leave> [list ColorbarLeave]

    $ds9(canvas) bind colorbar <Button-1> [list ColorbarButton1 %x %y]
    $ds9(canvas) bind colorbar <B1-Motion> [list ColorbarMotion1 %x %y]
    $ds9(canvas) bind colorbar <ButtonRelease-1> [list ColorbarRelease1 %x %y]
    $ds9(canvas) bind colorbar <Double-1> [list ColorbarDouble1 %x %y]
    $ds9(canvas) bind colorbar <Double-ButtonRelease-1> \
	[list ColorbarDoubleRelease1 %x %y]

    $ds9(canvas) bind colorbar <Key> [list ColorbarKey %K %A %x %y]
    $ds9(canvas) bind colorbar <KeyRelease> \
	[list ColorbarKeyRelease %K %A %x %y]

    $ds9(canvas) create colorbarrgb$ds9(visual)$ds9(depth) \
	-colors 2048 \
	-tag colorbarrgb \
	-anchor nw \
	-helvetica $ds9(helvetica) \
	-courier $ds9(courier) \
	-times $ds9(times)

    $ds9(canvas) bind colorbarrgb <Motion> [list ColorbarMotion %x %y]
    $ds9(canvas) bind colorbarrgb <Enter> [list ColorbarEnter %x %y]
    $ds9(canvas) bind colorbarrgb <Leave> [list ColorbarLeave]

    LayoutColorbar
}

proc InitColorbar {} {
    global colorbar

    global current

    set current(colorbar) colorbar

    $current(colorbar) map "{$colorbar(map)}"
    $current(colorbar) invert $colorbar(invert)
}

proc ResetColormap {} {
    global colorbar

    global current
    global rgb

    $current(colorbar) reset
    if {$current(frame) != {} } {
	RGBEvalLockCurrent rgb(lock,colorbar) [list $current(frame) colormap [$current(colorbar) get colormap]]
	set colorbar(invert) [$current(colorbar) get invert]
    }
    LockColorCurrent
    UpdateColorDialog
}

proc LoadColormap {} {
    LoadColormapFile [OpenFileDialog colorbarfbox]
}

# used by backup
proc LoadColormapFile {filename} {
    global colorbar
    global icolorbar

    global current
    global ds9

    if {$filename != {}} {
	colorbar load "\{$filename\}"
	set id [colorbar get id]
	set colorbar(map) [colorbar get name]

	$ds9(mb).color.user add radiobutton \
	    -label "$colorbar(map)" \
	    -variable colorbar(map) \
	    -command [list ChangeColormapID $id]

	if {[winfo exists $icolorbar(top)]} {
	    $icolorbar(mb).colormap.user add radiobutton \
		-label "$colorbar(map)" \
		-variable colorbar(map) \
		-command [list ChangeColormapID $id]
	}
	incr icolorbar(count)

	ChangeColormapID $id
    }
}

proc SaveColormap {} {
    FileLast colorbarfbox [colorbar get file name]
    SaveColormapFile [SaveFileDialog colorbarfbox]
}

proc SaveColormapFile {filename} {
    if {$filename != {}} {
	colorbar save "\{$filename\}"
    }
}

proc LoadContrastBias {} {
    global dcolorbar

    set filename [OpenFileDialog contrastbiasfbox]
    if {$filename != {}} {
	if {![catch {set ch [open $filename r]}]} {
	    set ll [gets $ch]
	    close $ch
	    set dcolorbar(contrast) [lindex $ll 0]
	    set dcolorbar(bias) [lindex $ll 1]
	    ApplyColormap
	}
    }
}

proc SaveContrastBias {} {
    global dcolorbar

    set filename [SaveFileDialog contrastbiasfbox]
    if {$filename != {}} {
	if {![catch {set ch [open $filename w]}]} {
	    puts $ch "$dcolorbar(contrast) $dcolorbar(bias)"
	    close $ch
	}
    }
}

proc ColorbarEnter {x y} {
    global current
    global ds9

    global debug
    if {$debug(tcl,events)} {
	puts stderr "ColorbarEnter"
    }

    # check to see if this event was generated while processing other events
    if {$ds9(b1) || $ds9(sb1) || $ds9(cb1) || 
	$ds9(csb1) || $ds9(b2) || $ds9(b3)} {
	return
    }

    $ds9(canvas) focus $current(colorbar)

    switch -- $current(colorbar) {
	colorbar {LayoutFrameInfoBox base}
	colorbarrgb {LayoutFrameInfoBox rgb}
    }
}

proc ColorbarLeave {} {
    global current
    global ds9

    global debug
    if {$debug(tcl,events)} {
	puts stderr "ColorbarLeave"
    }

    # check to see if this event was generated while processing other events
    if {$ds9(b1) || $ds9(sb1) || $ds9(cb1) ||
	$ds9(csb1) || $ds9(b2) || $ds9(b3)} {
	return
    }

    $ds9(canvas) focus {}
    ClearInfoBoxCoords
}

proc ColorbarMotion {x y} {
    global current
    global infobox

    global debug
    if {$debug(tcl,events)} {
	puts stderr "ColorbarMotion $x $y"
    }

    switch -- $current(colorbar) {
	colorbar {
	    set infobox(value) [$current(colorbar) get value $x $y]
	}
	colorbarrgb {
	    set vv [$current(colorbar) get value $x $y]
	    switch -- $current(rgb) {
		red {set infobox(value,red) $vv}
		green {set infobox(value,green) $vv}
		blue {set infobox(value,blue) $vv}
	    }
	}
    }
}

proc ColorbarKey {K A xx yy} {
    global current
    global ds9

    # MacOSX and Ubuntu returns bogus values in xx,yy
    # calculate our own values
    set xx [expr {[winfo pointerx $ds9(canvas)] - [winfo rootx $ds9(canvas)]}]
    set yy [expr {[winfo pointery $ds9(canvas)] - [winfo rooty $ds9(canvas)]}]

    global debug
    if {$debug(tcl,events)} {
	puts stderr "ColorbarKey $K $A $xx $yy"
    }

    switch -- $current(mode) {
	colorbar {
	    switch -- $K {
		Delete -
		BackSpace {
		    $current(colorbar) tag delete $xx $yy
		    if {$current(frame) != {}} {
			$current(frame) colormap [$current(colorbar) get colormap]
		    }
		}
	    }
	}
    }
}

proc ColorbarKeyRelease {K A xx yy} {
    global current
    global ds9

    # MacOSX and Ubuntu returns bogus values in xx,yy
    # calculate our own values
    set xx [expr {[winfo pointerx $ds9(canvas)] - [winfo rootx $ds9(canvas)]}]
    set yy [expr {[winfo pointery $ds9(canvas)] - [winfo rooty $ds9(canvas)]}]

    global debug
    if {$debug(tcl,events)} {
	puts stderr "ColorbarKeyRelease $K $A $xx $yy"
    }
}

proc ColorbarButton1 {x y} {
    global icolorbar
    global colorbar
    global ds9
    global current
    global icursor

    global debug
    if {$debug(tcl,events)} {
	puts stderr "ColorbarButton1"
    }

    # let others know that the mouse is down
    set ds9(b1) 1

    # turn off blinking cursor
    if {$icursor(timer)} {
	catch {after cancel $icursor(id)}
	set icursor(id) 0
    }

    # are we on a tag? else create
    switch -- $current(mode) {
	colorbar {$current(colorbar) tag edit begin $x $y $colorbar(tag)}
    }
}

proc ColorbarMotion1 {x y} {
    global icolorbar
    global current
    global ds9

    global debug
    if {$debug(tcl,events)} {
	puts stderr "ColorbarMotion1"
    }

    # abort if we are here by accident (such as a double click)
    if {($ds9(b1) == 0) && ($ds9(sb1) == 0) && 
	($ds9(cb1) == 0) && ($ds9(csb1) == 0)} {
	return
    }

    switch -- $current(mode) {
	colorbar {
	    $current(colorbar) tag edit motion $x $y
	    if {$current(frame) != {}} {
		$current(frame) colormap [$current(colorbar) get colormap]
	    }
	}
    }
}

proc ColorbarRelease1 {x y} {
    global icolorbar
    global current
    global icursor
    global ds9

    global debug
    if {$debug(tcl,events)} {
	puts stderr "ColorbarRelease1"
    }

    # abort if we are here by accident (such as a double click)
    if {($ds9(b1) == 0) && ($ds9(sb1) == 0) && 
	($ds9(cb1) == 0) && ($ds9(csb1) == 0)} {
	return
    }

    # and turn on blinking cursor if needed
    if {$icursor(timer)} {
	CursorTimer
    }

    switch -- $current(mode) {
	colorbar {
	    $current(colorbar) tag edit end $x $y
	    if {$current(frame) != {}} {
		$current(frame) colormap [$current(colorbar) get colormap]
	    }
	}
    }

    # let others know that the mouse is up
    set ds9(b1) 0
    set ds9(sb1) 0
    set ds9(cb1) 0
    set ds9(csb1) 0
}

proc ColorbarDouble1 {x y} {
    global current

    global debug
    if {$debug(tcl,events)} {
	puts stderr "ColorbarDouble1"
    }

    switch -- $current(mode) {
	colorbar {ColorTagDialog $x $y}
    }
}

proc ColorbarDoubleRelease1 {x y} {
    global current

    global debug
    if {$debug(tcl,events)} {
	puts stderr "ColorbarDoubleRelease1"
    }
}

proc ColorbarButton3 {x y} {
    global icolorbar

    global current
    global rgb
    global icursor

    # turn off blinking cursor
    if {$icursor(timer)} {
	catch {after cancel $icursor(id)}
	set icursor(id) 0
    }

    if {$current(frame) != {}} {
	# we need to hold the current frame, since we may be blinking
	set icolorbar(frame) $current(frame)
	$icolorbar(frame) colormap begin
    }
}

proc ColorbarMotion3 {x y} {
    global icolorbar

    global current
    global canvas

    # X sets bias
    set bias [expr double($x)/$canvas(width)]

    # Y sets contrast
    set contrast [expr double($y)/$canvas(height) * 10]

    RGBEvalLockColorbar [list $current(colorbar) adjust $contrast $bias]
    if {$icolorbar(frame) != {}} {
	# only update the current colorbar frame
	$icolorbar(frame) colormap motion [$current(colorbar) get colormap]
    }
    UpdateColorDialog
}

proc ColorbarRelease3 {x y} {
    global icolorbar

    global current
    global rgb
    global icursor

    # and turn on blinking cursor if needed
    if {$icursor(timer)} {
	CursorTimer
    }

    # only update the current colorbar frame
    if {$icolorbar(frame) != {}} {
	$icolorbar(frame) colormap end
	set icolorbar(frame) {}
    }
    LockColorCurrent
    UpdateColorDialog
}

proc ChangeColormapID {id} {
    global colorbar

    global current
    
    colorbar map $id
    if {$current(frame) != {} } {
	$current(frame) colormap [colorbar get colormap]
	set colorbar(map) [colorbar get name]
	set colorbar(invert) [colorbar get invert]
    }
    LockColorCurrent
    UpdateColorDialog
}

proc MatchColorCurrent {} {
    global current

    if {$current(frame) != {}} {
	MatchColor $current(frame)
    }
}

proc MatchColor {which} {
    global ds9
    global current
    global colorbar

    set tt [$which get type]
    foreach ff $ds9(frames) {
	if {$ff != $which} {
	    switch -- [$ff get type] {
		base -
		3d {
		    if {$tt != {rgb}} {
			$ff colormap [colorbar get colormap]
		    }
		}
		rgb {
		    if {$tt == {rgb}} {
			$ff colormap [colorbarrgb get colormap]
		    }
		}
	    }
	}
    }
}

proc LockColorCurrent {} {
    global current
    
    if {$current(frame) != {}} {
	LockColor $current(frame)
    }
}

proc LockColor {which} {
    global colorbar

    if {$colorbar(lock)} {
	MatchColor $which
    }
}

proc InvertColorbar {} {
    global colorbar

    global current

    $current(colorbar) invert $colorbar(invert)
    if {$current(frame) != {} } {
	$current(frame) colormap [$current(colorbar) get colormap]
    }
    LockColorCurrent
    UpdateColorDialog
}

proc UpdateColormapLevel {} {
    global icolorbar

    global current

    global debug
    if {$debug(tcl,update)} {
	puts stderr "UpdateColormapLevel"
    }

    if {$current(frame) != {}} {
	$current(colorbar) colormap level \
	    [$current(frame) get colormap level $icolorbar(num)]
    } else {
	$current(colorbar) colormap level
    }
}

proc UpdateColormapLevelMosaic {which x y sys} {
    global icolorbar

    global current
    global current
    global scale

    global debug
    if {$debug(tcl,update)} {
	puts stderr "UpdateColormapLevelMosaic"
    }

    if {$current(frame) == {}} {
	$current(colorbar) colormap level
	return
    }

    if {($current(frame) == $which) && 
	($scale(scope) == "local") &&
	[$which has fits mosaic]} {

	set ext [$which get fits ext $sys $x $y]

	if {$current(ext) != $ext} {
	    $current(colorbar) colormap level \
	       [$current(frame) get colormap level $icolorbar(num) $sys $x $y]
	}

	set current(ext) $ext
    } else {
	set current(ext) {}
    }
}

proc ColorFrameBackup {ch which} {
    puts $ch "$which colorbar tag \"\{[$which get colorbar tag]\}\""
    puts $ch "colorbar tag \"\{[$which get colorbar tag]\}\""
}

proc ColorbarSizeDialog {} {
    global colorbar
    global ds9

    switch $ds9(wm) {
	x11 -
	win32 {
	    if {[EntryDialog [msgcat::mc {Colorbar}] [msgcat::mc {Size}] 10 colorbar(size)]} {
		UpdateView
	    }
	}
	aqua {
	    # we have a race condition here. the main window needs focus
	    # back from the dialog before UpdateView is run, otherwise,
	    # our pretty blue buttons are not activated
	    if {[EntryDialog [msgcat::mc {Colorbar}] [msgcat::mc {Size}] 10 colorbar(size)]} {
		after 100 UpdateView
	    }
	}
    }
}

proc TicksDialog {} {
    global colorbar

    global ds9

    switch $ds9(wm) {
	x11 -
	win32 {
	    if {[EntryDialog [msgcat::mc {Colorbar}] [msgcat::mc {Number of Ticks}] 10 colorbar(ticks)]} {
		UpdateView
	    }
	}
	aqua {
	    # we have a race condition here. the main window needs focus
	    # back from the dialog before UpdateView is run, otherwise,
	    # our pretty blue buttons are not activated
	    if {[EntryDialog [msgcat::mc {Colorbar}] [msgcat::mc {Number of Ticks}] 10 colorbar(ticks)]} {
		after 100 UpdateView
	    }
	}
    }
}

proc OpenColorTag {} {
    LoadColorTag [OpenFileDialog colortagfbox]
}

proc LoadColorTag {fn} {
    global current

    if {$fn != {}} {
	$current(colorbar) tag load "\{$fn\}"
	if {$current(frame) != {}} {
	    $current(frame) colormap [$current(colorbar) get colormap]
	}
    }
}

proc SaveColorTag {} {
    global current

    set fn [SaveFileDialog colortagfbox]
    if {$fn != {}} {
	$current(colorbar) tag save "\{$fn\}"
    }
}

proc DeleteColorTag {} {
    global current

    $current(colorbar) tag delete
    if {$current(frame) != {}} {
	$current(frame) colormap [$current(colorbar) get colormap]
    }
}

proc ColorTagDialog {x y} {
    global ds9
    global current
    global colorbar
    global ed2

    set w {.ctagd}

    set rr [$current(colorbar) get tag $x $y]

    set ed2(ok) 0
    set ed2(id) [lindex $rr 0]
    set ed2(start) [lindex $rr 1]
    set ed2(stop) [lindex $rr 2]
    set ed2(color) [lindex $rr 3]

    DialogCreate $w [msgcat::mc {Color}] ed2(ok)

    # Param
    set f [ttk::frame $w.param]

    ttk::label $f.tstart -text [msgcat::mc {Start}]
    ttk::entry $f.start -textvariable ed2(start) -width 10
    ttk::label $f.tstop -text [msgcat::mc {Stop}]
    ttk::entry $f.stop -textvariable ed2(stop) -width 10
    ttk::label $f.tcolor -text [msgcat::mc {Color}]
    ColorMenuButton $f.color ed2 color {}

    grid $f.tstart $f.start -padx 2 -pady 2 -sticky w
    grid $f.tstop $f.stop -padx 2 -pady 2 -sticky w
    grid $f.tcolor $f.color -padx 2 -pady 2 -sticky w

    # Buttons
    set f [ttk::frame $w.buttons]
    ttk::button $f.ok -text [msgcat::mc {OK}] -command {set ed2(ok) 1} \
	-default active 
    ttk::button $f.cancel -text [msgcat::mc {Cancel}] -command {set ed2(ok) 0}
    pack $f.ok $f.cancel -side left -expand true -padx 2 -pady 4

    bind $w <Return> {set ed2(ok) 1}

    # Fini
    ttk::separator $w.sep -orient horizontal
    pack $w.buttons $w.sep -side bottom -fill x
    pack $w.param -side top -fill both -expand true

    DialogCenter $w 
    DialogWait $w ed2(ok)
    DialogDismiss $w

    if {$ed2(ok)} {
	$current(colorbar) tag $ed2(id) $ed2(start) $ed2(stop) $ed2(color)
	if {$current(frame) != {}} {
	    $current(frame) colormap [$current(colorbar) get colormap]
	}
    }

    set rr $ed2(ok)
    unset ed2
    return $rr
}

proc ColormapDialog {} {
    global colorbar
    global icolorbar
    global dcolorbar

    global ds9

    # see if we already have a window visible

    if {[winfo exists $icolorbar(top)]} {
	raise $icolorbar(top)
	return
    }

    # create the window
    set w $icolorbar(top)
    set mb $icolorbar(mb)

    Toplevel $w $mb 6 [msgcat::mc {Colormap Parameters}] ColormapDestroyDialog

    $mb add cascade -label [msgcat::mc {File}] -menu $mb.file
    $mb add cascade -label [msgcat::mc {Edit}] -menu $mb.edit
    $mb add cascade -label [msgcat::mc {Colormap}] -menu $mb.colormap
    $mb add cascade -label [msgcat::mc {Color}] -menu $mb.color

    menu $mb.file
    $mb.file add command -label [msgcat::mc {Apply}] \
	-command ApplyColormap
    $mb.file add separator
    $mb.file add command -label "[msgcat::mc {Load Colormap}]..." \
	-command LoadColormap
    $mb.file add command -label "[msgcat::mc {Save Colormap}]..." \
	-command SaveColormap
    $mb.file add separator
    $mb.file add command -label "[msgcat::mc {Download Colormap}]..." \
	-command {HV cpt CPT-CITY http://soliton.vm.bytemark.co.uk/pub/cpt-city}
    $mb.file add separator
    $mb.file add command -label "[msgcat::mc {Load Contrast/Bias}]..."\
	-command LoadContrastBias
    $mb.file add command -label "[msgcat::mc {Save Contrast/Bias}]..." \
	-command SaveContrastBias
    $mb.file add separator
    $mb.file add command -label "[msgcat::mc {Load Color Tags}]..."\
	-command OpenColorTag
    $mb.file add command -label "[msgcat::mc {Save Color Tags}]..." \
	-command SaveColorTag
    $mb.file add command -label "[msgcat::mc {Delete Color Tags}]..." \
	-command DeleteColorTag
    $mb.file add separator
    $mb.file add command -label [msgcat::mc {Close}] \
	-command ColormapDestroyDialog

    EditMenu $mb icolorbar

    ColorMenu $mb.color colorbar tag {}

    menu $mb.colormap
    menu $mb.colormap.h5
    menu $mb.colormap.matplotlib
    menu $mb.colormap.cubehelix
    menu $mb.colormap.gist
    menu $mb.colormap.topo
    menu $mb.colormap.user

    set id [colorbar list id]

    ColormapCreateMenu id $mb.colormap \
	0 $icolorbar(end)
    ColormapCreateMenu id $mb.colormap.h5 \
	$icolorbar(h5) $icolorbar(matplotlib)
    ColormapCreateMenu id $mb.colormap.matplotlib \
	$icolorbar(matplotlib) $icolorbar(cubehelix)
    ColormapCreateMenu id $mb.colormap.cubehelix \
	$icolorbar(cubehelix) $icolorbar(gist)
    ColormapCreateMenu id $mb.colormap.gist \
	$icolorbar(gist) $icolorbar(topo)
    ColormapCreateMenu id $mb.colormap.topo \
	$icolorbar(topo) $icolorbar(user)
    ColormapCreateMenu id $mb.colormap.user \
	$icolorbar(user) $icolorbar(count)

    $mb.colormap add separator
    $mb.colormap add cascade -label [msgcat::mc {h5utils}] \
	-menu $mb.colormap.h5
    $mb.colormap add cascade -label [msgcat::mc {Matplotlib}] \
	-menu $mb.colormap.matplotlib
    $mb.colormap add cascade -label [msgcat::mc {Cubehelix}] \
	-menu $mb.colormap.cubehelix
    $mb.colormap add cascade -label [msgcat::mc {Gist}] \
	-menu $mb.colormap.gist
    $mb.colormap add cascade -label [msgcat::mc {Topographic}] \
	-menu $mb.colormap.topo
    $mb.colormap add cascade -label [msgcat::mc {User}] \
	-menu $mb.colormap.user
    $mb.colormap add separator
    $mb.colormap add checkbutton \
	-label [msgcat::mc {Invert Colormap}] \
	-variable colorbar(invert) -command InvertColorbar
    $mb.colormap add command -label [msgcat::mc {Reset Colormap}] \
	-command ResetColormap

    UpdateColorDialog

    # Param
    set f [ttk::frame $w.param]
 
    slider $f.cslider 0. 10. [msgcat::mc {Contrast}] \
	dcolorbar(contrast) [list AdjustColormap]
    slider $f.bslider 0. 1. [msgcat::mc {Bias}] \
	dcolorbar(bias) [list AdjustColormap]

    grid $f.cslider -padx 2 -pady 2 -sticky ew
    grid $f.bslider -padx 2 -pady 2 -sticky ew
    grid columnconfigure $f 0 -weight 1

    bind $f.cslider.slider <Button-1> BeginAdjustColormap
    bind $f.cslider.slider <ButtonRelease-1> EndAdjustColormap
    bind $f.bslider.slider <Button-1> BeginAdjustColormap
    bind $f.bslider.slider <ButtonRelease-1> EndAdjustColormap

    # Buttons
    set f [ttk::frame $w.buttons]
    ttk::button $f.apply -text [msgcat::mc {Apply}] \
	-command ApplyColormap
    ttk::button $f.close -text [msgcat::mc {Close}] \
	-command ColormapDestroyDialog
    pack $f.apply $f.close -side left -expand true -padx 2 -pady 4 

    # Fini
    ttk::separator $w.sep -orient horizontal
    pack $w.buttons $w.sep -side bottom -fill x
    pack $w.param -side top -fill both -expand true
}

proc ColormapCreateMenu {varname which start stop} {
    upvar $varname var

    for {set ii $start} {$ii<$stop} {incr ii} {
	set jj [lindex $var $ii]
	set name [colorbar get name $jj]
	$which add radiobutton \
	    -label [msgcat::mc $name] \
	    -variable colorbar(map) -value $name \
	    -command "ChangeColormapID $jj"
    }
}

proc ColormapDestroyDialog {} {
    global icolorbar
    global dcolorbar

    if {[winfo exists $icolorbar(top)]} {
	destroy $icolorbar(top)
	destroy $icolorbar(mb)
    }

    unset dcolorbar
}

proc ApplyColormap {} {
    global dcolorbar

    global current
    global rgb

    RGBEvalLockColorbar [list $current(colorbar) adjust $dcolorbar(contrast) $dcolorbar(bias)]
    if {$current(frame) != {}} {
	RGBEvalLockCurrent rgb(lock,colorbar) [list $current(frame) colormap [$current(colorbar) get colormap]]
	LockColorCurrent
    }
}

proc BeginAdjustColormap {} {
    global icolorbar

    global current
    global rgb

    set icolorbar(adjustok) 1
    if {$current(frame) != {}} {
	RGBEvalLockCurrent rgb(lock,colorbar) [list $current(frame) colormap begin]
    }
}

proc AdjustColormap {} {
    global icolorbar
    global dcolorbar

    global current
    global rgb

    if {[info exists icolorbar(adjustok)]} {
	RGBEvalLockColorbar [list $current(colorbar) adjust $dcolorbar(contrast) $dcolorbar(bias)]
	if {$current(frame) != {}} {
	    RGBEvalLockCurrent rgb(lock,colorbar) [list $current(frame) colormap motion [$current(colorbar) get colormap]]
	}
    }
}

proc EndAdjustColormap {} {
    global icolorbar

    global current
    global rgb

    if {[info exists icolorbar(adjustok)]} {
	unset icolorbar(adjustok)
	if {$current(frame) != {}} {
	    RGBEvalLockCurrent rgb(lock,colorbar) [list $current(frame) colormap end]
	    LockColorCurrent
	}
    }
}

proc UpdateColorDialog {} {
    global icolorbar
    global dcolorbar

    global current

    global debug
    if {$debug(tcl,update)} {
	puts stderr "UpdateColorDialog"
    }

    if {[winfo exists $icolorbar(top)]} {
	set dcolorbar(contrast) [$current(colorbar) get contrast]
	set dcolorbar(bias) [$current(colorbar) get bias]
	set end [expr $icolorbar(end)+$icolorbar(start)]

	if {$current(frame) != {}} {
	    switch -- [$current(frame) get type] {
		base -
		3d {
		    $icolorbar(mb).file entryconfig \
			"[msgcat::mc {Load Colormap}]..." -state normal
		    $icolorbar(mb).file entryconfig \
			"[msgcat::mc {Save Colormap}]..." -state normal
		    for {set ii $icolorbar(start)} {$ii<$end} {incr ii} {
			$icolorbar(mb).colormap entryconfig $ii -state normal
		    }
		    $icolorbar(mb).colormap entryconfig \
			[msgcat::mc {h5utils}] -state normal
		    $icolorbar(mb).colormap entryconfig \
			[msgcat::mc {Matplotlib}] -state normal
		    $icolorbar(mb).colormap entryconfig \
			[msgcat::mc {Cubehelix}] -state normal
		    $icolorbar(mb).colormap entryconfig \
			[msgcat::mc {Gist}] -state normal
		    $icolorbar(mb).colormap entryconfig \
			[msgcat::mc {Topographic}] -state normal
		    $icolorbar(mb).colormap entryconfig \
			[msgcat::mc {User}] -state normal
		}
		rgb {
		    $icolorbar(mb).file entryconfig \
			"[msgcat::mc {Load Colormap}]..." -state disabled
		    $icolorbar(mb).file entryconfig \
			"[msgcat::mc {Save Colormap}]..." -state disabled
		    for {set ii $icolorbar(start)} {$ii<$end} {incr ii} {
			$icolorbar(mb).colormap entryconfig $ii -state disabled
		    }
		    $icolorbar(mb).colormap entryconfig \
			[msgcat::mc {h5utils}] -state disabled
		    $icolorbar(mb).colormap entryconfig \
			[msgcat::mc {Matplotlib}] -state disabled
		    $icolorbar(mb).colormap entryconfig \
			[msgcat::mc {Cubehelix}] -state disabled
		    $icolorbar(mb).colormap entryconfig \
			[msgcat::mc {Gist}] -state disabled
		    $icolorbar(mb).colormap entryconfig \
			[msgcat::mc {Topographic}] -state disabled
		    $icolorbar(mb).colormap entryconfig \
			[msgcat::mc {User}] -state disabled
		}
	    }
	} else {
	    $icolorbar(mb).file entryconfig \
		"[msgcat::mc {Load Colormap}]..." -state normal
	    $icolorbar(mb).file entryconfig \
		"[msgcat::mc {Save Colormap}]..." -state normal
	    for {set ii $icolorbar(start)} {$ii<$end} {incr ii} {
		$icolorbar(mb).colormap entryconfig $ii -state normal
	    }
	    $icolorbar(mb).colormap entryconfig [msgcat::mc {h5utils}] \
		-state normal
	    $icolorbar(mb).colormap entryconfig [msgcat::mc {Matplotlib}] \
		-state normal
	    $icolorbar(mb).colormap entryconfig [msgcat::mc {Cubehelix}] \
		-state normal
	    $icolorbar(mb).colormap entryconfig [msgcat::mc {Gist}] \
		-state normal
	    $icolorbar(mb).colormap entryconfig [msgcat::mc {Topographic}] \
		-state normal
	    $icolorbar(mb).colormap entryconfig [msgcat::mc {User}] \
		-state normal
	}
    }
}

proc LayoutColorbar {} {
    global colorbar
    global icolorbar

    global ds9
    global canvas

    colorbar configure \
	-size $colorbar(size) \
	-ticks $colorbar(ticks) \
	-numerics $colorbar(numerics) \
	-space $colorbar(space) \
	-font $colorbar(font) \
	-fontsize $colorbar(font,size) \
	-fontweight $colorbar(font,weight) \
	-fontslant $colorbar(font,slant) \

    colorbarrgb configure \
	-size $colorbar(size) \
	-ticks $colorbar(ticks) \
	-numerics $colorbar(numerics) \
	-space $colorbar(space) \
	-font $colorbar(font) \
	-fontsize $colorbar(font,size) \
	-fontweight $colorbar(font,weight) \
	-fontslant $colorbar(font,slant) \

    switch -- $colorbar(orientation) {
	horizontal {
	    set xx 0
	    set yy [expr $canvas(height) + $canvas(gap)]

	    colorbar configure -x $xx -y $yy \
		-width $canvas(width) \
		-height $icolorbar(horizontal,height) \
		-orientation 0

	    colorbarrgb configure -x $xx -y $yy \
		-width $canvas(width) \
		-height $icolorbar(horizontal,height) \
		-orientation 0
	}
	vertical {
	    set xx [expr $canvas(width) + $canvas(gap)]
	    set yy 0

	    colorbar configure -x $xx -y $yy \
		-width $icolorbar(vertical,width) \
		-height $canvas(height) \
		-orientation 1

	    colorbarrgb configure -x $xx -y $yy \
		-width $icolorbar(vertical,width) \
		-height $canvas(height) \
		-orientation 1
	}
    }
}

proc ColorbarBackup {ch which} {
    global colorbar

    puts $ch "$which configure -size $colorbar(size)"
    puts $ch "$which configure -ticks $colorbar(ticks)"
    puts $ch "$which configure -numerics $colorbar(numerics)"
    puts $ch "$which configure -space $colorbar(space)"
    switch $colorbar(orientation) {
	horizontal {puts $ch "$which configure -orientation 0"}
	vertical {puts $ch "$which configure -orientation 1"}
    }
    puts $ch "$which configure -font $colorbar(font)"
    puts $ch "$which configure -fontsize $colorbar(font,size)"
    puts $ch "$which configure -fontweight $colorbar(font,weight)"
    puts $ch "$which configure -fontslant $colorbar(font,slant)"

    puts $ch "$which colorbar [$which get colorbar]"
    puts $ch "$which tag \"\{[$which get tag]\}\""
}

proc ColormapFrameBackup {ch which} {
    switch -- [$which get type] {
	base -
	3d {
	    puts $ch "set sav \[colorbar get colorbar\]"
	    puts $ch "colorbar colorbar [$which get colorbar]"
	    puts $ch "$which colormap \[colorbar get colormap\]"
	    puts $ch "colorbar colorbar \$sav"
	}
	rgb {
	    puts $ch "set sav \[colorbarrgb get colorbar\]"
	    puts $ch "colorbarrgb colorbar [$which get colorbar]"
	    puts $ch "$which colormap \[colorbarrgb get colormap\]"
	    puts $ch "colorbarrgb colorbar \$sav"
	}
    }
}

proc ColorbarBackupCmaps {ch dir} {
    global icolorbar

    set rdir "./[lindex [file split $dir] end]"

    # delete old cmaps
    foreach ff [glob -directory $dir -nocomplain "*.sao"] {
	catch {file delete -force $ff}
    }
    foreach ff [glob -directory $dir -nocomplain "*.lut"] {
	catch {file delete -force $ff}
    }

    # save any loaded cmaps
    set id [colorbar list id]
    if {$icolorbar(user)<[llength $id]} {
	for {set ii $icolorbar(user)} {$ii<[llength $id]} {incr ii} {
	    set which [lindex $id $ii]
	    set nn [lindex [file split [colorbar get file name $which]] end]
	    colorbar save $which \"[file join $dir $nn]\"
	    puts $ch "LoadColormapFile \"[file join $rdir $nn]\""
	}
    }
}

# Process Cmds

proc ProcessCmapCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    global colorbar
    global current

    global ds9
    global current
    global rgb

    # we need to be realized
    ProcessRealizeDS9

    switch -- [string tolower [lindex $var $i]] {
	open {ColormapDialog}
	close {ColormapDestroyDialog}
	match {
	    # backward compatibility
	    MatchColorCurrent
	}
	lock {
	    # backward compatibility
	    incr i
	    if {!([string range [lindex $var $i] 0 0] == "-")} {
		set colorbar(lock) [FromYesNo [lindex $var $i]]
	    } else {
		set colorbar(lock) 1
		incr i -1
	    }
	    LockColorCurrent
	}
	load -
	file {
	    incr i
	    set fn [lindex $var $i]
	    LoadColormapFile $fn
	    FileLast colormapfbox $fn
	}
	save {
	    incr i
	    set fn [lindex $var $i]
	    SaveColormapFile $fn
	    FileLast colormapfbox $fn
	}
	invert {
	    incr i
	    set colorbar(invert) [FromYesNo [lindex $var $i]]
	    InvertColorbar
	}
	tag {
	    incr i
	    set item [string tolower [lindex $var $i]]
	    switch $item {
		load {incr i; LoadColorTag [lindex $var $i]}
		save {incr i; $current(colorbar) tag save [lindex $var $i]}
		delete {DeleteColorTag}
	    }
	}
	value {
	    incr i
	    set c [lindex $var $i]
	    incr i
	    set b [lindex $var $i]
	    if {$current(frame) != {}} {
		RGBEvalLockColorbar [list $current(colorbar) adjust $c $b]
		RGBEvalLockCurrent rgb(lock,colorbar) [list $current(frame) colormap begin]
		RGBEvalLockCurrent rgb(lock,colorbar) [list $current(frame) colormap motion [$current(colorbar) get colormap]]
		RGBEvalLockCurrent rgb(lock,colorbar) [list $current(frame) colormap end]
	    }
	    LockColorCurrent
	    UpdateColorDialog
	}
	default {
	    switch -- [$current(frame) get type] {
		base -
		3d {
		    set cmap [lindex $var $i]
		    # common variants on spellings
		    switch -- [string tolower $cmap] {
			gray {set cmap grey}
		    }

		    set id [colorbar list id]
		    set found 0
		    foreach ii $id {
			set title [colorbar get name $ii]
			if {[string equal -nocase $title $cmap]} {
			    set colorbar(map) $title
			    colorbar map "{$colorbar(map)}"
			    $current(frame) colormap [colorbar get colormap]
			    set colorbar(invert) [colorbar get invert]

			    set found 1
			    break
			}
		    }
		    if {!$found} {
			Error "[msgcat::mc {Unknown Colormap}] $cmap"
		    }
		}
		rgb {}
	    }
	    LockColorCurrent
	    UpdateColorDialog
	}
    }
}

proc CmapCmd {item} {
    global current
    global colorbar

    switch -- [$current(frame) get type] {
	base -
	3d {
	    set cmap $item
	    # common variants on spellings
	    switch -- [string tolower $cmap] {
		gray {set cmap grey}
	    }

	    set id [colorbar list id]
	    set found 0
	    foreach ii $id {
		set title [colorbar get name $ii]
		if {[string equal -nocase $title $cmap]} {
		    set colorbar(map) $title
		    colorbar map "{$colorbar(map)}"
		    $current(frame) colormap [colorbar get colormap]
		    set colorbar(invert) [colorbar get invert]

		    set found 1
		    break
		}
	    }
	    if {!$found} {
		Error "[msgcat::mc {Unknown Colormap}] $cmap"
	    }
	}
	rgb {}
    }
    LockColorCurrent
    UpdateColorDialog
}

proc CmapValueCmd {c b} {
    global current 

    if {$current(frame) != {}} {
	RGBEvalLockColorbar [list $current(colorbar) adjust $c $b]
	RGBEvalLockCurrent rgb(lock,colorbar) [list $current(frame) colormap begin]
	RGBEvalLockCurrent rgb(lock,colorbar) [list $current(frame) colormap motion [$current(colorbar) get colormap]]
	RGBEvalLockCurrent rgb(lock,colorbar) [list $current(frame) colormap end]
    }
    LockColorCurrent
    UpdateColorDialog
}

proc ProcessSendCmapCmd {proc id param} {
    global colorbar
    global current

    switch -- [string tolower $param] {
	file {$proc $id "[$current(colorbar) get file name]\n"}
	invert {$proc $id [ToYesNo $colorbar(invert)]}
	value {$proc $id "[$current(colorbar) get contrast] [$current(colorbar) get bias]\n"}
	lock {$proc $id [ToYesNo $colorbar(lock)]} 
	{} {$proc $id "[$current(colorbar) get name]\n"}
    }
}

proc ProcessColorbarCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    global colorbar
    global view

    set item [string tolower [lindex $var $i]]

    switch  -- $item {
	match {
	    # backward compatibility
	    MatchColorCurrent
	}
	lock {
	    # backward compatibility
	    incr i
	    if {!([string range [lindex $var $i] 0 0] == "-")} {
		set colorbar(lock) [FromYesNo [lindex $var $i]]
	    } else {
		set colorbar(lock) 1
		incr i -1
	    }
	    LockColorCurrent
	}
	numerics {
	    incr i
	    set yesno [string tolower [lindex $var $i]]
	    set colorbar(numerics) [FromYesNo $yesno]
	    UpdateView
	}
	space {
	    incr i
	    switch -- [string tolower [lindex $var $i]] {
		value {set item 1}
		default {set item 0}
	    }
	    set colorbar(space) $item
	    UpdateView
	}
	font {
	    incr i
	    set item [string tolower [lindex $var $i]]
	    set colorbar(font) $item
	    UpdateView
	}
	fontsize {
	    incr i
	    set item [lindex $var $i]
	    set colorbar(font,size) $item
	    UpdateView
	}
	fontweight {
	    incr i
	    set item [string tolower [lindex $var $i]]
	    set colorbar(font,weight) $item
	    UpdateView
	}
	fontslant {
	    incr i
	    set item [string tolower [lindex $var $i]]
	    set colorbar(font,slant) $item
	    UpdateView
	}
	fontstyle {
	    # backward compatibility
	    incr i
	    set item [string tolower [lindex $var $i]]
	    switch $item {
		normal {
		    set colorbar(font,weight) normal
		    set colorbar(font,slant) roman
		}
		bold {
		    set colorbar(font,weight) bold
		    set colorbar(font,slant) roman
		}
		italic {
		    set colorbar(font,weight) normal
		    set colorbar(font,slant) italic
		}
	    }
	    UpdateView
	}
	orientation {
	    incr i
	    set item [string tolower [lindex $var $i]]
	    set colorbar(orientation) $item
	    UpdateView
	}
	vertical -
	horizontal {
	    set colorbar(orientation) $item
	    UpdateView
	}
	size {
	    incr i
	    set item [lindex $var $i]
	    set colorbar(size) $item
	    UpdateView
	}
	ticks {
	    incr i
	    set item [lindex $var $i]
	    set colorbar(ticks) $item
	    UpdateView
	}
	default {
	    set yesno [string tolower [lindex $var $i]]
	    set view(colorbar) [FromYesNo $yesno]
	    UpdateView
	}
    }
}

proc ProcessSendColorbarCmd {proc id param} {
    global colorbar
    global view

    switch -- [string tolower [lindex $param 0]] {
	lock {
	    #backward compatibility
	    $proc $id [ToYesNo $colorbar(lock)]
	} 
	orientation {$proc $id "$colorbar(orientation)\n"} 
	numerics {$proc $id [ToYesNo $colorbar(numerics)]} 
	space {
	    if {$colorbar(space)} {
		$proc $id "value\n"
	    } else {
		$proc $id "distance\n"
	    }
	}
	font {$proc $id "$colorbar(font)\n"} 
	fontsize {$proc $id "$colorbar(font,size)\n"} 
	fontstyle -
	fontweight {$proc $id "$colorbar(font,weight)\n"} 
	fontslant {$proc $id "$colorbar(font,slant)\n"} 
	size {$proc $id "$colorbar(size)\n"}
	ticks {$proc $id "$colorbar(ticks)\n"}
	default {$proc $id [ToYesNo $view(colorbar)]} 
    }
}
