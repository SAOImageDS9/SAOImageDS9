#==============================================================================
# Contains the implementation of the pagesman widget.
#
# Structure of the module:
#   - Namespace initialization
#   - Private procedure creating the default bindings
#   - Public procedure creating a new pagesman widget
#   - Private configuration procedures
#   - Private procedures implementing the pagesman widget command
#   - Private procedures used in bindings
#
# Copyright (c) 2021-2023  Csaba Nemethi (E-mail: csaba.nemethi@t-online.de)
#==============================================================================

#
# Namespace initialization
# ========================
#

namespace eval scrollutil::pm {
    #
    # The array configSpecs is used to handle configuration options.  The names
    # of its elements are the configuration options for the Pagesman class.
    # The value of an array element is either an alias name or a list
    # containing the database name and class as well as an indicator specifying
    # the widget to which the option applies: f stands for the frame and w for
    # the pagesman widget itself.
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
	-forgetcommand		{forgetCommand		ForgetCommand	     w}
	-height			{height			Height		     f}
	-highlightbackground	{highlightBackground	HighlightBackground  f}
	-highlightcolor		{highlightColor		HighlightColor	     f}
	-highlightthickness	{highlightThickness	HighlightThickness   f}
	-leavecommand		{leaveCommand		LeaveCommand	     w}
	-relief			{relief			Relief		     f}
	-takefocus		{takeFocus		TakeFocus	     f}
	-width			{width			Width		     f}
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
	lappend configSpecs(-height)		0
	lappend configSpecs(-leavecommand)	""
	lappend configSpecs(-relief)		flat
	lappend configSpecs(-takefocus)		""
	lappend configSpecs(-width)		0
    }
    extendConfigSpecs

    variable configOpts [lsort [array names configSpecs]]

    #
    # The array pageConfigSpecs is used to handle page configuration options.
    # The names of its elements are the page configuration options for the
    # Pagesman widget class.  The value of an array element is a list
    # containing the database name and class.
    #
    #	Command-Line Name	{Database Name	Database Class	}
    #	---------------------------------------------------------
    #
    variable pageConfigSpecs
    array set pageConfigSpecs {
	-padding		{padding	Padding		}
	-sticky			{sticky		Sticky		}
    }

    #
    # Extend the elements of the array pageConfigSpecs
    #
    lappend pageConfigSpecs(-padding)	0
    lappend pageConfigSpecs(-sticky)	"nsew"

    #
    # Use a list to facilitate the handling of command options
    #
    variable cmdOpts [list add adjustsize attrib cget configure forget \
		      hasattrib haspageattrib index insert pageattrib \
		      pagecget pageconfigure pages select size unsetattrib \
		      unsetpageattrib window]
}

#
# Private procedure creating the default bindings
# ===============================================
#

#------------------------------------------------------------------------------
# scrollutil::pm::createBindings
#
# Creates the default bindings for the binding tag Pagesman.
#------------------------------------------------------------------------------
proc scrollutil::pm::createBindings {} {
    bind Pagesman <KeyPress> continue
    bind Pagesman <FocusIn> {
	if {[focus -lastfor %W] eq "%W"} {
	    if {[%W select] ne ""} {
		focus [%W select]
	    }
        }
    }
    bind Pagesman <Map> { scrollutil::pm::resizeWidgetDelayed %W 100 }
    bind Pagesman <Destroy> {
	namespace delete scrollutil::ns%W
	catch {rename %W ""}
    }
}

#
# Public procedure creating a new pagesman widget
# ===============================================
#

#------------------------------------------------------------------------------
# scrollutil::pagesman
#
# Creates a new pagesman widget whose name is specified as the first command-
# line argument, and configures it according to the options and their values
# given on the command line.  Returns the name of the newly created widget.
#------------------------------------------------------------------------------
proc scrollutil::pagesman args {
    variable usingTile
    variable pm::configSpecs
    variable pm::configOpts

    if {[llength $args] == 0} {
	mwutil::wrongNumArgs "pagesman pathName ?options?"
    }

    #
    # Create a frame of the class Pagesman
    #
    set win [lindex $args 0]
    if {[catch {
	if {$usingTile} {
	    ttk::frame $win -class Pagesman -padding 0
	} else {
	    tk::frame $win -class Pagesman -container 0
	    catch {$win configure -padx 0 -pady 0}
	}
    } result] != 0} {
	return -code error $result
    }

    grid rowconfigure    $win 0 -weight 1
    grid columnconfigure $win 0 -weight 1
    grid propagate $win 0

    #
    # Create a namespace within the current one to hold the data of the widget
    #
    namespace eval ns$win {
	#
	# The following array holds various data for this widget
	#
	variable data
	array set data {
	    pageList	{}
	    paddingList	{}
	    stickyList	{}
	    pageCount	0
	    currentPage	""
	    delay	0
	}

	#
	# The following array is used to hold arbitrary attributes
	# and their values for this widget and its pages
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
    regsub -all "%" $win "%%" data(pathName)		;# needed in bindings

    #
    # Configure the widget according to the command-line
    # arguments and to the available database options
    #
    if {[catch {
	mwutil::configureWidget $win configSpecs scrollutil::pm::doConfig \
				scrollutil::pm::doCget [lrange $args 1 end] 1
    } result] != 0} {
	destroy $win
	return -code error $result
    }

    #
    # Move the original widget command into the namespace pm within the current
    # one and create an alias of the original name for a new widget procedure
    #
    rename ::$win pm::$win
    interp alias {} ::$win {} scrollutil::pm::pagesmanWidgetCmd $win

    return $win
}

#
# Private configuration procedures
# ================================
#

#------------------------------------------------------------------------------
# scrollutil::pm::doConfig
#
# Applies the value val of the configuration option opt to the pagesman widget
# win.
#------------------------------------------------------------------------------
proc scrollutil::pm::doConfig {win opt val} {
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

	w { set data($opt) $val }
    }
}

#------------------------------------------------------------------------------
# scrollutil::pm::doCget
#
# Returns the value of the configuration option opt for the pagesman widget
# win.
#------------------------------------------------------------------------------
proc scrollutil::pm::doCget {win opt} {
    upvar ::scrollutil::ns${win}::data data
    return $data($opt)
}

#------------------------------------------------------------------------------
# scrollutil::pm::doPageConfig
#
# Applies the value val of the page configuration option opt to the page of
# index pageIdx of the pagesman widget win.
#------------------------------------------------------------------------------
proc scrollutil::pm::doPageConfig {pageIdx win opt val} {
    upvar ::scrollutil::ns${win}::data data
    set widget [lindex $data(pageList) $pageIdx]
    set isCurrent [expr {$widget eq $data(currentPage)}]

    switch -- $opt {
	-padding {
	    if {[catch {mwutil::parsePadding $win $val} result] != 0} {
		return -code error $result
	    }

	    set data(paddingList) \
		[lreplace $data(paddingList) $pageIdx $pageIdx $val]

	    if {$isCurrent} {
		foreach {l t r b} [mwutil::parsePadding $win $val] {}
		grid configure $widget -padx [list $l $r] -pady [list $t $b]
	    }

	    if {[winfo ismapped $win]} {
		resizeWidgetDelayed $win 100
	    }
	}

	-sticky {
	    if {![regexp {^[nsew]*$} $val]} {
		return -code error "bad -sticky specification \"$val\""
	    }

	    set data(stickyList) \
		[lreplace $data(stickyList) $pageIdx $pageIdx $val]

	    if {$isCurrent} {
		grid configure $widget -sticky $val
	    }
	}
    }
}

#------------------------------------------------------------------------------
# scrollutil::pm::doPageCget
#
# Returns the value of the page configuration option opt for the page of index
# pageIdx of the pagesman widget win.
#------------------------------------------------------------------------------
proc scrollutil::pm::doPageCget {pageIdx win opt} {
    upvar ::scrollutil::ns${win}::data data

    switch -- $opt {
	-padding { return [lindex $data(paddingList) $pageIdx] }
	-sticky  { return [lindex $data(stickyList)  $pageIdx] }
    }
}

#
# Private procedures implementing the pagesman widget command
# ===========================================================
#

#------------------------------------------------------------------------------
# scrollutil::pm::pagesmanWidgetCmd
#
# Processes the Tcl command corresponding to a pagesman widget.
#------------------------------------------------------------------------------
proc scrollutil::pm::pagesmanWidgetCmd {win args} {
    set argCount [llength $args]
    if {$argCount == 0} {
	mwutil::wrongNumArgs "$win option ?arg arg ...?"
    }

    upvar ::scrollutil::ns${win}::data data

    variable cmdOpts
    set cmd [mwutil::fullOpt "command" [lindex $args 0] $cmdOpts]

    switch $cmd {
	add {
	    if {$argCount < 2} {
		mwutil::wrongNumArgs \
		    "$win $cmd window ?option value option value ...?"
	    }

	    set widget [lindex $args 1]
	    if {![winfo exists $widget]} {
		return -code error "bad window path name \"$widget\""
	    }

	    set padding 0
	    set sticky  "nsew"
	    getPageOpts $win [lrange $args 2 end] padding sticky

	    if {[set idx [lsearch -exact $data(pageList) $widget]] < 0} {
		lappend data(pageList)    $widget
		lappend data(paddingList) $padding
		lappend data(stickyList)  $sticky
		incr data(pageCount)

		bind $widget <Map> +[list scrollutil::pm::resizeWidgetDelayed \
				     $data(pathName) 100]
	    } else {
		set data(paddingList) \
		    [lreplace $data(paddingList) $idx $idx $padding]
		set data(stickyList) \
		    [lreplace $data(stickyList) $idx $idx $sticky]

		if {$widget eq $data(currentPage)} {
		    foreach {l t r b} [mwutil::parsePadding $win $padding] {}
		    grid configure $widget \
			-padx [list $l $r] -pady [list $t $b] -sticky $sticky
		}
	    }

	    if {[winfo ismapped $win]} {
		resizeWidgetDelayed $win 100
	    }

	    return ""
	}

	adjustsize {
	    if {$argCount != 1} {
		mwutil::wrongNumArgs "$win $cmd"
	    }

	    return [resizeWidget $win 1]
	}

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
	    variable configSpecs
	    set opt [mwutil::fullConfigOpt [lindex $args 1] configSpecs]
	    return $data($opt)
	}

	configure {
	    variable configSpecs
	    return [mwutil::configureSubCmd $win configSpecs \
		    scrollutil::pm::doConfig scrollutil::pm::doCget \
		    [lrange $args 1 end]]
	}

	forget {
	    if {$argCount != 2} {
		mwutil::wrongNumArgs "$win $cmd pageIndex"
	    }

	    set pageIdx [lindex $args 1]
	    ##nagelfar ignore
	    set pageIdx [format "%d" $pageIdx]	;# integer check with error msg
	    if {$pageIdx < 0 || $pageIdx >= $data(pageCount)} {
		return -code error "page index $pageIdx out of bounds"
	    }

	    set widget [lindex $data(pageList) $pageIdx]
	    if {[set forgetCmd $data(-forgetcommand)] ne "" &&
		![uplevel #0 $forgetCmd [list $win $widget]]} {
		return 0
	    }

	    set data(pageList) [lreplace $data(pageList) $pageIdx $pageIdx]
	    set data(paddingList) \
		[lreplace $data(paddingList) $pageIdx $pageIdx]
	    set data(stickyList) [lreplace $data(stickyList) $pageIdx $pageIdx]
	    incr data(pageCount) -1

	    upvar ::scrollutil::ns${win}::attribs attribs
	    foreach name [array names attribs $widget-*] {
		unset attribs($name)
	    }

	    if {$widget eq $data(currentPage)} {
		#
		# Select the next/previous page
		#
		if {$pageIdx < $data(pageCount)} {
		    ::$win select $pageIdx
		} elseif {[incr pageIdx -1] >= 0} {
		    ::$win select $pageIdx
		} else {
		    grid forget $widget
		    set data(currentPage) ""
		    event generate $win <<PagesmanPageChanged>>
		}
	    }

	    if {[winfo ismapped $win]} {
		resizeWidgetDelayed $win 100
	    }

	    return 1
	}

	hasattrib -
	unsetattrib {
	    if {$argCount != 2} {
		mwutil::wrongNumArgs "$win $cmd name"
	    }

	    return [::scrollutil::${cmd}SubCmd $win "widget" [lindex $args 1]]
	}

	haspageattrib -
	unsetpageattrib {
	    if {$argCount != 3} {
		mwutil::wrongNumArgs "$win $cmd pageIndex name"
	    }

	    set pageIdx [lindex $args 1]
	    ##nagelfar ignore
	    set pageIdx [format "%d" $pageIdx]	;# integer check with error msg
	    if {$pageIdx < 0 || $pageIdx >= $data(pageCount)} {
		return -code error "page index $pageIdx out of bounds"
	    }

	    set first [string first "page" $cmd]
	    set last [expr {$first + 3}]
	    set cmd [string replace $cmd $first $last]	;# (has|unset)attrib
	    set widget [lindex $data(pageList) $pageIdx]
	    return [::scrollutil::${cmd}SubCmd $win $widget [lindex $args 2]]
	}

	index {
	    if {$argCount != 2} {
		mwutil::wrongNumArgs "$win $cmd window"
	    }

	    set widget [lindex $args 1]
	    if {![winfo exists $widget]} {
		return -code error "bad window path name \"$widget\""
	    }

	    if {[set idx [lsearch -exact $data(pageList) $widget]] < 0} {
		return -code error "window \"$widget\" is not managed by $win"
	    }

	    return $idx
	}

	insert {
	    if {$argCount < 3} {
		mwutil::wrongNumArgs \
		    "$win $cmd pageIndex window ?option value option value ...?"
	    }

	    set pageIdx [lindex $args 1]
	    ##nagelfar ignore
	    set pageIdx [format "%d" $pageIdx]	;# integer check with error msg

	    set widget [lindex $args 2]
	    if {![winfo exists $widget]} {
		return -code error "bad window path name \"$widget\""
	    }

	    if {[set idx [lsearch -exact $data(pageList) $widget]] >= 0} {
		set padding [lindex $data(paddingList) $idx]
		set sticky  [lindex $data(stickyList)  $idx]
	    } else {
		set padding 0
		set sticky  "nsew"
	    }
	    getPageOpts $win [lrange $args 3 end] padding sticky

	    if {$idx >= 0} {
		set data(pageList)    [lreplace $data(pageList)    $idx $idx]
		set data(paddingList) [lreplace $data(paddingList) $idx $idx]
		set data(stickyList)  [lreplace $data(stickyList)  $idx $idx]
	    }

	    set data(pageList)    [linsert $data(pageList)    $pageIdx $widget]
	    set data(paddingList) [linsert $data(paddingList) $pageIdx $padding]
	    set data(stickyList)  [linsert $data(stickyList)  $pageIdx $sticky]

	    if {$idx < 0} {
		incr data(pageCount)

		bind $widget <Map> +[list scrollutil::pm::resizeWidgetDelayed \
				     $data(pathName) 100]
	    } else {
		if {$widget eq $data(currentPage)} {
		    foreach {l t r b} [mwutil::parsePadding $win $padding] {}
		    grid configure $widget \
			-padx [list $l $r] -pady [list $t $b] -sticky $sticky
		}
	    }

	    if {[winfo ismapped $win]} {
		resizeWidgetDelayed $win 100
	    }

	    return ""
	}

	pageattrib {
	    if {$argCount < 2} {
		mwutil::wrongNumArgs \
		    "$win $cmd pageIndex ?name ?value name value ...??"
	    }

	    set pageIdx [lindex $args 1]
	    ##nagelfar ignore
	    set pageIdx [format "%d" $pageIdx]	;# integer check with error msg
	    if {$pageIdx < 0 || $pageIdx >= $data(pageCount)} {
		return -code error "page index $pageIdx out of bounds"
	    }

	    set widget [lindex $data(pageList) $pageIdx]
	    return [::scrollutil::attribSubCmd $win $widget \
		    [lrange $args 2 end]]
	}

	pagecget {
	    if {$argCount != 3} {
		mwutil::wrongNumArgs "$win $cmd pageIndex option"
	    }

	    set pageIdx [lindex $args 1]
	    ##nagelfar ignore
	    set pageIdx [format "%d" $pageIdx]	;# integer check with error msg
	    if {$pageIdx < 0 || $pageIdx >= $data(pageCount)} {
		return -code error "page index $pageIdx out of bounds"
	    }

	    variable pageConfigSpecs
	    set opt [mwutil::fullConfigOpt [lindex $args 2] pageConfigSpecs]
	    return [doPageCget $pageIdx $win $opt]
	}

	pageconfigure {
	    if {$argCount < 2} {
		mwutil::wrongNumArgs \
		    "$win $cmd pageIndex ?option ?value option value ...??"
	    }

	    set pageIdx [lindex $args 1]
	    ##nagelfar ignore
	    set pageIdx [format "%d" $pageIdx]	;# integer check with error msg
	    if {$pageIdx < 0 || $pageIdx >= $data(pageCount)} {
		return -code error "page index $pageIdx out of bounds"
	    }

	    variable pageConfigSpecs
	    return [mwutil::configureSubCmd $win pageConfigSpecs \
		    "scrollutil::pm::doPageConfig $pageIdx" \
		    "scrollutil::pm::doPageCget $pageIdx" \
		    [lrange $args 2 end]]
	}

	pages {
	    if {$argCount != 1} {
		mwutil::wrongNumArgs "$win $cmd"
	    }

	    return $data(pageList)
	}

	select {
	    if {$argCount > 2} {
		mwutil::wrongNumArgs "$win $cmd ?pageIndex?"
	    }

	    if {$argCount == 1} {
		return $data(currentPage)
	    }

	    set pageIdx [lindex $args 1]
	    ##nagelfar ignore
	    set pageIdx [format "%d" $pageIdx]	;# integer check with error msg
	    if {$pageIdx < 0 || $pageIdx >= $data(pageCount)} {
		return -code error "page index $pageIdx out of bounds"
	    }

	    set widget [lindex $data(pageList) $pageIdx]
	    if {[lsearch -exact $data(pageList) $data(currentPage)] >= 0} {
		if {$widget ne $data(currentPage) &&
		    [set cmd $data(-leavecommand)] ne "" &&
		    ![uplevel #0 $cmd [list $win $data(currentPage)]]} {
		    return 0
		} else {
		    grid forget $data(currentPage)
		}
	    }

	    set padding [lindex $data(paddingList) $pageIdx]
	    set sticky  [lindex $data(stickyList)  $pageIdx]
	    foreach {l t r b} [mwutil::parsePadding $win $padding] {}
	    grid $widget -padx [list $l $r] -pady [list $t $b] -sticky $sticky
	    set data(currentPage) $widget

	    if {$widget ne $data(currentPage)} {
		event generate $win <<PagesmanPageChanged>>
	    }

	    return 1
	}

	size {
	    if {$argCount != 1} {
		mwutil::wrongNumArgs "$win $cmd"
	    }

	    return $data(pageCount)
	}

	window {
	    if {$argCount != 2} {
		mwutil::wrongNumArgs "$win $cmd pageIndex"
	    }

	    set pageIdx [lindex $args 1]
	    ##nagelfar ignore
	    set pageIdx [format "%d" $pageIdx]	;# integer check with error msg
	    if {$pageIdx < 0 || $pageIdx >= $data(pageCount)} {
		return -code error "page index $pageIdx out of bounds"
	    }

	    return [lindex $data(pageList) $pageIdx]
	}
    }
}

#------------------------------------------------------------------------------
# scrollutil::pm::getPageOpts
#
# Gets the page options from a given list of option-value pairs.
#------------------------------------------------------------------------------
proc scrollutil::pm::getPageOpts {win optValPairs paddingName stickyName} {
    upvar $paddingName padding $stickyName sticky

    set count [llength $optValPairs]
    variable pageConfigSpecs
    foreach {opt val} $optValPairs {
	set opt [mwutil::fullConfigOpt $opt pageConfigSpecs]
	if {$count == 1} {
	    return -code error "value for \"$opt\" missing"
	}

	switch -- $opt {
	    -padding {
		if {[catch {mwutil::parsePadding $win $val} result] != 0} {
		    return -code error $result
		}
		set padding $val
	    }

	    -sticky {
		if {![regexp {^[nsew]*$} $val]} {
		    return -code error "bad -sticky specification \"$val\""
		}
		set sticky $val
	    }
	}

	incr count -2
    }
}

#
# Private procedures used in bindings
# ===================================
#

#------------------------------------------------------------------------------
# scrollutil::pm::resizeWidgetDelayed
#------------------------------------------------------------------------------
proc scrollutil::pm::resizeWidgetDelayed {win ms {force 0}} {
    upvar ::scrollutil::ns${win}::data data
    if {![info exists data(afterId)]} {
	set data(afterId) \
	    [after $ms [list scrollutil::pm::resizeWidget $win $force]]
	set data(delay) $ms
    }
}

#------------------------------------------------------------------------------
# scrollutil::pm::resizeWidget
#------------------------------------------------------------------------------
proc scrollutil::pm::resizeWidget {win {force 0}} {
    if {![winfo exists $win] || [winfo class $win] ne "Pagesman"} {
	return ""
    }

    upvar ::scrollutil::ns${win}::data data
    catch {unset data(afterId)}

    set computeWidth  [expr {$data(-width)  <= 0 || $force}]
    set computeHeight [expr {$data(-height) <= 0 || $force}]
    if {$computeWidth || $computeHeight} {
	set bd [expr {2 * $data(-borderwidth)}]
	variable ::scrollutil::usingTile
	if {!$usingTile} {
	    incr bd [expr {2 * $data(-highlightthickness)}]
	}
    }

    if {$computeWidth} {
	set maxWidth 0
	foreach widget $data(pageList) padding $data(paddingList) {
	    foreach {l t r b} [mwutil::parsePadding $win $padding] {}
	    set reqWidth [expr {[winfo reqwidth $widget] + $l + $r}]
	    if {$reqWidth > $maxWidth} {
		set maxWidth $reqWidth
	    }
	}

	incr maxWidth $bd
	$win configure -width $maxWidth
	if {$force} {
	    set data(-width) $maxWidth
	}
    }

    if {$computeHeight} {
	if {$computeWidth} {
	    update idletasks
	    if {![winfo exists $win] || [winfo class $win] ne "Pagesman"} {
		return ""
	    }
	}

	set maxHeight 0
	foreach widget $data(pageList) padding $data(paddingList) {
	    foreach {l t r b} [mwutil::parsePadding $win $padding] {}
	    set reqHeight [expr {[winfo reqheight $widget] + $t + $b}]
	    if {$reqHeight > $maxHeight} {
		set maxHeight $reqHeight
	    }
	}

	incr maxHeight $bd
	$win configure -height $maxHeight
	if {$force} {
	    set data(-height) $maxHeight
	}
    }

    if {$computeWidth || $computeHeight} {
	if {$data(delay) == 100} {
	    #
	    # Resize the widget again 210 ms later because dynamic scrollbars
	    # within a scrollarea might need up to 300 ms for being mapped
	    #
	    resizeWidgetDelayed $win 210 $force
	} else {
	    set data(delay) 0
	}
    }

    if {$data(pageCount) != 0 && $data(currentPage) eq ""} {
	::$win select 0
    }

    return ""
}
