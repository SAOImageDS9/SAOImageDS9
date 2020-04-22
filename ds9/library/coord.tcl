#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc CoordDef {} {
    global pcoord

    # prefs only
    set pcoord(filename) 0
    set pcoord(value) 1
    set pcoord(image) 1
    set pcoord(physical) 0
    set pcoord(amplifier) 0
    set pcoord(detector) 0
    set pcoord(wcs) 1
    foreach l {a b c d e f g h i j k l m n o p q r s t u v w x y z} {
	set "pcoord(wcs$l)" 0
    }
}

proc SetCoordSystem {varname system sky skyformat} {
    upvar #0 $varname var
    global $varname

    global current
    switch $var(system) {
	image -
	physical -
	detector -
	amplifier {}
	default {
	    if {$current(frame) != {}} {
		set rr [$current(frame) get wcs]
		set var($system) [lindex $rr 0]
		if {$sky != {}} {
		    set var($sky) [lindex $rr 1]
		}
		if {$skyformat != {}} {
		    set var($skyformat) [lindex $rr 2]
		}
	    }
	}
    }
}

proc AdjustCoordSystem {varname system} {
    upvar #0 $varname var
    global $varname

    global current
    if {$current(frame) == {}} {
	return
    }

    switch -- $var($system) {
	image -
	physical -
	amplifier -
	detector {}
	default {
	    if {![$current(frame) has wcs $var($system)]} {
		set ${varname}($system) physical
	    }
	}
    }
}

proc AdjustCoordSystem3d {varname system} {
    upvar #0 $varname var
    global $varname

    global current
    if {$current(frame) == {}} {
	return
    }
    
    switch -- $var($system) {
	image {}
	default {
	    if {![$current(frame) has wcs 3d $var($system)]} {
		set ${varname}($system) image
	    }
	}
    }
}

proc DisplayCoordDialog {which x y} {
    global pcoord
    global wcs

    set rr {}

    if {$pcoord(filename)} {
	append rr "[$which get fits file name full]"
    }

    foreach ll {{} a b c d e f g h i j k l m n o p q r s t u v w x y z} {
	if {"$pcoord(wcs$ll)" && [$which has wcs "wcs$ll"]} {
	    append rr " [$which get coordinates $x $y wcs$ll $wcs(sky) $wcs(skyformat)]"
	    if {[$which has wcs celestial "wcs$ll"]} {
		append rr " $wcs(sky)"
	    } else {
		set name [$which get wcs name "wcs$ll"]
		if {$name != {}} {
		    append rr " $name"
		} else {
		    append rr " wcs$ll"
		}
	    }
	}
    }

    if {$pcoord(detector) && [$which has detector]} {
	append rr " [$which get coordinates $x $y detector] detector"
    }

    if {$pcoord(amplifier) && [$which has amplifier]} {
	append rr " [$which get coordinates $x $y amplifier] amplifier"
    }

    if {$pcoord(physical) && [$which has physical]} {
	append rr " [$which get coordinates $x $y physical] physical"
    }

    if {$pcoord(image)} {
	append rr " [$which get coordinates $x $y image]"
    }

    if {$pcoord(value)} {
	append rr " [$which get value canvas $x $y]"
    }

    append rr " \n"

    SimpleTextDialog coordtxt [msgcat::mc {Coordinates}] \
	80 20 append bottom "$rr"
}

proc PrefsDialogCoord {} {
    global dprefs

    set w $dprefs(tab)

    $dprefs(listbox) insert {} end -id [ttk::frame $w.coord] \
	-text [msgcat::mc {Print Coordinates}]

    # Print
    set f [ttk::labelframe $w.coord.print -text [msgcat::mc {Print}]]

    ttk::checkbutton $f.filename -text [msgcat::mc {Filename}] \
	-variable pcoord(filename)
    ttk::checkbutton $f.value -text [msgcat::mc {Value}] \
	-variable pcoord(value)
    ttk::checkbutton $f.wcs -text [msgcat::mc {WCS}] -variable pcoord(wcs)
    ttk::menubutton $f.mwcs -text [msgcat::mc {Multiple WCS}] -menu $f.mwcs.menu

    ttk::checkbutton $f.image -text [msgcat::mc {Image}] \
	-variable pcoord(image)
    ttk::checkbutton $f.physical -text [msgcat::mc {Physical}] \
	-variable pcoord(physical)
    ttk::checkbutton $f.amplifier -text [msgcat::mc {Amplifier}] \
	-variable pcoord(amplifier)
    ttk::checkbutton $f.detector -text [msgcat::mc {Detector}] \
	-variable pcoord(detector)

    set m $f.mwcs.menu
    ThemeMenu $m
    foreach l {a b c d e f g h i j k l m n o p q r s t u v w x y z} {
	$m add checkbutton -label "[msgcat::mc {WCS}] $l" \
	    -variable "pcoord(wcs$l)"
    }

    grid $f.filename -padx 2 -pady 2 -sticky w
    grid $f.value -padx 2 -pady 2 -sticky w
    grid $f.wcs $f.mwcs -padx 2 -pady 2 -sticky w
    grid $f.image -padx 2 -pady 2 -sticky w
    grid $f.physical -padx 2 -pady 2 -sticky w
    grid $f.amplifier -padx 2 -pady 2 -sticky w
    grid $f.detector -padx 2 -pady 2 -sticky w

    pack $w.coord.print -side top -fill both -expand true
}

