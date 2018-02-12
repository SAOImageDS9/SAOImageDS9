#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

# Menus

proc FileMainMenu {} {
    global ds9

    menu $ds9(mb).file 
    $ds9(mb).file add command -label "[msgcat::mc {Open}]..." \
	-command [list OpenDialog fits] -accelerator "${ds9(ctrl)}O"
    $ds9(mb).file add cascade -label [msgcat::mc {Open as}] \
	-menu $ds9(mb).file.open
    $ds9(mb).file add separator
    $ds9(mb).file add command -label "[msgcat::mc {Save}]..." \
	-command [list SaveDialog fits] -accelerator "${ds9(ctrl)}S"
    $ds9(mb).file add cascade -label [msgcat::mc {Save as}] \
	-menu $ds9(mb).file.save
    $ds9(mb).file add separator
    $ds9(mb).file add cascade -label [msgcat::mc {Import}] \
	-menu $ds9(mb).file.import
    $ds9(mb).file add cascade -label [msgcat::mc {Export}] \
	-menu $ds9(mb).file.export
    $ds9(mb).file add separator
    $ds9(mb).file add cascade -label [msgcat::mc {Save Image}] \
	-menu $ds9(mb).file.saveimage
    $ds9(mb).file add command -label "[msgcat::mc {Create Movie}]..." \
	-command MovieDialog
    $ds9(mb).file add separator
    $ds9(mb).file add command -label "[msgcat::mc {Backup}]..." \
	-command BackupDialog
    $ds9(mb).file add command -label "[msgcat::mc {Restore}]..." \
	-command RestoreDialog
    $ds9(mb).file add separator
    $ds9(mb).file add command -label "[msgcat::mc {Display Header}]..." \
	-command DisplayHeaderMenu 
    $ds9(mb).file add cascade -label [msgcat::mc {Preserve During Load}] \
	-menu $ds9(mb).file.preserve
    $ds9(mb).file add separator
    $ds9(mb).file add cascade -label [msgcat::mc {XPA}] \
	-menu $ds9(mb).file.xpa
    $ds9(mb).file add cascade -label [msgcat::mc {SAMP}] \
	-menu $ds9(mb).file.samp
    $ds9(mb).file add separator
    $ds9(mb).file add command -label "[msgcat::mc {Open TCL Console}]..." \
	-command OpenConsole
    $ds9(mb).file add command -label "[msgcat::mc {Source TCL}]..." \
	-command OpenSource
    $ds9(mb).file add separator
    switch $ds9(wm) {
	x11 -
	aqua -
	win32 {
	    $ds9(mb).file add command -label "[msgcat::mc {Page Setup}]..." \
		-command PSPageSetup -accelerator "${ds9(shiftctrl)}P"
	    $ds9(mb).file add command -label "[msgcat::mc {Print}]..." \
		-command PSPrint -accelerator "${ds9(ctrl)}P"
	}
	foo {
	    # accelerators don't work with dialog box
	    $ds9(mb).file add command \
		-label "[msgcat::mc {Postscript Page Setup}]..." \
		-command PSPageSetup
	    $ds9(mb).file add command \
		-label "[msgcat::mc {Postscript Print}]..." \
		-command PSPrint
	    $ds9(mb).file add separator
	    $ds9(mb).file add command \
		-label "[msgcat::mc {Page Setup}]..." \
		-command MacOSXPageSetup
	    $ds9(mb).file add command \
		-label "[msgcat::mc {Print}]..." \
		-command MacOSXPrint
	}
    }
    switch $ds9(wm) {
	x11 -
	win32 {
	    $ds9(mb).file add separator
	    $ds9(mb).file add command \
		-label [msgcat::mc {Exit}] -command QuitDS9
	}
	aqua {}
    }

    # File Open Menu
    menu $ds9(mb).file.open
    $ds9(mb).file.open add command -label "[msgcat::mc {Slice}]..." \
	-command [list OpenDialog fits {} slice]
    $ds9(mb).file.open add separator
    $ds9(mb).file.open add command \
	-label "[msgcat::mc {RGB Image}]..." \
	-command [list OpenDialog rgbimage]
    $ds9(mb).file.open add command \
	-label "[msgcat::mc {RGB Cube}]..."\
	-command [list OpenDialog rgbcube]
    $ds9(mb).file.open add separator
    $ds9(mb).file.open add command \
	-label "[msgcat::mc {Multiple Extension Cube}]..." \
	-command [list OpenDialog mecube]
    $ds9(mb).file.open add command \
	-label "[msgcat::mc {Multiple Extension Frames}]..." \
	-command [list OpenDialog multiframe]
    $ds9(mb).file.open add separator
    $ds9(mb).file.open add command \
	-label "[msgcat::mc {Mosaic WCS}]..." \
	-command [list OpenDialog mosaicimagewcs]
    $ds9(mb).file.open add command \
	-label "[msgcat::mc {Mosaic WCS Segment}]..." \
	-command [list OpenDialog mosaicwcs]
    $ds9(mb).file.open add command \
	-label "[msgcat::mc {Mosaic IRAF}]..." \
	-command [list OpenDialog mosaicimageiraf]
    $ds9(mb).file.open add command \
	-label "[msgcat::mc {Mosaic IRAF Segment}]..." \
	-command [list OpenDialog mosaiciraf]
    $ds9(mb).file.open add command \
	-label "[msgcat::mc {Mosaic WFPC2}]..." \
	-command [list OpenDialog mosaicimagewfpc2]
    $ds9(mb).file.open add separator
    $ds9(mb).file.open add command \
	-label "[msgcat::mc {URL}]..." \
	-command [list OpenURLFits]

    # File Save Menu
    menu $ds9(mb).file.save
    $ds9(mb).file.save add command -label "[msgcat::mc {Slice}]..." \
	-command [list SaveDialog slice]
    $ds9(mb).file.save add separator
    $ds9(mb).file.save add command \
	-label "[msgcat::mc {RGB Image}]..." \
	-command [list SaveDialog rgbimage]
    $ds9(mb).file.save add command \
	-label "[msgcat::mc {RGB Cube}]..."\
	-command [list SaveDialog rgbcube]
    $ds9(mb).file.save add separator
    $ds9(mb).file.save add command \
	-label "[msgcat::mc {Multiple Extension Cube}]..." \
	-command [list SaveDialog mecube]
    $ds9(mb).file.save add separator
    $ds9(mb).file.save add command \
	-label "[msgcat::mc {Mosaic WCS}]..." \
	-command [list SaveDialog mosaicimagewcs]
    $ds9(mb).file.save add command \
	-label "[msgcat::mc {Mosaic WCS Segment}]..." \
	-command [list SaveDialog mosaicwcs]

    # File Import Menu
    menu $ds9(mb).file.import
    $ds9(mb).file.import add cascade -label [msgcat::mc {Slice}] \
	-menu $ds9(mb).file.import.slice
    $ds9(mb).file.import add separator
    $ds9(mb).file.import add command -label "[msgcat::mc {Array}]..." \
	-command [list ImportDialog array]
    $ds9(mb).file.import add command -label {NRRD...} \
	-command [list ImportDialog nrrd]
    $ds9(mb).file.import add command -label {ENVI...} \
	-command [list ImportDialog envi]
    $ds9(mb).file.import add separator
    $ds9(mb).file.import add command -label "[msgcat::mc {RGB Array}]..." \
	-command [list ImportDialog rgbarray]
    $ds9(mb).file.import add separator
    $ds9(mb).file.import add command -label {GIF...} \
	-command [list ImportDialog gif]
    $ds9(mb).file.import add command -label {TIFF...} \
	-command [list ImportDialog tiff]
    $ds9(mb).file.import add command -label {JPEG...} \
	-command [list ImportDialog jpeg]
    $ds9(mb).file.import add command -label {PNG...} \
	-command [list ImportDialog png]

    # File Import Slice Menu
    menu $ds9(mb).file.import.slice
    $ds9(mb).file.import.slice add command -label {GIF...} \
	-command [list ImportDialog gif {} slice]
    $ds9(mb).file.import.slice add command -label {TIFF...} \
	-command [list ImportDialog tiff {} slice]
    $ds9(mb).file.import.slice add command -label {JPEG...} \
	-command [list ImportDialog jpeg {} slice]
    $ds9(mb).file.import.slice add command -label {PNG...} \
	-command [list ImportDialog png {} slice]

    # File Export Menu
    menu $ds9(mb).file.export
    $ds9(mb).file.export add command -label "[msgcat::mc {Array}]..." \
	-command [list ExportDialog array]
    $ds9(mb).file.export add command -label {NRRD...} \
	-command [list ExportDialog nrrd]
    $ds9(mb).file.export add command -label {ENVI...} \
	-command [list ExportDialog envi]
    $ds9(mb).file.export add separator
    $ds9(mb).file.export add command -label "[msgcat::mc {RGB Array}]..." \
	-command [list ExportDialog rgbarray]
    $ds9(mb).file.export add separator
    $ds9(mb).file.export add command -label {GIF...} \
	-command [list ExportDialog gif]
    $ds9(mb).file.export add command -label {TIFF...} \
	-command [list ExportDialog tiff]
    $ds9(mb).file.export add command -label {JPEG...} \
	-command [list ExportDialog jpeg]
    $ds9(mb).file.export add command -label {PNG...} \
	-command [list ExportDialog png]

    # File Saveimage Menu
    menu $ds9(mb).file.saveimage
    $ds9(mb).file.saveimage add command -label {FITS...} \
	-command [list SaveImageDialog fits]
    $ds9(mb).file.saveimage add command -label {EPS...} \
	-command [list SaveImageDialog eps]
    $ds9(mb).file.saveimage add command -label {GIF...} \
	-command [list SaveImageDialog gif]
    $ds9(mb).file.saveimage add command -label {TIFF...} \
	-command [list SaveImageDialog tiff]
    $ds9(mb).file.saveimage add command -label {JPEG...} \
	-command [list SaveImageDialog jpeg]
    $ds9(mb).file.saveimage add command -label {PNG...} \
	-command [list SaveImageDialog png]

    # File Preserve Menu
    menu $ds9(mb).file.preserve
    $ds9(mb).file.preserve add checkbutton -label [msgcat::mc {Pan}] \
	-variable panzoom(preserve) -command PreservePan
    $ds9(mb).file.preserve add checkbutton -label [msgcat::mc {Region}] \
	-variable marker(preserve) -command MarkerPreserve

    menu $ds9(mb).file.samp
    $ds9(mb).file.samp add command -label [msgcat::mc {Connect}] \
	-command SAMPConnect
    $ds9(mb).file.samp add command -label [msgcat::mc {Disconnect}] \
	-command SAMPDisconnect
    $ds9(mb).file.samp add separator
    $ds9(mb).file.samp add cascade -label [msgcat::mc {Image}] \
	-menu $ds9(mb).file.samp.image
    $ds9(mb).file.samp add cascade -label [msgcat::mc {Table}] \
	-menu $ds9(mb).file.samp.table

    menu $ds9(mb).file.samp.image
    $ds9(mb).file.samp.image add command -label [msgcat::mc {Broadcast}] \
	-command "SAMPSendImageLoadFits {}"
    $ds9(mb).file.samp.image add separator

    menu $ds9(mb).file.samp.table
    $ds9(mb).file.samp.table add command -label [msgcat::mc {Broadcast}] \
	-command "SAMPSendTableLoadFits {}"
    $ds9(mb).file.samp.table add separator

    menu $ds9(mb).file.xpa
    $ds9(mb).file.xpa add command -label "[msgcat::mc {Information}]..." \
	-command XPAInfo
    $ds9(mb).file.xpa add separator
    $ds9(mb).file.xpa add command -label [msgcat::mc {Connect}] \
	-command XPAConnect
    $ds9(mb).file.xpa add command -label [msgcat::mc {Disconnect}] \
	-command XPADisconnect

    # Bindings
    bind $ds9(top) <<Open>> [list OpenDialog fits]
    bind $ds9(top) <<Save>> [list SaveDialog fits]
    switch $ds9(wm) {
 	x11 -
	win32 {
	    bind $ds9(top) <<PageSetup>> PSPageSetup
	    bind $ds9(top) <<Print>> PSPrint
	}
 	aqua {
	    # Known bug in Tk, can't have dialogs invoked by accelerator
	}
    }
}

proc PrefsDialogFileMenu {w} {
    set f [ttk::labelframe $w.mfile -text [msgcat::mc {File}]]

    ttk::menubutton $f.menu -text [msgcat::mc {Menu}] -menu $f.menu.menu
    PrefsDialogButtonbarFile $f.buttonbar

    grid $f.menu $f.buttonbar -padx 2 -pady 2

    set m $f.menu.menu
    menu $m
    $m add cascade -label [msgcat::mc {Preserve During Load}] \
	-menu $m.preserve

    global pscale
    global ppanzoom
    global pmarker
    menu $m.preserve
    $m.preserve add checkbutton -label [msgcat::mc {Pan}] \
	-variable ppanzoom(preserve)
    $m.preserve add checkbutton -label [msgcat::mc {Region}] \
	-variable pmarker(preserve)

    pack $f -side top -fill both -expand true
}

# Buttons

proc ButtonsFileDef {} {
    global pbuttons

    array set pbuttons {
	file,open 1
	file,save 1
	file,movie 0
	file,backup 0
	file,restore 0
	file,header 1
	file,xpa,info 0
	file,samp,image 0
	file,samp,table 0
	file,console 0
	file,tcl 0
	file,pspage 0
	file,psprint 0
	file,page 1
	file,print 1
	file,exit 1
    }
}

proc CreateButtonsFile {} {
    global ds9
    global buttons

    ttk::frame $ds9(buttons).file

    ButtonButton $ds9(buttons).file.open \
	[string tolower [msgcat::mc {Open}]] \
	[list OpenDialog fits]
    ButtonButton $ds9(buttons).file.save \
	[string tolower [msgcat::mc {Save}]] \
	[list SaveDialog fits]

    ButtonButton $ds9(buttons).file.movie \
	[string tolower [msgcat::mc {Create Movie}]] MovieDialog

    ButtonButton $ds9(buttons).file.backup \
	[string tolower [msgcat::mc {Backup}]] BackupDialog
    ButtonButton $ds9(buttons).file.restore \
	[string tolower [msgcat::mc {Restore}]] RestoreDialog

    ButtonButton $ds9(buttons).file.header \
	[string tolower [msgcat::mc {Header}]] DisplayHeaderMenu

    ButtonButton $ds9(buttons).file.xpainfo \
	[string tolower {XPA Info}] XPAInfo
    ButtonButton $ds9(buttons).file.sampimage \
	[string tolower [msgcat::mc {SAMP Image}]] "SAMPSendImageLoadFits {}"
    ButtonButton $ds9(buttons).file.samptable \
	[string tolower [msgcat::mc {SAMP Table}]] "SAMPSendTableLoadFits {}"

    ButtonButton $ds9(buttons).file.console \
	[string tolower [msgcat::mc {Console}]] OpenConsole
    ButtonButton $ds9(buttons).file.tcl \
	[string tolower {TCL}] OpenSource

    ButtonButton $ds9(buttons).file.pspage \
	[string tolower [msgcat::mc {PS Page Setup}]] PSPageSetup
    ButtonButton $ds9(buttons).file.psprint \
	[string tolower [msgcat::mc {PS Print}]] PSPrint

    switch $ds9(wm) {
 	x11 -
	aqua -
	win32 {
	    ButtonButton $ds9(buttons).file.page \
		[string tolower [msgcat::mc {Page Setup}]] PSPageSetup
	    ButtonButton $ds9(buttons).file.print \
		[string tolower [msgcat::mc {Print}]] PSPrint
	}
 	foo {
	    ButtonButton $ds9(buttons).file.page \
		[string tolower [msgcat::mc {Page Setup}]] MacOSXPageSetup
	    ButtonButton $ds9(buttons).file.print \
		[string tolower [msgcat::mc {Print}]] MacOSXPrint
	}
    }

    ButtonButton $ds9(buttons).file.exit \
	[string tolower [msgcat::mc {Exit}]] QuitDS9

    set buttons(file) "
        $ds9(buttons).file.open pbuttons(file,open)
        $ds9(buttons).file.save pbuttons(file,save)
        $ds9(buttons).file.movie pbuttons(file,movie)
        $ds9(buttons).file.backup pbuttons(file,backup)
        $ds9(buttons).file.restore pbuttons(file,restore)
        $ds9(buttons).file.header pbuttons(file,header)
        $ds9(buttons).file.xpainfo pbuttons(file,xpa,info)
        $ds9(buttons).file.sampimage pbuttons(file,samp,image)
        $ds9(buttons).file.samptable pbuttons(file,samp,table)
        $ds9(buttons).file.console pbuttons(file,console)
        $ds9(buttons).file.tcl pbuttons(file,tcl)
        $ds9(buttons).file.pspage pbuttons(file,pspage)
        $ds9(buttons).file.psprint pbuttons(file,psprint)
        $ds9(buttons).file.page pbuttons(file,page)
        $ds9(buttons).file.print pbuttons(file,print)
        $ds9(buttons).file.exit pbuttons(file,exit)
    "
}

proc PrefsDialogButtonbarFile {f} {
    global buttons
    global pbuttons
    global ds9

    ttk::menubutton $f -text [msgcat::mc {Buttonbar}] -menu $f.menu
    
    set m $f.menu
    menu $m
    $m add checkbutton -label "[msgcat::mc {Open}]..." \
	-variable pbuttons(file,open) -command {UpdateButtons buttons(file)}
    $m add checkbutton -label "[msgcat::mc {Save}]..." \
	-variable pbuttons(file,save) -command {UpdateButtons buttons(file)}
    $m add separator
    $m add checkbutton -label "[msgcat::mc {Create Movie}]..." \
	-variable pbuttons(file,movie) -command {UpdateButtons buttons(file)}
    $m add separator
    $m add checkbutton -label "[msgcat::mc {Backup}]..." \
	-variable pbuttons(file,backup) -command {UpdateButtons buttons(file)}
    $m add checkbutton -label "[msgcat::mc {Restore}]..." \
	-variable pbuttons(file,restore) -command {UpdateButtons buttons(file)}
    $m add separator
    $m add checkbutton -label "[msgcat::mc {Display Header}]..." \
	-variable pbuttons(file,header) -command {UpdateButtons buttons(file)}
    $m add separator
    $m add cascade -label [msgcat::mc {XPA}] -menu $m.xpa
    $m add cascade -label [msgcat::mc {SAMP}] -menu $m.samp
    $m add separator
    $m add checkbutton -label "[msgcat::mc {Open TCL Console}]..." \
	-variable pbuttons(file,console) -command {UpdateButtons buttons(file)}
    $m add checkbutton -label "[msgcat::mc {Source TCL}]..." \
	-variable pbuttons(file,tcl) -command {UpdateButtons buttons(file)}
    $m add separator

    switch $ds9(wm) {
	x11 -
	aqua -
	win32 {
	    $m add checkbutton \
		-label "[msgcat::mc {Page Setup}]..." \
		-variable pbuttons(file,page) \
		-command {UpdateButtons buttons(file)}
	    $m add checkbutton \
		-label "[msgcat::mc {Print}]..." \
		-variable pbuttons(file,print) \
		-command {UpdateButtons buttons(file)}
	}
	foo {
	    $m add checkbutton \
		-label "[msgcat::mc {Postscript Page Setup}]..." \
		-variable pbuttons(file,pspage) \
		-command {UpdateButtons buttons(file)}
	    $m add checkbutton \
		-label "[msgcat::mc {Postscript Print}]..." \
		-variable pbuttons(file,psprint) \
		-command {UpdateButtons buttons(file)}
	    $m add separator
	    $m add checkbutton \
		-label "[msgcat::mc {Page Setup}]..." \
		-variable pbuttons(file,page) \
		-command {UpdateButtons buttons(file)}
	    $m add checkbutton \
		-label "[msgcat::mc {Print}]..." \
		-variable pbuttons(file,print) \
		-command {UpdateButtons buttons(file)}
	}
    }

    $m add separator
    $m add checkbutton -label [msgcat::mc {Exit}] \
	-variable pbuttons(file,exit) -command {UpdateButtons buttons(filew)}

    menu $m.xpa
    $m.xpa add checkbutton -label "[msgcat::mc {Information}]..." \
	-variable pbuttons(file,xpa,info) \
	-command {UpdateButtons buttons(file)}

    menu $m.samp
    $m.samp add checkbutton -label [msgcat::mc {Image}] \
	-variable pbuttons(file,samp,image) \
	-command {UpdateButtons buttons(file)}
    $m.samp add checkbutton -label [msgcat::mc {Table}] \
	-variable pbuttons(file,samp,table) \
	-command {UpdateButtons buttons(file)}
}

# Support

proc UpdateFileMenu {} {
    global ds9
    global current
    global samp
    global xpa
 
    global debug
    if {$debug(tcl,update)} {
	puts stderr "UpdateFileMenu"
    }

    set mm $ds9(mb).file
    set bb $ds9(buttons).file

    if {$ds9(active,num) > 0} {
	$mm entryconfig "[msgcat::mc {Open}]..." \
	    -state normal
	$mm entryconfig [msgcat::mc {Open as}] \
	    -state normal
	$mm entryconfig [msgcat::mc {Import}] \
	    -state normal

	$bb.open configure -state normal
    } else {
	$mm entryconfig "[msgcat::mc {Open}]..." \
	    -state disabled
	$mm entryconfig [msgcat::mc {Open as}] \
	    -state disabled
	$mm entryconfig [msgcat::mc {Import}] \
	    -state disabled

	$bb.open configure -state disabled
    }

    if {$current(frame) != {}} {
	if {[$current(frame) has fits]} {
	    $mm entryconfig "[msgcat::mc {Save}]..." -state normal
	    $mm entryconfig [msgcat::mc {Save as}] -state normal
	    $mm entryconfig [msgcat::mc {Export}] -state normal
	    $mm entryconfig [msgcat::mc {Save Image}] -state normal
	    $mm entryconfig "[msgcat::mc {Create Movie}]..." -state normal
	    $mm entryconfig "[msgcat::mc {Display Header}]..." -state normal

	    if {[$current(frame) has fits mosaic]} {
		$mm.save entryconfig "[msgcat::mc {Mosaic WCS}]..." -state normal
		$mm.save entryconfig "[msgcat::mc {Mosaic WCS Segment}]..." -state normal
	    } else {
		$mm.save entryconfig "[msgcat::mc {Mosaic WCS}]..." -state disabled
		$mm.save entryconfig "[msgcat::mc {Mosaic WCS Segment}]..." -state disabled
	    }

	    $bb.save configure -state normal
	    $bb.movie configure -state normal
	    $bb.header configure -state normal
	} else {
	    $mm entryconfig "[msgcat::mc {Save}]..." -state disabled
	    $mm entryconfig [msgcat::mc {Save as}] -state disabled
	    $mm entryconfig [msgcat::mc {Export}] -state disabled
	    $mm entryconfig [msgcat::mc {Save Image}] -state disabled
	    $mm entryconfig "[msgcat::mc {Create Movie}]..." -state disabled
	    $mm entryconfig "[msgcat::mc {Display Header}]..." -state disabled

	    $bb.save configure -state disabled
	    $bb.movie configure -state disabled
	    $bb.header configure -state disabled
	}

	switch -- [$current(frame) get type] {
	    base {
		$mm.open entryconfig \
		    "[msgcat::mc {RGB Image}]..." -state disabled
		$mm.open entryconfig \
		    "[msgcat::mc {RGB Cube}]..." -state disabled
		$mm.save entryconfig \
		    "[msgcat::mc {RGB Image}]..." -state disabled
		$mm.save entryconfig \
		    "[msgcat::mc {RGB Cube}]..." -state disabled
		$mm.import entryconfig \
		    "[msgcat::mc {RGB Array}]..." -state disabled
		$mm.export entryconfig \
		    "[msgcat::mc {RGB Array}]..." -state disabled
	    }
	    rgb {
		$mm.open entryconfig \
		    "[msgcat::mc {RGB Image}]..." -state normal
		$mm.open entryconfig \
		    "[msgcat::mc {RGB Cube}]..." -state normal
		$mm.save entryconfig \
		    "[msgcat::mc {RGB Image}]..." -state normal
		$mm.save entryconfig \
		    "[msgcat::mc {RGB Cube}]..." -state normal
		$mm.import entryconfig \
		    "[msgcat::mc {RGB Array}]..." -state normal
		$mm.export entryconfig \
		    "[msgcat::mc {RGB Array}]..." -state normal
	    }
	    3d {
		$mm.open entryconfig \
		    "[msgcat::mc {RGB Image}]..." -state disabled
		$mm.open entryconfig \
		    "[msgcat::mc {RGB Cube}]..." -state disabled
		$mm.save entryconfig \
		    "[msgcat::mc {RGB Image}]..." -state disabled
		$mm.save entryconfig \
		    "[msgcat::mc {RGB Cube}]..." -state disabled
		$mm.import entryconfig \
		    "[msgcat::mc {RGB Array}]..." -state disabled
		$mm.export entryconfig \
		    "[msgcat::mc {RGB Array}]..." -state disabled
	    }
	}

	if {[info exists samp]} {
	    set ss [expr $ds9(menu,start)+2]

	    if {[$current(frame) has fits]} {

		$mm.samp entryconfig [msgcat::mc {Image}] \
		    -state normal
		if {[$mm.samp.image index end] >= $ss} {
		    $mm.samp.image delete $ss end
		}
		foreach args $samp(apps,image) {
		    foreach {id name} $args {
			$mm.samp.image add command -label $name \
			    -command "SAMPSendImageLoadFits $id"
		    }
		}
		$bb.sampimage configure -state normal

		if {[$current(frame) has fits bin]} {
		    $mm.samp entryconfig [msgcat::mc {Table}] -state normal
		    if {[$mm.samp.table index end] >= $ss} {
			$mm.samp.table delete $ss end
		    }
		    foreach args $samp(apps,table) {
			foreach {id name} $args {
			    $mm.samp.table add command -label $name \
				-command "SAMPSendTableLoadFits $id"
			}
		    }
		    $bb.samptable configure -state normal

		} else {
		    $mm.samp entryconfig [msgcat::mc {Table}] -state disabled
		    $bb.samptable configure -state disabled
		}
	    } else {
		$mm.samp entryconfig [msgcat::mc {Image}] -state disabled
		$mm.samp entryconfig [msgcat::mc {Table}] -state disabled
		$bb.sampimage configure -state disabled
		$bb.samptable configure -state disabled
	    }
	} else {
	    $mm.samp entryconfig [msgcat::mc {Image}] -state disabled
	    $mm.samp entryconfig [msgcat::mc {Table}] -state disabled
	    $bb.sampimage configure -state disabled
	    $bb.samptable configure -state disabled
	}
    } else {
	$mm entryconfig "[msgcat::mc {Save}]..." -state disabled
	$mm entryconfig [msgcat::mc {Save as}] -state disabled
	$mm entryconfig [msgcat::mc {Export}] -state disabled
	$mm entryconfig [msgcat::mc {Save Image}] -state disabled
	$mm entryconfig "[msgcat::mc {Create Movie}]..." -state disabled
	$mm entryconfig "[msgcat::mc {Display Header}]..." -state disabled

	$bb.save configure -state disabled
	$bb.movie configure -state disabled
	$bb.header configure -state disabled

	$mm.samp entryconfig [msgcat::mc {Image}] -state disabled
	$mm.samp entryconfig [msgcat::mc {Table}] -state disabled
	$bb.sampimage configure -state disabled
	$bb.samptable configure -state disabled
    }

    # XPA
    if {[info exists xpa]} {
	$mm.xpa entryconfig "[msgcat::mc {Information}]..." -state normal
	$mm.xpa entryconfig [msgcat::mc {Disconnect}] -state normal
    } else {
	$mm.xpa entryconfig "[msgcat::mc {Information}]..." -state disabled
	$mm.xpa entryconfig [msgcat::mc {Disconnect}] -state disabled
    }

    # SAMP
    if {[info exists samp]} {
	$mm.samp entryconfig [msgcat::mc {Connect}] -state disabled
	$mm.samp entryconfig [msgcat::mc {Disconnect}] -state normal
    } else {
	$mm.samp entryconfig [msgcat::mc {Connect}] -state normal
	$mm.samp entryconfig [msgcat::mc {Disconnect}] -state disabled
    }
}

