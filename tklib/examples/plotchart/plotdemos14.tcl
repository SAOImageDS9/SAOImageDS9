#!/usr/bin/env tclsh
## -*- tcl -*-

package require Tk

# plotdemos14.tcl --
#     Test target diagrams
#
#     This type of diagrams is used when comparing a numerical model with
#     measurements to determine the goodness-of-fit.
#
#     Reference:
#     Jason K. Joliff et al.
#         Summary diagrams for coupled hydrodynamic-ecosystem model skill assessment
#         Journal of Marine Systems 76 (2009) 64-82
#         DOI: 10.1016/j.jmarsys.2008.05.014
#
package require Plotchart


#
# Target diagram
#
pack [canvas .c1 -bg white]

set p [::Plotchart::createTargetDiagram .c1 {0.5 0.7}]

#
# Draw a symbol - arbitrary data
#
$p dataconfig plus   -symbol plus   -colour red
$p dataconfig circle -symbol circle -colour red
#       Model results             Measurements to compare them with
$p plot plus   {1.0  4.0  5.0  2.0  2.4} {1.1  3.0  4.5  2.2  2.3}
$p plot circle {1.2  4.2  3.0  2.0  2.3} {1.1  3.0  4.5  2.2  2.3}
