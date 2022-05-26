#!/usr/bin/env tclsh
## -*- tcl -*-

# testmultiplexy.tcl --
#     Test multiple XY-plots in one canvas
#
#     Note:
#     log-y-axis erases linear y-axis
#

package require Plotchart

grid [canvas .c -width 500 -height 400]
                                                                       ;#  x   y   w   h
set p1 [::Plotchart::createXYPlot       .c {0  100 10} {0  200 20} -box {  0   0 300 400}]
#set p2 [::Plotchart::createXYPlot       .c {0  100 50} {0  200 20} -box {301   0 200 400}]
set p2 [::Plotchart::createXLogYPlot    .c {0  100 50} {1  200 20} -box {301   0 200 400}]

$p1 dataconfig data -color green
$p2 dataconfig data -color red

$p1 dotconfig data -3deffect on

$p1 legend data "Data 1"
$p2 legend data "Data 2"

#
# Check that a stupid error has been solved
# (First data point has missing values? Caused error in unset)

$p1 plot dummy 1 {}

foreach x { 0.0  10.0  50.0  60.0  80.0} \
        y {30.0 110.0  50.0 160.0 180.0} {
    $p1 dot data $x $y 4
    $p2 dot data $x $y 4
}

