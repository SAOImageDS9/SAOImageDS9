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
    $mb.file add command -label [msgcat::mc {Start}] \
	-command [list SAMPHubStart 1]
    $mb.file add command -label [msgcat::mc {Stop}] \
	-command [list SAMPHubStop 1]
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

    ttk::label $client.t -text "Hello"
    grid $client.t -padx 2 -pady 2 -sticky w

    # Recvd
    set dsamphub(recvd,txt) $recvd.text
    roText::roText $dsamphub(recvd,txt)

    $dsamphub(recvd,txt) configure \
	-wrap none \
	-yscrollcommand [list $recvd.yscroll set] \
	-xscrollcommand [list $recvd.xscroll set] \
	-fg [ThemeTreeForeground] \
	-bg [ThemeTreeBackground] \
	-state normal

    ttk::scrollbar $recvd.yscroll \
	-command [list roText::$dsamphub(recvd,txt) yview] -orient vertical
    ttk::scrollbar $recvd.xscroll \
	-command [list roText::$dsamphub(recvd,txt) xview] -orient horizontal

    grid $dsamphub(recvd,txt) $recvd.yscroll -sticky news
    grid $recvd.xscroll -stick news
    grid rowconfigure $recvd 0 -weight 1
    grid columnconfigure $recvd 0 -weight 1

    # Sent
    set dsamphub(sent,txt) $sent.text
    roText::roText $dsamphub(sent,txt)

    $dsamphub(sent,txt) configure \
	-wrap none \
	-yscrollcommand [list $sent.yscroll set] \
	-xscrollcommand [list $sent.xscroll set] \
	-fg [ThemeTreeForeground] \
	-bg [ThemeTreeBackground] \
	-state normal

    ttk::scrollbar $sent.yscroll \
	-command [list roText::$dsamphub(sent,txt) yview] -orient vertical
    ttk::scrollbar $sent.xscroll \
	-command [list roText::$dsamphub(sent,txt) xview] -orient horizontal

    grid $dsamphub(sent,txt) $sent.yscroll -sticky news
    grid $sent.xscroll -stick news
    grid rowconfigure $sent 0 -weight 1
    grid columnconfigure $sent 0 -weight 1

    # Buttons
    set f [ttk::frame $w.buttons]
    ttk::button $f.start -text [msgcat::mc {Start}] \
	-command [list SAMPHubStart 1]
    ttk::button $f.stop -text [msgcat::mc {Stop}] \
	-command [list SAMPHubStop 1]
    ttk::button $f.close -text [msgcat::mc {Close}] \
	-command SAMPHubDestroyDialog
    pack $f.start $f.stop $f.close -side left -expand true -padx 2 -pady 4

    # Fini
    pack $w.buttons -side bottom -fill x
    pack $w.param -side top -fill both -expand true

    bind $w <<Close>> SAMPHubDestroyDialog

    SAMPHubUpdateDialog
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

proc SAMPHubRcvdMsg {msg} {
    global isamphub
    global dsamphub

    if {![winfo exists $isamphub(top)]} {
	return
    }

    $dsamphub(recvd,txt) insert end "$msg\n"
    $dsamphub(recvd,txt) see end
}

proc SAMPHubSentMsg {msg} {
    global isamphub
    global dsamphub

    if {![winfo exists $isamphub(top)]} {
	return
    }

    $dsamphub(sent,txt) insert end "$msg\n"
    $dsamphub(sent,txt) see end
}

proc SAMPHubUpdateDialog {} {
    global samphub
    global isamphub

    global debug
    if {$debug(tcl,update)} {
	puts stderr "SAMPHubUpdateDialog"
    }

    set w $isamphub(top)
    set mb $isamphub(mb)

    if {![winfo exists $isamphub(top)]} {
	return
    }

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
