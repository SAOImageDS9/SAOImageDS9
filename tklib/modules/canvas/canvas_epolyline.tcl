## -*- tcl -*-
# # ## ### ##### ######## ############# #####################

# Canvas Behavior Module. Editing a point cloud representing a
# poly-line. I.e. we have to designated points which are start and end
# of the line, and points have an order, with a line-segment drawn
# between each pair of points adjacent in this order.

# - Create    point - B1 (canvas global)
# - Remove    point - B2 (linked to -tag, current item)
# - Drag/Move point - B3 (linked to -tag, current item)
# - Auto-highlight points, to show ability of drag/move.

# Configurable:
# - Tag used to mark/identify the points of this cloud.
#   Default: POLYLINE.
#
# - Callback used to create the item (group) representing the point.
#   Default: <Inherited from the subordinate point cloud editor>
#
# - Callback used to (un)highlight the item (group) of a point.
#   Default: <Inherited from the subordinate point cloud editor>
#
# - Callback used to report on line editing activity.
#   Default: NONE.

# # ## ### ##### ######## ############# #####################
# Notes:
#
# - The creation of a new point P uses the following heuristics to
#   insert the new point into the line:
#
#   If the nearest point N is the start or end of the line it compares
#   attaching P as new endpoint agains insertion between N and its
#   neighbour X, measuring the distance P-N-X, and N-P-X, choosing the
#   shorter.
#
#   Otherwise, with the nearest point in the middle of the line it
#   compares the two possible insertions with the two neighbours of N,
#   again choosing the possibility giving us a shorter line.
#
# - Removal of a point P either removes the single line-segment it is
#   part of (happens if P is the current start or end of the line), or
#   replaces the two segments adjacent to P with a single segment
#   joining the neighbours of P.

# # ## ### ##### ######## ############# #####################
## Requisites

package require Tcl 8.5
package require Tk
package require snit
package require canvas::track::lines
package require canvas::edit::points

namespace eval ::canvas::edit {
    namespace export polyline
    namespace ensemble create
}

# # ## ### ##### ######## ############# #####################
## API

snit::type ::canvas::edit::polyline {
    option -tag           -default POLYLINE -readonly 1
    option -create-cmd    -default {}       -readonly 1
    option -highlight-cmd -default {}       -readonly 1
    option -data-cmd      -default {}       -readonly 1

    constructor {c args} {
	set mycanvas $c

	# Generate an internal point cloud editor, which will handle
	# the basic tasks regarding the line's vertices.

	lappend cmd canvas::edit points ${selfns}::P $c
	lappend cmd -tag      [from args -tag POLYLINE]
	lappend cmd -data-cmd [mymethod Point]

	set c [from args -create-cmd {}]
	if {$c ne {}} { lappend cmd -create-cmd $c }

	set c [from args -highlight-cmd {}]
	if {$c ne {}} { lappend cmd -highlight-cmd $c }

	set myeditor  [{*}$cmd]
	set mytracker [canvas::track lines ${selfns}::TRACK $mycanvas]

	$self configurelist $args

	# TODO :: Connect this to the option processing to alow me to
	# drop -readonly 1 from their definition. Note that this also
	# requires code to re-tag all the items on the fly.
	return
    }

    component mytracker
    component myeditor

    delegate method enable  to myeditor
    delegate method disable to myeditor
    delegate method active  to myeditor
    delegate method clear   to myeditor
    #delegate method add     to myeditor

    # This is not a straight-forward delegation. Because we have to
    # force 'appending the point' instead of using the heuristics.
    method add {x y} {
	set mydoappend 1
	$myeditor add $x $y
	set mydoappend 0
	return
    }

    # # ## ### ##### ######## ############# #####################
    ## Actions bound to events, as reported by the point cloud editor.

    method {Point add} {pe id x y} {
	$self ExtendLine $id $x $y
	Note
	return
    }

    method {Point remove} {pe id} {
	$self ShrinkLine $id
	Note
	return
    }

    method {Point move start} {pe id} {
	set mydloc $mycoords($id)

	set fix {}
	foreach s [array names myline [list * $id]] {
	    lassign $s p _
	    lappend fix $mycoords($p)
	}
	foreach s [array names myline [list $id *]] {
	    lassign $s _ n
	    lappend fix $mycoords($n)
	}

	$mytracker start $mydloc {*}$fix
	return
    }

    method {Point move delta} {pe id nx ny dx dy} {
	set mydloc [list $nx $ny]
	$mytracker move $mydloc
	return
    }

    method {Point move done} {pe id} {
	$self MoveVertex $id $mydloc
	$mytracker done
	Note
	return 1
    }

    # # ## ### ##### ######## ############# #####################
    ## Line management

    method ExtendLine {p x y} {
	set mycoords($p) [list $x $y]

	if {$mydoappend} {
	    lappend mypoints $p
	    if {[llength $mypoints] < 2} return
	    $self AddSegment {*}[lrange $mypoints end-1 end]
	    return
	}

	switch -exact -- [llength $mypoints] {
	    0 {
		# Remember the point, it is both start and end. No
		# need for a line item yet.
		lappend mypoints $p
	    }
	    1 {
		# Remember the point, and now we need the actual
		# polyline.
		lappend mypoints $p
		$self AddSegment {*}$mypoints
	    }
	    default {
		# The most complex case. The heuristics are trying to
		# add the point in a sensible position of the line.

		# We look at the point N nearest to P, and its neighbours.

		# a. With only one neighbour X compute the length of
		#    segments for both attachment of P to N (+
		#    distance to X), and the length if P is inserted
		#    between N and X. Choose which ever is shortest.

		# b. With 2 neighbours compute the lengths for
		#    insertion betweeen N and one of the neighbours,
		#    and choose the shortest.

		set pn  [Nearest $p $mypoints]
		set pos [lsearch -exact $mypoints $pn]

		set snext [lindex [array names myline [list $pn *]] 0]
		set sprev [lindex [array names myline [list * $pn]] 0]

		# Ad b.
		if {($snext ne {}) && ($sprev ne {})} {
		    set next [lindex $snext 1]
		    set prev [lindex $sprev 0]

		    # Compare              pn -- p -- next
		    # vs.     prev -- p -- pn

		    if {
			([Distance $pn   $p] + [Distance $p $next]) <
			([Distance $prev $p] + [Distance $p $pn])
		    } {
			# pn - p - next is shorter. Insert.
			$self MoveTarget $pn $next $p
			$self AddSegment $p  $next
			set mypoints [linsert $mypoints ${pos}+1 $p]
		    } else {
			# prev - p - pn is shorter. Insert.
			$self MoveTarget $prev $pn $p
			$self AddSegment $p    $pn
			set mypoints [linsert $mypoints $pos $p]
		    }

		    return
		}

		# Ad a.start
		if {$snext ne {}} {
		    set next [lindex $snext 1]

		    # Compare p --- pn ----- next
		    # vs            pn - p - next

		    if {
			([Distance $p $pn] + [Distance $pn $next]) <
			([Distance $p $pn] + [Distance $p  $next])
		    } {
			# p - pn - next is shorter. Attach/Prepend
			$self AddSegment  $p  $pn
			set mypoints [linsert $mypoints 0 $p]
		    } else {
			# pn - p - next is shorter. Insert.
			$self MoveTarget  $pn $next $p
			$self AddSegment  $p  $next
			set mypoints [linsert $mypoints ${pos}+1 $p]
		    }

		    return
		}

		# Ad a.end
		if {$sprev ne {}} {
		    set prev [lindex $sprev 0]

		    # Compare prev - p - pn
		    # vs      prev ----- pn --- p

		    if {
			([Distance $pn $prev] + [Distance $pn $p]) <
			([Distance $p  $prev] + [Distance $pn $p])
		    } {
			# prev - pn - p is shorter. Attach/Append.
			$self AddSegment  $pn $p
			lappend mypoints $p
		    } else {
			# prev - p - pn is shorter. Insert.
			$self MoveTarget $prev $pn $p
			$self AddSegment $p    $pn
			set mypoints [linsert $mypoints end-1 $p]
		    }

		    return
		}

		return -code error "Unable to insert new point"
	    }
	}
	return
    }

    method ShrinkLine {p} {
	# Remove point.
	switch -exact -- [llength $mypoints] {
	    1 {
		# Last point removed.
		set mypoints {}
	    }
	    2 {
		# Last segment going away, line has reduced to single
		# point.

		$self DropSegment {*}$mypoints

		lassign $mypoints s e
		if {$s eq $p} {
		    set mypoints [lreplace $mypoints 0 0]
		} else {
		    set mypoints [lreplace $mypoints 1 1]
		}
	    }
	    default {
		# Locate point in the line, then join the neighbours
		# as newly adjacent and drop the other segments.

		set pos [lsearch -exact $mypoints $p]

		if {$pos == 0} {
		    # Remove from start
		    set next [lindex $mypoints 1]
		    $self DropSegment $p $next
		} elseif {$pos == [llength $mypoints]-1} {
		    # Remove from end
		    set prev [lindex $mypoints end-1]
		    $self DropSegment $prev $p
		} else {
		    # Remove from the middle
		    set prev [lindex $mypoints ${pos}-1]
		    set next [lindex $mypoints ${pos}+1]

		    $self MoveTarget  $prev $p $next
		    $self DropSegment $p    $next
		}

		set mypoints [lreplace $mypoints $pos $pos]
	    }
	}

	unset mycoords($p)
	return
    }

    proc Nearest {p plist} {
	upvar 1 mycoords mycoords
	lassign $mycoords($p) x y
	set min Inf
	set pn {}
	foreach p $plist {
	    lassign $mycoords($p) xn yn
	    set delta [expr {hypot($xn-$x,$yn-$y)}]
	    if {$delta > $min} continue
	    set min $delta
	    set pn $p
	}
	return $pn
    }

    proc Distance {pa pb} {
	upvar 1 mycoords mycoords
	lassign $mycoords($pa) xa ya
	lassign $mycoords($pb) xb yb
	return [expr {hypot($xa-$xb,$ya-$yb)}]
    }

    ###### Move the specified vertex to new location, and refresh the
    ###### drawn location of the (at most) two lines using that vertex.

    method MoveVertex {p new} {
	# Move the reference location of the point, and ...
	set mycoords($p) $new

	# ... refresh the attached line segments, if any.
	foreach s [array names myline [list $p *]] {
	    $self MoveSegment {*}$s
	}
	foreach s [array names myline [list * $p]] {
	    $self MoveSegment {*}$s
	}
	return
    }

    ###### Create a line between the two specified vertices.

    method AddSegment {pa pb} {
	set ca $mycoords($pa)
	set cb $mycoords($pb)

	# TODO :: Add a callback/create command for the segments. At
	# which point the segment may consist of multiple canvas
	# items.

	set segment [$mycanvas create line {*}$ca {*}$cb -width 1 -fill black]
	set key     [list $pa $pb]

	$mycanvas lower $segment $options(-tag)

	set myline($key) $segment

	# NOTE :: Should we tag the segment ?
	return
    }

    ###### Remove the line between the two specified vertices.

    method DropSegment {pa pb} {
	set key     [list $pa $pb]
	set segment $myline($key)

	$mycanvas delete $segment
	unset myline($key)
	return
    }

    ###### Refresh drawn location of the line between the two
    ###### vertices.

    method MoveSegment {pa pb} {
	set key     [list $pa $pb]
	set segment $myline($key)

	# New coordinates.
	set ca $mycoords($pa)
	set cb $mycoords($pb)

	$mycanvas coords $segment {*}$ca {*}$cb
	return
    }

    ###### Switch the end-vertex line between the first two vertices
    ###### to the last vertex, and refresh the drawn location.

    method MoveTarget {pa pb pbnew} {
	set key     [list $pa $pb]
	set segment $myline($key)
	unset myline($key)

	set key [list $pa $pbnew]
	set myline($key) $segment

	$self MoveSegment $pa $pbnew
	return
    }

    #### Generate notification about changes to the point cloud.

    proc Note {} {
	upvar 1 options options
	if {![llength $options(-data-cmd)]} return
	upvar 1 mypoints mypoints mycoords mycoords self self
	set coords {}
	foreach p $mypoints {
	    lappend coords $mycoords($p)
	}
	return [{*}$options(-data-cmd) $self $coords]
    }

    # # ## ### ##### ######## ############# #####################
    ## STATE
    # - Saved handle of the canvas operated on.
    # - List of the points managed by the object, conveying their
    #   order.
    # - Canvas items for the line segments the poly line consists of.

    variable mycanvas        {} ; #
    variable mypoints        {} ; # list of the ids for the line's
				  # points.
    variable mycoords -array {} ; # Reference coordinates of the
				  # points. Keyed by point group tag.
    variable myline   -array {} ; # Canvas items for the polyline,
				  # actually its line segments, to
				  # make redrawing quicker as only the
				  # relevant segments have to be
				  # modified instead of the whole
				  # thing. Keyed by the pair of points
				  # connected by the segment,
				  # identified by group tag.

    variable mydloc {} ; # Drag state. Location of the moving vertex.
    variable mydoappend 0 ; # Flag. When set new points are always
                            # appended at the end of the line.

    #
    # # ## ### ##### ######## ############# #####################
}

# # ## ### ##### ######## ############# #####################
## Ready

package provide canvas::edit::polyline 0.1
return

# # ## ### ##### ######## ############# #####################
## Scrap yard.
