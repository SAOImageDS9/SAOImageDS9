## -*- tcl -*-
# # ## ### ##### ######## ############# #####################
##
#	Panel for managing a list of values.
#
# Copyright (c) 2012 ActiveState Software Inc. Rewrite of original.

# XXX TODO: Define a style for the whole megawidget (WidgetOrderedList)
# XXX TODO: Ensure automatic definition of the style in all themes, on
#           theme changes.
# XXX TODO: Ensure that pre-existing definitions of the style('s
#           options) are not touched.

# XXX FRQ:  Allow duplicate elements ? (-allow-duplicates bool)

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
# @mdgen OWNER: icons/arrow_up.png
# @mdgen OWNER: icons/arrow_down.png
# @mdgen OWNER: icons/folder_explore.png

snit::widget ::widget::listentry {
    hulltype ttk::frame

    # # ## ### ##### ######## ############# #####################
    ## API. Definition

    option -state   -default normal -configuremethod C-state
    option -height  -default 20     -configuremethod C-height

    option -ordered          -default no -readonly 1 -type snit::boolean
    option -allow-duplicates -default no -readonly 1 -type snit::boolean

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

    # Callback. Invoked on current text getting added (therefore
    # valid), generating the actual text to add to the list.
    #
    # Signature:
    # {*}$options(-transform) $text : -> text

    option -transform -default {} -readonly 1

    # Callback. Browsing. Similar to -values, a way of quickly adding
    # elements to the list. In contrast this is dynamically on behalf
    # of the user whereas -values only retrieves values at
    # construction time. -values is more for quick access to
    # preferences and past entries. -browse for browsing directory
    # hierachies an the like.
    #
    # Signature:
    # {*}$options(-browse) $cookievarname : -> list
    #
    # The cookievar'iable is empty on the initial call and saved by
    # the listentry between calls. This enables the callback to
    # maintain a history, if such is desired (like the path of the
    # last directory it used).

    option -browse -default {} -readonly 1

    # Skin: Specify the texts, images, and colors to use in labels and
    # tooltips. The texts are run through msgcat::mc for l10n. I.e. they
    # can be catalog keys also.

    option -skin-add             -default wle.add             -configuremethod C-skin-add
    option -skin-remove          -default wle.remove          -configuremethod C-skin-remove
    option -skin-up              -default wle.up              -configuremethod C-skin-up
    option -skin-down            -default wle.down            -configuremethod C-skin-down
    option -skin-browse          -default wle.browse          -configuremethod C-skin-browse
    option -skin-tip-add         -default wle.tip.add         -configuremethod C-skin-tip
    option -skin-tip-remove      -default wle.tip.remove      -configuremethod C-skin-tip
    option -skin-tip-up          -default wle.tip.up          -configuremethod C-skin-tip
    option -skin-tip-down        -default wle.tip.down        -configuremethod C-skin-tip
    option -skin-tip-browse      -default wle.tip.browse      -configuremethod C-skin-tip
    option -skin-tip-main        -default wle.tip.main        -configuremethod C-skin-tip
    option -skin-tip-entry       -default wle.tip.entry       -configuremethod C-skin-tip
    option -skin-tip-list        -default wle.tip.list        -configuremethod C-skin-tip
    option -skin-tip-empty       -default wle.tip.empty       -configuremethod C-skin-tip
    option -skin-tip-duplicate   -default wle.tip.dup         -configuremethod C-skin-tip
    option -skin-tip-add-none    -default wle.tip.add-none    -configuremethod C-skin-tip
    option -skin-tip-remove-none -default wle.tip.remove-none -configuremethod C-skin-tip

    option -skin-img-add         -default {}                  -configuremethod C-skin-img-add
    option -skin-img-remove      -default {}                  -configuremethod C-skin-img-remove
    option -skin-img-up          -default {}                  -configuremethod C-skin-img-up
    option -skin-img-down        -default {}                  -configuremethod C-skin-img-down
    option -skin-img-browse      -default {}                  -configuremethod C-skin-img-browse

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
	if {$options(-ordered)} {
	    tooltip::tooltip $win.up   {}
	    tooltip::tooltip $win.down {}
	}
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
	ttk::button $win.add  -command [mymethod Add] -state disabled
	ttk::button $win.rem  -command [mymethod Remove]

	if {$options(-ordered)} {
	    ttk::button $win.up   -command [mymethod MoveUp]
	    ttk::button $win.down -command [mymethod MoveDn]
	}
	if {[llength $options(-browse)]} {
	    ttk::button $win.b -command [mymethod Browse]
	}

	widget::scrolledwindow $win.sw   -scrollbar vertical
	listbox                $win.l    -selectmode extended \
	    -height $options(-height) -bd 0

	$win.add  configure -text [msg skin-add]    -image [img skin-img-add]
	$win.rem  configure -text [msg skin-remove] -image [img skin-img-remove]
	if {$options(-ordered)} {
	    $win.up   configure -text [msg skin-up]   -image [img skin-img-up]
	    $win.down configure -text [msg skin-down] -image [img skin-img-down]
	}
	if {[llength $options(-browse)]} {
	    $win.b configure -text [msg skin-browse] -image [img skin-img-browse]
	}
	centry $win.e -textvariable [myvar mytext]

	# Initialize the tooltips (widgets have to exist)
	tip .add  skin-tip-add
	tip .rem  skin-tip-remove
	if {$options(-ordered)} {
	    tip .up   skin-tip-up
	    tip .down skin-tip-down
	}
	if {[llength $options(-browse)]} {
	    tip .b skin-tip-browse
	}
	tip {}    skin-tip-main
	tip .e    skin-tip-entry
	tip .l    skin-tip-list

	# Layout (grid, mostly) ...
	#
	#   0 1 2   E = entry   .e
	# -------   L = listbox .l, actually .sw
	# 0   E B   + = Add
	# 1 ^ L +   - = Remove
	# 2 v L -   ^ = Up     | optional
	# 3   L     V = Down   |
	# -------   B = Browse |

	g .add  2 1  wen 1m 1m 1 1
	g .rem  2 2  wen 1m 1m 1 1
	g .e    1 0 swen 1m 1m 1 1
	g .sw   1 1 swen 1m 1m 3 1

	gc column 0 0
	gc column 1 1
	gc column 2 0

	gc row 0 0
	gc row 1 0
	gc row 2 0
	gc row 3 1

	if {$options(-ordered)} {
	    g .up   0 1 e 1m 1m 1 1
	    g .down 0 2 e 1m 1m 1 1
	}
	if {[llength $options(-browse)]} {
	    g .b 2 0 wn 1m 1m 1 1
	}

	$win.sw setwidget $win.l

	# Bindings for actions ...

	$win.e configure -textvariable [myvar mytext] -width 50

	if {$options(-listvariable) ne {}} {
	    $win.l configure -listvariable $options(-listvariable)
	}

	widget::validator attach $win.e [invalid-color] [mymethod ValidateEntry]

	bind $win.l <<ListboxSelect>> [mymethod OnSelectionChange]

	foreach w {.add .rem .up .down .sw .e} {
	    if {![winfo exists $win$w]} continue
	    bindtags $win$w [linsert [bindtags $win$w] 1 $w]
	}
	bindtags $win.l [list $win.l $win Listbox [winfo toplevel $win] all]

	setkey $win Return   [mymethod Add]
	setkey $win KP_Enter [mymethod Add]
	setkey $win Delete   [mymethod Remove]

	if {$options(-ordered)} {
	    # Keys are not in conflict with listbox bindings.
	    setkey $win Control-Up   [mymethod MoveUp]
	    setkey $win Control-Down [mymethod MoveDn]
	}

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
	set e [split $k -]
	set c [lindex $e end]
	set m [join [lrange $e 0 end-1] -]
	if {$m ne {}} {
	    set e ${m}-Key-$c
	} else {
	    set e Key-$c
	}
	bind $w <$e> $command
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

	set element [Transform $mytext]

	# Move the new element into the list
	$win.l insert end $element
	$win.l see    end

	# ... and save it for future quick-entry (if so specified).
	$self SaveMRU $mytext

	# Reset entry contents for the next element the user my enter.
	Set {}

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

    method MoveUp {} {
	# User ordered to move the selected elements up.
	# Ignore for selection.empty <==> button inactive.
	# Ignore if moving up not possible (already at top).
	#
	# The check is required because the action can be triggered
	# from the keyboard as well, which can't be deactivated.

	$win.up instate disabled return

	# Go over the selection, from the top down.
	# Deselect each element, remove it, reinsert a step higher,
	# and reselect.  As the length of the list doesn't change the
	# following indices are still correct.

	$win.l configure -listvariable {}

	foreach idx [lsort -integer -increasing [$win.l curselection]] {
	    set el [$win.l get $idx]
	    $win.l selection clear $idx
	    $win.l delete $idx
	    incr idx -1
	    $win.l insert $idx $el
	    $win.l selection set $idx
	}

	upvar \#0 $options(-listvariable) L
	set L [$win.l get 0 end]
	$win.l configure -listvariable $options(-listvariable)

	$self HandleMoves

	# Stop event processing. Avoid multiple calls.
	return -code break
    }

    method MoveDn {} {
	# User ordered to move the selected elements down.
	# Ignore for selection.empty <==> button inactive.
	# Ignore if moving up not possible (already at bottom).
	#
	# The check is required because the action can be triggered
	# from the keyboard as well, which can't be deactivated.

	$win.down instate disabled return

	# Go over the selection, from the bottom up.
	# Deselect each element, remove it, reinsert a step lower, and
	# reselect.  As the length of the list doesn't change the
	# following indices are still correct.

	$win.l configure -listvariable {}

	foreach idx [lsort -integer -decreasing [$win.l curselection]] {
	    set el [$win.l get $idx]
	    $win.l selection clear $idx
	    $win.l delete $idx
	    incr idx
	    $win.l insert $idx $el
	    $win.l selection set $idx
	}

	upvar \#0 $options(-listvariable) L
	set L [$win.l get 0 end]
	$win.l configure -listvariable $options(-listvariable)

	$self HandleMoves

	# Stop event processing. Avoid multiple calls.
	return -code break
    }

    method HandleMoves {} {
	if {!$options(-ordered)} return

	# Check the current selection and determine if it can be moved
	# up or down.

	$win.up   configure -state normal
	$win.down configure -state normal

	set nodes [lsort -integer -increasing [$win.l curselection]]

	if {![llength $nodes]} {
	    # Empty selection, no movement at all.
	    $win.up   configure -state disabled
	    $win.down configure -state disabled
	    return
	}

	if {[lindex $nodes 0] == 0} {
	    # Cannot move up, the top element in the selection is
	    # already at the top of the list.
	    $win.up configure -state disabled
	}

	if {[lindex $nodes end] == [expr {[$win.l index end]-1}]} {
	    # Cannot move down, the bottom element of the selection is
	    # already at the bottom of the list.
	    $win.down configure -state disabled
	}
	return
    }

    variable mybrowsecdata {}
    method Browse {} {
	set elements [uplevel \#0 [list {*}$options(-browse) \
				       [myvar mybrowsecdata]]]
	if {![llength $elements]} return

	foreach e $elements {
	    # Note that this automatically drops all invalid elements,
	    # indirectly calling on ValidateEntry
	    Set $e
	    $self Add
	}
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

	$self HandleMoves
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

	$self HandleMoves
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

	# Note:   A string which is already contained in the list is
	#         not valid, if duplicates are not allowed by the
	#         user.
	# Note 2: The search has to use the transformed data for that
	#         is what the list contains.

	if {$valid &&
	    !$options(-allow-duplicates) &&
	    ([Transform $text] in [$win.l get 0 end])} {
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
    ## Action helpers.

    proc Set {text} {
	upvar 1 win win
	$win.e delete 0 end
	$win.e insert 0 $text
	return
    }

    proc Transform {text} {
	upvar 1 options options
	# Without transform return unchanged.
	if {![llength $options(-transform)]} { return $text }
	# Perform chosen transformation.
	return [uplevel \#0 [list {*}$options(-transform) $text]]
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
	-skin-tip-up          {.up}
	-skin-tip-down        {.down}
	-skin-tip-browse      {.b}
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
	    if {![winfo exists $win$w]} continue
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

    # One of the button text skin options was reconfigured.

    method C-skin-up {o value} {
	# We ignore non-changes.
	set old $options($o)
	if {$old eq $value} return

	# Actual changes are saved and forced into the associated
	# widget, if present.

	set options($o) $value
	if {![winfo exists $win.up]} return
	$win.up configure -text [msg skin-up]
	return
    }

    # One of the button text skin options was reconfigured.

    method C-skin-down {o value} {
	# We ignore non-changes.
	set old $options($o)
	if {$old eq $value} return

	# Actual changes are saved and forced into the associated
	# widget, if present.

	set options($o) $value
	if {![winfo exists $win.down]} return
	$win.down configure -text [msg skin-down]
	return
    }

    # One of the button text skin options was reconfigured.

    method C-skin-browse {o value} {
	# We ignore non-changes.
	set old $options($o)
	if {$old eq $value} return

	# Actual changes are saved and forced into the associated
	# widget, if present.

	set options($o) $value
	if {![winfo exists $win.b]} return
	$win.b configure -text [msg skin-browse]
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

    # One of the button image skin options was reconfigured.

    method C-skin-img-up {o value} {
	# We ignore non-changes.
	set old $options($o)
	if {$old eq $value} return

	# Actual changes are saved and forced into the associated
	# widget, if present.

	set options($o) $value
	if {![winfo exists $win.up]} return
	$win.up configure -image [img skin-img-up]
	return
    }

    # One of the button image skin options was reconfigured.

    method C-skin-img-down {o value} {
	# We ignore non-changes.
	set old $options($o)
	if {$old eq $value} return

	# Actual changes are saved and forced into the associated
	# widget, if present.

	set options($o) $value
	if {![winfo exists $win.down]} return
	$win.down configure -image [img skin-img-down]
	return
    }

    # One of the button image skin options was reconfigured.

    method C-skin-img-browse {o value} {
	# We ignore non-changes.
	set old $options($o)
	if {$old eq $value} return

	# Actual changes are saved and forced into the associated
	# widget, if present.

	set options($o) $value
	if {![winfo exists $win.b]} return
	$win.b configure -image [img skin-img-browse]
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
    ## General option management.

    # -state might have changed.

    method C-state {option value} {
	# Ignore non-changes.
	if {$value eq $options(-state)} return

	# Save for future comparisons, and
	set options(-state) $value

	# link to widgets, if present...

	switch -exact -- $value {
	    normal -
	    disabled {
		$win.add configure -state $value
		$win.rem configure -state $value
		$win.e   configure -state $value

		if {[llength $options(-browse)]} {
		    $win.b configure -state $value
		}
		if {$options(-ordered)} {
		    $win.up   configure -state $value
		    $win.down configure -state $value
		}

		# When enabling things we have to take the dynamic
		# state into account, like during construction.
		if {$value eq "normal"} {
		    $self OnSelectionChange
		    $self OnContentChange
		    # Cycle entry, forces validation.
		    widget::validator validate $win.e
		}
	    }
	    default {
		return -code error "Bad state \"$value\""
	    }
	}

	return
    }

    # -height might have changed.
    #
    # Note: Simple delegation is not possible due to ordering, i.e. at
    # creation time this can be called before the widget in question
    # exists.

    method C-height {option value} {
	# Ignore non-changes.
	if {$value eq $options(-height)} return

	# Save for future comparisons, and
	set options(-height) $value

	# ... link to widget, if present
	if {![winfo exists $win.l]} return
	$win.l configure -height $value
	return
    }

    # -listvariable might have changed.

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
	skin-img-up     arrow_up.png
	skin-img-down   arrow_down.png
	skin-img-browse folder_explore.png
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
    # Defaults: entry, unordered, unique, no transformation, no browsing
    proc P {args} { puts "$args -- $::L" }
    package require famfamfam::silk
    ::widget::listentry .l -listvariable ::L
    pack .l -fill both -expand 1
    trace add variable ::L write P
}
if 0 {
    # Ordered! Duplicates! Entry, no transform, no browsing
    proc P {args} { puts "$args -- $::L" }
    package require famfamfam::silk
    ::widget::listentry .l -listvariable ::L \
	-ordered 1 -allow-duplicates 1
    pack .l -fill both -expand 1
    trace add variable ::L write P
}
if 0 {
    # Transformation! entry, unordered, unique
    proc T {text} {string toupper $text}
    proc P {args} { puts "$args -- $::L" }
    package require famfamfam::silk
    ::widget::listentry .l -listvariable ::L \
	-transform T
    pack .l -fill both -expand 1
    trace add variable ::L write P
}
if 0 {
    # Combobox! Unordered, unique, no transform, no browsing
    # Plus dynamic-reskin demo triggered on list size.
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
	    after 1 {
		puts reskin...
		.l configure -skin-tip-duplicate Doppel
		.l configure -skin-tip-main XXX
	    }
	}
    }
    package require famfamfam::silk
    ::widget::listentry .l -listvariable ::L -values V
    pack .l -fill both -expand 1
    trace add variable ::L write P
}
if 0 {
    # Browse! Entry, unordered, unique, no transform
    proc B {cvar} {
	upvar \#0 $cvar cookie
	if {$cookie eq {}} { set cookie 0 }
	puts cookie\#$cookie
	incr cookie
	return [list $cookie]
    }
    proc P {args} { puts "$args -- $::L" }
    package require famfamfam::silk
    ::widget::listentry .l -listvariable ::L \
	-browse B
    pack .l -fill both -expand 1
    trace add variable ::L write P
}
if 0 {
    # Defaults: entry, unordered, unique, no transform, no browsing
    # Plus dynamic -state change triggered on list size.
    proc P {args} {
	puts "$args -- $::L"
	if {[llength $::L] == 2} {
	    after 1 {
		puts restate...
		.l configure -state disabled
		after 5000 {
		    puts release...
		    .l configure -state normal
		}
	    }
	}
    }
    package require famfamfam::silk
    ::widget::listentry .l -listvariable ::L
    pack .l -fill both -expand 1
    trace add variable ::L write P
}
if 0 {
    # Combo! Unordered, unique, no transform, no browsing
    # Plus dynamic -state change triggered on list size.
    proc P {args} {
	puts "$args -- $::L"
	if {[llength $::L] == 2} {
	    after 1 {
		puts restate...
		.l configure -state disabled
		after 5000 {
		    puts release...
		    .l configure -state normal
		}
	    }
	}
    }
    proc V {cmd args} {
	switch -exact -- $cmd {
	    get { return {hello world} }
	    set { puts [info level 0] }
	    default { error [info level 0] }
	}
    }
    package require famfamfam::silk
    ::widget::listentry .l -listvariable ::L -values V
    pack .l -fill both -expand 1
    trace add variable ::L write P
}
if 0 {
    # Custom validation! Entry, unordered, unique, no transformation, no browsing
    proc P {args} { puts "$args -- $::L" }
    proc V {text errvar} {
	upvar \#0 $errvar msg
	set valid [expr {$text ni {{} hello world}}]
	if {!$valid} {
	    set msg "Not accepting \"\", \"hello\", nor \"world\""
	}
	return $valid
    }
    package require famfamfam::silk
    ::widget::listentry .l -listvariable ::L -validate V
    pack .l -fill both -expand 1
    trace add variable ::L write P
}

# # ## ### ##### ######## ############# #####################
## Ready
package provide widget::listentry 0.1.2
return
