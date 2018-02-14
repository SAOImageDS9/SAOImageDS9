#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

# Public Procedures

proc CreateFrame {} {
    CreateNamedFrame base
}

proc CreateRGBFrame {} {
    CreateNamedFrame rgb
    RGBDialog
}

proc Create3DFrame {} {
    CreateNamedFrame 3d
    3DDialog
}

proc CreateNamedFrame {type} {
    global ds9

    # find the first open slot
    set num $ds9(next,num)
    while {1} {
	set which "Frame$num"
 	if {[lsearch $ds9(frames) $which]==-1} {
 	    CreateNameNumberFrame $which $type
	    set ds9(next,num) [expr $num+1]
 	    return
 	}
 	incr num
    }
}

proc CreateGotoFrame {num type} {
    global ds9
    global active

    set which "Frame$num"
    if {[lsearch $ds9(frames) $which]==-1} {
	CreateNameNumberFrame $which $type
	set ds9(next,num) [expr $num+1]
    } else {
	if {$active($which)==0} {
	    set active($which) 1
	    UpdateActiveFrames
	}
	set ds9(next) $which
	GotoFrame
    }
}

# used by backup
proc CreateNameNumberFrame {which type} {
    global ds9
    global pds9
    global active
    global current
    global ipanner
    global ppanner
    global imagnifier
    global pmagnifier
    global bin
    global wcs
    global rgb
    global colorbar
    global scale
    global minmax
    global zscale
    global marker
    global pmarker
    global centroid
    global panzoom
    global block
    global smooth
    global pthreed
    global threed
    global cube

    set ds9(next) $which

    # update frame lists
    lappend ds9(frames) $ds9(next)
    lappend ds9(active) $ds9(next)
    set ds9(active,num) [llength $ds9(active)]
    set active($ds9(next)) 1

    # and create the frame
    switch -- $type {
	base {
	    $ds9(canvas) create frame$ds9(visual)$ds9(depth) \
		-command $ds9(next)
	    $ds9(next) colormap [colorbar get colormap]
	}
	rgb {
	    $ds9(canvas) create framergb$ds9(visual)$ds9(depth) \
		-command $ds9(next)
	    $ds9(next) colormap [colorbarrgb get colormap]
	}
	3d {
	    $ds9(canvas) create frame3d$ds9(visual)$ds9(depth) \
		-command $ds9(next)
	    $ds9(next) colormap [colorbar get colormap]
	}
    }

    $ds9(next) configure -x 0 -y 0 \
	-anchor nw \
	-tag $ds9(next) \
	-helvetica $ds9(helvetica) \
	-courier $ds9(courier) \
	-times $ds9(times)

    $ds9(next) threads $ds9(threads)

    $ds9(next) panner 'panner' $ipanner(size) $ipanner(size)
    $ds9(next) magnifier 'magnifier' $imagnifier(size) $imagnifier(size)
    $ds9(next) magnifier zoom $pmagnifier(zoom)
    $ds9(next) magnifier graphics $pmagnifier(region)
    $ds9(next) magnifier cursor $pmagnifier(cursor)

    $ds9(next) zoom to $current(zoom)
    $ds9(next) rotate to $current(rotate)
    $ds9(next) orient $current(orient)
    $ds9(next) wcs align $current(align)

    $ds9(next) pan preserve $panzoom(preserve)

    # set so prefs (pwcs) will work
    # may cause other problems, but can't remember why
    $ds9(next) wcs $wcs(system) $wcs(sky) $wcs(skyformat)

    $ds9(next) datasec $scale(datasec)

    $ds9(next) precision $pds9(prec,linear) \
	$pds9(prec,deg) $pds9(prec,hms) $pds9(prec,dms) \
	$pds9(prec,arcmin) $pds9(prec,arcsec)
    
    $ds9(next) bg color $pds9(bg)
    $ds9(next) nan color $pds9(nan)

    $ds9(next) iraf align $pds9(iraf)

    $ds9(next) marker epsilon $pmarker(epsilon)
    $ds9(next) marker show $marker(show)
    $ds9(next) marker show text $marker(show,text)
    $ds9(next) marker centroid auto $marker(centroid,auto)
    $ds9(next) marker centroid radius $marker(centroid,radius)
    $ds9(next) marker centroid iteration $marker(centroid,iteration)
    $ds9(next) marker preserve $marker(preserve)

    # Frame type items
    switch -- [$ds9(next) get type] {
	base {}
	rgb {$ds9(next) rgb system $rgb(system)}
	3d {
	    $ds9(next) 3d method $pthreed(method)
	    $ds9(next) 3d background $pthreed(background)
	    $ds9(next) 3d border $pthreed(border)
	    $ds9(next) 3d border color $pthreed(border,color)
	    $ds9(next) 3d compass $pthreed(compass)
	    $ds9(next) 3d compass color $pthreed(compass,color)
	    $ds9(next) 3d highlite $pthreed(highlite)
	    $ds9(next) 3d highlite color $pthreed(highlite,color)
	}
    }

    # channel dependent items
    switch -- [$ds9(next) get type] {
	base -
	3d {
	    $ds9(next) colorscale $scale(type)
	    $ds9(next) colorscale log $scale(log)

	    $ds9(next) clip scope $scale(scope)
	    $ds9(next) clip mode $scale(mode)
	    $ds9(next) clip minmax $minmax(sample) $minmax(mode)
	    $ds9(next) clip user $scale(min) $scale(max)
	    $ds9(next) clip zscale \
		$zscale(contrast) $zscale(sample) $zscale(line)

	    $ds9(next) datasec $scale(datasec)

	    $ds9(next) bin function $bin(function)
	    $ds9(next) bin factor to $bin(factor)
	    $ds9(next) bin depth $bin(depth)
	    $ds9(next) bin buffer size $bin(buffersize)

	    $ds9(next) block to $block(factor)
	    
	    $ds9(next) cube axes $cube(axes)
	    
	    if {$smooth(view)} {
		$ds9(next) smooth $smooth(function) \
		    $smooth(radius) $smooth(radius,minor) \
		    $smooth(sigma) $smooth(sigma,minor) \
		    $smooth(angle)
	    }
	}
	rgb {
	    foreach c {red green blue} {
		$ds9(next) rgb channel $c

		$ds9(next) colorscale $scale(type)
		$ds9(next) colorscale log $scale(log)

		$ds9(next) clip scope $scale(scope)
		$ds9(next) clip mode $scale(mode)
		$ds9(next) clip minmax $minmax(sample) $minmax(mode)
		$ds9(next) clip user $scale(min) $scale(max)
		$ds9(next) clip zscale \
		    $zscale(contrast) $zscale(sample) $zscale(line)

		$ds9(next) datasec $scale(datasec)

		$ds9(next) bin function $bin(function)
		$ds9(next) bin factor to $bin(factor)
		$ds9(next) bin depth $bin(depth)
		$ds9(next) bin buffer size $bin(buffersize)

		$ds9(next) block to $block(factor)

		$ds9(next) cube axes $cube(axes)

		if {$smooth(view)} {
		    $ds9(next) smooth $smooth(function) \
			$smooth(radius) $smooth(radius,minor) \
			$smooth(sigma) $smooth(sigma,minor) \
			$smooth(angle)
		}
	    }
	    $ds9(next) rgb channel red
	}
    }

    switch $current(mode) {
	crosshair -
	analysis {
	    $ds9(next) crosshair on
	}
    }

    UpdateFrameMenuItems

    if {$current(frame) != {}} {
	$current(frame) colorbar tag "\{[$current(colorbar) get tag]\}"
    }
    set current(frame) $ds9(next)
    set ds9(next) {}
    DisplayMode
}

proc DeleteAllFramesMenu {} {
    global pds9

    if {$pds9(confirm)} {
	if {[tk_messageBox -type okcancel -icon question -message [msgcat::mc {Delete All Frames?}]] != {ok}} {
	    return
	}
    }
    DeleteAllFrames
}

proc DeleteCurrentFrame {} {
    global current

    if {$current(frame) != {}} {
	DeleteSingleFrame $current(frame)
    }
}

proc DeleteAllFrames {} {
    global ds9

    foreach ff $ds9(frames) {
	DeleteFrame $ff
    }

    set ds9(next,num) 1

    UpdateFrameMenuItems
    UpdateActiveFrames

    ClearInfoBox
    PixelTableClearDialog
    ClearGraphData
}

proc DeleteSingleFrame {which} {
    DeleteFrame $which

    UpdateFrameMenuItems
    UpdateActiveFrames

    PixelTableClearDialog
    ClearGraphData
}

proc DeleteFrame {which} {
    global ds9
    global active
    global current
    global contour
    global marker

    # clear any loaded images
    ClearFrame $which

    # contour copy
    if {$contour(copy) == $which} {
	set contour(copy) {}
    }
    # marker copy
    if {$marker(copy) == $which} {
	set marker(copy) {}
    }
    
    # delete canvas widget
    $ds9(canvas) delete $which

    # setup for next frame
    set ii [lsearch $ds9(active) $which]
    if {$ii>0} {
	set ds9(next) [lindex $ds9(active) [expr $ii-1]]
	set ds9(active) [lreplace $ds9(active) $ii $ii]
	set ds9(active,num) [llength $ds9(active)]
	unset active($which)
    } else {
	set ds9(next) {}
    }

    # delete it from the frame list
    set ii [lsearch $ds9(frames) $which]
    set ds9(frames) [lreplace $ds9(frames) $ii $ii]
}

proc UpdateCurrentFrame {} {
    global current

    UpdateFrame $current(frame)
}

proc UpdateAllFrame {} {
    global ds9

    foreach f $ds9(frames) {
	UpdateFrame $f
    }
}

proc UpdateFrame {which} {
    if {$which != {}} {
	$which update
    }
}

# Event Processing

proc BindEventsFrame {which} {
    global ds9

    global debug
    if {$debug(tcl,events)} {
	puts stderr "BindEventsFrame $which"
    }

    $ds9(canvas) bind $which <Motion> [list MotionFrame $which %x %y]
    $ds9(canvas) bind $which <Shift-Motion> \
	[list ShiftMotionFrame $which %x %y]
    $ds9(canvas) bind $which <Control-Motion> \
	[list ControlMotionFrame $which %x %y]

    $ds9(canvas) bind $which <Enter> [list EnterFrame $which %x %y]
    $ds9(canvas) bind $which <Leave> [list LeaveFrame $which]

    $ds9(canvas) bind $which <Button-1> [list Button1Frame $which %x %y]
    $ds9(canvas) bind $which <Shift-Button-1> \
	[list ShiftButton1Frame $which %x %y]
    $ds9(canvas) bind $which <Control-Button-1> \
	[list ControlButton1Frame $which %x %y]
    $ds9(canvas) bind $which <Control-Shift-Button-1> \
	[list ControlShiftButton1Frame $which %x %y]
    $ds9(canvas) bind $which <B1-Motion> [list Motion1Frame $which %x %y]
    $ds9(canvas) bind $which <ButtonRelease-1> \
	[list Release1Frame $which %x %y]

    $ds9(canvas) bind $which <Double-1> [list Double1Frame $which %x %y]
    $ds9(canvas) bind $which <Double-ButtonRelease-1> \
	[list DoubleRelease1Frame $which %x %y]

    switch $ds9(wm) {
	x11 -
	win32 {
	    $ds9(canvas) bind $which <Button-2> \
		[list Button2Frame $which %x %y]
	    $ds9(canvas) bind $which <Shift-Button-2> \
		[list ShiftButton2Frame $which %x %y]
	    $ds9(canvas) bind $which <B2-Motion> \
		[list Motion2Frame $which %x %y]
	    $ds9(canvas) bind $which <ButtonRelease-2> \
		[list Release2Frame $which %x %y]
	} 
	aqua {
	    # swap button-2 and button-3 on the mighty mouse
	    $ds9(canvas) bind $which <Button-3> \
		[list Button2Frame $which %x %y]
	    $ds9(canvas) bind $which <Shift-Button-3> \
		[list ShiftButton2Frame $which %x %y]
	    $ds9(canvas) bind $which <B3-Motion> \
		[list Motion2Frame $which %x %y]
	    $ds9(canvas) bind $which <ButtonRelease-3> \
		[list Release2Frame $which %x %y]

	    # x11 option key emulation
	    $ds9(canvas) bind $which <Option-Button-1> \
		[list Button2Frame $which %x %y]
	    $ds9(canvas) bind $which <Option-B1-Motion> \
		[list Motion2Frame $which %x %y]
	    $ds9(canvas) bind $which <Option-ButtonRelease-1> \
		[list Release2Frame $which %x %y]

	    # x11 command key emulation
	    # we need this to eat the Button-1 events 
	    # so it passes to the canvas
	    $ds9(canvas) bind $which <Command-Button-1> {set foo bar}
	    $ds9(canvas) bind $which <Command-B1-Motion> {set foo bar}
	    $ds9(canvas) bind $which <Command-ButtonRelease-1> {set foo bar}
	}
    }

    switch $ds9(wm) {
	x11 {
	    $ds9(canvas) bind $which <Button-4> \
		[list Button4Frame $which %x %y]
	    $ds9(canvas) bind $which <Button-5> \
		[list Button5Frame $which %x %y]
	}
	aqua -
	win32 {}
    }

    BindEventsFrameKey $which
}

proc BindEventsFrameKey {which} {
    global ds9
    global ianalysis

    global debug
    if {$debug(tcl,events)} {
	puts stderr "BindEventsFrameKey $which"
    }

    $ds9(canvas) bind $which <Key> [list KeyFrame $which %K %A %x %y]
    $ds9(canvas) bind $which <KeyRelease> \
	[list KeyReleaseFrame $which %K %A %x %y]

    for {set i 0} {$i<$ianalysis(bind,count)} {incr i} {
	$ds9(canvas) bind $which "$ianalysis(bind,$i,item)" \
	    [list AnalysisTask $i bind $which %x %y]
    }
}

proc UnBindEventsFrame {which} {
    global ds9

    global debug
    if {$debug(tcl,events)} {
	puts stderr "UnBindEventsFrame $which"
    }

    $ds9(canvas) bind $which <Button-4> {}
    $ds9(canvas) bind $which <Button-5> {}

    $ds9(canvas) bind $which <Motion> {}
    $ds9(canvas) bind $which <Shift-Motion> {}
    $ds9(canvas) bind $which <Control-Motion> {}

    $ds9(canvas) bind $which <Enter> {}
    $ds9(canvas) bind $which <Leave> {}

    $ds9(canvas) bind $which <Button-1> {}
    $ds9(canvas) bind $which <Shift-Button-1> {}
    $ds9(canvas) bind $which <Control-Button-1> {}
    $ds9(canvas) bind $which <Control-Shift-Button-1> {}
    $ds9(canvas) bind $which <B1-Motion> {}
    $ds9(canvas) bind $which <ButtonRelease-1> {}

    $ds9(canvas) bind $which <Double-1> {}
    $ds9(canvas) bind $which <Double-ButtonRelease-1> {}

    switch $ds9(wm) {
	x11 -
	win32 {
	    $ds9(canvas) bind $which <Button-2> {}
	    $ds9(canvas) bind $which <Shift-Button-2> {}
	    $ds9(canvas) bind $which <B2-Motion> {}
	    $ds9(canvas) bind $which <ButtonRelease-2> {}
	} 
	aqua {
	    $ds9(canvas) bind $which <Command-Button-1> {}
	    $ds9(canvas) bind $which <Command-B1-Motion> {}
	    $ds9(canvas) bind $which <Command-ButtonRelease-1> {}

	    $ds9(canvas) bind $which <Button-3> {}
	    $ds9(canvas) bind $which <Shift-Button-3> {}
	    $ds9(canvas) bind $which <B3-Motion> {}
	    $ds9(canvas) bind $which <ButtonRelease-3> {}

	    $ds9(canvas) bind $which <Option-Button-1> {}
	    $ds9(canvas) bind $which <Option-B1-Motion> {}
	    $ds9(canvas) bind $which <Option-ButtonRelease-1> {}
	}
    }

    switch $ds9(wm) {
	x11 {
	    $ds9(canvas) bind $which <Button-4> {}
	    $ds9(canvas) bind $which <Button-5> {}
	}
	aqua -
	win32 {}
    }

    UnBindEventsFrameKey $which
}

proc UnBindEventsFrameKey {which} {
    global ds9
    global ianalysis

    global debug
    if {$debug(tcl,events)} {
	puts stderr "UnBindEventsFrameKey $which"
    }

    $ds9(canvas) bind $which <Key> {}
    $ds9(canvas) bind $which <KeyRelease> {}

    for {set i 0} {$i<$ianalysis(bind,count)} {incr i} {
	$ds9(canvas) bind $which "$ianalysis(bind,$i,item)" {}
    }
}

proc EnterFrame {which x y} {
    global ds9
    global current
    global view

    global debug
    if {$debug(tcl,events)} {
	puts stderr "EnterFrame $which"
    }

    # check to see if this event was generated while processing other events
    if {$ds9(b1) || $ds9(sb1) || $ds9(cb1) || 
	$ds9(csb1) || $ds9(b2) || $ds9(b3)} {
	return
    }

    $ds9(canvas) focus $which

    switch -- $current(mode) {
	crosshair -
	analysis {
	    set coord [$which get crosshair canvas]
	    set x [lindex $coord 0]
	    set y [lindex $coord 1]
	}
	none -
	pointer -
	region -
	catalog -
	pan -
	zoom -
	rotate -
	crop -
	colorbar -
	examine -
	iexam {}
    }

    EnterInfoBox $which
    UpdateInfoBox $which $x $y canvas
    UpdatePixelTableDialog $which $x $y canvas
    UpdateGraphLayout $which
    UpdateGraphAxis $which
    UpdateGraphData $which $x $y canvas
    UpdateMagnifier $which $x $y

    if {$view(magnifier)} {
	# don't turn on the magnifier until we've finished the init process
	# this a real problem with 3d frames
	if {!$ds9(init)} {
	    $which magnifier on
	}
    }

    UpdateEditMenu
}

proc LeaveFrame {which} {
    global ds9
    global current

    global debug
    if {$debug(tcl,events)} {
	puts stderr "LeaveFrame $which"
    }

    # check to see if this event was generated while processing other events
    if {$ds9(b1) || $ds9(sb1) || $ds9(cb1) || 
	$ds9(csb1) || $ds9(b2) || $ds9(b3)} {
	return
    }

    $ds9(canvas) focus {}

    switch -- $current(mode) {
	crosshair -
	analysis {} 

	none -
	pointer -
	region -
	colorbar -
	pan -
	zoom -
	rotate -
	crop -
	catalog -
	examine -
	iexam {
	    LeaveInfoBox
	    PixelTableClearDialog
	    ClearGraphData
	}
    }

    $which magnifier off
    magnifier clear
}

proc MotionFrame {which x y} {
    global debug
    if {$debug(tcl,events)} {
	puts stderr "MotionFrame $which"
    }

    DoMotion $which $x $y sizing fleur
}

proc ShiftMotionFrame {which x y} {
    global debug
    if {$debug(tcl,events)} {
	puts stderr "ShiftMotionFrame $which"
    }

    DoMotion $which $x $y exchange fleur
}

proc ControlMotionFrame {which x y} {
    global debug
    if {$debug(tcl,events)} {
	puts stderr "ControlMotionFrame $which"
    }

    DoMotion $which $x $y sizing draped_box
}

proc DoMotion {which x y cursor1 cursor2} {
    global ds9
    global current

    # if button 3 is down, ignore this event, we are doing something already

    if {$ds9(b3) || $ds9(b2)} {
	return
    }

    switch -- $current(mode) {
	pointer -
	region -
	catalog -
	analysis {
	    if {$which == $current(frame)} {
		MarkerCursor $which $x $y $cursor1 $cursor2
	    }
	    UpdateColormapLevelMosaic $which $x $y canvas
	    UpdateInfoBox $which $x $y canvas
	    UpdatePixelTableDialog $which $x $y canvas
	    UpdateGraphData $which $x $y canvas
	}
	none -
	colorbar -
	pan -
	zoom -
	rotate -
	crop -
	examine -
	iexam {
	    UpdateColormapLevelMosaic $which $x $y canvas
	    UpdateInfoBox $which $x $y canvas
	    UpdatePixelTableDialog $which $x $y canvas
	    UpdateGraphData $which $x $y canvas
	}
	crosshair {}
    }

    UpdateMagnifier $which $x $y
}

proc Button1Frame {which x y} {
    global ds9
    global current
    global imarker

    global debug
    if {$debug(tcl,events)} {
	puts stderr "Button1Frame $which"
    }

    # let others know that the mouse is down
    set ds9(b1) 1

    switch -- $current(mode) {
	none {
	    if {$which == $current(frame)} {
	    } else {
		# we need this cause MarkerMotion maybe called, 
		# and we don't want it
		set imarker(motion) none
		set imarker(handle) -1

		set ds9(next) $which
		GotoFrame
	    }
	    UpdateMagnifier $which $x $y
	}
	pointer -
	region {
	    if {$which == $current(frame)} {
		MarkerButton $which $x $y
	    } else {
		# we need this cause MarkerMotion maybe called, 
		# and we don't want it
		set imarker(motion) none
		set imarker(handle) -1

		set ds9(next) $which
		GotoFrame
	    }
	    UpdateMagnifier $which $x $y
	}
	crosshair {
	    CrosshairButton $which $x $y

	    UpdateColormapLevelMosaic $which $x $y canvas
	    UpdateInfoBox $which $x $y canvas
	    UpdatePixelTableDialog $which $x $y canvas
	    UpdateGraphLayout $which
	    UpdateGraphAxis $which
	    UpdateGraphData $which $x $y canvas
	    UpdateMagnifier $which $x $y
	}
	colorbar {
	    ColorbarButton3 $x $y
	}
	pan {
	    PanButton $which $x $y
	    UpdateMagnifier $which $x $y
	}
	zoom {
	    ZoomButton $which $x $y
	    UpdateMagnifier $which $x $y
	}
	rotate {RotateButton $which $x $y}
	crop {
	    CropButton $which $x $y
	    UpdateMagnifier $which $x $y
	}
	catalog {
	    if {$which == $current(frame)} {
		CATButton $which $x $y
	    } else {
		# we need this cause MarkerMotion maybe called, 
		# and we don't want it
		set imarker(motion) none
		set imarker(handle) -1

		set ds9(next) $which
		GotoFrame
	    }
	    UpdateMagnifier $which $x $y
	}
	analysis {
	    IMEButton $which $x $y

	    UpdateColormapLevelMosaic $which $x $y canvas
	    UpdateInfoBox $which $x $y canvas
	    UpdatePixelTableDialog $which $x $y canvas
	    UpdateGraphLayout $which
	    UpdateGraphAxis $which
	    UpdateGraphData $which $x $y canvas
	    UpdateMagnifier $which $x $y
	}
	examine {ExamineButton $which $x $y}
	iexam {IExamButton $which $x $y}
    }
}

proc ShiftButton1Frame {which x y} {
    global ds9
    global current

    global debug
    if {$debug(tcl,events)} {
	puts stderr "ShiftButton1Frame $which"
    }

    # let others know that the mouse is down
    set ds9(sb1) 1

    switch -- $current(mode) {
	none {}
	pointer -
	region {
	    if {$which == $current(frame)} {
		MarkerShift $which $x $y
	    }
	    UpdateMagnifier $which $x $y
	}
	crosshair {}
	colorbar {}
	pan {}
	zoom {ZoomShift $which}
	rotate -
	crop {
	    Crop3dButton $which $x $y 0
	    UpdateMagnifier $which $x $y
	}
	catalog {
	    if {$which == $current(frame)} {
		CATShift $which $x $y
	    }
	    UpdateMagnifier $which $x $y
	}
	analysis {
	    IMEShift $which $x $y
	    UpdateMagnifier $which $x $y
	}
	examine -
	iexam {}
    }
}

proc ControlButton1Frame {which x y} {
    global ds9
    global current
    global imarker

    global debug
    if {$debug(tcl,events)} {
	puts stderr "ControlButton1Frame $which"
    }

    # let others know that the mouse is down

    set ds9(cb1) 1

    switch -- $current(mode) {
	none {}
	pointer -
	region -
	catalog {
	    if {$which == $current(frame)} {
		MarkerControl $which $x $y
	    } else {
		# we need this cause MarkerMotion maybe called, 
		# and we don't want it
		set imarker(motion) none
		set imarker(handle) -1
	    }
	    UpdateMagnifier $which $x $y
	}
	crosshair -
	colorbar -
	pan -
	zoom -
	rotate {}
	crop {
	    Crop3dButton $which $x $y 1
	    UpdateMagnifier $which $x $y
	}
	analysis {}
	examine -
	iexam {}
    }
}

proc ControlShiftButton1Frame {which x y} {
    global ds9
    global current
    global imarker

    global debug
    if {$debug(tcl,events)} {
	puts stderr "ControlShiftButton1Frame $which"
    }

    # let others know that the mouse is down

    set ds9(csb1) 1

    switch -- $current(mode) {
	none {}
	pointer -
	region -
	catalog {
	    if {$which == $current(frame)} {
		MarkerControlShift $which $x $y
	    } else {
		# we need this cause MarkerMotion maybe called, 
		# and we don't want it
		set imarker(motion) none
		set imarker(handle) -1
	    }
	    UpdateMagnifier $which $x $y
	}
	crosshair -
	colorbar -
	pan -
	zoom -
	rotate -
	crop -
	analysis {}
	examine -
	iexam {}
    }
}

proc Motion1Frame {which x y} {
    global ds9
    global current

    global debug
    if {$debug(tcl,events)} {
	puts stderr "Motion1Frame $which $x $y $ds9(b1) $ds9(sb1) $ds9(cb1)"
    }

    # abort if we are here by accident (such as a double click)
    if {($ds9(b1) == 0) && ($ds9(sb1) == 0) && 
	($ds9(cb1) == 0) && ($ds9(csb1) == 0)} {
	return
    }

    switch -- $current(mode) {
	none {UpdateMagnifier $which $x $y}
	pointer -
	region {
	    if {$which == $current(frame)} {
		MarkerMotion $which $x $y
	    }

	    UpdateInfoBox $which $x $y canvas
	    UpdatePixelTableDialog $which $x $y canvas
	    UpdateGraphData $which $x $y canvas
	    UpdateMagnifier $which $x $y
	}
	crosshair {
	    if {$ds9(b1)} {
		CrosshairButton $which $x $y

		UpdateColormapLevelMosaic $which $x $y canvas
		UpdateInfoBox $which $x $y canvas
		UpdatePixelTableDialog $which $x $y canvas
		UpdateGraphData $which $x $y canvas
		UpdateMagnifier $which $x $y
	    }
	}
	colorbar {
	    if {$ds9(b1)} {
		ColorbarMotion3 $x $y
	    }
	}
	pan {
	    if {$ds9(b1)} {
		PanMotion $which $x $y
		UpdateMagnifier $which $x $y
	    }
	}
	zoom {UpdateMagnifier $which $x $y}
	rotate {
	    if {$ds9(b1)} {
		RotateMotion $which $x $y
	    }
	}
	crop {
	    if {$ds9(b1)} {
		CropMotion $which $x $y
	    }
	    if {$ds9(sb1)} {
		Crop3dMotion $which $x $y 0
	    }
	    if {$ds9(cb1)} {
		Crop3dMotion $which $x $y 1
	    }

	    UpdateMagnifier $which $x $y
	}
	catalog {
	    if {$which == $current(frame)} {
		CATMotion $which $x $y
	    }

	    UpdateInfoBox $which $x $y canvas
	    UpdatePixelTableDialog $which $x $y canvas
	    UpdateGraphData $which $x $y canvas
	    UpdateMagnifier $which $x $y
	}
	analysis {
	    IMEMotion $which $x $y

	    UpdateColormapLevelMosaic $which $x $y canvas
	    UpdateInfoBox $which $x $y canvas
	    UpdatePixelTableDialog $which $x $y canvas
	    UpdateGraphData $which $x $y canvas
	    UpdateMagnifier $which $x $y
	}
	examine -
	iexam {}
    }
}

proc Release1Frame {which x y} {
    global ds9
    global current

    global debug
    if {$debug(tcl,events)} {
	puts stderr "Release1Frame $which"
    }

    # abort if we are here by accident (such as a double click)
    if {($ds9(b1) == 0) && ($ds9(sb1) == 0) && 
	($ds9(cb1) == 0) && ($ds9(csb1) == 0)} {
	return
    }

    switch -- $current(mode) {
	pointer -
	region {
	    if {$which == $current(frame)} {
		MarkerRelease $which $x $y
	    }
	}
	crosshair {
	    if {$ds9(b1)} {
		CrosshairButton $which $x $y

		UpdateColormapLevelMosaic $which $x $y canvas
		UpdateInfoBox $which $x $y canvas
		UpdatePixelTableDialog $which $x $y canvas
		UpdateGraphData $which $x $y canvas
	    }
	}
	colorbar {
	    if {$ds9(b1)} {
		ColorbarRelease3 $x $y
	    }
	}
	pan {
	    if {$ds9(b1)} {
		PanRelease $which $x $y
	    }
	}
	zoom {}
	rotate {
	    if {$ds9(b1)} {
		RotateRelease $which $x $y
	    }
	}
	crop {
	    if {$ds9(b1)} {
		CropRelease $which $x $y
	    }
	    if {$ds9(sb1)} {
		Crop3dRelease $which $x $y 0
	    }
	    if {$ds9(cb1)} {
		Crop3dRelease $which $x $y 1
	    }
	}
	catalog {
	    if {$which == $current(frame)} {
		CATRelease $which $x $y
	    }
	}
	none {}
	analysis {
	    IMERelease $which $x $y
	}
	examine -
	iexam {}
    }

    # let others know that the mouse is up
    set ds9(b1) 0
    set ds9(sb1) 0
    set ds9(cb1) 0
    set ds9(csb1) 0

    UpdateEditMenu
    UpdateMagnifier $which $x $y
}

proc Double1Frame {which x y} {
    global current

    global debug
    if {$debug(tcl,events)} {
	puts stderr "Double1Frame $which"
    }

    switch -- $current(mode) {
	pointer -
	region {
	    if {$which == $current(frame)} {
		MarkerDouble $which $x $y
		UpdateMagnifier $which $x $y
	    }
	}
	none -
	crosshair -
	colorbar -
	pan -
	zoom -
	rotate -
	crop -
	catalog {}
	analysis {
	    IMEDouble $which $x $y
	    UpdateMagnifier $which $x $y
	}
	examine -
	iexam {}
    }
}

proc DoubleRelease1Frame {which x y} {
    global current

    global debug
    if {$debug(tcl,events)} {
	puts stderr "DoubleRelease1Frame $which"
    }

    switch -- $current(mode) {
	none -
	pointer -
	region -
	crosshair -
	colorbar -
	pan -
	zoom -
	rotate -
	crop -
	catalog -
	analysis -
	examine -
	iexam {}
    }

    UpdateEditMenu
    UpdateMagnifier $which $x $y
}

proc Button2Frame {which x y} {
    global ds9

    global debug
    if {$debug(tcl,events)} {
	puts stderr "Button2Frame"
    }

    set ds9(b2) 1
    PanButton $which $x $y
}

proc ShiftButton2Frame {which x y} {
    global ds9

    global debug
    if {$debug(tcl,events)} {
	puts stderr "ShiftButton2Frame $which"
    }

    set ds9(sb2) 1
}

proc Motion2Frame {which x y} {
    global debug
    if {$debug(tcl,events)} {
	puts stderr "Motion2Frame $which"
    }

    PanMotion $which $x $y
}

proc Release2Frame {which x y} {
    global ds9

    global debug
    if {$debug(tcl,events)} {
	puts stderr "Release2Frame $which"
    }

    PanRelease $which $x $y

    # let others know that the mouse is up

    set ds9(b2) 0
    set ds9(sb2) 0
}

proc Button4Frame {which x y} {
    global ppanzoom
    global pbin

    global debug
    if {$debug(tcl,events)} {
	puts stderr "Button4Frame $which $x $y"
    }

    if {[$which has fits bin]} {
	if {$pbin(wheel)} {
	    set zz $pbin(wheel,factor)
	    BinFrame $which $zz $zz
	    return
	}
    }

    if {$ppanzoom(wheel)} {
	set zz [expr 1./$ppanzoom(wheel,factor)]
	ZoomFrame $which $zz $zz
    }
}

proc Button5Frame {which x y} {
    global ppanzoom
    global pbin

    global debug
    if {$debug(tcl,events)} {
	puts stderr "Button5Frame $which $x $y"
    }

    if {[$which has fits bin]} {
	if {$pbin(wheel)} {
	    set zz [expr 1./$pbin(wheel,factor)]
	    BinFrame $which $zz $zz
	    return
	}
    }

    if {$ppanzoom(wheel)} {
	set zz $ppanzoom(wheel,factor)
	ZoomFrame $which $zz $zz
    }
}

# used by aqua and win32
proc MouseWheelFrame {X Y dd} {
    global ds9
    global view

    global debug
    if {$debug(tcl,events)} {
	puts stderr "MouseWheel $X $Y $dd"
    }

    # macosx returns main window coords in X,Y
    switch $ds9(wm) {
	x11 -
	win32 {}
	aqua {
	    switch $view(layout) {
		horizontal {
		    set aa [winfo height $ds9(main)]
		    set bb [winfo height $ds9(image)]
		    set Y [expr $Y-$aa+$bb]
		}
		vertical {
		    set aa [winfo width $ds9(main)]
		    set bb [winfo width $ds9(image)]
		    set X [expr $X-$aa+$bb]
		}
	    }
	    
	}
    }

    set id [$ds9(canvas) find closest $X $Y]
    set which [lindex [$ds9(canvas) gettags $id] 0]
    if {[string equal -length 5 {Frame} $which]} {
	set orig [$ds9(canvas) coords $which]
	set x [expr $X-int([lindex $orig 0])]
	set y [expr $Y-int([lindex $orig 1])]

	if {$dd>0} {
	    Button5Frame $which $x $y
	} else {
	    Button4Frame $which $x $y
	}
    }
}

proc KeyFrame {which K A xx yy} {
    global ds9
    global current

    # MacOSX and Ubuntu returns bogus values in xx,yy
    # calculate our own values
    set xx [expr {[winfo pointerx $ds9(canvas)] - [winfo rootx $ds9(canvas)]}]
    set yy [expr {[winfo pointery $ds9(canvas)] - [winfo rooty $ds9(canvas)]}]

    global debug
    if {$debug(tcl,events)} {
	puts stderr "KeyFrame $which $K $A $xx $yy"
    }

    if {$K == {Control_R} ||
	$K == {Control_L} ||
	$K == {Meta_R} ||
	$K == {Meta_L} ||
	$K == {Alt_R} ||
	$K == {Alt_L} ||
	$K == {Super_R} ||
	$K == {Super_L} ||
	$K == {??}} {
	set ds9(modifier) 1
	return
    }

    # modal bindings
    switch -- $current(mode) {
	none {
	    switch -- $K {
		c {
		    if {!$ds9(modifier)} {
			DisplayCoordDialog $which $xx $yy
		    }
		}

		plus {CubeNext}
		minus {CubePrev}

		Up -
		k {$which warp 0 -1}
		Down -
		j {$which warp 0 1}
		Left -
		h {$which warp -1 0}
		Right -
		l {$which warp 1 0}
	    }
	}
	pointer -
	region {
	    switch -- $K {
		c {
		    if {!$ds9(modifier)} {
			DisplayCoordDialog $which $xx $yy
		    }
		}

		plus {CubeNext}
		minus {CubePrev}

		Delete -
		BackSpace {MarkerDeleteKey $which $xx $yy}

		Up -
		k {MarkerArrowKey $which 0 -1}
		Down -
		j {MarkerArrowKey $which 0 1}
		Left -
		h {MarkerArrowKey $which -1 0}
		Right -
		l {MarkerArrowKey $which 1 0}

		i {$which marker property include 1 $xx $yy}
		e {$which marker property include 0 $xx $yy}
		s {$which marker property source 1 $xx $yy}
		b {$which marker property source 0 $xx $yy}
		g {GroupCreate}
		G {GroupCreateSilent}
	    }    
	}
	crosshair {
	    switch -- $K {
		c {
		    if {!$ds9(modifier)} {
			DisplayCoordDialog $which $xx $yy
		    }
		}

		plus {CubeNext}
		minus {CubePrev}

		Up -
		k {CrosshairArrowKey $which 0 -1}
		Down -
		j {CrosshairArrowKey $which 0 1}
		Left -
		h {CrosshairArrowKey $which -1 0}
		Right -
		l {CrosshairArrowKey $which 1 0}
	    }
	}
	pan {
	    switch -- $K {
		Up -
		k {Pan 0 1 canvas}
		Down -
		j {Pan 0 -1 canvas}
		Left -
		h {Pan 1 0 canvas}
		Right -
		l {Pan -1 0 canvas}
	    }
	    UpdateMagnifier $which $xx $yy
	}
	catalog {
	    switch -- $K {
		Up -
		k {MarkerArrowKey $which 0 -1}
		Down -
		j {MarkerArrowKey $which 0 1}
		Left -
		h {MarkerArrowKey $which -1 0}
		Right -
		l {MarkerArrowKey $which 1 0}
	    }	    
	    CATKey $which $K
	}
	analysis {
	    switch -- $K {
		plus {CubeNext}
		minus {CubePrev}

		Up {IMEArrowKey $which 0 -1}
		Down {IMEArrowKey $which 0 1}
		Left {IMEArrowKey $which -1 0}
		Right {IMEArrowKey $which 1 0}

		default {IMEKey $which $K $xx $yy}
	    }
	}
	iexam {IExamKey $which $K $xx $yy}
	colorbar -
	zoom -
	rotate -
	crop -
	examine {}
    }

    UpdateEditMenu
}

proc KeyReleaseFrame {which K A xx yy} {
    global ds9

    # MacOSX and Ubuntu returns bogus values in xx,yy
    # calculate our own values
    set xx [expr {[winfo pointerx $ds9(canvas)] - [winfo rootx $ds9(canvas)]}]
    set yy [expr {[winfo pointery $ds9(canvas)] - [winfo rooty $ds9(canvas)]}]

    global debug
    if {$debug(tcl,events)} {
	puts stderr "KeyReleaseFrame $which $K $A $xx $yy"
    }

    if {$K == {Control_R} ||
	$K == {Control_L} ||
	$K == {Meta_R} ||
	$K == {Meta_L} ||
	$K == {Alt_R} ||
	$K == {Alt_L} ||
	$K == {Super_R} ||
	$K == {Super_L}} {
	set ds9(modifier) 0
    }
}

# Other Public Routines

proc CopyFrame {} {
    global current

    switch -- $current(mode) {
	pointer -
	region {MarkerCopy}
    }
}

proc CutFrame {} {
    global current

    switch -- $current(mode) {
	pointer -
	region {MarkerCut}
    }
}

proc PasteFrame {} {
    global current

    switch -- $current(mode) {
	pointer -
	region {MarkerPaste}
    }
}

proc UndoFrame {} {
    global current

    switch -- $current(mode) {
	pointer -
	region {MarkerUndo}
    }
}

proc FirstFrame {} {
    global ds9
    set ds9(next) [lindex $ds9(active) 0]
    GotoFrame
}

proc PrevFrame {} {
    global ds9
    global current

    set ii [lsearch $ds9(active) $current(frame)]
    if {$ii>0} {
	set ds9(next) [lindex $ds9(active) [expr $ii-1]]
    } else {
	set ds9(next) [lindex $ds9(active) [expr $ds9(active,num)-1]]
    }
    GotoFrame
}

proc NextFrame {} {
    global ds9
    global current

    set ii [lsearch $ds9(active) $current(frame)]
    if {$ii < [expr $ds9(active,num)-1]} {
	set ds9(next) [lindex $ds9(active) [expr $ii+1]]
    } else {
	set ds9(next) [lindex $ds9(active) 0]
    }
    GotoFrame
}

proc LastFrame {} {
    global ds9

    set ds9(next) [lindex $ds9(active) [expr $ds9(active,num)-1]]
    GotoFrame
}

proc MoveFirstFrame {} {
    global ds9
    global current

    set i [lsearch $ds9(frames) $current(frame)]
    set ds9(frames) [lreplace $ds9(frames) $i $i]
    set ds9(frames) [linsert $ds9(frames) 0 $current(frame)]

    UpdateFrameMenuItems
    UpdateActiveFrames
}

proc MovePrevFrame {} {
    global ds9
    global current

    set i [lsearch $ds9(frames) $current(frame)]
    set ds9(frames) [lreplace $ds9(frames) $i $i]
    if {$i>0} {
	set ds9(frames) [linsert $ds9(frames) [expr $i-1] $current(frame)]
    } else {
	set ds9(frames) [linsert $ds9(frames) end $current(frame)]
    }

    UpdateFrameMenuItems
    UpdateActiveFrames
}

proc MoveNextFrame {} {
    global ds9
    global current

    set i [lsearch $ds9(frames) $current(frame)]
    set ds9(frames) [lreplace $ds9(frames) $i $i]
    set last [llength $ds9(frames)]
    if {$i<$last} {
	set ds9(frames) [linsert $ds9(frames) [expr $i+1] $current(frame)]
    } else {
	set ds9(frames) [linsert $ds9(frames) 0 $current(frame)]
    }

    UpdateFrameMenuItems
    UpdateActiveFrames
}

proc MoveLastFrame {} {
    global ds9
    global current

    set i [lsearch $ds9(frames) $current(frame)]
    set ds9(frames) [lreplace $ds9(frames) $i $i]
    set ds9(frames) [linsert $ds9(frames) end $current(frame)]

    UpdateFrameMenuItems
    UpdateActiveFrames
}

proc UpdateActiveFrames {} {
    global ds9
    global active
    global current

    global debug
    if {$debug(tcl,update)} {
	puts stderr "UpdateActiveFrames"
    }

    # reset active list
    set ds9(active) {}
    set ds9(active,num) 0

    foreach f $ds9(frames) {
	if {$active($f)} {
	    lappend ds9(active) $f
	    $ds9(mb).frame.goto entryconfig \
		"[msgcat::mc {Frame}] [string range $f 5 end]" -state normal
	} else {
	    $ds9(mb).frame.goto entryconfig \
		"[msgcat::mc {Frame}] [string range $f 5 end]" -state disabled
	}

    }
    set ds9(active,num) [llength $ds9(active)]

    # New layout if needed
    if {$ds9(active,num) > 0} {
	if {[lsearch $ds9(active) $current(frame)] == -1} {
	    if {$ds9(next) != {}} {
		set current(frame) $ds9(next)
	    } else {
		set current(frame) [lindex $ds9(active) 0]
		set ds9(next) $current(frame)
	    }
	}
    }

    DisplayMode
}

proc ActiveFrameAll {} {
    global ds9
    global active

    foreach f $ds9(frames) {
	set active($f) 1
    }
    UpdateActiveFrames
}

proc ActiveFrameNone {} {
    global ds9
    global active

    foreach f $ds9(frames) {
	set active($f) 0
    }
    UpdateActiveFrames
}

proc GotoFrame {} {
    global ds9
    global current
    global active

    if {$current(frame) != {} && $current(frame) != $ds9(next)} {
	$current(frame) highlite off
	$current(frame) panner off

	switch -- $ds9(display) {
	    blink -
	    single {
		$current(frame) hide
		UnBindEventsFrame $current(frame)
	    }
	    tile {}
	}
    }

    if {$current(frame) != $ds9(next)} {
	if {$current(frame) != {}} {
	    $current(frame) colorbar tag "\{[$current(colorbar) get tag]\}"
	}
	set current(frame) $ds9(next)
	set ds9(next) {}
	FrameToFront
    }
}

proc DisplayMode {} {
    global ds9
    global current
    global tile
    global blink
    global iblink

    switch -- $current(display) {
	single {set ds9(display) $current(display)}
	tile {
	    if {$ds9(active,num) > 1} {
		set ds9(display) $current(display)
	    } else {
		switch -- $tile(grid,mode) {
		    automatic {set ds9(display) single}
		    manual {set ds9(display) $current(display)}
		}
	    }
	}
	blink {
	    if {$ds9(active,num) > 1} {
		set ds9(display) $current(display)
	    } else {
		set ds9(display) single
	    }
	}
    }

    switch -- $ds9(display) {
	single -
	tile {
	    # turn off blink if on
	    if {$iblink(id)>0} {
		after cancel $iblink(id)
		set iblink(id) 0
		set iblink(index) -1
	    }

	    LayoutFrames
	}
	blink {
	    # ignore if we are already blinking
	    if {$iblink(id)==0} {
		LayoutFrames
		BlinkTimer
	    }
	}
    }
}

proc BlinkTimer {} {
    global blink
    global iblink
    global ds9

    if {$ds9(active,num) > 0} {
	incr iblink(index)
	if {$iblink(index) >= $ds9(active,num)} {
	    set iblink(index) 0
	}
	set ds9(next) [lindex $ds9(active) $iblink(index)]
	GotoFrame
    }

    set iblink(id) [after $blink(interval) BlinkTimer]
}

proc ResetCurrentFrame {} {
    global current

    ResetFrame $current(frame)
}

proc ResetAllFrame {} {
    global ds9

    foreach f $ds9(frames) {
	ResetFrame $f
    }
}

proc ResetFrame {which} {
    if {$which != {}} {
	if {[$which has iis]} {
	    IISCursorModeCmd 0
	}

	$which reset

	RefreshInfoBox $which
	PixelTableClearDialog
	ClearGraphData

	LockFrame $which
	UpdatePanZoomDialog
	UpdateCrosshairDialog
	UpdateCropDialog
	GridUpdateZoom
	UpdateZoomMenu
	UpdateScaleMenu
	UpdateScaleDialog
	UpdateGraphAxis $which

	SAMPSendCoordPointAtSkyCmd $which
    }
}

proc ClearCurrentFrame {} {
    global current

    ClearFrame $current(frame)

    ClearInfoBox
    PixelTableClearDialog
    ClearGraphData

    UpdateDS9
}

proc ClearAllFrame {} {
    global ds9

    foreach f $ds9(frames) {
	ClearFrame $f
    }

    ClearInfoBox
    PixelTableClearDialog
    ClearGraphData

    UpdateDS9
}

proc ClearFrame {which} {
    if {$which == {}} {
	return
    }

    DestroyHeader $which
    $which clear

    # delete saved loadParams
    foreach cc {{} red green blue} {
	set varname $which$cc
	global $varname
	if {[info exists $varname]} {
	    unset $varname
	}
    }
}

# Private Procedures

proc FrameToFront {} {
    global ds9
    global current
    global view
    global colorbar
    global blink

    set which $current(frame)

    # process proper colorbar
    switch -- [$which get type] {
	base -
	3d {
	    if {$view(colorbar)} {
		colorbar show
	    } else {
		colorbar hide
	    }
	    colorbarrgb hide
	    set current(colorbar) colorbar

	    colorbar colorbar [$which get colorbar]
	    colorbar tag "\{[$which get colorbar tag]\}"
	    set colorbar(map) [colorbar get name]

	    $ds9(canvas) raise colorbar colorbarrgb
	}
	rgb {
	    colorbar hide
	    if {$view(colorbar)} {
		colorbarrgb show
	    } else {
		colorbarrgb hide
	    }
	    set current(colorbar) colorbarrgb

	    colorbarrgb colorbar [$which get colorbar]
	    colorbarrgb rgb channel [$which get rgb channel]

	    $ds9(canvas) raise colorbarrgb colorbar
	}
    }
    set colorbar(invert) [$current(colorbar) get invert]

    $ds9(canvas) raise $which

    $which show
    switch -- $ds9(display) {
	single -
	blink {
	    if {!$ds9(freeze)} {
		BindEventsFrame $which
	    }
	}
	tile {$which highlite on}
    }

    if {$view(panner)} {
	$which panner on
    }

    UpdateGraphLayout $which
    UpdateDS9
}

proc TileDialog {} {
    global tile
    global itile
    global dtile
    global ds9

    # see if we already have a window visible
    if {[winfo exists $itile(top)]} {
	raise $itile(top)
	return
    }

    # create window
    set w $itile(top)
    set mb $itile(mb)

    Toplevel $w $mb 6 [msgcat::mc {Tile Parameters}] TileDestroyDialog

    set dtile(mode) $tile(grid,mode)
    set dtile(dir) $tile(grid,dir)
    set dtile(row) $tile(grid,row)
    set dtile(col) $tile(grid,col)
    set dtile(gap) $tile(grid,gap)

    $mb add cascade -label [msgcat::mc {File}] -menu $mb.file
    $mb add cascade -label [msgcat::mc {Edit}] -menu $mb.edit

    menu $mb.file
    $mb.file add command -label [msgcat::mc {Apply}] -command TileApplyDialog
    $mb.file add separator
    $mb.file add command -label [msgcat::mc {Close}] -command TileDestroyDialog

    EditMenu $mb itile

    # Grid
    set f [ttk::labelframe $w.grid -text [msgcat::mc {Grid}] -padding 2]
    ttk::radiobutton $f.auto -text [msgcat::mc {Automatic}] \
	-variable dtile(mode) -value automatic
    ttk::radiobutton $f.manual -text [msgcat::mc {Manual}] \
	-variable dtile(mode) -value manual
    grid $f.auto $f.manual -padx 2 -pady 2 -sticky w

    # Grid Direction
    set f [ttk::labelframe $w.dir -text [msgcat::mc {Direction}] -padding 2]
    ttk::radiobutton $f.x -text [msgcat::mc {X}] \
	-variable dtile(dir) -value x
    ttk::radiobutton $f.y -text [msgcat::mc {Y}] \
	-variable dtile(dir) -value y
    grid $f.x $f.y -padx 2 -pady 2 -sticky w

    # Layout
    set f [ttk::labelframe $w.layout -text [msgcat::mc {Layout}] -padding 2]
    ttk::label $f.tcol -text [msgcat::mc {Columns}]
    ttk::label $f.trow -text [msgcat::mc {Rows}]
    ttk::entry $f.col -textvariable dtile(col) -width 6
    ttk::label $f.tx -text {x}
    ttk::entry $f.row -textvariable dtile(row) -width 6
    grid $f.tcol x $f.trow -padx 2 -pady 2 -sticky w
    grid $f.col $f.tx $f.row -padx 2 -pady 2 -sticky w

    # Gap
    set f [ttk::labelframe $w.gap -text [msgcat::mc {Gap}] -padding 2]
    ttk::entry $f.gap -textvariable dtile(gap) -width 6
    ttk::label $f.ugap -text [msgcat::mc {Pixels}]
    grid $f.gap - $f.ugap -padx 2 -pady 2 -sticky w

    # Buttons
    set f [ttk::frame $w.buttons]
    ttk::button $f.apply -text [msgcat::mc {Apply}] -command TileApplyDialog
    ttk::button $f.close -text [msgcat::mc {Close}] -command TileDestroyDialog
    pack $f.apply $f.close -side left -expand true -padx 2 -pady 4

    # Fini
    grid $w.grid -sticky news
    grid $w.dir -sticky news
    grid $w.layout -sticky news
    grid $w.gap -sticky news
    grid $w.buttons -sticky ew
    grid rowconfigure $w 0 -weight 1
    grid rowconfigure $w 1 -weight 1
    grid rowconfigure $w 2 -weight 1
    grid rowconfigure $w 3 -weight 1
    grid columnconfigure $w 0 -weight 1
}

proc TileDestroyDialog {} {
    global itile
    global dtile

    if {[winfo exists $itile(top)]} {
	destroy $itile(top)
	destroy $itile(mb)
    }

    unset dtile
}

proc TileApplyDialog {} {
    global tile
    global dtile

    set tile(mode) grid
    set tile(grid,mode) $dtile(mode)
    set tile(grid,dir) $dtile(dir)
    set tile(grid,row) $dtile(row)
    set tile(grid,col) $dtile(col)
    set tile(grid,gap) $dtile(gap)
    
    DisplayMode
}

# Process Cmds

proc ProcessFrameCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    global current
    global active
    global panzoom

    catch {
	switch -- [string tolower [lindex $var $i]] {
	    match {
		incr i
		MatchFrameCurrent [lindex $var $i]
	    }
	    lock {
		incr i
		set panzoom(lock) [lindex $var $i]
		LockFrameCurrent
	    }
	    center {
		incr i
		switch -- [lindex $var $i] {
		    all {CenterAllFrame}
		    {} {CenterCurrentFrame; incr i -1}
		    default {
			if {[string is integer [lindex $var $i]]} {
			    set f "Frame[lindex $var $i]"
			    CenterFrame $f
			} else {
			    CenterCurrentFrame; incr i -1
			}
		    }
		}
	    }
	    clear {
		incr i
		switch -- [lindex $var $i] {
		    all {ClearAllFrame}
		    {} {ClearCurrentFrame; incr i -1}
		    default {
			if {[string is integer [lindex $var $i]]} {
			    set f "Frame[lindex $var $i]"
			    ClearFrame $f
			} else {
			    ClearCurrentFrame; incr i -1
			}
		    }
		}
	    }
	    delete {
		incr i
		switch -- [lindex $var $i] {
		    all {DeleteAllFrames}
		    {} {DeleteCurrentFrame; incr i -1}
		    default {
			if {[string is integer [lindex $var $i]]} {
			    set f "Frame[lindex $var $i]"
			    DeleteSingleFrame $f
			} else {
			    DeleteCurrentFrame; incr i -1
			}
		    }
		}
	    }
	    new {
		incr i
		switch -- [lindex $var $i] {
		    rgb {CreateRGBFrame}
		    3d {Create3DFrame}
		    default {CreateFrame; incr i -1}
		}
	    }
	    reset {
		incr i
		switch -- [lindex $var $i] {
		    all {ResetAllFrame}
		    {} {ResetCurrentFrame; incr i -1}
		    default {
			if {[string is integer [lindex $var $i]]} {
			    set f "Frame[lindex $var $i]"
			    ResetFrame $f
			} else {
			    ResetCurrentFrame; incr i -1
			}
		    }
		}
	    }
	    refresh {
		incr i
		switch -- [lindex $var $i] {
		    all {UpdateAllFrame}
		    {} {UpdateCurrentFrame; incr i -1}
		    default {
			if {[string is integer [lindex $var $i]]} {
			    set f "Frame[lindex $var $i]"
			    UpdateFrame $f
			} else {
			    UpdateCurrentFrame; incr i -1
			}
		    }
		}
	    }
	    hide {
		incr i
		switch -- [lindex $var $i] {
		    all {ActiveFrameNone}
		    {} {
			set active($current(frame)) 0
			UpdateActiveFrames
			incr i -1
		    }
		    default {
			if {[string is integer [lindex $var $i]]} {
			    set f "Frame[lindex $var $i]"
			    set active($f) 0
			    UpdateActiveFrames
			} else {
			    set active($current(frame)) 0
			    UpdateActiveFrames
			    incr i -1
			}
		    }
		}
	    }
	    show {
		incr i
		switch -- [lindex $var $i] {
		    all {ActiveFrameAll}
		    default {
			if {[string is integer [lindex $var $i]]} {
			    set f "Frame[lindex $var $i]"
			    set active($f) 1
			    UpdateActiveFrames
			} else {
			    incr i -1
			}
		    }
		}
	    }
	    move {
		incr i
		switch -- [lindex $var $i] {
		    first {MoveFirstFrame}
		    back {MovePrevFrame}
		    forward {MoveNextFrame}
		    last {MoveLastFrame}
		}
	    }
	    first {FirstFrame}
	    prev {PrevFrame}
	    next {NextFrame}
	    last {LastFrame}
	    frameno {incr i; CreateGotoFrame [lindex $var $i] base}
	    default {CreateGotoFrame [lindex $var $i] base}
	}
    }
}

proc ProcessSendFrameCmd {proc id param} {
    global ds9
    global current
    global rgb
    global panzoom

    switch -- [lindex $param 0] {
	lock {$proc $id "$panzoom(lock)\n"}
	active {
	    set r {}
	    foreach f $ds9(active) {
		append r "[string range $f 5 end] "
	    }
	    $proc $id "$r\n"
	}
	all {
	    set r {}
	    foreach f $ds9(frames) {
		append r "[string range $f 5 end] "
	    }
	    $proc $id "$r\n"
	}
	has {
	    if {$current(frame) == {}} {
		Error [msgcat::mc {No current frame}]
		return
	    }

	    switch [lindex $param 1] {
		amplifier -
		datamin -
		datasec -
		detector -
		grid -
		iis -
		irafmin -
		physical -
		smooth {$proc $id [ToYesNo [$current(frame) has [lindex $param 1]]]}
		contour {
		    switch [lindex $param 2] {
			aux {$proc $id [ToYesNo [$current(frame) has contour aux]]}
			default {$proc $id [ToYesNo [$current(frame) has contour]]}
		    }
		}
		fits {
		    switch [lindex $param 2] {
			bin -
			cube -
			mosaic {$proc $id [ToYesNo [$current(frame) has fits [lindex $param 2]]]}
			default {$proc $id [ToYesNo [$current(frame) has fits]]}
		    }
		}
		marker {
		    switch [lindex $param 2] {
			highlite -
			paste -
			select -
			undo {$proc $id [ToYesNo [$current(frame) has marker [lindex $param 2]]]}
		    }
		}
		system {$proc $id [ToYesNo [$current(frame) has system [lindex $param 2]]]}
		wcs {
		    switch [lindex $param 2] {
			equatorial -
			linear {$proc $id [ToYesNo [$current(frame) has wcs [lindex $param 2] [lindex $param 3]]]}
			default {$proc $id [ToYesNo [$current(frame) has wcs [lindex $param 2]]]}
		    }
		}
	    }
	}
	default {$proc $id "[string range $current(frame) 5 end]\n"}
    }
}

proc ProcessSingleCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    # we need to be realized
    ProcessRealizeDS9

    global current
    set current(display) single
    DisplayMode
}

proc ProcessSendSingleCmd {proc id param} {
    global current

    if {$current(display) == "single"} {
	$proc $id [ToYesNo 1]
    } else {
	$proc $id [ToYesNo 0]
    }
}

proc ProcessTileCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    global current
    global tile

    switch -- [string tolower [lindex $var $i]] {
	mode {
	    incr i
	    set tile(mode) [lindex $var $i]
	}
	grid {
	    incr i
	    switch -- [string tolower [lindex $var $i]] {
		mode {
		    incr i
		    set tile(grid,mode) [lindex $var $i]
		}
		direction {
		    incr i
		    set tile(grid,dir) [lindex $var $i]
		}
		layout {
		    incr i
		    set tile(grid,col) [lindex $var $i]
		    incr i
		    set tile(grid,row) [lindex $var $i]
		    set tile(grid,mode) {manual}
		}
		gap {
		    incr i
		    set tile(grid,gap) [lindex $var $i]
		}
		default {
		    if {[string range [lindex $var $i] 0 0] != {-}} {
			set tile(mode) grid
		    } else {
			incr i -1
		    }
		}
	    }
	}
	column {
	    set tile(mode) column
	}
	row {
	    set tile(mode) row
	}

	yes -
	true -
	on -
	1 -
	no -
	false -
	off -
	0 {
	    if {[FromYesNo [lindex $var $i]]} {
		set current(display) tile
	    } else {
		set current(display) single
	    }
	}
	default {
	    set current(display) tile
	    incr i -1
	}
    }
    DisplayMode
}

proc ProcessSendTileCmd {proc id param} {
    global current
    global tile

    switch -- [lindex $param 0] {
	mode {$proc $id "$tile(mode)\n"}
	grid {
	    switch -- [lindex $param 1] {
		mode {$proc $id "$tile(grid,mode)\n"}
		direction {$proc $id "$tile(grid,dir)\n"}
		layout {$proc $id "$tile(grid,col) $tile(grid,row)\n"}
		gap {$proc $id "$tile(grid,gap)\n"}
	    }
	}
	default {
	    if {$current(display)=="tile"} {
		$proc $id [ToYesNo 1]
	    } else {
		$proc $id [ToYesNo 0]
	    }
	}
    }
}

proc ProcessBlinkCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    global current
    global blink

    switch -- [string tolower [lindex $var $i]] {
	interval {
	    incr i
	    set blink(interval) [expr int([lindex $var $i]*1000)]
	}
	yes -
	true -
	on -
	1 -
	no -
	false -
	off -
	0 {
	    if {[FromYesNo [lindex $var $i]]} {
		set current(display) blink
	    } else {
		set current(display) single
	    }
	}
	default {
	    set current(display) blink
	    incr i -1
	}
    }
    DisplayMode
}

proc ProcessSendBlinkCmd {proc id param} {
    global current
    global blink

    switch -- [lindex $param 0] {
	interval {$proc $id "[expr $blink(interval)/1000.]\n"}
	default {
	    if {$current(display) == {blink}} {
		$proc $id [ToYesNo 1]
	    } else {
		$proc $id [ToYesNo 0]
	    }
	}
    }
}

proc ProcessLockCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    global panzoom
    global crop
    global crosshair
    global cube
    global ime
    global bin
    global scale
    global colorbar
    global block
    global smooth
    global threed

    # we need to be realized
    ProcessRealizeDS9

    switch -- [string tolower [lindex $var $i]] {
	frame -
	frames {
	    incr i
	    set panzoom(lock) [lindex $var $i]
	    LockFrameCurrent
	}
	crosshair -
	crosshairs {
	    incr i
	    set crosshair(lock) [lindex $var $i]
	    LockCrosshairCurrent
	}
	crop {
	    incr i
	    set crop(lock) [lindex $var $i]
	    LockCropCurrent
	}
	slice -
	cube -
	datacube {
	    incr i
	    if {!([string range [lindex $var $i] 0 0] == "-")} {
		switch -- [lindex $var $i] {
		    {} -
		    yes -
		    1 {set cube(lock) image}
		    no -
		    0 {set cube(lock) none}
		    default {set cube(lock) [lindex $var $i]}
		}
	    } else {
		set cube(lock) image
		incr i -1
	    }
	    LockCubeCurrent
	}
	bin {
	    incr i
	    if {!([string range [lindex $var $i] 0 0] == "-")} {
		set bin(lock) [FromYesNo [lindex $var $i]]
	    } else {
		set bin(lock) 1
		incr i -1
	    }
	    LockBinCurrent
	}
	axes -
	order {
	    incr i
	    if {!([string range [lindex $var $i] 0 0] == "-")} {
		set cube(lock,axes) [FromYesNo [lindex $var $i]]
	    } else {
		set cube(lock,axes) 1
		incr i -1
	    }
	    LockAxesCurrent
	}
	scale -
	scales {
	    incr i
	    if {!([string range [lindex $var $i] 0 0] == "-")} {
		set scale(lock) [FromYesNo [lindex $var $i]]
	    } else {
		set scale(lock) 1
		incr i -1
	    }
	    LockScaleCurrent
	}
	limits -
	scalelimits {
	    incr i
	    if {!([string range [lindex $var $i] 0 0] == "-")} {
		set scale(lock,limits) [FromYesNo [lindex $var $i]]
	    } else {
		set scale(lock,limits) 1
		incr i -1
	    }
	    LockScaleLimitsCurrent
	}
	color -
	colormap -
	colorbar -
	colorbars {
	    incr i
	    if {!([string range [lindex $var $i] 0 0] == "-")} {
		set colorbar(lock) [FromYesNo [lindex $var $i]]
	    } else {
		set colorbar(lock) 1
		incr i -1
	    }
	    LockColorCurrent
	}
	block {
	    incr i
	    if {!([string range [lindex $var $i] 0 0] == "-")} {
		set block(lock) [FromYesNo [lindex $var $i]]
	    } else {
		set block(lock) 1
		incr i -1
	    }
	    LockBlockCurrent
	}
	smooth {
	    incr i
	    if {!([string range [lindex $var $i] 0 0] == "-")} {
		set smooth(lock) [FromYesNo [lindex $var $i]]
	    } else {
		set smooth(lock) 1
		incr i -1
	    }
	    LockSmoothCurrent
	}
	3d {
	    incr i
	    if {!([string range [lindex $var $i] 0 0] == "-")} {
		set threed(lock) [FromYesNo [lindex $var $i]]
	    } else {
		set threed(lock) 1
		incr i -1
	    }
	    Lock3DCurrent
	}
    }
}

proc ProcessSendLockCmd {proc id param} {
    global panzoom
    global crop
    global crosshair
    global cube
    global ime
    global bin
    global scale
    global colorbar
    global block
    global smooth
    global threed

    switch -- [lindex $param 0] {
	frame -
	frames {$proc $id "$panzoom(lock)\n"}
	crosshair -
	crosshairs {$proc $id "$crosshair(lock)\n"}
	crop {$proc $id "$crop(lock)\n"}
	slice -
	cube -
	datacube {$proc $id "$cube(lock)\n"}
	analysis {$proc $id "$ime(lock)\n"}
	bin {$proc $id [ToYesNo $bin(lock)]}
	axes -
	order {$proc $id [ToYesNo $cube(lock,axes)]}
	scale -
	scales {$proc $id [ToYesNo $scale(lock)]}
	limits -
	scalelimits {$proc $id [ToYesNo $scale(lock,limits)]}
	color -
	colormap -
	colorbar -
	colorbars {$proc $id [ToYesNo $colorbar(lock)]}
	block {$proc $id [ToYesNo $block(lock)]}
	smooth {$proc $id [ToYesNo $smooth(lock)]}
	3d {$proc $id [ToYesNo $threed(lock)]}
    }
}

proc ProcessMatchCmd {varname iname} {
    upvar $varname var
    upvar $iname i
    global current

    # we need to be realized
    ProcessRealizeDS9

    switch -- [string tolower [lindex $var $i]] {
	frame -
	frames {
	    incr i
	    MatchFrameCurrent [lindex $var $i]
	}
	crosshair -
	crosshairs {
	    incr i
	    MatchCrosshairCurrent [lindex $var $i]
	}
	crop {
	    incr i
	    MatchCropCurrent [lindex $var $i]
	}
	slice -
	cube -
	datacube {
	    incr i
	    if {!([string range [lindex $var $i] 0 0] == "-")} {
		switch -- [lindex $var $i] {
		    {} {MatchCubeCurrent image}
		    default {MatchCubeCurrent [lindex $var $i]}
		}
	    } else {
		MatchCubeCurrent image
		incr i -1
	    }
	}
	bin {MatchBinCurrent}
	axes -
	order {MatchAxesCurrent}
	scale -
	scales {MatchScaleCurrent}
	limits -
	scalelimits {MatchScaleLimitsCurrent}
	color -
	colormap -
	colorbar -
	colorbars {MatchColorCurrent}
	block {MatchBlockCurrent}
	smooth {MatchSmoothCurrent}
	3d {Match3DCurrent}
    }
}

