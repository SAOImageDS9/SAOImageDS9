# testviolin.tcl --
#     Test/demonstrate the violin subcommand
#
source ../../modules/plotchart/plotchart.tcl
package require Plotchart 2.6.0

pack [canvas .c -width 600 -height 600]

set p [::Plotchart::createXYPlot .c {0.0 100.0 25.0} {0.0 100.0 25.0}]

#
# Completely arbitrary set of data
#
set data {10.0 11.0 9.4 20.0 23.0 23.4 22.0 27.0 35.0 35.1 35.0 60.0 63.0 65.0 56.0}

$p dataconfig vertical   -fillcolour lime
$p dataconfig horizontal -colour     red

$p violin vertical   20.0  $data
$p violin horizontal $data 80.0
