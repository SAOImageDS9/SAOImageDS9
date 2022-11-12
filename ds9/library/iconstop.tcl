#  Copyright (C) 1999-2022
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc CreateIconsTop {} {
    global ds9

    set ds9(icons,top) [ttk::frame $ds9(main).iconstop]
    set ds9(icons,top,sep) \
	[ttk::separator $ds9(main).iconstopsep -orient horizontal]

    CreateIconsTopQuit
    CreateIconsTopFile
    CreateIconsTopColormap
    CreateIconsTopScale
    CreateIconsTopAnalysis
}

proc CreateIconsTopFile {} {
    global ds9

    set mb $ds9(icons,top)

    ttk::button $mb.open -takefocus 0 -command [list OpenDialog fits] \
	-image [image create photo -file "$ds9(icons,ui)/file_open.png"]
    tooltip::tooltip $mb.open [msgcat::mc {File Open}]

    ttk::button $mb.saveeps -takefocus 0 -command [list SaveImageDialog eps] \
	-image [image create photo -file "$ds9(icons,ui)/save_as_eps.png"]
    tooltip::tooltip $mb.saveeps [msgcat::mc {Save as EPS}]

    ttk::button $mb.savepng -takefocus 0 -command [list SaveImageDialog png] \
	-image [image create photo -file "$ds9(icons,ui)/save_as_png.png"]
    tooltip::tooltip $mb.savepng [msgcat::mc {Save as PNG}]

    ttk::button $mb.print -takefocus 0 -command PSPrint \
	-image [image create photo -file "$ds9(icons,ui)/print.png"]
    tooltip::tooltip $mb.print [msgcat::mc {Print}]

    ttk::button $mb.backup -takefocus 0 -command BackupDialog \
	-image [image create photo -file "$ds9(icons,ui)/backup.png"]
    tooltip::tooltip $mb.backup [msgcat::mc {Backup}]

    ttk::button $mb.prism -takefocus 0 -command [list PrismDialogLoad prism] \
	-image [image create photo -file "$ds9(icons,ui)/prism.png"]
    tooltip::tooltip $mb.prism [msgcat::mc {Open Prism}]

    ttk::button $mb.notes -takefocus 0 -command DisplayNotes \
	-image [image create photo -file "$ds9(icons,ui)/notes.png"]
    tooltip::tooltip $mb.notes [msgcat::mc {Open Notepad}]

    pack $mb.open $mb.saveeps $mb.savepng $mb.print $mb.backup \
	$mb.prism $mb.notes -side left -fill x
}

proc CreateIconsTopColormap {} {
    global ds9
    global icons
    global colorbar

    set mb $ds9(icons,top)

    set luts [list a aips0 b bb blue color cool green grey he heat hsv i8 \
		  rainbow red sls staircase standard]

    foreach lut $luts {
	set foo [image create photo -file "$ds9(icons,lut)/ds9/$lut.png"]
	set icons(colorbarmap,$lut) [image create photo -width 200 -height 16]
	$icons(colorbarmap,$lut) copy $foo -zoom 2
	image delete $foo
    }
    # special case
    set foo [image create photo -file "$ds9(icons,lut)/unknown.png"]
    set icons(colorbarmap,default) [image create photo 	-width 200 -height 16]
    $icons(colorbarmap,default) copy $foo -zoom 2
    image delete $foo

    ttk::menubutton $mb.colormap -menu $mb.colormap.m -takefocus 0
#	-image $icons(colorbarmap,$colorbar(map)) 
    tooltip::tooltip $mb.colormap [msgcat::mc {Colormaps}]

    ttk::button $mb.invert -takefocus 0 \
	-command [list IconButtonToggleCmd colorbar invert InvertColorbar] \
	-image \
	[image create photo -file "$ds9(icons,ui)/colorbar_reverse.png"]
    tooltip::tooltip $mb.invert [msgcat::mc {Invert Colormap}]

    ThemeMenu $mb.colormap.m
    $mb.colormap.m configure -tearoff 0

    foreach lut $luts {
	IconMenuButton $mb.colormap {} colorbar map $lut \
	    [list ChangeColormapName $lut]
    }

    trace add variable colorbar(map) write [list IconMenuButtonCB $mb.colormap]
    IconMenuButtonCB $mb.colormap colorbar map write

    pack $mb.colormap $mb.invert -side left -fill x

}

proc CreateIconsTopScale {} {
    global ds9
    global icons
    global scale

    set mb $ds9(icons,top)

    set icons(scaletype,log) \
	[image create photo -file "$ds9(icons,ui)/log.png"]
    set icons(scaletype,linear) \
	[image create photo -file "$ds9(icons,ui)/lin.png"]
    set icons(scaletype,pow) \
	[image create photo -file "$ds9(icons,ui)/pow.png"]
    # special case
    set icons(scaletype,default) \
	[image create photo -file "$ds9(icons,ui)/scale_other.png"]

    ttk::menubutton $mb.scale -menu $mb.scale.m -direction right -takefocus 0
#	-image $icons(scaletype,$scale(type))
    tooltip::tooltip $mb.scale [msgcat::mc {Scaling Option}]

    ttk::button $mb.scaledialog -takefocus 0 -command ScaleDialog \
	-image [image create photo -file "$ds9(icons,ui)/scale_limits.png"]
    tooltip::tooltip $mb.scaledialog [msgcat::mc {Scaling Parameters}]

    ThemeMenu $mb.scale.m
    $mb.scale.m configure -tearoff 0
    IconMenuButton $mb.scale [msgcat::mc {Log}] scale type log ChangeScale
    IconMenuButton $mb.scale [msgcat::mc {Linear}] scale type linear ChangeScale
    IconMenuButton $mb.scale [msgcat::mc {Power}] scale type pow ChangeScale

    trace add variable scale(type) write [list IconMenuButtonCB $mb.scale]
    IconMenuButtonCB $mb.scale scale type write

    pack $mb.scale $mb.scaledialog -side left -fill x
}

proc CreateIconsTopAnalysis {} {
    global ds9
    global icons

    set mb $ds9(icons,top)

    ttk::button $mb.smooth -takefocus 0 \
	-command [list IconButtonToggleCmd smooth view SmoothUpdate] \
	-image [image create photo -file "$ds9(icons,ui)/smooth.png"]
    tooltip::tooltip $mb.smooth [msgcat::mc {Toggle Smooth}]

    ttk::button $mb.contour -takefocus 0 \
	-command [list IconButtonToggleCmd contour view UpdateContour] \
	-image [image create photo -file "$ds9(icons,ui)/contour.png"]
    tooltip::tooltip $mb.contour [msgcat::mc {Toggle Contour}]

    ttk::button $mb.match -takefocus 0 \
	-command [list MatchFrameCurrent wcs] \
	-image [image create photo -file "$ds9(icons,ui)/match.png"]
    tooltip::tooltip $mb.match [msgcat::mc {Match Frames on WCS}]

    ttk::button $mb.grid -takefocus 0 \
	-command [list IconButtonToggleCmd grid view GridUpdateCurrent] \
	-image [image create photo -file "$ds9(icons,ui)/coord_grid.png"]
    tooltip::tooltip $mb.grid [msgcat::mc {Toggle Coordinate Grid}]

    pack $mb.smooth $mb.contour $mb.match $mb.grid -side left -fill x
}

proc CreateIconsTopQuit {} {
    global ds9
    global icons

    set mb $ds9(icons,top)

    ttk::button $mb.quit -takefocus 0 -command QuitDS9 \
	-image [image create photo -file "$ds9(icons,ui)/quit.png"]
    tooltip::tooltip $mb.quit [msgcat::mc {Exit}]

    pack $mb.quit -side right
}

