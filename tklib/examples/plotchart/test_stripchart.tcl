#!/usr/bin/env tclsh
## -*- tcl -*-

# test_stripchart.tcl --
#     Problem 3613718 on SF regarding stripcharts and custom labels
#
#     Reported by Donal
#
#     Use case: date/time

package require Plotchart

pack [canvas .c]

if { 0 } {
#
# Original code:
#
set s [::Plotchart::createStripchart .c {0 10 ""} {0 10 1} -xlabels {a b c}]

# I then get an error when I try to plot the final point in this data:

foreach {x y} {0 0 2 5 5 2 9 9 12 10} {
    if { $x < 12 } {
        $s plot a $x $y
    }
}
}

#
# New code:
# Note that we need to present the x values as clock seconds
#
set start [clock scan  "0:00"]
set stop  [clock scan "10:00"]
set s [::Plotchart::createStripchart .c [list $start $stop 7200] {0 10 1} -timeformat "%H:%M"]

# I then get an error when I try to plot the final point in this data:

foreach {x y} {0 0 2 5 5 2 9 9 12 10} {
    set x [expr {$start + 3600 * $x}] ;# Convert hour to clock seconds
    $s plot a $x $y
}
