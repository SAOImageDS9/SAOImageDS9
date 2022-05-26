#!/usr/bin/env tclsh
## -*- tcl -*-
# test-histogram.tcl --
#     Example of a histogram plot with filled background
#
package require Plotchart

pack [canvas .c -width 400 -height 300 -bg white]

set p [::Plotchart::createHistogram .c {0 100 20} {0 50 10}]

$p dataconfig data -style filled -fillcolour cyan -width 2 -colour blue

$p plot data 0.0  10.0
$p plot data 20.0 10.0
$p plot data 40.0  3.0
$p plot data 45.0  6.0
$p plot data 55.0 26.0
$p plot data 67.0 24.0
