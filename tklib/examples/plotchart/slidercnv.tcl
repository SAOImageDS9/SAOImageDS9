#!/usr/bin/env tclsh
## -*- tcl -*-

# slidercnv.tcl --
#     Use the canvas as a way to store data
#
package require Plotchart

namespace eval demo {

proc addCircle {p x y data} {

    set w [$p canvas]
    foreach {xp yp} [::Plotchart::coordsToPixel $w $x $y] {break}

    $w create oval [expr {$xp-5}] [expr {$yp-5}] [expr {$xp+5}] [expr {$yp+5}] -fill white -outline black \
        -tag [list data $data]

    $w lower data
}

proc colourCircles {w threshold} {

    foreach object [$w find withtag data] {

        set value [lindex [$w itemcget $object -tag] 1]

        if { $value < $threshold } {
            $w itemconfigure $object -fill white
        } else {
            $w itemconfigure $object -fill red
        }
    }
}

# Not just yet:
# ::Plotchart::plotmethod xyplot circle addCircle
}

pack [canvas .c -bg white] \
     [scale .s -from 1 -to 0 -digits 3 -resolution 0.001 -command [list ::demo::colourCircles .c]] \
     -fill both -side left

set p [::Plotchart::createXYPlot .c {0 100 10} {0 20 5}]

#
# Put in some randomly placed circles
#
for { set i 0 } { $i < 20 } { incr i } {
    set x [expr {100 * rand()}]
    set y [expr { 20 * rand()}]
    set z [expr {rand()}]

    ::demo::addCircle $p $x $y $z
}
