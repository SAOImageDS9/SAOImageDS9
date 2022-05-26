#!/usr/bin/env tclsh
## -*- tcl -*-

# testneedle.tcl --
#     Introduce a new plot method: draw a "needle" for each data point
#
package require Plotchart

pack [canvas .c]
set p [::Plotchart::createXYPlot .c {0.0 100.0 20.0} {-10.0 10.0 5.0}]

$p dataconfig data -symbol dot -type symbol

#
# Register a new plot method
#
proc DrawNeedle {p w type x y} {
    #
    # Draw the line from (x,0) to (x,y)
    #
    $p plot needle $x {}   ;# Cause a break
    $p plot needle $x 0.0
    $p plot needle $x $y
}

::Plotchart::plotmethod xyplot needle DrawNeedle

#
# Draw the y-axis
#
$p plot axis   0.0 0.0
$p plot axis 100.0 0.0

foreach {x y} {5.0 3.0   6.0 -1.0   40.0 4.2   53.0 6.0   80.0 -7.0} {
    $p plot data $x $y
    $p needle data $x $y
}
