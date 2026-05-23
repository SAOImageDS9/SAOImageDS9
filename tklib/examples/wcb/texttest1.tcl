#! /usr/bin/env tclsh

#==============================================================================
# Demo:	wcb::callback <text> before insert <callback> ...
#	wcb::callback <text> before delete <callback>
#	wcb::callback <text> before selset <callback>
#	wcb::callback <text> before motion <callback>
#	wcb::callback <text>  after insert <callback>
#	wcb::callback <text>  after delete <callback>
#	wcb::cancel
#	wcb::extend <arg>
#
# Copyright (c) 1999-2023  Csaba Nemethi (E-mail: csaba.nemethi@t-online.de)
#==============================================================================

package require Tk
package require wcb

wm title . "Texttest #1"

#
# Add some entries to the Tk option database
#
source [file join [file dirname [info script]] option.tcl]

#
# Text .txt
#
set width 50
text .txt -width $width -height 12 -setgrid true -wrap none -background white \
	  -font TkFixedFont
.txt tag configure prog -foreground red
.txt tag configure user -foreground DarkGreen
.txt insert end "Everything you type or paste into this window will\n"	prog
.txt insert end "be displayed in dark green.  You cannot make any\n"	prog
.txt insert end "changes or selections in this red area, and will\n"	prog
.txt insert end "not be able to send the message as long as any\n"	prog
.txt insert end "line contains more than $width characters.\n"		prog
.txt insert end "--------------------------------------------------\n"	prog
set limit [.txt index insert]

#
# Label .pos displaying the current cursor position
#
label .pos -textvariable pos

#
# Button .send (actually, it does not send anything)
#
button .send -text Send -command exit

#
# Define 5 before- and 2 after-callbacks for .txt
#
wcb::callback .txt before insert protectRedArea changeColor
wcb::callback .txt before delete protectRedArea
wcb::callback .txt before selset protectRedArea
wcb::callback .txt before motion displayPos
wcb::callback .txt  after insert "checkLines $width"
wcb::callback .txt  after delete "checkLines $width"

#
# Callback procedure protectRedArea
#
# The parameters following w can be interpreted either as
# "index string ?tagList string tagList ...?" (for an insert
# callback), or as "from ?to?" (for a delete callback),
# or as "from ?to from to ...?" (for a selset callback).
#
proc protectRedArea {w idx args} {
    global limit
    if {[$w compare $idx < $limit]} {
	wcb::cancel
    }
}

#
# Callback procedure changeColor
#
proc changeColor {w args} {
    wcb::extend user
}

#
# Callback procedure displayPos
#
proc displayPos {w idx} {
    set index [$w index $idx]
    ##nagelfar ignore
    scan $index "%d.%d" line column
    incr column

    global pos
    ##nagelfar ignore
    set pos [format "Line: %d   Column: %d" $line $column]
}

#
# Callback procedure checkLines
#
# The parameter args can be interpreted both as "index
# string ?tagList string tagList ...?" (for an insert
# callback) and as "from ?to?" (for a delete callback).
#
proc checkLines {maxCharsPerLine w args} {
    #
    # Display the new cursor position
    #
    displayPos $w insert

    #
    # Disable or enable the .send button
    #
    ##nagelfar ignore
    scan [$w index end] "%d" lastLine
    for {set line 1} {$line < $lastLine} {incr line} {
	##nagelfar ignore
	scan [$w index $line.end] "%d.%d" dummy charsInLine
	if {$charsInLine > $maxCharsPerLine} {
	    .send configure -state disabled
	    return ""
	}
    }
    .send configure -state normal
}

#
# Manage the widgets
#
pack .send -side bottom -pady 7p
pack .pos -side bottom
pack .txt -expand yes -fill both

displayPos .txt insert
focus .txt
