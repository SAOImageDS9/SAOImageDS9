#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc DialogCreate {top title varname} {
    global ds9

    eval {toplevel $top}
    switch $ds9(wm) {
	x11 -
	win32 {}
	aqua {
	    ::tk::unsupported::MacWindowStyle style $top document "closeBox fullZoom collapseBox resizable"
	}
    }

    wm title $top "$title"
    wm iconname $top "$title"

    upvar #0 varname var
    wm protocol $top WM_DELETE_WINDOW "set $varname 1"
}

proc DialogCenter {w} {
    global ds9
    ::tk::PlaceWindow $w widget $ds9(top)
}

proc DialogWait {top varname {focus {}}} {
    upvar $varname var

    if {[string length $focus] == 0} {
	set focus $top
    }
    set old [focus -displayof $top]
    focus $focus
    catch {tkwait visibility $top}
    catch {grab $top}
    tkwait variable $varname
    catch {grab release $top}
    focus $old

    # reset errorInfo
    global errorInfo
    set errorInfo {}
}

proc DialogDismiss {w} {
    destroy $w
}

# Simple List Box

proc SLBDialog {varname title width} {
    upvar $varname var
    global ed

    set w {.slb}

    set ed(ok) 0

    DialogCreate $w $title ed(ok)

    # Lists
    set f [ttk::frame $w.ed]

    ttk::scrollbar $f.scroll -command "$f.box yview"
    set ed(listbox) [listbox $f.box \
			  -yscroll "$f.scroll set" \
			  -setgrid 1 \
			  -selectmode single]
    grid $f.box $f.scroll -sticky news
    grid rowconfigure $f 0 -weight 1
    grid columnconfigure $f 0 -weight 1

    # Buttons
    set f [ttk::frame $w.buttons]
    ttk::button $f.ok -text [msgcat::mc {OK}] \
	-command {set ed(ok) 1}
    ttk::button $f.cancel -text [msgcat::mc {Cancel}] \
	-command {set ed(ok) 0}
    pack $f.ok $f.cancel -side left -expand true -padx 2 -pady 4

    # Fini
    ttk::separator $w.sep -orient horizontal
    pack $w.buttons $w.sep -side bottom -fill x
    pack $w.ed -side top -fill both -expand true

    # init
    for {set i 1} {$i <= $var(count)} {incr i} {
	$w.ed.box insert end $var($i,item)
    }
    $w.ed.box selection set 0

    bind $w <Double-1> {set ed(ok) 1}
    bind $w <Return> {set ed(ok) 1}

    bind $w <Up> "SLBArrow $ed(listbox) -1"
    bind $w <Down> "SLBArrow $ed(listbox) 1"

    DialogCenter $w
    DialogWait $w ed(ok) $w.buttons.ok

    if {$ed(ok)} {
	set i [expr [$ed(listbox) curselection]+1]
	if {$i > 0 && $i <= $var(count)} {
	    set var(item) $var($i,item)
	    set var(value) $var($i,value)
	}
    }

    DialogDismiss $w

    set rr $ed(ok)
    unset ed
    return $rr
}

proc SLBArrow {lb dir} {
    set which [$lb curselection]
    if {$which == {}} {
	set which 0
    }
    set end [$lb index end]

    $lb selection clear 0 end
    incr which $dir
    if {$which < 0} {
	set which 0
    }
    if {$which >= $end} {
	set which [expr $end -1]
    }
    $lb selection set $which
}

# Entry Dialog

proc EntryDialog {title message size varname} {
    upvar $varname var
    global ds9
    global ed

    set w {.entry}
    set mb {.entrymb}

    set ed(top) $w
    set ed(ok) 0
    set ed(text) $var

    DialogCreate $w $title ed(ok)

    $w configure -menu $mb
    menu $mb

    $mb add cascade -label [msgcat::mc {Edit}] -menu $mb.edit
    EditMenu $mb ed

    # Param
    set f [ttk::frame $w.param]
    ttk::label $f.title -text $message
    ttk::entry $f.txt -textvariable ed(text) -width $size
    if {$size < 30} {
	grid $f.title $f.txt -padx 2 -pady 2
    } else {
	grid $f.title -padx 2 -pady 2 -sticky w
	grid $f.txt -padx 2 -pady 2
    }

    # Buttons
    set f [ttk::frame $w.buttons]
    ttk::button $f.ok -text [msgcat::mc {OK}] -command {set ed(ok) 1} \
	-default active
    ttk::button $f.cancel -text [msgcat::mc {Cancel}] -command {set ed(ok) 0}
    pack $f.ok $f.cancel -side left -expand true -padx 2 -pady 4

    bind $w <Return> {set ed(ok) 1}

    # Fini
    ttk::separator $w.sep -orient horizontal
    pack $w.buttons $w.sep -side bottom -fill x
    pack $w.param -side top -fill both -expand true

    DialogCenter $w 
    $w.param.txt select range 0 end
    DialogWait $w ed(ok) $w.param.txt

    if {$ed(ok)} {
	set var $ed(text)
    }
    
    DialogDismiss $w
    destroy $mb

    set rr $ed(ok)
    unset ed
    return $rr
}

# Entry Cut/Copy/Paste

proc EntryCut {top} {
    set w [focus -displayof $top]

    if {![catch {set data [string range [$w get] [$w index sel.first] [expr {[$w index sel.last] - 1}]]}]} {
        clipboard clear -displayof $w
        clipboard append -displayof $w $data
        $w delete sel.first sel.last
    }
}

proc EntryCopy {top} {
    set w [focus -displayof $top]

    if {![catch {set data [string range [$w get] [$w index sel.first] [expr {[$w index sel.last] - 1}]]}]} {
        clipboard clear -displayof $w
        clipboard append -displayof $w $data
    }
}

proc EntryPaste {top} {
    set w [focus -displayof $top]

    catch {$w delete sel.first sel.last}
    if {![catch {$w insert insert [GetSelection $w]}]} {
	tk::EntrySeeInsert $w
    }
}

proc GetSelection {w} {
    if {
	![catch {selection get -displayof $w -type UTF8_STRING} txt] ||
	![catch {selection get -displayof $w} txt] ||
	![catch {selection get -displayof $w -selection CLIPBOARD} txt]
    } {
	return $txt
    }
}

# Simple Text Dialog

proc SimpleTextDef {} {
    global istxt

    set istxt(dialogs) {}
}

proc SimpleTextDialog {varname title width height action pos txt 
		       {destroyCB {}} {destroyParam {}}} {
    upvar #0 $varname var
    global $varname

    global istxt
    global ds9
    global pds9

    set var(top) ".${varname}"
    set var(mb) ".${varname}mb"

    if {[winfo exists $var(top)]} {
	raise $var(top)
    } else {
	# create window
	Toplevel $var(top) $var(mb) 7 $title "SimpleTextDestroy $varname"

	lappend istxt(dialogs) $varname

	set var(search) {}
	set var(destroyCB) $destroyCB
	set var(destroyParam) $destroyParam
	set var(font) $pds9(text,font)
	set var(font,size) $pds9(text,font,size)
	set var(font,weight) $pds9(text,font,weight)
	set var(font,slant) $pds9(text,font,slant)

	$var(mb) add cascade -label [msgcat::mc {File}] -menu $var(mb).file
	menu $var(mb).file
	$var(mb).file add command -label "[msgcat::mc {Save}]..." \
	    -command "SimpleTextSave $varname"
	switch $ds9(wm) {
	    x11 -
	    aqua -
	    win32 {
		$var(mb).file add separator
		$var(mb).file add command -label "[msgcat::mc {Print}]..." \
		    -command "SimpleTextPrint $varname"
	    }
	}
	$var(mb).file add separator
	$var(mb).file add command -label [msgcat::mc {Close}] \
	    -command "SimpleTextDestroy $varname"

	$var(mb) add cascade -label [msgcat::mc {Edit}] -menu $var(mb).edit
	menu $var(mb).edit
	$var(mb).edit add command -label [msgcat::mc {Cut}] \
	    -command "SimpleTextCut $varname" -accelerator "${ds9(ctrl)}X"
	$var(mb).edit add command -label [msgcat::mc {Copy}] \
	    -command "SimpleTextCopy $varname" -accelerator "${ds9(ctrl)}C"
	$var(mb).edit add command -label [msgcat::mc {Paste}] \
	    -state disabled -accelerator "${ds9(ctrl)}V"
	$var(mb).edit add command -label [msgcat::mc {Clear}] \
	    -command "SimpleTextClear $varname"
	$var(mb).edit add separator
	$var(mb).edit add command -label [msgcat::mc {Select All}] \
	    -command "SimpleTextSelectAll $varname"
	$var(mb).edit add command -label [msgcat::mc {Select None}] \
	    -command "SimpleTextSelectNone $varname"
	$var(mb).edit add separator
	switch $ds9(wm) {
	    x11 -
	    win32 {
		$var(mb).edit add command -label "[msgcat::mc {Find}]..." \
		    -command "SimpleTextFind $varname" \
		    -accelerator "${ds9(ctrl)}F"
	    }
	    aqua {
		# Known bug in Tk, can't have dialogs invoked by accelerator
		$var(mb).edit add command -label "[msgcat::mc {Find}]..." \
		    -command "SimpleTextFind $varname"
	    }
	}
	$var(mb).edit add command -label [msgcat::mc {Find Next}] \
	    -command "SimpleTextFindNext $varname" -accelerator "${ds9(ctrl)}G"

	$var(mb) add cascade -label [msgcat::mc {Font}] -menu $var(mb).font
	FontMenu $var(mb).font $varname font font,size font,weight font,slant \
	    [list SimpleTextFont $varname]

	# create the text and scroll widgets
	
	set var(text) [text $var(top).text -height $height -width $width \
			   -wrap none \
			   -yscrollcommand [list $var(top).yscroll set] \
			   -xscrollcommand [list $var(top).xscroll set] \
			  ]

	ttk::scrollbar $var(top).yscroll -command [list $var(text) yview] \
	    -orient vertical
	ttk::scrollbar $var(top).xscroll -command [list $var(text) xview] \
	    -orient horizontal

	grid $var(text) $var(top).yscroll -sticky news
	grid $var(top).xscroll -stick news
	grid rowconfigure $var(top) 0 -weight 1
	grid columnconfigure $var(top) 0 -weight 1

	# Bindings
	switch $ds9(wm) {
	    x11 -
	    win32 {
		bind $var(top) <<Find>> [list SimpleTextFind $varname]
	    }
	    aqua {
		# Known bug in Tk, can't have dialogs invoked by accelerator
	    }
	}
	bind $var(top) <<FindNext>> [list SimpleTextFindNext $varname]

	# some window managers need a hint
	raise $var(top)
    }

    $var(text) configure -state normal
    if {$action != {append}} {
	$var(text) delete 1.0 end
    }
    $var(text) insert end "$txt"
    switch -- $pos {
	top {$var(text) see 1.0}
	bottom {$var(text) see end}
    }

    SimpleTextFont $varname
}

proc SimpleTextDestroy {varname} {
    global istxt

    upvar #0 $varname var
    global $varname

    if {$var(destroyCB) != {}} {
	eval $var(destroyCB) $var(destroyParam)
    }

    if {[winfo exists $var(top)]} {
	destroy $var(top)
	destroy $var(mb)
    }

    set ii [lsearch $istxt(dialogs) $varname]
    if {$ii>=0} {
	set istxt(dialogs) [lreplace $istxt(dialogs) $ii $ii]
    }

    unset $varname
}

proc SimpleTextFont {varname} {
    upvar #0 $varname var
    global $varname

    global ds9

    $var(text) configure -font \
	"{$ds9($var(font))} $var(font,size) $var(font,weight) $var(font,slant)"
}

proc SimpleTextUpdateFont {} {
    global istxt
    global pds9

    foreach varname $istxt(dialogs) {
	upvar #0 $varname var
	global $varname

	set var(font) $pds9(text,font)
	set var(font,size) $pds9(text,font,size)
	set var(font,weight) $pds9(text,font,weight)
	set var(font,slant) $pds9(text,font,slant)

	SimpleTextFont $varname
    }
}

proc SimpleTextCut {varname} {
    upvar #0 $varname var
    global $varname

    tk_textCut $var(text)
}

proc SimpleTextCopy {varname} {
    upvar #0 $varname var
    global $varname

    tk_textCopy $var(text)
}

proc SimpleTextClear {varname} {
    upvar #0 $varname var
    global $varname

    $var(text) configure -state normal
    $var(text) delete 1.0 end
    $var(text) configure -state disabled
}

proc SimpleTextSelectAll {varname} {
    upvar #0 $varname var
    global $varname

    $var(text) tag add sel 1.0 end
}

proc SimpleTextSelectNone {varname} {
    upvar #0 $varname var
    global $varname

    $var(text) tag remove sel 1.0 end
}

proc SimpleTextFind {varname} {
    upvar #0 $varname var
    global $varname

    $var(text) tag remove sel 1.0 end
    set result "$var(search)"
    if {[EntryDialog [msgcat::mc {Search}] [msgcat::mc {Enter Search Expression}] 40 result]} {
	set var(search) "$result"
	set start [$var(text) search -nocase -count cnt \
		       -regexp -- $result 1.0 end]
	if {$start != {}} {
	    $var(text) tag add sel $start "$start + $cnt chars"
	    $var(text) see $start
	} else {
	    Error "$var(search) [msgcat::mc {Not Found}]"
	}
    }
}

proc SimpleTextFindNext {varname} {
    upvar #0 $varname var
    global $varname

    if {$var(search) != {}} {
	if {[$var(text) tag ranges sel] != {}} {
	    set ss {sel.last}
	} else {
	    set ss {1.0}
	}

	set start [$var(text) search -nocase -count cnt \
		       -regexp -- $var(search) $ss end]
	if {$start != {}} {
	    $var(text) tag remove sel 1.0 end
	    $var(text) tag add sel $start "$start + $cnt chars"
	    $var(text) see $start
	} else {
	    # wrap
	    set start [$var(text) search -nocase -count cnt \
			   -regexp -- $var(search) 1.0 end]
	    if {$start != {}} {
		$var(text) tag remove sel 1.0 end
		$var(text) tag add sel $start "$start + $cnt chars"
		$var(text) see $start
	    } else {
		Error "$var(search) [msgcat::mc {Not Found}]"
	    }
	}
    }
}

proc SimpleTextPrint {varname} {
    upvar #0 $varname var
    global $varname

    global ds9

    switch $ds9(wm) {
	x11 -
	aqua -
	win32 {SimpleTextPSPrint $varname}
	wwin32 {win32 pm print text [$var(text) get 1.0 end]}
    }
}

proc SimpleTextPSPrint {varname} {
    upvar #0 $varname var
    global $varname

    if {[PRPrintDialog]} { 
	if {[catch {SimpleTextPostScript $varname} printError]} {
	    Error "[msgcat::mc {An error has occurred while printing}] $printError"
	}
    }
}

proc SimpleTextPostScript {varname} {
    upvar #0 $varname var
    global $varname

    global ps

    if {$ps(dest) == "file"} {
	set ch [open "| cat > $ps(filename,txt)" w]
    } else {
	set ch [open "| $ps(cmd)" w]
    }

    puts -nonewline $ch [$var(text) get 1.0 end]
    close $ch
}

proc SimpleTextPageSetup {varname} {
    upvar #0 $varname var
    global $varname

    global ds9

    switch $ds9(wm) {
	x11 -
	aqua -
	win32 {}
	wwin32 {win32 pm pagesetup}
    }
}

proc SimpleTextSave {varname} {
    upvar #0 $varname var
    global $varname

    set filename [SaveFileDialog textfbox]
    if {$filename != {}} {
	if {[catch {set ch [open "| cat > \"$filename\"" w]}]} {
	    Error [msgcat::mc {An error has occurred while saving}]
	    return
	}
	puts -nonewline $ch [$var(text) get 1.0 end]
	close $ch
    }
}

