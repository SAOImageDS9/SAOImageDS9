#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

# Menus

proc RegionMainMenu {} {
    global ds9
    global marker

    ThemeMenu $ds9(mb).region
    $ds9(mb).region add command -label "[msgcat::mc {Get Information}]..." \
	-command MarkerInfo
    $ds9(mb).region add separator
    $ds9(mb).region add cascade -label [msgcat::mc {Shape}] \
	-menu $ds9(mb).region.shape
    $ds9(mb).region add cascade -label [msgcat::mc {Composite Region}] \
	-menu $ds9(mb).region.composite
    $ds9(mb).region add cascade -label [msgcat::mc {Instrument FOV}] \
	-menu $ds9(mb).region.fov
    $ds9(mb).region add cascade -label [msgcat::mc {Template}] \
	-menu $ds9(mb).region.template
    $ds9(mb).region add separator
    $ds9(mb).region add cascade -label [msgcat::mc {Color}] \
	-menu $ds9(mb).region.color
    $ds9(mb).region add cascade -label [msgcat::mc {Width}] \
	-menu $ds9(mb).region.width
    $ds9(mb).region add cascade -label [msgcat::mc {Properties}] \
	-menu $ds9(mb).region.properties
    $ds9(mb).region add cascade -label [msgcat::mc {Font}] \
	-menu $ds9(mb).region.font
    $ds9(mb).region add separator
    $ds9(mb).region add command -label [msgcat::mc {Centroid}] \
	-command MarkerCentroid
    $ds9(mb).region add command -label [msgcat::mc {Move to Front}] \
	-command MarkerFront
    $ds9(mb).region add command -label [msgcat::mc {Move to Back}] \
	-command MarkerBack
    $ds9(mb).region add separator
    $ds9(mb).region add command -label [msgcat::mc {New Group}] \
	-command GroupCreate
    $ds9(mb).region add command -label "[msgcat::mc {Groups}]..." \
	-command GroupDialog
    $ds9(mb).region add separator
    $ds9(mb).region add command -label [msgcat::mc {Select All}] \
	-command MarkerSelectAll -accelerator "${ds9(ctrl)}A"
    $ds9(mb).region add command -label [msgcat::mc {Select None}] \
	-command MarkerUnselectAll -accelerator "${ds9(shiftctrl)}A"
    $ds9(mb).region add command -label [msgcat::mc {Invert Selection}] \
	-command MarkerSelectInvert
    $ds9(mb).region add separator
    $ds9(mb).region add command -label [msgcat::mc {Save Selected Regions}] \
	-command [list MarkerSave select]
    $ds9(mb).region add command -label [msgcat::mc {List Selected Regions}] \
	-command [list MarkerList select]
    $ds9(mb).region add command -label [msgcat::mc {Delete Selected Regions}] \
	-command [list MarkerDelete select]
    $ds9(mb).region add separator
    $ds9(mb).region add command -label "[msgcat::mc {Open Regions}]..." \
	-command MarkerLoad
    $ds9(mb).region add command -label "[msgcat::mc {Save Regions}]..." \
	-command [list MarkerSave {}]
    $ds9(mb).region add command -label "[msgcat::mc {List Regions}]..." \
	-command [list MarkerList {}]
    $ds9(mb).region add command -label [msgcat::mc {Delete Regions}] \
	-command [list MarkerDelete {}]
    $ds9(mb).region add separator
    $ds9(mb).region add command \
	-label "[msgcat::mc {Delete and Open Regions}]..." \
	-command MarkerDeleteLoad
    $ds9(mb).region add separator
    $ds9(mb).region add cascade -label [msgcat::mc {Region Parameters}] \
	-menu $ds9(mb).region.params

    ThemeMenu $ds9(mb).region.shape
    $ds9(mb).region.shape add radiobutton -label [msgcat::mc {Circle}] \
	-variable marker(shape) -value circle
    $ds9(mb).region.shape add radiobutton -label [msgcat::mc {Ellipse}] \
	-variable marker(shape) -value ellipse
    $ds9(mb).region.shape add radiobutton -label [msgcat::mc {Box}] \
	-variable marker(shape) -value box
    $ds9(mb).region.shape add radiobutton -label [msgcat::mc {Polygon}] \
	-variable marker(shape) -value polygon
    $ds9(mb).region.shape add separator
    $ds9(mb).region.shape add radiobutton -label [msgcat::mc {Line}] \
	-variable marker(shape) -value line
    $ds9(mb).region.shape add radiobutton -label [msgcat::mc {Vector}] \
	-variable marker(shape) -value vector
    $ds9(mb).region.shape add radiobutton -label [msgcat::mc {Projection}] \
	-variable marker(shape) -value projection
    $ds9(mb).region.shape add radiobutton -label [msgcat::mc {Segment}] \
	-variable marker(shape) -value segment
    $ds9(mb).region.shape add separator
    $ds9(mb).region.shape add radiobutton -label [msgcat::mc {Text}] \
	-variable marker(shape) -value text
    $ds9(mb).region.shape add cascade -label [msgcat::mc {Point}] \
	-menu $ds9(mb).region.shape.point
    $ds9(mb).region.shape add separator
    $ds9(mb).region.shape add radiobutton -label [msgcat::mc {Ruler}] \
	-variable marker(shape) -value ruler
    $ds9(mb).region.shape add radiobutton -label [msgcat::mc {Compass}] \
	-variable marker(shape) -value compass
    $ds9(mb).region.shape add separator
    $ds9(mb).region.shape add radiobutton -label [msgcat::mc {Annulus}] \
	-variable marker(shape) -value annulus
    $ds9(mb).region.shape add radiobutton \
	-label [msgcat::mc {Elliptical Annulus}] \
	-variable marker(shape) -value ellipseannulus
    $ds9(mb).region.shape add radiobutton -label [msgcat::mc {Box Annulus}] \
	-variable marker(shape) -value boxannulus
    $ds9(mb).region.shape add separator
    $ds9(mb).region.shape add radiobutton -label [msgcat::mc {Panda}] \
	-variable marker(shape) -value panda
    $ds9(mb).region.shape add radiobutton \
	-label [msgcat::mc {Elliptical Panda}]\
	-variable marker(shape) -value epanda
    $ds9(mb).region.shape add radiobutton -label [msgcat::mc {Box Panda}] \
	-variable marker(shape) -value bpanda

    ThemeMenu $ds9(mb).region.shape.point
    $ds9(mb).region.shape.point add radiobutton -label [msgcat::mc {Circle}] \
	-variable marker(shape) -value {circle point}
    $ds9(mb).region.shape.point add radiobutton -label [msgcat::mc {Box}] \
	-variable marker(shape) -value {box point}
    $ds9(mb).region.shape.point add radiobutton -label [msgcat::mc {Diamond}] \
	-variable marker(shape) -value {diamond point}
    $ds9(mb).region.shape.point add radiobutton -label [msgcat::mc {Cross}] \
	-variable marker(shape) -value {cross point}
    $ds9(mb).region.shape.point add radiobutton -label [msgcat::mc {X}] \
	-variable marker(shape) -value {x point}
    $ds9(mb).region.shape.point add radiobutton -label [msgcat::mc {Arrow}] \
	-variable marker(shape) -value {arrow point}
    $ds9(mb).region.shape.point add radiobutton -label [msgcat::mc {BoxCircle}]\
	-variable marker(shape) -value {boxcircle point}

    ThemeMenu $ds9(mb).region.composite
    $ds9(mb).region.composite add command -label [msgcat::mc {Create}] \
	-command CompositeCreate
    $ds9(mb).region.composite add command -label [msgcat::mc {Dissolve}] \
	-command CompositeDelete

    CreateFOVMenu

    ThemeMenu $ds9(mb).region.template
    $ds9(mb).region.template add command -label "[msgcat::mc {Open}]..." \
	-command OpenTemplateMarker
    $ds9(mb).region.template add command -label "[msgcat::mc {Save}]..." \
	-command SaveAsTemplateMarker

    ColorMenu $ds9(mb).region.color marker color MarkerColor
    WidthDashMenu $ds9(mb).region.width marker width dash \
	MarkerWidth [list MarkerProp dash]

    ThemeMenu $ds9(mb).region.properties
    $ds9(mb).region.properties add checkbutton \
	-label [msgcat::mc {Fixed in Size}] \
	-variable marker(fixed) -command {MarkerProp fixed}
    $ds9(mb).region.properties add separator
    $ds9(mb).region.properties add checkbutton \
	-label [msgcat::mc {Can Edit}] \
	-variable marker(edit) -command {MarkerProp edit}
    $ds9(mb).region.properties add checkbutton \
	-label [msgcat::mc {Can Move}] \
	-variable marker(move) -command {MarkerProp move}
    $ds9(mb).region.properties add checkbutton \
	-label [msgcat::mc {Can Rotate}] \
	-variable marker(rotate) -command {MarkerProp rotate}
    $ds9(mb).region.properties add checkbutton \
	-label [msgcat::mc {Can Delete}] \
	-variable marker(delete) -command {MarkerProp delete}
    $ds9(mb).region.properties add separator
    $ds9(mb).region.properties add radiobutton \
	-label [msgcat::mc {Include}] \
	-variable marker(include) -value 1 -command {MarkerProp include}
    $ds9(mb).region.properties add radiobutton \
	-label [msgcat::mc {Exclude}] \
	-variable marker(include) -value 0 -command {MarkerProp include}
    $ds9(mb).region.properties add separator
    $ds9(mb).region.properties add radiobutton \
	-label [msgcat::mc {Source}] \
	-variable marker(source) -value 1 -command {MarkerProp source}
    $ds9(mb).region.properties add radiobutton \
	-label [msgcat::mc {Background}] \
	-variable marker(source) -value 0 -command {MarkerProp source}

    FontMenu $ds9(mb).region.font marker font font,size font,weight \
	font,slant MarkerFont

    ThemeMenu $ds9(mb).region.params
    $ds9(mb).region.params add checkbutton \
	-label [msgcat::mc {Show}] \
	-variable marker(show) -command MarkerShow
    $ds9(mb).region.params add checkbutton \
	-label [msgcat::mc {Show Text}] \
	-variable marker(show,text) -command MarkerShowText
    $ds9(mb).region.params add separator
    $ds9(mb).region.params add checkbutton \
	-label [msgcat::mc {Auto Plot 2D}] -variable marker(plot2d)
    $ds9(mb).region.params add checkbutton \
	-label [msgcat::mc {Auto Plot 3D}] -variable marker(plot3d)
    $ds9(mb).region.params add checkbutton \
	-label [msgcat::mc {Auto Plot Statistics}] -variable marker(stats)
    $ds9(mb).region.params add separator
    $ds9(mb).region.params add checkbutton \
	-label [msgcat::mc {Auto Centroid}] \
	-variable marker(centroid,auto) -command MarkerCentroidAuto
    $ds9(mb).region.params add command \
	-label "[msgcat::mc {Centroid Parameters}]..." \
	-command CentroidDialog

    # Bindings
    bind $ds9(top) <<SelectAll>> MarkerSelectAll
    bind $ds9(top) <<SelectNone>> MarkerUnselectAll
}

proc PrefsDialogRegionMenu {w} {
    set f [ttk::labelframe $w.mregion -text [msgcat::mc {Region}]]

    ttk::menubutton $f.menu -text [msgcat::mc {Menu}] -menu $f.menu.menu
    PrefsDialogButtonbarRegion $f.buttonbar

    grid $f.menu $f.buttonbar -padx 2 -pady 2 -sticky w

    set m $f.menu.menu
    ThemeMenu $m
    $m add cascade -label [msgcat::mc {Shape}] -menu $m.shape
    $m add separator
    $m add cascade -label [msgcat::mc {Color}] -menu $m.color
    $m add cascade -label [msgcat::mc {Width}] -menu $m.width
    $m add cascade -label [msgcat::mc {Properties}] -menu $m.properties
    $m add cascade -label [msgcat::mc {Font}] -menu $m.font
    $m add separator
    $m add cascade -label [msgcat::mc {Region Parameters}] -menu $m.params

    ThemeMenu $m.shape
    $m.shape add radiobutton -label [msgcat::mc {Circle}] \
	-variable pmarker(shape) -value circle
    $m.shape add radiobutton -label [msgcat::mc {Ellipse}] \
	-variable pmarker(shape) -value ellipse
    $m.shape add radiobutton -label [msgcat::mc {Box}] \
	-variable pmarker(shape) -value box
    $m.shape add radiobutton -label [msgcat::mc {Polygon}] \
	-variable pmarker(shape) -value polygon
    $m.shape add separator
    $m.shape add radiobutton -label [msgcat::mc {Line}] \
	-variable pmarker(shape) -value line
    $m.shape add radiobutton -label [msgcat::mc {Vector}] \
	-variable pmarker(shape) -value vector
    $m.shape add radiobutton -label [msgcat::mc {Projection}] \
	-variable pmarker(shape) -value projection
    $m.shape add radiobutton -label [msgcat::mc {Segment}] \
	-variable pmarker(shape) -value segment
    $m.shape add separator
    $m.shape add radiobutton -label [msgcat::mc {Text}] \
	-variable pmarker(shape) -value text
    $m.shape add cascade -label [msgcat::mc {Point}] \
	-menu $m.shape.point
    $m.shape add separator
    $m.shape add radiobutton -label [msgcat::mc {Ruler}] \
	-variable pmarker(shape) -value ruler
    $m.shape add radiobutton -label [msgcat::mc {Compass}] \
	-variable pmarker(shape) -value compass
    $m.shape add separator
    $m.shape add radiobutton -label [msgcat::mc {Annulus}] \
	-variable pmarker(shape) -value annulus
    $m.shape add radiobutton -label [msgcat::mc {Elliptical Annulus}] \
	-variable pmarker(shape) -value ellipseannulus
    $m.shape add radiobutton -label [msgcat::mc {Box Annulus}] \
	-variable pmarker(shape) -value boxannulus
    $m.shape add separator
    $m.shape add radiobutton -label [msgcat::mc {Panda}] \
	-variable pmarker(shape) -value panda
    $m.shape add radiobutton -label [msgcat::mc {Elliptical Panda}] \
	-variable pmarker(shape) -value epanda
    $m.shape add radiobutton -label [msgcat::mc {Box Panda}] \
	-variable pmarker(shape) -value bpanda

    ThemeMenu $m.shape.point
    $m.shape.point add radiobutton -label [msgcat::mc {Circle}] \
	-variable pmarker(shape) -value {circle point}
    $m.shape.point add radiobutton -label [msgcat::mc {Box}] \
	-variable pmarker(shape) -value {box point}
    $m.shape.point add radiobutton -label [msgcat::mc {Diamond}] \
	-variable pmarker(shape) -value {diamond point}
    $m.shape.point add radiobutton -label [msgcat::mc {Cross}] \
	-variable pmarker(shape) -value {cross point}
    $m.shape.point add radiobutton -label [msgcat::mc {X}] \
	-variable pmarker(shape) -value {x point}
    $m.shape.point add radiobutton -label [msgcat::mc {Arrow}] \
	-variable pmarker(shape) -value {arrow point}
    $m.shape.point add radiobutton -label [msgcat::mc {BoxCircle}]\
	-variable pmarker(shape) -value {boxcircle point}

    ColorMenu $m.color pmarker color {}
    WidthDashMenu $m.width pmarker width dash {} {}

    ThemeMenu $m.properties
    $m.properties add checkbutton -label [msgcat::mc {Fixed in Size}] \
	-variable pmarker(fixed)
    $m.properties add separator
    $m.properties add checkbutton -label [msgcat::mc {Can Edit}] \
	-variable pmarker(edit)
    $m.properties add checkbutton -label [msgcat::mc {Can Move}] \
	-variable pmarker(move)
    $m.properties add checkbutton -label [msgcat::mc {Can Rotate}] \
	-variable pmarker(rotate)
    $m.properties add checkbutton -label [msgcat::mc {Can Delete}] \
	-variable pmarker(delete)
    $m.properties add separator
    $m.properties add radiobutton -label [msgcat::mc {Include}] \
	-variable pmarker(include) -value 1
    $m.properties add radiobutton -label [msgcat::mc {Exclude}] \
	-variable pmarker(include) -value 0
    $m.properties add separator
    $m.properties add radiobutton -label [msgcat::mc {Source}] \
	-variable pmarker(source) -value 1
    $m.properties add radiobutton -label [msgcat::mc {Background}] \
	-variable pmarker(source) -value 0

    FontMenu $m.font pmarker font font,size font,weight font,slant {}

    ThemeMenu $m.params
    $m.params add checkbutton -label [msgcat::mc {Show}] \
	-variable pmarker(show)
    $m.params add checkbutton -label [msgcat::mc {Show Text}] \
	-variable pmarker(show,text)
    $m.params add separator
    $m.params add checkbutton -label [msgcat::mc {Auto Centroid}] \
	-variable pmarker(centroid,auto)

    pack $f -side top -fill both -expand true
}

proc PrefsDialogRegion {} {
    global dprefs

    set w $dprefs(tab)

    $dprefs(listbox) insert {} end -id [ttk::frame $w.region] \
	-text [msgcat::mc {Region}]

    # Format
    set f [ttk::labelframe $w.region.format -text [msgcat::mc {Default Format}]]

    ttk::menubutton $f.format -textvariable pmarker(format) \
	-menu $f.format.menu

    grid $f.format -padx 2 -pady 2 -sticky w

    ThemeMenu $f.format.menu
    $f.format.menu add radiobutton -label {DS9/Funtools} \
	-variable pmarker(format) -value ds9
    $f.format.menu add radiobutton -label {XML} \
	-variable pmarker(format) -value xml
    $f.format.menu add radiobutton -label {CIAO} \
	-variable pmarker(format) -value ciao
    $f.format.menu add radiobutton -label {SAOtng} \
	-variable pmarker(format) -value saotng
    $f.format.menu add radiobutton -label {SAOimage} \
	-variable pmarker(format) -value saoimage
    $f.format.menu add radiobutton -label {IRAF PROS} \
	-variable pmarker(format) -value pros
    $f.format.menu add radiobutton -label {X Y} \
	-variable pmarker(format) -value xy

    # Length
    set f [ttk::labelframe $w.region.dformat \
	       -text [msgcat::mc {Default Length}]]

    ttk::menubutton $f.dformat -textvariable pmarker(dformat) \
	-menu $f.dformat.menu

    grid $f.dformat -padx 2 -pady 2 -sticky w

    ThemeMenu $f.dformat.menu
    $f.dformat.menu add radiobutton -label {Degrees} \
	-variable pmarker(dformat) -value degrees
    $f.dformat.menu add radiobutton -label {ArcMin} \
	-variable pmarker(dformat) -value arcmin
    $f.dformat.menu add radiobutton -label {ArcSec} \
	-variable pmarker(dformat) -value arcsec

    # Epsilon
    set f [ttk::labelframe $w.region.epsilon \
	       -text [msgcat::mc {Mouse Click Epsilon}]]

    ttk::label $f.title -text [msgcat::mc {Pixels}]
    ttk::menubutton $f.epsilon -textvariable pmarker(epsilon) \
	-menu $f.epsilon.menu

    grid $f.title $f.epsilon -padx 2 -pady 2 -sticky w

    ThemeMenu $f.epsilon.menu
    $f.epsilon.menu add radiobutton -label {2} -variable pmarker(epsilon) \
	-value 2 -command MarkerEpsilon
    $f.epsilon.menu add radiobutton -label {3} -variable pmarker(epsilon) \
	-value 3 -command MarkerEpsilon
    $f.epsilon.menu add radiobutton -label {4} -variable pmarker(epsilon) \
	-value 4 -command MarkerEpsilon
    $f.epsilon.menu add radiobutton -label {5} -variable pmarker(epsilon) \
	-value 5 -command MarkerEpsilon
    $f.epsilon.menu add radiobutton -label {6} -variable pmarker(epsilon) \
	-value 6 -command MarkerEpsilon
    $f.epsilon.menu add radiobutton -label {8} -variable pmarker(epsilon) \
	-value 8 -command MarkerEpsilon
    $f.epsilon.menu add radiobutton -label {10} -variable pmarker(epsilon) \
	-value 10 -command MarkerEpsilon

    grid $f.title $f.epsilon -padx 2 -pady 2 -sticky w

    # Centroid
    set f [ttk::labelframe $w.region.centroid -text [msgcat::mc {Centroid}]]

    ttk::label $f.ititle -text [msgcat::mc {Iteration}]
    ttk::entry $f.iteration -textvariable pmarker(centroid,iteration) -width 10
    ttk::label $f.rtitle -text [msgcat::mc {Radius}]
    ttk::entry $f.radius -textvariable pmarker(centroid,radius) -width 10
   
    grid $f.ititle $f.iteration $f.rtitle $f.radius -padx 2 -pady 2 -sticky w
    # Plots
    set f [ttk::labelframe $w.region.plot -text [msgcat::mc {Auto Plot}]]
    ttk::checkbutton $f.2d -text [msgcat::mc {2D}] -variable pmarker(plot2d)
    ttk::checkbutton $f.3d -text [msgcat::mc {3D}] -variable pmarker(plot3d)
    ttk::checkbutton $f.stats -text [msgcat::mc {Statistics}] \
	-variable pmarker(stats)

    grid $f.2d $f.3d -padx 2 -pady 2 -sticky w
    grid $f.stats -padx 2 -pady 2 -sticky w

    # Circle
    set f [ttk::labelframe $w.region.circle -text [msgcat::mc {Circle}]]

    ttk::label $f.title -text [msgcat::mc {Radius}]
    ttk::entry $f.radius -textvariable pmarker(circle,radius) -width 10
    ttk::label $f.unit -text [msgcat::mc {Image}]
   
    grid $f.title $f.radius $f.unit -padx 2 -pady 2 -sticky w

    # Ellipse
    set f [ttk::labelframe $w.region.ellipse -text [msgcat::mc {Ellipse}]]

    ttk::label $f.title -text "Radius 1"
    ttk::entry $f.radius1 -textvariable pmarker(ellipse,radius1) -width 10 
    ttk::label $f.unit -text [msgcat::mc {Image}]
    
    ttk::label $f.title2 -text "Radius 2"
    ttk::entry $f.radius2 -textvariable pmarker(ellipse,radius2) -width 10 
    ttk::label $f.unit2 -text [msgcat::mc {Image}]

    grid $f.title $f.radius1 $f.unit -padx 2 -pady 2 -sticky w
    grid $f.title2 $f.radius2 $f.unit2 -padx 2 -pady 2 -sticky w
    
    # Box
    set f [ttk::labelframe $w.region.box -text [msgcat::mc {Box}]]

    ttk::label $f.title -text "Size 1"
    ttk::entry $f.radius1 -textvariable pmarker(box,radius1) -width 10 
    ttk::label $f.unit -text [msgcat::mc {Image}]
    
    ttk::label $f.title2 -text "Size 2"
    ttk::entry $f.radius2 -textvariable pmarker(box,radius2) -width 10 
    ttk::label $f.unit2 -text [msgcat::mc {Image}]

    grid $f.title $f.radius1 $f.unit -padx 2 -pady 2 -sticky w
    grid $f.title2 $f.radius2 $f.unit2 -padx 2 -pady 2 -sticky w

    # Projection
    set f [ttk::labelframe $w.region.projection -text [msgcat::mc {Projection}]]

    ttk::label $f.title -text [msgcat::mc {Thickness}]
    ttk::entry $f.thick -textvariable pmarker(projection,thick) -width 10
    ttk::label $f.unit -text [msgcat::mc {Image}]
    
    grid $f.title $f.thick $f.unit -padx 2 -pady 2 -sticky w

    # Point
    set f [ttk::labelframe $w.region.point -text [msgcat::mc {Point}]]

    ttk::label $f.title -text [msgcat::mc {Size}]
    ttk::entry $f.size -textvariable pmarker(point,size) -width 10
    ttk::label $f.unit -text [msgcat::mc {Pixels}]
    
    grid $f.title $f.size $f.unit -padx 2 -pady 2 -sticky w

    pack $w.region.format $w.region.dformat $w.region.epsilon \
	$w.region.centroid $w.region.plot \
	$w.region.circle $w.region.ellipse \
	$w.region.box $w.region.projection $w.region.point \
	-side top -fill both -expand true
}

proc PrefsDialogAnnulus {} {
    global dprefs

    set w $dprefs(tab)

    $dprefs(listbox) insert {} end -id [ttk::frame $w.annulus] \
	-text [msgcat::mc {Annulus}]

    # Annulus
    set f [ttk::labelframe $w.annulus.annulus -text [msgcat::mc {Annulus}]]

    ttk::label $f.innerTitle -text [msgcat::mc {Inner}]
    ttk::label $f.outerTitle -text [msgcat::mc {Outer}]
    ttk::label $f.radiusTitle -text [msgcat::mc {Radius}]
    ttk::entry $f.inner -textvariable pmarker(annulus,inner) -width 10
    ttk::entry $f.outer -textvariable pmarker(annulus,outer) -width 10
    ttk::label $f.unit -text [msgcat::mc {Image}]
    ttk::label $f.annuliTitle -text [msgcat::mc {Annuli}]
    ttk::entry $f.annuli -textvariable pmarker(annulus,annuli) -width 10
    
    grid x $f.innerTitle $f.outerTitle -padx 2 -pady 2 -sticky w
    grid $f.radiusTitle $f.inner $f.outer $f.unit -padx 2 -pady 2 -sticky w
    grid $f.annuliTitle $f.annuli -padx 2 -pady 2 -sticky w

    # Ellipse Annulus
    set f [ttk::labelframe $w.annulus.ellipseannulus \
	       -text [msgcat::mc {Elliptical Annulus}]]

    ttk::label $f.majorTitle -text [msgcat::mc {Major}]
    ttk::label $f.minorTitle -text [msgcat::mc {Minor}]

    ttk::label $f.innerTitle -text [msgcat::mc {Inner}]
    ttk::entry $f.radius1 -textvariable pmarker(ellipseannulus,radius1) \
	-width 10 	
    ttk::entry $f.radius2 -textvariable pmarker(ellipseannulus,radius2) \
	-width 10 
    ttk::label $f.unit -text [msgcat::mc {Image}]

    ttk::label $f.outerTitle -text [msgcat::mc {Outer}]
    ttk::entry $f.radius3 -textvariable pmarker(ellipseannulus,radius3) \
	-width 10 

    ttk::label $f.annuliTitle -text [msgcat::mc {Annuli}]
    ttk::entry $f.annuli -textvariable pmarker(ellipseannulus,annuli) -width 10
    
    grid x $f.majorTitle $f.minorTitle -padx 2 -pady 2 -sticky w
    grid $f.innerTitle $f.radius1 $f.radius2 $f.unit -padx 2 -pady 2 -sticky w
    grid $f.outerTitle $f.radius3 -padx 2 -pady 2 -sticky w
    grid $f.annuliTitle $f.annuli -padx 2 -pady 2 -sticky w

    # Box Annulus
    set f [ttk::labelframe $w.annulus.boxannulus \
	       -text [msgcat::mc {Box Annulus}]]

    ttk::label $f.majorTitle -text [msgcat::mc {Width}]
    ttk::label $f.minorTitle -text [msgcat::mc {Height}]

    ttk::label $f.innerTitle -text [msgcat::mc {Inner}]
    ttk::entry $f.radius1 -textvariable pmarker(boxannulus,radius1) -width 10
    ttk::entry $f.radius2 -textvariable pmarker(boxannulus,radius2) -width 10 
    ttk::label $f.unit -text [msgcat::mc {Image}]

    ttk::label $f.outerTitle -text [msgcat::mc {Outer}]
    ttk::entry $f.radius3 -textvariable pmarker(boxannulus,radius3) -width 10 

    ttk::label $f.annuliTitle -text [msgcat::mc {Annuli}]
    ttk::entry $f.annuli -textvariable pmarker(boxannulus,annuli) -width 10 
    
    grid x $f.majorTitle $f.minorTitle -padx 2 -pady 2 -sticky w
    grid $f.innerTitle $f.radius1 $f.radius2 $f.unit -padx 2 -pady 2 -sticky w
    grid $f.outerTitle $f.radius3 -padx 2 -pady 2 -sticky w
    grid $f.annuliTitle $f.annuli -padx 2 -pady 2 -sticky w

    pack $w.annulus.annulus $w.annulus.ellipseannulus $w.annulus.boxannulus \
	-side top -fill both -expand true
}

proc PrefsDialogPanda {} {
    global dprefs

    set w $dprefs(tab)

    $dprefs(listbox) insert {} end -id [ttk::frame $w.panda] \
	-text [msgcat::mc {Panda}]

    # Panda
    set f [ttk::labelframe $w.panda.panda -text [msgcat::mc {Panda}]]

    ttk::label $f.innerTitle -text [msgcat::mc {Inner}]
    ttk::label $f.outerTitle -text [msgcat::mc {Outer}]
    ttk::label $f.radiusTitle -text [msgcat::mc {Radius}]
    ttk::entry $f.inner -textvariable pmarker(panda,inner) -width 10
    ttk::entry $f.outer -textvariable pmarker(panda,outer) -width 10
    ttk::label $f.unit -text [msgcat::mc {Image}]
    ttk::label $f.annuliTitle -text [msgcat::mc {Annuli}]
    ttk::entry $f.annuli -textvariable pmarker(panda,annuli) -width 10
    
    grid x $f.innerTitle $f.outerTitle -padx 2 -pady 2 -sticky w
    grid $f.radiusTitle $f.inner $f.outer $f.unit -padx 2 -pady 2 -sticky w
    grid $f.annuliTitle $f.annuli -padx 2 -pady 2 -sticky w

    ttk::label $f.ang1Title -text [msgcat::mc {Start}]
    ttk::label $f.ang2Title -text [msgcat::mc {Stop}]
    ttk::label $f.angTitle -text [msgcat::mc {Angles}]
    ttk::entry $f.ang1 -textvariable pmarker(panda,ang1) -width 10
    ttk::entry $f.ang2 -textvariable pmarker(panda,ang2) -width 10
    ttk::label $f.angunit -text [msgcat::mc {Degrees}]
    ttk::label $f.angnumTitle -text [msgcat::mc {Number}]
    ttk::entry $f.angnum -textvariable pmarker(panda,angnum) -width 10
    
    grid x $f.ang1Title $f.ang2Title -padx 2 -pady 2 -sticky w
    grid $f.angTitle $f.ang1 $f.ang2 $f.angunit -padx 2 -pady 2 -sticky w
    grid $f.angnumTitle $f.angnum -padx 2 -pady 2 -sticky w

    # Elliptical Panda
    set f [ttk::labelframe $w.panda.epanda \
	       -text [msgcat::mc {Elliptical Panda}]]

    ttk::label $f.majorTitle -text [msgcat::mc {Major}]
    ttk::label $f.minorTitle -text [msgcat::mc {Minor}]

    ttk::label $f.innerTitle -text [msgcat::mc {Inner}]
    ttk::entry $f.radius1 -textvariable pmarker(epanda,radius1) -width 10
    ttk::entry $f.radius2 -textvariable pmarker(epanda,radius2) -width 10 
    ttk::label $f.unit -text [msgcat::mc {Image}]

    ttk::label $f.outerTitle -text [msgcat::mc {Outer}]
    ttk::entry $f.radius3 -textvariable pmarker(epanda,radius3) -width 10 

    ttk::label $f.annuliTitle -text [msgcat::mc {Annuli}]
    ttk::entry $f.annuli -textvariable pmarker(epanda,annuli) -width 10
    
    grid x $f.majorTitle $f.minorTitle -padx 2 -pady 2 -sticky w
    grid $f.innerTitle $f.radius1 $f.radius2 $f.unit -padx 2 -pady 2 -sticky w
    grid $f.outerTitle $f.radius3 -padx 2 -pady 2 -sticky w
    grid $f.annuliTitle $f.annuli -padx 2 -pady 2 -sticky w

    ttk::label $f.ang1Title -text [msgcat::mc {Start}]
    ttk::label $f.ang2Title -text [msgcat::mc {Stop}]
    ttk::label $f.angTitle -text [msgcat::mc {Angles}]
    ttk::entry $f.ang1 -textvariable pmarker(epanda,ang1) -width 10
    ttk::entry $f.ang2 -textvariable pmarker(epanda,ang2) -width 10
    ttk::label $f.angunit -text [msgcat::mc {Degrees}]
    ttk::label $f.angnumTitle -text [msgcat::mc {Number}]
    ttk::entry $f.angnum -textvariable pmarker(epanda,angnum) -width 10
    
    grid x $f.ang1Title $f.ang2Title -padx 2 -pady 2 -sticky w
    grid $f.angTitle $f.ang1 $f.ang2 $f.angunit -padx 2 -pady 2 -sticky w
    grid $f.angnumTitle $f.angnum -padx 2 -pady 2 -sticky w

    # Default Box Panda
    set f [ttk::labelframe $w.panda.bpanda -text [msgcat::mc {Box Panda}]]

    ttk::label $f.majorTitle -text [msgcat::mc {Major}]
    ttk::label $f.minorTitle -text [msgcat::mc {Minor}]

    ttk::label $f.innerTitle -text [msgcat::mc {Inner}]
    ttk::entry $f.radius1 -textvariable pmarker(bpanda,radius1) -width 10
    ttk::entry $f.radius2 -textvariable pmarker(bpanda,radius2) -width 10 
    ttk::label $f.unit -text [msgcat::mc {Image}]

    ttk::label $f.outerTitle -text [msgcat::mc {Outer}]
    ttk::entry $f.radius3 -textvariable pmarker(bpanda,radius3) -width 10 

    ttk::label $f.annuliTitle -text [msgcat::mc {Annuli}]
    ttk::entry $f.annuli -textvariable pmarker(bpanda,annuli) -width 10
    
    grid x $f.majorTitle $f.minorTitle -padx 2 -pady 2 -sticky w
    grid $f.innerTitle $f.radius1 $f.radius2 $f.unit -padx 2 -pady 2 -sticky w
    grid $f.outerTitle $f.radius3 -padx 2 -pady 2 -sticky w
    grid $f.annuliTitle $f.annuli -padx 2 -pady 2 -sticky w

    ttk::label $f.ang1Title -text [msgcat::mc {Start}]
    ttk::label $f.ang2Title -text [msgcat::mc {Stop}]
    ttk::label $f.angTitle -text [msgcat::mc {Angles}]
    ttk::entry $f.ang1 -textvariable pmarker(bpanda,ang1) -width 10
    ttk::entry $f.ang2 -textvariable pmarker(bpanda,ang2) -width 10
    ttk::label $f.angunit -text [msgcat::mc {Degrees}]
    ttk::label $f.angnumTitle -text [msgcat::mc {Number}]
    ttk::entry $f.angnum -textvariable pmarker(bpanda,angnum) -width 10
    
    grid x $f.ang1Title $f.ang2Title -padx 2 -pady 2 -sticky w
    grid $f.angTitle $f.ang1 $f.ang2 $f.angunit -padx 2 -pady 2 -sticky w
    grid $f.angnumTitle $f.angnum -padx 2 -pady 2 -sticky w

    pack $w.panda.panda $w.panda.epanda $w.panda.bpanda \
	-side top -fill both -expand true
}

# Buttons

proc ButtonsRegionDef {} {
    global pbuttons

    array set pbuttons {
	region,info 1
	region,circle 0
	region,ellipse 0
	region,box 0
	region,polygon 0
	region,line 0
	region,vector 0
	region,projection 0
	region,segment 0
	region,text 0
	region,point 0
	region,ruler 0
	region,compass 0
	region,annulus 0
	region,ellipseannulus 0
	region,boxannulus 0
	region,panda 0
	region,epanda 0
	region,bpanda 0
	region,create 0
	region,dissolve 0
	region,loadtemplate 0
	region,savetemplate 0
	region,centroid 0
	region,front 1
	region,back 1
	region,newgroup 0
	region,group 0
	region,all 1
	region,none 1
	region,invert 0
	region,saveselect 0
	region,listselect 0
	region,deleteselect 0
	region,load 1
	region,save 1
	region,list 1
	region,delete 1
	region,deleteload 0
	region,show 0
	region,showtext 0
	region,autocentroid 0
    }
}

proc CreateButtonsRegion {} {
    global buttons
    global ds9

    ttk::frame $ds9(buttons).region

    ButtonButton $ds9(buttons).region.info \
	[string tolower [msgcat::mc {Information}]] MarkerInfo

    RadioButton $ds9(buttons).region.circle \
	[string tolower [msgcat::mc {Circle}]] \
	marker(shape) circle {}
    RadioButton $ds9(buttons).region.ellipse \
	[string tolower [msgcat::mc {Ellipse}]] \
	marker(shape) ellipse {}
    RadioButton $ds9(buttons).region.box \
	[string tolower [msgcat::mc {Box}]] \
	marker(shape) box {}
    RadioButton $ds9(buttons).region.polygon \
	[string tolower [msgcat::mc {Polygon}]] \
	marker(shape) polygon {}
    RadioButton $ds9(buttons).region.line \
	[string tolower [msgcat::mc {Line}]] \
	marker(shape) line {}
    RadioButton $ds9(buttons).region.vector \
	[string tolower [msgcat::mc {Vector}]] \
	marker(shape) vector {}
    RadioButton $ds9(buttons).region.projection \
	[string tolower [msgcat::mc {Projection}]] \
	marker(shape) projection {}
    RadioButton $ds9(buttons).region.segment \
	[string tolower [msgcat::mc {Segment}]] \
	marker(shape) segment {}
    RadioButton $ds9(buttons).region.text \
	[string tolower [msgcat::mc {Text}]] \
	marker(shape) text {}
    RadioButton $ds9(buttons).region.point \
	[string tolower [msgcat::mc {Point}]] \
	marker(shape) {circle point} {}
    RadioButton $ds9(buttons).region.ruler \
	[string tolower [msgcat::mc {Ruler}]] \
	marker(shape) ruler {}
    RadioButton $ds9(buttons).region.compass \
	[string tolower [msgcat::mc {Compass}]] \
	marker(shape) compass {}
    RadioButton $ds9(buttons).region.annulus \
	[string tolower [msgcat::mc {Annulus}]] \
	marker(shape) annulus {}
    RadioButton $ds9(buttons).region.ellipseannulus \
	[string tolower [msgcat::mc {Elliptical Annulus}]] \
	marker(shape) ellipseannulus {}
    RadioButton $ds9(buttons).region.boxannulus \
	[string tolower [msgcat::mc {Box Annulus}]] \
	marker(shape) boxannulus {}
    RadioButton $ds9(buttons).region.panda \
	[string tolower [msgcat::mc {Panda}]] \
	marker(shape) panda {}
    RadioButton $ds9(buttons).region.epanda \
	[string tolower [msgcat::mc {Ellipse Panda}]] \
	marker(shape) epanda {}
    RadioButton $ds9(buttons).region.bpanda \
	[string tolower [msgcat::mc {Box Panda}]] \
	marker(shape) bpanda {}

    ButtonButton $ds9(buttons).region.create \
	[string tolower [msgcat::mc {Composite}]] CompositeCreate
    ButtonButton $ds9(buttons).region.dissolve \
	[string tolower [msgcat::mc {Dissolve}]] CompositeDelete

    ButtonButton $ds9(buttons).region.loadtemplate \
	[string tolower [msgcat::mc {Load Template}]] OpenTemplateMarker
    ButtonButton $ds9(buttons).region.savetemplate \
	[string tolower [msgcat::mc {Save Template}]] SaveAsTemplateMarker

    ButtonButton $ds9(buttons).region.centroid \
	[string tolower [msgcat::mc {Centroid}]] MarkerCentroid
    ButtonButton $ds9(buttons).region.front \
	[string tolower [msgcat::mc {Front}]] MarkerFront
    ButtonButton $ds9(buttons).region.back \
	[string tolower [msgcat::mc {Back}]] MarkerBack

    ButtonButton $ds9(buttons).region.newgroup \
	[string tolower [msgcat::mc {New Group}]] GroupCreate
    ButtonButton $ds9(buttons).region.group \
	[string tolower [msgcat::mc {Groups}]] GroupDialog

    ButtonButton $ds9(buttons).region.all \
	[string tolower [msgcat::mc {All}]] MarkerSelectAll
    ButtonButton $ds9(buttons).region.none \
	[string tolower [msgcat::mc {None}]] MarkerUnselectAll
    ButtonButton $ds9(buttons).region.invert \
	[string tolower [msgcat::mc {Invert}]] MarkerSelectInvert

    ButtonButton $ds9(buttons).region.saveselect \
	[string tolower [msgcat::mc {Save Select}]] [list MarkerSave select]
    ButtonButton $ds9(buttons).region.listselect \
	[string tolower [msgcat::mc {List Select}]] [list MarkerList select]
    ButtonButton $ds9(buttons).region.deleteselect \
	[string tolower [msgcat::mc {Delete Select}]] [list MarkerDelete select]

    ButtonButton $ds9(buttons).region.load \
	[string tolower [msgcat::mc {Open}]] MarkerLoad
    ButtonButton $ds9(buttons).region.save \
	[string tolower [msgcat::mc {Save}]] [list MarkerSave {}]
    ButtonButton $ds9(buttons).region.list \
	[string tolower [msgcat::mc {List}]] [list MarkerList {}]
    ButtonButton $ds9(buttons).region.delete \
	[string tolower [msgcat::mc {Delete}]] [list MarkerDelete {}]
    
    ButtonButton $ds9(buttons).region.deleteload \
	[string tolower [msgcat::mc {Delete Load}]] MarkerDeleteLoad

    CheckButton $ds9(buttons).region.show \
	[string tolower [msgcat::mc {Show}]] \
	marker(show) MarkerShow
    CheckButton $ds9(buttons).region.showtext \
	[string tolower [msgcat::mc {Show Text}]] \
	marker(show,text) MarkerShowText
    CheckButton $ds9(buttons).region.autocentroid \
	[string tolower [msgcat::mc {Auto Centroid}]] \
	marker(centroid,auto) MarkerCentroidAuto

    set buttons(region) "
        $ds9(buttons).region.info pbuttons(region,info)
        $ds9(buttons).region.circle pbuttons(region,circle)
        $ds9(buttons).region.ellipse pbuttons(region,ellipse)
        $ds9(buttons).region.box pbuttons(region,box)
        $ds9(buttons).region.polygon pbuttons(region,polygon)
        $ds9(buttons).region.line pbuttons(region,line)
        $ds9(buttons).region.vector pbuttons(region,vector)
        $ds9(buttons).region.projection pbuttons(region,projection)
        $ds9(buttons).region.segment pbuttons(region,segment)
        $ds9(buttons).region.text pbuttons(region,text)
        $ds9(buttons).region.point pbuttons(region,point)
        $ds9(buttons).region.ruler pbuttons(region,ruler)
        $ds9(buttons).region.compass pbuttons(region,compass)
        $ds9(buttons).region.annulus pbuttons(region,annulus)
        $ds9(buttons).region.ellipseannulus pbuttons(region,ellipseannulus)
        $ds9(buttons).region.boxannulus pbuttons(region,boxannulus)
        $ds9(buttons).region.panda pbuttons(region,panda)
        $ds9(buttons).region.epanda pbuttons(region,epanda)
        $ds9(buttons).region.bpanda pbuttons(region,bpanda)
        $ds9(buttons).region.create pbuttons(region,create)
        $ds9(buttons).region.dissolve pbuttons(region,dissolve)
        $ds9(buttons).region.loadtemplate pbuttons(region,loadtemplate)
        $ds9(buttons).region.savetemplate pbuttons(region,savetemplate)
        $ds9(buttons).region.centroid pbuttons(region,centroid)
        $ds9(buttons).region.front pbuttons(region,front)
        $ds9(buttons).region.back pbuttons(region,back)
        $ds9(buttons).region.newgroup pbuttons(region,newgroup)
        $ds9(buttons).region.group pbuttons(region,group)
        $ds9(buttons).region.all pbuttons(region,all)
        $ds9(buttons).region.none pbuttons(region,none)
        $ds9(buttons).region.invert pbuttons(region,invert)
        $ds9(buttons).region.saveselect pbuttons(region,saveselect)
        $ds9(buttons).region.listselect pbuttons(region,listselect)
        $ds9(buttons).region.deleteselect pbuttons(region,deleteselect)
        $ds9(buttons).region.load pbuttons(region,load)
        $ds9(buttons).region.save pbuttons(region,save)
        $ds9(buttons).region.list pbuttons(region,list)
        $ds9(buttons).region.delete pbuttons(region,delete)
        $ds9(buttons).region.deleteload pbuttons(region,deleteload)
        $ds9(buttons).region.show pbuttons(region,show)
        $ds9(buttons).region.showtext pbuttons(region,showtext)
        $ds9(buttons).region.autocentroid pbuttons(region,autocentroid)
    "
}

proc PrefsDialogButtonbarRegion {f} {
    global buttons
    global pbuttons

    ttk::menubutton $f -text [msgcat::mc {Buttonbar}] -menu $f.menu
    
    set m $f.menu
    ThemeMenu $m
    $m add checkbutton -label "[msgcat::mc {Get Information}]..." \
	-variable pbuttons(region,info) \
	-command {UpdateButtons buttons(region)}
    $m add separator
    $m add cascade -label [msgcat::mc {Shape}] -menu $m.shape
    $m add cascade -label [msgcat::mc {Composite Region}] -menu $m.composite
    $m add cascade -label [msgcat::mc {Template}] -menu $m.template
    $m add separator
    $m add checkbutton -label [msgcat::mc {Centroid}] \
	-variable pbuttons(region,centroid) \
	-command {UpdateButtons buttons(region)}
    $m add checkbutton -label [msgcat::mc {Move to Front}] \
	-variable pbuttons(region,front) \
	-command {UpdateButtons buttons(region)}
    $m add checkbutton -label [msgcat::mc {Move to Back}] \
	-variable pbuttons(region,back) \
	-command {UpdateButtons buttons(region)}
    $m add separator
    $m add checkbutton -label [msgcat::mc {New Group}] \
	-variable pbuttons(region,newgroup) \
	-command {UpdateButtons buttons(region)}
    $m add checkbutton -label "[msgcat::mc {Groups}]..." \
	-variable pbuttons(region,group) \
	-command {UpdateButtons buttons(region)}
    $m add separator
    $m add checkbutton -label [msgcat::mc {Select All}] \
	-variable pbuttons(region,all) \
	-command {UpdateButtons buttons(region)}
    $m add checkbutton -label [msgcat::mc {Select None}] \
	-variable pbuttons(region,none) \
	-command {UpdateButtons buttons(region)}
    $m add checkbutton -label [msgcat::mc {Invert Selection}] \
	-variable pbuttons(region,invert) \
	-command {UpdateButtons buttons(region)}
    $m add separator
    $m add checkbutton -label [msgcat::mc {Save Selected Regions}] \
	-variable pbuttons(region,saveselect) \
	-command {UpdateButtons buttons(region)}
    $m add checkbutton -label [msgcat::mc {List Selected Regions}] \
	-variable pbuttons(region,listselect) \
	-command {UpdateButtons buttons(region)}
    $m add checkbutton -label [msgcat::mc {Delete Selected Regions}] \
	-variable pbuttons(region,deleteselect) \
	-command {UpdateButtons buttons(region)}
    $m add separator
    $m add checkbutton -label "[msgcat::mc {Open Regions}]..." \
	-variable pbuttons(region,load) \
	-command {UpdateButtons buttons(region)}
    $m add checkbutton -label "[msgcat::mc {Save Regions}]..." \
	-variable pbuttons(region,save) \
	-command {UpdateButtons buttons(region)}
    $m add checkbutton -label "[msgcat::mc {List Regions}]..." \
	-variable pbuttons(region,list) \
	-command {UpdateButtons buttons(region)}
    $m add checkbutton -label [msgcat::mc {Delete Regions}] \
	-variable pbuttons(region,delete) \
	-command {UpdateButtons buttons(region)}
    $m add separator
    $m add checkbutton -label "[msgcat::mc {Delete and Open Regions}]..." \
	-variable pbuttons(region,deleteload) \
	-command {UpdateButtons buttons(region)}
    $m add separator
    $m add cascade -label [msgcat::mc {Region Parameters}] -menu $m.params

    ThemeMenu $m.shape
    $m.shape add checkbutton -label [msgcat::mc {Circle}] \
	-variable pbuttons(region,circle) \
	-command {UpdateButtons buttons(region)}
    $m.shape add checkbutton -label [msgcat::mc {Ellipse}] \
	-variable pbuttons(region,ellipse) \
	-command {UpdateButtons buttons(region)}
    $m.shape add checkbutton -label [msgcat::mc {Box}] \
	-variable pbuttons(region,box) \
	-command {UpdateButtons buttons(region)}
    $m.shape add checkbutton -label [msgcat::mc {Polygon}] \
	-variable pbuttons(region,polygon) \
	-command {UpdateButtons buttons(region)}
    $m.shape add separator
    $m.shape add checkbutton -label [msgcat::mc {Line}] \
	-variable pbuttons(region,line) \
	-command {UpdateButtons buttons(region)}
    $m.shape add checkbutton -label [msgcat::mc {Vector}] \
	-variable pbuttons(region,vector) \
	-command {UpdateButtons buttons(region)}
    $m.shape add checkbutton -label [msgcat::mc {Projection}] \
	-variable pbuttons(region,projection) \
	-command {UpdateButtons buttons(region)}
    $m.shape add checkbutton -label [msgcat::mc {Segment}] \
	-variable pbuttons(region,segment) \
	-command {UpdateButtons buttons(region)}
    $m.shape add separator
    $m.shape add checkbutton -label [msgcat::mc {Text}] \
	-variable pbuttons(region,text) \
	-command {UpdateButtons buttons(region)}
    $m.shape add checkbutton -label [msgcat::mc {Point}] \
	-variable pbuttons(region,point) \
	-command {UpdateButtons buttons(region)}
    $m.shape add separator
    $m.shape add checkbutton -label [msgcat::mc {Ruler}] \
	-variable pbuttons(region,ruler) \
	-command {UpdateButtons buttons(region)}
    $m.shape add checkbutton -label [msgcat::mc {Compass}] \
	-variable pbuttons(region,compass) \
	-command {UpdateButtons buttons(region)}
    $m.shape add separator
    $m.shape add checkbutton -label [msgcat::mc {Annulus}] \
	-variable pbuttons(region,annulus) \
	-command {UpdateButtons buttons(region)}
    $m.shape add checkbutton -label [msgcat::mc {Elliptical Annulus}] \
	-variable pbuttons(region,ellipseannulus) \
	-command {UpdateButtons buttons(region)}
    $m.shape add checkbutton -label [msgcat::mc {Box Annulus}] \
	-variable pbuttons(region,boxannulus) \
	-command {UpdateButtons buttons(region)}
    $m.shape add checkbutton -label [msgcat::mc {Panda}] \
	-variable pbuttons(region,panda) \
	-command {UpdateButtons buttons(region)}
    $m.shape add checkbutton -label [msgcat::mc {Elliptical Panda}]\
	-variable pbuttons(region,epanda) \
	-command {UpdateButtons buttons(region)}
    $m.shape add checkbutton -label [msgcat::mc {Box Panda}] \
	-variable pbuttons(region,bpanda) \
	-command {UpdateButtons buttons(region)}

    ThemeMenu $m.composite
    $m.composite add checkbutton -label [msgcat::mc {Create}] \
	-variable pbuttons(region,create) \
	-command {UpdateButtons buttons(region)}
    $m.composite add checkbutton -label [msgcat::mc {Dissolve}] \
	-variable pbuttons(region,dissolve) \
	-command {UpdateButtons buttons(region)}

    ThemeMenu $m.template
    $m.template add checkbutton -label "[msgcat::mc {Open}]..." \
	-variable pbuttons(region,loadtemplate) \
	-command {UpdateButtons buttons(region)}
    $m.template add checkbutton -label "[msgcat::mc {Save}]..." \
	-variable pbuttons(region,savetemplate) \
	-command {UpdateButtons buttons(region)}

    ThemeMenu $m.params
    $m.params add checkbutton -label [msgcat::mc {Show}] \
	-variable pbuttons(region,show) \
	-command {UpdateButtons buttons(region)}
    $m.params add checkbutton -label [msgcat::mc {Show Text}] \
	-variable pbuttons(region,showtext) \
	-command {UpdateButtons buttons(region)}
    $m.params add separator
    $m.params add checkbutton -label [msgcat::mc {Auto Centroid}] \
	-variable pbuttons(region,autocentroid) \
	-command {UpdateButtons buttons(region)}
}

# Support

proc UpdateRegionMenu {} {
    global current
    global marker
    global pmarker
    global ds9

    set mm $ds9(mb).region
    set bb $ds9(buttons).region

    if {$current(frame) != {}} {
	$ds9(mb) entryconfig [msgcat::mc {Region}] -state normal
	ConfigureButtons region normal

	set marker(show) [$current(frame) get marker show]
	set marker(show,text) [$current(frame) get marker show text]
	set marker(centroid,auto) [$current(frame) get marker centroid auto]
	set marker(centroid,radius) [$current(frame) get marker centroid radius]
	set marker(centroid,iteration) \
	    [$current(frame) get marker centroid iteration]
	set marker(preserve) [$current(frame) get marker preserve]

	switch -- $current(mode) {
	    pointer -
	    region {
		if {[$current(frame) get marker select number] == 1} {
		    set marker(color) \
			[$current(frame) get marker color]
		    set marker(width) \
			[$current(frame) get marker width]
		    set marker(dash) \
			[$current(frame) get marker property dash]
		    set marker(fixed) \
			[$current(frame) get marker property fixed]
		    set marker(edit) \
			[$current(frame) get marker property edit]
		    set marker(move) \
			[$current(frame) get marker property move]
		    set marker(rotate) \
			[$current(frame) get marker property rotate]
		    set marker(delete) \
			[$current(frame) get marker property delete]
		    set marker(include) \
			[$current(frame) get marker property include]
		    set marker(source) \
			[$current(frame) get marker property source]

		    set f [$current(frame) get marker font]

		    set marker(font) [lindex $f 0]
		    set marker(font,size) [lindex $f 1]
		    set marker(font,weight) [lindex $f 2]
		    set marker(font,slant) [lindex $f 3]
		} else {
		    # defaults
		    set marker(color) $pmarker(color)
		    set marker(width) $pmarker(width) 
		    set marker(dash) $pmarker(dash) 
		    set marker(fixed) $pmarker(fixed) 
		    set marker(edit) $pmarker(edit) 
		    set marker(move) $pmarker(move) 
		    set marker(rotate) $pmarker(rotate) 
		    set marker(delete) $pmarker(delete) 
		    set marker(include) $pmarker(include) 
		    set marker(source) $pmarker(source) 

		    set marker(font) $pmarker(font) 
		    set marker(font,size) $pmarker(font,size) 
		    set marker(font,weight) $pmarker(font,weight) 
		    set marker(font,slant) $pmarker(font,slant) 
		}
	    }
	}

	if {[$current(frame) has fits]} {
	    $mm entryconfig "[msgcat::mc {Get Information}]..." -state normal

	    $mm entryconfig [msgcat::mc {Composite Region}] -state normal
	    $mm entryconfig [msgcat::mc {Instrument FOV}] -state normal
	    $mm entryconfig [msgcat::mc {Template}] -state normal

	    $mm entryconfig [msgcat::mc {Centroid}] -state normal
	    $mm entryconfig [msgcat::mc {Move to Front}] -state normal
	    $mm entryconfig [msgcat::mc {Move to Back}] -state normal

	    $mm entryconfig [msgcat::mc {New Group}] -state normal
	    $mm entryconfig "[msgcat::mc {Groups}]..." -state normal

	    $mm entryconfig [msgcat::mc {Select All}] -state normal
	    $mm entryconfig [msgcat::mc {Select None}] -state normal
	    $mm entryconfig [msgcat::mc {Invert Selection}] -state normal

	    $mm entryconfig [msgcat::mc {Delete Selected Regions}] -state normal

	    $mm entryconfig "[msgcat::mc {Open Regions}]..." -state normal
	    $mm entryconfig "[msgcat::mc {Save Regions}]..." -state normal
	    $mm entryconfig "[msgcat::mc {List Regions}]..." -state normal
	    $mm entryconfig [msgcat::mc {Delete Regions}] -state normal

	    $mm entryconfig "[msgcat::mc {Delete and Open Regions}]..." \
		-state normal

	    $bb.info configure -state normal

	    $bb.create configure -state normal
	    $bb.dissolve configure -state normal

	    $bb.loadtemplate configure -state normal
	    $bb.savetemplate configure -state normal

	    $bb.centroid configure -state normal
	    $bb.front configure -state normal
	    $bb.back configure -state normal

	    $bb.newgroup configure -state normal
	    $bb.group configure -state normal

	    $bb.all configure -state normal
	    $bb.none configure -state normal
	    $bb.invert configure -state normal

	    $bb.saveselect configure -state normal
	    $bb.listselect configure -state normal
	    $bb.deleteselect configure -state normal

	    $bb.load configure -state normal
	    $bb.save configure -state normal
	    $bb.list configure -state normal
	    $bb.delete configure -state normal

	    $bb.deleteload configure -state normal
	} else {
	    $mm entryconfig "[msgcat::mc {Get Information}]..." -state disabled

	    $mm entryconfig [msgcat::mc {Composite Region}] -state disabled
	    $mm entryconfig [msgcat::mc {Instrument FOV}] -state disabled
	    $mm entryconfig [msgcat::mc {Template}] -state disabled

	    $mm entryconfig [msgcat::mc {Centroid}] -state disabled
	    $mm entryconfig [msgcat::mc {Move to Front}] -state disabled
	    $mm entryconfig [msgcat::mc {Move to Back}] -state disabled

	    $mm entryconfig [msgcat::mc {New Group}] -state disabled
	    $mm entryconfig "[msgcat::mc {Groups}]..." -state disabled

	    $mm entryconfig [msgcat::mc {Select All}] -state disabled
	    $mm entryconfig [msgcat::mc {Select None}] -state disabled
	    $mm entryconfig [msgcat::mc {Invert Selection}] -state disabled

	    $mm entryconfig [msgcat::mc {Delete Selected Regions}] -state disabled

	    $mm entryconfig "[msgcat::mc {Open Regions}]..." -state disabled
	    $mm entryconfig "[msgcat::mc {Save Regions}]..." -state disabled
	    $mm entryconfig "[msgcat::mc {List Regions}]..." -state disabled
	    $mm entryconfig [msgcat::mc {Delete Regions}] -state disabled

	    $mm entryconfig "[msgcat::mc {Delete and Open Regions}]..." -state disabled

	    $bb.info configure -state disabled

	    $bb.create configure -state disabled
	    $bb.dissolve configure -state disabled

	    $bb.loadtemplate configure -state disabled
	    $bb.savetemplate configure -state disabled

	    $bb.centroid configure -state disabled
	    $bb.front configure -state disabled
	    $bb.back configure -state disabled

	    $bb.newgroup configure -state disabled
	    $bb.group configure -state disabled

	    $bb.all configure -state disabled
	    $bb.none configure -state disabled
	    $bb.invert configure -state disabled

	    $bb.saveselect configure -state disabled
	    $bb.listselect configure -state disabled
	    $bb.deleteselect configure -state disabled

	    $bb.load configure -state disabled
	    $bb.save configure -state disabled
	    $bb.list configure -state disabled
	    $bb.delete configure -state disabled

	    $bb.deleteload configure -state disabled
	}
    } else {
	$ds9(mb) entryconfig [msgcat::mc {Region}] -state disabled
	ConfigureButtons region disabled
    }
}
