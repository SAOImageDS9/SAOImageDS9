#==============================================================================
# Contains the implementation of a multi-entry widget for real numbers in
# fixed-point format.
#
# Copyright (c) 1999-2019  Csaba Nemethi (E-mail: csaba.nemethi@t-online.de)
#==============================================================================

#
# Public procedures
# =================
#

#------------------------------------------------------------------------------
# mentry::fixedPointMentry
#
# Creates a new mentry widget win that allows to display and edit real numbers
# in fixed-point format, with cnt1 characters before and cnt2 digits after the
# decimal point.  Sets the type attribute of the widget to FixedPoint and
# returns the name of the newly created widget.
#------------------------------------------------------------------------------
proc mentry::fixedPointMentry {win cnt1 cnt2 args} {
    #
    # Check the arguments
    #
    if {[catch {format "%d" $cnt1}] != 0 || $cnt1 <= 0} {
	return -code error "expected positive integer but got \"$cnt1\""
    }
    if {[catch {format "%d" $cnt2}] != 0 || $cnt2 <= 0} {
	return -code error "expected positive integer but got \"$cnt2\""
    }

    #
    # Change the default separator if the first optional argument is -comma
    #
    set sep .
    if {[string compare [lindex $args 0] "-comma"] == 0} {
	set sep ,
	set args [lrange $args 1 end]
    }

    #
    # Create the widget and set its type to FixedPoint
    #
    eval [list mentry $win] $args
    ::$win configure -body [list $cnt1 $sep $cnt2]
    ::$win attrib type FixedPoint

    #
    # Allow only integer input in the first entry child
    #
    ::$win adjustentry 0 "+-0123456789"
    set w [::$win entrypath 0]
    $w configure -justify right
    wcb::cbappend $w before insert wcb::checkEntryForInt

    #
    # Allow only decimal digits in the second entry child
    #
    ::$win adjustentry 1 "0123456789"
    set w [::$win entrypath 1]
    $w configure -justify left
    wcb::cbappend $w before insert wcb::checkStrForNum

    return $win
}

#------------------------------------------------------------------------------
# mentry::putReal
#
# Outputs the number num to the mentry widget win of type FixedPoint.
#------------------------------------------------------------------------------
proc mentry::putReal {num win} {
    checkIfFixedPointMentry $win

    #
    # Get the expected number of digits after the decimal point
    # from the value of the -body configuration option of
    # the mentry win and format the number num accordingly
    #
    set body [::$win cget -body]
    if {[catch {format "%.*f" [lindex $body 2] $num} str] != 0} {
	return -code error $str
    }

    #
    # Check whether the result of the format command fits into the widget
    #
    set lst [split $str .]
    if {[string length [lindex $lst 0]] > [lindex $body 0]} {
	return -code error \
	       "the string \"$str\" does not fit into the mentry widget\
		\"$win\""
    }

    eval [list ::$win put 0] $lst
}

#------------------------------------------------------------------------------
# mentry::getReal
#
# Returns the number contained in the mentry widget win of type FixedPoint.
#------------------------------------------------------------------------------
proc mentry::getReal win {
    checkIfFixedPointMentry $win

    #
    # Generate an error if the widget is empty
    #
    if {[::$win isempty]} {
	focus [::$win entrypath 0]
	return -code error EMPTY
    }

    #
    # Scan the contents of the widget
    #
    ::$win getarray strs
    scan $strs(0).$strs(1) "%f" val
    return $val
}

#
# Private procedure
# =================
#

#------------------------------------------------------------------------------
# mentry::checkIfFixedPointMentry
#
# Generates an error if win is not a mentry widget of type FixedPoint.
#------------------------------------------------------------------------------
proc mentry::checkIfFixedPointMentry win {
    if {![winfo exists $win]} {
	return -code error "bad window path name \"$win\""
    }

    if {[string compare [winfo class $win] "Mentry"] != 0 ||
	[string compare [::$win attrib type] "FixedPoint"] != 0} {
	return -code error \
	       "window \"$win\" is not a mentry widget for fixed-point numbers"
    }
}
