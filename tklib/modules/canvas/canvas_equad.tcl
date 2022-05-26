## -*- tcl -*-
# # ## ### ##### ######## ############# #####################

## TODO : Optimize the use of AddLine/DropAdjacent to reduce the amount
## TODO : of item churn.

# # ## ### ##### ######## ############# #####################

# Canvas Behavior Module. Editing 4 points/vertices describing a
# (convex) quadrilateral.

# - Create    point - B1 (canvas global)
# - Remove    point - B2 (linked to -tag, current item)
# - Drag/Move point - B3 (linked to -tag, current item)
# - Auto-highlight points, to show ability of drag/move.

# Configurable:
# - Tag used to mark/identify the points of this cloud.
#   Default: QUADRILATERAL.
#
# - Callback used to create the item (group) representing the point.
#   Default: <Inherited from the subordinate point cloud editor>
#
# - Callback used to (un)highlight the item (group) of a point.
#   Default: <Inherited from the subordinate point cloud editor>
#
# - Callback used to report on quadrilateral editing activity.
#   Default: NONE.

# # ## ### ##### ######## ############# #####################
## Requisites

package require Tcl 8.5
package require Tk
package require snit
package require canvas::edit::points
package require canvas::track::lines

namespace eval ::canvas::edit {
    namespace export quadrilateral
    namespace ensemble create
}

# # ## ### ##### ######## ############# #####################
## API

snit::type ::canvas::edit::quadrilateral {
    option -tag           -default QUADRILATERAL -readonly 1
    option -create-cmd    -default {}       -readonly 1
    option -highlight-cmd -default {}       -readonly 1
    option -data-cmd      -default {}       -readonly 1

    option -convex -type snit::boolean -default 0 -readonly 1

    constructor {c args} {
	set mycanvas $c
	set myfreeref $ourrefs

	# Generate an internal point cloud editor, which will handle
	# the basic tasks regarding the quadrilaterals's vertices.

	lappend cmd canvas::edit points ${selfns}::P $c
	lappend cmd -tag        [from args -tag QUADRILATERAL]
	lappend cmd -data-cmd   [mymethod Point]
	lappend cmd -create-cmd [mymethod Create]

	set c [from args -highlight-cmd {}]
	if {$c ne {}} { lappend cmd -highlight-cmd $c }

	set myeditor  [{*}$cmd]
	set mytracker [canvas::track lines ${selfns}::TRACK $mycanvas]

	set c [from args -create-cmd [mymethod DefaultCreate]]
	set options(-create-cmd) $c

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
    delegate method add     to myeditor

    # # ## ### ##### ######## ############# #####################
    ## Actions bound to events, as reported by the point cloud editor.

    method DefaultCreate {c x y} {
	# No vetoing, just item creation. The vertices of the
	# quadrilateral are uniquely colored and shaped, ensuring that
	# we not only see the shape of the quad, but its exact
	# orientation as well.

	set items {}
	set radius 5
	switch -exact -- [lindex $myfreeref 0] {
	    0 {
		# First vertex, top left.
		# A circle centered on the chosen location, blue
		# filled with black border.
		set w [expr {$x - $radius}]
		set n [expr {$y - $radius}]
		set e [expr {$x + $radius}]
		set s [expr {$y + $radius}]
		lappend items [$c create oval $w $n $e $s \
				   -width   1            \
				   -outline black       \
				   -fill    SkyBlue2]
	    }
	    1 {
		# Second vertex, clock-wise, top right
		# A circle centered on the chosen location, green
		# filled with black border.
		set w [expr {$x - $radius}]
		set n [expr {$y - $radius}]
		set e [expr {$x + $radius}]
		set s [expr {$y + $radius}]
		lappend items [$c create oval $w $n $e $s \
				   -width   1            \
				   -outline black       \
				   -fill    Green]
	    }
	    2 {
		# Third vertex, clock-wise, bottom right
		# A square centered on the chosen location, blue
		# filled with black border.
		set w [expr {$x - $radius}]
		set n [expr {$y - $radius}]
		set e [expr {$x + $radius}]
		set s [expr {$y + $radius}]
		lappend items [$c create rect $w $n $e $s \
				   -width   1            \
				   -outline black       \
				   -fill    SkyBlue2]
	    }
	    3 {
		# Fourth vertex, clock-wise, bottom left
		# A square centered on the chosen location, green
		# filled with black border.
		set w [expr {$x - $radius}]
		set n [expr {$y - $radius}]
		set e [expr {$x + $radius}]
		set s [expr {$y + $radius}]
		lappend items [$c create rect $w $n $e $s \
				   -width   1            \
				   -outline black       \
				   -fill    Green]
	    }
	}
	return $items
    }

    method Create {c x y} {
	if {![llength $myfreeref]} { return {} }

	if {$options(-convex)} {
	    set next [lindex $myfreeref 0]
	    set mydactive 1
	    set mydvertex $next
	    set mydloc [list $x $y]
	    set convex [$self Convex]
	    set mydactive 0
	    if {!$convex} { return {} }
	}
	# XXX Might be useful to have our own standard create method.
	# XXX To make the vertices of the quad visually unique
	# XXX (color, shape).
	return [{*}$options(-create-cmd) $c $x $y]
    }

    method {Point add} {pe id x y} {
	set ref [lindex $myfreeref 0]
	set myfreeref [lrange $myfreeref 1 end]
	set myvertex($ref) [list $x $y]
	set myvertex($id) $ref

	$self AddLine [expr {($ref-1)%4}] $ref
	$self AddLine $ref [expr {($ref+1)%4}]

	# Report only when the quad has become complete.
	if {[llength $myfreeref]} return
	Note
	return
    }

    method {Point remove} {pe id} {
	set ref $myvertex($id)
	unset myvertex($id) myvertex($ref)
	lappend myfreeref $ref

	$self DropAdjacent $ref

	# Report only when the quad just lost a vertex
	if {[llength $myfreeref] > 1} return
	Note
	return
    }

    method {Point move start} {pe id} {
	# Initialize local drag state.
	set ref $myvertex($id)
	set mydactive 1
	set mydid     $id
	set mydvertex $ref
	set mydloc    $myvertex($ref)

	$mytracker start $mydloc {*}[$self Trackpoints]
	return
    }

    method {Point move delta} {pe id nx ny dx dy} {
	# Track the movement.
	set mydloc [list $nx $ny]
	$mytracker move $mydloc
	return
    }

    method {Point move done} {pe id} {
	# Accept any move if the quad is not restrained.
	# Otherwise reject locations causing non-convexity.
	$mytracker done
	set ok [expr {!$options(-convex) || [$self Convex]}]
	set mydactive 0
	if {$ok} {
	    # Commit to the new location.
	    set myvertex($mydvertex) $mydloc
	    $self DropAdjacent $mydvertex
	    $self AddLine [expr {($mydvertex-1)%4}] $mydvertex
	    $self AddLine $mydvertex [expr {($mydvertex+1)%4}]

	    # Report only if the quad is complete.
	    if {![llength $myfreeref]} Note
	}
	return $ok
    }

    method Convex {} {
	# An incomplete quad is at most a triangle, and always convex.
	if {[llength $myfreeref] > 1} { return 1 }
	foreach triple [$self Triples] {
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

    method Triples {} {
	set plist [$self GetQuad 1]
	set triples {}
	foreach \
	    a [lrange $plist 0 end-2] \
	    b [lrange $plist 1 end-1] \
	    c [lrange $plist 2 end] {
		lappend triples [list $a $b $c]
	    }
	return $triples
    }

    method GetQuad {{extended 0}} {
	set res {}
	if {$extended} {
	    set idlist $ourerefs
	} else {
	    set idlist $ourrefs
	}
	foreach ref $idlist {
	    if {$mydactive && ($ref == $mydvertex)} {
		set p $mydloc
	    } else {
		if {![info exists myvertex($ref)]} continue
		set p $myvertex($ref)
	    }
	    lappend res $p
	}
	return $res
    }

    # # ## ### ##### ######## ############# #####################
    ## Line management

    method Trackpoints {} {
	set prev [expr {($mydvertex-1)%4}]
	set next [expr {($mydvertex+1)%4}]
	set res {}
	if {[info exists myvertex($prev)]} {
	    lappend res $myvertex($prev)
	}
	if {[info exists myvertex($next)]} {
	    lappend res $myvertex($next)
	}
	return $res
    }

    method AddLine {aref bref} {
	set key $aref$bref
	if {[info exists myline($key)]} { error "present already" }

	if {![info exists myvertex($aref)] ||
	    ![info exists myvertex($bref)]
	} return

	set a $myvertex($aref)
	set b $myvertex($bref)

	# TODO :: Add a callback/create command prefix for the helper
	# lines. At which point the 'line' may consist of multiple
	# items.

	set segment [$mycanvas create line {*}$a {*}$b -width 1 -fill black]
	$mycanvas lower $segment $options(-tag)

	set myline($key) $segment

	# NOTE :: Should we tag the segment ?
	return
    }

    method DropAdjacent {pref} {
	foreach key [array names myline *${pref}*] {
	    set segment $myline($key)
	    $mycanvas delete $segment
	    unset myline($key)
	}
	return
    }

    #### Generate notification about changes to the point cloud.

    proc Note {} {
	upvar 1 options options myfreeref myfreeref myvertex myvertex self self
	if {![llength $options(-data-cmd)]} return
	if {[llength $myfreeref]} {
	    # Incomplete quad. Report as 'no quad'.
	    set coords {}
	} else {
	    set coords [$self GetQuad]
	}
	return [{*}$options(-data-cmd) $self $coords]
    }

    # # ## ### ##### ######## ############# #####################
    ## STATE
    # - Saved handle of the canvas operated on.
    # - Counter for the generation of point identifiers
    # - List of the points managed by the object, conveying their
    #   order.
    # - Canvas items for the actual polyline

    typevariable ourrefs  {0 1 2 3}
    typevariable ourerefs {0 1 2 3 0 1}

    variable mycanvas        {} ; # The canvas we are working with.
    variable myfreeref          ; # Vertex ids which are free to fill.
    variable myvertex -array {} ; # Vertex information
                                  # editor id -> vertex id
                                  # vertex id -> vertex coordinates
    variable myline   -array {} ; # Canvas items for the quad helper lines connecting the points.
                                  # Keyed by the pair if vertex ids connected by the line.

    variable mydactive 0        ; # Drag state. Boolean flag. True when drag in progress.
    variable mydid              ; # Drag state. Editor point id of moving point.
    variable mydvertex          ; # Drag state. Vertex id of moving point.
    variable mydloc             ; # Drag state. Uncommitted location of the moving point.
    variable mydcrosshair       ; # Drag state. Crosshair / rubber band lines shown during dragging.

    # # ## ### ##### ######## ############# #####################
}

# # ## ### ##### ######## ############# #####################
## Ready

package provide canvas::edit::quadrilateral 0.1
return

# # ## ### ##### ######## ############# #####################
## Scrap yard.
