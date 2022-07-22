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
    ttk::button $mb.list -takefocus 0 -image $icons(marker,list) \
	-command [list MarkerList {}]
    ttk::button $mb.open -takefocus 0 -image $icons(marker,open) \
	-command MarkerLoad
    ttk::button $mb.save -takefocus 0 -image $icons(marker,save) \
	-command [list MarkerSave {}]

    pack $mb.info $mb.list $mb.open $mb.save -side top -fill x

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

    ThemeMenu $mb.m
    $mb.m configure -tearoff 0
    IconMenuButton $mb $icons(marker,width,1) marker width 1 MarkerWidth
    IconMenuButton $mb $icons(marker,width,2) marker width 2 MarkerWidth
    IconMenuButton $mb $icons(marker,width,3) marker width 3 MarkerWidth
    IconMenuButton $mb $icons(marker,width,4) marker width 4 MarkerWidth

    pack $mb -side top -fill x

    # Src/Bg/Back/Forward
    set mb $ds9(icons,left)

    set icons(marker,srcbkg) \
	[image create photo -file "$ds9(root)/icons/ui/srcbkg.png"]
    set icons(marker,incexl) \
	[image create photo -file "$ds9(root)/icons/ui/incexl.png"]
    set icons(marker,back) \
	[image create photo -file "$ds9(root)/icons/ui/back.png"]
    set icons(marker,front) \
	[image create photo -file "$ds9(root)/icons/ui/front.png"]

    ttk::button $mb.srcbkg -takefocus 0 -image $icons(marker,srcbkg) -command \
	[list IconButtonToggleCmd marker source [list MarkerProp source]]
    ttk::button $mb.incexl -takefocus 0 -image $icons(marker,incexl) -command \
	[list IconButtonToggleCmd marker include [list MarkerProp include]]
    ttk::button $mb.back -takefocus 0 -image $icons(marker,back) \
	-command MarkerBack
    ttk::button $mb.front -takefocus 0 -image $icons(marker,front) \
	-command MarkerFront

    pack $mb.srcbkg $mb.incexl $mb.back $mb.front -side top -fill x

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
    ttk::button $mb.dissolve -takefocus 0 -image $icons(marker,dissolve) \
	-command CompositeDelete
    ttk::button $mb.group -takefocus 0 -image $icons(marker,group) \
	-command GroupCreate

    pack $mb.composite $mb.dissolve $mb.group -side top -fill x
}

proc CreateIconsBottom {} {
    global ds9
    
    set ds9(icons,bottom) [ttk::frame $ds9(main).iconsbottom]
    set ds9(icons,bottom,sep) \
	[ttk::separator $ds9(main).iconsbottomsep -orient horizontal]
}

