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
    set imarker(prefix,plot3d) {mkrplot3d}
    set imarker(prefix,plot2d) {mkrplot2d}
    set imarker(prefix,stats) {stats}
    set imarker(prefix,radial) {mkrradial}
    set imarker(prefix,panda) {mkrpanda}
    set imarker(prefix,histogram) {mkrhist}

    set marker(show) 1
    set marker(show,text) 1
    set marker(centroid,auto) 0
    set marker(centroid,iteration) 30
    set marker(centroid,radius) 10
    set marker(shape) circle
    set marker(color) green
    set marker(color,default) 0
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

    set marker(format) ds9

    # these are only used for save/load/list and
    #   are set from current wcs values
    array set pmarker [array get marker]

    set marker(copy) {}
    set marker(copy,system) {}
    set marker(maxdialog) 48
    set marker(load) current

    set marker(system) physical
    set marker(sky) fk5
    set marker(skyformat) degrees
    set marker(strip) 0

    # temp
    set marker(load,format) $marker(format)
    set marker(load,system) $marker(system)
    set marker(load,sky) $marker(sky)
    set marker(tag) {}

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
	    if {![$which has wcs celestial wcs]} {
		Error "[msgcat::mc {Unable to create FOV Region, celestial WCS Required}]"
		return
	    }

	    set fn "$ds9(root)/template/$itemplate($marker(shape))"
	    if {[catch {set ch [open $fn r]}]} {
		Error "[msgcat::mc {Unable to locate FOV Region}] $marker(shape)"
		return
	    }

	    global vardata
	    set vardata [read $ch]
	    close $ch

	    $which marker create template var vardata $x $y
	    unset vardata
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
		$which marker delete select
		UpdateGroupDialog
	    }
	}
	default {
	    # delete marker
	    $which marker delete select
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

proc MarkerDelete {select} {
    global pds9

    if {$pds9(confirm)} {
	if {[tk_messageBox -type okcancel -icon question -message [msgcat::mc {Delete Regions?}]] != {ok}} {
	    return 0
	}
    }

    MarkerDeleteSelect $select
    return 1
}

proc MarkerDeleteSelect {select} {
    global current
    
    if {$current(frame) != {}} {
	$current(frame) marker delete $select
	UpdateGroupDialog
    }

    UpdateEditMenu
}

proc MarkerDeleteLoad {} {
    if {[MarkerDelete {}]} {
	MarkerLoad
    }
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

proc MarkerList {select} {
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
	    [$current(frame) marker list $select \
		 $marker(format) $marker(system) \
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
    global errorInfo

    if {$filename == {}} {
	return
    }

    if {![$which has fits]} {
	return
    }

    # is it compressed?
    set app {}
    switch [file extension $filename] {
	.gz {set app gunzip}
	.bz -
	.bz2 {set app bunzip2}
	.Z {set app uncompress}
    }

    if {$app != {}} {
	set srcfilename $filename
	set filename [tmpnam [file ext [file rootname $filename]]]
	if {[catch {exec $app < $srcfilename > $filename} rr]} {
	    Error "[msgcat::mc {Unable to load compressed region file}] $srcfilename\n$rr"
	    return -code error
	}
    }
    
    # determine if its a fits file
    # look for hdu ext in the filename
    # first, strip the filename
    if {![regexp -nocase {(.*)(\[.*\])} $filename foo base ext]} {
	set base $filename
	set ext {}
    }

    if {[catch {open $base} fd]} {
	Error "[msgcat::mc {Unable to load region file}] $filename"
	return -code error
    }

    set ll [read $fd 9]
    close $fd

    # is it a fits file?
    if {$ll == "SIMPLE  ="} {
	# ok, its fits
	# try filename first
	if {[catch {$which marker load fits "\{$filename\}" $marker(color)}]} {

	    # reset errorInfo
	    set errorInfo {}
	    
	    # see if we need to add an extension
	    # try [REGION] extension
	    if {$ext == {}} {
		set regfilename "$base\[REGION\]"

		if {[catch {$which marker load fits "\{$regfilename\}" $marker(color)}]} {

		    # reset errorInfo
		    set errorInfo {}

		    # ok now try the first extension
		    set regfilename "$base\[1\]"
		    if {[catch {$which marker load fits "\{$regfilename\}" $marker(color)}]} {
			Error "[msgcat::mc {Unable to load region file}] $filename"
			return -code error
		    }
		}
	    } else {
		Error "[msgcat::mc {Unable to load region file}] $filename"
		return -code error
	    }
	}
    } else {
	# no, its ascii
	if {[catch {$which marker load $format "\{$filename\}" $marker(color,default) $marker(color) $sys $sky}]} {
	    Error "[msgcat::mc {Unable to load region file}] $filename"
	    return -code error
	}
    }

    if {$app != {}} {
	file delete -force $filename
    }
    FileLast markerfbox $filename
    UpdateGroupDialog
}

proc MarkerSave {select} {
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
	$current(frame) marker save $select "\{$filename\}" \
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
	    if {[$marker(copy) has wcs celestial $marker(copy,system)] &&
		[$current(frame) has wcs celestial $marker(copy,system)]} {
		# then use wcs
		set cmd "[$marker(copy) marker paste $marker(copy,system)]"
	    } else {
		# mix of celestial and non-celestial wcs, use physical
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
	if {[$which has wcs celestial wcs]} {
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
    global marker

    # we need to be realized
    ProcessRealizeDS9

    global parse
    set parse(sock) $sock
    set parse(fn) $fn

    set marker(load,format) $marker(format)
    set marker(load,system) $marker(system)
    set marker(load,sky) $marker(sky)
    set marker(tag) {}
    
    region::YY_FLUSH_BUFFER
    region::yy_scan_string [lrange $var $i end]
    region::yyparse
    incr i [expr $region::yycnt-1]
}

proc RegionCmdLoad {} {
    global marker
    global current
    global parse
    
    if {$current(frame) == {}} {
	return
    }
    if {![$current(frame) has fits]} {
	return
    }

    if {$parse(sock) != {}} {
	# xpa path
	# fits regions files not supported  
	$current(frame) marker load $marker(load,format) \
	    $parse(sock) $marker(color,default) $marker(color) \
	    $marker(load,system) $marker(load,sky)
	UpdateGroupDialog
    } elseif {$parse(fn) != {}} {
	# samp path
	MarkerLoadFrames $parse(fn) $current(frame) \
	    $marker(load,format) $marker(load,system) $marker(load,sky)
    }
}

proc RegionCmdLoadFn {fn {all {0}}} {
    global marker
    global ds9
    global current

    if {$all} {
	set frames $ds9(frames)
    } else {
	set frames $current(frame)
    }    
    MarkerLoadFrames $fn $frames \
	$marker(load,format) $marker(load,system) $marker(load,sky)
}

proc RegionCmdSave {fn select} {
    global marker
    global current

    if {$current(frame) == {}} {
	return
    }
    if {![$current(frame) has fits]} {
	return
    }

    $current(frame) marker save $select $fn $marker(format) \
	$marker(system) $marker(sky) $marker(skyformat) $marker(strip)
    FileLast markerfbox $fn
}

proc RegionCmdList {select} {
    global marker
    global current

    if {$current(frame) == {}} {
	return
    }
    if {![$current(frame) has fits]} {
	return
    }

    SimpleTextDialog markertxt [msgcat::mc {Region}] 80 20 insert top \
	[$current(frame) marker list $select $marker(format) $marker(system) \
	     $marker(sky) $marker(skyformat) $marker(strip)]
}

proc RegionCmdGroup {cmd {val1 {}} {val2 {}}} {
    global current
    global marker
    
    if {$current(frame) == {}} {
	return
    }
    if {![$current(frame) has fits]} {
	return
    }

    $current(frame) marker "\{$marker(tag)\}" $cmd $val1 $val2
    UpdateGroupDialog
}

proc RegionCmdGroupNew {} {
    global current
    global marker
    
    if {$current(frame) == {}} {
	return
    }
    if {![$current(frame) has fits]} {
	return
    }

    set tag $marker(tag)
    if {$tag == {}} {
	set tag [$current(frame) get marker tag default name]
    }
    $current(frame) marker tag "\{$tag\}"
    UpdateGroupDialog
}

proc RegionCmdGroupUpdate {} {
    global current
    global marker
    
    if {$current(frame) == {}} {
	return
    }
    if {![$current(frame) has fits]} {
	return
    }

    $current(frame) marker tag update "\{$marker(tag)\}"
    UpdateGroupDialog
}

proc RegionCmdGroupFont {value} {
    global current
    global marker
    
    if {$current(frame) == {}} {
	return
    }
    if {![$current(frame) has fits]} {
	return
    }

    $current(frame) marker "\{$marker(tag)\}" font "\{$value\}"
    UpdateGroupDialog
}

proc RegionCmdTemplate {fn} {
    LoadTemplateMarker $fn
    FileLast templatefbox $fn
}

proc RegionCmdTemplateAt {fn ra dec sys sky} {
    LoadTemplateMarkerAt $fn $ra $dec $sys $sky
    FileLast templatefbox $fn
}

proc RegionCmdTemplateSave {fn} {
    global marker
    global current

    if {$current(frame) == {}} {
	return
    }
    if {![$current(frame) has fits]} {
	return
    }

    $current(frame) marker save template $fn
    FileLast templatefbox $fn
}

proc RegionCmdCommand {cmd} {
    global marker
    global current

    if {$current(frame) == {}} {
	return
    }
    if {![$current(frame) has fits]} {
	return
    }

    $current(frame) marker command $marker(format) "\{$cmd\}"
}

proc ProcessSendRegionsCmd {proc id param sock fn} {
    global parse
    set parse(proc) $proc
    set parse(id) $id
    set parse(sock) $sock
    set parse(fn) $fn

    global marker
    set marker(load,format) $marker(format)
    set marker(load,system) $marker(system)
    set marker(load,sky) $marker(sky)
    set marker(load,skyformat) $marker(skyformat)
    set marker(load,strip) $marker(strip)
    set marker(load,select) {}
    set marker(load,props) {}
    set marker(load,tags) {}

    regionsend::YY_FLUSH_BUFFER
    regionsend::yy_scan_string $param
    regionsend::yyparse
}

proc RegionSendCmd {} {
    global parse
    global marker
    global current

    if {$current(frame) == {}} {
	return
    }

    switch -- $marker(load,format) {
	xml {set ext {.xml}}
	default {set ext {.rgn}}
    }

    set rr [$current(frame) marker list $marker(load,select) $marker(load,format) $marker(load,system) $marker(load,sky) $marker(load,skyformat) $marker(load,strip) $marker(load,props) $marker(load,tags)]

    ProcessSend $parse(proc) $parse(id) $parse(sock) $parse(fn) $ext $rr
}
