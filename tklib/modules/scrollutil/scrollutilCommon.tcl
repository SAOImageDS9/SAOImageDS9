#==============================================================================
# Main Scrollutil and Scrollutil_tile package module.
#
# Copyright (c) 2019-2024  Csaba Nemethi (E-mail: csaba.nemethi@t-online.de)
#==============================================================================

namespace eval ::scrollutil {
    proc - {} { return [expr {$::tcl_version >= 8.5 ? "-" : ""}] }

    package require Tk 8.4[-]

    #
    # Public variables:
    #
    variable version	2.4
    variable library	[file dirname [file normalize [info script]]]

    #
    # Creates a new scrollarea/scrollsync/scrollableframe/pagesman widget:
    #
    namespace export	scrollarea scrollsync scrollableframe pagesman

    #
    # Queries the scrollarea/scrollsync to which a given widget belongs:
    #
    namespace export	getscrollarea getscrollsync

    #
    # Public procedures for mouse wheel event handling in
    # scrollable widgets and scrollable widget containers:
    #
    namespace export	addMouseWheelSupport createWheelEventBindings \
			enableScrollingByWheel disableScrollingByWheel \
			adaptWheelEventHandling setFocusCheckWindow \
			focusCheckWindow
}

package provide scrollutil::common $::scrollutil::version

#
# The following procedure, invoked in "scrollutil.tcl" and
# "scrollutil_tile.tcl", sets the variable ::scrollutil::usingTile
# to the given value and sets a trace on this variable.
#
proc ::scrollutil::useTile {bool} {
    variable usingTile $bool
    trace add variable usingTile {write unset} \
	[list ::scrollutil::restoreUsingTile $bool]
}

#
# The following trace procedure is executed whenever the variable
# ::scrollutil::usingTile is written or unset.  It restores the
# variable to its original value, given by the first argument.
#
proc ::scrollutil::restoreUsingTile {origVal varName index op} {
    variable usingTile $origVal
    switch $op {
	write {
	    return -code error "it is not supported to use both Scrollutil and\
				Scrollutil_tile in the same application"
	}
	unset {
	    trace add variable usingTile {write unset} \
		[list ::scrollutil::restoreUsingTile $origVal]
	}
    }
}

proc ::scrollutil::createTkAliases {} {
    foreach cmd {frame scrollbar} {
	if {[llength [info commands ::tk::$cmd]] == 0} {
	    interp alias {} ::tk::$cmd {} ::$cmd
	}
    }
}
::scrollutil::createTkAliases

#
# Everything else needed is lazily loaded on demand, via the dispatcher
# set up in the subdirectory "scripts" (see the file "tclIndex").
#
lappend auto_path [file join $::scrollutil::library scripts]

#
# Load the packages mwutil and scaleutil from the directory
# "scripts/utils".  Take into account that mwutil is also included
# in Mentry and Tablelist, and scaleutil is also included in Tablelist.
#
proc ::scrollutil::loadUtils {} {
    if {[catch {package present mwutil} version] == 0 &&
	[package vcompare $version 2.23] < 0} {
	package forget mwutil
    }
    package require mwutil 2.23[-]

    if {[catch {package present scaleutil} version] == 0 &&
	[package vcompare $version 1.14.1] < 0} {
	package forget scaleutil
    }
    package require scaleutil 1.14.1[-]
}
::scrollutil::loadUtils
