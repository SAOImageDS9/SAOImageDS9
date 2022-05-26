# -*- tcl -*-
# # ## ### ##### ######## ############# #####################

# Attach (**) validation (*) to a ttk::entry, ttk::combobox, or other
# widget and modify its styling to highlight when its entry field
# holds an invalid string.

# (Ad *): My style of validation does not reject any edits, but
# highlights an entry field holding invalid data. When application
# retrieves the data for processing it can then reject invalid data
# (or maybe not allow processing, keeping such buttons etc. disabled
# until the data is valid).

# (Ad **): The code assumes that the widget to modify exists and
# reconfigures it for validation. I.e. it attaches behaviour to a
# widget, it is not a widget in itself, nor a widget-adaptor.

# # ## ### ##### ######## ############# #####################
## Requisites

package require Tcl 8.5 ; # dict, {*}
package require Tk  8.5 ; # ttk/tile

# # ## ### ##### ######## ############# #####################
## Package state (database of attachments).

namespace eval ::widget::validator {
    # Dictionary mapping widgets to a dictionary holding
    # - "color"   : highlight color
    # - "previous": old configuration
    # - "command" : validation command
    # - "class"   : widget's class for class-specific actions.

    variable attached {}

    # Helper array for text variables we can assign to comboboxes which
    # have no such. This package needs a linked text variable to
    # trace, for their validation.

    variable  text
    array set text {}

    # Helper array remembering reliable class information for widgets.

    variable  class
    array set class {}
}
namespace eval ::widget::validator::Entry {}
namespace eval ::widget::validator::Combobox {}

# # ## ### ##### ######## ############# #####################
## Intercept the widget class commands we have interest in, to get
## reliable information about native widget classes.

::apply {{} {
    rename ::ttk::entry    ::widget::validator::ttk_entry
    rename ::ttk::combobox ::widget::validator::ttk_combobox

    proc ::ttk::entry {w args} {
	variable ::widget::validator::class
	set class($w) Entry
	uplevel 1 [list ::widget::validator::ttk_entry $w {*}$args]
    }

    proc ::ttk::combobox {w args} {
	variable ::widget::validator::class
	set class($w) Combobox
	uplevel 1 [list ::widget::validator::ttk_combobox $w {*}$args]
    }
} widget::validator}

# # ## ### ##### ######## ############# #####################
## Implementation

proc ::widget::validator::attach {w color vcmdprefix} {
    variable attached

    if {[dict exists $attached $w]} {
	return -code error "Unable to attach, $w already in use"
    }

    # Determine what widget we are dealing with, then save the current setup.

    set class [Class $w]
    dict set attached $w class    $class
    dict set attached $w color    $color
    dict set attached $w command  $vcmdprefix
    dict set attached $w previous [$class Get $w]

    set state [dict get $attached $w]

    # Attach now in a class-specific manner, ...
    $class Attach $w $state

    # ... then force the initial validation.
    $class Validate $w $state
    return
}

proc ::widget::validator::detach {w} {
    variable attached

    if {![dict exists $attached $w]} {
	return -code error "Unable to detach, $w not known"
    }

    set state [dict get $attached $w]
    dict with state {} ; # => class, color, previous, command

    $class Detach $w $state

    # ... and forget the widget.
    dict unset attached $w
    return
}

proc ::widget::validator::validate {w} {
    variable attached

    if {![dict exists $attached $w]} {
	return -code error "Unable to validate, $w not known"
    }

    set state [dict get $attached $w]
    dict with state {} ; # => class, color, previous, command

    $class Validate $w $state
    return
}

# # ## ### ##### ######## ############# #####################
## Internals - Entry specifics

proc ::widget::validator::Entry::Validate {w state} {
    $w validate
    return
}

proc ::widget::validator::Entry::Get {w} {
    # Return the current settings of the ttk::entry we are about to
    # overwrite as part of the attachment process.
    return [list \
		-style           [$w cget -style] \
		-validate        [$w cget -validate] \
		-validatecommand [$w cget -validatecommand]]
}

proc ::widget::validator::Entry::Attach {w state} {
    dict with state {} ; # => class, color, command, previous

    $w configure \
	-style           [::widget::validator::Style $w $color create] \
	-validate        all \
	-validatecommand [list ::widget::validator::Entry::ValidateW %W %d %P $command]
    return
}

proc ::widget::validator::Entry::Detach {w state} {
    # Restore old configuration of style and validation.
    $w configure {*}[dict get $state previous]
    return
}

proc ::widget::validator::Entry::ValidateW {w when text cmd} {
    variable ::widget::validator::attached

    #puts [info level 0]
    set valid [{*}$cmd $text]
    #puts \t$valid
    if {$when < 0} { return $valid }
    if {$valid} {
	set valid !invalid
    } else {
	set valid invalid
    }
    $w state $valid
    return 1
}

# # ## ### ##### ######## ############# #####################
## Internals - Combobox specifics

proc ::widget::validator::Combobox::Validate {w state} {
    set v [TextVariable $w 2]
    set $v [set $v]
    return
}

proc ::widget::validator::Combobox::Get {w} {

    lappend config -style [$w cget -style]

    set v [$w cget -textvariable]
    if {$v eq {}} {
	# No predefined textvariable.
	# To enable validation we link the widget to an internal
	# variable of our own and ensure that detaching the behaviour
	# will restore the unlinked state.

	lappend config -textvariable {}
	set ::widget::validator::text($w) {}
	$w configure -textvariable ::widget::validator::text($w)
    }

    return $config
}

proc ::widget::validator::Combobox::Attach {w state} {
    dict with state {} ; # => class, color, command, previous

    $w configure -style [::widget::validator::Style $w $color create]

    set v    [TextVariable $w 2]
    set vcmd [list ::widget::validator::Combobox::ValidateW $w $v $command]

    trace add variable $v write $vcmd

    # Track focus events to override whatever ttk is doing with the
    # entry field which redraws it wrongly, by re-validating

    bindtags $w [list WV_$w {*}[bindtags $w]]
    bind WV_$w <FocusIn>  $vcmd
    bind WV_$w <FocusOut> $vcmd
    return
}

proc ::widget::validator::Combobox::Detach {w state} {
    variable text
    dict with state {} ; # => class color previous command

    # Restore old configuration of style and validation.
    $w configure {*}$previous

    # Remove the focus trackers ...
    bind WV_$w <FocusIn>  {}
    bind WV_$w <FocusOut> {}

    set tags [bindtags $w]
    set pos [lsearch -exact $tags WV_$w]
    if {$pos >= 0} {
	bindtags $w [replace $tags $pos $pos]
    }

    # Now check if an internal text variable was in play.
    if {![info exists text($w)]} return

    # Yes. Remove it, and the trace we have on it.

    set v    ::widget::combobox::text($w)
    set vcmd [list ::widget::validator::Combobox::ValidateW $w $v $command]

    trace remove variable $v write $vcmd
    unset $v
    return
}

proc ::widget::validator::Combobox::ValidateW {w v cmd args} {
    set text [set $v]

    #puts [info level 0]
    if {[{*}$cmd $text]} {
	set valid !invalid
    } else {
	set valid invalid
    }
    #puts \t$valid
    $w state $valid
    return
}

proc ::widget::validator::Combobox::TextVariable {w {level 0}} {
    # Retrieve the linked text variable.
    # Returns a fully qualified name.

    set v [$w cget -textvariable]
    if {[string match ::* $v]} { return $v }

    # Name is not fully qualified. Determine location.
    # Note that for array elements we must resolve the base name of
    # the array itself, it won't work for the element.

    incr level
    regexp {^([^(]*)(.*)?$} $v -> base element
    set base [uplevel $level [list namespace which -variable $base]]
    return $base$element
}

# # ## ### ##### ######## ############# #####################
## Internals - Widget recognition

proc ::widget::validator::Class {w} {
    variable class

    if {![winfo exists $w]} {
	# Clean the cache a bit
	unset -nocomplain class($w)
	return -code error "band window path name \"$w\""
    }
    if {![info exists class($w)]} {
	return -code error "Unable to determine class of \"$w\""
    }
    return $class($w)
}

# # ## ### ##### ######## ############# #####################
## Internals - Style setup and management

proc ::widget::validator::Style {w color setup} {
    set setup [expr {$setup eq "create"}]

    if {$setup} {
	# On setup the widget's -style is either a user style, or the
	# default based on its class. We derive a style for
	# highlighting from that.
	set base [$w cget -style]
	if {$base eq {}} {
	    set base [winfo class $w]
	}
	set derived [string map {. %2e} $w].$base
    } else {
	# On propagation the widget is attached, thus the -style is
	# our highlighting style, and we can compute the original base
	# from that.
	set derived [$w cget -style]
	set base    [join [lrange [split $derived .] 1 end] .]
    }

    #puts BASE|$base|
    #puts DERI|$derived|

    # Note: In the creation of a unique widget-specific style name
    # above we are quoting the .'s in the widget name to prevent
    # accidential inheritance of styles through the widget hierarchy.

    # Place our dynamic statemap into the existing one. Depending on
    # if the base style already uses -fieldbackground we can either
    # simply add, or have to extend. In case of the latter we make
    # sure that our specs are matched first.

    lappend ourmap invalid $color

    # Debug helper entries
    if 0 {lappend ourmap \
	      {focus invalid} $color \
	      {!focus invalid} $color \
	      focus  lightblue \
	      !focus lightgreen}


    set map [ttk::style map $base]
    #puts "Statemap  = $map"

    if {![dict exists $map -fieldbackground]} {
	# Add option to map which doesn't have it.
	set map $ourmap
    } else {
	# Extend existing option. Put our entries at the end of the
	# existing map. We assume that the existing map contains
	# entries for readonly and disabled, their display has
	# priority over invalid.
	set map [list {*}[dict get $map -fieldbackground] {*}$ourmap]
    }

    #puts "Statemap' = $map"

    # Save the changes under our chosen name, as a specialization of
    # the base TEntry style. This last ensures that applying the new
    # style to a ttk::entry automatically inherits everything else
    # (like the widget layout), from the TEntry base.

    ttk::style configure $derived -fieldbackground white
    ttk::style map       $derived -fieldbackground $map

    return $derived
}

proc ::widget::validator::StylePropagation {} {
    variable attached
    #puts [ttk::style theme use]
    dict for {w state} $attached {
	Style $w [dict get $state color] propagate
    }
    return
}

# # ## ### ##### ######## ############# #####################
## Initialization

# Runs once, on package load. We are hooking ourselves into theme
# changes so that we can ensure the presence of our custom styles in
# all themes used by the application.

bind . <<ThemeChanged>> +::widget::validator::StylePropagation

# # ## ### ##### ######## ############# #####################
## API publication - internal ensembles

namespace eval ::widget::validator::Entry {
    namespace export   Get Attach Detach Validate
    namespace ensemble create
}

namespace eval ::widget::validator::Combobox {
    #namespace import ::widget::validator::TextVariable

    namespace export   Get Attach Detach Validate
    namespace ensemble create
}

# # ## ### ##### ######## ############# #####################
## API publication - public ensemble

namespace eval ::widget::validator {
    namespace export   attach detach validate
    namespace ensemble create
}

# # ## ### ##### ######## ############# #####################
## Ready

package provide widget::validator 0.1
return
