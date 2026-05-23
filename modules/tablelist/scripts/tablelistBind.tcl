#==============================================================================
# Contains public and private procedures used in tablelist bindings.
#
# Structure of the module:
#   - Public helper procedures
#   - Binding tag Tablelist
#   - Binding tag TablelistMain
#   - Binding tag TablelistWindow
#   - Binding tag TablelistBody
#   - Binding tag TablelistHeader
#   - Binding tags TablelistLabel, TablelistSubLabel, and TablelistArrow
#
# Copyright (c) 2000-2024  Csaba Nemethi (E-mail: csaba.nemethi@t-online.de)
#==============================================================================

#
# Public helper procedures
# ========================
#

#------------------------------------------------------------------------------
# tablelist::getTablelistColumn
#
# Gets the column number from the path name w of a (sub)label or
# (ttk::)checkbutton placed into a sublabel, or sort arrow of a tablelist
# widget.
#------------------------------------------------------------------------------
proc tablelist::getTablelistColumn w {
    if {[regexp \
	 {^(\..+)\.hdr\.t\.f\.l([0-9]+)-il\.f\.ckbtn$} $w dummy win col] ||
	[regexp {^(\..+)\.hdr\.t\.f\.l([0-9]+)(-[it]l)?$} $w dummy win col] ||
	[regexp {^(\..+)\.hdr\.t\.f\.c([0-9]+)$} $w dummy win col]} {
	return $col
    } else {
	return -1
    }
}

#------------------------------------------------------------------------------
# tablelist::getTablelistPath
#
# Gets the path name of the tablelist widget from the path name w of one of its
# descendants.  It is assumed that all of the ancestors of w exist (but w
# itself needn't exist).
#------------------------------------------------------------------------------
proc tablelist::getTablelistPath w {
    return [mwutil::getAncestorByClass $w Tablelist]
}

#------------------------------------------------------------------------------
# tablelist::convEventFields
#
# Gets the path name of the tablelist widget and the x and y coordinates
# relative to the latter from the path name w of one of its descendants and
# from the x and y coordinates relative to the latter.
#------------------------------------------------------------------------------
proc tablelist::convEventFields {w x y} {
    return [mwutil::convEventFields $w $x $y Tablelist]
}

#------------------------------------------------------------------------------
# tablelist::delaySashPosUpdates
#
# Overrides the Tk or Ttk library procedure ::tk::panedwindow::DragSash or
# ::ttk::panedwindow::Drag with a version in which the "sash place ..." or
# "sashpos ..." invocations for the (ttk::)panedwindow widget w are delayed by
# ms milliseconds.
#------------------------------------------------------------------------------
proc tablelist::delaySashPosUpdates {w ms} {
    #
    # Check the first argument
    #
    if {![winfo exists $w]} {
	return -code error "bad window path name \"$w\""
    }
    set class [winfo class $w]
    switch $class {
	Panedwindow {
	    if {[llength [info commands ::tk::panedwindow::DragSash]] == 0} {
		return -code error "window \"$w\" is not a panedwindow widget"
	    }
	}

	TPanedwindow {
	    if {[llength [info commands ::ttk::panedwindow::Drag]] != 0} {
		set namesp ::ttk::panedwindow
	    } else {
		return -code error \
		       "window \"$w\" is not a ttk::panedwindow widget"
	    }
	}

	TPaned {
	    if {[llength [info commands ::ttk::paned::Drag]] != 0} {
		set namesp ::ttk::paned
	    } elseif {[llength [info commands ::tile::paned::Drag]] != 0} {
		set namesp ::tile::paned
	    } else {
		return -code error "window \"$w\" is not a ttk::paned widget"
	    }
	}

	default {
	    return -code error \
		   "window \"$w\" is not a (ttk::)panewindow widget"
	}
    }

    #
    # Check the second argument
    #
    ##nagelfar ignore
    if {[catch {format "%d" $ms} result] != 0} { ;# integer check with error msg
	return -code error $result
    }
    set ms $result
    if {$ms < 0} {
	#
	# Forget the sash position update delay for the given widget
	#
	if {[info exists ::tablelist::sashPosUpdateDelays($w)]} {
	    unset ::tablelist::sashPosUpdateDelays($w)
	}
	return ""
    }

    #
    # Remember the sash position update delay for the given widget
    #
    set ::tablelist::sashPosUpdateDelays($w) $ms

    bind $w <Destroy> {+
	#
	# Forget the sash position update delay for the given widget
	#
	if {[info exists ::tablelist::sashPosUpdateDelays(%W)]} {
	    unset ::tablelist::sashPosUpdateDelays(%W)
	}
    }

    #
    # Override the Tk or Ttk library procedure
    # ::tk::panedwindow::DragSash or ${namesp}::Drag
    #
    if {[winfo class $w] eq "Panedwindow"} {
	proc ::tk::panedwindow::DragSash {w x y proxy} {
	    variable ::tk::Priv
	    if {![info exists Priv(sash)]} { return }

	    if {[$w cget -opaqueresize]} {
		set proxy 0
	    }

	    if {$proxy} {
		$w proxy place [expr {$x + $Priv(dx)}] [expr {$y + $Priv(dy)}]
	    } elseif {[info exists ::tablelist::sashPosUpdateDelays($w)]} {
		set Priv(newSashX) [expr {$x + $Priv(dx)}]
		set Priv(newSashY) [expr {$y + $Priv(dy)}]

		if {![info exists Priv(sashPosId)]} {
		    set Priv(sashPosId) \
			[after $::tablelist::sashPosUpdateDelays($w) \
			 [list ::tk::panedwindow::UpdateSashPos $w $Priv(sash)]]
		}
	    } else {
		$w sash place $Priv(sash) \
			[expr {$x + $Priv(dx)}] [expr {$y + $Priv(dy)}]
	    }
	}

	proc ::tk::panedwindow::UpdateSashPos {w index} {
	    variable ::tk::Priv
	    unset Priv(sashPosId)

	    if {[winfo exists $w]} {
		$w sash place $index $Priv(newSashX) $Priv(newSashY)
	    }
	}

    } else {
	proc ${namesp}::Drag {w x y} [format {
	    variable State
	    if {!$State(pressed)} { return }

	    switch -- [$w cget -orient] {
		horizontal	{ set delta [expr {$x - $State(pressX)}] }
		vertical	{ set delta [expr {$y - $State(pressY)}] }
	    }

	    if {[info exists ::tablelist::sashPosUpdateDelays($w)]} {
		set State(newSashPos) [expr {$State(sashPos) + $delta}]

		if {![info exists State(sashPosId)]} {
		    set State(sashPosId) \
			[after $::tablelist::sashPosUpdateDelays($w) \
			 [list %s::UpdateSashPos $w $State(sash)]]
		}
	    } else {
		$w sashpos $State(sash) [expr {$State(sashPos) + $delta}]
	    }
	} $namesp]

	proc ${namesp}::UpdateSashPos {w index} {
	    variable State
	    unset State(sashPosId)

	    if {[winfo exists $w]} {
		$w sashpos $index $State(newSashPos)
	    }
	}
    }
}

#
# Binding tag Tablelist
# =====================
#

#------------------------------------------------------------------------------
# tablelist::addActiveTag
#
# This procedure is invoked when the tablelist widget win gains the keyboard
# focus.  It moves the "active" tag to the line or cell that displays the
# active item or element of the widget in its body text child.
#------------------------------------------------------------------------------
proc tablelist::addActiveTag win {
    upvar ::tablelist::ns${win}::data data
    set data(ownsFocus) 1

    #
    # Conditionally move the "active" tag to the line
    # or cell that displays the active item or element
    #
    if {![info exists data(dispId)]} {
	moveActiveTag $win
    }
}

#------------------------------------------------------------------------------
# tablelist::removeActiveTag
#
# This procedure is invoked when the tablelist widget win loses the keyboard
# focus.  It removes the "active" tag from the body text child of the widget.
#------------------------------------------------------------------------------
proc tablelist::removeActiveTag win {
    upvar ::tablelist::ns${win}::data data
    set data(ownsFocus) 0

    $data(body) tag remove curRow 1.0 end
    $data(body) tag remove active 1.0 end
}

#------------------------------------------------------------------------------
# tablelist::finishEditingOnFocusOut
#
# This procedure is invoked when the tablelist widget win loses the keyboard
# focus and the -editendonfocusout option is true.  It finishes a possibly
# active cell editing.
#------------------------------------------------------------------------------
proc tablelist::finishEditingOnFocusOut win {
    upvar ::tablelist::ns${win}::data data
    if {![winfo exists $data(bodyFrmEd)]} {
	return ""
    }

    #
    # Do nothing if the focus was set to the
    # tablelist's body by keyboard navigation
    #
    set focusWin [focus -displayof $win]
    if {$focusWin eq $data(body)} {
	return ""
    }

    set w $data(bodyFrmEd)
    set class [winfo class $w]
    switch $class {
	TCombobox    { set w2 $w.popdown.f.l }
	ComboBox     { set w2 $w.shell.listb }
	Combobox     { set w2 $w.lwchildsite.efchildsite.popup }
	Dateentry    { set w2 $w.lwchildsite.dfchildsite.popup.calendar }
	Timeentry    { set w2 $w.lwchildsite.dfchildsite.popup.watch }
	Menubutton -
	TMenubutton  { set w2 $w.menu }
	default      { set w2 "xxx" }
    }
    if {$focusWin eq $w2} {
	return ""
    }

    if {$class eq "ComboBox"} {
	#
	# Update the element just edited but don't destroy the combobox
	# yet, because it might have pending event handling scripts
	#
	if {![doFinishEditing $win 0]} {
	    return ""
	}

	#
	# Destroy the combobox 500 ms later
	#
	after 500 [list tablelist::doFinishEditing $win 1]
    } else {
	doFinishEditing $win 1
    }
}

#------------------------------------------------------------------------------
# tablelist::cleanup
#
# This procedure is invoked when the tablelist widget win is destroyed.  It
# executes some cleanup operations.
#------------------------------------------------------------------------------
proc tablelist::cleanup win {
    #
    # Cancel the execution of all delayed (hdr_)handleMotion, updateKeyToRowMap,
    # adjustSeps, makeStripes, showLineNumbers, stretchColumns,
    # (hdr_)updateColors, updateScrlColOffset, updateHScrlbar, updateVScrlbar,
    # updateView, synchronize, displayItems, horizMoveTo, horizScrollByUnits,
    # vertMoveTo, vertScrollByUnits, dragTo, horizAutoScan, autoScan2,
    # forceRedraw, reconfigWindows, redisplay, and redisplayCol commands
    #
    upvar ::tablelist::ns${win}::data data
    foreach id {motionId hdr_motionId mapId sepsId stripesId lineNumsId
		stretchId colorsId hdr_colorsId offsetId hScrlbarId vScrlbarId
		viewId syncId dispId horizMoveToId horizScrollId vertMoveToId
		vertScrollId dragToId afterId afterId2 redrawId reconfigId} {
	if {[info exists data($id)]} {
	    after cancel $data($id)
	}
    }
    foreach name [array names data *redispId] {
	after cancel $data($name)
    }

    #
    # Cancel the execution of all remaining
    # delayed tablelist::* commands for win
    #
    foreach id [after info] {
	foreach {script kind} [after info $id] {}
	if {[string match "tablelist::*" $script] &&
	    [lindex $script 1] eq $win} {
	    after cancel $id
	}
    }

    #
    # If there is a list variable associated with the
    # widget then remove the trace set on this variable
    #
    if {$data(hasListVar) &&
	[uplevel #0 [list info exists $data(-listvariable)]]} {
	upvar #0 $data(-listvariable) var
	trace remove variable var {write unset} $data(listVarTraceCmd)
    }

    #
    # Destroy any existing bindings for the tags data(bodyTag),
    # data(headerTag), data(labelTag), and data(editwinTag)
    #
    foreach tag [list $data(bodyTag) $data(headerTag) \
		      $data(labelTag) $data(editwinTag)] {
	foreach event [bind $tag] {
	    bind $tag $event ""
	}
    }

    #
    # Restore the <Escape> binding for the toplevel window if it was overridden
    #
    set topWin $data(topWin)
    set binding [bind $topWin <Escape>]
    if {[string first "tablelist::cancelMove $win" $binding] == 0 ||
	[string first "tablelist::escape $win" $binding] == 0} {
	bind $topWin <Escape> $data(topEscBinding)
    }

    #
    # Delete the bitmaps displaying the sort ranks
    # and the images used to display the sort arrows
    #
    for {set rank 1} {$rank < 10} {incr rank} {
	image delete sortRank${rank}Img$win
    }
    set imgNames [image names]
    for {set col 0} {$col < $data(colCount)} {incr col} {
	set w $data(hdrTxtFrmCanv)$col
	foreach shape {triangleUp darkLineUp lightLineUp
		       triangleDn darkLineDn lightLineDn} {
	    if {[lsearch -exact $imgNames ${shape}Img$w] >= 0} {
		image delete ${shape}Img$w
	    }
	}
    }

    destroy $data(cornerFrm-ne) $data(cornerFrm-sw)

    namespace delete ::tablelist::ns$win
    catch {rename ::$win ""}
}

#------------------------------------------------------------------------------
# tablelist::updateBackgrounds
#
# This procedure handles the <Activate> and <Deactivate> events by configuring
# the canvases displaying sort arrows and conditionally updating the background
# color of some frames.
#------------------------------------------------------------------------------
proc tablelist::updateBackgrounds {win updateFrames inActiveWin} {
    #
    # This is an "after idle" callback; check whether the window exists
    #
    if {[destroyed $win]} {
	return ""
    }

    upvar ::tablelist::ns${win}::data data
    foreach col $data(arrowColList) {
	configCanvas $win $col
	raiseArrow $win $col
    }

    #
    # Needed for the "aqua" theme if newAquaSupport is true
    #
    if {$updateFrames} {
	set data(inActiveWin) $inActiveWin   ;# intentionally in this case only

	variable themeDefaults
	set name [expr {$inActiveWin ?
			"-labelbackground" : "-labeldeactivatedBg"}]
	foreach frm [list $data(hdrTxtFrm) $data(hdrFrm) $data(cornerFrmFrm)] {
	    $frm configure -background $themeDefaults($name)
	}
    }
}

#------------------------------------------------------------------------------
# tablelist::updateFonts
#
# This procedure handles the virtual event <<TkWorldChanged>> if the latter's
# %d field equals "FontChanged".
#------------------------------------------------------------------------------
proc tablelist::updateFonts win {
    upvar ::tablelist::ns${win}::data data

    doConfig $win -font $data(-font)
    doConfig $win -labelfont $data(-labelfont)

    foreach name [array names data ?*-font] {
	##nagelfar ignore
	if {[scan $name "%d-%s" col dummy] == 2} {
	    doColConfig $col $win -font $data($col-font)
	##nagelfar ignore
	} elseif {[scan $name "k%d-%s" num dummy] == 2} {
	    set row [keyToRow $win [set key k$num]]
	    doRowConfig $row $win -font $data($key-font)
	##nagelfar ignore
	} elseif {[scan $name "hk%d-%s" num dummy] == 2} {
	    set row [hdr_keyToRow $win [set key hk$num]]
	    doRowConfig h$row $win -font $data($key-font)
	##nagelfar ignore
	} elseif {[scan $name "k%d,%d-%s" num col dummy] == 3} {
	    set row [keyToRow $win [set key k$num]]
	    doCellConfig $row $col $win -font $data($key,$col-font)
	##nagelfar ignore
	} elseif {[scan $name "hk%d,%d-%s" num col dummy] == 3} {
	    set row [hdr_keyToRow $win [set key hk$num]]
	    doCellConfig h$row $col $win -font $data($key,$col-font)
	}
    }

    foreach name [array names data ?*-labelfont] {
	##nagelfar ignore
	if {[scan $name "%d-%s" col dummy] == 2} {
	    doColConfig $col $win -labelfont $data($col-labelfont)
	}
    }
}

#
# Binding tag TablelistMain
# =========================
#

#------------------------------------------------------------------------------
# tablelist::handleThemeChangedEvent
#
# This procedure handles the virtual event <<ThemeChanged>>.
#------------------------------------------------------------------------------
proc tablelist::handleThemeChangedEvent {} {
    variable currentTheme

    set newTheme [::mwutil::currentTheme]
    switch -- $newTheme {
	alt -
	clam -
	default {
	    set newCkbtnLayout [style layout TCheckbutton]
	    variable ckbtnLayouts
	    if {$newTheme eq $currentTheme &&
		$newCkbtnLayout eq $ckbtnLayouts($currentTheme)} {
		return ""
	    }
	}
	tileqt {
	    set newWidgetStyle [tileqt_currentThemeName]
	    if {[info exists ::env(KDE_SESSION_VERSION)] &&
		$::env(KDE_SESSION_VERSION) ne ""} {
		set newColorScheme [getKdeConfigVal "General" "ColorScheme"]
	    } else {
		set newColorScheme [getKdeConfigVal "KDE" "colorScheme"]
	    }
	    variable widgetStyle
	    variable colorScheme
	    if {$newTheme eq $currentTheme &&
		$newWidgetStyle eq $widgetStyle &&
		$newColorScheme eq $colorScheme} {
		return ""
	    }
	}
	default {
	    if {$newTheme eq $currentTheme} {
		return ""
	    }
	}
    }

    set currentTheme $newTheme
    switch -- $newTheme {
	aqua {
	    #
	    # Work around some issues with the appearance
	    # change support in Tk 8.6.10 and 8.7a3
	    #
	    condOpenPipeline
	}
	alt -
	clam -
	default {
	    set ckbtnLayouts($newTheme) $newCkbtnLayout
	}
	tileqt {
	    set widgetStyle $newWidgetStyle
	    set colorScheme $newColorScheme
	}
    }

    variable usingTile
    if {$usingTile} {
	#
	# Populate the array themeDefaults with
	# values corresponding to the new theme
	#
	setThemeDefaults
	event generate . <<TablelistThemeDefaultsChanged>>
    }

    #
    # Level-order traversal like in the Tk library procedue ::ttk::ThemeChanged
    #
    set lst1 {.}
    while {[llength $lst1] != 0} {
	set lst2 {}
	foreach w $lst1 {
	    if {[winfo class $w] eq "Tablelist"} {
		updateConfiguration $w
	    }
	    foreach child [winfo children $w] {
		lappend lst2 $child
	    }
	}
	set lst1 $lst2
    }
}

#------------------------------------------------------------------------------
# tablelist::updateConfiguration
#
# Updates the theme-specific default values of some tablelist configuration
# options.
#------------------------------------------------------------------------------
proc tablelist::updateConfiguration win {
    upvar ::tablelist::ns${win}::data data
    variable usingTile
    if {$usingTile} {
	#
	# Populate the array tmp with values corresponding to the old theme
	#
	array set tmp $data(themeDefaults)

	#
	# Set those configuration options whose values equal the old
	# theme-specific defaults to the new theme-specific ones
	#
	variable themeDefaults
	foreach opt {-background -foreground -disabledforeground
		     -stripebackground -selectbackground -selectforeground
		     -selectborderwidth -font -labelforeground -labelfont
		     -labelborderwidth -labelpady -treestyle -targetcolor} {
	    if {$data($opt) eq $tmp($opt)} {
		doConfig $win $opt $themeDefaults($opt)
	    }
	}
	if {$data(-arrowcolor) eq $tmp(-arrowcolor) &&
	    $data(-arrowstyle) eq $tmp(-arrowstyle)} {
	    foreach opt {-arrowcolor -arrowdisabledcolor -arrowstyle} {
		doConfig $win $opt $themeDefaults($opt)
	    }
	}
	foreach opt {-background -foreground} {
	    doConfig $win $opt $data($opt)     ;# sets the bg color of the seps
	}
	updateBackgrounds $win 0 0
    }

    #
    # Destroy and recreate the label images and checkbuttons
    #
    for {set col 0} {$col < $data(colCount)} {incr col} {
	if {[info exists data($col-labelimage)]} {
	    set val $data($col-labelimage)
	    doColConfig $col $win -labelimage ""
	    doColConfig $col $win -labelimage $val
	}
	if {[info exists data($col-labelwindow)]} {
	    set val $data($col-labelwindow)
	    doColConfig $col $win -labelwindow ""
	    doColConfig $col $win -labelwindow $val
	}
    }

    #
    # Destroy and recreate the edit window if present
    #
    if {[set editCol $data(editCol)] >= 0} {
	set editRow $data(editRow)
	saveEditData $win
	destroy $data(bodyFrm)
	doEditCell $win $editRow $editCol 1
    }

    #
    # Destroy and recreate the embedded windows
    #
    set hdr_itemCount $data(hdr_itemCount)
    set colCount $data(colCount)
    for {set row 0} {$row < $hdr_itemCount} {incr row} {
	for {set col 0} {$col < $colCount} {incr col} {
	    set key [lindex $data(hdr_keyList) $row]
	    if {[info exists data($key,$col-window)]} {
		set cmd $data($key,$col-window)
		doCellConfig h$row $col $win -window ""
		doCellConfig h$row $col $win -window $cmd
	    }
	}
    }
    if {$data(winCount) != 0} {
	set itemCount $data(itemCount)
	for {set row 0} {$row < $itemCount} {incr row} {
	    for {set col 0} {$col < $colCount} {incr col} {
		set key [lindex $data(keyList) $row]
		if {[info exists data($key,$col-window)]} {
		    set cmd $data($key,$col-window)
		    doCellConfig $row $col $win -window ""
		    doCellConfig $row $col $win -window $cmd
		}
	    }
	}
    }

    if {$usingTile} {
	set data(themeDefaults) [array get themeDefaults]

	set x 0
	set y 0
	variable currentTheme
	set aquaTheme [expr {$currentTheme eq "aqua"}]
	if {$aquaTheme} {
	    variable newAquaSupport
	    if {$newAquaSupport} {
		set y 4
	    } else {
		set x -1
	    }
	}
	place configure $data(hdrFrmLbl) -x $x -y $y

	set y 0
	if {$aquaTheme && $newAquaSupport} {
	    set y 4
	}
	place configure $data(cornerLbl) -y $y

	if {$aquaTheme && $newAquaSupport} {
	    set name [expr {$data(inActiveWin) ?
			    "-labelbackground" : "-labeldeactivatedBg"}]
	    foreach w [list $data(hdrTxtFrm) $data(hdrFrm) \
		       $data(cornerFrmFrm)] {
		$w configure -background $themeDefaults($name)
	    }

	    if {[tk::unsupported::MacWindowStyle isdark .]} {
		set labelBorderBg #4b4b4b
	    } else {
		set labelBorderBg #c8c8c8
	    }
	    foreach w [list $data(hdrTxtFrmFrm) $data(hdrFrmFrm) \
		       $data(cornerFrmFrmFrm)] {
		$w configure -background $labelBorderBg
	    }
	}

	adjustColumns $win allCols 1

	set showSeps $data(-showseparators)
	doConfig $win -showseparators 0
	doConfig $win -showseparators $showSeps
    }
}

#------------------------------------------------------------------------------
# tablelist::handleAppearanceEvent
#
# This procedure handles the virtual events <<LightAqua>> and <<DarkAqua>>.
#------------------------------------------------------------------------------
proc tablelist::handleAppearanceEvent {} {
    variable appearanceId
    unset appearanceId

    variable currentTheme
    if {$currentTheme ne "aqua"} {
	return ""
    }

    #
    # Work around some issues with the appearance
    # change support in Tk 8.6.10 and 8.7a3
    #
    condOpenPipeline

    #
    # Populate the array themeDefaults with
    # values corresponding to the new appearance
    #
    setThemeDefaults
    event generate . <<TablelistThemeDefaultsChanged>>

    #
    # Level-order traversal like in the Tk library procedue ::ttk::ThemeChanged
    #
    set lst1 {.}
    while {[llength $lst1] != 0} {
	set lst2 {}
	foreach w $lst1 {
	    if {[winfo class $w] eq "Tablelist"} {
		updateAppearance $w
	    }
	    foreach child [winfo children $w] {
		lappend lst2 $child
	    }
	}
	set lst1 $lst2
    }
}

#------------------------------------------------------------------------------
# tablelist::updateAppearance
#
# Updates the appearance of the tablelist widget win according to the virtual
# events <<LightAqua>> and <<DarkAqua>>.
#------------------------------------------------------------------------------
proc tablelist::updateAppearance win {
    upvar ::tablelist::ns${win}::data data

    #
    # Populate the array tmp with values
    # corresponding to the old appearance
    #
    array set tmp $data(themeDefaults)

    #
    # Set those configuration options whose values equal the old
    # theme-specific defaults to the new theme-specific ones
    #
    variable themeDefaults
    foreach opt {-background -foreground -disabledforeground -stripebackground
		 -selectbackground -selectforeground -labelforeground
		 -targetcolor} {
	if {$data($opt) eq $tmp($opt)} {
	    doConfig $win $opt $themeDefaults($opt)
	}
    }
    if {$data(-arrowcolor) eq $tmp(-arrowcolor)} {
	foreach opt {-arrowcolor -arrowdisabledcolor} {
	    doConfig $win $opt $themeDefaults($opt)
	}
    }
    foreach opt {-background -foreground} {
	doConfig $win $opt $data($opt)     ;# sets the bg color of the seps
    }
    updateBackgrounds $win 0 0

    #
    # Destroy and recreate the edit window if present
    #
    if {[set editCol $data(editCol)] >= 0} {
	set editRow $data(editRow)
	saveEditData $win
	destroy $data(bodyFrm)
	doEditCell $win $editRow $editCol 1
    }

    set name [expr {$data(inActiveWin) ?
		    "-labelbackground" : "-labeldeactivatedBg"}]
    foreach w [list $data(hdrTxtFrm) $data(hdrFrm) $data(cornerFrmFrm)] {
	$w configure -background $themeDefaults($name)
    }

    if {[tk::unsupported::MacWindowStyle isdark .]} {
	set labelBorderBg #4b4b4b
    } else {
	set labelBorderBg #c8c8c8
    }
    foreach w [list $data(hdrTxtFrmFrm) $data(hdrFrmFrm) \
	       $data(cornerFrmFrmFrm)] {
	$w configure -background $labelBorderBg
    }

    set data(themeDefaults) [array get themeDefaults]
}

#------------------------------------------------------------------------------
# tablelist::condOpenPipeline
#
# Conditionally opens a command pipeline for getting the RGB values
# corresponding to systemSelectedTextBackgroundColor on the Mac.
#------------------------------------------------------------------------------
proc tablelist::condOpenPipeline {} {
    ##nagelfar ignore
    scan $::tcl_platform(osVersion) "%d" majorOSVersion
    if {$majorOSVersion < 18 ||
	($::tk_patchLevel ne "8.6.10" && $::tk_patchLevel ne "8.7a3")} {
	return ""
    }

    variable channel
    if {[catch {open "| [info nameofexecutable]" w+} channel] == 0} {
	puts $channel [format {
	    package require Tk %s
	    wm withdraw .
	    puts [winfo rgb . systemSelectedTextBackgroundColor]
	    flush stdout
	} $::tk_patchLevel]
	flush $channel
    } else {
	unset channel
    }
}

#
# Binding tag TablelistWindow
# ===========================
#

#------------------------------------------------------------------------------
# tablelist::cleanupWindow
#
# This procedure is invoked when a window embedded into a tablelist widget is
# destroyed.  It invokes the cleanup script associated with the cell containing
# the window, if any.
#------------------------------------------------------------------------------
proc tablelist::cleanupWindow aux {
    regexp {^(.+)\.(hdr\.t|body)\.frm_(h?k[0-9]+),([0-9]+)$} $aux \
	   dummy win textWidget key col
    upvar ::tablelist::ns${win}::data data \
	  ::tablelist::ns${win}::checkStates checkStates

    set cmd [getOpt $win $key $col -windowdestroy]
    if {$cmd ne ""} {
	set row [keyToRow $win $key]
	uplevel #0 $cmd [list $win $row $col $aux.w]
    }

    if {[info exists checkStates($key,$col)]} {
	unset checkStates($key,$col)
    }
}

#
# Binding tag TablelistBody
# =========================
#

#------------------------------------------------------------------------------
# tablelist::defineTablelistBody
#
# Defines the bindings for the binding tag TablelistBody.
#------------------------------------------------------------------------------
proc tablelist::defineTablelistBody {} {
    variable priv
    array set priv {
	x			""
	y			""
	afterId			""
	prevRow			""
	prevCol			""
	prevActExpCollCtrlCell	""
	selection		{}
	selClearPending		0
	selChangePending	0
	justClicked		0
	justReleased		0
	clickedInEditWin	0
	clickedExpCollCtrl	0
    }

    bind TablelistBody <FocusIn> {
	tablelist::addActiveTag [tablelist::getTablelistPath %W]
    }
    bind TablelistBody <FocusOut> {
	if {"%d" ne "NotifyInferior"} {
	    tablelist::removeActiveTag [tablelist::getTablelistPath %W]
	}
    }
    foreach event {<Enter> <Motion> <Leave>} {
	##nagelfar ignore
	bind TablelistBody $event [format {
	    tablelist::handleMotionDelayed %%W %%x %%y %%X %%Y %%m %s
	} $event]
    }
    bind TablelistBody <Button-1> {
	if {[winfo exists %W]} {
	    foreach {tablelist::W tablelist::x tablelist::y} \
		[tablelist::convEventFields %W %x %y] {}
	    if {$tablelist::y < [winfo y [$tablelist::W bodypath]]} {
		continue	;# on a vertical separator, outside the body
	    }

	    set tablelist::priv(x) $tablelist::x
	    set tablelist::priv(y) $tablelist::y
	    set tablelist::priv(row) [$tablelist::W nearest       $tablelist::y]
	    set tablelist::priv(col) [$tablelist::W nearestcolumn $tablelist::x]
	    set tablelist::priv(justClicked) 1
	    after 300 [list set tablelist::priv(justClicked) 0]
	    set tablelist::priv(clickedInEditWin) 0
	    if {[$tablelist::W cget -setfocus] &&
		[$tablelist::W cget -state] eq "normal"} {
		focus [$tablelist::W bodypath]
	    }
	    if {[tablelist::wasExpCollCtrlClicked %W %x %y]} {
		set tablelist::priv(clickedExpCollCtrl) 1
		tablelist::doFinishEditing $tablelist::W
	    } else {
		tablelist::condEditContainingCell $tablelist::W \
		    $tablelist::x $tablelist::y
		tablelist::condBeginMove $tablelist::W $tablelist::priv(row)
		tablelist::beginSelect $tablelist::W \
		    $tablelist::priv(row) $tablelist::priv(col) 1
	    }
	}
    }
    bind TablelistBody <Double-Button-1> {
	if {[winfo exists %W]} {
	    foreach {tablelist::W tablelist::x tablelist::y} \
		[tablelist::convEventFields %W %x %y] {}
	    if {$tablelist::y < [winfo y [$tablelist::W bodypath]]} {
		continue	;# on a vertical separator, outside the body
	    }

	    if {[$tablelist::W cget -editselectedonly]} {
		tablelist::condEditContainingCell $tablelist::W \
		    $tablelist::x $tablelist::y
	    }
	}
    }
    bind TablelistBody <B1-Motion> {
	if {$tablelist::priv(justClicked)} {
	    continue
	}

	foreach {tablelist::W tablelist::x tablelist::y} \
	    [tablelist::convEventFields %W %x %y] {}

	if {$tablelist::priv(x) eq "" || $tablelist::priv(y) eq ""} {
	    set tablelist::priv(x) $tablelist::x
	    set tablelist::priv(y) $tablelist::y
	}
	set tablelist::priv(prevX) $tablelist::priv(x)
	set tablelist::priv(prevY) $tablelist::priv(y)
	set tablelist::priv(x) $tablelist::x
	set tablelist::priv(y) $tablelist::y
	tablelist::condAutoScan $tablelist::W
	if {!$tablelist::priv(clickedExpCollCtrl)} {
	    tablelist::motion $tablelist::W \
		[$tablelist::W nearest       $tablelist::y] \
		[$tablelist::W nearestcolumn $tablelist::x] 1
	    tablelist::condShowTarget $tablelist::W $tablelist::y
	}
    }
    bind TablelistBody <ButtonRelease-1> {
	if {[winfo exists %W]} {
	    foreach {tablelist::W tablelist::x tablelist::y} \
		[tablelist::convEventFields %W %x %y] {}

	    set tablelist::priv(x) ""
	    set tablelist::priv(y) ""
	    after cancel $tablelist::priv(afterId)
	    set tablelist::priv(afterId) ""
	    set tablelist::priv(justReleased) 1
	    after 100 [list set tablelist::priv(justReleased) 0]
	    set tablelist::priv(releasedInEditWin) 0
	    if {!$tablelist::priv(clickedExpCollCtrl)} {
		if {$tablelist::priv(justClicked)} {
		    tablelist::moveOrActivate $tablelist::W \
			$tablelist::priv(row) $tablelist::priv(col) 1
		} else {
		    tablelist::moveOrActivate $tablelist::W \
			[$tablelist::W nearest       $tablelist::y] \
			[$tablelist::W nearestcolumn $tablelist::x] \
			[expr {$tablelist::x >= 0 &&
			       $tablelist::x < [winfo width $tablelist::W] &&
			       $tablelist::y >= [winfo y $tablelist::W.body] &&
			       $tablelist::y < [winfo height $tablelist::W]}]
		}
	    }
	    set tablelist::priv(clickedExpCollCtrl) 0
	    after 100 [list tablelist::condEvalInvokeCmd $tablelist::W]
	}
    }
    bind TablelistBody <Shift-Button-1> {
	foreach {tablelist::W tablelist::x tablelist::y} \
	    [tablelist::convEventFields %W %x %y] {}
	if {$tablelist::y < [winfo y [$tablelist::W bodypath]]} {
	    continue		;# on a vertical separator, outside the body
	}

	tablelist::beginExtend $tablelist::W \
	    [$tablelist::W nearest       $tablelist::y] \
	    [$tablelist::W nearestcolumn $tablelist::x]
	tablelist::condFinishEditing $tablelist::W $tablelist::x $tablelist::y
    }
    bind TablelistBody <Control-Button-1> {
	foreach {tablelist::W tablelist::x tablelist::y} \
	    [tablelist::convEventFields %W %x %y] {}
	if {$tablelist::y < [winfo y [$tablelist::W bodypath]]} {
	    continue		;# on a vertical separator, outside the body
	}

	tablelist::beginToggle $tablelist::W \
	    [$tablelist::W nearest       $tablelist::y] \
	    [$tablelist::W nearestcolumn $tablelist::x]
	tablelist::condFinishEditing $tablelist::W $tablelist::x $tablelist::y
    }

    foreach event {<Return> <KP_Enter> <F2>} {
	bind TablelistBody $event {
	    tablelist::condEditActiveCell [tablelist::getTablelistPath %W]
	}
    }
    bind TablelistBody <Tab> {
	tablelist::nextPrevCell [tablelist::getTablelistPath %W] 1
    }
    bind TablelistBody <Shift-Tab> {
	tablelist::nextPrevCell [tablelist::getTablelistPath %W] -1
    }
    bind TablelistBody <<PrevWindow>> {
	tablelist::nextPrevCell [tablelist::getTablelistPath %W] -1
    }
    bind TablelistBody <plus> {
	tablelist::plusMinus [tablelist::getTablelistPath %W] plus
    }
    bind TablelistBody <minus> {
	tablelist::plusMinus [tablelist::getTablelistPath %W] minus
    }
    bind TablelistBody <KP_Add> {
	tablelist::plusMinus [tablelist::getTablelistPath %W] plus
    }
    bind TablelistBody <KP_Subtract> {
	tablelist::plusMinus [tablelist::getTablelistPath %W] minus
    }

    foreach {virtual event} {
	PrevLine <Up>		 NextLine <Down>
	PrevChar <Left>		 NextChar <Right>
	LineStart <Home>	 LineEnd <End>
	PrevWord <Control-Left>	 NextWord <Control-Right>

	SelectPrevLine <Shift-Up>     SelectNextLine <Shift-Down>
	SelectPrevChar <Shift-Left>   SelectNextChar <Shift-Right>
	SelectLineStart <Shift-Home>  SelectLineEnd <Shift-End>
	SelectAll <Control-slash>     SelectNone <Control-backslash>} {
	if {[llength [event info <<$virtual>>]] == 0} {
	    set eventArr($virtual) $event
	} else {
	    set eventArr($virtual) <<$virtual>>
	}
    }

    bind TablelistBody $eventArr(PrevLine) {
	tablelist::upDown [tablelist::getTablelistPath %W] -1
    }
    bind TablelistBody $eventArr(NextLine) {
	tablelist::upDown [tablelist::getTablelistPath %W] 1
    }
    bind TablelistBody $eventArr(PrevChar) {
	tablelist::leftRight [tablelist::getTablelistPath %W] -1
    }
    bind TablelistBody $eventArr(NextChar) {
	tablelist::leftRight [tablelist::getTablelistPath %W] 1
    }
    bind TablelistBody <Prior> {
	tablelist::priorNext [tablelist::getTablelistPath %W] -1
    }
    bind TablelistBody <Next> {
	tablelist::priorNext [tablelist::getTablelistPath %W] 1
    }
    bind TablelistBody $eventArr(LineStart) {
	tablelist::homeEnd [tablelist::getTablelistPath %W] Home
    }
    bind TablelistBody $eventArr(LineEnd) {
	tablelist::homeEnd [tablelist::getTablelistPath %W] End
    }
    bind TablelistBody <Control-Home> {
	tablelist::firstLast [tablelist::getTablelistPath %W] first
    }
    bind TablelistBody <Control-End> {
	tablelist::firstLast [tablelist::getTablelistPath %W] last
    }
    bind TablelistBody $eventArr(SelectPrevLine) {
	tablelist::extendUpDown [tablelist::getTablelistPath %W] -1
    }
    bind TablelistBody $eventArr(SelectNextLine) {
	tablelist::extendUpDown [tablelist::getTablelistPath %W] 1
    }
    bind TablelistBody $eventArr(SelectPrevChar) {
	tablelist::extendLeftRight [tablelist::getTablelistPath %W] -1
    }
    bind TablelistBody $eventArr(SelectNextChar) {
	tablelist::extendLeftRight [tablelist::getTablelistPath %W] 1
    }
    bind TablelistBody $eventArr(SelectLineStart) {
	tablelist::extendToHomeEnd [tablelist::getTablelistPath %W] Home
    }
    bind TablelistBody $eventArr(SelectLineEnd) {
	tablelist::extendToHomeEnd [tablelist::getTablelistPath %W] End
    }
    bind TablelistBody <Shift-Control-Home> {
	tablelist::extendToFirstLast [tablelist::getTablelistPath %W] first
    }
    bind TablelistBody <Shift-Control-End> {
	tablelist::extendToFirstLast [tablelist::getTablelistPath %W] last
    }
    foreach event {<space> <Select>} {
	bind TablelistBody $event {
	    set tablelist::W [tablelist::getTablelistPath %W]
	    tablelist::beginSelect $tablelist::W \
		[$tablelist::W index active] [$tablelist::W columnindex active]
	}
    }
    foreach event {<Shift-Control-space> <Shift-Select>} {
	bind TablelistBody $event {
	    set tablelist::W [tablelist::getTablelistPath %W]
	    tablelist::beginExtend $tablelist::W \
		[$tablelist::W index active] [$tablelist::W columnindex active]
	}
    }
    foreach event {<Control-space> <Control-Select>} {
	bind TablelistBody $event {
	    if {!$tablelist::strictTk} {
		set tablelist::W [tablelist::getTablelistPath %W]
		tablelist::beginToggle $tablelist::W \
		    [$tablelist::W index active] \
		    [$tablelist::W columnindex active]
	    }
	}
    }
    bind TablelistBody <Escape> {
	tablelist::cancelSelection [tablelist::getTablelistPath %W]
    }
    bind TablelistBody $eventArr(SelectAll) {
	tablelist::selectAll [tablelist::getTablelistPath %W]
    }
    bind TablelistBody $eventArr(SelectNone) {
	set tablelist::W [tablelist::getTablelistPath %W]
	if {[$tablelist::W cget -selectmode] ne "browse"} {
	    $tablelist::W selection clear 0 end
	    tablelist::genTablelistSelectEvent $tablelist::W
	}
    }
    foreach pattern {Tab Shift-Tab ISO_Left_Tab hpBackTab} {
	catch {
	    foreach modifier {Control Meta} {
		bind TablelistBody <$modifier-$pattern> [format {
		    mwutil::processTraversal %%W Tablelist <%s>
		} $pattern]
	    }
	}
    }

    variable winSys
    if {$::tk_version >= 8.7 &&
	[package vcompare $::tk_patchLevel "8.7a4"] >= 0} {
	bind TablelistBody <MouseWheel> {
	    tablelist::handleWheelEvent <MouseWheel> y %W \
		%X %Y %D -40.0
	}
	bind TablelistBody <Option-MouseWheel> {
	    tablelist::handleWheelEvent <Option-MouseWheel> y %W \
		%X %Y %D -12.0
	}
	bind TablelistBody <Shift-MouseWheel> {
	    tablelist::handleWheelEvent <Shift-MouseWheel> x %W \
		%X %Y %D -40.0
	}
	bind TablelistBody <Shift-Option-MouseWheel> {
	    tablelist::handleWheelEvent <Shift-Option-MouseWheel> x %W \
		%X %Y %D -12.0
	}
    } elseif {$winSys eq "aqua"} {
	catch {
	    bind TablelistBody <MouseWheel> {
		tablelist::handleWheelEvent <MouseWheel> y %W \
		    %X %Y %D -1.0
	    }
	    bind TablelistBody <Option-MouseWheel> {
		tablelist::handleWheelEvent <Option-MouseWheel> y %W \
		    %X %Y %D -0.1
	    }
	    bind TablelistBody <Shift-MouseWheel> {
		tablelist::handleWheelEvent <Shift-MouseWheel> x %W \
		    %X %Y %D -1.0
	    }
	    bind TablelistBody <Shift-Option-MouseWheel> {
		tablelist::handleWheelEvent <Shift-Option-MouseWheel> x %W \
		    %X %Y %D -0.1
	    }
	}
    } else {
	catch {
	    bind TablelistBody <MouseWheel> {
		tablelist::handleWheelEvent <MouseWheel> y %W \
		    %X %Y %D -30.0
	    }
	    bind TablelistBody <Shift-MouseWheel> {
		tablelist::handleWheelEvent <Shift-MouseWheel> x %W \
		    %X %Y %D -30.0
	    }
	}

	if {$winSys eq "x11"} {
	    bind TablelistBody <Button-4> {
		if {!$tk_strictMotif} {
		    tablelist::handleWheelEvent <Button-4> y %W \
			%X %Y -5 1.0
		}
	    }
	    bind TablelistBody <Button-5> {
		if {!$tk_strictMotif} {
		    tablelist::handleWheelEvent <Button-5> y %W \
			%X %Y  5 1.0
		}
	    }
	    bind TablelistBody <Shift-Button-4> {
		if {!$tk_strictMotif} {
		    tablelist::handleWheelEvent <Shift-Button-4> x %W \
			%X %Y -5 1.0
		}
	    }
	    bind TablelistBody <Shift-Button-5> {
		if {!$tk_strictMotif} {
		    tablelist::handleWheelEvent <Shift-Button-5> x %W \
			%X %Y  5 1.0
		}
	    }

	    if {$::tk_patchLevel eq "8.7a3"} {
		bind TablelistBody <Button-6> {
		    if {!$tk_strictMotif} {
			tablelist::handleWheelEvent <Button-6> x %W \
			    %X %Y -5 1.0
		    }
		}
		bind TablelistBody <Button-7> {
		    if {!$tk_strictMotif} {
			tablelist::handleWheelEvent <Button-7> x %W \
			    %X %Y  5 1.0
		    }
		}
	    }
	}
    }

    if {[llength [info commands ::tk::PreciseScrollDeltas]] != 0} {
	bind TablelistBody <TouchpadScroll> {
	    if {%# %% 5 != 0} {
		continue
	    }
	    lassign [tk::PreciseScrollDeltas %D] tablelist::dX tablelist::dY
	    if {$tablelist::dX != 0} {
		event generate %W <Shift-MouseWheel> -rootx %X -rooty %Y \
		    -delta [expr {40 * $tablelist::dX}]
	    }
	    if {$tablelist::dY != 0} {
		event generate %W <MouseWheel> -rootx %X -rooty %Y \
		    -delta [expr {40 * $tablelist::dY}]
	    }
	}
    }

    if {$winSys ne "aqua"} {
	foreach event {<Control-Key-a> <Control-Lock-Key-A>} {
	    bind TablelistBody $event {
		tablelist::selectAll [tablelist::getTablelistPath %W]
	    }
	}
	foreach event {<Shift-Control-Key-A> <Shift-Control-Lock-Key-a>} {
	    bind TablelistBody $event {
		set tablelist::W [tablelist::getTablelistPath %W]
		if {[$tablelist::W cget -selectmode] ne "browse"} {
		    $tablelist::W selection clear 0 end
		    tablelist::genTablelistSelectEvent $tablelist::W
		}
	    }
	}
    }

    foreach event {<Control-Left> <<PrevWord>> <Control-Right> <<NextWord>>
		   <Control-Prior> <Control-Next> <<Copy>>
		   <Button-2> <B2-Motion>} {
	set script [string map {
	    "%W" "$tablelist::W"  "%x" "$tablelist::x"  "%y" "$tablelist::y"
	} [bind Listbox $event]]

	if {$script ne ""} {
	    ##nagelfar ignore
	    bind TablelistBody $event [format {
		if {[winfo exists %%W]} {
		    foreach {tablelist::W tablelist::x tablelist::y} \
			[tablelist::convEventFields %%W %%x %%y] {}
		    %s
		}
	    } $script]
	}
    }
}

#------------------------------------------------------------------------------
# tablelist::invokeMotionHandler
#
# Invokes the procedure handleMotionDelayed for the body of the tablelist
# widget win and the current pointer coordinates.
#------------------------------------------------------------------------------
proc tablelist::invokeMotionHandler win {
    upvar ::tablelist::ns${win}::data data
    set w $data(body)
    set X [winfo pointerx $w]
    set Y [winfo pointery $w]
    if {$X >= 0 && $Y >= 0} {	;# the mouse pointer is on the same screen as w
	set x [expr {$X - [winfo rootx $w]}]
	set y [expr {$Y - [winfo rooty $w]}]
    } else {
	set x -1
	set y -1
    }

    handleMotionDelayed $w $x $y $X $Y "" <Motion>
}

#------------------------------------------------------------------------------
# tablelist::handleMotionDelayed
#
# This procedure is invoked when the mouse pointer enters or leaves the body of
# a tablelist widget or is moving within it.  It schedules the execution of the
# handleMotion procedure 100 ms later.
#------------------------------------------------------------------------------
proc tablelist::handleMotionDelayed {w x y X Y mode event} {
    set win [getTablelistPath $w]
    upvar ::tablelist::ns${win}::data data
    if {[regexp {^vsep([0-9]+)?$} [winfo name $w]]} {
	return ""
    }

    set data(motionData) [list $w $x $y $X $Y $event]
    if {$event eq "<Leave>"} {
	handleMotion $win
    } elseif {![info exists data(motionId)]} {
	set data(motionId) [after 100 [list tablelist::handleMotion $win]]
    }

    if {$event eq "<Enter>" && $mode eq "NotifyNormal"} {
	set data(justEntered) 1
    }
}

#------------------------------------------------------------------------------
# tablelist::handleMotion
#
# Invokes the procedures showOrHideTooltip, updateExpCollCtrl, and updateCursor.
#------------------------------------------------------------------------------
proc tablelist::handleMotion win {
    upvar ::tablelist::ns${win}::data data
    if {[info exists data(motionId)]} {
	after cancel $data(motionId)
	unset data(motionId)
    }

    set data(justEntered) 0

    foreach {w x y X Y event} $data(motionData) {}
    if {![winfo exists $w]} {
	invokeMotionHandler $win
	return ""
    }

    #
    # Get the containing cell from the coordinates relative to the tablelist
    #
    foreach {win _x _y} [convEventFields $w $x $y] {}
    set row [containingRow $win $_y]
    set col [containingCol $win $_x]

    if {$event ne "<Enter>" || ($row >= 0 && $col >= 0)} {
	showOrHideTooltip $win $row $col $X $Y
	if {[destroyed $win]} {
	    return ""
	}
    }

    updateExpCollCtrl $win $w $row $col $x
    updateCursor $win $row $col
}

#------------------------------------------------------------------------------
# tablelist::showOrHideTooltip
#
# If the pointer has crossed a cell boundary then the procedure removes the old
# tooltip and displays the one corresponding to the new cell.
#------------------------------------------------------------------------------
proc tablelist::showOrHideTooltip {win row col X Y} {
    upvar ::tablelist::ns${win}::data data
    if {$data(-tooltipaddcommand) eq "" || $data(-tooltipdelcommand) eq "" ||
	"$row,$col" eq $data(prevCell)} {
	return ""
    }

    #
    # Remove the old tooltip, if any.  Then, if we are within a
    # cell, display the new tooltip corresponding to that cell.
    #
    event generate $win <Leave>
    catch {uplevel #0 $data(-tooltipdelcommand) [list $win]}
    if {[destroyed $win]} {
	return ""
    }
    set data(prevCell) $row,$col
    if {$row >= 0 && $col >= 0} {
	set focusWin [focus -displayof $win]
	if {$focusWin eq "" || [string first $win. $focusWin] != 0 ||
	    [winfo toplevel $focusWin] eq $data(topWin)} {
	    uplevel #0 $data(-tooltipaddcommand) [list $win $row $col]
	    if {[destroyed $win]} {
		return ""
	    }
	    event generate $win <Enter> -rootx $X -rooty $Y
	}
    }
}

#------------------------------------------------------------------------------
# tablelist::updateExpCollCtrl
#
# Activates or deactivates the expand/collapse control under the mouse pointer.
#------------------------------------------------------------------------------
proc tablelist::updateExpCollCtrl {win w row col x} {
    upvar ::tablelist::ns${win}::data data
    set key [lindex $data(keyList) $row]
    set indentLabel $data(body).ind_$key,$col

    #
    # Check whether the x coordinate is inside the expand/collapse control
    #
    set inExpCollCtrl 0
    if {[winfo exists $indentLabel]} {
	if {$w eq $data(body) && $x < [winfo x $indentLabel] &&
	    $data($key-parent) eq "root"} {
	    set imgName [$indentLabel cget -image]
	    if {[regexp {^tablelist_(.+)_(collapsed|expanded).*Img$} \
			 $imgName dummy treeStyle mode]} {
		#
		# The mouse position is in the tablelist body, to the left
		# of an expand/collapse control of a top-level item:  Handle
		# this like a position inside the expand/collapse control
		#
		set inExpCollCtrl 1
	    }
	} elseif {$w eq $indentLabel} {
	    set imgName [$w cget -image]
	    if {[regexp {^tablelist_(.+)_(collapsed|expanded).*Img$} \
			 $imgName dummy treeStyle mode]} {
		#
		# The mouse position is in an expand/collapse
		# image (which ends with the expand/collapse
		# control):  Check whether it is inside the control
		#
		set baseWidth [image width tablelist_${treeStyle}_collapsedImg]
		variable scaled4
		if {$x >= [winfo width $w] - $baseWidth - $scaled4 - 1} {
		    set inExpCollCtrl 1
		}
	    }
	}
    }

    #
    # Conditionally deactivate the previously activated expand/collapse control
    #
    variable priv
    set prevCellIdx $priv(prevActExpCollCtrlCell)
    if {$prevCellIdx ne "" && [info exists data($prevCellIdx-indent)] &&
	(!$inExpCollCtrl || $prevCellIdx ne "$key,$col") &&
	[winfo exists $data(body).ind_$prevCellIdx]} {
	set data($prevCellIdx-indent) \
	    [string map {"Act" ""} $data($prevCellIdx-indent)]
	set idx [string last "g" $data($prevCellIdx-indent)]
	set img [string range $data($prevCellIdx-indent) 0 $idx]
	$data(body).ind_$prevCellIdx configure -image $img
	set priv(prevActExpCollCtrlCell) ""
    }

    if {!$inExpCollCtrl || $prevCellIdx eq "$key,$col"} {
	return ""
    }

    #
    # Activate the expand/collapse control under the mouse pointer
    #
    variable ${treeStyle}_collapsedActImg
    if {[info exists ${treeStyle}_collapsedActImg]} {
	set data($key,$col-indent) [string map {
	    "SelActImg" "SelActImg" "SelImg" "SelActImg"
	    "ActImg" "ActImg" "Img" "ActImg"
	} $data($key,$col-indent)]
	set idx [string last "g" $data($key,$col-indent)]
	set img [string range $data($key,$col-indent) 0 $idx]
	$indentLabel configure -image $img
	set priv(prevActExpCollCtrlCell) $key,$col
    }
}

#------------------------------------------------------------------------------
# tablelist::updateCursor
#
# Updates the cursor of the body component of the tablelist widget win, over
# the specified cell containing the mouse pointer.
#------------------------------------------------------------------------------
proc tablelist::updateCursor {win row col} {
    upvar ::tablelist::ns${win}::data data
    if {$data(inEditWin)} {
	set cursor $data(-cursor)
    } elseif {$data(-showeditcursor)} {
	if {$data(-editselectedonly) &&
	    ![::$win cellselection includes $row,$col]} {
	    set editable 0
	} else {
	    set editable [expr {$row >= 0 && $col >= 0 &&
			  [isCellEditable $win $row $col]}]
	}

	if {$editable} {
	    if {$row == $data(editRow) && $col == $data(editCol)} {
		set cursor $data(-cursor)
	    } else {
		variable editCursor
		if {![info exists editCursor]} {
		    makeEditCursor
		}
		set cursor $editCursor
	    }
	} else {
	    set cursor $data(-cursor)
	}

	#
	# Special handling for cell editing with the aid of BWidget
	# ComboBox, Oakley combobox, or Tk menubutton widgets
	#
	if {$data(editRow) >= 0 && $data(editCol) >= 0} {
	    foreach c [winfo children $data(bodyFrmEd)] {
		set class [winfo class $c]
		if {($class eq "Toplevel" || $class eq "Menu") &&
		    [winfo ismapped $c]} {
		    set cursor $data(-cursor)
		    break
		}
	    }
	}
    } else {
	set cursor $data(-cursor)
    }

    if {[$data(body) cget -cursor] ne $cursor} {
	if {[catch {$data(body) configure -cursor $cursor}] != 0} {
	    makeEditCursor
	    $data(body) configure -cursor $editCursor
	}
    }
}

#------------------------------------------------------------------------------
# tablelist::makeEditCursor
#
# Creates the platform-specific edit cursor.
#------------------------------------------------------------------------------
proc tablelist::makeEditCursor {} {
    variable editCursor
    variable winSys

    if {$winSys eq "win32"} {
	variable library
	set cursorName "pencil.cur"
	set cursorFile [file normalize [file join $library scripts $cursorName]]

	#
	# Check whether the file is readable, which won't be the case, e.g., if
	# the application was cross-wrapped on Linux for Windows using freewrap
	#
	if {[file readable $cursorFile]} {
	    set editCursor [list @$cursorFile]

	    #
	    # Make sure it will work for starpacks, too
	    #
	    variable helpLabel
	    if {[catch {$helpLabel configure -cursor $editCursor}] != 0} {
		set tempDir $::env(TEMP)
		file copy -force $cursorFile $tempDir
		set editCursor [list @[file join $tempDir $cursorName]]
	    }
	} elseif {$::tk_version >= 8.6} {
	    set tempDir $::env(TEMP)
	    set cursorFile [file join $tempDir $cursorName]
	    set chan [open $cursorFile "wb"]
	    puts -nonewline $chan [binary decode base64 [pencilCursorData]]
	    close $chan
	    set editCursor [list @$cursorFile]
	} else {
	    set editCursor pencil
	}
    } else {
	set editCursor pencil
    }
}

#------------------------------------------------------------------------------
# tablelist::wasExpCollCtrlClicked
#
# This procedure is invoked when mouse button 1 is pressed in the body of a
# tablelist widget or in one of its separators.  It checks whether the mouse
# click occurred inside an expand/collapse control.
#------------------------------------------------------------------------------
proc tablelist::wasExpCollCtrlClicked {w x y} {
    foreach {win _x _y} [convEventFields $w $x $y] {}
    set row [containingRow $win $_y]
    set col [containingCol $win $_x]
    upvar ::tablelist::ns${win}::data data
    set key [lindex $data(keyList) $row]
    set indentLabel $data(body).ind_$key,$col
    if {![winfo exists $indentLabel]} {
	return 0
    }

    #
    # Check whether the x coordinate is inside the expand/collapse control
    #
    set inExpCollCtrl 0
    if {$w eq $data(body) && $x < [winfo x $indentLabel] &&
	$data($key-parent) eq "root"} {
	set imgName [$indentLabel cget -image]
	if {[regexp {^tablelist_(.+)_(collapsed|expanded).*Img$} \
		     $imgName dummy treeStyle mode]} {
	    #
	    # The mouse position is in the tablelist body, to the left
	    # of an expand/collapse control of a top-level item:  Handle
	    # this like a position inside the expand/collapse control
	    #
	    set inExpCollCtrl 1
	}
    } elseif {$w eq $indentLabel} {
	set imgName [$w cget -image]
	if {[regexp {^tablelist_(.+)_(collapsed|expanded).*Img$} \
		     $imgName dummy treeStyle mode]} {
	    #
	    # The mouse position is in an expand/collapse
	    # image (which ends with the expand/collapse
	    # control):  Check whether it is inside the control
	    #
	    set baseWidth [image width tablelist_${treeStyle}_collapsedImg]
	    variable scaled4
	    if {$x >= [winfo width $w] - $baseWidth - $scaled4 - 1} {
		set inExpCollCtrl 1
	    }
	}
    }

    if {!$inExpCollCtrl || $data(isDisabled)} {
	return 0
    }

    #
    # Toggle the state of the expand/collapse control
    #
    if {[::$win cget -showbusycursor]} { ::$win setbusycursor }
    if {$mode eq "collapsed"} {
	::$win expand $row -partly			;# can take long
    } else {
	::$win collapse $row -partly			;# can take long
    }
    ::$win restorecursor

    return 1
}

#------------------------------------------------------------------------------
# tablelist::condEditContainingCell
#
# This procedure is invoked when mouse button 1 is pressed in the body of a
# tablelist widget win or in one of its separators.  If the mouse click
# occurred inside an editable cell and the latter is not already being edited,
# then the procedure starts the interactive editing in that cell.  Otherwise it
# finishes a possibly active cell editing.
#------------------------------------------------------------------------------
proc tablelist::condEditContainingCell {win x y} {
    #
    # Get the containing cell from the coordinates relative to the parent
    #
    set row [containingRow $win $y]
    set col [containingCol $win $x]

    upvar ::tablelist::ns${win}::data data
    if {$data(justEntered) || ($data(-editselectedonly) &&
	![::$win cellselection includes $row,$col])} {
	set editable 0
    } else {
	set editable [expr {$row >= 0 && $col >= 0 &&
		      [isCellEditable $win $row $col]}]
    }

    #
    # The following check is sometimes needed on OS X/11+ if
    # editing with the aid of a menubutton is in progress
    #
    variable editCursor
    if {($row != $data(editRow) || $col != $data(editCol)) &&
	$data(-showeditcursor) && [info exists editCursor] &&
	[$data(body) cget -cursor] ne $editCursor} {
	set editable 0
    }

    if {$editable} {
	#
	# Get the coordinates relative to the
	# tablelist body and invoke doEditCell
	#
	set w $data(body)
	incr x -[winfo x $w]
	incr y -[winfo y $w]
	##nagelfar ignore
	scan [$w index @$x,$y] "%d.%d" line charPos
	doEditCell $win $row $col 0 "" $charPos
    } else {
	#
	# Finish the current editing (if any)
	#
	doFinishEditing $win
    }
}

#------------------------------------------------------------------------------
# tablelist::condFinishEditing
#
# This procedure is typically invoked on shift-button-1 and control-button-1
# presses in the body of a tablelist widget or in one of its separators.  It
# finishes a possibly active cell editing if the mouse click occurred outside
# the cell being edited and the value of the -editendonmodclick option is true.
#------------------------------------------------------------------------------
proc tablelist::condFinishEditing {win x y} {
    upvar ::tablelist::ns${win}::data data
    if {([containingRow $win $y] != $data(editRow) ||
	 [containingCol $win $x] != $data(editCol)) &&
	$data(-editendonmodclick)} {
	doFinishEditing $win
    }
}

#------------------------------------------------------------------------------
# tablelist::condBeginMove
#
# This procedure is typically invoked on button-1 presses in the body of a
# tablelist widget or in one of its separators.  It begins the process of
# moving the nearest row if the rows are movable and the selection mode is not
# browse or extended.
#------------------------------------------------------------------------------
proc tablelist::condBeginMove {win row} {
    upvar ::tablelist::ns${win}::data data
    if {$data(isDisabled) || !$data(-movablerows) || $data(itemCount) == 0 ||
	$data(-selectmode) eq "browse" || $data(-selectmode) eq "extended"} {
	return ""
    }

    set data(sourceRow) $row
    set sourceKey [lindex $data(keyList) $row]
    set data(sourceEndRow) [nodeRow $win $sourceKey end]
    set data(sourceDescCount) [descCount $win $sourceKey]

    set data(sourceParentKey) $data($sourceKey-parent)
    set data(sourceParentRow) [keyToRow $win $data(sourceParentKey)]
    set data(sourceParentEndRow) [nodeRow $win $data(sourceParentKey) end]

    set topWin $data(topWin)
    set data(topEscBinding) [bind $topWin <Escape>]
    bind $topWin <Escape> \
	 [list tablelist::cancelMove [string map {"%" "%%"} $win]]
}

#------------------------------------------------------------------------------
# tablelist::beginSelect
#
# This procedure is typically invoked on button-1 presses in the body of a
# tablelist widget or in one of its separators.  It begins the process of
# making a selection in the widget.  Its exact behavior depends on the
# selection mode currently in effect for the widget.
#------------------------------------------------------------------------------
proc tablelist::beginSelect {win row col {checkIfDragSrc 0}} {
    variable priv
    set priv(selClearPending) 0
    set priv(selChangePending) 0

    upvar ::tablelist::ns${win}::data data
    switch $data(-selecttype) {
	row {
	    if {$data(-selectmode) eq "multiple"} {
		if {[::$win selection includes $row]} {
		    if {$checkIfDragSrc && [isDragSrc $win]} {
			set priv(selClearPending) 1
		    } else {
			::$win selection clear $row
		    }
		} else {
		    ::$win selection set $row
		}
	    } else {
		if {[::$win selection includes $row] &&
		    $checkIfDragSrc && [isDragSrc $win]} {
		    set priv(selChangePending) 1
		} else {
		    ::$win selection clear 0 end
		    ::$win selection set $row
		}
		::$win selection anchor $row
		set priv(selection) {}
	    }

	    set priv(prevRow) $row
	}

	cell {
	    if {$data(-selectmode) eq "multiple"} {
		if {[::$win cellselection includes $row,$col]} {
		    if {$checkIfDragSrc && [isDragSrc $win]} {
			set priv(selClearPending) 1
		    } else {
			::$win cellselection clear $row,$col
		    }
		} else {
		    ::$win cellselection set $row,$col
		}
	    } else {
		if {[::$win cellselection includes $row,$col] &&
		    $checkIfDragSrc && [isDragSrc $win]} {
		    set priv(selChangePending) 1
		} else {
		    ::$win cellselection clear 0,0 end
		    ::$win cellselection set $row,$col
		}
		::$win cellselection anchor $row,$col
		set priv(selection) {}
	    }

	    set priv(prevRow) $row
	    set priv(prevCol) $col
	}
    }

    genTablelistSelectEvent $win
}

#------------------------------------------------------------------------------
# tablelist::condAutoScan
#
# This procedure is invoked when the mouse leaves or enters the scrollable part
# of a tablelist widget's body text child while button 1 is down.  It either
# invokes the autoScan procedure or cancels its executon as an "after" command.
#------------------------------------------------------------------------------
proc tablelist::condAutoScan win {
    variable priv
    set w [::$win bodypath]
    set wX [winfo x $w]
    set wY [winfo y $w]
    set wWidth  [winfo width  $w]
    set wHeight [winfo height $w]
    set x [expr {$priv(x) - $wX}]			;# relative to the body
    set y [expr {$priv(y) - $wY}]			;# relative to the body
    set prevX [expr {$priv(prevX) - $wX}]		;# relative to the body
    set prevY [expr {$priv(prevY) - $wY}]		;# relative to the body
    set minX [minScrollableX $win]			;# relative to the body

    if {($y >= $wHeight && $prevY < $wHeight) ||
	($y < 0 && $prevY >= 0) ||
	($x >= $wWidth && $prevX < $wWidth) ||
	($x < $minX && $prevX >= $minX)} {
	if {$priv(afterId) eq ""} {
	    autoScan $win
	}
    } elseif {($y < $wHeight && $prevY >= $wHeight) ||
	      ($y >= 0 && $prevY < 0) ||
	      ($x < $wWidth && $prevX >= $wWidth) ||
	      ($x >= $minX && $prevX < $minX)} {
	after cancel $priv(afterId)
	set priv(afterId) ""
    }
}

#------------------------------------------------------------------------------
# tablelist::autoScan
#
# This procedure is invoked when the mouse leaves the scrollable part of a
# tablelist widget's body text child while button 1 is down.  It scrolls the
# child up, down, left, or right, depending on where the mouse left its
# scrollable part, and reschedules itself as an "after" command so that the
# child continues to scroll until the mouse moves back into the scrollable area
# or the mouse button is released.
#------------------------------------------------------------------------------
proc tablelist::autoScan win {
    if {[destroyed $win] || [isDragSrc $win] || ![::$win cget -autoscan] ||
	[::$win editwinpath] ne ""} {
	return ""
    }

    variable priv
    set w [::$win bodypath]
    set x [expr {$priv(x) - [winfo x $w]}]		;# relative to the body
    set y [expr {$priv(y) - [winfo y $w]}]		;# relative to the body
    set minX [minScrollableX $win]			;# relative to the body

    if {$y >= [winfo height $w]} {
	::$win yview scroll 1 units
	set ms 50
    } elseif {$y < 0} {
	::$win yview scroll -1 units
	set ms 50
    } elseif {$x >= [winfo width $w]} {
	if {[::$win cget -titlecolumns] == 0} {
	    ::$win xview scroll 2 units
	    set ms 50
	} else {
	    ::$win xview scroll 1 units
	    set ms 250
	}
    } elseif {$x < $minX} {
	if {[::$win cget -titlecolumns] == 0} {
	    ::$win xview scroll -2 units
	    set ms 50
	} else {
	    ::$win xview scroll -1 units
	    set ms 250
	}
    } else {
	return ""
    }

    motion $win [::$win nearest $priv(y)] [::$win nearestcolumn $priv(x)] 1
    set priv(afterId) [after $ms [list tablelist::autoScan $win]]
}

#------------------------------------------------------------------------------
# tablelist::minScrollableX
#
# Returns the least x coordinate within the scrollable part of the body of the
# tablelist widget win.
#------------------------------------------------------------------------------
proc tablelist::minScrollableX win {
    if {[::$win cget -titlecolumns] == 0} {
	return 0
    } else {
	set sep [::$win separatorpath]
	if {[winfo viewable $sep]} {
	    return [expr {[winfo x $sep] - [winfo x [::$win bodypath]] + 1}]
	} else {
	    return 0
	}
    }
}

#------------------------------------------------------------------------------
# tablelist::autoScan2
#
# This procedure is invoked from within the autoscrolltarget subcommand when
# the mouse leaves the area obtained by trimming the scrollable part of a
# tablelist widget's body text child on each side by (scaled) 4 px.  It scrolls
# the child up, down, left, or right, depending on where the mouse left that
# area, and reschedules itself as an "after" command so that the child
# continues to scroll until the mouse moves back into that area or no more
# scrolling in that direction is possible.
#------------------------------------------------------------------------------
proc tablelist::autoScan2 {win seqNum} {
    if {[destroyed $win]} {
	return ""
    }

    if {$seqNum < 10} {
	set units 1
    } elseif {$seqNum < 20} {
	set units 2
    } elseif {$seqNum < 30} {
	set units 3
    } elseif {$seqNum < 40} {
	set units 4
    } else {
	set units 5
    }

    upvar ::tablelist::ns${win}::data data
    set w [::$win bodypath]
    set x [expr {$data(x) - [winfo x $w]}]		;# relative to the body
    set y [expr {$data(y) - [winfo y $w]}]		;# relative to the body

    variable scaled4
    set minX [expr {[minScrollableX $win] + $scaled4}]	;# relative to the body
    set minY $scaled4					;# relative to the body
    set maxX [expr {[winfo width  $w] - 1 - $scaled4}]	;# relative to the body
    set maxY [expr {[winfo height $w] - 1 - $scaled4}]	;# relative to the body

    if {$y > $maxY} {
	foreach {first last} [::$win yview] {}
	if {$last == 1} {
	    return ""
	} else {
	    ::$win yview scroll $units units
	    set ms 100
	}
    } elseif {$y < $minY} {
	foreach {first last} [::$win yview] {}
	if {$first == 0} {
	    return ""
	} else {
	    ::$win yview scroll -$units units
	    set ms 100
	}
    } elseif {$x > $maxX} {
	foreach {first last} [::$win xview] {}
	if {$last == 1} {
	    return ""
	} elseif {[::$win cget -titlecolumns] == 0} {
	    ::$win xview scroll [expr {2 * $units}] units
	    set ms 100
	} else {
	    ::$win xview scroll $units units
	    set ms 500
	}
    } elseif {$x < $minX} {
	foreach {first last} [::$win xview] {}
	if {$first == 0} {
	    return ""
	} elseif {[::$win cget -titlecolumns] == 0} {
	    ::$win xview scroll -[expr {2 * $units}] units
	    set ms 100
	} else {
	    ::$win xview scroll -$units units
	    set ms 500
	}
    } else {
	return ""
    }

    incr seqNum
    set data(afterId2) [after $ms [list tablelist::autoScan2 $win $seqNum]]
}

#------------------------------------------------------------------------------
# tablelist::motion
#
# This procedure is called to process mouse motion events in the body of a
# tablelist widget or in one of its separators, while button 1 is down.  It may
# move or extend the selection, depending on the widget's selection mode.
#------------------------------------------------------------------------------
proc tablelist::motion {win row col {checkIfDragSrc 0}} {
    if {$checkIfDragSrc && [isDragSrc $win]} {
	return ""
    }

    upvar ::tablelist::ns${win}::data data
    variable priv
    switch $data(-selecttype) {
	row {
	    set prRow $priv(prevRow)
	    if {$row == $prRow} {
		return ""
	    }

	    switch -- $data(-selectmode) {
		browse {
		    ::$win selection clear 0 end
		    ::$win selection set $row
		    set priv(prevRow) $row
		    genTablelistSelectEvent $win
		}
		extended {
		    if {$prRow eq ""} {
			set prRow $row
			::$win selection set $row
		    }

		    if {[::$win selection includes anchor]} {
			::$win selection clear $prRow $row
			::$win selection set anchor $row
		    } else {
			::$win selection clear $prRow $row
			::$win selection clear anchor $row
		    }

		    set ancRow $data(anchorRow)

		    if {[::$win cget -showbusycursor]} { ::$win setbusycursor }
		    foreach r $priv(selection) {	;# can take long
			if {($r >= $prRow && $r < $row && $r < $ancRow) ||
			    ($r <= $prRow && $r > $row && $r > $ancRow)} {
			    ::$win selection set $r
			}
		    }
		    ::$win restorecursor

		    set priv(prevRow) $row
		    genTablelistSelectEvent $win
		}
	    }
	}

	cell {
	    set prRow $priv(prevRow)
	    set prCol $priv(prevCol)
	    if {$row == $prRow && $col == $prCol} {
		return ""
	    }

	    switch -- $data(-selectmode) {
		browse {
		    ::$win cellselection clear 0,0 end
		    ::$win cellselection set $row,$col
		    set priv(prevRow) $row
		    set priv(prevCol) $col
		    genTablelistSelectEvent $win
		}
		extended {
		    if {$prRow eq "" || $prCol eq ""} {
			set prRow $row
			set prcol $col
			::$win cellselection set $row,$col
		    }

		    set ancRow $data(anchorRow)
		    set ancCol $data(anchorCol)
		    if {[::$win cellselection includes anchor]} {
			::$win cellselection clear $prRow,$prCol $row,$ancCol
			::$win cellselection clear $prRow,$prCol $ancRow,$col
			::$win cellselection set anchor $row,$col
		    } else {
			::$win cellselection clear $prRow,$prCol $row,$ancCol
			::$win cellselection clear $prRow,$prCol $ancRow,$col
			::$win cellselection clear anchor $row,$col
		    }

		    foreach {rMin1 cMin1 rMax1 cMax1} \
			[normalizedRect $prRow $prCol $row $ancCol] {}
		    foreach {rMin2 cMin2 rMax2 cMax2} \
			[normalizedRect $prRow $prCol $ancRow $col] {}
		    foreach {rMin3 cMin3 rMax3 cMax3} \
			[normalizedRect $ancRow $ancCol $row $col] {}

		    if {[::$win cget -showbusycursor]} { ::$win setbusycursor }
		    foreach cellIdx $priv(selection) {	;# can take long
			##nagelfar ignore
			scan $cellIdx "%d,%d" r c
			if {([cellInRect $r $c $rMin1 $cMin1 $rMax1 $cMax1] ||
			     [cellInRect $r $c $rMin2 $cMin2 $rMax2 $cMax2]) &&
			    ![cellInRect $r $c $rMin3 $cMin3 $rMax3 $cMax3]} {
			    ::$win cellselection set $r,$c
			}
		    }
		    ::$win restorecursor

		    set priv(prevRow) $row
		    set priv(prevCol) $col
		    genTablelistSelectEvent $win
		}
	    }
	}
    }
}

#------------------------------------------------------------------------------
# tablelist::condShowTarget
#
# This procedure is called to process mouse motion events in the body of a
# tablelist widget or in one of its separators. while button 1 is down.  It
# visualizes the would-be target position of the clicked row if a move
# operation is in progress.
#------------------------------------------------------------------------------
proc tablelist::condShowTarget {win y} {
    upvar ::tablelist::ns${win}::data data
    if {![info exists data(sourceRow)]} {
	return ""
    }

    set indentImg [doCellCget $data(sourceRow) $data(treeCol) $win -indent]
    set w $data(body)
    incr y -[winfo y $w]
    set textIdx [$w index @0,$y]
    set dlineinfo [$w dlineinfo $textIdx]
    set lineY [lindex $dlineinfo 1]
    set lineHeight [lindex $dlineinfo 3]
    set row [expr {int($textIdx) - 1}]

    if {$indentImg eq ""} {
	if {$y < $lineY + $lineHeight/2} {
	    set data(targetRow) $row
	    set gapY $lineY
	} else {
	    set y [expr {$lineY + $lineHeight}]
	    set textIdx [$w index @0,$y]
	    set row2 [expr {int($textIdx) - 1}]
	    if {$row2 == $row} {
		set row2 $data(itemCount)
	    }
	    set data(targetRow) $row2
	    set gapY $y
	}
	set data(targetChildIdx) -1
    } else {
	if {$y < $lineY + $lineHeight/4} {
	    set data(targetRow) $row
	    set data(targetChildIdx) -1
	    set gapY $lineY
	} elseif {$y < $lineY + $lineHeight*3/4} {
	    set data(targetRow) $row
	    set data(targetChildIdx) 0
	    set gapY [expr {$lineY + $lineHeight/2}]
	} else {
	    set y [expr {$lineY + $lineHeight}]
	    set textIdx [$w index @0,$y]
	    set row2 [expr {int($textIdx) - 1}]
	    if {$row2 == $row} {
		set row2 $data(itemCount)
	    }
	    set data(targetRow) $row2
	    set data(targetChildIdx) -1
	    set gapY $y
	}
    }

    #
    # Get the key and node index of the potential target parent
    #
    if {$data(targetRow) > $data(lastRow)} {
	if {$data(targetRow) > $data(sourceParentEndRow)} {
	    set targetParentKey root
	    set targetParentNodeIdx root
	} else {
	    set targetParentKey $data(sourceParentKey)
	    set targetParentNodeIdx $data(sourceParentRow)
	}
    } elseif {$data(targetChildIdx) == 0} {
	set targetParentKey [lindex $data(keyList) $data(targetRow)]
	set targetParentNodeIdx $data(targetRow)
    } else {
	set targetParentKey [::$win parentkey $data(targetRow)]
	set targetParentNodeIdx [keyToRow $win $targetParentKey]
	if {$targetParentNodeIdx < 0} {
	    set targetParentNodeIdx root
	}
    }

    if {($data(targetRow) == $data(sourceRow)) ||

	($data(targetRow) == $data(sourceParentRow) &&
	 $data(targetChildIdx) == 0) ||

	($data(targetRow) == $data(sourceEndRow) &&
	 $data(targetChildIdx) < 0) ||

	($data(targetRow) > $data(sourceRow) &&
	 $data(targetRow) <= $data(sourceRow) + $data(sourceDescCount)) ||

	($data(sourceParentKey) ne $targetParentKey &&
	 ($data(-acceptchildcommand) ne "" &&
	  ![uplevel #0 $data(-acceptchildcommand) \
	    [list $win $targetParentNodeIdx $data(sourceRow)]])) ||

	($data(targetChildIdx) < 0 && $data(-acceptdropcommand) ne "" &&
	 ![uplevel #0 $data(-acceptdropcommand) \
	   [list $win $data(targetRow) $data(sourceRow)]])} {

	unset data(targetRow)
	unset data(targetChildIdx)
	$w configure -cursor $data(-cursor)
	place forget $data(rowGap)
    } else {
	$w configure -cursor $data(-movecursor)
	if {$data(targetChildIdx) == 0} {
	    place $data(rowGap) -anchor w -y $gapY -height $lineHeight -width 6
	} else {
	    variable scaled4
	    place $data(rowGap) -anchor w -y $gapY -height $scaled4 \
				-width [winfo width $data(hdrTxtFrm)]
	}
	raise $data(rowGap)
    }
}

#------------------------------------------------------------------------------
# tablelist::moveOrActivate
#
# This procedure is invoked whenever mouse button 1 is released in the body of
# a tablelist widget or in one of its separators.  It either moves the
# previously clicked row before or after the one containing the mouse cursor,
# or activates the given nearest item or element (depending on the widget's
# selection type).
#------------------------------------------------------------------------------
proc tablelist::moveOrActivate {win row col inside} {
    variable priv
    upvar ::tablelist::ns${win}::data data
    if {$priv(selClearPending) && $inside} {
	switch $data(-selecttype) {
	    row {
		if {$row == $priv(prevRow)} {
		    ::$win selection clear $priv(prevRow)
		}
	    }
	    cell {
		if {$row == $priv(prevRow) && $col == $priv(prevCol)} {
		    ::$win cellselection clear $priv(prevRow),$priv(prevCol)
		}
	    }
	}

	genTablelistSelectEvent $win
	set priv(selClearPending) 0
    } elseif {$priv(selChangePending) && $inside} {
	switch $data(-selecttype) {
	    row {
		if {$row == $priv(prevRow)} {
		    ::$win selection clear 0 end
		    ::$win selection set $priv(prevRow)
		}
	    }
	    cell {
		if {$row == $priv(prevRow) && $col == $priv(prevCol)} {
		    ::$win cellselection clear 0,0 end
		    ::$win cellselection set $priv(prevRow),$priv(prevCol)
		}
	    }
	}

	genTablelistSelectEvent $win
	set priv(selChangePending) 0
    }

    #
    # Return if both <Button-1> and <ButtonRelease-1> occurred in the
    # temporary embedded widget used for interactive cell editing
    #
    if {$priv(clickedInEditWin) && $priv(releasedInEditWin)} {
	return ""
    }

    if {[info exists data(sourceRow)]} {
	set sourceRow $data(sourceRow)
	unset data(sourceRow)
	unset data(sourceEndRow)
	unset data(sourceDescCount)
	unset data(sourceParentKey)
	unset data(sourceParentRow)
	unset data(sourceParentEndRow)
	bind $data(topWin) <Escape> $data(topEscBinding)
	$data(body) configure -cursor $data(-cursor)
	place forget $data(rowGap)

	if {[info exists data(targetRow)]} {
	    set sourceKey [lindex $data(keyList) $sourceRow]
	    set targetRow $data(targetRow)
	    unset data(targetRow)

	    if {$targetRow > $data(lastRow)} {
		if {[catch {::$win move $sourceRow $targetRow}] == 0} {
		    set targetParentNodeIdx [::$win parentkey $sourceRow]
		} else {
		    ::$win move $sourceRow root end
		    set targetParentNodeIdx root
		}

		set targetChildIdx [::$win childcount $targetParentNodeIdx]
	    } else {
		set targetChildIdx $data(targetChildIdx)
		unset data(targetChildIdx)

		if {$targetChildIdx == 0} {
		    set targetParentNodeIdx [lindex $data(keyList) $targetRow]

		    if {[::$win cget -showbusycursor]} { ::$win setbusycursor }
		    ::$win expand $targetParentNodeIdx -partly	;# can take long
		    ::$win restorecursor

		    ::$win move $sourceKey $targetParentNodeIdx $targetChildIdx
		} else {
		    set targetParentNodeIdx [::$win parentkey $targetRow]
		    set targetChildIdx [::$win childindex $targetRow]
		    ::$win move $sourceRow $targetParentNodeIdx $targetChildIdx
		}
	    }

	    set userData [list $sourceKey $targetParentNodeIdx $targetChildIdx]
	    genVirtualEvent $win <<TablelistRowMoved>> $userData

	    switch $data(-selecttype) {
		row  { ::$win activate $sourceKey }
		cell { ::$win activatecell $sourceKey,$col }
	    }
	    genTablelistActivateEvent $win

	    return ""
	}
    }

    switch $data(-selecttype) {
	row  { ::$win activate $row }
	cell { ::$win activatecell $row,$col }
    }
    genTablelistActivateEvent $win
}

#------------------------------------------------------------------------------
# tablelist::condEvalInvokeCmd
#
# This procedure is invoked when mouse button 1 is released in the body of a
# tablelist widget win or in one of its separators.  If interactive cell
# editing is in progress in a column whose associated edit window has an invoke
# command that hasn't yet been called in the current edit session, then the
# procedure evaluates that command.
#------------------------------------------------------------------------------
proc tablelist::condEvalInvokeCmd win {
    #
    # This is an "after 100" callback; check whether the window exists
    #
    if {[destroyed $win]} {
	return ""
    }

    upvar ::tablelist::ns${win}::data data
    if {$data(editCol) < 0} {
	return ""
    }

    variable editWin
    set name [getEditWindow $win $data(editRow) $data(editCol)]
    if {$editWin($name-invokeCmd) eq "" || $data(invoked)} {
	return ""
    }

    #
    # Return if both <Button-1> and <ButtonRelease-1> occurred in the
    # temporary embedded widget used for interactive cell editing
    #
    variable priv
    if {$priv(clickedInEditWin) && $priv(releasedInEditWin)} {
	return ""
    }

    #
    # Check whether the edit window is a checkbutton,
    # and return if it is an editable combobox widget
    #
    set isCheckbtn 0
    set w $data(bodyFrmEd)
    switch [winfo class $w] {
	Checkbutton -
	TCheckbutton {
	    set isCheckbtn 1
	}
	TCombobox {
	    if {[$w cget -state] eq "normal"} {
		return ""
	    }
	}
	ComboBox -
	Combobox {
	    if {[$w cget -editable]} {
		return ""
	    }
	}
    }

    #
    # Evaluate the edit window's invoke command
    #
    eval [string map {"%W" "$w"} $editWin($name-invokeCmd)]
    set data(invoked) 1

    #
    # If the edit window is a checkbutton and the value of the
    # -instanttoggle option is true then finish the editing
    #
    if {$isCheckbtn && $data(-instanttoggle)} {
	doFinishEditing $win
    }
}

#------------------------------------------------------------------------------
# tablelist::cancelMove
#
# This procedure is invoked to process <Escape> events in the toplevel window
# containing the tablelist widget win during a row move operation.  It cancels
# the action in progress.
#------------------------------------------------------------------------------
proc tablelist::cancelMove win {
    upvar ::tablelist::ns${win}::data data
    if {![info exists data(sourceRow)]} {
	return ""
    }

    unset data(sourceRow)
    unset data(sourceEndRow)
    unset data(sourceDescCount)
    unset data(sourceParentKey)
    unset data(sourceParentRow)
    unset data(sourceParentEndRow)
    array unset data targetRow
    array unset data targetChildIdx
    bind $data(topWin) <Escape> $data(topEscBinding)
    $data(body) configure -cursor $data(-cursor)
    place forget $data(rowGap)
}

#------------------------------------------------------------------------------
# tablelist::beginExtend
#
# This procedure is typically invoked on shift-button-1 presses in the body of
# a tablelist widget or in one of its separators.  It begins the process of
# extending a selection in the widget.  Its exact behavior depends on the
# selection mode currently in effect for the widget.
#------------------------------------------------------------------------------
proc tablelist::beginExtend {win row col} {
    if {[::$win cget -selectmode] ne "extended"} {
	return ""
    }

    if {[::$win selection includes anchor]} {
	motion $win $row $col
    } else {
	beginSelect $win $row $col
    }
}

#------------------------------------------------------------------------------
# tablelist::beginToggle
#
# This procedure is typically invoked on control-button-1 presses in the body
# of a tablelist widget or in one of its separators.  It begins the process of
# toggling a selection in the widget.  Its exact behavior depends on the
# selection mode currently in effect for the widget.
#------------------------------------------------------------------------------
proc tablelist::beginToggle {win row col} {
    upvar ::tablelist::ns${win}::data data
    switch $data(-selecttype) {
	row {
	    if {$data(-selectmode) eq "extended"} {
		variable priv

		if {[::$win cget -showbusycursor]} { ::$win setbusycursor }
		set priv(selection) [::$win curselection]      ;# can take long
		::$win restorecursor

		set priv(prevRow) $row
		::$win selection anchor $row
		if {[::$win selection includes $row]} {
		    ::$win selection clear $row
		} else {
		    ::$win selection set $row
		}
	    } else {
		variable strictTk
		if {$strictTk} {
		    return ""
		}

		if {[::$win selection includes $row]} {
		    ::$win selection clear $row
		} else {
		    beginSelect $win $row $col
		    return ""
		}
	    }
	}

	cell {
	    if {$data(-selectmode) eq "extended"} {
		variable priv

		if {[::$win cget -showbusycursor]} { ::$win setbusycursor }
		set priv(selection) [::$win curcellselection]  ;# can take long
		::$win restorecursor

		set priv(prevRow) $row
		set priv(prevCol) $col
		::$win cellselection anchor $row,$col
		if {[::$win cellselection includes $row,$col]} {
		    ::$win cellselection clear $row,$col
		} else {
		    ::$win cellselection set $row,$col
		}
	    } else {
		variable strictTk
		if {$strictTk} {
		    return ""
		}

		if {[::$win cellselection includes $row,$col]} {
		    ::$win cellselection clear $row,$col
		} else {
		    beginSelect $win $row $col
		    return ""
		}
	    }
	}
    }

    genTablelistSelectEvent $win
}

#------------------------------------------------------------------------------
# tablelist::condEditActiveCell
#
# This procedure is invoked whenever Return or KP_Enter is pressed in the body
# of a tablelist widget.  If the selection type is cell and the active cell is
# editable then the procedure starts the interactive editing in that cell.
#------------------------------------------------------------------------------
proc tablelist::condEditActiveCell win {
    upvar ::tablelist::ns${win}::data data
    if {$data(-selecttype) ne "cell" ||
	[firstViewableRow $win] < 0 || [firstViewableCol $win] < 0} {
	return ""
    }

    set row $data(activeRow)
    set col $data(activeCol)
    if {[isCellEditable $win $row $col]} {
	doEditCell $win $row $col 0
    }
}

#------------------------------------------------------------------------------
# tablelist::plusMinus
#
# Partially expands or collapses the active row if possible.
#------------------------------------------------------------------------------
proc tablelist::plusMinus {win keysym} {
    upvar ::tablelist::ns${win}::data data
    if {$data(isDisabled)} {
	return ""
    }

    set row $data(activeRow)
    set col $data(treeCol)
    set key [lindex $data(keyList) $row]
    set op ""

    if {[info exists data($key,$col-indent)]} {
	set indentLabel $data(body).ind_$key,$col
	set imgName [$indentLabel cget -image]
	if {[regexp {^tablelist_(.+)_(collapsed|expanded).*Img$} \
		     $imgName dummy treeStyle mode]} {
	    if {$keysym eq "plus" && $mode eq "collapsed"} {
		set op "expand"
	    } elseif {$keysym eq "minus" && $mode eq "expanded"} {
		set op "collapse"
	    }
	}
    }

    if {$op ne ""} {
	#
	# Toggle the state of the expand/collapse control
	#
	if {[::$win cget -showbusycursor]} { ::$win setbusycursor }
	::$win $op $row -partly				;# can take long
	::$win restorecursor
    }
}

#------------------------------------------------------------------------------
# tablelist::nextPrevCell
#
# Does nothing unless the selection type is cell; in this case it moves the
# location cursor (active element) to the next or previous element, and changes
# the selection if we are in browse or extended selection mode.
#------------------------------------------------------------------------------
proc tablelist::nextPrevCell {win amount} {
    upvar ::tablelist::ns${win}::data data
    switch $data(-selecttype) {
	row {
	    # Nothing
	}

	cell {
	    if {$data(editRow) >= 0} {
		return -code break ""	    ;# because of the binding tag "all"
	    }

	    set row $data(activeRow)
	    set col $data(activeCol)
	    set oldRow $row
	    set oldCol $col

	    while 1 {
		incr col $amount
		if {$col < 0} {
		    incr row $amount
		    if {$row < 0} {
			set row $data(lastRow)
		    }
		    set col $data(lastCol)
		} elseif {$col > $data(lastCol)} {
		    incr row $amount
		    if {$row > $data(lastRow)} {
			set row 0
		    }
		    set col 0
		}

		if {$row == $oldRow && $col == $oldCol} {
		    return -code break ""   ;# because of the binding tag "all"
		} elseif {[isRowViewable $win $row] && !$data($col-hide)} {
		    condChangeSelection $win $row $col
		    return -code break ""   ;# because of the binding tag "all"
		}
	    }
	}
    }
}

#------------------------------------------------------------------------------
# tablelist::upDown
#
# Moves the location cursor (active item or element) up or down by one line,
# and changes the selection if we are in browse or extended selection mode.
#------------------------------------------------------------------------------
proc tablelist::upDown {win amount} {
    upvar ::tablelist::ns${win}::data data
    if {$data(editRow) >= 0} {
	return ""
    }

    switch $data(-selecttype) {
	row {
	    set row $data(activeRow)
	    set col -1
	}

	cell {
	    set row $data(activeRow)
	    set col $data(activeCol)
	}
    }

    while 1 {
	incr row $amount
	if {$row < 0 || $row > $data(lastRow)} {
	    return ""
	} elseif {[isRowViewable $win $row]} {
	    condChangeSelection $win $row $col
	    return ""
	}
    }
}

#------------------------------------------------------------------------------
# tablelist::leftRight
#
# Partially expands or collapses the active row if possible.  Otherwise, if the
# tablelist widget's selection type is "row" then this procedure scrolls the
# widget's view left or right by the width of the character "0".  Otherwise it
# moves the location cursor (active element) left or right by one column, and
# changes the selection if we are in browse or extended selection mode.
#------------------------------------------------------------------------------
proc tablelist::leftRight {win amount} {
    upvar ::tablelist::ns${win}::data data
    set row $data(activeRow)
    set col $data(treeCol)
    set key [lindex $data(keyList) $row]
    set op ""

    if {[info exists data($key,$col-indent)] && !$data(isDisabled)} {
	set indentLabel $data(body).ind_$key,$col
	set imgName [$indentLabel cget -image]
	if {[regexp {^tablelist_(.+)_(collapsed|expanded).*Img$} \
		     $imgName dummy treeStyle mode]} {
	    if {$amount > 0 && $mode eq "collapsed"} {
		set op "expand"
	    } elseif {$amount < 0 && $mode eq "expanded"} {
		set op "collapse"
	    }
	}
    }

    if {$op eq ""} {
	switch $data(-selecttype) {
	    row {
		::$win xview scroll $amount units
	    }

	    cell {
		if {$data(editRow) >= 0} {
		    return ""
		}

		set col $data(activeCol)
		while 1 {
		    incr col $amount
		    if {$col < 0 || $col > $data(lastCol)} {
			return ""
		    } elseif {!$data($col-hide)} {
			condChangeSelection $win $row $col
			return ""
		    }
		}
	    }
	}
    } else {
	#
	# Toggle the state of the expand/collapse control
	#
	if {[::$win cget -showbusycursor]} { ::$win setbusycursor }
	::$win $op $row -partly				;# can take long
	::$win restorecursor
    }
}

#------------------------------------------------------------------------------
# tablelist::priorNext
#
# Scrolls the tablelist view up or down by one page.
#------------------------------------------------------------------------------
proc tablelist::priorNext {win amount} {
    upvar ::tablelist::ns${win}::data data
    if {$data(editRow) >= 0} {
	return ""
    }

    ::$win yview scroll $amount pages
    ::$win activate @0,0
    genTablelistActivateEvent $win
    update idletasks
}

#------------------------------------------------------------------------------
# tablelist::homeEnd
#
# If selecttype is row then the procedure scrolls the tablelist widget
# horizontally to its left or right edge.  Otherwise it sets the location
# cursor (active element) to the first/last element of the active row, selects
# that element, and deselects everything else in the widget.
#------------------------------------------------------------------------------
proc tablelist::homeEnd {win keysym} {
    upvar ::tablelist::ns${win}::data data
    switch $data(-selecttype) {
	row {
	    switch $keysym {
		Home { ::$win xview moveto 0 }
		End  { ::$win xview moveto 1 }
	    }
	}

	cell {
	    set row $data(activeRow)
	    switch $keysym {
		Home { set col [firstViewableCol $win] }
		End  { set col [ lastViewableCol $win] }
	    }
	    changeSelection $win $row $col
	}
    }
}

#------------------------------------------------------------------------------
# tablelist::firstLast
#
# Sets the location cursor (active item or element) to the first/last item or
# element in the tablelist widget, selects that item or element, and deselects
# everything else in the widget.
#------------------------------------------------------------------------------
proc tablelist::firstLast {win target} {
    switch $target {
	first {
	    set row [firstViewableRow $win]
	    set col [firstViewableCol $win]
	}

	last {
	    set row [lastViewableRow $win]
	    set col [lastViewableCol $win]
	}
    }

    changeSelection $win $row $col
}

#------------------------------------------------------------------------------
# tablelist::extendUpDown
#
# Does nothing unless we are in extended selection mode; in this case it moves
# the location cursor (active item or element) up or down by one line, and
# extends the selection to that point.
#------------------------------------------------------------------------------
proc tablelist::extendUpDown {win amount} {
    upvar ::tablelist::ns${win}::data data
    if {$data(-selectmode) ne "extended"} {
	return ""
    }

    switch $data(-selecttype) {
	row {
	    set row $data(activeRow)
	    while 1 {
		incr row $amount
		if {$row < 0 || $row > $data(lastRow)} {
		    return ""
		} elseif {[isRowViewable $win $row]} {
		    ::$win activate $row
		    ::$win see active
		    motion $win $data(activeRow) -1
		    genTablelistActivateEvent $win
		    return ""
		}
	    }
	}

	cell {
	    set row $data(activeRow)
	    set col $data(activeCol)
	    while 1 {
		incr row $amount
		if {$row < 0 || $row > $data(lastRow)} {
		    return ""
		} elseif {[isRowViewable $win $row]} {
		    ::$win activatecell $row,$col
		    ::$win seecell active
		    motion $win $data(activeRow) $data(activeCol)
		    genTablelistActivateEvent $win
		    return ""
		}
	    }
	}
    }
}

#------------------------------------------------------------------------------
# tablelist::extendLeftRight
#
# Does nothing unless we are in extended selection mode and the selection type
# is cell; in this case it moves the location cursor (active element) left or
# right by one column, and extends the selection to that point.
#------------------------------------------------------------------------------
proc tablelist::extendLeftRight {win amount} {
    upvar ::tablelist::ns${win}::data data
    if {$data(-selectmode) ne "extended"} {
	return ""
    }

    switch $data(-selecttype) {
	row {
	    # Nothing
	}

	cell {
	    set row $data(activeRow)
	    set col $data(activeCol)
	    while 1 {
		incr col $amount
		if {$col < 0 || $col > $data(lastCol)} {
		    return ""
		} elseif {!$data($col-hide)} {
		    ::$win activatecell $row,$col
		    ::$win seecell active
		    motion $win $data(activeRow) $data(activeCol)
		    genTablelistActivateEvent $win
		    return ""
		}
	    }
	}
    }
}

#------------------------------------------------------------------------------
# tablelist::extendToHomeEnd
#
# Does nothing unless the selection mode is multiple or extended and the
# selection type is cell; in this case it moves the location cursor (active
# element) to the first/last element of the active row, and, if we are in
# extended mode, it extends the selection to that point.
#------------------------------------------------------------------------------
proc tablelist::extendToHomeEnd {win keysym} {
    upvar ::tablelist::ns${win}::data data
    switch $data(-selecttype) {
	row {
	    # Nothing
	}

	cell {
	    set row $data(activeRow)
	    switch $keysym {
		Home { set col [firstViewableCol $win] }
		End  { set col [ lastViewableCol $win] }
	    }

	    switch -- $data(-selectmode) {
		multiple {
		    ::$win activatecell $row,$col
		    ::$win seecell $row,$col
		    genTablelistActivateEvent $win
		}
		extended {
		    ::$win activatecell $row,$col
		    ::$win seecell $row,$col
		    if {[::$win selection includes anchor]} {
			motion $win $row $col
		    }
		    genTablelistActivateEvent $win
		}
	    }
	}
    }
}

#------------------------------------------------------------------------------
# tablelist::extendToFirstLast
#
# Does nothing unless the selection mode is multiple or extended; in this case
# it moves the location cursor (active item or element) to the first/last item
# or element in the tablelist widget, and, if we are in extended mode, it
# extends the selection to that point.
#------------------------------------------------------------------------------
proc tablelist::extendToFirstLast {win target} {
    switch $target {
	first {
	    set row [firstViewableRow $win]
	    set col [firstViewableCol $win]
	}

	last {
	    set row [lastViewableRow $win]
	    set col [lastViewableCol $win]
	}
    }

    upvar ::tablelist::ns${win}::data data
    switch $data(-selecttype) {
	row {
	    switch -- $data(-selectmode) {
		multiple {
		    ::$win activate $row
		    ::$win see $row
		    genTablelistActivateEvent $win
		}
		extended {
		    ::$win activate $row
		    ::$win see $row
		    if {[::$win selection includes anchor]} {
			motion $win $row -1
		    }
		    genTablelistActivateEvent $win
		}
	    }
	}

	cell {
	    switch -- $data(-selectmode) {
		multiple {
		    ::$win activatecell $row,$col
		    ::$win seecell $row,$col
		    genTablelistActivateEvent $win
		}
		extended {
		    ::$win activatecell $row,$col
		    ::$win seecell $row,$col
		    if {[::$win selection includes anchor]} {
			motion $win $row $col
		    }
		    genTablelistActivateEvent $win
		}
	    }
	}
    }
}

#------------------------------------------------------------------------------
# tablelist::cancelSelection
#
# This procedure is invoked to cancel an extended selection in progress.  If
# there is an extended selection in progress, it restores all of the elements
# to their previous selection state.
#------------------------------------------------------------------------------
proc tablelist::cancelSelection win {
    upvar ::tablelist::ns${win}::data data
    if {$data(-selectmode) ne "extended"} {
	return ""
    }

    variable priv
    switch $data(-selecttype) {
	row {
	    if {$priv(prevRow) eq ""} {
		return ""
	    }

	    ::$win selection clear 0 end

	    if {[::$win cget -showbusycursor]} { ::$win setbusycursor }
	    ::$win selection set $priv(selection)	;# can take long
	    ::$win restorecursor

	    genTablelistSelectEvent $win
	}

	cell {
	    if {$priv(prevRow) eq "" || $priv(prevCol) eq ""} {
		return ""
	    }

	    ::$win selection clear 0 end

	    if {[::$win cget -showbusycursor]} { ::$win setbusycursor }
	    ::$win cellselection set $priv(selection)	;# can take long
	    ::$win restorecursor

	    genTablelistSelectEvent $win
	}
    }
}

#------------------------------------------------------------------------------
# tablelist::selectAll
#
# This procedure is invoked to handle the "select all" operation.  For single
# and browse mode, it just selects the active item or element.  Otherwise it
# selects everything in the widget.
#------------------------------------------------------------------------------
proc tablelist::selectAll win {
    upvar ::tablelist::ns${win}::data data
    switch $data(-selecttype) {
	row {
	    if {$data(-selectmode) eq "single" ||
		$data(-selectmode) eq "browse"} {
		::$win selection clear 0 end
		::$win selection set active
	    } else {
		::$win selection set 0 end
	    }
	}

	cell {
	    if {$data(-selectmode) eq "single" ||
		$data(-selectmode) eq "browse"} {
		::$win cellselection clear 0,0 end
		::$win cellselection set active
	    } else {
		::$win cellselection set 0,0 end
	    }
	}
    }

    genTablelistSelectEvent $win
}

#------------------------------------------------------------------------------
# tablelist::isDragSrc
#
# Checks whether the body component of the tablelist widget win is a drag
# source for mouse button 1.
#------------------------------------------------------------------------------
proc tablelist::isDragSrc win {
    upvar ::tablelist::ns${win}::data data
    set bindTags [bindtags $data(body)]
    return [expr {[info exists data(sourceRow)] || $data(-customdragsource) ||
		  [lsearch -exact $bindTags "BwDrag1"] >= 0 ||
		  [lsearch -exact $bindTags "TkDND_Drag1"] >= 0
    }]
}

#------------------------------------------------------------------------------
# tablelist::normalizedRect
#
# Returns a list of the form {minRow minCol maxRow maxCol}, built from the
# given arguments.
#------------------------------------------------------------------------------
proc tablelist::normalizedRect {row1 col1 row2 col2} {
    if {$row1 <= $row2} {
	set minRow $row1
	set maxRow $row2
    } else {
	set minRow $row2
	set maxRow $row1
    }

    if {$col1 <= $col2} {
	set minCol $col1
	set maxCol $col2
    } else {
	set minCol $col2
	set maxCol $col1
    }

    return [list $minRow $minCol $maxRow $maxCol]
}

#------------------------------------------------------------------------------
# tablelist::cellInRect
#
# Checks whether the cell row,col is contained in the given rectangular range.
#------------------------------------------------------------------------------
proc tablelist::cellInRect {row col minRow minCol maxRow maxCol} {
    return [expr {$row >= $minRow && $row <= $maxRow &&
		  $col >= $minCol && $col <= $maxCol}]
}

#------------------------------------------------------------------------------
# tablelist::firstViewableRow
#
# Returns the index of the first viewable row of the tablelist widget win.
#------------------------------------------------------------------------------
proc tablelist::firstViewableRow win {
    upvar ::tablelist::ns${win}::data data
    set itemCount $data(itemCount)
    for {set row 0} {$row < $itemCount} {incr row} {
	if {[isRowViewable $win $row]} {
	    return $row
	}
    }

    return -1
}

#------------------------------------------------------------------------------
# tablelist::lastViewableRow
#
# Returns the index of the last viewable row of the tablelist widget win.
#------------------------------------------------------------------------------
proc tablelist::lastViewableRow win {
    upvar ::tablelist::ns${win}::data data
    for {set row $data(lastRow)} {$row >= 0} {incr row -1} {
	if {[isRowViewable $win $row]} {
	    return $row
	}
    }

    return -1
}

#------------------------------------------------------------------------------
# tablelist::firstViewableCol
#
# Returns the index of the first non-hidden column of the tablelist widget win.
#------------------------------------------------------------------------------
proc tablelist::firstViewableCol win {
    upvar ::tablelist::ns${win}::data data
    for {set col 0} {$col < $data(colCount)} {incr col} {
	if {!$data($col-hide)} {
	    return $col
	}
    }

    return -1
}

#------------------------------------------------------------------------------
# tablelist::lastViewableCol
#
# Returns the index of the last non-hidden column of the tablelist widget win.
#------------------------------------------------------------------------------
proc tablelist::lastViewableCol win {
    upvar ::tablelist::ns${win}::data data
    for {set col $data(lastCol)} {$col >= 0} {incr col -1} {
	if {!$data($col-hide)} {
	    return $col
	}
    }

    return -1
}

#------------------------------------------------------------------------------
# tablelist::condChangeSelection
#
# Activates the given item or element, and selects it exclusively if we are in
# browse or extended selection mode.
#------------------------------------------------------------------------------
proc tablelist::condChangeSelection {win row col} {
    upvar ::tablelist::ns${win}::data data
    switch $data(-selecttype) {
	row {
	    ::$win activate $row
	    ::$win see active
	    genTablelistActivateEvent $win

	    switch -- $data(-selectmode) {
		browse {
		    ::$win selection clear 0 end
		    ::$win selection set active
		    genTablelistSelectEvent $win
		}
		extended {
		    ::$win selection clear 0 end
		    ::$win selection set active
		    ::$win selection anchor active
		    variable priv
		    set priv(selection) {}
		    set priv(prevRow) $data(activeRow)
		    genTablelistSelectEvent $win
		}
	    }
	}

	cell {
	    ::$win activatecell $row,$col
	    ::$win seecell active
	    genTablelistActivateEvent $win

	    switch -- $data(-selectmode) {
		browse {
		    ::$win cellselection clear 0,0 end
		    ::$win cellselection set active
		    genTablelistSelectEvent $win
		}
		extended {
		    ::$win cellselection clear 0,0 end
		    ::$win cellselection set active
		    ::$win cellselection anchor active
		    variable priv
		    set priv(selection) {}
		    set priv(prevRow) $data(activeRow)
		    set priv(prevCol) $data(activeCol)
		    genTablelistSelectEvent $win
		}
	    }
	}
    }

    update idletasks
}

#------------------------------------------------------------------------------
# tablelist::changeSelection
#
# Activates the given item or element and selects it exclusively.
#------------------------------------------------------------------------------
proc tablelist::changeSelection {win row col} {
    upvar ::tablelist::ns${win}::data data
    switch $data(-selecttype) {
	row {
	    ::$win activate $row
	    ::$win see active

	    ::$win selection clear 0 end
	    ::$win selection set active
	}

	cell {
	    ::$win activatecell $row,$col
	    ::$win seecell active

	    ::$win cellselection clear 0,0 end
	    ::$win cellselection set active
	}
    }

    genTablelistActivateEvent $win
    genTablelistSelectEvent $win
}

#------------------------------------------------------------------------------
# tablelist::genTablelistActivateEvent
#
# Generates a <<TablelistActivate>> virtual event on the tablelist widget win
# if the latter is in normal state.
#------------------------------------------------------------------------------
proc tablelist::genTablelistActivateEvent win {
    if {[::$win cget -state] eq "normal"} {
	event generate $win <<TablelistActivate>>
    }
}

#------------------------------------------------------------------------------
# tablelist::genTablelistSelectEvent
#
# Generates a <<TablelistSelect>> virtual event on the tablelist widget win if
# the latter is in normal state.
#------------------------------------------------------------------------------
proc tablelist::genTablelistSelectEvent win {
    if {[::$win cget -state] eq "normal"} {
	event generate $win <<TablelistSelect>>
    }
}

#------------------------------------------------------------------------------
# tablelist::handleWheelEvent
#
# Handles a mouse wheel event with the given root coordinates and delta on the
# widget W.
#------------------------------------------------------------------------------
proc tablelist::handleWheelEvent {event axis W X Y delta divisor} {
    set win [getTablelistPath $W]
    set w [::$win cget -${axis}mousewheelwindow]
    set titleCols [::$win cget -titlecolumns]

    if {[winfo exists $w]} {
	if {[mwutil::hasFocus $win]} {
	    if {$axis eq "x" && $titleCols > 0} {
		switch -- $divisor {
		    -40.0 - -30.0 { set divisor -120.0 }
		    1.0		  { set divisor 5.0 }
		}
	    }
	    mwutil::scrollByUnits $win $axis $delta $divisor
	    return -code break ""
	} elseif {[string match "<*MouseWheel>" $event]} {
	    mwutil::genMouseWheelEvent $w $event $X $Y $delta
	} else {
	    event generate $w $event -rootx $X -rooty $Y
	}
    } else {
	if {$axis eq "x" && $titleCols > 0} {
	    switch -- $divisor {
		-40.0 - -30.0 { set divisor -120.0 }
		1.0	      { set divisor 5.0 }
	    }
	}
	mwutil::scrollByUnits $win $axis $delta $divisor
	return -code break ""
    }
}

#
# Binding tag TablelistHeader
# ===========================
#

#------------------------------------------------------------------------------
# tablelist::defineTablelistHeader
#
# Defines the bindings for the binding tag TablelistHeader.
#------------------------------------------------------------------------------
proc tablelist::defineTablelistHeader {} {
    foreach event {<Enter> <Motion> <Leave>} {
	##nagelfar ignore
	bind TablelistHeader $event [format {
	    tablelist::hdr_handleMotionDelayed %%W %%x %%y %%X %%Y %s
	} $event]
    }
}

#------------------------------------------------------------------------------
# tablelist::hdr_handleMotionDelayed
#
# This procedure is invoked when the mouse pointer enters or leaves the header
# text widget of a tablelist widget or is moving within it.  It schedules the
# execution of the hdr_handleMotion procedure 100 ms later.
#------------------------------------------------------------------------------
proc tablelist::hdr_handleMotionDelayed {w x y X Y event} {
    set win [getTablelistPath $w]
    upvar ::tablelist::ns${win}::data data
    if {[regexp {^vsep([0-9]+)?$} [winfo name $w]]} {
	return ""
    }

    set data(hdr_motionData) [list $w $x $y $X $Y $event]
    if {$event eq "<Leave>"} {
	hdr_handleMotion $win
    } elseif {![info exists data(hdr_motionId)]} {
	set data(hdr_motionId) \
	    [after 100 [list tablelist::hdr_handleMotion $win]]
    }
}

#------------------------------------------------------------------------------
# tablelist::hdr_handleMotion
#
# Invokes the procedure hdr_showOrHideTooltip.
#------------------------------------------------------------------------------
proc tablelist::hdr_handleMotion win {
    upvar ::tablelist::ns${win}::data data
    if {[info exists data(hdr_motionId)]} {
	after cancel $data(hdr_motionId)
	unset data(hdr_motionId)
    }

    #
    # Get the containing header cell from the
    # coordinates relative to the tablelist
    #
    foreach {w x y X Y event} $data(hdr_motionData) {}
    foreach {win _x _y} [convEventFields $w $x $y] {}
    set row [hdr_containingRow $win $_y]
    set col [containingCol $win $_x]

    if {$event ne "<Enter>" || ($row >= 0 && $col >= 0)} {
	hdr_showOrHideTooltip $win $row $col $X $Y
    }
}

#------------------------------------------------------------------------------
# tablelist::hdr_showOrHideTooltip
#
# If the pointer has crossed a header cell boundary then the procedure removes
# the old tooltip and displays the one corresponding to the new cell.
#------------------------------------------------------------------------------
proc tablelist::hdr_showOrHideTooltip {win row col X Y} {
    upvar ::tablelist::ns${win}::data data
    if {$data(-tooltipaddcommand) eq "" || $data(-tooltipdelcommand) eq "" ||
	"$row,$col" eq $data(hdr_prevCell)} {
	return ""
    }

    #
    # Remove the old tooltip, if any.  Then, if we are within a
    # cell, display the new tooltip corresponding to that cell.
    #
    event generate $win <Leave>
    catch {uplevel #0 $data(-tooltipdelcommand) [list $win]}
    if {[destroyed $win]} {
	return ""
    }
    set data(hdr_prevCell) $row,$col
    if {$row >= 0 && $col >= 0} {
	set focusWin [focus -displayof $win]
	if {$focusWin eq "" || [string first $win. $focusWin] != 0 ||
	    [winfo toplevel $focusWin] eq $data(topWin)} {
	    uplevel #0 $data(-tooltipaddcommand) [list $win h$row $col]
	    if {[destroyed $win]} {
		return ""
	    }
	    event generate $win <Enter> -rootx $X -rooty $Y
	}
    }
}

#
# Binding tags TablelistLabel, TablelistSubLabel, and TablelistArrow
# ==================================================================
#

#------------------------------------------------------------------------------
# tablelist::defineTablelistLabel
#
# Defines the bindings for the binding tag TablelistLabel.
#------------------------------------------------------------------------------
proc tablelist::defineTablelistLabel {} {
    bind TablelistLabel <Enter> {
	tablelist::labelEnter %W %X %Y %x
    }
    bind TablelistLabel <Motion> {
	tablelist::labelEnter %W %X %Y %x
    }
    bind TablelistLabel <Leave> {
	tablelist::labelLeave %W %X %x %y
    }
    bind TablelistLabel <Button-1> {
	tablelist::labelB1Down %W %x 0
    }
    bind TablelistLabel <Shift-Button-1> {
	tablelist::labelB1Down %W %x 1
    }
    bind TablelistLabel <B1-Motion> {
	tablelist::labelB1Motion %W %X %x %y
    }
    bind TablelistLabel <B1-Enter> {
	tablelist::labelB1Enter %W
    }
    bind TablelistLabel <B1-Leave> {
	tablelist::labelB1Leave %W %x %y
    }
    bind TablelistLabel <ButtonRelease-1> {
	tablelist::labelB1Up %W %X
    }
    bind TablelistLabel <<Button3>> {
	tablelist::labelB3Down %W 0
    }
    bind TablelistLabel <<ShiftButton3>> {
	tablelist::labelB3Down %W 1
    }
    bind TablelistLabel <Double-Button-1> {
	tablelist::labelDblB1 %W %x 0
    }
    bind TablelistLabel <Shift-Double-Button-1> {
	tablelist::labelDblB1 %W %x 1
    }

    variable winSys
    switch $winSys {
	x11	{ set modList {Alt Meta} }
	win32	{ set modList {Alt} }
	aqua	{ set modList {Command} }
    }
    foreach modifier $modList {
	bind TablelistLabel <$modifier-Button-1> {
	    tablelist::labelModifB1Down %W %X
	}
	bind TablelistLabel <$modifier-Shift-Button-1> {
	    tablelist::labelModifShiftB1Down %W %X
	}
	bind TablelistLabel <$modifier-Control-Button-1> {
	    tablelist::labelModifCtrlB1Down %W %X
	}
    }
}

#------------------------------------------------------------------------------
# tablelist::defineTablelistSubLabel
#
# Defines the binding tag TablelistSubLabel (for sublabels of tablelist labels)
# to have the same events as TablelistLabel and the binding scripts obtained
# from those of TablelistLabel by replacing the widget %W with the containing
# label as well as the %x and %y fields with the corresponding coordinates
# relative to that label.
#------------------------------------------------------------------------------
proc tablelist::defineTablelistSubLabel {} {
    foreach event [bind TablelistLabel] {
	set script [string map {
	    "%W" "$tablelist::W"  "%x" "$tablelist::x"  "%y" "$tablelist::y"
	} [bind TablelistLabel $event]]

	##nagelfar ignore
	bind TablelistSubLabel $event [format {
	    set tablelist::W \
		[string range %%W 0 [expr {[string length %%W] - 4}]]
	    set tablelist::x \
		[expr {%%x + [winfo x %%W] - [winfo x $tablelist::W]}]
	    set tablelist::y \
		[expr {%%y + [winfo y %%W] - [winfo y $tablelist::W]}]
	    %s
	} $script]
    }
}

#------------------------------------------------------------------------------
# tablelist::defineTablelistArrow
#
# Defines the binding tag TablelistArrow (for sort arrows) to have the same
# events as TablelistLabel and the binding scripts obtained from those of
# TablelistLabel by replacing the widget %W with the containing label as well
# as the %x and %y fields with the corresponding coordinates relative to that
# label.
#------------------------------------------------------------------------------
proc tablelist::defineTablelistArrow {} {
    foreach event [bind TablelistLabel] {
	set script [string map {
	    "%W" "$tablelist::W"  "%x" "$tablelist::x"  "%y" "$tablelist::y"
	} [bind TablelistLabel $event]]

	##nagelfar ignore
	bind TablelistArrow $event [format {
	    set tablelist::W \
		[winfo parent %%W].l[string range [winfo name %%W] 1 end]
	    set tablelist::x \
		[expr {%%x + [winfo x %%W] - [winfo x $tablelist::W]}]
	    set tablelist::y \
		[expr {%%y + [winfo y %%W] - [winfo y $tablelist::W]}]
	    %s
	} $script]
    }
}

#------------------------------------------------------------------------------
# tablelist::labelEnter
#
# This procedure is invoked when the mouse pointer enters a header label w of a
# tablelist widget, or is moving within that label.  It updates the cursor,
# displays the tooltip, and activates or deactivates the label, depending on
# whether the pointer is on its right border or not.
#------------------------------------------------------------------------------
proc tablelist::labelEnter {w X Y x} {
    if {![parseLabelPath $w win col]} {
	return ""
    }

    upvar ::tablelist::ns${win}::data data
    configLabel $w -cursor $data(-cursor)

    if {$data(-tooltipaddcommand) ne "" && $data(-tooltipdelcommand) ne "" &&
	$col != $data(prevCol)} {
	#
	# Display the tooltip corresponding to this label
	#
	event generate $win <Leave>
	catch {uplevel #0 $data(-tooltipdelcommand) [list $win]}
	if {[destroyed $win]} {
	    return ""
	}
	set data(prevCol) $col
	set focusWin [focus -displayof $win]
	if {$focusWin eq "" || [string first $win. $focusWin] != 0 ||
	    [winfo toplevel $focusWin] eq $data(topWin)} {
	    uplevel #0 $data(-tooltipaddcommand) [list $win -1 $col]
	    if {[destroyed $win]} {
		return ""
	    }
	    event generate $win <Enter> -rootx $X -rooty $Y
	}
    }

    if {$data(isDisabled)} {
	return ""
    }

    if {[inResizeArea $w $x col] &&
	$data(-resizablecolumns) && $data($col-resizable)} {
	configLabel $w -cursor $data(-resizecursor)
	configLabel $w -active 0
    } else {
	configLabel $w -active 1
    }
}

#------------------------------------------------------------------------------
# tablelist::labelLeave
#
# This procedure is invoked when the mouse pointer leaves a header label w of a
# tablelist widget.  It removes the tooltip and deactivates the label.
#------------------------------------------------------------------------------
proc tablelist::labelLeave {w X x y} {
    if {![parseLabelPath $w win col]} {
	return ""
    }

    #
    # The following code is needed because the event
    # can also occur in a widget placed into the label
    #
    upvar ::tablelist::ns${win}::data data
    set data(hdr_prevCell) -1,-1
    set hdrX [winfo rootx $data(hdr)]
    if {$X >= $hdrX && $X < $hdrX + [winfo width $data(hdr)] &&
	$x >= 1 && $x < [winfo width $w] - 1 &&
	$y >= 0 && $y < [winfo height $w]} {
	return ""
    }

    if {$data(-tooltipaddcommand) ne "" && $data(-tooltipdelcommand) ne ""} {
	#
	# Remove the tooltip, if any
	#
	event generate $win <Leave>
	catch {uplevel #0 $data(-tooltipdelcommand) [list $win]}
	if {[destroyed $win]} {
	    return ""
	}
	set data(prevCol) -1
    }

    if {$data(isDisabled)} {
	return ""
    }

    configLabel $w -active 0
}

#------------------------------------------------------------------------------
# tablelist::labelB1Down
#
# This procedure is invoked when mouse button 1 is pressed in a header label w
# of a tablelist widget.  If the pointer is on the right border of the label
# then the procedure records its x-coordinate relative to the label, the width
# of the column, and some other data needed later.  Otherwise it saves the
# label's relief so it can be restored later, and changes the relief to sunken.
#------------------------------------------------------------------------------
proc tablelist::labelB1Down {w x shiftPressed} {
    if {![parseLabelPath $w win col]} {
	return ""
    }

    upvar ::tablelist::ns${win}::data data
    if {$data(isDisabled) ||
	[info exists data(colBeingResized)]} {	;# resize operation in progress
	return ""
    }

    set data(labelClicked) 1
    set data(X) [expr {[winfo rootx $w] + $x}]
    set data(shiftPressed) $shiftPressed

    if {[inResizeArea $w $x col] &&
	$data(-resizablecolumns) && $data($col-resizable)} {
	set data(colBeingResized) $col
	set data(colResized) 0
	set data(inClickedLabel) 0

	set w $data(body)
	set topTextIdx [$w index @0,0]
	set btmTextIdx [$w index @0,[expr {[winfo height $w] - 1}]]
	$w tag add visibleLines "$topTextIdx linestart" "$btmTextIdx lineend"
	set data(topRow) [expr {int($topTextIdx) - 1}]
	set data(btmRow) [expr {int($btmTextIdx) - 1}]

	set w $data(hdrTxtFrmLbl)$col
	set labelWidth [winfo width $w]
	set data(oldStretchedColWidth) [expr {$labelWidth - 2*$data(charWidth)}]
	set data(oldColDelta) $data($col-delta)
	set data(configColWidth) [lindex $data(-columns) [expr {3*$col}]]

	if {[lsearch -exact $data(arrowColList) $col] >= 0} {
	    set canvasWidth $data(arrowWidth)
	    if {[llength $data(arrowColList)] > 1} {
		incr canvasWidth 6
	    }
	    set data(minColWidth) $canvasWidth
	} elseif {$data($col-wrap)} {
	    set data(minColWidth) $data(charWidth)
	} else {
	    set data(minColWidth) 0
	}
	incr data(minColWidth)

	set data(focus) [focus -displayof $win]
	set topWin $data(topWin)
	focus $topWin
	set data(topEscBinding) [bind $topWin <Escape>]
	bind $topWin <Escape> \
	     [list tablelist::escape [string map {"%" "%%"} $win] $col]
    } else {
	set data(inClickedLabel) 1
	set data(relief) [$w cget -relief]

	if {[info exists data($col-labelcommand)] ||
	    $data(-labelcommand) ne ""} {
	    set data(changeRelief) 1
	    configLabel $w -relief sunken -pressed 1
	} else {
	    set data(changeRelief) 0
	}

	if {$data(-movablecolumns)} {
	    set data(focus) [focus -displayof $win]
	    set topWin $data(topWin)
	    focus $topWin
	    set data(topEscBinding) [bind $topWin <Escape>]
	    bind $topWin <Escape> \
		 [list tablelist::escape [string map {"%" "%%"} $win] $col]
	}
    }
}

#------------------------------------------------------------------------------
# tablelist::labelB1Motion
#
# This procedure is invoked to process mouse motion events in a header label w
# of a tablelist widget while button 1 is down.  If this event occured during a
# column resize operation then the procedure computes the difference between
# the pointer's new x-coordinate relative to that label and the one recorded by
# the last invocation of labelB1Down, and adjusts the width of the
# corresponding column accordingly.  Otherwise a horizontal scrolling is
# performed if needed, and the would-be target position of the clicked label is
# visualized if the columns are movable.
#------------------------------------------------------------------------------
proc tablelist::labelB1Motion {w X x y} {
    if {![parseLabelPath $w win col]} {
	return ""
    }

    upvar ::tablelist::ns${win}::data data
    if {!$data(labelClicked) && !$data(labelModifClicked)} {
	return ""
    }

    if {[info exists data(colBeingResized)]} {	;# resize operation in progress
	set width [expr {$data(oldStretchedColWidth) + $X - $data(X)}]
	if {$width >= $data(minColWidth)} {
	    set col $data(colBeingResized)
	    set data(colResized) 1
	    set idx [expr {3*$col}]
	    set data(-columns) [lreplace $data(-columns) $idx $idx -$width]
	    set idx [expr {2*$col}]
	    set data(colList) [lreplace $data(colList) $idx $idx $width]
	    set data($col-lastStaticWidth) $width
	    set data($col-delta) 0
	    redisplayCol $win $col $data(topRow) $data(btmRow)

	    #
	    # Handle the case that the bottom row has become
	    # greater (due to the redisplayCol invocation)
	    #
	    set b $data(body)
	    set btmTextIdx [$b index @0,$data(btmY)]
	    set btmRow [expr {int($btmTextIdx) - 1}]
	    if {$btmRow > $data(lastRow)} {
		set btmRow $data(lastRow)
	    }
	    while {$btmRow > $data(btmRow)} {
		$b tag add visibleLines [expr {$data(btmRow) + 2}].0 \
					"$btmTextIdx lineend"
		incr data(btmRow)
		redisplayCol $win $col $data(btmRow) $btmRow
		set data(btmRow) $btmRow

		set btmTextIdx [$b index @0,$data(btmY)]
		set btmRow [expr {int($btmTextIdx) - 1}]
		if {$btmRow > $data(lastRow)} {
		    set btmRow $data(lastRow)
		}
	    }

	    #
	    # Handle the case that the top row has become
	    # less (due to the redisplayCol invocation)
	    #
	    set topTextIdx [$b index @0,0]
	    set topRow [expr {int($topTextIdx) - 1}]
	    while {$topRow < $data(topRow)} {
		$b tag add visibleLines "$topTextIdx linestart" \
					$data(topRow).end
		incr data(topRow) -1
		redisplayCol $win $col $topRow $data(topRow)
		set data(topRow) $topRow

		set topTextIdx [$b index @0,0]
		set topRow [expr {int($topTextIdx) - 1}]
	    }

	    adjustColumns $win {} 0
	    adjustElidedText $win
	    redisplayVisibleItems $win
	    updateColors $win
	    updateVScrlbarWhenIdle $win
	}
    } else {
	#
	# Scroll the window horizontally if needed
	#
	set hdrX [winfo rootx $data(hdr)]
	if {$data(-titlecolumns) == 0 || ![winfo viewable $data(vsep)]} {
	    set leftX $hdrX
	} else {
	    set leftX [expr {[winfo rootx $data(vsep)] + 1}]
	}
	set rightX [expr {$hdrX + [winfo width $data(hdr)]}]
	set scroll 0
	if {($X >= $rightX && $data(X) < $rightX) ||
	    ($X < $leftX && $data(X) >= $leftX)} {
	    set scroll 1
	} elseif {($X < $rightX && $data(X) >= $rightX) ||
		  ($X >= $leftX && $data(X) < $leftX)} {
	    after cancel $data(afterId)
	    set data(afterId) ""
	}
	set data(X) $X
	if {$scroll} {
	    horizAutoScan $win
	}

	if {$data(labelModifClicked)} {
	   labelModifB1Motion $win $w $X
	   return ""
	}

	if {$x >= 1 && $x < [winfo width $w] - 1 &&
	    $y >= 0 && $y < [winfo height $w]} {
	    #
	    # The following code is needed because the event
	    # can also occur in a widget placed into the label
	    #
	    set data(inClickedLabel) 1
	    configLabel $w -cursor $data(-cursor)
	    $data(hdrTxtFrmCanv)$col configure -cursor $data(-cursor)
	    if {$data(changeRelief)} {
		configLabel $w -relief sunken -pressed 1
	    }

	    place forget $data(colGap)
	    lower $data(colGap)				;# necessary on aqua
	} else {
	    #
	    # The following code is needed because the event
	    # can also occur in a widget placed into the label
	    #
	    set data(inClickedLabel) 0
	    configLabel $w -relief $data(relief) -pressed 0

	    if {$data(-movablecolumns)} {
		#
		# Get the target column index
		#
		set contW [winfo containing -displayof $w $X [winfo rooty $w]]
		if {[set targetCol [getTablelistColumn $contW]] >= 0} {
		    set master $data(hdrTxtFrmLbl)$targetCol
		    if {$X < [winfo rootx $master] + [winfo width $master]/2} {
			set relx 0.0
		    } else {
			incr targetCol
			set relx 1.0
		    }
		} elseif {$contW eq $data(colGap)} {
		    set targetCol $data(targetCol)
		    set master $data(master)
		    set relx $data(relx)
		} elseif {$X >= $rightX || $X >= [winfo rootx $w]} {
		    for {set targetCol $data(lastCol)} {$targetCol >= 0} \
			{incr targetCol -1} {
			if {!$data($targetCol-hide)} {
			    break
			}
		    }
		    incr targetCol
		    set master $data(hdrTxtFrm)
		    set relx 1.0
		} else {
		    for {set targetCol 0} {$targetCol < $data(colCount)} \
			{incr targetCol} {
			if {!$data($targetCol-hide)} {
			    break
			}
		    }
		    set master $data(hdrTxtFrm)
		    set relx 0.0
		}

		#
		# Visualize the would-be target position
		# of the clicked label if appropriate
		#
		if {$targetCol == $col || $targetCol == $col + 1 ||
		    ($data(-protecttitlecolumns) &&
		     (($col >= $data(-titlecolumns) &&
		       $targetCol < $data(-titlecolumns)) ||
		      ($col < $data(-titlecolumns) &&
		       $targetCol > $data(-titlecolumns))))} {
		    array unset data targetCol
		    configLabel $w -cursor $data(-cursor)
		    $data(hdrTxtFrmCanv)$col configure -cursor $data(-cursor)
		    place forget $data(colGap)
		    lower $data(colGap)			;# necessary on aqua
		} else {
		    set data(targetCol) $targetCol
		    set data(master) $master
		    set data(relx) $relx
		    configLabel $w -cursor $data(-movecolumncursor)
		    $data(hdrTxtFrmCanv)$col configure \
			-cursor $data(-movecolumncursor)

		    set y 0
		    set height 0
		    variable usingTile
		    variable currentTheme
		    variable newAquaSupport
		    if {$usingTile && $currentTheme eq "aqua" &&
			$newAquaSupport} {
			set y -4
			if {$master eq $data(hdrTxtFrm)} {
			    set height 4
			}
		    }

		    place $data(colGap) -in $master -anchor n \
			-bordermode outside -height $height -relheight 1.0 \
			-relx $relx -y $y
		    raise $data(colGap)			;# necessary on aqua
		}
	    }
	}
    }
}

#------------------------------------------------------------------------------
# tablelist::labelB1Enter
#
# This procedure is invoked when the mouse pointer enters a header label w of a
# tablelist widget while mouse button 1 is down.  If the label was not
# previously clicked then nothing happens.  Otherwise, if this event occured
# during a column resize operation then the procedure updates the mouse cursor
# accordingly.  Otherwise it changes the label's relief to sunken.
#------------------------------------------------------------------------------
proc tablelist::labelB1Enter w {
    if {![parseLabelPath $w win col]} {
	return ""
    }

    upvar ::tablelist::ns${win}::data data
    if {!$data(labelClicked)} {
	return ""
    }

    configLabel $w -cursor $data(-cursor)

    if {[info exists data(colBeingResized)]} {	;# resize operation in progress
	configLabel $w -cursor $data(-resizecursor)
    } else {
	set data(inClickedLabel) 1
	if {$data(changeRelief)} {
	    configLabel $w -relief sunken -pressed 1
	}
    }
}

#------------------------------------------------------------------------------
# tablelist::labelB1Leave
#
# This procedure is invoked when the mouse pointer leaves a header label w of a
# tablelist widget while mouse button 1 is down.  If the label was not
# previously clicked then nothing happens.  Otherwise, if no column resize
# operation is in progress then the procedure restores the label's relief, and,
# if the columns are movable, then it changes the mouse cursor, too.
#------------------------------------------------------------------------------
proc tablelist::labelB1Leave {w x y} {
    if {![parseLabelPath $w win col]} {
	return ""
    }

    upvar ::tablelist::ns${win}::data data
    if {!$data(labelClicked) ||
	[info exists data(colBeingResized)]} {	;# resize operation in progress
	return ""
    }

    #
    # The following code is needed because the event
    # can also occur in a widget placed into the label
    #
    if {$x >= 1 && $x < [winfo width $w] - 1 &&
	$y >= 0 && $y < [winfo height $w]} {
	return ""
    }

    set data(inClickedLabel) 0
    configLabel $w -relief $data(relief) -pressed 0
}

#------------------------------------------------------------------------------
# tablelist::labelB1Up
#
# This procedure is invoked when mouse button 1 is released, if it was
# previously clicked in a header label of a tablelist widget.  If this event
# occured during a column resize operation then the procedure redisplays the
# column and stretches the stretchable columns.  Otherwise, if the mouse button
# was released in the previously clicked label then the procedure restores the
# label's relief and invokes the command specified by the -labelcommand or
# -labelcommand2 configuration option, passing to it the widget name and the
# column number as arguments.  Otherwise the column of the previously clicked
# label is moved before the column containing the mouse cursor or to its right,
# if the columns are movable.
#------------------------------------------------------------------------------
proc tablelist::labelB1Up {w X} {
    if {![parseLabelPath $w win col]} {
	return ""
    }

    upvar ::tablelist::ns${win}::data data
    if {!$data(labelClicked) && !$data(labelModifClicked)} {
	return ""
    }

    if {[info exists data(colBeingResized)]} {	;# resize operation in progress
	configLabel $w -cursor $data(-cursor)
	if {[winfo exists $data(focus)]} {
	    focus $data(focus)
	}
	bind $data(topWin) <Escape> $data(topEscBinding)
	set col $data(colBeingResized)
	if {$data(colResized)} {
	    if {$data(-width) <= 0} {
		$data(hdr) configure -width $data(hdrWidth)
		$data(lb) configure -width \
			  [expr {$data(hdrWidth) / $data(charWidth)}]
	    } elseif {[info exists data(stretchableCols)] &&
		      [lsearch -exact $data(stretchableCols) $col] >= 0} {
		set oldColWidth \
		    [expr {$data(oldStretchedColWidth) - $data(oldColDelta)}]
		set stretchedColWidth \
		    [expr {$data(oldStretchedColWidth) + $X - $data(X)}]
		if {$oldColWidth < $data(stretchablePixels) &&
		    $stretchedColWidth >= $data(minColWidth) &&
		    $stretchedColWidth < $oldColWidth + $data(delta)} {
		    #
		    # Compute the new column width,
		    # using the following equations:
		    #
		    # $colWidth = $stretchedColWidth - $colDelta
		    # $colDelta / $colWidth =
		    #    ($data(delta) - $colWidth + $oldColWidth) /
		    #    ($data(stretchablePixels) + $colWidth - $oldColWidth)
		    #
		    set colWidth [expr {
			$stretchedColWidth *
			($data(stretchablePixels) - $oldColWidth) /
			($data(stretchablePixels) + $data(delta) -
			 $stretchedColWidth)
		    }]
		    if {$colWidth < 1} {
			set colWidth 1
		    }
		    set idx [expr {3*$col}]
		    set data(-columns) \
			[lreplace $data(-columns) $idx $idx -$colWidth]
		    set idx [expr {2*$col}]
		    set data(colList) \
			[lreplace $data(colList) $idx $idx $colWidth]
		    set data($col-delta) [expr {$stretchedColWidth - $colWidth}]
		}
	    }
	}

	unset data(colBeingResized)

	if {$data(colResized)} {
	    if {[::$win cget -showbusycursor]} { ::$win setbusycursor }
	    redisplayCol $win $col 0 last		;# can take long
	    adjustColumns $win {} 0
	    stretchColumns $win $col
	    updateColors $win
	    ::$win restorecursor

	    genVirtualEvent $win <<TablelistColumnResized>> $col
	}

	$data(body) tag remove visibleLines 1.0 end
	$data(body) tag configure visibleLines -tabs {}
    } else {
	if {[info exists data(X)]} {
	    unset data(X)
	    after cancel $data(afterId)
	    set data(afterId) ""
	}

	if {$data(labelModifClicked)} {
	    labelModifB1Up $win $w $X
	    return ""
	}

    	if {$data(-movablecolumns)} {
	    if {[winfo exists $data(focus)]} {
		focus $data(focus)
	    }
	    bind $data(topWin) <Escape> $data(topEscBinding)
	    place forget $data(colGap)
	    lower $data(colGap)				;# necessary on aqua
	}

	if {$data(inClickedLabel)} {
	    configLabel $w -relief $data(relief) -pressed 0
	    set cmd ""
	    if {$data(shiftPressed)} {
		if {[info exists data($col-labelcommand2)]} {
		    set cmd $data($col-labelcommand2)
		} elseif {$data(-labelcommand2) ne ""} {
		    set cmd $data(-labelcommand2)
		}
	    } else {
		if {[info exists data($col-labelcommand)]} {
		    set cmd $data($col-labelcommand)
		} elseif {$data(-labelcommand) ne ""} {
		    set cmd $data(-labelcommand)
		}
	    }
	    if {$cmd ne ""} {
		if {[::$win cget -showbusycursor]} { ::$win setbusycursor }
		uplevel #0 $cmd [list $win $col]	;# can take long
		if {[destroyed $win]} {
		    return ""
		}
		::$win restorecursor
	    }
	} elseif {$data(-movablecolumns)} {
	    $data(hdrTxtFrmCanv)$col configure -cursor $data(-cursor)
	    if {[info exists data(targetCol)]} {
		set sourceColName [doColCget $col $win -name]
		set targetColName [doColCget $data(targetCol) $win -name]

		if {[::$win cget -showbusycursor]} { ::$win setbusycursor }
		moveCol $win $col $data(targetCol)	;# can take long
		::$win restorecursor

		set userData \
		    [list $col $data(targetCol) $sourceColName $targetColName]
		genVirtualEvent $win <<TablelistColumnMoved>> $userData

		unset data(targetCol)
	    }
	}
    }

    set data(labelClicked) 0
}

#------------------------------------------------------------------------------
# tablelist::labelB3Down
#
# This procedure is invoked when mouse button 3 is pressed in a header label w
# of a tablelist widget.  If the Shift key was down when this event occured
# then the procedure restores the last static width of the given column;
# otherwise it configures the width of the given column to be just large enough
# to hold all the elements (including the label).
#------------------------------------------------------------------------------
proc tablelist::labelB3Down {w shiftPressed} {
    if {![parseLabelPath $w win col]} {
	return ""
    }

    upvar ::tablelist::ns${win}::data data
    if {!$data(isDisabled) &&
	$data(-resizablecolumns) && $data($col-resizable)} {
	#
	# doColConfig $col $win -width ... can take long
	#
	if {[::$win cget -showbusycursor]} { ::$win setbusycursor }
	if {$shiftPressed} {
	    doColConfig $col $win -width -$data($col-lastStaticWidth)
	} else {
	    doColConfig $col $win -width 0
	}
	::$win restorecursor

	genVirtualEvent $win <<TablelistColumnResized>> $col
    }
}

#------------------------------------------------------------------------------
# tablelist::labelDblB1
#
# This procedure is invoked when a header label w of a tablelist widget is
# double-clicked.  If the pointer is on the right border of the label then the
# procedure performs the same action as labelB3Down.
#------------------------------------------------------------------------------
proc tablelist::labelDblB1 {w x shiftPressed} {
    if {![parseLabelPath $w win col]} {
	return ""
    }

    upvar ::tablelist::ns${win}::data data
    if {!$data(isDisabled) && [inResizeArea $w $x col] &&
	$data(-resizablecolumns) && $data($col-resizable)} {
	#
	# doColConfig $col $win -width ... can take long
	#
	if {[::$win cget -showbusycursor]} { ::$win setbusycursor }
	if {$shiftPressed} {
	    doColConfig $col $win -width -$data($col-lastStaticWidth)
	} else {
	    doColConfig $col $win -width 0
	}
	::$win restorecursor

	genVirtualEvent $win <<TablelistColumnResized>> $col
    }
}

#------------------------------------------------------------------------------
# tablelist::escape
#
# This procedure is invoked to process <Escape> events in the toplevel window
# containing the tablelist widget win during a column resize or move operation.
# The procedure cancels the action in progress and, in case of column resizing,
# it restores the initial width of the respective column.
#------------------------------------------------------------------------------
proc tablelist::escape {win col} {
    upvar ::tablelist::ns${win}::data data
    set w $data(hdrTxtFrmLbl)$col
    if {[info exists data(colBeingResized)]} {	;# resize operation in progress
	configLabel $w -cursor $data(-cursor)
	update idletasks
	if {[winfo exists $data(focus)]} {
	    focus $data(focus)
	}
	bind $data(topWin) <Escape> $data(topEscBinding)
	set data(labelClicked) 0
	set col $data(colBeingResized)
	set idx [expr {3*$col}]
	setupColumns $win [lreplace $data(-columns) $idx $idx \
				    $data(configColWidth)] 0
	redisplayCol $win $col $data(topRow) $data(btmRow)
	unset data(colBeingResized)
	$data(body) tag remove visibleLines 1.0 end
	$data(body) tag configure visibleLines -tabs {}
	adjustColumns $win {} 1
	updateColors $win
    } elseif {!$data(inClickedLabel)} {
	configLabel $w -cursor $data(-cursor)
	$data(hdrTxtFrmCanv)$col configure -cursor $data(-cursor)
	if {[winfo exists $data(focus)]} {
	    focus $data(focus)
	}
	bind $data(topWin) <Escape> $data(topEscBinding)
	place forget $data(colGap)
	lower $data(colGap)				;# necessary on aqua
	array unset data targetCol
	if {[info exists data(X)]} {
	    unset data(X)
	    after cancel $data(afterId)
	    set data(afterId) ""
	}
	set data(labelClicked) 0
    }
}

#------------------------------------------------------------------------------
# tablelist::horizAutoScan
#
# This procedure is invoked when the mouse leaves the scrollable part of a
# tablelist widget's header frame while button 1 is down.  It scrolls the
# header and reschedules itself as an after command so that the header
# continues to scroll until the mouse moves back into the window or the mouse
# button is released.
#------------------------------------------------------------------------------
proc tablelist::horizAutoScan win {
    if {[destroyed $win]} {
	return ""
    }

    upvar ::tablelist::ns${win}::data data
    if {![info exists data(X)]} {
	return ""
    }

    set X $data(X)
    set hdrX [winfo rootx $data(hdr)]
    if {$data(-titlecolumns) == 0 || ![winfo viewable $data(vsep)]} {
	set leftX $hdrX
    } else {
	set leftX [expr {[winfo rootx $data(vsep)] + 1}]
    }
    set rightX [expr {$hdrX + [winfo width $data(hdr)]}]
    if {$data(-titlecolumns) == 0} {
	set units 2
	set ms 50
    } else {
	set units 1
	set ms 250
    }

    if {$X >= $rightX} {
	::$win xview scroll $units units
    } elseif {$X < $leftX} {
	::$win xview scroll -$units units
    } else {
	return ""
    }

    set data(afterId) [after $ms [list tablelist::horizAutoScan $win]]
}

#------------------------------------------------------------------------------
# tablelist::inResizeArea
#
# Checks whether the given x coordinate relative to a header label w of a
# tablelist widget is in the resize area of that label or of the one to its
# left.
#------------------------------------------------------------------------------
proc tablelist::inResizeArea {w x colName} {
    if {![parseLabelPath $w win1 _col]} {
	return 0
    }

    upvar $colName col
    variable scaled4
    if {$x >= [winfo width $w] - $scaled4 - 1} {
	set col $_col
	return 1
    } elseif {$x < $scaled4 + 1} {
	set X [expr {[winfo rootx $w] - 3}]
	set contW [winfo containing -displayof $w $X [winfo rooty $w]]
	if {[parseLabelPath $contW win2 _col] && $win2 eq $win1} {
	    set col $_col
	    return 1
	} else {
	    return 0
	}
    } else {
	return 0
    }
}

#------------------------------------------------------------------------------
# tablelist::labelModifB1Down
#
# This procedure is invoked when mouse button 1 is pressed in a header label w
# of a tablelist widget, with the Alt/Meta/Command key down.  It begins the
# process of making a column-wise selection in the widget.
#------------------------------------------------------------------------------
proc tablelist::labelModifB1Down {w X} {
    if {![parseLabelPath $w win col]} {
	return ""
    }

    upvar ::tablelist::ns${win}::data data
    if {$data(isDisabled) || $data(-selecttype) ne "cell"} {
	return ""
    }

    set data(labelModifClicked) 1
    set data(X) $X

    ::$win cellselection clear 0,0 end
    selectColRange $win $col $col
    ::$win cellselection anchor [firstSelCellOfCol $win $col]

    variable priv
    set priv(selection) {}
    set priv(prevRow) $data(lastRow)
    set priv(prevCol) $col

    genTablelistSelectEvent $win
}

#------------------------------------------------------------------------------
# tablelist::labelModifB1Motion
#
# This procedure is invoked to process mouse motion events in a header label w
# of the tablelist widget win if mouse button 1 was previously clicked in some
# header label, with the Alt/Meta/Command key down.  It extends the column-wise
# selection in the widget.  Invoked from within labelB1Motion and
# labelModifShiftB1Down.
#------------------------------------------------------------------------------
proc tablelist::labelModifB1Motion {win w X} {
    upvar ::tablelist::ns${win}::data data
    if {$data(-selecttype) ne "cell"} {
	return ""
    }

    set row $data(lastRow)
    set x [expr {$X - [winfo rootx $win]}]
    set col [::$win columnindex @$x,0]

    variable priv
    set prRow $priv(prevRow)
    set prCol $priv(prevCol)
    if {$row == $prRow && $col == $prCol} {
	return ""
    }

    if {$prRow eq "" || $prCol eq ""} {
	set prRow $row
	set prcol $col
	selectColRange $win $col $col
    }

    set ancCol $data(anchorCol)
    if {[isColSelected $win $ancCol]} {
	deselectColRange $win $prCol $col
	selectColRange $win $ancCol $col
    } else {
	deselectColRange $win $prCol $col
	deselectColRange $win $ancCol $col
    }

    if {[::$win cget -showbusycursor]} { ::$win setbusycursor }
    for {set c 0} {$c < $data(colCount)} {incr c} {	;# can take long
	if {(($c >= $prCol && $c < $col && $c < $ancCol) ||
	     ($c <= $prCol && $c > $col && $c > $ancCol)) &&
	    [wasColSelected $win $c]} {
	    selectColRange $win $c $c
	}
    }
    ::$win restorecursor

    set priv(prevRow) $row
    set priv(prevCol) $col

    genTablelistSelectEvent $win
}

#------------------------------------------------------------------------------
# tablelist::labelModifB1Up
#
# This procedure is invoked when mouse button 1 is released, if it was
# previously clicked in a header label w of a tablelist widget win, with the
# Alt/Meta/Command key down.  It activates the last cell of the nearest column.
# Invoked from within labelB1Up.
#------------------------------------------------------------------------------
proc tablelist::labelModifB1Up {win w X} {
    upvar ::tablelist::ns${win}::data data
    if {$data(-selecttype) ne "cell"} {
	return ""
    }

    set x [expr {$X - [winfo rootx $win]}]
    set col [::$win columnindex @$x,0]
    ::$win activatecell last,$col
    genTablelistActivateEvent $win

    set data(labelModifClicked) 0
}

#------------------------------------------------------------------------------
# tablelist::labelModifShiftB1Down
#
# This procedure is invoked when mouse button 1 is pressed in a header label w
# of a tablelist widget, with the Alt/Meta/Command and Shift keys down.  It
# begins the process of extending the column-wise selection in the widget.
#------------------------------------------------------------------------------
proc tablelist::labelModifShiftB1Down {w X} {
    if {![parseLabelPath $w win col]} {
	return ""
    }

    upvar ::tablelist::ns${win}::data data
    if {$data(isDisabled) || $data(-selecttype) ne "cell"} {
	return ""
    }

    set data(labelModifClicked) 1
    set data(X) $X

    if {[isColSelected $win $data(anchorCol)]} {
	labelModifB1Motion $win $w $X
    } else {
	labelModifB1Down $w $X
    }
}

#------------------------------------------------------------------------------
# tablelist::labelModifCtrlB1Down
#
# This procedure is invoked when mouse button 1 is pressed in a header label w
# of a tablelist widget, with the Alt/Meta/Command and Control keys down.  It
# begins the process of toggling the column-wise selection in the widget.
#------------------------------------------------------------------------------
proc tablelist::labelModifCtrlB1Down {w X} {
    if {![parseLabelPath $w win col]} {
	return ""
    }

    upvar ::tablelist::ns${win}::data data
    if {$data(isDisabled) || $data(-selecttype) ne "cell"} {
	return ""
    }

    set data(labelModifClicked) 1
    set data(X) $X

    if {[::$win cget -showbusycursor]} { ::$win setbusycursor }
    variable priv
    set priv(selection) [::$win curcellselection]  	;# can take long
    ::$win restorecursor

    set priv(prevRow) $data(lastRow)
    set priv(prevCol) $col

    if {[isColSelected $win $col]} {
	deselectColRange $win $col $col
	::$win cellselection anchor 0,$col
    } else {
	selectColRange $win $col $col
	::$win cellselection anchor [firstSelCellOfCol $win $col]
    }

    genTablelistSelectEvent $win
}

#------------------------------------------------------------------------------
# tablelist::selectColRange
#
# Selects the cells of the specified tablelist column range.
#------------------------------------------------------------------------------
proc tablelist::selectColRange {win col1 col2} {
    #
    # Swap the column numbers if necessary
    #
    if {$col2 < $col1} {
	set tmp $col1
	set col1 $col2
	set col2 $tmp
    }

    upvar ::tablelist::ns${win}::data data
    for {set col $col1} {$col <= $col2} {incr col} {
	set cmd ""
	if {[info exists data($col-selectfiltercommand)]} {
	    set cmd $data($col-selectfiltercommand)
	} elseif {$data(-selectfiltercommand) ne ""} {
	    set cmd $data(-selectfiltercommand)
	}

	if {$cmd eq ""} {
	    ::$win cellselection set 0,$col last,$col
	} else {
	    set rowList [uplevel #0 $cmd [list $win $col]]
	    set cellIdxList {}
	    foreach row $rowList {
		lappend cellIdxList $row,$col
	    }
	    ::$win cellselection set $cellIdxList
	}
    }
}

#------------------------------------------------------------------------------
# tablelist::deselectColRange
#
# Deselects the cells of the specified tablelist column range.
#------------------------------------------------------------------------------
proc tablelist::deselectColRange {win col1 col2} {
    ::$win cellselection clear 0,$col1 last,$col2
}

#------------------------------------------------------------------------------
# tablelist::firstSelCellOfCol
#
# Returns the index of the first selected cell of the specified tablelist
# column.
#------------------------------------------------------------------------------
proc tablelist::firstSelCellOfCol {win col} {
    set itemCount [::$win size]
    for {set row 0} {$row < $itemCount} {incr row} {
	if {[::$win cellselection includes $row,$col]} {
	    return $row,$col
	}
    }

    return -1,$col
}

#------------------------------------------------------------------------------
# tablelist::isColSelected
#
# Checks whether any cell of the specified tablelist column is selected.
#------------------------------------------------------------------------------
proc tablelist::isColSelected {win col} {
    set itemCount [::$win size]
    for {set row 0} {$row < $itemCount} {incr row} {
	if {[::$win cellselection includes $row,$col]} {
	    return 1
	}
    }

    return 0
}

#------------------------------------------------------------------------------
# tablelist::wasColSelected
#
# Checks whether any cell of the specified tablelist column was selected before
# the current selection operation (such as a mouse drag) started.
#------------------------------------------------------------------------------
proc tablelist::wasColSelected {win col} {
    variable priv
    set itemCount [::$win size]
    for {set row 0} {$row < $itemCount} {incr row} {
	if {[lsearch -exact $priv(selection) $row,$col] >= 0} {
	    return 1
	}
    }

    return 0
}
