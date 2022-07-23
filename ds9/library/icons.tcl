#  Copyright (C) 1999-2022
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc CreateIcons {} {
    CreateIconsLeft
    CreateIconsTop
    CreateIconsBottom
}

proc CreateIconsTop {} {
    global ds9

    set ds9(icons,top) [ttk::frame $ds9(main).iconstop]
    set ds9(icons,top,sep) \
	[ttk::separator $ds9(main).iconstopsep -orient horizontal]
}

proc CreateIconsLeft {} {
    global ds9
    global icons
    
    set ds9(icons,left) [ttk::frame $ds9(main).iconsleft]
    set ds9(icons,left,sep) \
	[ttk::separator $ds9(main).iconsleftsep -orient vertical]

    # Edit
    set mb $ds9(icons,left).mode

    set icons(currentmode,none) \
	[image create photo -file "$ds9(root)/icons/ui/edit_none.png"]
    set icons(currentmode,region) \
	[image create photo -file "$ds9(root)/icons/ui/edit_region.png"]
    set icons(currentmode,crosshair) \
	[image create photo -file "$ds9(root)/icons/ui/edit_crosshair.png" ]
    set icons(currentmode,colorbar) \
	[image create photo -file "$ds9(root)/icons/ui/edit_colorbar.png" ]
    set icons(currentmode,pan) \
	[image create photo -file "$ds9(root)/icons/ui/edit_pan.png" ]
    set icons(currentmode,zoom) \
	[image create photo -file "$ds9(root)/icons/ui/edit_zoom.png" ]
    set icons(currentmode,rotate) \
	[image create photo -file "$ds9(root)/icons/ui/edit_rotate.png" ]
    set icons(currentmode,crop) \
	[image create photo -file "$ds9(root)/icons/ui/edit_crop.png" ]
    set icons(currentmode,catalog) \
	[image create photo -file "$ds9(root)/icons/ui/edit_catalog.png" ]
    set icons(currentmode,footprint) \
	[image create photo -file "$ds9(root)/icons/ui/edit_footprint.png" ]
    set icons(currentmode,examine) \
	[image create photo -file "$ds9(root)/icons/ui/edit_examine.png" ]
    # special case
    set icons(currentmode,iexam) \
	[image create photo -file "$ds9(root)/icons/ui/edit_examine.png" ]
    set icons(currentmode,3d) \
	[image create photo -file "$ds9(root)/icons/ui/edit_3d.png" ]

    global current
    ttk::menubutton $mb -menu $mb.m -direction right -takefocus 0 \
	-image $icons(currentmode,$current(mode))
    tooltip::tooltip $mb [msgcat::mc {Edit Mode}]

    ThemeMenu $mb.m
    $mb.m configure -tearoff 0
    IconMenuButton $mb $icons(currentmode,none) current mode none ChangeMode
    IconMenuButton $mb $icons(currentmode,region) current mode region ChangeMode
    IconMenuButton $mb $icons(currentmode,crosshair) current mode crosshair ChangeMode
    IconMenuButton $mb $icons(currentmode,colorbar) current mode colorbar ChangeMode
    IconMenuButton $mb $icons(currentmode,pan) current mode pan ChangeMode
    IconMenuButton $mb $icons(currentmode,zoom) current mode zoom ChangeMode
    IconMenuButton $mb $icons(currentmode,rotate) current mode rotate ChangeMode
    IconMenuButton $mb $icons(currentmode,crop) current mode crop ChangeMode
    IconMenuButton $mb $icons(currentmode,catalog) current mode catalog ChangeMode
    IconMenuButton $mb $icons(currentmode,footprint) current mode footprint ChangeMode
    IconMenuButton $mb $icons(currentmode,examine) current mode examine ChangeMode
    IconMenuButton $mb $icons(currentmode,3d) current mode 3d ChangeMode

    pack $mb -side top -fill x
    
    global current
    trace add variable current(mode) write [list IconMenuButtonSync $mb]

    # Shape
    set mb $ds9(icons,left).markershape

    set icons(markershape,circle) \
	[image create photo -file "$ds9(root)/icons/ui/circle.png"]
    set icons(markershape,annulus) \
	[image create photo -file "$ds9(root)/icons/ui/annulus.png"]
    set icons(markershape,ellipse) \
	[image create photo -file "$ds9(root)/icons/ui/ellipse.png"]
    set icons(markershape,box) \
	[image create photo -file "$ds9(root)/icons/ui/box.png"]
    set icons(markershape,polygon) \
	[image create photo -file "$ds9(root)/icons/ui/poly.png"]
    set icons(markershape,text) \
	[image create photo -file "$ds9(root)/icons/ui/text.png"]
    # special case
    set icons(markershape,default) \
	[image create photo -file "$ds9(root)/icons/ui/region_other.png"]

    global marker
    ttk::menubutton $mb -menu $mb.m -direction right \
	-image $icons(markershape,$marker(shape)) -takefocus 0
    tooltip::tooltip $mb [msgcat::mc {Region Shape}]

    ThemeMenu $mb.m
    $mb.m configure -tearoff 0
    IconMenuButton $mb $icons(markershape,circle) marker shape circle {}
    IconMenuButton $mb $icons(markershape,annulus) marker shape annulus {}
    IconMenuButton $mb $icons(markershape,ellipse) marker shape ellipse {}
    IconMenuButton $mb $icons(markershape,box) marker shape box {}
    IconMenuButton $mb $icons(markershape,polygon) marker shape polygon {}
    IconMenuButton $mb $icons(markershape,text) marker shape text {}

    pack $mb -side top -fill x

    global marker
    trace add variable marker(shape) write [list IconMenuButtonSync $mb]

    # Info,List,Open,Save
    set mb $ds9(icons,left)

    set icons(marker,info) \
	[image create photo -file "$ds9(root)/icons/ui/region_info.png"]
    set icons(marker,list) \
	[image create photo -file "$ds9(root)/icons/ui/region_list.png"]
    set icons(marker,open) \
	[image create photo -file "$ds9(root)/icons/ui/region_open.png"]
    set icons(marker,save) \
	[image create photo -file "$ds9(root)/icons/ui/region_save.png"]

    ttk::button $mb.info -takefocus 0 -image $icons(marker,info) \
	-command MarkerInfo
    tooltip::tooltip $mb.info [msgcat::mc {Get Region Info}]

    ttk::button $mb.list -takefocus 0 -image $icons(marker,list) \
	-command [list MarkerList {}]
    tooltip::tooltip $mb.list [msgcat::mc {List Region}]

    ttk::button $mb.open -takefocus 0 -image $icons(marker,open) \
	-command MarkerLoad
    tooltip::tooltip $mb.open [msgcat::mc {Open Region File}]

    ttk::button $mb.save -takefocus 0 -image $icons(marker,save) \
	-command [list MarkerSave {}]
    tooltip::tooltip $mb.save [msgcat::mc {Save Region File}]

    pack $mb.info $mb.list $mb.open $mb.save -side top -fill x

    # Color
    set mb $ds9(icons,left).color

    set clrs [list \
    "red" "floralwhite" "mistyrose" "seashell" "snow" "linen" "oldlace" \
    "whitesmoke" "gainsboro" "lightgray" "dimgray" "green" "bisque" \
    "blanchedalmond" "papayawhip" "antiquewhite" "rosybrown" "moccasin" \
    "navajowhite" "peachpuff" "wheat" "tan" "blue" "darksalmon" "lightcoral" \
    "burlywood" "lightsalmon" "indianred2" "salmon" "sandybrown" "indianred" \
    "coral" "tomato" "cyan" "peru" "brown" "sienna" "chocolate" "goldenrod" \
    "saddlebrown" "darkgoldenrod" "darkorange" "orangered" "ivory" "magenta" \
    "lightyellow" "beige" "cornsilk" "lemonchiffon" "lightgoldenrodyellow" \
    "palegoldenrod" "khaki" "lightgoldenrod" "darkkhaki" "darkolivegreen" \
    "yellow" "greenyellow" "yellowgreen" "olivedrab" "gold" "honeydew" \
    "darkseagreen" "palegreen" "limegreen" "forestgreen" "chartreuse" \
    "black" "lawngreen" "darkgreen" "mintcream" "aquamarine" "turquoise" \
    "seagreen" "lightseagreen" "springgreen" "aliceblue" "azure" "white" \
    "lightcyan" "lightblue" "powderblue" "lightsteelblue" "lightslategray" \
    "slategray" "paleturquoise" "lightskyblue" "skyblue" "cadetblue" "grey" \
    "darkslategray" "cornflowerblue" "steelblue" "royalblue" "dodgerblue" \
    "deepskyblue" "darkturquoise" "ghostwhite" "lavender" "lightslateblue" \
    "orange" "slateblue" "darkslateblue" "midnightblue" "mediumblue" \
    "navyblue" "thistle" "plum" "orchid" "blueviolet" "purple" "violet" \
    "darkorchid" "darkviolet" "lavenderblush" "pink" "lightpink" \
    "palevioletred" "hotpink" "maroon" "violetred" "deeppink" \
		      ]

    foreach clr $clrs {
	set icons(markercolor,$clr) \
	    [image create photo -file "$ds9(root)/icons/ui/colors/$clr.png"]
    }

    global marker
    ttk::menubutton $mb -menu $mb.m -direction right \
	-image $icons(markercolor,$marker(color)) -takefocus 0
    tooltip::tooltip $mb [msgcat::mc {Region Color}]

    ThemeMenu $mb.m
    $mb.m configure -tearoff 0

    for {set ii 0} {$ii < [llength $clrs]} {incr ii} {
        if {[expr $ii % 11] == 0} {
            set newcol 1
        } else {
            set newcol 0
        }

	IconMenuButton $mb $icons(markercolor,[lindex $clrs $ii]) \
	    marker color [lindex $clrs $ii] MarkerColor
	$mb.m entryconfigure $ii -columnbreak $newcol -hidemargin 1 
    }

    pack $mb -side top -fill x

    global marker
    trace add variable marker(color) write [list IconMenuButtonSync $mb]

    # Line Width
    set mb $ds9(icons,left).markerlinewidth

    set icons(markerwidth,1) \
	[image create photo -file "$ds9(root)/icons/ui/lw1.png"]
    set icons(markerwidth,2) \
	[image create photo -file "$ds9(root)/icons/ui/lw2.png"]
    set icons(markerwidth,3) \
	[image create photo -file "$ds9(root)/icons/ui/lw3.png"]
    set icons(markerwidth,4) \
	[image create photo -file "$ds9(root)/icons/ui/lw4.png"]

    global marker
    ttk::menubutton $mb -menu $mb.m -direction right \
	-image $icons(markerwidth,$marker(width)) -takefocus 0
    tooltip::tooltip $mb [msgcat::mc {Region Line Width}]

    ThemeMenu $mb.m
    $mb.m configure -tearoff 0
    IconMenuButton $mb $icons(markerwidth,1) marker width 1 MarkerWidth
    IconMenuButton $mb $icons(markerwidth,2) marker width 2 MarkerWidth
    IconMenuButton $mb $icons(markerwidth,3) marker width 3 MarkerWidth
    IconMenuButton $mb $icons(markerwidth,4) marker width 4 MarkerWidth

    pack $mb -side top -fill x

    global marker
    trace add variable marker(width) write [list IconMenuButtonSync $mb]

    # Src/Bg/Back/Forward
    set mb $ds9(icons,left)

    set icons(marker,src) \
	[image create photo -file "$ds9(root)/icons/ui/srcbkg.png"]
    set icons(marker,include) \
	[image create photo -file "$ds9(root)/icons/ui/incexl.png"]
    set icons(marker,back) \
	[image create photo -file "$ds9(root)/icons/ui/back.png"]
    set icons(marker,front) \
	[image create photo -file "$ds9(root)/icons/ui/front.png"]

    ttk::button $mb.src -takefocus 0 -image $icons(marker,src) -command \
	[list IconButtonToggleCmd marker source [list MarkerProp source]]
    tooltip::tooltip $mb.src [msgcat::mc {Toggle Source/Background}]

    ttk::button $mb.include -takefocus 0 -image $icons(marker,include) \
	-command \
	[list IconButtonToggleCmd marker include [list MarkerProp include]]
    tooltip::tooltip $mb.include [msgcat::mc {Toggle Include/Exclude}]

    ttk::button $mb.back -takefocus 0 -image $icons(marker,back) \
	-command MarkerBack
    tooltip::tooltip $mb.back [msgcat::mc {Send to Back}]

    ttk::button $mb.front -takefocus 0 -image $icons(marker,front) \
	-command MarkerFront
    tooltip::tooltip $mb.front [msgcat::mc {Bring to Front}]

    pack $mb.src $mb.include $mb.back $mb.front -side top -fill x

    # Composite/Group
    set mb $ds9(icons,left)

    set icons(marker,composite) \
	[image create photo -file "$ds9(root)/icons/ui/region_compose.png"]
    set icons(marker,dissolve) \
	[image create photo -file "$ds9(root)/icons/ui/region_dissolve.png"]
    set icons(marker,group) \
	[image create photo -file "$ds9(root)/icons/ui/region_group.png"]

    ttk::button $mb.composite -takefocus 0 -image $icons(marker,composite) \
	-command CompositeCreate
    tooltip::tooltip $mb.composite [msgcat::mc {Create Composite Region}]

    ttk::button $mb.dissolve -takefocus 0 -image $icons(marker,dissolve) \
	-command CompositeDelete
    tooltip::tooltip $mb.dissolve [msgcat::mc {Dissolve Composite Region}]

    ttk::button $mb.group -takefocus 0 -image $icons(marker,group) \
	-command GroupCreate
    tooltip::tooltip $mb.group [msgcat::mc {Tag New Region Group}]

    pack $mb.composite $mb.dissolve $mb.group -side top -fill x
}

proc CreateIconsBottom {} {
    global ds9
    
    set ds9(icons,bottom) [ttk::frame $ds9(main).iconsbottom]
    set ds9(icons,bottom,sep) \
	[ttk::separator $ds9(main).iconsbottomsep -orient horizontal]
}
