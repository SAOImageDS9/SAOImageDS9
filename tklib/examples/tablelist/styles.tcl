#! /usr/bin/env tclsh

#==============================================================================
# Demonstrates some ways of improving the look & feel of a tablelist widget.
#
# Copyright (c) 2002-2023  Csaba Nemethi (E-mail: csaba.nemethi@t-online.de)
#==============================================================================

package require Tk
package require tablelist

wm title . "Tablelist Styles"

#
# Add some entries to the Tk option database
#
if {[tk windowingsystem] eq "x11"} {
    #
    # Create the font TkDefaultFont if not yet present
    #
    catch {font create TkDefaultFont -family Helvetica -size 9}

    option add *Font			TkDefaultFont
    option add *selectBackground	#5294e2
    option add *selectForeground	white
}

#
# Create, configure, and populate 8 tablelist widgets
#
frame .f
for {set n 0} { $n < 8} {incr n} {
    set tbl .f.tbl$n
    tablelist::tablelist $tbl \
	-columntitles {"Label 0" "Label 1" "Label 2" "Label 3"} \
	-background white -height 4 -width 40 -stretch all
    if {[$tbl cget -selectborderwidth] == 0} {
	$tbl configure -spacing 1
    }

    switch $n {
	1 {
	    $tbl configure -showseparators yes
	}
	2 {
	    $tbl configure -stripebackground #f0f0f0
	}
	3 {
	    $tbl configure -stripebackground #f0f0f0 -showseparators yes
	}
	4 {
	    $tbl columnconfigure 1 -background LightYellow
	    $tbl columnconfigure 3 -background LightCyan
	}
	5 {
	    $tbl configure -showseparators yes
	    $tbl columnconfigure 1 -background LightYellow
	    $tbl columnconfigure 3 -background LightCyan
	}
	6 {
	    $tbl configure -stripebackground #f0f0f0
	    $tbl columnconfigure 1 -background LightYellow \
		-stripebackground #f0f0d2
	    $tbl columnconfigure 3 -background LightCyan \
		-stripebackground #d2f0f0
	}
	7 {
	    $tbl configure -stripebackground #f0f0f0 -showseparators yes
	    $tbl columnconfigure 1 -background LightYellow \
		-stripebackground #f0f0d2
	    $tbl columnconfigure 3 -background LightCyan \
		-stripebackground #d2f0f0
	}
    }

    foreach row {0 1 2 3} {
	$tbl insert end \
	     [list "Cell $row,0" "Cell $row,1" "Cell $row,2" "Cell $row,3"]
    }
}

button .close -text "Close" -command exit

#
# Manage the widgets
#
set pad {7p 0}
grid .f.tbl0 .f.tbl1 -sticky news -padx $pad -pady $pad
grid .f.tbl2 .f.tbl3 -sticky news -padx $pad -pady $pad
grid .f.tbl4 .f.tbl5 -sticky news -padx $pad -pady $pad
grid .f.tbl6 .f.tbl7 -sticky news -padx $pad -pady $pad
grid rowconfigure    .f {0 1 2 3} -weight 1
grid columnconfigure .f {0 1}     -weight 1
pack .close -side bottom -pady 7p
pack .f -side top -expand yes -fill both -padx {0 7p}
