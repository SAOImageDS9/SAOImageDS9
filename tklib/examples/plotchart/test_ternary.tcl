#!/usr/bin/env tclsh
## -*- tcl -*-

package require Tk

# test_ternary.tcl --
#     Test the ternary diagram
#
package require Plotchart

pack [canvas .c -width 500 -height 500]
set p1 [::Plotchart::createTernaryDiagram .c]

$p1 text "Component A"  "Component B"  "Component C"

$p1 plot data 50.0 25.0 25.0 "1"
$p1 plot data 20.0 25.0 55.0 "2"

$p1 line data { 0.0 80.0 20.0 \
               10.0 20.0 70.0 }

$p1 dataconfig area -colour green -smooth 1
$p1 fill area { 0.0 70.0  30.0 \
               10.0 20.0  70.0 \
                0.0  0.0 100.0 }
$p1 plot area1  0.0 70.0  30.0  ""
$p1 plot area1 10.0 20.0  70.0 ""
$p1 plot area1  0.0  0.0 100.0 ""

$p1 ticklines grey
