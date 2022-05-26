#!/usr/bin/env tclsh
## -*- tcl -*-

package require Tk

# testfunc.tcl --
#     Test the plotfunc method
#
package require Plotchart

grid [canvas .c -width 500 -height 500]

set p [::Plotchart::createXYPlot .c {-4.0 4.0 2.0} {-4.0 4.0 2.0}]

proc parabola {a x} {
    expr {$a**2 - $x**2}
}
proc semicircle {a x} {
    expr {sqrt($a**2 - $x**2)}
}
proc hyperbola {a x} {
    expr {sqrt($x**2 - $a**2)}
}

$p plotfunc parabola {x a} {[parabola $a $x]} 2.0

$p dataconfig semicircle -colour red -width 2
$p plotfunc semicircle {x a} {[semicircle $a $x]} 2.0 -samples 100

$p dataconfig hyperbola -colour blue -width 2
$p plotfunc hyperbola {x a} {[hyperbola $a $x]} 1.0 -samples 100
