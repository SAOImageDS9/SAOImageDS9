#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

# Menus

# Default colormap names
# [msgcat::mc {grey}]
# [msgcat::mc {red}]
# [msgcat::mc {green}]
# [msgcat::mc {blue}]
# [msgcat::mc {heat}]
# [msgcat::mc {cool}]
# [msgcat::mc {rainbow}]
# [msgcat::mc {standard}]
# [msgcat::mc {staircase}]
# [msgcat::mc {color}]

proc ColorMainMenu {} {
    global colorbar
    global icolorbar
    global ds9

    menu $ds9(mb).color

    set id [colorbar list id]
    # base
    foreach jj $id {
	set name [colorbar get name $jj]
	$ds9(mb).color add radiobutton \
	    -label [msgcat::mc $name] \
	    -variable colorbar(map) -value $name \
	    -command "ChangeColormapID $jj"
	incr icolorbar(count)
    }

    set icolorbar(end) $icolorbar(count)
    set icolorbar(h5) $icolorbar(count)
    set icolorbar(matplotlib) $icolorbar(count)
    set icolorbar(cubehelix) $icolorbar(count)
    set icolorbar(gist) $icolorbar(count)
    set icolorbar(topo) $icolorbar(count)
    set icolorbar(user) $icolorbar(count)

    $ds9(mb).color add separator
    $ds9(mb).color add cascade -label [msgcat::mc {h5utils}] \
	-menu $ds9(mb).color.h5
    $ds9(mb).color add cascade -label [msgcat::mc {Matplotlib}] \
	-menu $ds9(mb).color.matplotlib
    $ds9(mb).color add cascade -label [msgcat::mc {Cubehelix}] \
	-menu $ds9(mb).color.cubehelix
    $ds9(mb).color add cascade -label [msgcat::mc {Gist}] \
	-menu $ds9(mb).color.gist
    $ds9(mb).color add cascade -label [msgcat::mc {Topographic}] \
	-menu $ds9(mb).color.topo
    $ds9(mb).color add cascade -label [msgcat::mc {User}] \
	-menu $ds9(mb).color.user
    $ds9(mb).color add separator
    $ds9(mb).color add checkbutton -label [msgcat::mc {Invert Colormap}] \
	-variable colorbar(invert) -command InvertColorbar
    $ds9(mb).color add command -label [msgcat::mc {Reset Colormap}] \
	-command ResetColormap
    $ds9(mb).color add separator
    $ds9(mb).color add cascade -label [msgcat::mc {Colorbar}] \
	-menu $ds9(mb).color.colorbar
    $ds9(mb).color add separator
    $ds9(mb).color add command -label "[msgcat::mc {Colormap Parameters}]..." \
	-command ColormapDialog

    menu $ds9(mb).color.h5
    menu $ds9(mb).color.matplotlib
    menu $ds9(mb).color.cubehelix
    menu $ds9(mb).color.gist
    menu $ds9(mb).color.topo
    menu $ds9(mb).color.user

    menu $ds9(mb).color.colorbar
    $ds9(mb).color.colorbar add cascade -label [msgcat::mc {Orientation}] \
	-menu $ds9(mb).color.colorbar.orient
    $ds9(mb).color.colorbar add cascade -label [msgcat::mc {Numerics}] \
	-menu $ds9(mb).color.colorbar.numerics
    $ds9(mb).color.colorbar add cascade  -label [msgcat::mc {Font}] \
	-menu $ds9(mb).color.colorbar.cb 
    $ds9(mb).color.colorbar add separator
    $ds9(mb).color.colorbar add command \
	-label "[msgcat::mc {Size}]..." \
	-command ColorbarSizeDialog
    $ds9(mb).color.colorbar add command \
	-label "[msgcat::mc {Number of Ticks}]..." \
	-command TicksDialog

    menu $ds9(mb).color.colorbar.orient
    $ds9(mb).color.colorbar.orient add radiobutton \
	-label [msgcat::mc {Horizontal}] -variable colorbar(orientation) \
	-value horizontal -command UpdateView
    $ds9(mb).color.colorbar.orient add radiobutton \
	-label [msgcat::mc {Vertical}] -variable colorbar(orientation) \
	-value vertical -command UpdateView

    menu $ds9(mb).color.colorbar.numerics
    $ds9(mb).color.colorbar.numerics add checkbutton \
	-label [msgcat::mc {Show}] -variable colorbar(numerics) \
	-command UpdateView
    $ds9(mb).color.colorbar.numerics add separator
    $ds9(mb).color.colorbar.numerics add radiobutton \
	-label [msgcat::mc {Space Equal Value}] -variable colorbar(space) \
	-value 1 -command UpdateView
    $ds9(mb).color.colorbar.numerics add radiobutton \
	-label [msgcat::mc {Space Equal Distance}] -variable colorbar(space) \
	-value 0 -command UpdateView

    FontMenu $ds9(mb).color.colorbar.cb colorbar font font,size font,weight \
	font,slant UpdateView

    CreateExColorMenu h5
    CreateExColorMenu matplotlib
    CreateExColorMenu cubehelix
    CreateExColorMenu gist
    CreateExColorMenu topo
    CreateExColorMenu user
}

proc CreateExColorMenu {which} {
    global ds9
    global icolorbar

    # save start location
    set icolorbar($which) $icolorbar(count)

    foreach fn $icolorbar($which,fn) {
	if {[lindex $fn 0] == {-}} {
	    $ds9(mb).color.$which add separator
	} else {
	    set ch [open "$ds9(root)/cmaps/$fn" r]
	    global vardata 
	    set vardata [read $ch]
	    close $ch

	    colorbar load var "\{$fn\}" vardata
	    set id [colorbar get id]
	    set map [colorbar get name]
	    incr icolorbar(count)

	    $ds9(mb).color.$which add radiobutton \
		-label "$map" \
		-variable colorbar(map) \
		-command [list ChangeColormapID $id]
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
    menu $m

    set id [colorbar list id]
    # base
    for {set ii 0} {$ii<$icolorbar(end)} {incr ii} {
	set jj [lindex $id $ii]
	set name [colorbar get name $jj]
	$m add radiobutton -label [msgcat::mc $name] \
	    -variable pcolorbar(map) -value $name
    }

    $m add separator
    $m add checkbutton -label [msgcat::mc {Invert Colormap}] \
	-variable pcolorbar(invert)
    $m add separator
    $m add cascade -label [msgcat::mc {Colorbar}] -menu $m.colorbar

    menu $m.colorbar
    $m.colorbar add cascade -label [msgcat::mc {Orientation}] \
	-menu $m.colorbar.orient
    $m.colorbar add cascade -label [msgcat::mc {Numerics}] \
	-menu $m.colorbar.numerics
    $m.colorbar add cascade  -label [msgcat::mc {Font}] \
	-menu $m.colorbar.cb 

    menu $m.colorbar.orient
    $m.colorbar.orient add radiobutton -label [msgcat::mc {Horizontal}] \
	-variable pcolorbar(orientation) -value horizontal
    $m.colorbar.orient add radiobutton -label [msgcat::mc {Vertical}] \
	-variable pcolorbar(orientation) -value vertical

    menu $m.colorbar.numerics
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

proc PrefsDialogColor {} {
    global dprefs
    global colorbar
    global icolorbar
    global pcolorbar

    set w $dprefs(tab)

    $dprefs(list) insert end [msgcat::mc {Color}]
    lappend dprefs(tabs) [ttk::frame $w.color]

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

    # we have a chicken or the egg problem
    # the colorbar has not been defined yet, but we must define vars 
    # before prefs are processed, so hard code all default cmaps
    array set pbuttons {
	color,grey 1
	color,red 0
	color,green 0
	color,blue 0
	color,a 1
	color,b 1
	color,bb 1
	color,he 1
	color,i8 1
	color,aips0 1
	color,sls 0
	color,hsv 0
	color,heat 1
	color,cool 1
	color,rainbow 1
	color,standard 0
	color,staircase 0
	color,color 0
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

proc CreateButtonsColor {} {
    global buttons
    global ds9
    global colorbar
    global icolorbar

    ttk::frame $ds9(buttons).color

    set id [colorbar list id]
    # base
    for {set ii 0} {$ii<$icolorbar(end)} {incr ii} {
	set jj [lindex $id $ii]
	set name [colorbar get name $jj]
	RadioButton $ds9(buttons).color.$name [msgcat::mc $name] \
	    colorbar(map) $name "ChangeColormapID $jj"
    }

    CheckButton $ds9(buttons).color.invert \
	[string tolower [msgcat::mc {Invert}]] colorbar(invert) InvertColorbar
    ButtonButton $ds9(buttons).color.reset \
	[string tolower [msgcat::mc {Reset}]] ResetColormap
    RadioButton $ds9(buttons).color.horz \
	[string tolower [msgcat::mc {Horizontal}]] \
	colorbar(orientation) horizontal UpdateView
    RadioButton $ds9(buttons).color.vert \
	[string tolower [msgcat::mc {Vertical}]] \
	colorbar(orientation) vertical UpdateView
    CheckButton $ds9(buttons).color.numerics \
	[string tolower [msgcat::mc {Numerics}]] \
	colorbar(numerics) UpdateView
    RadioButton $ds9(buttons).color.numvalue \
	[string tolower [msgcat::mc {Value}]] \
	colorbar(space) 1 UpdateView
    RadioButton $ds9(buttons).color.numspace \
	[string tolower [msgcat::mc {Distance}]] \
	colorbar(space) 0 UpdateView

    ButtonButton $ds9(buttons).color.params \
	[string tolower [msgcat::mc {Parameters}]] ColormapDialog

    set buttons(color) {}
    set id [colorbar list id]
    # base
    for {set ii 0} {$ii<$icolorbar(end)} {incr ii} {
	set jj [lindex $id $ii]
	set name [colorbar get name $jj]
	append buttons(color) "$ds9(buttons).color.$name pbuttons(color,$name) "
    }

    append buttons(color) "$ds9(buttons).color.invert pbuttons(color,invert) "
    append buttons(color) "$ds9(buttons).color.reset pbuttons(color,reset) "
    append buttons(color) "$ds9(buttons).color.horz pbuttons(color,horz) "
    append buttons(color) "$ds9(buttons).color.vert pbuttons(color,vert) "
    append buttons(color) "$ds9(buttons).color.numerics pbuttons(color,numerics) "
    append buttons(color) "$ds9(buttons).color.numvalue pbuttons(color,numvalue) "
    append buttons(color) "$ds9(buttons).color.numspace pbuttons(color,numspace) "
    append buttons(color) "$ds9(buttons).color.params pbuttons(color,params) "
}

proc PrefsDialogButtonbarColor {f} {
    global icolorbar
    global buttons
    global pbuttons

    ttk::menubutton $f -text [msgcat::mc {Buttonbar}] -menu $f.menu
    
    set m $f.menu
    menu $m

    set id [colorbar list id]
    # base
    for {set ii 0} {$ii<$icolorbar(end)} {incr ii} {
	set jj [lindex $id $ii]
	set name [colorbar get name $jj]
	$m add checkbutton -label [msgcat::mc $name] \
	    -variable pbuttons(color,$name) \
	    -command {UpdateButtons buttons(color)}
    }

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
    $m add checkbutton -label "[msgcat::mc {Colormap Parameters}]..." \
	-variable pbuttons(color,params) \
	-command {UpdateButtons buttons(color)}

    menu $m.colorbar
    $m.colorbar add cascade -label [msgcat::mc {Orientation}] \
	-menu $m.colorbar.orient
    $m.colorbar add cascade -label [msgcat::mc {Numerics}] \
	-menu $m.colorbar.numerics

    menu $m.colorbar.orient
    $m.colorbar.orient add checkbutton -label [msgcat::mc {Horizontal}] \
	-variable pbuttons(color,horz) \
	-command {UpdateButtons buttons(color)}
    $m.colorbar.orient add checkbutton -label [msgcat::mc {Vertical}] \
	-variable pbuttons(color,vert) \
	-command {UpdateButtons buttons(color)}

    menu $m.colorbar.numerics
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

    set end [expr $icolorbar(end)+$icolorbar(start)]
    if {$current(frame) != {}} {
	switch [$current(frame) get type] {
	    base -
	    3d {
		# menus
		# base
		for {set ii $icolorbar(start)} {$ii<$end} {incr ii} {
		    $ds9(mb).color entryconfig $ii -state normal
		}
		$ds9(mb).color entryconfig [msgcat::mc {h5utils}] \
		    -state normal
		$ds9(mb).color entryconfig [msgcat::mc {Matplotlib}] \
		    -state normal
		$ds9(mb).color entryconfig [msgcat::mc {Cubehelix}] \
		    -state normal
		$ds9(mb).color entryconfig [msgcat::mc {Gist}] \
		    -state normal
		$ds9(mb).color entryconfig [msgcat::mc {Topographic}] \
		    -state normal
		$ds9(mb).color entryconfig [msgcat::mc {User}] \
		    -state normal

		# buttons
		set id [colorbar list id]
		# base
		for {set ii 0} {$ii<$icolorbar(end)} {incr ii} {
		    set jj [lindex $id $ii]
		    set name [colorbar get name $jj]
		    $ds9(buttons).color.$name configure -state normal
		}
	    }
	    rgb {
		# menus
		# base
		for {set ii $icolorbar(start)} {$ii<$end} {incr ii} {
		    $ds9(mb).color entryconfig $ii -state disabled
		}
		$ds9(mb).color entryconfig [msgcat::mc {h5utils}] \
		    -state disabled
		$ds9(mb).color entryconfig [msgcat::mc {Matplotlib}] \
		    -state disabled
		$ds9(mb).color entryconfig [msgcat::mc {Cubehelix}] \
		    -state disabled
		$ds9(mb).color entryconfig [msgcat::mc {Gist}] \
		    -state disabled
		$ds9(mb).color entryconfig [msgcat::mc {Topographic}] \
		    -state disabled
		$ds9(mb).color entryconfig [msgcat::mc {User}] \
		    -state disable

		# buttons
		set id [colorbar list id]
		# base
		for {set ii 0} {$ii<$icolorbar(end)} {incr ii} {
		    set jj [lindex $id $ii]
		    set name [colorbar get name $jj]
		    $ds9(buttons).color.$name configure -state disabled
		}
	    }
	}
    } else {
	# menus
	# base
	for {set ii $icolorbar(start)} {$ii<$end} {incr ii} {
	    $ds9(mb).color entryconfig $ii -state normal
	}
	$ds9(mb).color entryconfig [msgcat::mc {h5utils}] -state normal
	$ds9(mb).color entryconfig [msgcat::mc {Matplotlib}] -state normal
	$ds9(mb).color entryconfig [msgcat::mc {Cubehelix}] -state normal
	$ds9(mb).color entryconfig [msgcat::mc {Gist}] -state normal
	$ds9(mb).color entryconfig [msgcat::mc {Topographic}] -state normal
	$ds9(mb).color entryconfig [msgcat::mc {User}] -state normal

	# buttons
	set id [colorbar list id]
	# base
	for {set ii 0} {$ii<$icolorbar(end)} {incr ii} {
	    set jj [lindex $id $ii]
	    set name [colorbar get name $jj]
	    $ds9(buttons).color.$name configure -state normal
	}
    }
}
