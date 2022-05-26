#!/usr/bin/env tclsh
## -*- tcl -*-

package require Plotchart

proc convex {u v} {

    #expr {0.1*($u-$v)**2 - ($u + $v)/ sqrt(2.0) + 2.5}
    #expr {3.0 - 0.5 * ($u**2 + $v**2 - 2.0 * $u * $v) - ($u+$v)/sqrt(2.0)}

    expr {10.0 - $u**2/1.1 - $v**2/1.2}
}

pack [canvas .c -width 500 -height 500]
set p [::Plotchart::createXYPlot .c {-5 5 2.5} {-5 5 2.5}]

#::Plotchart::colorMap jet

#set xv {-2 -1.75 -1.5 -1.25 -1.0 -0.75 -0.5 -0.25 0.0 0.25 0.5 0.75 1.0 1.25 1.5 1.75 2.0 2.5 3.0 3.5 4.0 4.5}
#set yv {-2 -1.75 -1.5 -1.25 -1.0 -0.75 -0.5 -0.25 0.0 0.25 0.5 0.75 1.0 1.25 1.5 1.75 2.0 2.5 3.0 3.5 4.0 4.5}

for {set i 0} { $i < 20 } { incr i } {
    lappend xv [expr {($i-10)*0.5}]
    lappend yv [expr {($i-10)*0.5}]
}

catch { console show }
set zv {}
foreach y $yv {
    set row {}
    foreach x $xv {
        lappend row [convex $x $y]
    }
    lappend zv $row
}

foreach y {-1.0 0.0 1.0} {
    foreach x {-1.0 0.0 1.0} {
        $p labeldot $x $y [format %.2f [convex $x $y]]
    }
}
$p labeldot  4 0 [format %.2f [convex 4 0]] s
$p labeldot  0 4 [format %.2f [convex 0 4]]

$p plot axisx -5  0
$p plot axisx  5  0
$p plot axisy  0 -5
$p plot axisy  0  5

#$p contourlinesfunctionvalues $xv $yv $zv {-2.0 -1.0 -0.5 0.0 0.5 1.0 1.5 2.0 3.0 4.0}
#$p contourlinesfunctionvalues $xv $yv $zv {-2.0 0.0 2.0}

$p contourlinesfunctionvalues $xv $yv $zv {-2.0 0.0 2.0}
$p legendisolines $zv {-2.0 0.0 2.0}


toplevel .t
pack [canvas .t.c -width 500 -height 500]
set p2 [::Plotchart::createXYPlot .t.c {-5 5 2.5} {-5 5 2.5}]

set zv {}
set xcrd {}
set ycrd {}
foreach y $yv {
    lappend xcrd $xv
    set row {}
    set yc  {}
    foreach x $xv {
        lappend yc  $y
        lappend row [convex $x $y]
    }
    lappend zv   $row
    lappend ycrd $yc
}


$p2 contourfill  $xcrd $ycrd $zv {-2.0 0.0 2.0}
$p2 legendshades $zv {-2.0 0.0 2.0}

#
# contourfill requires full matrices for x and y
#$p contourfill $xv $yv $zv {-2.0 -1.0 -0.5 0.0 0.5 1.0 1.5 2.0 3.0 4.0}
#$p contourfill $xv $yv $zv 0.0

