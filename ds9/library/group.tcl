#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc GroupDef {} {
    global igroup
    global dgroup

    set igroup(top) .grp
    set igroup(mb) .grpmb

    set dgroup(listbox) {}
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
    ThemeMenu $mb.file
    $mb.file add command -label [msgcat::mc {Update Group}] \
	-command GroupUpdateDialog
    $mb.file add command -label [msgcat::mc {Select None}] \
	-command GroupNoneDialog
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
	-command GroupDestroyDialog -accelerator "${ds9(ctrl)}W"

    # List
    set f [ttk::frame $w.param]

    ttk::scrollbar $f.scroll -command [list $f.box yview] -orient vertical
    set dgroup(listbox) [ttk::treeview $f.box \
			  -yscroll [list $f.scroll set] \
			  -selectmode browse \
			  -show tree \
			  ]
    grid $f.box $f.scroll -sticky news
    grid rowconfigure $f 0 -weight 1
    grid columnconfigure $f 0 -weight 1

    bind $dgroup(listbox) <<TreeviewSelect>> GroupButtonDialog

    # Buttons
    set f [ttk::frame $w.buttons]
    ttk::button $f.update -text [msgcat::mc {Update}] -command GroupUpdateDialog
    ttk::button $f.none -text [msgcat::mc {None}] -command GroupNoneDialog
    ttk::button $f.close -text [msgcat::mc {Close}] -command GroupDestroyDialog
    pack $f.update $f.none $f.close -side left -expand true -padx 2 -pady 4

    # Fini
    ttk::separator $w.sep -orient horizontal
    pack $w.buttons $w.sep -side bottom -fill x
    pack $w.param -fill both -expand true

    bind $w <<Close>> GroupDestroyDialog

    UpdateGroupDialog
}

proc GroupDestroyDialog {} {
    global igroup

    if {[winfo exists $igroup(top)]} {
	destroy $igroup(top)
	destroy $igroup(mb)
    }
}

proc GroupButtonDialog {} {
    global dgroup
    global current

    if {$current(frame) != {}} {
	$current(frame) marker unselect all
	set tag [$dgroup(listbox) selection]
	if {$tag != {}} {
	    $current(frame) marker $tag select
	}
    }
}

proc GroupNoneDialog {} {
    global dgroup
    global current

    if {$current(frame) != {}} {
	$current(frame) marker unselect all
	$dgroup(listbox) selection remove [$dgroup(listbox) selection]
    }
}

proc GroupUpdateDialog {} {
    global dgroup
    global current

    if {$current(frame) != {}} {
	set tag [$dgroup(listbox) selection]
	if {$tag != {}} {
	    $current(frame) marker tag update $tag
	}
    }
}

proc GroupEditDialog {} {
    global dgroup
    global current
    
    if {$current(frame) != {}} {
	set tag [$dgroup(listbox) selection]
	set old $tag
	if {$tag != {}} {
	    set flat [join $tag]
	    if {[EntryDialog [msgcat::mc {Group Name}] [msgcat::mc {Enter Group Name}] 40 flat]} {
		$current(frame) marker tag edit $old [list $flat]
		UpdateGroupDialog
	    }
	}
    }
}

proc GroupDeleteDialog {} {
    global dgroup
    global current

    if {$current(frame) != {}} {
	set tag [$dgroup(listbox) selection]
	if {$tag != {}} {
	    $current(frame) marker tag delete $tag
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
	foreach tag [$dgroup(listbox) children {}] {
	    $dgroup(listbox) delete [list $tag]
	}

	if {$current(frame) != {}} {
	    foreach tag [lsort [$current(frame) get marker tag all]] {
		$dgroup(listbox) insert {} end -id $tag -text $tag
	    }
	}
    }
}
