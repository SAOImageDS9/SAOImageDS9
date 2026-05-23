#! /usr/bin/env tclsh

#==============================================================================
# Demonstrates the use of the scrollutil::scrollarea widget in connection with
# a tablelist.
#
# Copyright (c) 2019-2024  Csaba Nemethi (E-mail: csaba.nemethi@t-online.de)
#==============================================================================

package require Tk 8.5-
package require tablelist_tile 6.5-
package require scrollutil_tile
set dir [file dirname [info script]]
source [file join $dir styleUtil.tcl]

wm title . "Scrolled Tablelist"

#
# Create the tablelist within a scrollarea
#
set f  [ttk::frame .f]
set sa [scrollutil::scrollarea $f.sa]
set tbl $sa.tbl
tablelist::tablelist $tbl \
    -columntitles {"Column 0" "Column 1" "Column 2" "Column 3" "Column 4"
		   "Column 5" "Column 6" "Column 7" "Column 8" "Column 9"} \
    -titlecolumns 1
switch [tk windowingsystem] {
    x11   { set width 54 }
    win32 { set width 58 }
    aqua  { set width 51 }
}
$tbl configure -width $width
$sa setwidget $tbl

#
# Populate the tablelist widget
#
set itemList {}
for {set row 0} {$row < 2} {incr row} {
    set item {}
    for {set col 0} {$col < 10} {incr col} {
	lappend item "header cell $row,$col"
    }
    lappend itemList $item
}
$tbl header insertlist end $itemList
set itemList {}
for {set row 0} {$row < 100} {incr row} {
    set item {}
    for {set col 0} {$col < 10} {incr col} {
	lappend item "body cell $row,$col"
    }
    lappend itemList $item
}
$tbl insertlist end $itemList

#
# Create a ttk::button widget outside the scrollarea
#
set b [ttk::button $f.b -text "Close" -command exit]
pack $b -side bottom -pady {0 7p}

#
# Manage the scrollarea
#
pack $sa -expand yes -fill both -padx 7p -pady 7p
pack $f  -expand yes -fill both
