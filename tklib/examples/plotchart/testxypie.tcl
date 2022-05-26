#!/usr/bin/env tclsh
## -*- tcl -*-

# testxypie.tcl --
#     Test the combination of an xy-plot with two piecharts
#
package require Plotchart

pack [canvas .c -width 700 -height 500 -background grey]

set p1 [::Plotchart::createXYPlot    .c  {0.0 100.0 10.0} {0.0 20.0  5.0}]
set p2 [::Plotchart::createRightAxis $p1 {0.0 100.0 10.0}]
set p3 [::Plotchart::createPiechart  .c -reference [list $p1 70.0 15] -units {80 80}]

::Plotchart::plotstyle configure "default" piechart labels placement in

set p4 [::Plotchart::createPiechart  .c -reference [list $p1 20.0  5] -units {100 100}]

$p1 title "XY-plot with embedded piecharts"

$p3 plot {First 5 Second 6 Third 10 Fourth 2}
$p4 plot {First 5 Second 6 Third 10 Fourth 2}
