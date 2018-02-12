#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc CreateInfoPanel {} {
    global ds9
    global pds9
    global view
    global infobox

    # Panel Frame
    set ds9(panel) [ttk::frame $ds9(main).panel]
    set ds9(panel,sep) [ttk::separator $ds9(main).spanel -orient horizontal]

    # Info
    set ds9(info) [ttk::frame $ds9(panel).info]
    ttk::frame $ds9(info).dummy

    ttk::label $ds9(info).fileTitle -text [msgcat::mc {File}]
    ttk::label $ds9(info).fileValue -relief groove \
	-textvariable infobox(filename)

    ttk::label $ds9(info).objTitle -text [msgcat::mc {Object}]
    ttk::label $ds9(info).objValue -relief groove \
	-textvariable infobox(object)

    ttk::entry $ds9(info).keyWord -textvariable view(info,keyvalue)
    ttk::label $ds9(info).keyValue -relief groove \
	-textvariable infobox(keyvalue)

    ttk::label $ds9(info).minTitle -text [msgcat::mc {Minimum}]
    ttk::label $ds9(info).minValue -relief groove \
	-textvariable infobox(min) -anchor center

    ttk::label $ds9(info).minXLabel -text {X}
    ttk::label $ds9(info).minXValue -relief groove \
	-textvariable infobox(min,x) -anchor center
    ttk::label $ds9(info).minYLabel -text {Y}
    ttk::label $ds9(info).minYValue -relief groove \
	-textvariable infobox(min,y) -anchor center

    ttk::label $ds9(info).maxTitle -text [msgcat::mc {Maximum}]
    ttk::label $ds9(info).maxValue -relief groove \
	-textvariable infobox(max) -anchor center

    ttk::label $ds9(info).maxXLabel -text {X}
    ttk::label $ds9(info).maxXValue -relief groove \
	-textvariable infobox(max,x) -anchor center
    ttk::label $ds9(info).maxYLabel -text {Y}
    ttk::label $ds9(info).maxYValue -relief groove \
	-textvariable infobox(max,y) -anchor center

    ttk::label $ds9(info).lowhighTitle \
	-text "[msgcat::mc {Low}] [msgcat::mc {High}]"
    ttk::label $ds9(info).lowValue -relief groove \
	-textvariable infobox(low) -anchor center
    ttk::label $ds9(info).highValue -relief groove \
	-textvariable infobox(high) -anchor center

    ttk::label $ds9(info).valueTitle -text [msgcat::mc {Value}]
    ttk::label $ds9(info).value -relief groove \
	-textvariable infobox(value) -anchor center

    ttk::label $ds9(info).valueRTitle -text [msgcat::mc {r}]
    ttk::label $ds9(info).valueR -relief groove \
	-textvariable infobox(value,red) -anchor center
    ttk::label $ds9(info).valueGTitle -text [msgcat::mc {g}]
    ttk::label $ds9(info).valueG -relief groove \
	-textvariable infobox(value,green) -anchor center
    ttk::label $ds9(info).valueBTitle -text [msgcat::mc {b}]
    ttk::label $ds9(info).valueB -relief groove \
	-textvariable infobox(value,blue) -anchor center

    ttk::label $ds9(info).bunitTitle -text [msgcat::mc {Units}]
    ttk::label $ds9(info).bunitValue -relief groove \
	-textvariable infobox(bunit)

    foreach ll {{} a b c d e f g h i j k l m n o p q r s t u v w x y z} {
	set infobox(wcs$ll,sys) "[msgcat::mc {WCS}] $ll"
	ttk::label $ds9(info).wcsLabel$ll -textvariable infobox(wcs$ll,sys)

	set infobox(wcs$ll,x,nm) [ttk::label $ds9(info).wcsXLabel$ll -text {}]
	ttk::label $ds9(info).wcsXValue$ll -relief groove \
	    -textvariable infobox(wcs$ll,x) -anchor center
	set infobox(wcs$ll,y,nm) [ttk::label $ds9(info).wcsYLabel$ll -text {}]
	ttk::label $ds9(info).wcsYValue$ll -relief groove \
	    -textvariable infobox(wcs$ll,y) -anchor center
	set infobox(wcs$ll,z,nm) [ttk::label $ds9(info).wcsZLabel$ll -text {}]
	ttk::label $ds9(info).wcsZValue$ll -relief groove \
	    -textvariable infobox(wcs$ll,z) -anchor center
    }

    ttk::label $ds9(info).detectorTitle -text [msgcat::mc {Detector}]
    ttk::label $ds9(info).detectorXLabel -text {X}
    ttk::label $ds9(info).detectorXValue -relief groove \
	-textvariable infobox(detector,x) -anchor center
    ttk::label $ds9(info).detectorYLabel -text {Y}
    ttk::label $ds9(info).detectorYValue -relief groove \
	-textvariable infobox(detector,y) -anchor center
    ttk::label $ds9(info).detectorZLabel -text {Z}
    ttk::label $ds9(info).detectorZValue -relief groove \
	-textvariable infobox(detector,z) -anchor center

    ttk::label $ds9(info).amplifierTitle -text [msgcat::mc {Amplifier}]
    ttk::label $ds9(info).amplifierXLabel -text {X}
    ttk::label $ds9(info).amplifierXValue -relief groove \
	-textvariable infobox(amplifier,x) -anchor center
    ttk::label $ds9(info).amplifierYLabel -text {Y}
    ttk::label $ds9(info).amplifierYValue -relief groove \
	-textvariable infobox(amplifier,y) -anchor center
    ttk::label $ds9(info).amplifierZLabel -text {Z}
    ttk::label $ds9(info).amplifierZValue -relief groove \
	-textvariable infobox(amplifier,z) -anchor center

    ttk::label $ds9(info).physicalTitle -text [msgcat::mc {Physical}]
    ttk::label $ds9(info).physicalXLabel -text {X}
    ttk::label $ds9(info).physicalXValue -relief groove \
	-textvariable infobox(physical,x) -anchor center
    ttk::label $ds9(info).physicalYLabel -text {Y}
    ttk::label $ds9(info).physicalYValue -relief groove \
	-textvariable infobox(physical,y) -anchor center
    ttk::label $ds9(info).physicalZLabel -text {Z}
    ttk::label $ds9(info).physicalZValue -relief groove \
	-textvariable infobox(physical,z) -anchor center

    ttk::label $ds9(info).imageTitle -text [msgcat::mc {Image}]
    ttk::label $ds9(info).imageXLabel -text {X}
    ttk::label $ds9(info).imageXValue -relief groove \
	-textvariable infobox(image,x) -anchor center
    ttk::label $ds9(info).imageYLabel -text {Y}
    ttk::label $ds9(info).imageYValue -relief groove \
	-textvariable infobox(image,y) -anchor center
    ttk::label $ds9(info).imageZLabel -text {Z}
    ttk::label $ds9(info).imageZValue -relief groove \
	-textvariable infobox(image,z) -anchor center

    ttk::label $ds9(info).frame -textvariable infobox(frame) \
	-width [expr [string length [msgcat::mc {Frame}]]+4]

    ttk::label $ds9(info).zoomtitle -text [msgcat::mc {x}]
    ttk::label $ds9(info).zoomValue -relief groove \
	-textvariable infobox(zoom) -anchor center

    ttk::label $ds9(info).angleTitle -text {°}
    ttk::label $ds9(info).angleValue -relief groove \
	-textvariable infobox(angle) -anchor center
}

proc LayoutFrameInfoBox {which} {
    global ds9
    global view

    global debug
    if {$debug(tcl,events)} {
	puts stderr "LayoutFrameInfoBox"
    }

    switch -- $which {
	base {
	    grid forget $ds9(info).valueRTitle $ds9(info).valueR \
		$ds9(info).valueGTitle $ds9(info).valueG \
		$ds9(info).valueBTitle $ds9(info).valueB

	    switch -- $view(layout) {
		vertical {
		    grid $ds9(info).value \
			-row $ds9(info,row,value) \
			-column 1 -padx 2 -sticky w
		}
		horizontal {
		    grid $ds9(info).value \
			-row $ds9(info,row,value) \
			-column 2 -padx 2 -sticky w
		}
	    }

	    foreach ll {{} a b c d e f g h i j k l m n o p q r s t u v w x y z} {
		grid forget $ds9(info).wcsZLabel$ll
		grid forget $ds9(info).wcsZValue$ll
	    }
	    grid forget $ds9(info).detectorZLabel $ds9(info).detectorZValue
	    grid forget $ds9(info).amplifierZLabel $ds9(info).amplifierZValue
	    grid forget $ds9(info).physicalZLabel $ds9(info).physicalZValue
	    grid forget $ds9(info).imageZLabel $ds9(info).imageZValue
	}
	rgb {
	    grid forget $ds9(info).value
	    switch $view(layout) {
		vertical {
		    grid $ds9(info).valueRTitle \
			-row $ds9(info,row,value,red) \
			-column 0 -sticky w
		    grid $ds9(info).valueR -row $ds9(info,row,value,red) \
			-column 1 -padx 2 -sticky w
		    grid $ds9(info).valueGTitle \
			-row $ds9(info,row,value,green) \
			-column 0 -sticky w
		    grid $ds9(info).valueG \
			-row $ds9(info,row,value,green) \
			-column 1 -padx 2 -sticky w
		    grid $ds9(info).valueBTitle \
			-row $ds9(info,row,value,blue) \
			-column 0 -sticky w
		    grid $ds9(info).valueB \
			-row $ds9(info,row,value,blue) \
			-column 1 -padx 2 -sticky w
		}
		horizontal {
		    grid $ds9(info).valueRTitle \
			-row $ds9(info,row,value,red) \
			-column 1 -sticky w
		    grid $ds9(info).valueR \
			-row $ds9(info,row,value,red) \
			-column 2 -padx 2 -sticky w
		    grid $ds9(info).valueGTitle \
			-row $ds9(info,row,value,green) \
			-column 3 -sticky w
		    grid $ds9(info).valueG \
			-row $ds9(info,row,value,green) \
			-column 4 -padx 2 -sticky w
		    grid $ds9(info).valueBTitle \
			-row $ds9(info,row,value,blue) \
			-column 5 -sticky w
		    grid $ds9(info).valueB \
			-row $ds9(info,row,value,blue) \
			-column 6 -padx 2 -sticky w
		}
	    }
	    foreach ll {{} a b c d e f g h i j k l m n o p q r s t u v w x y z} {
		grid forget $ds9(info).wcsZLabel$ll
		grid forget $ds9(info).wcsZValue$ll
	    }
	    grid forget $ds9(info).detectorZLabel $ds9(info).detectorZValue
	    grid forget $ds9(info).amplifierZLabel $ds9(info).amplifierZValue
	    grid forget $ds9(info).physicalZLabel $ds9(info).physicalZValue
	    grid forget $ds9(info).imageZLabel $ds9(info).imageZValue
	}
	3d {
	    grid forget $ds9(info).valueRTitle $ds9(info).valueR \
		$ds9(info).valueGTitle $ds9(info).valueG \
		$ds9(info).valueBTitle $ds9(info).valueB

	    switch -- $view(layout) {
		vertical {
		    grid $ds9(info).value -row $ds9(info,row,value) \
			-column 1 -padx 2 -sticky w

		    foreach ll {{} a b c d e f g h i j 
			k l m n o p q r s t u v w x y z} {
			if {$view(info,wcs$ll)} {
			    grid $ds9(info).wcsZLabel$ll \
				-row $ds9(info,row,wcs$ll) \
				-column 0 -sticky w
			    grid $ds9(info).wcsZValue$ll \
				-row $ds9(info,row,wcs$ll) \
				-column 1 -padx 2
			    incr row
			} else {
			    grid forget $ds9(info).wcsZLabel$ll
			    grid forget $ds9(info).wcsZValue$ll
			}
		    }

		    if {$view(info,detector)} {
			grid $ds9(info).detectorZLabel \
			    -row $ds9(info,row,detector) \
			    -column 0 -sticky w
			grid $ds9(info).detectorZValue \
			    -row $ds9(info,row,detector) \
			    -column 1 -padx 2
		    } else {
			grid forget $ds9(info).detectorZLabel \
			    $ds9(info).detectorZValue
		    }
		    if {$view(info,amplifier)} {
			grid $ds9(info).amplifierZLabel \
			    -row $ds9(info,row,amplifier) \
			    -column 0 -sticky w
			grid $ds9(info).amplifierZValue \
			    -row $ds9(info,row,amplifier) \
			    -column 1 -padx 2
		    } else {
			grid forget $ds9(info).amplifierZLabel \
			    $ds9(info).amplifierZValue
		    }
		    if {$view(info,physical)} {
			grid $ds9(info).physicalZLabel \
			    -row $ds9(info,row,physical) \
			    -column 0 -sticky w
			grid $ds9(info).physicalZValue \
			    -row $ds9(info,row,physical) \
			    -column 1 -padx 2
		    } else {
			grid forget $ds9(info).physicalZLabel \
			    $ds9(info).physicalZValue
		    }
		    if {$view(info,image)} {
			grid $ds9(info).imageZLabel \
			    -row $ds9(info,row,image) \
			    -column 0 -sticky w
			grid $ds9(info).imageZValue \
			    -row $ds9(info,row,image) \
			    -column 1 -padx 2
		    } else {
			grid forget $ds9(info).imageZLabel \
			    $ds9(info).imageZValue
		    }
		}
		horizontal {
		    grid $ds9(info).value -row $ds9(info,row,value) \
			-column 2 -padx 2 -sticky w

		    foreach ll {{} a b c d e f g h i j 
			k l m n o p q r s t u v w x y z} {
			if {$view(info,wcs$ll)} {
			    grid $ds9(info).wcsZLabel$ll \
				-row $ds9(info,row,wcs$ll) \
				-column 5 -sticky w
			    grid $ds9(info).wcsZValue$ll \
				-row $ds9(info,row,wcs$ll) \
				-column 6 -padx 2
			    incr row
			} else {
			    grid forget $ds9(info).wcsZLabel$ll
			    grid forget $ds9(info).wcsZValue$ll
			}
		    }

		    if {$view(info,detector)} {
			grid $ds9(info).detectorZLabel \
			    -row $ds9(info,row,detector) \
			    -column 5 -sticky w
			grid $ds9(info).detectorZValue \
			    -row $ds9(info,row,detector) \
			    -column 6 -padx 2
		    } else {
			grid forget $ds9(info).detectorZLabel \
			    $ds9(info).detectorZValue
		    }
		    if {$view(info,amplifier)} {
			grid $ds9(info).amplifierZLabel \
			    -row $ds9(info,row,amplifier) \
			    -column 5 -sticky w
			grid $ds9(info).amplifierZValue \
			    -row $ds9(info,row,amplifier) \
			    -column 6 -padx 2
		    } else {
			grid forget $ds9(info).amplifierZLabel \
			    $ds9(info).amplifierZValue
		    }
		    if {$view(info,physical)} {
			grid $ds9(info).physicalZLabel \
			    -row $ds9(info,row,physical) \
			    -column 5 -sticky w
			grid $ds9(info).physicalZValue \
			    -row $ds9(info,row,physical) \
			    -column 6 -padx 2
		    } else {
			grid forget $ds9(info).physicalZLabel \
			    $ds9(info).physicalZValue
		    }
		    if {$view(info,image)} {
			grid $ds9(info).imageZLabel \
			    -row $ds9(info,row,image) \
			    -column 5 -sticky w
			grid $ds9(info).imageZValue \
			    -row $ds9(info,row,image) \
			    -column 6 -padx 2
		    } else {
			grid forget $ds9(info).imageZLabel \
			    $ds9(info).imageZValue
		    }
		}
	    }
	}
    }
}

proc EnterInfoBox {which} {
    global infobox

    global debug
    if {$debug(tcl,events)} {
	puts stderr "EnterInfoBox $which"
    }

    LayoutFrameInfoBox [$which get type]
    LayoutWCSInfoBox $which

    set infobox(frame) "[msgcat::mc {Frame}] [string range $which 5 end]"
    set infobox(angle) [$which get rotate]

    set z [$which get zoom]
    set z1 [lindex $z 0]
    set z2 [lindex $z 1]
    if {$z1 != $z2} {
	set infobox(zoom) "$z1  $z2"
    } else {
	set infobox(zoom) $z1
    }
}

proc LeaveInfoBox {} {
    global current

    global debug
    if {$debug(tcl,events)} {
	puts stderr "LeaveInfoBox"
    }

    ClearInfoBoxCoords
}

proc ClearInfoBox {} {
    global infobox

    global debug
    if {$debug(tcl,info)} {
	puts stderr "ClearInfoBox"
    }

    set infobox(filename) {}
    set infobox(object) {}
    set infobox(keyvalue) {}
    set infobox(bunit) {}
    set infobox(min) {}
    set infobox(min,x) {}
    set infobox(min,y) {}
    set infobox(max) {}
    set infobox(max,x) {}
    set infobox(max,y) {}
    set infobox(low) {}
    set infobox(high) {}

    ClearInfoBoxCoords

    set infobox(frame) [msgcat::mc {Frame}]
    set infobox(zoom) {}
    set infobox(angle) {}
}

proc ClearInfoBoxCoords {} {
    global infobox

    global debug
    if {$debug(tcl,info)} {
	puts stderr "ClearInfoBoxCoords"
    }

    set infobox(value) {}
    set infobox(value,red) {}
    set infobox(value,green) {}
    set infobox(value,blue) {}

    foreach ll {{} a b c d e f g h i j k l m n o p q r s t u v w x y z} {
	set infobox(wcs$ll,sys) "WCS $ll"
	$infobox(wcs$ll,x,nm) configure -text {}
	$infobox(wcs$ll,y,nm) configure -text {}
	$infobox(wcs$ll,z,nm) configure -text {}
	set infobox(wcs$ll,x) {}
	set infobox(wcs$ll,y) {}
	set infobox(wcs$ll,z) {}
    }

    set infobox(detector,x) {}
    set infobox(detector,y) {}
    set infobox(detector,z) {}
    set infobox(amplifier,x) {}
    set infobox(amplifier,y) {}
    set infobox(amplifier,z) {}
    set infobox(physical,x) {}
    set infobox(physical,y) {}
    set infobox(physical,z) {}
    set infobox(image,x) {}
    set infobox(image,y) {}
    set infobox(image,z) {}
}

proc RefreshInfoBox {which} {
    global current

    global debug
    if {$debug(tcl,info)} {
	puts stderr "RefreshInfoBox $which"
    }

    if {$which != {}} {
	switch -- $current(mode) {
	    crosshair -
	    analysis {
		set coord [$which get crosshair canvas]
		set x [lindex $coord 0]
		set y [lindex $coord 1]
		EnterInfoBox $which
		UpdateInfoBox $which $x $y canvas
	    }
	    none -
	    pointer -
	    region -
	    colorbar -
	    pan -
	    zoom -
	    rotate -
	    crop -
	    catalog -
	    examine -
	    iexam {
		EnterInfoBox $which
		UpdateInfoBoxFrame $which
	    }
	}
    }
    return
}

proc UpdateInfoBoxFrame {which} {
    global debug
    if {$debug(tcl,info)} {
	puts stderr "UpdateInfoBoxFrame $which"
    }

    global infobox
    $which get info infobox
}

proc UpdateInfoBox {which x y sys} {
    global debug
    if {$debug(tcl,info)} {
	puts stderr "UpdateInfoBox $which $sys"
    }

    global ds9
    global pds9
    global infobox
    global view

    $which get info $sys $x $y infobox
    set infobox(bunit) [$which get fits header keyword BUNIT]
    if {$view(info,keyvalue) != ""} {
	set infobox(keyvalue) \
	    [$which get fits header keyword \'$view(info,keyvalue)\']
    } else {
	set infobox(keyvalue) {}
    }

    # windows fonts can be larger, causing a layout event
    switch $ds9(wm) {
	x11 -
	aqua {set fsz $pds9(font,size)}
	win32 {set fsz [expr $pds9(font,size)-3]}
    }

    foreach ll {{} a b c d e f g h i j k l m n o p q r s t u v w x y z} {
	if {$view(info,wcs$ll)} {
	    if {![$which has fits]} {
		set infobox(wcs$ll,sys) "WCS $ll"
		$infobox(wcs$ll,x,nm) configure -text {}
		$infobox(wcs$ll,y,nm) configure -text {}
	    } elseif {[$which has wcs equatorial wcs$ll]} {
		switch -- $infobox(wcs$ll,sys) {
		    fk4 -
		    fk5 -
		    icrs {
			$infobox(wcs$ll,x,nm) configure -text "\u03b1" \
			    -font "$ds9(times) $fsz"
			$infobox(wcs$ll,y,nm) configure -text "\u03b4" \
			    -font "$ds9(times) $fsz"
		    }
		    galactic {
			$infobox(wcs$ll,x,nm) configure -text {l} \
			    -font "{$ds9(times)} $pds9(font,size) normal italic"
			$infobox(wcs$ll,y,nm) configure -text {b} \
			    -font "{$ds9(times)} $pds9(font,size) normal italic"
		    }
		    ecliptic {
			$infobox(wcs$ll,x,nm) configure -text "\u03bb" \
			    -font "$ds9(times) $fsz"
			$infobox(wcs$ll,y,nm) configure -text "\u03b2" \
			    -font "$ds9(times) $fsz"
		    }
		}
	    } elseif {[$which has wcs celestrial wcs$ll]} {
		if {$infobox(wcs$ll,sys) == {}} {
		    set infobox(wcs$ll,sys) "WCS $ll"
		}
		$infobox(wcs$ll,x,nm) configure -text {l} \
		    -font "{$ds9(times)} $pds9(font,size) normal italic"
		$infobox(wcs$ll,y,nm) configure -text {b} \
		    -font "{$ds9(times)} $pds9(font,size) normal italic"
	    } else {
		if {$infobox(wcs$ll,sys) == {}} {
		    set infobox(wcs$ll,sys) "WCS $ll"
		}
		$infobox(wcs$ll,x,nm) configure -text {x} \
		    -font "{$ds9(times)} $pds9(font,size) normal italic"
		$infobox(wcs$ll,y,nm) configure -text {y} \
		    -font "{$ds9(times)} $pds9(font,size) normal italic"
	    }
	}
    }
}

proc LayoutInfoPanel {} {
    global ds9
    global view

    # reset
    grid columnconfigure $ds9(info) 7 -weight 0
    if {$ds9(row) > -1} {
	grid rowconfigure $ds9(info) $ds9(row) -weight 0
	set ds9(row) -1
    }

    # layout
    switch $view(layout) {
	vertical {LayoutInfoPanelVert}
	horizontal {LayoutInfoPanelHorz}
    }
}

proc LayoutInfoPanelHorz {} {
    global ds9
    global view

    set ww 12
    set row 0
    # also adjust layout.tcl CanvasDef
    switch $ds9(wm) {
	x11 {set xx 42}
	aqua {set xx 40}
	win32 {set xx 40}
    }

    grid columnconfigure $ds9(info) 7 -weight 1

    # filename
    if {$view(info,filename)} {
	$ds9(info).fileValue configure -width $xx

	grid $ds9(info).fileTitle -row $row -column 0 -sticky w
	grid $ds9(info).fileValue -row $row -column 2 -padx 2 \
	    -sticky ew -columnspan 6
	incr row
    } else {
	grid forget $ds9(info).fileTitle
	grid forget $ds9(info).fileValue
    }

    # object
    if {$view(info,object)} {
	$ds9(info).objValue configure -width $xx

	grid $ds9(info).objTitle -row $row -column 0 -sticky w
	grid $ds9(info).objValue -row $row -column 2 -padx 2 \
	    -sticky ew -columnspan 6
	incr row
    } else {
	grid forget $ds9(info).objTitle
	grid forget $ds9(info).objValue
    }

    # keyword
    if {$view(info,keyword)} {
	$ds9(info).keyWord configure -width $ww
	$ds9(info).keyValue configure -width $xx

	grid $ds9(info).keyWord -row $row -column 0 -sticky w
	grid $ds9(info).keyValue -row $row -column 2 -padx 2 \
	    -sticky w  -columnspan 6
	incr row
    } else {
	grid forget $ds9(info).keyWord
	grid forget $ds9(info).keyValue
    }

    # minmax
    if {$view(info,minmax)} {
	$ds9(info).minValue configure -width $ww
	$ds9(info).minXValue configure -width $ww
	$ds9(info).minYValue configure -width $ww

	grid $ds9(info).minTitle -row $row -column 0 -sticky w
	grid $ds9(info).minXLabel -row $row -column 1 -padx 2 -sticky w
	grid $ds9(info).minXValue -row $row -column 2 -padx 2 -sticky w
	grid $ds9(info).minYLabel -row $row -column 3 -padx 2 -sticky w
	grid $ds9(info).minYValue -row $row -column 4 -padx 2 -sticky w
	grid $ds9(info).minValue -row $row -column 6 -padx 2 -sticky w
	incr row

	$ds9(info).maxValue configure -width $ww
	$ds9(info).maxXValue configure -width $ww
	$ds9(info).maxYValue configure -width $ww

	grid $ds9(info).maxTitle -row $row -column 0 -sticky w
	grid $ds9(info).maxXLabel -row $row -column 1 -padx 2 -sticky w
	grid $ds9(info).maxXValue -row $row -column 2 -padx 2 -sticky w
	grid $ds9(info).maxYLabel -row $row -column 3 -padx 2 -sticky w
	grid $ds9(info).maxYValue -row $row -column 4 -padx 2 -sticky w
	grid $ds9(info).maxValue -row $row -column 6 -padx 2 -sticky w
	incr row
    } else {
	grid forget $ds9(info).minTitle
	grid forget $ds9(info).minValue
	grid forget $ds9(info).minXLabel
	grid forget $ds9(info).minXValue
	grid forget $ds9(info).minYLabel
	grid forget $ds9(info).minYValue

	grid forget $ds9(info).maxTitle
	grid forget $ds9(info).maxValue
	grid forget $ds9(info).maxXLabel
	grid forget $ds9(info).maxXValue
	grid forget $ds9(info).maxYLabel
	grid forget $ds9(info).maxYValue
    }

    # lowhigh
    if {$view(info,lowhigh)} {
	$ds9(info).lowValue configure -width $ww
	$ds9(info).highValue configure -width $ww

	grid $ds9(info).lowhighTitle  -row $row -column 0 -sticky w
	grid $ds9(info).lowValue  -row $row -column 2 -padx 2 -sticky w
	grid $ds9(info).highValue -row $row -column 4 -padx 2 -sticky w
	incr row
    } else {
	grid forget $ds9(info).lowhighTitle
	grid forget $ds9(info).lowValue
	grid forget $ds9(info).highValue
    }

    # value
    $ds9(info).value configure -width $ww
    $ds9(info).valueR configure -width $ww
    $ds9(info).valueG configure -width $ww
    $ds9(info).valueB configure -width $ww

    grid $ds9(info).valueTitle -row $row -column 0 -sticky w
    set ds9(info,row,value) $row
    set ds9(info,row,value,red) $row
    set ds9(info,row,value,green) $row
    set ds9(info,row,value,blue) $row
    incr row
    LayoutFrameInfoBox base

    # unit
    if {$view(info,bunit)} {
	$ds9(info).bunitValue configure -width $ww

	grid $ds9(info).bunitTitle -row $row -column 0 -sticky w
	grid $ds9(info).bunitValue -row $row -column 2 -padx 2 -sticky w
	incr row
    } else {
	grid forget $ds9(info).bunitTitle
	grid forget $ds9(info).bunitValue
    }

    # wcs
    foreach ll {{} a b c d e f g h i j k l m n o p q r s t u v w x y z} {
	$ds9(info).wcsLabel$ll  configure -width $ww
	$ds9(info).wcsXValue$ll configure -width $ww
	$ds9(info).wcsYValue$ll configure -width $ww
	$ds9(info).wcsZValue$ll configure -width $ww

	if {$view(info,wcs$ll)} {
	    grid $ds9(info).wcsLabel$ll  -row $row -column 0 -sticky w
	    grid $ds9(info).wcsXLabel$ll -row $row -column 1 -sticky w
	    grid $ds9(info).wcsXValue$ll -row $row -column 2 -padx 2
	    grid $ds9(info).wcsYLabel$ll -row $row -column 3 -sticky w
	    grid $ds9(info).wcsYValue$ll -row $row -column 4 -padx 2
	    set ds9(info,row,wcs$ll) $row
	    incr row
	} else {
	    grid forget $ds9(info).wcsLabel$ll
	    grid forget $ds9(info).wcsXLabel$ll
	    grid forget $ds9(info).wcsXValue$ll
	    grid forget $ds9(info).wcsYLabel$ll
	    grid forget $ds9(info).wcsYValue$ll
	}
    }

    # detector
    if {$view(info,detector)} {
	$ds9(info).detectorXValue configure -width $ww
	$ds9(info).detectorYValue configure -width $ww
	$ds9(info).detectorZValue configure -width $ww

	grid $ds9(info).detectorTitle  -row $row -column 0 -sticky w
	grid $ds9(info).detectorXLabel -row $row -column 1 -sticky w
	grid $ds9(info).detectorXValue -row $row -column 2 -padx 2
	grid $ds9(info).detectorYLabel -row $row -column 3 -sticky w
	grid $ds9(info).detectorYValue -row $row -column 4 -padx 2
	set ds9(info,row,detector) $row
	incr row
    } else {
	grid forget $ds9(info).detectorTitle
	grid forget $ds9(info).detectorXLabel
	grid forget $ds9(info).detectorXValue
	grid forget $ds9(info).detectorYLabel
	grid forget $ds9(info).detectorYValue
    }

    # amplifier
    if {$view(info,amplifier)} {
	$ds9(info).amplifierXValue configure -width $ww
	$ds9(info).amplifierYValue configure -width $ww
	$ds9(info).amplifierZValue configure -width $ww

	grid $ds9(info).amplifierTitle  -row $row -column 0 -sticky w
	grid $ds9(info).amplifierXLabel -row $row -column 1 -sticky w
	grid $ds9(info).amplifierXValue -row $row -column 2 -padx 2
	grid $ds9(info).amplifierYLabel -row $row -column 3 -sticky w
	grid $ds9(info).amplifierYValue -row $row -column 4 -padx 2
	set ds9(info,row,amplifier) $row
	incr row
    } else {
	grid forget $ds9(info).amplifierTitle
	grid forget $ds9(info).amplifierXLabel
	grid forget $ds9(info).amplifierXValue
	grid forget $ds9(info).amplifierYLabel
	grid forget $ds9(info).amplifierYValue
    }

    # physical
    if {$view(info,physical)} {
	$ds9(info).physicalXValue configure -width $ww
	$ds9(info).physicalYValue configure -width $ww 
	$ds9(info).physicalZValue configure -width $ww 

	grid $ds9(info).physicalTitle  -row $row -column 0 -sticky w
	grid $ds9(info).physicalXLabel -row $row -column 1 -sticky w
	grid $ds9(info).physicalXValue -row $row -column 2 -padx 2
	grid $ds9(info).physicalYLabel -row $row -column 3 -sticky w
	grid $ds9(info).physicalYValue -row $row -column 4 -padx 2
	set ds9(info,row,physical) $row
	incr row
    } else {
	grid forget $ds9(info).physicalTitle
	grid forget $ds9(info).physicalXLabel
	grid forget $ds9(info).physicalXValue
	grid forget $ds9(info).physicalYLabel
	grid forget $ds9(info).physicalYValue
    }

    # image
    if {$view(info,image)} {
	$ds9(info).imageXValue configure -width $ww 
	$ds9(info).imageYValue configure -width $ww
	$ds9(info).imageZValue configure -width $ww

	grid $ds9(info).imageTitle  -row $row -column 0 -sticky w
	grid $ds9(info).imageXLabel -row $row -column 1 -sticky w
	grid $ds9(info).imageXValue -row $row -column 2 -padx 2
	grid $ds9(info).imageYLabel -row $row -column 3 -sticky w
	grid $ds9(info).imageYValue -row $row -column 4 -padx 2
	set ds9(info,row,image) $row
	incr row
    } else {
	grid forget $ds9(info).imageTitle
	grid forget $ds9(info).imageXLabel
	grid forget $ds9(info).imageXValue
	grid forget $ds9(info).imageYLabel
	grid forget $ds9(info).imageYValue
    }

    # frame, zoom, angle
    if {$view(info,frame)} {
	$ds9(info).zoomValue configure -width $ww
	$ds9(info).angleValue configure -width $ww

	grid $ds9(info).frame      -row $row -column 0 -sticky w
	grid $ds9(info).zoomtitle  -row $row -column 1 -sticky w
	grid $ds9(info).zoomValue  -row $row -column 2 -padx 2 -sticky w
	grid $ds9(info).angleValue -row $row -column 4 -padx 2 -sticky w
	grid $ds9(info).angleTitle -row $row -column 5 -sticky w
	incr row
    } else {
	grid forget $ds9(info).frame
	grid forget $ds9(info).zoomtitle
	grid forget $ds9(info).zoomValue
	grid forget $ds9(info).angleTitle
	grid forget $ds9(info).angleValue
    }

    # dummy
    grid forget $ds9(info).dummy
}

proc LayoutInfoPanelVert {} {
    global ds9
    global view

    set ww 13
    set row 0

    # filename
    if {$view(info,filename)} {
	$ds9(info).fileValue configure -width $ww

	grid $ds9(info).fileTitle -row $row -column 1 -sticky w
	incr row
	grid $ds9(info).fileValue -row $row -column 1 -padx 2 -sticky w
	incr row
    } else {
	grid forget $ds9(info).fileTitle
	grid forget $ds9(info).fileValue
    }

    # object
    if {$view(info,object)} {
	$ds9(info).objValue configure -width $ww

	grid $ds9(info).objTitle -row $row -column 1 -sticky w
	incr row
	grid $ds9(info).objValue -row $row -column 1 -padx 2 -sticky w
	incr row
    } else {
	grid forget $ds9(info).objTitle
	grid forget $ds9(info).objValue
    }

    # keyword
    if {$view(info,keyword)} {
	$ds9(info).keyWord configure -width $ww
	$ds9(info).keyValue configure -width $ww

	grid $ds9(info).keyWord -row $row -column 1 -sticky w
	incr row
	grid $ds9(info).keyValue -row $row -column 1 -padx 2 -sticky w
	incr row
    } else {
	grid forget $ds9(info).keyWord
	grid forget $ds9(info).keyValue
    }

    # minmax
    if {$view(info,minmax)} {
	$ds9(info).minValue configure -width $ww
	$ds9(info).minXValue configure -width $ww
	$ds9(info).minYValue configure -width $ww

	grid $ds9(info).minTitle -row $row -column 1 -sticky w
	incr row
	grid $ds9(info).minXLabel -row $row -column 0 -sticky e
	grid $ds9(info).minXValue -row $row -column 1 -padx 2 -sticky w
	incr row
	grid $ds9(info).minYLabel -row $row -column 0 -sticky e
	grid $ds9(info).minYValue -row $row -column 1 -padx 2 -sticky w
	incr row
	grid $ds9(info).minValue -row $row -column 1 -padx 2 -sticky w
	incr row

	$ds9(info).maxXValue configure -width $ww
	$ds9(info).maxValue configure -width $ww
	$ds9(info).maxYValue configure -width $ww

	grid $ds9(info).maxTitle -row $row -column 1 -sticky w
	incr row
	grid $ds9(info).maxXLabel -row $row -column 0 -sticky e
	grid $ds9(info).maxXValue -row $row -column 1 -padx 2 -sticky w
	incr row
	grid $ds9(info).maxYLabel -row $row -column 0 -sticky e
	grid $ds9(info).maxYValue -row $row -column 1 -padx 2 -sticky w
	incr row
	grid $ds9(info).maxValue -row $row -column 1 -padx 2 -sticky w
	incr row
    } else {
	grid forget $ds9(info).minTitle
	grid forget $ds9(info).minValue
	grid forget $ds9(info).minXValue
	grid forget $ds9(info).minYValue

	grid forget $ds9(info).maxTitle
	grid forget $ds9(info).maxValue
	grid forget $ds9(info).maxXValue
	grid forget $ds9(info).maxYValue
    }

    # lowhigh
    if {$view(info,lowhigh)} {
	$ds9(info).lowValue configure -width $ww
	$ds9(info).highValue configure -width $ww

	grid $ds9(info).lowhighTitle -row $row -column 1 -sticky w
	incr row
	grid $ds9(info).lowValue -row $row -column 1 -padx 2 -sticky w
	incr row
	grid $ds9(info).highValue -row $row -column 1 -padx 2 -sticky w
	incr row
    } else {
	grid forget $ds9(info).lowhighTitle
	grid forget $ds9(info).lowValue
	grid forget $ds9(info).highValue
    }

    # value
    $ds9(info).value configure -width $ww
    $ds9(info).valueR configure -width $ww
    $ds9(info).valueG configure -width $ww
    $ds9(info).valueB configure -width $ww

    grid $ds9(info).valueTitle -row $row -column 1 -sticky w
    incr row
    set ds9(info,row,value) $row
    set ds9(info,row,value,red) $row
    incr row
    set ds9(info,row,value,green) $row
    incr row
    set ds9(info,row,value,blue) $row
    incr row
    LayoutFrameInfoBox base

    # units
    if {$view(info,bunit)} {
	$ds9(info).bunitValue configure -width $ww

	grid $ds9(info).bunitTitle -row $row -column 1 -sticky w
	incr row
	grid $ds9(info).bunitValue -row $row -column 1 -padx 2 -sticky w
	incr row
    } else {
	grid forget $ds9(info).bunitTitle
	grid forget $ds9(info).bunitValue
    }

    # wcs
    foreach ll {{} a b c d e f g h i j k l m n o p q r s t u v w x y z} {
	$ds9(info).wcsLabel$ll  configure -width $ww
	$ds9(info).wcsXValue$ll configure -width $ww
	$ds9(info).wcsYValue$ll configure -width $ww
	$ds9(info).wcsZValue$ll configure -width $ww

	if {$view(info,wcs$ll)} {
	    grid $ds9(info).wcsLabel$ll  -row $row -column 1 -sticky ew
	    incr row
	    grid $ds9(info).wcsXLabel$ll -row $row -column 0 -sticky e
	    grid $ds9(info).wcsXValue$ll -row $row -column 1 -padx 2
	    incr row
	    grid $ds9(info).wcsYLabel$ll -row $row -column 0 -sticky e
	    grid $ds9(info).wcsYValue$ll -row $row -column 1 -padx 2
	    incr row
	    set ds9(info,row,wcs$ll) $row
	    incr row
	} else {
	    grid forget $ds9(info).wcsLabel$ll
	    grid forget $ds9(info).wcsXLabel$ll
	    grid forget $ds9(info).wcsXValue$ll
	    grid forget $ds9(info).wcsYLabel$ll
	    grid forget $ds9(info).wcsYValue$ll
	}
    }

    # detector
    if {$view(info,detector)} {
	$ds9(info).detectorXValue configure -width $ww
	$ds9(info).detectorYValue configure -width $ww
	$ds9(info).detectorZValue configure -width $ww

	grid $ds9(info).detectorTitle  -row $row -column 1 -sticky ew
	incr row
	grid $ds9(info).detectorXLabel -row $row -column 0 -sticky e
	grid $ds9(info).detectorXValue -row $row -column 1 -padx 2
	incr row
	grid $ds9(info).detectorYLabel -row $row -column 0 -sticky e
	grid $ds9(info).detectorYValue -row $row -column 1 -padx 2
	incr row
	set ds9(info,row,detector) $row
	incr row
    } else {
	grid forget $ds9(info).detectorTitle
	grid forget $ds9(info).detectorXLabel
	grid forget $ds9(info).detectorXValue
	grid forget $ds9(info).detectorYLabel
	grid forget $ds9(info).detectorYValue
    }

    # amplifier
    if {$view(info,amplifier)} {
	$ds9(info).amplifierXValue configure -width $ww
	$ds9(info).amplifierYValue configure -width $ww
	$ds9(info).amplifierZValue configure -width $ww

	grid $ds9(info).amplifierTitle  -row $row -column 1 -sticky ew
	incr row
	grid $ds9(info).amplifierXLabel -row $row -column 0 -sticky e
	grid $ds9(info).amplifierXValue -row $row -column 1 -padx 2
	incr row
	grid $ds9(info).amplifierYLabel -row $row -column 0 -sticky e
	grid $ds9(info).amplifierYValue -row $row -column 1 -padx 2
	incr row
	set ds9(info,row,amplifier) $row
	incr row
    } else {
	grid forget $ds9(info).amplifierTitle
	grid forget $ds9(info).amplifierXLabel
	grid forget $ds9(info).amplifierXValue
	grid forget $ds9(info).amplifierYLabel
	grid forget $ds9(info).amplifierYValue
    }

    # physical
    if {$view(info,physical)} {
	$ds9(info).physicalXValue configure -width $ww
	$ds9(info).physicalYValue configure -width $ww 
	$ds9(info).physicalZValue configure -width $ww 

	grid $ds9(info).physicalTitle  -row $row -column 1 -sticky ew
	incr row
	grid $ds9(info).physicalXLabel -row $row -column 0 -sticky e
	grid $ds9(info).physicalXValue -row $row -column 1 -padx 2
	incr row
	grid $ds9(info).physicalYLabel -row $row -column 0 -sticky e
	grid $ds9(info).physicalYValue -row $row -column 1 -padx 2
	incr row
	set ds9(info,row,physical) $row
	incr row
    } else {
	grid forget $ds9(info).physicalTitle
	grid forget $ds9(info).physicalXLabel
	grid forget $ds9(info).physicalXValue
	grid forget $ds9(info).physicalYLabel
	grid forget $ds9(info).physicalYValue
    }

    # image
    if {$view(info,image)} {
	$ds9(info).imageXValue configure -width $ww 
	$ds9(info).imageYValue configure -width $ww
	$ds9(info).imageZValue configure -width $ww

	grid $ds9(info).imageTitle  -row $row -column 1 -sticky ew
	incr row
	grid $ds9(info).imageXLabel -row $row -column 0 -sticky e
	grid $ds9(info).imageXValue -row $row -column 1 -padx 2
	incr row
	grid $ds9(info).imageYLabel -row $row -column 0 -sticky e
	grid $ds9(info).imageYValue -row $row -column 1 -padx 2
	incr row
	set ds9(info,row,image) $row
	incr row
    } else {
	grid forget $ds9(info).imageTitle
	grid forget $ds9(info).imageXLabel
	grid forget $ds9(info).imageXValue
	grid forget $ds9(info).imageYLabel
	grid forget $ds9(info).imageYValue
    }

    # frame, zoom, angle
    if {$view(info,frame)} {
	$ds9(info).zoomValue configure -width $ww
	$ds9(info).angleValue configure -width $ww

	grid $ds9(info).frame -row $row -column 1 -sticky ew
	incr row
	grid $ds9(info).zoomtitle -row $row -column 0 -sticky e
	grid $ds9(info).zoomValue -row $row -column 1 -padx 2
	incr row
	grid $ds9(info).angleTitle -row $row -column 0 -sticky e
	grid $ds9(info).angleValue -row $row -column 1 -padx 2
	incr row
    } else {
	grid forget $ds9(info).frame
	grid forget $ds9(info).zoomtitle
	grid forget $ds9(info).zoomValue
	grid forget $ds9(info).angleTitle
	grid forget $ds9(info).angleValue
    }

    # dummy
    global ds9
    set ds9(row) $row

    grid $ds9(info).dummy -row $row -column 1
    grid rowconfigure $ds9(info) $row -weight 1
}
