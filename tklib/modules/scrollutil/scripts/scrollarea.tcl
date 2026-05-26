#==============================================================================
# Contains the implementation of the scrollarea widget.
#
# Structure of the module:
#   - Namespace initialization
#   - Private procedure creating the default bindings
#   - Public procedures creating or querying a scrollarea widget
#   - Private configuration procedures
#   - Private procedures implementing the scrollarea widget command
#   - Private callback procedures
#   - Private procedures used in bindings
#   - Private utility procedures
#
# Copyright (c) 2019-2024  Csaba Nemethi (E-mail: csaba.nemethi@t-online.de)
#==============================================================================

#
# Namespace initialization
# ========================
#

namespace eval scrollutil {
    #
    # Get the windowing system ("x11", "win32", or "aqua")
    #
    variable winSys  [tk windowingsystem]
    variable onAqua  [expr {$winSys eq "aqua"}]
    variable onWin32 [expr {$winSys eq "win32"}]

    #
    # Get the display's current scaling percentage (100, 125, 150, 175, or 200)
    #
    variable scalingpct [scaleutil::scalingPercentage $winSys]

    #
    # Make the variable scalingpct read-only
    #
    trace add variable scalingpct {write unset} \
	[list scrollutil::restoreScalingpct $scalingpct]

    #
    # The following trace procedure is executed whenever the
    # variable scalingpct is written or unset.  It restores the
    # variable to its original value, given by the first argument.
    #
    proc restoreScalingpct {origVal varName index op} {
	variable scalingpct $origVal
	switch $op {
	    write {
		return -code error "the variable is read-only"
	    }
	    unset {
		trace add variable scalingpct {write unset} \
		    [list scrollutil::restoreScalingpct $origVal]
	    }
	}
    }

    variable newAquaSupport [expr {
	($::tk_version == 8.6 &&
	 [package vcompare $::tk_patchLevel "8.6.10"] >= 0) ||
	($::tk_version >= 8.7 &&
	 [package vcompare $::tk_patchLevel "8.7a3"] >= 0)}]

    variable svgSupported \
	[expr {$::tk_version >= 8.7 || [catch {package require tksvg}] == 0}]

    if {$svgSupported} {
	variable svgfmt \
	    [list svg -scale [expr {$::scaleutil::scalingPct / 100.0}]]
    }
}

namespace eval scrollutil::sa {
    #
    # The array configSpecs is used to handle configuration options.  The names
    # of its elements are the configuration options for the Scrollarea class.
    # The value of an array element is either an alias name or a list
    # containing the database name and class as well as an indicator specifying
    # the widget to which the option applies: f stands for the frame and w for
    # the scrollarea widget itself.
    #
    #	Command-Line Name	{Database Name		Database Class       W}
    #	-----------------------------------------------------------------------
    #
    variable configSpecs
    array set configSpecs {
	-autohidescrollbars	{autoHideScrollbars	AutoHideScrollbars   w}
	-background		{background		Background	     f}
	-bg			-background
	-borderwidth		{borderWidth		BorderWidth	     f}
	-bd			-borderwidth
	-cursor			{cursor			Cursor		     f}
	-highlightbackground	{highlightBackground	HighlightBackground  f}
	-highlightcolor		{highlightColor		HighlightColor	     f}
	-highlightthickness	{highlightThickness	HighlightThickness   f}
	-lockinterval		{lockInterval		LockInterval	     w}
	-relief			{relief			Relief		     f}
	-respectheader		{respectHeader		RespectHeader	     w}
	-respecttitlecolumns	{respectTitleColumns	RespectTitleColumns  w}
	-setfocus		{setFocus		SetFocus	     w}
	-takefocus		{takeFocus		TakeFocus	     f}
	-xscrollbarmode		{xScrollbarMode		ScrollbarMode	     w}
	-yscrollbarmode		{yScrollbarMode		ScrollbarMode	     w}
    }

    #
    # Extend the elements of the array configSpecs
    #
    proc extendConfigSpecs {} {
	variable ::scrollutil::usingTile
	variable ::scrollutil::onWin32
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

	lappend configSpecs(-autohidescrollbars)	0
	lappend configSpecs(-borderwidth)		1
	lappend configSpecs(-cursor)			""
	lappend configSpecs(-lockinterval)		1
	lappend configSpecs(-relief)			sunken
	lappend configSpecs(-respectheader)		[expr {!$onWin32}]
	lappend configSpecs(-respecttitlecolumns)	1
	lappend configSpecs(-setfocus)			0
	lappend configSpecs(-takefocus)			0
	lappend configSpecs(-xscrollbarmode)		dynamic
	lappend configSpecs(-yscrollbarmode)		dynamic
    }
    extendConfigSpecs

    variable configOpts [lsort [array names configSpecs]]

    #
    # Use lists to facilitate the handling of
    # the command options and scrollbar modes
    #
    variable cmdOpts        [list attrib cget configure hasattrib setwidget \
			     unsetattrib widget]
    variable scrollbarModes [list static dynamic none]

    variable newSetFocusPolicy [expr {
	($::tk_version == 8.6 &&
	 [package vcompare $::tk_patchLevel "8.6.11"] >= 0) ||
	($::tk_version >= 8.7 &&
	 [package vcompare $::tk_patchLevel "8.7a4"] >= 0)}]
}

#
# Private procedure creating the default bindings
# ===============================================
#

#------------------------------------------------------------------------------
# scrollutil::sa::createBindings
#
# Creates the default bindings for the binding tags Scrollarea, ScrollareaTop,
# ScrollareaScrollbar, DynamicHScrollbar, and WidgetOfScrollarea.
#------------------------------------------------------------------------------
proc scrollutil::sa::createBindings {} {
    bind Scrollarea <KeyPress> continue
    bind Scrollarea <FocusIn> {
	if {[focus -lastfor %W] eq "%W"} {
            focus [%W widget]
        }
    }
    bind Scrollarea <Configure>	{
	scrollutil::sa::onScrollareaConfigure %W %w %h
    }
    bind Scrollarea <Enter>	 { scrollutil::sa::onScrollareaEnter %W }
    bind Scrollarea <Leave>	 { scrollutil::sa::onScrollareaLeave %W }
    bind Scrollarea <Destroy> {
	namespace delete scrollutil::ns%W
	catch {rename %W ""}
    }

    bind ScrollareaTop <Configure> {
	after 100 [list set scrollutil::sa::topWidthArr(%W) %w]
    }
    bind ScrollareaTop <FocusIn> {
	after 100 [list scrollutil::sa::onToplevelFocusIn %W]
    }
    bind ScrollareaTop <FocusOut> {
	after 100 [list scrollutil::sa::onToplevelFocusOut %W]
    }

    bind ScrollareaScrollbar <Button-1> {
	scrollutil::sa::onScrollbarClicked %W
    }
    bind ScrollareaScrollbar <Button-2> {
	scrollutil::sa::onScrollbarClicked %W
    }

    bind DynamicHScrollbar <Map> {
	scrollutil::sa::onDynamicHScrollbarMap %W
    }
    bind DynamicHScrollbar <Unmap> {
	scrollutil::sa::onDynamicHScrollbarUnmap %W
    }

    bind WidgetOfScrollarea <Map> {
	scrollutil::sa::onWidgetOfScrollareaMap %W
    }
    bind WidgetOfScrollarea <Destroy> {
	scrollutil::sa::onWidgetOfScrollareaDestroy %W
    }
}

#
# Public procedures creating or querying a scrollarea widget
# ==========================================================
#

#------------------------------------------------------------------------------
# scrollutil::scrollarea
#
# Creates a new scrollarea widget whose name is specified as the first command-
# line argument, and configures it according to the options and their values
# given on the command line.  Returns the name of the newly created widget.
#------------------------------------------------------------------------------
proc scrollutil::scrollarea args {
    variable usingTile
    variable onAqua
    variable sa::configSpecs
    variable sa::configOpts

    if {[llength $args] == 0} {
	mwutil::wrongNumArgs "scrollarea pathName ?options?"
    }

    #
    # Create a frame of the class Scrollarea
    #
    set win [lindex $args 0]
    if {[catch {
	if {$usingTile} {
	    ttk::frame $win -class Scrollarea -padding 0
	} else {
	    tk::frame $win -class Scrollarea -container 0
	    catch {$win configure -padx 0 -pady 0}
	}
	$win configure -height 0 -width 0
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
	    height	 1
	    width	 1
	    hsbManaged	 0
	    vsbManaged	 0
	    hsbLocked	 0
	    vsbLocked	 0
	    hsbLockTime	 0
	    vsbLockTime	 0
	    sbObscured	 0
	    widget	 ""
	    cf-ne	 ""
	    cf-sw	 ""
	    cf-ne_height 1
	    cf-sw_width  1
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

    #
    # Create two scrollbars as children of the frame
    #
    set hsb $win.hsb
    set vsb $win.vsb
    variable newAquaSupport
    if {$usingTile && (!$onAqua || $newAquaSupport)} {
	ttk::scrollbar $hsb -orient horizontal
	ttk::scrollbar $vsb -orient vertical

	foreach w [list $hsb.f $vsb.f] {
	    ttk::frame $w
	}
    } else {
	tk::scrollbar $hsb -orient horizontal -highlightthickness 0
	tk::scrollbar $vsb -orient vertical   -highlightthickness 0

	foreach w [list $hsb.f $vsb.f] {
	    tk::frame $w -container 0 -highlightthickness 0
	    catch {$w configure -padx 0 -pady 0}
	}
    }
    foreach sb [list $hsb $vsb] {
	$sb configure -takefocus 0
	$sb.f configure -borderwidth 0 -height 0 -relief flat -takefocus 0 \
			-width 0
	bindtags $sb [linsert [bindtags $sb] 1 ScrollareaScrollbar]
    }

    #
    # Make sure that the scrollbars won't use the old command syntax
    #
    $hsb set 0 1
    $vsb set 0 1

    grid rowconfigure    $win 1 -weight 1
    grid columnconfigure $win 1 -weight 1

    #
    # Configure the widget according to the command-line
    # arguments and to the available database options
    #
    if {[catch {
	mwutil::configureWidget $win configSpecs scrollutil::sa::doConfig \
				scrollutil::sa::doCget [lrange $args 1 end] 1
    } result] != 0} {
	destroy $win
	return -code error $result
    }

    #
    # Move the original widget command into the namespace sa within the current
    # one and create an alias of the original name for a new widget procedure
    #
    rename ::$win sa::$win
    interp alias {} ::$win {} scrollutil::sa::scrollareaWidgetCmd $win

    variable sa::topWidthArr
    set top [winfo toplevel $win]
    set topWidthArr($top) [winfo width $top]

    set tagList [bindtags $top]
    if {[lsearch -exact $tagList "ScrollareaTop"] < 0} {
	bindtags $top [linsert $tagList 1 ScrollareaTop]
    }

    return $win
}

#------------------------------------------------------------------------------
# scrollutil::getscrollarea
#
# Queries the scrollarea into which a given widget is embedded via the
# scrollarea's setwidget subcommand.
#------------------------------------------------------------------------------
proc scrollutil::getscrollarea widget {
    variable sa::scrollareaArr
    if {[info exists scrollareaArr($widget)]} {
        set win $scrollareaArr($widget)
        if {[winfo exists $win] && [winfo class $win] eq "Scrollarea"} {
            return $win
        }
    }

    return ""
}

#
# Private configuration procedures
# ================================
#

#------------------------------------------------------------------------------
# scrollutil::sa::doConfig
#
# Applies the value val of the configuration option opt to the scrollarea
# widget win.
#------------------------------------------------------------------------------
proc scrollutil::sa::doConfig {win opt val} {
    variable configSpecs
    upvar ::scrollutil::ns${win}::data data

    #
    # Apply the value to the widget corresponding to the given option
    #
    switch [lindex $configSpecs($opt) 2] {
	f {
	    #
	    # Apply the value to the frame and save the
	    # properly formatted value of val in data($opt)
	    #
	    $win configure $opt $val
	    set data($opt) [$win cget $opt]

	    switch -- $opt {
		-background {
		    $win.hsb.f configure $opt $val
		    $win.vsb.f configure $opt $val
		}
		-borderwidth -
		-relief {
		    if {[winfo exists $data(widget)] &&
			[winfo pixels $win $data(-borderwidth)] > 0 &&
			$data(-relief) ne "flat"} {
			catch {::$data(widget) configure -borderwidth 0}
		    }
		}
	    }
	}

	w {
	    switch -- $opt {
		-autohidescrollbars {
		    set data($opt) [expr {$val ? 1 : 0}]

		    if {$data($opt)} {
			if {[mwutil::hasFocus [winfo toplevel $win]] &&
			    [mwutil::containsPointer $win]} {
			    unobscureScrollbars $win
			} else {
			    obscureScrollbars $win
			}
		    } else {
			unobscureScrollbars $win
		    }
		}
		-lockinterval {
		    ##nagelfar ignore
		    set val [format "%d" $val]	;# integer check with error msg
		    if {$val < 0} {
			set val 0
		    }
		    set data($opt) $val
		}
		-respectheader {
		    set data($opt) [expr {$val ? 1 : 0}]

		    if {$data(vsbManaged)} {
			showVScrollbar $win 1
		    }
		}
		-respecttitlecolumns {
		    set data($opt) [expr {$val ? 1 : 0}]

		    if {$data(hsbManaged)} {
			showHScrollbar $win 1
		    }
		}
		-setfocus {
		    set data($opt) [expr {$val ? 1 : 0}]
		}
		-xscrollbarmode {
		    variable scrollbarModes
		    set val \
			[mwutil::fullOpt "scrollbar mode" $val $scrollbarModes]
		    if {[winfo exists $data(widget)]} {
			if {$val eq "none"} {
			    ::$data(widget) configure -xscrollcommand ""
			    $win.hsb configure -command ""
			} else {
			    if {![mwutil::isScrollable $data(widget) x]} {
				return -code error "widget $data(widget) fails\
				    to support horizontal scrolling"
			    }

			    if {$val ne $data($opt)} {
				::$data(widget) configure -xscrollcommand \
				    [list scrollutil::sa::setHScrollbar $win]
				$win.hsb configure -command \
				    [list $data(widget) xview]
			    }
			}
		    }
		    set data($opt) $val

		    switch $val {
			static	{ showHScrollbar $win }
			dynamic	{
			    eval setHScrollbar [list $win] [$win.hsb get]
			}
			none	{ hideHScrollbar $win }
		    }
		}
		-yscrollbarmode {
		    variable scrollbarModes
		    set val \
			[mwutil::fullOpt "scrollbar mode" $val $scrollbarModes]
		    if {[winfo exists $data(widget)]} {
			if {$val eq "none"} {
			    ::$data(widget) configure -yscrollcommand ""
			    $win.vsb configure -command ""
			} else {
			    if {![mwutil::isScrollable $data(widget) y]} {
				return -code error "widget $data(widget) fails\
				    to support vertical scrolling"
			    }

			    if {$val ne $data($opt)} {
				::$data(widget) configure -yscrollcommand \
				    [list scrollutil::sa::setVScrollbar $win]
				$win.vsb configure -command \
				    [list $data(widget) yview]
			    }
			}
		    }
		    set data($opt) $val

		    switch $val {
			static	{ showVScrollbar $win }
			dynamic	{
			    eval setVScrollbar [list $win] [$win.vsb get]
			}
			none	{ hideVScrollbar $win }
		    }
		}
	    }
	}
    }
}

#------------------------------------------------------------------------------
# scrollutil::sa::doCget
#
# Returns the value of the configuration option opt for the scrollarea widget
# win.
#------------------------------------------------------------------------------
proc scrollutil::sa::doCget {win opt} {
    upvar ::scrollutil::ns${win}::data data
    return $data($opt)
}

#
# Private procedures implementing the scrollarea widget command
# =============================================================
#

#------------------------------------------------------------------------------
# scrollutil::sa::scrollareaWidgetCmd
#
# Processes the Tcl command corresponding to a scrollarea widget.
#------------------------------------------------------------------------------
proc scrollutil::sa::scrollareaWidgetCmd {win args} {
    set argCount [llength $args]
    if {$argCount == 0} {
	mwutil::wrongNumArgs "$win option ?arg arg ...?"
    }

    variable cmdOpts
    set cmd [mwutil::fullOpt "option" [lindex $args 0] $cmdOpts]

    switch $cmd {
	attrib {
	    return [::scrollutil::attribSubCmd $win "widget" \
		    [lrange $args 1 end]]
	}

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
		    scrollutil::sa::doConfig scrollutil::sa::doCget \
		    [lrange $args 1 end]]
	}

	hasattrib -
	unsetattrib {
	    if {$argCount != 2} {
		mwutil::wrongNumArgs "$win $cmd name"
	    }

	    return [::scrollutil::${cmd}SubCmd $win "widget" [lindex $args 1]]
	}

	setwidget {
	    if {$argCount != 2} {
		mwutil::wrongNumArgs "$win $cmd widget"
	    }

	    return [setwidgetSubCmd $win [lindex $args 1]]
	}

	widget {
	    if {$argCount != 1} {
		mwutil::wrongNumArgs "$win $cmd"
	    }

	    upvar ::scrollutil::ns${win}::data data
	    return $data(widget)
	}
    }
}

#------------------------------------------------------------------------------
# scrollutil::sa::setwidgetSubCmd
#
# Processes the scrollarea setwidget subcommmand.
#------------------------------------------------------------------------------
proc scrollutil::sa::setwidgetSubCmd {win widget} {
    variable scrollareaArr
    upvar ::scrollutil::ns${win}::data data

    if {[winfo exists $widget]} {
	set sa [::scrollutil::getscrollarea $widget]
	if {$sa ne "" && $sa ne $win} {
	    return -code error \
		"widget $widget already in another scrollarea $sa"
	}

	if {$data(-xscrollbarmode) ne "none" &&
	    ![mwutil::isScrollable $widget x]} {
	    return -code error \
		"widget $widget fails to support horizontal scrolling"
	}

	if {$data(-yscrollbarmode) ne "none" &&
	    ![mwutil::isScrollable $widget y]} {
	    return -code error \
		"widget $widget fails to support vertical scrolling"
	}
    } elseif {$widget ne ""} {
	return -code error "bad window path name \"$widget\""
    }

    set oldWidget $data(widget)
    if {$widget eq $oldWidget} {
	return $oldWidget
    }

    if {[winfo exists $oldWidget]} {
	grid forget $oldWidget
	if {[winfo class $oldWidget] eq "Tablelist" &&
	    [package vcompare $::tablelist::version "6.5"] >= 0} {
	    grid forget $data(cf-ne) $data(cf-sw)
	    bind $oldWidget <<TablelistHeaderHeightChanged>> ""
	    bind $oldWidget <<TablelistTitleColsWidthChanged>> ""
	}

	catch {::$oldWidget configure -xscrollcommand ""}
	catch {::$oldWidget configure -yscrollcommand ""}

	set tagList [bindtags $oldWidget]
	set idx [lsearch -exact $tagList "WidgetOfScrollarea"]
	bindtags $oldWidget [lreplace $tagList $idx $idx]

	if {[info exists scrollareaArr($oldWidget)]} {
	    unset scrollareaArr($oldWidget)
	}
    }

    setHScrollbar $win 0 1
    setVScrollbar $win 0 1

    $win.hsb configure -command ""
    $win.vsb configure -command ""

    array set data {
	cf-ne	     ""
	cf-sw	     ""
	cf-ne_height 1
	cf-sw_width  1
    }

    if {$widget eq ""} {
	set data(widget) ""
	return $oldWidget
    }

    grid $widget -in $win -row 0 -rowspan 2 -column 0 -columnspan 2 -sticky news
    raise $widget

    set tagList [bindtags $widget]
    if {[lsearch -exact $tagList "WidgetOfScrollarea"] < 0} {
	bindtags $widget [linsert $tagList 1 WidgetOfScrollarea]
    }

    set scrollareaArr($widget) $win

    catch {::$widget configure -highlightthickness 0}
    if {[winfo pixels $win $data(-borderwidth)] > 0 &&
	$data(-relief) ne "flat"} {
	catch {::$widget configure -borderwidth 0}
    }
    if {$data(-xscrollbarmode) ne "none"} {
	::$widget configure -xscrollcommand \
	    [list scrollutil::sa::setHScrollbar $win]
	$win.hsb configure -command [list $widget xview]
    }
    if {$data(-yscrollbarmode) ne "none"} {
	::$widget configure -yscrollcommand \
	    [list scrollutil::sa::setVScrollbar $win]
	$win.vsb configure -command [list $widget yview]
    }
    if {[winfo class $widget] eq "Tablelist" &&
	[package vcompare $::tablelist::version "6.5"] >= 0} {
	set data(cf-ne) [::$widget cornerpath -ne]
	set data(cf-sw) [::$widget cornerpath -sw]

	bind $widget <<TablelistHeaderHeightChanged>> {
	    scrollutil::sa::onHeaderHeightChanged %W
	}
	bind $widget <<TablelistTitleColsWidthChanged>> {
	    scrollutil::sa::onTitleColsWidthChanged %W
	}
	onHeaderHeightChanged $widget
	onTitleColsWidthChanged $widget
    }

    set data(widget) $widget
    eval setHScrollbar [list $win] [$widget xview]
    eval setVScrollbar [list $win] [$widget yview]

    return $oldWidget
}

#
# Private callback procedures
# ===========================
#

#------------------------------------------------------------------------------
# scrollutil::sa::setHScrollbar
#
# Wrapper for the set subcommand of the Tcl command associated with the
# horizontal scrollbar of the scrollarea widget win.
#------------------------------------------------------------------------------
proc scrollutil::sa::setHScrollbar {win first last} {
    upvar ::scrollutil::ns${win}::data data
    $win.hsb set $first $last

    if {$data(sbObscured) && [mwutil::containsPointer $win]} {
	unobscureScrollbars $win
    }

    if {$data(-xscrollbarmode) eq "dynamic"} {
	if {$first == 0 && $last == 1} {
	    hideHScrollbar $win
	} elseif {[winfo width $data(widget)] > 1} {
	    showHScrollbar $win
	}
    }

    updateVScrollbar $win
}

#------------------------------------------------------------------------------
# scrollutil::sa::setVScrollbar
#
# Wrapper for the set subcommand of the Tcl command associated with the
# vertical scrollbar of the scrollarea widget win.
#------------------------------------------------------------------------------
proc scrollutil::sa::setVScrollbar {win first last} {
    upvar ::scrollutil::ns${win}::data data
    $win.vsb set $first $last

    if {$data(sbObscured) && [mwutil::containsPointer $win]} {
	unobscureScrollbars $win
    }

    if {$data(-yscrollbarmode) eq "dynamic"} {
	if {$first == 0 && $last == 1} {
	    hideVScrollbar $win
	} elseif {[winfo height $data(widget)] > 1} {
	    showVScrollbar $win
	}
    }

    updateHScrollbar $win
}

#
# Private procedures used in bindings
# ===================================
#

#------------------------------------------------------------------------------
# scrollutil::sa::onScrollareaConfigure
#------------------------------------------------------------------------------
proc scrollutil::sa::onScrollareaConfigure {win width height} {
    upvar ::scrollutil::ns${win}::data data

    if {$width != $data(width)} {
	set data(width) $width
	updateHScrollbar $win
	after 300 [list scrollutil::sa::updateHScrollbar $win]
    }

    if {$height != $data(height)} {
	set data(height) $height
	updateVScrollbar $win
	after 300 [list scrollutil::sa::updateVScrollbar $win]
    }
}

#------------------------------------------------------------------------------
# scrollutil::sa::onScrollareaEnter
#------------------------------------------------------------------------------
proc scrollutil::sa::onScrollareaEnter win {
    if {[mwutil::hasFocus [winfo toplevel $win]]} {
	unobscureScrollbars $win
    }
}

#------------------------------------------------------------------------------
# scrollutil::sa::onScrollareaLeave
#------------------------------------------------------------------------------
proc scrollutil::sa::onScrollareaLeave win {
    upvar ::scrollutil::ns${win}::data data
    if {$data(-autohidescrollbars)} {
	obscureScrollbars $win
    }
}

#------------------------------------------------------------------------------
# scrollutil::sa::onToplevelFocusIn
#------------------------------------------------------------------------------
proc scrollutil::sa::onToplevelFocusIn top {
    if {![winfo exists $top]} {
	return ""
    }

    #
    # Level-order traversal like in the Tk library procedue ::ttk::ThemeChanged
    #
    set lst1 [list $top]
    while {[llength $lst1] != 0} {
	set lst2 {}
	foreach w $lst1 {
	    if {[winfo class $w] eq "Scrollarea" &&
		[mwutil::containsPointer $w]} {
		unobscureScrollbars $w
	    }
	    foreach child [winfo children $w] {
		lappend lst2 $child
	    }
	}
	set lst1 $lst2
    }
}

#------------------------------------------------------------------------------
# scrollutil::sa::onToplevelFocusOut
#------------------------------------------------------------------------------
proc scrollutil::sa::onToplevelFocusOut top {
    if {![winfo exists $top]} {
	return ""
    }

    #
    # Level-order traversal like in the Tk library procedue ::ttk::ThemeChanged
    #
    set lst1 [list $top]
    while {[llength $lst1] != 0} {
	set lst2 {}
	foreach w $lst1 {
	    if {[winfo class $w] eq "Scrollarea" &&
		[::$w cget -autohidescrollbars]} {
		obscureScrollbars $w
	    }
	    foreach child [winfo children $w] {
		lappend lst2 $child
	    }
	}
	set lst1 $lst2
    }
}

#------------------------------------------------------------------------------
# scrollutil::sa::onScrollbarClicked
#------------------------------------------------------------------------------
proc scrollutil::sa::onScrollbarClicked sb {
    set win [winfo parent $sb]
    set widget [::$win widget]
    if {![::$win cget -setfocus] || ![winfo exists $widget]} {
	return ""
    }

    switch [winfo class $widget] {
	Text {
	    variable newSetFocusPolicy
	    if {$::scrollutil::onWin32 || $newSetFocusPolicy} {
		focus $widget
	    }
	}

	Ctext {
	    variable newSetFocusPolicy
	    if {$::scrollutil::onWin32 || $newSetFocusPolicy} {
		focus $widget.t
	    }
	}

	Treeview { focus $widget }

	default {
	    if {[catch {$widget instate disabled} result] == 0} {
		set isDisabled $result
	    } elseif {[catch {$widget cget -state} result] == 0} {
		set isDisabled [expr {$result eq "disabled"}]
	    } else {
		set isDisabled 0
	    }

	    if {!$isDisabled} {
		focus $widget
	    }
	}
    }
}

#------------------------------------------------------------------------------
# scrollutil::sa::onDynamicHScrollbarMap
#------------------------------------------------------------------------------
proc scrollutil::sa::onDynamicHScrollbarMap hsb {
    set top [winfo toplevel $hsb]
    if {![winfo ismapped $top]} {
	return ""
    }

    #
    # Make sure that showing the horizontal scrollbar by decreasing 
    # the toplevel window's width won't make the toplevel higher
    #
    set win [winfo parent $hsb]
    upvar ::scrollutil::ns${win}::data data
    variable topWidthArr
    if {[winfo reqheight $win] >= $data(height) &&
	([winfo width $top] < $topWidthArr($top) || [wrapsTextWidget $win])} {
	wm geometry $top [wm geometry $top]
    }
}

#------------------------------------------------------------------------------
# scrollutil::sa::onDynamicHScrollbarUnmap
#------------------------------------------------------------------------------
proc scrollutil::sa::onDynamicHScrollbarUnmap hsb {
    set top [winfo toplevel $hsb]
    if {![winfo ismapped $top]} {
	return ""
    }

    #
    # Make sure that hiding the horizontal scrollbar by increasing 
    # the toplevel window's width won't make the toplevel higher
    #
    set win [winfo parent $hsb]
    upvar ::scrollutil::ns${win}::data data
    variable topWidthArr
    if {[winfo reqheight $win] >= $data(height) &&
	[winfo width $top] > $topWidthArr($top) && ![wrapsTextWidget $win]} {
	wm geometry $top [wm geometry $top]
    }
}

#------------------------------------------------------------------------------
# scrollutil::sa::onWidgetOfScrollareaMap
#------------------------------------------------------------------------------
proc scrollutil::sa::onWidgetOfScrollareaMap widget {
    set win [::scrollutil::getscrollarea $widget]
    set tagList [bindtags $win.hsb]
    set idx [lsearch -exact $tagList "DynamicHScrollbar"]
    if {[::$win cget -xscrollbarmode] eq "dynamic"} {
	if {$idx < 0} {
	    set delay [expr {[wrapsTextWidget $win] ? 0 : 300}]
	    after $delay [list bindtags $win.hsb \
		[linsert $tagList 1 DynamicHScrollbar]]
	}
    } else {
	bindtags $win.hsb [lreplace $tagList $idx $idx]
    }
}

#------------------------------------------------------------------------------
# scrollutil::sa::onWidgetOfScrollareaDestroy
#------------------------------------------------------------------------------
proc scrollutil::sa::onWidgetOfScrollareaDestroy widget {
    set win [::scrollutil::getscrollarea $widget]
    if {$win ne ""} {
	::$win setwidget ""
	$win configure -width 1 -height 1
    }

    variable scrollareaArr
    if {[info exists scrollareaArr($widget)]} {
	unset scrollareaArr($widget)
    }
}

#------------------------------------------------------------------------------
# scrollutil::sa::onHeaderHeightChanged
#------------------------------------------------------------------------------
proc scrollutil::sa::onHeaderHeightChanged tbl {
    set win [::scrollutil::getscrollarea $tbl]
    upvar ::scrollutil::ns${win}::data data

    set newHeight [winfo reqheight $data(cf-ne)]
    set oldHeight $data(cf-ne_height)
    set data(cf-ne_height) $newHeight

    if {($oldHeight == 1 && $newHeight >  1 ||
	 $oldHeight >  1 && $newHeight == 1) && $data(vsbManaged)} {
	showVScrollbar $win 1
    }
}

#------------------------------------------------------------------------------
# scrollutil::sa::onTitleColsWidthChanged
#------------------------------------------------------------------------------
proc scrollutil::sa::onTitleColsWidthChanged tbl {
    set win [::scrollutil::getscrollarea $tbl]
    upvar ::scrollutil::ns${win}::data data

    set newWidth [winfo reqwidth $data(cf-sw)]
    set oldWidth $data(cf-sw_width)
    set data(cf-sw_width) $newWidth

    if {($oldWidth == 1 && $newWidth >  1 ||
	 $oldWidth >  1 && $newWidth == 1) && $data(hsbManaged)} {
	showHScrollbar $win 1
    }
}

#
# Private utility procedures
# ==========================
#

#------------------------------------------------------------------------------
# scrollutil::sa::showHScrollbar
#------------------------------------------------------------------------------
proc scrollutil::sa::showHScrollbar {win {redisplay 0}} {
    upvar ::scrollutil::ns${win}::data data
    set vsbLocked $data(vsbLocked)

    if {$::scrollutil::onAqua} {
	set time [clock milliseconds]
	if {$vsbLocked && $time - $data(vsbLockTime) >= $data(-lockinterval)} {
	    set vsbLocked 0
	}
    }

    if {($vsbLocked && $data(-xscrollbarmode) eq "dynamic") ||
	($data(hsbManaged) && !$redisplay)} {
	return ""
    }

    if {$data(-respecttitlecolumns) && $data(cf-sw_width) > 1} {
	grid $data(cf-sw) -in $win -row 2 -column 0		  -sticky ns
	grid $win.hsb		   -row 2 -column 1 -columnspan 1 -sticky ew
    } else {
	if {[winfo exists $data(cf-sw)]} {
	    grid forget $data(cf-sw)
	}
	grid $win.hsb		   -row 2 -column 0 -columnspan 2 -sticky ew
    }
    set data(hsbManaged) 1

    set data(hsbLocked) 1
    if {$::scrollutil::onAqua} {
	set data(hsbLockTime) $time
    }
    after $data(-lockinterval) [list scrollutil::sa::unlockHScrollbar $win]
}

#------------------------------------------------------------------------------
# scrollutil::sa::hideHScrollbar
#------------------------------------------------------------------------------
proc scrollutil::sa::hideHScrollbar win {
    upvar ::scrollutil::ns${win}::data data
    if {!$data(hsbManaged) || $data(hsbLocked)} {
	return ""
    }

    if {[winfo exists $data(cf-sw)]} {
	grid forget $data(cf-sw)
    }
    grid forget $win.hsb
    set data(hsbManaged) 0
}

#------------------------------------------------------------------------------
# scrollutil::sa::updateHScrollbar
#------------------------------------------------------------------------------
proc scrollutil::sa::updateHScrollbar win {
    if {![winfo exists $win] || [winfo class $win] ne "Scrollarea"} {
	return ""
    }

    upvar ::scrollutil::ns${win}::data data
    if {$data(-xscrollbarmode) ne "dynamic"} {
	return ""
    }

    #
    # Handle the case that the last showHScrollbar or hideHScrollbar
    # invocation returned prematurely because of the scrollbar lock
    #
    if {[winfo exists $data(widget)]} {
	foreach {first last} [$data(widget) xview] {}
	if {$first == 0 && $last == 1} {
	    hideHScrollbar $win
	} elseif {[winfo width $data(widget)] > 1} {
	    showHScrollbar $win
	}
    } else {
	hideHScrollbar $win
    }
}

#------------------------------------------------------------------------------
# scrollutil::sa::unlockHScrollbar
#------------------------------------------------------------------------------
proc scrollutil::sa::unlockHScrollbar win {
    if {[winfo exists $win] && [winfo class $win] eq "Scrollarea"} {
	upvar ::scrollutil::ns${win}::data data
	set data(hsbLocked) 0

	if {$data(-lockinterval) <= 1 && ![wrapsTextWidget $win]} {
	    updateHScrollbar $win
	}
    }
}

#------------------------------------------------------------------------------
# scrollutil::sa::showVScrollbar
#------------------------------------------------------------------------------
proc scrollutil::sa::showVScrollbar {win {redisplay 0}} {
    upvar ::scrollutil::ns${win}::data data
    set hsbLocked $data(hsbLocked)

    if {$::scrollutil::onAqua} {
	set time [clock milliseconds]
	if {$hsbLocked && $time - $data(hsbLockTime) >= $data(-lockinterval)} {
	    set hsbLocked 0
	}
    }

    if {($hsbLocked && $data(-yscrollbarmode) eq "dynamic") ||
	($data(vsbManaged) && !$redisplay)} {
	return ""
    }

    if {$data(-respectheader) && $data(cf-ne_height) > 1} {
	grid $data(cf-ne) -in $win -row 0	     -column 2 -sticky ew
	grid $win.vsb		   -row 1 -rowspan 1 -column 2 -sticky ns
    } else {
	if {[winfo exists $data(cf-ne)]} {
	    grid forget $data(cf-ne)
	}
	grid $win.vsb		   -row 0 -rowspan 2 -column 2 -sticky ns
    }
    set data(vsbManaged) 1

    set data(vsbLocked) 1
    if {$::scrollutil::onAqua} {
	set data(vsbLockTime) $time
    }
    after $data(-lockinterval) [list scrollutil::sa::unlockVScrollbar $win]
}

#------------------------------------------------------------------------------
# scrollutil::sa::hideVScrollbar
#------------------------------------------------------------------------------
proc scrollutil::sa::hideVScrollbar win {
    upvar ::scrollutil::ns${win}::data data
    if {!$data(vsbManaged) || $data(vsbLocked)} {
	return ""
    }

    if {[winfo exists $data(cf-ne)]} {
	grid forget $data(cf-ne)
    }
    grid forget $win.vsb
    set data(vsbManaged) 0
}

#------------------------------------------------------------------------------
# scrollutil::sa::updateVScrollbar
#------------------------------------------------------------------------------
proc scrollutil::sa::updateVScrollbar win {
    if {![winfo exists $win] || [winfo class $win] ne "Scrollarea"} {
	return ""
    }

    upvar ::scrollutil::ns${win}::data data
    if {$data(-yscrollbarmode) ne "dynamic"} {
	return ""
    }

    #
    # Handle the case that the last showVScrollbar or hideVScrollbar
    # invocation returned prematurely because of the scrollbar lock
    #
    if {[winfo exists $data(widget)]} {
	foreach {first last} [$data(widget) yview] {}
	if {$first == 0 && $last == 1} {
	    hideVScrollbar $win
	} elseif {[winfo height $data(widget)] > 1} {
	    showVScrollbar $win
	}
    } else {
	hideVScrollbar $win
    }
}

#------------------------------------------------------------------------------
# scrollutil::sa::unlockVScrollbar
#------------------------------------------------------------------------------
proc scrollutil::sa::unlockVScrollbar win {
    if {[winfo exists $win] && [winfo class $win] eq "Scrollarea"} {
	upvar ::scrollutil::ns${win}::data data
	set data(vsbLocked) 0

	if {$data(-lockinterval) <= 1} {
	    updateVScrollbar $win
	}
    }
}

#------------------------------------------------------------------------------
# scrollutil::sa::obscureScrollbars
#------------------------------------------------------------------------------
proc scrollutil::sa::obscureScrollbars win {
    upvar ::scrollutil::ns${win}::data data
    if {$data(sbObscured)} {
	return ""
    }

    set data(sbObscured) 1
    place $win.hsb.f -bordermode outside -relheight 1.0 -relwidth 1.0
    place $win.vsb.f -bordermode outside -relheight 1.0 -relwidth 1.0
}

#------------------------------------------------------------------------------
# scrollutil::sa::unobscureScrollbars
#------------------------------------------------------------------------------
proc scrollutil::sa::unobscureScrollbars win {
    upvar ::scrollutil::ns${win}::data data
    if {!$data(sbObscured)} {
	return ""
    }

    set data(sbObscured) 0
    place forget $win.hsb.f
    place forget $win.vsb.f
}

#------------------------------------------------------------------------------
# scrollutil::sa::wrapsTextWidget
#------------------------------------------------------------------------------
proc scrollutil::sa::wrapsTextWidget win {
    upvar ::scrollutil::ns${win}::data data
	set widget [::$win widget]
	set class [winfo class $widget]
	if {$class eq "Text" || $class eq "Ctext"} {
	    return 1
	} elseif {$class eq "Scrollsync"} {
	    foreach w [::$widget widgets] {
		set class [winfo class $w]
		if {($class eq "Text" || $class eq "Ctext") &&
		    ([lindex [grid info $w] 1] eq $widget ||
		     [lindex [pack info $w] 1] eq $widget)} {
		    return 1
		}
	    }
	}

	return 0
}
