#!/usr/bin/env tclsh
## -*- tcl -*-

package require Tcl 8.5
package require Tk

package require Plotchart

# timeinxyplot.tcl --
#    Test if we can force the x-axis to display date/times
#
#    This is done by explicitly setting the axis labels. You do need to be careful
#    with the spacing of the labels
#

canvas .c -background white -width 400 -height 200
pack   .c

#set s [::Plotchart::createXYPlot .c [list [clock scan 2006-01-01] [clock scan 2007-01-01] [expr {120*86400}]] {0.0 100.0 20.0}]
set s [::Plotchart::createXYPlot .c [list [clock scan 2006-01-01] [clock scan 2007-01-01] ""] {0.0 100.0 20.0} \
          -xlabels {2006-01-01 2006-06-01 2007-01-01}]

$s dataconfig series1 -colour "red"
$s dataconfig series2 -colour "blue"

$s xtext "Time"
$s ytext "Data"
$s xticklines

$s plot series1 [clock scan 2006-02-01] 10.0
$s plot series1 [clock scan 2006-02-11] 50.0
$s plot series1 [clock scan 2006-03-01] 50.0
$s plot series1 [clock scan 2006-07-01] 40.0
$s plot series1 [clock scan 2006-08-21] 20.0
$s plot series1 [clock scan 2006-08-22]  1.0
$s plot series1 [clock scan 2006-12-11] 78.0

$s plot series2 [clock scan 2006-03-01] 110.0
$s plot series2 [clock scan 2006-04-11]  50.0
$s plot series2 [clock scan 2006-07-28]  20.0
$s plot series2 [clock scan 2006-10-21]  99.0
$s plot series2 [clock scan 2006-11-22]   1.0
$s plot series2 [clock scan 2006-12-31]  78.0

$s balloon   [clock scan 2006-05-06] 60.0 "Aha" n
$s plaintext [clock scan 2006-11-06] 50.0 "Aha"
