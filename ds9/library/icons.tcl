#  Copyright (C) 1999-2022,2026
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc CreateIcons {} {
    global ds9

    set ds9(icons,ui) $ds9(root)/icons/ui
    set ds9(icons,lut) $ds9(root)/icons/lut
    set ds9(icons,colors) $ds9(root)/icons/colors

    IconDarkModeCheck
    CreateIconsLeft
    CreateIconsTop
    CreateIconsBottom
}

proc ConfigureIcons {} {
    IconDarkModeCheck

    ConfigureIconsLeft
    ConfigureIconsTop
    ConfigureIconsBottom
}

proc IconButtonToggleCmd {varname id cmd} {
    upvar #0 $varname var
    global $varname

    set ${varname}($id) [expr !$var($id)]
    if {$cmd != {}} {
	eval $cmd
    }
}

proc IconMenuButton {mb txt varname id value cmd} {
    global icons

    if {$txt != {}} {
	$mb.m add command -compound left \
	    -label $txt \
	    -command [list IconMenuButtonCmd $varname $id $value $cmd]
    } else {
	$mb.m add command -compound left \
	    -command [list IconMenuButtonCmd $varname $id $value $cmd]
    }

    if { [info exists $icons(${varname}${id},$value) ] } {
        $mb.m configure -image $icons(${varname}${id},$value)
    }

}

proc DMIconMenuButton {mb txt varname id value cmd} {
    global icons

    #~ if {$txt != {}} {
	#~ $mb.m add command -compound left \
	    #~ -label $txt \
	    #~ -command [list IconMenuButtonCmd $varname $id $value $cmd]
    #~ } else {
	#~ $mb.m add command -compound left \
	    #~ -command [list IconMenuButtonCmd $varname $id $value $cmd]
    #~ }


}

proc IconMenuButtonCmd {varname id value cmd} {
    upvar #0 $varname var
    global $varname

    set ${varname}($id) $value
    if {$cmd != {}} {
	eval $cmd
    }
}

proc IconMenuButtonCB {mb varname id op} {
    global $varname
    global icons

    if {[info exists icons(${varname}${id},[set ${varname}($id)])]} {
	$mb configure -image $icons(${varname}${id},[set ${varname}($id)])
    } else {
	$mb configure -image $icons(${varname}${id},default)
    }
}

proc IconDarkModeCheck { } {
    global ds9

    set cur_theme [ttk::style theme use]

    switch $cur_theme {
        awblack -
        awbreezedark -
        awdark { set ds9(icons,ui) $ds9(root)/icons/ui_dark }
        default {set ds9(icons,ui) $ds9(root)/icons/ui}
    }

}
