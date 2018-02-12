#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc PixelDef {} {
    global pixel
    global ipixel
    global dpixel
    global ppixel

    set ipixel(top) .pixel
    set ipixel(mb) .pixelmb
    set ipixel(max) 13

    set pixel(size) 5
    array set ppixel [array get pixel]

    set dpixel(copy) {}
    set dpixel(tbl) {}
}

proc UpdatePixelTableDialog {which x y sys} {
    global pixel
    global ipixel
    global dpixel

    if {[winfo exists $ipixel(top)]} {
	$which get pixel table $sys $x $y $pixel(size) $pixel(size) dpixel
    }
}

proc PixelTableDialog {} {
    global pixel
    global ipixel
    global dpixel

    global ds9

    if {[winfo exists $ipixel(top)]} {
	raise $ipixel(top)
	return
    }
	
    # create the pixel table window
    set w $ipixel(top)
    set mb $ipixel(mb)

    Toplevel $w $mb 6 [msgcat::mc {Pixel Table}] PixelTableDestroyDialog

    $mb add cascade -label [msgcat::mc {File}] -menu $mb.file
    $mb add cascade -label [msgcat::mc {Edit}] -menu $mb.edit
    $mb add cascade -label [msgcat::mc {Size}] -menu $mb.size

    menu $mb.file
    $mb.file add command -label "[msgcat::mc {Save}]..." \
	-command PixelTableSaveDialog
    $mb.file add separator
    $mb.file add command -label [msgcat::mc {Close}] \
	-command PixelTableDestroyDialog

    menu $mb.edit
    $mb.edit add command -label [msgcat::mc {Cut}] \
	-state disabled -accelerator "${ds9(ctrl)}X"
    $mb.edit add command -label [msgcat::mc {Copy}] \
	-command PixelTableCopyDialog -accelerator "${ds9(ctrl)}C"
    $mb.edit add command -label [msgcat::mc {Paste}] \
	-state disabled -accelerator "${ds9(ctrl)}V"

    menu $mb.size
    for {set ii 3} {$ii<=$ipixel(max)} {incr ii 2} {
	$mb.size add radiobutton -label "${ii}x${ii}" -variable pixel(size) \
	    -value $ii -command PixelTableConfigure
    }

    set f [ttk::frame $w.tbl]
    set dpixel(tbl) [table $f.t \
			 -state disabled \
			 -anchor w \
			 -font [font actual TkDefaultFont] \
			 -variable dpixel \
			 -usecommand 0 \
			 -maxwidth 1200 \
			]
    
    $dpixel(tbl) tag col coord 0
    $dpixel(tbl) tag row coord 0
    $dpixel(tbl) tag configure coord -foreground blue
    $dpixel(tbl) tag configure center -foreground red

    grid $f.t -sticky news
    grid rowconfigure $f 0 -weight 1
    grid columnconfigure $f 0 -weight 1

    set f [ttk::frame $w.buttons]
    ttk::button $w.buttons.close -text [msgcat::mc {Close}] \
	-command PixelTableDestroyDialog
    pack $w.buttons.close -side left -expand true -padx 2 -pady 4

    # Fini
    ttk::separator $w.sep -orient horizontal
    pack $w.buttons $w.sep -side bottom -fill x
    pack $w.tbl -side top -fill both -expand true

    selection handle $w PixelTableExportSelection

    PixelTableConfigure

    # dummy info
    for {set jj 0} {$jj<=$pixel(size)} {incr jj} {
	for {set ii 0} {$ii<=$pixel(size)} {incr ii} {
	    set dpixel($ii,$jj) {}
	}
    }
}

proc PixelTableDestroyDialog {} {
    global ipixel
    global dpixel
    
    if {[winfo exists $ipixel(top)]} {
	destroy $ipixel(top)
	destroy $ipixel(mb)
    }

    if {[info exists dpixel]} {
	unset dpixel
    }
}

proc PixelTableCopyDialog {} {
    global ipixel
    global dpixel

    set dpixel(copy) [PixelTableRender]

    selection own -command PixelTableLostSelection $ipixel(top)

    clipboard clear
    clipboard append $dpixel(copy)
}

proc PixelTableClearDialog {} {
    global pixel
    global ipixel
    global dpixel
    global dpixel

    if {[winfo exists $ipixel(top)]} {
	for {set jj 0} {$jj<=$pixel(size)} {incr jj} {
	    for {set ii 0} {$ii<=$pixel(size)} {incr ii} {
		set dpixel($ii,$jj) {}
	    }
	}
    }
}

proc PixelTableSaveDialog {} {
    set filename [SaveFileDialog pixelfbox]

    if {$filename != {}} {
	set file [open $filename w]
	puts -nonewline $file [PixelTableRender]
	close $file
    }
}

# support

proc PixelTableConfigure {} {
    global pixel
    global ipixel
    global dpixel

    set ss [expr $pixel(size)+1] 
    $dpixel(tbl) configure -rows $ss -cols $ss
    for {set ii 1} {$ii<=$ipixel(max)} {incr ii} {
	$dpixel(tbl) tag cell {} $ii,$ii
    }
    set hh [expr int($ss/2.)]
    $dpixel(tbl) tag cell center $hh,$hh
}

proc PixelTableRender {} {
    global pixel
    global dpixel

    set rr {}
    # col header
    append rr "            "
    for {set ii 1} {$ii<=$pixel(size)} {incr ii} {
	set msg [format "%12s" $dpixel(0,${ii})]
	append rr "$msg"
    }
    append rr "\n"

    append rr "            "
    for {set ii 1} {$ii<=$pixel(size)} {incr ii} {
	append rr " -----------"
    }
    append rr "\n"

    # body
    for {set jj 1} {$jj<=$pixel(size)} {incr jj} {
	set msg [format "%10s" $dpixel(${jj},0)]
	append rr "$msg |"
	for {set ii 1} {$ii<=$pixel(size)} {incr ii} {
	    set msg [format "%12.11s" $dpixel($jj,$ii)]
	    append rr "$msg"
	}
	append rr "\n"
    }

    return $rr
}

proc PixelTableExportSelection {offset bytes} {
    global dpixel

    if {$dpixel(copy) != {}} {
	return [string range $dpixel(copy) $offset [expr $offset+$bytes]]
    }
}

proc PixelTableLostSelection {} {
    global dpixel

    set dpixel(copy) {}
}

proc PrefsDialogPixelTable {} {
    global dprefs
    global ppixel

    set w $dprefs(tab)

    $dprefs(list) insert end [msgcat::mc {Pixel Table}]
    lappend dprefs(tabs) [ttk::frame $w.pixel]

    set f [ttk::labelframe $w.pixel.param -text [msgcat::mc {Pixel Table}]]

    ttk::label $f.tsize -text [msgcat::mc {Size}]
    
    PrefsDialogPixelTableButtonCmd $ppixel(size)
    ttk::menubutton $f.size -textvariable dprefs(pixeltable,msg) \
	-menu $f.size.menu

    global ipixel
    set m $f.size.menu
    menu $m
    for {set ii 3} {$ii<=$ipixel(max)} {incr ii 2} {
	$m add radiobutton -label "${ii}x${ii}" -variable ppixel(size) \
	    -value $ii -command [list PrefsDialogPixelTableButtonCmd $ii]
    }
    grid $f.tsize $f.size -padx 2 -pady 2 -sticky w

    pack $f -side top -fill both -expand true
}

proc PrefsDialogPixelTableButtonCmd {ii} {
    global dprefs
    global pixel

    set dprefs(pixeltable,msg) "${ii}x${ii}"
}

proc ProcessPixelTableCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    switch -- [string tolower [lindex $var $i]] {
	open -
	yes -
	true -
	on -
	1 {PixelTableDialog}

	close -
	no -
	false -
	off -
	0 {PixelTableDestroyDialog}

	default {
	    PixelTableDialog
	    incr i -1
	}
    }
}

proc ProcessSendPixelTableCmd {proc id param sock fn} {
    PixelTableDialog
    ProcessSend $proc $id $sock $fn {.txt} [PixelTableRender]
}
