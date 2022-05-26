package require Tk 8.5
package require Plotchart
package provide plotanim 0.2

#
# This package is based on Arjen Markus' wiki page
# http://wiki.tcl.tk/21580 (Creating Mathematical Animations)
# and integrated into Plotchart by Torsten Berg
#

#
# the following objects are supported:
#   point     = an invisible dot
#   dot       = a dot
#   circle    = a cirle with center point and radius
#   line      = a line with starting and ending point
#   rectangle = a rectangle with lower left and upper right corner
#

namespace eval ::Plotchart::anim {
	#
	# this array holds all information on the objects
	# on the canvas created with this package:
	variable item
	#
	# w = path to canvas
	#
	# item(w,type,<name>) = canvas item type of the item named <name>
	# item($w,id,<name>) = the canvas item id of the item named <name>
	# item($w,data,<name>) = configuration data of the canvas item named <name>
	# item($w,track,<point>) = coordinates and configuration of a line tracking
	#                          the movement of point <point>
	#
	# this array holds one element for each canvas,
	# and is used to stop and restart animations (via the 'pause' command):
	variable delayOver
	#
	# register the anim command for the plotchart package:
#	variable ::Plotchart::config
#	variable ::Plotchart::methodProc
#	foreach type $config(charttypes) {
#		set methodProc($type,anim) ::Plotchart::anim::animHandler
#	}
}


# pause --
#     Pause the program for a given amount of time
#
# Arguments:
#     w          path to the canvas
#     delay      Delay in ms
#
# Result:
#     None
#
# Side effects:
#     Program pauses, but any GUI is still active, screen updates occur
#
proc ::Plotchart::anim::pause {w delay} {
	variable delayOver
	after $delay [list set ::Plotchart::anim::delayOver($w) 1]
	vwait ::Plotchart::anim::delayOver($w)
}


# create --
#     Create an item on the canvas (type is fixed)
#
# Arguments:
#     w          path to the canvas
#     name       Name of the item
#     itemdata   Data for the item
#
# Result:
#     None
#
# Side effects:
#     An item with the given name now exists and is possibly visible
#
proc ::Plotchart::anim::create {w name itemdata} {
	variable item

	set item($w,type,$name) [lindex $itemdata 0]
	switch -- $item($w,type,$name) {
		"point"  { # Nothing to do }
		"dot"    { set item($w,id,$name) [$w create oval 0 0 0 0] }
		"circle" { set item($w,id,$name) [$w create oval 0 0 0 0] }
		"line"   { set item($w,id,$name) [$w create line 0 0 0 0] }
		"rectangle" {set item($w,id,$name) [$w create rectangle 0 0 0 0]}
	}

	if { $item($w,type,$name) != "point" } {
		$w itemconfig $item($w,id,$name) {*}[lindex $itemdata end]
	}
	#$w itemconfigure -tags $name
	::Plotchart::anim::update $w $name {*}$itemdata
}


# update --
#     Update the properties of an item
#
# Arguments:
#     w          path to the canvas
#     name       Name of the item
#     args       Data for the item
#
# Result:
#     None
#
# Side effects:
#     The item has updated properties
#
proc ::Plotchart::anim::update {w name args} {
	variable item

	set type $item($w,type,$name)

	if { $type != [lindex $args 0] } {
		return -code error "Item $name and given data are incompatible!"
	}

	set item($w,data,$name) [lrange $args 1 end]
	
	UpdateCoords $w $name [lrange $item($w,data,$name) 0 end-1]
}


# UpdateCoords --
#     Update the canvas coordinates of an item
#
# Arguments:
#     w          path to the canvas
#     name       Name of the item
#     coords     World coordinates for the item
#     base       the base of the given coords,
#                can be either 'pixel' or 'coord' (the default)
#
# Result:
#     None
#
# Side effects:
#     The item is updated on the screen
#
proc ::Plotchart::anim::UpdateCoords {w name coords {base coord}} {
	variable item
	variable ::Plotchart::scaling

	switch -- $item($w,type,$name) {
		"point" {
			# Not visible
		}
		"dot" {
			if {$base eq "coord"} {
				lassign $coords x y
				lassign [::Plotchart::coordsToPixel $w $x $y] px py
			} else {
				lassign $coords px py
			}
			set xd1 [expr {$px - 3}]
			set yd1 [expr {$py - 3}]
			set xd2 [expr {$px + 3}]
			set yd2 [expr {$py + 3}]
			$w coords $item($w,id,$name) $xd1 $yd1 $xd2 $yd2
		}
		"circle" {
			set r ""
			if {$base eq "coord"} {
				lassign $coords x y r
				lassign [::Plotchart::coordsToPixel $w $x $y] px py
			} else {
				lassign $coords px py
			}
			if { $r == "" } {set r [lindex $item($w,data,$name) 2]}
			set rad [expr {$scaling($w,xfactor)*$r}]
			set xd1 [expr {$px - $rad}]
			set yd1 [expr {$py - $rad}]
			set xd2 [expr {$px + $rad}]
			set yd2 [expr {$py + $rad}]
			$w coords $item($w,id,$name) $xd1 $yd1 $xd2 $yd2
		}
		"line" - "rectangle" {
			if {$base eq "coord"} {
				lassign $coords x1 y1 x2 y2
				lassign [::Plotchart::coordsToPixel $w $x1 $y1] px1 py1
				lassign [::Plotchart::coordsToPixel $w $x2 $y2] px2 py2
			} else {
				lassign $coords px1 py1 px2 py2
			}
			$w coords $item($w,id,$name) $px1 $py1 $px2 $py2
		}
	}
}


# point, dot, circle, line, rectangle --
#     Prepare the item data for an (invisible) point or some other canvas item
#
# Arguments:
#     args       Such things as x-coordinate/y-coordinate but also -fill colour
#
# Result:
#     Item data for [create] or [update]
#
# Note:
#     The extra arguments are only used in the [create] procedure
#
#     point, dot:
#     The first argment can be the name of a point or a pair of
#     coordinates. The rest is used as attributes
#
#     circle:
#     The first argment can be the name of a point or a pair of
#     coordinates. The second must be the radius, the rest is used as
#     attributes
#
#     line:
#     The first and second argments can be the name of a point or a pair
#     of coordinates. The rest is used as attributes.
#
#     rectanlge:
#     the first and second argments can be the name of a point or a pair
#     of coordinates. The rest is used as attributes.
#
proc ::Plotchart::anim::point {w first args} {
	variable item

	if { [llength $first] == 2 } {
		return [concat point $first [list $args]]
	} else {
		return [concat point [lrange $item($w,data,$first) 0 1] [list $args]]
	}
}

proc ::Plotchart::anim::circle {w first rad args} {
	variable item

	if { [llength $first] == 2 } {
		return [concat circle $first $rad [list $args]]
	} else {
		return [concat circle [lrange $item($w,data,$first) 0 1] $rad [list $args]]
	}
}

proc ::Plotchart::anim::dot {w first args} {
	variable item

	if { [llength $first] == 2 } {
		return [concat dot $first [list $args]]
	} else {
		return [concat dot [lrange $item($w,data,$first) 0 1] [list $args]]
	}
}

proc ::Plotchart::anim::line {w first second args} {
	variable item

	if { [llength $first] == 1 } {
		set first [lrange $item($w,data,$first) 0 1]
	}
	if { [llength $second] == 1 } {
		set second [lrange $item($w,data,$second) 0 1]
	}
	return [concat line $first $second [list $args]]
}

proc ::Plotchart::anim::rectangle {w first second args} {
	variable item
	if {[llength $first] == 1} {
		set first [lrange $item($w,data,$first) 0 1]
	}
	if {[llength $second] == 1} {
		set first [lrange $item($w,data,$second) 0 1]
	}
	return [concat rectangle $first $second [list $args]]
}


# coords --
#     Return the current coords of an item
#
# Arguments:
#     w      path to the canvas
#     name   name of the item
#
# Return:
#     List of coordinates/radius in the same order a during creation
#
# Side effects:
#     None
#
proc ::Plotchart::anim::coords {w name} {
	variable item
	switch -- $item($w,type,$name) {
			"point" - "dot" - "circle" {set last 1}
			"line" - "rectangle" {set last 3}
		}
		return [lrange $item($w,data,$name) 0 $last]
}


# add --
#     Translate a point over a given vector and return the coordinates
#
# Arguments:
#     w          path to the canvas
#     point      Point (name or coordinate pair)
#     vector     Vector (name or coordinate pair)
#
# Result:
#     New coordinate pair
#
proc ::Plotchart::anim::add {w point vector} {
	variable item

	if { [llength $point] == 1 } {
		set point [lrange $item($w,data,$point) 0 1]
	}
	if { [llength $vector] == 1 } {
		set vector [lrange $item($w,data,$vector) 0 1]
	}
	foreach {xb yb} $point {xe ye} $vector {
		set xn [expr {$xb+$xe}]
		set yn [expr {$yb+$ye}]
		break
	}
	return [list $xn $yn]
}


# track --
#     Track a point
#
# Arguments:
#     w          path to the canvas
#     cmd	     Command in question (start, next or stop)
#     point      Name (!) of the point to track
#     args       Extra attributes (for colour and such)
#
# Result:
#     None
#
# Side effect:
#     A line connecting the dots is drawn
#
proc ::Plotchart::anim::track {w cmd point args} {
	variable item

	set xp [lindex $item($w,data,$point) 0]
	set yp [lindex $item($w,data,$point) 1]
	lassign [::Plotchart::coordsToPixel $w $xp $yp] xp yp

	switch -- $cmd {
		"start" {
			set item($w,track,$point) [$w create line $xp $yp $xp $yp {*}$args]
		}
		"next" {
			set coords [$w coords $item($w,track,$point)]
			lappend coords $xp $yp
			$w coords $item($w,track,$point) $coords
		}
		"stop" {
			unset item($w,track,$point)
		}
	}
}


# rotate --
#     Rotate one or more item over a given angle and update the coordinates
#
# Arguments:
#     w          path to canvas
#     items      List of items
#     centre     Centre of rotation (name or coordinate pair)
#     angle      Angle (in radians)
#
# Result:
#     New coordinate pair
#
proc ::Plotchart::anim::rotate {w items centre angle} {
	variable item

	if { [llength $centre] == 1 } {set centre [lrange $item($w,data,$centre) 0 1]}
	lassign $centre xr yr
	set cosa [expr {cos($angle)}]
	set sina [expr {sin($angle)}]

	foreach name $items {
		switch -- $item($w,type,$name) {
			"point" - "dot" - "circle" {set last 1}
			"line" - "rectangle" {set last 3}
		}
		set coords [lrange $item($w,data,$name) 0 $last]
		set newcoords {}
		foreach {xc yc} $coords {
			set xn [expr {$xr + $cosa * ($xc-$xr) - $sina*($yc-$yr)}]
			set yn [expr {$yr + $sina * ($xc-$xr) + $cosa*($yc-$yr)}]
			lappend newcoords $xn $yn
		}
		set item($w,data,$name) [lreplace $item($w,data,$name) 0 $last {*}$newcoords]
		UpdateCoords $w $name $newcoords
	}
}


# translate --
#     Translate one or more item over a given vector and update the coordinates
#
# Arguments:
#     w          path to canvas
#     items      List of items
#     vector     Vector (name or coordinate pair)
#
# Result:
#     New coordinate pair
#
proc ::Plotchart::anim::translate {w items vector} {
	variable item

	if { [llength $vector] == 1 } {
		set vector [lrange $item($w,data,$vector) 0 1]
	}
	lassign $vector xv yv

	foreach name $items {
		switch -- $item($w,type,$name) {
			"point" - "dot" - "circle" {set last 1}
			"line" - "rectangle" {set last 3}
		}

		set coords [lrange $item($w,data,$name) 0 $last]
		set newcoords {}

		foreach {xc yc} $coords {
			set xn [expr {$xc + $xv}]
			set yn [expr {$yc + $yv}]
			lappend newcoords $xn $yn
		}

		set item($w,data,$name) [lreplace $item($w,data,$name) 0 $last {*}$newcoords]
		UpdateCoords $w $name $newcoords
	}
}


# morph --
#     change the look of one or more items
#
# Arguments:
#     w          path to canvas
#     items      List of items
#     shift      a list of x y pairs giving the relative shift of the item coordinates
#     args       additional options:
#                   -scaling pixel|coord     whether the shift is given in pixel space or coordinate space
#
# Result:
#     New coordinate pair(s)
#
proc ::Plotchart::anim::morph {w items shift args} {
	variable item
	variable ::Plotchart::scaling
	
	array set options {-scaling coord}
	array set options $args
	foreach name $items {
		# calculate the shift in the coordinates
		# depending on the base scale:
		if {$options(-scaling) eq "pixel"} {
			set dshift [list]
			foreach {x y} $shift {
				set dx [expr {$scaling($w,xfactor)/double($x)}]
				set dy [expr {$scaling($w,yfactor)/double($y)}]
				lappend dshift $dx $dy
			}
			set shift $dshift
		} elseif {$options(-scaling) eq "coord"} {
			# nothing needed here ...
		} else {
			return -code error "unknown -scaling: $options(-scaling)"
		}
		
		# how many coords to read:
		switch -- $item($w,type,$name) {
			"point" - "dot" - "circle" {set last 1}
			"line" - "rectangle" {set last 3}
		}
		set coords [lrange $item($w,data,$name) 0 $last]
		set newcoords {}
		
		switch $item($w,type,$name) {
			dot - point {
				return -code error "a $item($w,type,$name) cannot be morphed"
			}
			circle {
				lassign $coords x y
				lassign $shift dx dy
				set x [expr {$x + $dx}]
				set y [expr {$y + $dy}]
				set newcoords $x $y
			}
			line - rectangle {
				lassign $coords x0 y0 x1 y1
				lassign $shift dx0 dy0 dx1 dy1
				set x0 [expr {$x0 + $dx0}]
				set x1 [expr {$x1 + $dx1}]
				set y0 [expr {$y0 + $dy0}]
				set y1 [expr {$y1 + $dy1}]
				set newcoords [list $x0 $y0 $x1 $y1]
			}
		}
		set item($w,data,$name) [lreplace $item($w,data,$name) 0 $last {*}$newcoords]
		UpdateCoords $w $name $newcoords $options(-scaling)
	}
}

# id --
#     Return the canvas id of an item in order to manipulate it with ordinary canvas commands
#
# Arguments:
#     w          path to the canvas widget
#     name       Name of the item
#
# Result:
#     The canvas id of the item
#
proc ::Plotchart::anim::id {w name} {
	variable item
	return $item($w,id,$name)
}

# animate --
#     Animate some canvas items following a user-defined specification
#
# Arguments:
#     w       path to the canvas
#     args    Arguments defining the animation
#
#     -duration    the duration of the complete animation in ms
#     -body        a script defining what to animate and how to do so
#
# The body consists of normal Tcl/Plotchart/Plotchart::anim commands
# plus some commands only available within this procedure -body. These can be
#
#     morphto item first second
#        item             name of the item to be morphed
#        first, second    coordinates/radius, or a point name, to morph to
#                         (in same order as during item creation)
#
#     translateto item first, second
#        item             name of the item to be translated
#        first, second    coordinates/radius, or a point name, to translate to
#                         (in same order as during item creation)
#
# Results:
#     None
#
# Side effects:
#     some canvas items are animated
#
proc ::Plotchart::anim::animate {w args} {
	variable item
	array set options {-body {} -duration 1000 -pause 20}
	array set options $args
	
	set stepCount [expr {$options(-duration)/$options(-pause)}]
	# translate points into coordinates
	# and reorganize body:
	set body $options(-body)
	set newBody [list]
	while {[llength $body]>0} {
		set cmd [lindex $body 0]
		switch $cmd {
			morphto {
				set body [lassign $body cmd name first second]
				set shiftList [list]
				switch $item($w,type,$name) {
					circle {}
					line - rectangle {
						if {[llength $first] == 2} {set newCoords $first} else {set newCoords [coords $first]}
						if {[llength $second] == 2} {lappend newCoords {*}$second} else {lappend newCoords {*}[coords $second]}
						foreach start [lrange $item($w,data,$name) 0 3] end $newCoords {
							lappend shiftList [expr {double($end-$start)/$stepCount}]
						}
					}
					default {return -code error "no such item type: $item($w,type,$name)"}
				}
				lappend newBody [list morph $w $name $shiftList -scaling coord]
			}
			default {
				#while [info complete ]
				set body [lrange $body 1 end]
			}
		}
	}
	
#	puts "newBody=$newBody ($stepCount steps)"
	# do the animation:
	for {set step 1} {$step <= $stepCount} {incr step} {
		foreach element $newBody {
			{*}$element
		}
		pause $w $options(-pause)
	}
	
}