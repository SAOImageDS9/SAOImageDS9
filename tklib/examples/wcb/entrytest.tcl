#! /usr/bin/env tclsh

#==============================================================================
# Demo:	wcb::callback <entry> before insert <callback> ...
#	wcb::postInsertEntryText <entry> <index> <string>
#	wcb::cancel
#
# Copyright (c) 1999-2023  Csaba Nemethi (E-mail: csaba.nemethi@t-online.de)
#==============================================================================

package require Tk
package require wcb

wm title . Entrytest

#
# Add some entries to the Tk option database
#
source [file join [file dirname [info script]] option.tcl]
option add *Entry.font		TkFixedFont
option add *Entry.background	white

#
# Frame .f1, label .l1, and entry .e1
#
frame .f1 -height 10
label .l1 -text "An entry for alphanumeric characters,\nwith automatic\
		 uppercase conversion:"
entry .e1 -width 10
focus .e1

#
# Define 2 before-insert callbacks for .e1
#
wcb::callback .e1 before insert wcb::checkStrForAlnum wcb::convStrToUpper

#
# Frame .f2, label .l2, and entry .e2
#
frame .f2 -height 10
label .l2 -text "An entry of max. length 10, for an integer:"
entry .e2 -width 10

#
# Define 2 before-insert callbacks for .e2
#
wcb::callback .e2 before insert {wcb::checkEntryLen 10} wcb::checkEntryForInt

#
# Frame .f3, label .l3, and entry .e3
#
frame .f3 -height 10
label .l3 -text "An entry of max. length 10, for an unsigned real\nnumber\
		 with at most 2 digits after the decimal point:"
entry .e3 -width 10

#
# Define 2 before-insert callbacks for .e3
#
wcb::callback .e3 before insert {wcb::checkEntryLen 10} checkNumber

#
# Callback procedure checkNumber
#
proc checkNumber {w idx str} {
    set newText [wcb::postInsertEntryText $w $idx $str]
    if {![regexp {^[0-9]*\.?[0-9]?[0-9]?$} $newText]} {
	wcb::cancel
    }
}

#
# Frame .sep, button .close, and frame .bottom
#
frame .sep -height 2 -bd 1 -relief sunken
button .close -text Close -command exit
frame .bottom -height 10

#
# Manage the widgets
#
pack .bottom .close -side bottom
pack .sep -side bottom -pady 7p -fill x
pack .f1 .l1 .e1 -padx 7p
pack .f2 .l2 .e2 -padx 7p
pack .f3 .l3 .e3 -padx 7p
