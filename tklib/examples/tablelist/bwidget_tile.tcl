#! /usr/bin/env tclsh

#==============================================================================
# Demonstrates the interactive tablelist cell editing with the aid of some
# widgets from the BWidget package and of the Tk core checkbutton and
# menubutton widgets.
#
# Copyright (c) 2004-2024  Csaba Nemethi (E-mail: csaba.nemethi@t-online.de)
#==============================================================================

package require Tk
package require tablelist_tile
package require BWidget

wm title . "Serial Line Configuration"

#
# Add some entries to the Tk option database
#
set dir [file dirname [info script]]
source [file join $dir option_tile.tcl]
option add *Tablelist*Entry.background white

#
# Create the images "checkedImg" and "uncheckedImg", as well as 16 images of
# names like "img#FF0000", displaying colors identified by names like "red"
#
source [file join $dir images.tcl]

#
# Register some widgets from the BWidget package for interactive cell editing
#
tablelist::addBWidgetEntry
tablelist::addBWidgetSpinBox
tablelist::addBWidgetComboBox

#
# Improve the window's appearance by using a tile
# frame as a container for the other widgets
#
set f [ttk::frame .f]

#
# Create a tablelist widget with editable columns (except the first one)
#
set tbl $f.tbl
tablelist::tablelist $tbl \
    -columns {0 "No."		  right
	      0 "Available"	  center
	      0 "Name"		  left
	      0 "Baud Rate"	  right
	      0 "Data Bits"	  center
	      0 "Parity"	  left
	      0 "Stop Bits"	  center
	      0 "Handshake"	  left
	      0 "Activation Date" center
	      0 "Activation Time" center
	      0 "Cable Color"	  center} \
    -editstartcommand editStartCmd -editendcommand editEndCmd \
    -aftercopycommand afterCopyCmd -height 0 -width 0
if {[$tbl cget -selectborderwidth] == 0} {
    $tbl configure -spacing 1
}
$tbl columnconfigure 0 -sortmode integer
$tbl columnconfigure 1 -name available -editable yes -editwindow checkbutton \
    -formatcommand emptyStr -labelwindow checkbutton
$tbl columnconfigure 2 -name lineName  -editable yes -editwindow Entry \
    -allowduplicates 0 -sortmode dictionary
$tbl columnconfigure 3 -name baudRate  -editable yes -editwindow ComboBox \
    -sortmode integer
$tbl columnconfigure 4 -name dataBits  -editable yes -editwindow SpinBox
$tbl columnconfigure 5 -name parity    -editable yes -editwindow ComboBox
$tbl columnconfigure 6 -name stopBits  -editable yes -editwindow ComboBox
$tbl columnconfigure 7 -name handshake -editable yes -editwindow ComboBox
$tbl columnconfigure 8 -name actDate   -editable yes -editwindow Entry \
    -formatcommand formatDate -sortmode integer
$tbl columnconfigure 9 -name actTime   -editable yes -editwindow Entry \
    -formatcommand formatTime -sortmode integer
$tbl columnconfigure 10 -name color    -editable yes -editwindow menubutton \
    -formatcommand emptyStr

proc emptyStr   val { return "" }
proc formatDate val { return [clock format $val -format "%Y-%m-%d"] }
proc formatTime val { return [clock format $val -format "%H:%M:%S"] }

#
# Populate the tablelist widget and configure the checkbutton
# embedded into the header label of the column "available"
#
source [file join $dir serialParams.tcl]

set btn [ttk::button $f.btn -text "Close" -command exit]

#
# Manage the widgets
#
pack $btn -side bottom -pady 7p
pack $tbl -side top -expand yes -fill both
pack $f -expand yes -fill both

#------------------------------------------------------------------------------
# editStartCmd
#
# Applies some configuration options to the edit window; if the latter is a
# ComboBox, the procedure populates it.
#------------------------------------------------------------------------------
proc editStartCmd {tbl row col text} {
    set w [$tbl editwinpath]

    switch [$tbl columncget $col -name] {
	lineName {
	    #
	    # Set an upper limit of 20 for the number of characters
	    #
	    $w configure -invalidcommand bell -validate key \
			 -validatecommand {expr {[string length %P] <= 20}}
	}

	baudRate {
	    #
	    # Populate the ComboBox and allow no more
	    # than 6 digits in its Entry component
	    #
	    $w configure -values {50 75 110 300 1200 2400 4800 9600 19200 38400
				  57600 115200 230400 460800 921600}
	    $w configure -invalidcommand bell -validate key -validatecommand \
		{expr {[string length %P] <= 6 && [regexp {^[0-9]*$} %S]}}
	}

	dataBits {
	    #
	    # Configure the SpinBox
	    #
	    $w configure -range {5 8 1} -editable no
	}

	parity {
	    #
	    # Populate the ComboBox and make it non-editable
	    #
	    $w configure -values {None Even Odd Mark Space} -editable no
	}

	stopBits {
	    #
	    # Populate the ComboBox and make it non-editable
	    #
	    $w configure -values {1 1.5 2} -editable no
	}

	handshake {
	    #
	    # Populate the ComboBox and make it non-editable
	    #
	    $w configure -values {XON/XOFF RTS/CTS None} -editable no
	}

	actDate {
	    #
	    # Set an upper limit of 10 for the number of characters
	    # and allow only digits and the "-" character in it
	    #
	    $w configure -invalidcommand bell -validate key -validatecommand \
		{expr {[string length %P] <= 10 && [regexp {^[0-9-]*$} %S]}}
	}

	actTime {
	    #
	    # Set an upper limit of 8 for the number of characters
	    # and allow only digits and the ":" character in it
	    #
	    $w configure -invalidcommand bell -validate key -validatecommand \
		{expr {[string length %P] <= 8 && [regexp {^[0-9:]*$} %S]}}
	}

	color {
	    #
	    # Populate the menu and make sure the menubutton will display the
	    # color name rather than $text, which is "", due to -formatcommand
	    #
	    set menu [$w cget -menu]
	    foreach name $::colorNames {
		$menu add radiobutton -compound left \
		    -image img$::colors($name) -label $name
	    }
	    $menu entryconfigure 8 -columnbreak 1
	    return [$tbl cellcget $row,$col -text]
	}
    }

    return $text
}

#------------------------------------------------------------------------------
# editEndCmd
#
# Performs a final validation of the text contained in the edit window and gets
# the cell's internal content.
#------------------------------------------------------------------------------
proc editEndCmd {tbl row col text} {
    switch [$tbl columncget $col -name] {
	available {
	    #
	    # Update the image contained in the cell and the checkbutton
	    # embedded into the header label of the column "available"
	    #
	    set img [expr {$text ? "checkedImg" : "uncheckedImg"}]
	    $tbl cellconfigure $row,$col -image $img
	    after idle [list updateCkbtn $tbl $row $col]
	}

	baudRate {
	    #
	    # Check whether the baud rate is an integer in the range 50..921600
	    #
	    if {![regexp {^[0-9]+$} $text] || $text < 50 || $text > 921600} {
		bell
		tk_messageBox -title "Error" -icon error -message \
		    "The baud rate must be an integer in the range 50..921600"
		$tbl rejectinput
	    }
	}

	actDate {
	    #
	    # Get the activation date in seconds from the last argument
	    #
	    if {[catch {clock scan $text} actDate] != 0} {
		bell
		tk_messageBox -title "Error" -icon error -message "Invalid date"
		$tbl rejectinput
		return ""
	    }

	    #
	    # Check whether the activation clock value is later than the
	    # current one; if this is the case then make sure the cells
	    # "actDate" and "actTime" will have the same internal value
	    #
	    set actTime [$tbl cellcget $row,actTime -text]
	    set actClock [clock scan [formatTime $actTime] -base $actDate]
	    if {$actClock <= [clock seconds]} {
		bell
		tk_messageBox -title "Error" -icon error -message \
		    "The activation date & time must be in the future"
		$tbl rejectinput
	    } else {
		$tbl cellconfigure $row,actTime -text $actClock
		return $actClock
	    }
	}

	actTime {
	    #
	    # Get the activation clock value in seconds from the last argument
	    #
	    set actDate [$tbl cellcget $row,actDate -text]
	    if {[catch {clock scan $text -base $actDate} actClock] != 0} {
		bell
		tk_messageBox -title "Error" -icon error -message "Invalid time"
		$tbl rejectinput
		return ""
	    }

	    #
	    # Check whether the activation clock value is later than the
	    # current one; if this is the case then make sure the cells
	    # "actDate" and "actTime" will have the same internal value
	    #
	    if {$actClock <= [clock seconds]} {
		bell
		tk_messageBox -title "Error" -icon error -message \
		    "The activation date & time must be in the future"
		$tbl rejectinput
	    } else {
		$tbl cellconfigure $row,actDate -text $actClock
		return $actClock
	    }
	}

	color {
	    #
	    # Update the image contained in the cell
	    #
	    $tbl cellconfigure $row,$col -image img$::colors($text)
	}
    }

    return $text
}
