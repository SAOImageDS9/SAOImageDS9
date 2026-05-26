#! /usr/bin/env tclsh

#==============================================================================
# Demonstrates the use of the scrollutil::scrollarea widget and of the
# scrollutil::addMouseWheelSupport command in connection with a canvas widget.
#
# Copyright (c) 2024  Csaba Nemethi (E-mail: csaba.nemethi@t-online.de)
#==============================================================================

package require Tk
package require scrollutil_tile
set dir [file dirname [info script]]
source [file join $dir styleUtil.tcl]

wm title . "Scrolled Canvas"

set scaleFactor [expr {$scaleutil::scalingPct / 100.0}]
set width  [expr {10 * 32 * $scaleFactor}]
set height [expr { 7 * 32 * $scaleFactor}]
set scrlIncr [expr {16 * $scaleFactor}]

#
# Create a canvas widget within a scrollarea
#
set f  [ttk::frame .f]
set sa [scrollutil::scrollarea $f.sa]
set c  [canvas $sa.c -background white -width $width -height $height \
	-xscrollincrement $scrlIncr -yscrollincrement $scrlIncr]
bind $c <Configure> { setScrollRegion %W %w %h }
scrollutil::addMouseWheelSupport $c
$sa setwidget $c

#
# Populate the canvas and then rescale the coordinates
# of all of the items by a factor of $scaleFactor
#
for {set col 0; set x 32} {$col < 20} {incr col; incr x 96} {
    for {set row 0; set y 32} {$row < 20} {incr row; incr y 96} {
	$c create rectangle $x $y [expr {$x+63}] [expr {$y+63}] -fill gray95
	$c create text [expr {$x+32}] [expr {$y+32}] -text "Box\n$row,$col" \
	    -anchor center -justify center
    }
}
$c scale all 0 0 $scaleFactor $scaleFactor

proc setScrollRegion {canv width height} {
    set pixels [expr {(20*96 + 32) * $::scaleFactor}]
    set rightX $pixels
    set lowerY $pixels
    if {$rightX < $width}  { set rightX $width }
    if {$lowerY < $height} { set lowerY $height }
    $canv configure -scrollregion [list 0 0 $rightX $lowerY]
}

#
# Variables used in the scan-related binding scripts below:
#
set origCursor [$c cget -cursor]
set scanCursor \
    [expr {[tk windowingsystem] eq "aqua" ? "pointinghand" : "hand2"}]

bind $c <Button-1>  { %W scan mark %x %y; %W configure -cursor $scanCursor }
bind $c <B1-Motion> { %W scan dragto %x %y }
bind $c <ButtonRelease-1> { %W configure -cursor $origCursor }

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
