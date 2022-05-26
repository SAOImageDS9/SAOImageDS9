#!/usr/bin/env tclsh
## -*- tcl -*-

# testmask.tcl --
#     Show that different plot windows within a single
#     canvas produce the "right" set of masks
#
package require Plotchart

pack [canvas .c -width 700 -height 500 -background grey]

set p1 [::Plotchart::createXYPlot .c {0.0 100.0 10.0} {0.0 19.9  5.0} -box {0 300 400 200}]

set plotarea [$p1 plotarea]
set width    [lindex $plotarea 4]

set p2 [::Plotchart::createXYPlot .c {0.0 100.0 ""}   {0.0 99.9 25.0} -axesbox [list $p1 nw 0 150 $width 150] -xlabels {}]
set p3 [::Plotchart::createXYPlot .c {0.0 100.0 ""}   {0.0  1.9  0.5} -axesbox [list $p2 nw 0 150 $width 150] -xlabels {}]

$p1 title "Multiple plots with one x-axis"

::Plotchart::plotstyle configure bgtitle xyplot title background green
::Plotchart::plotstyle configure bgtitle xyplot title font "Helvetica 12"
::Plotchart::plotstyle load bgtitle
set p4 [::Plotchart::createXYPlot .c {0.0 100.0 10.0} {0.0 19.9  5.0} -box {400 0 300 500}]

$p4 title "Green title background"
