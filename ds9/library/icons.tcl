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
    set mb $ds9(icons,left).edit

    set icons(edit,none) \
	[image create photo -file "$ds9(root)/icons/ui/edit_none.png"]
    set icons(edit,region) \
	[image create photo -file "$ds9(root)/icons/ui/edit_region.png"]
    set icons(edit,crosshair) \
	[image create photo -file "$ds9(root)/icons/ui/edit_crosshair.png" ]
    set icons(edit,colorbar) \
	[image create photo -file "$ds9(root)/icons/ui/edit_colorbar.png" ]
    set icons(edit,pan) \
	[image create photo -file "$ds9(root)/icons/ui/edit_pan.png" ]
    set icons(edit,zoom) \
	[image create photo -file "$ds9(root)/icons/ui/edit_zoom.png" ]
    set icons(edit,rotate) \
	[image create photo -file "$ds9(root)/icons/ui/edit_rotate.png" ]
    set icons(edit,crop) \
	[image create photo -file "$ds9(root)/icons/ui/edit_crop.png" ]
    set icons(edit,catalog) \
	[image create photo -file "$ds9(root)/icons/ui/edit_catalog.png" ]
    set icons(edit,footprint) \
	[image create photo -file "$ds9(root)/icons/ui/edit_footprint.png" ]
    set icons(edit,examine) \
	[image create photo -file "$ds9(root)/icons/ui/edit_examine.png" ]
    set icons(edit,3d) \
	[image create photo -file "$ds9(root)/icons/ui/edit_3d.png" ]

    ttk::menubutton $mb -menu $mb.m -direction right -takefocus 0 \
	-image $icons(edit,none)
    tooltip::tooltip $mb "Edit Mode"

    ThemeMenu $mb.m
    $mb.m configure -tearoff 0
    IconMenuButton $mb $icons(edit,none) current mode none ChangeMode
    IconMenuButton $mb $icons(edit,region) current mode region ChangeMode
    IconMenuButton $mb $icons(edit,crosshair) current mode crosshair ChangeMode
    IconMenuButton $mb $icons(edit,colorbar) current mode colorbar ChangeMode
    IconMenuButton $mb $icons(edit,pan) current mode pan ChangeMode
    IconMenuButton $mb $icons(edit,zoom) current mode zoom ChangeMode
    IconMenuButton $mb $icons(edit,rotate) current mode rotate ChangeMode
    IconMenuButton $mb $icons(edit,crop) current mode crop ChangeMode
    IconMenuButton $mb $icons(edit,catalog) current mode catalog ChangeMode
    IconMenuButton $mb $icons(edit,footprint) current mode footprint ChangeMode
    IconMenuButton $mb $icons(edit,examine) current mode examine ChangeMode
    IconMenuButton $mb $icons(edit,3d) current mode 3d ChangeMode

    pack $mb -side top -fill x
    
    # Shape
    set mb $ds9(icons,left).markershape

    set icons(marker,shape,circle) \
	[image create photo -file "$ds9(root)/icons/ui/circle.png"]
    set icons(marker,shape,annulus) \
	[image create photo -file "$ds9(root)/icons/ui/annulus.png"]
    set icons(marker,shape,ellipse) \
	[image create photo -file "$ds9(root)/icons/ui/ellipse.png"]
    set icons(marker,shape,box) \
	[image create photo -file "$ds9(root)/icons/ui/box.png"]
    set icons(marker,shape,polygon) \
	[image create photo -file "$ds9(root)/icons/ui/poly.png"]
    set icons(marker,shape,text) \
	[image create photo -file "$ds9(root)/icons/ui/text.png"]

    ttk::menubutton $mb -menu $mb.m -direction right \
	-image $icons(marker,shape,circle) -takefocus 0
    tooltip::tooltip $mb "Region Shape"

    ThemeMenu $mb.m
    $mb.m configure -tearoff 0
    IconMenuButton $mb $icons(marker,shape,circle) marker shape circle {}
    IconMenuButton $mb $icons(marker,shape,annulus) marker shape annulus {}
    IconMenuButton $mb $icons(marker,shape,ellipse) marker shape ellipse {}
    IconMenuButton $mb $icons(marker,shape,box) marker shape box {}
    IconMenuButton $mb $icons(marker,shape,polygon) marker shape polygon {}
    IconMenuButton $mb $icons(marker,shape,text) marker shape text {}

    pack $mb -side top -fill x

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
    tooltip::tooltip $mb.info "Get Region Info"

    ttk::button $mb.list -takefocus 0 -image $icons(marker,list) \
	-command [list MarkerList {}]
    tooltip::tooltip $mb.list "List Region"

    ttk::button $mb.open -takefocus 0 -image $icons(marker,open) \
	-command MarkerLoad
    tooltip::tooltip $mb.open "Open Region File"

    ttk::button $mb.save -takefocus 0 -image $icons(marker,save) \
	-command [list MarkerSave {}]
    tooltip::tooltip $mb.save "Save Region File"

    pack $mb.info $mb.list $mb.open $mb.save -side top -fill x

    # Color
    set mb $ds9(icons,left).color

    set x11 \
	[list \
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

    set clricons {}
    foreach clr $x11 {
	image create photo icons(color,$clr) \
	    -file "$ds9(root)/icons/ui/colors/$clr.png" 
      lappend clricons icons(color,$clr)
    }

    ttk::menubutton $mb -menu $mb.m -direction right \
	-image [lindex $clricons 11] -takefocus 0
    tooltip::tooltip $mb "Region Color"

    ThemeMenu $mb.m
    $mb.m configure -tearoff 0

    for {set ii 0} {$ii < [llength $clricons]} {incr ii} {
        if {[expr $ii % 11] == 0} {
            set newcol 1
        } else {
            set newcol 0
        }

	IconMenuButton $mb [lindex $clricons $ii] marker color \
	    [lindex $x11 $ii] MarkerColor
	$mb.m entryconfigure $ii -columnbreak $newcol -hidemargin 1 
    }

    pack $mb -side top -fill x

    # Line Width
    set mb $ds9(icons,left).markerlinewidth

    set icons(marker,width,1) \
	[image create photo -file "$ds9(root)/icons/ui/lw1.png"]
    set icons(marker,width,2) \
	[image create photo -file "$ds9(root)/icons/ui/lw2.png"]
    set icons(marker,width,3) \
	[image create photo -file "$ds9(root)/icons/ui/lw3.png"]
    set icons(marker,width,4) \
	[image create photo -file "$ds9(root)/icons/ui/lw4.png"]

    ttk::menubutton $mb -menu $mb.m -direction right \
	-image $icons(marker,width,1) -takefocus 0
    tooltip::tooltip $mb "Region Line Width"

    ThemeMenu $mb.m
    $mb.m configure -tearoff 0
    IconMenuButton $mb $icons(marker,width,1) marker width 1 MarkerWidth
    IconMenuButton $mb $icons(marker,width,2) marker width 2 MarkerWidth
    IconMenuButton $mb $icons(marker,width,3) marker width 3 MarkerWidth
    IconMenuButton $mb $icons(marker,width,4) marker width 4 MarkerWidth

    pack $mb -side top -fill x

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
    tooltip::tooltip $mb.src "Toggle Source/Background"

    ttk::button $mb.include -takefocus 0 -image $icons(marker,include) \
	-command \
	[list IconButtonToggleCmd marker include [list MarkerProp include]]
    tooltip::tooltip $mb.include "Toggle Include/Exclude"

    ttk::button $mb.back -takefocus 0 -image $icons(marker,back) \
	-command MarkerBack
    tooltip::tooltip $mb.back "Send to Back"

    ttk::button $mb.front -takefocus 0 -image $icons(marker,front) \
	-command MarkerFront
    tooltip::tooltip $mb.front "Bring to Front"

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
    tooltip::tooltip $mb.composite "Create Composite Region"

    ttk::button $mb.dissolve -takefocus 0 -image $icons(marker,dissolve) \
	-command CompositeDelete
    tooltip::tooltip $mb.dissolve "Dissolve Composite Region"

    ttk::button $mb.group -takefocus 0 -image $icons(marker,group) \
	-command GroupCreate
    tooltip::tooltip $mb.group "Tag New Region Group"

    pack $mb.composite $mb.dissolve $mb.group -side top -fill x
}

proc CreateIconsBottom {} {
    global ds9
    
    set ds9(icons,bottom) [ttk::frame $ds9(main).iconsbottom]
    set ds9(icons,bottom,sep) \
	[ttk::separator $ds9(main).iconsbottomsep -orient horizontal]
}

