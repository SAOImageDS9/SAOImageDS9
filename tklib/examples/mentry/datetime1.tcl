#!/usr/bin/env wish

#==============================================================================
# Demo:	mentry::dateMentry, mentry::timeMentry, mentry::putClockVal,
#	mentry::getClockVal.
#
# Copyright (c) 1999-2019  Csaba Nemethi (E-mail: csaba.nemethi@t-online.de)
#==============================================================================

package require mentry

set title "Date & Time"
wm title . $title

#
# Add some entries to the Tk option database
#
source [file join [file dirname [info script]] option.tcl]

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
# Frame .f with mentries displaying the date & time
#
frame .f
label .f.lDate -text "Date: "
mentry::dateMentry .f.date $dateFmts($dateIdx) $dateSeps($dateIdx) \
		   -justify center -background white
frame .f.gap -width 10
label .f.lTime -text "Time: "
mentry::timeMentry .f.time $timeFmts($timeIdx) $timeSeps($timeIdx) \
		   -justify center -background white
pack .f.lDate .f.date .f.gap .f.lTime .f.time -side left

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
# Button .get invoking the procedure mentry::getClockVal
#
button .get -text "Get from mentries" -command {
    if {[catch {
	set dateTime ""
	set base [mentry::getClockVal .f.date]
	set clockVal [mentry::getClockVal .f.time -base $base]
	set dateTime [clock format $clockVal -format "%c"]
    } result] != 0} {
	bell
	tk_messageBox -icon error -message $msgs($result) \
		      -title $title -type ok
    }
}

#
# Label .dateTime displaying the result of mentry::getClockVal
#
label .dateTime -textvariable dateTime -background white

#
# Frame .sep and button .close
#
frame .sep -height 2 -bd 1 -relief sunken
button .close -text Close -command exit

#
# Manage the widgets
#
pack .close -side bottom -pady 10
pack .sep -side bottom -fill x
pack .f -padx 10 -pady 10
pack .get -padx 10
pack .dateTime -padx 10 -pady 10

set clockVal [clock seconds]
mentry::putClockVal $clockVal .f.date
mentry::putClockVal $clockVal .f.time
focus [.f.date entrypath 0]
