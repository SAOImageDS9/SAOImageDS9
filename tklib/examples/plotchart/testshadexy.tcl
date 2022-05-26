#!/usr/bin/env tclsh
## -*- tcl -*-

# testshadexy.tcl --
#     Demonstrate how to mark data with a shaded background
#
#     TODO:
#     Command to get the (extreme) axis values from a plot
#
package require Plotchart

pack [canvas .c -width 400 -height 300]

set p [::Plotchart::createXYPlot .c {0.0 100.0 10.0} {-5.0 5.0 2.5}]

set x      0.0
set y      0.0
set xbegin {}
set ybegin {}
set dx     5.0

set xold $x
set yold $y

while { $x < 100.0 } {

    set y [expr {0.7 * $y + rand() - 0.5 }]

    $p plot data $x $y

    #
    # Mark the areas where y decreases
    #
    if { $y < $yold && $xbegin == {} } {
        set xbegin $xold
        set ybegin $yold
    }

    if { $y > $yold && $xbegin != {} } {
        $p object rectangle "shade" $xbegin -5.0 $xold 5.0 -tag shade -fill lightgreen -outline lightgreen
        set xbegin {}
    }

    set xold $x
    set yold $y

    set x [expr {$x + $dx}]
}

#
# Do not forget the last one
#
if { $y > $yold && $xbegin != {} } {
    $p object rectangle "shade" $xbegin -5.0 $xold 5.0 -tag shade -fill lightgreen -outline lightgreen
    set xbegin {}
}

.c lower shade

#
# Show a legend and remove an entry ...
#
# Use a trick to get a rectangle for the shade entry in the legend

$p dataconfig shade -type rectangle -colour lightgreen

$p legend data "The data"
$p legend shade "The shading"

after 2000 {
    $p removefromlegend shade
}
