#  Copyright (C) 1999-2021
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0


proc NotesDef {} {
    global ds9notes

    set ds9notes {}
}

proc DisplayNotes {} {
    EditTextDialog notes Notes 80 20 ds9notes
}

proc ProcessNotesCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    notes::YY_FLUSH_BUFFER
    notes::yy_scan_string [lrange $var $i end]
    notes::yyparse
    incr i [expr $notes::yycnt-1]
}

proc ProcessSendNotesCmd {proc id param {sock {}} {fn {}}} {
    global ds9notes
    $proc $id "$ds9notes\n"
}

proc NotesCmdAppend {str} {
    global ds9notes

    append ds9notes "$str\n"
    DisplayNotes
}

proc NotesCmdInsert {str} {
    global ds9notes

    set ds9notes "$str\n$ds9notes"
    DisplayNotes
}

proc NotesCmdClear {} {
    global ds9notes

    set ds9notes {}
    DisplayNotes
}

proc NotesCmdLoad {fn} {
    global ds9notes

    if {$fn != {}} {
	if {[catch {set ch [open "$fn" r]}]} {
	    Error [msgcat::mc {An error has occurred while loading}]
	    return
	}
	set ds9notes [read $ch]
	close $ch

	DisplayNotes
    }
}

proc NotesCmdSave {fn} {
    global ds9notes

    if {$fn != {}} {
	if {[catch {set ch [open "$fn" w]}]} {
	    Error [msgcat::mc {An error has occurred while saving}]
	    return
	}
	puts $ch $ds9notes
	close $ch
    }
}

