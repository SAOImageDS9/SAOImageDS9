#! /usr/bin/env tclsh

#==============================================================================
# Demonstrates the use of the scrollutil::scrollsync widget in connection with
# three tablelist widgets.
#
# Copyright (c) 2019-2023  Csaba Nemethi (E-mail: csaba.nemethi@t-online.de)
#==============================================================================

package require Tk
package require tablelist_tile
package require scrollutil_tile
set dir [file dirname [info script]]
source [file join $dir styleUtil.tcl]

wm title . "Synchronized Tablelists"

#
# Create three ttk::label widgets within a ttk::frame
#
set f  [ttk::frame .f]
set tf [ttk::frame $f.tf]
set l1 [ttk::label $tf.l1 -text "Left Table"]
set l2 [ttk::label $tf.l2 -text "Middle Table"]
set l3 [ttk::label $tf.l3 -text "Right Table"]
grid $l1 $l2 $l3
grid columnconfigure $tf 0 -weight 1 -uniform AllCols
grid columnconfigure $tf 1 -weight 1 -uniform AllCols
grid columnconfigure $tf 2 -weight 1 -uniform AllCols

#
# Create a scrollsync widget within a scrollarea
#
set sa [scrollutil::scrollarea $f.sa]
set ss [scrollutil::scrollsync $sa.ss]
$sa setwidget $ss

#
# Populate the scrollsync widget with three tablelists
#

if {$tablelist::themeDefaults(-stripebackground) eq ""} {
    option add *Tablelist.background		white
    option add *Tablelist.stripeBackground	#f0f0f0
}

for {set n 1; set colWidth 40} {$n <= 3} {incr n; incr colWidth 20} {
    set tbl [tablelist::tablelist $ss.tbl$n \
	     -columns [list 0 "Column 0" left  $colWidth "Column 1" left]]
    set tbl$n $tbl

    for {set i 0} {$i < 100} {incr i} {
	$tbl insert end [list "cell $i,0" "cell $i,1"]
    }
}
$ss setwidgets [list $tbl1 $tbl2 $tbl3]

grid $tbl1 $tbl2 $tbl3 -sticky news -padx {0 1.5p}
grid rowconfigure    $ss 0 -weight 1
grid columnconfigure $ss 0 -weight 1
grid columnconfigure $ss 1 -weight 1
grid columnconfigure $ss 2 -weight 1

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
