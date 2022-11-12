#  Copyright (C) 1999-2022
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc CreateIconsLeft {} {
    global ds9
    
    set ds9(icons,left) [ttk::frame $ds9(main).iconsleft]
    set ds9(icons,left,sep) \
	[ttk::separator $ds9(main).iconsleftsep -orient vertical]

    CreateIconsLeftMode
    CreateIconsLeftMarkerShape
    CreateIconsLeftMarkerInfo
    CreateIconsLeftMarkerColor
    CreateIconsLeftMarkerLineWidth
    CreateIconsLeftMarkerSrc
    CreateIconsLeftMarkerComposite
}

proc CreateIconsLeftMode {} {
    global ds9
    global icons
    global current

    set mb $ds9(icons,left)

    set icons(currentmode,none) \
	[image create photo -file "$ds9(icons,ui)/edit_none.png"]
    set icons(currentmode,region) \
	[image create photo -file "$ds9(icons,ui)/edit_region.png"]
    set icons(currentmode,crosshair) \
	[image create photo -file "$ds9(icons,ui)/edit_crosshair.png" ]
    set icons(currentmode,colorbar) \
	[image create photo -file "$ds9(icons,ui)/edit_colorbar.png" ]
    set icons(currentmode,pan) \
	[image create photo -file "$ds9(icons,ui)/edit_pan.png" ]
    set icons(currentmode,zoom) \
	[image create photo -file "$ds9(icons,ui)/edit_zoom.png" ]
    set icons(currentmode,rotate) \
	[image create photo -file "$ds9(icons,ui)/edit_rotate.png" ]
    set icons(currentmode,crop) \
	[image create photo -file "$ds9(icons,ui)/edit_crop.png" ]
    set icons(currentmode,catalog) \
	[image create photo -file "$ds9(icons,ui)/edit_catalog.png" ]
    set icons(currentmode,footprint) \
	[image create photo -file "$ds9(icons,ui)/edit_footprint.png" ]
    set icons(currentmode,examine) \
	[image create photo -file "$ds9(icons,ui)/edit_examine.png" ]
    set icons(currentmode,3d) \
	[image create photo -file "$ds9(icons,ui)/edit_3d.png" ]
    # special case
    set icons(currentmode,default) $icons(currentmode,examine)

    ttk::menubutton $mb.mode -menu $mb.mode.m -direction right -takefocus 0
#	-image $icons(currentmode,$current(mode))
    tooltip::tooltip $mb.mode [msgcat::mc {Edit Mode}]

    ThemeMenu $mb.mode.m
    $mb.mode.m configure -tearoff 0
    IconMenuButton $mb.mode [msgcat::mc {None}] \
	current mode none ChangeMode
    IconMenuButton $mb.mode [msgcat::mc {Region}] \
	current mode region ChangeMode
    IconMenuButton $mb.mode [msgcat::mc {Crosshair}] \
	current mode crosshair ChangeMode
    IconMenuButton $mb.mode [msgcat::mc {Colorbar}] \
	current mode colorbar ChangeMode
    IconMenuButton $mb.mode [msgcat::mc {Pan}] \
	current mode pan ChangeMode
    IconMenuButton $mb.mode [msgcat::mc {Zoom}] \
	current mode zoom ChangeMode
    IconMenuButton $mb.mode [msgcat::mc {Rotate}] \
	current mode rotate ChangeMode
    IconMenuButton $mb.mode [msgcat::mc {Crop}] \
	current mode crop ChangeMode
    IconMenuButton $mb.mode [msgcat::mc {Catalog}] \
	current mode catalog ChangeMode
    IconMenuButton $mb.mode [msgcat::mc {Footprint}] \
	current mode footprint ChangeMode
    IconMenuButton $mb.mode [msgcat::mc {Examine}] \
	current mode examine ChangeMode
    IconMenuButton $mb.mode [msgcat::mc {3D}] \
	current mode 3d ChangeMode

    trace add variable current(mode) write [list IconMenuButtonCB $mb.mode]
    IconMenuButtonCB $mb.mode current mode write

    pack $mb.mode -side top -fill x
}

proc CreateIconsLeftMarkerShape {} {
    global ds9
    global icons
    global marker

    set mb $ds9(icons,left)

    set icons(markershape,circle) \
	[image create photo -file "$ds9(icons,ui)/circle.png"]
    set icons(markershape,annulus) \
	[image create photo -file "$ds9(icons,ui)/annulus.png"]
    set icons(markershape,ellipse) \
	[image create photo -file "$ds9(icons,ui)/ellipse.png"]
    set icons(markershape,box) \
	[image create photo -file "$ds9(icons,ui)/box.png"]
    set icons(markershape,polygon) \
	[image create photo -file "$ds9(icons,ui)/poly.png"]
    set icons(markershape,text) \
	[image create photo -file "$ds9(icons,ui)/text.png"]
    # special case
    set icons(markershape,default) \
	[image create photo -file "$ds9(icons,ui)/region_other.png"]

    set mb.shape $mb.shape

    ttk::menubutton $mb.shape -menu $mb.shape.m -direction right -takefocus 0
#	-image $icons(markershape,$marker(shape))
    tooltip::tooltip $mb.shape [msgcat::mc {Region Shape}]

    ThemeMenu $mb.shape.m
    $mb.shape.m configure -tearoff 0
    IconMenuButton $mb.shape [msgcat::mc {Circle}] marker shape circle {}
    IconMenuButton $mb.shape [msgcat::mc {Annulus}] marker shape annulus {}
    IconMenuButton $mb.shape [msgcat::mc {Ellipse}] marker shape ellipse {}
    IconMenuButton $mb.shape [msgcat::mc {Box}] marker shape box {}
    IconMenuButton $mb.shape [msgcat::mc {Polygon}] marker shape polygon {}
    IconMenuButton $mb.shape [msgcat::mc {Text}] marker shape text {}

    trace add variable marker(shape) write [list IconMenuButtonCB $mb.shape]
    IconMenuButtonCB $mb.shape marker shape write

    pack $mb.shape -side top -fill x
}

proc CreateIconsLeftMarkerInfo {} {
    global ds9

    set mb $ds9(icons,left)

    ttk::button $mb.info -takefocus 0 -command MarkerInfo \
	-image [image create photo -file "$ds9(icons,ui)/region_info.png"]
    tooltip::tooltip $mb.info [msgcat::mc {Get Region Info}]

    ttk::button $mb.list -takefocus 0 -command MarkerListAll \
	-image [image create photo -file "$ds9(icons,ui)/region_list.png"]
    tooltip::tooltip $mb.list [msgcat::mc {List Region}]

    ttk::button $mb.open -takefocus 0 -command MarkerLoad \
	-image [image create photo -file "$ds9(icons,ui)/region_open.png"]
    tooltip::tooltip $mb.open [msgcat::mc {Open Region File}]

    ttk::button $mb.save -takefocus 0 -command MarkerSaveAll \
	-image [image create photo -file "$ds9(icons,ui)/region_save.png"]
    tooltip::tooltip $mb.save [msgcat::mc {Save Region File}]

    pack $mb.info $mb.list $mb.open $mb.save -side top -fill x
}

proc CreateIconsLeftMarkerColor {} {
    global ds9
    global icons
    global marker

    set mb $ds9(icons,left)

    set clrs [list \
		  red floralwhite mistyrose seashell snow linen oldlace \
		  whitesmoke gainsboro lightgray dimgray green bisque \
		  blanchedalmond papayawhip antiquewhite rosybrown moccasin \
		  navajowhite peachpuff wheat tan blue darksalmon lightcoral \
		  burlywood lightsalmon indianred2 salmon sandybrown indianred \
		  coral tomato cyan peru brown sienna chocolate goldenrod \
		  saddlebrown darkgoldenrod darkorange orangered ivory magenta \
		  lightyellow beige cornsilk lemonchiffon lightgoldenrodyellow \
		  palegoldenrod khaki lightgoldenrod darkkhaki darkolivegreen \
		  yellow greenyellow yellowgreen olivedrab gold honeydew \
		  darkseagreen palegreen limegreen forestgreen chartreuse \
		  black lawngreen darkgreen mintcream aquamarine turquoise \
		  seagreen lightseagreen springgreen aliceblue azure white \
		  lightcyan lightblue powderblue lightsteelblue lightslategray \
		  slategray paleturquoise lightskyblue skyblue cadetblue grey \
		  darkslategray cornflowerblue steelblue royalblue dodgerblue \
		  deepskyblue darkturquoise ghostwhite lavender lightslateblue \
		  orange slateblue darkslateblue midnightblue mediumblue \
		  navyblue thistle plum orchid blueviolet purple violet \
		  darkorchid darkviolet lavenderblush pink lightpink \
		  palevioletred hotpink maroon violetred deeppink \
		 ]

    foreach clr $clrs {
	set icons(markercolor,$clr) \
	    [image create photo -file "$ds9(icons,ui)/colors/$clr.png"]
    }
    # special case
    set icons(markercolor,default) $icons(markercolor,black)

    set mb.color $mb.color

    ttk::menubutton $mb.color -menu $mb.color.m -direction right -takefocus 0
#	-image $icons(markercolor,$marker(color)) 
    tooltip::tooltip $mb.color [msgcat::mc {Region Color}]

    ThemeMenu $mb.color.m
    $mb.color.m configure -tearoff 0

    for {set ii 0} {$ii < [llength $clrs]} {incr ii} {
        if {[expr $ii % 11] == 0} {
            set newcol 1
        } else {
            set newcol 0
        }

	IconMenuButton $mb.color {} marker color [lindex $clrs $ii] MarkerColor
	$mb.color.m entryconfigure $ii -columnbreak $newcol -hidemargin 1 
    }

    trace add variable marker(color) write [list IconMenuButtonCB $mb.color]
    IconMenuButtonCB $mb.color marker color write

    pack $mb.color -side top -fill x
}

proc CreateIconsLeftMarkerLineWidth {} {
    global ds9
    global icons
    global marker

    set mb $ds9(icons,left)

    set icons(markerwidth,1) \
	[image create photo -file "$ds9(icons,ui)/lw1.png"]
    set icons(markerwidth,2) \
	[image create photo -file "$ds9(icons,ui)/lw2.png"]
    set icons(markerwidth,3) \
	[image create photo -file "$ds9(icons,ui)/lw3.png"]
    set icons(markerwidth,4) \
	[image create photo -file "$ds9(icons,ui)/lw4.png"]
    # special case
    set icons(markerwidth,default) $icons(markerwidth,1)

    ttk::menubutton $mb.width -menu $mb.width.m -direction right -takefocus 0
#	-image $icons(markerwidth,$marker(width)) 
    tooltip::tooltip $mb.width [msgcat::mc {Region Line Width}]

    ThemeMenu $mb.width.m
    $mb.width.m configure -tearoff 0
    IconMenuButton $mb.width 1 marker width 1 MarkerWidth
    IconMenuButton $mb.width 2 marker width 2 MarkerWidth
    IconMenuButton $mb.width 3 marker width 3 MarkerWidth
    IconMenuButton $mb.width 4 marker width 4 MarkerWidth

    trace add variable marker(width) write [list IconMenuButtonCB $mb.width]
    IconMenuButtonCB $mb.width marker width write

    pack $mb.width -side top -fill x
}

proc CreateIconsLeftMarkerSrc {} {
    global ds9

    set mb $ds9(icons,left)

    ttk::button $mb.src -takefocus 0 \
	-command \
	[list IconButtonToggleCmd marker source [list MarkerProp source]] \
	-image [image create photo -file "$ds9(icons,ui)/srcbkg.png"]
    tooltip::tooltip $mb.src [msgcat::mc {Toggle Source/Background}]

    ttk::button $mb.include -takefocus 0 \
	-command \
	[list IconButtonToggleCmd marker include [list MarkerProp include]] \
	-image [image create photo -file "$ds9(icons,ui)/incexl.png"]
    tooltip::tooltip $mb.include [msgcat::mc {Toggle Include/Exclude}]

    ttk::button $mb.back -takefocus 0 -command MarkerBack \
	-image [image create photo -file "$ds9(icons,ui)/back.png"]
    tooltip::tooltip $mb.back [msgcat::mc {Send to Back}]

    ttk::button $mb.front -takefocus 0 -command MarkerFront \
	-image [image create photo -file "$ds9(icons,ui)/front.png"]
    tooltip::tooltip $mb.front [msgcat::mc {Bring to Front}]

    pack $mb.src $mb.include $mb.back $mb.front -side top -fill x
}

proc CreateIconsLeftMarkerComposite {} {
    global ds9

    set mb $ds9(icons,left)

    ttk::button $mb.composite -takefocus 0 -command CompositeCreate \
	-image [image create photo -file "$ds9(icons,ui)/region_compose.png"]
    tooltip::tooltip $mb.composite [msgcat::mc {Create Composite Region}]

    ttk::button $mb.dissolve -takefocus 0 -command CompositeDelete \
	-image [image create photo -file "$ds9(icons,ui)/region_dissolve.png"]
    tooltip::tooltip $mb.dissolve [msgcat::mc {Dissolve Composite Region}]

    ttk::button $mb.group -takefocus 0 -command GroupCreate \
	-image [image create photo -file "$ds9(icons,ui)/region_group.png"]
    tooltip::tooltip $mb.group [msgcat::mc {Tag New Region Group}]

    pack $mb.composite $mb.dissolve $mb.group -side top -fill x
}
