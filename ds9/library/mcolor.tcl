#  Copyright (C) 1999-2021
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

# Menus

proc ColorMainMenu {} {
    global colorbar
    global icolorbar
    global ds9

    ThemeMenu $ds9(mb).color
    foreach cmap $icolorbar(default,cmaps) {
	$ds9(mb).color add radiobutton \
	    -label [msgcat::mc $cmap] \
	    -variable colorbar(map) -value $cmap \
	    -command [list ChangeColormapName $cmap]
    }

    $ds9(mb).color add separator
    $ds9(mb).color add cascade -label [msgcat::mc {h5utils}] \
	-menu $ds9(mb).color.h5
    $ds9(mb).color add cascade -label [msgcat::mc {Matplotlib Uniform}] \
	-menu $ds9(mb).color.mpl-uni
    $ds9(mb).color add cascade -label [msgcat::mc {Matplotlib Sequential}] \
	-menu $ds9(mb).color.mpl-seq
    $ds9(mb).color add cascade -label [msgcat::mc {Matplotlib Diverging}] \
	-menu $ds9(mb).color.mpl-div
    $ds9(mb).color add cascade -label [msgcat::mc {Matplotlib Cyclic}] \
	-menu $ds9(mb).color.mpl-cyc
    $ds9(mb).color add cascade -label [msgcat::mc {Cubehelix}] \
	-menu $ds9(mb).color.cubehelix
    $ds9(mb).color add cascade -label [msgcat::mc {Gist}] \
	-menu $ds9(mb).color.gist
    $ds9(mb).color add cascade -label [msgcat::mc {Topographic}] \
	-menu $ds9(mb).color.topo
    $ds9(mb).color add cascade -label [msgcat::mc {Scientific Colour Maps}] \
	-menu $ds9(mb).color.scm
    $ds9(mb).color add cascade -label [msgcat::mc {Solar Colormaps}] \
	-menu $ds9(mb).color.solar
    $ds9(mb).color add cascade -label [msgcat::mc {User}] \
	-menu $ds9(mb).color.user

    ColorMainMenuExternal h5
    ColorMainMenuExternal mpl-uni
    ColorMainMenuExternal mpl-seq
    ColorMainMenuExternal mpl-div
    ColorMainMenuExternal mpl-cyc
    ColorMainMenuExternal cubehelix
    ColorMainMenuExternal gist
    ColorMainMenuExternal topo
    ColorMainMenuExternal scm
    ColorMainMenuExternal solar
    ColorMainMenuExternal user

    $ds9(mb).color add separator
    $ds9(mb).color add checkbutton -label [msgcat::mc {Invert Colormap}] \
	-variable colorbar(invert) -command InvertColorbar
    $ds9(mb).color add command -label [msgcat::mc {Reset Colormap}] \
	-command ResetColormap
    $ds9(mb).color add separator
    $ds9(mb).color add cascade -label [msgcat::mc {Colorbar}] \
	-menu $ds9(mb).color.colorbar
    $ds9(mb).color add separator
    $ds9(mb).color add command -label [msgcat::mc {Colormap Parameters}] \
	-command ColormapDialog

    ThemeMenu $ds9(mb).color.colorbar
    $ds9(mb).color.colorbar add cascade -label [msgcat::mc {Orientation}] \
	-menu $ds9(mb).color.colorbar.orient
    $ds9(mb).color.colorbar add cascade -label [msgcat::mc {Numerics}] \
	-menu $ds9(mb).color.colorbar.numerics
    $ds9(mb).color.colorbar add cascade  -label [msgcat::mc {Font}] \
	-menu $ds9(mb).color.colorbar.cb 
    $ds9(mb).color.colorbar add separator
    $ds9(mb).color.colorbar add command \
	-label [msgcat::mc {Size}] \
	-command ColorbarSizeDialog
    $ds9(mb).color.colorbar add command \
	-label [msgcat::mc {Number of Ticks}] \
	-command TicksDialog

    ThemeMenu $ds9(mb).color.colorbar.orient
    $ds9(mb).color.colorbar.orient add radiobutton \
	-label [msgcat::mc {Horizontal}] -variable colorbar(orientation) \
	-value 0 -command ColorbarUpdateView
    $ds9(mb).color.colorbar.orient add radiobutton \
	-label [msgcat::mc {Vertical}] -variable colorbar(orientation) \
	-value 1 -command ColorbarUpdateView

    ThemeMenu $ds9(mb).color.colorbar.numerics
    $ds9(mb).color.colorbar.numerics add checkbutton \
	-label [msgcat::mc {Show}] -variable colorbar(numerics) \
	-command ColorbarUpdateView
    $ds9(mb).color.colorbar.numerics add separator
    $ds9(mb).color.colorbar.numerics add radiobutton \
	-label [msgcat::mc {Space Equal Value}] -variable colorbar(space) \
	-value 1 -command ColorbarUpdateView
    $ds9(mb).color.colorbar.numerics add radiobutton \
	-label [msgcat::mc {Space Equal Distance}] -variable colorbar(space) \
	-value 0 -command ColorbarUpdateView

    FontMenu $ds9(mb).color.colorbar.cb colorbar font font,size font,weight \
	font,slant ColorbarUpdateView
}

proc ColorMainMenuExternal {which} {
    global ds9
    global icolorbar

    ThemeMenu $ds9(mb).color.$which

    set cnt -1
    foreach cmap $icolorbar($which,cmaps) {
	$ds9(mb).color.$which add radiobutton \
	    -label [msgcat::mc $cmap] \
	    -variable colorbar(map) -value $cmap \
	    -command [list ChangeColormapName $cmap]

	# wrap if needed
	incr cnt
	if {$cnt>=$ds9(menu,size,wrap)} {
	    set cnt 0
	    $ds9(mb).color.$which entryconfig [msgcat::mc $cmap] -columnbreak 1
	}
    }
}

proc PrefsDialogColorMenu {w} {
    global colorbar
    global icolorbar
    global pcolorbar

    set f [ttk::labelframe $w.mcolor -text [msgcat::mc {Color}]]

    ttk::menubutton $f.menu -text [msgcat::mc {Menu}] -menu $f.menu.menu
    PrefsDialogButtonbarColor $f.buttonbar

    grid $f.menu $f.buttonbar -padx 2 -pady 2 -sticky w

    set m $f.menu.menu
    ThemeMenu $m

    foreach cmap $icolorbar(default,cmaps) {
	$m add radiobutton -label [msgcat::mc $cmap] \
	    -variable pcolorbar(map) -value $cmap
    }
    
    $m add separator
    $m add cascade -label [msgcat::mc {h5utils}] -menu $m.h5
    $m add cascade -label [msgcat::mc {Matplotlib Uniform}] \
	-menu $m.mpl-uni
    $m add cascade -label [msgcat::mc {Matplotlib Sequential}] \
	-menu $m.mpl-seq
    $m add cascade -label [msgcat::mc {Matplotlib Diverging}] \
	-menu $m.mpl-div
    $m add cascade -label [msgcat::mc {Matplotlib Cyclic}] \
	-menu $m.mpl-cyc
    $m add cascade -label [msgcat::mc {Cubehelix}] -menu $m.cubehelix
    $m add cascade -label [msgcat::mc {Gist}] -menu $m.gist
    $m add cascade -label [msgcat::mc {Topographic}] -menu $m.topo
    $m add cascade -label [msgcat::mc {Scientific Colour Maps}] -menu $m.scm
    $m add cascade -label [msgcat::mc {Solar Colormaps}] -menu $m.solar

    PrefsColorMenuExternal $m h5
    PrefsColorMenuExternal $m mpl-uni
    PrefsColorMenuExternal $m mpl-seq
    PrefsColorMenuExternal $m mpl-div
    PrefsColorMenuExternal $m mpl-cyc
    PrefsColorMenuExternal $m cubehelix
    PrefsColorMenuExternal $m gist
    PrefsColorMenuExternal $m topo
    PrefsColorMenuExternal $m scm
    PrefsColorMenuExternal $m solar

    $m add separator
    $m add checkbutton -label [msgcat::mc {Invert Colormap}] \
	-variable pcolorbar(invert)
    $m add separator
    $m add cascade -label [msgcat::mc {Colorbar}] -menu $m.colorbar

    ThemeMenu $m.colorbar
    $m.colorbar add cascade -label [msgcat::mc {Orientation}] \
	-menu $m.colorbar.orient
    $m.colorbar add cascade -label [msgcat::mc {Numerics}] \
	-menu $m.colorbar.numerics
    $m.colorbar add cascade  -label [msgcat::mc {Font}] \
	-menu $m.colorbar.cb 

    ThemeMenu $m.colorbar.orient
    $m.colorbar.orient add radiobutton -label [msgcat::mc {Horizontal}] \
	-variable pcolorbar(orientation) -value 0
    $m.colorbar.orient add radiobutton -label [msgcat::mc {Vertical}] \
	-variable pcolorbar(orientation) -value 1

    ThemeMenu $m.colorbar.numerics
    $m.colorbar.numerics add checkbutton -label [msgcat::mc {Show}] \
	-variable pcolorbar(numerics)
    $m.colorbar.numerics add separator
    $m.colorbar.numerics add radiobutton \
	-label [msgcat::mc {Space Equal Value}] \
	-variable pcolorbar(space) -value 1
    $m.colorbar.numerics add radiobutton \
	-label [msgcat::mc {Space Equal Distance}] \
	-variable pcolorbar(space) -value 0

    FontMenu $m.colorbar.cb pcolorbar font font,size font,weight \
	font,slant {}

    pack $f -side top -fill both -expand true
}

proc PrefsColorMenuExternal {m which} {
    global ds9
    global icolorbar

    ThemeMenu $m.$which

    foreach cmap $icolorbar($which,cmaps) {
	$m.$which add radiobutton -label [msgcat::mc $cmap] \
	    -variable pcolorbar(map) -value $cmap
    }
}

proc PrefsDialogColor {} {
    global dprefs
    global pcolorbar

    set w $dprefs(tab)

    $dprefs(listbox) insert {} end -id [ttk::frame $w.color] \
	-text [msgcat::mc {Color}]

    set f [ttk::labelframe $w.color.colorbar -text [msgcat::mc {Colorbar}]]

    ttk::label $f.tsize -text [msgcat::mc {Colorbar Size}]
    ttk::entry $f.size -textvariable pcolorbar(size) -width 10
    
    ttk::label $f.tticks -text [msgcat::mc {Number of Ticks}]
    ttk::entry $f.ticks -textvariable pcolorbar(ticks) -width 10
    
    ttk::label $f.tcolor -text [msgcat::mc {Tag Color}]
    ColorMenuButton $f.color pcolorbar tag {}

    grid $f.tsize $f.size -padx 2 -pady 2 -sticky w
    grid $f.tticks $f.ticks -padx 2 -pady 2 -sticky w
    grid $f.tcolor $f.color -padx 2 -pady 2 -sticky w

    pack $f -side top -fill both -expand true
}

# Buttons

proc ButtonsColorDef {} {
    global pbuttons

    ButtonsColorDefExternal default
    ButtonsColorDefExternal h5
    ButtonsColorDefExternal mpl-uni
    ButtonsColorDefExternal mpl-seq
    ButtonsColorDefExternal mpl-div
    ButtonsColorDefExternal mpl-cyc
    ButtonsColorDefExternal cubehelix
    ButtonsColorDefExternal gist
    ButtonsColorDefExternal topo
    ButtonsColorDefExternal scm
    ButtonsColorDefExternal solar
    
    array set pbuttons {
	color,grey 1
	color,a 1
	color,b 1
	color,bb 1
	color,he 1
	color,i8 1
	color,aips0 1
	color,heat 1
	color,cool 1
	color,rainbow 1
	color,mpl_viridis 1

	color,invert 0
	color,reset 0
	color,horz 0
	color,vert 0
	color,numerics 0
	color,numvalue 0
	color,numspace 0
	color,params 0
    }
}

proc ButtonsColorDefExternal {which} {
    global icolorbar
    global pbuttons
    
    foreach cmap $icolorbar($which,cmaps) {
	set pbuttons(color,$cmap) 0
    }
}

proc CreateButtonsColor {} {
    global buttons
    global ds9
    global colorbar
    global icolorbar

    ttk::frame $ds9(buttons).color

    set buttons(color) {}
    CreateButtonsColorExternal default
    CreateButtonsColorExternal h5
    CreateButtonsColorExternal mpl-uni
    CreateButtonsColorExternal mpl-seq
    CreateButtonsColorExternal mpl-div
    CreateButtonsColorExternal mpl-cyc
    CreateButtonsColorExternal cubehelix
    CreateButtonsColorExternal gist
    CreateButtonsColorExternal topo
    CreateButtonsColorExternal scm
    CreateButtonsColorExternal solar

    CheckButton $ds9(buttons).color.invert \
	[string tolower [msgcat::mc {Invert}]] colorbar invert InvertColorbar
    ButtonButton $ds9(buttons).color.reset \
	[string tolower [msgcat::mc {Reset}]] ResetColormap
    RadioButton $ds9(buttons).color.horz \
	[string tolower [msgcat::mc {Horizontal}]] \
	colorbar orientation 0 ColorbarUpdateView
    RadioButton $ds9(buttons).color.vert \
	[string tolower [msgcat::mc {Vertical}]] \
	colorbar orientation 1 ColorbarUpdateView
    CheckButton $ds9(buttons).color.numerics \
	[string tolower [msgcat::mc {Numerics}]] \
	colorbar numerics ColorbarUpdateView
    RadioButton $ds9(buttons).color.numvalue \
	[string tolower [msgcat::mc {Value}]] \
	colorbar space 1 ColorbarUpdateView
    RadioButton $ds9(buttons).color.numspace \
	[string tolower [msgcat::mc {Distance}]] \
	colorbar space 0 ColorbarUpdateView

    ButtonButton $ds9(buttons).color.params \
	[string tolower [msgcat::mc {Parameters}]] ColormapDialog

    append buttons(color) "$ds9(buttons).color.invert pbuttons(color,invert) "
    append buttons(color) "$ds9(buttons).color.reset pbuttons(color,reset) "
    append buttons(color) "$ds9(buttons).color.horz pbuttons(color,horz) "
    append buttons(color) "$ds9(buttons).color.vert pbuttons(color,vert) "
    append buttons(color) "$ds9(buttons).color.numerics pbuttons(color,numerics) "
    append buttons(color) "$ds9(buttons).color.numvalue pbuttons(color,numvalue) "
    append buttons(color) "$ds9(buttons).color.numspace pbuttons(color,numspace) "
    append buttons(color) "$ds9(buttons).color.params pbuttons(color,params) "
}

proc CreateButtonsColorExternal {which} {
    global buttons
    global icolorbar
    global colorbar
    global ds9
    
    foreach cmap $icolorbar($which,cmaps) {
	RadioButton $ds9(buttons).color.$cmap [msgcat::mc $cmap] \
	    colorbar map $cmap [list ChangeColormapName $cmap]

	append buttons(color) "$ds9(buttons).color.$cmap pbuttons(color,$cmap) "
    }
}

proc PrefsDialogButtonbarColor {f} {
    global icolorbar
    global buttons
    global pbuttons

    ttk::menubutton $f -text [msgcat::mc {Buttonbar}] -menu $f.menu
    
    set m $f.menu
    ThemeMenu $m

    foreach cmap $icolorbar(default,cmaps) {
	$m add checkbutton -label [msgcat::mc $cmap] \
	    -variable pbuttons(color,$cmap) \
	    -command {UpdateButtons buttons(color)}
    }

    $m add separator
    $m add cascade -label [msgcat::mc {h5utils}] -menu $m.h5
    $m add cascade -label [msgcat::mc {Matplotlib Uniform}] \
	-menu $m.mpl-uni
    $m add cascade -label [msgcat::mc {Matplotlib Sequential}] \
	-menu $m.mpl-seq
    $m add cascade -label [msgcat::mc {Matplotlib Diverging}] \
	-menu $m.mpl-div
    $m add cascade -label [msgcat::mc {Matplotlib Cyclic}] \
	-menu $m.mpl-cyc
    $m add cascade -label [msgcat::mc {Cubehelix}] -menu $m.cubehelix
    $m add cascade -label [msgcat::mc {Gist}] -menu $m.gist
    $m add cascade -label [msgcat::mc {Topographic}] -menu $m.topo
    $m add cascade -label [msgcat::mc {Scientific Colour Maps}] -menu $m.scm
    $m add cascade -label [msgcat::mc {Solar Colormaps}] -menu $m.solar

    PrefsDialogButtonbarColorExternal $m h5
    PrefsDialogButtonbarColorExternal $m mpl-uni
    PrefsDialogButtonbarColorExternal $m mpl-seq
    PrefsDialogButtonbarColorExternal $m mpl-div
    PrefsDialogButtonbarColorExternal $m mpl-cyc
    PrefsDialogButtonbarColorExternal $m cubehelix
    PrefsDialogButtonbarColorExternal $m gist
    PrefsDialogButtonbarColorExternal $m topo
    PrefsDialogButtonbarColorExternal $m scm
    PrefsDialogButtonbarColorExternal $m solar

    $m add separator
    $m add checkbutton -label [msgcat::mc {Invert Colormap}] \
	-variable pbuttons(color,invert) \
	-command {UpdateButtons buttons(color)}
    $m add checkbutton -label [msgcat::mc {Reset Colormap}] \
	-variable pbuttons(color,reset) \
	-command {UpdateButtons buttons(color)}
    $m add separator
    $m add cascade -label [msgcat::mc {Colorbar}] -menu $m.colorbar
    $m add separator
    $m add checkbutton -label [msgcat::mc {Colormap Parameters}] \
	-variable pbuttons(color,params) \
	-command {UpdateButtons buttons(color)}

    ThemeMenu $m.colorbar
    $m.colorbar add cascade -label [msgcat::mc {Orientation}] \
	-menu $m.colorbar.orient
    $m.colorbar add cascade -label [msgcat::mc {Numerics}] \
	-menu $m.colorbar.numerics

    ThemeMenu $m.colorbar.orient
    $m.colorbar.orient add checkbutton -label [msgcat::mc {Horizontal}] \
	-variable pbuttons(color,horz) \
	-command {UpdateButtons buttons(color)}
    $m.colorbar.orient add checkbutton -label [msgcat::mc {Vertical}] \
	-variable pbuttons(color,vert) \
	-command {UpdateButtons buttons(color)}

    ThemeMenu $m.colorbar.numerics
    $m.colorbar.numerics add checkbutton -label [msgcat::mc {Show}] \
	-variable pbuttons(color,numerics) \
	-command {UpdateButtons buttons(color)}
    $m.colorbar.numerics add separator
    $m.colorbar.numerics add checkbutton -label [msgcat::mc {Equal Value}] \
	-variable pbuttons(color,numvalue) \
	-command {UpdateButtons buttons(color)}
    $m.colorbar.numerics add checkbutton -label [msgcat::mc {Equal Spacing}] \
	-variable pbuttons(color,numspace) \
	-command {UpdateButtons buttons(color)}
}

proc PrefsDialogButtonbarColorExternal {m which} {
    global ds9
    global icolorbar

    ThemeMenu $m.$which

    foreach cmap $icolorbar($which,cmaps) {
	$m.$which add checkbutton -label [msgcat::mc $cmap] \
	    -variable pbuttons(color,$cmap) \
	    -command {UpdateButtons buttons(color)}
    }
}

# Support

proc UpdateColorMenu {} {
    global icolorbar
    global ds9
    global current
    global buttons

    global debug
    if {$debug(tcl,update)} {
	puts stderr "UpdateColorMenu"
    }

    if {$current(frame) != {}} {
	switch [$current(frame) get type] {
	    base -
	    3d {
		foreach cmap $icolorbar(default,cmaps) {
		    $ds9(mb).color entryconfig $cmap -state normal
		}

		$ds9(mb).color entryconfig [msgcat::mc {h5utils}] \
		    -state normal
		$ds9(mb).color entryconfig [msgcat::mc {Matplotlib Uniform}] \
		    -state normal
		$ds9(mb).color entryconfig [msgcat::mc {Matplotlib Sequential}] \
		    -state normal
		$ds9(mb).color entryconfig [msgcat::mc {Matplotlib Diverging}] \
		    -state normal
		$ds9(mb).color entryconfig [msgcat::mc {Cubehelix}] \
		    -state normal
		$ds9(mb).color entryconfig [msgcat::mc {Gist}] \
		    -state normal
		$ds9(mb).color entryconfig [msgcat::mc {Topographic}] \
		    -state normal
		$ds9(mb).color entryconfig \
		    [msgcat::mc {Scientific Colour Maps}] \
		    -state normal
		$ds9(mb).color entryconfig \
		    [msgcat::mc {Solar Colormaps}] \
		    -state normal
		$ds9(mb).color entryconfig [msgcat::mc {User}] \
		    -state normal

		UpdateColorButtonExternal default normal
		UpdateColorButtonExternal h5 normal
		UpdateColorButtonExternal mpl-uni normal
		UpdateColorButtonExternal mpl-seq normal
		UpdateColorButtonExternal mpl-div normal
		UpdateColorButtonExternal mpl-cyc normal
		UpdateColorButtonExternal cubehelix normal
		UpdateColorButtonExternal gist normal
		UpdateColorButtonExternal topo normal
		UpdateColorButtonExternal scm normal
		UpdateColorButtonExternal solar normal
	    }
	    rgb {
		foreach cmap $icolorbar(default,cmaps) {
		    $ds9(mb).color entryconfig $cmap -state disabled
		}

		$ds9(mb).color entryconfig [msgcat::mc {h5utils}] \
		    -state disabled
		$ds9(mb).color entryconfig [msgcat::mc {Matplotlib Uniform}] \
		    -state disabled
		$ds9(mb).color entryconfig [msgcat::mc {Matplotlib Sequential}] \
		    -state disabled
		$ds9(mb).color entryconfig [msgcat::mc {Matplotlib Diverging}] \
		    -state disabled
		$ds9(mb).color entryconfig [msgcat::mc {Cubehelix}] \
		    -state disabled
		$ds9(mb).color entryconfig [msgcat::mc {Gist}] \
		    -state disabled
		$ds9(mb).color entryconfig [msgcat::mc {Topographic}] \
		    -state disabled
		$ds9(mb).color entryconfig \
		    [msgcat::mc {Scientific Colour Maps}] \
		    -state disabled
		$ds9(mb).color entryconfig \
		    [msgcat::mc {Solar Colormaps}] \
		    -state disabled
		$ds9(mb).color entryconfig [msgcat::mc {User}] \
		    -state disable

		UpdateColorButtonExternal default disable
		UpdateColorButtonExternal h5 disable
		UpdateColorButtonExternal mpl-uni disable
		UpdateColorButtonExternal mpl-seq disable
		UpdateColorButtonExternal mpl-div disable
		UpdateColorButtonExternal mpl-cyc disable
		UpdateColorButtonExternal cubehelix disable
		UpdateColorButtonExternal gist disable
		UpdateColorButtonExternal topo disable
		UpdateColorButtonExternal scm disable
		UpdateColorButtonExternal solar disable
	    }
	}
    } else {
	foreach cmap $icolorbar(default,cmaps) {
	    $ds9(mb).color entryconfig $cmap -state normal
	}

	$ds9(mb).color entryconfig [msgcat::mc {h5utils}] -state normal
	$ds9(mb).color entryconfig [msgcat::mc {Matplotlib Uniform}] \
	    -state normal
	$ds9(mb).color entryconfig [msgcat::mc {Matplotlib Sequential}] \
	    -state normal
	$ds9(mb).color entryconfig [msgcat::mc {Matplotlib Diverging}] \
	    -state normal
	$ds9(mb).color entryconfig [msgcat::mc {Cubehelix}] -state normal
	$ds9(mb).color entryconfig [msgcat::mc {Gist}] -state normal
	$ds9(mb).color entryconfig [msgcat::mc {Topographic}] -state normal
	$ds9(mb).color entryconfig [msgcat::mc {Scientific Colour Maps}] -state normal
	$ds9(mb).color entryconfig [msgcat::mc {Solar Colormaps}] -state normal
	$ds9(mb).color entryconfig [msgcat::mc {User}] -state normal

	UpdateColorButtonExternal default normal
	UpdateColorButtonExternal h5 normal
	UpdateColorButtonExternal mpl-uni normal
	UpdateColorButtonExternal mpl-seq normal
	UpdateColorButtonExternal mpl-div normal
	UpdateColorButtonExternal mpl-cyc normal
	UpdateColorButtonExternal cubehelix normal
	UpdateColorButtonExternal gist normal
	UpdateColorButtonExternal topo normal
	UpdateColorButtonExternal scm normal
	UpdateColorButtonExternal solar normal
    }
}

proc UpdateColorButtonExternal {which state} {
    global icolorbar
    global colorbar
    global ds9

    foreach cmap $icolorbar($which,cmaps) {
	switch $state {
	    normal {
		if {$colorbar(map) == $cmap} {
		    $ds9(buttons).color.$cmap configure -state active
		} else {
		    $ds9(buttons).color.$cmap configure -state normal
		}
	    }
	    disable {
		$ds9(buttons).color.$cmap configure -state disable
	    }
	}
    }
}
