#==============================================================================
# Contains the implementation of the scrollsync widget.
#
# Structure of the module:
#   - Namespace initialization
#   - Private procedure creating the default bindings
#   - Public procedures creating or querying a scrollsync widget
#   - Private configuration procedures
#   - Private procedures implementing the scrollsync widget command
#   - Private callback procedure
#   - Private procedures used in bindings
#   - Private utility procedures
#
# Copyright (c) 2019-2023  Csaba Nemethi (E-mail: csaba.nemethi@t-online.de)
#==============================================================================

#
# Namespace initialization
# ========================
#

namespace eval scrollutil::ss {
    #
    # The array configSpecs is used to handle configuration options.  The names
    # of its elements are the configuration options for the Scrollsync class.
    # The value of an array element is either an alias name or a list
    # containing the database name and class as well as an indicator specifying
    # the widget to which the option applies: f stands for the frame and w for
    # the scrollsync widget itself.
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
	-highlightbackground	{highlightBackground	HighlightBackground  f}
	-highlightcolor		{highlightColor		HighlightColor	     f}
	-highlightthickness	{highlightThickness	HighlightThickness   f}
	-relief			{relief			Relief		     f}
	-takefocus		{takeFocus		TakeFocus	     f}
	-xscrollcommand		{xScrollCommand		ScrollCommand	     w}
	-yscrollcommand		{yScrollCommand		ScrollCommand	     w}
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
	lappend configSpecs(-relief)		flat
	lappend configSpecs(-takefocus)		0
	lappend configSpecs(-xscrollcommand)	""
	lappend configSpecs(-yscrollcommand)	""
    }
    extendConfigSpecs

    variable configOpts [lsort [array names configSpecs]]

    #
    # Use a list to facilitate the handling of the command options
    #
    variable cmdOpts [list attrib cget configure hasattrib setwidgets \
		      unsetattrib widgets xview yview]
}

#
# Private procedure creating the default bindings
# ===============================================
#

#------------------------------------------------------------------------------
# scrollutil::ss::createBindings
#
# Creates the default bindings for the binding tags Scrollsync and
# WidgetOfScrollsync.
#------------------------------------------------------------------------------
proc scrollutil::ss::createBindings {} {
    bind Scrollsync <KeyPress> continue
    bind Scrollsync <FocusIn> {
	if {[focus -lastfor %W] eq "%W"} {
            focus [lindex [%W widgets] 0]
        }
    }
    bind Scrollsync <Configure> {
	after 50 [list scrollutil::ss::updateMasterWidgets %W]
    }
    bind Scrollsync <Destroy> {
	namespace delete scrollutil::ns%W
	catch {rename %W ""}
    }

    bind WidgetOfScrollsync <Destroy> {
	scrollutil::ss::onWidgetOfScrollsyncDestroy %W
    }
}

#
# Public procedures creating or querying a scrollsync widget
# ==========================================================
#

#------------------------------------------------------------------------------
# scrollutil::scrollsync
#
# Creates a new scrollsync widget whose name is specified as the first command-
# line argument, and configures it according to the options and their values
# given on the command line.  Returns the name of the newly created widget.
#------------------------------------------------------------------------------
proc scrollutil::scrollsync args {
    variable usingTile
    variable ss::configSpecs
    variable ss::configOpts

    if {[llength $args] == 0} {
	mwutil::wrongNumArgs "scrollsync pathName ?options?"
    }

    #
    # Create a frame of the class Scrollsync
    #
    set win [lindex $args 0]
    if {[catch {
	if {$usingTile} {
	    ttk::frame $win -class Scrollsync -padding 0
	} else {
	    tk::frame $win -class Scrollsync -container 0
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
	    xView		{-1 -1}
	    yView		{-1 -1}
	    xViewLocked		0
	    yViewLocked		0
	    widgetList		{}
	    xScrollableList	{}
	    yScrollableList	{}
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
    # Configure the widget according to the command-line
    # arguments and to the available database options
    #
    if {[catch {
	mwutil::configureWidget $win configSpecs scrollutil::ss::doConfig \
				scrollutil::ss::doCget [lrange $args 1 end] 1
    } result] != 0} {
	destroy $win
	return -code error $result
    }

    #
    # Move the original widget command into the namespace ss within the current
    # one and create an alias of the original name for a new widget procedure
    #
    rename ::$win ss::$win
    interp alias {} ::$win {} scrollutil::ss::scrollsyncWidgetCmd $win

    return $win
}

#------------------------------------------------------------------------------
# scrollutil::getscrollsync
#
# Queries the scrollsync into which a given widget is embedded via the
# scrollsync's setwidgets subcommand.
#------------------------------------------------------------------------------
proc scrollutil::getscrollsync widget {
    variable ss::scrollsyncArr
    if {[info exists scrollsyncArr($widget)]} {
	set win $scrollsyncArr($widget)
	if {[winfo exists $win] && [winfo class $win] eq "Scrollsync"} {
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
# scrollutil::ss::doConfig
#
# Applies the value val of the configuration option opt to the scrollsync
# widget win.
#------------------------------------------------------------------------------
proc scrollutil::ss::doConfig {win opt val} {
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
	}

	w {
	    switch -- $opt {
		-xscrollcommand {
		    set data($opt) $val
		    set data(xView) {-1 -1}
		}
		-yscrollcommand {
		    set data($opt) $val
		    set data(yView) {-1 -1}
		}
	    }
	}
    }
}

#------------------------------------------------------------------------------
# scrollutil::ss::doCget
#
# Returns the value of the configuration option opt for the scrollsync widget
# win.
#------------------------------------------------------------------------------
proc scrollutil::ss::doCget {win opt} {
    upvar ::scrollutil::ns${win}::data data
    return $data($opt)
}

#
# Private procedures implementing the scrollsync widget command
# =============================================================
#

#------------------------------------------------------------------------------
# scrollutil::ss::scrollsyncWidgetCmd
#
# Processes the Tcl command corresponding to a scrollsync widget.
#------------------------------------------------------------------------------
proc scrollutil::ss::scrollsyncWidgetCmd {win args} {
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
		    scrollutil::ss::doConfig scrollutil::ss::doCget \
		    [lrange $args 1 end]]
	}

	hasattrib -
	unsetattrib {
	    if {$argCount != 2} {
		mwutil::wrongNumArgs "$win $cmd name"
	    }

	    return [::scrollutil::${cmd}SubCmd $win "widget" [lindex $args 1]]
	}

	setwidgets {
	    if {$argCount != 2} {
		mwutil::wrongNumArgs "$win $cmd widgetList"
	    }

	    return [setwidgetsSubCmd $win [lindex $args 1]]
	}

	widgets {
	    if {$argCount != 1} {
		mwutil::wrongNumArgs "$win $cmd"
	    }

	    upvar ::scrollutil::ns${win}::data data
	    return $data(widgetList)
	}

	xview { return [viewSubCmd $win x [lrange $args 1 end]] }

	yview { return [viewSubCmd $win y [lrange $args 1 end]] }
    }
}

#------------------------------------------------------------------------------
# scrollutil::ss::setwidgetsSubCmd
#
# Processes the scrollsync setwidgets subcommmand.
#------------------------------------------------------------------------------
proc scrollutil::ss::setwidgetsSubCmd {win widgetList} {
    foreach w $widgetList {
	if {![winfo exists $w]} {
	    return -code error "bad window path name \"$w\""
	}

	set ss [::scrollutil::getscrollsync $w]
	if {$ss ne "" && $ss ne $win} {
	    return -code error "widget $w already in another scrollsync $ss"
	}
    }

    variable scrollsyncArr
    variable xViewArr
    variable yViewArr
    upvar ::scrollutil::ns${win}::data data

    set oldWidgetList $data(widgetList)
    foreach w $oldWidgetList {
	if {[winfo exists $w]} {
	    set tagList [bindtags $w]
	    set idx [lsearch -exact $tagList "WidgetOfScrollsync"]
	    bindtags $w [lreplace $tagList $idx $idx]
	}

	if {[info exists scrollsyncArr($w)]} {
	    unset scrollsyncArr($w)
	}
	if {[info exists xViewArr($w)]} {
	    unset xViewArr($w)
	}
	if {[info exists yViewArr($w)]} {
	    unset yViewArr($w)
	}
    }

    array set data {xScrollableList {}  yScrollableList {}}

    foreach w $widgetList {
	set tagList [bindtags $w]
	if {[lsearch -exact $tagList "WidgetOfScrollsync"] < 0} {
	    bindtags $w [linsert $tagList 1 WidgetOfScrollsync]
	}

	set scrollsyncArr($w) $win

	foreach axis {x y} {
	    if {[mwutil::isScrollable $w $axis]} {
		lappend data(${axis}ScrollableList) $w
		set ${axis}ViewArr($w) {-1 -1}
		::$w ${axis}view moveto 0
		::$w configure -${axis}scrollcommand \
		    [list scrollutil::ss::scrollCmd $win $w $axis]
	    }
	}

    }

    set data(widgetList) $widgetList
    return $oldWidgetList
}

#------------------------------------------------------------------------------
# scrollutil::ss::viewSubCmd
#
# Processes the scrollsync xview and yview subcommmands.
#------------------------------------------------------------------------------
proc scrollutil::ss::viewSubCmd {win axis argList} {
    upvar ::scrollutil::ns${win}::data data
    set masterWidget [lindex $data(${axis}ScrollableList) 0]
    set viewCmd ${axis}view

    switch [llength $argList] {
	0 {
	    #
	    # Command: $win (x|y)view
	    #
	    if {$masterWidget eq ""} {
		return [list 0 1]
	    } else {
		return [::$masterWidget $viewCmd]
	    }
	}

	default {
	    #
	    # Command: $win (x|y)view moveto <fraction>
	    #	       $win (x|y)view scroll <number> units|pages
	    #
	    set argList [mwutil::getScrollInfo2 "$win $viewCmd" $argList]
	    if {$masterWidget ne ""} {
		eval [list ::$masterWidget] $viewCmd $argList
	    }
	    return ""
	}
    }
}

#
# Private callback procedure
# ==========================
#

#------------------------------------------------------------------------------
# scrollutil::ss::scrollCmd
#
# Propagates the horizontal/vertical position of the view of a given widget
# within the scrollsync widget win to the other horizontally/vertically
# scrollable widgets and passes the data of the master widget's view to the
# value of the -xscrollcommand/-yscrollcommand option.
#------------------------------------------------------------------------------
proc scrollutil::ss::scrollCmd {win widget axis first last} {
    #
    # Avoid a potential endless loop by making sure that
    # the view's horizontal/vertical position will only be
    # propagated to the other widgets if it has changed
    #
    variable ${axis}ViewArr
    set view [set ${axis}ViewArr($widget)]
    foreach {firstOld lastOld} $view {}
    if {$first == $firstOld && $last == $lastOld} {
	return ""
    } else {
	set ${axis}ViewArr($widget) [list $first $last]
    }

    set masterWidget [sortScrollableList $win $axis]
    upvar ::scrollutil::ns${win}::data data
    if {$data(${axis}ViewLocked) && $widget ne $masterWidget} {
	return ""
    }

    foreach w $data(${axis}ScrollableList) {
	if {$w eq $widget} {
	    continue
	}

	if {$first != 0 && $last == 1} {
	    ::$w ${axis}view moveto 1
	} else {
	    ::$w ${axis}view moveto $first
	}
    }

    if {$widget eq $masterWidget && $data(-${axis}scrollcommand) ne ""} {
	foreach {firstOld lastOld} $data(${axis}View) {}
	if {$first != $firstOld || $last != $lastOld} {
	    set data(${axis}View) [list $first $last]
	    eval $data(-${axis}scrollcommand) $first $last
	}
    }

    set data(${axis}ViewLocked) 1
    after 1 [list scrollutil::ss::unlockView $win $axis]
}

#
# Private procedures used in bindings
# ===================================
#

#------------------------------------------------------------------------------
# scrollutil::ss::updateMasterWidgets
#------------------------------------------------------------------------------
proc scrollutil::ss::updateMasterWidgets win {
    if {![winfo exists $win] || [winfo class $win] ne "Scrollsync"} {
	return ""
    }

    upvar ::scrollutil::ns${win}::data data
    foreach axis {x y} {
	set masterWidget [sortScrollableList $win $axis]
	if {$masterWidget ne "" && $data(-${axis}scrollcommand) ne ""} {
	    eval $data(-${axis}scrollcommand) [::$masterWidget ${axis}view]
	}
    }
}

#------------------------------------------------------------------------------
# scrollutil::ss::onWidgetOfScrollsyncDestroy
#------------------------------------------------------------------------------
proc scrollutil::ss::onWidgetOfScrollsyncDestroy widget {
    variable xViewArr
    if {[info exists xViewArr($widget)]} {
	unset xViewArr($widget)
    }

    variable yViewArr
    if {[info exists yViewArr($widget)]} {
	unset yViewArr($widget)
    }

    set win [::scrollutil::getscrollsync $widget]
    if {$win ne ""} {
	set widgetList [::$win widgets]
	set idx [lsearch -exact $widgetList $widget]
	::$win setwidgets [lreplace $widgetList $idx $idx]
    }

    variable scrollsyncArr
    if {[info exists scrollsyncArr($widget)]} {
	unset scrollsyncArr($widget)
    }
}

#
# Private utility procedures
# ==========================
#

#------------------------------------------------------------------------------
# scrollutil::ss::sortScrollableList
#------------------------------------------------------------------------------
proc scrollutil::ss::sortScrollableList {win axis} {
    upvar ::scrollutil::ns${win}::data data
    set data(${axis}ScrollableList) \
	[lsort -command "compareViews $axis" $data(${axis}ScrollableList)]
    return [lindex $data(${axis}ScrollableList) 0]
}

#------------------------------------------------------------------------------
# scrollutil::ss::compareViews
#------------------------------------------------------------------------------
proc scrollutil::ss::compareViews {axis w1 w2} {
    foreach {first1 last1} [::$w1 ${axis}view] {}
    foreach {first2 last2} [::$w2 ${axis}view] {}
    set frac1 [expr {$last1 - $first1}]
    set frac2 [expr {$last2 - $first2}]
    set diff  [expr {$frac1 - $frac2}]

    if {abs($diff) < 1.0e-15} {
	return 0
    } elseif {$diff < 0} {
	return -1
    } else {
	return 1
    }
}

#------------------------------------------------------------------------------
# scrollutil::ss::unlockView
#------------------------------------------------------------------------------
proc scrollutil::ss::unlockView {win axis} {
    if {[winfo exists $win] && [winfo class $win] eq "Scrollsync"} {
	upvar ::scrollutil::ns${win}::data data
	set data(${axis}ViewLocked) 0
    }
}
