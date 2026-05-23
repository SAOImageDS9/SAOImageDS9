## -*- tcl -*-
# # ## ### ##### ######## ############# ######################
## (c) 2022 Andreas Kupries
##
## Originally developed within the AKIS project (c) Andreas Kupries

# @@ Meta Begin
# Package map::display 0.1
# Meta author      {Andreas Kupries}
# Meta location    https://core.tcl.tk/tklib
# Meta platform    tcl
# Meta summary	   Map Display Widget
# Meta description Map Display Widget with basic behaviour (Drag, Center, Zoom +/-)
# Meta description Configured with tile provider.
# Meta description Extensible with attachable engines providing additional behaviours.

# Meta subject	   {map display} {display, map}
# Meta require     {Tcl 8.6-}
# Meta require     {Tk  8.6-}
# Meta require     canvas::sqmap
# Meta require     canvas::zoom
# Meta require     crosshair
# Meta require     debug
# Meta require     debug::caller
# Meta require     snit
# Meta require     widget::scrolledwindow
# @@ Meta End

## Map Display. Multiple Modes ...
#
## Manages a center location
##   - Set initially
##   - Set by mouse click (Button 3) - Implied panning
#
## When the map is not locked the user can pan freely.
#
## A locked map on the other hand cannot deviate from the specified center location. The desired
## center can only be set from the outside (initial, and method).  The user cannot change it.
#
## Bindings
##	<1>		Drag (Press, Motion, release)	- Panning
##	<3>		Center to crosshair, report	- Panning
##	<4/5>		Zoom +/-			[Mousewheel]

package provide map::display 0.1

# # ## ### ##### ######## ############# ######################
## API
#
##  <class> OBJ <options...>
#
##  <obj> levels             -> int (#map levels)
##  <obj> zoom-to ZOOM       -> VOID
##  <obj> center  GEO ?ZOOM? -> VOID
##  <obj> canvas             -> tk window handle of internal canvas
##  <obj> at                 -> geo  (crosshair location)
##  <obj> view               -> list (zoom pointbox geobox)
#
##  -provider		Tile provider engine. REQUIRED
##  -on-view-change	Callback reporting changes to the shown geo area
##  -initial-geo	Initial geo location to show in map center
##  -initial-zoom	Initial magnification
##  -locked		Flag to lock map against changing the center by the user
##  -center-mark	Handle of photo image to show at the map center
#
# # ## ### ##### ######## ############# ######################
## Requirements

package require Tcl 8.6-
package require Tk 8.6-
#                                      ;# Tcllib
package require debug		       ;# - Narrative Tracing
package require debug::caller          ;#
package require map::slippy 0.8        ;# - Slippy Utilities (Geo conversion, etc)
package require snit                   ;# - OO system
#                                      ;# Tklib
package require canvas::sqmap          ;# - Base map engine, tile display
package require canvas::zoom           ;# - Zoom controller
package require crosshair              ;# - Crosshair controller
package require tooltip                ;# Tklib
package require widget::scrolledwindow ;#   ditto

# # ## ### ##### ######## ############# ######################
## Ensemble setup.

namespace eval map { namespace export display ; namespace ensemble create }

debug level  tklib/map/display
debug prefix tklib/map/display {<[pid]> [debug caller] | }

# Report tile ops in spearate channel to prevent spamming the main channel
debug level  tklib/map/display/tiles
debug prefix tklib/map/display/tiles {<[pid]> [debug caller] | }

# Report crosshair in spearate channel to prevent spamming the main channel
debug level  tklib/map/display/track
debug prefix tklib/map/display/track {<[pid]> [debug caller] | }

# # ## ### ##### ######## ############# ######################

snit::widget ::map::display {

    # . . .. ... ..... ........ ............. .....................
    ## User configuration

    option -provider       -default {}    -configuremethod Provider
    option -on-view-change -default {}
    option -initial-geo    -default {}    -readonly 1
    option -initial-zoom   -default 12    -readonly 1
    option -locked         -default 0     -configuremethod Lock
    option -center-mark    -default {}    -configuremethod CenterMark

    # . . .. ... ..... ........ ............. .....................
    ## Widget state

    variable myprovider		{} ;# Backing store of -provider, for delegation
    variable myzoom		{} ;# Current zoom level
    variable mypzoom		{} ;# Previous zoom level, to infer direction of changes
    variable mycenter		{} ;# Current map center (geo location)
    variable mycross		{} ;# Current crosshair  (geo location)
    variable myview		{} ;# Canvas viewport    (point box)
    variable mycrossdisplay	{} ;# Text for crosshair location display
    variable mydragstart	{} ;# Viewport at start of drag operation
    variable mydragskip		 1 ;# Prevent DragDone from execution where necessary
    variable myectimer		{} ;# EnsureCenter timer

    typevariable ourcenterdelay 200 ;# Delay from viewport change to EnsureCenter for a locked map
    typevariable ourinitdelay   100 ;# Delay from construction to setting the initial center

    # . . .. ... ..... ........ ............. .....................
    ## Lifecycle

    constructor {args} {
	debug.tklib/map/display {}

	$self configurelist $args

	if {![llength $myprovider]} {
	    return -code error "-provider is not specified, is required"
	}

	set myzoom         $options(-initial-zoom)
	set mypzoom        $myzoom
	set mycrossdisplay location

	$self Elements
	$self Layout
	$self StaticBehaviour
	$self Behaviour ;# Main user interactions - Lock state dependent
	$self VisualGridHack

	# Force the initial region as the zoom control will not call us initially, only on future
	# changes.
	$self SetRegionAndCenter

	# Move map to the requested center, if specified
	if {$options(-initial-geo) eq {}} return
	after $ourinitdelay [mymethod Goto $options(-initial-geo)]
	return
    }

    destructor {
	debug.tklib/map/display {}
	return
    }

    # . . .. ... ..... ........ ............. .....................
    # API

    delegate method levels to myprovider

    method zoom-to {new} {
	debug.tklib/map/display {}

	if {$new <  0}       return
	if {$new >= $levels} return

	set myzoom $new
	$self ZoomSet _
	return
    }

    method center {geo {newzoom {}}} {
	debug.tklib/map/display {}
	# This is the only way to change a locked map, outside of zooming.

	$self Goto $geo $newzoom
	return
    }

    method canvas {} {
	debug.tklib/map/display {}
	return $win.map
    }

    method at {} {
	debug.tklib/map/display {}
	lassign $mycross lat lon
	return [list [6digits $lat] [6digits $lon]]
    }

    proc 6digits {x} {
	return [expr {[string is int -strict $x]
		      ? $x
		      : [string trimright [format %.6f $x] 0]}]
    }

    method view {} {
	debug.tklib/map/display {}

	set geoport [::map slippy point box 2geo $myzoom $myview]

	#puts "GP: $myzoom | $geoport"
	return [list $myzoom $myview $geoport]
    }

    # . . .. ... ..... ........ ............. .....................
    ## Internals
    ## - Setup
    ## - Configuration hooks
    ## - Component callbacks
    ## - Display Management

    # . . .. ... ..... ........ ............. .....................
    ## Setup

    method VisualGridHack {} {
	debug.tklib/map/display {}

	# Hack to get display to show nicely while the initial maps are loading
	set gridInfo [grid info $win.sw]
	grid forget $win.sw
	update
	grid $win.sw {*}$gridInfo
	return
    }

    method Elements {} {
	debug.tklib/map/display {}

	set th [$myprovider tileheight]
	set tw [$myprovider tilewidth]
	set zm [$myprovider levels] ; incr zm -1

	# Display elements

	widget::scrolledwindow $win.sw

	canvas::sqmap          $win.map \
	    -bg               yellow \
	    -closeenough      3 \
	    -grid-cell-width  $tw \
	    -grid-cell-height $th

	# Create after map engine, to be placed on top in the drawing order
	canvas::zoom           $win.z  -levels $zm -orient vertical \
	    -variable [myvar    myzoom] \
	    -command  [mymethod ZoomSet]

	label                  $win.crosshair \
	    -bd 2 -relief sunken \
	    -bg white -width 20 \
	    -anchor w

	return
    }

    method Layout {} {
	debug.tklib/map/display {}

	$win.sw setwidget $win.map
	place $win.z  -in $win.map -anchor nw -x .2i -y .2i

	grid $win.crosshair -row 0 -column 0 -sticky  wen
	grid $win.sw        -row 1 -column 0 -sticky swen -columnspan 2

	grid rowconfigure $win 0 -weight 0
	grid rowconfigure $win 1 -weight 1

	grid columnconfigure $win 0 -weight 0
	grid columnconfigure $win 1 -weight 1

	$self HandleCenterMark
	return
    }

    method StaticBehaviour {} {
	debug.tklib/map/display {}

	$win.map configure \
	    -cursor            tcross \
	    -viewport-command  [mymethod ViewportHasChanged] \
	    -grid-cell-command [mymethod TileRequest]

	crosshair::crosshair $win.map -width 0 -fill \#999999 -dash {.}
	crosshair::track on  $win.map [mymethod CrosshairLocation]

	$win.crosshair configure \
	    -textvariable [myvar mycrossdisplay] \

	# Zoom change via the mouse wheel
	bind $win.map <ButtonPress-4> [mymethod ZoomBy  1]
	bind $win.map <ButtonPress-5> [mymethod ZoomBy -1]

	return
    }

    method Behaviour {} {
	debug.tklib/map/display {}

	if {$options(-locked)} {
	    # Disable most interaction, notably panning, direct, or implied.  See the other branch
	    # for more detailed explanations of what each binding would have done

	    bind $win.map <ButtonPress-3>   {}
	    bind $win.map <B3-Motion>       {}
	    bind $win.map <ButtonRelease-3> {}
	    bind $win.map <Shift-Button-3>  {}

	} else {
	    # Enable user interaction

	    # Panning via right button
	    bind $win.map <ButtonPress-3>   [mymethod DragStart %W %x %y]
	    bind $win.map <B3-Motion>       {%W scan dragto %x %y}
	    bind $win.map <ButtonRelease-3> [mymethod DragDone]

	    # Single-clicking right button centers map to mouse location.
	    bind $win.map <Shift-Button-3> [mymethod DragToPoint]
	}
	return
    }

    # . . .. ... ..... ........ ............. .....................
    ## Configuration hooks - Reporting

    method Lock {o v} {
	debug.tklib/map/display {}

	if {$v eq $options($o)} return
	set options($o) $v

	# During object initialization, state is just recorded
	if {![winfo exists $win.map]} return

	# Locking state changed, always set behaviours
	$self Behaviour
	if {!$options($o)} return

	# When going locked ensure display of chosen center, if known

	if {$mycenter eq {}} return
	$self EnsureCenter
	return
    }

    method CenterMark {o v} {
	debug.tklib/map/display {}

	if {$v eq $options($o)} return
	set options($o) $v

	# During object initialization, state is just recorded
	if {![winfo exists $win.map]} return

	$self HandleCenterMark
	return
    }

    method Provider {o v} {
	debug.tklib/map/display {}

	if {$v eq $myprovider} return

	if {![llength $v]} {
	    return -code error "Cannot unset -provider, is required"
	}

	set myprovider $v
	return
    }

    # . . .. ... ..... ........ ............. .....................
    ## Component callbacks
    #
    ## - Viewport Tracking
    ## - Crosshair Tracking
    ## - Tile Retrieval
    ## - Zoom Changes
    ## - Drag Operation Reports

    # . . .. ... ..... ........ ............. .....................
    ## Viewport Tracking (map -viewport-command)

    method ViewportHasChanged {xl yt xr yb} {
	debug.tklib/map/display {}
	# args = viewport in pixels coordinates as per canvas::sqmap, SetPixelView.
	# (point box)

	set newport [list $xl $yt $xr $yb]

	# Ignore calls without change since the last call

	# Required because the EnsureCenter/Goto/Jigger combination causes pseudo events.
	# See also the use in Goto/Jigger.

	# NOTE: Iffy comparison, we have floating point here
	# NOTE: Looks to work due to truly identical FP numbers coming through.
	if {$newport eq $myview} return

	# Compare old and new viewport a bit deeper. We are in particular interested in size
	# changes, vs panning, i.e. movement.
	set resized 0
	if {[llength $myview]} {
	    # TODO :: map slippy point box dimensions
	    lassign $myview xlo yto xro ybo
	    set wo [expr {$xro - $xlo}]
	    set ho [expr {$ybo - $yto}]
	    set wn [expr {$xr - $xl}]
	    set hn [expr {$yb - $yt}]

	    set resized [expr {($hn != $ho) || ($wn != $wo)}]
	}

	#puts [list $myview $newport]

	set myview $newport

	# When locked keep the desired center. Note that viewport changes in locked mode can only
	# come from changes to the canvas' size. Panning is disabled.
	##
	# However, keep the center also when the visible area is resized (contrary to panned)

	if {$resized || $options(-locked)} {
	    debug.tklib/map/display/tiles { resized or locked }

	    if {$mycenter eq {}} return
	    if {$myectimer ne {}} { after cancel $myectimer }
	    set timeout [after $ourcenterdelay [mymethod EnsureCenter]]
	}
	return
    }

    # . . .. ... ..... ........ ............. .....................
    ## Crosshair Tracking

    method CrosshairLocation {_ x y args} {
	debug.tklib/map/display/track {}
	# args = viewport in pixels, as per canvas::sqmap, SetPixelView.

	# Convert pixels to geographic location.
	set mycross [::map slippy point 2geo $myzoom [list $x $y]]

	# Update entry field.
	set mycrossdisplay [$self PrettyLatLon $mycross]
	return
    }

    method PrettyLatLon {geo} {
	debug.tklib/map/display/track {}
	# Consider DMS formatting (degree, minute, seconds)
	lassign $geo lat lon
	return [format "%.6f %.6f" $lat $lon]
    }

    # . . .. ... ..... ........ ............. .....................
    ## Tile Retrieval (map -grid-cell-command)

    method TileRequest {_ at donecmd} {
	debug.tklib/map/display/tiles {}

	# Add zoom level to map request
	set tile [linsert $at 0 $myzoom]

	$myprovider get $tile [mymethod TileReport $donecmd]
	return
    }

    method TileReport {donecmd action tile args} {
	debug.tklib/map/display/tiles {}

	# Strip zoom information from returned tile before handing to the map
	set at [lrange $tile 1 end]
	uplevel #0 [list {*}$donecmd $action $at {*}$args]
	return
    }

    # . . .. ... ..... ........ ............. .....................
    ## Zoom Changes (zoom controller -command, Mouse Wheel)

    method ZoomBy {increment} {
	debug.tklib/map/display {}

	set new [expr {$myzoom + $increment}]
	if {$new <  0}                    return
	if {$new >= [$myprovider levels]} return

	set myzoom $new
	$self ZoomSet _ _
	return
    }

    method ZoomSet {_ _} {
	debug.tklib/map/display {}
	# The variable 'myzoom' is already set to the new level, as the zoom controller's -variable

	# Infer direction by comparison against last value
	if {$mypzoom < $myzoom} {
	    # Zooming in. Use the crosshair position as the center of zooming.  I.e. while zooming
	    # we can point with the mouse to the region of interest. I.e. the zoom is combined with
	    # an implied drag-to.

	    set mycenter $mycross
	} ;# zooming out - stay on the current center

	set mypzoom $myzoom
	$self SetRegionAndCenter
	return
    }

    # . . .. ... ..... ........ ............. .....................
    ## Drag Operation Reports

    method DragToPoint {} {
	debug.tklib/map/display {}
	set mydragskip 1

	# Center the mouse location
	$self Goto $mycross
	return
    }

    method DragStart {w x y} {
	debug.tklib/map/display {}
	set mydragstart $myview
	$w scan mark $x $y
	return
    }

    method DragDone {} {
	debug.tklib/map/display {}

	if {$mydragskip} { set mydragskip 0 ; return }
	if {$myview eq $mydragstart} return

	lassign [$self view] _ _ geoport

	# TODO :: map slippy - geo/point box center direct!
	set mycenter [::map slippy geo center-list \
			  [::map slippy geo box opposites $geoport]]

	$self ReportViewChange
	return
    }

    # . . .. ... ..... ........ ............. .....................
    ## Display Management (invoked by API and callbacks)

    method HandleCenterMark {} {
	debug.tklib/map/display {}

	if {[winfo exists $win.center]} {
	    destroy $win.center
	}

	if {$options(-center-mark) ne {}} {
	    label $win.center -image $options(-center-mark) ;# -width 2m -height 2m
	    place $win.center -in $win.map -anchor c  -relx 0.5 -rely 0.5
	    return
	}

	return
    }

    method ReportViewChange {} {
	debug.tklib/map/display {}
	#puts VP:$myview

	if {![llength $options(-on-view-change)]} return

	uplevel #0 [list {*}$options(-on-view-change) {*}[$self view]]
	return
    }

    method EnsureCenter {} {
	debug.tklib/map/display {}

	set myectimer {}
	$self Goto $mycenter
	return
    }

    method Goto {geo {newzoom {}}} {
	debug.tklib/map/display {}

	if {($newzoom ne {}) &&
	    ($newzoom >= 0) &&
	    ($newzoom < [$myprovider levels])} {
	    # Inlined zoom-to/ZOOM, with
	    set myzoom $newzoom
	    $self SetRegion
	}

	# The geo location is first converted to pixels (x, y), and then to a fraction of the
	# scrollregion (ofx, ofy). This is adjusted so that the fraction specifies the center of the
	# viewed region, and not the upper left corner. For this translation we need the viewport
	# data of ViewportHasChanged.

	# Remember new desired center location
	set mycenter $geo

	set point [::map slippy geo 2point $myzoom $geo]
	after $ourcenterdelay [mymethod Jigger $myzoom $point]
	return
    }

    method Jigger {z point} {
	debug.tklib/map/display {}

	set len [::map slippy length $z]
	lassign $myview l t r b

	# +-----------+ B > T, R > R
	# |     T     |
	# |L ....... R|
	# |     B     V
	# +---------->+

	lassign $point x y
	set ofy [expr {($y - ($b - $t)/2.0)/$len}]
	set ofx [expr {($x - ($r - $l)/2.0)/$len}]

	#puts [list moveto $ofx $ofy]

	$win.map xview moveto $ofx
	$win.map yview moveto $ofy

	$self ReportViewChange
	return
    }

    method SetRegionAndCenter {} {
	debug.tklib/map/display {}

	$self SetRegion
	if {$mycenter eq {}} return
	$self EnsureCenter
	return
    }

    method SetRegion {} {
	debug.tklib/map/display {}

	set rlength [::map slippy length $myzoom]
	set region  [list 0 0 $rlength $rlength]

	$win.map configure -scrollregion $region
	return
    }

    # ..................................................................
}

# # ## ### ##### ######## ############# ######################
return
