#!/usr/bin/env tclsh
## -*- tcl -*-

# testdots.tcl --
#     Test the dash pattern for ticklines
#
package require Plotchart

pack [canvas .c -width 700 -height 500 -background grey]

set p1 [::Plotchart::createXYPlot    .c  {0.0 100.0 10.0} {0.0 20.0  5.0}]

$p1 xticklines green dots1
$p1 yticklines green dots5
