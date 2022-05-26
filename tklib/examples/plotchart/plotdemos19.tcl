#! /bin/sh
# The next line restarts with tclsh \
exec tclsh "$0" ${1+"$@"}

package require Tk

package require Plotchart

# plotdemos19.tcl --
#     Demonstration of several options new in Plotchart 2.3.2
#

canvas .c1  -background white -width 600 -height 300
canvas .c2  -background white -width 600 -height 300
canvas .c3  -background white -width 600 -height 300

grid .c1
grid .c2
grid .c3

set s1 [::Plotchart::createXYPlot .c1 {-10 10 5} {-10 10 5} -axesatzero 1]
set s2 [::Plotchart::createXYPlot .c2 {-20 20 5} {0 7 2} -isometric 1]
set s3 [::Plotchart::createHistogram .c3 {0 10 ""} {0 10 5} -xlabels {1 4 6}]

#
# Add the data to the plots
#
$s1 title "Axes at the origin (-axesatzero 1)"

$s1 plot data 0 1
$s1 plot data 1 2
$s1 plot data 2 5
$s1 plot data 6 2

$s2 title "Squares appear as squares on the screen (-isometric 1)"
$s2 plot data 4 7
$s2 plot data 7 7
$s2 plot data 7 4
$s2 plot data 4 4

$s3 title "Histogram with custom labels (-xlabels + xconfig)"
$s3 xconfig -format "%.0fns"
$s3 plot data 0 1
$s3 plot data 1 2
$s3 plot data 2 5
$s3 plot data 6 2


