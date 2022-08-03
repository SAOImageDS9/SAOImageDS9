#  Copyright (C) 1999-2022
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
}

proc CreateIconsBottomBin {} {
    global ds9
    global icons

    set mb $ds9(icons,bottom)

    set icons(bin,increase) \
	[image create photo -file "$ds9(root)/icons/ui/bin_increase.png"]
    set icons(bin,one) \
	[image create photo -file "$ds9(root)/icons/ui/bin_one.png"]
    set icons(bin,decrease) \
	[image create photo -file "$ds9(root)/icons/ui/bin_decrease.png"]

    ttk::button $mb.binincrease -takefocus 0 -image $icons(bin,increase) \
	-command [list Bin .5 .5]
    tooltip::tooltip $mb.binincrease [msgcat::mc {Increase Bin}]

    ttk::button $mb.binone -takefocus 0 -image $icons(bin,one) \
	-command [list IconMenuButtonCmd bin factor {1 1} ChangeBinFactor] 
    tooltip::tooltip $mb.binone [msgcat::mc {Set Bin to 1}]

    ttk::button $mb.bindecrease -takefocus 0 -image $icons(bin,decrease) \
	-command [list Bin 2 2]
    tooltip::tooltip $mb.bindecrease [msgcat::mc {Decrease Bin}]

    pack $mb.binincrease $mb.binone $mb.bindecrease -side left -fill x
}

proc CreateIconsBottomBlock {} {
    global ds9
    global icons

    set mb $ds9(icons,bottom)

    set icons(block,increase) \
	[image create photo -file "$ds9(root)/icons/ui/block_increase.png"]
    set icons(block,one) \
	[image create photo -file "$ds9(root)/icons/ui/block_one.png"]
    set icons(block,decrease) \
	[image create photo -file "$ds9(root)/icons/ui/block_decrease.png"]

    ttk::button $mb.blockincrease -takefocus 0 -image $icons(block,increase) \
	-command [list Block .5 .5]
    tooltip::tooltip $mb.blockincrease [msgcat::mc {Increase Block}]

    ttk::button $mb.blockone -takefocus 0 -image $icons(block,one) \
	-command [list IconMenuButtonCmd block factor {1 1} ChangeBlock] 
    tooltip::tooltip $mb.blockone [msgcat::mc {Set Block to 1}]

    ttk::button $mb.blockdecrease -takefocus 0 -image $icons(block,decrease) \
	-command [list Block 2 2]
    tooltip::tooltip $mb.blockdecrease [msgcat::mc {Decrease Block}]

    pack $mb.blockincrease $mb.blockone $mb.blockdecrease -side left -fill x
}

proc CreateIconsBottomZoom {} {
    global ds9
    global icons

    set mb $ds9(icons,bottom)

    set icons(zoom,increase) \
	[image create photo -file "$ds9(root)/icons/ui/zoom_plus.png"]
    set icons(zoom,one) \
	[image create photo -file "$ds9(root)/icons/ui/zoom_one.png"]
    set icons(zoom,decrease) \
	[image create photo -file "$ds9(root)/icons/ui/zoom_plus.png"]

    ttk::button $mb.zoomincrease -takefocus 0 -image $icons(zoom,increase) \
	-command [list Zoom 2 2]
    tooltip::tooltip $mb.zoomincrease [msgcat::mc {Increase Zoom}]

    ttk::button $mb.zoomone -takefocus 0 -image $icons(zoom,one) \
	-command [list IconMenuButtonCmd current zoom {1 1} ChangeZoom] 
    tooltip::tooltip $mb.zoomone [msgcat::mc {Set Zoom to 1}]

    ttk::button $mb.zoomdecrease -takefocus 0 -image $icons(zoom,decrease) \
	-command [list Zoom .5 .5]
    tooltip::tooltip $mb.zoomdecrease [msgcat::mc {Decrease Zoom}]

    pack $mb.zoomincrease $mb.zoomone $mb.zoomdecrease -side left -fill x
}

proc CreateIconsBottomFrame {} {
}
