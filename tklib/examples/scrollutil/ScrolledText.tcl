#!/usr/bin/env wish

#==============================================================================
# Demonstrates the use of the scrollutil::scrollarea widget in connection with
# a text widget.
#
# Copyright (c) 2020  Csaba Nemethi (E-mail: csaba.nemethi@t-online.de)
#==============================================================================

package require scrollutil_tile
source styleUtil.tcl

wm title . "Scrolled Text"

#
# Create a text widget within a scrollarea
#
set f  [ttk::frame .f]
set sa [scrollutil::scrollarea $f.sa -lockinterval 10]
set txt [text $sa.txt -font TkFixedFont -width 49 -height 12 \
	 -spacing1 2 -spacing3 2 -wrap none]
$sa setwidget $txt

#
# Populate the text widget and set the background color of line #25 to red
#
for {set i 1} {$i <= 30} {incr i} {
    set j [expr {2*$i}]
    $txt insert end [string repeat X $j]\n
}
$txt delete 30.end
$txt tag configure bgRed -background red
$txt tag add bgRed 25.0 25.end

#
# Create a ttk::button widget outside the scrollarea
#
set b [ttk::button $f.b -text "Close" -command exit]
pack $b -side bottom -pady {0 10}

#
# Manage the scrollarea
#
pack $sa -expand yes -fill both -padx 10 -pady 10
pack $f  -expand yes -fill both

#
# Adjust the vertical view in the text window
# so that line #25 becomes the bottom line
#
tkwait visibility $txt
after 100 [list $txt yview 14.0]
