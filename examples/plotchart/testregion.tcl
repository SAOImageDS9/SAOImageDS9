#! /usr/bin/env tclsh
# -*- tcl -*-

#
# Demonstrate the region and minmax commands
#

package require Tcl
package require Tk
package require Plotchart
namespace import Plotchart::*

catch {destroy .c}

canvas .c  -background white -width 600 -height 400
canvas .c2 -background white -width 600 -height 400
pack .c .c2 -fill both -side top

plotstyle configure default polarplot axis shownumbers 0
plotstyle configure default polarplot axis ticklength 0
plotstyle configure default polarplot axis ticklength 0
plotstyle configure default polarplot axis color darkgrey

set p  [createPolarplot .c  {3.0 3.0}]
set p2 [createXYPlot    .c2 {0.0 100.0 20.0} {0.0 3.0 1.0}]

set c  [$p canvas]
#
# Define a region in polar coordinates - a cardioid
#
set radii  [list]
set angles [list]

$p dataconfig test -fillcolour lightgreen -width 4

for { set angle 0 } { $angle < 360.0 } { set angle [expr {$angle+10.0}] } {
	set radius [expr {1.0+cos($angle*$::Plotchart::torad)}]
	lappend radii $radius
	lappend angles $angle
}

$p region test $radii $angles

#
# Define a min/max band - broken into two pieces
#
$p2 dataconfig test -fillcolour lightblue -colour {}
$p2 dataconfig line -width 2

$p2 minmax test   0 0.5 1.2
$p2 minmax test  40 0.7 1.7
$p2 minmax test  60 0.7 1.8
$p2 minmax test  60 {}  {}
$p2 minmax test  65 0.8 2.5
$p2 minmax test  85 0.8 2.8
$p2 minmax test 100 0.9 2.2

$p2 plot line  0.0 1.0
$p2 plot line 25.0 1.2
$p2 plot line 60.0 2.0
$p2 plot line 70.0 1.7
$p2 plot line 95.0 1.4

after 0 $c raise data
