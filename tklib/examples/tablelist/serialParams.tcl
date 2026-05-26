#==============================================================================
# Populates a tablelist widget with the parameters of 16 serial lines,
# configures the checkbutton embedded into the header label of the column
# "available", and implements the procedures updateCkbtn and afterCopyCmd.
#
# Copyright (c) 2021-2024  Csaba Nemethi (E-mail: csaba.nemethi@t-online.de)
#==============================================================================

#
# Populate the tablelist widget; set the activation
# date & time to 10 minutes past the current clock value
#
set clock [expr {[clock seconds] + 600}]
for {set row 0; set line 1} {$row < 16} {set row $line; incr line} {
    $tbl insert end [list $line [expr {$row < 8}] "Line $line" 9600 8 None 1 \
		     XON/XOFF $clock $clock [lindex $colorNames $row]]

    set availImg [expr {($row < 8) ? "checkedImg" : "uncheckedImg"}]
    $tbl cellconfigure $row,available -image $availImg
    $tbl cellconfigure $row,color -image img[lindex $colorValues $row]
}

#
# Configure the "-command" option of the checkbutton embedded into the
# header label of the column "available", and make sure that it will be
# reconfigured whenever any column is moved interactively to a new position
#
proc configCkbtn {tbl col} {
    set ckbtn [$tbl labelwindowpath $col]
    $ckbtn configure -command [list onCkbtnToggle $tbl $col $ckbtn]
}
proc onCkbtnToggle {tbl col ckbtn} {
    upvar #0 [$ckbtn cget -variable] var
    $tbl fillcolumn $col -text $var
    $tbl fillcolumn $col -image [expr {$var ? "checkedImg" : "uncheckedImg"}]
}
configCkbtn $tbl available
bind $tbl <<TablelistColumnMoved>> { configCkbtn %W available }
bind $tbl <<ThemeChanged>>	   { configCkbtn %W available }

#
# Make sure that the checkbutton will appear in tri-state mode
#
set ckbtn [$tbl labelwindowpath available]
set varName [$ckbtn cget -variable]
if {[winfo class $ckbtn] eq "Checkbutton"} {
    set $varName ""
} else {
    unset $varName
}

#
# Selects/deselects the checkbutton embedded into the header label
# of the specified column or sets it into the tri-state mode.
#
proc updateCkbtn {tbl row col} {
    set lst [$tbl getcolumns $col]
    set ckbtn [$tbl labelwindowpath $col]
    upvar #0 [$ckbtn cget -variable] var

    if {[lsearch -exact $lst 1] < 0} {			;# all 0
	set var 0					;# deselect
    } elseif {[lsearch -exact $lst 0] < 0} {		;# all 1
	set var 1					;# select
    } elseif {[winfo class $ckbtn] eq "Checkbutton"} {
	set var ""					;# tri-state mode
    } else {
	unset -nocomplain var				;# tri-state mode
    }
}

#
# For the columns "available" and "color", updates
# the images contained in the column's cells.
#
proc afterCopyCmd {tbl col} {
    switch [$tbl columncget $col -name] {
	available {
	    #
	    # Update the images contained in the column's cells and
	    # the checkbutton embedded into the column's header label
	    #
	    for {set row 0} {$row < 16} {incr row} {
		set text [$tbl cellcget $row,$col -text]
		set img [expr {$text ? "checkedImg" : "uncheckedImg"}]
		$tbl cellconfigure $row,$col -image $img
	    }
	    updateCkbtn $tbl 0 $col
	}

	color {
	    #
	    # Update the images contained in the column's cells
	    #
	    for {set row 0} {$row < 16} {incr row} {
		set text [$tbl cellcget $row,$col -text]
		$tbl cellconfigure $row,$col -image img$::colors($text)
	    }
	}
    }
}
