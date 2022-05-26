#!/usr/bin/env tclsh
## -*- tcl -*-

# scope.tcl --
#  Timing test of oscilloscope mode.
#  Two traces are plotted.
#  sin(x)
#  square wave
#
#  Each interval a random shift is put on the data points.
#
#  Interested to see how 'live' plotchart can do this.
#

package require Tk
package require Plotchart

set update 50;          #  Ms between updates.

set square [list]
set sine   [list]


##
# Create square wave.
# This creates a square wave 1000 points long.
# The period of the square wave is 100 pts.
# (10 cycles).
#
# @return 2 element list.  The first element is
#                          the x coordinate the
#                          second element the y coordinate.
#
proc squareWave {} {
    set flip 50;                # points before polarity flip.
    set magnitude 100;          # Magnitude of the wave.
    set multiplier 1

    for {set i 0} {$i < 1000} {incr i} {
        lappend x $i
        lappend y [expr {$magnitude * $multiplier}]

        # flip from positive to negative polarity etc.

        if {($i % $flip) == 0} {
            set multiplier [expr {$multiplier * -1}]
        }
    }
    return [list $x $y]
}
##
# Create a sine wave.
# Wave is 1000 pts long
# Period is 100pts (2pi/100 is the argument increment to sin).
# Wave is offset by 300 units.
#
# @return 2 element list  First element are the x coordinates.
#          second elements the y coordinates.
#
proc sineWave {} {
    set pi 3.141592654;         # close enough.
    set magnitude 100

    for {set i 0} {$i < 1000} {incr i} {
        lappend x $i
        lappend y [expr {($magnitude*sin($i/($pi*2.0)) + 300)}]
    }
        return [list $x $y]
}


##
# Plot the data
#
#  @param period - refresh period.
#  @param plot   - plot chart plot id.
#  @param wf1    - first waveform to plot.
#
#  Each time 400pts with a random starting offset of
#  up to 600pts will be ploted.
#
set time 0
proc updatePlot {period plot args} {

    $plot deletedata

    set offset [expr {int(600*rand())}]
    set last   [expr {$offset + 350}]

    foreach wf $args {
        set name [lindex $wf 0];        # series name.
        set pts  [lindex $wf 1]
        set x    [lindex $pts 0]
        set y    [lindex $pts 1]


        $plot plotlist $name [lrange $x 0 400] [lrange $y $offset $last]
    }

    after $period [list updatePlot $period $plot {*}$args]
}



set square [squareWave];        #  Create the square wave.
set sine   [sineWave]

canvas .c -width 8i -height 4i
pack .c

::Plotchart::plotstyle configure scope xyplot leftaxis   color      green
::Plotchart::plotstyle configure scope xyplot leftaxis   textcolor  green
::Plotchart::plotstyle configure scope xyplot bottomaxis color      green
::Plotchart::plotstyle configure scope xyplot bottomaxis textcolor  green
::Plotchart::plotstyle configure scope xyplot background outercolor black
::Plotchart::plotstyle configure scope xyplot background innercolor black
::Plotchart::plotstyle configure scope xyplot title      background black
::Plotchart::plotstyle load scope

.c configure -background black
set plot [::Plotchart::createXYPlot .c [list 0 400 100] [list -2048 2048 1000]]

$plot dataconfig sine   -color green
$plot dataconfig square -color green

$plot xticklines green
$plot yticklines green

updatePlot $update $plot [list square $square] [list sine $sine]
