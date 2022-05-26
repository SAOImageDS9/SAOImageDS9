#!/usr/bin/env tclsh
## -*- tcl -*-

package require Tcl 8.5
package require Tk

package require Plotchart

# test_legend.tcl --
#     Show how to deal with resizing the window holding the plot
#     and one way of dealing with varying legends.
#     Basically: recreate the plots. There is a small issue to
#     be aware of for right axes - hence the use of $p instead
#     of the canvas widget.

set calc_height 600
set c_id [canvas .c2 -borderwidth 1 \
        -height $calc_height \
        -width  [expr ($calc_height * 7) / 5]]

wm geometry . 300x300+50+50

pack $c_id -side top -fill both -expand 1

catch { console show }

set max 10
set min -10
set step 2
set f 0
for {set i 0} {$i < 2} {incr i} {
    if {!$f} {
	$c_id delete "all"
update
	set p [::Plotchart::createXYPlot .c2 "$min $max $step" "$min $max $step"]

	$p title "Main Title"
	$p xtext "X title"
	$p vtext "V title"
        $p legendconfig -position top-left

	#
	# Use the plot returned by createXYPlot, rather than the widget to
	# create the right axis - this will guarantee the right geometry!
	#
	set rp [::Plotchart::createRightAxis $p "$min $max 2"]
	$rp dataconfig error -colour red
	$rp vtext "% Error"

	array set colors {1 blue 2 green 3 yellow 4 orange 5 red}
	set pct_number 5
	for {set elines 1} {$elines <= 5} {incr elines} {
	    set pct [expr $pct_number * $elines]
	
	    $p dataconfig ${pct}_pct -colour $colors($elines)
			
	    if {$min < 0} {$p plot ${pct}_pct $min [expr $min * (1.0 - ($pct /100.0))]      } else {$p plot ${pct}_pct $min [expr $min * (1.0 + ($pct /100.0))]     }
	    if {$max > 0} {$p plot ${pct}_pct      [expr $max * (1.0 - ($pct /100.0))] $max } else {$p plot ${pct}_pct      [expr $max * (1.0 + ($pct /100.0))] $max}

	    #--- plotting the negative percentage of errpr line
	    $p dataconfig n_${pct}_pct -colour $colors($elines)
			
	    if {$min < 0} {$p plot  n_${pct}_pct      [expr $min * (1.0 - ($pct /100.0))] $min } else {$p plot  n_${pct}_pct      [expr $min * (1.0 + ($pct /100.0))] $min}
	    if {$max > 0} {$p plot  n_${pct}_pct $max [expr $max * (1.0 - ($pct /100.0))]      } else {$p plot  n_${pct}_pct $max [expr $max * (1.0 + ($pct /100.0))]     }
			
	    $p legend ${pct}_pct  "+/- ${pct} percent"
	}
	#--- This controls the display of the ticklines
	$p xticklines blue dots1
	$p yticklines blue dots1


update
	set f 1
	after 2000

    } else {
wm geometry . 600x300+50+50

	$c_id delete "all"
update

	set p [::Plotchart::createXYPlot .c2 "$min $max $step" "$min $max $step"]

	$p title "Main Title"
	$p xtext "X title"
	$p vtext "V title"
        $p legendconfig -position top-left

	#
	# Use the plot returned by createXYPlot, rather than the widget to
	# create the right axis - this will guarantee the right geometry!
	#
	set rp [::Plotchart::createRightAxis $p "$min $max 2"]
	$rp dataconfig error -colour red
	$rp vtext "% Error"


	array set colors {1 blue 2 green 3 yellow 4 orange 5 red}
	set pct_number 5
	for {set elines 1} {$elines <= 2} {incr elines} {
	    set pct [expr $pct_number * $elines]
	
	    $p dataconfig ${pct}_pct -colour $colors($elines)
			
	    if {$min < 0} {$p plot ${pct}_pct $min [expr $min * (1.0 - ($pct /100.0))]      } else {$p plot ${pct}_pct $min [expr $min * (1.0 + ($pct /100.0))]     }
	    if {$max > 0} {$p plot ${pct}_pct      [expr $max * (1.0 - ($pct /100.0))] $max } else {$p plot ${pct}_pct      [expr $max * (1.0 + ($pct /100.0))] $max}

	    #--- plotting the negative percentage of errpr line
	    $p dataconfig n_${pct}_pct -colour $colors($elines)
			
	    if {$min < 0} {$p plot  n_${pct}_pct      [expr $min * (1.0 - ($pct /100.0))] $min } else {$p plot  n_${pct}_pct      [expr $min * (1.0 + ($pct /100.0))] $min}
	    if {$max > 0} {$p plot  n_${pct}_pct $max [expr $max * (1.0 - ($pct /100.0))]      } else {$p plot  n_${pct}_pct $max [expr $max * (1.0 + ($pct /100.0))]     }
			
	    $p legend ${pct}_pct  "+/- ${pct} percent"
	}
	#--- This controls the display of the ticklines
	$p xticklines blue dots1
	$p yticklines blue dots1


update
	set f 0
	after 2000
    }
}
