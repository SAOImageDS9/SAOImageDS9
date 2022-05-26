## -*- tcl -*-
# # ## ### ##### ######## ############# #####################
##
#	Panel for managing an unordered list of values.
#	A simpler form of 'widget::listentry'. Removed features
#	- state normal/disabled --> always normal
#	- height                --> Fixed at 20
#	- ordered               --> always unordered
#	- allow-duplicates      --> no duplicates allowed
#	- transform             --> no transformation from entry
#				    field to list
#	- browse                --> no browsing
#
# Copyright (c) 2012 ActiveState Software Inc. Rewrite of original.

# XXX TODO: Define a style for the whole megawidget (WidgetListEntry)
# XXX TODO: Ensure automatic definition of the style in all themes, on
#           theme changes.
# XXX TODO: Ensure that pre-existing definitions of the style('s
#           options) are not touched.

# # ## ### ##### ######## ############# #####################
## Requisites
# -- when testing -- lappend auto_path [file dirname [file dirname [file normalize [info script]]]]

package require Tcl 8.5                ; # {*}, dict
package require Tk 8.5                 ; # includes Ttk
package require snit                   ; # Tcllib, OO core.
package require widget::scrolledwindow
package require widget::validator
package require tooltip
package require msgcat
package require img::png

# # ## ### ##### ######## ############# #####################
## Implementation

# @mdgen OWNER: msgs/*
# @mdgen OWNER: icons/add.png
# @mdgen OWNER: icons/delete.png

snit::widget ::widget::listsimple {
    hulltype ttk::frame

    # # ## ### ##### ######## ############# #####################
    ## API. Definition

    # FQ-name of the variable (global, or namespace) holding the list
    # managed by the widget.

    option -listvariable -default {} -configuremethod C-listvariable

    # Callback. Invoked to retrieve and store a list of values the
    # user can enter. Must be specified at widget construction time.
    # If specified entry of values is done through a combo-entry
    # widget whose list is preloaded with these values.
    #
    # Signature:
    # {*}$options(-values) get       : -> list
    # {*}$options(-values) set $list : void

    option -values -default {} -readonly 1

    # Callback. Invoked to validate the contents of the entry field
    # after changes (every key). Returns a boolean value, true for OK,
    # and false otherwise. Is provided with a namespaced variable it
    # can store the reason for invalidity into.
    #
    # Signature:
    # {*}$options(-validate) $text errvar : -> bool

    option -validate -default {} -readonly 1

    # Skin: Specify the texts, images, and colors to use in labels and
    # tooltips. The texts are run through msgcat::mc for l10n. I.e. they
    # can be catalog keys also.

    option -skin-add             -default wle.add             -configuremethod C-skin-add
    option -skin-remove          -default wle.remove          -configuremethod C-skin-remove
    option -skin-tip-add         -default wle.tip.add         -configuremethod C-skin-tip
    option -skin-tip-remove      -default wle.tip.remove      -configuremethod C-skin-tip
    option -skin-tip-main        -default wle.tip.main        -configuremethod C-skin-tip
    option -skin-tip-entry       -default wle.tip.entry       -configuremethod C-skin-tip
    option -skin-tip-list        -default wle.tip.list        -configuremethod C-skin-tip
    option -skin-tip-empty       -default wle.tip.empty       -configuremethod C-skin-tip
    option -skin-tip-duplicate   -default wle.tip.dup         -configuremethod C-skin-tip
    option -skin-tip-add-none    -default wle.tip.add-none    -configuremethod C-skin-tip
    option -skin-tip-remove-none -default wle.tip.remove-none -configuremethod C-skin-tip

    option -skin-img-add         -default {}                  -configuremethod C-skin-img-add
    option -skin-img-remove      -default {}                  -configuremethod C-skin-img-remove

    option -skin-invalid-color   -default {}                  -configuremethod C-skin-color

    # # ## ### ##### ######## ############# #####################
    ## API. Implementation

    constructor {args} {
	# DEBUG # $hull configure -relief raised -bd 2 -bg coral

	# Pull in all options, then create the interface using the data.
	$self configurelist $args
	$self CreateInterface

	# Fire initial validations.
	$self OnSelectionChange
	$self OnContentChange
	return
    }

    destructor {
	tooltip::tooltip $win.add  {}
	tooltip::tooltip $win.rem  {}
	tooltip::tooltip $win      {}
	tooltip::tooltip $win.e    {}
	tooltip::tooltip $win.l    {}

	if {![winfo exists $win.e]} return
	# Even with .e existing the behaviour might not be attached
	# due to error there.
	catch { widget::validator detach $win.e }
	return
    }

    # # ## ### ##### ######## ############# #####################
    ## GUI setup

    method CreateInterface {} {
	# Create widgets ...
	ttk::button            $win.add -command [mymethod Add] -state disabled
	ttk::button            $win.rem -command [mymethod Remove]
	widget::scrolledwindow $win.sw  -scrollbar vertical
	listbox                $win.l   -selectmode extended -height 20 -bd 0

	$win.add configure -text [msg skin-add]    -image [img skin-img-add]
	$win.rem configure -text [msg skin-remove] -image [img skin-img-remove]

	centry $win.e -textvariable [myvar mytext]

	# Initialize the tooltips (widgets have to exist)
	tip .add skin-tip-add
	tip .rem skin-tip-remove
	tip {}   skin-tip-main
	tip .e   skin-tip-entry
	tip .l   skin-tip-list

	# Layout (grid, mostly) ...

	g .add  2 0  wen 1m 1m 1 1
	g .rem  2 1  wen 1m 1m 1 1
	g .e    1 0 swen 1m 1m 1 1
	g .sw   1 1 swen 1m 1m 3 1

	gc column 0 0
	gc column 1 1
	gc column 2 0

	gc row 0 0
	gc row 1 0
	gc row 2 0
	gc row 3 1

	$win.sw setwidget $win.l

	# Bindings for actions ...

	$win.e configure -textvariable [myvar mytext] -width 50

	if {$options(-listvariable) ne {}} {
	    $win.l configure -listvariable $options(-listvariable)
	}

	widget::validator attach $win.e [invalid-color] [mymethod ValidateEntry]

	bind $win.l <<ListboxSelect>> [mymethod OnSelectionChange]

	foreach w {.add .rem .sw .e} {
	    bindtags $win$w [linsert [bindtags $win$w] 1 $w]
	}
	bindtags $win.l [list $win.l $win Listbox [winfo toplevel $win] all]

	setkey $win Return   [mymethod Add]
	setkey $win KP_Enter [mymethod Add]
	setkey $win Delete   [mymethod Remove]

	# And done
	return
    }

    # Interface setup helpers, shorthands.

    proc g {w col row stick padx pady rowspan colspan} {
	upvar 1 win win
	grid $win$w \
	    -columnspan $colspan -column $col \
	    -rowspan    $rowspan -row    $row \
	    -padx $padx \
	    -pady $pady \
	    -sticky $stick
	return
    }

    proc gc {what i weight} {
	upvar 1 win win
	grid ${what}configure $win $i -weight $weight
	return
    }

    proc setkey {w k command} {
	bind $w <Key-$k> $command
	foreach c [winfo children $w] {
	    setkey $c $k $command
	}
	return
    }

    proc centry {w args} {
	upvar options options self self
	if {[llength $options(-values)]} {
	    return [ttk::combobox $w -values [$self vget] {*}$args]
	} else {
	    return [ttk::entry $w {*}$args]
	}
    }

    # # ## ### ##### ######## ############# #####################
    ## Handle internal events ...

    method Add {} {
	# User ordered the transfer of the entry field's contents into the list.
	# Ignore if the contents are invalid (<==> button inactive).
	#
	# The checks are required because the action can be triggered
	# from the keyboard as well, which can't be deactivated.

	$win.add instate disabled return
	$win.e   instate invalid  return

	# Move the new element into the list
	$win.l insert end $mytext
	$win.l see    end

	# ... and save it for future quick-entry (if so specified).
	$self SaveMRU $mytext

	# Reset entry contents for the next element the user my enter.
	$win.e delete 0 end

	$self OnContentChange
	return
    }

    method Remove {} {
	# User ordered the removal of the selected elements in the list.
	# Ignore for selection.empty <==> button inactive.
	#
	# The check is required because the action can be triggered
	# from the keyboard as well, which can't be deactivated.

	$win.rem instate disabled return

	# Remove entries from the bottom up. Using this order avoids
	# us having to recalculate the indices as entries get removed.
	foreach idx [lsort -integer -decreasing [$win.l curselection]] {
	    $win.l delete $idx
	}

	$self OnContentChange
	$self OnSelectionChange
	return
    }

    method OnSelectionChange {args} {
	# Listbox selection changed. Switch dependent widgets:
	#
	# -- button remove:
	#	 active <==> not selection.empty

	if {[llength [$win.l curselection]]} {
	    tip .rem skin-tip-remove
	    $win.rem configure -state normal
	} else {
	    tip .rem skin-tip-remove skin-tip-remove-none
	    $win.rem configure -state disabled
	}
	return
    }

    method OnContentChange {} {
	# Listbox content changed. Switch dependent widgets.
	#
	# -- button remove:
	#	list.empty ==> selection.empty <==> not active

	if {[$win.l size]} {
	    tip .l skin-tip-list
	    # Do not reconfigure the button. For a non-empty list the
	    # selection is in control.
	} else {
	    tip .l skin-tip-list skin-tip-empty
	    $win.rem configure -state disabled
	}
	return
    }

    method ValidateEntry {text} {
	# Text in the entry field changed. Validate.
	# Returns a boolean: True is valid, otherwise not.

	if {[llength $options(-validate)]} {
	    # Run custom validation.
	    set valid [uplevel \#0 \
			   [list {*}$options(-validate) \
				$text [myvar myerr]]]
	    if {!$valid} {
		set msge $myerr
		set msga $myerr
	    }

	} else {
	    # Run standard validation: An empty entry is not
	    # valid. Everything else is.

	    set valid [expr {$text ne ""}]
	    if {!$valid} {
		set msge skin-tip-empty
		set msga skin-tip-add-none
	    }
	}

	# Note: A string which is already found in the list is not
	# valid, regardless.

	if {$valid && ([lsearch -exact [$win.l get 0 end] $text] >= 0)} {
	    set valid 0
	    set msga skin-tip-duplicate
	    set msge skin-tip-duplicate
	}

	# Switch dependent widget based on entry validity
	if {$valid} {
	    tip .e   skin-tip-entry
	    tip .add skin-tip-add
	    $win.add configure -state normal
	} else {
	    tip .e   skin-tip-entry $msge
	    tip .add skin-tip-add   $msga
	    $win.add configure -state disabled
	}

	return $valid
    }

    # # ## ### ##### ######## ############# #####################
    ## Backend handling for -values.

    method SaveMRU {text} {
	# Ignore if -values is not specified <==> no combobox used.
	if {![llength $options(-values)]} return

	# Manage the combobox's list, placing the newly entered value
	# at the beginning (possibly creating it). The result is
	# further saved to the storage backend for -values.

	set values [$win.e cget -values]
	set pos [lsearch -exact $values $text]
	if {$pos < 0} {
	    # Does not exist, insert at front
	    set values [linsert $values 0 $text]
	} else {
	    # Exists in the list, move to front.
	    set values [linsert [lreplace $values $pos $pos] 0 $text]
	}

	$win.e configure -values $values
	$self vsave              $values
	return	
    }

    # Low-level methods to talk to -values. They assume that their
    # caller has already checked that it is possible to invoke them
    # (-values ne {}).

    method vget {} {
	return [uplevel \#0 [list {*}$options(-values) get]]
    }

    method vsave {list} {
	uplevel \#0 [list {*}$options(-values) set $list]
	return
    }

    # # ## ### ##### ######## ############# #####################
    ## Management of the text parts of the widget's skin.

    # Map of the text options (without -skin-prefix), and their
    # associated/affected internal widgets.
    #
    #                 | .arel
    # -----------------------
    # add             |  *
    # remove          |   *
    # -----------------------
    # tip-main        | *
    # tip-add         |  *
    # tip-add-none    |  *
    # tip-duplicate   |  * *
    # tip-entry       |    *
    # tip-empty       |    **
    # tip-list        |     *
    # tip-remove      |   *
    # tip-remove-none |   *

    typevariable ourwmap -array {
	-skin-tip-main        {{}}
	-skin-tip-add         {.add}
	-skin-tip-add-none    {.add}
	-skin-tip-duplicate   {.add .e}
	-skin-tip-entry       {.e}
	-skin-tip-empty       {.e .l}
	-skin-tip-list        {.l}
	-skin-tip-remove      {.rem}
	-skin-tip-remove-none {.rem}
    }

    # Shorthand for access to the message catalogs, integrated access
    # to the options.

    proc msg {k} {
	upvar 1 options options
	if {[info exists options(-$k)]} {
	    set k $options(-$k)
	}
	return [msgcat::mc $k]
    }

    # Shorthand to configure the tooltips. The relevant message keys
    # (multiple!) are passed as the args and translated into the
    # string to display.

    proc tip {w args} {
	#puts T|$w|$args|
	upvar 1 options options win win mytip mytip

	# Note that we save the list of keys used for the widget so
	# that we can regenerate the string if/when the skin is
	# reconfigured. See C-skin-tip below for where such is
	# handled.

	set mytip($w) $args
	TaS $w $args
	return
    }

    # Translate-and-Set
    proc TaS {w keys} {
	upvar 1 win win options options
	foreach k $keys {
	    lappend s [msg $k]
	}
	tooltip::tooltip $win$w [join $s "\n* "]
	return
    }

    variable mytip -array {}

    # One of the tooltip text skin options was reconfigured.

    method C-skin-tip {o value} {
	# We ignore non-changes.
	set old $options($o)
	if {$old eq $value} return

	# For actual changes we map from option to the widgets we have
	# to reconfigure, and regenerate their tooltips. Note that it
	# is easier to do this unconditionally then to check if the
	# regeneration result is actually different.

	set options($o) $value
	foreach w $ourwmap($o) {
	    TaS $w $mytip($w)
	}
	return
    }

    # One of the button text skin options was reconfigured.

    method C-skin-add {o value} {
	# We ignore non-changes.
	set old $options($o)
	if {$old eq $value} return

	# Actual changes are saved and forced into the associated
	# widget.

	set options($o) $value
	$win.add configure -text [msg skin-add]
	return
    }

    # One of the button text skin options was reconfigured.

    method C-skin-remove {o value} {
	# We ignore non-changes.
	set old $options($o)
	if {$old eq $value} return

	# Actual changes are saved and forced into the associated
	# widget.

	set options($o) $value
	$win.rem configure -text [msg skin-remove]
	return
    }

    # # ## ### ##### ######## ############# #####################
    ## Management of the image parts of the widget's skin.

    typevariable ourimg -array {}

    proc img {k} {
	upvar 1 options options ourbase ourbase ourimg ourimg ouricon ouricon
	# Non-default option value first...
	if {$options(-$k) ne {}} {
	    return $options(-$k)
	}
	# XXX TODO: check style in the theme...
	# Last fallback, hardwired settings. Check cache first...
	if {[info exists ourimg($k)]} {
	    return $ourimg($k)
	}
	# First use of the icon, create it, fill cache
	set ourimg($k) [image create photo -file $ourbase/icons/$ouricon($k)]
	return $ourimg($k)
    }

    # One of the button image skin options was reconfigured.

    method C-skin-img-add {o value} {
	# We ignore non-changes.
	set old $options($o)
	if {$old eq $value} return

	# Actual changes are saved and forced into the associated
	# widget.

	set options($o) $value
	$win.add configure -image [img skin-img-add]
	return
    }

    # One of the button image skin options was reconfigured.

    method C-skin-img-remove {o value} {
	# We ignore non-changes.
	set old $options($o)
	if {$old eq $value} return

	# Actual changes are saved and forced into the associated
	# widget.

	set options($o) $value
	$win.rem configure -image [img skin-img-remove]
	return
    }

    # # ## ### ##### ######## ############# #####################
    ## Management of the color parts of the widget's skin.

    proc invalid-color {} {
	upvar 1 options options
	# Non-default option value first...
	set color $options(-skin-invalid-color)
	if {$color ne {}} { return $color }
	# XXX TODO: check style in the theme...
	# Last, use the hardwired settings
	return yellow
    }

    # The entry color skin option was reconfigured.

    method C-skin-color {o value} {
	# We ignore non-changes.
	set old $options($o)
	if {$old eq $value} return

	# Actual changes are saved and forced into the associated
	# widget.

	set options($o) $value

	widget::validator detach $win.e
	widget::validator attach $win.e [invalid-color] [mymethod ValidateEntry]
	return
    }

    # # ## ### ##### ######## ############# #####################
    ## Storage backend for the entry field, and validation error messages.

    variable mytext {}
    variable myerr  {}

    # # ## ### ##### ######## ############# #####################
    ## List variable management.

    method C-listvariable {option value} {
	# Ignore non-changes
	if {$value eq $options(-listvariable)} return

	# Save for future comparisons, and
	set options(-listvariable) $value

	# ... link to widget, if present
	if {![winfo exists $win.l]} return
	$win.l configure -listvariable $value

	# ... force revalidation of the entry (duplicate check status may change)
	widget::validator validate $win.e
	return
    }

    # # ## ### ##### ######## ############# #####################
    # Shared information about standard icons, and message catalog setup.

    typevariable ourbase {}
    typevariable ouricon -array {
	skin-img-add    add.png
	skin-img-remove delete.png
    }

    typeconstructor {
	set ourbase [file dirname [file normalize [info script]]]
	#puts $base

	msgcat::mcload $ourbase/msgs
	return
    }

    # # ## ### ##### ######## ############# #####################
}

# # ## ### ##### ######## ############# #####################
## Examples, integrated

if 0 {
    proc P {args} { puts "$args -- $::L" }
    ::widget::listsimple .l -listvariable ::L
    pack .l -fill both -expand 1
    trace add variable ::L write P
}

if 0 {
    proc V {cmd args} {
	switch -exact -- $cmd {
	    get { return {hello world} }
	    set { puts [info level 0] }
	    default { error [info level 0] }
	}
    }
    proc P {args} {
	puts "$args -- $::L"
	if {[llength $::L] == 2} {
	    puts reskin...
	    .l configure -skin-tip-duplicate Doppel
	    .l configure -skin-tip-main XXX
	}
    }
    ::widget::listsimple .l -listvariable ::L -values V
    pack .l -fill both -expand 1
    trace add variable ::L write P
}

# # ## ### ##### ######## ############# #####################
## Ready
package provide widget::listsimple 0.1.2
return
