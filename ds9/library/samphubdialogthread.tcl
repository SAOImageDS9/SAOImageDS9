#  Copyright (C) 1999-2024
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide SAMPHubThread 1.0

package require Thread

proc SAMPHubDialogListAdd {secret} {
    return
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

    [tsv::get dsamphub listbox] insert {} end -id $secret -text $name
    [tsv::get dsamphub listbox] selection set $secret
}

proc SAMPHubDialogListRemove {secret} {
    return
    if {![winfo exists [tsv::get isamphub top]]} {
	return
    }

    [tsv::get dsamphub listbox] delete $secret
    [tsv::get dsamphub listbox] selection set {}
}

proc SAMPHubDialogRecvdMsg {msg} {
    return
    if {![winfo exists [tsv::get isamphub top]]} {
	return
    }

    [tsv::get dsamphub recvd,txt] insert end "$msg\n"
    [tsv::get dsamphub recvd,txt] see end
}

proc SAMPHubDialogSentMsg {msg} {
    return
    if {![winfo exists [tsv::get isamphub top]]} {
	return
    }

    [tsv::get dsamphub sent,txt] insert end "$msg\n"
    [tsv::get dsamphub sent,txt] see end
}

# update list name from metadata
proc SAMPHubDialogMetaUpdate {secret} {
    return
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

    [tsv::get dsamphub listbox] item $secret -text $name
}

proc SAMPHubDialogListUpdate {} {
    return
    if {![winfo exists [tsv::get isamphub top]]} {
	return
    }

    set w [tsv::get isamphub top]
    set mb [tsv::get isamphub mb]

    tsv::set dsamphub client,reg {}
    [tsv::get dsamphub client,reg,txt] configure \
	-text [tsv::get dsamphub client,reg]
    [tsv::get dsamphub client,metadata,txt] delete 1.0 end
    [tsv::get dsamphub client,subscriptions,txt] delete 1.0 end

    set secret [[tsv::get dsamphub listbox] selection]
    if {$secret != {}} {
	tsv::set dsamphub client,reg [tsv::get samphub $secret,id]
	[tsv::get dsamphub client,reg,txt] configure \
	    -text [tsv::get dsamphub client,reg]
	foreach mm [tsv::get samphub $secret,metadata] {
	    foreach {key val} $mm {
		[tsv::get dsamphub client,metadata,txt] insert end "$key\t$val\n"
	    }
	}
	foreach ss [tsv::get samphub $secret,subscriptions] {
	    [tsv::get dsamphub client,subscriptions,txt] insert end "[lindex $ss 0]\n"
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

    [tsv::get dsamphub client,metadata,txt] see end
    [tsv::get dsamphub client,subscriptions,txt] see end
}
