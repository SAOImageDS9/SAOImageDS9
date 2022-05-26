#==============================================================================
# Contains private configuration procedures for tablelist widgets.
#
# Copyright (c) 2000-2019  Csaba Nemethi (E-mail: csaba.nemethi@t-online.de)
#==============================================================================

#------------------------------------------------------------------------------
# tablelist::extendConfigSpecs
#
# Extends the elements of the array configSpecs.
#------------------------------------------------------------------------------
proc tablelist::extendConfigSpecs {} {
    variable usingTile
    variable helpLabel
    variable configSpecs
    variable winSys

    #
    # Extend some elements of the array configSpecs
    #
    lappend configSpecs(-acceptchildcommand)	{}
    lappend configSpecs(-acceptdropcommand)	{}
    lappend configSpecs(-activestyle)		frame
    lappend configSpecs(-autofinishediting)	0
    lappend configSpecs(-autoscan)		1
    lappend configSpecs(-collapsecommand)	{}
    lappend configSpecs(-colorizecommand)	{}
    lappend configSpecs(-columns)		{}
    lappend configSpecs(-columntitles)		{}
    lappend configSpecs(-customdragsource)	0
    lappend configSpecs(-displayondemand)	1
    lappend configSpecs(-editendcommand)	{}
    lappend configSpecs(-editselectedonly)	0
    lappend configSpecs(-editstartcommand)	{}
    lappend configSpecs(-expandcommand)		{}
    lappend configSpecs(-forceeditendcommand)	0
    lappend configSpecs(-fullseparators)	0
    lappend configSpecs(-incrarrowtype)		up
    lappend configSpecs(-instanttoggle)		0
    lappend configSpecs(-labelcommand)		{}
    lappend configSpecs(-labelcommand2)		{}
    lappend configSpecs(-labelrelief)		raised
    lappend configSpecs(-listvariable)		{}
    lappend configSpecs(-movablecolumns)	0
    lappend configSpecs(-movablerows)		0
    lappend configSpecs(-populatecommand)	{}
    lappend configSpecs(-protecttitlecolumns)	0
    lappend configSpecs(-resizablecolumns)	1
    lappend configSpecs(-selectfiltercommand)	{}
    lappend configSpecs(-selecttype)		row
    lappend configSpecs(-setfocus)		1
    lappend configSpecs(-showarrow)		1
    lappend configSpecs(-showbusycursor)	1
    lappend configSpecs(-showeditcursor)	1
    lappend configSpecs(-showhorizseparator)	1
    lappend configSpecs(-showlabels)		1
    lappend configSpecs(-showseparators)	0
    lappend configSpecs(-snipstring)		...
    lappend configSpecs(-sortcommand)		{}
    lappend configSpecs(-spacing)		0
    lappend configSpecs(-stretch)		{}
    lappend configSpecs(-stripebackground)	{}
    lappend configSpecs(-stripeforeground)	{}
    lappend configSpecs(-stripeheight)		1
    lappend configSpecs(-targetcolor)		black
    lappend configSpecs(-tight)			0
    lappend configSpecs(-titlecolumns)		0
    lappend configSpecs(-tooltipaddcommand)	{}
    lappend configSpecs(-tooltipdelcommand)	{}
    lappend configSpecs(-treecolumn)		0
    lappend configSpecs(-xmousewheelwindow)	{}
    lappend configSpecs(-ymousewheelwindow)	{}

    #
    # Append the default values of the configuration options
    # of a temporary, invisible listbox widget to the values
    # of the corresponding elements of the array configSpecs
    #
    set helpListbox .__helpListbox
    for {set n 2} {[winfo exists $helpListbox]} {incr n} {
	set helpListbox .__helpListbox$n
    }
    listbox $helpListbox
    foreach configSet [$helpListbox configure] {
	if {[llength $configSet] != 2} {
	    set opt [lindex $configSet 0]
	    if {[info exists configSpecs($opt)]} {
		lappend configSpecs($opt) [lindex $configSet 3]
	    }
	}
    }
    destroy $helpListbox

    set helpLabel .__helpLabel
    for {set n 2} {[winfo exists $helpLabel]} {incr n} {
	set helpLabel .__helpLabel$n
    }

    if {$usingTile} {
	foreach opt {-highlightbackground -highlightcolor -highlightthickness
		     -labelactivebackground -labelactiveforeground
		     -labelbackground -labelbg -labeldisabledforeground
		     -labelheight} {
	    unset configSpecs($opt)
	}

	#
	# Append theme-specific values to some elements of the
	# array configSpecs and initialize some tree resources
	#
	if {[string compare [mwutil::currentTheme] "tileqt"] == 0} {
	    tileqt_kdeStyleChangeNotification 
	}
	setThemeDefaults
	variable themeDefaults
	set treeStyle $themeDefaults(-treestyle)
	${treeStyle}TreeImgs 
	variable maxIndentDepths
	set maxIndentDepths($treeStyle) 0

	ttk::label $helpLabel -takefocus 0

	#
	# Define the header label layout
	#
	style theme settings "default" {
	    style layout TablelistHeader.TLabel {
		Treeheading.cell
		Treeheading.border -children {
		    Label.padding -children {
			Label.label
		    }
		}
	    }
	}
	if {[string length [package provide ttk::theme::aqua]] != 0 ||
	    [string length [package provide tile::theme::aqua]] != 0} {
	    style theme settings "aqua" {
		if {[info exists ::tile::patchlevel] &&
		    [string compare $::tile::patchlevel "0.6.4"] < 0} {
		    style layout TablelistHeader.TLabel {
			Treeheading.cell
			Label.padding -children {
			    Label.label -side top
			    Separator.hseparator -side bottom
			}
		    }
		} else {
		    style layout TablelistHeader.TLabel {
			Treeheading.cell
			Label.padding -children {
			    Label.label -side top
			}
		    }
		}
		style map TablelistHeader.TLabel -foreground [list \
		    {disabled background} #a3a3a3 disabled #a3a3a3 \
		    background black]

		#
		# Determine the value of the variable newAquaSupport
		#
		set helpHdrLabel .__helpHdrLabel
		for {set n 2} {[winfo exists $helpHdrLabel]} {incr n} {
		    set helpHdrLabel .__helpHdrLabel$n
		}
		ttk::label $helpHdrLabel -style TablelistHeader.TLabel
		variable newAquaSupport \
		    [expr {[winfo reqheight $helpHdrLabel] == 24}]
		destroy $helpHdrLabel
	    }
	}
    } else {
	if {$::tk_version < 8.3} {
	    unset configSpecs(-acceptchildcommand)
	    unset configSpecs(-collapsecommand)
	    unset configSpecs(-expandcommand)
	    unset configSpecs(-populatecommand)
	    unset configSpecs(-titlecolumns)
	    unset configSpecs(-treecolumn)
	    unset configSpecs(-treestyle)
	}

	#
	# Append the default values of some configuration options
	# of an invisible label widget to the values of the
	# corresponding -label* elements of the array configSpecs
	#
	tk::label $helpLabel -takefocus 0
	foreach optTail {font height} {
	    set configSet [$helpLabel configure -$optTail]
	    lappend configSpecs(-label$optTail) [lindex $configSet 3]
	}
	if {[catch {$helpLabel configure -activebackground} configSet1] == 0 &&
	    [catch {$helpLabel configure -activeforeground} configSet2] == 0} {
	    lappend configSpecs(-labelactivebackground) [lindex $configSet1 3]
	    lappend configSpecs(-labelactiveforeground) [lindex $configSet2 3]
	} else {
	    unset configSpecs(-labelactivebackground)
	    unset configSpecs(-labelactiveforeground)
	}
	if {[catch {$helpLabel configure -disabledforeground} configSet] == 0} {
	    lappend configSpecs(-labeldisabledforeground) [lindex $configSet 3]
	} else {
	    unset configSpecs(-labeldisabledforeground)
	}
	if {[string compare $winSys "win32"] == 0 &&
	    $::tcl_platform(osVersion) < 5.1} {
	    lappend configSpecs(-labelpady) 0
	} else {
	    set configSet [$helpLabel configure -pady]
	    lappend configSpecs(-labelpady) [lindex $configSet 3]
	}

	#
	# Steal the default values of some configuration
	# options from a temporary, invisible button widget
	#
	set helpButton .__helpButton
	for {set n 2} {[winfo exists $helpButton]} {incr n} {
	    set helpButton .__helpButton$n
	}
	button $helpButton
	foreach opt {-disabledforeground -state} {
	    if {[llength $configSpecs($opt)] == 3} {
		set configSet [$helpButton configure $opt]
		lappend configSpecs($opt) [lindex $configSet 3]
	    }
	}
	foreach optTail {background foreground} {
	    set configSet [$helpButton configure -$optTail]
	    lappend configSpecs(-label$optTail) [lindex $configSet 3]
	}
	if {[string compare $winSys "classic"] == 0 ||
	    [string compare $winSys "aqua"] == 0} {
	    lappend configSpecs(-labelborderwidth) 1
	} else {
	    set configSet [$helpButton configure -borderwidth]
	    lappend configSpecs(-labelborderwidth) [lindex $configSet 3]
	}
	destroy $helpButton

	#
	# Set the default values of the -arrowcolor,
	# -arrowdisabledcolor, -arrowstyle, and -treestyle options
	#
	switch $winSys {
	    x11 {
		set arrowColor		black
		set arrowDisabledColor	#a3a3a3
		set arrowStyle		flat8x4
		set treeStyle		gtk
	    }

	    win32 {
		if {$::tcl_platform(osVersion) < 5.1} {		;# Win native
		    set arrowColor		{}
		    set arrowDisabledColor	{}
		    set arrowStyle		sunken8x7
		    set treeStyle		winnative

		} elseif {$::tcl_platform(osVersion) == 5.1} {	;# Win XP
		    switch [winfo rgb . SystemHighlight] {
			"12593 27242 50629" {			;# Win XP Blue
			    set arrowColor	#aca899
			    set arrowStyle	flat9x5
			    set treeStyle	winxpBlue
			}
			"37779 41120 28784" {			;# Win XP Olive
			    set arrowColor	#aca899
			    set arrowStyle	flat9x5
			    set treeStyle	winxpOlive
			}
			"45746 46260 49087" {			;# Win XP Silver
			    set arrowColor	#aca899
			    set arrowStyle	flat9x5
			    set treeStyle	winxpSilver
			}
			default {				;# Win Classic
			    set arrowColor	SystemButtonShadow
			    set arrowStyle	flat7x4
			    set treeStyle	winnative
			}
		    }
		    set arrowDisabledColor	SystemDisabledText

		} elseif {$::tcl_platform(osVersion) == 6.0} {	;# Win Vista
		    variable scalingpct

		    switch [winfo rgb . SystemHighlight] {
			"13107 39321 65535" {			;# Vista Aero
			    set arrowColor	#569bc0
			    switch $scalingpct {
				100 { set arrowStyle	photo7x4 }
				125 { set arrowStyle	photo9x5 }
				150 { set arrowStyle	photo11x6 }
				200 { set arrowStyle	photo15x8 }
			    }
			    set treeStyle	vistaAero
			}
			default {				;# Win Classic
			    set arrowColor	SystemButtonShadow
			    switch $scalingpct {
				100 { set arrowStyle	flat7x4 }
				125 { set arrowStyle	flat9x5 }
				150 { set arrowStyle	flat11x6 }
				200 { set arrowStyle	flat15x8 }
			    }
			    set treeStyle	vistaClassic
			}
		    }
		    set arrowDisabledColor	SystemDisabledText

		} elseif {$::tcl_platform(osVersion) < 10.0} {	;# Win 7/8
		    variable scalingpct

		    switch [winfo rgb . SystemHighlight] {
			"13107 39321 65535" {			;# Win 7/8 Aero
			    set arrowColor	#569bc0
			    switch $scalingpct {
				100 { set arrowStyle	photo7x4 }
				125 { set arrowStyle	photo9x5 }
				150 { set arrowStyle	photo11x6 }
				200 { set arrowStyle	photo15x8 }
			    }
			    set treeStyle	win7Aero
			}
			default {				;# Win Classic
			    set arrowColor	SystemButtonShadow
			    switch $scalingpct {
				100 { set arrowStyle	flat7x4 }
				125 { set arrowStyle	flat9x5 }
				150 { set arrowStyle	flat11x6 }
				200 { set arrowStyle	flat15x8 }
			    }
			    set treeStyle	win7Classic
			}
		    }
		    set arrowDisabledColor	SystemDisabledText

		} else {					;# Win 10
		    variable scalingpct
		    switch $scalingpct {
			100 { set arrowStyle	flatAngle7x4 }
			125 { set arrowStyle	flatAngle9x5 }
			150 { set arrowStyle	flatAngle11x6 }
			200 { set arrowStyle	flatAngle15x8 }
		    }

		    set arrowColor		#595959
		    set arrowDisabledColor	SystemDisabledText
		    set treeStyle		win10
		}
	    }

	    classic -
	    aqua {
		scan $::tcl_platform(osVersion) "%d" majorOSVersion
		if {$majorOSVersion >= 14} {		;# OS X 10.10 or higher
		    set arrowColor	#404040
		    set arrowStyle	flatAngle7x4
		} else {
		    set arrowColor	#777777
		    variable pngSupported
		    if {$pngSupported} {
			set arrowStyle	photo7x7
		    } else {
			set arrowStyle	flat7x7
		    }
		}
		set arrowDisabledColor	#a3a3a3
		set treeStyle		aqua
	    }
	}
	lappend configSpecs(-arrowcolor)		$arrowColor
	lappend configSpecs(-arrowdisabledcolor)	$arrowDisabledColor
	lappend configSpecs(-arrowstyle)		$arrowStyle
	if {$::tk_version >= 8.3} {
	    lappend configSpecs(-treestyle)		$treeStyle
	    ${treeStyle}TreeImgs 
	    variable maxIndentDepths
	    set maxIndentDepths($treeStyle) 0
	}
    }

    #
    # Set the default values of the -movecolumncursor,
    # -movecursor, and -resizecursor options
    #
    switch $winSys {
	aqua {
	    set movecolumnCursor	closedhand
	    set moveCursor		pointinghand
	    if {[catch {$helpLabel configure -cursor resizeleftright}] == 0} {
		set resizeCursor	resizeleftright
	    } else {
		set resizeCursor	sb_h_double_arrow
	    }
	}

	default {
	    set movecolumnCursor	icon
	    set moveCursor		hand2
	    set resizeCursor		sb_h_double_arrow
	}
    }
    lappend configSpecs(-movecolumncursor)	$movecolumnCursor
    lappend configSpecs(-movecursor)		$moveCursor
    lappend configSpecs(-resizecursor)		$resizeCursor

    variable centerArrows 0
    if {[string compare $winSys "win32"] == 0 &&
	($::tcl_platform(osVersion) >= 10.0 ||
	 ($::tcl_platform(osVersion) >= 6.0 &&
	  [string compare [winfo rgb . SystemHighlight] \
			  "13107 39321 65535"] == 0))} {	;# Win 7/8 Aero
	set centerArrows 1
    }
}

#------------------------------------------------------------------------------
# tablelist::doConfig
#
# Applies the value val of the configuration option opt to the tablelist widget
# win.
#------------------------------------------------------------------------------
proc tablelist::doConfig {win opt val} {
    variable usingTile
    variable helpLabel
    variable configSpecs
    upvar ::tablelist::ns${win}::data data

    #
    # Apply the value to the widget(s) corresponding to the given option
    #
    switch [lindex $configSpecs($opt) 2] {
	c {
	    #
	    # Apply the value to all children and save the
	    # properly formatted value of val in data($opt)
	    #
	    foreach w [winfo children $win] {
		if {[regexp {^(body|hdr|.sep[0-9]*)$} [winfo name $w]]} {
		    $w configure $opt $val
		}
	    }
	    foreach w [list $data(hdrTxt) $data(hdrFrmLbl) \
			    $data(cornerFrm-ne) $data(cornerLbl) \
			    $data(cornerFrm-sw)] {
		$w configure $opt $val
	    }
	    foreach w [winfo children $data(hdrTxtFrm)] {
		$w configure $opt $val
	    }
	    set data($opt) [$data(hdrFrmLbl) cget $opt]
	}

	b {
	    #
	    # Apply the value to both text widgets and save the
	    # properly formatted value of val in data($opt)
	    #
	    $data(hdrTxt) configure $opt $val
	    set w $data(body)
	    $w configure $opt $val
	    set data($opt) [$w cget $opt]

	    switch -- $opt {
		-background {
		    #
		    # Apply the value to the frame (because of the shadow
		    # colors of its 3-D border), to the separators,
		    # to the header frame, and to the "disabled" tag
		    #
		    if {$usingTile} {
			styleConfig Frame$win.TFrame $opt $val
			styleConfig Seps$win.TSeparator $opt $val
		    } else {
			$win configure $opt $val
			foreach c [winfo children $win] {
			    if {[regexp {^(vsep[0-9]+|hsep2)$} \
					[winfo name $c]]} {
				$c configure $opt $val
			    }
			}
		    }
		    $data(cornerFrm-ne) configure $opt $val
		    $data(hdr) configure $opt $val
		    $data(hdrTxt) tag configure disabled $opt $val
		    $w tag configure disabled $opt $val
		    hdr_updateColorsWhenIdle $win
		    updateColorsWhenIdle $win
		}
		-font {
		    #
		    # Apply the value to the listbox child, rebuild the lists
		    # of the column fonts and tag names, configure the edit
		    # window if present, set up and adjust the columns, and
		    # make sure the items will be redisplayed at idle time
		    #
		    $data(lb) configure $opt $val
		    set data(charWidth) [font measure $val -displayof $win 0]
		    makeColFontAndTagLists $win
		    if {$data(editRow) >= 0} {
			setEditWinFont $win
		    }
		    for {set col 0} {$col < $data(colCount)} {incr col} {
			if {$data($col-maxwidth) > 0} {
			    set data($col-maxPixels) \
				[charsToPixels $win $val $data($col-maxwidth)]
			}
		    }
		    setupColumns $win $data(-columns) 0
		    adjustColumns $win allCols 1
		    redisplayWhenIdle $win
		    updateViewWhenIdle $win
		}
		-foreground {
		    #
		    # Set the background color of the main separators
		    # (if any) to the specified value, and apply
		    # this value to the "disabled" tag if needed
		    #
		    if {$usingTile} {
			styleConfig Main$win.TSeparator -background $val
		    } else {
			if {[winfo exists $data(vsep)]} {
			    $data(vsep) configure -background $val
			}
			if {[winfo exists $data(hsep)1]} {
			    $data(hsep)1 configure -background $val
			}
		    }
		    if {[string length $data(-disabledforeground)] == 0} {
			$data(hdrTxt) tag configure disabled $opt $val
			$w tag configure disabled $opt $val
		    }
		    hdr_updateColorsWhenIdle $win
		    updateColorsWhenIdle $win
		}
	    }
	}

	l {
	    #
	    # Apply the value to all not individually configured labels
	    # and save the properly formatted value of val in data($opt)
	    #
	    set optTail [string range $opt 6 end]	;# remove the -label
	    configLabel $data(hdrFrmLbl) -$optTail $val
	    configLabel $data(cornerLbl) -$optTail $val
	    for {set col 0} {$col < $data(colCount)} {incr col} {
		set w $data(hdrTxtFrmLbl)$col
		if {![info exists data($col$opt)]} {
		    configLabel $w -$optTail $val
		}
	    }
	    if {$usingTile && [string compare $opt "-labelpady"] == 0} {
		set data($opt) $val
	    } else {
		set data($opt) [$data(hdrFrmLbl) cget -$optTail]
	    }

	    switch -- $opt {
		-labelbackground -
		-labelforeground {
		    #
		    # Conditionally apply the value to the
		    # canvases displaying up- or down-arrows
		    #
		    $helpLabel configure -$optTail $val
		    set data($opt) [$helpLabel cget -$optTail]
		    foreach col $data(arrowColList) {
			if {![info exists data($col$opt)]} {
			    configCanvas $win $col
			}
		    }
		}
		-labelborderwidth {
		    #
		    # Adjust the columns (including
		    # the height of the header frame)
		    #
		    adjustColumns $win allLabels 1
		    updateViewWhenIdle $win

		    set borderWidth [winfo pixels $win $data($opt)]
		    if {$borderWidth < 0} {
			set borderWidth 0
		    }
		    place configure $data(cornerLbl) -x -$borderWidth \
			-width [expr {2*$borderWidth}]
		}
		-labeldisabledforeground {
		    #
		    # Conditionally apply the value to the
		    # canvases displaying up- or down-arrows
		    #
		    foreach col $data(arrowColList) {
			if {![info exists data($col$opt)]} {
			    configCanvas $win $col
			}
		    }
		}
		-labelheight -
		-labelpady {
		    #
		    # Adjust the height of the header frame
		    #
		    adjustHeaderHeight $win
		}
	    }
	}

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
		-acceptchildcommand -
		-acceptdropcommand -
		-collapsecommand -
		-colorizecommand -
		-editendcommand -
		-editstartcommand -
		-expandcommand -
		-labelcommand -
		-labelcommand2 -
		-populatecommand -
		-selectfiltercommand -
		-selectmode -
		-sortcommand -
		-tooltipaddcommand -
		-tooltipdelcommand {
		    set data($opt) $val
		}
		-activestyle {
		    #
		    # Configure the "active" tag and save the
		    # properly formatted value of val in data($opt)
		    #
		    variable activeStyles
		    set val [mwutil::fullOpt "active style" $val $activeStyles]
		    set w $data(body)
		    switch $val {
			frame {
			    $w tag configure active \
				   -borderwidth 1 -relief solid -underline ""
			}
			none {
			    $w tag configure active \
				   -borderwidth "" -relief "" -underline ""
			}
			underline {
			    $w tag configure active \
				   -borderwidth "" -relief "" -underline 1
			}
		    }
		    set data($opt) $val
		}
		-arrowcolor -
		-arrowdisabledcolor {
		    #
		    # Save the properly formatted value of val in data($opt)
		    # and set the color of the normal or disabled arrows
		    #
		    if {[string length $val] == 0} {
			set data($opt) ""
		    } else {
			$helpLabel configure -foreground $val
			set data($opt) [$helpLabel cget -foreground]
		    }
		    if {([string compare $opt "-arrowcolor"] == 0 &&
			 !$data(isDisabled)) ||
			([string compare $opt "-arrowdisabledcolor"] == 0 &&
			 $data(isDisabled))} {
			foreach w [info commands $data(hdrTxtFrmCanv)*] {
			    fillArrows $w $val $data(-arrowstyle)
			}
		    }
		}
		-arrowstyle {
		    #
		    # Save the properly formatted value of val in data($opt)
		    # and draw the corresponding arrows in the canvas widgets
		    #
		    variable arrowStyles
		    set data($opt) \
			[mwutil::fullOpt "arrow style" $val $arrowStyles]
		    regexp {^(flat|flatAngle|sunken|photo)([0-9]+)x([0-9]+)$} \
			   $data($opt) dummy relief width height
		    set data(arrowWidth) $width
		    set data(arrowHeight) $height
		    foreach w [info commands $data(hdrTxtFrmCanv)*] {
			createArrows $w $width $height $relief
			if {$data(isDisabled)} {
			    fillArrows $w $data(-arrowdisabledcolor) $data($opt)
			} else {
			    fillArrows $w $data(-arrowcolor) $data($opt)
			}
		    }
		    if {[llength $data(arrowColList)] > 0} {
			foreach col $data(arrowColList) {
			    raiseArrow $win $col
			    lappend whichWidths l$col
			}
			adjustColumns $win $whichWidths 1
			updateViewWhenIdle $win
		    }
		}
		-autofinishediting -
		-autoscan -
		-customdragsource -
		-displayondemand -
		-forceeditendcommand -
		-instanttoggle -
		-movablecolumns -
		-movablerows -
		-protecttitlecolumns -
		-resizablecolumns -
		-setfocus -
		-showbusycursor {
		    #
		    # Save the boolean value specified by val in data($opt)
		    #
		    set data($opt) [expr {$val ? 1 : 0}]
		}
		-columns {
		    #
		    # Set up and adjust the columns, rebuild
		    # the lists of the column fonts and tag
		    # names, and redisplay the items
		    #
		    setupColumns $win $val 1
		    adjustColumns $win allCols 1
		    adjustColIndex $win data(anchorCol) 1
		    adjustColIndex $win data(activeCol) 1
		    makeColFontAndTagLists $win
		    redisplay $win
		    updateViewWhenIdle $win
		}
		-columntitles {
		    set titleCount [llength $val]
		    set colCount $data(colCount)
		    if {$titleCount <= $colCount} {
			#
			# Update the first titleCount column
			# titles and adjust the columns
			#
			set whichWidths {}
			for {set col 0} {$col < $titleCount} {incr col} {
			    set idx [expr {3*$col + 1}]
			    set data(-columns) [lreplace $data(-columns) \
						$idx $idx [lindex $val $col]]
			    lappend whichWidths l$col
			}
			adjustColumns $win $whichWidths 1
			updateViewWhenIdle $win
		    } else {
			#
			# Update the titles of the current columns,
			# extend the column list, and do nearly the
			# same as in the case of the -columns option
			#
			set columns {}
			set col 0
			foreach {width title alignment} $data(-columns) {
			    lappend columns $width [lindex $val $col] $alignment
			    incr col
			}
			for {} {$col < $titleCount} {incr col} {
			    lappend columns 0 [lindex $val $col] left
			}
			setupColumns $win $columns 1
			adjustColumns $win allCols 1
			makeColFontAndTagLists $win
			redisplay $win
			updateViewWhenIdle $win

			#
			# If this option is being set at widget creation time
			# then append "-columns" to the list of command line
			# options processed by the caller proc, to make sure
			# that the columns-related information produced by the
			# setupColumns call above won't be overridden by the
			# default -columns {} option that would otherwise
			# be processed as a non-explicitly specified option
			#
			set callerProc [lindex [info level -1] 0]
			if {[string compare $callerProc \
			     "mwutil::configureWidget"] == 0} {
			    uplevel 1 lappend cmdLineOpts "-columns"
			}
		    }
		}
		-disabledforeground {
		    #
		    # Configure the "disabled" tag in both text widgets and
		    # save the properly formatted value of val in data($opt)
		    #
		    set w $data(body)
		    if {[string length $val] == 0} {
			foreach w [list $data(hdrTxt) $data(body)] {
			    $w tag configure disabled -fgstipple gray50 \
				-foreground $data(-foreground)
			}
			set data($opt) ""
		    } else {
			foreach w [list $data(hdrTxt) $data(body)] {
			    $w tag configure disabled -fgstipple "" \
				-foreground $val
			}
			set data($opt) [$w tag cget disabled -foreground]
		    }
		    if {$data(isDisabled)} {
			hdr_updateColorsWhenIdle $win
			updateColorsWhenIdle $win
		    }
		}
		-editselectedonly {
		    #
		    # Save the boolean value specified by val in data($opt)
		    # and invoke the motion handler if necessary
		    #
		    set data($opt) [expr {$val ? 1 : 0}]
		    if {$data(-showeditcursor)} {
			invokeMotionHandler $win
		    }
		}
		-exportselection {
		    #
		    # Save the boolean value specified by val in
		    # data($opt).  In addition, if the selection is
		    # exported and there are any selected rows in the
		    # widget then make win the new owner of the PRIMARY
		    # selection and register a callback to be invoked
		    # when it loses ownership of the PRIMARY selection
		    #
		    set data($opt) [expr {$val ? 1 : 0}]
		    upvar ::tablelist::ns${win}::selStates selStates
		    if {$val && $data(colCount) != 0 &&
			[array size selStates] != 0} {
			selection own -command \
				[list ::tablelist::lostSelection $win] $win
		    }
		}
		-fullseparators -
		-showhorizseparator {
		    #
		    # Save the boolean value specified by val
		    # in data($opt) and adjust the separators
		    #
		    set data($opt) [expr {$val ? 1 : 0}]
		    adjustSepsWhenIdle $win
		}
		-height {
		    #
		    # Adjust the heights of the body text widget
		    # and of the listbox child, and save the
		    # properly formatted value of val in data($opt)
		    #
		    set val [format "%d" $val]	;# integer check with error msg
		    if {$val <= 0} {
			set viewableRowCount [expr \
			    {$data(itemCount) - $data(nonViewableRowCount)}]
			$data(body) configure $opt $viewableRowCount
			$data(lb) configure $opt $viewableRowCount
		    } else {
			$data(body) configure $opt $val
			$data(lb) configure $opt $val
		    }
		    set data($opt) $val
		}
		-incrarrowtype {
		    #
		    # Save the properly formatted value of val in
		    # data($opt) and raise the corresponding arrows
		    # if the currently mapped canvas widgets
		    #
		    variable arrowTypes
		    set data($opt) \
			[mwutil::fullOpt "arrow type" $val $arrowTypes]
		    foreach col $data(arrowColList) {
			raiseArrow $win $col
		    }
		}
		-listvariable {
		    #
		    # Associate val as list variable with the
		    # given widget and save it in data($opt)
		    #
		    makeListVar $win $val
		    set data($opt) $val
		    if {[string length $val] == 0} {
			set data(hasListVar) 0
		    } else {
			set data(hasListVar) 1
		    }
		}
		-movecolumncursor -
		-movecursor -
		-resizecursor {
		    #
		    # Save the properly formatted value of val in data($opt)
		    #
		    $helpLabel configure -cursor $val
		    set data($opt) [$helpLabel cget -cursor]
		}
		-selectbackground -
		-selectforeground {
		    #
		    # Configure the "select" tag in the body text widget
		    # and save the properly formatted value of val in
		    # data($opt).  Don't use the built-in "sel" tag
		    # because on Windows the selection in a text widget only
		    # becomes visible when the window gets the input focus.
		    #
		    set w $data(body)
		    set optTail [string range $opt 7 end] ;# remove the -select
		    $w tag configure select -$optTail $val
		    set data($opt) [$w tag cget select -$optTail]
		    if {!$data(isDisabled)} {
			updateColorsWhenIdle $win
		    }
		}
		-selecttype {
		    #
		    # Save the properly formatted value of val in data($opt)
		    #
		    variable selectTypes
		    set val [mwutil::fullOpt "selection type" $val $selectTypes]
		    set data($opt) $val
		}
		-selectborderwidth {
		    #
		    # Configure the "select" tag in the body text widget
		    # and save the properly formatted value of val in
		    # data($opt).  Don't use the built-in "sel" tag
		    # because on Windows the selection in a text widget only
		    # becomes visible when the window gets the input focus.
		    # In addition, adjust the line spacing accordingly and
		    # apply the value to the listbox child, too.
		    #
		    set w $data(body)
		    set optTail [string range $opt 7 end] ;# remove the -select
		    $w tag configure select -$optTail $val
		    set data($opt) [$w tag cget select -$optTail]
		    set pixVal [winfo pixels $w $val]
		    if {$pixVal < 0} {
			set pixVal 0
		    }
		    set spacing [winfo pixels $w $data(-spacing)]
		    if {$spacing < 0} {
			set spacing 0
		    }
		    set sp1 [expr {$spacing + $pixVal}]
		    set sp3 [expr {$spacing + $pixVal + !$data(-tight)}]
		    $data(hdrTxt) configure -spacing1 $sp1 -spacing3 $sp3
		    $w configure -spacing1 $sp1 -spacing3 $sp3
		    $data(lb) configure $opt $val
		    redisplayWhenIdle $win
		    updateViewWhenIdle $win
		}
		-setgrid {
		    #
		    # Apply the value to the listbox child and save
		    # the properly formatted value of val in data($opt)
		    #
		    $data(lb) configure $opt $val
		    set data($opt) [$data(lb) cget $opt]
		    updateListboxSetgridOpt $win
		}
		-showarrow {
		    #
		    # Save the boolean value specified by val in
		    # data($opt) and manage or unmanage the
		    # canvases displaying up- or down-arrows
		    #
		    set data($opt) [expr {$val ? 1 : 0}]
		    makeSortAndArrowColLists $win
		    adjustColumns $win allLabels 1
		    updateViewWhenIdle $win
		}
		-showeditcursor {
		    #
		    # Save the boolean value specified by val in
		    # data($opt) and invoke the motion handler
		    #
		    set data($opt) [expr {$val ? 1 : 0}]
		    invokeMotionHandler $win
		}
		-showlabels {
		    #
		    # Save the boolean value specified by val in data($opt)
		    # and adjust the height of the header frame
		    #
		    set data($opt) [expr {$val ? 1 : 0}]
		    adjustHeaderHeight $win
		}
		-showseparators {
		    #
		    # Save the boolean value specified by val in data($opt),
		    # and create or destroy the separators if needed
		    #
		    set oldVal $data($opt)
		    set data($opt) [expr {$val ? 1 : 0}]
		    if {!$oldVal && $data($opt)} {
			createSeps $win
		    } elseif {$oldVal && !$data($opt)} {
			foreach w [winfo children $win] {
			    if {[regexp {^(vsep[0-9]+|hsep2)$} \
					[winfo name $w]]} {
				destroy $w
			    }
			}
		    }
		}
		-snipstring {
		    #
		    # Save val in data($opt), adjust the columns, and make
		    # sure the items will be redisplayed at idle time
		    #
		    set data($opt) $val
		    adjustColumns $win {} 0
		    redisplayWhenIdle $win
		    updateViewWhenIdle $win
		}
		-spacing {
		    #
		    # Adjust the line spacing and save val in data($opt)
		    #
		    set w $data(body)
		    set pixVal [winfo pixels $w $val]
		    if {$pixVal < 0} {
			set pixVal 0
		    }
		    set selectBd [winfo pixels $w $data(-selectborderwidth)]
		    if {$selectBd < 0} {
			set selectBd 0
		    }
		    set sp1 [expr {$pixVal + $selectBd}]
		    set sp3 [expr {$pixVal + $selectBd + !$data(-tight)}]
		    $data(hdrTxt) configure -spacing1 $sp1 -spacing3 $sp3
		    $w configure -spacing1 $sp1 -spacing3 $sp3
		    set data($opt) $val
		    redisplayWhenIdle $win
		    updateViewWhenIdle $win
		}
		-state {
		    #
		    # Apply the value to all labels and their sublabels
		    # (if any), as well as to the edit window (if present),
		    # add/remove the "disabled" tag to/from the contents
		    # of the text widgets, configure the borderwidth
		    # of the "active" and "select" tags, save the
		    # properly formatted value of val in data($opt),
		    # and raise the corresponding arrow in the canvas
		    #
		    variable states
		    set val [mwutil::fullOpt "state" $val $states]
		    catch {
			configLabel $data(hdrFrmLbl) $opt $val
			configLabel $data(cornerLbl) $opt $val
			for {set col 0} {$col < $data(colCount)} {incr col} {
			    configLabel $data(hdrTxtFrmLbl)$col $opt $val
			}
		    }
		    if {$data(editRow) >= 0} {
			catch {$data(bodyFrmEd) configure $opt $val}
		    }
		    set w $data(body)
		    switch $val {
			disabled {
			    $data(hdrTxt) tag add disabled 2.0 end
			    $w tag add disabled 1.0 end
			    $w tag configure select -relief flat
			    $w tag configure curRow -relief flat
			    set data(isDisabled) 1
			}
			normal {
			    $data(hdrTxt) tag remove disabled 2.0 end
			    $w tag remove disabled 1.0 end
			    $w tag configure select -relief raised
			    $w tag configure curRow -relief raised
			    set data(isDisabled) 0
			}
		    }
		    set data($opt) $val
		    foreach col $data(arrowColList) {
			configCanvas $win $col
			raiseArrow $win $col
		    }
		    hdr_updateColorsWhenIdle $win
		    updateColorsWhenIdle $win
		}
		-stretch {
		    #
		    # Save the properly formatted value of val in
		    # data($opt) and stretch the stretchable columns
		    #
		    if {[string first $val "all"] == 0} {
			set data($opt) all
		    } else {
			set data($opt) $val
			sortStretchableColList $win
		    }
		    updateListboxSetgridOpt $win
		    set data(forceAdjust) 1
		    stretchColumnsWhenIdle $win
		}
		-stripebackground -
		-stripeforeground {
		    #
		    # Configure the "stripe" tag in the body text
		    # widget, save the properly formatted value of val
		    # in data($opt), and draw the stripes if necessary
		    #
		    set w $data(body)
		    set optTail [string range $opt 7 end] ;# remove the -stripe
		    $w tag configure stripe -$optTail $val
		    set data($opt) [$w tag cget stripe -$optTail]
		    makeStripesWhenIdle $win
		}
		-stripeheight {
		    #
		    # Save the properly formatted value of val in
		    # data($opt) and draw the stripes if necessary
		    #
		    set val [format "%d" $val]	;# integer check with error msg
		    set data($opt) $val
		    makeStripesWhenIdle $win
		}
		-targetcolor {
		    #
		    # Set the color of the row and column gaps, and save
		    # the properly formatted value of val in data($opt)
		    #
		    $data(rowGap) configure -background $val
		    $data(colGap) configure -background $val
		    set data($opt) [$data(rowGap) cget -background]
		}
		-tight {
		    #
		    # Save the boolean value specified by val
		    # in data($opt) and adjust the line spacing
		    #
		    set data($opt) [expr {$val ? 1 : 0}]
		    set w $data(body)
		    set sp1 [$w cget -spacing1]
		    set sp3 [expr {$sp1 + !$data($opt)}]
		    $data(hdrTxt) configure -spacing3 $sp3
		    $w configure -spacing3 $sp3
		    updateViewWhenIdle $win
		}
		-titlecolumns {
		    #
		    # Update the value of the -xscrollcommand option, save
		    # the properly formatted value of val in data($opt), and
		    # create or destroy the vertical main separator if needed
		    #
		    set oldVal $data($opt)
		    set val [format "%d" $val]	;# integer check with error msg
		    if {$val < 0} {
			set val 0
		    }
		    xviewSubCmd $win 0
		    set w $data(vsep)
		    if {$val == 0} {
			$data(hdrTxt) configure -xscrollcommand \
				      $data(-xscrollcommand)
			if {$oldVal > 0} {
			    destroy $w
			}
		    } else {
			$data(hdrTxt) configure -xscrollcommand ""
			if {$oldVal == 0} {
			    if {$usingTile} {
				ttk::separator $w -style Main$win.TSeparator \
						  -cursor $data(-cursor) \
						  -orient vertical -takefocus 0
			    } else {
				tk::frame $w -background $data(-foreground) \
					     -borderwidth 1 -container 0 \
					     -cursor $data(-cursor) \
					     -highlightthickness 0 \
					     -relief sunken -takefocus 0 \
					     -width 2
			    }
			    bindtags $w [lreplace [bindtags $w] 1 1 \
					 $data(bodyTag) TablelistBody]
			}
			adjustSepsWhenIdle $win
		    }
		    set data($opt) $val
		    set data(xView) {-1 -1}
		    updateHScrlbarWhenIdle $win

		    set titleColsWidth [getTitleColsWidth $win]
		    set cornerFrmWidth $titleColsWidth
		    if {$cornerFrmWidth == 0} {
			set cornerFrmWidth 1
		    } else {
			incr cornerFrmWidth -1
		    }
		    if {$cornerFrmWidth !=
			[winfo reqwidth $data(cornerFrm-sw)]} {
			$data(cornerFrm-sw) configure -width $cornerFrmWidth
			genVirtualEvent $win \
			    <<TablelistTitleColsWidthChanged>> $titleColsWidth
		    }
		}
		-treecolumn {
		    #
		    # Save the properly formatted value of val in
		    # data($opt), its adjusted value in data(treeCol),
		    # and move the tree images into the new tree column
		    #
		    set oldTreeCol $data(treeCol)
		    set newTreeCol [colIndex $win $val 0]
		    set data($opt) $newTreeCol
		    adjustColIndex $win newTreeCol
		    set data(treeCol) $newTreeCol
		    if {$data(colCount) != 0} {
			set data($opt) $newTreeCol
		    }
		    if {$newTreeCol != $oldTreeCol} {
			for {set row 0} {$row < $data(itemCount)} {incr row} {
			    doCellConfig $row $newTreeCol $win -indent \
				[doCellCget $row $oldTreeCol $win -indent]
			    doCellConfig $row $oldTreeCol $win -indent ""
			}
		    }
		}
		-treestyle {
		    #
		    # Update the tree images and save the properly
		    # formatted value of val in data($opt)
		    #
		    variable treeStyles
		    set newStyle [mwutil::fullOpt "tree style" $val $treeStyles]
		    set oldStyle $data($opt)
		    set treeCol $data(treeCol)
		    if {[string compare $newStyle $oldStyle] != 0} {
			${newStyle}TreeImgs 
			variable maxIndentDepths
			if {![info exists maxIndentDepths($newStyle)]} {
			    set maxIndentDepths($newStyle) 0
			}
			if {$data(colCount) != 0} {
			    for {set row 0} {$row < $data(itemCount)} \
				{incr row} {
				set oldImg \
				    [doCellCget $row $treeCol $win -indent]
				set newImg [strMap \
				    [list $oldStyle $newStyle "Sel" ""] $oldImg]
				if {[regexp {^.+Img([0-9]+)$} $newImg \
				     dummy depth]} {
				    if {$depth > $maxIndentDepths($newStyle)} {
					createTreeImgs $newStyle $depth
					set maxIndentDepths($newStyle) $depth
				    }
				    doCellConfig $row $treeCol $win \
						 -indent $newImg
				}
			    }
			}
		    }
		    set data($opt) $newStyle
		    switch -glob $newStyle {
			baghira -
			klearlooks -
			oxygen? -
			phase -
			plastik -
			vista* -
			winnative -
			winxp*		{ set data(protectIndents) 1 }
			default		{ set data(protectIndents) 0 }
		    }
		    if {$data(ownsFocus) && ![info exists data(dispId)]} {
			addActiveTag $win
		    }
		}
		-width {
		    #
		    # Adjust the widths of the body text widget,
		    # header frame, and listbox child, and save the
		    # properly formatted value of val in data($opt)
		    #
		    set val [format "%d" $val]	;# integer check with error msg
		    $data(body) configure $opt $val
		    if {$val <= 0} {
			$data(hdr) configure $opt $data(hdrWidth)
			$data(lb) configure $opt \
				  [expr {$data(hdrWidth) / $data(charWidth)}]
		    } else {
			$data(hdr) configure $opt 0
			$data(lb) configure $opt $val
		    }
		    set data($opt) $val
		    updateListboxSetgridOpt $win
		}
		-xmousewheelwindow -
		-ymousewheelwindow {
		    if {[string length $val] == 0 || [winfo exists $val]} {
			set data($opt) $val
		    } else {
			return -code error "bad window path name \"$val\""
		    }
		}
		-xscrollcommand {
		    #
		    # Save val in data($opt), and apply it to the header text
		    # widget if (and only if) no title columns are being used
		    #
		    set data($opt) $val
		    set data(xView) {-1 -1}
		    if {$data(-titlecolumns) == 0} {
			$data(hdrTxt) configure $opt $val
		    } else {
			$data(hdrTxt) configure $opt ""
		    }
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
# tablelist::doCget
#
# Returns the value of the configuration option opt for the tablelist widget
# win.
#------------------------------------------------------------------------------
proc tablelist::doCget {win opt} {
    upvar ::tablelist::ns${win}::data data
    if {[string compare $opt "-columntitles"] == 0} {
	set colTitles {}
	foreach {width title alignment} $data(-columns) {
	    lappend colTitles $title
	}
	return $colTitles
    } else {
	return $data($opt)
    }
}

#------------------------------------------------------------------------------
# tablelist::doColConfig
#
# Applies the value val of the column configuration option opt to the col'th
# column of the tablelist widget win.
#------------------------------------------------------------------------------
proc tablelist::doColConfig {col win opt val} {
    variable canElide
    variable pu
    upvar ::tablelist::ns${win}::data data

    switch -- $opt {
	-align {
	    #
	    # Set up and adjust the columns, and make sure the
	    # given column will be redisplayed at idle time
	    #
	    set idx [expr {3*$col + 2}]
	    setupColumns $win [lreplace $data(-columns) $idx $idx $val] 0
	    adjustColumns $win {} 0
	    redisplayColWhenIdle $win $col
	}

	-background -
	-foreground {
	    set name $col$opt

	    if {[string length $val] == 0} {
		arrayUnset data $name
	    } else {
		#
		# Configure the tag col$opt-$val in both text widgets
		#
		foreach w [list $data(hdrTxt) $data(body)] {
		    set tag col$opt-$val
		    $w tag configure $tag $opt $val
		    $w tag lower $tag
		}

		#
		# Save val in data($name)
		#
		set data($name) $val
	    }

	    if {!$data(isDisabled)} {
		hdr_updateColorsWhenIdle $win
		updateColorsWhenIdle $win
	    }
	}

	-changesnipside -
	-wrap {
	    #
	    # Save the boolean value specified by val in data($col$opt) and
	    # make sure the given column will be redisplayed at idle time
	    #
	    set data($col$opt) [expr {$val ? 1 : 0}]
	    if {[lindex $data(-columns) [expr {3*$col}]] != 0} {
		redisplayColWhenIdle $win $col
		updateViewWhenIdle $win
	    }
	}

	-changetitlesnipside {
	    #
	    # Save the boolean value specified by val in
	    # data($col$opt) and adjust the col'th label
	    #
	    set data($col$opt) [expr {$val ? 1 : 0}]
	    set pixels [lindex $data(colList) [expr {2*$col}]]
	    if {$pixels == 0} {			;# convention: dynamic width
		if {$data($col-maxPixels) > 0} {
		    if {$data($col-reqPixels) > $data($col-maxPixels)} {
			set pixels $data($col-maxPixels)
		    }
		}
	    }
	    if {$pixels != 0} {	
		incr pixels $data($col-delta)
	    }
	    set alignment [lindex $data(colList) [expr {2*$col + 1}]]
	    adjustLabel $win $col $pixels $alignment
	}

	-editable {
	    #
	    # Save the boolean value specified by val in data($col$opt)
	    # and invoke the motion handler if necessary
	    #
	    set data($col$opt) [expr {$val ? 1 : 0}]
	    if {$data(-showeditcursor)} {
		invokeMotionHandler $win
	    }
	}

	-editwindow {
	    variable editWin
	    if {[info exists editWin($val-creationCmd)]} {
		set data($col$opt) $val
	    } else {
		return -code error "name \"$val\" is not registered\
				    for interactive cell editing"
	    }
	}

	-font {
	    displayItems $win
	    set name $col$opt

	    if {[info exists data($name)] &&
		(!$data($col-hide) || $canElide)} {
		#
		# Remove the tag col$opt-$data($name)
		# from the elements of the given column
		#
		set tag col$opt-$data($name)
		set maxHdrLine [expr {$data(hdr_itemCount) + 1}]
		foreach w [list $data(hdrTxt) $data(body)] min {2 1} \
			max [list $maxHdrLine $data(itemCount)] {
		    for {set line $min} {$line <= $max} {incr line} {
			findTabs $win $w $line $col $col tabIdx1 tabIdx2
			$w tag remove $tag $tabIdx1 $tabIdx2+1$pu
		    }
		}
	    }

	    if {[string length $val] == 0} {
		arrayUnset data $name
	    } else {
		#
		# Configure the tag col$opt-$val in both text widgets
		#
		set tag col$opt-$val
		foreach w [list $data(hdrTxt) $data(body)] {
		    $w tag configure $tag $opt $val
		    $w tag lower $tag
		}

		if {!$data($col-hide) || $canElide} {
		    #
		    # Apply the tag to the elements of the given column
		    #
		    set maxHdrLine [expr {$data(hdr_itemCount) + 1}]
		    foreach w [list $data(hdrTxt) $data(body)] min {2 1} \
			    max [list $maxHdrLine $data(itemCount)] {
			for {set line $min} {$line <= $max} {incr line} {
			    findTabs $win $w $line $col $col tabIdx1 tabIdx2
			    $w tag add $tag $tabIdx1 $tabIdx2+1$pu
			}
		    }
		}

		#
		# Save val in data($name)
		#
		set data($name) $val
	    }

	    #
	    # Rebuild the lists of the column fonts and tag names
	    #
	    makeColFontAndTagLists $win

	    #
	    # Adjust the columns, and make sure the specified
	    # column will be redisplayed at idle time
	    #
	    adjustColumns $win $col 1
	    redisplayColWhenIdle $win $col
	    updateViewWhenIdle $win

	    if {$col == $data(editCol)} {
		#
		# Configure the edit window
		#
		setEditWinFont $win
	    }
	}

	-formatcommand {
	    if {[string length $val] == 0} {
		arrayUnset data $col$opt
		set fmtCmdFlag 0
	    } else {
		set data($col$opt) $val
		set fmtCmdFlag 1
	    }

	    #
	    # Update the corresponding element of the list data(fmtCmdFlagList)
	    #
	    set data(fmtCmdFlagList) \
		[lreplace $data(fmtCmdFlagList) $col $col $fmtCmdFlag]
	    set data(hasFmtCmds) \
		[expr {[lsearch -exact $data(fmtCmdFlagList) 1] >= 0}]

	    #
	    # Adjust the columns and make sure the specified
	    # column will be redisplayed at idle time
	    #
	    adjustColumns $win $col 1
	    redisplayColWhenIdle $win $col
	    updateViewWhenIdle $win
	}

	-hide {
	    #
	    # Save the boolean value specified by val in data($col$opt),
	    # adjust the columns, and redisplay the items
	    #
	    set oldVal $data($col$opt)
	    set newVal [expr {$val ? 1 : 0}]
	    if {$newVal != $oldVal} {
		set data($col$opt) $newVal
		if {$newVal} {				;# hiding the column
		    incr data(hiddenColCount)
		    adjustColIndex $win data(anchorCol) 1
		    adjustColIndex $win data(activeCol) 1
		    if {$col == $data(editCol)} {
			doCancelEditing $win
		    }
		} else {
		    incr data(hiddenColCount) -1
		}
		makeColFontAndTagLists $win
		adjustColumns $win $col 1
		if {!$canElide} {
		    redisplay $win
		}
		updateViewWhenIdle $win

		genVirtualEvent $win <<TablelistColHiddenStateChanged>> $col
	    }
	}

	-labelalign {
	    if {[string length $val] == 0} {
		#
		# Unset data($col$opt)
		#
		set alignment [lindex $data(colList) [expr {2*$col + 1}]]
		arrayUnset data $col$opt
	    } else {
		#
		# Save the properly formatted value of val in data($col$opt)
		#
		variable alignments
		set val [mwutil::fullOpt "label alignment" $val $alignments]
		set alignment $val
		set data($col$opt) $val
	    }

	    #
	    # Adjust the col'th label
	    #
	    set pixels [lindex $data(colList) [expr {2*$col}]]
	    if {$pixels == 0} {			;# convention: dynamic width
		if {$data($col-maxPixels) > 0} {
		    if {$data($col-reqPixels) > $data($col-maxPixels)} {
			set pixels $data($col-maxPixels)
		    }
		}
	    }
	    if {$pixels != 0} {	
		incr pixels $data($col-delta)
	    }
	    adjustLabel $win $col $pixels $alignment
	}

	-labelbackground -
	-labelforeground {
	    set w $data(hdrTxtFrmLbl)$col
	    set optTail [string range $opt 6 end]	;# remove the -label
	    if {[string length $val] == 0} {
		#
		# Apply the value of the corresponding widget
		# configuration option to the col'th label and
		# its sublabels (if any), and unset data($col$opt)
		#
		configLabel $w -$optTail $data($opt)
		arrayUnset data $col$opt
	    } else {
		#
		# Apply the given value to the col'th label and
		# its sublabels (if any), and save the properly
		# formatted value of val in data($col$opt)
		#
		configLabel $w -$optTail $val
		variable helpLabel
		$helpLabel configure -$optTail $val
		set data($col$opt) [$helpLabel cget -$optTail]
	    }

	    if {[lsearch -exact $data(arrowColList) $col] >= 0} {
		configCanvas $win $col
	    }
	}

	-labelborderwidth {
	    set w $data(hdrTxtFrmLbl)$col
	    set optTail [string range $opt 6 end]	;# remove the -label
	    if {[string length $val] == 0} {
		#
		# Apply the value of the corresponding widget configuration
		# option to the col'th label and unset data($col$opt)
		#
		configLabel $w -$optTail $data($opt)
		arrayUnset data $col$opt
	    } else {
		#
		# Apply the given value to the col'th label and save the
		# properly formatted value of val in data($col$opt)
		#
		configLabel $w -$optTail $val
		set data($col$opt) [$w cget -$optTail]
	    }

	    #
	    # Adjust the columns (including the height of the header frame)
	    #
	    adjustColumns $win l$col 1
	    updateViewWhenIdle $win
	}

	-labelcommand -
	-labelcommand2 -
	-name -
	-selectfiltercommand -
	-sortcommand {
	    if {[string length $val] == 0} {
		arrayUnset data $col$opt
	    } else {
		set data($col$opt) $val
	    }
	}

	-labelfont {
	    set w $data(hdrTxtFrmLbl)$col
	    set optTail [string range $opt 6 end]	;# remove the -label
	    if {[string length $val] == 0} {
		#
		# Apply the value of the corresponding widget
		# configuration option to the col'th label and
		# its sublabels (if any), and unset data($col$opt)
		#
		configLabel $w -$optTail $data($opt)
		arrayUnset data $col$opt
	    } else {
		#
		# Apply the given value to the col'th label and
		# its sublabels (if any), and save the properly
		# formatted value of val in data($col$opt)
		#
		configLabel $w -$optTail $val
		set data($col$opt) [$w cget -$optTail]
	    }

	    #
	    # Adjust the columns (including the height of the header frame)
	    #
	    adjustColumns $win l$col 1
	    updateViewWhenIdle $win
	}

	-labelheight -
	-labelpady {
	    set w $data(hdrTxtFrmLbl)$col
	    set optTail [string range $opt 6 end]	;# remove the -label
	    if {[string length $val] == 0} {
		#
		# Apply the value of the corresponding widget configuration
		# option to the col'th label and unset data($col$opt)
		#
		configLabel $w -$optTail $data($opt)
		arrayUnset data $col$opt
	    } else {
		#
		# Apply the given value to the col'th label and save the
		# properly formatted value of val in data($col$opt)
		#
		configLabel $w -$optTail $val
		variable usingTile
		if {$usingTile} {
		    set data($col$opt) $val
		} else {
		    set data($col$opt) [$w cget -$optTail]
		}
	    }

	    if {[string compare $opt "-labelpady"] == 0} {
		#
		# Adjust the col'th label
		#
		set pixels [lindex $data(colList) [expr {2*$col}]]
		if {$pixels == 0} {		;# convention: dynamic width
		    if {$data($col-maxPixels) > 0} {
			if {$data($col-reqPixels) > $data($col-maxPixels)} {
			    set pixels $data($col-maxPixels)
			}
		    }
		}
		if {$pixels != 0} {	
		    incr pixels $data($col-delta)
		}
		set alignment [lindex $data(colList) [expr {2*$col + 1}]]
		adjustLabel $win $col $pixels $alignment
	    }

	    #
	    # Adjust the height of the header frame
	    #
	    adjustHeaderHeight $win
	}

	-labelimage {
	    set w $data(hdrTxtFrmLbl)$col
	    if {[string length $val] == 0} {
		foreach l [getSublabels $w] {
		    destroy $l
		}
		arrayUnset data $col$opt
	    } else {
		if {![winfo exists $w-il]} {
		    variable configSpecs
		    variable configOpts
		    foreach l [list $w-il $w-tl] {	;# image and text labels
			#
			# Create the label $l
			#
			tk::label $l -borderwidth 0 -height 0 \
				     -highlightthickness 0 -padx 0 \
				     -pady 0 -takefocus 0 -width 0

			#
			# Apply to it the current configuration options
			#
			foreach opt2 $configOpts {
			    if {[string compare \
				 [lindex $configSpecs($opt2) 2] "c"] == 0} {
				$l configure $opt2 $data($opt2)
			    }
			}
			if {[string compare [winfo class $w] "TLabel"] == 0} {
			    variable themeDefaults
			    $l configure -background \
					 $themeDefaults(-labelbackground)
			} else {
			    $l configure -background [$w cget -background]
			    $l configure -foreground [$w cget -foreground]
			}
			$l configure -font [$w cget -font]
			foreach opt2 {-activebackground -activeforeground
				      -disabledforeground -state} {
			    catch {$l configure $opt2 [$w cget $opt2]}
			}

			#
			# Replace the binding tag Label with $w,
			# $data(labelTag), and TablelistSubLabel in
			# the list of binding tags of the label $l
			#
			bindtags $l [lreplace [bindtags $l] 1 1 \
				     $w $data(labelTag) TablelistSubLabel]
		    }
		}

		#
		# Display the specified image in the label
		# $w-il and save val in data($col$opt)
		#
		$w-il configure -image $val
		set data($col$opt) $val
	    }

	    #
	    # Adjust the columns (including the height of the header frame)
	    #
	    adjustColumns $win l$col 1
	    updateViewWhenIdle $win
	}

	-labelrelief {
	    set w $data(hdrTxtFrmLbl)$col
	    set optTail [string range $opt 6 end]	;# remove the -label
	    if {[string length $val] == 0} {
		#
		# Apply the value of the corresponding widget configuration
		# option to the col'th label and unset data($col$opt)
		#
		configLabel $w -$optTail $data($opt)
		arrayUnset data $col$opt
	    } else {
		#
		# Apply the given value to the col'th label and save the
		# properly formatted value of val in data($col$opt)
		#
		configLabel $w -$optTail $val
		set data($col$opt) [$w cget -$optTail]
	    }
	}

	-labelvalign {
	    #
	    # Save the properly formatted value of val in
	    # data($col$opt) and adjust the col'th label
	    #
	    variable valignments
	    set val [mwutil::fullOpt "vertical alignment" $val $valignments]
	    if {[string compare $val $data($col$opt)] != 0} {
		set data($col$opt) $val

		set pixels [lindex $data(colList) [expr {2*$col}]]
		if {$pixels == 0} {		;# convention: dynamic width
		    if {$data($col-maxPixels) > 0} {
			if {$data($col-reqPixels) > $data($col-maxPixels)} {
			    set pixels $data($col-maxPixels)
			}
		    }
		}
		if {$pixels != 0} {	
		    incr pixels $data($col-delta)
		}
		set alignment [lindex $data(colList) [expr {2*$col + 1}]]
		adjustLabel $win $col $pixels $alignment
	    }
	}

	-maxwidth {
	    #
	    # Save the properly formatted value of val in
	    # data($col$opt), adjust the columns, and make sure
	    # the specified column will be redisplayed at idle time
	    #
	    set val [format "%d" $val]	;# integer check with error message
	    set data($col$opt) $val
	    if {$val > 0} {		;# convention: max. width in characters
		set pixels [charsToPixels $win $data(-font) $val]
	    } elseif {$val < 0} {	;# convention: max. width in pixels
		set pixels [expr {(-1)*$val}]
	    } else {			;# convention: no max. width
		set pixels 0
	    }
	    set data($col-maxPixels) $pixels
	    adjustColumns $win $col 1
	    redisplayColWhenIdle $win $col
	    updateViewWhenIdle $win
	}

	-resizable {
	    #
	    # Save the boolean value specified by val in data($col$opt)
	    #
	    set data($col$opt) [expr {$val ? 1 : 0}]
	}

	-selectbackground -
	-selectforeground {
	    set w $data(body)
	    set name $col$opt

	    if {[string length $val] == 0} {
		arrayUnset data $name
	    } else {
		#
		# Configure the tag col$opt-$val in the body text widget
		#
		set tag col$opt-$val
		set optTail [string range $opt 7 end]	;# remove the -select
		$w tag configure $tag -$optTail $val
		$w tag raise $tag select

		#
		# Save val in data($name)
		#
		set data($name) $val
	    }

	    if {!$data(isDisabled)} {
		updateColorsWhenIdle $win
	    }
	}

	-showarrow {
	    #
	    # Save the boolean value specified by val in data($col$opt) and
	    # manage or unmanage the canvas displaying an up- or down-arrow
	    #
	    set data($col$opt) [expr {$val ? 1 : 0}]
	    makeSortAndArrowColLists $win
	    adjustColumns $win l$col 1
	    updateViewWhenIdle $win
	}

	-showlinenumbers {
	    #
	    # Save the boolean value specified by val in
	    # data($col$opt), and make sure the line numbers
	    # will be redisplayed at idle time if needed
	    #
	    set val [expr {$val ? 1 : 0}]
	    if {!$data($col$opt) && $val} {
		showLineNumbersWhenIdle $win
	    }
	    set data($col$opt) $val
	}

	-sortmode {
	    #
	    # Save the properly formatted value of val in data($col$opt)
	    #
	    variable sortModes
	    set data($col$opt) [mwutil::fullOpt "sort mode" $val $sortModes]
	}

	-stretchable {
	    set flag [expr {$val ? 1 : 0}]
	    if {$flag} {
		if {[string compare $data(-stretch) "all"] != 0 &&
		    [lsearch -exact $data(-stretch) $col] < 0} {
		    #
		    # col was not found in data(-stretch): add it to the list
		    #
		    lappend data(-stretch) $col
		    sortStretchableColList $win
		    set data(forceAdjust) 1
		    stretchColumnsWhenIdle $win
		}
	    } elseif {[string compare $data(-stretch) "all"] == 0} {
		#
		# Replace the value "all" of data(-stretch) with
		# the list of all column indices different from col
		#
		set data(-stretch) {}
		for {set n 0} {$n < $data(colCount)} {incr n} {
		    if {$n != $col} {
			lappend data(-stretch) $n
		    }
		}
		set data(forceAdjust) 1
		stretchColumnsWhenIdle $win
	    } else {
		#
		# If col is contained in data(-stretch)
		# then remove it from the list
		#
		if {[set n [lsearch -exact $data(-stretch) $col]] >= 0} {
		    set data(-stretch) [lreplace $data(-stretch) $n $n]
		    set data(forceAdjust) 1
		    stretchColumnsWhenIdle $win
		}

		#
		# If col indicates the last column and data(-stretch)
		# contains "end" then remove "end" from the list
		#
		if {$col == $data(lastCol) &&
		    [string compare [lindex $data(-stretch) end] "end"] == 0} {
		    set data(-stretch) [lreplace $data(-stretch) end end]
		    set data(forceAdjust) 1
		    stretchColumnsWhenIdle $win
		}
	    }
	    updateListboxSetgridOpt $win
	}

	-stripebackground -
	-stripeforeground {
	    set w $data(body)
	    set name $col$opt

	    if {[string length $val] == 0} {
		arrayUnset data $name
	    } else {
		#
		# Configure the tag col$opt-$val in the body text widget
		#
		set tag col$opt-$val
		set optTail [string range $opt 7 end]	;# remove the -stripe
		$w tag configure $tag -$optTail $val
		$w tag raise $tag stripe

		#
		# Save val in data($name)
		#
		set data($name) $val
	    }

	    if {!$data(isDisabled)} {
		updateColorsWhenIdle $win
	    }
	}

	-text {
	    if {$data(isDisabled) || $data($col-showlinenumbers)} {
		return ""
	    }

	    #
	    # Replace the column's content in the internal list
	    #
	    set newItemList {}
	    set row 0
	    foreach item $data(itemList) text [lrange $val 0 $data(lastRow)] {
		set item [lreplace $item $col $col $text]
		lappend newItemList $item
	    }
	    set data(itemList) $newItemList

	    #
	    # Update the list variable if present
	    #
	    condUpdateListVar $win

	    #
	    # Adjust the columns and make sure the specified
	    # column will be redisplayed at idle time
	    #
	    adjustColumns $win $col 1
	    redisplayColWhenIdle $win $col
	    updateViewWhenIdle $win
	}

	-title {
	    #
	    # Save the given value in the corresponding
	    # element of data(-columns) and adjust the columns
	    #
	    set idx [expr {3*$col + 1}]
	    set data(-columns) [lreplace $data(-columns) $idx $idx $val]
	    adjustColumns $win l$col 1
	    updateViewWhenIdle $win
	}

	-valign {
	    #
	    # Save the properly formatted value of val in data($col$opt) and
	    # make sure the given column will be redisplayed at idle time
	    #
	    variable valignments
	    set val [mwutil::fullOpt "vertical alignment" $val $valignments]
	    if {[string compare $val $data($col$opt)] != 0} {
		set data($col$opt) $val
		redisplayColWhenIdle $win $col
	    }
	}

	-width {
	    #
	    # Set up and adjust the columns, and make sure the
	    # given column will be redisplayed at idle time
	    #
	    set idx [expr {3*$col}]
	    if {$val != [lindex $data(-columns) $idx]} {
		setupColumns $win [lreplace $data(-columns) $idx $idx $val] 0
		set callerProc [lindex [info level -1] 0]
		if {[string match "tablelist::label*" $callerProc]} {
		    redisplayCol $win $col 0 last
		} else {
		    redisplayColWhenIdle $win $col
		}
		adjustColumns $win $col 1
		updateViewWhenIdle $win
	    }
	}
    }
}

#------------------------------------------------------------------------------
# tablelist::doColCget
#
# Returns the value of the column configuration option opt for the col'th
# column of the tablelist widget win.
#------------------------------------------------------------------------------
proc tablelist::doColCget {col win opt} {
    upvar ::tablelist::ns${win}::data data

    switch -- $opt {
	-align {
	    return [lindex $data(-columns) [expr {3*$col + 2}]]
	}

	-stretchable {
	    return [expr {
		[string compare $data(-stretch) "all"] == 0 ||
		[lsearch -exact $data(-stretch) $col] >= 0 ||
		($col == $data(lastCol) && \
		 [string compare [lindex $data(-stretch) end] "end"] == 0)
	    }]
	}

	-text {
	    set result {}
	    foreach item $data(itemList) {
		lappend result [lindex $item $col]
	    }
	    return $result
	}

	-title {
	    return [lindex $data(-columns) [expr {3*$col + 1}]]
	}

	-width {
	    return [lindex $data(-columns) [expr {3*$col}]]
	}

	default {
	    if {[info exists data($col$opt)]} {
		return $data($col$opt)
	    } else {
		return ""
	    }
	}
    }
}

#------------------------------------------------------------------------------
# tablelist::doRowConfig
#
# Applies the value val of the row configuration option opt to the row'th row
# of the tablelist widget win.
#------------------------------------------------------------------------------
proc tablelist::doRowConfig {row win opt val} {
    variable canElide
    variable elide
    variable snipSides
    variable pu
    upvar ::tablelist::ns${win}::data data
    foreach {row p w inBody diff} [getConfigParams $win $row] {}

    switch -- $opt {
	-background -
	-foreground {
	    set key [lindex $data(${p}keyList) $row]
	    set name $key$opt

	    if {[string length $val] == 0} {
		arrayUnset data $name
	    } else {
		#
		# Configure the tag row$opt-$val in the text widget
		#
		set tag row$opt-$val
		$w tag configure $tag $opt $val
		$w tag lower $tag active

		#
		# Save val in data($name)
		#
		set data($name) $val
	    }

	    if {!$data(isDisabled)} {
		${p}updateColorsWhenIdle $win
	    }
	}

	-elide {
	    displayItems $win
	    set val [expr {$val ? 1 : 0}]
	    set item [lindex $data(itemList) $row]
	    set key [lindex $item end]
	    set name $key$opt
	    set line [expr {$row + 1}]
	    set viewChanged 0

	    if {$val} {					;# eliding the row
		if {![info exists data($name)]} {
		    set data($name) 1
		    $w tag add elidedRow $line.0 $line.end+1$pu

		    if {![info exists data($key-hide)]} {
			incr data(nonViewableRowCount)
			set viewChanged 1

			if {$row == $data(editRow)} {
			    doCancelEditing $win
			}
		    }
		}
	    } else {					;# uneliding the row
		if {[info exists data($name)]} {
		    unset data($name)

		    #
		    # Prevent any not yet created embeddded windows in this
		    # text widget line scheduled for creation via $w window
		    # create ... -create ... from being effectively created
		    #
		    $w tag add elidedWin $line.0 $line.end

		    $w tag remove elidedRow $line.0 $line.end+1$pu

		    if {![info exists data($key-hide)]} {
			incr data(nonViewableRowCount) -1
			set viewChanged 1
		    }
		}
	    }

	    if {$viewChanged} {
		#
		# Adjust the heights of the body text widget
		# and of the listbox child, if necessary
		#
		if {$data(-height) <= 0} {
		    set viewableRowCount \
			[expr {$data(itemCount) - $data(nonViewableRowCount)}]
		    $w configure -height $viewableRowCount
		    $data(lb) configure -height $viewableRowCount
		}

		#
		# Build the list of those dynamic-width columns
		# whose widths are affected by (un)eliding the row
		#
		set colWidthsChanged 0
		set colIdxList {}
		set displayedItem [lrange $item 0 $data(lastCol)]
		if {$data(hasFmtCmds)} {
		    set displayedItem [formatItem $win $key $row $displayedItem]
		}
		if {[string match "*\t*" $displayedItem]} {
		    set displayedItem [mapTabs $displayedItem]
		}
		set col 0
		foreach text $displayedItem {pixels alignment} $data(colList) {
		    if {($data($col-hide) && !$canElide) || $pixels != 0} {
			incr col
			continue
		    }

		    getAuxData $win $key $col auxType auxWidth
		    getIndentData $win $key $col indentWidth
		    set cellFont [getCellFont $win $key $col]
		    set elemWidth [getElemWidth $win $text $auxWidth \
				   $indentWidth $cellFont]
		    if {$val} {				;# eliding the row
			if {$elemWidth == $data($col-elemWidth) &&
			    [incr data($col-widestCount) -1] == 0} {
			    set colWidthsChanged 1
			    lappend colIdxList $col
			}
		    } else {				;# uneliding the row
			if {$elemWidth == $data($col-elemWidth)} {
			    incr data($col-widestCount)
			} elseif {$elemWidth > $data($col-elemWidth)} {
			    set data($col-elemWidth) $elemWidth
			    set data($col-widestCount) 1
			    if {$elemWidth > $data($col-reqPixels)} {
				set data($col-reqPixels) $elemWidth
				set colWidthsChanged 1
			    }
			}
		    }

		    incr col
		}

		#
		# Invalidate the list of row indices indicating the
		# viewable rows and adjust the columns if necessary
		#
		set data(viewableRowList) {-1}
		if {$colWidthsChanged} {
		    adjustColumns $win $colIdxList 1
		}
	    }
	}

	-font {
	    if {$inBody} {
		displayItems $win
	    }

	    #
	    # Save the current cell fonts in a temporary array
	    #
	    set item [lindex $data(${p}itemList) $row]
	    set key [lindex $item end]
	    for {set col 0} {$col < $data(colCount)} {incr col} {
		set oldCellFonts($col) [getCellFont $win $key $col]
	    }

	    set name $key$opt
	    if {[info exists data($name)]} {
		#
		# Remove the tag row$opt-$data($name) from the given row
		#
		set line [expr {$row + $diff}]
		$w tag remove row$opt-$data($name) $line.0 $line.end
	    }

	    if {[string length $val] == 0} {
		if {[info exists data($name)]} {
		    unset data($name)
		    if {$inBody} {
			incr data(rowTagRefCount) -1
		    }
		}
	    } else {
		#
		# Configure the tag row$opt-$val in the
		# text widget and apply it to the given row
		#
		set tag row$opt-$val
		$w tag configure $tag $opt $val
		$w tag lower $tag active
		set line [expr {$row + $diff}]
		$w tag add $tag $line.0 $line.end

		#
		# Save val in data($name)
		#
		if {$inBody && ![info exists data($name)]} {
		    incr data(rowTagRefCount)
		}
		set data($name) $val
	    }

	    set displayedItem [lrange $item 0 $data(lastCol)]
	    if {$data(hasFmtCmds)} {
		set displayedItem [formatItem $win $key $row $displayedItem]
	    }
	    if {[string match "*\t*" $displayedItem]} {
		set displayedItem [mapTabs $displayedItem]
	    }
	    set colWidthsChanged 0
	    set colIdxList {}
	    set line [expr {$row + $diff}]
	    set textIdx1 $line.1
	    set col 0
	    foreach text $displayedItem {pixels alignment} $data(colList) {
		if {$data($col-hide) && !$canElide} {
		    incr col
		    continue
		}

		#
		# Adjust the cell text and the image or window width
		#
		set multiline [string match "*\n*" $text]
		set cellFont [getCellFont $win $key $col]
		set workPixels $pixels
		if {$pixels == 0} {		;# convention: dynamic width
		    set textSav $text
		    getAuxData $win $key $col auxType auxWidthSav
		    getIndentData $win $key $col indentWidthSav

		    if {$data($col-maxPixels) > 0} {
			set workPixels $data($col-maxPixels)
		    }
		}
		set aux [getAuxData $win $key $col auxType auxWidth $workPixels]
		set indent [getIndentData $win $key $col indentWidth]
		set maxTextWidth $workPixels
		if {$workPixels != 0} {
		    incr workPixels $data($col-delta)
		    set maxTextWidth \
			[getMaxTextWidth $workPixels $auxWidth $indentWidth]

		    if {$data($col-wrap) && !$multiline} {
			if {[font measure $cellFont -displayof $win $text] >
			    $maxTextWidth} {
			    set multiline 1
			}
		    }
		}
		set snipSide $snipSides($alignment,$data($col-changesnipside))
		if {$multiline} {
		    set list [split $text "\n"]
		    if {$data($col-wrap)} {
			set snipSide ""
		    }
		    adjustMlElem $win list auxWidth indentWidth $cellFont \
				 $workPixels $snipSide $data(-snipstring)
		    set msgScript [list ::tablelist::displayText $win $key \
				   $col [join $list "\n"] $cellFont \
				   $maxTextWidth $alignment]
		} else {
		    adjustElem $win text auxWidth indentWidth $cellFont \
			       $workPixels $snipSide $data(-snipstring)
		}

		if {$inBody &&
		    $row == $data(editRow) && $col == $data(editCol)} {
		    #
		    # Configure the edit window
		    #
		    setEditWinFont $win
		} else {
		    #
		    # Update the text widget's content between the two tabs
		    #
		    set textIdx2 [$w search $elide "\t" $textIdx1 $line.end]
		    if {$multiline} {
			updateMlCell $w $textIdx1 $textIdx2 $msgScript $aux \
				     $auxType $auxWidth $indent $indentWidth \
				     $alignment [getVAlignment $win $key $col]
		    } else {
			updateCell $w $textIdx1 $textIdx2 $text $aux \
				   $auxType $auxWidth $indent $indentWidth \
				   $alignment [getVAlignment $win $key $col]
		    }
		}

		if {$pixels == 0 && ![info exists data($key-elide)] &&
		    ![info exists data($key-hide)]} {
		    #
		    # Check whether the width of the current column has changed
		    #
		    set text $textSav
		    set auxWidth $auxWidthSav
		    set indentWidth $indentWidthSav
		    set newElemWidth [getElemWidth $win $text $auxWidth \
				      $indentWidth $cellFont]
		    if {$newElemWidth > $data($col-elemWidth)} {
			set data($col-elemWidth) $newElemWidth
			set data($col-widestCount) 1
			if {$newElemWidth > $data($col-reqPixels)} {
			    set data($col-reqPixels) $newElemWidth
			    set colWidthsChanged 1
			}
		    } else {
			set oldElemWidth [getElemWidth $win $text $auxWidth \
					  $indentWidth $oldCellFonts($col)]
			if {$oldElemWidth < $data($col-elemWidth) &&
			    $newElemWidth == $data($col-elemWidth)} {
			    incr data($col-widestCount)
			} elseif {$oldElemWidth == $data($col-elemWidth) &&
				  $newElemWidth < $oldElemWidth &&
				  [incr data($col-widestCount) -1] == 0} {
			    set colWidthsChanged 1
			    lappend colIdxList $col
			}
		    }
		}

		set textIdx1 [$w search $elide "\t" $textIdx1 $line.end]+2$pu
		incr col
	    }

	    #
	    # Adjust the columns if necessary and schedule
	    # some operations for execution at idle time
	    #
	    if {$colWidthsChanged} {
		adjustColumns $win $colIdxList 1
	    }
	    updateViewWhenIdle $win
	}

	-hide {
	    displayItems $win
	    set val [expr {$val ? 1 : 0}]
	    set item [lindex $data(itemList) $row]
	    set key [lindex $item end]
	    set name $key$opt
	    set line [expr {$row + 1}]
	    set viewChanged 0
	    set callerProc [lindex [info level -1] 0]

	    if {$val} {					;# hiding the row
		if {![info exists data($name)]} {
		    set data($name) 1
		    $w tag add hiddenRow $line.0 $line.end+1$pu

		    if {![info exists data($key-elide)]} {
			incr data(nonViewableRowCount)
			set viewChanged 1

			#
			# Elide the descendants of this item
			#
			set fromRow [expr {$row + 1}]
			set toRow [nodeRow $win $key end]
			for {set _row $fromRow} {$_row < $toRow} {incr _row} {
			    doRowConfig $_row $win -elide 1
			}

			if {[string match "*configureWidget" $callerProc]} {
			    adjustRowIndex $win data(anchorRow) 1

			    set activeRow $data(activeRow)
			    adjustRowIndex $win activeRow 1
			    set data(activeRow) $activeRow
			}

			if {$row == $data(editRow)} {
			    doCancelEditing $win
			}
		    }
		}
	    } else {					;# unhiding the row
		if {[info exists data($name)]} {
		    unset data($name)

		    #
		    # Prevent any not yet created embeddded windows in this
		    # text widget line scheduled for creation via $w window
		    # create ... -create ... from being effectively created
		    #
		    $w tag add elidedWin $line.0 $line.end

		    $w tag remove hiddenRow $line.0 $line.end+1$pu

		    if {![info exists data($key-elide)]} {
			incr data(nonViewableRowCount) -1
			set viewChanged 1

			if {[info exists data($key,$data(treeCol)-indent)] &&
			    [string match "*expanded*" \
			     $data($key,$data(treeCol)-indent)]} {
			    expandSubCmd $win [list $row -partly]
			}
		    }
		}
	    }

	    if {$viewChanged} {
		#
		# Adjust the heights of the body text widget
		# and of the listbox child, if necessary
		#
		if {$data(-height) <= 0} {
		    set viewableRowCount \
			[expr {$data(itemCount) - $data(nonViewableRowCount)}]
		    $w configure -height $viewableRowCount
		    $data(lb) configure -height $viewableRowCount
		}

		#
		# Build the list of those dynamic-width columns
		# whose widths are affected by (un)hiding the row
		#
		set colWidthsChanged 0
		set colIdxList {}
		set displayedItem [lrange $item 0 $data(lastCol)]
		if {$data(hasFmtCmds)} {
		    set displayedItem [formatItem $win $key $row $displayedItem]
		}
		if {[string match "*\t*" $displayedItem]} {
		    set displayedItem [mapTabs $displayedItem]
		}
		set col 0
		foreach text $displayedItem {pixels alignment} $data(colList) {
		    if {($data($col-hide) && !$canElide) || $pixels != 0} {
			incr col
			continue
		    }

		    getAuxData $win $key $col auxType auxWidth
		    getIndentData $win $key $col indentWidth
		    set cellFont [getCellFont $win $key $col]
		    set elemWidth [getElemWidth $win $text $auxWidth \
				   $indentWidth $cellFont]
		    if {$val} {				;# hiding the row
			if {$elemWidth == $data($col-elemWidth) &&
			    [incr data($col-widestCount) -1] == 0} {
			    set colWidthsChanged 1
			    lappend colIdxList $col
			}
		    } else {				;# unhiding the row
			if {$elemWidth == $data($col-elemWidth)} {
			    incr data($col-widestCount)
			} elseif {$elemWidth > $data($col-elemWidth)} {
			    set data($col-elemWidth) $elemWidth
			    set data($col-widestCount) 1
			    if {$elemWidth > $data($col-reqPixels)} {
				set data($col-reqPixels) $elemWidth
				set colWidthsChanged 1
			    }
			}
		    }

		    incr col
		}

		#
		# Invalidate the list of row indices indicating the
		# viewable rows and adjust the columns if necessary
		#
		set data(viewableRowList) {-1}
		if {$colWidthsChanged} {
		    adjustColumns $win $colIdxList 1
		}

		#
		# Schedule some operations for execution at idle time
		# and generate a virtual event only if the caller proc
		# is configureWidget, in order to make sure that only
		# one event per caller proc invocation will be generated
		#
		if {[string match "*configureWidget" $callerProc]} {
		    makeStripesWhenIdle $win
		    showLineNumbersWhenIdle $win
		    updateViewWhenIdle $win

		    genVirtualEvent $win <<TablelistRowHiddenStateChanged>> $row
		}
	    }
	}

	-name {
	    set key [lindex $data(${p}keyList) $row]
	    if {[string length $val] == 0} {
		arrayUnset data $key$opt
	    } else {
		set data($key$opt) $val
	    }
	}

	-selectable {
	    set val [expr {$val ? 1 : 0}]
	    set key [lindex $data(keyList) $row]

	    if {$val} {
		arrayUnset data $key$opt
	    } else {
		#
		# Set data($key$opt) to 0 and deselect the row
		#
		set data($key$opt) 0
		selectionSubCmd $win [list clear $row $row]
	    }
	}

	-selectbackground -
	-selectforeground {
	    set key [lindex $data(keyList) $row]
	    set name $key$opt

	    if {[string length $val] == 0} {
		arrayUnset data $name
	    } else {
		#
		# Configure the tag row$opt-$val in the body text widget
		#
		set tag row$opt-$val
		set optTail [string range $opt 7 end]	;# remove the -select
		$w tag configure $tag -$optTail $val
		$w tag lower $tag active

		#
		# Save val in data($name)
		#
		set data($name) [$w tag cget $tag -$optTail]
	    }

	    if {!$data(isDisabled)} {
		updateColorsWhenIdle $win
	    }
	}

	-text {
	    if {$data(isDisabled)} {
		return ""
	    }

	    if {$inBody} {
		displayItems $win
	    }

	    set colWidthsChanged 0
	    set colIdxList {}
	    set oldItem [lindex $data(${p}itemList) $row]
	    set key [lindex $oldItem end]
	    set newItem [adjustItem $val $data(colCount)]
	    if {$data(hasFmtCmds)} {
		set displayedItem [formatItem $win $key $row $newItem]
	    } else {
		set displayedItem $newItem
	    }
	    if {[string match "*\t*" $displayedItem]} {
		set displayedItem [mapTabs $displayedItem]
	    }
	    set line [expr {$row + $diff}]
	    set textIdx1 $line.1
	    set col 0
	    foreach text $displayedItem {pixels alignment} $data(colList) {
		if {$data($col-hide) && !$canElide} {
		    incr col
		    continue
		}

		#
		# Adjust the cell text and the image or window width
		#
		set multiline [string match "*\n*" $text]
		set cellFont [getCellFont $win $key $col]
		set workPixels $pixels
		if {$pixels == 0} {		;# convention: dynamic width
		    set textSav $text
		    getAuxData $win $key $col auxType auxWidthSav
		    getIndentData $win $key $col indentWidthSav

		    if {$data($col-maxPixels) > 0} {
			set workPixels $data($col-maxPixels)
		    }
		}
		set aux [getAuxData $win $key $col auxType auxWidth $workPixels]
		set indent [getIndentData $win $key $col indentWidth]
		set maxTextWidth $workPixels
		if {$workPixels != 0} {
		    incr workPixels $data($col-delta)
		    set maxTextWidth \
			[getMaxTextWidth $workPixels $auxWidth $indentWidth]

		    if {$data($col-wrap) && !$multiline} {
			if {[font measure $cellFont -displayof $win $text] >
			    $maxTextWidth} {
			    set multiline 1
			}
		    }
		}
		set snipSide $snipSides($alignment,$data($col-changesnipside))
		if {$multiline} {
		    set list [split $text "\n"]
		    if {$data($col-wrap)} {
			set snipSide ""
		    }
		    adjustMlElem $win list auxWidth indentWidth $cellFont \
				 $workPixels $snipSide $data(-snipstring)
		    set msgScript [list ::tablelist::displayText $win $key \
				   $col [join $list "\n"] $cellFont \
				   $maxTextWidth $alignment]
		} else {
		    adjustElem $win text auxWidth indentWidth $cellFont \
			       $workPixels $snipSide $data(-snipstring)
		}

		if {!$inBody ||
		    $row != $data(editRow) || $col != $data(editCol)} {
		    #
		    # Update the text widget's content between the two tabs
		    #
		    set textIdx2 [$w search $elide "\t" $textIdx1 $line.end]
		    if {$multiline} {
			updateMlCell $w $textIdx1 $textIdx2 $msgScript $aux \
				     $auxType $auxWidth $indent $indentWidth \
				     $alignment [getVAlignment $win $key $col]
		    } else {
			updateCell $w $textIdx1 $textIdx2 $text $aux \
				   $auxType $auxWidth $indent $indentWidth \
				   $alignment [getVAlignment $win $key $col]
		    }
		}

		if {$pixels == 0 && ![info exists data($key-elide)] &&
		    ![info exists data($key-hide)]} {
		    #
		    # Check whether the width of the current column has changed
		    #
		    set text $textSav
		    set auxWidth $auxWidthSav
		    set indentWidth $indentWidthSav
		    set newElemWidth [getElemWidth $win $text $auxWidth \
				      $indentWidth $cellFont]
		    if {$newElemWidth > $data($col-elemWidth)} {
			set data($col-elemWidth) $newElemWidth
			set data($col-widestCount) 1
			if {$newElemWidth > $data($col-reqPixels)} {
			    set data($col-reqPixels) $newElemWidth
			    set colWidthsChanged 1
			}
		    } else {
			set oldText [lindex $oldItem $col]
			if {[lindex $data(fmtCmdFlagList) $col]} {
			    set oldText \
				[formatElem $win $key $row $col $oldText]
			}
			if {[string match "*\t*" $oldText]} {
			    set oldText [mapTabs $oldText]
			}
			set oldElemWidth [getElemWidth $win $oldText $auxWidth \
					  $indentWidth $cellFont]
			if {$oldElemWidth < $data($col-elemWidth) &&
			    $newElemWidth == $data($col-elemWidth)} {
			    incr data($col-widestCount)
			} elseif {$oldElemWidth == $data($col-elemWidth) &&
				  $newElemWidth < $oldElemWidth &&
				  [incr data($col-widestCount) -1] == 0} {
			    set colWidthsChanged 1
			    lappend colIdxList $col
			}
		    }
		}

		set textIdx1 [$w search $elide "\t" $textIdx1 $line.end]+2$pu
		incr col
	    }

	    #
	    # Replace the row's content in the list variable if present
	    #
	    if {$inBody && $data(hasListVar) &&
		[uplevel #0 [list info exists $data(-listvariable)]]} {
		upvar #0 $data(-listvariable) var
		trace vdelete var wu $data(listVarTraceCmd)
		set var [lreplace $var $row $row $newItem]
		trace variable var wu $data(listVarTraceCmd)
	    }

	    #
	    # Replace the row's content in the internal list
	    #
	    lappend newItem $key
	    set data(${p}itemList) \
		[lreplace $data(${p}itemList) $row $row $newItem]

	    #
	    # Adjust the columns if necessary and schedule
	    # some operations for execution at idle time
	    #
	    if {$colWidthsChanged} {
		adjustColumns $win $colIdxList 1
	    }
	    if {$inBody} {
		showLineNumbersWhenIdle $win
	    }
	    updateViewWhenIdle $win
	}
    }
}

#------------------------------------------------------------------------------
# tablelist::doRowCget
#
# Returns the value of the row configuration option opt for the row'th row of
# the tablelist widget win.
#------------------------------------------------------------------------------
proc tablelist::doRowCget {row win opt} {
    upvar ::tablelist::ns${win}::data data
    foreach {row p w inBody diff} [getConfigParams $win $row] {}
    set item [lindex $data(${p}itemList) $row]

    switch -- $opt {
	-text {
	    return [lrange $item 0 $data(lastCol)]
	}

	-elide -
	-hide {
	    set key [lindex $item end]
	    if {[info exists data($key$opt)]} {
		return $data($key$opt)
	    } else {
		return 0
	    }
	}

	-selectable {
	    set key [lindex $item end]
	    if {[info exists data($key$opt)]} {
		return $data($key$opt)
	    } else {
		return 1
	    }
	}

	default {
	    set key [lindex $item end]
	    if {[info exists data($key$opt)]} {
		return $data($key$opt)
	    } else {
		return ""
	    }
	}
    }
}

#------------------------------------------------------------------------------
# tablelist::doCellConfig
#
# Applies the value val of the cell configuration option opt to the cell
# row,col of the tablelist widget win.
#------------------------------------------------------------------------------
proc tablelist::doCellConfig {row col win opt val} {
    variable canElide
    variable snipSides
    variable pu
    upvar ::tablelist::ns${win}::data data
    foreach {row p w inBody diff} [getConfigParams $win $row] {}

    switch -- $opt {
	-background -
	-foreground {
	    set key [lindex $data(${p}keyList) $row]
	    set name $key,$col$opt

	    if {[string length $val] == 0} {
		arrayUnset data $name
	    } else {
		#
		# Configure the tag cell$opt-$val in the text widget
		#
		set tag cell$opt-$val
		$w tag configure $tag $opt $val
		$w tag lower $tag disabled

		#
		# Save val in data($name)
		#
		set data($name) $val
	    }

	    if {!$data(isDisabled)} {
		${p}updateColorsWhenIdle $win
	    }
	}

	-editable {
	    #
	    # Save the boolean value specified by val in data($key,$col$opt)
	    # and invoke the motion handler if necessary
	    #
	    set key [lindex $data(keyList) $row]
	    set data($key,$col$opt) [expr {$val ? 1 : 0}]
	    if {$data(-showeditcursor)} {
		invokeMotionHandler $win
	    }
	}

	-editwindow {
	    variable editWin
	    if {[info exists editWin($val-creationCmd)]} {
		set key [lindex $data(keyList) $row]
		set data($key,$col$opt) $val
	    } else {
		return -code error "name \"$val\" is not registered\
				    for interactive cell editing"
	    }
	}

	-font {
	    if {$inBody} {
		displayItems $win
	    }

	    #
	    # Save the current cell font
	    #
	    set line [expr {$row + $diff}]
	    set item [lindex $data(${p}itemList) $row]
	    set key [lindex $item end]
	    set name $key,$col$opt
	    set oldCellFont [getCellFont $win $key $col]

	    if {[info exists data($name)] &&
		(!$data($col-hide) || $canElide)} {
		#
		# Remove the tag cell$opt-$data($name) from the given cell
		#
		findTabs $win $w $line $col $col tabIdx1 tabIdx2
		$w tag remove cell$opt-$data($name) $tabIdx1 $tabIdx2+1$pu
	    }

	    if {[string length $val] == 0} {
		if {[info exists data($name)]} {
		    unset data($name)
		    if {$inBody} {
			incr data(cellTagRefCount) -1
		    }
		}
	    } else {
		#
		# Configure the tag cell$opt-$val in the text widget
		#
		set tag cell$opt-$val
		$w tag configure $tag $opt $val
		$w tag lower $tag disabled

		if {!$data($col-hide) || $canElide} {
		    #
		    # Apply the tag to the given cell
		    #
		    findTabs $win $w $line $col $col tabIdx1 tabIdx2
		    $w tag add $tag $tabIdx1 $tabIdx2+1$pu
		}

		#
		# Save val in data($name)
		#
		if {$inBody && ![info exists data($name)]} {
		    incr data(cellTagRefCount)
		}
		set data($name) $val
	    }

	    #
	    # Adjust the cell text and the image or window width
	    #
	    set text [lindex $item $col]
	    if {[lindex $data(fmtCmdFlagList) $col]} {
		set text [formatElem $win $key $row $col $text]
	    }
	    if {[string match "*\t*" $text]} {
		set text [mapTabs $text]
	    }
	    set multiline [string match "*\n*" $text]
	    set cellFont [getCellFont $win $key $col]
	    set pixels [lindex $data(colList) [expr {2*$col}]]
	    set workPixels $pixels
	    if {$pixels == 0} {			;# convention: dynamic width
		set textSav $text
		getAuxData $win $key $col auxType auxWidthSav
		getIndentData $win $key $col indentWidthSav

		if {$data($col-maxPixels) > 0} {
		    set workPixels $data($col-maxPixels)
		}
	    }
	    set aux [getAuxData $win $key $col auxType auxWidth $workPixels]
	    set indent [getIndentData $win $key $col indentWidth]
	    set maxTextWidth $workPixels
	    if {$workPixels != 0} {
		incr workPixels $data($col-delta)
		set maxTextWidth \
		    [getMaxTextWidth $workPixels $auxWidth $indentWidth]

		if {$data($col-wrap) && !$multiline} {
		    if {[font measure $cellFont -displayof $win $text] >
			$maxTextWidth} {
			set multiline 1
		    }
		}
	    }
	    set alignment [lindex $data(colList) [expr {2*$col + 1}]]
	    set snipSide $snipSides($alignment,$data($col-changesnipside))
	    if {$multiline} {
		set list [split $text "\n"]
		if {$data($col-wrap)} {
		    set snipSide ""
		}
		adjustMlElem $win list auxWidth indentWidth $cellFont \
			     $workPixels $snipSide $data(-snipstring)
		set msgScript [list ::tablelist::displayText $win $key \
			       $col [join $list "\n"] $cellFont \
			       $maxTextWidth $alignment]
	    } else {
		adjustElem $win text auxWidth indentWidth $cellFont \
			   $workPixels $snipSide $data(-snipstring)
	    }

	    if {!$data($col-hide)} {
		if {$inBody &&
		    $row == $data(editRow) && $col == $data(editCol)} {
		    #
		    # Configure the edit window
		    #
		    setEditWinFont $win
		} else {
		    #
		    # Update the text widget's content between the two tabs
		    #
		    findTabs $win $w $line $col $col tabIdx1 tabIdx2
		    if {$multiline} {
			updateMlCell $w $tabIdx1+1$pu $tabIdx2 $msgScript $aux \
				     $auxType $auxWidth $indent $indentWidth \
				     $alignment [getVAlignment $win $key $col]
		    } else {
			updateCell $w $tabIdx1+1$pu $tabIdx2 $text $aux \
				   $auxType $auxWidth $indent $indentWidth \
				   $alignment [getVAlignment $win $key $col]
		    }
		}
	    }

	    #
	    # Adjust the columns if necessary
	    #
	    if {$pixels == 0 && ![info exists data($key-elide)] &&
		![info exists data($key-hide)]} {
		set text $textSav
		set auxWidth $auxWidthSav
		set indentWidth $indentWidthSav
		set newElemWidth [getElemWidth $win $text $auxWidth \
				  $indentWidth $cellFont]
		if {$newElemWidth > $data($col-elemWidth)} {
		    set data($col-elemWidth) $newElemWidth
		    set data($col-widestCount) 1
		    if {$newElemWidth > $data($col-reqPixels)} {
			set data($col-reqPixels) $newElemWidth
			adjustColumns $win {} 1
		    }
		} else {
		    set oldElemWidth [getElemWidth $win $text $auxWidth \
				      $indentWidth $oldCellFont]
		    if {$oldElemWidth < $data($col-elemWidth) &&
			$newElemWidth == $data($col-elemWidth)} {
			incr data($col-widestCount)
		    } elseif {$oldElemWidth == $data($col-elemWidth) &&
			      $newElemWidth < $oldElemWidth &&
			      [incr data($col-widestCount) -1] == 0} {
			adjustColumns $win $col 1
		    }
		}
	    }

	    updateViewWhenIdle $win
	}

	-image {
	    if {$data(isDisabled)} {
		return ""
	    }

	    if {$inBody} {
		displayItems $win
	    }

	    #
	    # Save the old image or window width
	    #
	    set item [lindex $data(${p}itemList) $row]
	    set key [lindex $item end]
	    set name $key,$col$opt
	    getAuxData $win $key $col oldAuxType oldAuxWidth

	    #
	    # Delete data($name) or save the specified value in it
	    #
	    set imgLabel $w.img_$key,$col
	    if {[string length $val] == 0} {
		if {[info exists data($name)]} {
		    unset data($name)
		    if {$inBody} {
			incr data(imgCount) -1
		    }
		    destroy $imgLabel
		}
	    } else {
		if {$inBody && ![info exists data($name)]} {
		    incr data(imgCount)
		}
		if {[winfo exists $imgLabel] &&
		    [string compare $val $data($name)] != 0} {
		    destroy $imgLabel
		}
		set data($name) $val
	    }

	    #
	    # Adjust the cell text and the image or window width
	    #
	    set pixels [lindex $data(colList) [expr {2*$col}]]
	    set workPixels $pixels
	    set text [lindex $item $col]
	    if {[lindex $data(fmtCmdFlagList) $col]} {
		set text [formatElem $win $key $row $col $text]
	    }
	    if {[string match "*\t*" $text]} {
		set text [mapTabs $text]
	    }
	    set oldText $text
	    set multiline [string match "*\n*" $text]
	    set cellFont [getCellFont $win $key $col]
	    if {$pixels == 0} {			;# convention: dynamic width
		set textSav $text
		getAuxData $win $key $col auxType auxWidthSav
		getIndentData $win $key $col indentWidthSav

		if {$data($col-maxPixels) > 0} {
		    set workPixels $data($col-maxPixels)
		}
	    }
	    set aux [getAuxData $win $key $col auxType auxWidth $workPixels]
	    set indent [getIndentData $win $key $col indentWidth]
	    set maxTextWidth $workPixels
	    if {$workPixels != 0} {
		incr workPixels $data($col-delta)
		set maxTextWidth \
		    [getMaxTextWidth $workPixels $auxWidth $indentWidth]

		if {$data($col-wrap) && !$multiline} {
		    if {[font measure $cellFont -displayof $win $text] >
			$maxTextWidth} {
			set multiline 1
		    }
		}
	    }
	    set alignment [lindex $data(colList) [expr {2*$col + 1}]]
	    set snipSide $snipSides($alignment,$data($col-changesnipside))
	    if {$multiline} {
		set list [split $text "\n"]
		if {$data($col-wrap)} {
		    set snipSide ""
		}
		adjustMlElem $win list auxWidth indentWidth $cellFont \
			     $workPixels $snipSide $data(-snipstring)
		set msgScript [list ::tablelist::displayText $win $key \
			       $col [join $list "\n"] $cellFont \
			       $maxTextWidth $alignment]
	    } else {
		adjustElem $win text auxWidth indentWidth $cellFont \
			   $workPixels $snipSide $data(-snipstring)
	    }

	    if {(!$data($col-hide) || $canElide) && (!$inBody ||
		$row != $data(editRow) || $col != $data(editCol))} {
		#
		# Delete the old cell content between the two tabs,
		# and insert the text and the auxiliary object
		#
		findTabs $win $w [expr {$row + $diff}] $col $col tabIdx1 tabIdx2
		if {$multiline} {
		    updateMlCell $w $tabIdx1+1$pu $tabIdx2 $msgScript $aux \
				 $auxType $auxWidth $indent $indentWidth \
				 $alignment [getVAlignment $win $key $col]
		} else {
		    updateCell $w $tabIdx1+1$pu $tabIdx2 $text $aux \
			       $auxType $auxWidth $indent $indentWidth \
			       $alignment [getVAlignment $win $key $col]
		}
	    }

	    #
	    # Adjust the columns if necessary
	    #
	    if {$pixels == 0 && ![info exists data($key-elide)] &&
		![info exists data($key-hide)]} {
		set text $textSav
		set auxWidth $auxWidthSav
		set indentWidth $indentWidthSav
		set newElemWidth [getElemWidth $win $text $auxWidth \
				  $indentWidth $cellFont]
		if {$newElemWidth > $data($col-elemWidth)} {
		    set data($col-elemWidth) $newElemWidth
		    set data($col-widestCount) 1
		    if {$newElemWidth > $data($col-reqPixels)} {
			set data($col-reqPixels) $newElemWidth
			adjustColumns $win {} 1
		    }
		} else {
		    set oldElemWidth [getElemWidth $win $oldText $oldAuxWidth \
				      $indentWidth $cellFont]
		    if {$oldElemWidth < $data($col-elemWidth) &&
			$newElemWidth == $data($col-elemWidth)} {
			incr data($col-widestCount)
		    } elseif {$oldElemWidth == $data($col-elemWidth) &&
			      $newElemWidth < $oldElemWidth &&
			      [incr data($col-widestCount) -1] == 0} {
			adjustColumns $win $col 1
		    }
		}
	    }

	    updateViewWhenIdle $win
	}

	-imagebackground -
	-windowupdate {
	    set key [lindex $data(${p}keyList) $row]
	    set name $key,$col$opt

	    #
	    # Delete data($name) or save the specified value in it
	    #
	    if {[string length $val] == 0} {
		arrayUnset data $name
	    } else {
		set data($name) $val
	    }

	    if {!$data(isDisabled)} {
		${p}updateColorsWhenIdle $win
	    }
	}

	-indent {
	    if {$data(isDisabled)} {
		return ""
	    }

	    displayItems $win

	    #
	    # Save the old indentation width
	    #
	    set item [lindex $data(itemList) $row]
	    set key [lindex $item end]
	    set name $key,$col$opt
	    getIndentData $win $key $col oldIndentWidth

	    #
	    # Delete data($name) or save the specified value in it
	    #
	    set indentLabel $w.ind_$key,$col
	    if {[string length $val] == 0} {
		if {[info exists data($name)]} {
		    unset data($name)
		    incr data(indentCount) -1
		    destroy $indentLabel
		}
	    } else {
		if {![info exists data($name)]} {
		    incr data(indentCount)
		}
		if {[winfo exists $indentLabel] &&
		    [string compare $val $data($name)] != 0} {
		    destroy $indentLabel
		}
		set data($name) $val
	    }

	    #
	    # Adjust the cell text and the image or window width
	    #
	    set pixels [lindex $data(colList) [expr {2*$col}]]
	    set workPixels $pixels
	    set text [lindex $item $col]
	    if {[lindex $data(fmtCmdFlagList) $col]} {
		set text [formatElem $win $key $row $col $text]
	    }
	    if {[string match "*\t*" $text]} {
		set text [mapTabs $text]
	    }
	    set oldText $text
	    set multiline [string match "*\n*" $text]
	    set cellFont [getCellFont $win $key $col]
	    if {$pixels == 0} {			;# convention: dynamic width
		set textSav $text
		getAuxData $win $key $col auxType auxWidthSav
		getIndentData $win $key $col indentWidthSav

		if {$data($col-maxPixels) > 0} {
		    set workPixels $data($col-maxPixels)
		}
	    }
	    set aux [getAuxData $win $key $col auxType auxWidth $workPixels]
	    set indent [getIndentData $win $key $col indentWidth]
	    set maxTextWidth $workPixels
	    if {$workPixels != 0} {
		incr workPixels $data($col-delta)
		set maxTextWidth \
		    [getMaxTextWidth $workPixels $auxWidth $indentWidth]

		if {$data($col-wrap) && !$multiline} {
		    if {[font measure $cellFont -displayof $win $text] >
			$maxTextWidth} {
			set multiline 1
		    }
		}
	    }
	    set alignment [lindex $data(colList) [expr {2*$col + 1}]]
	    set snipSide $snipSides($alignment,$data($col-changesnipside))
	    if {$multiline} {
		set list [split $text "\n"]
		if {$data($col-wrap)} {
		    set snipSide ""
		}
		adjustMlElem $win list auxWidth indentWidth $cellFont \
			     $workPixels $snipSide $data(-snipstring)
		set msgScript [list ::tablelist::displayText $win $key \
			       $col [join $list "\n"] $cellFont \
			       $maxTextWidth $alignment]
	    } else {
		adjustElem $win text auxWidth indentWidth $cellFont \
			   $workPixels $snipSide $data(-snipstring)
	    }

	    if {(!$data($col-hide) || $canElide) &&
		($row != $data(editRow) || $col != $data(editCol))} {
		#
		# Delete the old cell content between the two tabs,
		# and insert the text and the auxiliary object
		#
		findTabs $win $w [expr {$row + 1}] $col $col tabIdx1 tabIdx2
		if {$multiline} {
		    updateMlCell $w $tabIdx1+1$pu $tabIdx2 $msgScript $aux \
				 $auxType $auxWidth $indent $indentWidth \
				 $alignment [getVAlignment $win $key $col]
		} else {
		    updateCell $w $tabIdx1+1$pu $tabIdx2 $text $aux \
			       $auxType $auxWidth $indent $indentWidth \
			       $alignment [getVAlignment $win $key $col]
		}
	    }

	    #
	    # Adjust the columns if necessary
	    #
	    if {$pixels == 0 && ![info exists data($key-elide)] &&
		![info exists data($key-hide)]} {
		set text $textSav
		set auxWidth $auxWidthSav
		set indentWidth $indentWidthSav
		set newElemWidth [getElemWidth $win $text $auxWidth \
				  $indentWidth $cellFont]
		if {$newElemWidth > $data($col-elemWidth)} {
		    set data($col-elemWidth) $newElemWidth
		    set data($col-widestCount) 1
		    if {$newElemWidth > $data($col-reqPixels)} {
			set data($col-reqPixels) $newElemWidth
			adjustColumns $win {} 1
		    }
		} else {
		    set oldElemWidth [getElemWidth $win $oldText $auxWidth \
				      $oldIndentWidth $cellFont]
		    if {$oldElemWidth < $data($col-elemWidth) &&
			$newElemWidth == $data($col-elemWidth)} {
			incr data($col-widestCount)
		    } elseif {$oldElemWidth == $data($col-elemWidth) &&
			      $newElemWidth < $oldElemWidth &&
			      [incr data($col-widestCount) -1] == 0} {
			adjustColumns $win $col 1
		    }
		}
	    }

	    updateViewWhenIdle $win
	}

	-selectbackground -
	-selectforeground {
	    set key [lindex $data(keyList) $row]
	    set name $key,$col$opt

	    if {[string length $val] == 0} {
		arrayUnset data $name
	    } else {
		#
		# Configure the tag cell$opt-$val in the body text widget
		#
		set tag cell$opt-$val
		set optTail [string range $opt 7 end]	;# remove the -select
		$w tag configure $tag -$optTail $val
		$w tag lower $tag disabled

		#
		# Save val in data($name)
		#
		set data($name) $val
	    }

	    if {!$data(isDisabled)} {
		updateColorsWhenIdle $win
	    }
	}

	-stretchwindow {
	    #
	    # Save the boolean value specified by val in data($key,$col$opt)
	    #
	    set item [lindex $data(${p}itemList) $row]
	    set key [lindex $item end]
	    set name $key,$col$opt
	    if {$val} {
		set data($name) 1
	    } else {
		arrayUnset data $name
	    }

	    if {($data($col-hide) && !$canElide) ||
		($inBody && $row == $data(editRow) && $col == $data(editCol))} {
		return ""
	    }

	    set pixels [lindex $data(colList) [expr {2*$col}]]
	    set text [lindex $item $col]
	    if {[lindex $data(fmtCmdFlagList) $col]} {
		set text [formatElem $win $key $row $col $text]
	    }
	    if {[string match "*\t*" $text]} {
		set text [mapTabs $text]
	    }
	    set multiline [string match "*\n*" $text]
	    set cellFont [getCellFont $win $key $col]
	    if {$pixels == 0} {			;# convention: dynamic width
		if {$data($col-maxPixels) > 0} {
		    if {$data($col-reqPixels) > $data($col-maxPixels)} {
			set pixels $data($col-maxPixels)
		    }
		}
	    }
	    set aux [getAuxData $win $key $col auxType auxWidth $pixels]
	    if {$auxType < 2} {			;# no window
		return ""
	    }

	    if {$inBody} {
		displayItems $win
	    }

	    set indent [getIndentData $win $key $col indentWidth]
	    set maxTextWidth $pixels
	    if {$pixels != 0} {
		incr pixels $data($col-delta)
		set maxTextWidth \
		    [getMaxTextWidth $pixels $auxWidth $indentWidth]

		if {$data($col-wrap) && !$multiline} {
		    if {[font measure $cellFont -displayof $win $text] >
			$maxTextWidth} {
			set multiline 1
		    }
		}
	    }

	    #
	    # Adjust the cell text and the window width
	    #
	    set alignment [lindex $data(colList) [expr {2*$col + 1}]]
	    set snipSide $snipSides($alignment,$data($col-changesnipside))
	    if {$multiline} {
		set list [split $text "\n"]
		if {$data($col-wrap)} {
		    set snipSide ""
		}
		adjustMlElem $win list auxWidth indentWidth $cellFont \
			     $pixels $snipSide $data(-snipstring)
		set msgScript [list ::tablelist::displayText $win $key $row \
			       [join $list "\n"] $cellFont \
			       $maxTextWidth $alignment]
	    } else {
		adjustElem $win text auxWidth indentWidth $cellFont \
			   $pixels $snipSide $data(-snipstring)
	    }

	    #
	    # Update the text widget's content between the two tabs
	    #
	    findTabs $win $w [expr {$row + $diff}] $col $col tabIdx1 tabIdx2
	    if {$multiline} {
		updateMlCell $w $tabIdx1+1$pu $tabIdx2 $msgScript $aux \
			     $auxType $auxWidth $indent $indentWidth \
			     $alignment [getVAlignment $win $key $col]
	    } else {
		updateCell $w $tabIdx1+1$pu $tabIdx2 $text $aux \
			   $auxType $auxWidth $indent $indentWidth \
			   $alignment [getVAlignment $win $key $col]
	    }
	}

	-text {
	    if {$data(isDisabled)} {
		return ""
	    }

	    if {$inBody} {
		displayItems $win
	    }

	    set pixels [lindex $data(colList) [expr {2*$col}]]
	    set workPixels $pixels
	    set text $val
	    set oldItem [lindex $data(${p}itemList) $row]
	    set key [lindex $oldItem end]
	    set fmtCmdFlag [lindex $data(fmtCmdFlagList) $col]
	    if {$fmtCmdFlag} {
		set text [formatElem $win $key $row $col $text]
	    }
	    if {[string match "*\t*" $text]} {
		set text [mapTabs $text]
	    }
	    set textSav $text
	    set multiline [string match "*\n*" $text]
	    set cellFont [getCellFont $win $key $col]
	    if {$pixels == 0} {			;# convention: dynamic width
		getAuxData $win $key $col auxType auxWidthSav
		getIndentData $win $key $col indentWidthSav

		if {$data($col-maxPixels) > 0} {
		    set workPixels $data($col-maxPixels)
		}
	    }
	    set aux [getAuxData $win $key $col auxType auxWidth $workPixels]
	    set indent [getIndentData $win $key $col indentWidth]
	    set maxTextWidth $workPixels
	    if {$workPixels != 0} {
		incr workPixels $data($col-delta)
		set maxTextWidth \
		    [getMaxTextWidth $workPixels $auxWidth $indentWidth]

		if {$data($col-wrap) && !$multiline} {
		    if {[font measure $cellFont -displayof $win $text] >
			$maxTextWidth} {
			set multiline 1
		    }
		}
	    }
	    set alignment [lindex $data(colList) [expr {2*$col + 1}]]

	    #
	    # Adjust the cell text and the image or window width
	    #
	    set snipSide $snipSides($alignment,$data($col-changesnipside))
	    if {$multiline} {
		set list [split $text "\n"]
		if {$data($col-wrap)} {
		    set snipSide ""
		}
		adjustMlElem $win list auxWidth indentWidth $cellFont \
			     $workPixels $snipSide $data(-snipstring)
		set msgScript [list ::tablelist::displayText $win $key \
			       $col [join $list "\n"] $cellFont \
			       $maxTextWidth $alignment]
	    } else {
		adjustElem $win text auxWidth indentWidth $cellFont \
			   $workPixels $snipSide $data(-snipstring)
	    }

	    if {(!$data($col-hide) || $canElide) && (!$inBody ||
		$row != $data(editRow) || $col != $data(editCol))} {
		#
		# Update the text widget's content between the two tabs
		#
		findTabs $win $w [expr {$row + $diff}] $col $col tabIdx1 tabIdx2
		if {$multiline} {
		    updateMlCell $w $tabIdx1+1$pu $tabIdx2 $msgScript $aux \
				 $auxType $auxWidth $indent $indentWidth \
				 $alignment [getVAlignment $win $key $col]
		} else {
		    updateCell $w $tabIdx1+1$pu $tabIdx2 $text $aux \
			       $auxType $auxWidth $indent $indentWidth \
			       $alignment [getVAlignment $win $key $col]
		}
	    }

	    #
	    # Replace the cell's content in the internal list
	    #
	    set newItem [lreplace $oldItem $col $col $val]
	    set data(${p}itemList) \
		[lreplace $data(${p}itemList) $row $row $newItem]

	    #
	    # Replace the cell's content in the list variable if present
	    #
	    if {$inBody && $data(hasListVar) &&
		[uplevel #0 [list info exists $data(-listvariable)]]} {
		upvar #0 $data(-listvariable) var
		trace vdelete var wu $data(listVarTraceCmd)
		set var [lreplace $var $row $row \
			 [lrange $newItem 0 $data(lastCol)]]
		trace variable var wu $data(listVarTraceCmd)
	    }

	    #
	    # Adjust the columns if necessary
	    #
	    if {$pixels == 0 && ![info exists data($key-elide)] &&
		![info exists data($key-hide)]} {
		set text $textSav
		set auxWidth $auxWidthSav
		set indentWidth $indentWidthSav
		set newElemWidth [getElemWidth $win $text $auxWidth \
				  $indentWidth $cellFont]
		if {$newElemWidth > $data($col-elemWidth)} {
		    set data($col-elemWidth) $newElemWidth
		    set data($col-widestCount) 1
		    if {$newElemWidth > $data($col-reqPixels)} {
			set data($col-reqPixels) $newElemWidth
			adjustColumns $win {} 1
		    }
		} else {
		    set oldText [lindex $oldItem $col]
		    if {$fmtCmdFlag} {
			set oldText [formatElem $win $key $row $col $oldText]
		    }
		    if {[string match "*\t*" $oldText]} {
			set oldText [mapTabs $oldText]
		    }
		    set oldElemWidth [getElemWidth $win $oldText $auxWidth \
				      $indentWidth $cellFont]
		    if {$oldElemWidth < $data($col-elemWidth) &&
			$newElemWidth == $data($col-elemWidth)} {
			incr data($col-widestCount)
		    } elseif {$oldElemWidth == $data($col-elemWidth) &&
			      $newElemWidth < $oldElemWidth &&
			      [incr data($col-widestCount) -1] == 0} {
			adjustColumns $win $col 1
		    }
		}
	    }

	    if {$inBody} {
		showLineNumbersWhenIdle $win
	    }
	    updateViewWhenIdle $win
	}

	-valign {
	    #
	    # Save the properly formatted value of val in
	    # data($key,$col$opt) and redisplay the cell
	    #
	    variable valignments
	    set val [mwutil::fullOpt "vertical alignment" $val $valignments]
	    set key [lindex $data(${p}keyList) $row]
	    set data($key,$col$opt) $val
	    redisplayCol $win $col $row $row $inBody
	}

	-window {
	    if {$data(isDisabled)} {
		return ""
	    }

	    if {$inBody} {
		displayItems $win
	    }

	    #
	    # Save the old image or window width
	    #
	    set item [lindex $data(${p}itemList) $row]
	    set key [lindex $item end]
	    set name $key,$col$opt
	    getAuxData $win $key $col oldAuxType oldAuxWidth
	    getIndentData $win $key $col oldIndentWidth

	    #
	    # Delete data($name) or save the specified value in it
	    #
	    set aux $w.frm_$key,$col
	    if {[string length $val] == 0} {
		if {[info exists data($name)]} {
		    unset data($name)
		    unset data($key,$col-reqWidth)
		    unset data($key,$col-reqHeight)

		    #
		    # If the cell index is contained in the list
		    # data(${p}cellsToReconfig) then remove it from the list
		    #
		    set n [lsearch -exact $data(${p}cellsToReconfig) $row,$col]
		    if {$n >= 0} {
			set data(${p}cellsToReconfig) \
			    [lreplace $data(${p}cellsToReconfig) $n $n]
		    }
		    if {$inBody} {
			incr data(winCount) -1
		    }
		    destroy $aux
		}
	    } else {
		if {$inBody && ![info exists data($name)]} {
		    incr data(winCount)
		}
		if {[info exists data($name)] &&
		    [string compare $val $data($name)] != 0} {
		    destroy $aux
		}
		if {![winfo exists $aux]} {
		    #
		    # Create the frame and evaluate the specified script
		    # that creates a child widget within the frame
		    #
		    tk::frame $aux -borderwidth 0 -class TablelistWindow \
				   -container 0 -highlightthickness 0 \
				   -relief flat -takefocus 0
		    catch {$aux configure -padx 0 -pady 0}
		    if {$inBody} {
			bindtags $aux [linsert [bindtags $aux] 1 \
				       $data(bodyTag) TablelistBody]
		    } else {
			bindtags $aux [linsert [bindtags $aux] 1 \
				       $data(headerTag) TablelistHeader]
		    }
		    uplevel #0 $val [list $win $row $col $aux.w]
		}
		set data($name) $val
		set data($key,$col-reqWidth) [winfo reqwidth $aux.w]
		set data($key,$col-reqHeight) [winfo reqheight $aux.w]
		$aux configure -height $data($key,$col-reqHeight)

		#
		# Add the cell index to the list data(${p}cellsToReconfig)
		# if the window's requested width or height is not yet known
		#
		if {($data($key,$col-reqWidth) == 1 ||
		     $data($key,$col-reqHeight) == 1) &&
		    [lsearch -exact $data(${p}cellsToReconfig) $row,$col] < 0} {
		    lappend data(${p}cellsToReconfig) $row,$col
		    if {![info exists data(reconfigId)]} {
			set data(reconfigId) \
			    [after idle [list tablelist::reconfigWindows $win]]
		    }
		}
	    }

	    #
	    # Adjust the cell text and the image or window width
	    #
	    set pixels [lindex $data(colList) [expr {2*$col}]]
	    set workPixels $pixels
	    set text [lindex $item $col]
	    if {[lindex $data(fmtCmdFlagList) $col]} {
		set text [formatElem $win $key $row $col $text]
	    }
	    if {[string match "*\t*" $text]} {
		set text [mapTabs $text]
	    }
	    set oldText $text
	    set multiline [string match "*\n*" $text]
	    set cellFont [getCellFont $win $key $col]
	    if {$pixels == 0} {			;# convention: dynamic width
		set textSav $text
		getAuxData $win $key $col auxType auxWidthSav
		getIndentData $win $key $col indentWidthSav

		if {$data($col-maxPixels) > 0} {
		    set workPixels $data($col-maxPixels)
		}
	    }
	    set aux [getAuxData $win $key $col auxType auxWidth $workPixels]
	    set indent [getIndentData $win $key $col indentWidth]
	    set maxTextWidth $workPixels
	    if {$workPixels != 0} {
		incr workPixels $data($col-delta)
		set maxTextWidth \
		    [getMaxTextWidth $workPixels $auxWidth $indentWidth]

		if {$data($col-wrap) && !$multiline} {
		    if {[font measure $cellFont -displayof $win $text] >
			$maxTextWidth} {
			set multiline 1
		    }
		}
	    }
	    set alignment [lindex $data(colList) [expr {2*$col + 1}]]
	    set snipSide $snipSides($alignment,$data($col-changesnipside))
	    if {$multiline} {
		set list [split $text "\n"]
		if {$data($col-wrap)} {
		    set snipSide ""
		}
		adjustMlElem $win list auxWidth indentWidth $cellFont \
			     $workPixels $snipSide $data(-snipstring)
		set msgScript [list ::tablelist::displayText $win $key \
			       $col [join $list "\n"] $cellFont \
			       $maxTextWidth $alignment]
	    } else {
		adjustElem $win text auxWidth indentWidth $cellFont \
			   $workPixels $snipSide $data(-snipstring)
	    }

	    if {(!$data($col-hide) || $canElide) && (!$inBody ||
		$row != $data(editRow) || $col != $data(editCol))} {
		#
		# Delete the old cell content between the two tabs,
		# and insert the text and the auxiliary object
		#
		findTabs $win $w [expr {$row + $diff}] $col $col tabIdx1 tabIdx2
		if {$multiline} {
		    updateMlCell $w $tabIdx1+1$pu $tabIdx2 $msgScript $aux \
				 $auxType $auxWidth $indent $indentWidth \
				 $alignment [getVAlignment $win $key $col]
		} else {
		    updateCell $w $tabIdx1+1$pu $tabIdx2 $text $aux \
			       $auxType $auxWidth $indent $indentWidth \
			       $alignment [getVAlignment $win $key $col]
		}
	    }

	    #
	    # Adjust the columns if necessary
	    #
	    if {$pixels == 0 && ![info exists data($key-elide)] &&
		![info exists data($key-hide)]} {
		set text $textSav
		set auxWidth $auxWidthSav
		set indentWidth $indentWidthSav
		set newElemWidth [getElemWidth $win $text $auxWidth \
				  $indentWidth $cellFont]
		if {$newElemWidth > $data($col-elemWidth)} {
		    set data($col-elemWidth) $newElemWidth
		    set data($col-widestCount) 1
		    if {$newElemWidth > $data($col-reqPixels)} {
			set data($col-reqPixels) $newElemWidth
			adjustColumns $win {} 1
		    }
		} else {
		    set oldElemWidth [getElemWidth $win $oldText $oldAuxWidth \
				      $oldIndentWidth $cellFont]
		    if {$oldElemWidth < $data($col-elemWidth) &&
			$newElemWidth == $data($col-elemWidth)} {
			incr data($col-widestCount)
		    } elseif {$oldElemWidth == $data($col-elemWidth) &&
			      $newElemWidth < $oldElemWidth &&
			      [incr data($col-widestCount) -1] == 0} {
			adjustColumns $win $col 1
		    }
		}
	    }

	    updateViewWhenIdle $win
	}

	-windowdestroy {
	    set key [lindex $data(${p}keyList) $row]
	    set name $key,$col$opt

	    #
	    # Delete data($name) or save the specified value in it
	    #
	    if {[string length $val] == 0} {
		arrayUnset data $name
	    } else {
		set data($name) $val
	    }
	}
    }
}

#------------------------------------------------------------------------------
# tablelist::doCellCget
#
# Returns the value of the cell configuration option opt for the cell row,col
# of the tablelist widget win.
#------------------------------------------------------------------------------
proc tablelist::doCellCget {row col win opt} {
    upvar ::tablelist::ns${win}::data data
    foreach {row p w inBody diff} [getConfigParams $win $row] {}

    switch -- $opt {
	-editable {
	    return [isCellEditable $win $row $col]
	}

	-editwindow {
	    return [getEditWindow $win $row $col 0]
	}

	-stretchwindow {
	    set key [lindex $data(${p}keyList) $row]
	    if {[info exists data($key,$col$opt)]} {
		return $data($key,$col$opt)
	    } else {
		return 0
	    }
	}

	-text {
	    return [lindex [lindex $data(${p}itemList) $row] $col]
	}

	-valign {
	    set key [lindex $data(${p}keyList) $row]
	    return [getVAlignment $win $key $col]
	}

	default {
	    set key [lindex $data(${p}keyList) $row]
	    if {[info exists data($key,$col$opt)]} {
		return $data($key,$col$opt)
	    } else {
		return ""
	    }
	}
    }
}

#------------------------------------------------------------------------------
# tablelist::makeListVar
#
# Arranges for the global variable specified by varName to become the list
# variable associated with the tablelist widget win.
#------------------------------------------------------------------------------
proc tablelist::makeListVar {win varName} {
    upvar ::tablelist::ns${win}::data data
    if {[string length $varName] == 0} {
	#
	# If there is an old list variable associated with the
	# widget then remove the trace set on this variable
	#
	if {$data(hasListVar) &&
	    [uplevel #0 [list info exists $data(-listvariable)]]} {
	    synchronize $win
	    upvar #0 $data(-listvariable) oldVar
	    trace vdelete oldVar wu $data(listVarTraceCmd)
	}
	return ""
    }

    #
    # The list variable may be an array element but must not be an array
    #
    upvar #0 $varName var
    if {![regexp {^(.*)\((.*)\)$} $varName dummy name1 name2]} {
	if {[array exists var]} {
	    return -code error "variable \"$varName\" is array"
	}

	set name1 $varName
	set name2 ""
    }

    #
    # The value of the list variable (if any) must be a list of lists
    #
    if {[info exists var]} {
	if {[catch {foreach item $var {llength $item}} err] != 0} {
	    return -code error "value of variable \"$varName\" is not a list\
				of lists ($err)"
	}
    }

    #
    # If there is an old list variable associated with the
    # widget then remove the trace set on this variable
    #
    if {$data(hasListVar) &&
	[uplevel #0 [list info exists $data(-listvariable)]]} {
	synchronize $win
	upvar #0 $data(-listvariable) oldVar
	trace vdelete oldVar wu $data(listVarTraceCmd)
    }

    if {[info exists var]} {
	#
	# Invoke the trace procedure associated with the new list variable
	#
	listVarTrace $win $name1 $name2 w
    } else {
	#
	# Set $varName according to the value of data(itemList)
	#
	set var {}
	foreach item $data(itemList) {
	    lappend var [lrange $item 0 $data(lastCol)]
	}
    }

    #
    # Set a trace on the new list variable
    #
    trace variable var wu $data(listVarTraceCmd)
}

#------------------------------------------------------------------------------
# tablelist::updateListboxSetgridOpt
#
# Updates the -setgrid option of the listbox child of the tablelist widget win.
#------------------------------------------------------------------------------
proc tablelist::updateListboxSetgridOpt win {
    upvar ::tablelist::ns${win}::data data
    if {$data(-width) <= 0 && [llength $data(-stretch)] != 0} {
	$data(lb) configure -setgrid 0
    } else {
	$data(lb) configure -setgrid $data(-setgrid)
    }
}

#------------------------------------------------------------------------------
# tablelist::isRowViewable
#
# Checks whether the given row of the tablelist widget win is viewable.
#------------------------------------------------------------------------------
proc tablelist::isRowViewable {win row} {
    upvar ::tablelist::ns${win}::data data
    set key [lindex $data(keyList) $row]
    return [expr {![info exists data($key-elide)] &&
		  ![info exists data($key-hide)]}]
}

#------------------------------------------------------------------------------
# tablelist::getCellFont
#
# Returns the font to be used in the tablelist cell specified by win, key, and
# col.
#------------------------------------------------------------------------------
proc tablelist::getCellFont {win key col} {
    upvar ::tablelist::ns${win}::data data
    if {[info exists data($key,$col-font)]} {
	return $data($key,$col-font)
    } elseif {[info exists data($key-font)]} {
	return $data($key-font)
    } else {
	return [lindex $data(colFontList) $col]
    }
}

#------------------------------------------------------------------------------
# tablelist::reconfigWindows
#
# Invoked as an after idle callback, this procedure forces any geometry manager
# calculations to be completed and then applies the -window option a second
# time to those cells whose embedded windows' requested widths or heights were
# still unknown.
#------------------------------------------------------------------------------
proc tablelist::reconfigWindows win {
    #
    # Force any geometry manager calculations to be completed first
    #
    update idletasks
    if {[destroyed $win]} {
	return ""
    }

    #
    # Reconfigure the cells specified in the list data(cellsToReconfig)
    #
    upvar ::tablelist::ns${win}::data data
    foreach cellIdx $data(cellsToReconfig) {
	foreach {row col} [split $cellIdx ","] {}
	set key [lindex $data(keyList) $row]
	if {[info exists data($key,$col-window)]} {
	    doCellConfig $row $col $win -window $data($key,$col-window)
	}
    }

    #
    # Reconfigure the cells specified in the list data(hdr_cellsToReconfig)
    #
    foreach cellIdx $data(hdr_cellsToReconfig) {
	foreach {row col} [split $cellIdx ","] {}
	set key [lindex $data(hdr_keyList) $row]
	if {[info exists data($key,$col-window)]} {
	    doCellConfig h$row $col $win -window $data($key,$col-window)
	}
    }

    unset data(reconfigId)
    set data(cellsToReconfig) {}
    set data(hdr_cellsToReconfig) {}
}

#------------------------------------------------------------------------------
# tablelist::isCellEditable
#
# Checks whether the given cell of the tablelist widget win is editable.
#------------------------------------------------------------------------------
proc tablelist::isCellEditable {win row col} {
    upvar ::tablelist::ns${win}::data data
    set key [lindex $data(keyList) $row]
    if {[info exists data($key,$col-editable)]} {
	return $data($key,$col-editable)
    } else {
	return $data($col-editable)
    }
}

#------------------------------------------------------------------------------
# tablelist::getEditWindow
#
# Returns the value of the -editwindow option at cell or column level for the
# given cell of the tablelist widget win.
#------------------------------------------------------------------------------
proc tablelist::getEditWindow {win row col {skipLeadingColons 1}} {
    upvar ::tablelist::ns${win}::data data
    set key [lindex $data(keyList) $row]
    if {[info exists data($key,$col-editwindow)]} {
	set name $data($key,$col-editwindow)
    } elseif {[info exists data($col-editwindow)]} {
	set name $data($col-editwindow)
    } else {
	return "entry"
    }

    if {[regexp {^::ttk::(entry|spinbox|combobox|checkbutton|menubutton)$} \
	 $name] && $skipLeadingColons} {
	set name [string range $name 2 end]
    }

    return $name
}

#------------------------------------------------------------------------------
# tablelist::getVAlignment
#
# Returns the value of the -valign option at cell or column level for the given
# cell of the tablelist widget win.
#------------------------------------------------------------------------------
proc tablelist::getVAlignment {win key col} {
    upvar ::tablelist::ns${win}::data data
    if {[info exists data($key,$col-valign)]} {
	return $data($key,$col-valign)
    } else {
	return $data($col-valign)
    }
}

#------------------------------------------------------------------------------
# tablelist::getConfigParams
#
# For a given row argument of the form h<number> or <number>, the procedure
# returns a list consisting of <number>, the prefix "hdr_" or "" (for
# "keyList", "itemList", "cellsToReconfig", and "updateColorsWhenIdle"), the
# text widget path name $data(hdrTxt) or $data(body), 0 (false) or 1 (true)
# indicating whether this is the tablelist's body, and 2 or 1 (the difference
# between the text widget line number corresponding to <number> and <number>
# itself).
#------------------------------------------------------------------------------
proc tablelist::getConfigParams {win row} {
    upvar ::tablelist::ns${win}::data data

    if {[string match "h*" $row]} {
	return [list [string range $row 1 end] "hdr_" $data(hdrTxt) 0 2]
    } else {
	return [list $row "" $data(body) 1 1]
    }
}
