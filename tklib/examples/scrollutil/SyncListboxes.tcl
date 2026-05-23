#! /usr/bin/env tclsh

#==============================================================================
# Demonstrates the use of the scrollutil::scrollsync widget in connection with
# two listbox widgets.
#
# Copyright (c) 2019-2023  Csaba Nemethi (E-mail: csaba.nemethi@t-online.de)
#==============================================================================

package require Tk
package require scrollutil_tile
set dir [file dirname [info script]]
source [file join $dir styleUtil.tcl]

wm title . "European Countries"

#
# Create two ttk::label widgets within a ttk::frame
#
set f  [ttk::frame .f]
set tf [ttk::frame $f.tf]
set l1 [ttk::label $tf.l1 -text "Countries"]
set l2 [ttk::label $tf.l2 -text "Capitals"]
grid $l1 $l2
grid columnconfigure $tf 0 -weight 1 -uniform AllCols
grid columnconfigure $tf 1 -weight 1 -uniform AllCols

#
# Create a scrollsync widget within a scrollarea
#
set sa [scrollutil::scrollarea $f.sa]
set ss [scrollutil::scrollsync $sa.ss]
$sa setwidget $ss

#
# Populate the scrollsync widget with two listboxes
#

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

set lb1 [listbox $ss.lb1 -activestyle none -highlightthickness 0 -width 16]
set lb2 [listbox $ss.lb2 -activestyle none -highlightthickness 0 -width 16]
$ss setwidgets [list $lb1 $lb2]

foreach country $countryList {
    $lb1 insert end "  $country  "
}
foreach capital $capitalList {
    $lb2 insert end "  $capital  "
}

if {[styleutil::getCurrentTheme] ne "aqua"} {
    set itemCount [$lb1 size]
    foreach lb [list $lb1 $lb2] {
	$lb configure -background white
	for {set idx 1} {$idx < $itemCount} {incr idx 2} {
	    $lb itemconfigure $idx -background #f0f0f0
	}
    }
}

grid $lb1 $lb2 -sticky news -padx {0 1.5p}
grid rowconfigure    $ss 0 -weight 1
grid columnconfigure $ss 0 -weight 1
grid columnconfigure $ss 1 -weight 1

#
# Create a ttk::button widget
#
set b [ttk::button $f.b -text "Close" -command exit]

pack $b  -side bottom -pady {0 7p}
pack $tf -side top -fill x -pady {7p 0}    ;# for -padx see the proc updatePadx
pack $sa -side top -expand yes -fill both -padx 7p -pady {1.5p 7p}
pack $f  -expand yes -fill both

#
# Sets the -padx pack option for $w, depending on
# the mapped state of the vertical scrollbar $vsb.
#
proc updatePadx {w vsb vsbMapped} {
    set sa [winfo parent $vsb]
    set l [expr {[winfo pixels . 7p] + [$sa cget -borderwidth]}]
    set r $l
    if {$vsbMapped} {
	incr r [winfo width $vsb]
    }

    pack configure $w -padx [list $l $r]
}

updatePadx $tf $sa.vsb 0
bind $sa.vsb <Map>   [list updatePadx $tf %W 1]	 ;# $tf doesn't contain % chars
bind $sa.vsb <Unmap> [list updatePadx $tf %W 0]	 ;# $tf doesn't contain % chars
