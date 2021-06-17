#  Copyright (C) 1999-2021
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc EditTextDef {} {
    global iedittxt

    set iedittxt(dialogs) {}
}

proc EditTextDialog {varname title width height tvarname} {
    upvar #0 $varname var
    global $varname

    upvar #0 $tvarname tvar
    global $tvarname

    global iedittxt
    global ds9
    global pds9

    set var(top) ".${varname}"
    set var(mb) ".${varname}mb"

    if {![winfo exists $var(top)]} {
	# create window
	Toplevel $var(top) $var(mb) 7 $title "EditTextDestroy $varname"

	lappend iedittxt(dialogs) $varname

	set var(tvarname) $tvarname
	set var(search) {}
	set var(font) $pds9(text,font)
	set var(font,size) $pds9(text,font,size)
	set var(font,weight) $pds9(text,font,weight)
	set var(font,slant) $pds9(text,font,slant)

	$var(mb) add cascade -label [msgcat::mc {File}] -menu $var(mb).file
	ThemeMenu $var(mb).file
	$var(mb).file add command -label "[msgcat::mc {Open}]..." \
	    -command "EditTextLoadFile $varname" -accelerator "${ds9(ctrl)}O"
	$var(mb).file add command -label "[msgcat::mc {Save}]..." \
	    -command "SimpleTextSaveFile $varname" -accelerator "${ds9(ctrl)}S"
	$var(mb).file add separator
	$var(mb).file add command -label "[msgcat::mc {Print}]..." \
	    -command "SimpleTextPrint $varname" \
	    -accelerator "${ds9(ctrl)}P"
	$var(mb).file add separator
	$var(mb).file add command -label [msgcat::mc {Close}] \
	    -command "EditTextDestroy $varname" -accelerator "${ds9(ctrl)}W"

	$var(mb) add cascade -label [msgcat::mc {Edit}] -menu $var(mb).edit
	ThemeMenu $var(mb).edit
	$var(mb).edit add command -label [msgcat::mc {Cut}] \
	    -command "SimpleTextCut $varname" -accelerator "${ds9(ctrl)}X"
	$var(mb).edit add command -label [msgcat::mc {Copy}] \
	    -command "SimpleTextCopy $varname" -accelerator "${ds9(ctrl)}C"
	$var(mb).edit add command -label [msgcat::mc {Paste}] \
	    -command "EditTextPaste $varname" -accelerator "${ds9(ctrl)}V"
	$var(mb).edit add command -label [msgcat::mc {Clear}] \
	    -command "EditTextClear $varname"
	$var(mb).edit add separator
	$var(mb).edit add command -label [msgcat::mc {Select All}] \
	    -command "SimpleTextSelectAll $varname"
	$var(mb).edit add command -label [msgcat::mc {Select None}] \
	    -command "SimpleTextSelectNone $varname"
	$var(mb).edit add separator
	$var(mb).edit add command -label "[msgcat::mc {Find}]..." \
	    -command "SimpleTextFind $varname" -accelerator "${ds9(ctrl)}F"
	$var(mb).edit add command -label [msgcat::mc {Find Next}] \
	    -command "SimpleTextFindNext $varname" -accelerator "${ds9(ctrl)}G"

	$var(mb) add cascade -label [msgcat::mc {Font}] -menu $var(mb).font
	FontMenu $var(mb).font $varname font font,size font,weight font,slant \
	    [list SimpleTextFont $varname]

	set var(text) $var(top).text
	text $var(text)

	$var(text) configure \
	    -height $height \
	    -width $width \
	    -wrap none \
	    -yscrollcommand [list $var(top).yscroll set] \
	    -xscrollcommand [list $var(top).xscroll set] \
	    -fg [ThemeTreeForeground] \
	    -bg [ThemeTreeBackground] \
	    -state normal

	ttk::scrollbar $var(top).yscroll \
	    -command [list $var(text) yview] -orient vertical
	ttk::scrollbar $var(top).xscroll \
	    -command [list $var(text) xview] -orient horizontal

	grid $var(text) $var(top).yscroll -sticky news
	grid $var(top).xscroll -stick news
	grid rowconfigure $var(top) 0 -weight 1
	grid columnconfigure $var(top) 0 -weight 1

	bind $var(top) <<Find>> [list SimpleTextFind $varname]
	bind $var(top) <<FindNext>> [list SimpleTextFindNext $varname]
	bind $var(top) <<Open>> [list EditTextOpenFile $varname]
	bind $var(top) <<Save>> [list SimpleTextSaveFile $varname]
	bind $var(top) <<Close>> [list EditTextDestroy $varname]
	bind $var(top) <<Print>> [list SimpleTextPrint $varname]
    } else {
	raise $var(top)
    }
    
    $var(text) delete 1.0 end
    $var(text) insert end $tvar
    $var(text) see end

    SimpleTextFont $varname
}

proc EditTextDestroy {varname} {
    global iedittxt

    upvar #0 $varname var
    global $varname

    if {[winfo exists $var(top)]} {
	set tvarname $var(tvarname)
	upvar #0 $tvarname tvar
	global $tvarname
	set tvar [$var(text) get 1.0 end-1c]
	destroy $var(top)
	destroy $var(mb)
    }

    set ii [lsearch $iedittxt(dialogs) $varname]
    if {$ii>=0} {
	set iedittxt(dialogs) [lreplace $iedittxt(dialogs) $ii $ii]
    }

    unset $varname
}

proc EditTextUpdateVar {} {
    global iedittxt

    foreach varname $iedittxt(dialogs) {
	upvar #0 $varname var
	global $varname

	set tvarname $var(tvarname)
	upvar #0 $tvarname tvar
	global $tvarname

	set tvar [$var(text) get 1.0 end]
    }
}

proc EditTextUpdateFont {} {
    global iedittxt
    global pds9

    foreach varname $iedittxt(dialogs) {
	upvar #0 $varname var
	global $varname

	set var(font) $pds9(text,font)
	set var(font,size) $pds9(text,font,size)
	set var(font,weight) $pds9(text,font,weight)
	set var(font,slant) $pds9(text,font,slant)

	SimpleTextFont $varname
    }
}

proc EditTextPaste {varname} {
    upvar #0 $varname var
    global $varname

    tk_textPaste $var(text)
}

proc EditTextClear {varname} {
    upvar #0 $varname var
    global $varname

    $var(text) delete 1.0 end
}

proc EditTextLoadFile {varname} {
    upvar #0 $varname var
    global $varname

    set filename [OpenFileDialog textfbox $var(top)]
    if {$filename != {}} {
	if {[catch {set ch [open "$filename" r]}]} {
	    Error [msgcat::mc {An error has occurred while loading}]
	    return
	}

	$var(text) delete 1.0 end
	$var(text) insert end [read $ch]
	close $ch
    }
}
