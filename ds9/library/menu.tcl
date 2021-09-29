#  Copyright (C) 1999-2021
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc CreateMenuBar {} {
    global ds9

    # we need this first, before the configure command
    ThemeMenu $ds9(mb) 
    switch $ds9(wm) {
	x11 -
	win32 {}
	aqua {AppleMenu $ds9(mb)}
    }
    $ds9(top) configure -menu $ds9(mb)

    $ds9(mb) add cascade -label [msgcat::mc {File}] -menu $ds9(mb).file
    $ds9(mb) add cascade -label [msgcat::mc {Edit}] -menu $ds9(mb).edit
    $ds9(mb) add cascade -label [msgcat::mc {View}] -menu $ds9(mb).view
    $ds9(mb) add cascade -label [msgcat::mc {Frame}] -menu $ds9(mb).frame
    $ds9(mb) add cascade -label [msgcat::mc {Bin}] -menu $ds9(mb).bin
    $ds9(mb) add cascade -label [msgcat::mc {Zoom}] -menu $ds9(mb).zoom
    $ds9(mb) add cascade -label [msgcat::mc {Scale}] -menu $ds9(mb).scale
    $ds9(mb) add cascade -label [msgcat::mc {Color}] -menu $ds9(mb).color
    $ds9(mb) add cascade -label [msgcat::mc {Region}] -menu $ds9(mb).region
    $ds9(mb) add cascade -label [msgcat::mc {WCS}] -menu $ds9(mb).wcs
    $ds9(mb) add cascade -label [msgcat::mc {Analysis}] -menu $ds9(mb).analysis

    FileMainMenu
    EditMainMenu
    ViewMainMenu
    FrameMainMenu
    BinMainMenu
    ZoomMainMenu
    ScaleMainMenu
    ColorMainMenu
    RegionMainMenu
    WCSMainMenu
    AnalysisMainMenu
    HelpMainMenu

    switch $ds9(wm) {
	x11 -
	win32 {
	    bind TFrame <<ThemeChanged>> {ThemeConfigTFrame %W}

	    bind Menu <<ThemeChanged>> {ThemeConfigMenu %W}
	    bind Text <<ThemeChanged>> {ThemeConfigText %W}
	    bind Table <<ThemeChanged>> {ThemeConfigTable %W}
	    bind Graph <<ThemeChanged>> {ThemeConfigPlot %W}
	    bind Barchart <<ThemeChanged>> {ThemeConfigPlot %W}

	    # for Obsvis
	    bind Frame <<ThemeChanged>> {ThemeConfigBg %W}
	    bind Labelframe <<ThemeChanged>> {ThemeConfigFgBg %W}
	    bind Panedwindow <<ThemeChanged>> {ThemeConfigBg %W}
	    bind Label <<ThemeChanged>> {ThemeConfigFgBg %W}
	    bind Entry <<ThemeChanged>> {ThemeConfigFgBg %W}
	    bind Button <<ThemeChanged>> {ThemeConfigFgBg %W}
	    bind Radiobutton <<ThemeChanged>> {ThemeConfigFgBg %W}
	    bind Checkbutton <<ThemeChanged>> {ThemeConfigFgBg %W}
	    bind Menubutton <<ThemeChanged>> {ThemeConfigFgBg %W}
	    bind Listbox <<ThemeChanged>> {ThemeConfigFgBg %W}
	    bind Spinbox <<ThemeChanged>> {ThemeConfigFgBg %W}
	    bind Scale <<ThemeChanged>> {ThemeConfigFgBg %W}
	    bind Scrollbar <<ThemeChanged>> {ThemeConfigBg %W}
	}
	aqua {}
    }
}

proc ThemeMenu {w} {
    global ds9

    menu $w
    switch $ds9(wm) {
	x11 -
	win32 {ThemeConfigMenu $w}
	aqua {}
    }

    return $w
}

proc ThemeConfigFgBg {w} {
    $w configure -fg [ThemeForeground]
    $w configure -bg [ThemeBackground]
}

proc ThemeConfigBg {w} {
    $w configure -bg [ThemeBackground]
}

proc ThemeConfigText {w} {
    $w configure -fg [ThemeTreeForeground]
    $w configure -bg [ThemeTreeBackground]

    # create a special text tag for keywords
    $w tag configure keyword -foreground [ThemeBold]
}

proc ThemeConfigTable {w} {
    $w configure -fg [ThemeTreeForeground]
    $w configure -bg [ThemeTreeBackground]

    $w tag configure sel \
	-fg [ThemeSelectedForeground] -bg [ThemeSelectedBackground]
    $w tag configure title -fg [ThemeForeground] -bg [ThemeBackground]

    # pixel table
    $w tag configure coord -foreground [ThemeBold]
}

proc ThemeConfigPlot {w} {
    set varname [lindex [split $w {.}] 1]
    if {$varname != {}} {
	# All non-plot blt::graphs need to be listed here
	#   scale
	#   horz/vert graph
	switch $varname {
	    scale -
	    ds9 {}
	    default {
		PlotUpdateAllElement $varname
	    }
	}
    }
}

# Theme Style Colors

proc ThemeConfigTFrame {w} {
    ttk::style configure Tree.TFrame -background \
	[ttk::style lookup Treeview -background]
}

proc ThemeConfigMenu {w} {
    global ds9

    $w configure -fg [ttk::style lookup . -foreground]
    $w configure -bg [ttk::style lookup . -background]

    $w configure -selectcolor [ttk::style lookup . -foreground]

    $w configure -activeforeground \
	[ttk::style lookup TMenubutton -foreground active]
    $w configure -activebackground \
	[ttk::style lookup TMenubutton -background active]
}

proc ThemeChange {} {
    global ds9
    global pds9

    switch $ds9(wm) {
	x11 -
	win32 {ttk::style theme use $pds9(theme)}
	aqua {}
    }
}

proc ThemeForeground {} {
    global ds9
    
    switch $ds9(wm) {
	x11 -
	win32 {return [ttk::style lookup . -foreground]}
	aqua {return systemTextColor}
    }
}

proc ThemeBackground {} {
    global ds9
    
    switch $ds9(wm) {
	x11 -
	win32 {return [ttk::style lookup . -background]}
	aqua {return systemTextBackgroundColor}
    }
}

proc ThemeTreeForeground {} {
    global ds9
    
    switch $ds9(wm) {
	x11 -
	win32 {return [ttk::style lookup Treeview -foreground]}
	aqua {return systemTextColor}
    }
}

proc ThemeTreeBackground {} {
    global ds9
    
    switch $ds9(wm) {
	x11 -
	win32 {return [ttk::style lookup Treeview -background]}
	aqua {return systemTextBackgroundColor}
    }
}

proc ThemeSelectedForeground {} {
    global ds9
    
    switch $ds9(wm) {
	x11 -
	win32 {return [ttk::style lookup Treeview -foreground selected]}
	aqua {return systemTextBackgroundColor}
    }
}

proc ThemeSelectedBackground {} {
    global ds9
    
    switch $ds9(wm) {
	x11 -
	win32 {return [ttk::style lookup Treeview -background selected]}
	aqua {return systemControlAccentColor}
    }
}

proc ThemeBold {} {
    global ds9
    
    switch $ds9(wm) {
	x11 -
	win32 {return [ttk::style lookup Treeview -background selected]}
	aqua {return systemControlAccentColor}
    }
}

proc AppleMenu {mb} {
    # apple menu
    ThemeMenu $mb.apple
    $mb add cascade -menu $mb.apple
    $mb.apple add command -label [msgcat::mc {About SAOImageDS9}] \
	-command AboutBox
}

# CoordMenu
proc CoordMenu {w varname system other sky skyformat cmd} {
    upvar #0 $varname var
    global $varname

    ThemeMenu $w
    $w add radiobutton -label [msgcat::mc {WCS}] \
	-variable ${varname}($system) -value wcs -command $cmd
    $w add cascade -label [msgcat::mc {Multiple WCS}] -menu $w.wcs
    ThemeMenu $w.wcs
    foreach l {a b c d e f g h i j k l m n o p q r s t u v w x y z} {
	$w.wcs add radiobutton -label "[msgcat::mc {WCS}] $l" \
	    -variable ${varname}($system) -value "wcs$l" -command $cmd
    }

    switch -- $other {
	0 {}
	1 {
	    $w add separator
	    $w add radiobutton -label [msgcat::mc {Image}] \
		-variable ${varname}($system) -value image -command $cmd
	    $w add radiobutton -label [msgcat::mc {Physical}] \
		-variable ${varname}($system) -value physical -command $cmd
	    $w add radiobutton -label [msgcat::mc {Amplifier}] \
		-variable ${varname}($system) -value amplifier -command $cmd
	    $w add radiobutton -label [msgcat::mc {Detector}] \
		-variable ${varname}($system) -value detector -command $cmd
	}
	2 {
	    $w add separator
	    $w add radiobutton -label [msgcat::mc {Image}] \
		-variable ${varname}($system) -value image -command $cmd
	}
    }

    if {$sky != {}} {
	$w add separator
	$w add radiobutton -label [msgcat::mc {FK4}] \
	    -variable ${varname}($sky) -value fk4 -command $cmd
	$w add radiobutton -label [msgcat::mc {FK5}] \
	    -variable ${varname}($sky) -value fk5 -command $cmd
	$w add radiobutton -label [msgcat::mc {ICRS}] \
	    -variable ${varname}($sky) -value icrs -command $cmd
	$w add radiobutton -label [msgcat::mc {Galactic}] \
	    -variable ${varname}($sky) -value galactic -command $cmd
	$w add radiobutton -label [msgcat::mc {Ecliptic}] \
	    -variable ${varname}($sky) -value ecliptic -command $cmd
    }

    if {$skyformat != {}} {
	$w add separator
	$w add radiobutton -label [msgcat::mc {Degrees}] \
	    -variable ${varname}($skyformat) -value degrees -command $cmd
	$w add radiobutton -label {Sexagesimal} \
	    -variable ${varname}($skyformat) -value sexagesimal -command $cmd
    }
}

proc CoordMenuButton {w varname system other sky skyformat cmd} {
    upvar #0 $varname var
    global $varname

    CoordMenuButtonCmd $varname $system $sky {}
    ttk::menubutton $w -textvariable ${varname}($system,msg) -menu $w.menu
    CoordMenu $w.menu $varname $system $other $sky $skyformat \
	[list CoordMenuButtonCmd $varname $system $sky $cmd]
}

proc CoordMenuButtonCmd {varname system sky cmd} {
    upvar #0 $varname var
    global $varname
    
    set ${varname}($system,msg) [msgcat::mc $var($system)]

    if {$sky != {}} {
	switch -- $var($system) {
	    image -
	    physical -
	    amplifier -
	    detector {}
	    default {
		if {[info exists var(frame)]} {
		    if {$var(frame) != {}} {
			if {[$var(frame) has wcs celestial $var($system)]} {
			    set ${varname}($system,msg) [msgcat::mc $var($sky)]
			}
		    }
		}
	    }
	}
    }

    if {$cmd != {}} {
	eval $cmd
    }
}

proc CoordMenuEnable {w varname system sky skyformat} {
    upvar #0 $varname var
    global $varname
    
    if {![info exists var(frame)]} {
	return
    }

    if {$var(frame) == {}} {
	return
    }

    if {[$var(frame) has wcs wcs]} {
	$w entryconfig [msgcat::mc {WCS}] -state normal
    } else {
	$w entryconfig [msgcat::mc {WCS}] -state disabled
    }
    
    $w entryconfig [msgcat::mc {Multiple WCS}] -state normal

    foreach ll {a b c d e f g h i j k l m n o p q r s t u v w x y z} {
	if {[$var(frame) has wcs "wcs${ll}"]} {
	    $w.wcs entryconfig "[msgcat::mc {WCS}] $ll" -state normal
	} else {
	    $w.wcs entryconfig "[msgcat::mc {WCS}] $ll" -state disabled
	}
    }

    if {$sky != {}} {
	if {[$var(frame) has wcs equatorial $var($system)]} {
	    $w entryconfig [msgcat::mc {FK4}] -state normal
	    $w entryconfig [msgcat::mc {FK5}] -state normal
	    $w entryconfig [msgcat::mc {ICRS}] -state normal
	    $w entryconfig [msgcat::mc {Galactic}] -state normal
	    $w entryconfig [msgcat::mc {Ecliptic}] -state normal
	} else {
	    $w entryconfig [msgcat::mc {FK4}] -state disabled
	    $w entryconfig [msgcat::mc {FK5}] -state disabled
	    $w entryconfig [msgcat::mc {ICRS}] -state disabled
	    $w entryconfig [msgcat::mc {Galactic}] -state disabled
	    $w entryconfig [msgcat::mc {Ecliptic}] -state disabled
	}
    }

    if {$skyformat != {}} {
	if {[$var(frame) has wcs celestial $var($system)]} {
	    $w entryconfig [msgcat::mc {Degrees}] -state normal
	    $w entryconfig {Sexagesimal} -state normal
	} else {
	    $w entryconfig [msgcat::mc {Degrees}] -state disabled
	    $w entryconfig {Sexagesimal} -state disabled
	}
    }
}

proc CoordMenuReset {w varname system sky skyformat} {
    upvar #0 $varname var
    global $varname

    $w entryconfig [msgcat::mc {WCS}] -state normal
    $w entryconfig [msgcat::mc {Multiple WCS}] -state normal

    foreach l {a b c d e f g h i j k l m n o p q r s t u v w x y z} {
	$w.wcs entryconfig "[msgcat::mc {WCS}] $l" -state normal
    }

    if {$sky != {}} {
	$w entryconfig [msgcat::mc {FK4}] -state normal
	$w entryconfig [msgcat::mc {FK5}] -state normal
	$w entryconfig [msgcat::mc {ICRS}] -state normal
	$w entryconfig [msgcat::mc {Galactic}] -state normal
	$w entryconfig [msgcat::mc {Ecliptic}] -state normal
    }

    if {$skyformat != {}} {
	$w entryconfig [msgcat::mc {Degrees}] -state normal
	$w entryconfig {Sexagesimal} -state normal
    }
}

# DistMenu
proc DistMenu {w varname system other format cmd} {
    upvar #0 $varname var
    global $varname

    ThemeMenu $w
    $w add radiobutton -label [msgcat::mc {WCS}] \
	-variable ${varname}($system) -value wcs -command $cmd
    $w add cascade -label [msgcat::mc {Multiple WCS}] \
	-menu $w.wcs
    ThemeMenu $w.wcs
    foreach l {a b c d e f g h i j k l m n o p q r s t u v w x y z} {
	$w.wcs add radiobutton -label "[msgcat::mc {WCS}] $l" \
	    -variable ${varname}($system) -value "wcs$l" -command $cmd
    }

    if {$other} {
	$w add separator
	$w add radiobutton -label [msgcat::mc {Image}] \
	    -variable ${varname}($system) -value image -command $cmd
	$w add radiobutton -label [msgcat::mc {Physical}] \
	    -variable ${varname}($system) -value physical -command $cmd
	$w add radiobutton -label [msgcat::mc {Amplifier}] \
	    -variable ${varname}($system) -value amplifier -command $cmd
	$w add radiobutton -label [msgcat::mc {Detector}] \
	    -variable ${varname}($system) -value detector -command $cmd
    }

    if {$format != {}} {
	$w add separator
	$w add radiobutton -label [msgcat::mc {Degrees}] \
	    -variable ${varname}($format) -value degrees -command $cmd
	$w add radiobutton -label [msgcat::mc {ArcMin}] \
	    -variable ${varname}($format) -value arcmin -command $cmd
	$w add radiobutton -label [msgcat::mc {ArcSec}] \
	    -variable ${varname}($format) -value arcsec -command $cmd
    }
}

proc DistMenuButton {w varname system other format cmd} {
    upvar #0 $varname var
    global $varname

    DistMenuButtonCmd $varname $system $format {}
    ttk::menubutton $w -textvariable ${varname}($system,msg) -menu $w.menu
    DistMenu $w.menu $varname $system $other $format \
	[list DistMenuButtonCmd $varname $system $format $cmd]
}

proc DistMenuButtonCmd {varname system format cmd} {
    upvar #0 $varname var
    global $varname
    
    set ${varname}($system,msg) [msgcat::mc $var($system)]

    if {$format != {}} {
	switch -- $var($system) {
	    image -
	    physical -
	    amplifier -
	    detector {}
	    default {
		if {[info exists var(frame)]} {
		    if {$var(frame) != {}} {
			if {[$var(frame) has wcs celestial $var($system)]} {
			    set ${varname}($system,msg) [msgcat::mc $var($format)]
			}
		    }
		}
	    }
	}
    }

    if {$cmd != {}} {
	eval $cmd
    }
}

proc DistMenuEnable {w varname system format} {
    upvar #0 $varname var
    global $varname
    
    if {![info exists var(frame)]} {
	return
    }

    if {$var(frame) == {}} {
	return
    }

    if {[$var(frame) has wcs wcs]} {
	$w entryconfig [msgcat::mc {WCS}] -state normal
    } else {
	$w entryconfig [msgcat::mc {WCS}] -state disabled
    }
    
    $w entryconfig [msgcat::mc {Multiple WCS}] -state normal

    foreach ll {a b c d e f g h i j k l m n o p q r s t u v w x y z} {
	if {[$var(frame) has wcs "wcs${ll}"]} {
	    $w.wcs entryconfig "[msgcat::mc {WCS}] $ll" -state normal
	} else {
	    $w.wcs entryconfig "[msgcat::mc {WCS}] $ll" -state disabled
	}
    }

    if {$format != {}} {
	if {[$var(frame) has wcs celestial $var($system)]} {
	    $w entryconfig [msgcat::mc {Degrees}] -state normal
	    $w entryconfig [msgcat::mc {ArcMin}] -state normal
	    $w entryconfig [msgcat::mc {ArcSec}] -state normal
	} else {
	    $w entryconfig [msgcat::mc {Degrees}] -state disabled
	    $w entryconfig [msgcat::mc {ArcMin}] -state disabled
	    $w entryconfig [msgcat::mc {ArcSec}] -state disabled
	}
    }
}

proc DistMenuReset {w varname system format} {
    upvar #0 $varname var
    global $varname
    
    $w entryconfig [msgcat::mc {WCS}] -state normal
    $w entryconfig [msgcat::mc {Multiple WCS}] -state normal

    foreach ll {a b c d e f g h i j k l m n o p q r s t u v w x y z} {
	$w.wcs entryconfig "[msgcat::mc {WCS}] $ll" -state normal
    }

    if {$format != {}} {
	$w entryconfig [msgcat::mc {Degrees}] -state normal
	$w entryconfig [msgcat::mc {ArcMin}] -state normal
	$w entryconfig [msgcat::mc {ArcSec}] -state normal
    }
}

# EditMenu
proc EditMenu {mb varname} {
    upvar #0 $varname var
    global $varname
    global ds9

    ThemeMenu $mb.edit
    $mb.edit add command -label [msgcat::mc {Cut}] \
	-command "EntryCut $var(top)" -accelerator "${ds9(ctrl)}X"
    $mb.edit add command -label [msgcat::mc {Copy}] \
	-command "EntryCopy $var(top)" -accelerator "${ds9(ctrl)}C"
    $mb.edit add command -label [msgcat::mc {Paste}] \
	-command "EntryPaste $var(top)" -accelerator "${ds9(ctrl)}V"
}

# ColorMenu
proc ColorMenu {w varname color cmd} {
    upvar #0 $varname var
    global $varname

    ThemeMenu $w
    $w add radiobutton -label [msgcat::mc {Black}] \
	-variable ${varname}($color) -value black -command $cmd
    $w add radiobutton -label [msgcat::mc {White}] \
	-variable ${varname}($color) -value white -command $cmd
    $w add radiobutton -label [msgcat::mc {Red}] \
	-variable ${varname}($color) -value red -command $cmd
    $w add radiobutton -label [msgcat::mc {Green}] \
	-variable ${varname}($color) -value green -command $cmd
    $w add radiobutton -label [msgcat::mc {Blue}] \
	-variable ${varname}($color) -value blue -command $cmd
    $w add radiobutton -label [msgcat::mc {Cyan}] \
	-variable ${varname}($color) -value cyan -command $cmd
    $w add radiobutton -label [msgcat::mc {Magenta}] \
	-variable ${varname}($color) -value magenta -command $cmd
    $w add radiobutton -label [msgcat::mc {Yellow}] \
	-variable ${varname}($color) -value yellow -command $cmd
    $w add separator
    $w add command -label "[msgcat::mc {Other Color}]..." \
	-command [list ColorMenuOther $varname $color $cmd]
}

proc ColorMenuOther {varname color cmd} {
    upvar #0 $varname var
    global $varname

    if {[EntryDialog [msgcat::mc {Color}] [msgcat::mc {Enter Color}] 20 ${varname}($color)]} {
	eval $cmd
    }
}

proc ColorMenuButton {w varname color cmd} {
    upvar #0 $varname var
    global $varname
    
    ttk::menubutton $w -textvariable ${varname}($color) -menu $w.menu
    ColorMenu $w.menu $varname $color $cmd
}

# FontMenu
proc FontMenu {w varname font size weight slant cmd} {
    upvar #0 $varname var
    global $varname

    ThemeMenu $w
    $w add radiobutton -label {Times} -variable ${varname}($font) \
	-value times -command $cmd
    $w add radiobutton -label {Helvetica} -variable ${varname}($font) \
	-value helvetica -command $cmd
    $w add radiobutton -label {Courier} -variable ${varname}($font) \
	-value courier -command $cmd
    $w add separator
    $w add radiobutton -label {9} -variable ${varname}($size) \
	-value 9 -command $cmd
    $w add radiobutton -label {10} -variable ${varname}($size) \
	-value 10 -command $cmd
    $w add radiobutton -label {12} -variable ${varname}($size) \
	-value 12 -command $cmd
    $w add radiobutton -label {14} -variable ${varname}($size) \
	-value 14 -command $cmd
    $w add radiobutton -label {16} -variable ${varname}($size) \
	-value 16 -command $cmd
    $w add radiobutton -label {20} -variable ${varname}($size) \
	-value 20 -command $cmd
    $w add radiobutton -label {24} -variable ${varname}($size) \
	-value 24 -command $cmd
    $w add radiobutton -label {30} -variable ${varname}($size) \
	-value 30 -command $cmd
    $w add radiobutton -label {36} -variable ${varname}($size) \
	-value 36 -command $cmd
    $w add radiobutton -label {72} -variable ${varname}($size) \
	-value 72 -command $cmd
    $w add separator
    $w add command -label "[msgcat::mc {Other Font Size}]..." \
	-command [list FontMenuSize $varname $size $cmd]
    $w add separator
    $w add radiobutton -label [msgcat::mc {Normal}] \
	-variable ${varname}($weight) -value normal -command $cmd
    $w add radiobutton -label [msgcat::mc {Bold}] \
	-variable ${varname}($weight) -value bold -command $cmd
    $w add separator
    $w add radiobutton -label [msgcat::mc {Roman}] \
	-variable ${varname}($slant) -value roman -command $cmd
    $w add radiobutton -label [msgcat::mc {Italic}] \
	-variable ${varname}($slant) -value italic -command $cmd
}

proc FontMenuSize {varname size cmd} {
    upvar #0 $varname var
    global $varname

    if {[EntryDialog [msgcat::mc {Font Size}] [msgcat::mc {Enter Font Size}] 20 ${varname}($size)]} {
	eval $cmd
    }
}

proc FontMenuButton {w varname font size weight slant cmd} {
    upvar #0 $varname var
    global $varname

    ttk::menubutton $w -textvariable ${varname}($font) -menu $w.menu
    FontMenu $w.menu $varname $font $size $weight $slant $cmd
}

# WidthDashMenu
proc WidthDashMenu {w varname width dash cmd1 cmd2} {
    upvar #0 $varname var
    global $varname

    ThemeMenu $w
    $w add radiobutton -label {1} -variable ${varname}($width) \
	-value 1 -command $cmd1
    $w add radiobutton -label {2} -variable ${varname}($width) \
	-value 2 -command $cmd1
    $w add radiobutton -label {3} -variable ${varname}($width) \
	-value 3 -command $cmd1
    $w add radiobutton -label {4} -variable ${varname}($width) \
	-value 4 -command $cmd1

    if {$dash != {}} {
	$w add separator
	$w add checkbutton -label [msgcat::mc {Dash}] \
	    -variable ${varname}($dash) -command $cmd2
    }
}

proc WidthDashMenuButton {w varname width dash cmd1 cmd2} {
    upvar #0 $varname var
    global $varname
    
    ttk::menubutton $w -textvariable ${varname}($width) -menu $w.menu
    WidthDashMenu $w.menu $varname $width $dash $cmd1 $cmd2
}

# Prefs
proc PrefsDialogMenu {} {
    global dprefs

    set w $dprefs(tab)

    $dprefs(listbox) insert {} end -id [ttk::frame $w.menu] \
	-text [msgcat::mc {Menus and Buttons}]

    PrefsDialogFileMenu $w.menu
    PrefsDialogEditMenu $w.menu
    PrefsDialogViewMenu $w.menu
    PrefsDialogFrameMenu $w.menu
    PrefsDialogBinMenu $w.menu
    PrefsDialogZoomMenu $w.menu
    PrefsDialogScaleMenu $w.menu
    PrefsDialogColorMenu $w.menu
    PrefsDialogRegionMenu $w.menu
    PrefsDialogWCSMenu $w.menu
    PrefsDialogAnalysisMenu $w.menu
    PrefsDialogHelpMenu $w.menu
}

proc ConfigureButtons {menu state} {
    global ds9
    global pbuttons

    foreach aa [array names pbuttons "$menu,*"] {
	set bb [lindex [split $aa {,}] 1]
	$ds9(buttons).$menu.$bb configure -state $state
    }
}
