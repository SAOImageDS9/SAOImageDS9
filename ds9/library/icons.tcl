#  Copyright (C) 1999-2022
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc CreateIcons {} {
    global ds9
    global icons
    
    # top
    set ds9(icons,top) [ttk::frame $ds9(main).iconstop]
    set ds9(icons,top,sep) \
	[ttk::separator $ds9(main).iconstopsep -orient horizontal]

    # left
    set ds9(icons,left) [ttk::frame $ds9(main).iconsleft]
    set ds9(icons,left,sep) \
	[ttk::separator $ds9(main).iconsleftsep -orient vertical]

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

    set mb $ds9(icons,left).edit

    ttk::menubutton $mb -menu $mb.m -text "Edit Mode" \
	-direction right -image $icons(edit,none) -takefocus 0

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

    pack $ds9(icons,left).edit -side top -fill x

    # bottom
    set ds9(icons,bottom) [ttk::frame $ds9(main).iconsbottom]
    set ds9(icons,bottom,sep) \
	[ttk::separator $ds9(main).iconsbottomsep -orient horizontal]

}
