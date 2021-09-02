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

    CreateNameNumberFrame "Frame$ds9(seq)" $type
    incr ds9(seq)
}

proc CreateGotoFrame {num type} {
    global ds9
    global active

    set which "Frame$num"
    if {[lsearch $ds9(frames) $which]==-1} {
	CreateNameNumberFrame $which $type
	set ds9(seq) [expr $num+1]
    } else {
	if {$active($which)==0} {
	    set active($which) 1
	    UpdateActiveFrames
	}
	GotoFrame $which
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

    # update frame lists
    lappend ds9(frames) $which
    lappend ds9(active) $which
    set ds9(active,num) [llength $ds9(active)]
    set active($which) 1

    # and create the frame
    switch -- $type {
	base {
	    $ds9(canvas) create frame$ds9(visual)$ds9(depth) \
		-command $which
	    CreateColorbarBase $which
	}
	rgb {
	    $ds9(canvas) create framergb$ds9(visual)$ds9(depth) \
		-command $which
	    CreateColorbarRGB $which
	}
	3d {
	    $ds9(canvas) create frame3d$ds9(visual)$ds9(depth) \
		-command $which
	    CreateColorbarBase $which
	}
    }

    $which configure -x 0 -y 0 \
	-anchor nw \
	-tag $which \
	-helvetica $ds9(helvetica) \
	-courier $ds9(courier) \
	-times $ds9(times) \
	-fg [ThemeTreeForeground] \
	-bg [ThemeTreeBackground]

    $which threads $ds9(threads)

    $which panner 'panner' $ipanner(size) $ipanner(size)
    $which magnifier 'magnifier' $imagnifier(size) $imagnifier(size)
    $which magnifier zoom $pmagnifier(zoom)
    $which magnifier graphics $pmagnifier(region)
    $which magnifier cursor $pmagnifier(cursor)

    $which zoom to $current(zoom)
    $which rotate to $current(rotate)
    $which orient $current(orient)
    $which wcs align $current(align)

    $which pan preserve $panzoom(preserve)

    # set so prefs (pwcs) will work
    # may cause other problems, but can't remember why
    $which wcs $wcs(system) $wcs(sky) $wcs(skyformat)

    $which datasec $scale(datasec)

    $which precision $pds9(prec,linear) $pds9(prec,deg) \
	$pds9(prec,hms) $pds9(prec,dms) \
	$pds9(prec,len,linear) $pds9(prec,len,deg) \
	$pds9(prec,len,arcmin) $pds9(prec,len,arcsec) \
	$pds9(prec,angle)
    
    $which bg color $pds9(bg)
    $which bg color $pds9(bg,use)
    $which nan color $pds9(nan)
    $which highlite color blue

    $which iraf align $pds9(iraf)

    $which marker epsilon $pmarker(epsilon)
    $which marker show $marker(show)
    $which marker show text $marker(show,text)
    $which marker centroid auto $marker(centroid,auto)
    $which marker centroid radius $marker(centroid,radius)
    $which marker centroid iteration $marker(centroid,iteration)
    $which marker preserve $marker(preserve)

    # Frame type items
    switch -- [$which get type] {
	base {}
	rgb {$which rgb system $rgb(system)}
	3d {
	    $which 3d method $pthreed(method)
	    $which 3d background $pthreed(background)
	    $which 3d border $pthreed(border)
	    $which 3d border color $pthreed(border,color)
	    $which 3d compass $pthreed(compass)
	    $which 3d compass color $pthreed(compass,color)
	    $which 3d highlite $pthreed(highlite)
	    $which 3d highlite color $pthreed(highlite,color)
	}
    }

    # channel dependent items
    switch -- [$which get type] {
	base -
	3d {
	    $which colorscale $scale(type)
	    $which colorscale log $scale(log)

	    $which clip scope $scale(scope)
	    $which clip mode $scale(mode)
	    $which clip minmax $minmax(sample) $minmax(mode)
	    $which clip user $scale(min) $scale(max)
	    $which clip zscale $zscale(contrast) $zscale(sample) $zscale(line)

	    $which datasec $scale(datasec)

	    $which bin function $bin(function)
	    $which bin factor to $bin(factor)
	    $which bin depth $bin(depth)
	    $which bin buffer size $bin(buffersize)

	    $which block to $block(factor)
	    
	    $which cube axes $cube(axes)
	    
	    if {$smooth(view)} {
		$which smooth $smooth(function) \
		    $smooth(radius) $smooth(radius,minor) \
		    $smooth(sigma) $smooth(sigma,minor) \
		    $smooth(angle)
	    }
	}
	rgb {
	    foreach c {red green blue} {
		$which rgb channel $c

		$which colorscale $scale(type)
		$which colorscale log $scale(log)

		$which clip scope $scale(scope)
		$which clip mode $scale(mode)
		$which clip minmax $minmax(sample) $minmax(mode)
		$which clip user $scale(min) $scale(max)
		$which clip zscale \
		    $zscale(contrast) $zscale(sample) $zscale(line)

		$which datasec $scale(datasec)

		$which bin function $bin(function)
		$which bin factor to $bin(factor)
		$which bin depth $bin(depth)
		$which bin buffer size $bin(buffersize)

		$which block to $block(factor)

		$which cube axes $cube(axes)

		if {$smooth(view)} {
		    $which smooth $smooth(function) \
			$smooth(radius) $smooth(radius,minor) \
			$smooth(sigma) $smooth(sigma,minor) \
			$smooth(angle)
		}
	    }
	    $which rgb channel red
	}
    }

    switch $current(mode) {
	crosshair {$which crosshair on}
    }

    UpdateFrameMenuItems

    set current(frame) $which
    $current(frame) colormap [$current(colorbar) get colormap]

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

    set ds9(seq) 1

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
    
    # delete canvas colorbar
    $ds9(canvas) delete ${which}cb

    # delete canvas widget
    $ds9(canvas) delete $which

    # reset current(frame) if needed
    if {$current(frame) == $which} {
	set ii [lsearch $ds9(active) $which]
	if {$ii>0} {
	    set current(frame) [lindex $ds9(active) [expr $ii-1]]
	    set current(colorbar) ${current(frame)}cb
	}
    }

    # delete it from active list
    set ii [lsearch $ds9(active) $which]
    if {$ii>0} {
	set ds9(active) [lreplace $ds9(active) $ii $ii]
	set ds9(active,num) [llength $ds9(active)]
	unset active($which)
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

    foreach ff $ds9(frames) {
	UpdateFrame $ff
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

    $ds9(canvas) bind $which <Button-1> \
	[list Button1Frame $which %x %y]
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
	none -
	pointer -
	region {}
	crosshair {
	    set coord [$which get crosshair canvas]
	    set x [lindex $coord 0]
	    set y [lindex $coord 1]
	}
	catalog -
	footprint -
	pan -
	zoom -
	rotate -
	crop -
	colorbar -
	examine -
	iexam -
	3d {}
    }

    EnterInfoBox $which
    UpdateInfoBox $which $x $y canvas
    UpdatePixelTableDialog $which $x $y canvas
    UpdateGraphLayout $which
    UpdateGraphAxis $which
    UpdateGraphData $which $x $y canvas

    if {$view(magnifier)} {
	# don't turn on the magnifier until we've finished the init process
	# this a real problem with 3d frames
	if {!$ds9(init)} {
	    $which magnifier on
	}
    }

    UpdateEditMenu
    UpdateMagnifier $which $x $y
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
	none -
	pointer -
	region -
	colorbar -
	pan -
	zoom -
	rotate -
	crop -
	catalog -
	footprint -
	examine -
	iexam -
	3d {
	    LeaveInfoBox
	    PixelTableClearDialog
	    ClearGraphData
	}
	crosshair {}
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
	footprint {
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
	iexam -
	3d {
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

		GotoFrame $which
	    }
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

		GotoFrame $which
	    }
	}
	crosshair {
	    CrosshairButton $which $x $y

	    UpdateColormapLevelMosaic $which $x $y canvas
	    UpdateInfoBox $which $x $y canvas
	    UpdatePixelTableDialog $which $x $y canvas
	    UpdateGraphLayout $which
	    UpdateGraphAxis $which
	    UpdateGraphData $which $x $y canvas
	}
	colorbar {ColorbarButton3 $x $y}
	pan {
	    PanButton $which $x $y
	}
	zoom {
	    ZoomButton $which $x $y
	}
	rotate {RotateButton $which $x $y}
	crop {
	    CropButton $which $x $y
	}
	catalog {
	    if {$which == $current(frame)} {
		CATButton $which $x $y
	    } else {
		# we need this cause MarkerMotion maybe called, 
		# and we don't want it
		set imarker(motion) none
		set imarker(handle) -1

		GotoFrame $which
	    }
	}
        footprint {
            if {$which == $current(frame)} {
                FPButton $which $x $y
            } else {
                # we need this cause MarkerMotion maybe called,                 
                # and we don't want it                                          
                set imarker(motion) none
                set imarker(handle) -1

                GotoFrame $which
            }
        }
	examine {ExamineButton $which $x $y}
	iexam {IExamButton $which $x $y}
	3d {}
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
	}
	crosshair {}
	colorbar {}
	pan {}
	zoom {ZoomShift $which}
	rotate -
	crop {
	    Crop3dButton $which $x $y 0
	}
	catalog {
	    if {$which == $current(frame)} {
		CATShift $which $x $y
	    }
	}
        footprint {
            if {$which == $current(frame)} {
                FPShift $which $x $y
            }
        }
	examine {}
	iexam {}
	3d {}
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
	catalog -
	footprint {
	    if {$which == $current(frame)} {
		MarkerControl $which $x $y
	    } else {
		# we need this cause MarkerMotion maybe called, 
		# and we don't want it
		set imarker(motion) none
		set imarker(handle) -1
	    }
	}
	crosshair -
	colorbar -
	pan -
	zoom -
	rotate {}
	crop {
	    Crop3dButton $which $x $y 1
	}
	examine {}
	iexam {}
	3d {}
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
	catalog -
	footprint {
	    if {$which == $current(frame)} {
		MarkerControlShift $which $x $y
	    } else {
		# we need this cause MarkerMotion maybe called, 
		# and we don't want it
		set imarker(motion) none
		set imarker(handle) -1
	    }
	}
	crosshair -
	colorbar -
	pan -
	zoom -
	rotate -
	crop -
	examine -
	iexam -
	3d {}
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
	none {}
	pointer -
	region {
	    if {$which == $current(frame)} {
		MarkerMotion $which $x $y
	    }

	    UpdateInfoBox $which $x $y canvas
	    UpdatePixelTableDialog $which $x $y canvas
	    UpdateGraphData $which $x $y canvas
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
		ColorbarMotion3 $x $y
	    }
	}
	pan {
	    if {$ds9(b1)} {
		PanMotion $which $x $y
	    }
	}
	zoom {}
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
	}
	catalog {
	    if {$which == $current(frame)} {
		CATMotion $which $x $y
	    }

	    UpdateInfoBox $which $x $y canvas
	    UpdatePixelTableDialog $which $x $y canvas
	    UpdateGraphData $which $x $y canvas
	}
        footprint {
            if {$which == $current(frame)} {
                FPMotion $which $x $y
            }

            UpdateInfoBox $which $x $y canvas
            UpdatePixelTableDialog $which $x $y canvas
            UpdateGraphData $which $x $y canvas
        }
	examine {}
	iexam {}
	3d {
	    if {$ds9(b1)} {
		3DMotion $which $x $y
	    }
	}
    }

    UpdateMagnifier $which $x $y
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
	none {}
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
        footprint {
            if {$which == $current(frame)} {
                FPRelease $which $x $y
            }
        }
	examine {}
	iexam {}
	3d {}
    }

    # let others know that the mouse is up
    set ds9(b1) 0
    set ds9(sb1) 0
    set ds9(cb1) 0
    set ds9(csb1) 0

    UpdateEditMenu
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
	    }
	}
	none -
	crosshair -
	colorbar -
	pan -
	zoom -
	rotate -
	crop -
	catalog -
	footprint -
	examine -
	iexam {}
	3d {3DDouble $which}
	    
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
	footprint -
	examine -
	iexam -
	3d {}
    }

    UpdateEditMenu
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
    UpdateMagnifier $which $x $y
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

    # MacOSX and maybe Ubuntu returns bogus values in xx,yy
    # calculate our own values
    set xx [expr {[winfo pointerx $ds9(canvas)] - [winfo rootx $ds9(canvas)]}]
    set yy [expr {[winfo pointery $ds9(canvas)] - [winfo rooty $ds9(canvas)]}]

    global debug
    if {$debug(tcl,events)} {
	puts stderr "KeyFrame $which $K $A $xx $yy"
    }

    # MacOS can sometime gerate a ?? modifier keyevent
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

    if {$ds9(modifier)} {
	return
    }

    # modal bindings
    switch -- $current(mode) {
	none {
	    switch -- $K {
		c {DisplayCoordDialog $which $xx $yy}

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

		z {Zoom 2 2}
		Z {Zoom .5 .5}
	    }
	}
	pointer -
	region {
	    switch -- $K {
		c {DisplayCoordDialog $which $xx $yy}

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

		z {Zoom 2 2}
		Z {Zoom .5 .5}
	    }    
	}
	crosshair {
	    switch -- $K {
		c {DisplayCoordDialog $which $xx $yy}

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

		z {Zoom 2 2}
		Z {Zoom .5 .5}
	    }
	}
	pan {
	    switch -- $K {
		Up -
		k {PanCanvas 0 1}
		Down -
		j {PanCanvas 0 -1}
		Left -
		h {PanCanvas 1 0}
		Right -
		l {PanCanvas -1 0}

		z {Zoom 2 2}
		Z {Zoom .5 .5}
	    }
	}
	zoom -
	rotate {
	    switch -- $K {
		z {Zoom 2 2}
		Z {Zoom .5 .5}
	    }
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
        footprint {                                                             
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
        }                                                                       
	iexam {IExamKey $which $K $xx $yy}
	colorbar -
	crop -
	examine {}
	3d {
	    switch -- $K {
		Up -
		k {3DArrowKey $which 0 1}
		Down -
		j {3DArrowKey $which 0 -1}
		Left -
		h {3DArrowKey $which -1 0}
		Right -
		l {3DArrowKey $which 1 0}

		z {Zoom 2 2}
		Z {Zoom .5 .5}
	    }
	}
    }

    # since most modes do zoom
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

    # MacOS can sometime gerate a ?? modifier keyevent
    if {$K == {Control_R} ||
	$K == {Control_L} ||
	$K == {Meta_R} ||
	$K == {Meta_L} ||
	$K == {Alt_R} ||
	$K == {Alt_L} ||
	$K == {Super_R} ||
	$K == {Super_L} ||
	$K == {??}} {
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

    GotoFrame [lindex $ds9(active) 0]
}

proc PrevFrame {} {
    global ds9
    global current

    set ii [lsearch $ds9(active) $current(frame)]
    if {$ii>0} {
	GotoFrame [lindex $ds9(active) [expr $ii-1]]
    } else {
	GotoFrame [lindex $ds9(active) [expr $ds9(active,num)-1]]
    }
}

proc NextFrame {} {
    global ds9
    global current

    set ii [lsearch $ds9(active) $current(frame)]
    if {$ii < [expr $ds9(active,num)-1]} {
	GotoFrame [lindex $ds9(active) [expr $ii+1]]
    } else {
	GotoFrame [lindex $ds9(active) 0]
    }
}

proc LastFrame {} {
    global ds9

    GotoFrame [lindex $ds9(active) [expr $ds9(active,num)-1]]
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

    foreach ff $ds9(frames) {
	if {$active($ff)} {
	    lappend ds9(active) $ff
	    $ds9(mb).frame.goto entryconfig \
		"[msgcat::mc {Frame}] [string range $ff 5 end]" -state normal
	} else {
	    $ds9(mb).frame.goto entryconfig \
		"[msgcat::mc {Frame}] [string range $ff 5 end]" -state disabled
	}
    }
    set ds9(active,num) [llength $ds9(active)]

    # New layout if needed
    if {$ds9(active,num) > 0} {
	if {[lsearch $ds9(active) $current(frame)] == -1} {
	    set current(frame) [lindex $ds9(active) 0]
	    set current(colorbar) ${current(frame)}cb
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

proc GotoFrame {which} {
    global ds9
    global current
    global active

    if {$current(frame) != {} && $current(frame) != $which} {
	$current(frame) highlite off
	$current(frame) panner off

	switch -- $ds9(display) {
	    blink -
	    single {
		$current(frame) hide
		UnBindEventsFrame $current(frame)
		UnBindEventsColorbar $current(colorbar)
	    }
	    tile {}
	}
    }

    if {$current(frame) != $which} {
	set current(frame) $which
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
	GotoFrame [lindex $ds9(active) $iblink(index)]
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

    foreach cc {{} red green blue} {
	set varname $which$cc
	global $varname
	if {[info exists $varname]} {
	    unset $varname
	}
    }

    set cnt [$which get fits count]
    for {set ii 2} {$ii<=$cnt} {incr ii} {
	set varname $which.$ii
	global $varname
	if {[info exists $varname]} {
	    unset $varname
	} else {
	    break
	}
    }

    set cnt [$which get mask count]
    for {set ii 1} {$ii<=$cnt} {incr ii} {
	set varname $which.m${ii}
	global $varname
	if {[info exists $varname]} {
	    unset $varname
	} else {
	    break
	}
    }

    DestroyHeader $which
    $which clear
}

# Private Procedures

proc FrameToFront {} {
    global ds9
    global current
    global view
    global colorbar

    set current(colorbar) ${current(frame)}cb

    set colorbar(map) [$current(colorbar) get name]
    set colorbar(invert) [$current(colorbar) get invert]

    $current(frame) show
    if {$view(colorbar)} {
	$current(colorbar) show
    } else {
	$current(colorbar) hide
    }
    $ds9(canvas) raise $current(frame)
    $ds9(canvas) raise $current(colorbar)

    switch -- $ds9(display) {
	single -
	blink {
	    if {!$ds9(freeze)} {
		BindEventsFrame $current(frame)
		BindEventsColorbar $current(colorbar)
	    }
	}
	tile {$current(frame) highlite on}
    }

    if {$view(panner)} {
	$current(frame) panner on
    }

    UpdateGraphLayout $current(frame)
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

    ThemeMenu $mb.file
    $mb.file add command -label [msgcat::mc {Apply}] -command TileApplyDialog
    $mb.file add separator
    $mb.file add command -label [msgcat::mc {Close}] \
	-command TileDestroyDialog -accelerator "${ds9(ctrl)}W"

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

    bind $w <<Close>> TileDestroyDialog
}

proc TileDestroyDialog {} {
    global itile
    global dtile

    if {[winfo exists $itile(top)]} {
	destroy $itile(top)
	destroy $itile(mb)
	unset dtile
    }
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

    frame::YY_FLUSH_BUFFER
    frame::yy_scan_string [lrange $var $i end]
    frame::yyparse
    incr i [expr $frame::yycnt-1]
}

proc ProcessSendFrameCmd {proc id param {sock {}} {fn {}}} {
    global parse
    set parse(proc) $proc
    set parse(id) $id

    framesend::YY_FLUSH_BUFFER
    framesend::yy_scan_string $param
    framesend::yyparse
}

proc FrameSendCmd {} {
    global parse
    global current
    $parse(proc) $parse(id) "[string range $current(frame) 5 end]\n"
}

proc FrameSendCmdGet {which} {
    global parse
    global ds9

    set rr {}
    foreach ff $ds9($which) {
	append rr "[string range $ff 5 end] "
    }
    $parse(proc) $parse(id) "$rr\n"
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

proc ProcessSendSingleCmd {proc id param {sock {}} {fn {}}} {
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

    tile::YY_FLUSH_BUFFER
    tile::yy_scan_string [lrange $var $i end]
    tile::yyparse
    incr i [expr $tile::yycnt-1]
}

proc ProcessSendTileCmd {proc id param {sock {}} {fn {}}} {
    global parse
    set parse(proc) $proc
    set parse(id) $id

    tilesend::YY_FLUSH_BUFFER
    tilesend::yy_scan_string $param
    tilesend::yyparse
}

proc TileSendCmd {} {
    global parse
    global current
    
    if {$current(display)=="tile"} {
	$parse(proc) $parse(id) "yes\n"
    } else {
	$parse(proc) $parse(id) "no\n"
    }
}

proc ProcessBlinkCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    blink::YY_FLUSH_BUFFER
    blink::yy_scan_string [lrange $var $i end]
    blink::yyparse
    incr i [expr $blink::yycnt-1]
}

proc ProcessSendBlinkCmd {proc id param {sock {}} {fn {}}} {
    global parse
    set parse(proc) $proc
    set parse(id) $id

    blinksend::YY_FLUSH_BUFFER
    blinksend::yy_scan_string $param
    blinksend::yyparse
}

proc BlinkSendCmd {} {
    global parse
    global current
    
    if {$current(display)=="blink"} {
	$parse(proc) $parse(id) "yes\n"
    } else {
	$parse(proc) $parse(id) "no\n"
    }
}

proc BlinkSendCmdInterval {} {
    global parse
    global blink

    $parse(proc) $parse(id) "[expr $blink(interval)/1000.]\n"
}

proc ProcessLockCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    # we need to be realized
    ProcessRealizeDS9

    lock::YY_FLUSH_BUFFER
    lock::yy_scan_string [lrange $var $i end]
    lock::yyparse
    incr i [expr $lock::yycnt-1]
}

proc ProcessSendLockCmd {proc id param {sock {}} {fn {}}} {
    global parse
    set parse(proc) $proc
    set parse(id) $id

    locksend::YY_FLUSH_BUFFER
    locksend::yy_scan_string $param
    locksend::yyparse
}

proc ProcessMatchCmd {varname iname} {
    upvar $varname var
    upvar $iname i
    global current

    # we need to be realized
    ProcessRealizeDS9

    match::YY_FLUSH_BUFFER
    match::yy_scan_string [lrange $var $i end]
    match::yyparse
    incr i [expr $match::yycnt-1]
}
