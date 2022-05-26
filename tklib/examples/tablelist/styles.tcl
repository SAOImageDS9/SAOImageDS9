#!/usr/bin/env wish

#==============================================================================
# Demonstrates some ways of improving the look & feel of a tablelist widget.
#
# Copyright (c) 2002-2019  Csaba Nemethi (E-mail: csaba.nemethi@t-online.de)
#==============================================================================

package require tablelist 6.8

wm title . "Tablelist Styles"

#
# Get the current windowing system ("x11", "win32", "classic",
# or "aqua") and add some entries to the Tk option database
#
if {[catch {tk windowingsystem} winSys] != 0} {
    switch $::tcl_platform(platform) {
	unix      { set winSys x11 }
	windows   { set winSys win32 }
	macintosh { set winSys classic }
    }
}
if {[string compare $winSys "x11"] == 0} {
    #
    # Create the font TkDefaultFont if not yet present
    #
    catch {font create TkDefaultFont -family Helvetica -size -12}

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
frame .bottom -height 10

#
# Manage the widgets
#
grid .f.tbl0 .f.tbl1 -sticky news -padx 5 -pady 5
grid .f.tbl2 .f.tbl3 -sticky news -padx 5 -pady 5
grid .f.tbl4 .f.tbl5 -sticky news -padx 5 -pady 5
grid .f.tbl6 .f.tbl7 -sticky news -padx 5 -pady 5
grid rowconfigure    .f {0 1 2 3} -weight 1
grid columnconfigure .f {0 1}     -weight 1
pack .bottom .close -side bottom
pack .f -side top -expand yes -fill both -padx 5 -pady 5
