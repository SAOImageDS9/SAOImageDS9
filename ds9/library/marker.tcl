#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc MarkerDef {} {
    global marker
    global imarker
    global pmarker

    set imarker(id) -1
    set imarker(x) -1
    set imarker(y) -1
    set imarker(motion) none
    set imarker(handle) -1
    set imarker(prefix,dialog) {mkr}
    set imarker(prefix,plot3d) {plot3d}
    set imarker(prefix,plot2d) {plot2d}
    set imarker(prefix,stats) {stats}
    set imarker(prefix,radial) {radial}
    set imarker(prefix,panda) {panda}
    set imarker(prefix,histogram) {hist}

    set marker(show) 1
    set marker(show,text) 1
    set marker(centroid,auto) 0
    set marker(centroid,iteration) 30
    set marker(centroid,radius) 10
    set marker(shape) circle
    set marker(color) green
    set marker(dashlist) {8 3}
    set marker(width) 1
    set marker(dash) 0
    set marker(fixed) 0
    set marker(edit) 1
    set marker(move) 1
    set marker(rotate) 1
    set marker(delete) 1
    set marker(include) 1
    set marker(source) 1
    set marker(font) helvetica
    set marker(font,size) 10
    set marker(font,weight) normal
    set marker(font,slant) roman
    set marker(preserve) 0

    set marker(plot2d) 0
    set marker(plot3d) 0
    set marker(stats) 0

    set marker(copy) {}
    set marker(copy,system) {}
    set marker(maxdialog) 48
    set marker(load) current

    set marker(format) ds9
    # these are only used for save/load/list and are set from current wcs values
    set marker(system) physical
    set marker(sky) fk5
    set marker(skyformat) degrees
    set marker(strip) 0

    array set pmarker [array get marker]
    unset pmarker(copy)
    unset pmarker(copy,system)
    unset pmarker(maxdialog)
    unset pmarker(load)
    unset pmarker(system)
    unset pmarker(sky)
    unset pmarker(skyformat)
    unset pmarker(strip)

    set pmarker(epsilon) 3
    set pmarker(dformat) degrees
    set pmarker(circle,radius) 20
    set pmarker(annulus,inner) 15
    set pmarker(annulus,outer) 30
    set pmarker(annulus,annuli) 1
    set pmarker(panda,inner) 15
    set pmarker(panda,outer) 30
    set pmarker(panda,annuli) 1
    set pmarker(panda,ang1) 0
    set pmarker(panda,ang2) 360
    set pmarker(panda,angnum) 4
    set pmarker(ellipse,radius1) 40
    set pmarker(ellipse,radius2) 20
    set pmarker(ellipseannulus,radius1) 40
    set pmarker(ellipseannulus,radius2) 20
    set pmarker(ellipseannulus,radius3) 60
    set pmarker(ellipseannulus,annuli) 1
    set pmarker(epanda,radius1) 40
    set pmarker(epanda,radius2) 20
    set pmarker(epanda,radius3) 60
    set pmarker(epanda,annuli) 1
    set pmarker(epanda,ang1) 0
    set pmarker(epanda,ang2) 360
    set pmarker(epanda,angnum) 4
    set pmarker(box,radius1) 80
    set pmarker(box,radius2) 40
    set pmarker(boxannulus,radius1) 80
    set pmarker(boxannulus,radius2) 40
    set pmarker(boxannulus,radius3) 120
    set pmarker(boxannulus,annuli) 1
    set pmarker(bpanda,radius1) 80
    set pmarker(bpanda,radius2) 40
    set pmarker(bpanda,radius3) 120
    set pmarker(bpanda,annuli) 1
    set pmarker(bpanda,ang1) 0
    set pmarker(bpanda,ang2) 360
    set pmarker(bpanda,angnum) 4
    set pmarker(compass,radius) 40
    set pmarker(polygon,width) 20
    set pmarker(polygon,height) 20
    set pmarker(projection,thick) 0
    set pmarker(point,size) 11
    set pmarker(segment,length) 20
}

# procs shared between region and catalog mode

proc MarkerControl {which x y} {
    global imarker
    global current
    
    # if nothing is loaded, abort
    if {![$which has fits]} {
	return
    }

    # we need this cause MarkerMotion maybe called, 
    # and we don't want it
    set imarker(motion) none
    set imarker(handle) -1

    set id [$which get marker $current(mode) id $x $y]
    if {$id} {
	# are we on a selected annulus?
	if {[$which get marker $current(mode) select $x $y] == $id} {
	    switch -- [$which get marker $current(mode) $id type] {
		annulus {
		    set imarker(handle) \
			[$which marker $current(mode) $id create annulus radius $x $y]
		    $which marker $current(mode) $id edit begin $imarker(handle)
		    set imarker(motion) edit
		}
		panda {
		    set imarker(handle) \
			[$which marker $current(mode) $id create panda radius $x $y]
		    $which marker $current(mode) $id edit begin $imarker(handle)
		    set imarker(motion) edit
		}
		ellipseannulus {
		    set imarker(handle) \
			[$which marker $current(mode) $id create ellipseannulus radius $x $y]
		    $which marker $current(mode) $id edit begin $imarker(handle)
		    set imarker(motion) edit
		}
		epanda {
		    set imarker(handle) \
			[$which marker $current(mode) $id create epanda radius $x $y]
		    $which marker $current(mode) $id edit begin $imarker(handle)
		    set imarker(motion) edit
		}
		boxannulus {
		    set imarker(handle) \
			[$which marker $current(mode) $id create boxannulus radius $x $y]
		    $which marker $current(mode) $id edit begin $imarker(handle)
		    set imarker(motion) edit
		}
		bpanda {
		    set imarker(handle) \
			[$which marker $current(mode) $id create bpanda radius $x $y]
		    $which marker $current(mode) $id edit begin $imarker(handle)
		    set imarker(motion) edit
		}
	    }
	}
    }
}

proc MarkerControlShift {which x y} {
    global imarker
    global current
    
    # if nothing is loaded, abort
    if {![$which has fits]} {
	return
    }

    # we need this cause MarkerMotion maybe called, 
    # and we don't want it
    set imarker(motion) none
    set imarker(handle) -1

    set id [$which get marker $current(mode) id $x $y]
    if {$id} {
	# are we on a selected annulus?
	if {[$which get marker $current(mode) select $x $y] == $id} {
	    switch -- [$which get marker $current(mode) $id type] {
		panda {
		    set imarker(handle) \
			[$which marker $current(mode) $id create panda angle $x $y]
		    $which marker $current(mode) $id edit begin $imarker(handle)
		    set imarker(motion) edit
		}
		epanda {
		    set imarker(handle) \
			[$which marker $current(mode) $id create epanda angle $x $y]
		    $which marker $current(mode) $id edit begin $imarker(handle)
		    set imarker(motion) edit
		}
		bpanda {
		    set imarker(handle) \
			[$which marker $current(mode) $id create bpanda angle $x $y]
		    $which marker $current(mode) $id edit begin $imarker(handle)
		    set imarker(motion) edit
		}
	    }
	}
    }
}

proc MarkerCursor {which x y handleCursor overCursor} {
    global current

    # if nothing is loaded, abort
    if {![$which has fits]} {
	return
    }

    # are we over any selected marker handles?
    # remember, handles are outside of a marker
    set h [$which get marker $current(mode) handle $x $y]
    set id [lindex $h 0]
    set handle [lindex $h 1]
    if {$handle} {
	if {$handle < 5} {
	    # edit/rotate handle
	    SetCursor $handleCursor
	} else { 
	    # polygon/segment/annulus vertex
	    SetCursor dotbox
	}
	return
    }

    # else, see if we are on a segement of a polygon/segment
    set h [$which get marker $current(mode) polygon segment $x $y]
    if {[lindex $h 0]} {
	SetCursor draped_box
	return
    }
    set h [$which get marker $current(mode) segment segment $x $y]
    if {[lindex $h 0]} {
	SetCursor draped_box
	return
    }

    # are we over a marker?
    set id [$which get marker $current(mode) select $x $y]
    if {$id} {
	# are we on a selected annulus and control key down?
	switch -- [$which get marker $current(mode) $id type] {
	    annulus -
	    panda -
	    ellipseannulus -
	    epanda -
	    boxannulus -
	    bpanda {SetCursor $overCursor}
	    default {SetCursor fleur}
	}
	return
    }

    # else, set no cursor
    SetCursor {}
}

proc MarkerArrowKey {which x y} {
    global current

    $which warp $x $y
    $which marker $current(mode) move $x $y
}

# Marker only

proc MarkerButton {which x y} {
    global marker
    global imarker
    global itemplate
    global ds9

    # if nothing is loaded, abort
    if {![$which has fits]} {
	return
    }

    # see if we are on a handle
    set h [$which get marker handle $x $y]
    set id [lindex $h 0]
    set imarker(handle) [lindex $h 1]

    if {$imarker(handle)} {
	$which marker $id edit begin $imarker(handle)
	set imarker(motion) beginEdit
	return
    }

    # else, see if we are on a segment of a polygon
    set h [$which get marker polygon segment $x $y]
    set id [lindex $h 0]
    set segment [lindex $h 1]
    if {$segment} {
	$which marker $id create polygon vertex $segment $x $y
	$which marker $id edit begin $imarker(handle)
	set imarker(handle) [expr 4+$segment+1]
	set imarker(motion) beginEdit
	return
    }

    # else, see if we are on a segment of a segment
    set h [$which get marker segment segment $x $y]
    set id [lindex $h 0]
    set segment [lindex $h 1]
    if {$segment} {
	$which marker $id create segment vertex $segment $x $y
	$which marker $id edit begin $imarker(handle)
	set imarker(handle) [expr 4+$segment+1]
	set imarker(motion) beginEdit
	return
    }

    # else, see if we are on a marker
    if {[$which get marker id $x $y]} {
	$which marker select only $x $y
	$which marker move begin $x $y
	set imarker(motion) beginMove
	UpdateRegionMenu
	return
    }

    # see if any markers are selected
    if {[$which get marker select number]>0} {
	$which marker unselect all
	set imarker(motion) none
	UpdateRegionMenu
	return
    }

    # else, create a marker
    set imarker(handle) 0
    set imarker(motion) none

    switch -- $marker(shape) {
	circle -
	annulus -
	panda -
	ellipse -
	ellipseannulus -
	epanda -
	box -
	boxannulus -
	bpanda -
	polygon -
	line -
	vector -
	projection -
	segment -
	text -
	ruler -
	compass -
	{circle point} -
	{box point} -
	{diamond point} -
	{cross point} -
	{x point} -
	{arrow point} -
	{boxcircle point} {MarkerCreateShape $which $x $y}
	default {
	    set fn "$ds9(root)/template/$itemplate($marker(shape))"
	    set ch [open $fn r]

	    global vardata
	    set vardata [read $ch]
	    close $ch

	    $which marker create template var vardata $x $y
	}
    }
}

proc MarkerShift {which x y} {
    global imarker

    # if nothing is loaded, abort
    if {![$which has fits]} {
	return
    }

    # see if we are on a handle
    set h [$which get marker handle $x $y]
    set id [lindex $h 0]
    set imarker(handle) [lindex $h 1]

    if {$imarker(handle)} {
	$which marker $id rotate begin
	set imarker(motion) beginRotate
	return
    }

    # else, see if we are on a marker
    if {[$which marker select toggle $x $y]} {
	UpdateRegionMenu
	$which marker move begin $x $y
	set imarker(motion) beginMove
	return
    }

    # else, start a region select
    $which region select begin $x $y
    set imarker(motion) shiftregion
}

proc MarkerMotion {which x y} {
    global imarker

    # if nothing is loaded, abort
    if {![$which has fits]} {
	return
    }

    switch -- $imarker(motion) {
	none {}

	beginCreate -
	create {
	    $which marker edit motion $x $y $imarker(handle)
	    set imarker(motion) create
	}

	beginMove -
	move {
	    $which marker move motion $x $y
	    set imarker(motion) move
	}

	beginEdit -
	edit {
	    $which marker edit motion $x $y $imarker(handle)
	    set imarker(motion) edit
	}

	beginRotate -
	rotate {
	    $which marker rotate motion $x $y $imarker(handle)
	    set imarker(motion) rotate
	}

	region -
	shiftregion {$which region select motion $x $y}
    }
}

proc MarkerRelease {which x y} {
    global marker
    global imarker
    global current

    # if nothing is loaded, abort
    if {![$which has fits]} {
	return
    }

    switch -- $imarker(motion) {
	none {}
	beginCreate {
	    # the user has just clicked, so resize to make visible or delete
	    # assumes imarker(id) from create
	    $which marker edit end
	    MarkerDefault $which

	    if {$imarker(id)>=0} {
		if {$marker(centroid,auto)} {
		    $which marker centroid $imarker(id) 
		}

		MarkerReleaseCB $which
	    }

	    set imarker(id) -1
	    set imarker(x) -1
	    set imarker(y) -1
	}
	create {
	    $which marker edit end

	    # determine if this is an accident and just create the default
	    set diffx [expr $x-$imarker(x)]
	    set diffy [expr $y-$imarker(y)]
	    if {[expr sqrt($diffx*$diffx + $diffy*$diffy)]<2} {
		MarkerDefault $which
	    }

	    if {$imarker(id)>=0} {
		if {$marker(centroid,auto)} {
		    $which marker centroid $imarker(id) 
		}

		MarkerReleaseCB $which
	    }

	    set imarker(id) -1
	    set imarker(x) -1
	    set imarker(y) -1
	}
	beginMove -
	beginRotate {}
	beginEdit {}
	move {
	    $which marker move end
	    if {$marker(centroid,auto)} {
		$which marker centroid
	    }
	}
	edit {
	    $which marker edit end
	    if {$marker(centroid,auto)} {
		$which marker centroid
	    }
	}
	rotate {
	    $which marker rotate end
	    if {$marker(centroid,auto)} {
		$which marker centroid
	    }
	}
	region {$which region select end}
	shiftregion {$which region select shift end}
    }
    set imarker(motion) none
    set imarker(handle) -1
}

proc MarkerReleaseCB {which} {
    global marker
    global imarker
    global current

    # special callbacks
    switch [$which get marker $imarker(id) type] {
	projection {MarkerAnalysisPlot2d $which $imarker(id) 1}
	line -
	vector {
	    if {$marker(plot2d)} {
		MarkerAnalysisPlot2d $which $imarker(id) 1
	    }
	}
	circle -
	ellipse -
	box -
	polygon -
	point {
	    if {$marker(plot3d)} {
		MarkerAnalysisPlot3d $which $imarker(id) 1
	    }
	    if {$marker(stats)} {
		MarkerAnalysisStats $which $imarker(id) 1
	    }
	}
    }
}

proc MarkerDouble {which x y} {
    global imarker

    # if nothing is loaded, abort
    if {![$which has fits]} {
	return
    }

    set id [$which get marker id $x $y]

    if {$id} {
	if {[$which get marker $id PROPERTY SELECT]} {
	    MarkerDialog $which $id

	    switch [$which get marker $id type] {
		projection -
		line -
		vector -
		circle -
		ellipse -
		box -
		polygon -
		point {
		    set vvarname proj${id}${which}
		    upvar #0 $vvarname vvar
		    global $vvarname

		    PlotRaise $vvarname
		}
	    }
	}
    }
}

proc MarkerCreateShape {which x y} {
    global marker
    global imarker
    global pmarker
    global current
    global wcs

    # for compass/ruler
    global ed
    set ed(system) $wcs(system)
    set ed(sky) $wcs(sky)
    AdjustCoordSystem ed system
    set ed(dformat) $pmarker(dformat)

    set cmd "$which marker create $marker(shape) $x $y"
    switch -- $marker(shape) {
	circle {append cmd " 0"}
	annulus {append cmd " .001 .002 $pmarker(annulus,annuli)"}
	panda {append cmd " $pmarker(panda,ang1) $pmarker(panda,ang2) $pmarker(panda,angnum) .001 .002 $pmarker(panda,annuli)"}
	ellipse {append cmd " 0 0"}
	ellipseannulus {append cmd " .001 .001 .002 $pmarker(ellipseannulus,annuli)"}
	epanda {append cmd " $pmarker(epanda,ang1) $pmarker(epanda,ang2) $pmarker(epanda,angnum) .001 .001 .002 $pmarker(epanda,annuli)"}
	box {append cmd " 0 0"}
	boxannulus {append cmd " .002 .002 .004 $pmarker(boxannulus,annuli)"}
	bpanda {append cmd " $pmarker(bpanda,ang1) $pmarker(bpanda,ang2) $pmarker(bpanda,angnum) .001 .001 .002 $pmarker(bpanda,annuli)"}
	polygon {append cmd " .001 .001"}
	line {append cmd " $x $y"}
	vector {append cmd " $x $y"}
	projection {append cmd " $x $y $pmarker(projection,thick) "}
	segment {append cmd " .001 .001"}
	text {
	    set txt "Region"
	    set r [EntryDialog "Text Region" "Enter Text:" 40 txt]
	    if {$r == 1 && $txt != {}} {
		append cmd " 0 text = \{\{$txt\}\}"
	    } else {
		return
	    }
	}
	ruler {append cmd " $x $y $ed(system) $ed(sky) $ed(system) $ed(dformat) ''"}
	compass {append cmd " 15 $ed(system) $ed(sky) "}
	{circle point} -
	{box point} -
	{diamond point} -
	{cross point} -
	{x point} -
	{arrow point} -
	{boxcircle point} {append cmd " $pmarker(point,size)"}
    }
    append cmd " color = $marker(color)"
    append cmd " width = $marker(width)"
    append cmd " font = \{\"$marker(font) $marker(font,size) $marker(font,weight) $marker(font,slant)\"\}"
    append cmd " dash = $marker(dash)"
    append cmd " fixed = $marker(fixed)"
    append cmd " edit = $marker(edit)"
    append cmd " move = $marker(move)"
    append cmd " rotate = $marker(rotate)"
    append cmd " delete = $marker(delete)"
    append cmd " include = $marker(include)"
    append cmd " source = $marker(source)"

    $which marker unselect all

    set imarker(id) [eval $cmd]
    set imarker(motion) beginCreate
    set imarker(x) $x
    set imarker(y) $y

    switch -- $marker(shape) {
	circle -
	annulus -
	panda -
	ellipse -
	ellipseannulus -
	epanda -
	box -
	boxannulus -
	bpanda -
	compass -
	polygon -
	segment {
	    set imarker(handle) 1
	    $which marker $imarker(id) edit begin $imarker(handle)
	}
	line -
	vector -
	ruler -
	projection {
	    set imarker(handle) 2
	    $which marker $imarker(id) edit begin $imarker(handle)
	}
    }
}

proc MarkerDefault {which} {
    global imarker
    global pmarker
    global current

    # scale the default size to take into account the current
    set z1 double([lindex $current(zoom) 0])
    set z2 double([lindex $current(zoom) 1])
    if {$z1>$z2} {
	set zz $z1
    } else {
	set zz $z2
    }

    set item [$which get marker $imarker(id) type]
    switch -- $item {
	circle {
	    $which marker $imarker(id) circle radius \
		[expr ($pmarker(circle,radius)/$zz)] \
		image degrees
	}
	annulus {
	    $which marker $imarker(id) annulus radius \
		[expr ($pmarker(annulus,inner)/$zz)] \
		[expr ($pmarker(annulus,outer)/$zz)] \
		$pmarker(annulus,annuli) image degrees
	}
	panda {
	    $which marker $imarker(id) panda edit \
		$pmarker(panda,ang1) $pmarker(panda,ang2) \
		$pmarker(panda,angnum) \
		[expr ($pmarker(panda,inner)/$zz)] \
		[expr ($pmarker(panda,outer)/$zz)] \
		$pmarker(panda,annuli) image
	}
	ellipse {
	    $which marker $imarker(id) ellipse radius \
		[expr ($pmarker(ellipse,radius1)/$z1)] \
		[expr ($pmarker(ellipse,radius2)/$z2)] \
		image degrees
	}
	ellipseannulus {
	    $which marker $imarker(id) ellipseannulus radius \
	      [expr ($pmarker(ellipseannulus,radius1)/$z1)] \
	      [expr ($pmarker(ellipseannulus,radius2)/$z2)] \
	      [expr ($pmarker(ellipseannulus,radius3)/$z1)] \
		$pmarker(ellipseannulus,annuli) image
	}
	epanda {
	    $which marker $imarker(id) epanda edit \
		$pmarker(epanda,ang1) $pmarker(epanda,ang2) \
		$pmarker(epanda,angnum) \
		[expr ($pmarker(epanda,radius1)/$z1)] \
		[expr ($pmarker(epanda,radius2)/$z2)] \
		[expr ($pmarker(epanda,radius3)/$z1)] \
		$pmarker(epanda,annuli) image
	}
	box {
	    $which marker $imarker(id) box radius \
		[expr ($pmarker(box,radius1)/$z1)] \
		[expr ($pmarker(box,radius2)/$z2)] \
		image degrees
	}
	boxannulus {
	    $which marker $imarker(id) boxannulus radius \
		[expr ($pmarker(boxannulus,radius1)/$z1)] \
		[expr ($pmarker(boxannulus,radius2)/$z2)] \
		[expr ($pmarker(boxannulus,radius3)/$z1)] \
		$pmarker(boxannulus,annuli) image
	}
	bpanda {
	    $which marker $imarker(id) bpanda edit \
		$pmarker(bpanda,ang1) $pmarker(bpanda,ang2) \
		$pmarker(bpanda,angnum) \
		[expr ($pmarker(bpanda,radius1)/$z1)] \
		[expr ($pmarker(bpanda,radius2)/$z2)] \
		[expr ($pmarker(bpanda,radius3)/$z1)] \
		$pmarker(bpanda,annuli) image
	}
	compass {
	    $which marker $imarker(id) compass radius \
		$pmarker(compass,radius) image degrees
	}
	polygon {
	    $which marker $imarker(id) polygon reset \
		[expr ($pmarker(polygon,width)/$z1)] \
		[expr ($pmarker(polygon,height)/$z2)] \
		image degrees
	}
	segment {
	    $which marker $imarker(id) segment reset \
		[expr ($pmarker(segment,length)/$z1)] \
		[expr ($pmarker(segment,length)/$z2)] \
		image degrees
	}
	line -
	vector -
	ruler -
	projection {
	    $which marker $imarker(id) delete
	    set imarker(id) -1
	    set imarker(x) -1
	    set imarker(y) -1
	}
    }
}

proc MarkerDeleteKey {which x y} {
    # if nothing is loaded, abort
    if {![$which has fits]} {
	return
    }

    # see if we are on a polygon/segment
    set h [$which get marker handle $x $y]
    set id [lindex $h 0]
    set handle [lindex $h 1]

    set t [$which get marker $id type]
    switch -- $t {
	polygon -
	segment -
	annulus -
	panda -
	ellipseannulus -
	epanda -
	boxannulus -
	bpanda {
	    if {$handle > 4} {
		switch -- $t {
		    polygon {$which marker $id delete polygon vertex $handle}
		    segment {$which marker $id delete segment vertex $handle}
		    annulus {$which marker $id delete annulus $handle}
		    panda {$which marker $id delete panda $handle}
		    ellipseannulus {$which marker $id delete \
					ellipseannulus $handle}
		    epanda {$which marker $id delete epanda $handle}
		    boxannulus {$which marker $id delete boxannulus $handle}
		    bpanda {$which marker $id delete bpanda $handle}
		}
	    } else {
		# delete polygon/segment
		$which marker delete
		UpdateGroupDialog
	    }
	}
	default {
	    # delete marker
	    $which marker delete
	    UpdateGroupDialog
	}
    }
}

proc MarkerEpsilon {} {
    global ds9
    global pmarker

    foreach ff $ds9(frames) {
	$ff marker epsilon $pmarker(epsilon)
    }
}

proc MarkerShow {} {
    global current
    global marker

    if {$current(frame) != {}} {
	$current(frame) marker show $marker(show)
    }
}

proc MarkerShowText {} {
    global current
    global marker

    if {$current(frame) != {}} {
	$current(frame) marker show text $marker(show,text)
    }
}

proc MarkerPreserve {} {
    global current
    global marker

    if {$current(frame) != {}} {
	$current(frame) marker preserve $marker(preserve)
    }
}

proc MarkerCentroid {} {
    global current
    
    if {$current(frame) != {}} {
	$current(frame) marker centroid
    }
}

proc MarkerCentroidAuto {} {
    global current
    global marker

    if {$current(frame) != {}} {
	$current(frame) marker centroid auto $marker(centroid,auto)
    }
}

proc MarkerCentroidRadius {} {
    global current
    global marker
    
    if {$current(frame) != {}} {
	$current(frame) marker centroid radius $marker(centroid,radius)
    }
}

proc MarkerCentroidIteration {} {
    global current
    global marker
    
    if {$current(frame) != {}} {
	$current(frame) marker centroid iteration $marker(centroid,iteration)
    }
}

proc MarkerFront {} {
    global current
    
    if {$current(frame) != {}} {
	$current(frame) marker move front
    }
}

proc MarkerBack {} {
    global current
    
    if {$current(frame) != {}} {
	$current(frame) marker move back
	$current(frame) marker unselect all
    }
}

proc MarkerSelectAll {} {
    global current
    
    if {$current(frame) != {}} {
	$current(frame) marker select all
    }

    UpdateEditMenu
}

proc MarkerUnselectAll {} {
    global current
    
    if {$current(frame) != {}} {
	$current(frame) marker unselect all
    }

    UpdateEditMenu
}

proc MarkerSelectInvert {} {
    global current
    
    if {$current(frame) != {}} {
	$current(frame) marker select toggle
    }

    UpdateEditMenu
}

proc MarkerDeleteSelect {} {
    global current
    
    if {$current(frame) != {}} {
	$current(frame) marker delete
	UpdateGroupDialog
    }

    UpdateEditMenu
}

proc MarkerDeleteAllMenu {} {
    global current
    global pds9

    if {$pds9(confirm)} {
	if {[tk_messageBox -type okcancel -icon question -message [msgcat::mc {Delete All Regions?}]] != {ok}} {
	    return
	}
    }
    MarkerDeleteAll
}

proc MarkerDeleteAll {} {
    global current
    
    if {$current(frame) != {}} {
	$current(frame) marker delete all
	UpdateGroupDialog
    }

    UpdateEditMenu
}

proc MarkerColor {} {
    global current
    global marker
    
    if {$current(frame) != {}} {
	$current(frame) marker color $marker(color)
    }
}

proc MarkerWidth {} {
    global current
    global marker
    
    if {$current(frame) != {}} {
	$current(frame) marker width $marker(width)
    }
}

proc MarkerProp {prop} {
    global current
    global marker

    if {$current(frame) != {}} {
	$current(frame) marker property $prop $marker($prop)
    }
}

proc MarkerFont {} {
    global current
    global marker

    if {$current(frame) != {}} {
	$current(frame) marker font \"$marker(font) $marker(font,size) $marker(font,weight) $marker(font,slant)\"
    }
}

proc MarkerList {} {
    global current
    global marker

    if {$current(frame) == {}} {
	return
    }
    if {![$current(frame) has fits]} {
	return
    }

    if {[MarkerSaveDialog [msgcat::mc {List Regions}]]} {
	SimpleTextDialog markertxt [msgcat::mc {Region}] 80 20 insert top \
	    [$current(frame) marker list $marker(format) $marker(system) \
		 $marker(sky) $marker(skyformat) $marker(strip)]
    }
}

proc MarkerLoad {} {
    global ds9
    global current
    global marker

    if {$current(frame) == {}} {
	return
    }

    if {![$current(frame) has fits]} {
	return
    }

    set fns [OpenFileDialog markerfbox]
    if {$fns != {}} {
	if {[MarkerLoadDialog]} {
	    switch -- $marker(load) {
		current {set frames $current(frame)}
		all {set frames $ds9(frames)}
	    }
	    MarkerLoadFrames $fns $frames \
		$marker(format) $marker(system) $marker(sky)
	}
    }
}

proc MarkerLoadFrames {str frames format sys sky} {
    if {$str == {}} {
	return
    }
    
    if {[catch {glob $str} fns]} {
	# reset errors, we don't want to hear about it
	InitError tcl

	# could be an unique name, i.e. foo[bar], just try to load
	foreach fr $frames {
	    if {[catch {MarkerLoadFile $str $fr $format $sys $sky}]} {
		return
	    }
	}
    } else {
	foreach fn $fns {
	    foreach fr $frames {
		if {[catch {MarkerLoadFile $fn $fr $format $sys $sky}]} {
		    return
		}
	    }
	}
    }
}

proc MarkerLoadFile {filename which format sys sky} {
    global current
    global marker

    if {$filename == {}} {
	return
    }

    if {![$which has fits]} {
	return
    }

    # determine if its a fits file
    # first, strip the filename
    if {![regexp -nocase {(.*)(\[.*\])} $filename foo base ext]} {
	set base $filename
	set ext {}
    }

    if {[catch {open $base} fd]} {
	Error [msgcat::mc {Unable to load region file}]
	return -code error
    }

    set ll [read $fd 9]
    close $fd

    # is it a fits file?
    if {$ll == "SIMPLE  ="} {
	# see if we need to add an extension
	if {$ext == {}} {
	    set filename "$base\[REGION\]"
	}

	# open it
	if {[catch {$which marker load fits "\{$filename\}" $marker(color) $marker(dashlist) $marker(width) "\{$marker(font) $marker(font,size) $marker(font,weight) $marker(font,slant)\}"}]} {
	    if {$ext == {}} {
		# ok now try the first extension
		set filename "$base\[1\]"
		if {[catch {$which marker load fits "\{$filename\}" $marker(color) $marker(dashlist) $marker(width) "\{$marker(font) $marker(font,size) $marker(font,weight) $marker(font,slant)\}"}]} {
		    Error [msgcat::mc {Unable to load region file}]
		    return -code error
		}

		# reset errors, we don't want to hear about it
		InitError tcl
	    } else {
		Error [msgcat::mc {Unable to load region file}]
		return -code error
	    }
	}
    } else {
	# no, its ascii
	if {[catch {$which marker load $format "\{$filename\}" $sys $sky}]} {
	    Error [msgcat::mc {Unable to load region file}]
	    return -code error
	}
    }

    FileLast markerfbox $filename
    UpdateGroupDialog
}

proc MarkerSave {} {
    global current
    global marker

    if {$current(frame) == {}} {
	return
    }
    if {![$current(frame) has fits]} {
	return
    }

    set filename [SaveFileDialog markerfbox]
    if {$filename == {}} {
	return
    }

    if {[MarkerSaveDialog [msgcat::mc {Save Regions}]]} {
	$current(frame) marker save "\{$filename\}" \
	    $marker(format) $marker(system) $marker(sky) \
	    $marker(skyformat) $marker(strip)
    }
}

proc MarkerInfo {} {
    global current
    global marker
    global pds9

    if {$current(frame) != {}} {
	set ll [$current(frame) get marker select]
	if {$ll != {}} {
	    set ii 0
	    foreach dd $ll {
		incr ii
		if {$ii > $marker(maxdialog)} {
		    return
		}
		MarkerDialog $current(frame) $dd
	    }
	} else {
	    if {$pds9(confirm)} {
		tk_messageBox -type ok -icon info -message [msgcat::mc {Please Select a Region}]
	    }
	}
    }
}

proc MarkerDialog {frame id} {
    global imarker

    set varname ${imarker(prefix,dialog)}${id}${frame}
    global $varname
    upvar #0 $varname var

    set var(frame) $frame
    set var(id) $id
    set var(top) ".${varname}"
    set var(mb) ".${varname}mb"

    switch -- [$frame get marker $id type] {
	circle {CircleDialog $varname}
	annulus {AnnulusDialog $varname}
	panda {PandaDialog $varname}
	ellipse {EllipseDialog $varname}
	ellipseannulus {EllipseAnnulusDialog $varname}
	epanda {EpandaDialog $varname}
	box {BoxDialog $varname}
	boxannulus {BoxAnnulusDialog $varname}
	bpanda {BpandaDialog $varname}
	polygon {PolygonDialog $varname}
	line {LineDialog $varname}
	vector {VectorDialog $varname}
	projection {ProjectionDialog $varname}
	segment {SegmentDialog $varname}
	text {TextDialog $varname}
	ruler {RulerDialog $varname}
	compass {CompassDialog $varname}
	point {PointDialog $varname}
	composite {CompositeDialog $varname}
    }
}

proc MarkerCopy {} {
    global current
    global marker
    global wcs

    if {$current(frame) != {}} {
	$current(frame) marker copy
	set marker(copy) $current(frame)
	set marker(copy,system) $wcs(system)
    }
    UpdateEditMenu
}

proc MarkerCut {} {
    global current
    global marker
    global wcs

    if {$current(frame) != {}} {
	$current(frame) marker cut
	set marker(copy) $current(frame)
	set marker(copy,system) $wcs(system)
    }
    UpdateEditMenu
    UpdateGroupDialog
}

proc MarkerUndo {} {
    global current

    if {$current(frame) != {}} {
	$current(frame) marker undo
    }
    UpdateEditMenu
    UpdateGroupDialog
}

proc MarkerPaste {} {
    global current
    global marker
    global wcs

    # if nothing is loaded, abort
    if {$current(frame) == {}} {
	return
    }
    if {$marker(copy) == {} || $marker(copy,system) == {}} {
	return
    }
    if {(![$current(frame) has fits]) || (![$marker(copy) has fits])} {
	return
    }

    # same frame?
    if {$current(frame) == $marker(copy)} {
	# use internal
	$current(frame) marker paste
    } else {
	global cmd
	# do we have a valid wcs?
	if {[$marker(copy) has wcs $marker(copy,system)] &&
	    [$current(frame) has wcs $marker(copy,system)]} {

	    # do we have an equatorial wcs?
	    if {[$marker(copy) has wcs equatorial $marker(copy,system)] &&
		[$current(frame) has wcs equatorial $marker(copy,system)]} {
		# then use wcs
		set cmd "[$marker(copy) marker paste $marker(copy,system)]"
	    } else {
		# mix of equatorial and non-equatorial wcs, use physical
		set cmd "[$marker(copy) marker paste physical]"
	    }
	} else {
	    # default, use physical
	    set cmd "[$marker(copy) marker paste physical]"
	}
	$current(frame) marker command ds9 var cmd
	unset cmd
    }
	
    UpdateEditMenu
    UpdateGroupDialog
}

proc CompositeCreate {} {
    global current
    global marker

    if {$current(frame) != {}} {
	set cmd "$current(frame) marker create composite"
	append cmd " color = $marker(color)"
	append cmd " width = $marker(width)"
	append cmd " font = \{\"$marker(font) $marker(font,size) $marker(font,weight) $marker(font,slant)\"\}"
	append cmd " dash = $marker(dash)"
	append cmd " edit = $marker(edit)"
	append cmd " move = $marker(move)"
	append cmd " rotate = $marker(rotate)"
	append cmd " delete = $marker(delete)"
	append cmd " fixed = $marker(fixed)"
	append cmd " include = $marker(include)"
	append cmd " source = $marker(source)"

	eval $cmd
    }
}

proc CompositeDelete {} {
    global current

    if {$current(frame) != {}} {
	$current(frame) marker composite delete
    }
}

proc MarkerBackup {ch which fdir rdir} {
    if {[$which get marker number] > 0} {
	set fn $fdir/ds9.reg
	set rfn $rdir/ds9.reg

	catch {file delete -force $fn}
	if {[$which has wcs equatorial wcs]} {
	    $which marker save \"$fn\" ds9 wcs fk5 degrees 0
	} else {
	    $which marker save \"$fn\" ds9 physical fk5 degrees 0
	}
	puts $ch "$which marker load ds9 \{\"$rfn\"\}"
    }
}

# Process Cmds

proc ProcessRegionsCmd {varname iname sock fn} {
    upvar $varname var
    upvar $iname i

    global ds9
    global current
    global marker
    global pmarker

    # we need to be realized
    ProcessRealizeDS9

    switch -- [string tolower [lindex $var $i]] {
	epsilon {
	    incr i
	    set pmarker(epsilon) [lindex $var $i]
	    MarkerEpsilon
	}
	show {
	    incr i
	    set marker(show) [FromYesNo [lindex $var $i]]
	    MarkerShow
	}
	showtext {
	    incr i
	    set marker(show,text) [FromYesNo [lindex $var $i]]
	    MarkerShowText
	}
	getinfo {MarkerInfo}
	centroid {
	    incr i
	    switch -- [string tolower [lindex $var $i]] {
		auto {
		    incr i
		    set marker(centroid,auto) [FromYesNo [lindex $var $i]]
		    MarkerCentroidAuto
		}
		radius {
		    incr i
		    set marker(centroid,radius) [lindex $var $i]
		    MarkerCentroidRadius
		}
		iteration {
		    incr i
		    set marker(centroid,iteration) [lindex $var $i]
		    MarkerCentroidIteration
		}
		default {
		    incr i -1
		    MarkerCentroid
		}
	    }
	}
	autocentroid {
	    # backward compatibilty
	    incr i
	    set marker(centroid,auto) [FromYesNo [lindex $var $i]]
	    MarkerCentroidAuto
	}
	movefront {MarkerFront}
	moveback {MarkerBack}
	move {
	    incr i
	    switch -- [string tolower [lindex $var $i]] {
		front {MarkerFront}
		back {MarkerBack}
	    }
	}

	selectall {MarkerSelectAll}
	selectnone {MarkerUnselectAll}
	select {
	    incr i
	    switch -- [string tolower [lindex $var $i]] {
		group {
		    # backward compatibility, use group <> select
		    incr i
		    if {$current(frame) != {}} {
			if {[$current(frame) has fits]} {
			    $current(frame) marker "\{[lindex $var $i]\}" select
			}
		    }
		}
		all {MarkerSelectAll}
		none {MarkerUnselectAll}
		invert {MarkerSelectInvert}
	    }
	}

	deleteall {MarkerDeleteAll}
	delete {
	    incr i
	    switch -- [string tolower [lindex $var $i]] {
		select {MarkerDeleteSelect}
		all {MarkerDeleteAll}
	    }
	}

	format {
	    incr i
	    set marker(format) [string tolower [lindex $var $i]]
	}
	coord -
	system {
	    # for backward compatibility
	    incr i
	    switch -- [string tolower [lindex $var $i]] {
		fk4 -
		b1950 -
		fk5 -
		j2000 -
		icrs -
		galactic -
		ecliptic {
		    incr i
		    set marker(system) wcs
		    set marker(sky) [string tolower [lindex $var $i]]
		}
		
		default {set marker(system) [string tolower [lindex $var $i]]}
	    }
	}
	sky {
	    incr i
	    set marker(sky) [string tolower [lindex $var $i]]
	}
	coordformat -
	skyformat {
	    incr i
	    switch -- [string tolower [lindex $var $i]] {
		deg -
		degree -
		degrees {set marker(skyformat) degrees}
		default {
		    set marker(skyformat) [string tolower [lindex $var $i]]
		}
	    }
	}
	strip {
	    incr i
	    set marker(strip) [FromYesNo [lindex $var $i]]
	}
	delim {
	    incr i
	    if {[lindex $var $i] != "nl"} {
		set marker(strip) 1
	    } else {
		set marker(strip) 0
	    }
	}
	shape {
	    incr i
	    set marker(shape) [string tolower [lindex $var $i]]
	}
	color {
	    incr i
	    set marker(color) [string tolower [lindex $var $i]]
	    MarkerColor
	}
	width {
	    incr i
	    set marker(width) [lindex $var $i]
	    MarkerWidth
	}

	fixed {
	    incr i
	    set marker(fixed) [FromYesNo [lindex $var $i]]
	    MarkerProp fixed
	}
	edit {
	    incr i
	    set marker(edit) [FromYesNo [lindex $var $i]]
	    MarkerProp edit
	}
	rotate {
	    incr i
	    set marker(rotate) [FromYesNo [lindex $var $i]]
	    MarkerProp rotate
	}
	delete {
	    incr i
	    set marker(delete) [FromYesNo [lindex $var $i]]
	    MarkerProp delete
	}
	include {
	    set marker(include) 1
	    MarkerProp include
	}
	exclude {
	    set marker(include) 0
	    MarkerProp include
	}
	source {
	    set marker(source) 1
	    MarkerProp source
	}
	background {
	    set marker(source) 0
	    MarkerProp source
	}

	tag -
	tags -
	group -
	groups {
	    incr i

	    if {[string tolower [lindex $var $i]] == {new}} {
		if {$current(frame) != {}} {
		    if {[$current(frame) has fits]} {
			set name [$current(frame) get marker tag default name]
			$current(frame) marker tag "\{$name\}"
			UpdateGroupDialog
		    }
		}
	    } else {
		set tag "\{[lindex $var $i]\}"
		incr i
		switch -- [string tolower [lindex $var $i]] {
		    new {
			if {$current(frame) != {}} {
			    if {[$current(frame) has fits]} {
				$current(frame) marker tag $tag
				UpdateGroupDialog
			    }
			}
		    }
		    update {
			if {$current(frame) != {}} {
			    if {[$current(frame) has fits]} {
				$current(frame) marker tag update $tag
				UpdateGroupDialog
			    }
			}
		    }
		    delete {
			if {$current(frame) != {}} {
			    if {[$current(frame) has fits]} {
				$current(frame) marker $tag delete
				UpdateGroupDialog
			    }
			}
		    }
		    select {
			if {$current(frame) != {}} {
			    if {[$current(frame) has fits]} {
				$current(frame) marker $tag select
			    }
			}
		    }
		    color {
			incr i
			if {$current(frame) != {}} {
			    if {[$current(frame) has fits]} {
				$current(frame) marker $tag color \
				    [string tolower [lindex $var $i]]
			    }
			}
		    }
		    copy {
			if {$current(frame) != {}} {
			    if {[$current(frame) has fits]} {
				$current(frame) marker $tag copy
			    }
			}
		    }
		    cut {
			if {$current(frame) != {}} {
			    if {[$current(frame) has fits]} {
				$current(frame) marker $tag cut
			    }
			}
		    }
		    font {
			incr i
			if {$current(frame) != {}} {
			    if {[$current(frame) has fits]} {
				$current(frame) marker $tag font \
				    "\{[lindex $var $i]\}"
			    }
			}
		    }
		    move {
			if {$current(frame) != {}} {
			    if {[$current(frame) has fits]} {
				$current(frame) marker $tag move \
				    [lindex $var [expr $i+1]] \
				    [lindex $var [expr $i+2]]
			    }
			}
			incr i 2
		    }
		    movefront {
			if {$current(frame) != {}} {
			    if {[$current(frame) has fits]} {
				$current(frame) marker $tag move front
			    }
			}
		    }
		    moveback {
			if {$current(frame) != {}} {
			    if {[$current(frame) has fits]} {
				$current(frame) marker $tag move back
			    }
			}
		    }
		    property {
			if {$current(frame) != {}} {
			    if {[$current(frame) has fits]} {
				$current(frame) marker $tag property \
				    [lindex $var [expr $i+1]] \
				    [lindex $var [expr $i+2]]
			    }
			}
			incr i 2
		    }
		}
	    }
	}

	copy {MarkerCopy}
	cut {MarkerCut}
	paste {
	    set marker(paste,system) [string tolower [lindex $var [expr $i+1]]] 
	    switch -- $marker(paste,system) {
		image -
		physical -
		detector -
		amplifier -
		wcs -
		wcsa -
		wcsb -
		wcsc -
		wcsd -
		wcse -
		wcsf -
		wcsg -
		wcsh -
		wcsi -
		wcsj -
		wcsk -
		wcsl -
		wcsm -
		wcsn -
		wcso -
		wcsp -
		wcsq -
		wcsr -
		wcss -
		wcst -
		wcsu -
		wcsv -
		wcsw -
		wcsx -
		wcsy -
		wcsz {}
		default {set marker(paste,system) wcs}
	    }		

#	    backward compatibility
	    if {[string range [lindex $var [expr $i+2]] 0 0] == {-}} {
		incr i 1
	    } else {
		incr i 2
	    }

	    MarkerPaste
	}
	undo {MarkerUndo}

	composite {CompositeCreate}
	desolve -
	dissove {CompositeDelete}

	template {
	    incr i
	    set ff [lindex $var $i]
	    incr i
	    switch -- [string tolower [lindex $var $i]] {
		at {
		    incr i
		    set ra [lindex $var $i]
		    incr i
		    set dec [lindex $var $i]
		    incr i
		    set sys [string tolower [lindex $var $i]]
		    incr i
		    set sky [string tolower [lindex $var $i]]
		    switch -- $sys {
			fk4 -
			fk5 -
			icrs -
			galatic -
			ecliptic {
			    set sky $sys
			    set sys wcs
			    incr i -1
			}
		    }
		    LoadTemplateMarkerAt $ff $ra $dec $sys $sky
		    FileLast templatefbox $ff
		}
		default {
		    LoadTemplateMarker $ff
		    FileLast templatefbox $ff
		    incr i -1
		}
	    }
	}
	savetemplate {
	    incr i
	    set ff [lindex $var $i]
	    if {$ff != {}} {
		if {$current(frame) != {}} {
		    if {[$current(frame) has fits]} {
			$current(frame) marker save template "\{$ff\}"
		    }
		}
		FileLast templatefbox $ff
	    }
	}

	command {
	    incr i
	    if {$current(frame) != {}} {
		if {[$current(frame) has fits]} {
		    $current(frame) marker command $marker(format) \
			"\{[lindex $var $i]\}"
		}
	    }
	    UpdateGroupDialog
	}

	list {
	    incr i
	    switch -- [string tolower [lindex $var $i]] {
		close {SimpleTextDestroy markertxt}
		default {
		    if {$current(frame) != {}} {
			if {[$current(frame) has fits]} {
			    SimpleTextDialog markertxt [msgcat::mc {Region}] \
				80 20 insert top \
				[$current(frame) marker list $marker(format) \
				     $marker(system) $marker(sky) \
				     $marker(skyformat) $marker(strip)]
			}
		    }
		    incr i -1
		}
	    }
	}
	save {
	    incr i
	    set ff [lindex $var $i]
	    if {$ff == {}} {
		return
	    }
	    if {$current(frame) != {}} {
		if {[$current(frame) has fits]} {
		    $current(frame) marker save "\{$ff\}" \
			$marker(format) $marker(system) $marker(sky) \
			$marker(skyformat) $marker(strip)
		}
	    }
	    FileLast markerfbox $ff
	}

	file -
	load {
	    incr i
	    switch -- [string tolower [lindex $var $i]] {
		all {
		    incr i
		    set frames $ds9(frames)
		}
		default {
		    set frames $current(frame)
		}
	    }
	    MarkerLoadFrames [lindex $var $i] $frames \
		$marker(format) $marker(system) $marker(sky)
	}
	default {
	    set format $marker(format)
	    set sys $marker(system)
	    set sky $marker(sky)

	    while {[string range [lindex $var $i] 0 0] == "-"} {
		switch -- [string tolower [lindex $var $i]] {
		    -format {
			incr i
			set format [lindex $var $i]
		    }
		    -sys -
		    -coord -
		    -system {
			incr i
			# for backward compatibility
			switch -- [lindex $var $i] {
			    fk4 -
			    fk5 -
			    icrs -
			    galactic -
			    ecliptic {
				set sys wcs
				set sky [lindex $var $i]
			    }
			    default {
				set sys [lindex $var $i]
			    }
			}
		    }
		    -sky {
			incr i
			set sky [lindex $var $i]
		    }
		    default {
			Error "Illegal option: [lindex $var $i]"
			return
		    }
		}
		incr i
	    }

	    if {$sock != {}} {
		# xpa path
		if {[lindex $var $i] != {}} {
		    MarkerLoadFrames [lindex $var $i] $current(frame) \
			$format $sys $sky
		} else {
		    # fits regions files not supported  
		    if {$current(frame) != {}} {
			if {[$current(frame) has fits]} {
			    $current(frame) marker load $format $sock $sys $sky
			}
		    }
		    UpdateGroupDialog
		}
	    } elseif {$fn != {}} {
		# samp path
		if {[lindex $var $i] != {}} {
		    MarkerLoadFrames [lindex $var $i] $current(frame) \
			$format $sys $sky
		} else {
		    MarkerLoadFrames $fn $current(frame) \
			$format $sys $sky
		}
	    } else {
		# this will open a fits regions file
		MarkerLoadFrames [lindex $var $i] $current(frame) \
		    $format $sys $sky
	    }
	}
    }
}

proc ProcessSendRegionsCmd {proc id param sock fn} {
    global current
    global marker
    global pmarker

    if {$current(frame) == {}} {
	return
    }

    switch -- [lindex $param 0] {
	epsilon {$proc $id "$pmarker(epsilon)\n"}
	show {$proc $id [ToYesNo $marker(show)]}
	showtext {$proc $id [ToYesNo $marker(show,text)]}
	centroid {
	    switch -- [lindex $param 1] {
		auto {$proc $id [ToYesNo $marker(centroid,auto)]}
		radius {$proc $id "$marker(centroid,radius)\n"}
		iteration {$proc $id "$marker(centroid,iteration)\n"}
	    }
	}
	autocentroid {$proc $id [ToYesNo $marker(centroid,auto)]}
	format {$proc $id "$marker(format)\n"}
	coord -
	system {$proc $id "$marker(system)\n"}
	sky  {$proc $id "$marker(sky)\n"}
	coordformat -
	skyformat {$proc $id "$marker(skyformat)\n"}
	strip {$proc $id [ToYesNo $marker(strip)]}
	delim {
	    if {$marker(strip)} {
		$proc $id "semicolon\n"
	    } else {
		$proc $id "nl\n"
	    }
	}
	shape {$proc $id "$marker(shape)\n"}
	color {$proc $id "$marker(color)\n"}
	width {$proc $id "$marker(width)\n"}

	tag -
	tags -
	group -
	groups {$proc $id "[lsort [$current(frame) get marker tag all]]\n"}

	default {
	    set format $marker(format)
	    set sys $marker(system)
	    set sky $marker(sky)
	    set skyformat $marker(skyformat)
	    set strip $marker(strip)
	    set select {}
	    set props {}
	    set tags {}

	    set i 0
	    set l [llength $param]
	    while {$i < $l} {
		switch -- [lindex $param $i] {
		    -format {incr i; set format [lindex $param $i]}
		    -sys -
		    -coord -
		    -system {
			incr i
			# for backward compatibility
			switch -- [lindex $param $i] {
			    fk4 -
			    fk5 -
			    icrs -
			    galactic -
			    ecliptic {
				set sys wcs
				set sky [lindex $param $i]
			    }
			    
			    default {set sys [lindex $param $i]}
			}
		    }
		    -sky {incr i; set sky [lindex $param $i]}
		    -coordformat -
		    -skyformat {
			incr i
			switch -- [lindex $param $i] {
			    deg -
			    degree -
			    degrees {set skyformat degrees}
			    default {set skyformat [lindex $param $i]}
			}
		    }
		    -strip {
			incr i; 
			set strip [FromYesNo [lindex $param $i]]
		    }
		    -delim  {
			incr i;
			if {[lindex $param $i] != "nl"} {
			    set strip 1
			} else {
			    set strip 0
			}
		    }

		    include {append props " include = 1"}
		    exclude {append props " include = 0"}
		    source {append props " source = 1"}
		    background {append props " source = 0"}
		    selected {set select "select"}
		    -prop {
			append props " [lindex $param [expr $i+1]] = [lindex $param [expr $i+2]]"
			incr i 2
		    }
		    -tag -
		    -group {
			incr i
			append tags "tag = \{[lindex $param $i]\}"
		    }
		}
		incr i
	    }

	    switch -- $format {
		xml {set ext {.xml}}
		default {set ext {.rgn}}
	    }
	    ProcessSend $proc $id $sock $fn $ext \
		[$current(frame) marker list $select $format \
		     $sys $sky $skyformat $strip $props $tags]
	}
    }
}
