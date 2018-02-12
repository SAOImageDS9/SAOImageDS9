#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

# Menus

proc EditMainMenu {} {
    global ds9
    global current

    menu $ds9(mb).edit
    $ds9(mb).edit add command -label [msgcat::mc {Undo}] -command UndoFrame \
	-accelerator "${ds9(ctrl)}Z"
    $ds9(mb).edit add separator
    $ds9(mb).edit add command -label [msgcat::mc {Cut}] -command CutFrame \
	-accelerator "${ds9(ctrl)}X"
    $ds9(mb).edit add command -label [msgcat::mc {Copy}] -command CopyFrame \
	-accelerator "${ds9(ctrl)}C"
    $ds9(mb).edit add command -label [msgcat::mc {Paste}] -command PasteFrame \
	-accelerator "${ds9(ctrl)}V"
    $ds9(mb).edit add separator
    $ds9(mb).edit add radiobutton -label [msgcat::mc {None}] \
	-variable current(mode) -value none -command ChangeMode
    $ds9(mb).edit add radiobutton -label [msgcat::mc {Region}] \
	-variable current(mode) -value region -command ChangeMode
    $ds9(mb).edit add radiobutton -label [msgcat::mc {Crosshair}] \
	-variable current(mode) -value crosshair -command ChangeMode
    $ds9(mb).edit add radiobutton -label [msgcat::mc {Colorbar}] \
	-variable current(mode) -value colorbar -command ChangeMode
    $ds9(mb).edit add radiobutton -label [msgcat::mc {Pan}] \
	-variable current(mode) -value pan -command ChangeMode
    $ds9(mb).edit add radiobutton -label [msgcat::mc {Zoom}] \
	-variable current(mode) -value zoom -command ChangeMode
    $ds9(mb).edit add radiobutton -label [msgcat::mc {Rotate}] \
	-variable current(mode) -value rotate -command ChangeMode
    $ds9(mb).edit add radiobutton -label [msgcat::mc {Crop}] \
	-variable current(mode) -value crop -command ChangeMode
    $ds9(mb).edit add radiobutton -label [msgcat::mc {Catalog}] \
	-variable current(mode) -value catalog -command ChangeMode
# IME
#    $ds9(mb).edit add radiobutton -label [msgcat::mc {Analysis}] 
#	-variable current(mode) -value analysis -command ChangeMode
    $ds9(mb).edit add radiobutton -label [msgcat::mc {Examine}] \
	-variable current(mode) -value examine -command ChangeMode

    switch $ds9(wm) {
	x11 -
	win32 {
	    $ds9(mb).edit add separator
	    $ds9(mb).edit add command -label "[msgcat::mc {Preferences}]..." \
		-command PrefsDialog
	}
	aqua {}
    }

    # Bindings
    bind $ds9(top) <<Undo>> UndoFrame
    bind $ds9(top) <<Cut>> CutFrame
    bind $ds9(top) <<Copy>> CopyFrame
    bind $ds9(top) <<Paste>> PasteFrame
}

proc PrefsDialogEditMenu {w} {
    global ds9

    set f [ttk::labelframe $w.medit -text [msgcat::mc {Edit}]]

    ttk::menubutton $f.menu -text [msgcat::mc {Menu}] -menu $f.menu.menu
    PrefsDialogButtonbarEdit $f.buttonbar

    grid $f.menu $f.buttonbar -padx 2 -pady 2

    set m $f.menu.menu
    menu $m
    $m add radiobutton -label [msgcat::mc {None}] \
	-variable pcurrent(mode) -value none
    $m add radiobutton -label [msgcat::mc {Region}] \
	-variable pcurrent(mode) -value region
    $m add radiobutton -label [msgcat::mc {Crosshair}] \
	-variable pcurrent(mode) -value crosshair
    $m add radiobutton -label [msgcat::mc {Colorbar}] \
	-variable pcurrent(mode) -value colorbar
    $m add radiobutton -label [msgcat::mc {Pan}] \
	-variable pcurrent(mode) -value pan
    $m add radiobutton -label [msgcat::mc {Zoom}] \
	-variable pcurrent(mode) -value zoom
    $m add radiobutton -label [msgcat::mc {Rotate}] \
	-variable pcurrent(mode) -value rotate
    $m add radiobutton -label [msgcat::mc {Crop}] \
	-variable pcurrent(mode) -value crop
    $m add radiobutton -label [msgcat::mc {Catalog}] \
	-variable pcurrent(mode) -value catalog
# IME
#    $m add radiobutton -label [msgcat::mc {Analysis}] 
#	-variable pcurrent(mode) -value analysis
    $m add radiobutton -label [msgcat::mc {Examine}] \
	-variable pcurrent(mode) -value examine

    pack $f -side top -fill both -expand true
}

# Buttons

proc ButtonsEditDef {} {
    global pbuttons

    array set pbuttons {
	edit,undo 0 
	edit,cut 0
	edit,copy 0
	edit,paste 0
	edit,none 1
	edit,region 1
	edit,crosshair 1
	edit,colorbar 1
	edit,pan 1
	edit,zoom 1
	edit,rotate 1
	edit,crop 1
	edit,catalog 1
	edit,examine 1
	edit,prefs 0
    }
# IME
#	edit,analysis 1
}

proc CreateButtonsEdit {} {
    global buttons
    global ds9
    global current

    ttk::frame $ds9(buttons).edit

    ButtonButton $ds9(buttons).edit.undo \
	[string tolower [msgcat::mc {Undo}]] UndoFrame
    ButtonButton $ds9(buttons).edit.cut \
	[string tolower [msgcat::mc {Cut}]] CutFrame
    ButtonButton $ds9(buttons).edit.copy \
	[string tolower [msgcat::mc {Copy}]] CopyFrame
    ButtonButton $ds9(buttons).edit.paste \
	[string tolower [msgcat::mc {Paste}]] PasteFrame

    RadioButton $ds9(buttons).edit.none \
	[string tolower [msgcat::mc {None}]] \
	current(mode) none ChangeMode
    RadioButton $ds9(buttons).edit.region \
	[string tolower [msgcat::mc {Region}]] \
	current(mode) region ChangeMode
    RadioButton $ds9(buttons).edit.crosshair \
	[string tolower [msgcat::mc {Cross}]] \
	current(mode) crosshair ChangeMode
    RadioButton $ds9(buttons).edit.colorbar \
	[string tolower [msgcat::mc {Colorbar}]] \
	current(mode) colorbar ChangeMode
    RadioButton $ds9(buttons).edit.pan \
	[string tolower [msgcat::mc {Pan}]] \
	current(mode) pan ChangeMode
    RadioButton $ds9(buttons).edit.zoom \
	[string tolower [msgcat::mc {Zoom}]] \
	current(mode) zoom ChangeMode
    RadioButton $ds9(buttons).edit.rotate \
	[string tolower [msgcat::mc {Rotate}]] \
	current(mode) rotate ChangeMode
    RadioButton $ds9(buttons).edit.crop \
	[string tolower [msgcat::mc {Crop}]] \
	current(mode) crop ChangeMode
    RadioButton $ds9(buttons).edit.catalog \
	[string tolower [msgcat::mc {Cat}]] \
	current(mode) catalog ChangeMode
# IME
#    RadioButton $ds9(buttons).edit.analysis 
#	[string tolower [msgcat::mc {Analysis}]] 
#	current(mode) analysis ChangeMode
    RadioButton $ds9(buttons).edit.examine \
	[string tolower [msgcat::mc {Exam}]] \
	current(mode) examine ChangeMode

    ButtonButton $ds9(buttons).edit.prefs \
	[string tolower [msgcat::mc {Preferences}]] PrefsDialog

    set buttons(edit) "
        $ds9(buttons).edit.undo pbuttons(edit,undo)
        $ds9(buttons).edit.cut pbuttons(edit,cut)
        $ds9(buttons).edit.copy pbuttons(edit,copy)
        $ds9(buttons).edit.paste pbuttons(edit,paste)
        $ds9(buttons).edit.none pbuttons(edit,none)
        $ds9(buttons).edit.region pbuttons(edit,region)
        $ds9(buttons).edit.crosshair pbuttons(edit,crosshair)
        $ds9(buttons).edit.colorbar pbuttons(edit,colorbar)
        $ds9(buttons).edit.pan pbuttons(edit,pan)
        $ds9(buttons).edit.zoom pbuttons(edit,zoom)
        $ds9(buttons).edit.rotate pbuttons(edit,rotate)
        $ds9(buttons).edit.crop pbuttons(edit,crop)
        $ds9(buttons).edit.catalog pbuttons(edit,catalog)
        $ds9(buttons).edit.examine pbuttons(edit,examine)
        $ds9(buttons).edit.prefs pbuttons(edit,prefs)
    "
# IME
#        $ds9(buttons).edit.analysis pbuttons(edit,analysis)
}

proc PrefsDialogButtonbarEdit {f} {
    global ds9
    global buttons
    global pbuttons

    ttk::menubutton $f -text [msgcat::mc {Buttonbar}] -menu $f.menu
    
    set m $f.menu
    menu $m
    $m add checkbutton -label [msgcat::mc {Undo}] \
	-variable pbuttons(edit,undo) -command {UpdateButtons buttons(edit)}
    $m add separator
    $m add checkbutton -label [msgcat::mc {Cut}] \
	-variable pbuttons(edit,cut) -command {UpdateButtons buttons(edit)}
    $m add checkbutton -label [msgcat::mc {Copy}] \
	-variable pbuttons(edit,copy) -command {UpdateButtons buttons(edit)}
    $m add checkbutton -label [msgcat::mc {Paste}] \
	-variable pbuttons(edit,paste) -command {UpdateButtons buttons(edit)}
    $m add separator
    $m add checkbutton -label [msgcat::mc {None}] \
	-variable pbuttons(edit,none) -command {UpdateButtons buttons(edit)}
    $m add checkbutton -label [msgcat::mc {Region}] \
	-variable pbuttons(edit,region) -command {UpdateButtons buttons(edit)}
    $m add checkbutton -label [msgcat::mc {Crosshair}] \
	-variable pbuttons(edit,crosshair) -command {UpdateButtons buttons(edit)}
    $m add checkbutton -label [msgcat::mc {Colorbar}] \
	-variable pbuttons(edit,colorbar) -command {UpdateButtons buttons(edit)}
    $m add checkbutton -label [msgcat::mc {Pan}] \
	-variable pbuttons(edit,pan) -command {UpdateButtons buttons(edit)}
    $m add checkbutton -label [msgcat::mc {Zoom}] \
	-variable pbuttons(edit,zoom) -command {UpdateButtons buttons(edit)}
    $m add checkbutton -label [msgcat::mc {Rotate}] \
	-variable pbuttons(edit,rotate) -command {UpdateButtons buttons(edit)}
    $m add checkbutton -label [msgcat::mc {Crop}] \
	-variable pbuttons(edit,crop) -command {UpdateButtons buttons(edit)}
    $m add checkbutton -label [msgcat::mc {Catalog}] \
	-variable pbuttons(edit,catalog) -command {UpdateButtons buttons(edit)}
# IME
#    $m add checkbutton -label [msgcat::mc {Analysis}] 
#	-variable pbuttons(edit,analysis) -command {UpdateButtons buttons(edit)}
    $m add checkbutton -label [msgcat::mc {Examine}] \
	-variable pbuttons(edit,examine) -command {UpdateButtons buttons(edit)}
    $m add separator
    $m add checkbutton -label [msgcat::mc {Preferences}] \
	-variable pbuttons(edit,prefs) -command {UpdateButtons buttons(edit)}
}

# Support

proc UpdateEditMenu {} {
    global ds9
    global current
    global marker

    global debug
    if {$debug(tcl,update)} {
	puts stderr "UpdateEditMenu"
    }

    switch -- $current(mode) {
	pointer -
	region {
	    if {$current(frame) != {}} {
		set l [$current(frame) has marker undo]
		if {$l != {}} {
		    $ds9(mb).edit entryconfig [msgcat::mc {Undo}] \
			-state normal
		} else {
		    $ds9(mb).edit entryconfig [msgcat::mc {Undo}] \
			-state disabled
		}

		if {[$current(frame) has marker select]} {
		    $ds9(mb).edit entryconfig [msgcat::mc {Cut}] \
			-state normal
		    $ds9(mb).edit entryconfig [msgcat::mc {Copy}] \
			-state normal
		} else {
		    $ds9(mb).edit entryconfig [msgcat::mc {Cut}] \
			-state disabled
		    $ds9(mb).edit entryconfig [msgcat::mc {Copy}] \
			-state disabled
		}

		if {$marker(copy) != {} } {
		    if {[$marker(copy) has marker paste]} {
			$ds9(mb).edit entryconfig [msgcat::mc {Paste}] \
			    -state normal
		    } else {
			$ds9(mb).edit entryconfig [msgcat::mc {Paste}] \
			    -state disabled
		    }
		} else {
		    $ds9(mb).edit entryconfig [msgcat::mc {Paste}] \
			-state disabled
		}
	    } else {
		$ds9(mb).edit entryconfig [msgcat::mc {Undo}] -state disabled
		$ds9(mb).edit entryconfig [msgcat::mc {Cut}] -state disabled
		$ds9(mb).edit entryconfig [msgcat::mc {Copy}] -state disabled
		$ds9(mb).edit entryconfig [msgcat::mc {Paste}] -state disabled
	    }
	}
	none -
	crosshair -
	colorbar -
	pan -
	zoom -
	rotate -
	crop -
	catalog -
	analysis -
	examine -
	iexam {$ds9(mb).edit entryconfig [msgcat::mc {Undo}] -state disabled}
    }
}

