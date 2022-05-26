#!/usr/bin/env wish

#==============================================================================
# Demo:	mentry::dateMentry, mentry::timeMentry, mentry::putClockVal,
#	mentry::getClockVal.
#
# Copyright (c) 1999-2019  Csaba Nemethi (E-mail: csaba.nemethi@t-online.de)
#==============================================================================

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
# for displaying the AM/PM indicator, because it doesn't work on
# UNIX if Tcl/Tk 8.4 or higher is used in a non-default locale
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
# Frame .base.f with mentries displaying the date & time
#
ttk::frame .base.f
ttk::label .base.f.lDate -text "Date: "
mentry::dateMentry .base.f.date $dateFmts($dateIdx) $dateSeps($dateIdx) \
		   -justify center
ttk::frame .base.f.gap -width 10
ttk::label .base.f.lTime -text "Time: "
mentry::timeMentry .base.f.time $timeFmts($timeIdx) $timeSeps($timeIdx) \
		   -justify center
pack .base.f.lDate .base.f.date .base.f.gap .base.f.lTime .base.f.time \
     -side left

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
ttk::button .base.get -text "Get from mentries" -command {
    if {[catch {
	set dateTime ""
	set base [mentry::getClockVal .base.f.date]
	set clockVal [mentry::getClockVal .base.f.time -base $base]
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
ttk::label .base.dateTime -textvariable dateTime -background white

#
# Separator .base.sep and button .base.close
#
ttk::separator .base.sep -orient horizontal
ttk::button .base.close -text Close -command exit

#
# Manage the widgets
#
pack .base.close -side bottom -pady 10
pack .base.sep -side bottom -fill x
pack .base.f -padx 10 -pady 10
pack .base.get -padx 10
pack .base.dateTime -padx 10 -pady 10
pack .base -expand yes -fill both

set clockVal [clock seconds]
mentry::putClockVal $clockVal .base.f.date
mentry::putClockVal $clockVal .base.f.time
focus [.base.f.date entrypath 0]
