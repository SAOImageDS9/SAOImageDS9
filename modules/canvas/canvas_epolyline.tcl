## -*- tcl -*-
# # ## ### ##### ######## ############# #####################

# Canvas Behavior Module. Editing a point cloud representing a poly-line. I.e.
# we have two designated points which are start and end of the line, and points
# have an order, with a line-segment drawn between each adjacent pair of points
# in this order.

# Default events
# - Inherited from canvas::edit::points
#
# Configurable:
# - Tag used to mark/identify the points of this cloud.
#   Default: POLYLINE.
#
#   The tag used for the line segment item is "(tag)/Segment".
#
# - Callback used to create the item (group) representing the point.
#   Default: <Inherited from the subordinate point cloud editor>
#
# - Callback used to report on line editing activity.
#   Default: NONE.
#
# - Callback used to report enter/leave editing activity on the points
#   Default: Do nothing.

# # ## ### ##### ######## ############# #####################
# Notes:
#
# - New points are added per the following three rules (See NEW):
#
# 1. Points added on a specific segment split that segment, and can
#    then be dragged to their final location.
#
# 2. Points not lying an a segment are attached to the nearest
#    endpoint of the line
#
# 3. For a closed line which is not yet a line simply extend the
#    line until we have 3 points and can close it as triangle.
#
# 4. For a closed line, i.e. loop, we do not have endpoints to
#    attach to. For them rule 3 is disabled, and points can only be
#    added as per rules 1 and 2.
#
# - Removal of a point P either removes the single line-segment it is
#   part of (happens if P is the current start or end of the line), or
#   replaces the two segments adjacent to P with a single segment
#   joining the neighbours of P.

# # ## ### ##### ######## ############# #####################
## Requisites

package require Tcl 8.5-
package require Tk
package require snit
package require canvas::edit::points
package require canvas::track::lines

namespace eval ::canvas::edit {
    namespace export polyline
    namespace ensemble create
}

# # ## ### ##### ######## ############# #####################
## API

snit::type ::canvas::edit::polyline {

    # Major edit mode: line (open) / polygon (closed)
    option -closed -type snit::boolean -default 0 -readonly 1
    # Minor edit mode: Convex polygon (ignored for -closed 0)
    option -convex -type snit::boolean -default 0 -readonly 1

    # Callback reporting the line/polygon coordinates after changes (add, remove, drag)
    option -data-cmd -default {}

    # Callback reporting when the line/polygon or any of the points have the mouse over it
    option -active-cmd -default {}
    
    # See canvas::edit::points
    option -tag           -default POLYLINE -readonly 1
    option -create-cmd    -default {} \
	-configuremethod Chain \
	-cgetmethod      UnChain

    # See canvas::edit::points, also base config for line/polygon
    option -color            -default SkyBlue2 -configuremethod Pass
    option -hilit-color      -default red      -configuremethod Pass

    # See canvas::edit::points
    option -radius           -default 3        -configuremethod Pass
    option -kind             -default oval     -configuremethod Pass

    # See canvas::edit::points, -add-remove also for click on line/polygon
    option -add-remove-point -default {} -readonly 1
    option -drag-point       -default  3 -readonly 1

    # Additional line/polygon configuration
    # NOTE: __Cannot__ supercede -color/-hilit-color
    option -line-config -default {}

    method Pass {o v} {
	if {$v eq $options($o)} { return 0 }
	set options($o) $v
	if {$myeditor eq {}} { return 1 }
	$myeditor configure $o $v
	return 1
    }

    method Chain {o v} {
	if {$v eq $options($o)} { return 0 }
	set options($o) $v
	if {$myeditor eq {}} { return 1 }

	# Reconfigure the editor with our behaviour still in the chain
	$myeditor configure -create-cmd [mymethod Deny $v]
	return 1
    }

    method Unchain {o} {
	# Hide the internal -create-cmd chaining from the user
	return [$myeditor cget -create-cmd]
    }
    
    # # ## ### ##### ######## ############# #####################

    constructor {c args} {
	set mycanvas $c

	$self configurelist $args

	# Generate an internal point cloud editor, which will handle
	# the basic tasks regarding the line's vertices.

	lappend cmd canvas::edit points ${selfns}::P $c
	lappend cmd -tag        $options(-tag)
	lappend cmd -data-cmd   [mymethod Point]
	lappend cmd -active-cmd [mymethod PointActive]

	# Pass point options/configuration to the subordinate editor
	foreach o {
	    -create-cmd
	    -color
	    -hilit-color
	    -radius
	    -kind
	    -add-remove-point
	    -drag-point
	} {
	    set c $options($o)
	    if {$c ne {}} { lappend cmd $o $c }
	}

	set myeditor  [{*}$cmd]
	set mytracker [canvas::track lines ${selfns}::TRACK $mycanvas]

	if {$options(-closed)} {
	    # Intercept point creation for early rejection of new points
	    # not placed on an existing segment of the loop.
	    $myeditor configure -create-cmd \
		    [mymethod DenyOutsideOfSegment [$myeditor cget -create-cmd]]
	}

	$mycanvas bind [SegmentTag] <Enter> [mymethod Active line]
	$mycanvas bind [SegmentTag] <Leave> [mymethod Active {}  ]
	return
    }

    component mytracker
    component myeditor

    delegate method active to myeditor

    method enable {args} {
	Parts
	$myeditor enable {*}$args

	foreach part $args {
	    switch -exact $part {
		drag {}
		edit {
		    $mycanvas bind [SegmentTag] [Event] [mymethod FindSegment $mycanvas %x %y]
		}
	    }
	}
	return
    }

    method disable {args} {
	Parts
	$myeditor disable {*}$args

	foreach part $args {
	    switch -exact $part {
		drag {}
		edit {
		    $mycanvas bind [SegmentTag] [Event] {}
		}
	    }
	}
	return
    }

    # This is not a straight-forward delegation. Because we have to
    # remove than just the points of the line.
    method clear {} {
	# Drop points - Prevent slow incremental removal of line segments
	set myrskip 1
	$myeditor clear
	set myrskip 0

	set mypoints {}

	# ... and the coordinates
	array unset mycoords *

	$self Regenerate
	Note
	return
    }

    # This is not a straight-forward delegation. Because we have to
    # force 'appending the point' instead of using the heuristics.
    method add {x y} {
	set mydoappend 1
	$myeditor add $x $y
	set mydoappend 0

	$self Regenerate
	return
    }

    method set-line {points} {
	# points :: list ((x0 y0) (x1 y1) ...)
	$self clear
	set mydoappend 1
	foreach p $points {
	    $myeditor add {*}$p
	}
	set mydoappend 0

	$self Regenerate
	return
    }

    # # ## ### ##### ######## ############# #####################
    ## Actions bound to events, as reported by the point cloud editor.

    method PointActive {_ point} {
	if {$point ne {}} {
	    set point [lsearch -exact $mypoints $point]
	    # if {$point < 0} { set point {} }
	}
	$self Active $point
	return
    }
    
    method Active {kind} {
	# puts /$kind/
	if {![llength $options(-active-cmd)]} return
	{*}$options(-active-cmd) $self $kind
	return
    }
    
    method FindSegment {c x y} {
	# We know that we clicked on the line/polygon going through the known points.
	# This means that (x,y) is on one of the segments of that line.
	# Locate that segment.
	# We look for the segment A-B where the direction of A-B best matches the direction of A-P,
	# for the new point P.

	set x [$c canvasx $x]
	set y [$c canvasy $y]

	# OPTIMIZE: keep last

	if {$options(-closed)} {
	    set pas $mypoints
	    set pbs [lrange $mypoints 1 end]
	    lappend pbs [lindex $mypoints 0]
	} else {
	    set pas [lrange $mypoints 0 end-1]
	    set pbs [lrange $mypoints 1 end]
	}

	set min Inf
	set pos 0
	foreach pa $pas pb $pbs {
	    incr pos ;# pos -- pb
	    lassign $mycoords($pa) xa ya
	    lassign $mycoords($pb) xb yb
	    # puts -nonewline \nB@$pos\t[X $pa]-[X $pb]

	    # vectors A-P and A-B
	    set dax [expr {$x  - $xa}]
	    set day [expr {$y  - $ya}]
	    set dbx [expr {$xb - $xa}]
	    set dby [expr {$yb - $ya}]

	    # normalized scalar product = cos (angle)
	    set mag [expr {hypot($dax,$day)}]
	    set sp  [expr {(($dax*$dbx) + ($day*$dby))/($mag*hypot($dbx,$dby))}]
	    # puts -nonewline \t|$mag|\tcphi\t$sp

	    # -1 ==> vectors are anti collinear
	    #  0 ==> vectors are orthogonal
	    #  1 ==> vectors are collinear

	    # ignore directions which do not match to a minimum standard
	    if {$sp < 0.9} continue
	    # puts -nonewline \tGOOD

	    # ... and take the nearest of the remainder
	    if {$mag > $min} continue
	    # puts -nonewline \tREMEMBER

	    set min $mag
	    set mysplit [list $pa $pb]
	}

	#puts ""
	if {[llength $mysplit]} return
	# puts "/FAIL"

	# With mysplit not set the system falls back to attaching to the nearest endpoint
	# Or, for a polygon, denies the new point
	return
    }

    method DenyOutsideOfSegment {chain c x y} {
	# Accept all points during programmatic load
	if {$mydoappend} {
	    return [{*}$chain $c $x $y]
	}
	# Interaction, Rule 4.
	##
	# We know here that we are working on a closed line/loop.
	# Deny any attempts to add points not sitting on a segment of the line.
	# Exception is when we have no loop at all yet (needs 3 points and segments).
	set len [llength $mypoints]
	if {$len >= 3} {
	    if {![llength $mysplit]} return ;# deny point not on segment
	}
	# Continue to actual marker creation.
	return [{*}$chain $c $x $y]
    }

    method {Point add} {pe id x y} {
	set mycoords($id) [list $x $y]

	if {$mydoappend} {
	    set end [lindex $mypoints end]
	    lappend mypoints $id

	    if {[llength $mypoints] < 2} return

	    # Reject loading of closed non-convex line into convex editor
	    if {$options(-closed) && $options(-convex) && ![$self Convex]} {
		return -code error "Polygon is not convex"
	    }

	    # Regenerate is handled by caller (enables deferal until complete line is loaded)
	    return
	}

	$self ExtendLine $id $x $y
	$self Regenerate
	Note
	return
    }

    method {Point remove} {pe id} {
	if {$myrskip} return

	$self ShrinkLine $id
	$self Regenerate
	Note
	return
    }

    method {Point move start} {pe id} {
	set mydloc   $mycoords($id)
	set mydstart $mydloc

	set len [llength $mypoints]
	set pos [lsearch -exact $mypoints $id]
	if {$pos < 0} return

	set fix {}

	set prev $pos ; incr prev -1
	set next $pos ; incr next

	if {$options(-closed) && ($prev < 0)} {
	    lappend fix $mycoords([lindex $mypoints end])
	} elseif {$prev >= 0} {
	    lappend fix $mycoords([lindex $mypoints $prev])
	}

	if {$options(-closed) && ($next >= $len)} {
	    lappend fix $mycoords([lindex $mypoints 0])
	} elseif {$next < $len} {
	    lappend fix $mycoords([lindex $mypoints $next])
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
	$mytracker done
	$self MoveVertex $id $mydloc

	if {$options(-closed) && $options(-convex) && ![$self Convex]} {
	    # Undo the move when it makes the closed convex line non-convex.
	    $self MoveVertex $id $mydstart
	    return 0
	}

	$self Regenerate
	Note
	return 1
    }

    method MoveVertex {p new} {
	# Move the reference location of the point, and ...
	set mycoords($p) $new
	return
    }

    method Convex {} {
	# Anything up to a triangle is always considered convex.
	if {[llength $mypoints] < 4} { return 1 }
	foreach triple [Triples] {
	    lassign $triple a b c
	    # Corner a --> b --> c
	    # Convex if the turn is right-hand
	    set o [Cross [Delta $b $a] [Delta $c $b]]
	    if {$o < 0} { return 0 }
	}
	return 1
    }

    proc Cross {a b} {
	lassign $a xa ya
	lassign $b xb yb
	return [expr {$xa*$yb - $ya*$xb}]
    }

    proc Delta {a b} {
	lassign $a xa ya
	lassign $b xb yb
	return [list [expr {$xb - $xa}] [expr {$yb - $ya}]]
    }

    proc Triples {} {
	upvar 1 mypoints mypoints mycoords mycoords

	set     plist $mypoints
	lappend plist {*}[lrange $mypoints 0 1]

	set plist [lmap p $plist { set mycoords($p) }]
	set triples {}
	foreach \
	    a [lrange $plist 0 end-2] \
	    b [lrange $plist 1 end-1] \
	    c [lrange $plist 2 end] {
		lappend triples [list $a $b $c]
	    }
	return $triples
    }

    # # ## ### ##### ######## ############# #####################
    ## Line management

    method Regenerate {} {
	if {$mytrack ne {}} {
	    $mycanvas delete $mytrack
	    set mytrack {}
	}

	set len [llength $mypoints]
	if {$len < 2} return ;# line needs 2 points

	set coordinates [concat {*}[lmap p $mypoints {
	    set mycoords($p)
	}]]

	if {$options(-closed) && ($len > 2)} {
	    set mytrack [$mycanvas create polygon {*}$coordinates \
			     -fill {} \
			     -width 2 \
			     {*}$options(-line-config) \
			     -activeoutline $options(-hilit-color) \
			     -outline       $options(-color)]
	} else {
	    set mytrack [$mycanvas create line {*}$coordinates \
			     -width 2 \
			     {*}$options(-line-config) \
			     -activefill $options(-hilit-color) \
			     -fill       $options(-color)]
	}

	canvas::tag append $mycanvas $mytrack [SegmentTag]
	$mycanvas lower $mytrack $options(-tag)
	return
    }

    method ExtendLine {p x y} {
	# Add point, with attached segments, drop superseded segments
	set len [llength $mypoints]

	switch -exact -- $len {
	    0 - 1 {
		lappend mypoints $p
	    }
	    default {
		# 2 or more points ... (NEW) ... Rules at top of file
		##

		# Rule 1.

		if {[llength $mysplit]} {
		    lassign $mysplit pa pb
		    set mysplit {}

		    set pos      [lsearch -exact $mypoints $pb]
		    set mypoints [linsert $mypoints $pos $p]
		    return
		}

		# Rule 4.

		if {$options(-closed) && ($len >= 3)} {
		    return -code error \
			"Failed to be rejected by DenyOutsideOfSegment"
		}

		# Rule 3. Extend at end and close

		if {$options(-closed) && ($len == 2)} {
		    lappend mypoints $p
		    return
		}

		# Rule 2. Attach to the nearer of the two endpoints.

		set first [lindex $mypoints 0]
		set last  [lindex $mypoints end]

		if {[Distance $p $first] < [Distance $p $last]} {
		    set mypoints [linsert $mypoints 0 $p]
		    return
		}

		lappend mypoints $p
		return
	    }
	}
	return
    }

    method ShrinkLine {p} {
	set pos [lsearch -exact $mypoints $p]
	if {$pos < 0} return
	set mypoints [lreplace $mypoints $pos $pos]

	unset mycoords($p)
	return
    }

    proc Distance {pa pb} {
	upvar 1 mycoords mycoords
	lassign $mycoords($pa) xa ya
	lassign $mycoords($pb) xb yb
	return [expr {hypot($xa-$xb,$ya-$yb)}]
    }

    #### #### #### #### #### #### #### #### #### #### #### ####

    proc SegmentTag {{suffix {}}} {
	upvar 1 options options
	if {$suffix ne {}} { set suffix ,$suffix }
	return $options(-tag)/Segment$suffix
    }

    proc Parts {} {
	upvar 1 args args
	if {![llength $args]} { set args {edit} }
	lappend args drag
	set args [lsort -unique $args]
	return
    }

    proc Event {} {
	upvar 1 options options
	if {$options(-add-remove-point) ne {}} {
	    return <$options(-add-remove-point)>
	} else {
	    return <1>
	}
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

    # debug support ...
    proc X {p} { return [lindex [split $p /] 0] }
    proc XX {} { upvar 1 mypoints ps ; lmap p $ps { X $p } }

    # # ## ### ##### ######## ############# #####################
    ## STATE
    # - Saved handle of the canvas operated on.
    # - List of the points managed by the object, conveying their
    #   order.
    # - Canvas items for the line segments the poly line consists of.

    variable mycanvas	{} ;# canvas the editor is attached to
    variable mytrack	{} ;# line/polygon item for the entire track

    # mypoints :: list (id...)
    # mycoords :: array (id -> pixel)
    # myline   :: array (pair (a b) -> item)

    variable mypoints        {} ; # list of the ids for the line's points.
    variable mysplit         {} ; # Segment clicked on (pair (point-id-a point-id-b))
    variable mycoords -array {} ; # Reference coordinates of the points. Keyed by point id.
    variable mydloc          {} ; # Drag state. Location of the moving vertex.
    variable mydstart        {} ; # Drag state. Original location of the moving vertex.
    variable mydoappend       0 ; # Flag. When set new points are always
                                  # appended at the end of the line.
    variable myrskip          0 ; # Flag. Skip complex point removal when set.
    #
    # # ## ### ##### ######## ############# #####################
}

# # ## ### ##### ######## ############# #####################
## Ready

package provide canvas::edit::polyline 0.2
return

# # ## ### ##### ######## ############# #####################
## Scrap yard.
