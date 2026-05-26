## -*- tcl -*-
# # ## ### ##### ######## ############# #####################

# Canvas Behavior Module. Editing 2-4 points/vertices describing an axis-aligned rectangle,
# i.e. bounding box.

# Core interaction behaviour inherited from canvas::edit::points

# Configurable:
# - Tag used to mark/identify the points of this cloud.
#   Default: RECTANGLE
#
# - Callback used to create the item (group) representing the point.
#   Default: <Inherited from the subordinate point cloud editor>
#
# - Callback used to report on rectangle editing activity.
#   Default: NONE.
#
# - Callback used to report enter/leave events for the rectangle and its points.
#   Default: NONE.

# # ## ### ##### ######## ############# #####################
## Requisites

package require Tcl 8.5-
package require Tk
package require snit
package require canvas::edit::points

namespace eval ::canvas::edit {
    namespace export rectangle
    namespace ensemble create
}

# # ## ### ##### ######## ############# #####################
## API

snit::type ::canvas::edit::rectangle {

    # See canvas::edit::points
    option -tag           -default RECTANGLE -readonly 1
    option -create-cmd    -default {} \
	-configuremethod Chain \
	-cgetmethod      UnChain

    # Callback reporting the rectangle after changes (add, remove, drag)
    option -data-cmd      -default {}

    # Callback reporting when the rectangle or any of the points have the mouse over it
    option -active-cmd -default {}

    # See canvas::edit::points, also base config for rectangle
    option -color            -default SkyBlue2 -configuremethod Pass
    option -hilit-color      -default red      -configuremethod Pass

    # See canvas::edit::points
    option -radius           -default 3        -configuremethod Pass
    option -kind             -default oval     -configuremethod Pass

    # See canvas::edit::points, -add-remove also for click on rectangle
    option -add-remove-point -default {} -readonly 1
    option -drag-point       -default  3 -readonly 1

    # Additional rectangle configuration
    # NOTE: __Cannot__ supercede -color/-hilit-color
    option -rect-config -default {}

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
	set mystate  {}
	set myops    base

	$self configurelist $args

	# Generate an internal point cloud editor, which will handle
	# the basic tasks regarding the rectangles's vertices.

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

	$myeditor configure -create-cmd \
	    [mymethod Deny [$myeditor cget -create-cmd]]
	
	$mycanvas bind [SegmentTag] <Enter> [mymethod Active rect]
	$mycanvas bind [SegmentTag] <Leave> [mymethod Active {}  ]
	return
    }

    component myeditor

    delegate method enable  to myeditor
    delegate method disable to myeditor
    delegate method active  to myeditor

    method clear {} {
	set myops shunt
	$myeditor clear

	set myops base
	set mystate  {}
	set mycoords {}

	$self Regenerate
	Note
	return
    }

    method set {minx miny maxx maxy} {
	$self clear
	$self Complete $myeditor $minx $miny $maxx $maxy
	return
    }
    
    # # ## ### ##### ######## ############# #####################
    ## Actions bound to events, as reported by the point cloud editor.

    method Complete {pe minx miny maxx maxy} {
	set myops shunt

	# Corners
	#
	# tl *--* tr
	#    |  |
	# bl *--* br

	# Create the proper corner points and remember their associations (id <-> corner)
	Def $pe tl $minx $miny
	Def $pe bl $minx $maxy
	Def $pe tr $maxx $miny
	Def $pe br $maxx $maxy

	# enter completion, where the rectangle can be dragged (by its corners), and removed
	set myops complete

	$self Regenerate
	Note
	return
    }
    
    method Deny {chain c x y} {
	#puts deny/$myops/$mystate/
	# Deny more points when we have the complete set.
	if {$myops eq "complete"} return

	# Continue to actual marker creation.
	return [{*}$chain $c $x $y]
    }

    method PointActive {_ corner} {
	if {$myops ne "complete"} return
	if {$corner ne {}} { set corner [dict get $mystate $corner] }
	$self Active $corner
	return
    }
    
    method Active {kind} {
	# puts /$kind/
	if {![llength $options(-active-cmd)]} return
	{*}$options(-active-cmd) $self $kind
	return
    }
    
    method {Point add} {pe id x y} {
	switch -exact -- $myops {
	    shunt {}
	    base {
		# Base point arrived, remember, now wait for second corner
		set mystate [list $id $x $y]
		set myops partial
		return
	    }
	    partial {
		# Second corner has arrived. Complete the rectangle.
		# Disable point callbacks invoked due to this automatic task.
		set myops shunt

		# Get saved first corner
		lassign $mystate id0 x0 y0
		set mystate {}

		# Compute all corners from it and the current, second, corner
		set minx [expr { min ($x0, $x) }]
		set miny [expr { min ($y0, $y) }]
		set maxx [expr { max ($x0, $x) }]
		set maxy [expr { max ($y0, $y) }]

		# Drop old points (base, and current)
		$pe remove $id
		$pe remove $id0

		# And generate the rectangle
		$self Complete $pe $minx $miny $maxx $maxy
	    }
	    complete {
		return -code error "Should have been rejected by `Deny`"
	    }
	}
    }

    method {Point remove} {pe id} {
	switch -exact -- $myops {
	    shunt {}
	    base {
		# no points known. nothing to do
		return
	    }
	    partial {
		# first point known, no second point. drop memory of first point
		set mystate {}
		set myops base
		return
	    }
	    complete {
		# removing even one point of the rectangle removes the entire rectangle!
		# Disable point callbacks invoked due to this automatic task.
		set myops shunt

		# Find the corner removed by the user and drop it from the state.
		# Then remove the remaining corners
		set corner [dict get $mystate $id]
		dict unset mystate $id
		dict unset mystate $corner

		foreach corner $ourcorners {
		    if {![dict exists $mystate $corner]} continue
		    $pe remove [dict get $mystate $corner]
		}

		# enter base state waiting for a new first point
		set myops base
		set mystate {}
		set mycoords {}
		
		$self Regenerate
		Note
		return
	    }
	}

	return
    }

    method {Point move start} {pe id} {
	# Initialize local drag state.
	set mydid  $id
	set corner [dict get $mystate $id]
	set mydloc [dict get $mycoords $corner]
	return
    }

    method {Point move delta} {pe id nx ny dx dy} {
	# Track the movement.
	set mydloc [list $nx $ny]
	return
    }

    method {Point move done} {pe id} {
	set corner [dict get $mystate $id]

	# Get the rectangle data from moving an opposite corner
	lassign [dict get $mycoords [dict get {
	    tl br    tr bl
	    bl tr    br tl
	} $corner]]     x1 y1
	lassign $mydloc x0 y0

	# Update state of the moved point, for proper relative
	# movement after the coming recalculation
	Save $id $corner $x0 $y0
	
	# Recompute all corner locations ...
	set minx [expr { min ($x0, $x1) }]
	set miny [expr { min ($y0, $y1) }]
	set maxx [expr { max ($x0, $x1) }]
	set maxy [expr { max ($y0, $y1) }]

	# and move the points for the corners to the new locations
	# One of the points, the current moved may not move again
	Move $pe tl $minx $miny
	Move $pe bl $minx $maxy
	Move $pe tr $maxx $miny
	Move $pe br $maxx $maxy

	$self Regenerate
	Note	
	return 1
    }

    method Regenerate {} {
	if {$myrect ne {}} {
	    $mycanvas delete $myrect
	    set myrect {}
	}

	if {$myops ne "complete"} return
	
	lassign [dict get $mycoords tl] minx miny
	lassign [dict get $mycoords br] maxx maxy

	set myrect [$mycanvas create rectangle $minx $miny $maxx $maxy \
			-fill {} \
			-width 2 \
			{*}$options(-rect-config) \
			-activeoutline $options(-hilit-color) \
			-outline       $options(-color)]

	canvas::tag append $mycanvas $myrect [SegmentTag]
	$mycanvas lower $myrect $options(-tag)
	return
    }
    
    # # ## ### ##### ######## ############# #####################
    ## Corner management

    proc Move {pe corner nx ny} {
	upvar 1 mystate mystate mycoords mycoords

	lassign [dict get $mycoords $corner] ox oy
	set dx [expr {$nx - $ox}]
	set dy [expr {$ny - $oy}]
	
	set id [dict get $mystate $corner]
	$pe move-by $id $dx $dy

	Save $id $corner $nx $ny
	return
    }
    
    proc Def {pe corner x y} {
	upvar 1 mystate mystate mycoords mycoords

	Save [$pe add $x $y] $corner $x $y
	return
    }

    proc Save {id corner x y} {
	upvar 1 mystate mystate mycoords mycoords
	
	dict set mycoords $corner [list $x $y]
	dict set mystate  $corner $id
	dict set mystate  $id     $corner
	return
    }

    proc SegmentTag {} {
	upvar 1 options options
	return $options(-tag)/Rect
    }

    #### Generate notification about changes to the point cloud.

    proc Note {} {
	upvar 1 options options self self myops myops mycoords mycoords
	if {![llength $options(-data-cmd)]} return

	switch -exact -- $myops {
	    shunt - base - partial {
		set coords {}
	    }
	    complete {
		lassign [dict get $mycoords tl] minx miny
		lassign [dict get $mycoords br] maxx maxy
		set coords [list $minx $miny $maxx $maxy]
	    }
	}

	return [{*}$options(-data-cmd) $self $coords]
    }

    # debug support ...
    proc X {p} { return [lindex [split $p /] 0] }

    # # ## ### ##### ######## ############# #####################
    ## STATE
    # - Saved handle of the canvas operated on.
    # - Counter for the generation of point identifiers
    # - List of the points managed by the object, conveying their
    #   order.
    # - Canvas items for the actual rectangle

    typevariable ourcorners {tl tr bl br}
	
    variable mycanvas {} ;# The canvas we are working with.
    variable myeditor {} ;# point editor instance managing the rectangle corners
    variable mystate  {} ;# dict, general state
    variable myops    {} ;# system state controlling callback processing
    # states
    # - base	 No points present, accept base point
    # - shunt	 Ignore point editor callback, automatic task in progress
    # - partial  Single point known, wait for the second corner
    # - complete Rectangle is complete, deny more points

    variable mycoords {} ;# corner -> pair (x y)
    variable myrect   {} ;# rectangle item

    variable mydid              ; # Drag state. id of the moving point.
    variable mydloc             ; # Drag state. Uncommitted location of the moving point.

    # # ## ### ##### ######## ############# #####################
}

# # ## ### ##### ######## ############# #####################
## Ready

package provide canvas::edit::rectangle 0.1
return

# # ## ### ##### ######## ############# #####################
## Scrap yard.
