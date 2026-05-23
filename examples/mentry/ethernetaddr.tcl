#! /usr/bin/env tclsh

#==============================================================================
# Demonstrates how to implement a multi-entry widget for Ethernet addresses.
#
# Copyright (c) 1999-2023  Csaba Nemethi (E-mail: csaba.nemethi@t-online.de)
#==============================================================================

package require Tk
package require mentry

set title "Ethernet Address"
wm title . $title

#
# Add some entries to the Tk option database
#
source [file join [file dirname [info script]] option.tcl]

#------------------------------------------------------------------------------
# ethernetAddrMentry
#
# Creates a new mentry widget win that allows to display and edit Ethernet
# addresses.  Sets the type attribute of the widget to EthernetAddr and returns
# the name of the newly created widget.
#------------------------------------------------------------------------------
proc ethernetAddrMentry {win args} {
    #
    # Create a mentry widget consisting of 6 entries of width
    # 2, separated by colons, and set its type to EthernetAddr
    #
    eval [list mentry::mentry $win] $args
    $win configure -body {2 : 2 : 2 : 2 : 2 : 2}
    $win attrib type EthernetAddr

    #
    # Install automatic uppercase conversion and allow only hexadecimal
    # digits in all entry components; use wcb::cbappend (or wcb::cbprepend)
    # instead of wcb::callback in order to keep the wcb::checkEntryLen
    # callback, registered by mentry::mentry for all entry components
    #
    for {set n 0} {$n < 6} {incr n} {
	set w [$win entrypath $n]
	wcb::cbappend $w before insert wcb::convStrToUpper \
		      {wcb::checkStrForRegExp {^[0-9A-F]*$}}
	$win adjustentry $n "0123456789ABCDEF"
	bindtags $w [linsert [bindtags $w] 1 MentryEthernetAddr]
    }

    return $win
}

#------------------------------------------------------------------------------
# putEthernetAddr
#
# Outputs the Ethernet address addr to the mentry widget win of type
# EthernetAddr.  The address must be a string of the form XX:XX:XX:XX:XX:XX,
# where each XX must be a hexadecimal string in the range 0 - 255.  Leading
# zeros are allowed (but not required), hence the components may have more (but
# also less) than two characters; the procedure displays them with exactly two
# digits.
#------------------------------------------------------------------------------
proc putEthernetAddr {addr win} {
    set errorMsg "expected an Ethernet address but got \"$addr\""

    #
    # Check the syntax of addr
    #
    set lst [split $addr :]
    if {[llength $lst] != 6} {
	return -code error $errorMsg
    }

    #
    # Try to convert the 6 components of addr to hexadecimal
    # strings and check whether they are in the range 0 - 255
    #
    for {set n 0} {$n < 6} {incr n} {
	set val 0x[lindex $lst $n]
	if {[catch {format "%02X" $val} str$n] != 0 || $val < 0 || $val > 255} {
	    return -code error $errorMsg
	}
    }

    #
    # Check the widget and display the properly formatted Ethernet address
    #
    checkIfEthernetAddrMentry $win
    $win put 0 $str0 $str1 $str2 $str3 $str4 $str5
}

#------------------------------------------------------------------------------
# getEthernetAddr
#
# Returns the Ethernet address contained in the mentry widget win of type
# EthernetAddr.
#------------------------------------------------------------------------------
proc getEthernetAddr win {
    #
    # Check the widget
    #
    checkIfEthernetAddrMentry $win

    #
    # Generate an error if any entry component is empty
    #
    for {set n 0} {$n < 6} {incr n} {
	if {[$win isempty $n]} {
	    focus [$win entrypath $n]
	    return -code error EMPTY
	}
    }

    #
    # Return the properly formatted Ethernet address built
    # from the values contained in the entry components
    #
    $win getarray strs
    return [format "%02X:%02X:%02X:%02X:%02X:%02X" \
	    0x$strs(0) 0x$strs(1) 0x$strs(2) 0x$strs(3) 0x$strs(4) 0x$strs(5)]
}

#------------------------------------------------------------------------------
# checkIfEthernetAddrMentry
#
# Generates an error if win is not a mentry widget of type EthernetAddr.
#------------------------------------------------------------------------------
proc checkIfEthernetAddrMentry win {
    if {![winfo exists $win]} {
	return -code error "bad window path name \"$win\""
    }

    if {[winfo class $win] ne "Mentry" ||
	[$win attrib type] ne "EthernetAddr"} {
	return -code error \
	       "window \"$win\" is not a mentry widget for Ethernet addresses"
    }
}

bind MentryEthernetAddr <<Paste>> { pasteEthernetAddr %W }

#------------------------------------------------------------------------------
# pasteEthernetAddr
#
# Handles <<Paste>> events in the entry component w of a mentry widget for
# Ethernet addresses by pasting the current contents of the clipboard into the
# mentry if it is a valid Ethernet address.
#------------------------------------------------------------------------------
proc pasteEthernetAddr w {
    set res [catch {::tk::GetSelection $w CLIPBOARD} addr]
    if {$res == 0} {
	set win [winfo parent $w]
	catch { putEthernetAddr $addr $win }
    }

    return -code break ""
}

#------------------------------------------------------------------------------

#
# Frame .f with a mentry displaying an Ethernet address
#
frame .f
label .f.l -text "A mentry widget for Ethernet addresses,\nwith automatic\
		  uppercase conversion:"
ethernetAddrMentry .f.me -justify center
pack .f.l .f.me

#
# Button .get invoking the procedure getEthernetAddr
#
button .get -text "Get from mentry" -command {
    if {[catch {
	set addr ""
	set addr [getEthernetAddr .f.me]
    }] != 0} {
	bell
	tk_messageBox -icon error -message "Field value missing" \
		      -title $title -type ok
    }
}

#
# Label .addr displaying the result of getEthernetAddr
#
label .addr -textvariable addr

#
# Frame .sep and button .close
#
frame .sep -height 2 -bd 1 -relief sunken
button .close -text Close -command exit

#
# Manage the widgets
#
pack .close -side bottom -pady 7p
pack .sep -side bottom -fill x
pack .f -padx 7p -pady 7p
pack .get -padx 7p
pack .addr -padx 7p -pady 7p

putEthernetAddr 0:40:5:E4:99:26 .f.me
focus [.f.me entrypath 0]
