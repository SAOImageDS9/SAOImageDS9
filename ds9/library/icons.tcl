#  Copyright (C) 1999-2022
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc CreateIcons {} {
    CreateIconsLeft
    CreateIconsTop
    CreateIconsBottom
}

proc IconButtonToggleCmd {varname id cmd} {
    upvar #0 $varname var
    global $varname

    set var($id) [expr !$var($id)]
    if {$cmd != {}} {
	eval $cmd
    }
}

proc IconMenuButton {mb varname id value cmd} {
    global icons

    $mb.m add command -compound left -image $icons(${varname}${id},$value) \
	-command [list IconMenuButtonCmd $varname $id $value $cmd]
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