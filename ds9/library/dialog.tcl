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

