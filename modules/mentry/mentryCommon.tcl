#==============================================================================
# Main Mentry and Mentry_tile package module.
#
# Copyright (c) 1999-2024  Csaba Nemethi (E-mail: csaba.nemethi@t-online.de)
#==============================================================================

namespace eval ::mentry {
    proc - {} { return [expr {$::tcl_version >= 8.5 ? "-" : ""}] }

    package require Tk 8.4[-]

    proc loadWcb {} {
	if {[catch {package require Wcb 4.0[-]} result1] &&
	    [catch {package require wcb 4.0[-]} result2] &&
	    [catch {package require Wcb 3.1[-]} result3] &&
	    [catch {package require wcb 3.1[-]} result4]} {
	    error "$result1; $result2; $result3; $result4"
	}
    }
    loadWcb

    #
    # Public variables:
    #
    variable version	4.3.1
    variable library	[file dirname [file normalize [info script]]]

    #
    # Creates a new multi-entry widget:
    #
    namespace export	mentry

    #
    # Implement multi-entry widgets for date and time:
    #
    namespace export	dateMentry timeMentry dateTimeMentry \
			putClockVal getClockVal

    #
    # Implement a multi-entry widget for real numbers in fixed-point format:
    #
    namespace export	fixedPointMentry putReal getReal

    #
    # Implement a multi-entry widget for IP addresses:
    #
    namespace export	ipAddrMentry putIPAddr getIPAddr

    #
    # Implement a multi-entry widget for IPv6 addresses:
    #
    namespace export	ipv6AddrMentry putIPv6Addr getIPv6Addr
}

package provide mentry::common $::mentry::version

#
# The following procedure, invoked in "mentry.tcl" and
# "mentry_tile.tcl", sets the variable ::mentry::usingTile
# to the given value and sets a trace on this variable.
#
proc ::mentry::useTile {bool} {
    variable usingTile $bool
    trace add variable usingTile {write unset} \
	[list ::mentry::restoreUsingTile $bool]
}

#
# The following trace procedure is executed whenever the variable
# ::mentry::usingTile is written or unset.  It restores the
# variable to its original value, given by the first argument.
#
proc ::mentry::restoreUsingTile {origVal varName index op} {
    variable usingTile $origVal
    switch $op {
	write {
	    return -code error "it is not supported to use both Mentry and\
				Mentry_tile in the same application"
	}
	unset {
	    trace add variable usingTile {write unset} \
		[list ::mentry::restoreUsingTile $origVal]
	}
    }
}

proc ::mentry::createTkAliases {} {
    foreach cmd {frame entry label} {
	if {[llength [info commands ::tk::$cmd]] == 0} {
	    interp alias {} ::tk::$cmd {} ::$cmd
	}
    }
}
::mentry::createTkAliases

#
# Everything else needed is lazily loaded on demand, via the dispatcher
# set up in the subdirectory "scripts" (see the file "tclIndex").
#
lappend auto_path [file join $::mentry::library scripts]

#
# Load the package mwutil from the directory "scripts/mwutil".  Take
# into account that it is also included in Scrollutil and Tablelist.
#
proc ::mentry::loadUtil {} {
    if {[catch {package present mwutil} version] == 0 &&
	[package vcompare $version 2.23] < 0} {
	package forget mwutil
    }
    package require mwutil 2.23[-]
}
::mentry::loadUtil
