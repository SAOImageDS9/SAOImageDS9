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
#            Active color red.
#
# - Callback used to record editing activity (add, remove, move point)
#   Default: Do nothing, accept all moves
#
# - Callback used to report enter/leave editing activity on the points
#   Default: Do nothing.

# # ## ### ##### ######## ############# #####################
## Requisites

package require Tcl 8.5-
package require Tk
package require snit
package require canvas::drag
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

    option -tag         -default POINT -readonly 1 ;# Tag identifying our points
    option -create-cmd  -default {}                ;# Callback invoked to create new points.
    option -data-cmd    -default {}                ;# Callback for point edit operations
    option -active-cmd  -default {}                ;# Callback to report point with mouse over it

    # data-cmd signatures ...
    # DC add        (canvas group x y      ) :: VOID
    # DC remove     (canvas group          ) :: VOID
    # DC move start (canvas group          ) :: VOID
    # DC move delta (canvas group x y dx dy) :: VOID
    # DC move done  (canvas group          ) :: boolean

    # Options to tweak the default marker style without having to go for full-custom callback
    # Blue filled circle of radius 3, with a black border. See `DefaultCreate`.
    option -color       -default SkyBlue2
    option -hilit-color -default red
    option -radius      -default 3
    option -kind        -default oval

    # Event options ...
    option -add-remove-point -default {} -readonly 1 ; # Event to add/remove a point
    option -drag-point       -default  3 -readonly 1 ; # Event to drag a point

    constructor {c args} {
	set options(-data-cmd)      [mymethod DefaultData]
	set options(-create-cmd)    [mymethod DefaultCreate]

	$self configurelist $args

	set mycanvas $c

	# TODO :: Connect this to the option processing to allow me to
	# drop -readonly 1 from their definition. Note that this also
	# requires code to re-tag all the items on the fly.
	#$self Bindings Add {}

	$mycanvas bind $options(-tag) <Enter> [mymethod Active 1 $mycanvas %x %y]
	$mycanvas bind $options(-tag) <Leave> [mymethod Active 0 $mycanvas %x %y]
	return
    }

    destructor {
	if {![winfo exists $mycanvas]} return
	$self Bindings Remove {}
	return
    }

    # # ## ### ##### ######## ############# #####################
    ## API.

    method disable {args} {
	$self Bindings Remove $args
	return
    }

    method enable {args} {
	$self Bindings Add $args
	return
    }

    method active {} {
	return $myactive
    }

    method add {x y} {
	# Create a point marker programmatically. This enables users
	# to load an editor instance with existing point locations.
	return [$self AddCore $mycanvas $x $y]
    }

    method remove {id} {
	$self RemoveByTag $id
	return
    }

    method move-to {id x y} {
	$self MoveTo $id $x $y
	return
    }

    method move-by {id dx dy} {
	$self MoveBy $id $dx $dy
	return
    }

    method current {} {
	return [GetId $mycanvas [$mycanvas find withtag current]]
    }

    ###### Destroy an existing point
    method clear {} {
	set grouptags {}
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
    ## Manage the canvas bindings (point creation and removal, dragging).

    method {Bindings Add} {parts} {
	if {![llength $parts]} { lappend parts drag edit }
	foreach part $parts {
	    switch -exact -- $part {
		drag {
		    canvas::drag on $mycanvas $options(-tag) \
			[mymethod Drag] \
			-event $options(-drag-point)
		}
		edit {
		    if {$myactive} return
		    set myactive 1

		    # NOTES:
		    # 1. Is there a way to make 'Add' not canvas global ?
		    # 2. If not, is there a way to ensure that 'Add' is not triggered when a
		    #    'Remove' is done, even if the events for the 2 actions basically overlap
		    #    (B1=Add, Shift-B1=Remove, for example) ?
		    #
		    # We know that Remove, as item binding, is run before the global Add.

		    if {$options(-add-remove-point) ne {}} {
			set event <$options(-add-remove-point)>
			$mycanvas bind $options(-tag) $event [mymethod Remove $mycanvas %x %y 1]
			bind $mycanvas                $event [mymethod Add    $mycanvas %x %y 1]
		    } else {
			$mycanvas bind $options(-tag) <2> [mymethod Remove $mycanvas %x %y 0]
			bind $mycanvas                <1> [mymethod Add    $mycanvas %x %y 0]
		    }
		}
	    }
	}
	return
    }

    method {Bindings Remove} {parts} {
	if {![llength $parts]} { lappend parts drag edit }
	foreach part $parts {
	    switch -exact -- $part {
		drag {
		    canvas::drag off $mycanvas $options(-tag)
		}
		edit {
		    if {!$myactive} return
		    set myactive 0

		    if {$options(-add-remove-point) ne {}} {
			set event <$options(-add-remove-point)>
			$mycanvas bind $options(-tag) $event {}
			bind $mycanvas                $event {}
		    } else {
			$mycanvas bind $options(-tag) <2> {}
			bind $mycanvas                <1> {}
		    }
		}
	    }
	}
	return
    }

    # # ## ### ##### ######## ############# #####################
    ## The actions invoked by the bindings managed in the previous
    ## section.

    ###### Place new point
    method Add {c x y skip} {
	# x, y are relative to the viewport

	if {$skip && $myskip} { set myskip 0 ; return }

	$self CheckCanvas $c

	# Translate into actual canvas coordinates
	set x [$c canvasx $x]
	set y [$c canvasy $y]

	$self AddCore $c $x $y
    }

    method AddCore {c x y} {
	# x, y are absolute canvas coordinates

	set grouptag [NewId]

	set items [{*}$options(-create-cmd) $c $x $y]
	# No visual representation of the point, no point. Vetoed.
	if {![llength $items]} return

	Tag $c $items $grouptag
	set myloc($grouptag) [list $x $y]
	#puts "Add|$x $y|$items"
	Note add $grouptag $x $y
	return $grouptag
    }

    ###### Destroy an existing point
    method Remove {c x y skip} {
	$self CheckCanvas $c
	#puts "Remove|$x $y|[$c find withtag current]"
	$self RemoveByTag [GetId $c [$c find withtag current]]
	set myskip $skip
	return
    }

    method RemoveByTag {grouptag} {
	$mycanvas delete $grouptag
	#puts "RemoveTag|$grouptag"
	unset myloc($grouptag)
	Note remove $grouptag
	return
    }

    ###### Move existing point programmatically, absolute or relative
    method MoveTo {grouptag x y} {
	set myloc($grouptag) [list $x $y]
	$mycanvas moveto $grouptag $x $y
	return
    }

    method MoveBy {grouptag dx dy} {
	lassign $myloc($grouptag) x y
	set x [expr {$x + $dx}]
	set y [expr {$y + $dy}]
	set myloc($grouptag) [list $x $y]

	$mycanvas move $grouptag $dx $dy
	return
    }

    ###### Drag management. On start of a drag ... Identify the group of items to move.
    method {Drag start} {c item} {
	$self CheckCanvas $c
	#puts "Drag Start|$item|"
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

    variable myskip        0 ; # Remove/Add communication flag
    variable mycanvas     {} ; # Instance command of the canvas widget
			       # the editor works with.
    variable mycounter     0 ; # Counter for NewId to generate
			       # identifiers for point markers.
    variable mydbox       {} ; # The bounding box of the items dragged
			       # around, to compute full deltas and
			       # absolute location during the drag.
    variable myactive      0 ; # Flag, true when the editor bindings are
                               # set on the canvas, enabling editing.
    variable myloc -array {} ; # Internal data base mapping from point
			       # id to point location, for the
			       # calculation of absolute coordinates
			       # during dragging.

    method Active {on c x y} {
	# puts "$on $c\t($x $y)"
	if {![llength $options(-active-cmd)]} return
	if {$on} { set on [$self current] } else { set on {} }
	{*}$options(-active-cmd) $self $on
	return
    }

    # # ## ### ##### ######## ############# #####################
    ## Default implementations for the configurable callbacks to
    ## create the edited points.

    method DefaultCreate {c x y} {
	$self CheckCanvas $c

	# Create a circle marker in the default style
	set r $options(-radius)
	set w [expr {$x - $r}]
	set n [expr {$y - $r}]
	set e [expr {$x + $r}]
	set s [expr {$y + $r}]
	lappend items [$c create $options(-kind) $w $n $e $s \
			   -width      1           \
			   -outline    black       \
			   -activefill $options(-hilit-color) \
			   -fill       $options(-color)]
	return $items
    }

    method {DefaultData add}        {c group x y}       {}
    method {DefaultData remove}     {c group}           {}
    method {DefaultData move start} {c group}           {}
    method {DefaultData move delta} {c group x y dx dy} {}
    method {DefaultData move done}  {c group}           { return yes } ;# accept always

    method CheckCanvas {c} {
	if {$c eq $mycanvas} return
	return -code error "Canvas mismatch, ours is $mycanvas, called with $c"
    }

    # # ## ### ##### ######## ############# #####################
}

# # ## ### ##### ######## ############# #####################
## Ready

package provide canvas::edit::points 0.3
return

# # ## ### ##### ######## ############# #####################
## Scrap yard.
