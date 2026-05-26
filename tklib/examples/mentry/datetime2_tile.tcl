#! /usr/bin/env tclsh

#==============================================================================
# Demo:	mentry::dateTimeMentry, mentry::putClockVal, mentry::getClockVal.
#
# Copyright (c) 2008-2023  Csaba Nemethi (E-mail: csaba.nemethi@t-online.de)
#==============================================================================

package require Tk
package require mentry_tile

set title "Date & Time"
wm title . $title

#
# Add some entries to the Tk option database
#
source [file join [file dirname [info script]] option_tile.tcl]

#
# Improve the window's appearance by using a tile
# frame as a container for the other widgets
#
ttk::frame .base

#
# Date and time formats supported by this demo
# script and the corresponding field separators
#
array set dateFmts {0 mdy  1 dmy  2 Ymd}
array set dateSeps {0 /    1 .    2 -  }
array set timeFmts {0 IMS  1 HMS}
array set timeSeps {0 :    1 :  }

#
# Choose the date & time formats; don't use the %p field descriptor
# for displaying the AM/PM indicator, because it doesn't
# work on UNIX if Tcl/Tk is used in a non-default locale
#
wm withdraw .
set clockVal [clock seconds]
if {[clock format $clockVal -format "%H"] < 12} {
    set meridian AM
} else {
    set meridian PM
}
set dateIdx [tk_dialog .choice $title "Please choose a date format" {} -1 \
		       [clock format $clockVal -format "%m/%d/%y"] \
		       [clock format $clockVal -format "%d.%m.%y"] \
		       [clock format $clockVal -format "%Y-%m-%d"]]
set timeIdx [tk_dialog .choice $title "Please choose a time format" {} -1 \
		       [clock format $clockVal -format "%I:%M:%S $meridian"] \
		       [clock format $clockVal -format "%H:%M:%S"]]
wm deiconify .

#
# Frame .base.f with a mentry displaying the date & time
#
ttk::frame .base.f
ttk::label .base.f.l -text "Date & time: "
mentry::dateTimeMentry .base.f.me $dateFmts($dateIdx)$timeFmts($timeIdx) \
		       $dateSeps($dateIdx) $timeSeps($timeIdx) -justify center
pack .base.f.l .base.f.me -side left

#
# Message strings corresponding to the values
# returned by mentry::getClockVal on failure
#
array set msgs {
    EMPTY	"Field value missing"
    BAD		"Invalid field value"
    BAD_DATE	"Invalid date"
    BAD_YEAR	"Unsupported year"
}

#
# Button .base.get invoking the procedure mentry::getClockVal
#
ttk::button .base.get -text "Get from mentry" -command {
    if {[catch {
	set dateTime ""
	set clockVal [mentry::getClockVal .base.f.me]
	set dateTime [clock format $clockVal -format "%c"]
    } result] != 0} {
	bell
	tk_messageBox -icon error -message $msgs($result) \
		      -title $title -type ok
    }
}

#
# Label .base.dateTime displaying the result of mentry::getClockVal
#
ttk::label .base.dateTime -textvariable dateTime

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
pack .base.dateTime -padx 7p -pady 7p
pack .base -expand yes -fill both

set clockVal [clock seconds]
mentry::putClockVal $clockVal .base.f.me
focus [.base.f.me entrypath 0]
