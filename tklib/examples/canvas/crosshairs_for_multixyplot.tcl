#!/usr/bin/env tclsh
## -*- tcl -*-

package require Tk

# test_txplot.tcl --
#     Test the -box options for time-x-plots

package require crosshair
package require Plotchart

pack [canvas .c -width 600 -height 410 -bg white]

::Plotchart::plotstyle configure default xyplot bottomaxis subtextcolor blue
::Plotchart::plotstyle configure default xyplot bottomaxis font         "Helvetica 14"
::Plotchart::plotstyle configure default xyplot bottomaxis subtextfont  "Helvetica 12 bold"
::Plotchart::plotstyle configure default xyplot leftaxis   font         "Helvetica 14"
::Plotchart::plotstyle configure default xyplot leftaxis   subtextfont  "Helvetica 12 bold"
::Plotchart::plotstyle configure default xyplot leftaxis   subtextcolor red
::Plotchart::plotstyle configure default xyplot leftaxis   usesubtext   1

set p1 [::Plotchart::createXYPlot .c {0 100 30} {0 20 5} -box {0 0 400 200}]
set p2 [::Plotchart::createXYPlot .c {0 100 30} {0 20 5} -box {100 210 400 200}]

#.c create rectangle 0 210 400 410

$p1 plot data 0 10
$p1 plot data 100 15

$p1 xtext    Aha
#$p1 xsubtext "1, 2, 3"
$p1 ytext    "Same spot?"

$p2 plot data 0 10
$p2 plot data 100 15
$p2 ytext    "Higher up"
#$p2 ysubtext "Lower down"
$p2 vtext    "To the left"
#$p2 vsubtext "To the right"


.c configure -cursor tcross
crosshair::crosshair .c -dash {.} -fill blue
#crosshair::track on  .c put_coords

set bbox_ll [::Plotchart::coordsToPixel [$p1 canvas] 0 0 ]
set bbox_ur [::Plotchart::coordsToPixel [$p1 canvas] 100 20]
set bbox_p1 [concat $bbox_ll $bbox_ur]
crosshair::bbox_add .c "$bbox_p1"
set bbox_ll [::Plotchart::coordsToPixel [$p2 canvas] 0 0 ]
set bbox_ur [::Plotchart::coordsToPixel [$p2 canvas] 100 20]
set bbox_p2 [concat $bbox_ll $bbox_ur]
crosshair::bbox_add .c "$bbox_p2"

catch { console show }
