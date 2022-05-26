#!/usr/bin/env tclsh
## -*- tcl -*-

package require Tk

# test_axis.tcl --
#     Test the drawing of the axis: nice rounded values?
#     And vertical text to right axis?
#
#     NOTE:
#     Negative values require floor() instead of ceil()!
#
#     NOTE:
#     Problem with right axis!
#
#     TODO:
#     Floor and Ceil and less stringent check for bounds!
#

package require crosshair
package require Plotchart

grid [canvas .c1] [canvas .c2]
grid [canvas .c3] [canvas .c4]

#
# Create the plots
#

set plot_axes [list { 0.12  10.4  1.0} {-0.12  10.4  2.5} \
		    {10.12 -10.4 -2.0} {-5.1   -4.5  0.1} \
	            {-0.12  10.4  2.5} { 0.12  10.4  1.0} \
		    {-5.1   -4.5  0.1} {10.12 -10.4 -2.0}]
set i 1
foreach {x y} $plot_axes {
    set p($i) [::Plotchart::createXYPlot .c${i} $x $y ]
    incr i
}


set p(5) [::Plotchart::createRightAxis $p(2) {-5.99 -4.5 0.1}]

$p(2) plot data  10.0 -5.0
$p(2) plot data -10.0 -5.0
$p(5) dataconfig data -colour green
$p(5) plot data  10.0 -4.7
$p(5) plot data -10.0 -4.7
$p(2) vtext "my_changes"
$p(5) vtext "Data"

# Adding crosshairs to the plots
set i 1
array set color {1 blue 2 red 3 green 4 black}
foreach {x y} $plot_axes {
    .c${i} configure -cursor tcross
    crosshair::crosshair .c$i -dash {.} -fill $color($i)
    crosshair::track on  .c$i put_coords
    set bbox_ll [::Plotchart::coordsToPixel [$p($i) canvas] [lindex $x 0] [lindex $y 0]]
    set bbox_ur [::Plotchart::coordsToPixel [$p($i) canvas] [lindex $x 1] [lindex $y 1]]

    #--- testing coordinate mixed up
    if {$i==0} {
	set bbox [concat $bbox_ll $bbox_ur]
    } elseif {$i==1} {
	set bbox [list [lindex $bbox_ur 0] [lindex $bbox_ll 1] [lindex $bbox_ll 0] [lindex $bbox_ur 1]]
    } elseif {$i==2} {
	set bbox [list [lindex $bbox_ll 0] [lindex $bbox_ur 1] [lindex $bbox_ur 0] [lindex $bbox_ll 1]]
    } else {
	set bbox [concat $bbox_ur $bbox_ll]
    }
    crosshair::bbox_add .c$i "$bbox"

    puts "plot $i ==> bbox== $bbox  color = $color($i)"

    incr i
}


proc put_coords {a b c d e f g} {
    set pcoords [::Plotchart::pixelToCoords $a $b $c]
    set pcoord_x [lindex $pcoords 0]
    set pcoord_y [lindex $pcoords 1]
    puts "Canvas=$a Canvas_Coords=($b $c)  PlotChart_plot_coords=([format "%.2f %.2f" $pcoord_x $pcoord_y])"
}

catch { console show }
