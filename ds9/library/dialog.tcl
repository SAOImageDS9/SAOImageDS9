#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc Toplevel {w mb style title proc} {
    global ds9

    toplevel $w

    wm title $w $title
    wm iconname $w $title
    wm group $w $ds9(top)
    wm protocol $w WM_DELETE_WINDOW $proc

    # we need this first, before the configure command
    ThemeMenu $mb

    switch $ds9(wm) {
	x11 -
	win32 {}
	aqua {
	    AppleMenu $mb
	    switch $style {
		6 {::tk::unsupported::MacWindowStyle style $w document "closeBox collapseBox"}
		7 {::tk::unsupported::MacWindowStyle style $w document "closeBox fullZoom collapseBox resizable"}
	    }
	}
    }

    $w configure -menu $mb

    DialogCenter $w
}

proc DialogCreate {w title varname} {
    global ds9

    toplevel $w
    switch $ds9(wm) {
	x11 -
	win32 {}
	aqua {
	    ::tk::unsupported::MacWindowStyle style $w document "closeBox fullZoom collapseBox resizable"
	}
    }

    wm title $w "$title"
    wm iconname $w "$title"

    upvar #0 varname var
    wm protocol $w WM_DELETE_WINDOW "set $varname 1"

    DialogCenter $w
}

proc DialogCenter {w} {
    global pds9

    if {$pds9(dialog,center)} {
	::tk::PlaceWindow $w
	# global ds9
	# ::tk::PlaceWindow $w widget $ds9(top)
    }
}

proc DialogWait {w varname {focus {}}} {
    upvar $varname var

    if {[string length $focus] == 0} {
	set focus $w
    }
    set old [focus -displayof $w]
    focus $focus
    catch {tkwait visibility $w}
    catch {grab $w}
    tkwait variable $varname
    catch {grab release $w}
    focus $old

    # reset errorInfo
    global errorInfo
    set errorInfo {}
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
    ThemeMenu $mb

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

    $w.param.txt select range 0 end

    DialogWait $w ed(ok) $w.param.txt
    destroy $w
    destroy $mb

    if {$ed(ok)} {
	set var $ed(text)
    }
    
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
	ThemeMenu $var(mb).file
	$var(mb).file add command -label "[msgcat::mc {Save}]..." \
	    -command "SimpleTextSave $varname" -accelerator "${ds9(ctrl)}S"
	switch $ds9(wm) {
	    x11 -
	    aqua -
	    win32 {
		$var(mb).file add separator
		$var(mb).file add command -label "[msgcat::mc {Print}]..." \
		    -command "SimpleTextPrint $varname" \
		    -accelerator "${ds9(ctrl)}P"
	    }
	}
	$var(mb).file add separator
	$var(mb).file add command -label [msgcat::mc {Close}] \
	    -command "SimpleTextDestroy $varname" -accelerator "${ds9(ctrl)}W"

	$var(mb) add cascade -label [msgcat::mc {Edit}] -menu $var(mb).edit
	ThemeMenu $var(mb).edit
	$var(mb).edit add command -label [msgcat::mc {Cut}] \-state disabled -accelerator "${ds9(ctrl)}X"
#	$var(mb).edit add command -label [msgcat::mc {Cut}] -command "SimpleTextCut $varname" -accelerator "${ds9(ctrl)}X"
	$var(mb).edit add command -label [msgcat::mc {Copy}] \
	    -command "SimpleTextCopy $varname" -accelerator "${ds9(ctrl)}C"
	$var(mb).edit add command -label [msgcat::mc {Paste}] \
	    -state disabled -accelerator "${ds9(ctrl)}V"
#	$var(mb).edit add command -label [msgcat::mc {Clear}] -command "SimpleTextClear $varname"
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
	roText::roText $var(text)

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
	    -command [list roText::$var(text) yview] -orient vertical
	ttk::scrollbar $var(top).xscroll \
	    -command [list roText::$var(text) xview] -orient horizontal

	grid $var(text) $var(top).yscroll -sticky news
	grid $var(top).xscroll -stick news
	grid rowconfigure $var(top) 0 -weight 1
	grid columnconfigure $var(top) 0 -weight 1

	bind $var(top) <<Find>> [list SimpleTextFind $varname]
	bind $var(top) <<FindNext>> [list SimpleTextFindNext $varname]
	bind $var(top) <<Save>> [list SimpleTextSave $varname]
	bind $var(top) <<Close>> [list SimpleTextDestroy $varname]
	bind $var(top) <<Print>> [list SimpleTextPrint $varname]
    }

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
	set start [$var(text) search -nocase -count ::roText::cnt \
		       -regexp -- $result 1.0 end]
	if {$start != {}} {
	    $var(text) tag add sel $start "$start + $::roText::cnt chars"
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

	set start [$var(text) search -nocase -count ::roText::cnt \
		       -regexp -- $var(search) $ss end]
	if {$start != {}} {
	    $var(text) tag remove sel 1.0 end
	    $var(text) tag add sel $start "$start + $::roText::cnt chars"
	    $var(text) see $start
	} else {
	    # wrap
	    set start [$var(text) search -nocase -count ::roText::cnt \
			   -regexp -- $var(search) 1.0 end]
	    if {$start != {}} {
		$var(text) tag remove sel 1.0 end
		$var(text) tag add sel $start "$start + $::roText::cnt chars"
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
    }
}

proc SimpleTextSave {varname} {
    upvar #0 $varname var
    global $varname

    set filename [SaveFileDialog textfbox $var(top)]
    if {$filename != {}} {
	if {[catch {set ch [open "| cat > \"$filename\"" w]}]} {
	    Error [msgcat::mc {An error has occurred while saving}]
	    return
	}
	puts -nonewline $ch [$var(text) get 1.0 end]
	close $ch
    }
}

# read only text widget, idea and code by emiliano and ccbbaa, tested: tcl/tk8.6, linux - version 20191217-0
namespace eval ::roText {
  proc roText {w args} {
    if {[info exists ::roText::$w]} {
      puts stderr "::roText::$w and possibly $w already exist"
      return ;# discuss: better way to flag error to caller, return "" for now
    }
    text $w {*}$args
    bind $w <Control-KeyPress-z> break ;# delete all
    bind $w <Control-KeyPress-k> break ;# kill line
    bind $w <Control-KeyPress-h> break ;# Backspace alternate
    bind $w <Control-KeyPress-d> break ;# Del alternate
    bind $w <Control-KeyPress-o> break ;# Ins newline
    bind $w <Key-Delete> break
    bind $w <Key-BackSpace> break
    rename $w ::roText::$w

      proc ::$w {cmd args} [format {
	  set w %s
	  ::roText::$w $cmd {*}$args
      } $w $w]

      if {0} {
    proc ::$w {cmd args} [format {
      set w %s
      set inf [lindex [info level 1] 0] ;# caller proc name; find tk vs scr.
      #puts "* $cmd $args ([info level]) '$inf'" ;# debug
      if {($cmd ni "insert delete") || ( ($cmd in "insert delete") \
        && ([string range $inf 0 3] != "tk::") \
        && ($inf != "tk_textCut") && ($inf != "tk_textPaste") ) \
      } {
        ::roText::$w $cmd {*}$args
      } 
    } $w $w]
      }

    bind ::$w <Destroy> [list rename $w {}]
    return $w ;# created
  }
}

# Used for SimpleText,Catalog,SIA,Footprint
proc PRPrintDialog {} {
    global ps
    global ed

    set ed(ok) 0
    array set ed [array get ps]

    set w {.print}

    DialogCreate $w [msgcat::mc {Print}] ed(ok)

    # PrintTo
    set f [ttk::labelframe $w.pt -text [msgcat::mc {Print To}]]

    ttk::radiobutton $f.printer -text [msgcat::mc {Printer}] \
	-variable ed(dest) -value printer
    ttk::label $f.tcmd -text [msgcat::mc {Command}]
    ttk::entry $f.cmd -textvariable ed(cmd) -width 20

    ttk::radiobutton $f.file -text [msgcat::mc {File}] \
	-variable ed(dest) -value file
    ttk::label $f.tname -text [msgcat::mc {Name}]
    ttk::entry $f.name -textvariable ed(filename,txt) -width 20
    ttk::button $f.browse -text [msgcat::mc {Browse}] \
	-command "PRPrintBrowse ed(filename,txt) $w"

    grid $f.printer $f.tcmd $f.cmd -padx 2 -pady 2 -sticky ew
    grid $f.file $f.tname $f.name $f.browse -padx 2 -pady 2 -sticky ew
    grid columnconfigure $f 2 -weight 1

    # Buttons
    set f [ttk::frame $w.buttons]
    ttk::button $f.ok -text [msgcat::mc {OK}] -command {set ed(ok) 1} \
	-default active
    ttk::button $f.cancel -text [msgcat::mc {Cancel}] -command {set ed(ok) 0}
    pack $f.ok $f.cancel -side left -expand true -padx 2 -pady 4

    bind $w <Return> {set ed(ok) 1}

    # Fini
    grid $w.pt -sticky news
    grid $w.buttons -sticky ew
    grid rowconfigure $w 0 -weight 1
    grid columnconfigure $w 0 -weight 1

    DialogWait $w ed(ok) $w.buttons.ok
    destroy $w

    if {$ed(ok)} {
	array set ps [array get ed]
    }

    set rr $ed(ok)
    unset ed
    return $rr
}

proc PRPrintBrowse {varname parent} {
    upvar $varname var

    FileLast prsavfbox $var
    set var [SaveFileDialog prsavfbox $parent]
}

