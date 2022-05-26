#==============================================================================
# Contains the implementation of the multi-entry widget.
#
# Structure of the module:
#   - Namespace initialization
#   - Private procedure creating the default bindings
#   - Public procedure creating a new mentry widget
#   - Private configuration procedures
#   - Private procedures implementing the mentry widget command
#   - Private callback procedures
#   - Private procedures used in bindings
#   - Private utility procedures
#
# Copyright (c) 1999-2019  Csaba Nemethi (E-mail: csaba.nemethi@t-online.de)
#==============================================================================

#
# Namespace initialization
# ========================
#

namespace eval mentry {
    #
    # Get the current windowing system ("x11", "win32", "classic", or "aqua")
    #
    variable winSys [mwutil::windowingSystem]

    #
    # Create aliases for a few tile commands if not yet present
    #
    proc createTileAliases {} {
	if {[string compare [interp alias {} ::mentry::style] ""] != 0} {
	    return ""
	}

	if {[string length [info commands ::ttk::style]] == 0} {
	    interp alias {} ::mentry::style	{} ::style
	    if {[string compare $::tile::version "0.7"] >= 0} {
		interp alias {} ::mentry::styleConfig {} ::style configure
	    } else {
		interp alias {} ::mentry::styleConfig {} ::style default
	    }
	    interp alias {} ::mentry::getThemes	{} ::tile::availableThemes
	    interp alias {} ::mentry::setTheme	{} ::tile::setTheme

	    interp alias {} ::mentry::tileqt_kdeStyleChangeNotification \
			 {} ::tile::theme::tileqt::kdeStyleChangeNotification
	    interp alias {} ::mentry::tileqt_currentThemeName \
			 {} ::tile::theme::tileqt::currentThemeName
	    interp alias {} ::mentry::tileqt_currentThemeColour \
			 {} ::tile::theme::tileqt::currentThemeColour
	} else {
	    interp alias {} ::mentry::style        {} ::ttk::style
	    interp alias {} ::mentry::styleConfig  {} ::ttk::style configure
	    interp alias {} ::mentry::getThemes    {} ::ttk::themes
	    interp alias {} ::mentry::setTheme     {} ::ttk::setTheme

	    interp alias {} ::mentry::tileqt_kdeStyleChangeNotification \
			 {} ::ttk::theme::tileqt::kdeStyleChangeNotification
	    interp alias {} ::mentry::tileqt_currentThemeName \
			 {} ::ttk::theme::tileqt::currentThemeName
	    interp alias {} ::mentry::tileqt_currentThemeColour \
			 {} ::ttk::theme::tileqt::currentThemeColour
	}
    }
    if {$usingTile} {
	createTileAliases 
    }

    #
    # The array configSpecs is used to handle configuration options.  The
    # names of its elements are the configuration options for the Mentry widget
    # class.  The value of an array element is either an alias name or a list
    # containing the database name and class as well as an indicator specifying
    # the widgets to which the option applies: c stands for all children
    # (entries and labels), e for the entries only, h for the hull, and w for
    # the widget itself.
    #
    #	Command-Line Name	{Database Name		Database Class	     W}
    #	-----------------------------------------------------------------------
    #
    variable configSpecs
    array set configSpecs {
	-background		{background		Background	     e}
	-bg			-background
	-body			{body			Body		     w}
	-borderwidth		{borderWidth		BorderWidth	     h}
	-bd			-borderwidth
	-cursor			{cursor			Cursor		     c}
	-disabledbackground	{disabledBackground	DisabledBackground   e}
	-disabledforeground	{disabledForeground	DisabledForeground   c}
	-exportselection	{exportSelection	ExportSelection	     e}
	-font			{font			Font		     c}
	-foreground		{foreground		Foreground	     c}
	-fg			-foreground
	-highlightbackground	{highlightBackground	HighlightBackground  h}
	-highlightcolor		{highlightColor		HighlightColor	     h}
	-highlightthickness	{highlightThickness	HighlightThickness   h}
	-insertbackground	{insertBackground	Foreground	     e}
	-insertborderwidth	{insertBorderWidth	BorderWidth	     e}
	-insertofftime		{insertOffTime		OffTime		     e}
	-insertontime		{insertOnTime		OnTime		     e}
	-insertwidth		{insertWidth		InsertWidth	     e}
	-invalidcommand		{invalidCommand		InvalidCommand	     e}
	-invcmd			-invalidcommand
	-justify		{justify		Justify		     e}
	-readonlybackground	{readonlyBackground	ReadonlyBackground   e}
	-relief			{relief			Relief		     h}
	-selectbackground	{selectBackground	Foreground	     e}
	-selectborderwidth	{selectBorderWidth	BorderWidth	     e}
	-selectforeground	{selectForeground	Background	     e}
	-show			{show			Show		     e}
	-state			{state			State		     e}
	-takefocus		{takeFocus		TakeFocus	     h}
	-textvariable		{textVariable		Variable	     e}
	-validate		{validate		Validate	     e}
	-validatecommand	{validateCommand	ValidateCommand	     e}
	-vcmd			-validatecommand
    }

    #
    # Extend the elements of the array configSpecs
    #
    proc extendConfigSpecs {} {
	variable helpEntry
	variable usingTile
	variable configSpecs

	#
	# Append the default values of the configuration options
	# of an invisible entry widget to the values of the
	# corresponding elements of the array configSpecs
	#
	set helpEntry .__helpEntry
	for {set n 0} {[winfo exists $helpEntry]} {incr n} {
	    set helpEntry .__helpEntry$n
	}
	if {$usingTile} {
	    foreach opt {-borderwidth -bd -disabledbackground
			 -disabledforeground -highlightbackground
			 -highlightcolor -highlightthickness -insertbackground
			 -insertborderwidth -insertofftime -insertontime
			 -insertwidth -readonlybackground -relief
			 -selectbackground -selectborderwidth
			 -selectforeground} {
		unset configSpecs($opt)
	    }

	    #
	    # Append theme-specific values to some
	    # elements of the array configSpecs
	    #
	    if {[string compare [mwutil::currentTheme] "tileqt"] == 0} {
		tileqt_kdeStyleChangeNotification 
	    }
	    setThemeDefaults

	    #
	    # Append theme-independent values to some
	    # other elements of the array configSpecs
	    #
	    lappend configSpecs(-takefocus)	{}

	    catch {lappend configSpecs(-cursor) [ttk::cursor text]}

	    ttk::entry $helpEntry -takefocus 0
	} else {
	    if {$::tk_version < 8.3} {
		foreach opt {-invalidcommand -invcmd -validate
			     -validatecommand -vcmd} {
		    unset configSpecs($opt)
		}
	    }
	    if {$::tk_version < 8.4} {
		foreach opt {-disabledbackground -disabledforeground
			     -readonlybackground} {
		    unset configSpecs($opt)
		}
	    }

	    tk::entry $helpEntry -takefocus 0
	}
	foreach configSet [$helpEntry configure] {
	    if {[llength $configSet] != 2} {
		set opt [lindex $configSet 0]
		if {[info exists configSpecs($opt)] &&
		    [llength $configSpecs($opt)] == 3} {
		    lappend configSpecs($opt) [lindex $configSet 3]
		} elseif {[string compare $opt "-width"] == 0} {
		    lappend configSpecs(-body) [lindex $configSet 3]
		}
	    }
	}
    }
    extendConfigSpecs 

    variable configOpts [lsort [array names configSpecs]]

    #
    # Use a list to facilitate the handling of the command options 
    #
    variable cmdOpts [list \
	adjustentry attrib cget clear configure entries entrycount entrylimit \
	entrypath getarray getlist getstring hasattrib isempty isfull \
	labelcount labelpath labels put setentryextrawidth setentryfont \
	setentrywidth unsetattrib]
}

#
# Private procedure creating the default bindings
# ===============================================
#

#------------------------------------------------------------------------------
# mentry::createBindings
#
# Creates the default bindings for the binding tags Mentry, MentryKeyNav,
# MentryEntry, and MentryLabel.
#------------------------------------------------------------------------------
proc mentry::createBindings {} {
    #
    # Define some Mentry class bindings
    #
    bind Mentry <KeyPress> continue
    bind Mentry <FocusIn> {
	if {[string compare [focus -lastfor %W] %W] == 0} {
	    catch {mentry::tabToEntry [mentry::firstNormal %W]}
	}
    }
    bind Mentry <Destroy> {
	namespace delete ::mentry::ns%W
	catch {rename ::%W ""}
    }
    bind Mentry <<ThemeChanged>> {
	after idle [list mentry::updateConfigSpecs %W]
    }
    variable usingTile
    if {$usingTile} {
	bind Mentry <Activate>	 { mentry::updateAppearance %W <Activate> }
	bind Mentry <Deactivate> { mentry::updateAppearance %W <Deactivate> }
    }

    #
    # Define the binding tag MentryKeyNav
    #
    mwutil::defineKeyNav Mentry

    #
    # Define some bindings for the binding tag MentryEntry
    #
    variable entryClicked 0
    bind MentryEntry <Button-1>		{ set mentry::entryClicked 1 }
    bind MentryEntry <ButtonRelease-1>	{ set mentry::entryClicked 0 }
    bind MentryEntry <Control-Left>	{ mentry::tabToPrev      %W }
    bind MentryEntry <Control-Right>	{ mentry::tabToNext      %W }
    bind MentryEntry <Home>		{ mentry::goToHome       %W }
    bind MentryEntry <End>		{ mentry::goToEnd        %W }
    bind MentryEntry <Shift-Home>	{ mentry::selectToHome   %W }
    bind MentryEntry <Shift-End>	{ mentry::selectToEnd    %W }
    bind MentryEntry <BackSpace>	{ mentry::backSpace      %W }
    bind MentryEntry <KeyPress>		{ mentry::procLabelChars %W %A }

    if {$usingTile} {
	#
	# Define some bindings for the binding tag
	# MentryEntry, needed for the aqua theme
	#
	bind MentryEntry <FocusIn> {
	    mentry::[winfo parent [winfo parent %W]] state focus
	}
	bind MentryEntry <FocusOut> {
	    mentry::[winfo parent [winfo parent %W]] state !focus
	}
    }

    #
    # Define some emacs-like key bindings for the binding tag MentryEntry
    #
    bind MentryEntry <Meta-b> {
	if {!$tk_strictMotif} {
	    mentry::tabToPrev %W
	}
    }
    bind MentryEntry <Meta-f> {
	if {!$tk_strictMotif} {
	    mentry::tabToNext %W
	}
    }
    bind MentryEntry <Control-a> {
	if {!$tk_strictMotif} {
	    mentry::goToHome %W
	}
    }
    bind MentryEntry <Control-e> {
	if {!$tk_strictMotif} {
	    mentry::goToEnd %W
	}
    }
    bind MentryEntry <Control-h> {
	if {!$tk_strictMotif} {
	    mentry::backSpace %W
	}
    }
    bind MentryEntry <Meta-d> {
	if {!$tk_strictMotif} {
	    %W delete insert end
	    break
	}
    }
    bind MentryEntry <Meta-BackSpace> {
	if {!$tk_strictMotif} {
	    mentry::delToLeft %W
	}
    }
    bind MentryEntry <Meta-Delete> {
	if {!$tk_strictMotif} {
	    mentry::delToLeft %W
	}
    }

    #
    # Define some bindings for the binding tag MentryLabel
    #
    bind MentryLabel <Button-1>		{ mentry::labelButton1 %W }
}

#
# Public procedure creating a new mentry widget
# =============================================
#

#------------------------------------------------------------------------------
# mentry::mentry
#
# Creates a new multi-entry widget whose name is specified as the first command-
# line argument, and configures it according to the options and their values
# given on the command line.  Returns the name of the newly created widget.
#------------------------------------------------------------------------------
proc mentry::mentry args {
    variable usingTile
    variable configSpecs
    variable configOpts

    if {[llength $args] == 0} {
	mwutil::wrongNumArgs "mentry pathName ?options?"
    }

    #
    # Create a hull (a frame or tile entry) of the class Mentry
    #
    set win [lindex $args 0]
    if {[catch {
	if {$usingTile} {
	    ttk::entry $win -style Hull$win.TEntry -class Mentry
	} else {
	    tk::frame $win -class Mentry -container 0 -height 0 -width 0
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
	    entryCount	 0
	    labelCount	 0
	    maxEntryIdx	-1
	    maxLabelIdx	-1
	    inActiveWin	 1
	}

	#
	# The following array is used to hold arbitrary
	# attributes and their values for this widget
	#
	variable attribs
    }

    #
    # Initialize some further components of data
    #
    upvar ::mentry::ns${win}::data data
    foreach opt $configOpts {
	set data($opt) [lindex $configSpecs($opt) 3]
    }
    set data(currentTheme) [mwutil::currentTheme]
    if {[string compare $data(currentTheme) "tileqt"] == 0} {
	set data(widgetStyle) [tileqt_currentThemeName]
	if {[info exists ::env(KDE_SESSION_VERSION)] &&
	    [string length $::env(KDE_SESSION_VERSION)] != 0} {
	    set data(colorScheme) [getKdeConfigVal "General" "ColorScheme"]
	} else {
	    set data(colorScheme) [getKdeConfigVal "KDE" "colorScheme"]
	}
    } else {
	set data(widgetStyle) ""
	set data(colorScheme) ""
    }
    if {$usingTile} {
	setThemeDefaults
	variable themeDefaults
	set data(themeDefaults) [array get themeDefaults]
	foreach opt {-disabledbackground -readonlybackground} {
	    set data($opt) $themeDefaults($opt)
	}
    }

    #
    # Take into account that some scripts start by
    # destroying all children of the root window
    #
    variable helpEntry
    if {![winfo exists $helpEntry]} {
	if {$usingTile} {
	    ttk::entry $helpEntry -takefocus 0
	} else {
	    tk::entry $helpEntry -takefocus 0
	}
    }

    #
    # Configure the widget according to the command-line
    # arguments and to the available database options
    #
    if {[catch {
	mwutil::configureWidget $win configSpecs mentry::doConfig \
				mentry::doCget [lrange $args 1 end] 1
    } result] != 0} {
	destroy $win
	return -code error $result
    }

    #
    # Move the original widget command into the current namespace
    # and build a new widget procedure in the global one
    #
    rename ::$win $win
    interp alias {} ::$win {} mentry::mentryWidgetCmd $win

    return $win
}

#
# Private configuration procedures
# ================================
#

#------------------------------------------------------------------------------
# mentry::doConfig
#
# Applies the value val of the configuration option opt to the mentry widget
# win.
#------------------------------------------------------------------------------
proc mentry::doConfig {win opt val} {
    variable usingTile
    variable helpEntry
    variable configSpecs
    upvar ::mentry::ns${win}::data data

    #
    # Apply the value to the widget(s) corresponding to the given option
    #
    switch [lindex $configSpecs($opt) 2] {
	c {
	    #
	    # Save the properly formatted value of val
	    # in data($opt) and apply it to all children
	    #
	    $helpEntry configure $opt $val
	    set val [$helpEntry cget $opt]
	    set data($opt) $val
	    foreach w [entries $win] {
		configEntry $w $opt $val
	    }
	    foreach w [labels $win] {
		$w configure $opt $val
	    }

	    #
	    # Some options need special handling
	    #
	    if {[string compare $opt "-font"] == 0 && $usingTile} {
		adjustChildren $win
	    } elseif {[string compare $opt "-foreground"] == 0 && $usingTile &&
		      !$data(inActiveWin)} {
		foreach w [labels $win] {
		    $w configure $opt $themeDefaults(-foreground,background)
		}
	    }
	}

	e {
	    if {[string compare $opt "-textvariable"] == 0 &&
		[string length $val] != 0} {
		#
		# The text variable must be an array
		#
		global $val
		if {[info exists $val] && ![array exists $val]} {
		    return -code error "variable \"$val\" isn't array"
		}

		#
		# For each entry child, set the -textvariable configuration
		# option of the entry to the corresponding array element
		#
		for {set n 0} {$n < $data(entryCount)} {incr n} {
		    [entryPath $win $n] configure $opt ${val}($n)
		}

		set data($opt) $val
	    } else {
		if {[string compare $opt "-state"] == 0} {
		    set val [mwutil::fullOpt "state" $val \
			     {disabled normal readonly}]
		}

		#
		# Save the properly formatted value of val in
		# data($opt) and apply it to all entry children
		#
		$helpEntry configure $opt $val
		set val [$helpEntry cget $opt]
		set data($opt) $val
		if {[string compare $opt "-background"] == 0 && $usingTile} {
		    #
		    # Most themes support the -fieldbackground option
		    # for the style element Entry.field.  The aqua
		    # theme supports the -background option instead.
		    # Some themes (like Arc, plastik, tileqt, vista,
		    # and xpnative) don't support either of them.
		    #
		    styleConfig $win.TEntry -fieldbackground $val \
					    -background      $val
		} else {
		    foreach w [entries $win] {
			configEntry $w $opt $val
		    }
		}

		#
		# Some options need special handling
		#
		if {[string compare $opt "-background"] == 0} {
		    if {$::tk_version < 8.4} {
			set labelBg $val
		    } else {
			switch $data(-state) {
			    normal {
				set labelBg $val
			    }
			    disabled {
				set labelBg $data(-disabledbackground)
			    }
			    readonly {
				set labelBg $data(-readonlybackground)
			    }
			}
			if {[string length $labelBg] == 0} {
			    set labelBg $val
			}
		    }
		    foreach w [labels $win] {
			$w configure $opt $labelBg
		    }

		    #
		    # Set also the hull's background, because
		    # of the shadow colors of its 3-D border
		    #
		    if {$usingTile} {
			styleConfig Hull$win.TEntry -fieldbackground $labelBg \
						    -background      $labelBg
		    } else {
			$win configure $opt $labelBg
		    }
		} elseif {[regexp \
			   {^-(disabledbackground|readonlybackground|state)$} \
			   $opt] && $::tk_version >= 8.4} {
		    switch $data(-state) {
			normal {
			    set labelBg $data(-background)
			    set labelState normal
			}
			disabled {
			    set labelBg $data(-disabledbackground)
			    set labelState disabled
			}
			readonly {
			    set labelBg $data(-readonlybackground)
			    set labelState normal
			}
		    }
		    if {[string length $labelBg] == 0} {
			set labelBg $data(-background)
		    }
		    foreach w [labels $win] {
			$w configure -background $labelBg -state $labelState
		    }

		    if {$usingTile} {
			$win configure -state $data(-state)
		    } else {
			$win configure -background $labelBg
		    }
		}
	    }
	}

	h {
	    #
	    # Apply the value to the hull and save the
	    # properly formatted value of val in data($opt)
	    #
	    $win configure $opt $val
	    set data($opt) [$win cget $opt]
	}

	w {
	    if {[string compare $opt "-body"] == 0} {
		createChildren $win $val
	    }
	}
    }
}

#------------------------------------------------------------------------------
# mentry::doCget
#
# Returns the value of the configuration option opt for the mentry widget win.
#------------------------------------------------------------------------------
proc mentry::doCget {win opt} {
    upvar ::mentry::ns${win}::data data

    return $data($opt)
}

#------------------------------------------------------------------------------
# mentry::createChildren
#
# For each <width, text> pair given in the list body, the procedure creates an
# entry of the given width and a label displaying the given text, and defines
# some callbacks as well as bindings for the entry just created.
#------------------------------------------------------------------------------
proc mentry::createChildren {win body} {
    variable usingTile
    variable themeDefaults
    variable configSpecs
    variable configOpts
    upvar ::mentry::ns${win}::data data

    #
    # Check the syntax of body before performing any changes
    #
    set argCount [llength $body]
    if {$argCount == 0} {
	return -code error "expected at least one entry child width"
    }
    foreach {width text} $body {
	if {[catch {format "%d" $width}] != 0 || $width <= 0} {
	    return -code error "expected positive integer but got \"$width\""
	}
    }

    #
    # Destroy any existing children of the hull
    #
    foreach w [winfo children $win] {
	if {[regexp {^(Frame|Entry|Label)$} [winfo class $w]]} {
	    destroy $w
	}
    }

    set data(entryCount) [expr {($argCount + 1) / 2}]
    set data(labelCount) [expr {$argCount / 2}]
    set data(maxEntryIdx) [expr {$data(entryCount) - 1}]
    set data(maxLabelIdx) [expr {$data(labelCount) - 1}]

    if {$usingTile} {
	set bd $themeDefaults(-borderwidth)
	set bd2 [expr {2*$bd}]
    }

    set data(-body) {}
    set n 0
    foreach {width text} $body {
	#
	# Append the properly formatted value
	# of width to the list data(-body)
	#
	lappend data(-body) [format "%d" $width]

	#
	# Create an entry of the given width
	# within (a frame child of) the hull win
	#
	if {$usingTile} {
	    set f [framePath $win $n]
	    tk::frame $f -borderwidth 0 -container 0 -highlightthickness 0 \
			 -relief flat -takefocus 0
	    catch {$f configure -padx 0 -pady 0}
	    set w $f.e
	    ttk::entry $w -style $win.TEntry -takefocus 0 -textvariable "" \
			  -width $width
	} else {
	    set w [entryPath $win $n]
	    tk::entry $w -borderwidth 0 -highlightthickness 0 \
			 -takefocus 0 -textvariable "" -width $width
	}

	#
	# Apply to it the current configuration options
	#
	foreach opt $configOpts {
	    if {[string compare $opt "-textvariable"] == 0 &&
		[string length $data($opt)] != 0} {
		upvar data($opt) val
		$w configure $opt ${val}($n)
	    } elseif {[regexp {[ec]} [lindex $configSpecs($opt) 2]]} {
		configEntry $w $opt $data($opt)
	    }
	}

	#
	# Manage the entry
	#
	if {$usingTile} {
	    set frameWidth [expr {[reqEntryWidth $w] - $bd2}]
	    set frameHeight [expr {[winfo reqheight $w] - $bd2}]
	    $f configure -width $frameWidth -height $frameHeight
	    place $w -x -$bd -relwidth 1.0 -width $bd2 \
		     -y -$bd -relheight 1.0 -height $bd2
	    pack $f -side left -expand 1 -fill both -pady $bd
	    if {$n == 0} {
		pack configure $f -padx [list $bd 0]
	    }
	} else {
	    pack $w -side left -expand 1 -fill both
	}

	#
	# Define some callbacks for the entry just created
	#
	wcb::callback $w before insert [list wcb::checkEntryLen $width]
	wcb::callback $w  after insert \
		      [list mentry::condTabToNext $width $win $n]
	wcb::callback $w  after motion \
		      [list mentry::condGoToNeighbor $win $n]

	#
	# Modify the list of binding tags of the entry
	#
	bindtags $w [list $w MentryEntry [winfo class $w] [winfo toplevel $w] \
			  MentryKeyNav all]

	if {$n == $data(labelCount)} {
	    if {$usingTile} {
		set w $f
	    }
	    break
	}

	#
	# Append the value of text to the list data(-body)
	#
	lappend data(-body) $text

	#
	# Create a label displaying the given text within the hull win
	#
	set w [labelPath $win $n]
	tk::label $w -bitmap "" -borderwidth 0 -height 0 -highlightthickness 0 \
		     -image "" -padx 0 -pady 0 -takefocus 0 -text $text \
		     -textvariable "" -underline -1 -width 0 -wraplength 0
	pack $w -side left -fill y
	if {$usingTile} {
	    pack configure $w -pady $themeDefaults(-labelpady)
	}

	#
	# Apply to it the current configuration options
	#
	foreach opt $configOpts {
	    if {[string compare [lindex $configSpecs($opt) 2] "c"] == 0 &&
		[info exists data($opt)]} {
		$w configure $opt $data($opt)
	    }
	}
	if {$::tk_version < 8.4} {
	    $w configure -background $data(-background)
	} else {
	    switch $data(-state) {
		normal {
		    set labelBg $data(-background)
		    set labelState normal
		}
		disabled {
		    set labelBg $data(-disabledbackground)
		    set labelState disabled
		}
		readonly {
		    set labelBg $data(-readonlybackground)
		    set labelState normal
		}
	    }
	    if {[string length $labelBg] == 0} {
		set labelBg $data(-background)
	    }
	    $w configure -background $labelBg -state $labelState
	}
	if {$usingTile} {
	    $w configure -disabledforeground $themeDefaults(-disabledforeground)
	}

	#
	# Replace the binding tag Label with MentryLabel
	# in the list of binding tags of the label
	#
	bindtags $w [lreplace [bindtags $w] 1 1 MentryLabel]

	incr n
    }

    #
    # Adjust the last child's geometry
    #
    if {$usingTile} {
	if {$argCount == 1} {
	    pack configure $w -padx [list $bd $bd]
	} elseif {[string compare [winfo class $w] "Label"] == 0} {
	    pack configure $w -padx [list 0 [expr {$bd + 1}]]
	} else {
	    pack configure $w -padx [list 0 $bd]
	}
    } elseif {$::tk_version >= 8.4 &&
	      [string compare [winfo class $w] "Label"] == 0} {
	pack configure $w -padx [list 0 1]
    }
}

#
# Private procedures implementing the mentry widget command
# =========================================================
#

#------------------------------------------------------------------------------
# mentry::mentryWidgetCmd
#
# This procedure is invoked to process the Tcl command corresponding to a
# multi-entry widget.
#------------------------------------------------------------------------------
proc mentry::mentryWidgetCmd {win args} {
    set argCount [llength $args]
    if {$argCount == 0} {
	mwutil::wrongNumArgs "$win option ?arg arg ...?"
    }

    upvar ::mentry::ns${win}::data data

    variable cmdOpts
    set cmd [mwutil::fullOpt "option" [lindex $args 0] $cmdOpts]
    switch $cmd {
	adjustentry {
	    if {$argCount != 3} {
		mwutil::wrongNumArgs "$win $cmd index string"
	    }

	    set n [childIndex [lindex $args 1] $data(maxEntryIdx)]
	    return [adjustentrySubCmd $win $n [lindex $args 2]]
	}

	attrib {
	    return [mwutil::attribSubCmd $win "widget" [lrange $args 1 end]]
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

	clear {
	    if {$argCount < 2 || $argCount > 3} {
		mwutil::wrongNumArgs "$win $cmd firstIndex ?lastIndex?"
	    }

	    set firstIdx [childIndex [lindex $args 1] $data(maxEntryIdx)]
	    if {$argCount == 3} {
		set lastIdx [childIndex [lindex $args 2] $data(maxEntryIdx)]
	    } else {
		set lastIdx $firstIdx
	    }

	    for {set n $firstIdx} {$n <= $lastIdx} {incr n} {
		_[entryPath $win $n] delete 0 end
	    }
	    return ""
	}

	configure {
	    variable configSpecs
	    return [mwutil::configureSubCmd $win configSpecs mentry::doConfig \
		    mentry::doCget [lrange $args 1 end]]
	}

	entries {
	    if {$argCount != 1} {
		mwutil::wrongNumArgs "$win $cmd"
	    }

	    return [entries $win]
	}

	entrycount {
	    if {$argCount != 1} {
		mwutil::wrongNumArgs "$win $cmd"
	    }

	    return $data(entryCount)
	}

	entrylimit {
	    if {$argCount != 2} {
		mwutil::wrongNumArgs "$win $cmd index"
	    }

	    set n [childIndex [lindex $args 1] $data(maxEntryIdx)]
	    return [lindex $data(-body) [expr {$n * 2}]]
	}

	entrypath {
	    if {$argCount != 2} {
		mwutil::wrongNumArgs "$win $cmd index"
	    }

	    set n [childIndex [lindex $args 1] $data(maxEntryIdx)]
	    return [entryPath $win $n]
	}

	getarray {
	    if {$argCount != 2} {
		mwutil::wrongNumArgs "$win $cmd array"
	    }

	    #
	    # The last argument must be an array
	    #
	    set varName [lindex $args 1]
	    set _varName [list $varName]
	    if {[uplevel info exists $_varName] &&
		![uplevel array exists $_varName]} {
		return -code error "variable \"$varName\" isn't array"
	    }

	    upvar $varName arr
	    for {set n 0} {$n < $data(entryCount)} {incr n} {
		set arr($n) [[entryPath $win $n] get]
	    }
	    return ""
	}

	getlist {
	    if {$argCount != 1} {
		mwutil::wrongNumArgs "$win $cmd"
	    }

	    set result {}
	    foreach w [entries $win] {
		lappend result [$w get]
	    }
	    return $result
	}

	getstring {
	    if {$argCount != 1} {
		mwutil::wrongNumArgs "$win $cmd"
	    }

	    set result ""
	    foreach w [winfo children $win] {
		switch [winfo class $w] {
		    Frame { append result [$w.e get] }
		    Entry { append result [$w get] }
		    Label { append result [$w cget -text] }
		}
	    }
	    return $result
	}

	hasattrib {
	    if {$argCount != 2} {
		mwutil::wrongNumArgs "$win $cmd name"
	    }

	    return [mwutil::hasattribSubCmd $win "widget" [lindex $args 1]]
	}

	isempty {
	    switch $argCount {
		1 {
		    foreach w [entries $win] {
			if {[string length [$w get]] != 0} {
			    return 0
			}
		    }
		    return 1
		}
		2 {
		    set n [childIndex [lindex $args 1] $data(maxEntryIdx)]
		    set w [entryPath $win $n]
		    return [expr {[string length [$w get]] == 0}]
		}
		default {
		    mwutil::wrongNumArgs "$win $cmd ?index?"
		}
	    }
	}

	isfull {
	    switch $argCount {
		1 {
		    for {set n 0} {$n < $data(entryCount)} {incr n} {
			set w [entryPath $win $n]
			set limit [lindex $data(-body) [expr {$n * 2}]]
			if {[string length [$w get]] != $limit} {
			    return 0
			}
		    }
		    return 1
		}
		2 {
		    set n [childIndex [lindex $args 1] $data(maxEntryIdx)]
		    set w [entryPath $win $n]
		    set limit [lindex $data(-body) [expr {$n * 2}]]
		    return [expr {[string length [$w get]] == $limit}]
		}
		default {
		    mwutil::wrongNumArgs "$win $cmd ?index?"
		}
	    }
	}

	labelcount {
	    if {$argCount != 1} {
		mwutil::wrongNumArgs "$win $cmd"
	    }

	    return $data(labelCount)
	}

	labelpath {
	    if {$argCount != 2} {
		mwutil::wrongNumArgs "$win $cmd index"
	    }

	    set n [childIndex [lindex $args 1] $data(maxLabelIdx)]
	    return [labelPath $win $n]
	}

	labels {
	    if {$argCount != 1} {
		mwutil::wrongNumArgs "$win $cmd"
	    }

	    return [labels $win]
	}

	put {
	    if {$argCount < 2} {
		mwutil::wrongNumArgs "$win $cmd startIndex\
				      ?string string ...?"
	    }

	    set startIdx [childIndex [lindex $args 1] $data(maxEntryIdx)]
	    return [putSubCmd $win $startIdx [lrange $args 2 end]]
	}

	setentryextrawidth {
	    if {$argCount != 3} {
		mwutil::wrongNumArgs "$win $cmd index amount"
	    }

	    set n [childIndex [lindex $args 1] $data(maxEntryIdx)]
	    return [setentryextrawidthSubCmd $win $n [lindex $args 2]]
	}

	setentryfont {
	    if {$argCount != 3} {
		mwutil::wrongNumArgs "$win $cmd index font"
	    }

	    set n [childIndex [lindex $args 1] $data(maxEntryIdx)]
	    return [setentryfontSubCmd $win $n [lindex $args 2]]
	}

	setentrywidth {
	    if {$argCount != 3} {
		mwutil::wrongNumArgs "$win $cmd index characters"
	    }

	    set n [childIndex [lindex $args 1] $data(maxEntryIdx)]
	    return [setentrywidthSubCmd $win $n [lindex $args 2]]
	}

	unsetattrib {
	    if {$argCount != 2} {
		mwutil::wrongNumArgs "$win $cmd name"
	    }

	    return [mwutil::unsetattribSubCmd $win "widget" [lindex $args 1]]
	}
    }
}

#------------------------------------------------------------------------------
# mentry::adjustentrySubCmd
#
# This procedure is invoked to process the mentry adjustentry subcommand.
#------------------------------------------------------------------------------
proc mentry::adjustentrySubCmd {win index str} {
    set w [entryPath $win $index]
    set font [$w cget -font]

    #
    # Get the max. width of the characters in str
    #
    set len [string length $str]
    set maxWidth 0
    for {set n 0} {$n < $len} {incr n} {
	set width [font measure $font -displayof $w [string index $str $n]]
	if {$width > $maxWidth} {
	    set maxWidth $width
	}
    }

    set zeroWidth [font measure $font -displayof $w "0"]
    if {$maxWidth <= $zeroWidth} {
	return ""
    }

    set maxDelta [expr {$maxWidth - $zeroWidth}]
    upvar ::mentry::ns${win}::data data
    set count [lindex $data(-body) [expr {$index * 2}]]
    set pixels [expr {$maxDelta * $count}]
    set iPadX [expr {($pixels + 1) / 2}]

    variable usingTile
    if {$usingTile} {
	pack configure [winfo parent $w] -ipadx $iPadX
    } else {
	pack configure $w -ipadx $iPadX
    }
    return ""
}

#------------------------------------------------------------------------------
# mentry::putSubCmd
#
# This procedure is invoked to process the mentry put subcommand.
#------------------------------------------------------------------------------
proc mentry::putSubCmd {win startIdx strList} {
    upvar ::mentry::ns${win}::data data

    #
    # If the focus is currently on one of win's children then set it
    # temporarily to the top-level window containing win, to make sure
    # that the after-insert callback condTabToNext will not change it
    #
    set focus [focus -displayof $win]
    if {[string length $focus] != 0 && [string compare $focus "."] != 0 &&
	([string compare [winfo parent $focus] $win] == 0 ||
	 [string compare [winfo parent [winfo parent $focus]] $win] == 0)} {
	focus [winfo toplevel $win]
	set focusChanged 1
    } else {
	set focusChanged 0
    }

    #
    # Attempt to replace the texts of the entry children whose indices are
    # >= startIdx with the given strings, until either the entries or the
    # strings are consumed, by using the delete and insert operations; abort
    # the loop if one of these subcommands is canceled by some before-callback
    #
    set undo 0
    set n $startIdx
    set oldStrings {}
    set oldPositions {}
    foreach str $strList {
	if {$n == $data(entryCount)} {
	    break
	}

	set w [entryPath $win $n]
	lappend oldStrings [$w get]
	lappend oldPositions [$w index insert]
	
	$w delete 0 end
	if {[wcb::canceled $w delete]} {
	    set undo 1
	    break
	}

	$w insert 0 $str
	if {[wcb::canceled $w insert]} {
	    set undo 1
	    break
	}

	incr n
    }

    #
    # Restore the original contents of the entry children if necessary, and
    # in any case restore the position of the insertion cursor in each entry
    #
    set n $startIdx
    foreach oldStr $oldStrings oldPos $oldPositions {
	set w [entryPath $win $n]
	if {$undo} {
	    $w delete 0 end
	    $w insert 0 $oldStr
	}
	$w icursor $oldPos

	incr n
    }

    #
    # Reset the focus if needed and return the negation of $undo
    #
    if {$focusChanged} {
	focus $focus
    }
    return [expr {!$undo}]
}

#------------------------------------------------------------------------------
# mentry::setentryextrawidthSubCmd
#
# This procedure is invoked to process the mentry setentryextrawidth subcommand.
#------------------------------------------------------------------------------
proc mentry::setentryextrawidthSubCmd {win index amount} {
    set w [entryPath $win $index]
    set pixels [winfo pixels $w $amount]
    if {$pixels < 0} {
	set pixels 0
    }
    set iPadX [expr {($pixels + 1) / 2}]

    variable usingTile
    if {$usingTile} {
	pack configure [winfo parent $w] -ipadx $iPadX
    } else {
	pack configure $w -ipadx $iPadX
    }
    return ""
}

#------------------------------------------------------------------------------
# mentry::setentryfontSubCmd
#
# This procedure is invoked to process the mentry setentryfont subcommand.
#------------------------------------------------------------------------------
proc mentry::setentryfontSubCmd {win index font} {
    set w [entryPath $win $index]
    $w configure -font $font

    variable usingTile
    if {!$usingTile} {
	return ""
    }

    variable themeDefaults
    set bd $themeDefaults(-borderwidth)
    set bd2 [expr {2*$bd}]

    set frameWidth [expr {[reqEntryWidth $w] - $bd2}]
    set frameHeight [expr {[winfo reqheight $w] - $bd2}]
    [winfo parent $w] configure -width $frameWidth -height $frameHeight
    place configure $w -x -$bd -relwidth 1.0 -width $bd2 \
		       -y -$bd -relheight 1.0 -height $bd2
    return ""
}

#------------------------------------------------------------------------------
# mentry::setentrywidthSubCmd
#
# This procedure is invoked to process the mentry setentrywidth subcommand.
#------------------------------------------------------------------------------
proc mentry::setentrywidthSubCmd {win index width} {
    set w [entryPath $win $index]
    $w configure -width $width

    variable usingTile
    if {!$usingTile} {
	return ""
    }

    variable themeDefaults
    set bd $themeDefaults(-borderwidth)
    set bd2 [expr {2*$bd}]

    set frameWidth [expr {[reqEntryWidth $w] - $bd2}]
    [winfo parent $w] configure -width $frameWidth
    place configure $w -x -$bd -relwidth 1.0 -width $bd2
    return ""
}

#------------------------------------------------------------------------------
# mentry::childIndex
#
# Checks the index n, rounds it to the nearest value between 0 and max, and
# returns either the rounded value or an error.
#------------------------------------------------------------------------------
proc mentry::childIndex {n max} {
    if {[string first $n "end"] == 0} {
	return $max
    } elseif {[catch {format "%d" $n} index] != 0} {
	return -code error \
	       "bad index \"$n\": must be end or a number"
    } elseif {$index < 0} {
	return 0
    } elseif {$index > $max} {
	return $max
    } else {
	return $index
    }
}

#
# Private callback procedures
# ===========================
#

#------------------------------------------------------------------------------
# mentry::condTabToNext
#
# This after-insert callback checks whether the insertion cursor in the n'th
# entry child of the mentry widget win is just behind the character having the
# index width; if this is the case, it moves the focus to the next enabled
# entry child, selects the content of that widget, and sets the insertion
# cursor to its end.
#------------------------------------------------------------------------------
proc mentry::condTabToNext {width win n w idx str} {
    if {[$w index insert] == $width &&
	[string compare [focus -displayof $win] [entryPath $win $n]] == 0 &&
	[string length [set next [nextNormal $win $n]]] != 0} {
	tabToEntry $next
    }
}

#------------------------------------------------------------------------------
# mentry::condGoToNeighbor
#
# This after-motion callback examines the index idx passed to the last icursor
# command in the n'th entry child of the mentry widget win.  If it was
# negative, the procedure clears the selection in the current entry widget,
# moves the focus to the previous enabled entry child, and sets the insertion
# cursor to the end of that widget; if it was greater than the index of the
# last character, the procedure clears the selection in the current entry
# widget, moves the focus to the next enabled entry child, and sets the
# insertion cursor to the beginning of that widget.
#------------------------------------------------------------------------------
proc mentry::condGoToNeighbor {win n w idx} {
    variable entryClicked
    if {![regexp {^[0-9-]+$} $idx] || $entryClicked ||
	[string compare [focus -displayof $win] [entryPath $win $n]] != 0} {
	return ""
    }

    if {$idx < 0 &&
	[string length [set prev [prevNormal $win $n]]] != 0} {
	$w selection clear
	focus $prev
	entrySetCursor $prev end
    } elseif {$idx > [$w index end] &&
	      [string length [set next [nextNormal $win $n]]] != 0} {
	$w selection clear
	focus $next
	entrySetCursor $next 0
    }
}

#
# Private procedures used in bindings
# ===================================
#

#------------------------------------------------------------------------------
# mentry::updateAppearance
#
# This procedure handles the events <Activate> and <Deactivate> by updating the
# -foreground option of the children of the mentry widget win.
#------------------------------------------------------------------------------
proc mentry::updateAppearance {win event} {
    variable themeDefaults
    upvar ::mentry::ns${win}::data data

    switch $event {
	<Activate> {
	    set data(inActiveWin) 1
	    set labelFg $data(-foreground)
	}

	<Deactivate> {
	    set data(inActiveWin) 0
	    set labelFg $themeDefaults(-foreground,background)
	}
    }

    foreach w [labels $win] {
	$w configure -foreground $labelFg
    }
}

#------------------------------------------------------------------------------
# mentry::updateConfigSpecs
#
# This procedure handles the virtual event <<ThemeChanged>> by updating the
# theme-specific default values of some mentry configuration options.
#------------------------------------------------------------------------------
proc mentry::updateConfigSpecs win {
    #
    # This might be an "after idle" callback; check whether the window exists
    #
    if {![winfo exists $win]} {
	return ""
    }

    set currentTheme [mwutil::currentTheme]
    upvar ::mentry::ns${win}::data data
    if {[string compare $currentTheme $data(currentTheme)] == 0} {
	if {[string compare $currentTheme "tileqt"] == 0} {
	    set widgetStyle [tileqt_currentThemeName]
	    if {[info exists ::env(KDE_SESSION_VERSION)] &&
		[string length $::env(KDE_SESSION_VERSION)] != 0} {
		set colorScheme [getKdeConfigVal "General" "ColorScheme"]
	    } else {
		set colorScheme [getKdeConfigVal "KDE" "colorScheme"]
	    }
	    if {[string compare $widgetStyle $data(widgetStyle)] == 0 &&
		[string compare $colorScheme $data(colorScheme)] == 0} {
		return ""
	    }
	} else {
	    return ""
	}
    }

    variable usingTile
    if {$usingTile} {
	#
	# Populate the array tmp with values corresponding to the old theme
	# and the array themeDefaults with values corresponding to the new one
	#
	array set tmp $data(themeDefaults)
	setThemeDefaults

	#
	# Set those configuration options whose values equal the old
	# theme-specific defaults to the new theme-specific ones
	#
	variable themeDefaults
	foreach opt {-disabledbackground -readonlybackground} {
	    set data($opt) $themeDefaults($opt)
	}
	foreach opt {-background -foreground -font} {
	    if {[string compare $data($opt) $tmp($opt)] == 0} {
		doConfig $win $opt $themeDefaults($opt)
	    }
	}
	adjustChildren $win

	#
	# Most themes support the -fieldbackground option for the
	# style element Entry.field.  The aqua theme supports the
	# -background option instead.  Some themes (like Arc, plastik,
	# tileqt, vista, and xpnative) don't support either of them.
	#
	foreach style [list $win.TEntry Hull$win.TEntry] {
	    styleConfig $style -fieldbackground $data(-background) \
			       -background      $data(-background)
	}

	#
	# Set the foreground color of the label children
	#
	if {$data(inActiveWin)} {
	    set labelFg $data(-foreground)
	} else {
	    set labelFg $themeDefaults(-foreground,background)
	}
	foreach w [labels $win] {
	    $w configure -foreground $labelFg \
			 -disabledforeground $themeDefaults(-disabledforeground)
	}
    }

    set data(currentTheme) $currentTheme
    if {[string compare $currentTheme "tileqt"] == 0} {
	set data(widgetStyle) [tileqt_currentThemeName]
	if {[info exists ::env(KDE_SESSION_VERSION)] &&
	    [string length $::env(KDE_SESSION_VERSION)] != 0} {
	    set data(colorScheme) [getKdeConfigVal "General" "ColorScheme"]
	} else {
	    set data(colorScheme) [getKdeConfigVal "KDE" "colorScheme"]
	}
    } else {
	set data(widgetStyle) ""
	set data(colorScheme) ""
    }
    if {$usingTile} {
	set data(themeDefaults) [array get themeDefaults]
    }
}

#------------------------------------------------------------------------------
# mentry::tabToPrev
#
# This procedure handles <Control-Left> events in the entry child w of a mentry
# widget.  If possible, it moves the focus to the previous enabled entry child,
# selects the content of that widget, and sets the insertion cursor to its end;
# otherwise, it moves the insertion cursor to the beginning of the current
# entry and clears the selection in that widget.
#------------------------------------------------------------------------------
proc mentry::tabToPrev w {
    parseChildPath $w win n
    set prev [prevNormal $win $n]
    if {[string length $prev] != 0} {
	tabToEntry $prev
    } else {
	entrySetCursor $w 0
    }
    return -code break ""
}

#------------------------------------------------------------------------------
# mentry::tabToNext
#
# This procedure handles <Control-Right> events in the entry child w of a
# mentry widget.  If possible, it moves the focus to the next enabled entry
# child, selects the content of that widget, and sets the insertion cursor to
# its end; otherwise, it moves the insertion cursor to the end of the current
# entry and clears the selection in that widget.
#------------------------------------------------------------------------------
proc mentry::tabToNext w {
    parseChildPath $w win n
    set next [nextNormal $win $n]
    if {[string length $next] != 0} {
	tabToEntry $next
    } else {
	entrySetCursor $w end
    }
    return -code break ""
}

#------------------------------------------------------------------------------
# mentry::goToHome
#
# This procedure handles <Home> events in the entry child w of a mentry widget.
# It clears the selection in the current entry, moves the focus to the first
# enabled entry child, and sets the insertion cursor to the beginning of that
# widget.
#------------------------------------------------------------------------------
proc mentry::goToHome w {
    parseChildPath $w win n
    set first [firstNormal $win]
    $w selection clear
    focus $first
    catch {entrySetCursor $first 0}
    return -code break ""
}

#------------------------------------------------------------------------------
# mentry::goToEnd
#
# This procedure handles <End> events in the entry child w of a mentry widget.
# It clears the selection in the current entry, moves the focus to the last
# enabled entry child, and sets the insertion cursor to the end of that widget.
#------------------------------------------------------------------------------
proc mentry::goToEnd w {
    parseChildPath $w win n
    set last [lastNormal $win]
    $w selection clear
    focus $last
    catch {entrySetCursor $last end}
    return -code break ""
}

#------------------------------------------------------------------------------
# mentry::selectToHome
#
# This procedure handles <Shift-Home> events in the entry child w of a mentry
# widget.  It moves the focus to the first enabled entry child, sets the
# insertion cursor to the beginning of that widget, and either extends the
# selection to that position. or clears the selection in w and selects the
# contents of the new widget, depending upon whether the first enabled entry
# child equals w.
#------------------------------------------------------------------------------
proc mentry::selectToHome w {
    parseChildPath $w win n
    set first [firstNormal $win]
    if {[string compare $first $w] != 0} {
	$w selection clear
	focus $first
	catch {$first icursor end}
    }
    catch {
	if {[$first selection present]} {
	    $first selection range 0 sel.last
	} else {
	    $first selection range 0 insert
	}
	$first icursor 0
	entryViewCursor $first
    }
    return -code break ""
}

#------------------------------------------------------------------------------
# mentry::selectToEnd
#
# This procedure handles <Shift-End> events in the entry child w of a mentry
# widget.  It moves the focus to the last enabled entry child, sets the
# insertion cursor to the end of that widget, and either extends the
# selection to that position. or clears the selection in w and selects the
# contents of the new widget, depending upon whether the last enabled entry
# child equals w.
#------------------------------------------------------------------------------
proc mentry::selectToEnd w {
    parseChildPath $w win n
    set last [lastNormal $win]
    if {[string compare $last $w] != 0} {
	$w selection clear
	focus $last
	catch {$last icursor 0}
    }
    catch {
	if {[$last selection present]} {
	    $last selection range sel.first end
	} else {
	    $last selection range insert end
	}
	$last icursor end
	entryViewCursor $last
    }
    return -code break ""
}

#------------------------------------------------------------------------------
# mentry::backSpace
#
# This procedure handles <BackSpace> events in the entry child w of a mentry
# widget.  It deletes the selection if there is one in the entry.  Otherwise,
# it deletes either the character to the left of the insertion cursor in the
# current entry, or the last character of the previous enabled entry child,
# depending upon the position of the insertion cursor.  In the second case, it
# also moves the focus to the previous enabled entry child and sets the
# insertion cursor to its end.
#------------------------------------------------------------------------------
proc mentry::backSpace w {
    parseChildPath $w win n
    if {[$w selection present]} {
	$w delete sel.first sel.last
    } else {
	if {[$w index insert] == 0 &&
	    [string length [set prev [prevNormal $win $n]]] != 0} {
	    focus $prev
	    entrySetCursor $prev end
	    set w $prev
	}

	set x [expr {[$w index insert] - 1}]
	if {$x >= 0} {
	    $w delete $x
	}
	if {[$w index insert] <= [$w index @0]} {
	    set range [$w xview]
	    set left  [lindex $range 0]
	    set right [lindex $range 1]
	    $w xview moveto [expr {$left - ($right - $left)/2.0}]
	}
    }
    return -code break ""
}

#------------------------------------------------------------------------------
# mentry::delToLeft
#
# This procedure handles <Meta-BackSpace> and <Meta-Delete> events in the entry
# child w of a mentry widget.  It deletes either all characters to the left of
# the insertion cursor in the current entry, or the contents of the previous
# enabled entry child, depending upon the position of the insertion cursor.  In
# the second case, it also clears the selection in the current entry widget and
# moves the focus to the previous enabled entry child.
#------------------------------------------------------------------------------
proc mentry::delToLeft w {
    parseChildPath $w win n
    if {[$w index insert] == 0 &&
	[string length [set prev [prevNormal $win $n]]] != 0} {
	$w selection clear
	focus $prev
	$prev delete 0 end
    } else {
	$w delete 0 insert
    }
    return -code break ""
}

#------------------------------------------------------------------------------
# mentry::procLabelChars
#
# This procedure handles <KeyPress> events in the entry child w of a mentry
# widget.  If this entry is non-empty and the character char corresponding to
# the event is contained in the text displayed in the label child following the
# entry (if any) then the procedure moves the focus to the next enabled entry
# child, selects the content of that widget, and sets the insertion cursor to
# its end.
#------------------------------------------------------------------------------
proc mentry::procLabelChars {w char} {
    parseChildPath $w win n
    set label [labelPath $win $n]
    if {![winfo exists $label] ||
	[string first $char [$label cget -text]] < 0} {
	return ""
    }

    if {[string length [$w get]] == 0} {
	return -code break ""
    }

    set next [nextNormal $win $n]
    if {[string length $next] != 0} {
	tabToEntry $next
    }
    return -code break ""
}

#------------------------------------------------------------------------------
# mentry::labelButton1
#
# This procedure handles <Button-1> events in the label child w of a mentry
# widget.  It generates a <Button-1> event in the previous enabled entry child,
# after its last character.
#------------------------------------------------------------------------------
proc mentry::labelButton1 w {
    parseChildPath $w win n
    incr n
    set entry [prevNormal $win $n]
    if {[string length $entry] != 0} {
	set bbox [$entry bbox end]
	set x [expr {[lindex $bbox 0] + [lindex $bbox 2]}]
	event generate $entry <Button-1> -x $x

	variable entryClicked
	set entryClicked 0
    }
}

#------------------------------------------------------------------------------
# mentry::parseChildPath
#
# Extracts the path name of the mentry widget as well as the child's index from
# the path name w of a child of a mentry widget.
#------------------------------------------------------------------------------
proc mentry::parseChildPath {w winName indexName} {
    upvar $winName win $indexName index

    return [regexp {^(.+)\.[fel]([0-9]+)(\.e)?$} $w dummy win index]
}

#
# Private utility procedures
# ==========================
#

#------------------------------------------------------------------------------
# mentry::framePath
#
# Returns the path name of the n'th frame child of the tile-based mentry widget
# win.
#------------------------------------------------------------------------------
proc mentry::framePath {win n} {
    return $win.f$n
}

#------------------------------------------------------------------------------
# mentry::entryPath
#
# Returns the path name of the n'th entry (grand)child of the mentry widget win.
#------------------------------------------------------------------------------
proc mentry::entryPath {win n} {
    variable usingTile

    if {$usingTile} {
	return $win.f$n.e
    } else {
	return $win.e$n
    }
}

#------------------------------------------------------------------------------
# mentry::labelPath
#
# Returns the path name of the n'th label child of the mentry widget win.
#------------------------------------------------------------------------------
proc mentry::labelPath {win n} {
    return $win.l$n
}

#------------------------------------------------------------------------------
# mentry::entries
#
# Returns a list containing the path names of the entry children of the widget
# win.
#------------------------------------------------------------------------------
proc mentry::entries win {
    set lst {}
    foreach w [winfo children $win] {
	set class [winfo class $w]
	if {[string compare $class "Entry"] == 0} {
	    lappend lst $w
	} elseif {[string compare $class "Frame"] == 0} {
	    lappend lst $w.e
	}
    }
    return $lst
}

#------------------------------------------------------------------------------
# mentry::labels
#
# Returns a list containing the path names of the label children of the widget
# win.
#------------------------------------------------------------------------------
proc mentry::labels win {
    set lst {}
    foreach w [winfo children $win] {
	if {[string compare [winfo class $w] "Label"] == 0} {
	    lappend lst $w
	}
    }
    return $lst
}

#------------------------------------------------------------------------------
# mentry::prevNormal
#
# Returns the path name of the rightmost enabled entry child to the left of the
# n'th entry of the mentry widget win.
#------------------------------------------------------------------------------
proc mentry::prevNormal {win n} {
    for {incr n -1} {$n >= 0} {incr n -1} {
	set w [entryPath $win $n]
	if {[string compare [$w cget -state] "normal"] == 0} {
	    return $w
	}
    }
    return ""
}

#------------------------------------------------------------------------------
# mentry::nextNormal
#
# Returns the path name of the leftmost enabled entry child to the right of the
# n'th entry of the mentry widget win.
#------------------------------------------------------------------------------
proc mentry::nextNormal {win n} {
    upvar ::mentry::ns${win}::data data

    for {incr n} {$n < $data(entryCount)} {incr n} {
	set w [entryPath $win $n]
	if {[string compare [$w cget -state] "normal"] == 0} {
	    return $w
	}
    }
    return ""
}

#------------------------------------------------------------------------------
# mentry::firstNormal
#
# Returns the path name of the first enabled entry child of the mentry widget
# win.
#------------------------------------------------------------------------------
proc mentry::firstNormal win {
    return [nextNormal $win -1]
}

#------------------------------------------------------------------------------
# mentry::lastNormal
#
# Returns the path name of the last enabled entry child of the mentry widget
# win.
#------------------------------------------------------------------------------
proc mentry::lastNormal win {
    upvar ::mentry::ns${win}::data data
    return [prevNormal $win $data(entryCount)]
}

#------------------------------------------------------------------------------
# mentry::adjustChildren
#
# Adjusts the geometry of the children of the tile-based mentry widget win.
#------------------------------------------------------------------------------
proc mentry::adjustChildren win {
    set childList [winfo children $win]
    set childCount [llength $childList]
    if {$childCount == 0} {
	return ""
    }

    variable themeDefaults
    set bd $themeDefaults(-borderwidth)
    set bd2 [expr {2*$bd}]

    pack configure [framePath $win 0] -padx [list $bd 0]

    foreach w $childList {
	if {[string compare [winfo class $w] "Frame"] == 0} {
	    set frameWidth [expr {[reqEntryWidth $w.e] - $bd2}]
	    set frameHeight [expr {[winfo reqheight $w.e] - $bd2}]
	    $w configure -width $frameWidth -height $frameHeight
	    place configure $w.e -x -$bd -relwidth 1.0 -width $bd2 \
				 -y -$bd -relheight 1.0 -height $bd2
	    pack configure $w -pady $bd
	} else {
	    pack configure $w -pady $themeDefaults(-labelpady)
	}
    }

    if {$childCount == 1} {
	pack configure $w -padx [list $bd $bd]
    } elseif {[string compare [winfo class $w] "Label"] == 0} {
	pack configure $w -padx [list 0 [expr {$bd + 1}]]
    } else {
	pack configure $w -padx [list 0 $bd]
    }
}

#------------------------------------------------------------------------------
# mentry::tabToEntry
#
# Moves the focus to the specified entry widget, selects its contents, and sets
# the insertion cursor to its end.
#------------------------------------------------------------------------------
proc mentry::tabToEntry w {
    focus $w
    $w selection range 0 end
    $w icursor end
}

#------------------------------------------------------------------------------
# mentry::entrySetCursor
#
# Moves the insertion cursor to the specified position in the given entry
# widget, clears the selection, and makes sure that the insertion cursor is
# visible.
#------------------------------------------------------------------------------
proc mentry::entrySetCursor {w pos} {
    $w icursor $pos
    $w selection clear
    entryViewCursor $w
}

#------------------------------------------------------------------------------
# mentry::entryViewCursor
#
# Makes sure that the insertion cursor in the specified entry is visible by
# adjusting the view if necessary.
#------------------------------------------------------------------------------
proc mentry::entryViewCursor w {
    set c [$w index insert]
    if {$c < [$w index @0] || $c > [$w index @[winfo width $w]]} {
	$w xview $c
    }
}

#------------------------------------------------------------------------------
# mentry::configEntry
#
# This procedure configures the entry widget w according to the options and
# their values given in args.
#------------------------------------------------------------------------------
proc mentry::configEntry {w args} {
    foreach {opt val} $args {
	switch -- $opt {
	    -background {
		if {[string compare [winfo class $w] "TEntry"] != 0} {
		    $w configure $opt $val
		}
	    }

	    -foreground {
		if {[string compare [winfo class $w] "TEntry"] == 0} {
		    variable themeDefaults
		    if {[string compare [winfo rgb $w $val] [winfo rgb $w \
			 $themeDefaults(-foreground)]] == 0} {
			set val ""    ;# for automatic adaptation to the states
		    }
		    $w instate !disabled {
			$w configure $opt $val
		    }
		} else {
		    $w configure $opt $val
		}
	    }

	    -state {
		$w configure $opt $val
		if {[string compare [winfo class $w] "TEntry"] == 0} {
		    variable themeDefaults
		    if {[string compare $val "disabled"] == 0} {
			#
			# Set the entry's foreground color to the theme-
			# specific one (needed for current tile versions)
			#
			$w configure -foreground ""
		    } else {
			#
			# Restore the entry's foreground color
			# (needed for current tile versions)
			#
			if {[parseChildPath $w win n]} {
			    upvar ::mentry::ns${win}::data data
			    configEntry $w -foreground $data(-foreground)
			}
		    }
		}
	    }

	    default {
		$w configure $opt $val
	    }
	}
    }
}

#------------------------------------------------------------------------------
# mentry::reqEntryWidth
#
# Returns the requested width in pixels of the tile entry widget w.
#------------------------------------------------------------------------------
proc mentry::reqEntryWidth w {
    if {[string compare [mwutil::currentTheme] "vista"] == 0} {
	#
	# If the tile entry was created with -width 1 or -width 2 then
	# in the "vista" theme its width will silently be changed to 3.
	# For this reason, compute the widget's requested width based
	# on its font rather than returning [winfo reqwidth $w].
	#
	set zeroWidth [font measure [$w cget -font] -displayof $w "0"]
	return [expr {[$w cget -width] * $zeroWidth + 6}]
    } else {
	return [winfo reqwidth $w]
    }
}
