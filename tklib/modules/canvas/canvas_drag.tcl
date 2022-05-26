## -*- tcl -*-
# ### ### ### ######### ######### #########

# Canvas Behavior Module. Dragging items and groups of items.

# ### ### ### ######### ######### #########
## Requisites

package require Tcl 8.5
package require Tk

# ### ### ### ######### ######### #########
## API

namespace eval ::canvas::drag {
    namespace export \
	item group on off
    namespace ensemble create
}

proc ::canvas::drag::item {c tag args} {
    # Set up dragging of single items identified by the <tag>
    on $c $tag [namespace code Item1] {*}$args
    return
}

proc ::canvas::drag::group {c tag cmdprefix args} {
    # Set up dragging a group of items, with each group's drag
    # handle(s) identified by <tag>, and the <cmdprefix> taking the
    # handle item which triggered the drag and returning a tag which
    # identifies the whole group to move.

    on $c $tag [namespace code [list ItemGroup $cmdprefix]] {*}$args
    return
}

proc ::canvas::drag::on {c tag cmdprefix args} {
    # Setting up a general drag, with the drag handles identified by
    # <tag> and <cmdprefix> providing start/move methods invoked to
    # initialize and perform the drag. The cmdprefix is fully
    # responsible for how the dragging of a particular handle is
    # handled.

    variable attached

    # Process options (-event)
    set events [dict get [Options {*}$args] event]

    # Save the (canvas, tag) combination for use by 'off'.
    set k [list $c $tag]
    set attached($k) $events

    # Install the bindings doing the drag
    lassign $events trigger motion untrigger
    $c bind $tag $trigger   [namespace code [list Start $c $cmdprefix %x %y]]
    $c bind $tag $motion    [namespace code [list Move  $c $cmdprefix %x %y]]
    $c bind $tag $untrigger [namespace code [list Done  $c $cmdprefix %x %y]]
    return
}

proc ::canvas::drag::off {c tag} {
    # Remove a drag identified by canvas and tag.

    variable attached

    # Find and remove the bindings for this particular canvas,tag
    # combination.
    set k [list $c $tag]
    foreach event $attached($k) {
	$c bind $tag $event {}
    }

    # Update our database
    unset attached($k)
    return
}

# ### ### ### ######### ######### #########
## Option processing.

proc ::canvas::drag::Options {args} {
    # Button 3 is default for dragging.
    set config [list event [Validate 3]]

    foreach {option value} $args {
	switch -exact -- $option {
	    -event {
		dict set config event [Validate $value]
	    }
	    default {
		return -code error "Unknown option \"$option\", expected -event"
	    }
	}
    }

    return $config
}

# ### ### ### ######### ######### #########
## Event parsing and transformation

proc ::canvas::drag::Validate {event} {
    # Assumes that events are specified in the forms
    # <modifier>-<button> and <button>, where <modifier> is in the set
    # {Control, Shift, Alt, ... } and <button> a number. Returns
    # button-press and related motion event, or throws an error.

    set xevent [split $event -]
    if {[llength $xevent] > 2} {
	return -code error "Bad event \"$event\""
    } elseif {[llength $xevent] == 2} {
	lassign $xevent modifier button

	set trigger   <${event}>
	set motion    <${modifier}-B${button}-Motion>
	set untrigger <${modifier}-ButtonRelease-${button}>

    } else {
	lassign $xevent button
	set modifier {}

	set trigger   <${button}>
	set motion    <B${button}-Motion>
	set untrigger <ButtonRelease-${button}>
    }

    return [list $trigger $motion $untrigger]
}

# ### ### ### ######### ######### #########
## Drag execution.

proc ::canvas::drag::Start {c cmdprefix x y} {
    # Start a drag operation.
    variable attached
    variable active
    variable clientdata
    variable lastx
    variable lasty

    # Clear drag state
    unset -nocomplain active clientdata lastx lasty

    # Get item under mouse, if any.
    set item [$c find withtag current]
    if {$item eq {}} return

    # Initialize the drag state, run the command to initialize
    # anything external to us. We remember the current location to
    # enable the delta calculations in 'Move'.

    set active     $cmdprefix
    set lastx      [$c canvasx $x]
    set lasty      [$c canvasy $y]
    set clientdata [{*}$active start $c $item]
    return
}

proc ::canvas::drag::Move {c cmdprefix x y} {
    # Check for active drag.
    variable active
    if {![info exists active]} return

    # Import remainder of the drag state
    variable clientdata
    variable lastx
    variable lasty

    # Get current location and compute delta.
    set x [$c canvasx $x]
    set y [$c canvasy $y]

    set dx [expr {$x - $lastx}]
    set dy [expr {$y - $lasty}]

    # Let the command process the movement as it sees fit.
    # This may include updated client data.
    set clientdata [{*}$active move $c $clientdata $dx $dy]

    # Save the new location , for the next movement and delta.
    set lastx $x
    set lasty $y
    return
}

proc ::canvas::drag::Done {c cmdprefix x y} {
    # Check for active drag.
    variable active
    if {![info exists active]} return

    # Import remainder of the drag state
    variable clientdata

    # Let the command process the end of the drag operation as it sees
    # fit.
    {*}$active done $c $clientdata
    return
}

# ### ### ### ######### ######### #########
## Convenience. Dragging a single item.

# This is trivial. We remember the item to be dragged, and forward
# move requests directly to the canvas.

namespace eval ::canvas::drag::Item1 {
    namespace export start move done
    namespace ensemble create
}

proc ::canvas::drag::Item1::start {c item} {
    return $item
}

proc ::canvas::drag::Item1::move {c item dx dy} {
    $c move $item $dx $dy
    return $item
}

proc ::canvas::drag::Item1::done {c item} {
    return
}

# ### ### ### ######### ######### #########
## Convenience. Dragging an item group.

# Also mostly trivial. The move requests are still simply forwarded to
# the canvas, using the tag identifying the group. The main point is
# during start, using the external callback to transform the handle
# item into the group tag.

proc ::canvas::drag::ItemGroup {cmd method c args} {
    return [ItemGroup::$method $cmd $c {*}$args]
}

namespace eval ::canvas::drag::ItemGroup {}

proc ::canvas::drag::ItemGroup::start {cmd c item} {
    return [{*}$cmd start $c $item]
}

proc ::canvas::drag::ItemGroup::move {cmd c grouptag dx dy} {
    $c move $grouptag $dx $dy
    return $grouptag
}

proc ::canvas::drag::ItemGroup::done {cmd c grouptag} {
    {*}$cmd done $c $grouptag
    return
}

# ### ### ### ######### ######### #########
## State.

namespace eval ::canvas::drag {
    # Database of canvas,tag combinations with active bindings
    # (allowing their removal, see --> 'off'). Value are the
    # events which have bindings.

    variable  attached
    array set attached {}

    # State of a drag in progress

    variable  active     ; # command prefix to invoke for 'start' / 'move'.
    variable  clientdata ; # Result of invoking 'start', data for 'move'.
    variable  lastx      ; # x coord of last position the drag was at.
    variable  lasty      ; # y coord of last position the drag was at.
}

# ### ### ### ######### ######### #########
## Ready

package provide canvas::drag 0.1
return

# ### ### ### ######### ######### #########
## Scrap yard.
