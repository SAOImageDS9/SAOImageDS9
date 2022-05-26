## -*- tcl -*-
# # ## ### ##### ######## ############# #####################

# Canvas Behavior Module. Editing a point cloud.

# - Create    point - B1 (canvas global)
# - Remove    point - B2 (linked to -tag, current item)
# - Drag/Move point - B3 (linked to -tag, current item)
# - Auto-highlight points, to show ability of drag/move.

# Configurable:
# - Tag used to mark/identify the points of this cloud.
#   Default: POINT.
#
# - Callback used to create the item (group) representing the point.
#   Default: Single blue circle of radius 3 with center at point location.
#
# - Callback used to (un)highlight the item (group) of a point.
#   Default: Switch to red color.
#
# - Callback used to record editing activity (add, remove, move point)
#   Default: NONE.

# # ## ### ##### ######## ############# #####################
## Requisites

package require Tcl 8.5
package require Tk
package require snit
package require canvas::drag
package require canvas::highlight
package require canvas::tag

namespace eval ::canvas::edit {
    namespace export points
    namespace ensemble create
}

# # ## ### ##### ######## ############# #####################
## API

snit::type ::canvas::edit::points {
    # # ## ### ##### ######## ############# #####################
    ## Life cycle, and configuration

    option -tag           -default POINT -readonly 1 ; # Tag identifying our points
    option -create-cmd    -default {}    -readonly 1 ; # Callback invoked to create new points.
    option -highlight-cmd -default {}    -readonly 1 ; # Callback to highlight a dragged point.
    option -data-cmd      -default {}    -readonly 1 ; # Callback for point edit operations

    constructor {c args} {
	set mycanvas $c
	set options(-create-cmd)    [mymethod DefaultCreate]
	set options(-highlight-cmd) [mymethod DefaultHighlight]

	$self configurelist $args

	# TODO :: Connect this to the option processing to allow me to
	# drop -readonly 1 from their definition. Note that this also
	# requires code to re-tag all the items on the fly.
	$self Bindings Add
	return
    }

    destructor {
	$self Bindings Remove
	return
    }

    # # ## ### ##### ######## ############# #####################
    ## API.

    method disable {} {
	$self Bindings Remove
	return
    }

    method enable {} {
	$self Bindings Add
	return
    }

    method active {} {
	return $myactive
    }

    method add {x y} {
	# Create a point marker programmatically. This enables users
	# to load an editor instance with existing point locations.
	$self Add $mycanvas $x $y
	return
    }

    ###### Destroy an existing point
    method clear {} {
	foreach item [$mycanvas find withtag $options(-tag)] {
	    lappend grouptags [GetId $mycanvas $item]
	}
	foreach grouptag [lsort -unique $grouptags] {
	    $mycanvas delete $grouptag
	    #puts "Remove|$x $y|$grouptag"
	    unset myloc($grouptag)
	    Note remove $grouptag
	}
	return
    }

    # # ## ### ##### ######## ############# #####################
    ## Manage the canvas bindings (point creation and removal,
    ## dragging, highlighting).

    method {Bindings Add} {} {
	if {$myactive} return
	set myactive 1

	canvas::highlight on $mycanvas $options(-tag) [mymethod Highlight]
	canvas::drag      on $mycanvas $options(-tag) [mymethod Drag]

	$mycanvas bind $options(-tag) <2> [mymethod Remove $mycanvas %x %y]
	bind $mycanvas                <1> [mymethod Add    $mycanvas %x %y]

	# NOTES:
	# 1. Is there a way to make 'Add' not canvas global ?
	# 2. If not, is there a way to ensure that 'Add' is not
	# triggered when a 'Remove' is done, even if the events for
	# the 2 actions basically overlap (B1=Add, Shift-B1=Remove,
	# for example) ?
	return
    }

    method {Bindings Remove} {} {
	if {!$myactive} return
	set myactive 0

	canvas::highlight off $mycanvas $options(-tag)
	canvas::drag      off $mycanvas $options(-tag)

	$mycanvas bind $options(-tag) <2> {}
	bind $mycanvas                <1> {}
	return
    }

    # # ## ### ##### ######## ############# #####################
    ## The actions invoked by the bindings managed in the previous
    ## section.

    ###### Place new point
    method Add {c x y} {
	$self CheckCanvas $c
	set grouptag [NewId]
	set items [{*}$options(-create-cmd) $c $x $y]
	# No visual representation of the point, no point. Vetoed.
	if {![llength $items]} return

	Tag $c $items $grouptag
	set myloc($grouptag) [list $x $y]
	#puts "Add|$x $y|$items"
	Note add $grouptag $x $y
	return
    }

    ###### Destroy an existing point
    method Remove {c x y} {
	$self CheckCanvas $c
	set grouptag [GetId $c [$c find withtag current]]
	$c delete $grouptag
	#puts "Remove|$x $y|$grouptag"
	unset myloc($grouptag)
	Note remove $grouptag
	return
    }

    ###### Drag management. On start of a drag ... Identify the group of items to move.
    method {Drag start} {c item} {
	$self CheckCanvas $c
	#puts "Drag Start|$item|"
	set mydragactive 1
	set grouptag [GetId $c $item]
	set mydbox [$c bbox $grouptag]
	Note {move start} $grouptag
	return $grouptag
    }

    ###### Drag management. During a drag ... Move the grouped items.
    method {Drag move} {c grouptag dx dy} {
	$self CheckCanvas $c
	#puts "Drag Move|$grouptag|$dx $dy|"
	$c move $grouptag $dx $dy
	lassign [Delta] px py dx dy
	Note {move delta} $grouptag $px $py $dx $dy
	return $grouptag
    }

    ###### Drag management. After a drag ...
    method {Drag done} {c grouptag} {
	$self CheckCanvas $c
	#puts "Drag Done|$grouptag|"
	set mydragactive 0
	set ok [Note {move done} $grouptag]
	lassign [Delta] px py dx dy
	if {$ok} {
	    # Commit to new location.
	    set myloc($grouptag) [list $px $py]
	} else {
	    # Vetoed. Undo the move.
	    set dx [expr {- $dx}]
	    set dy [expr {- $dy}]
	    $c move $grouptag $dx $dy
	}
	return
    }

    ###### Highlight management ... Start. Note! Not the user callback.
    method {Highlight on} {c item} {
	$self CheckCanvas $c
	return [{*}$options(-highlight-cmd) on $c $item]
    }

    ###### Highlight management ... Done. Vetoed during drag.
    method {Highlight off} {c state} {
	$self CheckCanvas $c
	if {$mydragactive} { return 0 }
	{*}$options(-highlight-cmd) off $c $state
	return 1
    }

    # # ## ### ##### ######## ############# #####################
    ## Class global commands for the actions in the previous section.

    #### Generate notification about changes to the point cloud.

    proc Note {cmd args} {
	upvar 1 options options self self
	if {![llength $options(-data-cmd)]} return
	return [{*}$options(-data-cmd) {*}$cmd $self {*}$args]
    }

    #### Generate a unique tag for a new point.
    #### The tag references editor instance and type

    proc NewId {} {
	upvar 1 mycounter mycounter self self type type
	return P[incr mycounter]/$self/$type
    }

    #### Link both the unique tag for a point marker and the overall
    #### tag identifying the markers managed by an editor to the
    #### canvas items visually representing the marker.

    proc Tag {c items grouptag} {
	upvar 1 options options
	foreach i $items {
	    canvas::tag append $c $i \
		$grouptag \
		$options(-tag)
	}
	return
    }

    #### Retrieve the tag of the point marker from any item which is
    #### part of its visual representation.

    proc GetId {c item} {
	upvar 1 self self type type
	return [lindex [canvas::tag match $c $item */$self/$type] 0]
    }

    #### Compute absolute location and full delta from current and
    #### saved bounding boxes for the items of the point.
    proc Delta {} {
	upvar 1 grouptag grouptag c c
	upvar 1 mydbox obox myloc($grouptag) p

	set nbox [$c bbox $grouptag]
	#puts |$myloc($grouptag)|$mydbox|$nbox|

	lassign $p    px py
	lassign $obox ox oy _ _
	lassign $nbox nx ny _ _

	# Full delta based between old and current location.
	set dx [expr {$nx - $ox}]
	set dy [expr {$ny - $oy}]

	# New absolute location based on the full delta.
	set px [expr {$px + $dx}]
	set py [expr {$py + $dy}]

	return [list $px $py $dx $dy]
    }

    # # ## ### ##### ######## ############# #####################
    ## Instance state

    variable mycanvas     {} ; # Instance command of the canvas widget
			       # the editor works with.
    variable mycounter     0 ; # Counter for NewId to generate
			       # identifiers for point markers.
    variable mydragactive  0 ; # Flag, true when a drag is running, to
			       # veto un-highlighting.
    variable mydbox       {} ; # The bounding box of the items dragged
			       # around, to compute full deltas and
			       # absolute location during the drag.
    variable myactive      0 ; # Flag, true when the editor bindings are
                               # set on the canvas, enabling editing.
    variable myloc -array {} ; # Internal data base mapping from point
			       # id to point location, for the
			       # calculation of absolute coordinates
			       # during dragging.

    # # ## ### ##### ######## ############# #####################
    ## Default implementations for the configurable callbacks to
    ## create and highlight the edited points.

    method DefaultCreate {c x y} {
	$self CheckCanvas $c
	# Create a circle centered on the chosen location, blue filled
	# with black border.
	set w [expr {$x - 3}]
	set n [expr {$y - 3}]
	set e [expr {$x + 3}]
	set s [expr {$y + 3}]
	lappend items [$c create oval $w $n $e $s \
			   -width   1            \
			   -outline black       \
			   -fill    SkyBlue2]
	return $items
    }

    method {DefaultHighlight on} {c item} {
	$self CheckCanvas $c
	# Highlight by refilling the item in red. Save its full state
	# for restoration at the end of the highlight.
	set previous [lindex [$c itemconfigure $item -fill] end]
	$c itemconfigure $item -fill red
	return [list $item $previous]
    }

    method {DefaultHighlight off} {c state} {
	$self CheckCanvas $c
	# To unhighlight get the saved item and state, restore them.
	lassign $state item previous
	$c itemconfigure $item -fill $previous
	return
    }

    method CheckCanvas {c} {
	if {$c eq $mycanvas} return
	return -code error "Canvas mismatch, ours is $mycanvas, called with $c"
    }

    # # ## ### ##### ######## ############# #####################
}

# # ## ### ##### ######## ############# #####################
## Ready

package provide canvas::edit::points 0.1
return

# # ## ### ##### ######## ############# #####################
## Scrap yard.
