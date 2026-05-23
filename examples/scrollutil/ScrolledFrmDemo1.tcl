#! /usr/bin/env tclsh

#==============================================================================
# Demonstrates the use of the Scrollutil package in connection with the
# iwidgets::scrolledframe widget.
#
# Copyright (c) 2019-2023  Csaba Nemethi (E-mail: csaba.nemethi@t-online.de)
#==============================================================================

package require Tk
if {[catch {package require iwidgets} result1] != 0 &&
    [catch {package require Iwidgets} result2] != 0} {
    error "$result1; $result2"
}
set dir [file dirname [info script]]
source [file join $dir scrolledwidgetPatch.itk]	;# adds ttk::scrollbar widgets
package require scrollutil_tile
source [file join $dir styleUtil.tcl]

wm title . "European Capitals Quiz"

set bg [ttk::style lookup TFrame -background]
set currentTheme [styleutil::getCurrentTheme]
if {$currentTheme eq "aqua" &&
    [package vcompare $tk_patchLevel "8.6.10"] < 0} {
    set bg #ececec				;# workaround for a tile bug
}

#
# Create a scrolledframe
#
set f  [ttk::frame .f]
set sf [iwidgets::scrolledframe $f.sf -borderwidth 1 -relief sunken \
	-scrollmargin 0]
set canvas [$sf component canvas]
$canvas configure -background $bg

#
# Create mouse wheel event bindings for the binding tag "all" and
# register the scrolledframe for scrolling by these bindings
#
scrollutil::createWheelEventBindings all
scrollutil::enableScrollingByWheel $sf

#
# Get the content frame and populate it
#

set cf [$sf childsite]
$cf configure -background $bg

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

if {[lsearch -exact {aqua vista xpnative} $currentTheme] >= 0} {
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
    # Adapt the handling of the mouse wheel events for the ttk::combobox widget
    #
    scrollutil::adaptWheelEventHandling $w

    set b [styleutil::createToolbutton $cf.b$row -text "Resolve" \
	   -command [list setCapital $w $country]]
    grid $b -row $row -column 2 -sticky w -padx 3p -pady $padY

    incr row
}

#
# Create a ttk::button widget outside the scrolledframe
#
set b [ttk::button $f.b -text "Close" -command exit]

pack $b  -side bottom -pady {0 7p}
pack $sf -side top -expand yes -fill both -padx 7p -pady 7p
pack $f  -expand yes -fill both

#
# Set the scrolledframe's width, height, and yscrollincrement
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
    set vsb [$sf component vertsb]
    set width [expr {[winfo reqwidth $cf] + [winfo reqwidth $vsb] + 2}]
    set rowHeight [expr {[winfo reqheight $cf] / $row}]
    set height [expr {10*$rowHeight + [winfo pixels . $topPadY] + 2}]
    $sf configure -width $width -height $height
    set canvas [$sf component canvas]
    $canvas configure -yscrollincrement $rowHeight
    after 100 [list $sf configure -hscrollmode dynamic]
}
