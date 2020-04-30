#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

# Menu

proc HelpMainMenu {} {
    global ds9

    switch $ds9(wm) {
 	x11 -
	win32 {}
 	aqua {
	    # window menu
	    ThemeMenu $ds9(mb).window
	    $ds9(mb) add cascade -label [msgcat::mc {Window}] \
		-menu $ds9(mb).window
	}
    }

    $ds9(mb) add cascade -label [msgcat::mc {Help}] -menu $ds9(mb).help
    ThemeMenu $ds9(mb).help
    switch $ds9(wm) {
 	x11 -
 	win32 {
	    $ds9(mb).help add command -label [msgcat::mc {Reference Manual}]\
		-command HelpRef
	}
 	aqua {}
    }
    $ds9(mb).help add command -label [msgcat::mc {User Manual}]\
	-command HelpUser
    $ds9(mb).help add separator
    $ds9(mb).help add command -label [msgcat::mc {FAQ}] \
	-command HelpFAQ
    $ds9(mb).help add command -label [msgcat::mc {Release Notes}] \
	-command HelpRelease
    $ds9(mb).help add command -label [msgcat::mc {Help Desk}] \
	-command HelpDesk
    $ds9(mb).help add separator
    $ds9(mb).help add command -label [msgcat::mc {Story of SAOImageDS9}] \
	-command HelpStory
    $ds9(mb).help add command -label [msgcat::mc {Acknowledgment}] \
	-command HelpAck

    switch $ds9(wm) {
	x11 -
	win32 {
	    $ds9(mb).help add separator
	    $ds9(mb).help add command \
		-label "[msgcat::mc {About SAOImageDS9}]..." \
		-command AboutBox
	}
	aqua {}
    }
}

proc PrefsDialogHelpMenu {w} {
    set f [ttk::labelframe $w.mhelp -text [msgcat::mc {Help}]]

    PrefsDialogButtonbarHelp $f.buttonbar

    grid $f.buttonbar -padx 2 -pady 2 -sticky w

    pack $f -side top -fill both -expand true
}

# Buttons

proc ButtonsHelpDef {} {
    global pbuttons

    array set pbuttons {
	help,ref 1
	help,user 1
	help,faq 1
	help,new 0
	help,release 1
	help,desk 1
	help,story 0
	help,ack 1
	help,about 1
    }
}

proc CreateButtonsHelp {} {
    global buttons
    global ds9

    ttk::frame $ds9(buttons).help

    ButtonButton $ds9(buttons).help.ref \
	[string tolower [msgcat::mc {Reference}]] HelpRef
    ButtonButton $ds9(buttons).help.user \
	[string tolower [msgcat::mc {User}]] HelpUser
    ButtonButton $ds9(buttons).help.faq \
	[string tolower [msgcat::mc {FAQ}]] HelpFAQ
    ButtonButton $ds9(buttons).help.new \
	[string tolower [msgcat::mc {New Features}]] HelpNew
    ButtonButton $ds9(buttons).help.release \
	[string tolower [msgcat::mc {Release}]] HelpRelease
    ButtonButton $ds9(buttons).help.desk \
	[string tolower [msgcat::mc {Help Desk}]] HelpDesk
    ButtonButton $ds9(buttons).help.story \
	[string tolower [msgcat::mc {Story}]] HelpStory
    ButtonButton $ds9(buttons).help.ack \
	[string tolower [msgcat::mc {Acknowledgment}]] HelpAck
    ButtonButton $ds9(buttons).help.about \
	[string tolower [msgcat::mc {About}]] AboutBox

    set buttons(help) "
        $ds9(buttons).help.ref pbuttons(help,ref)
        $ds9(buttons).help.user pbuttons(help,user)
        $ds9(buttons).help.faq pbuttons(help,faq)
        $ds9(buttons).help.new pbuttons(help,new)
        $ds9(buttons).help.release pbuttons(help,release)
        $ds9(buttons).help.desk pbuttons(help,desk)
        $ds9(buttons).help.story pbuttons(help,story)
        $ds9(buttons).help.ack pbuttons(help,ack)
        $ds9(buttons).help.about pbuttons(help,about)
    "
}

proc PrefsDialogButtonbarHelp {f} {
    global buttons
    global pbuttons

    ttk::menubutton $f -text [msgcat::mc {Buttonbar}] -menu $f.menu
    
    set m $f.menu
    ThemeMenu $m
    $m add checkbutton -label [msgcat::mc {Reference Manual}]\
	-variable pbuttons(help,ref) -command {UpdateButtons buttons(help)}
    $m add checkbutton -label [msgcat::mc {User Manual}]\
	-variable pbuttons(help,user) -command {UpdateButtons buttons(help)}
    $m add separator
    $m add checkbutton -label [msgcat::mc {FAQ}] \
	-variable pbuttons(help,faq) -command {UpdateButtons buttons(help)}
    $m add checkbutton -label [msgcat::mc {Release Notes}] \
	-variable pbuttons(help,release) -command {UpdateButtons buttons(help)}
    $m add checkbutton -label [msgcat::mc {Help Desk}] \
	-variable pbuttons(help,desk) -command {UpdateButtons buttons(help)}
    $m add separator
    $m add checkbutton -label [msgcat::mc {Story of SAOImageDS9}] \
	-variable pbuttons(help,story) -command {UpdateButtons buttons(help)}
    $m add checkbutton -label [msgcat::mc {Acknowledgment}] \
	-variable pbuttons(help,ack) -command {UpdateButtons buttons(help)}
    $m add separator
    $m add checkbutton -label "[msgcat::mc {About SAOImageDS9}]..." \
	-variable pbuttons(help,about) -command {UpdateButtons buttons(help)}
}
