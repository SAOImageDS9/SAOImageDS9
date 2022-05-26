#!/usr/bin/env tclsh
## -*- tcl -*-

package require Tcl 8.4
package require Tk
package require Plotchart

# testxplot.tcl --
#    Test program for TXPlots and balloons
#

canvas .c -background white -width 400 -height 200
pack   .c

set s [::Plotchart::createTXPlot .c {2006-01-01 2007-01-01 120} {0.0 100.0 20.0}]

$s dataconfig series1 -colour "red"
$s dataconfig series2 -colour "blue"

$s xtext "Time"
$s ytext "Data"
$s xticklines

$s plot series1 2006-02-01 10.0
$s plot series1 2006-02-11 50.0
$s plot series1 2006-03-01 50.0
$s plot series1 2006-07-01 40.0
$s plot series1 2006-08-21 20.0
$s plot series1 2006-08-22  1.0
$s plot series1 2006-12-11 78.0

$s plot series2 2006-03-01 110.0
$s plot series2 2006-04-11  50.0
$s plot series2 2006-07-28  20.0
$s plot series2 2006-10-21  99.0
$s plot series2 2006-11-22   1.0
$s plot series2 2006-12-31  78.0

$s balloon   2006-05-06 60.0 "Aha" n
$s plaintext 2006-11-06 50.0 "Aha"
