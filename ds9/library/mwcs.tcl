#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

# Menu

proc WCSMainMenu {} {
    global ds9
    global wcs

    CoordMenu $ds9(mb).wcs wcs system 0 sky skyformat UpdateWCS
    $ds9(mb).wcs add separator
    $ds9(mb).wcs add command -label "[msgcat::mc {WCS Parameters}]..." \
	-command WCSDialog
}

proc UpdateWCSMenu {} {
    global wcs
    global ds9
    global current
    global bin

    global debug
    if {$debug(tcl,update)} {
	puts stderr "UpdateWCSMenu"
    }

    if {$current(frame) != {}} {
	$ds9(mb) entryconfig [msgcat::mc {WCS}] -state normal

	set ww [$current(frame) get wcs]
	set wcs(system) [lindex $ww 0]
	set wcs(sky) [lindex $ww 1]
	set wcs(skyformat) [lindex $ww 2]

	set wcs(frame) $current(frame)
	if {[$current(frame) has fits]} {
	    CoordMenuEnable $ds9(mb).wcs wcs system 0 sky skyformat
	} else {
	    CoordMenuReset $ds9(mb).wcs wcs system 0 sky skyformat
	}
	LayoutWCSInfoBox $current(frame)
    } else {
	$ds9(mb) entryconfig [msgcat::mc {WCS}] -state disabled
    }
}

proc PrefsDialogWCSMenu {w} {
    set f [ttk::labelframe $w.mwcs -text [msgcat::mc {WCS}]]

    ttk::menubutton $f.menu -text [msgcat::mc {Menu}] -menu $f.menu.menu
    PrefsDialogButtonbarWCS $f.buttonbar

    grid $f.menu $f.buttonbar -padx 2 -pady 2 -sticky w

    CoordMenu $f.menu.menu pwcs system 0 sky skyformat {}

    pack $f -side top -fill both -expand true
}

# Buttons

proc ButtonsWCSDef {} {
    global pbuttons

    array set pbuttons {
	wcs,fk4 1
	wcs,fk5 1
	wcs,icrs 1
	wcs,galactic 1
	wcs,ecliptic 1
	wcs,degrees 1
	wcs,sexagesimal 1
    }
}

proc CreateButtonsWCS {} {
    global buttons
    global ds9
    global wcs

    ttk::frame $ds9(buttons).wcs

    RadioButton $ds9(buttons).wcs.fk4 {fk4} \
	wcs(sky) fk4 UpdateWCS
    RadioButton $ds9(buttons).wcs.fk5 {fk5} \
	wcs(sky) fk5 UpdateWCS
    RadioButton $ds9(buttons).wcs.icrs \
	[string tolower [msgcat::mc {ICRS}]] \
	wcs(sky) icrs UpdateWCS
    RadioButton $ds9(buttons).wcs.galactic \
	[string tolower [msgcat::mc {Galactic}]] \
	wcs(sky) galactic UpdateWCS
    RadioButton $ds9(buttons).wcs.ecliptic \
	[string tolower [msgcat::mc {Ecliptic}]] \
	wcs(sky) ecliptic UpdateWCS
    RadioButton $ds9(buttons).wcs.degrees \
	[string tolower [msgcat::mc {Degrees}]] \
	wcs(skyformat) degrees UpdateWCS
    RadioButton $ds9(buttons).wcs.sexagesimal {sexagesimal} \
	wcs(skyformat) sexagesimal UpdateWCS

    set buttons(wcs) "
        $ds9(buttons).wcs.fk4 pbuttons(wcs,fk4)
        $ds9(buttons).wcs.fk5 pbuttons(wcs,fk5)
        $ds9(buttons).wcs.icrs pbuttons(wcs,icrs)
        $ds9(buttons).wcs.galactic pbuttons(wcs,galactic)
        $ds9(buttons).wcs.ecliptic pbuttons(wcs,ecliptic)
        $ds9(buttons).wcs.degrees pbuttons(wcs,degrees)
        $ds9(buttons).wcs.sexagesimal pbuttons(wcs,sexagesimal)
    "
}

proc PrefsDialogButtonbarWCS {f} {
    global buttons
    global pbuttons

    ttk::menubutton $f -text [msgcat::mc {Buttonbar}] -menu $f.menu
    
    set m $f.menu
    menu $m
    $m add checkbutton -label [msgcat::mc {FK4}] \
	-variable pbuttons(wcs,fk4) -command {UpdateButtons buttons(wcs)}
    $m add checkbutton -label [msgcat::mc {FK5}] \
	-variable pbuttons(wcs,fk5) -command {UpdateButtons buttons(wcs)}
    $m add checkbutton -label [msgcat::mc {ICRS}] \
	-variable pbuttons(wcs,icrs) -command {UpdateButtons buttons(wcs)}
    $m add checkbutton -label [msgcat::mc {Galactic}] \
	-variable pbuttons(wcs,galactic) -command {UpdateButtons buttons(wcs)}
    $m add checkbutton -label [msgcat::mc {Ecliptic}] \
	-variable pbuttons(wcs,ecliptic) -command {UpdateButtons buttons(wcs)}
    $m add separator
    $m add checkbutton -label [msgcat::mc {Degrees}] \
	-variable pbuttons(wcs,degrees) -command {UpdateButtons buttons(wcs)}
    $m add checkbutton -label [msgcat::mc {Sexagesimal}] \
	-variable pbuttons(wcs,sexagesimal) -command {UpdateButtons buttons(wcs)}
}

