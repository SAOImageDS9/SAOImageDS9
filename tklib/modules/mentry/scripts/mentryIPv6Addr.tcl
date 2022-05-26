#==============================================================================
# Contains the implementation of a multi-entry widget for IPv6 addresses.
#
# Copyright (c) 2009-2019  Csaba Nemethi (E-mail: csaba.nemethi@t-online.de)
#==============================================================================

#
# Namespace initialization
# ========================
#

namespace eval mentry {
    #
    # Define some bindings for the binding tag MentryIPv6Addr
    #
    bind MentryIPv6Addr <Up>	{ mentry::incrIPv6AddrComp %W  1 }
    bind MentryIPv6Addr <Down>	{ mentry::incrIPv6AddrComp %W -1 }
    bind MentryIPv6Addr <Prior>	{ mentry::incrIPv6AddrComp %W  10 }
    bind MentryIPv6Addr <Next>	{ mentry::incrIPv6AddrComp %W -10 }
    variable winSys
    catch {
	if {[string compare $winSys "classic"] == 0 ||
	    [string compare $winSys "aqua"] == 0} {
	    bind MentryIPv6Addr <MouseWheel> {
		mentry::incrIPv6AddrComp %W %D
	    }
	    bind MentryIPv6Addr <Option-MouseWheel> {
		mentry::incrIPv6AddrComp %W [expr {10 * %D}]
	    }
	} else {
	    bind MentryIPv6Addr <MouseWheel> {
		mentry::incrIPv6AddrComp %W [expr {%D / 120}]
	    }
	}
    }
    if {[string compare $winSys "x11"] == 0} {
	bind MentryIPv6Addr <Button-4> {
	    if {!$tk_strictMotif} {
		mentry::incrIPv6AddrComp %W 1
	    }
	}
	bind MentryIPv6Addr <Button-5> {
	    if {!$tk_strictMotif} {
		mentry::incrIPv6AddrComp %W -1
	    }
	}
    }
}

#
# Public procedures
# =================
#

#------------------------------------------------------------------------------
# mentry::ipv6AddrMentry
#
# Creates a new mentry widget win that allows to display and edit IPv6
# addresses.  Sets the type attribute of the widget to IPv6Addr and returns the
# name of the newly created widget.
#------------------------------------------------------------------------------
proc mentry::ipv6AddrMentry {win args} {
    #
    # Create the widget and set its type to IPv6Addr
    #
    eval [list mentry $win] $args
    ::$win configure -body {4 : 4 : 4 : 4 : 4 : 4 : 4 : 4}
    ::$win attrib type IPv6Addr

    #
    # In each entry child allow only hexadecimal digits, and
    # insert the binding tag MentryIPv6Addr in the list of
    # binding tags of the entry, just after its path name
    #
    for {set n 0} {$n < 8} {incr n} {
	::$win adjustentry $n "0123456789abcdefABCDEF"
	set w [::$win entrypath $n]
	wcb::cbappend $w before insert wcb::convStrToLower \
		      {wcb::checkStrForRegExp {^[0-9a-fA-F]*$}}
	bindtags $w [linsert [bindtags $w] 1 MentryIPv6Addr]
    }

    return $win
}

#------------------------------------------------------------------------------
# mentry::putIPv6Addr
#
# Outputs the IPv6 address addr to the mentry widget win of type IPv6Addr.
#------------------------------------------------------------------------------
proc mentry::putIPv6Addr {addr win} {
    set errorMsg "expected an IPv6 address but got \"$addr\""

    #
    # Check the syntax of addr
    #
    if {[string match "*::*::*" $addr] || [string match "*:::*" $addr] ||
	[regexp {^:[^:]} $addr] || [regexp {[^:]:$} $addr]} {
	return -code error $errorMsg
    }

    #
    # Split addr on colons; make sure that a starting or
    # trailing "::" will give rise to a single empty string
    #
    if {[string compare $addr "::"] == 0} {
	set lst [list ""]
    } elseif {[regexp {^::(.+)} $addr dummy var]} {
	set lst [list ""]
	eval lappend lst [split $var ":"]
    } elseif {[regexp {(.+)::$} $addr dummy var]} {
	set lst [split $var ":"]
	lappend lst ""
    } else {
	set lst [split $addr ":"]
    }

    #
    # Replace the unique empty element of the list
    # (if any) with an appropriate number of zeros
    #
    set emptyIdx [lsearch -exact $lst ""]
    set lstLen [llength $lst]
    if {$emptyIdx < 0} {
	if {$lstLen != 8} {
	    return -code error $errorMsg
	}
    } else {
	if {$lstLen > 8} {
	    return -code error $errorMsg
	}

	set count [expr {9 - $lstLen}]
	for {set n 0} {$n < $count} {incr n} {
	    lappend lst2 0
	}
	set lst [eval lreplace {$lst} $emptyIdx $emptyIdx $lst2]
    }

    #
    # Try to convert the 8 elements of the list to hexadecimal
    # strings and check whether they are in the range 0 - 65535
    #
    for {set n 0} {$n < 8} {incr n} {
	set val 0x[lindex $lst $n]
	if {[catch {format "%x" $val} str$n] != 0 | $val > 65535} {
	    return -code error $errorMsg
	}
    }

    checkIfIPv6AddrMentry $win
    ::$win put 0 $str0 $str1 $str2 $str3 $str4 $str5 $str6 $str7
}

#------------------------------------------------------------------------------
# mentry::getIPv6Addr
#
# Returns the IPv6 address contained in the mentry widget win of type IPv6Addr.
#------------------------------------------------------------------------------
proc mentry::getIPv6Addr win {
    checkIfIPv6AddrMentry $win

    #
    # Generate an error if any entry child is empty
    #
    for {set n 0} {$n < 8} {incr n} {
	if {[::$win isempty $n]} {
	    focus [::$win entrypath $n]
	    return -code error EMPTY
	}
    }

    ::$win getarray strs
    return [format "%x:%x:%x:%x:%x:%x:%x:%x" \
	    0x$strs(0) 0x$strs(1) 0x$strs(2) 0x$strs(3) \
	    0x$strs(4) 0x$strs(5) 0x$strs(6) 0x$strs(7)]
}

#
# Private procedures
# ==================
#

#------------------------------------------------------------------------------
# mentry::checkIfIPv6AddrMentry
#
# Generates an error if win is not a mentry widget of type IPv6Addr.
#------------------------------------------------------------------------------
proc mentry::checkIfIPv6AddrMentry win {
    if {![winfo exists $win]} {
	return -code error "bad window path name \"$win\""
    }

    if {[string compare [winfo class $win] "Mentry"] != 0 ||
	[string compare [::$win attrib type] "IPv6Addr"] != 0} {
	return -code error \
	       "window \"$win\" is not a mentry widget for IPv6 addresses"
    }
}

#------------------------------------------------------------------------------
# mentry::incrIPv6AddrComp
#
# This procedure handles <Up>, <Down>, <Prior>, and <Next> events in the entry
# child w of a mentry widget for IPv6 addresses.  It increments the entry's
# value by the specified amount if allowed.
#------------------------------------------------------------------------------
proc mentry::incrIPv6AddrComp {w amount} {
    set str [$w get]
    if {[string length $str] == 0} {
	#
	# Insert a "0"
	#
	_$w insert end 0
	_$w icursor 0
    } else {
	#
	# Increment the entry's value by the given amount if allowed
	#
	scan $str "%x" val
	if {$amount > 0} {
	    if {$val < 65535} {
		incr val $amount
		if {$val > 65535} {
		    set val 65535
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
	set str [format "%x" $val]
	set oldPos [$w index insert]
	_$w delete 0 end
	_$w insert end $str
	_$w icursor $oldPos
    }
}
