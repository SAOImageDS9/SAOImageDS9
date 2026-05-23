#! /usr/bin/env tclsh
# -*- tcl -*-

# test_taylor.tcl --
#     Test the procedures for drawing a Taylor diagram
#
#     See: https://en.wikipedia.org/wiki/Taylor_diagram for a description
#
#     Note:
#     There is a small issue with the margins still to be solved. Use a
#     white background for the canvas to make this invisible.
#
package require Tcl
package require Tk
package require Plotchart
namespace import Plotchart::*

pack [canvas .c]

::Plotchart::plotconfig taylordiagram reference color lime

set p [::Plotchart::createTaylorDiagram .c {10 2.5} -reference 5.4]

$p title "Example of a Taylor diagram"

$p dataconfig data -symbol dot -color blue
$p plot data 4.0 0.9
$p plot data 5.0 0.8
