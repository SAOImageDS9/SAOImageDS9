#==============================================================================
# Contains the implementation of a multi-entry widget for IP addresses.
#
# Copyright (c) 1999-2023  Csaba Nemethi (E-mail: csaba.nemethi@t-online.de)
#==============================================================================

#
# Namespace initialization
# ========================
#

namespace eval mentry {
    #
    # Define some bindings for the binding tag MentryIPAddr
    #
    bind MentryIPAddr <Up>	{ mentry::incrIPAddrComp %W  1 }
    bind MentryIPAddr <Down>	{ mentry::incrIPAddrComp %W -1 }
    bind MentryIPAddr <Prior>	{ mentry::incrIPAddrComp %W  10 }
    bind MentryIPAddr <Next>	{ mentry::incrIPAddrComp %W -10 }
    bind MentryIPAddr <<Paste>>	{ mentry::pasteIPAddr %W }
    variable winSys
    variable uniformWheelSupport
    if {$uniformWheelSupport} {
	bind MentryIPAddr <MouseWheel> {
	    mentry::incrIPAddrComp %W \
		[expr {%D > 0 ? (%D + 119) / 120 : %D / 120}]
	}
	bind MentryIPAddr <Option-MouseWheel> {
	    mentry::incrIPAddrComp %W \
		[expr {%D > 0 ? (%D + 11) / 12 : %D / 12}]
	}
	bind MentryIPAddr <Shift-MouseWheel> {
	    # Ignore the event
	}
    } elseif {$winSys eq "aqua"} {
	catch {
	    bind MentryIPAddr <MouseWheel> {
		mentry::incrIPAddrComp %W %D
	    }
	    bind MentryIPAddr <Option-MouseWheel> {
		mentry::incrIPAddrComp %W [expr {10 * %D}]
	    }
	    bind MentryIPAddr <Shift-MouseWheel> {
		# Ignore the event
	    }
	}
    } else {
	catch {
	    bind MentryIPAddr <MouseWheel> {
		mentry::incrIPAddrComp %W \
		    [expr {%D > 0 ? (%D + 119) / 120 : %D / 120}]
	    }
	    bind MentryIPAddr <Shift-MouseWheel> {
		# Ignore the event
	    }
	}

	if {$winSys eq "x11"} {
	    bind MentryIPAddr <Button-4> {
		if {!$tk_strictMotif} {
		    mentry::incrIPAddrComp %W 1
		}
	    }
	    bind MentryIPAddr <Button-5> {
		if {!$tk_strictMotif} {
		    mentry::incrIPAddrComp %W -1
		}
	    }
	    bind MentryIPAddr <Shift-Button-4> {
		# Ignore the event
	    }
	    bind MentryIPAddr <Shift-Button-5> {
		# Ignore the event
	    }
	}
    }
    variable touchpadScrollSupport
    if {$touchpadScrollSupport} {
	bind MentryIPAddr <TouchpadScroll> {
	    lassign [tk::PreciseScrollDeltas %D] mentry::dX mentry::dY
	    if {$mentry::dY != 0 && [expr {%# %% 12}] == 0} {
		mentry::incrIPAddrComp %W [expr {$mentry::dY > 0 ? -1 : 1}]
	    }
	}
    }
}

#
# Public procedures
# =================
#

#------------------------------------------------------------------------------
# mentry::ipAddrMentry
#
# Creates a new mentry widget win that allows to display and edit IP addresses.
# Sets the type attribute of the widget to IPAddr and returns the name of the
# newly created widget.
#------------------------------------------------------------------------------
proc mentry::ipAddrMentry {win args} {
    #
    # Create the widget and set its type to IPAddr
    #
    eval [list mentry $win] $args
    ::$win configure -body {3 . 3 . 3 . 3}
    ::$win attrib type IPAddr

    #
    # In each entry component allow only unsigned integers of max.
    # value 255, and insert the binding tag MentryIPAddr in the
    # list of binding tags of the entry, just after its path name
    #
    for {set n 0} {$n < 4} {incr n} {
	set w [::$win entrypath $n]
	wcb::cbappend $w before insert "wcb::checkEntryForUInt 255"
	::$win adjustentry $n "0123456789"
	bindtags $w [linsert [bindtags $w] 1 MentryIPAddr]
    }

    return $win
}

#------------------------------------------------------------------------------
# mentry::putIPAddr
#
# Outputs the IP address addr to the mentry widget win of type IPAddr.
#------------------------------------------------------------------------------
proc mentry::putIPAddr {addr win} {
    set errorMsg "expected an IP address but got \"$addr\""

    #
    # Check the syntax of addr
    #
    set lst [split $addr .]
    if {[llength $lst] != 4} {
	return -code error $errorMsg
    }

    #
    # Try to convert the four components of addr to decimal
    # strings and check whether they are in the range 0 - 255
    #
    for {set n 0} {$n < 4} {incr n} {
	set val [lindex $lst $n]
	##nagelfar ignore
	if {[catch {format "%d" $val} str$n] != 0 || $val < 0 || $val > 255} {
	    return -code error $errorMsg
	}
    }

    checkIfIPAddrMentry $win
    ::$win put 0 $str0 $str1 $str2 $str3
}

#------------------------------------------------------------------------------
# mentry::getIPAddr
#
# Returns the IP address contained in the mentry widget win of type IPAddr.
#------------------------------------------------------------------------------
proc mentry::getIPAddr win {
    checkIfIPAddrMentry $win

    #
    # Scan the contents of the entry components;
    # generate an error if any of them is empty
    #
    for {set n 0} {$n < 4} {incr n} {
	set w [::$win entrypath $n]
	set str [$w get]
	if {$str eq ""} {
	    focus $w
	    return -code error EMPTY
	}
	##nagelfar ignore
	scan $str "%d" val$n
    }

    return $val0.$val1.$val2.$val3
}

#
# Private procedures
# ==================
#

#------------------------------------------------------------------------------
# mentry::checkIfIPAddrMentry
#
# Generates an error if win is not a mentry widget of type IPAddr.
#------------------------------------------------------------------------------
proc mentry::checkIfIPAddrMentry win {
    if {![winfo exists $win]} {
	return -code error "bad window path name \"$win\""
    }

    if {[winfo class $win] ne "Mentry" || [::$win attrib type] ne "IPAddr"} {
	return -code error \
	       "window \"$win\" is not a mentry widget for IP addresses"
    }
}

#------------------------------------------------------------------------------
# mentry::incrIPAddrComp
#
# This procedure handles <Up>, <Down>, <Prior>, and <Next> events in the entry
# component w of a mentry widget for IP addresses.  It increments the entry's
# value by the specified amount if allowed.
#------------------------------------------------------------------------------
proc mentry::incrIPAddrComp {w amount} {
    set str [$w get]
    if {$str eq ""} {
	#
	# Insert a "0"
	#
	_$w insert end 0
	_$w icursor 0
    } else {
	#
	# Increment the entry's value by the given amount if allowed
	#
	##nagelfar ignore
	scan $str "%d" val
	if {$amount > 0} {
	    if {$val < 255} {
		incr val $amount
		if {$val > 255} {
		    set val 255
		}
	    } else {
		return ""
	    }
	} else {
	    if {$val > 0} {
		incr val $amount
		if {$val < 0} {
		    set val 0
		}
	    } else {
		return ""
	    }
	}
	##nagelfar ignore
	set str [format "%d" $val]
	set oldPos [$w index insert]
	_$w delete 0 end
	_$w insert end $str
	_$w icursor $oldPos
    }
}

#------------------------------------------------------------------------------
# mentry::pasteIPAddr
#
# This procedure handles <<Paste>> events in the entry component w of a mentry
# widget for IP addresses by pasting the current contents of the clipboard into
# the mentry if it is a valid IP address.
#------------------------------------------------------------------------------
proc mentry::pasteIPAddr w {
    set res [catch {::tk::GetSelection $w CLIPBOARD} addr]
    if {$res == 0} {
	parseChildPath $w win n
	catch { putIPAddr $addr $win }
    }

    return -code break ""
}
