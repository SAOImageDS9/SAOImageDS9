#==============================================================================
# Contains the implementation of the scrollableframe widget.
#
# Structure of the module:
#   - Namespace initialization
#   - Private procedure creating the default bindings
#   - Public procedure creating a new scrollableframe widget
#   - Private configuration procedures
#   - Private procedures implementing the scrollableframe widget command
#   - Private procedures used in bindings
#
# Copyright (c) 2019-2023  Csaba Nemethi (E-mail: csaba.nemethi@t-online.de)
#==============================================================================

#
# Namespace initialization
# ========================
#

namespace eval scrollutil::sf {
    #
    # The array configSpecs is used to handle configuration options.  The names
    # of its elements are the configuration options for the Scrollableframe
    # class.  The value of an array element is either an alias name or a list
    # containing the database name and class as well as an indicator specifying
    # the widget to which the option applies: f stands for the outer frame and
    # w for the scrollableframe widget itself.
    #
    #	Command-Line Name	{Database Name		Database Class       W}
    #	-----------------------------------------------------------------------
    #
    variable configSpecs
    array set configSpecs {
	-background		{background		Background	     f}
	-bg			-background
	-borderwidth		{borderWidth		BorderWidth	     f}
	-bd			-borderwidth
	-cursor			{cursor			Cursor		     f}
	-contentheight		{contentHeight		ContentHeight	     w}
	-contentwidth		{contentWidth		ContentWidth	     w}
	-fitcontentheight	{fitContentHeight	FitContentHeight     w}
	-fitcontentwidth	{fitContentWidth	FitContentWidth      w}
	-height			{height			Height		     w}
	-highlightbackground	{highlightBackground	HighlightBackground  f}
	-highlightcolor		{highlightColor		HighlightColor	     f}
	-highlightthickness	{highlightThickness	HighlightThickness   f}
	-relief			{relief			Relief		     f}
	-takefocus		{takeFocus		TakeFocus	     f}
	-width			{width			Width		     w}
	-xscrollcommand		{xScrollCommand		ScrollCommand	     w}
	-xscrollincrement	{xScrollIncrement	ScrollIncrement	     w}
	-yscrollcommand		{yScrollCommand		ScrollCommand	     w}
	-yscrollincrement	{yScrollIncrement	ScrollIncrement	     w}
    }

    #
    # Extend the elements of the array configSpecs
    #
    proc extendConfigSpecs {} {
	variable ::scrollutil::usingTile
	variable configSpecs

	if {$usingTile} {
	    foreach opt {-background -bg -highlightbackground -highlightcolor
			 -highlightthickness} {
		unset configSpecs($opt)
	    }
	} else {
	    set helpFrm .__helpFrm
	    for {set n 2} {[winfo exists $helpFrm]} {incr n} {
		set helpFrm .__helpFrm$n
	    }
	    tk::frame $helpFrm
	    foreach opt {-background -highlightbackground -highlightcolor
			 -highlightthickness} {
		set configSet [$helpFrm configure $opt]
		lappend configSpecs($opt) [lindex $configSet 3]
	    }
	    destroy $helpFrm
	}

	lappend configSpecs(-borderwidth)	0
	lappend configSpecs(-cursor)		""
	lappend configSpecs(-contentheight)	0
	lappend configSpecs(-contentwidth)	0
	lappend configSpecs(-fitcontentheight)	0
	lappend configSpecs(-fitcontentwidth)	0
	lappend configSpecs(-height)		7c
	lappend configSpecs(-relief)		flat
	lappend configSpecs(-takefocus)		0
	lappend configSpecs(-width)		10c
	lappend configSpecs(-xscrollcommand)	""
	lappend configSpecs(-xscrollincrement)	0
	lappend configSpecs(-yscrollcommand)	""
	lappend configSpecs(-yscrollincrement)	0
    }
    extendConfigSpecs

    variable configOpts [lsort [array names configSpecs]]

    #
    # Use lists to facilitate the handling
    # of various options and corner values
    #
    variable cmdOpts	[list attrib autofillx autofilly autosize cget \
			 configure contentframe hasattrib scan see seerect \
			 unsetattrib xview yview]
    variable scanOpts	[list mark dragto]
    variable dimensions	[list w h wh]
    variable corners	[list nw ne sw se]

    #
    # Variables used in scan-related binding scripts:
    #
    variable btn1Pressed 0
    variable scanCursor
    switch [tk windowingsystem] {
	aqua	{ set scanCursor pointinghand }
	default	{ set scanCursor hand2 }
    }
}

#
# Private procedure creating the default bindings
# ===============================================
#

#------------------------------------------------------------------------------
# scrollutil::sf::createBindings
#
# Creates the default bindings for the binding tags Scrollableframe,
# ScrollableframeMf, and ScrollableframeCf.
#------------------------------------------------------------------------------
proc scrollutil::sf::createBindings {} {
    bind Scrollableframe <KeyPress> continue
    bind Scrollableframe <FocusIn> {
	if {[focus -lastfor %W] eq "%W"} {
            focus [%W contentframe]
        }
    }
    bind Scrollableframe <Map> {
	scrollutil::sf::updateHorizPlaceOpts %W
	scrollutil::sf::updateVertPlaceOpts  %W
    }
    bind Scrollableframe <Destroy> {
	namespace delete scrollutil::ns%W
	catch {rename %W ""}
    }

    foreach class {ScrollableframeMf ScrollableframeCf} isCf {0 1} {
	bind $class <Configure> \
	    [list scrollutil::sf::on${class}Configure %W %w %h]
	bind $class <Button-1> \
	    [list scrollutil::sf::onButton1  %W %x %y $isCf]
	bind $class <B1-Motion> \
	    [list scrollutil::sf::onB1Motion %W %x %y $isCf]
	bind $class <ButtonRelease-1> \
	    [list scrollutil::sf::onButtonRelease1 %W $isCf]
    }

    bind ScrollableframeCf <<NoManagedChild>> {
	scrollutil::sf::onNoManagedChild %W
    }
}

#
# Public procedure creating a new scrollableframe widget
# ======================================================
#

#------------------------------------------------------------------------------
# scrollutil::scrollableframe
#
# Creates a new scrollableframe widget whose name is specified as the first
# command-line argument, and configures it according to the options and their
# values given on the command line.  Returns the name of the newly created
# widget.
#------------------------------------------------------------------------------
proc scrollutil::scrollableframe args {
    variable usingTile
    variable sf::configSpecs
    variable sf::configOpts

    if {[llength $args] == 0} {
	mwutil::wrongNumArgs "scrollableframe pathName ?options?"
    }

    #
    # Create a frame of the class Scrollableframe
    #
    set win [lindex $args 0]
    if {[catch {
	if {$usingTile} {
	    ttk::frame $win -class Scrollableframe -height 0 -width 0 \
			    -padding 0
	} else {
	    tk::frame $win -class Scrollableframe -container 0 -height 0 \
			   -width 0
	    catch {$win configure -padx 0 -pady 0}
	}
    } result] != 0} {
	return -code error $result
    }

    #
    # Create a namespace within the current one to hold the data of the widget
    #
    namespace eval ns$win {
	#
	# The folowing array holds various data for this widget
	#
	variable data
	array set data {
	    autoFillX	0
	    autoFillY	0
	    xOffset	0
	    cfWidth	0
	    cfReqWidth	0
	    mfWidth	0
	    yOffset	0
	    cfHeight	0
	    cfReqHeight	0
	    mfHeight	0
	    scanX	0
	    scanY	0
	    scanXOffset	0
	    scanYOffset	0
	}

	#
	# The following array is used to hold
	# arbitrary attributes for this widget
	#
	variable attribs
    }

    #
    # Initialize some further components of data
    #
    upvar ::scrollutil::ns${win}::data data
    foreach opt $configOpts {
	set data($opt) [lindex $configSpecs($opt) 3]
    }
    set data(mf) $win.mf				;# the middle frame
    set data(cf) $data(mf).cf				;# the content frame

    #
    # Create the middle frame of the class ScrollableframeMf
    # and the content frame of the class ScrollableframeCf
    #
    foreach f [list $data(mf) $data(cf)] suffix [list Mf Cf] {
	if {$usingTile} {
	    ttk::frame $f -class Scrollableframe$suffix -borderwidth 0 \
			  -height 0 -padding 0 -relief flat -takefocus 0 \
			  -width 0
	} else {
	    tk::frame $f -class Scrollableframe$suffix -borderwidth 0 \
			 -container 0 -height 0 -highlightthickness 0 \
			 -relief flat -takefocus 0 -width 0
	    catch {$f configure -padx 0 -pady 0}
	}
    }
    pack $data(mf) -expand 1 -fill both
    place $data(cf) -x 0 -y 0

    #
    # Configure the widget according to the command-line
    # arguments and to the available database options
    #
    if {[catch {
	mwutil::configureWidget $win configSpecs scrollutil::sf::doConfig \
				scrollutil::sf::doCget [lrange $args 1 end] 1
    } result] != 0} {
	destroy $win
	return -code error $result
    }

    #
    # Move the original widget command into the namespace sf within the current
    # one and create an alias of the original name for a new widget procedure
    #
    rename ::$win sf::$win
    interp alias {} ::$win {} scrollutil::sf::scrollableframeWidgetCmd $win

    #
    # Register the scrollableframe widget for scrolling by the mouse wheel
    #
    if {$::tcl_platform(platform) eq "windows"} {
	if {$::tk_version >= 8.6 &&
	    [package vcompare $::tk_patchLevel "8.6b2"] >= 0} {
	    enableScrollingByWheel $win
	}
    } else {
	enableScrollingByWheel $win
    }

    return $win
}

#
# Private configuration procedures
# ================================
#

#------------------------------------------------------------------------------
# scrollutil::sf::doConfig
#
# Applies the value val of the configuration option opt to the scrollableframe
# widget win.
#------------------------------------------------------------------------------
proc scrollutil::sf::doConfig {win opt val} {
    variable configSpecs
    upvar ::scrollutil::ns${win}::data data

    #
    # Apply the value to the widget corresponding to the given option
    #
    switch [lindex $configSpecs($opt) 2] {
	f {
	    #
	    # Apply the value to the outer frame and save the
	    # properly formatted value of val in data($opt)
	    #
	    $win configure $opt $val
	    set data($opt) [$win cget $opt]

	    switch -- $opt {
		-background -
		-cursor {
		    $data(mf) configure $opt $val
		    $data(cf) configure $opt $val
		}
	    }
	}

	w {
	    switch -- $opt {
		-contentheight {
		    set data($opt) [winfo pixels $win $val]
		    updateVertPlaceOpts $win
		}
		-contentwidth {
		    set data($opt) [winfo pixels $win $val]
		    updateHorizPlaceOpts $win
		}
		-fitcontentheight {
		    set data($opt) [expr {$val ? 1 : 0}]
		    updateVertPlaceOpts $win
		}
		-fitcontentwidth {
		    set data($opt) [expr {$val ? 1 : 0}]
		    updateHorizPlaceOpts $win
		}
		-height -
		-width {
		    set data($opt) [winfo pixels $win $val]
		    $data(mf) configure $opt $val
		}
		-xscrollcommand -
		-yscrollcommand {
		    set data($opt) $val
		}
		-xscrollincrement -
		-yscrollincrement {
		    set data($opt) [winfo pixels $win $val]
		}
	    }
	}
    }
}

#------------------------------------------------------------------------------
# scrollutil::sf::doCget
#
# Returns the value of the configuration option opt for the scrollableframe
# widget win.
#------------------------------------------------------------------------------
proc scrollutil::sf::doCget {win opt} {
    upvar ::scrollutil::ns${win}::data data
    return $data($opt)
}

#------------------------------------------------------------------------------
# scrollutil::sf::updateHorizPlaceOpts
#------------------------------------------------------------------------------
proc scrollutil::sf::updateHorizPlaceOpts win {
    upvar ::scrollutil::ns${win}::data data
    set cf $data(cf)

    if {$data(-fitcontentwidth)} {
	#
	# For an improved user experience delay the use
	# of "-relwidth 1" until the widget gets mapped
	#
	if {[winfo ismapped $win]} {
	    place configure $cf -relwidth 1  -width ""
	} else {
	    place configure $cf -relwidth "" -width ""
	}
    } elseif {$data(-contentwidth) > 0} {
	place configure $cf -relwidth "" -width $data(-contentwidth)
    } else {
	place configure $cf -relwidth "" -width ""
    }
}

#------------------------------------------------------------------------------
# scrollutil::sf::updateVertPlaceOpts
#------------------------------------------------------------------------------
proc scrollutil::sf::updateVertPlaceOpts win {
    upvar ::scrollutil::ns${win}::data data
    set cf $data(cf)

    if {$data(-fitcontentheight)} {
	#
	# For an improved user experience delay the use
	# of "-relheight 1" until the widget gets mapped
	#
	if {[winfo ismapped $win]} {
	    place configure $cf -relheight 1  -height ""
	} else {
	    place configure $cf -relheight "" -height ""
	}
    } elseif {$data(-contentheight) > 0} {
	place configure $cf -relheight "" -height $data(-contentheight)
    } else {
	place configure $cf -relheight "" -height ""
    }
}

#
# Private procedures implementing the scrollableframe widget command
# ==================================================================
#

#------------------------------------------------------------------------------
# scrollutil::sf::scrollableframeWidgetCmd
#
# Processes the Tcl command corresponding to a scrollableframe widget.
#------------------------------------------------------------------------------
proc scrollutil::sf::scrollableframeWidgetCmd {win args} {
    set argCount [llength $args]
    if {$argCount == 0} {
	mwutil::wrongNumArgs "$win option ?arg arg ...?"
    }

    variable cmdOpts
    set cmd [mwutil::fullOpt "option" [lindex $args 0] $cmdOpts]
    set argList [lrange $args 1 end]

    switch $cmd {
	attrib {
	    return [::scrollutil::attribSubCmd $win "widget" $argList]
	}

	autofillx { return [autofillxSubCmd $win $argList] }

	autofilly { return [autofillySubCmd $win $argList] }

	autosize  { return [autosizeSubCmd  $win $argList] }

	cget {
	    if {$argCount != 2} {
		mwutil::wrongNumArgs "$win $cmd option"
	    }

	    #
	    # Return the value of the specified configuration option
	    #
	    upvar ::scrollutil::ns${win}::data data
	    variable configSpecs
	    set opt [mwutil::fullConfigOpt [lindex $args 1] configSpecs]
	    return $data($opt)
	}

	configure {
	    variable configSpecs
	    return [mwutil::configureSubCmd $win configSpecs \
		    scrollutil::sf::doConfig scrollutil::sf::doCget $argList]
	}

	contentframe {
	    if {$argCount != 1} {
		mwutil::wrongNumArgs "$win $cmd"
	    }

	    upvar ::scrollutil::ns${win}::data data
	    return $data(cf)
	}

	hasattrib -
	unsetattrib {
	    if {$argCount != 2} {
		mwutil::wrongNumArgs "$win $cmd name"
	    }

	    return [::scrollutil::${cmd}SubCmd $win "widget" [lindex $args 1]]
	}

	scan	{ return [scanSubCmd    $win $argList] }

	see	{ return [seeSubCmd     $win $argList] }

	seerect	{ return [seerectSubCmd $win $argList] }

	xview	{ return [xviewSubCmd   $win $argList] }

	yview	{ return [yviewSubCmd   $win $argList] }
    }
}

#------------------------------------------------------------------------------
# scrollutil::sf::autofillxSubCmd
#
# Processes the scrollableframe autofillx subcommmand.
#------------------------------------------------------------------------------
proc scrollutil::sf::autofillxSubCmd {win argList} {
    set argCount [llength $argList]
    if {$argCount > 1} {
	mwutil::wrongNumArgs "$win autofillx ?boolean?"
    }

    upvar ::scrollutil::ns${win}::data data
    if {$argCount == 0} {
	return $data(autoFillX)
    } else {
	set flag [expr {[lindex $argList 0] ? 1 : 0}]
	set data(autoFillX) $flag

	if {$flag} {
	    set cfReqWidth [winfo reqwidth $data(cf)]
	    set mfWidth [winfo width $data(mf)]
	    set data(cfReqWidth) $cfReqWidth
	    set data(mfWidth) $mfWidth
	    doConfig $win -fitcontentwidth [expr {$cfReqWidth < $mfWidth}]
	}

	return ""
    }
}

#------------------------------------------------------------------------------
# scrollutil::sf::autofillySubCmd
#
# Processes the scrollableframe autofilly subcommmand.
#------------------------------------------------------------------------------
proc scrollutil::sf::autofillySubCmd {win argList} {
    set argCount [llength $argList]
    if {$argCount > 1} {
	mwutil::wrongNumArgs "$win autofilly ?boolean?"
    }

    upvar ::scrollutil::ns${win}::data data
    if {$argCount == 0} {
	return $data(autoFillY)
    } else {
	set flag [expr {[lindex $argList 0] ? 1 : 0}]
	set data(autoFillY) $flag
	if {$flag} {
	    set cfReqHeight [winfo reqheight $data(cf)]
	    set mfHeight [winfo height $data(mf)]
	    set data(cfReqHeight) $cfReqHeight
	    set data(mfHeight) $mfHeight
	    doConfig $win -fitcontentheight [expr {$cfReqHeight < $mfHeight}]
	}

	return ""
    }
}

#------------------------------------------------------------------------------
# scrollutil::sf::autosizeSubCmd
#
# Processes the scrollableframe autosize subcommmand.
#------------------------------------------------------------------------------
proc scrollutil::sf::autosizeSubCmd {win argList} {
    set argCount [llength $argList]
    if {$argCount > 1} {
	mwutil::wrongNumArgs "$win autosize ?w|h|wh?"
    }

    #
    # Parse the optional argument
    #
    set dimBits(width)  0
    set dimBits(height) 0
    if {$argCount == 1} {
	variable dimensions
	switch [mwutil::fullOpt "dimensions" [lindex $argList 0] $dimensions] {
	    w  { set dimBits(width)  1 }
	    h  { set dimBits(height) 1 }
	    wh { set dimBits(width)  1; set dimBits(height) 1 }
	}
    }

    upvar ::scrollutil::ns${win}::data data
    if {$data(-fitcontentwidth)} {
	set dimBits(width)  1
    }
    if {$data(-fitcontentheight)} {
	set dimBits(height) 1
    }

    if {$dimBits(width) || $dimBits(height)} {
	set dimList {}
	if {$dimBits(width)} {
	    lappend dimList width
	}
	if {$dimBits(height)} {
	    lappend dimList height
	}

	after 100 [list scrollutil::sf::doAutosize $win $dimList]
    }

    return ""
}

#------------------------------------------------------------------------------
# scrollutil::sf::scanSubCmd
#
# Processes the scrollableframe scan subcommmand.
#------------------------------------------------------------------------------
proc scrollutil::sf::scanSubCmd {win argList} {
    set argCount [llength $argList]
    if {$argCount < 3} {
	mwutil::wrongNumArgs "$win scan mark|dragto x y ?dragGain?"
    }

    variable scanOpts
    set opt [mwutil::fullOpt "option" [lindex $argList 0] $scanOpts]
    ##nagelfar ignore
    set x [format "%d" [lindex $argList 1]]
    ##nagelfar ignore
    set y [format "%d" [lindex $argList 2]]

    upvar ::scrollutil::ns${win}::data data
    if {$opt eq "mark"} {
	if {$argCount != 3} {
	    mwutil::wrongNumArgs "$win scan mark x y"
	}

	set data(scanX) $x
	set data(scanY) $y
	set data(scanXOffset) $data(xOffset)
	set data(scanYOffset) $data(yOffset)
    } else {
	if {$argCount == 3} {
	    set gain 10
	} elseif {$argCount == 4} {
	    ##nagelfar ignore
	    set gain [format "%d" [lindex $argList 3]]
	} else {
	    mwutil::wrongNumArgs "$win scan dragto x y ?gain?"
	}

	set xOffset [expr {$data(scanXOffset) - $gain * ($x - $data(scanX))}]
	applyOffset $win x $xOffset 0

	set yOffset [expr {$data(scanYOffset) - $gain * ($y - $data(scanY))}]
	applyOffset $win y $yOffset 0
    }
}

#------------------------------------------------------------------------------
# scrollutil::sf::seeSubCmd
#
# Processes the scrollableframe see subcommmand.
#------------------------------------------------------------------------------
proc scrollutil::sf::seeSubCmd {win argList} {
    set argCount [llength $argList]
    if {$argCount < 1 || $argCount > 2} {
	mwutil::wrongNumArgs "$win see widget ?nw|ne|sw|se?"
    }

    set w [lindex $argList 0]
    if {![winfo exists $w]} {
	return -code error "bad window path name \"$w\""
    }

    upvar ::scrollutil::ns${win}::data data
    set cf $data(cf)
    if {[string first $cf. $w] != 0} {
	return -code error \
	    "widget $w is not a descendant of the content frame of $win"
    }
    if {[winfo toplevel $w] ne [winfo toplevel $win]} {
	return -code error "widgets $w and $win have different toplevels"
    }
    if {[winfo manager $w] eq ""} {
	return -code error "widget $w is not managed by any geometry manager"
    }

    #
    # Get the coordinates of the top-left and
    # bottom-right corners of w relative to cf
    #
    set x1 [expr {[winfo rootx $w] - [winfo rootx $cf]}]
    set y1 [expr {[winfo rooty $w] - [winfo rooty $cf]}]
    set x2 [expr {$x1 + [winfo width  $w]}]
    set y2 [expr {$y1 + [winfo height $w]}]

    #
    # Parse the optional argument and invoke seerectSubCmd
    #
    if {$argCount == 1} {
	return [seerectSubCmd $win [list $x1 $y1 $x2 $y2]]
    } else {
	set corner [lindex $argList 1]
	return [seerectSubCmd $win [list $x1 $y1 $x2 $y2 $corner]]
    }
}

#------------------------------------------------------------------------------
# scrollutil::sf::seerectSubCmd
#
# Processes the scrollableframe seerect subcommmand.
#------------------------------------------------------------------------------
proc scrollutil::sf::seerectSubCmd {win argList} {
    set argCount [llength $argList]
    if {$argCount < 4 || $argCount > 5} {
	mwutil::wrongNumArgs "$win seerect x1 y1 x2 y2 ?nw|ne|sw|se?"
    }

    ##nagelfar ignore
    set x1 [format "%d" [lindex $argList 0]]
    ##nagelfar ignore
    set y1 [format "%d" [lindex $argList 1]]
    ##nagelfar ignore
    set x2 [format "%d" [lindex $argList 2]]
    ##nagelfar ignore
    set y2 [format "%d" [lindex $argList 3]]
    if {$x1 > $x2} {
	set tmp $x1; set x1 $x2; set x2 $temp
    }
    if {$y1 > $y2} {
	set tmp $y1; set y1 $y2; set y2 $temp
    }

    #
    # Parse the optional argument
    #
    if {$argCount == 4} {
	set xSide w
	set ySide n
    } else {
	variable corners
	set corner [mwutil::fullOpt "corner" [lindex $argList 4] $corners]
	set xSide [string range $corner 1 1]
	set ySide [string range $corner 0 0]
    }

    upvar ::scrollutil::ns${win}::data data

    set xOffset   $data(xOffset)
    set mfWidth   $data(mfWidth)
    set xScrlIncr $data(-xscrollincrement)
    set yOffset   $data(yOffset)
    set mfHeight  $data(mfHeight)
    set yScrlIncr $data(-yscrollincrement)

    #
    # Get the coordinates of the top-left and
    # bottom-right corners of mf relative to cf
    #
    set mfX1 $xOffset
    set mfY1 $yOffset
    set mfX2 [expr {$mfX1 + $mfWidth}]
    set mfY2 [expr {$mfY1 + $mfHeight}]

    #
    # Make the left or right edge of the rectangle visible in the window
    #
    switch $xSide {
	w {
	    if {$x2 > $mfX2} {
		incr mfX1 [expr {$x2 - $mfX2}]
		roundUp mfX1 $xScrlIncr
	    }
	    if {$x1 < $mfX1} {
		incr mfX1 [expr {$x1 - $mfX1}]
		roundDn mfX1 $xScrlIncr
	    }
	}
	e {
	    if {$x1 < $mfX1} {
		incr mfX1 [expr {$x1 - $mfX1}]
		roundDn mfX1 $xScrlIncr
		set mfX2 [expr {$mfX1 + $mfWidth}]
	    }
	    if {$x2 > $mfX2} {
		incr mfX1 [expr {$x2 - $mfX2}]
		roundUp mfX1 $xScrlIncr
	    }
	}
    }
    applyOffset $win x $mfX1 0

    #
    # Make the top or bottom edge of the rectangle visible in the window
    #
    switch $ySide {
	n {
	    if {$y2 > $mfY2} {
		incr mfY1 [expr {$y2 - $mfY2}]
		roundUp mfY1 $yScrlIncr
	    }
	    if {$y1 < $mfY1} {
		incr mfY1 [expr {$y1 - $mfY1}]
		roundDn mfY1 $yScrlIncr
	    }
	}
	s {
	    if {$y1 < $mfY1} {
		incr mfY1 [expr {$y1 - $mfY1}]
		roundDn mfY1 $yScrlIncr
		set mfY2 [expr {$mfY1 + $mfHeight}]
	    }
	    if {$y2 > $mfY2} {
		incr mfY1 [expr {$y2 - $mfY2}]
		roundUp mfY1 $yScrlIncr
	    }
	}
    }
    applyOffset $win y $mfY1 0

    return ""
}

#------------------------------------------------------------------------------
# scrollutil::sf::xviewSubCmd
#
# Processes the scrollableframe xview subcommmand.
#------------------------------------------------------------------------------
proc scrollutil::sf::xviewSubCmd {win argList} {
    upvar ::scrollutil::ns${win}::data data
    set xOffset $data(xOffset)
    set cfWidth $data(cfWidth)
    set mfWidth $data(mfWidth)

    switch [llength $argList] {
	0 {
	    #
	    # Command: $win xview
	    #
	    if {$cfWidth == 0} {
		return [list 0 1]
	    }
	    set first [expr {double($xOffset) / $cfWidth}]
	    set last  [expr {double($xOffset + $mfWidth) / $cfWidth}]
	    if {$last == 0.0 || $last > 1.0} {
		set last 1.0
	    }
	    return [list $first $last]
	}

	1 {
	    #
	    # Command: $win xview <units>
	    #
	    ##nagelfar ignore
	    set units [format "%d" [lindex $argList 0]]
	    set xScrlIncr $data(-xscrollincrement)
	    if {$xScrlIncr > 0} {
		set xOffset [expr {$units * $xScrlIncr}]
	    } else {
		set xOffset [expr {int($units * 0.1 * $mfWidth)}]
	    }
	    applyOffset $win x $xOffset 0
	    return ""
	}

	default {
	    #
	    # Command: $win xview moveto <fraction>
	    #	       $win xview scroll <number> units|pages
	    #
	    set argList [mwutil::getScrollInfo2 "$win xview" $argList]
	    if {[lindex $argList 0] eq "moveto"} {
		set number ""
		set fraction [lindex $argList 1]
		set xOffset [expr {int($fraction * $cfWidth + 0.5)}]
	    } else {
		set number [lindex $argList 1]
		if {[lindex $argList 2] eq "units"} {
		    set xScrlIncr $data(-xscrollincrement)
		    if {$xScrlIncr > 0} {
			set xOffset [expr {$xOffset + $number * $xScrlIncr}]
		    } else {
			set xOffset \
			    [expr {int($xOffset + $number * 0.1 * $mfWidth)}]
		    }
		} else {
		    set xOffset \
			[expr {int($xOffset + $number * 0.9 * $mfWidth)}]
		}
	    }
	    applyOffset $win x $xOffset [expr {$number == 0}]
	    return ""
	}
    }
}

#------------------------------------------------------------------------------
# scrollutil::sf::yviewSubCmd
#
# Processes the scrollableframe yview subcommmand.
#------------------------------------------------------------------------------
proc scrollutil::sf::yviewSubCmd {win argList} {
    upvar ::scrollutil::ns${win}::data data
    set yOffset  $data(yOffset)
    set cfHeight $data(cfHeight)
    set mfHeight $data(mfHeight)

    switch [llength $argList] {
	0 {
	    #
	    # Command: $win yview
	    #
	    if {$cfHeight == 0} {
		return [list 0 1]
	    }
	    set first [expr {double($yOffset) / $cfHeight}]
	    set last  [expr {double($yOffset + $mfHeight) / $cfHeight}]
	    if {$last == 0.0 || $last > 1.0} {
		set last 1.0
	    }
	    return [list $first $last]
	}

	1 {
	    #
	    # Command: $win yview <units>
	    #
	    ##nagelfar ignore
	    set units [format "%d" [lindex $argList 0]]
	    set yScrlIncr $data(-yscrollincrement)
	    if {$yScrlIncr > 0} {
		set yOffset [expr {$units * $yScrlIncr}]
	    } else {
		set yOffset [expr {int($units * 0.1 * $mfWidth)}]
	    }
	    applyOffset $win y $yOffset 0
	    return ""
	}

	default {
	    #
	    # Command: $win yview moveto <fraction>
	    #	       $win yview scroll <number> units|pages
	    #
	    set argList [mwutil::getScrollInfo2 "$win yview" $argList]
	    if {[lindex $argList 0] eq "moveto"} {
		set number ""
		set fraction [lindex $argList 1]
		set yOffset [expr {int($fraction * $cfHeight + 0.5)}]
	    } else {
		set number [lindex $argList 1]
		if {[lindex $argList 2] eq "units"} {
		    set yScrlIncr $data(-yscrollincrement)
		    if {$yScrlIncr > 0} {
			set yOffset [expr {$yOffset + $number * $yScrlIncr}]
		    } else {
			set yOffset \
			    [expr {int($yOffset + $number * 0.1 * $mfHeight)}]
		    }
		} else {
		    set yOffset \
			[expr {int($yOffset + $number * 0.9 * $mfHeight)}]
		}
	    }
	    applyOffset $win y $yOffset [expr {$number == 0}]
	    return ""
	}
    }
}

#------------------------------------------------------------------------------
# scrollutil::sf::doAutosize
#------------------------------------------------------------------------------
proc scrollutil::sf::doAutosize {win dimList} {
    #
    # This is an "after 100" callback; check whether the window exists
    #
    if {![array exists ::scrollutil::ns${win}::data] ||
	[winfo class $win] ne "Scrollableframe"} {
	return ""
    }

    upvar ::scrollutil::ns${win}::data data
    foreach dim $dimList {
	doConfig $win -$dim [winfo req$dim $data(cf)]
    }
}

#------------------------------------------------------------------------------
# scrollutil::sf::roundUp
#------------------------------------------------------------------------------
proc scrollutil::sf::roundUp {pixelsName scrlIncr} {
    upvar $pixelsName pixels
    if {$pixels < 0} {
	set pixels 0
    } elseif {$scrlIncr > 0} {
	set remainder [expr {$pixels % $scrlIncr}]
	if {$remainder != 0} {
	    incr pixels [expr {$scrlIncr - $remainder}]
	}
    }
}

#------------------------------------------------------------------------------
# scrollutil::sf::roundDn
#------------------------------------------------------------------------------
proc scrollutil::sf::roundDn {pixelsName scrlIncr} {
    upvar $pixelsName pixels
    if {$pixels < 0} {
	set pixels 0
    } elseif {$scrlIncr > 0} {
	incr pixels [expr {-($pixels % $scrlIncr)}]
    }
}

#------------------------------------------------------------------------------
# scrollutil::sf::roundUpOrDn
#------------------------------------------------------------------------------
proc scrollutil::sf::roundUpOrDn {pixelsName scrlIncr} {
    upvar $pixelsName pixels
    if {$pixels < 0} {
	set pixels 0
    } elseif {$scrlIncr > 0} {
	incr pixels [expr {$scrlIncr / 2}]
	incr pixels [expr {-($pixels % $scrlIncr)}]
    }
}

#------------------------------------------------------------------------------
# scrollutil::sf::applyOffset
#------------------------------------------------------------------------------
proc scrollutil::sf::applyOffset {win axis offset force} {
    upvar ::scrollutil::ns${win}::data data
    set scrlIncr $data(-${axis}scrollincrement)

    #
    # Round the offset up or down to the nearest
    # multiple of scrlIncr if the latter is > 0
    #
    roundUpOrDn offset $scrlIncr

    #
    # Adjust the offset if necessary
    #
    switch $axis {
	x { set maxOffset [expr {$data(cfWidth)  - $data(mfWidth)}] }
	y { set maxOffset [expr {$data(cfHeight) - $data(mfHeight)}] }
    }
    if {$maxOffset < 0} {
	set offset 0
    } elseif {$offset > $maxOffset} {
	set offset $maxOffset
	roundUp offset $scrlIncr
    }

    if {$offset != $data(${axis}Offset) || $force} {
	#
	# Save the offset, update the -(x|y) place option, and invoke the
	# command specified as the value of the -(x|y)scrollcommand opton
	#
	set data(${axis}Offset) $offset
	place configure $data(cf) -$axis -$offset
	if {$data(-${axis}scrollcommand) ne ""} {
	    eval $data(-${axis}scrollcommand) [${axis}viewSubCmd $win {}]
	}
    }
}

#
# Private procedures used in bindings
# ===================================
#

#------------------------------------------------------------------------------
# scrollutil::sf::onScrollableframeMfConfigure
#------------------------------------------------------------------------------
proc scrollutil::sf::onScrollableframeMfConfigure {mf mfWidth mfHeight} {
    set win [winfo parent $mf]
    upvar ::scrollutil::ns${win}::data data

    if {$mfWidth != $data(mfWidth)} {
	set data(mfWidth) $mfWidth

	if {$data(autoFillX)} {
	    doConfig $win -fitcontentwidth \
		[expr {[winfo reqwidth $data(cf)] < $mfWidth}]
	}

	if {$data(-fitcontentwidth)} {
	    set data(cfWidth) $mfWidth
	}
	xviewSubCmd $win {scroll 0 units}
    }

    if {$mfHeight != $data(mfHeight)} {
	set data(mfHeight) $mfHeight

	if {$data(autoFillY)} {
	    doConfig $win -fitcontentheight \
		[expr {[winfo reqheight $data(cf)] < $mfHeight}]
	}

	if {$data(-fitcontentheight)} {
	    set data(cfHeight) $mfHeight
	}
	yviewSubCmd $win {scroll 0 units}
    }
}

#------------------------------------------------------------------------------
# scrollutil::sf::onScrollableframeCfConfigure
#------------------------------------------------------------------------------
proc scrollutil::sf::onScrollableframeCfConfigure {cf cfWidth cfHeight} {
    set win [winfo parent [winfo parent $cf]]
    upvar ::scrollutil::ns${win}::data data

    if {$data(autoFillX) &&
	[set cfReqWidth [winfo reqwidth $data(cf)]] != $data(cfReqWidth)} {
	set data(cfReqWidth) $cfReqWidth
	doConfig $win -fitcontentwidth \
	    [expr {$cfReqWidth < [winfo width $data(mf)]}]
    }
    if {$data(autoFillY) &&
	[set cfReqHeight [winfo reqheight $data(cf)]] != $data(cfReqHeight)} {
	set data(cfReqHeight) $cfReqHeight
	doConfig $win -fitcontentheight \
	    [expr {$cfReqHeight < [winfo height $data(mf)]}]
    }

    if {$cfWidth != $data(cfWidth)} {
	set data(cfWidth) $cfWidth
	xviewSubCmd $win {scroll 0 units}
    }
    if {$cfHeight != $data(cfHeight)} {
	set data(cfHeight) $cfHeight
	yviewSubCmd $win {scroll 0 units}
    }
}

#------------------------------------------------------------------------------
# scrollutil::sf::onButton1
#------------------------------------------------------------------------------
proc scrollutil::sf::onButton1 {w x y isCf} {
    if {$isCf} {
	set win [winfo parent [winfo parent $w]]
	upvar ::scrollutil::ns${win}::data data
	incr x -$data(xOffset)
	incr y -$data(yOffset)
    } else {
	set win [winfo parent $w]
    }

    ::$win scan mark $x $y

    variable btn1Pressed 1
    variable origCursor [::$win cget -cursor]
    variable scanCursor
    ::$win configure -cursor $scanCursor
}

#------------------------------------------------------------------------------
# scrollutil::sf::onB1Motion
#------------------------------------------------------------------------------
proc scrollutil::sf::onB1Motion {w x y isCf} {
    variable btn1Pressed
    if {!$btn1Pressed} {
	return ""
    }

    if {$isCf} {
	set win [winfo parent [winfo parent $w]]
	upvar ::scrollutil::ns${win}::data data
	incr x -$data(xOffset)
	incr y -$data(yOffset)
    } else {
	set win [winfo parent $w]
    }

    ::$win scan dragto $x $y
}

#------------------------------------------------------------------------------
# scrollutil::sf::onButtonRelease1
#------------------------------------------------------------------------------
proc scrollutil::sf::onButtonRelease1 {w isCf} {
    variable btn1Pressed
    if {!$btn1Pressed} {
	return ""
    }

    set btn1Pressed 0

    if {$isCf} {
	set win [winfo parent [winfo parent $w]]
    } else {
	set win [winfo parent $w]
    }
    variable origCursor
    ::$win configure -cursor $origCursor
}

#------------------------------------------------------------------------------
# scrollutil::sf::onNoManagedChild
#------------------------------------------------------------------------------
proc scrollutil::sf::onNoManagedChild cf {
    set win [winfo parent [winfo parent $cf]]
    upvar ::scrollutil::ns${win}::data data

    if {!$data(-fitcontentwidth) && $data(-contentwidth) <= 0} {
	$cf configure -width 1
	$cf configure -width $data(-contentwidth)
    }

    if {!$data(-fitcontentheight) && $data(-contentheight) <= 0} {
	$cf configure -height 1
	$cf configure -height $data(-contentheight)
    }
}
