#  Copyright (C) 1999-2021
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

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
	    -command "SimpleTextSaveFile $varname" -accelerator "${ds9(ctrl)}S"
	$var(mb).file add separator
	$var(mb).file add command -label "[msgcat::mc {Print}]..." \
	    -command "SimpleTextPrint $varname" \
	    -accelerator "${ds9(ctrl)}P"
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
	bind $var(top) <<Save>> [list SimpleTextSaveFile $varname]
	bind $var(top) <<Close>> [list SimpleTextDestroy $varname]
	bind $var(top) <<Print>> [list SimpleTextPrint $varname]
    }

    if {$action != {append}} {
	$var(text) delete 1.0 end
    }
    $var(text) insert end $txt
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
	if {[catch {set ch [open "$ps(filename,txt)" w]}]} {
	    Error [msgcat::mc {An error has occurred while saving}]
	    return
	}
    } else {
	if {[catch {set ch [open "| $ps(cmd)" w]}]} {
	    Error [msgcat::mc {An error has occurred while saving}]
	    return
	}
    }
    puts -nonewline $ch [$var(text) get 1.0 end]
    close $ch
}

proc SimpleTextSaveFile {varname} {
    upvar #0 $varname var
    global $varname

    set filename [SaveFileDialog textfbox $var(top)]
    if {$filename != {}} {
	if {[catch {set ch [open "$filename" w]}]} {
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

