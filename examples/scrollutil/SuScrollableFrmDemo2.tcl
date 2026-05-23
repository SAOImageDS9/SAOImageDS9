#! /usr/bin/env tclsh

#==============================================================================
# Demonstrates the use of the Scrollutil package in connection with the
# scrollutil::scrollableframe widget.
#
# Copyright (c) 2019-2023  Csaba Nemethi (E-mail: csaba.nemethi@t-online.de)
#==============================================================================

package require Tk 8.5.9-			;# for ttk::spinbox
package require mentry_tile 3.2-		;# for mouse wheel support
package require tablelist_tile 6.5-		;# for -(x|y)mousewheelwindow
						;# and scrollutil::scrollarea
package require scrollutil_tile
set dir [file dirname [info script]]
source [file join $dir styleUtil.tcl]

wm title . "Scrollutil Demo"

#
# Create a scrollableframe within a scrollarea
#
set tf [ttk::frame .tf]
set sa [scrollutil::scrollarea $tf.sa]
set sf [scrollutil::scrollableframe $sa.sf]
$sa setwidget $sf

#
# Get the content frame and populate it
#
set cf [$sf contentframe]
source [file join $dir SuScrollableFrmContent.tcl]

#
# Make the keyboard navigation more user-friendly
#
foreach w [list $cb $sb $e $me] {
    bind $w <<TraverseIn>> [list $sf see %W]
}
foreach w [list $txt $lb $tbl $tv] {
    bind $w <<TraverseIn>> [list seeScrollarea $sf %W]
}
proc seeScrollarea {sf w} { $sf see [scrollutil::getscrollarea $w] }

#
# Additional stuff related to the mouse wheel events:
#

#
# Create mouse wheel event bindings for the binding tag "all"
#
scrollutil::createWheelEventBindings all

#
# Adapt the handling of the mouse wheel events for the text, listbox,
# ttk::combobox, ttk::spinbox, tablelist, and ttk::treeview widgets, as
# well as for the entry components of the mentry widget of type "Date"
#
set entryList [$me entries]
scrollutil::adaptWheelEventHandling $txt $lb $cb $sb $tbl $tv {*}$entryList

#
# For the entry components of the mentry widget
# set the "focus check window" to the mentry
#
scrollutil::setFocusCheckWindow {*}$entryList $me
