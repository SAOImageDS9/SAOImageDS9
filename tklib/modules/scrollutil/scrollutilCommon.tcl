#==============================================================================
# Main Scrollutil and Scrollutil_tile package module.
#
# Copyright (c) 2019-2020  Csaba Nemethi (E-mail: csaba.nemethi@t-online.de)
#==============================================================================

package require Tk 8

namespace eval ::scrollutil {
    #
    # Public variables:
    #
    variable version	1.5
    variable library
    if {$::tcl_version >= 8.4} {
	set library	[file dirname [file normalize [info script]]]
    } else {
	set library	[file dirname [info script]] ;# no "file normalize" yet
    }

    #
    # Creates a new scrollarea/scrollsync/scrollableframe widget:
    #
    namespace export	scrollarea scrollsync scrollableframe

    #
    # Queries the scrollarea/scrollsync to which a given widget belongs:
    #
    namespace export	getscrollarea getscrollsync

    #
    # Public procedures for mouse wheel event handling in
    # scrollable widgets and scrollable widget containers:
    #
    namespace export	addMouseWheelSupport createWheelEventBindings \
			enableScrollingByWheel adaptWheelEventHandling \
			setFocusCheckWindow focusCheckWindow
}

package provide scrollutil::common $::scrollutil::version

#
# The following procedure, invoked in "scrollutil.tcl" and
# "scrollutil_tile.tcl", sets the variable ::scrollutil::usingTile to the given
# value and sets a trace on this variable.
#
proc ::scrollutil::useTile {bool} {
    variable usingTile $bool
    trace variable usingTile wu [list ::scrollutil::restoreUsingTile $bool]
}

#
# The following trace procedure is executed whenever the variable
# ::scrollutil::usingTile is written or unset.  It restores the variable to its
# original value, given by the first argument.
#
proc ::scrollutil::restoreUsingTile {origVal varName index op} {
    variable usingTile $origVal
    switch $op {
	w {
	    return -code error "it is not supported to use both Scrollutil and\
				Scrollutil_tile in the same application"
	}
	u {
	    trace variable usingTile wu \
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
