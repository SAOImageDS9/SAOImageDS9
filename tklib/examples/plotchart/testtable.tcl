#!/usr/bin/env tclsh
## -*- tcl -*-
# testtable.tcl --
#     Small program to test the table chart
#
package require Plotchart

pack [canvas .c  -bg white -height 300] \
     [canvas .c2 -bg white -height 300] \
         -side left -fill both -expand yes

::Plotchart::plotconfig table frame outerwidth 3
::Plotchart::plotconfig table frame color red
::Plotchart::plotconfig table subtitle font {Courier 14}

set t [::Plotchart::createTableChart .c {"Column 1" "Column 2" "Column 3"} 80]


proc setColor {table widget row col value} {
    $table cellconfigure -background white -color black
    if { $value < 2.0 } {
        $table cellconfigure -background red -color white
    }
    if { $value > 6.0 } {
        $table cellconfigure -background green
    }

    return [format "%6.3f" $value]
}

# Command must already exist ...
$t formatcommand setColor

$t title "Demonstration of table charts"
$t separator

for {set i 0} {$i < 9} {incr i} {
    set row {}

    for {set j 0} {$j < 3} {incr j} {
        lappend row [expr {10.0 * rand()}]
    }

    if { $i == 3 } {
        $t separator
    }

    $t row $row
}

#
# Second type of table
#
::Plotchart::plotconfig table frame color {}

set t2 [::Plotchart::createTableChart .c2 {"Company" "Change (%)" "Current price"} {80 120 30}]

proc fillCell {table widget row col value} {
    if { $col != 1 } {
        return $value
    } else {
        $table worldcoordinates -10.0 -0.5 10.0 1.5
        if { $value < 0.0 } {
            foreach {xp1 yp1 xp2 yp2} [$table topixels $value 0.0 0.0 1.0] {break}
            $widget create rectangle $xp1 $yp1 $xp2 $yp2 -fill red -outline {}

            foreach {xp1 yp1} [$table topixels 0.2 0.0] {break}
            $widget create text $xp1 $yp1 -text $value -anchor sw

        } else {
            foreach {xp1 yp1 xp2 yp2} [$table topixels $value 0.0 0.0 1.0] {break}
            $widget create rectangle $xp1 $yp1 $xp2 $yp2 -fill blue -outline {}

            foreach {xp1 yp1} [$table topixels -0.2 0.0] {break}
            $widget create text $xp1 $yp1 -text $value -anchor se
        }
    }
    return {}
}

$t2 formatcommand fillCell
#$t2 title "Change in price of shares over last week"

$t2 row {"Company A" -3.0  16.0}
$t2 row {"Company B"  1.8 224.2}
$t2 row {"Company C"  0.8  10.0}
$t2 row {"Company D"  6.8  45.3}

