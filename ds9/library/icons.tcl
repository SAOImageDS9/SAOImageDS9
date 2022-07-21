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
    
    set ds9(icons,left) [ttk::frame $ds9(main).iconsleft]
    set ds9(icons,left,sep) \
	[ttk::separator $ds9(main).iconsleftsep -orient vertical]

    CreateIconsLeftEdit
    CreateIconsLeftMarkerShape
    CreateIconsLeftMarkerLineWidth
}

proc CreateIconsLeftEdit {} {
    global ds9
    global icons
    
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
    IconMenuButtonItem $mb $icons(edit,none) current mode none ChangeMode
    IconMenuButtonItem $mb $icons(edit,region) current mode region ChangeMode
    IconMenuButtonItem $mb $icons(edit,crosshair) current mode crosshair ChangeMode
    IconMenuButtonItem $mb $icons(edit,colorbar) current mode colorbar ChangeMode
    IconMenuButtonItem $mb $icons(edit,pan) current mode pan ChangeMode
    IconMenuButtonItem $mb $icons(edit,zoom) current mode zoom ChangeMode
    IconMenuButtonItem $mb $icons(edit,rotate) current mode rotate ChangeMode
    IconMenuButtonItem $mb $icons(edit,crop) current mode crop ChangeMode
    IconMenuButtonItem $mb $icons(edit,catalog) current mode catalog ChangeMode
    IconMenuButtonItem $mb $icons(edit,footprint) current mode footprint ChangeMode
    IconMenuButtonItem $mb $icons(edit,examine) current mode examine ChangeMode
    IconMenuButtonItem $mb $icons(edit,3d) current mode 3d ChangeMode

    pack $mb -side top -fill x
}

proc CreateIconsLeftMarkerShape {} {
    global ds9
    global icons
    
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
    IconMenuButtonItem $mb $icons(marker,shape,circle) marker shape circle {}
    IconMenuButtonItem $mb $icons(marker,shape,annulus) marker shape annulus {}
    IconMenuButtonItem $mb $icons(marker,shape,ellipse) marker shape ellipse {}
    IconMenuButtonItem $mb $icons(marker,shape,box) marker shape box {}
    IconMenuButtonItem $mb $icons(marker,shape,polygon) marker shape polygon {}
    IconMenuButtonItem $mb $icons(marker,shape,text) marker shape text {}

    pack $mb -side top -fill x
}

proc CreateIconsLeftMarkerLineWidth {} {
    global ds9
    global icons
    
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
    IconMenuButtonItem $mb $icons(marker,width,1) marker width 1 {}
    IconMenuButtonItem $mb $icons(marker,width,2) marker width 2 {}
    IconMenuButtonItem $mb $icons(marker,width,3) marker width 3 {}
    IconMenuButtonItem $mb $icons(marker,width,4) marker width 4 {}

    pack $mb -side top -fill x
}

proc CreateIconsBottom {} {
    global ds9
    
    set ds9(icons,bottom) [ttk::frame $ds9(main).iconsbottom]
    set ds9(icons,bottom,sep) \
	[ttk::separator $ds9(main).iconsbottomsep -orient horizontal]
}

