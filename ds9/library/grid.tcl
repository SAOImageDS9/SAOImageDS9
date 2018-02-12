#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc GridDef {} {
    global igrid
    global grid
    global pgrid

    set igrid(top) .grid
    set igrid(mb) .gridmb

    set grid(view) 0

    array set pgrid [array get grid]

    GridDefault
}

proc GridDefault {} {
    global grid

    set grid(type) analysis
    set grid(system) wcs
    set grid(sky) fk5
    set grid(skyformat) sexagesimal

    set grid(grid) 1
    set grid(grid,color) blue
    set grid(grid,width) 1
    set grid(grid,style) 0
    set grid(grid,gap1) {}
    set grid(grid,gap2) {}
    set grid(grid,gap3) {}
    set grid(grid,gapunit1) {}
    set grid(grid,gapunit2) {}
    set grid(grid,gapunit3) {}

    set grid(axes) 1
    set grid(axes,color) red
    set grid(axes,width) 1
    set grid(axes,style) 0
    set grid(axes,type) interior
    set grid(axes,origin) lll

    set grid(tick) 1
    set grid(tick,color) white
    set grid(tick,width) 1
    set grid(tick,style) 0

    set grid(border) 1
    set grid(border,color) blue
    set grid(border,width) 1
    set grid(border,style) 0

    set grid(format1) {}
    set grid(format2) {}

    set grid(numlab) 1
    set grid(numlab,font) helvetica
    set grid(numlab,size) 10
    set grid(numlab,weight) normal
    set grid(numlab,slant) roman
    set grid(numlab,color) green
    set grid(numlab,gap1) {}
    set grid(numlab,gap2) {}
    set grid(numlab,gap3) {}
    set grid(numlab,type) interior
    set grid(numlab,vertical) 0

    set grid(title) 1
    set grid(title,text) {}
    set grid(title,def) 1
    set grid(title,gap) {}
    set grid(title,font) helvetica
    set grid(title,size) 12
    set grid(title,weight) normal
    set grid(title,slant) roman
    set grid(title,color) black

    set grid(textlab) 1
    set grid(textlab,text1) {}
    set grid(textlab,text2) {}
    set grid(textlab,def1) 1
    set grid(textlab,def2) 1
    set grid(textlab,gap1) {}
    set grid(textlab,gap2) {}
    set grid(textlab,font) helvetica
    set grid(textlab,size) 10
    set grid(textlab,weight) normal
    set grid(textlab,slant) roman
    set grid(textlab,color) black
}

proc GridUpdateCurrent {} {
    global current
    
    if {$current(frame) != {}} {
	GridUpdate $current(frame)
    }
}

proc GridUpdate {which} {
    global grid

    GridAdjustOptions $which

    if {$grid(view) && [$which has fits]} {
	$which grid create $grid(system) $grid(sky) \
	    $grid(skyformat) $grid(type) \
	    [GridBuildOptions $which] "\"[array get grid]\""
    } else {
	$which grid delete
    }
}	    

proc GridUpdateZoom {} {
    global grid

    if {$grid(type) == "publication"} {
	GridUpdateCurrent
    }
}

proc GridAdjustOptions {which} {
    global grid

    if {$which != {}} {
	if {[$which has fits]} {
	    # change values if needed for coordmenu
	    AdjustCoordSystem grid system
	}
    }

    set grid(grid,gapunit1) pixels
    set grid(grid,gapunit2) pixels
    set grid(grid,gapunit3) pixels

    # adjust units
    switch -- $grid(system) {
	image -
	physical -
	amplifier -
	detector {}
	default {
	    if {$which != {}} {
		if {[$which has wcs celestrial $grid(system)]} {
		    set grid(grid,gapunit1) degrees
		    set grid(grid,gapunit2) degrees
		}
		if {[$which has wcs 3d $grid(system)]} {
		    set tt [string trim [$which get fits header keyword CTYPE3]]
		    if {$tt != {}} {
			set grid(grid,gapunit3) $tt
		    }
		}
	    }
	}
    }
}

proc GridBuildOptions {which} {
    global grid
    global current

    set opt "\""

    # Grid
    append opt " Grid=$grid(grid),"
    append opt " Colour(grid)=[GridColor2Ast $grid(grid,color)],"
    append opt " Width(grid)=$grid(grid,width),"
    append opt " Style(grid)=$grid(grid,style),"

    # Axes
    append opt " DrawAxes=$grid(axes),"
    append opt " Colour(axes)=[GridColor2Ast $grid(axes,color)],"
    append opt " Width(axes)=$grid(axes,width),"
    append opt " Style(axes)=$grid(axes,style),"

    # Format
    if {$grid(format1) != {}} {
	append opt " Format(1)=$grid(format1),"
    } else {
	set ff [GridDefaultFormat1]
	if {$ff != {}} {
	    append opt " Format(1)=$ff,"
	}
    }

    if {$grid(format2) != {}} {
	append opt " Format(2)=$grid(format2),"
    } else {
	set ff [GridDefaultFormat2]
	if {$ff != {}} {
	    append opt " Format(2)=$ff,"
	}
    }
    
    # Ticks
    if {!$grid(tick)} {
	append opt " MajTickLen=0,"
	append opt " MinTick(1)=0,"
	append opt " MinTick(2)=0,"
	switch -- $grid(type) {
	    analysis {}
	    publication {
		switch -- [$which get type] {
		    base -
		    rgb {}
		    3d {append opt " MinTick(3)=0,"}
		}		    
	    }
	}
    }
    append opt " Colour(ticks)=[GridColor2Ast $grid(tick,color)],"
    append opt " Width(ticks)=$grid(tick,width),"
    append opt " Style(ticks)=$grid(tick,style),"

    # Border
    append opt " Border=$grid(border),"
    append opt " Colour(border)=[GridColor2Ast $grid(border,color)],"
    append opt " Width(border)=$grid(border,width),"
    append opt " Style(border)=$grid(border,style),"

    # Labels
    append opt " Labelling=$grid(axes,type),"
    switch -- [$which get type] {
	base -
	rgb {append opt " LabelUp=$grid(numlab,vertical),"}
	3d {append opt " LabelUp=1,"}
    }

    # NumLab
    append opt " NumLab=$grid(numlab),"
    set opt "$opt Font(numlab)=[GridFont2Ast $grid(numlab,font) $grid(numlab,weight) $grid(numlab,slant)],"
    append opt " Size(numlab)=$grid(numlab,size),"
    append opt " Colour(numlab)=[GridColor2Ast $grid(numlab,color)],"

    # TextLab
    switch -- $grid(type) {
	analysis {append opt " TextLab=0,"}
	publication {
	    switch -- [$which get type] {
		base -
		rgb {append opt " TextLab=$grid(textlab),"}
		3d {append opt " TextLab=0,"}
	    }		    
	}
    }
    if {!$grid(textlab,def1)} {
	append opt " Label(1)=[GridStripComma $grid(textlab,text1)] ,"
    }
    if {!$grid(textlab,def2)} {
	append opt " Label(2)=[GridStripComma $grid(textlab,text2)] ,"
    }

    set opt "$opt Font(textlab)=[GridFont2Ast $grid(textlab,font) $grid(textlab,weight) $grid(textlab,slant)],"
    append opt " Size(textlab)=$grid(textlab,size),"
    append opt " Colour(textlab)=[GridColor2Ast $grid(textlab,color)],"

    # Title
    switch -- $grid(type) {
	analysis {append opt " DrawTitle=0,"}
	publication {
	    switch -- [$which get type] {
		base -
		rgb {append opt " DrawTitle=$grid(title),"}
		3d {append opt " DrawTitle=0,"}
	    }
	}
    }

    if {$grid(title,def)} {
	set t [GridStripComma "[$which get fits object name]"]
	if {$t != {}} {
	    append opt " Title=$t ,"
	}
    } else {
	set t [GridStripComma "$grid(title,text)"]
	if {$t != {}} {
	    append opt " Title=$t ,"
	}
    }

    set opt "$opt Font(title)=[GridFont2Ast $grid(title,font) $grid(title,weight) $grid(title,slant)],"
    append opt " Size(title)=$grid(title,size),"
    append opt " Colour(title)=[GridColor2Ast $grid(title,color)],"

    # Grid Spacing
    if {$grid(grid,gap1) != {}} {
	if {$grid(grid,gapunit1) == "degrees"} {
	    append opt " Gap(1)=[expr 3.14159/180.*$grid(grid,gap1)],"
	} else {
	    append opt " Gap(1)=$grid(grid,gap1),"
	}
    }

    if {$grid(grid,gap2) != {}} {
	if {$grid(grid,gapunit2) == "degrees"} {
	    append opt " Gap(2)=[expr 3.14159/180.*$grid(grid,gap2)],"
	} else {
	    append opt " Gap(2)=$grid(grid,gap2),"
	}
    }

    switch -- [$which get type] {
	base -
	rgb {}
	3d {
	    if {$grid(grid,gap3) != {}} {
		if {$grid(grid,gapunit3) == "degrees"} {
		    append opt " Gap(3)=[expr 3.14159/180.*$grid(grid,gap3)],"
		} else {
		    append opt " Gap(3)=$grid(grid,gap3),"
		}
	    }
	}
    }

    # axes numerics
    set flip 0
    set numx 0
    set numy 0
    switch -- $grid(type) {
	analysis {
	    switch -- [$which get type] {
		base -
		rgb {
		    set numx -.03
		    set numy -.03
		}
		3d {}
	    }		    
	}
	publication {
	    switch -- [$which get type] {
		base -
		rgb {
		    set numx -.02
		    set numy -.01
		    switch -- $grid(axes,type) {
			interior {}
			exterior {
			    switch -- $grid(numlab,type) {
				interior {}
				exterior {set flip 1}
			    }
			}
		    }
		}
		3d {}
	    }		    
	}
    }

    # override
    if {$grid(numlab,gap1) != {}} {
	set numx [expr -$grid(numlab,gap1)/100.]
    }
    if {$grid(numlab,gap2) != {}} {
	set numy [expr -$grid(numlab,gap2)/100.]
    }
    if {$grid(numlab,gap3) != {}} {
	set numy [expr -$grid(numlab,gap3)/100.]
    }
    if {$flip} {
	set numx [expr -$numx]
	set numy [expr -$numy]
    }
    append opt " NumLabGap(1)=$numx,"
    append opt " NumLabGap(2)=$numy,"

    # Label gaps
    switch -- $grid(type) {
	analysis {
	    set axisx 0
	    set axisy 0
	    set title 0
	}
	publication {
	    if {$grid(textlab,gap1) != {}} {
		set axisx [expr $grid(textlab,gap1)/100.]
	    } else {
		set axisx 0
	    }
	    if {$grid(textlab,gap2) != {}} {
		set axisy [expr $grid(textlab,gap2)/100.]
	    } else {
		set axisy .1
	    }

	    if {$grid(title,gap) != {}} {
		set title [expr $grid(title,gap)/100.]
	    } else {
		set title .30
	    }
	}
    }

    append opt " TextLabGap(1)=$axisx,"
    append opt " TextLabGap(2)=$axisy,"
    append opt " TitleGap=[expr -1-$title],"

    # Orientation
    switch -- [$which get type] {
	base -
	rgb {
	    append opt " Edge(1)=top,"
	    append opt " Edge(2)=left,"
	}
	3d {
	    switch -- $grid(type) {
		analysis {
		    append opt " Edge(1)=bottom,"
		    append opt " Edge(2)=left,"
		}
		publication {
		    append opt " RootCorner=$grid(axes,origin),"
		}
	    }
	}
    }

    # 3D Normal
    switch -- $grid(type) {
	analysis {}
	publication {
	    switch -- [$which get type] {
		base -
		rgb {}
		3d {append opt " Norm(1)=0, Norm(2)=0, Norm(3)=-1,"}
	    }		    
	}
    }

    # The End
    append opt " \""

    global debug

    if {$debug(tcl,grid)} {
	puts stderr "GridBuildOptions"
	puts stderr "$opt"
    }

    return $opt
}

proc GridAst2Color {ast} {
    switch -- $ast {
	0 {return {black}}
	1 {return white}
	2 {return red}
	3 {return green}
	4 {return blue}
	5 {return cyan}
	6 {return magenta}
	7 {return yellow}

	16777215 {return {white}}
	16711680 {return {red}}
	65280 {return {green}}
	255 {return {blue}}
	65535 {return {cyan}}
	16711935 {return {magenta}}
	16776960 {return {yellow}}

	default {return "#[format %x $ast]"}
    }
}

proc GridColor2Ast {which} {
    switch -- $which {
	black   {return [expr 0x000000]}
	white   {return [expr 0xffffff]}
	red     {return [expr 0xff0000]}
	green   {return [expr 0x00ff00]}
	blue    {return [expr 0x0000ff]}
	cyan    {return [expr 0x00ffff]}
	magenta {return [expr 0xff00ff]}
	yellow  {return [expr 0xffff00]}

	default {
	    if {[string range $which 0 0] == "#"} {
		return [expr 0x[string range $which 1 end]]
	    } else {
		return [expr $which]
	    }
	}
    }
}

proc GridAst2Font {ast fnvar fwvar fsvar} {
    upvar $fnvar fn
    upvar $fwvar fw
    upvar $fsvar fs

    switch -- $ast {
	0 -
	2 -
	3 {set fn "helvetica"; set fw "normal"; set fs "roman"}
	1 {set fn "times"; set fw "normal"; set fs "roman"}
	4 {set fn "courier"; set fw "normal"; set fs "roman"}
	10 -
	12 -
	13 {set fn "helvetica"; set fw "bold"; set fs "roman"}
	11 {set fn "times"; set fw "bold"; set fs "roman"}
	14 {set fn "courier"; set fw "bold"; set fs "roman"}
	20 -
	22 -
	23 {set fn "helvetica"; set fw "normal"; set fs "italic"}
	21 {set fn "times"; set fw "normal"; set fs "italic"}
	24 {set fn "courier"; set fw "normal"; set fs "italic"}
	30 -
	32 -
	33 {set fn "helvetica"; set fw "bold"; set fs "italic"}
	31 {set fn "times"; set fw "bold"; set fs "italic"}
	34 {set fn "courier"; set fw "bold"; set fs "italic"}

	default {set fn "helvetica"; set fw "normal"; set fs "roman"}
    }
}

proc GridFont2Ast {fn fw fs} {
    if {$fn == "times" && $fw == "normal" && $fs == "roman"} {
	return 1;
    } elseif {$fn == "helvetica" && $fw == "normal" && $fs == "roman"} {
	return 2;
    } elseif {$fn == "courier" && $fw == "normal" && $fs == "roman"} {
	return 4;
    } elseif {$fn == "times" && $fw == "bold" && $fs == "roman"} {
	return 11;
    } elseif {$fn == "helvetica" && $fw == "bold" && $fs == "roman"} {
	return 12;
    } elseif {$fn == "courier" && $fw == "bold" && $fs == "roman"} {
	return 14;
    } elseif {$fn == "times" && $fw == "normal"  && $fs == "italic"} {
	return 21;
    } elseif {$fn == "helvetica" && $fw == "normal"  && $fs == "italic"} {
	return 22;
    } elseif {$fn == "courier" && $fw == "normal"  && $fs == "italic"} {
	return 24;
    } elseif {$fn == "times" && $fw == "bold"  && $fs == "italic"} {
	return 31;
    } elseif {$fn == "helvetica" && $fw == "bold"  && $fs == "italic"} {
	return 32;
    } elseif {$fn == "courier" && $fw == "bold"  && $fs == "italic"} {
	return 34;
    } else {
	return 2;
    }
}

proc GridDialog {} {
    global igrid
    global grid
    global current
    global ds9

    # see if we already have a window visible

    if {[winfo exists $igrid(top)]} {
	raise $igrid(top)
	return
    }

    # create the window
    set w $igrid(top)
    set mb $igrid(mb)

    Toplevel $w $mb 6 [msgcat::mc {Coordinate Grid Parameters}] \
	GridDestroyDialog

    $mb add cascade -label [msgcat::mc {File}] -menu $mb.file
    $mb add cascade -label [msgcat::mc {Edit}] -menu $mb.edit
    $mb add cascade -label [msgcat::mc {Type}] -menu $mb.type
    $mb add cascade -label [msgcat::mc {Coordinate}] -menu $mb.coord
    $mb add cascade -label [msgcat::mc {Grid}] -menu $mb.grid
    $mb add cascade -label [msgcat::mc {Axes}] -menu $mb.axes
    $mb add cascade -label [msgcat::mc {Numerics}] -menu $mb.numlab
    $mb add cascade -label [msgcat::mc {Labels}] -menu $mb.textlab
    $mb add cascade -label [msgcat::mc {Tickmarks}] -menu $mb.tick
    $mb add cascade -label [msgcat::mc {Title}] -menu $mb.title
    $mb add cascade -label [msgcat::mc {Border}] -menu $mb.border

    # File
    menu $mb.file
    $mb.file add command -label [msgcat::mc {Apply}] -command GridApplyDialog
    $mb.file add command -label [msgcat::mc {Reset}] -command GridResetDialog
    $mb.file add command -label [msgcat::mc {Clear}] -command GridClearDialog
    $mb.file add separator
    $mb.file add command -label "[msgcat::mc {Load Configuration}]..." \
	-command GridLoadDialog
    $mb.file add command -label "[msgcat::mc {Save Configuration}]..." \
	-command GridSaveDialog
    $mb.file add separator
    $mb.file add command -label [msgcat::mc {Close}] -command GridDestroyDialog

    # Edit
    EditMenu $mb igrid

    # Type
    menu $mb.type
    $mb.type add radiobutton -label [msgcat::mc {Analysis}] \
	-variable grid(type) -value analysis -command GridApplyDialog
    $mb.type add radiobutton -label [msgcat::mc {Publication}] \
	-variable grid(type) -value publication -command GridApplyDialog
    $mb.type add separator
    $mb.type add radiobutton -label [msgcat::mc {Interior Axes}] \
	-variable grid(axes,type) -value interior -command GridApplyDialog
    $mb.type add radiobutton -label [msgcat::mc {Exterior Axes}] \
	-variable grid(axes,type) -value exterior -command GridApplyDialog
    $mb.type add separator
    $mb.type add radiobutton -label [msgcat::mc {Interior Numerics}] \
	-variable grid(numlab,type) -value interior -command GridApplyDialog
    $mb.type add radiobutton -label [msgcat::mc {Exterior Numerics}] \
	-variable grid(numlab,type) -value exterior -command GridApplyDialog
    $mb.type add separator
    $mb.type add checkbutton -label [msgcat::mc {Vertical Text}] \
	-variable grid(numlab,vertical) -command GridApplyDialog

    # Coordinate
    CoordMenu $mb.coord grid system 1 sky skyformat GridApplyDialog

    # Grid
    menu $mb.grid
    $mb.grid add checkbutton -label [msgcat::mc {Show}] \
	-variable grid(grid) -command GridApplyDialog
    $mb.grid add separator
    $mb.grid add cascade -label [msgcat::mc {Color}] -menu $mb.grid.color
    $mb.grid add cascade -label [msgcat::mc {Line}] -menu $mb.grid.line

    ColorMenu $mb.grid.color grid grid,color GridApplyDialog
    GridCreateLineMenu $mb.grid.line grid,width grid,style

    # Axes
    menu $mb.axes
    $mb.axes add checkbutton -label [msgcat::mc {Show}] \
	-variable grid(axes) -command GridApplyDialog
    $mb.axes add separator
    $mb.axes add cascade -label [msgcat::mc {Color}] -menu $mb.axes.color
    $mb.axes add cascade -label [msgcat::mc {Line}] -menu $mb.axes.line
    $mb.axes add separator
    $mb.axes add cascade -label [msgcat::mc {Origin}] -menu $mb.axes.origin

    ColorMenu $mb.axes.color grid axes,color GridApplyDialog
    GridCreateLineMenu $mb.axes.line axes,width axes,style

    menu $mb.axes.origin
    $mb.axes.origin add radiobutton -label [msgcat::mc {Lower Left Front}] \
	-variable grid(axes,origin) -value lll -command GridApplyDialog
    $mb.axes.origin add radiobutton -label [msgcat::mc {Lower Right Front}] \
	-variable grid(axes,origin) -value ull -command GridApplyDialog
    $mb.axes.origin add radiobutton -label [msgcat::mc {Upper Right Front}] \
	-variable grid(axes,origin) -value uul -command GridApplyDialog
    $mb.axes.origin add radiobutton -label [msgcat::mc {Upper Left Front}] \
	-variable grid(axes,origin) -value lul -command GridApplyDialog
    $mb.axes.origin add separator
    $mb.axes.origin add radiobutton -label [msgcat::mc {Lower Left Back}] \
	-variable grid(axes,origin) -value llu -command GridApplyDialog
    $mb.axes.origin add radiobutton -label [msgcat::mc {Lower Right Back}] \
	-variable grid(axes,origin) -value ulu -command GridApplyDialog
    $mb.axes.origin add radiobutton -label [msgcat::mc {Upper Right Back}] \
	-variable grid(axes,origin) -value uuu -command GridApplyDialog
    $mb.axes.origin add radiobutton -label [msgcat::mc {Upper Left Back}] \
	-variable grid(axes,origin) -value luu -command GridApplyDialog

    # Numerics
    menu $mb.numlab
    $mb.numlab add checkbutton -label [msgcat::mc {Show}] \
	-variable grid(numlab) -command GridApplyDialog
    $mb.numlab add separator
    $mb.numlab add cascade -label [msgcat::mc {Color}] \
	-menu $mb.numlab.color
    $mb.numlab add cascade -label [msgcat::mc {Font}] \
	-menu $mb.numlab.font

    ColorMenu $mb.numlab.color grid numlab,color GridApplyDialog
    FontMenu $mb.numlab.font \
	grid numlab,font numlab,size numlab,weight numlab,slant \
	GridApplyDialog

    # Labels
    menu $mb.textlab
    $mb.textlab add checkbutton -label [msgcat::mc {Show}] \
	-variable grid(textlab) -command GridApplyDialog
    $mb.textlab add separator
    $mb.textlab add cascade -label [msgcat::mc {Color}] \
	-menu $mb.textlab.color
    $mb.textlab add cascade -label [msgcat::mc {Font}] \
	-menu $mb.textlab.font

    ColorMenu $mb.textlab.color grid textlab,color GridApplyDialog
    FontMenu $mb.textlab.font \
	grid textlab,font textlab,size textlab,weight textlab,slant \
	GridApplyDialog

    # Tickmarks
    menu $mb.tick
    $mb.tick add checkbutton -label [msgcat::mc {Show}] \
	-variable grid(tick) -command GridApplyDialog
    $mb.tick add separator
    $mb.tick add cascade -label [msgcat::mc {Color}] \
	-menu $mb.tick.color
    $mb.tick add cascade -label [msgcat::mc {Line}] \
	-menu $mb.tick.line

    ColorMenu $mb.tick.color grid tick,color GridApplyDialog
    GridCreateLineMenu $mb.tick.line tick,width tick,style

    # Title
    menu $mb.title
    $mb.title add checkbutton -label [msgcat::mc {Show}] \
	 -variable grid(title) -command GridApplyDialog
    $mb.title add separator
    $mb.title add cascade -label [msgcat::mc {Color}] -menu $mb.title.color
    $mb.title add cascade -label [msgcat::mc {Font}] -menu $mb.title.font

    ColorMenu $mb.title.color grid title,color GridApplyDialog
    FontMenu $mb.title.font \
	grid title,font title,size title,weight title,slant \
	GridApplyDialog

    # Border
    menu $mb.border
    $mb.border add checkbutton -label [msgcat::mc {Show}] \
	-variable grid(border) -command GridApplyDialog
    $mb.border add separator
    $mb.border add cascade -label [msgcat::mc {Color}] -menu $mb.border.color
    $mb.border add cascade -label [msgcat::mc {Line}] -menu $mb.border.line

    ColorMenu $mb.border.color grid border,color GridApplyDialog
    GridCreateLineMenu $mb.border.line border,width border,style

    # Labels
    set f [ttk::labelframe $w.label -text [msgcat::mc {Labels}] -padding 2]
    ttk::label $f.label -text [msgcat::mc {Title}]
    ttk::entry $f.title -textvariable grid(title,text) \
	-width 60
    ttk::checkbutton $f.default -text [msgcat::mc {Default}] \
	-variable grid(title,def) -command GridApplyDialog
    ttk::label $f.label1 -text "[msgcat::mc {Axis}] 1"
    ttk::entry $f.title1 -textvariable grid(textlab,text1) \
	-width 60 
    ttk::checkbutton $f.default1 -text [msgcat::mc {Default}] \
	-variable grid(textlab,def1) -command GridApplyDialog
    ttk::label $f.label2 -text "[msgcat::mc {Axis}] 2"
    ttk::entry $f.title2 -textvariable grid(textlab,text2) \
	-width 60 
    ttk::checkbutton $f.default2 -text [msgcat::mc {Default}] \
	-variable grid(textlab,def2) -command GridApplyDialog

    grid $f.label $f.title $f.default -padx 2 -pady 2 -sticky ew
    grid $f.label1 $f.title1 $f.default1 -padx 2 -pady 2 -sticky ew
    grid $f.label2 $f.title2 $f.default2 -padx 2 -pady 2 -sticky ew
    grid columnconfigure $f 1 -weight 1

    # Params
    set f [ttk::labelframe $w.param -text [msgcat::mc {Spacing}] -padding 2]
    ttk::label $f.lspace -text "[msgcat::mc {Label}] %"
    ttk::label $f.ngap -text "[msgcat::mc {Numerics}] %"
    ttk::label $f.lformat -text [msgcat::mc {Format}]
    ttk::label $f.lgap -text [msgcat::mc {Grid Gap}]

    ttk::label $f.titlet -text [msgcat::mc {Title}]
    ttk::entry $f.spacet -textvariable grid(title,gap) \
	-width 8 

    ttk::label $f.title1 -text "[msgcat::mc {Axis}] 1"
    ttk::entry $f.tspace1 -textvariable grid(textlab,gap1) -width 8 
    ttk::entry $f.nspace1 -textvariable grid(numlab,gap1) -width 8 
    ttk::entry $f.format1 -textvariable grid(format1) -width 8 
    ttk::entry $f.gap1 -textvariable grid(grid,gap1) -width 8 
    ttk::label $f.gapunit1 -textvariable grid(grid,gapunit1)

    ttk::label $f.title2 -text "[msgcat::mc {Axis}] 2"
    ttk::entry $f.tspace2 -textvariable grid(textlab,gap2) -width 8 
    ttk::entry $f.nspace2 -textvariable grid(numlab,gap2) -width 8 
    ttk::entry $f.format2 -textvariable grid(format2) -width 8 
    ttk::entry $f.gap2 -textvariable grid(grid,gap2) -width 8 
    ttk::label $f.gapunit2 -textvariable grid(grid,gapunit2)

    ttk::label $f.title3 -text "[msgcat::mc {Axis}] 3"
    ttk::entry $f.nspace3 -textvariable grid(numlab,gap3) -width 8 
    ttk::entry $f.format3 -textvariable grid(format3) -width 8 
    ttk::entry $f.gap3 -textvariable grid(grid,gap3) -width 8 
    ttk::label $f.gapunit3 -textvariable grid(grid,gapunit3)

    grid x $f.lspace $f.ngap $f.lformat $f.lgap -padx 2 -pady 2 -sticky w
    grid $f.titlet $f.spacet -padx 2 -pady 2 -sticky w
    grid $f.title1 $f.tspace1 $f.nspace1 $f.format1 $f.gap1 $f.gapunit1 \
	-padx 2 -pady 2 -sticky w
    grid $f.title2 $f.tspace2 $f.nspace2 $f.format2 $f.gap2 $f.gapunit2 \
	-padx 2 -pady 2 -sticky w

    # Buttons
    set f [ttk::frame $w.buttons]
    ttk::button $f.apply -text [msgcat::mc {Apply}] -command GridApplyDialog
    ttk::button $f.reset -text [msgcat::mc {Reset}] -command GridResetDialog
    ttk::button $f.clear -text [msgcat::mc {Clear}] -command GridClearDialog
    ttk::button $f.close -text [msgcat::mc {Close}] -command GridDestroyDialog
    pack $f.apply $f.reset $f.clear $f.close -side left -expand true \
	-padx 2 -pady 4

    bind $w <Return> "GridApplyDialog"

    # Fini
    grid $w.label -sticky news
    grid $w.param -sticky news
    grid $w.buttons -sticky ew
    grid rowconfigure $w 0 -weight 1
    grid rowconfigure $w 1 -weight 1
    grid columnconfigure $w 0 -weight 1

    # some window managers need a hint
    raise $w

    UpdateGridDialog
}

proc GridApplyDialog {} {
    global grid

    set grid(view) 1
    GridUpdateCurrent
}

proc GridResetDialog {} {
    GridDefault
    GridUpdateCurrent
}

proc GridClearDialog {} {
    global grid

    set grid(view) 0
    GridUpdateCurrent
}

proc GridDestroyDialog {} {
    global igrid

    if {[winfo exists $igrid(top)]} {
	destroy $igrid(top)
	destroy $igrid(mb)
    }
}

proc UpdateGridMenu {} {
    global grid
    global current
    global wcs

    global debug
    if {$debug(tcl,update)} {
	puts stderr "UpdateGridMenu"
    }

    if {($current(frame) == {})} {
	return
    }

    # set menu
    if {[$current(frame) has fits]} {
	set grid(view) [$current(frame) has grid]
    }

    # reassign system and format
    if {[$current(frame) has fits] && [$current(frame) has grid]} {
	set ll [$current(frame) get grid]
	set grid(system) [lindex $ll 0]
	set grid(sky) [lindex $ll 1]
	set grid(skyformat) [lindex $ll 2]
	set grid(type) [lindex $ll 3]

	# fix for grids create with old backup command
	if {[$current(frame) get grid var] == {}} {
	    $current(frame) grid delete
	    $current(frame) grid create $grid(system) $grid(sky) \
		$grid(skyformat) $grid(type) \
		[GridBuildOptions $current(frame)] "\"[array get grid]\""
	}
	array set grid [$current(frame) get grid var]
    } else {
	# can be changed by wcs
	SetCoordSystem grid system sky skyformat
    }
}

proc UpdateGridDialog {} {
    global current
    global igrid
    global grid

    set mb $igrid(mb)

    global debug
    if {$debug(tcl,update)} {
	puts stderr "UpdateGridDialog"
    }

    GridAdjustOptions $current(frame)

    if {[winfo exists $igrid(top)]} {
	set f $igrid(top).label
	set g $igrid(top).param

	if {$current(frame) != {}} {
	    switch -- [$current(frame) get type] {
		base -
		rgb {
		    $mb entryconfig [msgcat::mc {Labels}] -state normal
		    $mb entryconfig [msgcat::mc {Title}] -state normal
		    $mb.type entryconfig [msgcat::mc {Interior Numerics}] \
			-state normal
		    $mb.type entryconfig [msgcat::mc {Exterior Numerics}] \
			-state normal
		    $mb.type entryconfig [msgcat::mc {Vertical Text}] \
			-state normal
		    $mb.axes entryconfig [msgcat::mc {Origin}] \
			-state disable

		    $f.label configure -state normal
		    $f.title configure -state normal
		    $f.default configure -state normal
		    $f.label1 configure -state normal
		    $f.title1 configure -state normal
		    $f.default1 configure -state normal
		    $f.label2 configure -state normal
		    $f.title2 configure -state normal
		    $f.default2 configure -state normal

		    $g.lspace configure -state normal
		    $g.spacet configure -state normal
		    $g.tspace1 configure -state normal
		    $g.tspace2 configure -state normal

		    grid forget $g.title3 $g.nspace3 $g.format3 $g.gap3 \
			$g.gapunit3
		}
		3d {
		    $mb entryconfig [msgcat::mc {Labels}] -state disabled
		    $mb entryconfig [msgcat::mc {Title}] -state disabled
		    $mb.type entryconfig [msgcat::mc {Interior Numerics}] \
			-state disabled
		    $mb.type entryconfig [msgcat::mc {Exterior Numerics}] \
			-state disabled
		    $mb.type entryconfig [msgcat::mc {Vertical Text}] \
			-state disabled
		    $mb.axes entryconfig [msgcat::mc {Origin}] -state normal

		    $f.label configure -state disabled
		    $f.title configure -state disabled
		    $f.default configure -state disabled
		    $f.label1 configure -state disabled
		    $f.title1 configure -state disabled
		    $f.default1 configure -state disabled
		    $f.label2 configure -state disabled
		    $f.title2 configure -state disabled
		    $f.default2 configure -state disabled

		    $g.lspace configure -state disabled
		    $g.spacet configure -state disabled
		    $g.tspace1 configure -state disabled
		    $g.tspace2 configure -state disabled

		    grid $g.title3 x $g.nspace3 $g.format3 $g.gap3 $g.gapunit3 \
			-padx 2 -pady 2 -sticky w
		}
	    }

	    set grid(frame) $current(frame)
	    if {[$current(frame) has fits]} {
		CoordMenuEnable $igrid(mb).coord grid system 1 sky skyformat
	    } else {
		CoordMenuReset $igrid(mb).coord grid system 1 sky skyformat
	    }
	}
    }
}

proc GridCreateLineMenu {which width dash} {
    global igrid
    global grid

    WidthDashMenu $which grid $width $dash GridApplyDialog GridApplyDialog
}

proc GridLoadDialog {} {
    GridLoad [OpenFileDialog gridfbox]
}

proc GridLoad {filename} {
    global grid

    if {$filename != {}} {
	source $filename
    }

    # backward compatibility
    FixFontVar grid(numlab,weight) grid(numlab,slant) grid(numlab,style)
    FixFontVar grid(textlab,weight) grid(textlab,slant) grid(textlab,style)
    FixFontVar grid(title,weight) grid(title,slant) grid(title,style)

    set grid(view) 1
    GridUpdateCurrent
}

proc GridSaveDialog {} {
    GridSave [SaveFileDialog gridfbox]
}

proc GridSave {filename} {
    global grid

    if {$filename != {}} {
	set file [open $filename w]
	puts $file "global grid"
	puts $file "array set grid \{ [array get grid] \}"
	close $file
    }
}

proc GridStripComma {str} {
    # strip ','
    set t {}
    regsub -all "," "$str" " " t
    return $t
}

proc GridDefaultFormat1 {} {
    global grid
    global current

    switch $grid(system) {
	image -
	physical -
	detector -
	amplifier {return {}}
	default {
	    if {[$current(frame) has wcs equatorial $grid(system)]} {
		switch $grid(sky) {
		    fk4 -
		    fk5 -
		    icrs {
			switch $grid(skyformat) {
			    degrees {return {d.3}}
			    sexagesimal {return {hms.1}}
			    hms {return {lhms.1}}
			}
		    }
		    galactic -
		    ecliptic {
			switch $grid(skyformat) {
			    degrees {return {d.3}}
			    sexagesimal {return {dms.1}}
			    hms {return {ldms}}
			}
		    }
		}
		return {}
	    }
	    if {[$current(frame) has wcs celestrial $grid(system)]} {
		switch $grid(skyformat) {
		    degrees {return {d.3}}
		    sexagesimal {return {dms.1}}
		    hms {return {ldms}}
		}
		return {}
	    }
	}
    }
}

proc GridDefaultFormat2 {} {
    global grid
    global current

    switch $grid(system) {
	image -
	physical -
	detector -
	amplifier {return {}}
	default {
	    if {[$current(frame) has wcs equatorial $grid(system)]} {
		switch $grid(sky) {
		    fk4 -
		    fk5 -
		    icrs {
			switch $grid(skyformat) {
			    degrees {return {d.3}}
			    sexagesimal {return {dms.1}}
			    hms {return {ldms.1}}
			}
		    }
		    galactic -
		    ecliptic {
			switch $grid(skyformat) {
			    degrees {return {d.3}}
			    sexagesimal {return {dms.1}}
			    hms {return {ldms}}
			}
		    }
		}
		return {}
	    }
	    if {[$current(frame) has wcs celestrial $grid(system)]} {
		switch $grid(skyformat) {
		    degrees {return {d.3}}
		    sexagesimal {return {dms.1}}
		    hms {return {ldms}}
		}
		return {}
	    }
	}
    }
}

proc GridBackup {ch which} {
    global grid

    if {[$which has grid]} {
	set ll  [$which get grid]
	set system [lindex $ll 0]
	set sky [lindex $ll 1]
	set skyformat [lindex $ll 2]
	set type [lindex $ll 3]
	set opts [$which get grid option]
	set vars [array get grid]

	puts $ch "$which grid create $system $sky $skyformat $type \{\"$opts\"\} \{\"$vars\"\}"
    }
}

# Process Cmds

proc ProcessGridCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    global grid
    switch -- [string tolower [lindex $var $i]] {
	open {GridDialog}
	close {GridDestroyDialog}
	yes -
	true -
	on -
	1 -
	no -
	false -
	off -
	0 {
	    set grid(view) [FromYesNo [lindex $var $i]]
	    GridUpdateCurrent
	}

	type {
	    incr i
	    switch -- [string tolower [lindex $var $i]] {
		axes {
		    # backward compatible
		    incr i; set grid(axes,type) [lindex $var $i]
		}
		numerics {
		    # backward compatible
		    incr i; set grid(numlab,type) [lindex $var $i]
		}
		default {set grid(type) [lindex $var $i]}
	    }
	    GridUpdateCurrent
	}

	system {incr i; set grid(system) [lindex $var $i]; GridUpdateCurrent}
	sky {incr i
	    set grid(sky) [string tolower [lindex $var $i]]
	    GridUpdateCurrent
	}
	skyformat {
	    incr i
	    switch -- [string tolower [lindex $var $i]] {
		deg -
		degree -
		degrees {set grid(skyformat) degrees}
		default {set grid(skyformat) [string tolower [lindex $var $i]]}
	    }
	    GridUpdateCurrent
	}

	grid {
	    incr i
	    switch -- [string tolower [lindex $var $i]] {
		color {incr i; set grid(grid,color) [lindex $var $i]}
		width {incr i; set grid(grid,width) [lindex $var $i]}
		style {incr i; set grid(grid,style) [lindex $var $i]}
		gap1 {incr i; set grid(grid,gap1) [lindex $var $i]}
		gap2 {incr i; set grid(grid,gap2) [lindex $var $i]}
		gap3 {incr i; set grid(grid,gap3) [lindex $var $i]}
		default {set grid(grid) [FromYesNo [lindex $var $i]]}
	    }
	    GridUpdateCurrent
	}

	axes {
	    incr i
	    switch -- [string tolower [lindex $var $i]] {
		color {incr i; set grid(axes,color) [lindex $var $i]}
		width {incr i; set grid(axes,width) [lindex $var $i]}
		style {incr i; set grid(axes,style) [lindex $var $i]}
		type {incr i; set grid(axes,type) [lindex $var $i]}
		origin {incr i; set grid(axes,origin) [lindex $var $i]}
		default {set grid(axes) [FromYesNo [lindex $var $i]]}
	    }
	    GridUpdateCurrent
	}

	format1 {
	    incr i; set grid(format1) [lindex $var $i]
	    GridUpdateCurrent
	}
	format2 {
	    incr i; set grid(format2) [lindex $var $i]
	    GridUpdateCurrent
	}

	tickmark -
	tickmarks -
	tick {
	    incr i
	    switch -- [string tolower [lindex $var $i]] {
		color {incr i; set grid(tick,color) [lindex $var $i]}
		width {incr i; set grid(tick,width) [lindex $var $i]}
		style {incr i; set grid(tick,style) [lindex $var $i]}
		default {set grid(tick) [FromYesNo [lindex $var $i]]}
	    }
	    GridUpdateCurrent
	}

	border {
	    incr i
	    switch -- [string tolower [lindex $var $i]] {
		color {incr i; set grid(border,color) [lindex $var $i]}
		width {incr i; set grid(border,width) [lindex $var $i]}
		style {incr i; set grid(border,style) [lindex $var $i]}
		default {set grid(border) [FromYesNo [lindex $var $i]]}
	    }
	    GridUpdateCurrent
	}

	numeric -
	numerics -
	numlab {
	    incr i
	    switch -- [string tolower [lindex $var $i]] {
		font {incr i; set grid(numlab,font) [lindex $var $i]}
		fontsize {incr i; set grid(numlab,size) [lindex $var $i]}
		fontweight {incr i; set grid(numlab,weight) [lindex $var $i]}
		fontslant {incr i; set grid(numlab,slant) [lindex $var $i]}
		fontstyle {
		    incr i
		    switch [lindex $var $i] {
			normal {
			    set grid(numlab,weight) normal
			    set grid(numlab,slant) roman
			}
			bold {
			    set grid(numlab,weight) bold
			    set grid(numlab,slant) roman
			}
			italic {
			    set grid(numlab,weight) normal
			    set grid(numlab,slant) italic
			}
		    }
		}
		color {incr i; set grid(numlab,color) [lindex $var $i]}
		gap1 {incr i; set grid(numlab,gap1) [lindex $var $i]}
		gap2 {incr i; set grid(numlab,gap2) [lindex $var $i]}
		gap3 {incr i; set grid(numlab,gap3) [lindex $var $i]}
		type {incr i; set grid(numlab,type) [lindex $var $i]}
		vertical {incr i; set grid(numlab,vertical) [FromYesNo [lindex $var $i]]}
		default {set grid(numlab) [FromYesNo [lindex $var $i]]}
	    }
	    GridUpdateCurrent
	}

	title {
	    incr i
	    switch -- [string tolower [lindex $var $i]] {
		text {incr i; set grid(title,text) [lindex $var $i]}
		def {incr i; set grid(title,def) [FromYesNo [lindex $var $i]]}
		gap {incr i; set grid(title,gap) [lindex $var $i]}
		font {incr i; set grid(title,font) [lindex $var $i]}
		fontsize {incr i; set grid(title,size) [lindex $var $i]}
		fontweight {incr i; set grid(title,weight) [lindex $var $i]}
		fontslant {incr i; set grid(title,slant) [lindex $var $i]}
		fontstyle {
		    incr i
		    switch [lindex $var $i] {
			normal {
			    set grid(title,weight) normal
			    set grid(title,slant) roman
			}
			bold {
			    set grid(title,weight) bold
			    set grid(title,slant) roman
			}
			italic {
			    set grid(title,weight) normal
			    set grid(title,slant) italic
			}
		    }
		}
		color {incr i; set grid(title,color) [lindex $var $i]}
		default {set grid(title) [FromYesNo [lindex $var $i]]}
	    }
	    GridUpdateCurrent
	}

	label -
	labels -
	textlab {
	    incr i
	    switch -- [string tolower [lindex $var $i]] {
		text1 {incr i; set grid(textlab,text1) [lindex $var $i]}
		text2 {incr i; set grid(textlab,text2) [lindex $var $i]}
		def1 {incr i; set grid(textlab,def1) [FromYesNo [lindex $var $i]]}
		def2 {incr i; set grid(textlab,def2) [FromYesNo [lindex $var $i]]}
		gap1 {incr i; set grid(textlab,gap1) [lindex $var $i]}
		gap2 {incr i; set grid(textlab,gap2) [lindex $var $i]}
		font {incr i; set grid(textlab,font) [lindex $var $i]}
		fontsize {incr i; set grid(textlab,size) [lindex $var $i]}
		fontweight {incr i; set grid(textlab,weight) [lindex $var $i]}
		fontslant {incr i; set grid(textlab,slant) [lindex $var $i]}
		fontstyle {
		    incr i
		    switch [lindex $var $i] {
			normal {
			    set grid(textlab,weight) normal
			    set grid(textlab,slant) roman
			}
			bold {
			    set grid(textlab,weight) bold
			    set grid(textlab,slant) roman
			}
			italic {
			    set grid(textlab,weight) normal
			    set grid(textlab,slant) italic
			}
		    }
		}
		color {incr i; set grid(textlab,color) [lindex $var $i]}
		default {set grid(textlab) [FromYesNo [lindex $var $i]]}
	    }
	    GridUpdateCurrent
	}

	view {
	    # backward compatable
	    incr i
	    switch -- [string tolower [lindex $var $i]] {
		grid {incr i; set grid(grid) [FromYesNo [lindex $var $i]]}
		axes {
		    incr i
		    switch -- [string tolower [lindex $var $i]] {
			numbers {incr i; set grid(numlab) \
				     [FromYesNo [lindex $var $i]]}
			tickmarks {incr i; set grid(tick) \
				       [FromYesNo [lindex $var $i]]}
			label {incr i; set grid(textlab) \
				   [FromYesNo [lindex $var $i]]}
			default {set grid(axes) [FromYesNo [lindex $var $i]]}
		    }
		}
		title {incr i; set grid(title) [FromYesNo [lindex $var $i]]}
		border {incr i; set grid(border) [FromYesNo [lindex $var $i]]}
		vertical {
		    incr i
		    set grid(numlab,vertical) [FromYesNo [lindex $var $i]]
		}
	    }
	    GridUpdateCurrent
	}

	reset {GridResetDialog}
	load {
	    incr i
	    set fn [lindex $var $i]
	    FileLast gridfbox $fn

	    GridLoad $fn
	}
	save {
	    incr i
	    set fn [lindex $var $i]
	    FileLast gridfbox $fn

	    GridSave $fn
	}
	default {
	    set grid(view) 1
	    GridUpdateCurrent
	    incr i -1
	}
    }
}

proc ProcessSendGridCmd {proc id param} {
    global grid

    switch -- [lindex $param 0] {
	type {
	    switch -- [lindex $param 1] {
		axes {
		    # backward compatible
		    $proc $id "$grid(axes,type)\n"
		}
		numerics {
		    # backward compatible
		    $proc $id "$grid(numlab,type)\n"
		}
		default {$proc $id "$grid(type)\n"}
	    }
	}

	system {$proc $id "$grid(system)\n"}
	sky {$proc $id "$grid(sky)\n"}
	skyformat {$proc $id "$grid(skyformat)\n"}

	grid {
	    switch -- [lindex $param 1] {
		color {$proc $id "$grid(grid,color)\n"}
		width {$proc $id "$grid(grid,width)\n"}
		style {$proc $id "$grid(grid,style)\n"}
		gap1 {$proc $id "$grid(grid,gap1)\n"}
		gap2 {$proc $id "$grid(grid,gap2)\n"}
		gap3 {$proc $id "$grid(grid,gap3)\n"}
		default {$proc $id [ToYesNo $grid(grid)]}
	    }
	}

	axes {
	    switch -- [lindex $param 1] {
		color {$proc $id "$grid(axes,color)\n"}
		width {$proc $id "$grid(axes,width)\n"}
		style {$proc $id "$grid(axes,style)\n"}
		type {$proc $id "$grid(axes,type)\n"}
		origin {$proc $id "$grid(axes,origin)\n"}
		default {$proc $id [ToYesNo $grid(axes)]}
	    }
	}

	format1 {$proc $id "$grid(format1)\n"}
	format2 {$proc $id "$grid(format2)\n"}

	tickmark -
	tickmarks -
	tick {
	    switch -- [lindex $param 1] {
		color {$proc $id "$grid(tick,color)\n"}
		width {$proc $id "$grid(tick,width)\n"}
		style {$proc $id "$grid(tick,style)\n"}
		default {$proc $id [ToYesNo $grid(tick)]}
	    }
	}

	border {
	    switch -- [lindex $param 1] {
		color {$proc $id "$grid(border,color)\n"}
		width {$proc $id "$grid(border,width)\n"}
		style {$proc $id "$grid(border,style)\n"}
		default {$proc $id [ToYesNo $grid(border)]}
	    }
	}

	numeric -
	numerics -
	numlab {
	    switch -- [lindex $param 1] {
		font {$proc $id "$grid(numlab,font)\n"}
		fontsize {$proc $id "$grid(numlab,size)\n"}
		fontstyle -
		fontweight {$proc $id "$grid(numlab,weight)\n"}
		fontslant {$proc $id "$grid(numlab,slant)\n"}
		color {$proc $id "$grid(numlab,color)\n"}
		gap1 {$proc $id "$grid(numlab,gap1)\n"}
		gap2 {$proc $id "$grid(numlab,gap2)\n"}
		gap3 {$proc $id "$grid(numlab,gap3)\n"}
		type {$proc $id "$grid(numlab,type)\n"}
		vertical {$proc $id "$grid(numlab,vertical)\n"}
		default {$proc $id [ToYesNo $grid(numlab)]}
	    }
	}

	title {
	    switch -- [lindex $param 1] {
		text {$proc $id "$grid(title,text)\n"}
		def {$proc $id [ToYesNo $grid(title,def)]}
		gap {$proc $id "$grid(title,gap)\n"}
		font {$proc $id "$grid(title,font)\n"}
		fontsize {$proc $id "$grid(title,size)\n"}
		fontstyle -
		fontweight {$proc $id "$grid(title,weight)\n"}
		fontslant {$proc $id "$grid(title,slant)\n"}
		color {$proc $id "$grid(title,color)\n"}
		default {$proc $id [ToYesNo $grid(title)]}
	    }
	}

	label -
	labels -
	textlab {
	    switch -- [lindex $param 1] {
		text1 {$proc $id "$grid(textlab,text1)\n"}
		text2 {$proc $id "$grid(textlab,text2)\n"}
		def1 {$proc $id [ToYesNo $grid(textlab,def1)]}
		def2 {$proc $id [ToYesNo $grid(textlab,def2)]}
		gap1 {$proc $id "$grid(textlab,gap1)\n"}
		gap2 {$proc $id "$grid(textlab,gap2)\n"}
		font {$proc $id "$grid(textlab,font)\n"}
		fontsize {$proc $id "$grid(textlab,size)\n"}
		fontstyle -
		fontweight {$proc $id "$grid(textlab,weight)\n"}
		fontslant {$proc $id "$grid(textlab,slant)\n"}
		color {$proc $id "$grid(textlab,color)\n"}
		default {$proc $id [ToYesNo $grid(textlab)]}
	    }
	}

	view {
	    # backward compatible
	    switch -- [lindex $param 1] {
		grid {$proc $id [ToYesNo $grid(grid)]}
		axes {
		    switch -- [lindex $param 2] {
			numbers {$proc $id [ToYesNo $grid(numlab)]}
			tickmarks {$proc $id [ToYesNo $grid(tick)]}
			label {$proc $id [ToYesNo $grid(textlab)]}
			default {$proc $id [ToYesNo $grid(axes)]}
		    }
		}
		title {$proc $id [ToYesNo $grid(title)]}
		border {$proc $id [ToYesNo $grid(border)]}
		vertical {$proc $id [ToYesNo $grid(numlab,vertical)]}
	    }
	}
	default {$proc $id [ToYesNo $grid(view)]}
    }
}
