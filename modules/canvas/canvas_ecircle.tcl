## -*- tcl -*-
# # ## ### ##### ######## ############# #####################

# Canvas Behavior Module. Editing 2 points describing an axis-aligned circle.

# Core interaction behaviour inherited from canvas::edit::points

# Configurable:
# - Tag used to mark/identify the points of this cloud.
#   Default: CIRCLE
#
# - Callback used to create the item (group) representing the point.
#   Default: <Inherited from the subordinate point cloud editor>
#
# - Callback used to report on circle editing activity.
#   Default: NONE.
#
# - Callback used to report enter/leave events for the circle and its points.
#   Default: NONE.

# # ## ### ##### ######## ############# #####################
## Requisites


package require Tcl 8.5- 
package require Tk
package require snit
package require canvas::edit::points

namespace eval ::canvas::edit {
    namespace export circle
    namespace ensemble create
}

# # ## ### ##### ######## ############# #####################
## API

snit::type ::canvas::edit::circle {

    # See canvas::edit::points
    option -tag           -default CIRCLE -readonly 1
    option -create-cmd    -default {} \
	-configuremethod Chain \
	-cgetmethod      UnChain

    # Callback reporting the circle after changes (add, remove, drag)
    option -data-cmd      -default {}

    # Callback reporting when the circle or any of the points have the mouse over it
    option -active-cmd -default {}

    # See canvas::edit::points, also base config for circle
    option -color            -default SkyBlue2 -configuremethod Pass
    option -hilit-color      -default red      -configuremethod Pass

    # See canvas::edit::points
    option -radius           -default 3        -configuremethod Pass
    option -kind             -default oval     -configuremethod Pass

    # See canvas::edit::points, -add-remove also for click on circle
    option -add-remove-point -default {} -readonly 1
    option -drag-point       -default  3 -readonly 1

    # Additional circle configuration
    # NOTE: __Cannot__ supercede -color/-hilit-color
    option -circle-config -default {}

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
	# the basic tasks regarding the circles's vertices.

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
	
	$mycanvas bind [SegmentTag] <Enter> [mymethod Active circle]
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

    method set {center radius} {
	$self clear

	lassign $center x y
	set edge [list [expr {$x + $radius}] $y]
	
	$myeditor add {*}$center
	$myeditor add {*}$edge
	return
    }
    
    # # ## ### ##### ######## ############# #####################
    ## Actions bound to events, as reported by the point cloud editor.
    
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
		Save $id center $x $y
		set myops partial
		return
	    }
	    partial {
		Save $id edge $x $y
		set myops complete

		$self Regenerate
		Note
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
		# removing even one point of the circle removes the entire circle!
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
	Save $id $corner {*}$mydloc
	
	$self Regenerate
	Note	
	return 1
    }

    method Regenerate {} {
	if {$mycircle ne {}} {
	    $mycanvas delete $mycircle
	    set mycircle {}
	}
	
	if {$myops ne "complete"} return
	
	lassign [dict get $mycoords center] cx cy
	lassign [dict get $mycoords edge  ] ex ey

	set radius [expr { hypot ($ex - $cx, $ey - $cy) }]
	set w [expr {$cx - $radius}]
	set n [expr {$cy - $radius}]
	set e [expr {$cx + $radius}]
	set s [expr {$cy + $radius}]
	
	set mycircle [$mycanvas create oval $w $n $e $s \
			-fill {} \
			-width 2 \
			{*}$options(-circle-config) \
			-activeoutline $options(-hilit-color) \
			-outline       $options(-color)]

	canvas::tag append $mycanvas $mycircle [SegmentTag]
	$mycanvas lower $mycircle $options(-tag)
	return
    }
    
    # # ## ### ##### ######## ############# #####################
    ## Corner management

    proc Save {id corner x y} {
	upvar 1 mystate mystate mycoords mycoords
	
	dict set mycoords $corner [list $x $y]
	dict set mystate  $corner $id
	dict set mystate  $id     $corner
	return
    }

    proc SegmentTag {} {
	upvar 1 options options
	return $options(-tag)/Circle
    }

    #### Generate notification about changes to the point cloud.

    proc Note {} {
	upvar 1 options options self self myops myops mycoords mycoords
	if {![llength $options(-data-cmd)]} return

	switch -exact -- $myops {
	    shunt - base - partial {
		set details {}
	    }
	    complete {
		set center [dict get $mycoords center]
		lassign $center                   cx cy
		lassign [dict get $mycoords edge] ex ey

		set radius  [expr { hypot ($ex - $cx, $ey - $cy) }]
		set details [list $center $radius]
	    }
	}

	return [{*}$options(-data-cmd) $self $details]
    }

    # debug support ...
    proc X {p} { return [lindex [split $p /] 0] }

    # # ## ### ##### ######## ############# #####################
    ## STATE
    # - Saved handle of the canvas operated on.
    # - Counter for the generation of point identifiers
    # - List of the points managed by the object, conveying their
    #   order.
    # - Canvas items for the actual circle

    typevariable ourcorners {center edge}
	
    variable mycanvas {} ;# The canvas we are working with.
    variable myeditor {} ;# point editor instance managing the circle corners
    variable mystate  {} ;# dict, general state
    variable myops    {} ;# system state controlling callback processing
    # states
    # - base	 No points present, accept base point
    # - shunt	 Ignore point editor callback, automatic task in progress
    # - partial  Single point known, wait for the second corner
    # - complete Circle is complete, deny more points

    variable mycoords {} ;# corner -> pair (x y)
    variable mycircle {} ;# circle item

    variable mydid              ; # Drag state. id of the moving point.
    variable mydloc             ; # Drag state. Uncommitted location of the moving point.

    # # ## ### ##### ######## ############# #####################
}

# # ## ### ##### ######## ############# #####################
## Ready

package provide canvas::edit::circle 0.1
return

# # ## ### ##### ######## ############# #####################
## Scrap yard.
