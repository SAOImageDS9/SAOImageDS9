#  Copyright (C) 1999-2021
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc SAMPHubDialog {} {
    global samphub
    global isamphub
    global dsamphub
    global ds9

    # see if we already have a window visible
    if {[winfo exists $isamphub(top)]} {
	raise $isamphub(top)
	return
    }

    # create the window
    set w $isamphub(top)
    set mb $isamphub(mb)

    Toplevel $w $mb 6 [msgcat::mc {SAMP Hub}] SAMPHubDestroyDialog

    $mb add cascade -label [msgcat::mc {File}] -menu $mb.file
    $mb add cascade -label [msgcat::mc {Edit}] -menu $mb.edit

    ThemeMenu $mb.file
    $mb.file add command -label [msgcat::mc {Save}] \
	-command SAMPHubDialogSaveFile
    $mb.file add separator
    $mb.file add command -label [msgcat::mc {Start}] \
	-command [list SAMPHubStart 1]
    $mb.file add command -label [msgcat::mc {Stop}] \
	-command SAMPHubStop
    $mb.file add separator
    $mb.file add command -label [msgcat::mc {Disconnect}] \
	-command [list SAMPHubDialogDisconnect]
    $mb.file add separator
    $mb.file add command -label [msgcat::mc {Close}] \
	-command SAMPHubDestroyDialog -accelerator "${ds9(ctrl)}W"

    # Param
    set tt [ttk::notebook $w.param]
    set client [ttk::frame $tt.clients]
    set recvd [ttk::frame $tt.recvd]
    set sent [ttk::frame $tt.sent]
    $tt add $client -text {Clients}
    $tt add $recvd -text {Received Messages}
    $tt add $sent -text {Sent Messages}

    set dsamphub(notebook) $tt

    SAMPHubDialogClient $client
    SAMPHubDialogRecvd $recvd
    SAMPHubDialogSent $sent

    # Buttons
    set f [ttk::frame $w.buttons]
    ttk::button $f.start -text [msgcat::mc {Start}] \
	-command [list SAMPHubStart 1]
    ttk::button $f.stop -text [msgcat::mc {Stop}] \
	-command SAMPHubStop
    ttk::button $f.disconnect -text [msgcat::mc {Disconnect}] \
	-command [list SAMPHubDialogDisconnect]
    ttk::button $f.close -text [msgcat::mc {Close}] \
	-command SAMPHubDestroyDialog
    pack $f.start $f.stop $f.disconnect $f.close \
	-side left -expand true -padx 2 -pady 4

    # Fini
    pack $w.buttons -side bottom -fill x
    pack $w.param -side top -fill both -expand true

    bind $w <<Close>> SAMPHubDestroyDialog

    # hub already running?
    if {[info exists samphub]} {
	foreach ss $samphub(client,secret) {
	    SAMPHubDialogListAdd $ss
	}
    }

    SAMPHubDialogListUpdate
    SAMPHubDialogUpdate
}

proc SAMPHubDialogClient {client} {
    global dsamphub

    # Client Left
    set f [ttk::frame $client.left]
    ttk::scrollbar $f.scroll -command [list $f.box yview]
    set dsamphub(listbox) [ttk::treeview $f.box \
			       -yscroll [list $f.scroll set] \
			       -selectmode browse \
			       -height 28 \
			       -show tree \
			      ]

    grid $f.box $f.scroll -sticky news
    grid rowconfigure $f 0 -weight 1
    grid columnconfigure $f 2 -weight 1

    bind $dsamphub(listbox) <<TreeviewSelect>> SAMPHubDialogListUpdate

    # Client Right
    set f [ttk::frame $client.right]

    # Registration
    set rr [ttk::labelframe $f.reg -text [msgcat::mc {Registration}]]

    set dsamphub(client,reg) {}

    ttk::label $rr.t -text [msgcat::mc {Public ID}]
    ttk::label $rr.v -textvariable dsamphub(client,reg)
    grid $rr.t -row 0 -column 0 -padx 2
    grid $rr.v -row 0 -column 1 -padx 2 -sticky w

    # Metadata
    set mm [ttk::labelframe $f.meta -text [msgcat::mc {Metadata}]]

    set dsamphub(client,metadata,txt) $mm.txt
    roText::roText $mm.txt

    $mm.txt configure \
	-wrap none \
	-yscrollcommand [list $mm.yscroll set] \
	-xscrollcommand [list $mm.xscroll set] \
	-fg [ThemeTreeForeground] \
	-bg [ThemeTreeBackground] \
	-height 10 \
	-width 30 \
	-state normal

    ttk::scrollbar $mm.yscroll \
	-command [list roText::$mm.txt yview] -orient vertical
    ttk::scrollbar $mm.xscroll \
	-command [list roText::$mm.txt xview] -orient horizontal

    grid $mm.txt $mm.yscroll -sticky news
    grid $mm.xscroll -stick news
    grid rowconfigure $mm 0 -weight 1
    grid columnconfigure $mm 0 -weight 1

    # Subscriptions
    set ss [ttk::labelframe $f.sub -text [msgcat::mc {Subscriptions}]]

    set dsamphub(client,subscriptions,txt) $ss.txt
    roText::roText $ss.txt

    $ss.txt configure \
	-wrap none \
	-yscrollcommand [list $ss.yscroll set] \
	-xscrollcommand [list $ss.xscroll set] \
	-fg [ThemeTreeForeground] \
	-bg [ThemeTreeBackground] \
	-height 10 \
	-width 30 \
	-state normal

    ttk::scrollbar $ss.yscroll \
	-command [list roText::$ss.txt yview] -orient vertical
    ttk::scrollbar $ss.xscroll \
	-command [list roText::$ss.txt xview] -orient horizontal

    grid $ss.txt $ss.yscroll -sticky news
    grid $ss.xscroll -stick news
    grid rowconfigure $ss 0 -weight 1
    grid columnconfigure $ss 0 -weight 1

    # fini
    pack $rr -side top -fill both
    pack $mm $ss -side top -fill both -expand true

    grid $client.left -row 0 -column 0
    grid $client.right -row 0 -column 1 -sticky news
    grid rowconfigure $client 0 -weight 1
    grid columnconfigure $client 1 -weight 1

    $dsamphub(listbox) selection set {}
}

proc SAMPHubDialogRecvd {recvd} {
    global dsamphub
    
    set dsamphub(recvd,txt) $recvd.txt
    roText::roText $recvd.txt

    $recvd.txt configure \
	-wrap none \
	-yscrollcommand [list $recvd.yscroll set] \
	-xscrollcommand [list $recvd.xscroll set] \
	-fg [ThemeTreeForeground] \
	-bg [ThemeTreeBackground] \
	-state normal

    ttk::scrollbar $recvd.yscroll \
	-command [list roText::$recvd.txt yview] -orient vertical
    ttk::scrollbar $recvd.xscroll \
	-command [list roText::$recvd.txt xview] -orient horizontal

    grid $recvd.txt $recvd.yscroll -sticky news
    grid $recvd.xscroll -stick news
    grid rowconfigure $recvd 0 -weight 1
    grid columnconfigure $recvd 0 -weight 1
}

proc SAMPHubDialogSent {sent} {
    global dsamphub

    roText::roText $sent.txt

    set dsamphub(sent,txt) $sent.txt
    $sent.txt configure \
	-wrap none \
	-yscrollcommand [list $sent.yscroll set] \
	-xscrollcommand [list $sent.xscroll set] \
	-fg [ThemeTreeForeground] \
	-bg [ThemeTreeBackground] \
	-state normal

    ttk::scrollbar $sent.yscroll \
	-command [list roText::$sent.txt yview] -orient vertical
    ttk::scrollbar $sent.xscroll \
	-command [list roText::$sent.txt xview] -orient horizontal

    grid $sent.txt $sent.yscroll -sticky news
    grid $sent.xscroll -stick news
    grid rowconfigure $sent 0 -weight 1
    grid columnconfigure $sent 0 -weight 1
}

proc SAMPHubDestroyDialog {} {
    global isamphub
    global dsamphub

    if {[winfo exists $isamphub(top)]} {
	destroy $isamphub(top)
	destroy $isamphub(mb)
	unset dsamphub
    }
}

proc SAMPHubDialogListAdd {secret} {
    global isamphub
    global dsamphub
    global samphub

    if {![winfo exists $isamphub(top)]} {
	return
    }

    set name $samphub($secret,id)
    foreach mm $samphub($secret,metadata) {
       foreach {key val} $mm {
           switch $key {
               samp.name {set name $val}
           }
       }
    }

    $dsamphub(listbox) insert {} end -id $secret -text $name
    $dsamphub(listbox) selection set $secret
}

proc SAMPHubDialogListRemove {secret} {
    global isamphub
    global dsamphub

    if {![winfo exists $isamphub(top)]} {
	return
    }

    $dsamphub(listbox) delete $secret
    $dsamphub(listbox) selection set {}
}

proc SAMPHubDialogDisconnect {} {
    global isamphub
    global dsamphub

    if {![winfo exists $isamphub(top)]} {
	return
    }

    set secret [$dsamphub(listbox) selection]
    # can't disconnect the hub
    if {$secret != {} && $secret != 0} {
	SAMPHubDisconnect $secret
    }
}

proc SAMPHubDialogUpdate {} {
    global samphub
    global isamphub

    global debug
    if {$debug(tcl,update)} {
	puts stderr "SAMPHubDialogUpdate"
    }

    if {![winfo exists $isamphub(top)]} {
	return
    }

    set w $isamphub(top)
    set mb $isamphub(mb)

    if {[info exists samphub]} {
	$mb.file entryconfig [msgcat::mc {Start}] -state disabled
	$mb.file entryconfig [msgcat::mc {Stop}] -state normal
	$w.buttons.start configure -state disabled
	$w.buttons.stop configure -state normal
    } else {
	$mb.file entryconfig [msgcat::mc {Start}] -state normal
	$mb.file entryconfig [msgcat::mc {Stop}] -state disabled
	$w.buttons.start configure -state normal
	$w.buttons.stop configure -state disabled
    }
}

# update list name from metadata
proc SAMPHubDialogMetaUpdate {secret} {
    global isamphub
    global dsamphub
    global samphub

    if {![winfo exists $isamphub(top)]} {
       return
    }

    set name $samphub($secret,id)
    foreach mm $samphub($secret,metadata) {
       foreach {key val} $mm {
           switch $key {
               samp.name {set name $val}
           }
       }
    }

    $dsamphub(listbox) item $secret -text $name
}

proc SAMPHubDialogListUpdate {} {
    global isamphub
    global dsamphub
    global samphub

    if {![winfo exists $isamphub(top)]} {
	return
    }

    set w $isamphub(top)
    set mb $isamphub(mb)

    set dsamphub(client,reg) {}
    $dsamphub(client,metadata,txt) delete 1.0 end
    $dsamphub(client,subscriptions,txt) delete 1.0 end

    set secret [$dsamphub(listbox) selection]
    if {$secret != {}} {
	set dsamphub(client,reg) "$samphub($secret,id)"
	foreach mm $samphub($secret,metadata) {
	    foreach {key val} $mm {
		$dsamphub(client,metadata,txt) insert end "$key\t$val\n"
	    }
	}
	foreach ss $samphub($secret,subscriptions) {
	    $dsamphub(client,subscriptions,txt) insert end "[lindex $ss 0]\n"
	}

	# hub?
	if {$secret == $samphub(secret)} {
	    $mb.file entryconfig [msgcat::mc {Disconnect}] -state disabled
	    $w.buttons.disconnect configure -state disabled
	} else {
	    $mb.file entryconfig [msgcat::mc {Disconnect}] -state normal
	    $w.buttons.disconnect configure -state normal
	}

    } else {
	$mb.file entryconfig [msgcat::mc {Disconnect}] -state disabled
	$w.buttons.disconnect configure -state disabled
    }

    $dsamphub(client,metadata,txt) see end
    $dsamphub(client,subscriptions,txt) see end
}

proc SAMPHubDialogRecvdMsg {msg} {
    global isamphub
    global dsamphub

    if {![winfo exists $isamphub(top)]} {
	return
    }

    $dsamphub(recvd,txt) insert end "$msg\n"
    $dsamphub(recvd,txt) see end
}

proc SAMPHubDialogSentMsg {msg} {
    global isamphub
    global dsamphub

    if {![winfo exists $isamphub(top)]} {
	return
    }

    $dsamphub(sent,txt) insert end "$msg\n"
    $dsamphub(sent,txt) see end
}

proc SAMPHubDialogSaveFile {} {
    global isamphub
    global dsamphub

    set fn [SaveFileDialog textfbox $isamphub(top)]
    if {$fn != {}} {
	SAMPHubDialogSaveFileName $fn
    }
}

proc SAMPHubDialogSaveFileName {fn} {
    global isamphub
    global dsamphub

    set which [$dsamphub(notebook) index current]

    switch $which {
	0 {set txt $dsamphub(client,subscriptions,txt)}
	1 {set txt $dsamphub(recvd,txt)}
	2 {set txt $dsamphub(sent,txt)}
    }

    if {[catch {set ch [open "$fn" w]}]} {
	Error [msgcat::mc {An error has occurred while saving}]
	return
    }
    puts -nonewline $ch [$txt get 1.0 end]
    close $ch
}

