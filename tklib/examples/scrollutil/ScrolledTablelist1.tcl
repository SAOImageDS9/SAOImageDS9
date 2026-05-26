#! /usr/bin/env tclsh

#==============================================================================
# Demonstrates the traditional scrollbar management in connection with a
# tablelist widget.
#
# Copyright (c) 2019-2024  Csaba Nemethi (E-mail: csaba.nemethi@t-online.de)
#==============================================================================

package require Tk 8.5-
package require tablelist_tile 6.3-
set dir [file dirname [info script]]
source [file join $dir styleUtil.tcl]

wm title . "Scrolled Tablelist"

#
# Create the tablelist and the scrollbars as children
# of a frame having -borderwidth 1 and -relief sunken
#
set f   [ttk::frame .f]
set frm [ttk::frame $f.frm -borderwidth 1 -relief sunken]
set tbl $frm.tbl
set vsb $frm.vsb
set hsb $frm.hsb
tablelist::tablelist $tbl \
    -columntitles {"Column 0" "Column 1" "Column 2" "Column 3" "Column 4"
		   "Column 5" "Column 6" "Column 7" "Column 8" "Column 9"} \
    -titlecolumns 1 -borderwidth 0 \
    -xscrollcommand [list $hsb set] -yscrollcommand [list $vsb set]
switch [tk windowingsystem] {
    x11   { set width 54 }
    win32 { set width 58 }
    aqua  { set width 51 }
}
$tbl configure -width $width
ttk::scrollbar $vsb -orient vertical   -command [list $tbl yview]
ttk::scrollbar $hsb -orient horizontal -command [list $tbl xview]

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
# Manage the widgets within the frame
#
grid $tbl -row 0 -rowspan 2 -column 0 -columnspan 2 -sticky news
if {[tk windowingsystem] eq "win32"} {
    grid $vsb -row 0 -rowspan 2 -column 2 -sticky ns
} else {
    grid [$tbl cornerpath] -row 0 -column 2 -sticky ew
    grid $vsb              -row 1 -column 2 -sticky ns
}
grid [$tbl cornerpath -sw] -row 2 -column 0 -sticky ns
grid $hsb                  -row 2 -column 1 -sticky ew
grid rowconfigure    $frm 1 -weight 1
grid columnconfigure $frm 1 -weight 1

#
# Create a ttk::button widget outside the frame
#
set b [ttk::button $f.b -text "Close" -command exit]
pack $b -side bottom -pady {0 7p}

#
# Manage the frame
#
pack $frm -expand yes -fill both -padx 7p -pady 7p
pack $f   -expand yes -fill both
