#  Copyright (C) 1999-2021
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc ColorbarDef {} {
    global ds9
    global colorbar
    global icolorbar
    global pcolorbar

    set icolorbar(num) 1024

    set icolorbar(top) .clrbar
    set icolorbar(mb) .clrbarmb

    set icolorbar(default,cmaps) [list grey red green blue a b bb he i8 aips0 sls hsv heat cool rainbow standard staircase color]

    set icolorbar(h5,cmaps) [list h5_autumn h5_bluered h5_bone h5_cool h5_copper h5_dkbluered h5_gray h5_green h5_hot h5_hsv h5_jet h5_pink h5_spring h5_summer h5_winter h5_yarg h5_yellow]
    set icolorbar(matplotlib,cmaps) [list viridis]
    set icolorbar(matplotlib2,cmaps) [list inferno magma plasma twilight turbo]
    set icolorbar(cubehelix,cmaps) [list ch05m151008 ch05m151010 ch05m151012 ch05m151410 ch05p151010 ch20m151010 cubehelix0 cubehelix1]
    set icolorbar(gist,cmaps) [list gist_earth gist_heat gist_rainbow gist_yarg gist_gray gist_ncar gist_stern]
    set icolorbar(topo,cmaps) [list tpglarf tpglhcf tpglhwf tpglpof tpglarm tpglhcm tpglhwm tpglpom]
    set icolorbar(user,cmaps) {}

    # used for Color{Button|Motion|Release}3
    set icolorbar(frame) {}
    set icolorbar(colorbar) {}

    set colorbar(lock) 0
    set colorbar(map) grey
    set colorbar(invert) 0
    set colorbar(tag) red

    set colorbar(size) 20
    set colorbar(ticks) 11
    set colorbar(numerics) 1
    set colorbar(space) 0
    set colorbar(orientation) 0

    set colorbar(font) helvetica
    set colorbar(font,size) 9
    set colorbar(font,weight) normal
    set colorbar(font,slant) roman

    array set pcolorbar [array get colorbar]

    set colorbar(vertical,width) 75
    set colorbar(horizontal,height) 45
}

proc CreateColorbar {} {
    global ds9
    global colorbar
    global canvas

    $ds9(canvas) create colorbar$ds9(visual)$ds9(depth) \
	-colors 2048 \
	-tag colorbar \
	-anchor nw \
	\
	-size $colorbar(size) \
	-ticks $colorbar(ticks) \
	-numerics $colorbar(numerics) \
	-space $colorbar(space) \
	\
	-font $colorbar(font) \
	-fontsize $colorbar(font,size) \
	-fontweight $colorbar(font,weight) \
	-fontslant $colorbar(font,slant) \
	\
	-helvetica $ds9(helvetica) \
	-courier $ds9(courier) \
	-times $ds9(times) \
	-fg [ThemeTreeForeground] \
	-bg [ThemeTreeBackground]

    # preload external cmaps
    # maintain same order for backward compatibility
    CreateColorbarExternal colorbar h5 sao
    CreateColorbarExternal colorbar matplotlib lut
    CreateColorbarExternal colorbar cubehelix sao
    CreateColorbarExternal colorbar gist sao
    CreateColorbarExternal colorbar topo sao
    CreateColorbarExternal colorbar matplotlib2 lut

    # reset current map
    colorbar map $colorbar(map)
    colorbar invert $colorbar(invert)
    colorbar hide

    LayoutColorbar colorbar 0 0 $canvas(width) $canvas(height)

    # just for backup backward compatibility
    $ds9(canvas) create colorbarrgb$ds9(visual)$ds9(depth) -tag colorbarrgb
    colorbarrgb invert $colorbar(invert)
    colorbarrgb hide

    LayoutColorbar colorbarrgb 0 0 $canvas(width) $canvas(height)
}

proc CreateColorbarBase {frame} {
    global ds9
    global icolorbar
    global colorbar
    global current

    # save current colorbar params if appropriate
    switch [$current(colorbar) get type] {
	base {set sav [$current(colorbar) get colorbar]}
	rgb {set sav [colorbar get colorbar]}
    }

    set which ${frame}cb

    $ds9(canvas) create colorbar$ds9(visual)$ds9(depth) \
	-colors 2048 \
	-tag $which \
	-command $which \
	-anchor nw \
	\
	-size $colorbar(size) \
	-ticks $colorbar(ticks) \
	-numerics $colorbar(numerics) \
	-space $colorbar(space) \
	-orientation $colorbar(orientation) \
	\
	-font $colorbar(font) \
	-fontsize $colorbar(font,size) \
	-fontweight $colorbar(font,weight) \
	-fontslant $colorbar(font,slant) \
	\
	-helvetica $ds9(helvetica) \
	-courier $ds9(courier) \
	-times $ds9(times) \
	-fg [ThemeTreeForeground] \
	-bg [ThemeTreeBackground]

    # preload external cmaps
    # maintain same order for backward compatibility
    CreateColorbarExternal $which h5 sao
    CreateColorbarExternal $which matplotlib lut
    CreateColorbarExternal $which cubehelix sao
    CreateColorbarExternal $which gist sao
    CreateColorbarExternal $which topo sao
    CreateColorbarExternal $which matplotlib2 lut

    # preload any user
    foreach cmap $icolorbar(user,cmaps) {
	global vardata
	set fn [colorbar get file name $cmap]
	colorbar save var $cmap vardata
	$which load var $fn {} vardata
	unset vardata
    }

    # now init new colorbar to prev values
    # must come after all cmaps have been defined
    $which colorbar $sav
    
    # enable events
    BindEventsColorbar $which

    LayoutColorbar $which 0 0 \
	[winfo width $ds9(canvas)] [winfo height $ds9(canvas)]
}

proc CreateColorbarRGB {frame} {
    global ds9
    global colorbar
    global current

    # save current colorbar params if appropriate
    switch [$current(colorbar) get type] {
	base {set sav [colorbarrgb get colorbar]}
	rgb {set sav [$current(colorbar) get colorbar]}
    }
    
    set which ${frame}cb

    $ds9(canvas) create colorbarrgb$ds9(visual)$ds9(depth) \
	-colors 2048 \
	-tag $which \
	-command $which \
	-anchor nw \
	\
	-size $colorbar(size) \
	-ticks $colorbar(ticks) \
	-numerics $colorbar(numerics) \
	-space $colorbar(space) \
	\
	-font $colorbar(font) \
	-fontsize $colorbar(font,size) \
	-fontweight $colorbar(font,weight) \
	-fontslant $colorbar(font,slant) \
	\
	-helvetica $ds9(helvetica) \
	-courier $ds9(courier) \
	-times $ds9(times) \
	-fg [ThemeTreeForeground] \
	-bg [ThemeTreeBackground]

    # now init new colorbar to prev values
    $which colorbar $sav

    # enable events
    BindEventsColorbar $which

    LayoutColorbar $which 0 0 \
	[winfo width $ds9(canvas)] [winfo height $ds9(canvas)]
}

proc CreateColorbarExternal {which frame ext} {
    global ds9
    global icolorbar
    global colorbar

    foreach cmap $icolorbar($frame,cmaps) {
	set fn $cmap.$ext
	set ch [open "$ds9(root)/cmaps/$fn" r]

	global vardata
	set vardata [read $ch]
	close $ch

	$which load var "\{$fn\}" vardata
	unset vardata
    }
}

# Event Processing

proc BindEventsColorbar {which} {
    global ds9

    global debug
    if {$debug(tcl,events)} {
	puts stderr "BindEventsColorbar $which"
    }

    set frame [string trimright $which cb]

    $ds9(canvas) bind $which <Enter> [list ColorbarEnter $frame %x %y]
    $ds9(canvas) bind $which <Motion> [list ColorbarMotion $frame %x %y]
    $ds9(canvas) bind $which <Leave> [list ColorbarLeave $frame]

    switch [$which get type] {
	base {
	    $ds9(canvas) bind $which <Button-1> \
		[list ColorbarButton1 $frame %x %y]
	    $ds9(canvas) bind $which <B1-Motion> \
		[list ColorbarMotion1 $frame %x %y]
	    $ds9(canvas) bind $which <ButtonRelease-1> \
		[list ColorbarRelease1 $frame %x %y]

	    $ds9(canvas) bind $which <Double-1> \
		[list ColorbarDouble1 $frame %x %y]
	    $ds9(canvas) bind $which <Double-ButtonRelease-1> \
		[list ColorbarDoubleRelease1 $frame %x %y]

	    $ds9(canvas) bind $which <Key> \
		[list ColorbarKey $frame %K %A %x %y]
	    $ds9(canvas) bind $which <KeyRelease> \
		[list ColorbarKeyRelease $frame %K %A %x %y]
	}
	rgb {}
    }
}

proc UnBindEventsColorbar {which} {
    global ds9
    
    global debug
    if {$debug(tcl,events)} {
	puts stderr "UnBindEventsColorbar $which"
    }

    $ds9(canvas) bind $which <Motion> {}
    $ds9(canvas) bind $which <Enter> {}
    $ds9(canvas) bind $which <Leave> {}

    switch [$which get type] {
	base {
	    $ds9(canvas) bind $which <Button-1> {}
	    $ds9(canvas) bind $which <B1-Motion> {}
	    $ds9(canvas) bind $which <ButtonRelease-1> {}
	    $ds9(canvas) bind $which <Double-1> {}
	    $ds9(canvas) bind $which <Double-ButtonRelease-1> {}

	    $ds9(canvas) bind $which <Key> {}
	    $ds9(canvas) bind $which <KeyRelease> {}
	}
	rgb {}
    }
}

proc ResetColormap {} {
    global colorbar

    global current
    global rgb

    $current(colorbar) reset

    set colorbar(map) [$current(colorbar) get name]
    set colorbar(invert) [$current(colorbar) get invert]
    if {$current(frame) != {} } {
	RGBEvalLockCurrent rgb(lock,colorbar) [list $current(frame) colormap [$current(colorbar) get colormap]]
    }

    LockColorCurrent
    UpdateColorDialog
}

proc LoadColormap {} {
    global icolorbar
    
    LoadColormapFile [OpenFileDialog colorbarfbox $icolorbar(top)]
}

# used by backup
proc LoadColormapFile {fn} {
    global colorbar
    global icolorbar
    global current
    global ds9

    if {$fn == {}} {
	return
    }

    # first load into default cmap
    set orgName [colorbar get name]
    set orgInvert [colorbar get invert]

    if {[catch {colorbar load "\{$fn\}"} rr]} {
	Error $rr
	return
    }
    set cmap [colorbar get name]
    lappend icolorbar(user,cmaps) $cmap

    colorbar map $orgName
    colorbar invert $orgInvert

    # now load into all current cmaps
    foreach ff $ds9(frames) {
	set cb ${ff}cb
	switch [$cb get type] {
	    base {
		set orgName [$cb get name]
		set orgInvert [$cb get invert]
		if {[catch {$cb load "\{$fn\}"} rr]} {
		    Error $rr
		    return
		}
		$cb map $orgName
		$cb invert $orgInvert
	    }
	    rgb {}
	}
    }

    # add to menu
    $ds9(mb).color.user add radiobutton \
	-label $cmap \
	-variable colorbar(map) \
	-command [list ChangeColormapName $cmap]

    if {[winfo exists $icolorbar(top)]} {
	$icolorbar(mb).colormap.user add radiobutton \
	    -label $cmap \
	    -variable colorbar(map) \
	    -command [list ChangeColormapName $cmap]
    }

    ChangeColormapName $cmap
}

proc SaveColormap {} {
    global icolorbar
    global current

    FileLast colorbarfbox [$current(colorbar) get file name]
    SaveColormapFile [SaveFileDialog colorbarfbox $icolorbar(top)]
}

proc SaveColormapFile {fn} {
    global current
    
    if {$fn == {}} {
	return
    }

    if {[catch {$current(colorbar) save "\{$fn\}"} rr]} {
	Error $rr
	return
    }
}

proc LoadContrastBias {} {
    global icolorbar
    global dcolorbar

    set fn [OpenFileDialog contrastbiasfbox $icolorbar(top)]
    if {$fn == {}} {
	return
    }

    if {![catch {set ch [open $fn r]}]} {
	set ll [gets $ch]
	close $ch
	set dcolorbar(contrast) [lindex $ll 0]
	set dcolorbar(bias) [lindex $ll 1]
	ApplyColormap
    }
}

proc SaveContrastBias {} {
    global icolorbar
    global dcolorbar

    set fn [SaveFileDialog contrastbiasfbox $icolorbar(top)]
    if {$fn == {}} {
	return
    }
    
    if {![catch {set ch [open $fn w]}]} {
	puts $ch "$dcolorbar(contrast) $dcolorbar(bias)"
	close $ch
    }
}

proc ColorbarEnter {frame x y} {
    global ds9

    global debug
    if {$debug(tcl,events)} {
	puts stderr "ColorbarEnter $frame $x $y"
    }

    set cb ${frame}cb

    # check to see if this event was generated while processing other events
    if {$ds9(b1) || $ds9(sb1) || $ds9(cb1) || 
	$ds9(csb1) || $ds9(b2) || $ds9(b3)} {
	return
    }

    $ds9(canvas) focus $cb
    LayoutFrameInfoBox $frame
}

proc ColorbarMotion {frame x y} {
    global current
    global infobox

    global debug
    if {$debug(tcl,events)} {
	puts stderr "ColorbarMotion $frame $x $y"
    }

    set cb ${frame}cb

    set vv [$cb get value $x $y]
    switch -- [$cb get type] {
	base {
	    set infobox(value) $vv
	}
	rgb {
	    switch -- $current(rgb) {
		red {set infobox(value,red) $vv}
		green {set infobox(value,green) $vv}
		blue {set infobox(value,blue) $vv}
	    }
	}
    }
}

proc ColorbarLeave {frame} {
    global ds9

    global debug
    if {$debug(tcl,events)} {
	puts stderr "ColorbarLeave $frame"
    }

    set cb ${frame}cb

    # check to see if this event was generated while processing other events
    if {$ds9(b1) || $ds9(sb1) || $ds9(cb1) ||
	$ds9(csb1) || $ds9(b2) || $ds9(b3)} {
	return
    }

    $ds9(canvas) focus {}
    ClearInfoBoxCoords
}

proc ColorbarKey {frame K A x y} {
    global current
    global ds9

    # MacOSX and Ubuntu returns bogus values in x,y
    # calculate our own values
    set x [expr {[winfo pointerx $ds9(canvas)] - [winfo rootx $ds9(canvas)]}]
    set y [expr {[winfo pointery $ds9(canvas)] - [winfo rooty $ds9(canvas)]}]

    global debug
    if {$debug(tcl,events)} {
	puts stderr "ColorbarKey $frame $K $A $x $y"
    }

    set cb ${frame}cb

    switch -- $current(mode) {
	colorbar {
	    switch -- $K {
		Delete -
		BackSpace {
		    set xx [$ds9(canvas) itemcget $cb -x]
		    set yy [$ds9(canvas) itemcget $cb -y]
		    set dx [expr $x-$xx]
		    set dy [expr $y-$yy]
		    $cb tag delete $dx $dy
		    if {$frame != {}} {
			$frame colormap [$cb get colormap]
		    }
		}
	    }
	}
    }
}

proc ColorbarKeyRelease {frame K A x y} {
    global ds9

    # MacOSX and Ubuntu returns bogus values in x,y
    # calculate our own values
    set x [expr {[winfo pointerx $ds9(canvas)] - [winfo rootx $ds9(canvas)]}]
    set y [expr {[winfo pointery $ds9(canvas)] - [winfo rooty $ds9(canvas)]}]

    global debug
    if {$debug(tcl,events)} {
	puts stderr "ColorbarKeyRelease $frame $K $A $x $y"
    }

    set cb ${frame}cb
}

proc ColorbarButton1 {frame x y} {
    global icolorbar
    global colorbar
    global ds9
    global current
    global icursor

    global debug
    if {$debug(tcl,events)} {
	puts stderr "ColorbarButton1 $frame $x $y"
    }

    set cb ${frame}cb

    # let others know that the mouse is down
    set ds9(b1) 1

    # turn off blinking cursor
    if {$icursor(timer)} {
	catch {after cancel $icursor(id)}
	set icursor(id) 0
    }

    # are we on a tag? else create
    switch -- $current(mode) {
	colorbar {
	    set xx [$ds9(canvas) itemcget $cb -x]
	    set yy [$ds9(canvas) itemcget $cb -y]
	    set dx [expr $x-$xx]
	    set dy [expr $y-$yy]
	    $cb tag edit begin $dx $dy  $colorbar(tag)
	}
    }
}

proc ColorbarMotion1 {frame x y} {
    global icolorbar
    global current
    global ds9

    global debug
    if {$debug(tcl,events)} {
	puts stderr "ColorbarMotion1 $frame $x $y"
    }

    set cb ${frame}cb

    # abort if we are here by accident (such as a double click)
    if {($ds9(b1) == 0) && ($ds9(sb1) == 0) && 
	($ds9(cb1) == 0) && ($ds9(csb1) == 0)} {
	return
    }

    switch -- $current(mode) {
	colorbar {
	    set xx [$ds9(canvas) itemcget $cb -x]
	    set yy [$ds9(canvas) itemcget $cb -y]
	    set dx [expr $x-$xx]
	    set dy [expr $y-$yy]
	    $cb tag edit motion $dx $dy
	    if {$frame != {}} {
		$frame colormap [$cb get colormap]
	    }
	}
    }
}

proc ColorbarRelease1 {frame x y} {
    global icolorbar
    global current
    global icursor
    global ds9

    global debug
    if {$debug(tcl,events)} {
	puts stderr "ColorbarRelease1 $frame $x $y"
    }

    set cb ${frame}cb

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
	    set xx [$ds9(canvas) itemcget $cb -x]
	    set yy [$ds9(canvas) itemcget $cb -y]
	    set dx [expr $x-$xx]
	    set dy [expr $y-$yy]
	    $cb tag edit end $dx $dy
	    if {$frame != {}} {
		$frame colormap [$cb get colormap]
	    }
	}
    }

    # let others know that the mouse is up
    set ds9(b1) 0
    set ds9(sb1) 0
    set ds9(cb1) 0
    set ds9(csb1) 0
}

proc ColorbarDouble1 {frame x y} {
    global ds9
    global current

    global debug
    if {$debug(tcl,events)} {
	puts stderr "ColorbarDouble1 $frame $x $y"
    }

    set cb ${frame}cb

    switch -- $current(mode) {
	colorbar {
	    set xx [$ds9(canvas) itemcget $cb -x]
	    set yy [$ds9(canvas) itemcget $cb -y]
	    set dx [expr $x-$xx]
	    set dy [expr $y-$yy]
	    ColorTagDialog $frame $dx $dy
	}
    }
}

proc ColorbarDoubleRelease1 {frame x y} {
    global debug
    if {$debug(tcl,events)} {
	puts stderr "ColorbarDoubleRelease1 $frame $x $y"
    }

    set cb ${frame}cb
}

proc ColorbarButton3 {frame x y} {
    global icolorbar
    global current
    global icursor

    set cb ${frame}cb

    # turn off blinking cursor
    if {$icursor(timer)} {
	catch {after cancel $icursor(id)}
	set icursor(id) 0
    }

    $frame colormap begin
}

proc ColorbarMotion3 {frame xx yy} {
    global ds9
    global icolorbar

    set cb ${frame}cb

    # X sets bias
    set bias [expr double($xx)/[winfo width $ds9(canvas)]]

    # Y sets contrast
    set contrast [expr double($yy)/[winfo height $ds9(canvas)] * 10]

    RGBEvalLockColorbar $frame [list $cb adjust $contrast $bias]
    $frame colormap motion [$cb get colormap]
    UpdateColorDialog
}

proc ColorbarRelease3 {frame x y} {
    global icolorbar
    global icursor

    set cb ${frame}cb

    # and turn on blinking cursor if needed
    if {$icursor(timer)} {
	CursorTimer
    }

    $frame colormap end
    
    LockColor $frame
    UpdateColorDialog
}

proc ChangeColormapName {name} {
    global colorbar
    global current

    $current(colorbar) map $name

    set colorbar(map) [$current(colorbar) get name]
    set colorbar(invert) [$current(colorbar) get invert]
    if {$current(frame) != {} } {
	$current(frame) colormap [$current(colorbar) get colormap]
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

    set tt [$which get type]
    set cb ${which}cb
    foreach ff $ds9(frames) {
	if {$ff != $which} {
	    switch -- [$ff get type] {
		base -
		3d {
		    if {$tt != {rgb}} {
			$ff colormap [$cb get colormap]
			${ff}cb colorbar [$ff get colorbar]
		    }
		}
		rgb {
		    if {$tt == {rgb}} {
			$ff colormap [$cb get colormap]
			${ff}cb colorbar [$ff get colorbar]
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
	puts stderr "UpdateColormapLevel $current(frame)"
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

proc ColorbarSizeDialog {} {
    global colorbar
    global ds9

    if {[EntryDialog [msgcat::mc {Colorbar}] [msgcat::mc {Size}] 10 colorbar(size)]} {
	ColorbarUpdateView
    }
}

proc TicksDialog {} {
    global colorbar

    global ds9

    if {[EntryDialog [msgcat::mc {Colorbar}] [msgcat::mc {Number of Ticks}] 10 colorbar(ticks)]} {
	ColorbarUpdateView
    }
}

proc OpenColorTag {} {
    global icolorbar
    
    LoadColorTag [OpenFileDialog colortagfbox $icolorbar(top)]
}

proc LoadColorTag {fn} {
    global current

    if {$fn != {}} {
	# yes, we need this
	UpdateColormapLevel
	if {[catch {$current(colorbar) tag load "\{$fn\}"} rr]} {
	    Error $rr
	    return
	}
	if {$current(frame) != {}} {
	    $current(frame) colormap [$current(colorbar) get colormap]
	}
    }
}

proc SaveColorTag {} {
    global icolorbar
    global current

    set fn [SaveFileDialog colortagfbox $icolorbar(top)]
    if {$fn == {}} {
	return
    }

    if {[catch {$current(colorbar) tag save "\{$fn\}"} rr]} {
	Error $rr
	return
    }
}

proc DeleteColorTag {} {
    global current

    $current(colorbar) tag delete
    if {$current(frame) != {}} {
	$current(frame) colormap [$current(colorbar) get colormap]
    }
}

proc ColorTagDialog {frame x y} {
    global ds9
    global colorbar
    global ed2

    set cb ${frame}cb

    set w {.ctagd}

    set rr [$cb get tag $x $y]

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

    DialogWait $w ed2(ok)
    destroy $w

    if {$ed2(ok)} {
	$cb tag $ed2(id) $ed2(start) $ed2(stop) $ed2(color)
	if {$frame != {}} {
	    $frame colormap [$cb get colormap]
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

    ThemeMenu $mb.file
    $mb.file add command -label "[msgcat::mc {Open}]..." \
	-command LoadColormap -accelerator "${ds9(ctrl)}O"
    $mb.file add command -label "[msgcat::mc {Save}]..." \
	-command SaveColormap -accelerator "${ds9(ctrl)}S"
    $mb.file add separator
    $mb.file add command -label [msgcat::mc {Apply}] \
	-command ApplyColormap
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
	-command ColormapDestroyDialog -accelerator "${ds9(ctrl)}W"

    EditMenu $mb icolorbar

    ColorMenu $mb.color colorbar tag {}

    ThemeMenu $mb.colormap
    foreach cmap $icolorbar(default,cmaps) {
	$mb.colormap add radiobutton \
	    -label [msgcat::mc $cmap] \
	    -variable colorbar(map) -value $cmap \
	    -command [list ChangeColormapName $cmap]
    }

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
	-menu $ds9(mb).color.user

    ColormapDialogExternal h5 h5
    ColormapDialogExternal matplotlib matplotlib
    ColormapDialogExternal matplotlib matplotlib2
    ColormapDialogExternal cubehelix cubehelix
    ColormapDialogExternal gist gist
    ColormapDialogExternal topo topo
    ColormapDialogExternal user user

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

    bind $w <<Open>> LoadColormap
    bind $w <<Save>> SaveColormap
    bind $w <<Close>> ColormapDestroyDialog
}

proc ColormapDialogExternal {mm which} {
    global colorbar
    global icolorbar

    set mb $icolorbar(mb)
    ThemeMenu $mb.colormap.$which

    foreach cmap $icolorbar($which,cmaps) {
	$mb.colormap.$mm add radiobutton \
	    -label [msgcat::mc $cmap] \
	    -variable colorbar(map) -value $cmap \
	    -command [list ChangeColormapName $cmap]
    }
}

proc ColormapDestroyDialog {} {
    global icolorbar
    global dcolorbar

    if {[winfo exists $icolorbar(top)]} {
	destroy $icolorbar(top)
	destroy $icolorbar(mb)
	unset dcolorbar
    }
}

proc ApplyColormap {} {
    global dcolorbar

    global current
    global rgb

    RGBEvalLockColorbarCurrent [list $current(colorbar) adjust $dcolorbar(contrast) $dcolorbar(bias)]
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
	RGBEvalLockColorbarCurrent [list $current(colorbar) adjust $dcolorbar(contrast) $dcolorbar(bias)]
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

	if {$current(frame) != {}} {
	    switch -- [$current(frame) get type] {
		base -
		3d {
		    $icolorbar(mb).file entryconfig \
			"[msgcat::mc {Open}]..." -state normal
		    $icolorbar(mb).file entryconfig \
			"[msgcat::mc {Save}]..." -state normal

		    foreach cmap $icolorbar(default,cmaps) {
			$icolorbar(mb).colormap entryconfig $cmap -state normal
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
			"[msgcat::mc {Open}]..." -state disabled
		    $icolorbar(mb).file entryconfig \
			"[msgcat::mc {Save}]..." -state disabled

		    foreach cmap $icolorbar(default,cmaps) {
			$icolorbar(mb).colormap entryconfig $cmap -state disabled
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
		"[msgcat::mc {Open}]..." -state normal
	    $icolorbar(mb).file entryconfig \
		"[msgcat::mc {Save}]..." -state normal

	    foreach cmap $icolorbar(default,cmaps) {
		$icolorbar(mb).colormap entryconfig $cmap -state normal
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

proc LayoutColorbarAdjust {} {
    global ds9
    global colorbar
    
    if {$colorbar(numerics)} {
	set font [$ds9(canvas) itemcget colorbar -font]
	set fontsize [$ds9(canvas) itemcget colorbar -fontsize]
	set fontslant [$ds9(canvas) itemcget colorbar -fontslant]
	set ff "$font $fontsize $fontslant"

	# horizontal height
	switch $ds9(wm) {
	    x11 -
	    win32 {set scale 1}
	    aqua {set scale 1.4}
	}
	set ysp [expr int([font metrics $ff -linespace]*$scale)]
	set ytl [$ds9(canvas) itemcget colorbar -ticks]
	set colorbar(horizontal,height) [expr $colorbar(size) + $ytl + $ysp]

	# vertical width
	# 6 chars
	set xstr [font measure $ff "000000"]
	set xtl [$ds9(canvas) itemcget colorbar -ticks]
	set colorbar(vertical,width) [expr $colorbar(size) + $xtl + $xstr]
    } else {
 	set colorbar(horizontal,height) [expr $colorbar(size) +2]
 	set colorbar(vertical,width) [expr $colorbar(size) +2]
    }
}

proc LayoutColorbar {cb fx fy fw fh} {
    global colorbar
    global igraph
    global dgraph
    global graph
    global view

    $cb configure \
	-size $colorbar(size) \
	-ticks $colorbar(ticks) \
	-numerics $colorbar(numerics) \
	-space $colorbar(space) \
	-orientation $colorbar(orientation) \
	\
	-font $colorbar(font) \
	-fontsize $colorbar(font,size) \
	-fontweight $colorbar(font,weight) \
	-fontslant $colorbar(font,slant)

    set cbh [expr !$colorbar(orientation)]
    set cbv $colorbar(orientation)
    set grh $view(graph,horz)
    set grv $view(graph,vert)

    # cbh
    if {$cbh} {
	set xx $fx
	set yy [expr $fy + $fh - $colorbar(horizontal,height)]
	set ww $fw
	set hh $colorbar(horizontal,height)
    }
    # cbv
    if {$cbv} {
	set xx [expr $fx + $fw - $colorbar(vertical,width)]
	set yy $fy
	set ww $colorbar(vertical,width)
	set hh $fh
    }

    # cbhgrh
    if {$cbh && !$cbv && $grh && !$grv} {
	incr yy -$graph(size)
	incr ww -$dgraph(horz,offset)
    }
    # cbhgrv
    if {$cbh && !$cbv && !$grh && $grv} {
	incr ww -$graph(size)
    }
    # cbhgrhgrv
    if {$cbh && !$cbv && $grh && $grv} {
	incr ww -$graph(size)
	incr yy -$graph(size)
    }

    # cbvgrh
    if {!$cbh && $cbv && $grh && !$grv} {
	incr hh -$graph(size)
    }
    # cbvgrv
    if {!$cbh && $cbv && !$grh && $grv} {
	incr xx -$graph(size)
	incr hh -$dgraph(vert,offset)
    }
    # cbvgrhgrv
    if {!$cbh && $cbv && $grh && $grv} {
	incr hh -$graph(size)
	incr xx -$graph(size)
    }

    # grh
    if {!$cbh && !$cbv && $grh && !$grv} {
    }
    # grv
    if {!$cbh && !$cbv && !$grh && $grv} {
    }
    # grhgrv
    if {!$cbh && !$cbv && $grh && $grv} {
    }

    # sanity check
    if {$xx<0 || $yy<0 || $ww<0 || $hh<0} {
	return 0
    }

    $cb configure -x $xx -y $yy -width $ww -height $hh
    return 1
}

proc ColorbarUpdateView {} {
    global ds9
    global colorbar

    # update default colorbar
    colorbar configure \
	-size $colorbar(size) \
	-ticks $colorbar(ticks) \
	-numerics $colorbar(numerics) \
	-space $colorbar(space) \
	-orientation $colorbar(orientation) \
	\
	-font $colorbar(font) \
	-fontsize $colorbar(font,size) \
	-fontweight $colorbar(font,weight) \
	-fontslant $colorbar(font,slant)

    # update all colorbars
    foreach ff $ds9(frames) {
	set cb ${ff}cb
	
	$cb configure \
	    -size $colorbar(size) \
	    -ticks $colorbar(ticks) \
	    -numerics $colorbar(numerics) \
	    -space $colorbar(space) \
	    -orientation $colorbar(orientation) \
	    \
	    -font $colorbar(font) \
	    -fontsize $colorbar(font,size) \
	    -fontweight $colorbar(font,weight) \
	    -fontslant $colorbar(font,slant)
    }

    LayoutFrames
}

proc ColorbarBackup {ch dir} {
    global icolorbar
    global colorbar

    set rdir "./[lindex [file split $dir] end]"

    # delete old cmaps
    foreach ff [glob -directory $dir -nocomplain "*.sao"] {
	catch {file delete -force $ff}
    }
    foreach ff [glob -directory $dir -nocomplain "*.lut"] {
	catch {file delete -force $ff}
    }

    # save any loaded user cmaps
    foreach cmap $icolorbar(user,cmaps) {
	set nn [lindex [file split [colorbar get file name $cmap]] end]
	colorbar save $cmap \"[file join $dir $nn]\"
	puts $ch "LoadColormapFile \"[file join $rdir $nn]\""
    }

    # colorbar params
    puts $ch "colorbar configure -size $colorbar(size)"
    puts $ch "colorbar configure -ticks $colorbar(ticks)"
    puts $ch "colorbar configure -numerics $colorbar(numerics)"
    puts $ch "colorbar configure -space $colorbar(space)"
    puts $ch "colorbar configure -orientation $colorbar(orientation)"

    puts $ch "colorbar configure -font $colorbar(font)"
    puts $ch "colorbar configure -fontsize $colorbar(font,size)"
    puts $ch "colorbar configure -fontweight $colorbar(font,weight)"
    puts $ch "colorbar configure -fontslant $colorbar(font,slant)"
}

proc ColorbarFrameBackup {ch which} {
    set cb ${which}cb

    puts $ch "$cb colorbar [$which get colorbar]"
    puts $ch "$which colormap \[$cb get colormap\]"
    puts $ch "$which colorbar tag \"\{[$which get colorbar tag]\}\""
    puts $ch "$cb tag \"\{[$which get colorbar tag]\}\""
}

# Process Cmds

proc ProcessCmapCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    # we need to be realized
    ProcessRealizeDS9

    cmap::YY_FLUSH_BUFFER
    cmap::yy_scan_string [lrange $var $i end]
    cmap::yyparse
    incr i [expr $cmap::yycnt-1]
}

proc CmapCmd {item} {
    global current
    global colorbar

    set cmap [string tolower $item]
    # common variants on spellings
    switch -- $cmap {
	gray {set cmap grey}
    }

    if {[catch {$current(colorbar) map $cmap}]} {
	Error "[msgcat::mc {Unknown Colormap}] $cmap"
	set cmap grey
	$current(colorbar) map $cmap
    }

    set colorbar(map) [$current(colorbar) get name]
    set colorbar(invert) [$current(colorbar) get invert]
    if {$current(frame) != {}} {
	$current(frame) colormap [$current(colorbar) get colormap]
    }

    LockColorCurrent
    UpdateColorDialog
}

proc CmapValueCmd {c b} {
    global current 

    if {$current(frame) != {}} {
	RGBEvalLockColorbarCurrent [list $current(colorbar) adjust $c $b]
	RGBEvalLockCurrent rgb(lock,colorbar) [list $current(frame) colormap begin]
	RGBEvalLockCurrent rgb(lock,colorbar) [list $current(frame) colormap motion [$current(colorbar) get colormap]]
	RGBEvalLockCurrent rgb(lock,colorbar) [list $current(frame) colormap end]
    }
    LockColorCurrent
    UpdateColorDialog
}

proc ProcessSendCmapCmd {proc id param {sock {}} {fn {}}} {
    global parse
    set parse(proc) $proc
    set parse(id) $id

    cmapsend::YY_FLUSH_BUFFER
    cmapsend::yy_scan_string $param
    cmapsend::yyparse
}

proc ProcessColorbarCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    colorbar::YY_FLUSH_BUFFER
    colorbar::yy_scan_string [lrange $var $i end]
    colorbar::yyparse
    incr i [expr $colorbar::yycnt-1]
}

proc ProcessSendColorbarCmd {proc id param {sock {}} {fn {}}} {
    global parse
    set parse(proc) $proc
    set parse(id) $id

    colorbarsend::YY_FLUSH_BUFFER
    colorbarsend::yy_scan_string $param
    colorbarsend::yyparse
}

proc ColorbarSendCmdCurrent {cmd} {
    global parse
    global current

    if {$current(colorbar) != {}} {
	$parse(proc) $parse(id) "[$current(colorbar) $cmd]\n"
    }
}

proc ColorbarSendCmdContrastBias {} {
    global parse
    global current

    if {$current(colorbar) != {}} {
	$parse(proc) $parse(id) "[$current(colorbar) get contrast] [$current(colorbar) get bias]\n"
    }
}

proc ColorbarSendCmdOrientation {} {
    global parse
    global colorbar

    if {!$colorbar(orientation)} {
	$parse(proc) $parse(id) "horizontal\n"
    } else {
	$parse(proc) $parse(id) "vertical\n"
    }
}

proc ColorbarSendCmdSpace {} {
    global parse
    global colorbar

    if {$colorbar(space)} {
	$parse(proc) $parse(id) "value\n"
    } else {
	$parse(proc) $parse(id) "distance\n"
    }
}
