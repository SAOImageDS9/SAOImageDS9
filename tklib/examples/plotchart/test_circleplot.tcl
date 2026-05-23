# test_circleplot.tcl --
#     Test/demonstrate the circle plot facilities
#
source ../../modules/plotchart/plotchart.tcl
package require Plotchart 2.5.1

pack [canvas .c -width 600 -height 600]

set p [::Plotchart::createCirclePlot .c {First Second Third Fourth Fifth}]

$p title "Example of a simple circle plot"

$p modify First -textcolour red -font "Times 20"
$p modify Third -dotcolour cyan

$p connect Third First cyan 3
$p connect First Third red 3
$p connect First Second lime 3
$p connect Third Fourth cyan 3
$p connect Fifth Third magenta 3
