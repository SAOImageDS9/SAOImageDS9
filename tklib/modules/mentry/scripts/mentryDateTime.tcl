#==============================================================================
# Contains the implementation of multi-entry widgets for date and time.
#
# Copyright (c) 1999-2019  Csaba Nemethi (E-mail: csaba.nemethi@t-online.de)
#==============================================================================

#
# Namespace initialization
# ========================
#

namespace eval mentry {
    #
    # Min. and max. values of date/time components
    #
    variable dateTimeMins
    variable dateTimeMaxs
    array set dateTimeMins {d 1   m 1   y 0   Y 0     H 0   I 1   M 0   S 0}
    array set dateTimeMaxs {d 31  m 12  y 99  Y 9999  H 23  I 12  M 59  S 59}

    #
    # Define some bindings for the binding
    # tags MentryDateTime and MentryMeridian
    #
    bind MentryDateTime <Up>	{ mentry::incrDateTimeComp %W  1 }
    bind MentryDateTime <Down>	{ mentry::incrDateTimeComp %W -1 }
    bind MentryDateTime <Prior>	{ mentry::incrDateTimeComp %W  10 }
    bind MentryDateTime <Next>	{ mentry::incrDateTimeComp %W -10 }
    bind MentryMeridian <Up>	{ mentry::setMeridian %W "P" }
    bind MentryMeridian <Down>	{ mentry::setMeridian %W "A" }
    bind MentryMeridian <Prior>	{ mentry::setMeridian %W "P" }
    bind MentryMeridian <Next>	{ mentry::setMeridian %W "A" }
    variable winSys
    catch {
	if {[string compare $winSys "classic"] == 0 ||
	    [string compare $winSys "aqua"] == 0} {
	    bind MentryDateTime <MouseWheel> {
		mentry::incrDateTimeComp %W %D
	    }
	    bind MentryDateTime <Option-MouseWheel> {
		mentry::incrDateTimeComp %W [expr {10 * %D}]
	    }
	} else {
	    bind MentryDateTime <MouseWheel> {
		mentry::incrDateTimeComp %W [expr {%D / 120}]
	    }
	}
	bind MentryMeridian <MouseWheel> {
	    mentry::setMeridian %W [expr {(%D < 0) ? "A" : "P"}]
	}
    }
    if {[string compare $winSys "x11"] == 0} {
	bind MentryDateTime <Button-4> {
	    if {!$tk_strictMotif} {
		mentry::incrDateTimeComp %W 1
	    }
	}
	bind MentryDateTime <Button-5> {
	    if {!$tk_strictMotif} {
		mentry::incrDateTimeComp %W -1
	    }
	}
	bind MentryMeridian <Button-4> {
	    if {!$tk_strictMotif} {
		mentry::setMeridian %W "P"
	    }
	}
	bind MentryMeridian <Button-5> {
	    if {!$tk_strictMotif} {
		mentry::setMeridian %W "A"
	    }
	}
    }
}

#
# Multi-entry widgets for date & time
# ===================================
#

#------------------------------------------------------------------------------
# mentry::dateMentry
#
# Creates a new mentry widget win that allows to display and edit a date
# according to the argument fmt, which must be a string of length 3, consisting
# of the letters d for the day (01 - 31), m for the month (01 - 12), and y or Y
# for the year without century (00 - 99) or with century (e.g., 1999), in an
# arbitrary order.  sep specifies the text to be displayed in the labels
# separating the entry children of the mentry widget.  Sets the type attribute
# of the widget to Date, saves the value of fmt in its format attribute, and
# returns the name of the newly created widget.
#------------------------------------------------------------------------------
proc mentry::dateMentry {win fmt sep args} {
    #
    # Parse the fmt argument
    #
    if {![regexp {^([dmyY])([dmyY])([dmyY])$} $fmt dummy \
		 fields(0) fields(1) fields(2)]} {
	return -code error \
	       "bad format \"$fmt\": must be a string of length 3,\
		consisting of the letters d, m, and y or Y"
    }

    #
    # Check whether all the three date components are represented in fmt
    #
    for {set n 0} {$n < 3} {incr n} {
	set lfields($n) [string tolower $fields($n)]
    }
    if {[string compare $lfields(0) $lfields(1)] == 0 ||
	[string compare $lfields(0) $lfields(2)] == 0 ||
	[string compare $lfields(1) $lfields(2)] == 0} {
	return -code error \
	       "bad format \"$fmt\": must have unique components for the\
		day, month, and year"
    }

    #
    # Create the widget, set its type to Date, and save the format string
    #
    eval [list mentry $win] $args
    array set widths {d 2  m 2  y 2  Y 4}
    ::$win configure -body [list $widths($fields(0)) $sep $widths($fields(1)) \
				 $sep $widths($fields(2))]
    ::$win attrib type Date format $fmt

    #
    # In each entry child allow only unsigned integers of the corresp.
    # max. values, and insert the binding tag MentryDateTime in the
    # list of binding tags of the entry, just after its path name
    #
    variable dateTimeMaxs
    for {set n 0} {$n < 3} {incr n} {
	::$win adjustentry $n "0123456789"
	set w [::$win entrypath $n]
	wcb::cbappend $w before insert \
		      "wcb::checkEntryForUInt $dateTimeMaxs($fields($n))"
	bindtags $w [linsert [bindtags $w] 1 MentryDateTime]
    }

    return $win
}

#------------------------------------------------------------------------------
# mentry::timeMentry
#
# Creates a new mentry widget win that allows to display and edit a time
# according to the argument fmt, which must be a string of length 2 or 3,
# consisting of the following field descriptor characters of the clock format
# command: H or I, followed by M, and optionally the letter S.  An H as first
# character specifies the time format %H:%M or %H:%M:%S, while the letter I
# stands for %I:%M %p or %I:%M:%S %p.  sep specifies the text to be displayed
# in the labels separating the entry children of the mentry widget.  Sets the
# type attribute of the widget to Time, saves the value of fmt in its format
# attribute, and returns the name of the newly created widget.
#------------------------------------------------------------------------------
proc mentry::timeMentry {win fmt sep args} {
    #
    # Parse the fmt argument
    #
    if {![regexp {^(H|I)(M)(S?)$} $fmt dummy fields(0) fields(1) fields(2)]} {
	return -code error \
	       "bad format \"$fmt\": must be a string of length 2 or 3\
		starting with H or I, followed by M and optionally by S"
    }

    #
    # Create the widget, set its type to Time, and save the format
    # string.  If the AM/PM indicator is needed, devide it into
    # an entry (containing A or P) and a label (displaying M)
    #
    eval [list mentry $win] $args
    set len [string length $fmt]
    set body [list 2 $sep 2]
    if {$len == 3} {
	lappend body $sep 2
    }
    if {[string compare $fields(0) "I"] == 0} {
	lappend body " " 1 M
    }
    ::$win configure -body $body
    ::$win attrib type Time format $fmt

    #
    # In each of the first len entry children allow only unsigned integers
    # of the corresp. max. values, and insert the binding tag MentryDateTime
    # in the list of binding tags of the entry, just after its path name
    #
    variable dateTimeMaxs
    for {set n 0} {$n < $len} {incr n} {
	::$win adjustentry $n "0123456789"
	set w [::$win entrypath $n]
	wcb::cbappend $w before insert \
		      "wcb::checkEntryForUInt $dateTimeMaxs($fields($n))"
	bindtags $w [linsert [bindtags $w] 1 MentryDateTime]
    }

    #
    # In the entry child containing the first character of the AM/PM
    # indicator (if present) install automatic uppercase conversion,
    # allow only the characters A and P, insert the binding tag
    # MentryMeridian in the list of binding tags of the entry, just
    # after its path name, and make the entry right-justified
    #
    if {[string compare $fields(0) "I"] == 0} {
	::$win adjustentry $len "AP"
	set w [::$win entrypath $len]
	wcb::cbappend $w before insert \
		      wcb::convStrToUpper {wcb::checkStrForRegExp {^[AP]$}}
	bindtags $w [linsert [bindtags $w] 1 MentryMeridian]
	$w configure -justify right
    }

    return $win
}

#------------------------------------------------------------------------------
# mentry::dateTimeMentry
#
# Creates a new mentry widget win that allows to display and edit a date & time
# according to the argument fmt, which must be a string of length 5 or 6, with
# the first 3 characters consisting of the letters d for the day (01 - 31), m
# for the month (01 - 12), and y or Y for the year without century (00 - 99) or
# with century (e.g., 1999), in an arbitrary order, followed by 2 or 3 field
# descriptor characters of the clock format command, which must be: H or I,
# then M, and optionally the letter S.  An H specifies the time format %H:%M or
# %H:%M:%S, while the letter I stands for %I:%M %p or %I:%M:%S %p.  dateSep and
# timeSep specify the texts to be displayed in the labels separating the entry
# children of the mentry widget in the date and time parts, respectively (which
# in turn are separated from each other by a space character).  Sets the type
# attribute of the widget to DateTime, saves the value of fmt in its format
# attribute, and returns the name of the newly created widget.
#------------------------------------------------------------------------------
proc mentry::dateTimeMentry {win fmt dateSep timeSep args} {
    #
    # Parse the fmt argument
    #
    if {![regexp {^([dmyY])([dmyY])([dmyY])(H|I)(M)(S?)$} $fmt dummy \
		 fields(0) fields(1) fields(2) fields(3) fields(4) fields(5)]} {
	return -code error \
	       "bad format \"$fmt\": must be a string of length 5 or 6,\
	        with the first 3 characters consisting of the letters d, m,\
		and y or Y, followed by H or I, then M, and optionally by S"
    }

    #
    # Check whether all the three date components are represented in fmt
    #
    for {set n 0} {$n < 3} {incr n} {
	set lfields($n) [string tolower $fields($n)]
    }
    if {[string compare $lfields(0) $lfields(1)] == 0 ||
	[string compare $lfields(0) $lfields(2)] == 0 ||
	[string compare $lfields(1) $lfields(2)] == 0} {
	return -code error \
	       "bad format \"$fmt\": must have unique components for the\
		day, month, and year"
    }

    #
    # Create the widget, set its type to DateTime, and save the
    # format string. If the AM/PM indicator is needed, devide it
    # into  an entry (containing A or P) and a label (displaying M)
    #
    eval [list mentry $win] $args
    array set widths {d 2  m 2  y 2  Y 4}
    set len [string length $fmt]
    set body [list $widths($fields(0)) $dateSep $widths($fields(1)) $dateSep \
		   $widths($fields(2)) " " 2 $timeSep 2]
    if {$len == 6} {
	lappend body $timeSep 2
    }
    if {[string compare $fields(3) "I"] == 0} {
	lappend body " " 1 M
    }
    ::$win configure -body $body
    ::$win attrib type DateTime format $fmt

    #
    # In each of the first len entry children allow only unsigned integers
    # of the corresp. max. values, and insert the binding tag MentryDateTime
    # in the list of binding tags of the entry, just after its path name
    #
    variable dateTimeMaxs
    for {set n 0} {$n < $len} {incr n} {
	::$win adjustentry $n "0123456789"
	set w [::$win entrypath $n]
	wcb::cbappend $w before insert \
		      "wcb::checkEntryForUInt $dateTimeMaxs($fields($n))"
	bindtags $w [linsert [bindtags $w] 1 MentryDateTime]
    }

    #
    # In the entry child containing the first character of the AM/PM
    # indicator (if present) install automatic uppercase conversion,
    # allow only the characters A and P, insert the binding tag
    # MentryMeridian in the list of binding tags of the entry, just
    # after its path name, and make the entry right-justified
    #
    if {[string compare $fields(3) "I"] == 0} {
	::$win adjustentry $len "AP"
	set w [::$win entrypath $len]
	wcb::cbappend $w before insert \
		      wcb::convStrToUpper {wcb::checkStrForRegExp {^[AP]$}}
	bindtags $w [linsert [bindtags $w] 1 MentryMeridian]
	$w configure -justify right
    }

    return $win
}

#------------------------------------------------------------------------------
# mentry::putClockVal
#
# Outputs the date, time, or date & time corresponding to the integer clockVal
# to the mentry widget win of type Date, Time, or DateTime.  The keyword args
# stands for ?-gmt boolean?, like in the clock format command.
#------------------------------------------------------------------------------
proc mentry::putClockVal {clockVal win args} {
    #
    # Check whether clockVal is an integer number
    #
    if {[catch {format "%d" $clockVal} res] != 0} {
	return -code error $res
    }

    set type [checkIfDateOrTimeMentry $win]
    set usage "putClockVal clockValue pathName ?-gmt boolean?"

    #
    # Check the number of optional arguments
    #
    set count [llength $args]
    if {$count != 0 && $count != 2} {
	mwutil::wrongNumArgs $usage
    }

    #
    # Parse the command line
    #
    set useGMT 0
    foreach {opt val} $args {
	if {[string compare $opt "-gmt"] == 0} {
	    #
	    # Get the boolean value specified by val
	    #
	    if {[catch {expr {$val ? 1 : 0}} useGMT] != 0} {
		return -code error $useGMT
	    }
	} else {
	    mwutil::wrongNumArgs $usage
	}
    }

    set fmt [::$win attrib format]

    #
    # For each entry child of win, format clockVal according
    # to the corresponding field descriptor character contained
    # in fmt and to useGMT, and output the result to the entry
    #
    set len [string length $fmt]
    for {set n 0} {$n < $len} {incr n} {
	set field [string index $fmt $n]
	::$win put $n [clock format $clockVal -format %$field -gmt $useGMT]
    }

    switch $type {
	Date	 { return "" }
	Time	 { set idx 0 }
	DateTime { set idx 3 }
    }

    #
    # In the entry child containing the first character of
    # the AM/PM indicator (if present), display the first
    # character of the corresponding time component
    #
    if {[string compare [string index $fmt $idx] "I"] == 0} {
	if {[clock format $clockVal -format "%H"] < 12} {
	    ::$win put $len A
	} else {
	    ::$win put $len P
	}
    }
}

#------------------------------------------------------------------------------
# mentry::getClockVal
#
# Returns the clock value corresponding to the date, time, or date & time
# contained in the mentry widget win of type Date, Time, or DateTime.  The
# keyword args stands for ?-base clockValue? ?-gmt boolean?, like in the clock
# scan command.
#------------------------------------------------------------------------------
proc mentry::getClockVal {win args} {
    set type [checkIfDateOrTimeMentry $win]
    set usage "getClockVal pathName ?-base clockValue? ?-gmt boolean?"

    #
    # Check the number of optional arguments
    #
    set count [llength $args]
    if {$count > 4} {
	mwutil::wrongNumArgs $usage
    }

    #
    # Parse the command line
    #
    set base [clock seconds]
    set useGMT 0
    foreach {opt val} $args {
	if {$count == 1} {
	    mwutil::wrongNumArgs $usage
	}
	if {[string compare $opt "-base"] == 0} {
	    #
	    # Check whether val is an integer number
	    #
	    if {[catch {format "%d" $val} res] != 0} {
		return -code error $res
	    }
	    set base $val
	} elseif {[string compare $opt "-gmt"] == 0} {
	    #
	    # Get the boolean value specified by val
	    #
	    if {[catch {expr {$val ? 1 : 0}} useGMT] != 0} {
		return -code error $useGMT
	    }
	} else {
	    mwutil::wrongNumArgs $usage
	}
	incr count -2
    }

    switch $type {
	Date	 { return [getClockValFromDateMentry     $win $base $useGMT] }
	Time	 { return [getClockValFromTimeMentry     $win $base $useGMT] }
	DateTime { return [getClockValFromDateTimeMentry $win $base $useGMT] }
    }
}

#
# Private procedures implementing the mentry widgets for date & time
# ==================================================================
#

#------------------------------------------------------------------------------
# mentry::checkIfDateOrTimeMentry
#
# Generates an error if win is not a mentry widget of type Date, Time, or
# DateTime.
#------------------------------------------------------------------------------
proc mentry::checkIfDateOrTimeMentry win {
    if {![winfo exists $win]} {
	return -code error "bad window path name \"$win\""
    }

    set type [::$win attrib type]
    if {[string compare [winfo class $win] "Mentry"] != 0 ||
	[string compare $type "Date"] != 0 &&
	[string compare $type "Time"] != 0 &&
	[string compare $type "DateTime"] != 0} {
	return -code error \
	       "window \"$win\" is not a mentry widget\
	        for date or time, or date & time"
    }

    return $type
}

#------------------------------------------------------------------------------
# mentry::getClockValFromDateMentry
#
# Returns the clock value corresponding to the date contained in the mentry
# widget win of type Date.
#------------------------------------------------------------------------------
proc mentry::getClockValFromDateMentry {win base useGMT} {
    #
    # Scan the contents of the entry children; generate an error if
    # any of them is empty or the value of the day or month is zero
    #
    set fmt [::$win attrib format]
    variable dateTimeMins
    for {set n 0} {$n < 3} {incr n} {
	set w [::$win entrypath $n]
	set str [$w get]
	if {[string length $str] == 0} {
	    focus $w
	    return -code error EMPTY
	}
	scan $str "%d" vals($n)
	set field [string index $fmt $n]
	if {$vals($n) < $dateTimeMins($field)} {
	    tabToEntry $w
	    return -code error BAD
	}
	set idxs($field) $n
    }

    #
    # Get the year, month, and day displayed in the widget
    #
    if {[info exists idxs(y)]} {
	set yearIdx $idxs(y)
	set year $vals($yearIdx)
	set yearStr [format "%02d" $year]
	set format %m/%d/%y
    } else {
	set yearIdx $idxs(Y)
	set year $vals($yearIdx)
	set yearStr [format "%04d" $year]
	set format %m/%d/%Y
    }
    set month $vals($idxs(m))
    set day   $vals($idxs(d))

    #
    # Check whether they represent a valid date
    #
    set dayList {0 31 28 31 30 31 30 31 31 30 31 30 31}
    if {($year % 4 == 0 && $year % 100 != 0) || $year % 400 == 0} {
	set dayList [lreplace $dayList 2 2 29]
    }
    if {$day > [lindex $dayList $month]} {
	set w [::$win entrypath 0]
	focus $w
	$w icursor 0
	return -code error BAD_DATE
    }

    #
    # Now we have a valid date: try to convert it to an integer clock
    # value; generate an error if this fails (because of the year)
    #
    set cmd [list clock scan $month/$day/$yearStr -base $base -gmt $useGMT]
    if {$::tcl_version >= 8.5} {
	lappend cmd -format $format
    }
    if {[catch {eval $cmd} res] == 0} {
	return $res
    } else {
	tabToEntry [::$win entrypath $yearIdx]
	return -code error BAD_YEAR
    }
}

#------------------------------------------------------------------------------
# mentry::getClockValFromTimeMentry
#
# Returns the clock value corresponding to the time contained in the mentry
# widget win of type Time.
#------------------------------------------------------------------------------
proc mentry::getClockValFromTimeMentry {win base useGMT} {
    #
    # Scan the contents of the numeric entry children;
    # generate an error if the first or second one is empty
    # or the value of the hour in 12-hour format is zero
    #
    set fmt [::$win attrib format]
    set len [string length $fmt]
    set meridianFlag [expr {[string compare [string index $fmt 0] "I"] == 0}]
    for {set n 0} {$n < $len} {incr n} {
	set w [::$win entrypath $n]
	set str [$w get]
	if {[string length $str] == 0} {
	    if {$n == 2} {
		set str 00
		::$win put $n 00
	    } else {
		focus $w
		return -code error EMPTY
	    }
	}
	if {$n == 0 && $meridianFlag} {
	    scan $str "%d" val
	    if {$val < 1} {
		tabToEntry $w
		return -code error BAD
	    }
	}
	if {$n > 0} {
	    append timeStr :
	}
	append timeStr $str
    }

    #
    # Generate an error if the entry that should
    # contain an A or P (if present) is empty
    #
    if {$meridianFlag} {
	set w [::$win entrypath $len]
	set str [$w get]
	if {[string length $str] == 0} {
	    focus $w
	    return -code error EMPTY
	}
	append timeStr " ${str}M"

	if {$len == 2} {
	    set format "%I:%M %p"
	} else {
	    set format "%I:%M:%S %p"
	}
    } else {
	if {$len == 2} {
	    set format "%H:%M"
	} else {
	    set format "%H:%M:%S"
	}
    }

    #
    # Convert the time string built from the contents
    # of the widget to an integer clock value
    #
    if {$::tcl_version >= 8.5} {
	return [clock scan $timeStr -base $base -gmt $useGMT -format $format]
    } else {
	return [clock scan $timeStr -base $base -gmt $useGMT]
    }
}

#------------------------------------------------------------------------------
# mentry::getClockValFromDateTimeMentry
#
# Returns the clock value corresponding to the date & time contained in the
# mentry widget win of type DateTime.
#------------------------------------------------------------------------------
proc mentry::getClockValFromDateTimeMentry {win base useGMT} {
    set fmt [::$win attrib format]

    #
    # Scan the contents of the first 3 entry children; generate an error
    # if any of them is empty or the value of the day or month is zero
    #
    variable dateTimeMins
    for {set n 0} {$n < 3} {incr n} {
	set w [::$win entrypath $n]
	set str [$w get]
	if {[string length $str] == 0} {
	    focus $w
	    return -code error EMPTY
	}
	scan $str "%d" vals($n)
	set field [string index $fmt $n]
	if {$vals($n) < $dateTimeMins($field)} {
	    tabToEntry $w
	    return -code error BAD
	}
	set idxs($field) $n
    }

    #
    # Get the year, month, and day displayed in the widget
    #
    if {[info exists idxs(y)]} {
	set yearIdx $idxs(y)
	set year $vals($yearIdx)
	set yearStr [format "%02d" $year]
	set format "%m/%d/%y "
    } else {
	set yearIdx $idxs(Y)
	set year $vals($yearIdx)
	set yearStr [format "%04d" $year]
	set format "%m/%d/%Y "
    }
    set month $vals($idxs(m))
    set day   $vals($idxs(d))

    #
    # Check whether they represent a valid date
    #
    set dayList {0 31 28 31 30 31 30 31 31 30 31 30 31}
    if {($year % 4 == 0 && $year % 100 != 0) || $year % 400 == 0} {
	set dayList [lreplace $dayList 2 2 29]
    }
    if {$day > [lindex $dayList $month]} {
	set w [::$win entrypath 0]
	focus $w
	$w icursor 0
	return -code error BAD_DATE
    }

    set dateTimeStr "$month/$day/$yearStr "

    #
    # Scan the contents of the remaining numeric entry children;
    # generate an error if the first or second one is empty
    # or the value of the hour in 12-hour format is zero
    #
    set len [string length $fmt]
    set meridianFlag [expr {[string compare [string index $fmt 3] "I"] == 0}]
    for {set n 3} {$n < $len} {incr n} {
	set w [::$win entrypath $n]
	set str [$w get]
	if {[string length $str] == 0} {
	    if {$n == 5} {
		set str 00
		::$win put $n 00
	    } else {
		focus $w
		return -code error EMPTY
	    }
	}
	if {$n == 3 && $meridianFlag} {
	    scan $str "%d" val
	    if {$val < 1} {
		tabToEntry $w
		return -code error BAD
	    }
	}
	if {$n > 3} {
	    append dateTimeStr :
	}
	append dateTimeStr $str
    }

    #
    # Generate an error if the entry that should
    # contain an A or P (if present) is empty
    #
    if {$meridianFlag} {
	set w [::$win entrypath $len]
	set str [$w get]
	if {[string length $str] == 0} {
	    focus $w
	    return -code error EMPTY
	}
	append dateTimeStr " ${str}M"

	if {$len == 5} {
	    append format "%I:%M %p"
	} else {
	    append format "%I:%M:%S %p"
	}
    } else {
	if {$len == 5} {
	    append format "%H:%M"
	} else {
	    append format "%H:%M:%S"
	}
    }

    #
    # Now we have a valid date & time: try to convert it to an integer
    # clock value; generate an error if this fails (because of the year)
    #
    set cmd [list clock scan $dateTimeStr -base $base -gmt $useGMT]
    if {$::tcl_version >= 8.5} {
	lappend cmd -format $format
    }
    if {[catch {eval $cmd} res] == 0} {
	return $res
    } else {
	tabToEntry [::$win entrypath $yearIdx]
	return -code error BAD_YEAR
    }
}

#
# Private procedures used in bindings related to mentry widgets for date & time
# =============================================================================
#

#------------------------------------------------------------------------------
# mentry::incrDateTimeComp
#
# This procedure handles <Up>, <Down>, <Prior>, and <Next> events in the entry
# child w of a mentry widget for date, time, or date & time.  It increments the
# entry's value by the specified amount if allowed.
#------------------------------------------------------------------------------
proc mentry::incrDateTimeComp {w amount} {
    parseChildPath $w win n
    set field [string index [::$win attrib format] $n]

    set str [$w get]
    if {[string length $str] == 0} {
	#
	# Insert the entry's min. value
	#
	variable dateTimeMins
	set str [format "%0[::$win entrylimit $n]d" $dateTimeMins($field)]
	_$w insert end $str
	_$w icursor 0
    } else {
	#
	# Increment the entry's value by the given amount if allowed
	#
	scan $str "%d" val
	if {$amount > 0} {
	    variable dateTimeMaxs
	    if {$val < $dateTimeMaxs($field)} {
		incr val $amount
		if {$val > $dateTimeMaxs($field)} {
		    set val $dateTimeMaxs($field)
		}
	    } else {
		return ""
	    }
	} else {
	    variable dateTimeMins
	    if {$val > $dateTimeMins($field)} {
		incr val $amount
		if {$val < $dateTimeMins($field)} {
		    set val $dateTimeMins($field)
		}
	    } else {
		return ""
	    }
	}
	set str [format "%0[::$win entrylimit $n]d" $val]
	set oldPos [$w index insert]
	_$w delete 0 end
	_$w insert end $str
	_$w icursor $oldPos
    }
}

#------------------------------------------------------------------------------
# mentry::setMeridian
#
# This procedure handles <Up>, <Down>, <Prior>, and <Next> events in the entry
# child w of a mentry widget for time or date & time displaying the first
# character of the AM/PM indicator.  It sets the entry's text to the specified
# value.
#------------------------------------------------------------------------------
proc mentry::setMeridian {w str} {
    if {[string length [$w get]] == 0} {
	#
	# Insert an "A"
	#
	_$w insert end A
	_$w icursor 0
    } else {
	#
	# Replace the entry's text with the given value
	#
	set oldPos [$w index insert]
	_$w delete 0 end
	_$w insert end $str
	_$w icursor $oldPos
    }
}
