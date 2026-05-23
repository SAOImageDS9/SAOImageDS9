#! /usr/bin/env tclsh

#==============================================================================
# Demonstrates the use of the Scrollutil package in connection with the
# iwidgets::scrolledframe widget.
#
# Copyright (c) 2019-2023  Csaba Nemethi (E-mail: csaba.nemethi@t-online.de)
#==============================================================================

package require Tk 8.5.9-			;# for ttk::spinbox
if {[catch {package require iwidgets} result1] != 0 &&
    [catch {package require Iwidgets} result2] != 0} {
    error "$result1; $result2"
}
set dir [file dirname [info script]]
source [file join $dir scrolledwidgetPatch.itk]	;# adds ttk::scrollbar widgets
package require mentry_tile 3.2-		;# for mouse wheel support
package require tablelist_tile 6.5-		;# for -(x|y)mousewheelwindow
						;# and scrollutil::scrollarea
package require scrollutil_tile
source [file join $dir styleUtil.tcl]

wm title . "Scrollutil Demo"

set bg [ttk::style lookup TFrame -background]
if {[styleutil::getCurrentTheme] eq "aqua" &&
    [package vcompare $tk_patchLevel "8.6.10"] < 0} {
    set bg #ececec				;# workaround for a tile bug
}

#
# Create a scrolledframe
#
set tf [ttk::frame .tf]
set sf [iwidgets::scrolledframe $tf.sf -borderwidth 1 -relief sunken \
	-scrollmargin 0]
set canvas [$sf component canvas]
$canvas configure -background $bg

#
# Get the content frame and populate it
#
set cf [$sf childsite]
$cf configure -background $bg
source [file join $dir ScrolledFrmContent.tcl]

#
# Additional stuff related to the mouse wheel events:
#

#
# Create mouse wheel event bindings for the binding tag "all"
# and register the scrolledframe for scrolling by these bindings
#
scrollutil::createWheelEventBindings all
scrollutil::enableScrollingByWheel $sf

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
