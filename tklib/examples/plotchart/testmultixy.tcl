#!/usr/bin/env tclsh
## -*- tcl -*-

# testmultixy.tcl --
#     Demonstrate how to plot a number of XY-plots above
#     each other with a common x-axis
#
#     Note that the upper limit for the axis is slightly
#     smaller than a full multiple of the step!
#
package require Plotchart

pack [canvas .c -width 500 -height 500]

set p1 [::Plotchart::createXYPlot .c {0.0 100.0 10.0} {0.0 19.9  5.0} -box {0 300 500 200}]

set plotarea [$p1 plotarea]
set width    [lindex $plotarea 4]

set p2 [::Plotchart::createXYPlot .c {0.0 100.0 ""}   {0.0 99.9 25.0} -axesbox [list $p1 nw 0 150 $width 150] -xlabels {}]
set p3 [::Plotchart::createXYPlot .c {0.0 100.0 ""}   {0.0  1.9  0.5} -axesbox [list $p2 nw 0 150 $width 150] -xlabels {}]

$p1 title "Multiple plots with one x-axis"
