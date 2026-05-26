#! /usr/bin/env tclsh

#==============================================================================
# Demonstrates the use of the Scrollutil package in connection with the
# scrollutil::scrollableframe widget.
#
# Copyright (c) 2019-2023  Csaba Nemethi (E-mail: csaba.nemethi@t-online.de)
#==============================================================================

package require Tk
package require scrollutil_tile
set dir [file dirname [info script]]
source [file join $dir styleUtil.tcl]

wm title . "European Capitals Quiz"

#
# Create a scrollableframe within a scrollarea
#
set f  [ttk::frame .f]
set sa [scrollutil::scrollarea $f.sa]
set sf [scrollutil::scrollableframe $sa.sf]
$sa setwidget $sf

#
# Create mouse wheel event bindings for the binding tag "all"
#
scrollutil::createWheelEventBindings all

#
# Get the content frame and populate it
#

set cf [$sf contentframe]

set countryList {
    Albania Andorra Austria Belarus Belgium "Bosnia and Herzegovina" Bulgaria
    Croatia Cyprus "Czech Republic" Denmark Estonia Finland France Germany
    Greece Hungary Iceland Ireland Italy Kosovo Latvia Liechtenstein Lithuania
    Luxembourg Macedonia Malta Moldova Monaco Montenegro Netherlands Norway
    Poland Portugal Romania Russia "San Marino" Serbia Slovakia Slovenia
    Spain Sweden Switzerland Ukraine "United Kingdom" "Vatican City"
}
set capitalList {
    Tirana "Andorra la Vella" Vienna Minsk Brussels Sarajevo Sofia
    Zagreb Nicosia Prague Copenhagen Tallinn Helsinki Paris Berlin
    Athens Budapest Reykjavik Dublin Rome Pristina Riga Vaduz Vilnius
    Luxembourg Skopje Valletta Chisinau Monaco Podgorica Amsterdam Oslo
    Warsaw Lisbon Bucharest Moscow "San Marino" Belgrade Bratislava Ljubljana
    Madrid Stockholm Bern Kiev London "Vatican City"
}

foreach country $countryList capital $capitalList {
    set capitalArr($country) $capital
}

set capitalList [lsort $capitalList]

if {[lsearch -exact {aqua vista xpnative} [styleutil::getCurrentTheme]] >= 0} {
    set topPadY 1.5p
} else {
    set topPadY 3p
}
set padY [list $topPadY 0]

set row 0
foreach country $countryList {
    set w [ttk::label $cf.l$row -text $country]
    grid $w -row $row -column 0 -sticky w -padx {3p 0} -pady $padY

    set w [ttk::combobox $cf.cb$row -state readonly -width 14 \
	   -values $capitalList]
    bind $w <<ComboboxSelected>> [list checkCapital %W $country]
    grid $w -row $row -column 1 -sticky w -padx {3p 0} -pady $padY

    #
    # Make the keyboard navigation more user-friendly
    #
    bind $w <<TraverseIn>> [list $sf see %W]

    #
    # Adapt the handling of the mouse wheel events for the ttk::combobox widget
    #
    scrollutil::adaptWheelEventHandling $w

    set b [styleutil::createToolbutton $cf.b$row -text "Resolve" \
	   -command [list setCapital $w $country]]
    grid $b -row $row -column 2 -sticky w -padx 3p -pady $padY

    #
    # Make the keyboard navigation more user-friendly
    #
    bind $b <<TraverseIn>> [list $sf see %W]

    incr row
}

#
# Create a ttk::button widget outside the scrollarea
#
set b [ttk::button $f.b -text "Close" -command exit]

pack $b  -side bottom -pady {0 7p}
pack $sa -side top -expand yes -fill both -padx 7p -pady 7p
pack $f  -expand yes -fill both

#
# Set the scrollableframe's width, height, and yscrollincrement
#
after 50 [list configSf $sf $cf $row $topPadY]

#------------------------------------------------------------------------------

proc checkCapital {w country} {
    $w selection clear
    global capitalArr
    if {[$w get] eq $capitalArr($country)} {
	$w configure -foreground ""
    } else {
	bell
	$w configure -foreground red
    }
}

#------------------------------------------------------------------------------

proc setCapital {w country} {
    $w selection clear
    $w configure -foreground ""
    global capitalArr
    $w set $capitalArr($country)
}

#------------------------------------------------------------------------------

proc configSf {sf cf row topPadY} {
    set width [winfo reqwidth $cf]
    set rowHeight [expr {[winfo reqheight $cf] / $row}]
    set height [expr {10*$rowHeight + [winfo pixels . $topPadY]}]
    $sf configure -width $width -height $height -yscrollincrement $rowHeight
}
