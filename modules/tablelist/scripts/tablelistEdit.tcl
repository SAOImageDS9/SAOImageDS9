#==============================================================================
# Contains the implementation of interactive cell editing in tablelist widgets.
#
# Structure of the module:
#   - Namespace initialization
#   - Public procedures related to interactive cell editing
#   - Private procedures implementing the interactive cell editing
#   - Private procedures used in bindings related to interactive cell editing
#
# Copyright (c) 2003-2024  Csaba Nemethi (E-mail: csaba.nemethi@t-online.de)
#==============================================================================

#
# Namespace initialization
# ========================
#

namespace eval tablelist {
    #
    # Register the Tk core widgets entry, text, checkbutton,
    # menubutton, and spinbox for interactive cell editing
    #
    proc addTkCoreWidgets {} {
	variable editWin
	variable pu

	set name entry
	array set editWin [list \
	    $name-creationCmd	"$name %W -width 0" \
	    $name-putValueCmd	"%W delete 0 end; %W insert 0 %T" \
	    $name-getValueCmd	"%W get" \
	    $name-putTextCmd	"%W delete 0 end; %W insert 0 %T" \
	    $name-getTextCmd	"%W get" \
	    $name-putListCmd	"" \
	    $name-getListCmd	"" \
	    $name-selectCmd	"" \
	    $name-invokeCmd	"" \
	    $name-fontOpt	-font \
	    $name-useFormat	1 \
	    $name-useReqWidth	0 \
	    $name-usePadX	0 \
	    $name-isEntryLike	1 \
	    $name-focusWin	%W \
	    $name-reservedKeys	{Left Right} \
	]

	set name text
	array set editWin [list \
	    $name-creationCmd	"$name %W -padx 2 -pady 2 -wrap none" \
	    $name-putValueCmd	"%W delete 1.0 end; %W insert 1.0 %T" \
	    $name-getValueCmd	"%W get 1.0 end-1$pu" \
	    $name-putTextCmd	"%W delete 1.0 end; %W insert 1.0 %T" \
	    $name-getTextCmd	"%W get 1.0 end-1$pu" \
	    $name-putListCmd	"" \
	    $name-getListCmd	"" \
	    $name-selectCmd	"" \
	    $name-invokeCmd	"" \
	    $name-fontOpt	-font \
	    $name-useFormat	1 \
	    $name-useReqWidth	0 \
	    $name-usePadX	0 \
	    $name-isEntryLike	1 \
	    $name-focusWin	%W \
	    $name-reservedKeys	{Left Right Up Down Prior Next
				 Control-Home Control-End Meta-b Meta-f
				 Control-p Control-n Meta-less Meta-greater} \
	]

	set name checkbutton
	array set editWin [list \
	    $name-creationCmd	"createCheckbutton %W" \
	    $name-putValueCmd	{set [%W cget -variable] %T} \
	    $name-getValueCmd	{set [%W cget -variable]} \
	    $name-putTextCmd	{set [%W cget -variable] %T} \
	    $name-getTextCmd	{set [%W cget -variable]} \
	    $name-putListCmd	"" \
	    $name-getListCmd	"" \
	    $name-selectCmd	"" \
	    $name-invokeCmd	"%W invoke" \
	    $name-fontOpt	"" \
	    $name-useFormat	0 \
	    $name-useReqWidth	1 \
	    $name-usePadX	0 \
	    $name-isEntryLike	0 \
	    $name-focusWin	%W \
	    $name-reservedKeys	{} \
	]

	set name menubutton
	array set editWin [list \
	    $name-creationCmd	"createMenubutton %W" \
	    $name-putValueCmd	{set [%W cget -textvariable] %T} \
	    $name-getValueCmd	"%W cget -text" \
	    $name-putTextCmd	{set [%W cget -textvariable] %T} \
	    $name-getTextCmd	"%W cget -text" \
	    $name-putListCmd	"" \
	    $name-getListCmd	"" \
	    $name-selectCmd	"" \
	    $name-invokeCmd	"event generate %W <<Invoke>>" \
	    $name-fontOpt	-font \
	    $name-useFormat	1 \
	    $name-useReqWidth	0 \
	    $name-usePadX	1 \
	    $name-isEntryLike	0 \
	    $name-focusWin	%W \
	    $name-reservedKeys	{} \
	]

	set name spinbox
	array set editWin [list \
	    $name-creationCmd	"$name %W -width 0" \
	    $name-putValueCmd	"%W delete 0 end; %W insert 0 %T" \
	    $name-getValueCmd	"%W get" \
	    $name-putTextCmd	"%W delete 0 end; %W insert 0 %T" \
	    $name-getTextCmd	"%W get" \
	    $name-putListCmd	"" \
	    $name-getListCmd	"" \
	    $name-selectCmd	"" \
	    $name-invokeCmd	"" \
	    $name-fontOpt	-font \
	    $name-useFormat	1 \
	    $name-useReqWidth	0 \
	    $name-usePadX	1 \
	    $name-isEntryLike	1 \
	    $name-focusWin	%W \
	    $name-reservedKeys	{Left Right Up Down} \
	]
    }
    addTkCoreWidgets

    #
    # Register the tile widgets ttk::entry, ttk::spinbox, ttk::combobox,
    # ttk::checkbutton, and ttk::menubutton for interactive cell editing
    #
    proc addTileWidgets {} {
	variable editWin

	set name ttk::entry
	array set editWin [list \
	    $name-creationCmd	"createTileEntry %W" \
	    $name-putValueCmd	"%W delete 0 end; %W insert 0 %T" \
	    $name-getValueCmd	"%W get" \
	    $name-putTextCmd	"%W delete 0 end; %W insert 0 %T" \
	    $name-getTextCmd	"%W get" \
	    $name-putListCmd	"" \
	    $name-getListCmd	"" \
	    $name-selectCmd	"" \
	    $name-invokeCmd	"" \
	    $name-fontOpt	-font \
	    $name-useFormat	1 \
	    $name-useReqWidth	0 \
	    $name-usePadX	0 \
	    $name-isEntryLike	1 \
	    $name-focusWin	%W \
	    $name-reservedKeys	{Left Right} \
	]

	set name ttk::spinbox
	array set editWin [list \
	    $name-creationCmd	"createTileSpinbox %W" \
	    $name-putValueCmd	"%W delete 0 end; %W insert 0 %T" \
	    $name-getValueCmd	"%W get" \
	    $name-putTextCmd	"%W delete 0 end; %W insert 0 %T" \
	    $name-getTextCmd	"%W get" \
	    $name-putListCmd	"" \
	    $name-getListCmd	"" \
	    $name-selectCmd	"" \
	    $name-invokeCmd	"" \
	    $name-fontOpt	-font \
	    $name-useFormat	1 \
	    $name-useReqWidth	0 \
	    $name-usePadX	1 \
	    $name-isEntryLike	1 \
	    $name-focusWin	%W \
	    $name-reservedKeys	{Left Right Up Down} \
	]

	set name ttk::combobox
	array set editWin [list \
	    $name-creationCmd	"createTileCombobox %W" \
	    $name-putValueCmd	"%W set %T" \
	    $name-getValueCmd	"%W get" \
	    $name-putTextCmd	"%W set %T" \
	    $name-getTextCmd	"%W get" \
	    $name-putListCmd	"" \
	    $name-getListCmd	"" \
	    $name-selectCmd	"" \
	    $name-invokeCmd	"event generate %W <Button-1>" \
	    $name-fontOpt	-font \
	    $name-useFormat	1 \
	    $name-useReqWidth	0 \
	    $name-usePadX	1 \
	    $name-isEntryLike	1 \
	    $name-focusWin	%W \
	    $name-reservedKeys	{Left Right Up Down} \
	]

	set name ttk::checkbutton
	array set editWin [list \
	    $name-creationCmd	"createTileCheckbutton %W" \
	    $name-putValueCmd	{set [%W cget -variable] %T} \
	    $name-getValueCmd	{set [%W cget -variable]} \
	    $name-putTextCmd	{set [%W cget -variable] %T} \
	    $name-getTextCmd	{set [%W cget -variable]} \
	    $name-putListCmd	"" \
	    $name-getListCmd	"" \
	    $name-selectCmd	"" \
	    $name-invokeCmd	{%W instate !pressed {%W invoke}} \
	    $name-fontOpt	"" \
	    $name-useFormat	0 \
	    $name-useReqWidth	1 \
	    $name-usePadX	0 \
	    $name-isEntryLike	0 \
	    $name-focusWin	%W \
	    $name-reservedKeys	{} \
	]

	set name ttk::menubutton
	array set editWin [list \
	    $name-creationCmd	"createTileMenubutton %W" \
	    $name-putValueCmd	{set [%W cget -textvariable] %T} \
	    $name-getValueCmd	"%W cget -text" \
	    $name-putTextCmd	{set [%W cget -textvariable] %T} \
	    $name-getTextCmd	"%W cget -text" \
	    $name-putListCmd	"" \
	    $name-getListCmd	"" \
	    $name-selectCmd	"" \
	    $name-invokeCmd	"event generate %W <<Invoke>>" \
	    $name-fontOpt	"" \
	    $name-useFormat	1 \
	    $name-useReqWidth	0 \
	    $name-usePadX	1 \
	    $name-isEntryLike	0 \
	    $name-focusWin	%W \
	    $name-reservedKeys	{} \
	]

	foreach {name value} [array get editWin ttk::*-creationCmd] {
	    set editWin(::$name) $value
	}
    }
    if {[llength [package versions tile]] > 0} {
	addTileWidgets
    }
}

#
# Public procedures related to interactive cell editing
# =====================================================
#

#------------------------------------------------------------------------------
# tablelist::addBWidgetEntry
#
# Registers the Entry widget from the BWidget package for interactive cell
# editing.
#------------------------------------------------------------------------------
proc tablelist::addBWidgetEntry {{name Entry}} {
    checkEditWinName $name

    variable editWin
    array set editWin [list \
	$name-creationCmd	"Entry %W -width 0" \
	$name-putValueCmd	"%W delete 0 end; %W insert 0 %T" \
	$name-getValueCmd	"%W get" \
	$name-putTextCmd	"%W delete 0 end; %W insert 0 %T" \
	$name-getTextCmd	"%W get" \
	$name-putListCmd	"" \
	$name-getListCmd	"" \
	$name-selectCmd		"" \
	$name-invokeCmd		"" \
	$name-fontOpt		-font \
	$name-useFormat		1 \
	$name-useReqWidth	0 \
	$name-usePadX		0 \
	$name-isEntryLike	1 \
	$name-focusWin		%W \
	$name-reservedKeys	{Left Right} \
    ]

    return $name
}

#------------------------------------------------------------------------------
# tablelist::addBWidgetSpinBox
#
# Registers the SpinBox widget from the BWidget package for interactive cell
# editing.
#------------------------------------------------------------------------------
proc tablelist::addBWidgetSpinBox {{name SpinBox}} {
    checkEditWinName $name

    variable editWin
    array set editWin [list \
	$name-creationCmd	"createBWidgetSpinBox %W" \
	$name-putValueCmd	"%W configure -text %T" \
	$name-getValueCmd	"%W cget -text" \
	$name-putTextCmd	"%W configure -text %T" \
	$name-getTextCmd	"%W cget -text" \
	$name-putListCmd	"" \
	$name-getListCmd	"" \
	$name-selectCmd		"" \
	$name-invokeCmd		"" \
	$name-fontOpt		-font \
	$name-useFormat		1 \
	$name-useReqWidth	0 \
	$name-usePadX		1 \
	$name-isEntryLike	1 \
	$name-focusWin		%W.e \
	$name-reservedKeys	{Left Right Up Down Prior Next} \
    ]

    return $name
}

#------------------------------------------------------------------------------
# tablelist::addBWidgetComboBox
#
# Registers the ComboBox widget from the BWidget package for interactive cell
# editing.
#------------------------------------------------------------------------------
proc tablelist::addBWidgetComboBox {{name ComboBox}} {
    checkEditWinName $name

    variable editWin
    array set editWin [list \
	$name-creationCmd	"createBWidgetComboBox %W" \
	$name-putValueCmd	"%W configure -text %T" \
	$name-getValueCmd	"%W cget -text" \
	$name-putTextCmd	"%W configure -text %T" \
	$name-getTextCmd	"%W cget -text" \
	$name-putListCmd	"" \
	$name-getListCmd	"" \
	$name-selectCmd		"" \
	$name-invokeCmd		"%W.a invoke" \
	$name-fontOpt		-font \
	$name-useFormat		1 \
	$name-useReqWidth	0 \
	$name-usePadX		1 \
	$name-isEntryLike	1 \
	$name-focusWin		%W.e \
	$name-reservedKeys	{Left Right Up Down} \
    ]

    return $name
}

#------------------------------------------------------------------------------
# tablelist::addIncrEntryfield
#
# Registers the entryfield widget from the Iwidgets package for interactive
# cell editing.
#------------------------------------------------------------------------------
proc tablelist::addIncrEntryfield {{name entryfield}} {
    checkEditWinName $name

    variable editWin
    array set editWin [list \
	$name-creationCmd	"iwidgets::entryfield %W -width 0" \
	$name-putValueCmd	"%W clear; %W insert 0 %T" \
	$name-getValueCmd	"%W get" \
	$name-putTextCmd	"%W clear; %W insert 0 %T" \
	$name-getTextCmd	"%W get" \
	$name-putListCmd	"" \
	$name-getListCmd	"" \
	$name-selectCmd		"" \
	$name-invokeCmd		"" \
	$name-fontOpt		-textfont \
	$name-useFormat		1 \
	$name-useReqWidth	0 \
	$name-usePadX		0 \
	$name-isEntryLike	1 \
	$name-focusWin		{[%W component entry]} \
	$name-reservedKeys	{Left Right} \
    ]

    return $name
}

#------------------------------------------------------------------------------
# tablelist::addIncrDateTimeWidget
#
# Registers the datefield, dateentry, timefield, or timeentry widget from the
# Iwidgets package, with or without the -clicks option for its get subcommand,
# for interactive cell editing.
#------------------------------------------------------------------------------
proc tablelist::addIncrDateTimeWidget {widgetType args} {
    if {![regexp {^(datefield|dateentry|timefield|timeentry)$} $widgetType]} {
	return -code error \
	       "bad widget type \"$widgetType\": must be\
		datefield, dateentry, timefield, or timeentry"
    }

    switch [llength $args] {
	0 {
	    set useClicks 0
	    set name $widgetType
	}

	1 {
	    set arg [lindex $args 0]
	    if {$arg eq "-seconds"} {
		set useClicks 1
		set name $widgetType
	    } else {
		set useClicks 0
		set name $arg
	    }
	}

	2 {
	    set arg0 [lindex $args 0]
	    if {$arg0 ne "-seconds"} {
		return -code error "bad option \"$arg0\": must be -seconds"
	    }

	    set useClicks 1
	    set name [lindex $args 1]
	}

	default {
	    mwutil::wrongNumArgs "addIncrDateTimeWidget\
		    datefield|dateentry|timefield|timeentry ?-seconds? ?name?"
	}
    }
    checkEditWinName $name

    variable editWin
    array set editWin [list \
	$name-creationCmd	"iwidgets::$widgetType %W" \
	$name-putValueCmd	"%W show %T" \
	$name-getValueCmd	"%W get" \
	$name-putTextCmd	"%W show %T" \
	$name-getTextCmd	"%W get" \
	$name-putListCmd	"" \
	$name-getListCmd	"" \
	$name-selectCmd		"" \
	$name-invokeCmd		"" \
	$name-fontOpt		-textfont \
	$name-useReqWidth	1 \
	$name-usePadX		[string match "*entry" $widgetType] \
	$name-useFormat		1 \
	$name-isEntryLike	1 \
	$name-reservedKeys	{Left Right Up Down} \
    ]
    switch $widgetType {
	dateentry {
	    set editWin($name-creationCmd) "createIncrDateentry %W"

	    #
	    # Patch the iwidgets::Dateentry::_releaseGrab method
	    #
	    itcl::body iwidgets::Dateentry::_releaseGrab {} {
		focus $itk_component(date)	;# added; the rest is unchanged
		grab release $itk_component(popup)
		$itk_component(iconbutton) configure -relief raised
		destroy $itk_component(popup)
		bind $itk_component(iconbutton) <Button-1> \
		     [itcl::code $this _popup]
	    }
	}
	timeentry {
	    set editWin($name-creationCmd) "createIncrTimeentry %W"

	    #
	    # Patch the iwidgets::Timeentry::_releaseGrab method
	    #
	    itcl::body iwidgets::Timeentry::_releaseGrab {} {
		focus $itk_component(time)	;# added; the rest is unchanged
		grab release $itk_component(popup)
		$itk_component(iconbutton) configure -relief raised
		destroy $itk_component(popup)
		bind $itk_component(iconbutton) <Button-1> \
		     [itcl::code $this _popup]
	    }
	}
    }
    if {$useClicks} {
	lappend editWin($name-getValueCmd) -clicks
	set editWin($name-useFormat) 0
    }
    if {[string match "date*" $widgetType]} {
	set editWin($name-focusWin) {[%W component date]}
    } else {
	set editWin($name-focusWin) {[%W component time]}
    }

    return $name
}

#------------------------------------------------------------------------------
# tablelist::addIncrSpinner
#
# Registers the spinner widget from the Iwidgets package for interactive cell
# editing.
#------------------------------------------------------------------------------
proc tablelist::addIncrSpinner {{name spinner}} {
    checkEditWinName $name

    variable editWin
    array set editWin [list \
	$name-creationCmd	"iwidgets::spinner %W -width 0" \
	$name-putValueCmd	"%W clear; %W insert 0 %T" \
	$name-getValueCmd	"%W get" \
	$name-putTextCmd	"%W clear; %W insert 0 %T" \
	$name-getTextCmd	"%W get" \
	$name-putListCmd	"" \
	$name-getListCmd	"" \
	$name-selectCmd		"" \
	$name-invokeCmd		"" \
	$name-fontOpt		-textfont \
	$name-useFormat		1 \
	$name-useReqWidth	0 \
	$name-usePadX		1 \
	$name-isEntryLike	1 \
	$name-focusWin		{[%W component entry]} \
	$name-reservedKeys	{Left Right} \
    ]

    return $name
}

#------------------------------------------------------------------------------
# tablelist::addIncrSpinint
#
# Registers the spinint widget from the Iwidgets package for interactive cell
# editing.
#------------------------------------------------------------------------------
proc tablelist::addIncrSpinint {{name spinint}} {
    checkEditWinName $name

    variable editWin
    array set editWin [list \
	$name-creationCmd	"iwidgets::spinint %W -width 0" \
	$name-putValueCmd	"%W clear; %W insert 0 %T" \
	$name-getValueCmd	"%W get" \
	$name-putTextCmd	"%W clear; %W insert 0 %T" \
	$name-getTextCmd	"%W get" \
	$name-putListCmd	"" \
	$name-getListCmd	"" \
	$name-selectCmd		"" \
	$name-invokeCmd		"" \
	$name-fontOpt		-textfont \
	$name-useFormat		1 \
	$name-useReqWidth	0 \
	$name-usePadX		1 \
	$name-isEntryLike	1 \
	$name-focusWin		{[%W component entry]} \
	$name-reservedKeys	{Left Right} \
    ]

    return $name
}

#------------------------------------------------------------------------------
# tablelist::addIncrCombobox
#
# Registers the combobox widget from the Iwidgets package for interactive cell
# editing.
#------------------------------------------------------------------------------
proc tablelist::addIncrCombobox {{name combobox}} {
    checkEditWinName $name

    variable editWin
    array set editWin [list \
	$name-creationCmd	"createIncrCombobox %W" \
	$name-putValueCmd	"%W clear entry; %W insert entry 0 %T" \
	$name-getValueCmd	"%W get" \
	$name-putTextCmd	"%W clear entry; %W insert entry 0 %T" \
	$name-getTextCmd	"%W get" \
	$name-putListCmd	{eval [list %W insert list end] %L} \
	$name-getListCmd	"%W component list get 0 end" \
	$name-selectCmd		"%W selection set %I" \
	$name-invokeCmd		"%W invoke" \
	$name-fontOpt		-textfont \
	$name-useFormat		1 \
	$name-useReqWidth	0 \
	$name-usePadX		1 \
	$name-isEntryLike	1 \
	$name-focusWin		{[%W component entry]} \
	$name-reservedKeys	{Left Right Up Down Control-p Control-n} \
    ]

    return $name
}

#------------------------------------------------------------------------------
# tablelist::addCtext
#
# Registers the ctext widget for interactive cell editing.
#------------------------------------------------------------------------------
proc tablelist::addCtext {{name ctext}} {
    checkEditWinName $name

    variable editWin
    variable pu
    array set editWin [list \
	$name-creationCmd	"ctext %W -padx 2 -pady 2 -wrap none" \
	$name-putValueCmd	"%W delete 1.0 end; %W insert 1.0 %T" \
	$name-getValueCmd	"%W get 1.0 end-1$pu" \
	$name-putTextCmd	"%W delete 1.0 end; %W insert 1.0 %T" \
	$name-getTextCmd	"%W get 1.0 end-1$pu" \
	$name-putListCmd	"" \
	$name-getListCmd	"" \
	$name-selectCmd		"" \
	$name-invokeCmd		"" \
	$name-fontOpt		-font \
	$name-useFormat		1 \
	$name-useReqWidth	0 \
	$name-usePadX		0 \
	$name-isEntryLike	1 \
	$name-focusWin		%W.t \
	$name-reservedKeys	{Left Right Up Down Prior Next
				 Control-Home Control-End Meta-b Meta-f
				 Control-p Control-n Meta-less Meta-greater} \
    ]

    return $name
}

#------------------------------------------------------------------------------
# tablelist::addOakleyCombobox
#
# Registers Bryan Oakley's combobox widget for interactive cell editing.
#------------------------------------------------------------------------------
proc tablelist::addOakleyCombobox {{name combobox}} {
    checkEditWinName $name

    variable editWin
    array set editWin [list \
	$name-creationCmd	"createOakleyCombobox %W" \
	$name-putValueCmd	"%W delete 0 end; %W insert 0 %T" \
	$name-getValueCmd	"%W get" \
	$name-putTextCmd	"%W delete 0 end; %W insert 0 %T" \
	$name-getTextCmd	"%W get" \
	$name-putListCmd	{eval [list %W list insert end] %L} \
	$name-getListCmd	"%W list get 0 end" \
	$name-selectCmd		"%W select %I" \
	$name-invokeCmd		"%W open" \
	$name-fontOpt		-font \
	$name-useFormat		1 \
	$name-useReqWidth	0 \
	$name-usePadX		1 \
	$name-isEntryLike	1 \
	$name-focusWin		%W.entry \
	$name-reservedKeys	{Left Right Up Down Prior Next} \
    ]

    #
    # Patch the ::combobox::UpdateVisualAttributes procedure to make sure it
    # won't change the background and trough colors of the vertical scrollbar
    #
    catch {combobox::combobox}	;# enforces the evaluation of "combobox.tcl"
    if {[catch {rename ::combobox::UpdateVisualAttributes \
		::combobox::_UpdateVisualAttributes}] == 0} {
	proc ::combobox::UpdateVisualAttributes w {
	    set vsbBackground [$w.top.vsb cget -background]
	    set vsbTroughColor [$w.top.vsb cget -troughcolor]

	    ::combobox::_UpdateVisualAttributes $w

	    $w.top.vsb configure -background $vsbBackground
	    $w.top.vsb configure -troughcolor $vsbTroughColor
	}
    }

    return $name
}

#------------------------------------------------------------------------------
# tablelist::addDateMentry
#
# Registers the widget created by the mentry::dateMentry command from the
# Mentry package, with a given format and separator and with or without the
# "-gmt 1" option for the mentry::putClockVal and mentry::getClockVal commands,
# for interactive cell editing.
#------------------------------------------------------------------------------
proc tablelist::addDateMentry {fmt sep args} {
    #
    # Parse the fmt argument
    #
    if {![regexp {^([dmyY])([dmyY])([dmyY])$} $fmt dummy \
		 fields(0) fields(1) fields(2)]} {
	return -code error \
	       "bad format \"$fmt\": must be a string of length 3,\
		consisting of the letters d, m, and y or Y"
    }

    #
    # Check whether all the three date components are represented in fmt
    #
    for {set n 0} {$n < 3} {incr n} {
	set lfields($n) [string tolower $fields($n)]
    }
    if {$lfields(0) eq $lfields(1) || $lfields(0) eq $lfields(2) ||
	$lfields(1) eq $lfields(2)} {
	return -code error \
	       "bad format \"$fmt\": must have unique components for the\
		day, month, and year"
    }

    #
    # Parse the remaining arguments (if any)
    #
    switch [llength $args] {
	0 {
	    set useGMT 0
	    set name dateMentry
	}

	1 {
	    set arg [lindex $args 0]
	    if {$arg eq "-gmt"} {
		set useGMT 1
		set name dateMentry
	    } else {
		set useGMT 0
		set name $arg
	    }
	}

	2 {
	    set arg0 [lindex $args 0]
	    if {$arg0 ne "-gmt"} {
		return -code error "bad option \"$arg0\": must be -gmt"
	    }

	    set useGMT 1
	    set name [lindex $args 1]
	}

	default {
	    mwutil::wrongNumArgs "addDateMentry format separator ?-gmt? ?name?"
	}
    }
    checkEditWinName $name

    variable editWin
    array set editWin [list \
	$name-creationCmd	[list mentry::dateMentry %W $fmt $sep] \
	$name-putValueCmd	"mentry::putClockVal %T %W -gmt $useGMT" \
	$name-getValueCmd	"mentry::getClockVal %W -gmt $useGMT" \
	$name-putTextCmd	"" \
	$name-getTextCmd	"%W getstring" \
	$name-putListCmd	{eval [list %W put 0] %L} \
	$name-getListCmd	"%W getlist" \
	$name-selectCmd		"" \
	$name-invokeCmd		"" \
	$name-fontOpt		-font \
	$name-useFormat		0 \
	$name-useReqWidth	1 \
	$name-usePadX		1 \
	$name-isEntryLike	1 \
	$name-focusWin		"" \
	$name-reservedKeys	{Left Right Up Down Prior Next} \
    ]

    return $name
}

#------------------------------------------------------------------------------
# tablelist::addTimeMentry
#
# Registers the widget created by the mentry::timeMentry command from the
# Mentry package, with a given format and separator and with or without the
# "-gmt 1" option for the mentry::putClockVal and mentry::getClockVal commands,
# for interactive cell editing.
#------------------------------------------------------------------------------
proc tablelist::addTimeMentry {fmt sep args} {
    #
    # Parse the fmt argument
    #
    if {![regexp {^(H|I)(M)(S?)$} $fmt dummy fields(0) fields(1) fields(2)]} {
	return -code error \
	       "bad format \"$fmt\": must be a string of length 2 or 3\
		starting with H or I, followed by M and optionally by S"
    }

    #
    # Parse the remaining arguments (if any)
    #
    switch [llength $args] {
	0 {
	    set useGMT 0
	    set name timeMentry
	}

	1 {
	    set arg [lindex $args 0]
	    if {$arg eq "-gmt"} {
		set useGMT 1
		set name timeMentry
	    } else {
		set useGMT 0
		set name $arg
	    }
	}

	2 {
	    set arg0 [lindex $args 0]
	    if {$arg0 ne "-gmt"} {
		return -code error "bad option \"$arg0\": must be -gmt"
	    }

	    set useGMT 1
	    set name [lindex $args 1]
	}

	default {
	    mwutil::wrongNumArgs "addTimeMentry format separator ?-gmt? ?name?"
	}
    }
    checkEditWinName $name

    variable editWin
    array set editWin [list \
	$name-creationCmd	[list mentry::timeMentry %W $fmt $sep] \
	$name-putValueCmd	"mentry::putClockVal %T %W -gmt $useGMT" \
	$name-getValueCmd	"mentry::getClockVal %W -gmt $useGMT" \
	$name-putTextCmd	"" \
	$name-getTextCmd	"%W getstring" \
	$name-putListCmd	{eval [list %W put 0] %L} \
	$name-getListCmd	"%W getlist" \
	$name-selectCmd		"" \
	$name-invokeCmd		"" \
	$name-fontOpt		-font \
	$name-useFormat		0 \
	$name-useReqWidth	1 \
	$name-usePadX		1 \
	$name-isEntryLike	1 \
	$name-focusWin		"" \
	$name-reservedKeys	{Left Right Up Down Prior Next} \
    ]

    return $name
}

#------------------------------------------------------------------------------
# tablelist::addDateTimeMentry
#
# Registers the widget created by the mentry::dateTimeMentry command from the
# Mentry package, with a given format and given separators and with or without
# the "-gmt 1" option for the mentry::putClockVal and mentry::getClockVal
# commands, for interactive cell editing.
#------------------------------------------------------------------------------
proc tablelist::addDateTimeMentry {fmt dateSep timeSep args} {
    #
    # Parse the fmt argument
    #
    if {![regexp {^([dmyY])([dmyY])([dmyY])(H|I)(M)(S?)$} $fmt dummy \
		 fields(0) fields(1) fields(2) fields(3) fields(4) fields(5)]} {
	return -code error \
	       "bad format \"$fmt\": must be a string of length 5 or 6,\
		with the first 3 characters consisting of the letters d, m,\
		and y or Y, followed by H or I, then M, and optionally by S"
    }

    #
    # Check whether all the three date components are represented in fmt
    #
    for {set n 0} {$n < 3} {incr n} {
	set lfields($n) [string tolower $fields($n)]
    }
    if {$lfields(0) eq $lfields(1) || $lfields(0) eq $lfields(2) ||
	$lfields(1) eq $lfields(2)} {
	return -code error \
	       "bad format \"$fmt\": must have unique components for the\
		day, month, and year"
    }

    #
    # Parse the remaining arguments (if any)
    #
    switch [llength $args] {
	0 {
	    set useGMT 0
	    set name dateTimeMentry
	}

	1 {
	    set arg [lindex $args 0]
	    if {$arg eq "-gmt"} {
		set useGMT 1
		set name dateTimeMentry
	    } else {
		set useGMT 0
		set name $arg
	    }
	}

	2 {
	    set arg0 [lindex $args 0]
	    if {$arg0 ne "-gmt"} {
		return -code error "bad option \"$arg0\": must be -gmt"
	    }

	    set useGMT 1
	    set name [lindex $args 1]
	}

	default {
	    mwutil::wrongNumArgs "addDateTimeMentry format dateSeparator\
				  timeSeparator ?-gmt? ?name?"
	}
    }
    checkEditWinName $name

    variable editWin
    array set editWin [list \
	$name-creationCmd	[list mentry::dateTimeMentry %W $fmt \
				      $dateSep $timeSep] \
	$name-putValueCmd	"mentry::putClockVal %T %W -gmt $useGMT" \
	$name-getValueCmd	"mentry::getClockVal %W -gmt $useGMT" \
	$name-putTextCmd	"" \
	$name-getTextCmd	"%W getstring" \
	$name-putListCmd	{eval [list %W put 0] %L} \
	$name-getListCmd	"%W getlist" \
	$name-selectCmd		"" \
	$name-invokeCmd		"" \
	$name-fontOpt		-font \
	$name-useFormat		0 \
	$name-useReqWidth	1 \
	$name-usePadX		1 \
	$name-isEntryLike	1 \
	$name-focusWin		"" \
	$name-reservedKeys	{Left Right Up Down Prior Next} \
    ]

    return $name
}

#------------------------------------------------------------------------------
# tablelist::addFixedPointMentry
#
# Registers the widget created by the mentry::fixedPointMentry command from the
# Mentry package, with a given number of characters before and a given number
# of digits after the decimal point, with or without the -comma option, for
# interactive cell editing.
#------------------------------------------------------------------------------
proc tablelist::addFixedPointMentry {cnt1 cnt2 args} {
    #
    # Check the arguments cnt1 and cnt2
    #
    if {![isInteger $cnt1] || $cnt1 <= 0} {
	return -code error "expected positive integer but got \"$cnt1\""
    }
    if {![isInteger $cnt2] || $cnt2 <= 0} {
	return -code error "expected positive integer but got \"$cnt2\""
    }

    #
    # Parse the remaining arguments (if any)
    #
    switch [llength $args] {
	0 {
	    set useComma 0
	    set name fixedPointMentry_$cnt1.$cnt2
	}

	1 {
	    set arg [lindex $args 0]
	    if {$arg eq "-comma"} {
		set useComma 1
		set name fixedPointMentry_$cnt1,$cnt2
	    } else {
		set useComma 0
		set name $arg
	    }
	}

	2 {
	    set arg0 [lindex $args 0]
	    if {$arg0 ne "-comma"} {
		return -code error "bad option \"$arg0\": must be -comma"
	    }

	    set useComma 1
	    set name [lindex $args 1]
	}

	default {
	    mwutil::wrongNumArgs "addFixedPointMentry count1 count2\
				  ?-comma? ?name?"
	}
    }
    checkEditWinName $name

    variable editWin
    array set editWin [list \
	$name-creationCmd	[list mentry::fixedPointMentry %W $cnt1 $cnt2] \
	$name-putValueCmd	"mentry::putReal %T %W" \
	$name-getValueCmd	"mentry::getReal %W" \
	$name-putTextCmd	"" \
	$name-getTextCmd	"%W getstring" \
	$name-putListCmd	{eval [list %W put 0] %L} \
	$name-getListCmd	"%W getlist" \
	$name-selectCmd		"" \
	$name-invokeCmd		"" \
	$name-fontOpt		-font \
	$name-useFormat		0 \
	$name-useReqWidth	1 \
	$name-usePadX		1 \
	$name-isEntryLike	1 \
	$name-focusWin		"" \
	$name-reservedKeys	{Left Right} \
    ]
    if {$useComma} {
	lappend editWin($name-creationCmd) -comma
    }

    return $name
}

#------------------------------------------------------------------------------
# tablelist::addIPAddrMentry
#
# Registers the widget created by the mentry::ipAddrMentry command from the
# Mentry package for interactive cell editing.
#------------------------------------------------------------------------------
proc tablelist::addIPAddrMentry {{name ipAddrMentry}} {
    checkEditWinName $name

    variable editWin
    array set editWin [list \
	$name-creationCmd	"mentry::ipAddrMentry %W" \
	$name-putValueCmd	"mentry::putIPAddr %T %W" \
	$name-getValueCmd	"mentry::getIPAddr %W" \
	$name-putTextCmd	"" \
	$name-getTextCmd	"%W getstring" \
	$name-putListCmd	{eval [list %W put 0] %L} \
	$name-getListCmd	"%W getlist" \
	$name-selectCmd		"" \
	$name-invokeCmd		"" \
	$name-fontOpt		-font \
	$name-useFormat		0 \
	$name-useReqWidth	1 \
	$name-usePadX		1 \
	$name-isEntryLike	1 \
	$name-focusWin		"" \
	$name-reservedKeys	{Left Right Up Down Prior Next} \
    ]

    return $name
}

#------------------------------------------------------------------------------
# tablelist::addIPv6AddrMentry
#
# Registers the widget created by the mentry::ipv6AddrMentry command from the
# Mentry package for interactive cell editing.
#------------------------------------------------------------------------------
proc tablelist::addIPv6AddrMentry {{name ipv6AddrMentry}} {
    checkEditWinName $name

    variable editWin
    array set editWin [list \
	$name-creationCmd	"mentry::ipv6AddrMentry %W" \
	$name-putValueCmd	"mentry::putIPv6Addr %T %W" \
	$name-getValueCmd	"mentry::getIPv6Addr %W" \
	$name-putTextCmd	"" \
	$name-getTextCmd	"%W getstring" \
	$name-putListCmd	{eval [list %W put 0] %L} \
	$name-getListCmd	"%W getlist" \
	$name-selectCmd		"" \
	$name-invokeCmd		"" \
	$name-fontOpt		-font \
	$name-useFormat		0 \
	$name-useReqWidth	1 \
	$name-usePadX		1 \
	$name-isEntryLike	1 \
	$name-focusWin		"" \
	$name-reservedKeys	{Left Right Up Down Prior Next} \
    ]

    return $name
}

#
# Private procedures implementing the interactive cell editing
# ============================================================
#

#------------------------------------------------------------------------------
# tablelist::checkEditWinName
#
# Generates an error if the given edit window name is one of "entry", "text",
# "spinbox", "checkbutton", "menubutton", "ttk::entry", "ttk::spinbox",
# "ttk::combobox", "ttk::checkbutton", or "ttk::menubutton".
#------------------------------------------------------------------------------
proc tablelist::checkEditWinName name {
    if {[regexp {^(entry|text|spinbox|checkbutton|menubutton)$} $name]} {
	return -code error \
	       "edit window name \"$name\" is reserved for Tk $name widgets"
    }

    if {[regexp {^(::)?ttk::(entry|spinbox|combobox|checkbutton|menubutton)$} \
	 $name]} {
	return -code error \
	       "edit window name \"$name\" is reserved for tile $name widgets"
    }
}

#------------------------------------------------------------------------------
# tablelist::createCheckbutton
#
# Creates a checkbutton widget of the given path name for interactive cell
# editing in a tablelist widget.
#------------------------------------------------------------------------------
proc tablelist::createCheckbutton {w args} {
    makeCkbtn $w

    foreach {opt val} $args {
	switch -- $opt {
	    -state  { $w configure $opt $val }
	    default {}
	}
    }

    set win [getTablelistPath $w]
    $w configure -variable ::tablelist::ns${win}::data(editText)
}

#------------------------------------------------------------------------------
# tablelist::createMenubutton
#
# Creates a menubutton widget of the given path name for interactive cell
# editing in a tablelist widget.
#------------------------------------------------------------------------------
proc tablelist::createMenubutton {w args} {
    set win [getTablelistPath $w]
    menubutton $w -anchor w -indicatoron 1 -justify left -padx 2 -pady 2 \
	-relief raised -textvariable ::tablelist::ns${win}::data(editText)

    foreach {opt val} $args {
	$w configure $opt $val
    }

    variable winSys
    upvar ::tablelist::ns${win}::data data
    if {$winSys eq "aqua"} {
	catch {
	    set data(useCustomMDEFSav) $::tk::mac::useCustomMDEF
	    set ::tk::mac::useCustomMDEF 1
	}
    }

    set menu $w.menu
    menu $menu -tearoff 0 -postcommand [list tablelist::postMenuCmd $w]
    foreach event {<Map> <Unmap>} {
	bind $menu $event {
	    tablelist::invokeMotionHandler [tablelist::getTablelistPath %W]
	}
    }
    if {$winSys eq "x11"} {
	$menu configure -background $data(-background) \
			-foreground $data(-foreground) \
			-selectcolor $data(-foreground) \
			-activebackground $data(-selectbackground) \
			-activeforeground $data(-selectforeground) \
			-activeborderwidth $data(-selectborderwidth)
    }

    $w configure -menu $menu
}

#------------------------------------------------------------------------------
# tablelist::postMenuCmd
#
# Activates the radiobutton entry of the menu associated with the menubutton
# widget having the given path name whose -value option was set to the
# menubutton's text.
#------------------------------------------------------------------------------
proc tablelist::postMenuCmd w {
    set menu [$w cget -menu]
    variable winSys
    if {$winSys eq "x11"} {
	set last [$menu index last]
	if {$last ne "none"} {
	    set text [$w cget -text]
	    for {set idx 0} {$idx <= $last} {incr idx} {
		if {[$menu type $idx] eq "radiobutton" &&
		    [$menu entrycget $idx -value] eq $text} {
		    $menu activate $idx
		}
	    }
	}
    } else {
	if {[catch {set ::tk::Priv(postedMb) ""}] != 0} {
	    set ::tkPriv(postedMb) ""
	}

	if {[winfo class $w] eq "TMenubutton"} {
	    if {[catch {set ::tk::Priv(popup) $menu}] != 0} {
		set ::tkPriv(popup) $menu
	    }
	}

	if {$winSys eq "aqua"} {
	    set win [getTablelistPath $w]
	    upvar ::tablelist::ns${win}::data data
	    if {[$data(body) cget -cursor] ne $data(-cursor)} {
		$data(body) configure -cursor $data(-cursor)
	    }
	}
    }
}

#------------------------------------------------------------------------------
# tablelist::createTileEntry
#
# Creates a tile entry widget of the given path name for interactive cell
# editing in a tablelist widget.
#------------------------------------------------------------------------------
proc tablelist::createTileEntry {w args} {
    if {$::tk_version < 8.5 || [regexp {^8\.5a[1-5]$} $::tk_patchLevel]} {
	package require tile 0.6[-]
    }
    createTileAliases

    #
    # The style of the tile entry widget should have -borderwidth
    # 2 and -padding 1.  For those themes that don't honor the
    # -borderwidth 2 setting, set the padding to another value.
    #
    set win [getTablelistPath $w]
    variable currentTheme
    switch -- $currentTheme {
	aqua {
	    set padding 0
	}

	tileqt {
	    set padding 3
	}

	xpnative {
	    switch [winfo rgb . SystemHighlight] {
		"12593 27242 50629" -
		"37779 41120 28784" -
		"45746 46260 49087" -
		"13107 39321 65535"	{ set padding 2 }
		default			{ set padding 1 }
	    }
	}

	default {
	    set padding 1
	}
    }
    styleConfig Tablelist.TEntry -borderwidth 2 -highlightthickness 0 \
				 -padding $padding

    ttk::entry $w -style Tablelist.TEntry

    foreach {opt val} $args {
	$w configure $opt $val
    }
}

#------------------------------------------------------------------------------
# tablelist::createTileSpinbox
#
# Creates a tile spinbox widget of the given path name for interactive cell
# editing in a tablelist widget.
#------------------------------------------------------------------------------
proc tablelist::createTileSpinbox {w args} {
    if {$::tk_version < 8.5 || [regexp {^8\.5a[1-5]$} $::tk_patchLevel]} {
	package require tile 0.8.3[-]
    }
    createTileAliases

    #
    # The style of the tile spinbox widget should have -borderwidth
    # 2 and -padding 1.  For those themes that don't honor the
    # -borderwidth 2 setting, set the padding to another value.
    #
    set win [getTablelistPath $w]
    variable currentTheme
    switch -- $currentTheme {
	aqua {
	    set padding 0
	}

	tileqt {
	    set padding 3
	}

	vista {
	    switch [winfo rgb . SystemHighlight] {
		"13107 39321 65535"	{ set padding 0 }
		default			{ set padding 1 }
	    }
	}

	xpnative {
	    switch [winfo rgb . SystemHighlight] {
		"12593 27242 50629" -
		"37779 41120 28784" -
		"45746 46260 49087" -
		"13107 39321 65535"	{ set padding 2 }
		default			{ set padding 1 }
	    }
	}

	default {
	    set padding 1
	}
    }
    styleConfig Tablelist.TSpinbox -borderwidth 2 -highlightthickness 0 \
				   -padding $padding

    ttk::spinbox $w -style Tablelist.TSpinbox

    foreach {opt val} $args {
	$w configure $opt $val
    }
}

#------------------------------------------------------------------------------
# tablelist::createTileCombobox
#
# Creates a tile combobox widget of the given path name for interactive cell
# editing in a tablelist widget.
#------------------------------------------------------------------------------
proc tablelist::createTileCombobox {w args} {
    if {$::tk_version < 8.5 || [regexp {^8\.5a[1-5]$} $::tk_patchLevel]} {
	package require tile 0.6[-]
    }
    createTileAliases

    set win [getTablelistPath $w]
    variable currentTheme
    if {$currentTheme eq "aqua"} {
	styleConfig Tablelist.TCombobox -borderwidth 2 -padding 0
    } else {
	styleConfig Tablelist.TCombobox -borderwidth 2 -padding 1
    }

    ttk::combobox $w -style Tablelist.TCombobox

    foreach {opt val} $args {
	$w configure $opt $val
    }

    foreach event {<Map> <Unmap>} {
	bind [ttk::combobox::PopdownWindow $w] $event {
	    tablelist::invokeMotionHandler [tablelist::getTablelistPath %W]
	}
    }
}

#------------------------------------------------------------------------------
# tablelist::createTileCheckbutton
#
# Creates a tile checkbutton widget of the given path name for interactive cell
# editing in a tablelist widget.
#------------------------------------------------------------------------------
proc tablelist::createTileCheckbutton {w args} {
    makeTtkCkbtn $w

    foreach {opt val} $args {
	switch -- $opt {
	    -state  { $w configure $opt $val }
	    default {}
	}
    }

    set win [getTablelistPath $w]
    $w configure -variable ::tablelist::ns${win}::data(editText)
}

#------------------------------------------------------------------------------
# tablelist::createTileMenubutton
#
# Creates a tile menubutton widget of the given path name for interactive cell
# editing in a tablelist widget.
#------------------------------------------------------------------------------
proc tablelist::createTileMenubutton {w args} {
    if {$::tk_version < 8.5 || [regexp {^8\.5a[1-5]$} $::tk_patchLevel]} {
	package require tile 0.6[-]
    }
    createTileAliases

    styleConfig Tablelist.TMenubutton -anchor w -justify left -padding 1 \
				      -relief raised

    set win [getTablelistPath $w]
    ttk::menubutton $w -style Tablelist.TMenubutton \
		       -textvariable ::tablelist::ns${win}::data(editText)

    foreach {opt val} $args {
	switch -- $opt {
	    -state  { $w configure $opt $val }
	    default {}
	}
    }

    variable winSys
    upvar ::tablelist::ns${win}::data data
    if {$winSys eq "aqua"} {
	catch {
	    set data(useCustomMDEFSav) $::tk::mac::useCustomMDEF
	    set ::tk::mac::useCustomMDEF 1
	}
    }

    set menu $w.menu
    menu $menu -tearoff 0 -postcommand [list tablelist::postMenuCmd $w]
    foreach event {<Map> <Unmap>} {
	bind $menu $event {
	    tablelist::invokeMotionHandler [tablelist::getTablelistPath %W]
	}
    }
    bind $menu <Map> {+ focus %W }
    if {$winSys eq "x11"} {
	$menu configure -background $data(-background) \
			-foreground $data(-foreground) \
			-selectcolor $data(-foreground) \
			-activebackground $data(-selectbackground) \
			-activeforeground $data(-selectforeground) \
			-activeborderwidth $data(-selectborderwidth)
    }

    $w configure -menu $menu
}

#------------------------------------------------------------------------------
# tablelist::createBWidgetSpinBox
#
# Creates a BWidget SpinBox widget of the given path name for interactive cell
# editing in a tablelist widget.
#------------------------------------------------------------------------------
proc tablelist::createBWidgetSpinBox {w args} {
    eval [list SpinBox $w -editable 1 -width 0] $args

    scaleutilmisc::scaleBWidgetSpinBox $w
}

#------------------------------------------------------------------------------
# tablelist::createBWidgetComboBox
#
# Creates a BWidget ComboBox widget of the given path name for interactive cell
# editing in a tablelist widget.
#------------------------------------------------------------------------------
proc tablelist::createBWidgetComboBox {w args} {
    eval [list ComboBox $w -editable 1 -width 0] $args

    scaleutilmisc::scaleBWidgetComboBox $w

    foreach event {<Map> <Unmap>} {
	bind $w.shell.listb $event {
	    tablelist::invokeMotionHandler [tablelist::getTablelistPath %W]
	}
    }
}

#------------------------------------------------------------------------------
# tablelist::createIncrDateentry
#
# Creates an [incr Widgets] dateentry of the given path name for interactive
# cell editing in a tablelist widget.
#------------------------------------------------------------------------------
proc tablelist::createIncrDateentry {w args} {
    eval [list iwidgets::dateentry $w] $args

    variable scalingpct
    scaleutilmisc::scaleIncrDateentry $w $scalingpct
}

#------------------------------------------------------------------------------
# tablelist::createIncrTimeentry
#
# Creates an [incr Widgets] timeentry of the given path name for interactive
# cell editing in a tablelist widget.
#------------------------------------------------------------------------------
proc tablelist::createIncrTimeentry {w args} {
    eval [list iwidgets::timeentry $w] $args

    variable scalingpct
    scaleutilmisc::scaleIncrTimeentry $w $scalingpct
}

#------------------------------------------------------------------------------
# tablelist::createIncrCombobox
#
# Creates an [incr Widgets] combobox of the given path name for interactive
# cell editing in a tablelist widget.
#------------------------------------------------------------------------------
proc tablelist::createIncrCombobox {w args} {
    eval [list iwidgets::combobox $w -dropdown 1 -editable 1 -grab global \
	  -width 0] $args

    variable scalingpct
    scaleutilmisc::scaleIncrCombobox $w $scalingpct

    foreach event {<Map> <Unmap>} {
	bind [$w component list] $event {+
	    tablelist::invokeMotionHandler [tablelist::getTablelistPath %W]
	}
    }

    #
    # Make sure that the entry component will receive the input focus
    # whenever the list component (a scrolledlistbox widget) gets unmapped
    #
    bind [$w component list] <Unmap> +[list focus [$w component entry]]
}

#------------------------------------------------------------------------------
# tablelist::createOakleyCombobox
#
# Creates an Oakley combobox widget of the given path name for interactive cell
# editing in a tablelist widget.
#------------------------------------------------------------------------------
proc tablelist::createOakleyCombobox {w args} {
    eval [list combobox::combobox $w -editable 1 -elementborderwidth 1 \
	  -width 0] $args

    variable scalingpct
    scaleutilmisc::scaleOakleyComboboxArrow $scalingpct

    foreach event {<Map> <Unmap>} {
	bind $w.top.list $event {
	    tablelist::invokeMotionHandler [tablelist::getTablelistPath %W]
	}
    }

    #
    # Repack the widget's components, to make sure that the
    # button will remain visible when shrinking the combobox.
    # This patch is needed for combobox versions earlier than 2.3.
    #
    pack forget $w.entry $w.button
    pack $w.button -side right -fill y    -expand 0
    pack $w.entry  -side left  -fill both -expand 1
}

#------------------------------------------------------------------------------
# tablelist::doEditCell
#
# Processes the tablelist editcell subcommand.  cmd may be an empty string,
# "condChangeSelection", or "changeSelection".  charPos stands for the
# character position component of the index in the body text widget of the
# character underneath the mouse cursor if this command was invoked by clicking
# mouse button 1 in the body of the tablelist widget.
#------------------------------------------------------------------------------
proc tablelist::doEditCell {win row col restore {cmd ""} {charPos -1}} {
    upvar ::tablelist::ns${win}::data data
    if {$data(isDisabled) || ![isRowViewable $win $row] || $data($col-hide) ||
	![isCellEditable $win $row $col]} {
	return ""
    }
    if {$data(editRow) == $row && $data(editCol) == $col} {
	return ""
    }
    if {$data(editRow) >= 0 && ![doFinishEditing $win]} {
	return ""
    }
    set item [lindex $data(itemList) $row]
    set key [lindex $item end]
    getIndentData $win $key $col indentWidth
    set pixels [colWidth $win $col -stretched]
    if {$indentWidth >= $pixels} {
	return ""
    }

    #
    # Create a frame to be embedded into the tablelist's body, together with
    # a child of column/cell-specific type; replace the binding tag Frame with
    # $data(editwinTag) and TablelistEdit in the frame's list of binding tags
    #
    seeCell $win $row $col
    set f $data(bodyFrm)
    if {[winfo exists $f]} {		;# just in case (extremely unprobable)
	return ""
    }
    set netRowHeight [lindex [bboxSubCmd $win $row] 3]
    set frameHeight [expr {$netRowHeight + 6}]	;# because of the -pady -3 below
    set frameWidth 7				;# because of the -padx -3 below
    tk::frame $f -borderwidth 0 -container 0 -height $frameHeight \
		 -highlightthickness 0 -padx 0 -pady 0 -relief flat \
		 -takefocus 0 -width $frameWidth
    bindtags $f [lreplace [bindtags $f] 1 1 $data(editwinTag) TablelistEdit]
    set name [getEditWindow $win $row $col]
    variable editWin
    set creationCmd [string map {"%W" "$w"} $editWin($name-creationCmd)]
    append creationCmd { $editWin($name-fontOpt) [getCellFont $win $key $col]} \
		       { -state normal}
    set w $data(bodyFrmEd)
    if {[catch {eval $creationCmd} result] != 0} {
	destroy $f
	return -code error $result
    }
    catch {$w configure -highlightthickness 0}
    clearTakefocusOpt $w
    set class [winfo class $w]
    set isCheckbtn [string match "*Checkbutton" $class]
    set isMenubtn  [string match "*Menubutton" $class]
    set isText	   [expr {$class eq "Text" || $class eq "Ctext"}]
    set isMentry   [expr {$class eq "Mentry"}]
    if {!$isCheckbtn && !$isMenubtn} {
	catch {$w configure -relief ridge}
	catch {$w configure -borderwidth 2}
    }
    if {$isText && $data($col-wrap) && $::tk_version >= 8.5} {
	$w configure -wrap word
    }
    set alignment [lindex $data(colList) [expr {2*$col + 1}]]
    if {!$isText && !$isMentry} {
	catch {$w configure -justify $alignment}
    }

    #
    # Define some bindings for the above frame
    #
    bind $f <Enter> {
	set tablelist::W [tablelist::getTablelistPath %W]
	set tablelist::ns${tablelist::W}::data(inEditWin) 1
	tablelist::invokeMotionHandler $tablelist::W
    }
    bind $f <Leave> {
	set tablelist::W [tablelist::getTablelistPath %W]
	set tablelist::ns${tablelist::W}::data(inEditWin) 0
	set tablelist::ns${tablelist::W}::data(prevCell) -1,-1
	tablelist::invokeMotionHandler $tablelist::W
    }
    bind $f <Destroy> {
	if {[catch {tk::CancelRepeat}] != 0} {
	    tkCancelRepeat
	}
	if {[catch {ttk::CancelRepeat}] != 0} {
	    catch {tile::CancelRepeat}
	}
	set tablelist::W [tablelist::getTablelistPath %W]
	if {$tablelist::W ne ""} {
	    array set tablelist::ns${tablelist::W}::data \
		  {editKey ""  editRow -1  editCol -1  inEditWin 0
		   prevCell -1,-1}
	    tablelist::invokeMotionHandler $tablelist::W
	}
    }

    #
    # Replace the cell's content between the two tabs with the above frame
    #
    array set data [list editKey $key editRow $row editCol $col]
    set b $data(body)
    findTabs $win $b [expr {$row + 1}] $col $col tabIdx1 tabIdx2
    getIndentData $win $data(editKey) $data(editCol) indentWidth
    variable pu
    if {$indentWidth == 0} {
	set textIdx [$b index $tabIdx1+1$pu]
    } else {
	$b mark set editIndentMark [$b index $tabIdx1+1$pu]
	set textIdx [$b index $tabIdx1+2$pu]
    }
    if {$isCheckbtn} {
	set editIdx $textIdx
	$b delete $editIdx $tabIdx2
    } else {
	getAuxData $win $data(editKey) $data(editCol) auxType auxWidth
	if {$auxType == 0 || $auxType > 1} {			;# no image
	    set editIdx $textIdx
	    $b delete $editIdx $tabIdx2
	} elseif {$alignment eq "right"} {
	    $b mark set editAuxMark $tabIdx2-1$pu
	    set editIdx $textIdx
	    $b delete $editIdx $tabIdx2-1$pu
	} else {
	    $b mark set editAuxMark $textIdx
	    set editIdx [$b index $textIdx+1$pu]
	    $b delete $editIdx $tabIdx2
	}
    }
    $b window create $editIdx -padx -3 -pady -3 -window $f
    $b mark set editMark $editIdx

    #
    # Insert the binding tags $data(editwinTag) and TablelistEdit into the list
    # of binding tags of some components of w, just before the respective path
    # names.  In addition, insert the binding tag TablelistEditBreak into the
    # same lists of binding tags, just after the respective widget class names
    #
    if {$isMentry} {
	set compList [$w entries]
    } else {
	set comp [subst [string map {"%W" "$w"} $editWin($name-focusWin)]]
	set compList [list $comp]
	set data(editFocus) $comp
    }
    foreach comp $compList {
	set bindTags [bindtags $comp]
	set idx [lsearch -exact $bindTags $comp]
	bindtags $comp [linsert $bindTags $idx $data(editwinTag) TablelistEdit]

	set bindTags [bindtags $comp]
	set idx [lsearch -exact $bindTags [winfo class $comp]]
	bindtags $comp [linsert $bindTags [incr idx] TablelistEditBreak]
    }

    #
    # Set the -exportselection option to 0 after saving its original value
    #
    set data(exportselOrig) $data(-exportselection)
    doConfig $win -exportselection 0

    #
    # Restore or initialize some of the edit window's data
    #
    if {$restore} {
	restoreEditData $win
    } else {
	#
	# Put the cell's content to the edit window
	#
	set data(canceled) 0
	set data(invoked) 0
	set text [lindex $item $col]
	if {$editWin($name-useFormat) && [lindex $data(fmtCmdFlagList) $col]} {
	    set text [formatElem $win $key $row $col $text]
	}
	catch {
	    eval [string map {"%W" "$w"  "%T" "$text"} \
		  $editWin($name-putValueCmd)]
	}

	#
	# Save the edit window's text
	#
	set data(origEditText) \
	    [eval [string map {"%W" "$w"} $editWin($name-getTextCmd)]]

	if {$data(-editstartcommand) ne ""} {
	    set text [uplevel #0 $data(-editstartcommand) \
		      [list $win $row $col $text]]
	    if {[destroyed $win]} {
		return ""
	    }

	    variable winSys
	    if {$winSys eq "aqua"} {
		catch {set ::tk::mac::useCustomMDEF $data(useCustomMDEFSav)}
	    }

	    if {$data(canceled)} {
		return ""
	    }

	    catch {
		eval [string map {"%W" "$w"  "%T" "$text"} \
		      $editWin($name-putValueCmd)]
	    }
	}

	if {$isMenubtn} {
	    set menu [$w cget -menu]
	    set last [$menu index last]
	    if {$last ne "none"} {
		set varName [$w cget -textvariable]
		for {set idx 0} {$idx <= $last} {incr idx} {
		    if {[$menu type $idx] eq "radiobutton"} {
			$menu entryconfigure $idx -variable $varName
		    }
		}
	    }
	}

	#
	# Save the edit window's text again
	#
	set data(origEditText) \
	    [eval [string map {"%W" "$w"} $editWin($name-getTextCmd)]]
	set data(rejected) 0

	if {$editWin($name-getListCmd) ne "" &&
	    $editWin($name-selectCmd)  ne ""} {
	    #
	    # Select the edit window's item corresponding to text
	    #
	    set itemList \
		[eval [string map {"%W" "$w"} $editWin($name-getListCmd)]]
	    if {[set idx [lsearch -exact $itemList $text]] >= 0} {
		eval [string map {"%W" "$w"  "%I" "$idx"} \
		      $editWin($name-selectCmd)]
	    }
	}

	#
	# Evaluate the optional command passed as argument
	#
	if {$cmd ne ""} {
	    eval [list $cmd $win $row $col]
	}

	#
	# Set the focus and the insertion cursor
	#
	if {$charPos >= 0} {
	    if {$isText || !$editWin($name-isEntryLike)} {
		focus $comp
	    } else {
		set hasAuxObject [expr {
		    [info exists data($key,$col-image)] ||
		    [info exists data($key,$col-window)]}]
		if {$alignment eq "right"} {
		    ##nagelfar ignore
		    scan $tabIdx2 "%d.%d" line tabCharIdx2
		    if {$isMentry} {
			set len [string length [$w getstring]]
		    } else {
			set len [$comp index end]
		    }
		    set number [expr {$len - $tabCharIdx2 + $charPos}]
		    if {$hasAuxObject} {
			incr number 2
		    }
		} else {
		    ##nagelfar ignore
		    scan $tabIdx1 "%d.%d" line tabCharIdx1
		    set number [expr {$charPos - $tabCharIdx1 - 1}]
		    if {$hasAuxObject} {
			incr number -2
		    }
		}
		if {$isMentry} {
		    setMentryCursor $w $number
		} else {
		    focus $comp
		    $comp icursor $number
		}
	    }
	} else {
	    if {$isMentry || !$editWin($name-isEntryLike)} {
		focus $w
	    } elseif {$isText} {
		focus $comp
	    } else {
		focus $comp
		$comp icursor end
		$comp selection range 0 end
	    }
	}
    }

    if {$data(-autofinishediting)} {
	configAutoFinishEditing $win $w
    }

    #
    # Adjust the frame's height
    #
    if {$isText} {
	if {[$w cget -wrap] eq "none" || $::tk_version < 8.5} {
	    set numLines [expr {int([$w index end-1$pu])}]
	    $w configure -height $numLines
	    update idletasks				;# needed for ctext
	    if {[destroyed $win]} {
		return ""
	    }
	    after 0 [list $f configure -height [winfo reqheight $w]]
	} else {
	    bind $w <Configure> {
		%W configure -height [%W count -displaylines 1.0 end]
		update idletasks			;# needed for ctext
		if {[winfo exists %W]} {
		    after 0 [list [winfo parent %W] configure -height \
				   [winfo reqheight %W]]
		}
	    }
	}
	if {[info exists ::wcb::version]} {
	    wcb::cbappend $w after insert tablelist::adjustTextHeight
	    wcb::cbappend $w after delete tablelist::adjustTextHeight
	}
    } elseif {!$isCheckbtn} {
	update idletasks
	if {[destroyed $win]} {
	    return ""
	}
	$f configure -height [winfo reqheight $w]
    }

    #
    # Adjust the frame's width and paddings
    #
    if {!$isCheckbtn} {
	place $w -relwidth 1.0 -relheight 1.0
	adjustEditWindow $win $pixels
	update idletasks
	if {[destroyed $win]} {
	    return ""
	}
    }

    updateViewWhenIdle $win
    return ""
}

#------------------------------------------------------------------------------
# tablelist::doCancelEditing
#
# Processes the tablelist cancelediting subcommand.  Aborts the interactive
# cell editing and restores the cell's content after destroying the edit
# window.
#------------------------------------------------------------------------------
proc tablelist::doCancelEditing win {
    upvar ::tablelist::ns${win}::data data
    if {[set row $data(editRow)] < 0} {
	return ""
    }
    set col $data(editCol)

    set data(canceled) 1
    if {$data(-forceeditendcommand) && $data(-editendcommand) ne ""} {
	#
	# Pass the edit window's original content to the
	# command specified by the -editendcommand option
	#
	uplevel #0 $data(-editendcommand) \
	    [list $win $row $col $data(origEditText)]
	if {[destroyed $win]} {
	    return ""
	}
    }

    if {[winfo exists $data(bodyFrm)]} {
	destroy $data(bodyFrm)
	set item [lindex $data(itemList) $row]
	set key [lindex $item end]
	foreach opt {-window -image} {
	    if {[info exists data($key,$col$opt)]} {
		doCellConfig $row $col $win $opt $data($key,$col$opt)
		break
	    }
	}
	doCellConfig $row $col $win -text [lindex $item $col]
    }

    focus $data(body)

    set userData [list $row $col]
    genVirtualEvent $win <<TablelistCellRestored>> $userData

    #
    # Restore the value of the -exportselection option
    #
    doConfig $win -exportselection $data(exportselOrig)

    updateViewWhenIdle $win
    return ""
}

#------------------------------------------------------------------------------
# tablelist::doFinishEditing
#
# Processes the tablelist finishediting subcommand.  Invokes the command
# specified by the -editendcommand option if needed, and updates the element
# just edited after destroying the edit window if the latter's content was not
# rejected.  Returns 1 on normal termination and 0 otherwise.
#------------------------------------------------------------------------------
proc tablelist::doFinishEditing {win {destroy 1}} {
    #
    # This might be an "after 500" callback; check whether the window exists
    #
    if {[destroyed $win]} {
	return 0
    }

    upvar ::tablelist::ns${win}::data data
    if {$data(-state) eq "disabled" || [set row $data(editRow)] < 0} {
	return 1
    }
    set col $data(editCol)

    #
    # Get the edit window's text, and invoke the command
    # specified by the -editendcommand option if needed
    #
    set w $data(bodyFrmEd)
    set name [getEditWindow $win $row $col]
    variable editWin
    set text [eval [string map {"%W" "$w"} $editWin($name-getTextCmd)]]
    set item [lindex $data(itemList) $row]
    if {!$data(-forceeditendcommand) && $text eq $data(origEditText)} {
	set text [lindex $item $col]
    } elseif {[catch {
	eval [string map {"%W" "$w"} $editWin($name-getValueCmd)]} text] == 0} {
	if {$data(-editendcommand) ne ""} {
	    set text \
		[uplevel #0 $data(-editendcommand) [list $win $row $col $text]]
	    if {[destroyed $win]} {
		return 0
	    }
	}

	if {!$data(rejected) && !$data($col-allowduplicates) &&
	    [lsearch -exact [getcolumnsSubCmd $win $col] $text] >= 0} {
	    bell
	    set data(rejected) 1

	    if {$data(-editendcommand) ne ""} {
		#
		# Pass the edit window's original content to the
		# command specified by the -editendcommand option
		#
		uplevel #0 $data(-editendcommand) \
		    [list $win $row $col $data(origEditText)]
		if {[destroyed $win]} {
		    return 0
		}
	    }
	}
    } else {
	set data(rejected) 1
    }

    #
    # Check whether the input was rejected (by one of the
    # above "set data(rejected) 1" occurrences or within
    # the command specified by the -editendcommand option)
    #
    if {$data(rejected)} {
	if {[winfo exists $data(bodyFrm)]} {
	    if {[winfo class $w] ne "Mentry"} {
		focus $data(editFocus)
	    }
	} else {
	    focus $data(body)
	}

	set data(rejected) 0
	set result 0
    } else {
	if {[winfo exists $data(bodyFrm)]} {
	    if {$destroy} {
		destroy $data(bodyFrm)
		set key [lindex $item end]
		foreach opt {-window -image} {
		    if {[info exists data($key,$col$opt)]} {
			doCellConfig $row $col $win $opt $data($key,$col$opt)
			break
		    }
		}
	    }

	    doCellConfig $row $col $win -text $text
	    set result 1

	    #
	    # Restore the value of the -exportselection option
	    #
	    doConfig $win -exportselection $data(exportselOrig)
	} else {
	    set result 0
	}

	if {$destroy} {
	    focus $data(body)
	    updateViewWhenIdle $win
	}

	if {$text ne $data(origEditText)} {
	    set userData [list $row $col]
	    genVirtualEvent $win <<TablelistCellUpdated>> $userData
	}
    }

    return $result
}

#------------------------------------------------------------------------------
# tablelist::clearTakefocusOpt
#
# Sets the -takefocus option of all members of the widget hierarchy starting
# with w to 0.
#------------------------------------------------------------------------------
proc tablelist::clearTakefocusOpt w {
    catch {$w configure -takefocus 0}
    foreach c [winfo children $w] {
	clearTakefocusOpt $c
    }
}

#------------------------------------------------------------------------------
# tablelist::adjustTextHeight
#
# This procedure is an after-insert and after-delete callback asociated with a
# (c)text widget used for interactive cell editing.  It sets the height of the
# edit window to the number of lines currently contained in it.
#------------------------------------------------------------------------------
proc tablelist::adjustTextHeight {w args} {
    if {$::tk_version >= 8.5} {
	#
	# Count the display lines (taking into account the line wraps)
	#
	set numLines [$w count -displaylines 1.0 end]
    } else {
	#
	# We can only count the logical lines (irrespective of wrapping)
	#
	variable pu
	set numLines [expr {int([$w index end-1$pu])}]
    }
    $w configure -height $numLines
    update idletasks					;# needed for ctext

    set path [wcb::pathname $w]
    if {[winfo exists $path]} {
	[winfo parent $path] configure -height [winfo reqheight $path]
    }

    set win [getTablelistPath $path]
    upvar ::tablelist::ns${win}::data data
    seeRow $win $data(editRow)
}

#------------------------------------------------------------------------------
# tablelist::setMentryCursor
#
# Sets the focus to the entry child of the mentry widget w that contains the
# global character position specified by number, and sets the insertion cursor
# in that entry to the relative character position corresponding to number.  If
# that entry is not enabled then the procedure sets the focus to the last
# enabled entry child preceding the found one and sets the insertion cursor to
# its end.
#------------------------------------------------------------------------------
proc tablelist::setMentryCursor {w number} {
    #
    # Find the entry child containing the given character
    # position; if the latter is contained in a label child
    # then take the entry immediately preceding that label
    #
    set entryIdx -1
    set childIdx 0
    set childCount [llength [$w cget -body]]
    foreach c [winfo children $w] {
	set class [winfo class $c]
	switch $class {
	    Entry {
		set str [$c get]
		set entry $c
		incr entryIdx
	    }
	    Frame {
		set str [$c.e get]
		set entry $c.e
		incr entryIdx
	    }
	    Label { set str [$c cget -text] }
	}
	set len [string length $str]

	if {$number < $len} {
	    break
	} elseif {$childIdx < $childCount - 1} {
	    incr number -$len
	}

	incr childIdx
    }

    #
    # If the entry's state is normal then set the focus to this entry and
    # the insertion cursor to the relative character position corresponding
    # to number; otherwise set the focus to the last enabled entry child
    # preceding the found one and set the insertion cursor to its end
    #
    switch $class {
	Entry -
	Frame { set relIdx $number }
	Label { set relIdx end }
    }
    if {[$entry cget -state] eq "normal"} {
	focus $entry
	$entry icursor $relIdx
    } else {
	for {incr entryIdx -1} {$entryIdx >= 0} {incr entryIdx -1} {
	    set entry [$w entrypath $entryIdx]
	    if {[$entry cget -state] eq "normal"} {
		focus $entry
		$entry icursor end
		return ""
	    }
	}
    }
}

#------------------------------------------------------------------------------
# tablelist::configAutoFinishEditing
#
# Makes sure that selecting an entry of the combobox or menu widget w used for
# interactive cell editing in the tablelist widget win will automatically
# finish the editing.
#------------------------------------------------------------------------------
proc tablelist::configAutoFinishEditing {win w} {
    switch [winfo class $w] {
	TCombobox {
	    bind $w <<ComboboxSelected>> \
		{+ [tablelist::getTablelistPath %W] finishediting}
	}

	ComboBox {					;# BWidget
	    set cmd [$w cget -modifycmd]
	    $w configure -modifycmd [format {
		eval [list %s]
		after 0 [list %s finishediting]
	    } $cmd $win]
	}

	Combobox {					;# IWidgets or Oakley
	    if {[catch {$w cget -selectioncommand} cmd] == 0} {	;# IWidgets
		$w configure -selectioncommand [format {
		    eval [list %s]
		    after 0 [list %s finishediting]
		} $cmd $win]
	    } elseif {[catch {$w cget -command} cmd] == 0} {	;# Oakley
		if {$cmd eq ""} {
		    proc ::tablelist::comboboxCmd {w val} [format {
			after 0 [list %s finishediting]
		    } $win]
		} else {
		    proc ::tablelist::comboboxCmd {w val} [format {
			eval [list %s $w $val]
			after 0 [list %s finishediting]
		    } $cmd $win]
		}
		$w configure -command ::tablelist::comboboxCmd
	    }
	}

	Menubutton -
	TMenubutton {
	    set menu [$w cget -menu]
	    set last [$menu index last]
	    if {$last ne "none"} {
		for {set idx 0} {$idx <= $last} {incr idx} {
		    if {[regexp {^(command|checkbutton|radiobutton)$} \
			 [$menu type $idx]]} {
			set cmd [$menu entrycget $idx -command]
			$menu entryconfigure $idx -command [format {
			    eval [list %s]
			    after 0 [list %s finishediting]
			} $cmd $win]
		    }
		}
	    }
	}
    }
}

#------------------------------------------------------------------------------
# tablelist::adjustEditWindow
#
# Adjusts the width and the horizontal padding of the frame containing the edit
# window associated with the tablelist widget win.
#------------------------------------------------------------------------------
proc tablelist::adjustEditWindow {win pixels} {
    #
    # Adjust the width of the auxiliary object (if any)
    #
    upvar ::tablelist::ns${win}::data data
    set indent [getIndentData $win $data(editKey) $data(editCol) indentWidth]
    set aux [getAuxData $win $data(editKey) $data(editCol) auxType auxWidth]
    if {$indentWidth >= $pixels} {
	set indentWidth $pixels
	set pixels 0
	set auxWidth 0
    } else {
	incr pixels -$indentWidth
	if {$auxType == 1} {					;# image
	    if {$auxWidth + 5 <= $pixels} {
		incr auxWidth 3
		incr pixels -[expr {$auxWidth + 2}]
	    } elseif {$auxWidth <= $pixels} {
		set pixels 0
	    } else {
		set auxWidth $pixels
		set pixels 0
	    }
	}
    }

    if {$indentWidth != 0} {
	insertOrUpdateIndent $data(body) editIndentMark $indent $indentWidth
    }
    if {$auxType == 1} {					;# image
	setImgLabelWidth $data(body) editAuxMark $auxWidth
    }

    switch [winfo class $data(bodyFrmEd)] {
	Text -
	Ctext { set amount 4 }
	TEntry {
	    variable currentTheme
	    if {$currentTheme eq "aqua"} {
		variable newAquaSupport
		set amount [expr {$newAquaSupport ? 7 : 5}]
	    } else {
		set amount 3
	    }
	}
	Mentry {
	    variable currentTheme
	    if {$::mentry::usingTile && $currentTheme  eq "aqua"} {
		set amount 5
	    } else {
		set amount 3
	    }
	}
	default { set amount 3 }
    }

    #
    # Compute an appropriate width and horizontal
    # padding for the frame containing the edit window
    #
    set name [getEditWindow $win $data(editRow) $data(editCol)]
    variable editWin
    if {$editWin($name-useReqWidth) &&
	[set reqWidth [winfo reqwidth $data(bodyFrmEd)]] <=
	$pixels + 2*$data(charWidth)} {
	set width $reqWidth
	set padX [expr {$reqWidth <= $pixels ?
			-$amount : ($pixels - $reqWidth) / 2}]
    } else {
	if {$editWin($name-usePadX)} {
	    set amount $data(charWidth)
	}

	set width [expr {$pixels + 2*$amount}]
	set padX -$amount
    }

    $data(bodyFrm) configure -width $width
    $data(body) window configure editMark -padx $padX
}

#------------------------------------------------------------------------------
# tablelist::setEditWinFont
#
# Sets the font of the edit window associated with the tablelist widget win to
# that of the cell currently being edited.
#------------------------------------------------------------------------------
proc tablelist::setEditWinFont win {
    upvar ::tablelist::ns${win}::data data
    set name [getEditWindow $win $data(editRow) $data(editCol)]
    variable editWin
    if {$editWin($name-fontOpt) eq ""} {
	return ""
    }

    set key [lindex $data(keyList) $data(editRow)]
    set cellFont [getCellFont $win $key $data(editCol)]
    $data(bodyFrmEd) configure $editWin($name-fontOpt) $cellFont

    $data(bodyFrm) configure -height [winfo reqheight $data(bodyFrmEd)]
}

#------------------------------------------------------------------------------
# tablelist::saveEditData
#
# Saves some data of the edit window associated with the tablelist widget win.
#------------------------------------------------------------------------------
proc tablelist::saveEditData win {
    upvar ::tablelist::ns${win}::data data
    set w $data(bodyFrmEd)
    set entry $data(editFocus)
    set class [winfo class $w]
    set isText   [expr {$class eq "Text" || $class eq "Ctext"}]
    set isMentry [expr {$class eq "Mentry"}]

    #
    # Miscellaneous data
    #
    set name [getEditWindow $win $data(editRow) $data(editCol)]
    variable editWin
    set data(editText) \
	[eval [string map {"%W" "$w"} $editWin($name-getTextCmd)]]
    if {$editWin($name-getListCmd) ne ""} {
	set data(editList) \
	    [eval [string map {"%W" "$w"} $editWin($name-getListCmd)]]
    }
    if {$isText} {
	set data(editPos) [$w index insert]
	set data(textSelRanges) [$w tag ranges sel]
    } elseif {$editWin($name-isEntryLike)} {
	set data(editPos) [$entry index insert]
	if {[set data(entryHadSel) [$entry selection present]]} {
	    set data(entrySelFrom) [$entry index sel.first]
	    set data(entrySelTo)   [$entry index sel.last]
	}
    }
    set data(editHadFocus) [expr {[focus -lastfor $entry] eq $entry}]

    #
    # Configuration options and widget callbacks
    #
    saveEditConfigOpts $w
    if {[info exists ::wcb::version] &&
	$editWin($name-isEntryLike) && !$isMentry} {
	set wcbOptList {insert delete motion}
	if {$isText} {
	    lappend wcbOptList selset selclear
	    if {$::wcb::version >= 3.2} {
		lappend wcbOptList replace
	    }
	}
	foreach when {before after} {
	    foreach opt $wcbOptList {
		set data(entryCb-$when-$opt) \
		    [::wcb::callback $entry $when $opt]
	    }
	}
    }
}

#------------------------------------------------------------------------------
# tablelist::saveEditConfigOpts
#
# Saves the non-default values of the configuration options of the edit window
# w associated with a tablelist widget, as well as those of its descendants.
#------------------------------------------------------------------------------
proc tablelist::saveEditConfigOpts w {
    regexp {^(.+)\.body\.f\.(e.*)$} $w dummy win tail
    upvar ::tablelist::ns${win}::data data
    set isMentry [expr {[winfo class $w] eq "Mentry"}]

    foreach configSet [$w configure] {
	if {[llength $configSet] != 2} {
	    set default [lindex $configSet 3]
	    set current [lindex $configSet 4]
	    if {$default ne $current} {
		set opt [lindex $configSet 0]
		if {$opt ne "-class" && !(!$isMentry && $opt eq "-body")} {
		    set data($tail$opt) $current
		}
	    }
	}
    }

    foreach c [winfo children $w] {
	saveEditConfigOpts $c
    }

    if {[string match "*Menubutton" [winfo class $w]]} {
	set menu [$w cget -menu]
	set last [$menu index last]
	set types {}

	if {$last ne "none"} {
	    for {set idx 0} {$idx <= $last} {incr idx} {
		lappend types [$menu type $idx]
		foreach configSet [$menu entryconfigure $idx] {
		    set default [lindex $configSet 3]
		    set current [lindex $configSet 4]
		    if {$default ne $current} {
			set opt [lindex $configSet 0]
			set data($menu,$idx$opt) $current
		    }
		}
	    }
	}

	set data($menu:types) $types
    }
}

#------------------------------------------------------------------------------
# tablelist::restoreEditData
#
# Restores some data of the edit window associated with the tablelist widget
# win.
#------------------------------------------------------------------------------
proc tablelist::restoreEditData win {
    upvar ::tablelist::ns${win}::data data
    set w $data(bodyFrmEd)
    set entry $data(editFocus)
    set class [winfo class $w]
    set isText   [expr {$class eq "Text" || $class eq "Ctext"}]
    set isMentry [expr {$class eq "Mentry"}]
    set isIncrDateTimeWidget [regexp {^(Date.+|Time.+)$} $class]

    #
    # Miscellaneous data
    #
    set name [getEditWindow $win $data(editRow) $data(editCol)]
    variable editWin
    if {$editWin($name-putTextCmd) ne ""} {
	eval [string map {"%W" "$w"  "%T" "$data(editText)"} \
	      $editWin($name-putTextCmd)]
    }
    if {$editWin($name-putListCmd) ne "" && $data(editList) ne ""} {
	eval [string map {"%W" "$w"  "%L" "$data(editList)"} \
	      $editWin($name-putListCmd)]
    }
    if {$editWin($name-selectCmd) ne "" &&
	[set idx [lsearch -exact $data(editList) $data(editText)]] >= 0} {
	eval [string map {"%W" "$w"  "%I" "$idx"} $editWin($name-selectCmd)]
    }
    if {$isText} {
	$w mark set insert $data(editPos)
	if {[llength $data(textSelRanges)] != 0} {
	    eval [list $w tag add sel] $data(textSelRanges)
	}
    } elseif {$editWin($name-isEntryLike)} {
	$entry icursor $data(editPos)
	if {$data(entryHadSel)} {
	    $entry selection range $data(entrySelFrom) $data(entrySelTo)
	}
    }
    if {$data(editHadFocus)} {
	focus $entry
    }

    #
    # Configuration options and widget callbacks
    #
    restoreEditConfigOpts $w
    if {[info exists ::wcb::version] &&
	$editWin($name-isEntryLike) && !$isMentry} {
	set wcbOptList {insert delete motion}
	if {$isText} {
	    lappend wcbOptList selset selclear
	    if {$::wcb::version >= 3.2} {
		lappend wcbOptList replace
	    }
	}
	foreach when {before after} {
	    foreach opt $wcbOptList {
		eval [list ::wcb::callback $entry $when $opt] \
		     $data(entryCb-$when-$opt)
	    }
	}
    }

    #
    # If the edit window is a datefield, dateentry, timefield, or timeentry
    # widget then restore its text here, because otherwise it would be
    # overridden when the above invocation of restoreEditConfigOpts sets
    # the widget's -format option.  Note that this is a special case; in
    # general we must restore the text BEFORE the configuration options.
    #
    if {$isIncrDateTimeWidget} {
	eval [string map {"%W" "$w"  "%T" "$data(editText)"} \
	      $editWin($name-putTextCmd)]
    }
}

#------------------------------------------------------------------------------
# tablelist::restoreEditConfigOpts
#
# Restores the non-default values of the configuration options of the edit
# window w associated with a tablelist widget, as well as those of its
# descendants.
#------------------------------------------------------------------------------
proc tablelist::restoreEditConfigOpts w {
    regexp {^(.+)\.body\.f\.(e.*)$} $w dummy win tail
    upvar ::tablelist::ns${win}::data data

    foreach name [array names data $tail-*] {
	set opt [string range $name [string last "-" $name] end]
	$w configure $opt $data($name)
	unset data($name)
    }

    foreach c [winfo children $w] {
	restoreEditConfigOpts $c
    }

    if {[string match "*Menubutton" [winfo class $w]]} {
	set menu [$w cget -menu]
	foreach type $data($menu:types) {
	    $menu add $type
	}
	unset data($menu:types)

	foreach name [array names data $menu,*] {
	    regexp {^.+,(.+)(-.+)$} $name dummy idx opt
	    $menu entryconfigure $idx $opt $data($name)
	    unset data($name)
	}
    }
}

#
# Private procedures used in bindings related to interactive cell editing
# =======================================================================
#

#------------------------------------------------------------------------------
# tablelist::defineTablelistEdit
#
# Defines the bindings for the binding tag TablelistEdit.
#------------------------------------------------------------------------------
proc tablelist::defineTablelistEdit {} {
    #
    # Get the supported modifier keys in the set {Alt, Meta, Command}
    # on the current windowing system ("x11", "win32", or "aqua")
    #
    variable winSys
    switch $winSys {
	x11	{ set modList {Alt Meta};  set mainMod Alt }
	win32	{ set modList {Alt};	   set mainMod Alt }
	aqua	{ set modList {Command};   set mainMod Command }
    }

    #
    # Define some bindings for the binding tag TablelistEdit
    #
    bind TablelistEdit <Button-1> {
	#
	# Very short left-clicks on the tablelist's body are sometimes
	# unexpectedly propagated to the edit window just created - make
	# sure they won't be handled by the latter's default bindings
	#
	if {$tablelist::priv(justReleased)} {
	    break
	}

	set tablelist::priv(clickedInEditWin) 1
	focus %W
    }
    bind TablelistEdit <ButtonRelease-1> {
	if {%X >= 0} {				;# i.e., no generated event
	    foreach {tablelist::W tablelist::x tablelist::y} \
		[tablelist::convEventFields %W %x %y] {}

	    set tablelist::priv(x) ""
	    set tablelist::priv(y) ""
	    after cancel $tablelist::priv(afterId)
	    set tablelist::priv(afterId) ""
	    set tablelist::priv(releasedInEditWin) 1
	    if {!$tablelist::priv(clickedInEditWin)} {
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
	    after 100 [list tablelist::condEvalInvokeCmd $tablelist::W]
	}
    }
    bind TablelistEdit <Control-i>	{ tablelist::insertChar %W "\t" }
    bind TablelistEdit <Control-j>	{ tablelist::insertChar %W "\n" }
    bind TablelistEdit <Escape>		{ tablelist::cancelEditing %W }
    foreach key {Return KP_Enter} {
	bind TablelistEdit <$key> {
	    if {[winfo class %W] eq "Text" || [winfo class %W] eq "Ctext"} {
		tablelist::insertChar %W "\n"
	    } else {
		tablelist::finishEditing %W Return
	    }
	}
	bind TablelistEdit <Control-$key> {
	    tablelist::finishEditing %W Return
	}
    }
    foreach key {Return KP_Enter d u} {
	bind TablelistEdit <$mainMod-$key> \
	    [format {tablelist::finishEditing %%W %s-%s} $mainMod $key]
    }
    if {$winSys eq "aqua"} {
	bind TablelistEdit <Control-Command-a> {
	    tablelist::finishEditing %W Control-Command-a
	}
    } else {
	bind TablelistEdit <Alt-a>	{ tablelist::finishEditing %W Alt-a }
    }

    bind TablelistEdit <Tab>		{ tablelist::goToNextPrevCell %W  1 }
    bind TablelistEdit <Shift-Tab>	{ tablelist::goToNextPrevCell %W -1 }
    bind TablelistEdit <<PrevWindow>>	{ tablelist::goToNextPrevCell %W -1 }
    foreach modifier $modList {
	bind TablelistEdit <$modifier-Left> {
	    tablelist::goLeftRight %W -1
	}
	bind TablelistEdit <$modifier-Right> {
	    tablelist::goLeftRight %W 1
	}
	bind TablelistEdit <$modifier-Up> {
	    tablelist::goUpDown %W -1
	}
	bind TablelistEdit <$modifier-Down> {
	    tablelist::goUpDown %W 1
	}
	bind TablelistEdit <$modifier-Prior> {
	    tablelist::goToPriorNextPage %W -1
	}
	bind TablelistEdit <$modifier-Next> {
	    tablelist::goToPriorNextPage %W 1
	}
	bind TablelistEdit <$modifier-Home> {
	    tablelist::goToNextPrevCell %W 1 0 -1
	}
	bind TablelistEdit <$modifier-End> {
	    tablelist::goToNextPrevCell %W -1 0 0
	}
    }
    foreach dir {Left Right} amount {-1 1} {
	##nagelfar ignore
	bind TablelistEdit <$dir> [format {
	    if {![tablelist::isKeyReserved %%W %%K]} {
		tablelist::goLeftRight %%W %d
	    }
	} $amount]
    }
    foreach dir {Up Down} amount {-1 1} {
	##nagelfar ignore
	bind TablelistEdit <$dir> [format {
	    if {![tablelist::isKeyReserved %%W %%K]} {
		tablelist::goUpDown %%W %d
	    }
	} $amount]
    }
    foreach page {Prior Next} amount {-1 1} {
	##nagelfar ignore
	bind TablelistEdit <$page> [format {
	    if {![tablelist::isKeyReserved %%W %%K]} {
		tablelist::goToPriorNextPage %%W %d
	    }
	} $amount]
    }
    bind TablelistEdit <Control-Home> {
	if {![tablelist::isKeyReserved %W Control-Home]} {
	    tablelist::goToNextPrevCell %W 1 0 -1
	}
    }
    bind TablelistEdit <Control-End> {
	if {![tablelist::isKeyReserved %W Control-End]} {
	    tablelist::goToNextPrevCell %W -1 0 0
	}
    }
    foreach pattern {Tab Shift-Tab ISO_Left_Tab hpBackTab} {
	catch {
	    foreach modifier {Control Meta} {
		bind TablelistEdit <$modifier-$pattern> [format {
		    mwutil::processTraversal %%W Tablelist <%s>
		} $pattern]
	    }
	}
    }
    bind TablelistEdit <FocusIn> {
	set tablelist::W [tablelist::getTablelistPath %W]
	set tablelist::ns${tablelist::W}::data(editFocus) %W
    }

    #
    # Define some emacs-like key bindings for the binding tag TablelistEdit
    #
    foreach pattern {Meta-b Meta-f} amount {-1 1} {
	##nagelfar ignore
	bind TablelistEdit <$pattern> [format {
	    if {!$tk_strictMotif && ![tablelist::isKeyReserved %%W %s]} {
		tablelist::goLeftRight %%W %d
	    }
	} $pattern $amount]
    }
    foreach pattern {Control-p Control-n} amount {-1 1} {
	##nagelfar ignore
	bind TablelistEdit <$pattern> [format {
	    if {!$tk_strictMotif && ![tablelist::isKeyReserved %%W %s]} {
		tablelist::goUpDown %%W %d
	    }
	} $pattern $amount]
    }
    bind TablelistEdit <Meta-less> {
	if {!$tk_strictMotif &&
	    ![tablelist::isKeyReserved %W Meta-less]} {
	    tablelist::goToNextPrevCell %W 1 0 -1
	}
    }
    bind TablelistEdit <Meta-greater> {
	if {!$tk_strictMotif &&
	    ![tablelist::isKeyReserved %W Meta-greater]} {
	    tablelist::goToNextPrevCell %W -1 0 0
	}
    }

    #
    # Define some bindings for the binding tag TablelistEdit that
    # redirect the mouse wheel events to the containing scrollable
    # frame (if any) or propagate them to the tablelist's body
    #
    catch {
	bind TablelistEdit <MouseWheel> {
	    if {[tablelist::hasMouseWheelBindings %W y]} {
		set tablelist::W [tablelist::getTablelistPath %W]
		set tablelist::w [$tablelist::W cget -ymousewheelwindow]
		if {[winfo exists $tablelist::w] &&
		    ![mwutil::hasFocus $tablelist::W]} {
		    mwutil::genMouseWheelEvent $tablelist::w \
			<MouseWheel> %X %Y %D
		    break
		}
	    } elseif {![tablelist::isComboTopMapped %W] &&
		      ![tablelist::isMenuPosted %W]} {
		set tablelist::W [tablelist::getTablelistPath %W]
		mwutil::genMouseWheelEvent [$tablelist::W bodypath] \
		    <MouseWheel> %X %Y %D
	    }
	}
	bind TablelistEditBreak <MouseWheel> { break }

	bind TablelistEdit <Option-MouseWheel> {
	    if {[tablelist::hasMouseWheelBindings %W y]} {
		set tablelist::W [tablelist::getTablelistPath %W]
		set tablelist::w [$tablelist::W cget -ymousewheelwindow]
		if {[winfo exists $tablelist::w] &&
		    ![mwutil::hasFocus $tablelist::W]} {
		    mwutil::genMouseWheelEvent $tablelist::w \
			<Option-MouseWheel> %X %Y %D
		    break
		}
	    } elseif {![tablelist::isComboTopMapped %W] &&
		      ![tablelist::isMenuPosted %W]} {
		set tablelist::W [tablelist::getTablelistPath %W]
		mwutil::genMouseWheelEvent [$tablelist::W bodypath] \
		    <Option-MouseWheel> %X %Y %D
	    }
	}
	bind TablelistEditBreak <Option-MouseWheel> { break }
    }
    catch {
	bind TablelistEdit <Shift-MouseWheel> {
	    if {[tablelist::hasMouseWheelBindings %W x]} {
		set tablelist::W [tablelist::getTablelistPath %W]
		set tablelist::w [$tablelist::W cget -xmousewheelwindow]
		if {[winfo exists $tablelist::w] &&
		    ![mwutil::hasFocus $tablelist::W]} {
		    mwutil::genMouseWheelEvent $tablelist::w \
			<Shift-MouseWheel> %X %Y %D
		    break
		}
	    } elseif {![tablelist::isComboTopMapped %W] &&
		      ![tablelist::isMenuPosted %W]} {
		set tablelist::W [tablelist::getTablelistPath %W]
		mwutil::genMouseWheelEvent [$tablelist::W bodypath] \
		    <Shift-MouseWheel> %X %Y %D
	    }
	}
	bind TablelistEditBreak <Shift-MouseWheel> { break }

	bind TablelistEdit <Shift-Option-MouseWheel> {
	    if {[tablelist::hasMouseWheelBindings %W x]} {
		set tablelist::W [tablelist::getTablelistPath %W]
		set tablelist::w [$tablelist::W cget -xmousewheelwindow]
		if {[winfo exists $tablelist::w] &&
		    ![mwutil::hasFocus $tablelist::W]} {
		    mwutil::genMouseWheelEvent $tablelist::w \
			<Shift-Option-MouseWheel> %X %Y %D
		    break
		}
	    } elseif {![tablelist::isComboTopMapped %W] &&
		      ![tablelist::isMenuPosted %W]} {
		set tablelist::W [tablelist::getTablelistPath %W]
		mwutil::genMouseWheelEvent [$tablelist::W bodypath] \
		    <Shift-Option-MouseWheel> %X %Y %D
	    }
	}
	bind TablelistEditBreak <Shift-Option-MouseWheel> { break }
    }
    if {$winSys eq "x11"} {
	foreach detail {4 5} {
	    ##nagelfar ignore
	    bind TablelistEdit <Button-$detail> [format {
		if {[tablelist::hasMouseWheelBindings %%W y]} {
		    set tablelist::W [tablelist::getTablelistPath %%W]
		    set tablelist::w [$tablelist::W cget -ymousewheelwindow]
		    if {[winfo exists $tablelist::w] &&
			![mwutil::hasFocus $tablelist::W]} {
			event generate $tablelist::w <Button-%s> \
			    -rootx %%X -rooty %%Y
			break
		    }
		} elseif {![tablelist::isComboTopMapped %%W] &&
			  ![tablelist::isMenuPosted %%W]} {
		    set tablelist::W [tablelist::getTablelistPath %%W]
		    event generate [$tablelist::W bodypath] <Button-%s> \
			-rootx %%X -rooty %%Y
		}
	    } $detail $detail]
	    bind TablelistEditBreak <Button-$detail> { break }

	    ##nagelfar ignore
	    bind TablelistEdit <Shift-Button-$detail> [format {
		if {[tablelist::hasMouseWheelBindings %%W x]} {
		    set tablelist::W [tablelist::getTablelistPath %%W]
		    set tablelist::w [$tablelist::W cget -xmousewheelwindow]
		    if {[winfo exists $tablelist::w] &&
			![mwutil::hasFocus $tablelist::W]} {
			event generate $tablelist::w <Shift-Button-%s> \
			    -rootx %%X -rooty %%Y
			break
		    }
		} elseif {![tablelist::isComboTopMapped %%W] &&
			  ![tablelist::isMenuPosted %%W]} {
		    set tablelist::W [tablelist::getTablelistPath %%W]
		    event generate [$tablelist::W bodypath] <Shift-Button-%s> \
			-rootx %%X -rooty %%Y
		}
	    } $detail $detail]
	    bind TablelistEditBreak <Shift-Button-$detail> { break }
	}

	if {$::tk_patchLevel eq "8.7a3"} {
	    foreach detail {6 7} {
		##nagelfar ignore
		bind TablelistEdit <Button-$detail> [format {
		    if {[tablelist::hasMouseWheelBindings %%W x]} {
			set tablelist::W [tablelist::getTablelistPath %%W]
			set tablelist::w [$tablelist::W cget -xmousewheelwindow]
			if {[winfo exists $tablelist::w] &&
			    ![mwutil::hasFocus $tablelist::W]} {
			    event generate $tablelist::w <Button-%s> \
				-rootx %%X -rooty %%Y
			    break
			}
		    } elseif {![tablelist::isComboTopMapped %%W] &&
			      ![tablelist::isMenuPosted %%W]} {
			set tablelist::W [tablelist::getTablelistPath %%W]
			event generate [$tablelist::W bodypath] <Button-%s> \
			    -rootx %%X -rooty %%Y
		    }
		} $detail $detail]
		bind TablelistEditBreak <Button-$detail> { break }
	    }
	}
    }
    if {[llength [info commands ::tk::PreciseScrollDeltas]] != 0} {
	bind TablelistEdit <TouchpadScroll> {
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
	bind TablelistEditBreak <TouchpadScroll> { break }
    }
}

#------------------------------------------------------------------------------
# tablelist::insertChar
#
# Inserts the string str ("\t" or "\n") into the entry-like widget w at the
# point of the insertion cursor.
#------------------------------------------------------------------------------
proc tablelist::insertChar {w str} {
    set class [winfo class $w]
    if {$class eq "Text" || $class eq "Ctext"} {
	if {$str eq "\n"} {
	    eval [string map {"%W" "$w"} [bind Text <Return>]]
	} else {
	    eval [string map {"%W" "$w"} [bind Text <Control-i>]]
	}
	return -code break ""
    } elseif {[regexp {^(T?Entry|TCombobox|T?Spinbox)$} $class]} {
	if {[string match "T*" $class]} {
	    if {[llength [info procs "::ttk::entry::Insert"]] != 0} {
		ttk::entry::Insert $w $str
	    } else {
		tile::entry::Insert $w $str
	    }
	} elseif {[llength [info procs "::tk::EntryInsert"]] != 0} {
	    tk::EntryInsert $w $str
	} else {
	    tkEntryInsert $w $str
	}
	return -code break ""
    }
}

#------------------------------------------------------------------------------
# tablelist::cancelEditing
#
# Invokes the doCancelEditing procedure.
#------------------------------------------------------------------------------
proc tablelist::cancelEditing w {
    if {[isComboTopMapped $w]} {
	return -code break ""
    }

    set win [getTablelistPath $w]
    upvar ::tablelist::ns${win}::data data
    if {[info exists data(sourceRow)]} {	;# move operation in progress
	return -code break ""
    }

    doCancelEditing $win
    return -code break ""
}

#------------------------------------------------------------------------------
# tablelist::finishEditing
#
# Invokes the doFinishEditing procedure.  The sequence argument is either
# "Return" or "Control-Command-a", or of the form "modifier-key", where
# modifier = "Alt|Command" and key = "Return|KP_Enter|a|d|u".
#------------------------------------------------------------------------------
proc tablelist::finishEditing {w sequence} {
    if {[isComboTopMapped $w]} {
	return -code break ""
    }

    set win [getTablelistPath $w]
    upvar ::tablelist::ns${win}::data data
    set editRow $data(editRow)
    set editCol $data(editCol)
    set lst [split $sequence -]
    set len [llength $lst]

    if {!$data($editCol-allowduplicates) && $len > 1} {
	bell
	return -code break ""
    }

    if {![doFinishEditing $win] || $len == 1} {
	return -code break ""
    }

    set text [doCellCget $editRow $editCol $win -text]

    switch [lindex $lst end] {
	Return - KP_Enter {		;# fill the column's selected cells
	    foreach cellIdx [curCellSelection $win 0] {
		##nagelfar ignore
		scan $cellIdx "%d,%d" row col
		if {$col == $editCol} {
		    doCellConfig $row $col $win -text $text
		}
	    }
	}

	a {				;# fill all cells of the column
	    fillcolumnSubCmd $win [list $editCol -text $text]
	}

	d {				;# fill down within the column
	    set itemCount $data(itemCount)
	    for {set row [expr {$editRow + 1}]} {$row < $itemCount} {incr row} {
		doCellConfig $row $editCol $win -text $text
	    }
	}

	u {				;# fill up within the column
	    for {set row [expr {$editRow - 1}]} {$row >= 0} {incr row -1} {
		doCellConfig $row $editCol $win -text $text
	    }
	}
    }

    genVirtualEvent $win <<TablelistCopyFinished>> $editCol
    if {$data(-aftercopycommand) ne ""} {
	uplevel #0 $data(-aftercopycommand) [list $win $editCol]
    }
    return -code break ""
}

#------------------------------------------------------------------------------
# tablelist::goToNextPrevCell
#
# Moves the edit window into the next or previous editable cell different from
# the one indicated by the given row and column, if there is such a cell.
#------------------------------------------------------------------------------
proc tablelist::goToNextPrevCell {w amount args} {
    if {[isComboTopMapped $w]} {
	return -code break ""
    }

    variable winSys
    if {$winSys eq "aqua" &&
	($::tk::Priv(postedMb) ne "" || $::tk::Priv(popup) ne "")} {
	return -code break ""
    }

    set win [getTablelistPath $w]
    upvar ::tablelist::ns${win}::data data

    if {[llength $args] == 0} {
	set row $data(editRow)
	set col $data(editCol)
	set cmd condChangeSelection
    } else {
	foreach {row col} $args {}
	set cmd changeSelection
    }

    if {![doFinishEditing $win]} {
	return -code break ""
    }

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
	    return -code break ""
	} elseif {[isRowViewable $win $row] && !$data($col-hide) &&
		  [isCellEditable $win $row $col]} {
	    doEditCell $win $row $col 0 $cmd
	    return -code break ""
	}
    }
}

#------------------------------------------------------------------------------
# tablelist::goLeftRight
#
# Moves the edit window into the previous or next editable cell of the current
# row if the cell being edited is not the first/last editable one within that
# row.
#------------------------------------------------------------------------------
proc tablelist::goLeftRight {w amount} {
    if {[isComboTopMapped $w]} {
	return -code break ""
    }

    set win [getTablelistPath $w]
    upvar ::tablelist::ns${win}::data data
    set row $data(editRow)
    set col $data(editCol)

    if {![doFinishEditing $win]} {
	return -code break ""
    }

    while 1 {
	incr col $amount
	if {$col < 0 || $col > $data(lastCol)} {
	    return -code break ""
	} elseif {!$data($col-hide) && [isCellEditable $win $row $col]} {
	    doEditCell $win $row $col 0 condChangeSelection
	    return -code break ""
	}
    }
}

#------------------------------------------------------------------------------
# tablelist::goUpDown
#
# Invokes the goToPrevNextLine procedure.
#------------------------------------------------------------------------------
proc tablelist::goUpDown {w amount} {
    if {[isComboTopMapped $w]} {
	return -code break ""
    }

    set win [getTablelistPath $w]
    upvar ::tablelist::ns${win}::data data
    set editRow $data(editRow)
    set editCol $data(editCol)

    if {![doFinishEditing $win]} {
	return -code break ""
    }

    goToPrevNextLine $win $amount $editRow $editCol condChangeSelection
    return -code break ""
}

#------------------------------------------------------------------------------
# tablelist::goToPrevNextLine
#
# Moves the edit window into the last or first editable cell that is located in
# the specified column and has a row index less/greater than the given one, if
# there is such a cell.
#------------------------------------------------------------------------------
proc tablelist::goToPrevNextLine {win amount row col cmd} {
    upvar ::tablelist::ns${win}::data data
    while 1 {
	incr row $amount
	if {$row < 0 || $row > $data(lastRow)} {
	    return 0
	} elseif {[isRowViewable $win $row] &&
		  [isCellEditable $win $row $col]} {
	    doEditCell $win $row $col 0 $cmd
	    return 1
	}
    }
}

#------------------------------------------------------------------------------
# tablelist::goToPriorNextPage
#
# Moves the edit window up or down by one page within the current column if the
# cell being edited is not the first/last editable one within that column.
#------------------------------------------------------------------------------
proc tablelist::goToPriorNextPage {w amount} {
    if {[isComboTopMapped $w]} {
	return -code break ""
    }

    set win [getTablelistPath $w]
    upvar ::tablelist::ns${win}::data data
    set row $data(editRow)
    set col $data(editCol)

    if {![doFinishEditing $win]} {
	return -code break ""
    }

    #
    # Check whether there is any viewable editable cell
    # above/below the current one, in the same column
    #
    while 1 {
	incr row $amount
	if {$row < 0 || $row > $data(lastRow)} {
	    return -code break ""
	} elseif {[isRowViewable $win $row] &&
		  [isCellEditable $win $row $col]} {
	    break
	}
    }

    #
    # Scroll up/down the view by one page and get the corresponding row index
    #
    seeRow $win $row
    set bbox [bboxSubCmd $win $row]
    yviewSubCmd $win [list scroll $amount pages]
    set newRow [rowIndex $win @0,[lindex $bbox 1] 0]

    if {$amount < 0} {
	if {$newRow < $row} {
	    if {![goToPrevNextLine $win -1 [expr {$newRow + 1}] $col \
		  changeSelection]} {
		goToPrevNextLine $win 1 $newRow $col changeSelection
	    }
	} else {
	    goToPrevNextLine $win 1 -1 $col changeSelection
	}
    } else {
	if {$newRow > $row} {
	    if {![goToPrevNextLine $win 1 [expr {$newRow - 1}] $col \
		  changeSelection]} {
		goToPrevNextLine $win -1 $newRow $col changeSelection
	    }
	} else {
	    goToPrevNextLine $win -1 $data(itemCount) $col changeSelection
	}
    }

    return -code break ""
}

#------------------------------------------------------------------------------
# tablelist::isKeyReserved
#
# Checks whether the given keysym is used in the standard binding scripts
# associated with the widget w, which is assumed to be the edit window or one
# of its descendants.
#------------------------------------------------------------------------------
proc tablelist::isKeyReserved {w keySym} {
    set win [getTablelistPath $w]
    upvar ::tablelist::ns${win}::data data

    set name [getEditWindow $win $data(editRow) $data(editCol)]
    variable editWin
    return [expr {[lsearch -exact $editWin($name-reservedKeys) $keySym] >= 0}]
}

#------------------------------------------------------------------------------
# tablelist::hasMouseWheelBindings
#
# Checks whether the given widget, which is assumed to be the edit window or
# one of its descendants, has mouse wheel bindings for the given axis (x or y).
#------------------------------------------------------------------------------
proc tablelist::hasMouseWheelBindings {w axis} {
    if {$axis eq "x"} {
	return [regexp {^(Text|Ctext)$} [winfo class $w]]
    } else {
	if {[regexp {^(Text|Ctext|TCombobox|TSpinbox)$} [winfo class $w]]} {
	    return 1
	} else {
	    set bindTags [bindtags $w]
	    return [expr {([lsearch -exact $bindTags "MentryDateTime"] >= 0 ||
			   [lsearch -exact $bindTags "MentryMeridian"] >= 0 ||
			   [lsearch -exact $bindTags "MentryIPAddr"] >= 0 ||
			   [lsearch -exact $bindTags "MentryIPv6Addr"] >= 0) &&
			  ($::mentry::version >= 3.2)}]
	}
    }
}

#------------------------------------------------------------------------------
# tablelist::isComboTopMapped
#
# Checks whether the given widget is a component of an Oakley combobox having
# its toplevel child mapped.  This is needed in our binding scripts to make
# sure that the interactive cell editing won't be terminated prematurely,
# because Bryan Oakley's combobox keeps the focus on its entry child even if
# its toplevel component is mapped.
#------------------------------------------------------------------------------
proc tablelist::isComboTopMapped w {
    set par [winfo parent $w]
    if {[winfo class $par] eq "Combobox" &&
	[winfo exists $par.top] && [winfo ismapped $par.top]} {
	return 1
    } else {
	return 0
    }
}

#------------------------------------------------------------------------------
# tablelist::isMenuPosted
#
# Checks whether the given widget is a menubutton having its menu posted.  This
# is needed in our binding scripts for mouse wheel events to make sure that
# they won't generate an endless loop, because of the global grab set on the
# menu when the latter is posted.
#------------------------------------------------------------------------------
proc tablelist::isMenuPosted w {
    if {[winfo class $w] eq "Menubutton" && [winfo ismapped [$w cget -menu]]} {
	return 1
    } else {
	return 0
    }
}
