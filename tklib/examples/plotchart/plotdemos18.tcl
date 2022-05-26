#!/usr/bin/env tclsh
## -*- tcl -*-

package require Tk

package require Plotchart

# plotdemos18.tcl --
#     Demonstration of the status timeline plot
#
#     Supplied by Sean Deely Woods
#

set devices {e1 e2 e12231 r1 r2}

canvas .c  -background white -width 600 -height 400
set s [::Plotchart::createStatusTimeline .c {0 7200 900} $devices -xaxis 0]
pack .c -side left -fill both

#
# Add the data to the plot
#
set xd    5.0
set yd   20.0
set xold  0.0
set yold 50.0

#$s dataconfig e1 -colour "red"
#$s dataconfig e2 -colour "blue"
#$s dataconfig r1 -colour "magenta"
#$s dataconfig r2 -colour "green"

#$s plot e1 0.0 green
#$s plot e2 0.0 green
#$s plot r1 0.0 green
#$s plot r2 0.0 green


set li 0

for {set i [expr {int(rand()*10)}]} {$i < 7200} {incr i} {
  foreach item $devices {
    if {[expr {rand()>0.5}]} {
      set color red
    } else {
      set color green
    }
    #puts [list period $item $li $i $color]

    $s plot $item $li $i $color
  }
  set next [expr {int(rand()*600)}]
  set li $i
  incr i $next
}

$s plot XX $li $i $color

for {set x 0} {$x <= 7200} {incr x 900} {
  set hours   [expr int(floor($x/3600))]
  set minutes [expr int((floor($x-($hours*3600)))/60)]
  set text    [format %02dh:%02d $hours $minutes]
  if {($x % 3600)==0} {
    set style [list -fill black -width 2]
  } else {
    set text {}
    set style [list -fill grey -dash ...]
  }
  $s vertline $text $x {*}$style
}

#$s xtext "Time"
#$s ytext ""
$s title "Operational over time"
