#  Copyright (C) 1999-2024
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide SAMPHubThread 1.0

package require Thread

proc SAMPHubDialogListAdd {secret} {
    global dsamphub

    if {![winfo exists [tsv::get isamphub top]]} {
	return
    }

    set name [tsv::get samphub $secret,id]
    foreach mm [tsv::get samphub $secret,metadata] {
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
    global dsamphub

    if {![winfo exists [tsv::get isamphub top]]} {
	return
    }

    $dsamphub(listbox) delete $secret
    $dsamphub(listbox) selection set {}
}

proc SAMPHubDialogRecvdMsg {msg} {
    global dsamphub

    if {![winfo exists [tsv::get isamphub top]]} {
	return
    }

    $dsamphub(recvd,txt) insert end "$msg\n"
    $dsamphub(recvd,txt) see end
}

proc SAMPHubDialogSentMsg {msg} {
    global dsamphub

    if {![winfo exists [tsv::get isamphub top]]} {
	return
    }

    $dsamphub(sent,txt) insert end "$msg\n"
    $dsamphub(sent,txt) see end
}

# update list name from metadata
proc SAMPHubDialogMetaUpdate {secret} {
    global dsamphub

    if {![winfo exists [tsv::get isamphub top]]} {
       return
    }

    set name [tsv::get samphub $secret,id]
    foreach mm [tsv::get samphub $secret,metadata] {
       foreach {key val} $mm {
           switch $key {
               samp.name {set name $val}
           }
       }
    }

    $dsamphub(listbox) item $secret -text $name
}

proc SAMPHubDialogListUpdate {} {
    global dsamphub

    if {![winfo exists [tsv::get isamphub top]]} {
	return
    }

    set w [tsv::get isamphub top]
    set mb [tsv::get isamphub mb]

    set dsamphub(client,reg) {}
    $dsamphub(client,metadata,txt) delete 1.0 end
    $dsamphub(client,subscriptions,txt) delete 1.0 end

    set secret [$dsamphub(listbox) selection]
    if {$secret != {}} {
	set dsamphub(client,reg) [tsv::get samphub $secret,id]
	foreach mm [tsv::get samphub $secret,metadata] {
	    foreach {key val} $mm {
		$dsamphub(client,metadata,txt) insert end "$key\t$val\n"
	    }
	}
	foreach ss [tsv::get samphub $secret,subscriptions] {
	    $dsamphub(client,subscriptions,txt) insert end "[lindex $ss 0]\n"
	}

	# hub?
	if {$secret == [tsv::get samphub secret]} {
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
