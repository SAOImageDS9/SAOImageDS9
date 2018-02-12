#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc GroupDef {} {
    global igroup
    global dgroup

    set igroup(top) .grp
    set igroup(mb) .grpmb

    set dgroup(list) {}
}

proc GroupCreate {} {
    global current

    if {$current(frame) != {}} {
	set name [$current(frame) get marker tag default name]
	if {[EntryDialog [msgcat::mc {New Group}] [msgcat::mc {Enter Group Name}] 30 name]} {
	    $current(frame) marker tag "\{$name\}"
	    UpdateGroupDialog
	}
    }
}

proc GroupCreateSilent {} {
    global current

    if {$current(frame) != {}} {
	set name [$current(frame) get marker tag default name]
	$current(frame) marker tag "\{$name\}"
	UpdateGroupDialog
    }
}

proc GroupDialog {} {
    global ds9
    global igroup
    global dgroup

    # see if we already have a window visible
    if {[winfo exists $igroup(top)]} {
	raise $igroup(top)
	return
    }

    # create the window
    set w $igroup(top)
    set mb $igroup(mb)

    Toplevel $w $mb 6 [msgcat::mc {Groups}] GroupDestroyDialog

    $mb add cascade -label [msgcat::mc {File}] -menu $mb.file
    menu $mb.file
    $mb.file add command -label [msgcat::mc {Update Group}] \
	-command GroupUpdateDialog
    $mb.file add separator
    $mb.file add command -label [msgcat::mc {New Group}] \
	-command GroupCreate
    $mb.file add command -label [msgcat::mc {Edit Group Name}] \
	-command GroupEditDialog
    $mb.file add separator
    $mb.file add command -label [msgcat::mc {Delete Group}] \
	-command GroupDeleteDialog
    $mb.file add command -label [msgcat::mc {Delete All Groups}] \
	-command GroupDeleteAllDialog
    $mb.file add separator
    $mb.file add command -label [msgcat::mc {Close}] \
	-command GroupDestroyDialog

    # List
    set f [ttk::frame $w.param]

    ttk::scrollbar $f.scroll -command [list $f.box yview] -orient vertical
    set dgroup(list) [listbox $f.box \
			  -yscroll [list $f.scroll set] \
			  -setgrid true \
			  -selectmode multiple \
			  ]
    grid $f.box $f.scroll -sticky news
    grid rowconfigure $f 0 -weight 1
    grid columnconfigure $f 0 -weight 1

    bind $dgroup(list) <<ListboxSelect>> GroupButtonDialog

    # Buttons
    set f [ttk::frame $w.buttons]
    ttk::button $f.update -text [msgcat::mc {Update}] \
	-command GroupUpdateDialog
    ttk::button $f.close -text [msgcat::mc {Close}] \
	-command GroupDestroyDialog
    pack $f.update $f.close -side left -expand true -padx 2 -pady 4

    # Fini
    ttk::separator $w.sep -orient horizontal
    pack $w.buttons $w.sep -side bottom -fill x
    pack $w.param -fill both -expand true

    UpdateGroupDialog
}

proc GroupButtonDialog {} {
    global dgroup
    global current

    if {$current(frame) != {}} {
	$current(frame) marker unselect all
	set rr [$dgroup(list) curselection]
	foreach ii $rr {
	    if {[string length $ii] != 0} {
		$current(frame) marker "\{[$dgroup(list) get $ii]\}" select
	    }
	}
    }
}

proc GroupDestroyDialog {} {
    global igroup

    if {[winfo exists $igroup(top)]} {
	destroy $igroup(top)
	destroy $igroup(mb)
    }
}

proc GroupUpdateDialog {} {
    global dgroup
    global current

    if {$current(frame) != {}} {
	set ll [$dgroup(list) curselection]
	if {[string length $ll] != 0} {
	    $current(frame) marker tag update "\{[$dgroup(list) get $ll]\}"
	}
    }
}

proc GroupEditDialog {} {
    global dgroup
    global current
    
    if {$current(frame) != {}} {
	set i [$dgroup(list) curselection]
	if {[string length $i] != 0} {
	    set which [$dgroup(list) get $i]
	    if {[EntryDialog [msgcat::mc {Group Name}] [msgcat::mc {Enter Group Name}] 40 which]} {
		$current(frame) marker tag edit "\{[$dgroup(list) get $i]\}" "\{$which\}"
		UpdateGroupDialog
	    }
	}
    }
}

proc GroupDeleteDialog {} {
    global dgroup
    global current

    if {$current(frame) != {}} {
	set i [$dgroup(list) curselection]
	if {[string length $i] != 0} {
	    set which [$dgroup(list) get $i]
	    $current(frame) marker tag delete "\{$which\}"
	    UpdateGroupDialog
	}
    }
}

proc GroupDeleteAllDialog {} {
    global current
    global pds9

    if {$current(frame) != {}} {
	if {$pds9(confirm)} {
	    if {[tk_messageBox -type okcancel -icon question -message \
		     [msgcat::mc {Delete All Groups?}]] != {ok}} {
		return
	    }
	}
	$current(frame) marker tag delete all
	UpdateGroupDialog
    }
}

proc UpdateGroupDialog {} {
    global igroup
    global dgroup
    global current

    global debug
    if {$debug(tcl,update)} {
	puts stderr "UpdateGroupDialog"
    }

    if {[winfo exists $igroup(top)]} {
	# clear the list
	$dgroup(list) delete 0 end

	if {$current(frame) != {}} {
	    set grps [lsort [$current(frame) get marker tag all]]
	    foreach f $grps {
		$dgroup(list) insert end $f
	    }
	}
    }
}
