#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc MarkerLoadDialog {} {
    global marker
    global ed
    global current
    global wcs

    set w {.mkd}

    set ed(ok) 0
    set ed(format) $marker(format)
    set ed(load) $marker(load)
    set ed(frame) $current(frame)

    set ed(system) $wcs(system)
    set ed(sky) $wcs(sky)
    set ed(skyformat) $wcs(skyformat)
    AdjustCoordSystem ed system

    DialogCreate $w [msgcat::mc {Load Regions}] ed(ok)

    # Param
    set f [ttk::frame $w.param]

    ttk::label $f.formattitle -text [msgcat::mc {Format}]
    set m $f.formatbutton.menu
    ttk::menubutton $f.formatbutton -textvariable ed(format) -menu $m
    ttk::label $f.coordtitle -text [msgcat::mc {Coordinate System}]
    set ed(cb) $f.coordbutton
    CoordMenuButton $ed(cb) ed system 1 sky skyformat {}
    ttk::radiobutton $f.current -text [msgcat::mc {Load into Current Frame}] \
	-variable ed(load) -value current
    ttk::radiobutton $f.all -text [msgcat::mc {Load into All Frames}] \
	-variable ed(load) -value all

    menu $m
    $m add radiobutton -label {DS9/Funtools} -variable ed(format) -value ds9 \
	-command UpdateMarkerLoadDialog
    $m add radiobutton -label {XML} -variable ed(format) -value xml \
	-command UpdateMarkerLoadDialog
    $m add radiobutton -label {CIAO} -variable ed(format) -value ciao \
	-command UpdateMarkerLoadDialog
    $m add radiobutton -label {SAOtng} -variable ed(format) -value saotng \
	-command UpdateMarkerLoadDialog
    $m add radiobutton -label {SAOimage} -variable ed(format) -value saoimage \
	-command UpdateMarkerLoadDialog
    $m add radiobutton -label {IRAF PROS} -variable ed(format) -value pros \
	-command UpdateMarkerLoadDialog
    $m add radiobutton -label {X Y} -variable ed(format) -value xy \
	-command UpdateMarkerLoadDialog

    grid $f.formattitle $f.formatbutton -padx 2 -pady 2 -sticky w
    grid $f.coordtitle $f.coordbutton -padx 2 -pady 2 -sticky w
    grid $f.current - -padx 2 -pady 2 -sticky w
    grid $f.all - -padx 2 -pady 2 -sticky w

    # Button
    set f [ttk::frame $w.buttons]
    ttk::button $f.ok -text [msgcat::mc {OK}] -command {set ed(ok) 1} \
	-default active 
    ttk::button $f.cancel -text [msgcat::mc {Cancel}] -command {set ed(ok) 0}
    pack $f.ok $f.cancel -side left -expand true -padx 2 -pady 4

    bind $w <Return> {set ed(ok) 1}

    # Fini
    ttk::separator $w.sep -orient horizontal
    pack $w.buttons $w.sep -side bottom -fill x
    pack $w.param -side top -fill both -expand true

    UpdateMarkerLoadDialog

    DialogCenter $w 
    DialogWait $w ed(ok)
    DialogDismiss $w

    if {$ed(ok)} {
	set marker(format) $ed(format)
	set marker(system) $ed(system)
	set marker(sky) $ed(sky)
	set marker(skyformat) $ed(skyformat)
	set marker(load) $ed(load)
    }

    set rr $ed(ok)
    unset ed
    return $rr
}

proc UpdateMarkerLoadDialog {} {
    global ed
    global current

    set mm $ed(cb).menu
    set ed(frame) $current(frame)
    CoordMenuEnable $mm ed system 1 sky skyformat

    switch -- $ed(format) {
	xy {$ed(cb) configure -state normal}
	default {$ed(cb) configure -state disabled}
    }

    AdjustCoordSystem ed system
    CoordMenuButtonCmd ed system sky {}
}

proc MarkerSaveDialog {title} {
    global marker
    global ed
    global current
    global wcs

    set w {.mkd}

    set ed(ok) 0
    set ed(format) $marker(format)
    set ed(frame) $current(frame)

    set ed(system) $wcs(system)
    set ed(sky) $wcs(sky)
    set ed(skyformat) $wcs(skyformat)
    AdjustCoordSystem ed system

    DialogCreate $w $title ed(ok)

    # Param
    set f [ttk::frame $w.param]

    ttk::label $f.formattitle -text [msgcat::mc {Format}]
    set m $f.formatbutton.menu
    ttk::menubutton $f.formatbutton -textvariable ed(format) -menu $m
    ttk::label $f.coordtitle -text [msgcat::mc {Coordinate System}]
    set ed(cb) $f.coordbutton

    CoordMenuButton $ed(cb) ed system 1 sky skyformat UpdateMarkerSaveDialog

    menu $m
    $m add radiobutton -label {DS9/Funtools} -variable ed(format) -value ds9 \
	-command UpdateMarkerSaveDialog
    $m add radiobutton -label {XML} -variable ed(format) -value xml \
	-command UpdateMarkerSaveDialog
    $m add radiobutton -label {CIAO} -variable ed(format) -value ciao \
	-command UpdateMarkerSaveDialog
    $m add radiobutton -label {SAOtng} -variable ed(format) -value saotng \
	-command UpdateMarkerSaveDialog
    $m add radiobutton -label {SAOimage} -variable ed(format) -value saoimage \
	-command UpdateMarkerSaveDialog
    $m add radiobutton -label {IRAF PROS} -variable ed(format) -value pros \
	-command UpdateMarkerSaveDialog
    $m add radiobutton -label {X Y} -variable ed(format) -value xy \
	-command UpdateMarkerSaveDialog

    grid $f.formattitle $f.formatbutton -padx 2 -pady 2 -sticky w
    grid $f.coordtitle $f.coordbutton -padx 2 -pady 2 -sticky w

    # Button
    set f [ttk::frame $w.buttons]
    ttk::button $f.ok -text [msgcat::mc {OK}] -command {set ed(ok) 1} \
	-default active 
    ttk::button $f.cancel -text [msgcat::mc {Cancel}] -command {set ed(ok) 0}
    pack $f.ok $f.cancel -side left -expand true -padx 2 -pady 4

    bind $w <Return> {set ed(ok) 1}

    # Fini
    ttk::separator $w.sep -orient horizontal
    pack $w.buttons $w.sep -side bottom -fill x
    pack $w.param -side top -fill both -expand true

    UpdateMarkerSaveDialog

    DialogCenter $w 
    DialogWait $w ed(ok)
    DialogDismiss $w

    if {$ed(ok)} {
	set marker(format) $ed(format)
	set marker(system) $ed(system)
	set marker(sky) $ed(sky)
	set marker(skyformat) $ed(skyformat)
    }

    set rr $ed(ok)
    unset ed
    return $rr
}

proc UpdateMarkerSaveDialog {} {
    global ed
    global current

    set mm $ed(cb).menu
    set ed(frame) $current(frame)
    CoordMenuEnable $mm ed system 1 sky skyformat

    switch -- $ed(format) {
	ds9 -
	xml -
	xy {}

	ciao {
	    switch -- $ed(system) {
		detector -
		amplifier -
		physical -
		image {set ed(system) physical}
		wcs -
		default {set ed(system) wcs}
	    }

	    set ed(sky) fk5
	    set ed(skyformat) sexagesimal

	    $mm entryconfig [msgcat::mc {Multiple WCS}] -state disabled
	    $mm entryconfig [msgcat::mc {Image}] -state disabled
	    $mm entryconfig [msgcat::mc {Amplifier}] -state disabled
	    $mm entryconfig [msgcat::mc {Detector}] -state disabled

	    $mm entryconfig [msgcat::mc {FK4}] -state disabled
	    $mm entryconfig [msgcat::mc {ICRS}] -state disabled
	    $mm entryconfig [msgcat::mc {Galactic}] -state disabled
	    $mm entryconfig [msgcat::mc {Ecliptic}] -state disabled

	    $mm entryconfig [msgcat::mc {Degrees}] -state disabled
	}

	saotng {
	    switch -- $ed(system) {
		detector -
		amplifier -
		image -
		physical {set ed(system) image}
		wcs -
		default {set ed(system) wcs}
	    }

	    $mm entryconfig [msgcat::mc {Multiple WCS}] -state disabled
	    $mm entryconfig [msgcat::mc {Physical}] -state disabled
	    $mm entryconfig [msgcat::mc {Amplifier}] -state disabled
	    $mm entryconfig [msgcat::mc {Detector}] -state disabled
	}

	saoimage {
	    set ed(system) image

	    $mm entryconfig [msgcat::mc {WCS}] -state disabled
	    $mm entryconfig [msgcat::mc {Multiple WCS}] -state disabled
	    $mm entryconfig [msgcat::mc {Physical}] -state disabled
	    $mm entryconfig [msgcat::mc {Amplifier}] -state disabled
	    $mm entryconfig [msgcat::mc {Detector}] -state disabled

	    $mm entryconfig [msgcat::mc {FK4}] -state disabled
	    $mm entryconfig [msgcat::mc {FK5}] -state disabled
	    $mm entryconfig [msgcat::mc {ICRS}] -state disabled
	    $mm entryconfig [msgcat::mc {Galactic}] -state disabled
	    $mm entryconfig [msgcat::mc {Ecliptic}] -state disabled

	    $mm entryconfig [msgcat::mc {Degrees}] -state disabled
	    $mm entryconfig {Sexagesimal} -state disabled
	}

	pros {
	    switch -- $ed(system) {
		detector -
		physical -
		amplifier {set ed(system) physical}
		image {}
		wcs -
		default {set ed(system) wcs}
	    }
	    if {$ed(sky) == {icrs}} {
		set ed(sky) fk5
	    }

	    $mm entryconfig [msgcat::mc {Multiple WCS}] -state disabled
	    $mm entryconfig [msgcat::mc {Amplifier}] -state disabled
	    $mm entryconfig [msgcat::mc {Detector}] -state disabled

	    $mm entryconfig [msgcat::mc {ICRS}] -state disabled
	}
    }

    AdjustCoordSystem ed system
    CoordMenuButtonCmd ed system sky {}
}


