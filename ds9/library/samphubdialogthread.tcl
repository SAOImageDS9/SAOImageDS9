#  Copyright (C) 1999-2024
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide SAMPHubThread 1.0

package require Thread

proc SAMPHubDialogListAdd {secret} {
    thread::send [tsv::get isamphub id] [list SAMPHubDialogListAdd_ $secret]
}

proc SAMPHubDialogListRemove {secret} {
    thread::send [tsv::get isamphub id] [list SAMPHubDialogListRemove_ $secret]
}

proc SAMPHubDialogRecvdMsg {msg} {
    thread::send [tsv::get isamphub id] [list SAMPHubDialogRecvdMsg_ $msg]
}

proc SAMPHubDialogSentMsg {msg} {
    thread::send [tsv::get isamphub id] [list SAMPHubDialogSentMsg_ $msg]
}

# update list name from metadata
proc SAMPHubDialogMetaUpdate {secret} {
    thread::send [tsv::get isamphub id] [list SAMPHubDialogMetaUpdate_ $secret]
}

proc SAMPHubDialogListUpdate {} {
    thread::send [tsv::get isamphub id] [list SAMPHubDialogListUpdate_]
}
