#! /usr/bin/env tclsh

#==============================================================================
# Demonstrates how to implement a multi-entry widget for 10-digit phone numbers.
#
# Copyright (c) 1999-2023  Csaba Nemethi (E-mail: csaba.nemethi@t-online.de)
#==============================================================================

package require Tk
package require mentry_tile

set title "Phone Number"
wm title . $title

#
# Add some entries to the Tk option database
#
source [file join [file dirname [info script]] option_tile.tcl]

#------------------------------------------------------------------------------
# phoneNumberMentry
#
# Creates a new mentry widget win that allows to display and edit 10-digit
# phone numbers.  Sets the type attribute of the widget to PhoneNumber and
# returns the name of the newly created widget.
#------------------------------------------------------------------------------
proc phoneNumberMentry {win args} {
    #
    # Create a mentry widget consisting of two entries of width 3 and one of
    # width 4, separated by "-" characters, and set its type to PhoneNumber
    #
    eval [list mentry::mentry $win] $args
    $win configure -body {3 - 3 - 4}
    $win attrib type PhoneNumber

    #
    # Allow only decimal digits in all entry components; use
    # wcb::cbappend (or wcb::cbprepend) instead of wcb::callback
    # in order to keep the wcb::checkEntryLen callback,
    # registered by mentry::mentry for all entry components
    #
    for {set n 0} {$n < 3} {incr n} {
	set w [$win entrypath $n]
	wcb::cbappend $w before insert wcb::checkStrForNum
	$win adjustentry $n "0123456789"
	bindtags $w [linsert [bindtags $w] 1 MentryPhoneNumber]
    }

    return $win
}

#------------------------------------------------------------------------------
# putPhoneNumber
#
# Outputs the phone number num to the mentry widget win of type PhoneNumber.
# The phone number must be a string of length 10, consisting of decimal digits.
#------------------------------------------------------------------------------
proc putPhoneNumber {num win} {
    #
    # Check the syntax of num
    #
    if {[string length $num] != 10 || ![regexp {^[0-9]*$} $num]} {
	return -code error "expected 10 decimal digits but got \"$num\""
    }

    #
    # Check the widget and display the properly formatted phone number
    #
    checkIfPhoneNumberMentry $win
    $win put 0 [string range $num 0 2] [string range $num 3 5] \
	       [string range $num 6 9]
}

#------------------------------------------------------------------------------
# getPhoneNumber
#
# Returns the phone number contained in the mentry widget win of type
# PhoneNumber.
#------------------------------------------------------------------------------
proc getPhoneNumber win {
    #
    # Check the widget
    #
    checkIfPhoneNumberMentry $win

    #
    # Generate an error if any entry component is empty or incomplete
    #
    for {set n 0} {$n < 3} {incr n} {
	if {[$win isempty $n]} {
	    focus [$win entrypath $n]
	    return -code error EMPTY
	}
	if {![$win isfull $n]} {
	    focus [$win entrypath $n]
	    return -code error INCOMPL
	}
    }

    #
    # Return the phone number built from the
    # values contained in the entry components
    #
    $win getarray strs
    return $strs(0)$strs(1)$strs(2)
}

#------------------------------------------------------------------------------
# checkIfPhoneNumberMentry
#
# Generates an error if win is not a mentry widget of type PhoneNumber.
#------------------------------------------------------------------------------
proc checkIfPhoneNumberMentry win {
    if {![winfo exists $win]} {
	return -code error "bad window path name \"$win\""
    }

    if {[winfo class $win] ne "Mentry" ||
	[$win attrib type] ne "PhoneNumber"} {
	return -code error \
	       "window \"$win\" is not a mentry widget for phone numbers"
    }
}

bind MentryPhoneNumber <<Paste>> { pastePhoneNumber %W }

#------------------------------------------------------------------------------
# pastePhoneNumber
#
# Handles <<Paste>> events in the entry component w of a mentry widget for
# 10-digit phone numbers by pasting the current contents of the clipboard into
# the mentry if it is a valid 10-digit phone number.
#------------------------------------------------------------------------------
proc pastePhoneNumber w {
    set res [catch {::tk::GetSelection $w CLIPBOARD} num]
    if {$res == 0} {
	set win [winfo parent [winfo parent $w]]
	catch { putPhoneNumber $num $win }
    }

    return -code break ""
}

#------------------------------------------------------------------------------

#
# Improve the window's appearance by using a tile
# frame as a container for the other widgets
#
ttk::frame .base

#
# Frame .base.f with a mentry displaying a phone number
#
ttk::frame .base.f
ttk::label .base.f.l -text "A mentry widget for phone numbers:"
phoneNumberMentry .base.f.me
pack .base.f.l .base.f.me

#
# Message strings corresponding to the values
# returned by getPhoneNumber on failure
#
array set msgs {
    EMPTY	"Field value missing"
    INCOMPL	"Incomplete field value"
}

#
# Button .base.get invoking the procedure getPhoneNumber
#
ttk::button .base.get -text "Get from mentry" -command {
    if {[catch {
	set num ""
	set num [getPhoneNumber .base.f.me]
    } result] != 0} {
	bell
	tk_messageBox -icon error -message $msgs($result) \
		      -title $title -type ok
    }
}

#
# Label .base.num displaying the result of getPhoneNumber
#
ttk::label .base.num -textvariable num

#
# Separator .base.sep and button .base.close
#
ttk::separator .base.sep -orient horizontal
ttk::button .base.close -text Close -command exit

#
# Manage the widgets
#
pack .base.close -side bottom -pady 7p
pack .base.sep -side bottom -fill x
pack .base.f -padx 7p -pady 7p
pack .base.get -padx 7p
pack .base.num -padx 7p -pady 7p
pack .base -expand yes -fill both

putPhoneNumber 1234567890 .base.f.me
focus [.base.f.me entrypath 0]
