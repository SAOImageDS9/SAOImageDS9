##+##########################################################################
#
# datefield.tcl
#
# Implements a datefield entry widget ala Iwidget::datefield
# by Keith Vetter (keith@ebook.gemstar.com)
#
# Datefield creates an entry widget but with a special binding to KeyPress
# (based on Iwidget::datefield) to ensure that the current value is always
# a valid date. All normal entry commands and configurations still work.
#
# Usage:
#  ::datefield::datefield .df -background yellow -textvariable myDate \
#   -format "%Y-%m-%d"
#  pack .df
#
# Bugs:
#   o won't work if you programmatically put in an invalid date
#     e.g. .df insert end "abc"	  will cause it to behave erratically
#
# Revisions:
# KPV	Feb 07, 2002	- initial revision
# TW	Mar 26, 2017	- support more keys and the mouse wheel
#			- add option -format to support 3 date-styles:
#				"%d.%m.%Y" (for German)
#				"%m/%d/%Y" (for English, standard)
#				"%Y-%m-%d" (for ISO)
#
##+##########################################################################
#############################################################################

package require Tk 8.0
package provide datefield 0.3

namespace eval ::datefield {
    namespace export datefield

    # Have the widget use tile/ttk should it be available.

    variable entry entry
    if {![catch {
	package require tile
    }]} {
	set entry ttk::entry
    }

    proc datefield {w args} {
	variable entry
	variable Format
	variable Separator

	set i [lsearch $args "-form*"]
	if {$i == -1} {		# Default English
	    set Format($w) "%m/%d/%Y"
	} else {
	    set Format($w) [lindex [lreplace $args $i $i] $i]
	    switch -- $Format($w) {
		"%d.%m.%Y" {	# German
		}
		"%m/%d/%Y" {	# English
		}
		"%Y-%m-%d" {	# ISO
		}
		default {	# Error
		    error "ERROR: Unknown value for option -format on datefield $w $args"
		}
	    }
	    set args [lreplace $args $i $i]
	    set args [lreplace $args $i $i]
	}
	set Separator($w) [string range $Format($w) 2 2]
	eval $entry $w -width 10 -justify center $args
	if {([$w get] eq "") \
	 || [catch {clock scan [$w get] -format $Format($w)} base]} {
	    $w delete 0 end
	    $w insert end [clock format [clock seconds] -format $Format($w)]
	}
	$w icursor 0
	bind $w <KeyPress>	 [list ::datefield::KeyPress $w %A %K %s]
	bind $w <MouseWheel>	 [list ::datefield::MouseWheel $w %D]
	bind $w <Button1-Motion> break
	bind $w <Button2-Motion> break
	bind $w <Double-Button>	 break
	bind $w <Triple-Button>	 break
	bind $w <2>		 break
	return $w
    }

    proc Spin {w dir unit code} {
	variable Format

	set base [clock scan [$w get] -format $Format($w)]
	set new [clock add $base $dir $unit]
	set date [clock format $new -format $Format($w)]
	set icursor [$w index insert]
	$w delete 0 end
	$w insert end $date
	$w icursor $icursor
	return $code
    }

    proc MouseWheel {w dir} {
	$w selection clear
	set Dir [expr {$dir / 120}]
	return -code [Spin $w $Dir "day" continue]
    }

    # internal routine for all key presses in the datefield entry widget
    proc KeyPress {w char sym state} {
	variable Format
	variable Separator

	proc Move {w dir} {
	    variable Format

	    set icursor [$w index insert]
	    set icursor [expr {($icursor + 10 + $dir) % 10}]
	    if {$Format($w) ne "%Y-%m-%d"} {			# English or German
		if {($icursor == 2) || ($icursor == 5)} {		# Don't land on a / or .
		    set icursor [expr {($icursor + 10 + $dir) % 10}]
		}
	    } \
	    elseif {($icursor == 4) || ($icursor == 7)} {	# ISO	# Don't land on a -
		set icursor [expr {($icursor + 10 + $dir) % 10}]
	    }
	    $w icursor $icursor
	}

	set icursor [$w index insert]
	$w selection clear
	# Handle some non-number characters first
	switch -exact -- $sym {
	    "Down"	{return -code [Spin $w -1 "day"		continue]}
	    "End"	{$w icursor 9;		return -code	break}
	    "minus"	{return -code [Spin $w -1 "day"		break]}
	    "Next"	{return -code [Spin $w -1 "month"	continue]}
	    "plus"	{return -code [Spin $w 1 "day"		break]}
	    "Prior"	{return -code [Spin $w 1 "month"	continue]}
	    "Up"	{return -code [Spin $w 1 "day"		continue]}
	    "BackSpace"	-
	    "Delete"	-
	    "Left"	{Move $w -1;		return -code	break}
	    "Right"	{Move $w 1;		return -code	break}
	    "Tab"		{
		if {$Format($w) ne "%Y-%m-%d"} {	# English or German
		    if {($state & 5) == 0} {		# ->|
			if {$icursor < 3} {	# from 1st to 2nd
			    $w icursor 3
			} \
			elseif {$icursor < 6} {	# from 2nd to 10th-year
			    $w icursor 8
			} else {		# next widget
			    return -code continue
			}
		    } \
		    elseif {$icursor > 4} {		# |<-
			$w icursor 3		;# from year to 2nd
		    } \
		    elseif {$icursor > 1} {	# from 2nd to 1st
			$w icursor 0
		    } else {			# previous widget
			return -code continue
		    }
		} \
		elseif {($state & 5) == 0} {		# ->|	ISO
		    if {$icursor < 5} {		# from year to month
			$w icursor 5
		    } \
		    elseif {$icursor < 8} {	# from month to day
			$w icursor 8
		    } else {			# next widget
			return -code continue
		    }
		} \
		elseif {$icursor > 6} {			# |<-
		    $w icursor 5		;# from day to month
		} \
		elseif {$icursor > 2} {		# from month to 10th-year
		    $w icursor 2
		} else {			# previous widget
		    return -code continue
		}
		return -code break
	    }
	}
	if {$char eq ""} {			# remaining special keys
	    return -code continue
	}
	if {! [regexp -- {[0-9]} $char]} {	# Unknown character
	    bell
	    return -code break
	}
	if {$icursor >= 10} {			# Can't add beyond end
	    bell
	    return -code break
	}
	switch -- $Separator($w) {
	    "." {	# German
		foreach {day month year} [split [$w get] $Separator($w)] break
		if {$icursor < 2} {			# DAY SECTION
		    set endday [lastDay $month $year]
		    foreach {d1 d2} [split $day ""] break
		    set cursor 3		;# Where to leave the cursor
		    if {$icursor == 0} {	# 1st digit of day
			if {($char < 3) \
			 || (($char == 3) && ($month ne "02"))} {
			    set day "$char$d2"
			    if {$day eq "00"} {set day "01"}
			    if {$day > $endday} {set day $endday}
			    set cursor 1
			} else {
			    set day "0$char"
			}
		    } else {			# 2nd digit of day
			set day "$d1$char"
			if {($day > $endday) || ($day eq "00")} {
			    bell
			    return -code break
			}
		    }
		    $w delete 0 2
		    $w insert 0 $day
		    $w icursor $cursor
		    return -code break
		}
		if {$icursor < 5} {			# MONTH SECTION
		    foreach {m1 m2} [split $month ""] break
		    set cursor 6		;# Where to leave the cursor
		    if {$icursor == 3} {	# 1st digit of month
			if {$char < 2} {
			    set month "$char$m2"
			    set cursor 4
			} else {
			    set month "0$char"
			}
			if {$month > 12} {set month "10"}
			if {$month eq "00"} {set month "01"}
		    } else {			# 2nd digit of month
			set month "$m1$char"
			if {$month > 12} {set month "0$char"}
			if {$month eq "00"} {
			    bell
			    return -code break
			}
		    }
		    $w delete 3 5
		    $w insert 3 $month
		    # Validate the day of the month
		    if {$day > [set endday [lastDay $month $year]]} {
			$w delete 0 2
			$w insert 0 $endday
		    }
		    $w icursor $cursor
		    return -code break
		}
		set y1 [string range $year 0 0];	# YEAR SECTION
		if {$icursor < 7} {		# 1st digit of year
		    if {($char ne "1") && ($char ne "2")} {
			bell
			return -code break
		    }
		    if {$char != $y1} {		# Different century
			set y 1999
			if {$char eq "2"} {set y 2000}
			$w delete 6 end
			$w insert end $y
		    }
		    $w icursor 7
		    return -code break
		}
		$w delete $icursor
		$w insert $icursor $char
		if {[catch {clock scan [$w get] -format $Format($w)}] != 0} {	# Validate the year
		    $w delete 6 end
		    $w insert end $year		;# Put back in the old year
		    $w icursor $icursor
		    bell
		}
	    }
	    "/" {	# English
		foreach {month day year} [split [$w get] $Separator($w)] break
		if {$icursor < 2} {			# MONTH SECTION
		    foreach {m1 m2} [split $month ""] break
		    set cursor 3		;# Where to leave the cursor
		    if {$icursor == 0} {	# 1st digit of month
			if {$char < 2} {
			    set month "$char$m2"
			    set cursor 1
			} else {
			    set month "0$char"
			}
			if {$month > 12} {set month "10"}
			if {$month eq "00"} {set month "01"}
		    } else {			# 2nd digit of month
			set month "$m1$char"
			if {$month > 12} {set month "0$char"}
			if {$month eq "00"} {
			    bell
			    return -code break
			}
		    }
		    $w delete 0 2
		    $w insert 0 $month
		    # Validate the day of the month
		    if {$day > [set endday [lastDay $month $year]]} {
			$w delete 3 5
			$w insert 3 $endday
		    }
		    $w icursor $cursor
		    return -code break
		}
		if {$icursor < 5} {			# DAY SECTION
		    set endday [lastDay $month $year]
		    foreach {d1 d2} [split $day ""] break
		    set cursor 6		;# Where to leave the cursor
		    if {$icursor == 3} {	# 1st digit of day
			if {($char < 3) \
			 || (($char == 3) && ($month ne "02"))} {
			    set day "$char$d2"
			    if {$day eq "00"} {set day "01"}
			    if {$day > $endday} {set day $endday}
			    set cursor 4
			} else {
			    set day "0$char"
			}
		    } else {			# 2nd digit of day
			set day "$d1$char"
			if {($day > $endday) || ($day eq "00")} {
			    bell
			    return -code break
			}
		    }
		    $w delete 3 5
		    $w insert 3 $day
		    $w icursor $cursor
		    return -code break
		}
		set y1 [string range $year 0 0];	# YEAR SECTION
		if {$icursor < 7} {		# 1st digit of year
		    if {($char ne "1") && ($char ne "2")} {
			bell
			return -code break
		    }
		    if {$char != $y1} {		# Different century
			set y 1999
			if {$char eq "2"} {set y 2000}
			$w delete 6 end
			$w insert end $y
		    }
		    $w icursor 7
		    return -code break
		}
		$w delete $icursor
		$w insert $icursor $char
		if {[catch {clock scan [$w get] -format $Format($w)}] != 0} {	# Validate the year
		    $w delete 6 end
		    $w insert end $year		;# Put back in the old year
		    $w icursor $icursor
		    bell
		}
	    }
	    default {	# ISO
		foreach {year month day} [split [$w get] $Separator($w)] break
		if {$icursor < 4} {			# YEAR SECTION
		    set y1 [string range $year 0 0];
		    if {$icursor == 0} {	# 1st digit of year
			if {($char ne "1") && ($char ne "2")} {
			    bell
			    return -code break
			}
			if {$char != $y1} {	# Different century
			    set y 1999
			    if {$char eq "2"} {set y 2000}
			    $w delete 0 4
			    $w insert 0 $y
			}
			$w icursor 1
			return -code break
		    }
		    $w delete $icursor
		    $w insert $icursor $char
		    if {[catch {clock scan [$w get] -format $Format($w)}] != 0} {	# Validate the year
			$w delete 0 4
			$w insert 0 $year	;# Put back in the old year
			$w icursor $icursor
			bell
		    }
		    if {$icursor == 3} {	# last digit of year
			$w icursor 5	;# Don't land on a -
		    }
		    return -code break
		}
		if {$icursor < 7} {			# MONTH SECTION
		    foreach {m1 m2} [split $month ""] break
		    set cursor 8		;# Where to leave the cursor
		    if {$icursor == 5} {	# 1st digit of month
			if {$char < 2} {
			    set month "$char$m2"
			    set cursor 6
			} else {
			    set month "0$char"
			}
			if {$month > 12} {set month "10"}
			if {$month eq "00"} {set month "01"}
		    } else {			# 2nd digit of month
			set month "$m1$char"
			if {$month > 12} {set month "0$char"}
			if {$month eq "00"} {
			    bell
			    return -code break
			}
		    }
		    $w delete 5 7
		    $w insert 5 $month
		    # Validate the day of the month
		    if {$day > [set endday [lastDay $month $year]]} {
			$w delete 8 end
			$w insert end $endday
		    }
		    $w icursor $cursor
		    return -code break
		}
		set endday [lastDay $month $year]	;# DAY SECTION
		foreach {d1 d2} [split $day ""] break
		set cursor 10			;# Where to leave the cursor
		if {$icursor == 8} {		# 1st digit of day
		    if {($char < 3) \
		     || (($char == 3) && ($month ne "02"))} {
			set day "$char$d2"
			if {$day eq "00"} {set day "01"}
			if {$day > $endday} {set day $endday}
			set cursor 9
		    } else {
			set day "0$char"
		    }
		} else {			# 2nd digit of day
		    set day "$d1$char"
		    if {($day > $endday) || ($day eq "00")} {
			bell
			return -code break
		    }
		}
		$w delete 8 end
		$w insert end $day
		$w icursor $cursor
	    }
	}
	return -code break
    }

    # internal routine that returns the last valid day of a given month and year
    proc lastDay {month year} {
	return [clock format [clock scan "+1 month -1 day" \
	 -base [clock scan "$month/01/$year"]] -format %d]
    }
}
