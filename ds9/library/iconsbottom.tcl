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
    CreateIconsBottomView
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
    global ds9
    global icons

    set mb $ds9(icons,bottom)

    set icons(frame,add) \
	[image create photo -file "$ds9(root)/icons/ui/frame_add.png"]
    set icons(frame,del) \
	[image create photo -file "$ds9(root)/icons/ui/frame_del.png"]
    set icons(frame,first) \
	[image create photo -file "$ds9(root)/icons/ui/frame_first.png"]
    set icons(frame,prev) \
	[image create photo -file "$ds9(root)/icons/ui/frame_prev.png"]
    set icons(frame,next) \
	[image create photo -file "$ds9(root)/icons/ui/frame_next.png"]
    set icons(frame,last) \
	[image create photo -file "$ds9(root)/icons/ui/frame_last.png"]

    ttk::button $mb.frameadd -takefocus 0 -image $icons(frame,add) \
	-command CreateFrame
    tooltip::tooltip $mb.frameadd [msgcat::mc {Add New Frame}]

    ttk::button $mb.framedel -takefocus 0 -image $icons(frame,del) \
	-command DeleteCurrentFrame
    tooltip::tooltip $mb.framedel [msgcat::mc {Delete Frame}]

    ttk::button $mb.framefirst -takefocus 0 -image $icons(frame,first) \
	-command FirstFrame
    tooltip::tooltip $mb.framefirst [msgcat::mc {Goto First Frame}]

    ttk::button $mb.frameprev -takefocus 0 -image $icons(frame,prev) \
	-command PrevFrame
    tooltip::tooltip $mb.frameprev [msgcat::mc {Goto Previous Frame}]

    ttk::button $mb.framenext -takefocus 0 -image $icons(frame,next) \
	-command NextFrame
    tooltip::tooltip $mb.framenext [msgcat::mc {Goto Next Frame}]

    ttk::button $mb.framelast -takefocus 0 -image $icons(frame,last) \
	-command LastFrame
    tooltip::tooltip $mb.framelast [msgcat::mc {Goto Last Frame}]

    pack $mb.frameadd $mb.framedel -side left -fill x
    pack $mb.framefirst $mb.frameprev $mb.framenext $mb.framelast \
	-side left -fill x
}

proc CreateIconsBottomView {} {
    global ds9
    global icons

    set mb $ds9(icons,left)

    set icons(view,vertgraph) \
	[image create photo -file "$ds9(root)/icons/ui/view_vertical.png"]
    set icons(view,horzgraph) \
	[image create photo -file "$ds9(root)/icons/ui/view_horizontal.png"]
    set icons(view,colorbar) \
	[image create photo -file "$ds9(root)/icons/ui/view_colorbar.png"]

    ttk::button $mb.vertgraph -takefocus 0 -image $icons(view,vertgraph) \
	-command [list IconButtonToggleCmd view graph,vert LayoutFrames]
    tooltip::tooltip $mb.vertgraph [msgcat::mc {Toggle Vertical Graph}]

    ttk::button $mb.horzgraph -takefocus 0 -image $icons(view,horzgraph) \
	-command [list IconButtonToggleCmd view graph,horz LayoutFrames]
    tooltip::tooltip $mb.vertgraph [msgcat::mc {Toggle Horizontal Graph}]

    ttk::button $mb.colorbar -takefocus 0 -image $icons(view,colorbar) \
	-command [list IconButtonToggleCmd view graph,colorbar LayoutFrames]
    tooltip::tooltip $mb.vertgraph [msgcat::mc {Toggle Colorbar}]

    pack $mb.vertgraph $mb.horzgraph $mb.colorbar -side top -fill x
}

