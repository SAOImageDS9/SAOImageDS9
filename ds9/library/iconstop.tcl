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
    CreateIconsTopInvert
    CreateIconsTopScale
    CreateIconsTopAnalysis
}

proc CreateIconsTopFile {} {
    global ds9
    global icons

    set mb $ds9(icons,top)

    set icons(file,open) \
	[image create photo -file "$ds9(root)/icons/ui/file_open.png"]
    set icons(file,saveeps) \
	[image create photo -file "$ds9(root)/icons/ui/save_as_eps.png"]
    set icons(file,savepng) \
	[image create photo -file "$ds9(root)/icons/ui/save_as_png.png"]
    set icons(file,print) \
	[image create photo -file "$ds9(root)/icons/ui/print.png"]
    set icons(file,backup) \
	[image create photo -file "$ds9(root)/icons/ui/backup.png"]
    set icons(file,prism) \
	[image create photo -file "$ds9(root)/icons/ui/prism.png"]
    set icons(file,notes) \
	[image create photo -file "$ds9(root)/icons/ui/notes.png"]

    ttk::button $mb.open -takefocus 0 -image $icons(file,open) \
	-command [list OpenDialog fits]
    tooltip::tooltip $mb.open [msgcat::mc {File Open}]

    ttk::button $mb.saveeps -takefocus 0 -image $icons(file,saveeps) \
	-command [list SaveImageDialog eps]
    tooltip::tooltip $mb.saveeps [msgcat::mc {Save as EPS}]

    ttk::button $mb.savepng -takefocus 0 -image $icons(file,savepng) \
	-command [list SaveImageDialog png]
    tooltip::tooltip $mb.savepng [msgcat::mc {Save as PNG}]

    ttk::button $mb.print -takefocus 0 -image $icons(file,print) \
	-command PSPrint
    tooltip::tooltip $mb.print [msgcat::mc {Print}]

    ttk::button $mb.backup -takefocus 0 -image $icons(file,backup) \
	-command BackupDialog
    tooltip::tooltip $mb.backup [msgcat::mc {Backup}]

    ttk::button $mb.prism -takefocus 0 -image $icons(file,prism) \
	-command [list PrismDialogLoad prism]
    tooltip::tooltip $mb.prism [msgcat::mc {Open Prism}]

    ttk::button $mb.notes -takefocus 0 -image $icons(file,notes) \
	-command DisplayNotes
    tooltip::tooltip $mb.notes [msgcat::mc {Open Notepad}]

    pack $mb.open $mb.saveeps $mb.savepng $mb.print $mb.backup \
	$mb.prism $mb.notes -side left -fill x
}

proc CreateIconsTopColormap {} {
    global ds9
    global icons
    global colorbar

    set mb $ds9(icons,top).colormap

    set luts [list a aips0 b bb blue color cool green grey he heat hsv i8 \
		  rainbow red sls staircase standard \
		 ]

    foreach lut $luts {
	set foo [image create photo -file "$ds9(root)/icons/lut/ds9/$lut.png"]
	set icons(colorbarmap,$lut) [image create photo -width 200 -height 16]
	$icons(colorbarmap,$lut) copy $foo -zoom 2
	image delete $foo
    }
    # special case
    set foo [image create photo -file "$ds9(root)/icons/lut/unknown.png"]
    set icons(colorbarmap,default) [image create photo 	-width 200 -height 16]
    $icons(colorbarmap,default) copy $foo -zoom 2
    image delete $foo

    ttk::menubutton $mb -menu $mb.m \
	-image $icons(colorbarmap,$colorbar(map)) -takefocus 0
    tooltip::tooltip $mb [msgcat::mc {Colormaps}]

    ThemeMenu $mb.m
    $mb.m configure -tearoff 0

    foreach lut $luts {
	IconMenuButton $mb colorbar map $lut [list ChangeColormapName $lut]
    }

    pack $mb -side left -fill x

    trace add variable colorbar(map) write [list IconMenuButtonCB $mb]
}

proc CreateIconsTopInvert {} {
    global ds9
    global icons

    set mb $ds9(icons,top)

    set icons(colorbar,invert) \
	[image create photo -file "$ds9(root)/icons/ui/colorbar_reverse.png"]

    ttk::button $mb.colorbarinvert -takefocus 0 -image $icons(colorbar,invert) \
	-command [list IconButtonToggleCmd colorbar invert InvertColorbar]
    tooltip::tooltip $mb.colorbarinvert [msgcat::mc {Invert Colormap}]

    pack $mb.colorbarinvert -side left -fill x
}

proc CreateIconsTopScale {} {
    global ds9
    global icons
    global scale

    set mb $ds9(icons,top)

    set icons(scale,dialog) \
	[image create photo -file "$ds9(root)/icons/ui/scale_limits.png"]

    set icons(scaletype,log) \
	[image create photo -file "$ds9(root)/icons/ui/log.png"]
    set icons(scaletype,linear) \
	[image create photo -file "$ds9(root)/icons/ui/lin.png"]
    set icons(scaletype,pow) \
	[image create photo -file "$ds9(root)/icons/ui/pow.png"]
    # special case
    set icons(scaletype,default) \
	[image create photo -file "$ds9(root)/icons/ui/scale_other.png"]

    ttk::menubutton $mb.scale -menu $mb.scale.m -direction right -takefocus 0 \
	-image $icons(scaletype,$scale(type))
    tooltip::tooltip $mb.scale [msgcat::mc {Scaling Option}]

    ttk::button $mb.scaledialog -takefocus 0 -image $icons(scale,dialog) \
	-command ScaleDialog
    tooltip::tooltip $mb.scaledialog [msgcat::mc {Scaling Parameters}]

    set mbb $ds9(icons,top).scale

    ThemeMenu $mbb.m
    $mbb.m configure -tearoff 0
    IconMenuButton $mbb scale type log ChangeScale
    IconMenuButton $mbb scale type linear ChangeScale
    IconMenuButton $mbb scale type pow ChangeScale

    trace add variable scale(type) write [list IconMenuButtonCB $mbb]

    pack $mb.scale $mb.scaledialog -side left -fill x
}

proc CreateIconsTopAnalysis {} {
    global ds9
    global icons

    set mb $ds9(icons,top)

    set icons(analysis,smooth) \
	[image create photo -file "$ds9(root)/icons/ui/smooth.png"]
    set icons(analysis,contour) \
	[image create photo -file "$ds9(root)/icons/ui/contour.png"]
    set icons(analysis,match) \
	[image create photo -file "$ds9(root)/icons/ui/match.png"]
    set icons(analysis,grid) \
	[image create photo -file "$ds9(root)/icons/ui/coord_grid.png"]

    ttk::button $mb.smooth -takefocus 0 -image $icons(analysis,smooth) \
	-command [list IconButtonToggleCmd smooth view SmoothUpdate]
    tooltip::tooltip $mb.smooth [msgcat::mc {Toggle Smooth}]

    ttk::button $mb.contour -takefocus 0 -image $icons(analysis,contour) \
	-command [list IconButtonToggleCmd contour view UpdateContour]
    tooltip::tooltip $mb.contour [msgcat::mc {Toggle Contour}]

    ttk::button $mb.match -takefocus 0 -image $icons(analysis,match) \
	-command [list MatchFrameCurrent wcs]
    tooltip::tooltip $mb.match [msgcat::mc {Match Frames on WCS}]

    ttk::button $mb.grid -takefocus 0 -image $icons(analysis,grid) \
	-command [list IconButtonToggleCmd grid view GridUpdateCurrent]
    tooltip::tooltip $mb.grid [msgcat::mc {Toggle Coordinate Grid}]

    pack $mb.smooth $mb.contour $mb.match $mb.grid -side left -fill x
}

proc CreateIconsTopQuit {} {
    global ds9
    global icons

    set mb $ds9(icons,top)

    set icons(quit) \
	[image create photo -file "$ds9(root)/icons/ui/quit.png"]

    ttk::button $mb.quit -takefocus 0 -image $icons(quit) -command QuitDS9
    tooltip::tooltip $mb.quit [msgcat::mc {Exit}]

    pack $mb.quit -side right
}

