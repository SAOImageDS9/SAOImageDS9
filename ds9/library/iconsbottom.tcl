#  Copyright (C) 1999-2022,2026
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc CreateIconsBottom {} {
    global ds9

    set ds9(icons,bottom) [ttk::frame $ds9(main).iconsbottom]
    set ds9(icons,bottom,sep) \
	[ttk::separator $ds9(main).iconsbottomsep -orient horizontal]

    CreateIconsBottomBin
    CreateIconsBottomBlock
    CreateIconsBottomZoom
    CreateIconsBottomFrame
    CreateIconsBottomView
}

proc ConfigureIconsBottom {} {
    ConfigureIconsBottomBin
    ConfigureIconsBottomBlock
    ConfigureIconsBottomZoom
    ConfigureIconsBottomFrame
    ConfigureIconsBottomView
}


proc CreateIconsBottomBin {} {
    global ds9

    set mb $ds9(icons,bottom)

    ttk::button $mb.binincrease -takefocus 0 -command [list Bin .5 .5]
    tooltip::tooltip $mb.binincrease [msgcat::mc {Increase Bin}]

    ttk::button $mb.binone -takefocus 0 \
	-command [list IconMenuButtonCmd bin factor {1 1} ChangeBinFactor]
    tooltip::tooltip $mb.binone [msgcat::mc {Set Bin to 1}]

    ttk::button $mb.bindecrease -takefocus 0 -command [list Bin 2 2]
    tooltip::tooltip $mb.bindecrease [msgcat::mc {Decrease Bin}]

    ConfigureIconsBottomBin

    pack $mb.binincrease $mb.binone $mb.bindecrease -side left -fill x
}


proc ConfigureIconsBottomBin {} {
    global ds9

    set mb $ds9(icons,bottom)

    $mb.binincrease configure \
	-image [image create photo -file "$ds9(icons,ui)/bin_increase.png"]

    $mb.binone configure \
	-image [image create photo -file "$ds9(icons,ui)/bin_one.png"]

    $mb.bindecrease configure \
	-image [image create photo -file "$ds9(icons,ui)/bin_decrease.png"]
}


proc CreateIconsBottomBlock {} {
    global ds9
    global icons

    set mb $ds9(icons,bottom)

    ttk::button $mb.blockincrease -takefocus 0 -command [list Block .5 .5]
    tooltip::tooltip $mb.blockincrease [msgcat::mc {Increase Block}]

    ttk::button $mb.blockone -takefocus 0 \
	-command [list IconMenuButtonCmd block factor {1 1} ChangeBlock]
    tooltip::tooltip $mb.blockone [msgcat::mc {Set Block to 1}]

    ttk::button $mb.blockdecrease -takefocus 0 -command [list Block 2 2]
    tooltip::tooltip $mb.blockdecrease [msgcat::mc {Decrease Block}]

    ConfigureIconsBottomBlock

    pack $mb.blockincrease $mb.blockone $mb.blockdecrease -side left -fill x
}

proc ConfigureIconsBottomBlock {} {
    global ds9
    set mb $ds9(icons,bottom)

    $mb.blockincrease configure \
	-image [image create photo -file "$ds9(icons,ui)/block_increase.png"]

    $mb.blockone configure \
	-image [image create photo -file "$ds9(icons,ui)/block_one.png"]

    $mb.blockdecrease configure \
	-image [image create photo -file "$ds9(icons,ui)/block_decrease.png"]

}



proc CreateIconsBottomZoom {} {
    global ds9
    global icons

    set mb $ds9(icons,bottom)

    ttk::button $mb.zoomincrease -takefocus 0 -command [list Zoom 2 2]
    tooltip::tooltip $mb.zoomincrease [msgcat::mc {Increase Zoom}]

    ttk::button $mb.zoomone -takefocus 0 \
	-command [list IconMenuButtonCmd current zoom {1 1} ChangeZoom]
    tooltip::tooltip $mb.zoomone [msgcat::mc {Set Zoom to 1}]

    ttk::button $mb.zoomdecrease -takefocus 0 -command [list Zoom .5 .5]
    tooltip::tooltip $mb.zoomdecrease [msgcat::mc {Decrease Zoom}]

    ConfigureIconsBottomZoom

    pack $mb.zoomincrease $mb.zoomone $mb.zoomdecrease -side left -fill x
}


proc ConfigureIconsBottomZoom {} {
    global ds9
    set mb $ds9(icons,bottom)

    $mb.zoomincrease configure \
	-image [image create photo -file "$ds9(icons,ui)/zoom_plus.png"]

    $mb.zoomone configure \
	-image [image create photo -file "$ds9(icons,ui)/zoom_one.png"]

    $mb.zoomdecrease configure \
	-image [image create photo -file "$ds9(icons,ui)/zoom_minus.png"]
}



proc CreateIconsBottomFrame {} {
    global ds9
    global current

    set mb $ds9(icons,bottom)

    ttk::button $mb.add -takefocus 0 -command CreateFrame
    tooltip::tooltip $mb.add [msgcat::mc {Add New Frame}]

    ttk::button $mb.del -takefocus 0 -command DeleteCurrentFrame
    tooltip::tooltip $mb.del [msgcat::mc {Delete Frame}]

    ttk::button $mb.first -takefocus 0 -command FirstFrame
    tooltip::tooltip $mb.first [msgcat::mc {Goto First Frame}]

    ttk::button $mb.prev -takefocus 0 -command PrevFrame
    tooltip::tooltip $mb.prev [msgcat::mc {Goto Previous Frame}]

    ttk::menubutton $mb.layout -menu $mb.layout.m \
	-direction above -takefocus 0
    tooltip::tooltip $mb.layout [msgcat::mc {Frame Layout}]

    ttk::button $mb.next -takefocus 0 -command NextFrame
    tooltip::tooltip $mb.next [msgcat::mc {Goto Next Frame}]

    ttk::button $mb.last -takefocus 0 -command LastFrame
    tooltip::tooltip $mb.last [msgcat::mc {Goto Last Frame}]

    ThemeMenu $mb.layout.m
    $mb.layout.m configure -tearoff 0
    IconMenuButton $mb.layout [msgcat::mc {Single}] \
	current display single DisplayMode
    IconMenuButton $mb.layout [msgcat::mc {Tile}] \
	current display tile DisplayMode
    IconMenuButton $mb.layout [msgcat::mc {Blink}] \
	current display blink DisplayMode
    IconMenuButton $mb.layout [msgcat::mc {Fade}] \
	current display fade DisplayMode

    ConfigureIconsBottomFrame

    trace add variable current(display) write [list IconMenuButtonCB $mb.layout]
    IconMenuButtonCB $mb.layout current display write

    pack $mb.add $mb.del $mb.first $mb.prev $mb.layout $mb.next $mb.last \
	-side left -fill x
}


proc ConfigureIconsBottomFrame {} {
    global ds9
    global icons

    set mb $ds9(icons,bottom)

    set icons(currentdisplay,single) \
	[image create photo -file "$ds9(icons,ui)/frame_single.png"]
    set icons(currentdisplay,tile) \
	[image create photo -file "$ds9(icons,ui)/frame_tile.png"]
    set icons(currentdisplay,blink) \
	[image create photo -file "$ds9(icons,ui)/frame_blink.png"]
    set icons(currentdisplay,fade) \
	[image create photo -file "$ds9(icons,ui)/frame_fade.png"]
    # special case, should not be used
    set icons(currentdisplay,default) $icons(currentdisplay,single)

    $mb.layout.m entryconfig 0 -image $icons(currentdisplay,single)
    $mb.layout.m entryconfig 1 -image $icons(currentdisplay,tile)
    $mb.layout.m entryconfig 2 -image $icons(currentdisplay,blink)
    $mb.layout.m entryconfig 3 -image $icons(currentdisplay,fade)

    $mb.add configure \
	-image [image create photo -file "$ds9(icons,ui)/frame_add.png"]

    $mb.del configure \
	-image [image create photo -file "$ds9(icons,ui)/frame_del.png"]

    $mb.first configure \
	-image [image create photo -file "$ds9(icons,ui)/frame_first.png"]

    $mb.prev configure \
	-image [image create photo -file "$ds9(icons,ui)/frame_prev.png"]

    $mb.next configure \
	-image [image create photo -file "$ds9(icons,ui)/frame_next.png"]

    $mb.last configure \
	-image [image create photo -file "$ds9(icons,ui)/frame_last.png"]

}



proc CreateIconsBottomView {} {
    global ds9
    global icons

    set mb $ds9(icons,bottom)

    ttk::button $mb.vertgraph -takefocus 0 \
	-command [list IconButtonToggleCmd view graph,vert LayoutFrames]
    tooltip::tooltip $mb.vertgraph [msgcat::mc {Toggle Vertical Graph}]

    ttk::button $mb.horzgraph -takefocus 0 \
	-command [list IconButtonToggleCmd view graph,horz LayoutFrames]
    tooltip::tooltip $mb.horzgraph [msgcat::mc {Toggle Horizontal Graph}]

    ttk::button $mb.colorbar -takefocus 0 \
	-command [list IconButtonToggleCmd view colorbar LayoutFrames]
    tooltip::tooltip $mb.colorbar [msgcat::mc {Toggle Colorbar}]

    ConfigureIconsBottomView

    pack $mb.vertgraph $mb.horzgraph $mb.colorbar -side left -fill x
}

proc ConfigureIconsBottomView {} {
    global ds9
    set mb $ds9(icons,bottom)

    $mb.vertgraph configure -image [image create photo -file \
        "$ds9(icons,ui)/view_vertical.png"]
    $mb.horzgraph configure -image [image create photo -file \
        "$ds9(icons,ui)/view_horizontal.png"]
    $mb.colorbar configure -image [image create photo -file \
        "$ds9(icons,ui)/view_colorbar.png"]
}
