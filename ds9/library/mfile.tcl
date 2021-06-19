#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

# Menus

proc FileMainMenu {} {
    global ds9

    ThemeMenu $ds9(mb).file 
    $ds9(mb).file add command -label "[msgcat::mc {Open}]..." \
	-command [list OpenDialog fits] -accelerator "${ds9(ctrl)}O"
    $ds9(mb).file add cascade -label [msgcat::mc {Open as}] \
	-menu $ds9(mb).file.open
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
    $ds9(mb).file add command -label "[msgcat::mc {Prism}]..." \
	-command [list PrismDialogLoad prism]
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
    $ds9(mb).file add command -label [msgcat::mc {Header}] \
	-command DisplayHeaderMenu 
    $ds9(mb).file add command -label [msgcat::mc {Notes}] \
	-command DisplayNotes 
    $ds9(mb).file add separator
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
    $ds9(mb).file add command -label "[msgcat::mc {Page Setup}]..." \
	-command PSPageSetup -accelerator "${ds9(shiftctrl)}P"
    $ds9(mb).file add command -label "[msgcat::mc {Print}]..." \
	-command PSPrint -accelerator "${ds9(ctrl)}P"

    switch $ds9(wm) {
	x11 -
	win32 {
	    $ds9(mb).file add separator
	    $ds9(mb).file add command \
		-label [msgcat::mc {Exit}] -command QuitDS9 \
		-accelerator "${ds9(ctrl)}Q"
	}
	aqua {}
    }

    # File Open Menu
    ThemeMenu $ds9(mb).file.open
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
    ThemeMenu $ds9(mb).file.save
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
    ThemeMenu $ds9(mb).file.import
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
    ThemeMenu $ds9(mb).file.import.slice
    $ds9(mb).file.import.slice add command -label {GIF...} \
	-command [list ImportDialog gif {} slice]
    $ds9(mb).file.import.slice add command -label {TIFF...} \
	-command [list ImportDialog tiff {} slice]
    $ds9(mb).file.import.slice add command -label {JPEG...} \
	-command [list ImportDialog jpeg {} slice]
    $ds9(mb).file.import.slice add command -label {PNG...} \
	-command [list ImportDialog png {} slice]

    # File Export Menu
    ThemeMenu $ds9(mb).file.export
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
    ThemeMenu $ds9(mb).file.saveimage
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
    ThemeMenu $ds9(mb).file.preserve
    $ds9(mb).file.preserve add checkbutton -label [msgcat::mc {Pan}] \
	-variable panzoom(preserve) -command PreservePan
    $ds9(mb).file.preserve add checkbutton -label [msgcat::mc {Region}] \
	-variable marker(preserve) -command MarkerPreserve

    ThemeMenu $ds9(mb).file.samp
    $ds9(mb).file.samp add command -label [msgcat::mc {Connect}] \
	-command SAMPConnect
    $ds9(mb).file.samp add command -label [msgcat::mc {Disconnect}] \
	-command SAMPDisconnect
    $ds9(mb).file.samp add separator
    $ds9(mb).file.samp add cascade -label [msgcat::mc {Image}] \
	-menu $ds9(mb).file.samp.image
    $ds9(mb).file.samp add cascade -label [msgcat::mc {Table}] \
	-menu $ds9(mb).file.samp.table

    ThemeMenu $ds9(mb).file.samp.image
    $ds9(mb).file.samp.image add command -label [msgcat::mc {Broadcast}] \
	-command "SAMPSendImageLoadFits {}"
    $ds9(mb).file.samp.image add separator

    ThemeMenu $ds9(mb).file.samp.table
    $ds9(mb).file.samp.table add command -label [msgcat::mc {Broadcast}] \
	-command "SAMPSendTableLoadFits {}"
    $ds9(mb).file.samp.table add separator

    ThemeMenu $ds9(mb).file.xpa
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
    bind $ds9(top) <<PageSetup>> PSPageSetup
    bind $ds9(top) <<Print>> PSPrint
    switch $ds9(wm) {
	x11 -
	win32 {bind $ds9(top) <<Quit>> QuitDS9}
	aqua {}
    }
}

proc PrefsDialogFileMenu {w} {
    set f [ttk::labelframe $w.mfile -text [msgcat::mc {File}]]

    ttk::menubutton $f.menu -text [msgcat::mc {Menu}] -menu $f.menu.menu
    PrefsDialogButtonbarFile $f.buttonbar

    grid $f.menu $f.buttonbar -padx 2 -pady 2

    set m $f.menu.menu
    ThemeMenu $m
    $m add cascade -label [msgcat::mc {Preserve During Load}] \
	-menu $m.preserve

    global pscale
    global ppanzoom
    global pmarker
    ThemeMenu $m.preserve
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
	file,open,slice 0
	file,open,rgb,image 0
	file,open,rgb,cube 0
	file,open,me,cube 0
	file,open,me,frames 0
	file,open,mosaic,wcs 0
	file,open,mosaic,wcs,seg 0
	file,open,mosaic,iraf 0
	file,open,mosaic,iraf,seg 0
	file,open,mosaic,wfpc2 0
	file,open,url 0

	file,save 1
	file,save,slice 0
	file,save,rgb,image 0
	file,save,rgb,cube 0
	file,save,me,cube 0
	file,save,mosaic,wcs 0
	file,save,mosaic,wcs,seg 0

	file,import,array 0
	file,import,nrrd 0
	file,import,envi 0
	file,import,rgbarray 0
	file,import,gif 0
	file,import,tiff 0
	file,import,jpeg 0
	file,import,png 0

	file,import,slice,gif 0
	file,import,slice,tiff 0
	file,import,slice,jpeg 0
	file,import,slice,png 0

	file,export,array 0
	file,export,nrrd 0
	file,export,envi 0
	file,export,rgbarray 0
	file,export,gif 0
	file,export,tiff 0
	file,export,jpeg 0
	file,export,png 0

	file,saveimage,fits 0
	file,saveimage,eps 0
	file,saveimage,gif 0
	file,saveimage,tiff 0
	file,saveimage,jpeg 0
	file,saveimage,png 0
	
	file,movie 0
	file,backup 0
	file,restore 0
	file,header 1
	file,notes 1
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

    ButtonButton $ds9(buttons).file.openslice \
	[string tolower [msgcat::mc {Open Slice}]] \
	[list OpenDialog fits {} slice]
    ButtonButton $ds9(buttons).file.openrgbimage \
	[string tolower [msgcat::mc {Open RGB Image}]] \
	[list OpenDialog rgbimage]
    ButtonButton $ds9(buttons).file.openrgbcube \
	[string tolower [msgcat::mc {Open RGB Cube}]] \
	[list OpenDialog rgbcube]
    ButtonButton $ds9(buttons).file.openmecube \
	[string tolower [msgcat::mc {Open ME Cube}]] \
	[list OpenDialog mecube]
    ButtonButton $ds9(buttons).file.openmeframes \
	[string tolower [msgcat::mc {Open ME Frames}]] \
	[list OpenDialog multiframe]
    ButtonButton $ds9(buttons).file.openmosaicwcs \
	[string tolower [msgcat::mc {Open Mosaic WCS}]] \
	[list OpenDialog mosaicimagewcs]
    ButtonButton $ds9(buttons).file.openmosaicwcsseg \
	[string tolower [msgcat::mc {Open Mosaic WCS Seg}]] \
	[list OpenDialog mosaicwcs]
    ButtonButton $ds9(buttons).file.openmosaiciraf \
	[string tolower [msgcat::mc {Open Mosaic IRAF}]] \
	[list OpenDialog mosaicimageiraf]
    ButtonButton $ds9(buttons).file.openmosaicirafseg \
	[string tolower [msgcat::mc {Open Mosaic IRAF Seg}]] \
	[list OpenDialog mosaiciraf]
    ButtonButton $ds9(buttons).file.openmosaicwfpc2 \
	[string tolower [msgcat::mc {Open Mosaic WFPC2}]] \
	[list OpenDialog mosaicimagewfpc2]
    ButtonButton $ds9(buttons).file.openurl \
	[string tolower [msgcat::mc {Open URL}]] \
	[list OpenURLFits]

    ButtonButton $ds9(buttons).file.save \
	[string tolower [msgcat::mc {Save}]] \
	[list SaveDialog fits]

    ButtonButton $ds9(buttons).file.saveslice \
	[string tolower [msgcat::mc {Save Slice}]] \
	[list SaveDialog slice]
    ButtonButton $ds9(buttons).file.savergbimage \
	[string tolower [msgcat::mc {Save RGB Image}]] \
	[list SaveDialog rgbimage]
    ButtonButton $ds9(buttons).file.savergbcube \
	[string tolower [msgcat::mc {Save RGB Cube}]] \
	[list SaveDialog rgbcube]
    ButtonButton $ds9(buttons).file.savemecube \
	[string tolower [msgcat::mc {Save ME Cube}]] \
	[list SaveDialog mecube]
    ButtonButton $ds9(buttons).file.savemosaicwcs \
	[string tolower [msgcat::mc {Save Mosaic WCS}]] \
	[list SaveDialog mosaicimagewcs]
    ButtonButton $ds9(buttons).file.savemosaicwcsseg \
	[string tolower [msgcat::mc {Save Mosaic WCS Seg}]] \
	[list SaveDialog mosaicwcs]

    ButtonButton $ds9(buttons).file.importarray \
	[string tolower [msgcat::mc {Import Array}]] \
	[list ImportDialog array]
    ButtonButton $ds9(buttons).file.importnrrd \
	[string tolower [msgcat::mc {Import NRRD}]] \
	[list ImportDialog nrrd]
    ButtonButton $ds9(buttons).file.importenvi \
	[string tolower [msgcat::mc {Import ENVI}]] \
	[list ImportDialog envi]
    ButtonButton $ds9(buttons).file.importrgbarray \
	[string tolower [msgcat::mc {Import RGB Array}]] \
	[list ImportDialog rgbarray]
    ButtonButton $ds9(buttons).file.importgif \
	[string tolower [msgcat::mc {Import GIF}]] \
	[list ImportDialog gif]
    ButtonButton $ds9(buttons).file.importtiff \
	[string tolower [msgcat::mc {Import TIFF}]] \
	[list ImportDialog tiff]
    ButtonButton $ds9(buttons).file.importjpeg \
	[string tolower [msgcat::mc {Import JPEG}]] \
	[list ImportDialog jpeg]
    ButtonButton $ds9(buttons).file.importpng \
	[string tolower [msgcat::mc {Import PNG}]] \
	[list ImportDialog png]

    ButtonButton $ds9(buttons).file.importslicegif \
	[string tolower [msgcat::mc {Import Slice GIF}]] \
	[list ImportDialog gif {} slice]
    ButtonButton $ds9(buttons).file.importslicetiff \
	[string tolower [msgcat::mc {Import Slice TIFF}]] \
	[list ImportDialog gif {} tiff]
    ButtonButton $ds9(buttons).file.importslicejpeg \
	[string tolower [msgcat::mc {Import Slice JPEG}]] \
	[list ImportDialog gif {} jpeg]
    ButtonButton $ds9(buttons).file.importslicepng \
	[string tolower [msgcat::mc {Import Slice PNG}]] \
	[list ImportDialog gif {} png]

    ButtonButton $ds9(buttons).file.exportarray \
	[string tolower [msgcat::mc {Export Array}]] \
	[list ExportDialog array]
    ButtonButton $ds9(buttons).file.exportnrrd \
	[string tolower [msgcat::mc {Export NRRD}]] \
	[list ExportDialog nrrd]
    ButtonButton $ds9(buttons).file.exportenvi \
	[string tolower [msgcat::mc {Export ENVI}]] \
	[list ExportDialog envi]
    ButtonButton $ds9(buttons).file.exportrgbarray \
	[string tolower [msgcat::mc {Export RGB Array}]] \
	[list ExportDialog rgbarray]
    ButtonButton $ds9(buttons).file.exportgif \
	[string tolower [msgcat::mc {Export GIF}]] \
	[list ExportDialog gif]
    ButtonButton $ds9(buttons).file.exporttiff \
	[string tolower [msgcat::mc {Export TIFF}]] \
	[list ExportDialog tiff]
    ButtonButton $ds9(buttons).file.exportjpeg \
	[string tolower [msgcat::mc {Export JPEG}]] \
	[list ExportDialog jpeg]
    ButtonButton $ds9(buttons).file.exportpng \
	[string tolower [msgcat::mc {Export PNG}]] \
	[list ExportDialog png]

    ButtonButton $ds9(buttons).file.saveimagefits \
	[string tolower [msgcat::mc {Save Image FITS}]] \
	[list SaveImageDialog fits]
    ButtonButton $ds9(buttons).file.saveimageeps \
	[string tolower [msgcat::mc {Save Image EPS}]] \
	[list SaveImageDialog eps]
    ButtonButton $ds9(buttons).file.saveimagegif \
	[string tolower [msgcat::mc {Save Image GIF}]] \
	[list SaveImageDialog gif]
    ButtonButton $ds9(buttons).file.saveimagetiff \
	[string tolower [msgcat::mc {Save Image TIFF}]] \
	[list SaveImageDialog tiff]
    ButtonButton $ds9(buttons).file.saveimagejpeg \
	[string tolower [msgcat::mc {Save Image JPEG}]] \
	[list SaveImageDialog jpeg]
    ButtonButton $ds9(buttons).file.saveimagepng \
	[string tolower [msgcat::mc {Save Image PNG}]] \
	[list SaveImageDialog png]

    ButtonButton $ds9(buttons).file.movie \
	[string tolower [msgcat::mc {Movie}]] MovieDialog

    ButtonButton $ds9(buttons).file.backup \
	[string tolower [msgcat::mc {Backup}]] BackupDialog
    ButtonButton $ds9(buttons).file.restore \
	[string tolower [msgcat::mc {Restore}]] RestoreDialog

    ButtonButton $ds9(buttons).file.header \
	[string tolower [msgcat::mc {Header}]] DisplayHeaderMenu
    ButtonButton $ds9(buttons).file.notes \
	[string tolower [msgcat::mc {Notes}]] DisplayNotes

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

    ButtonButton $ds9(buttons).file.page \
	[string tolower [msgcat::mc {Page Setup}]] PSPageSetup
    ButtonButton $ds9(buttons).file.print \
	[string tolower [msgcat::mc {Print}]] PSPrint

    ButtonButton $ds9(buttons).file.exit \
	[string tolower [msgcat::mc {Exit}]] QuitDS9

    set buttons(file) "
        $ds9(buttons).file.open pbuttons(file,open)
        $ds9(buttons).file.openslice pbuttons(file,open,slice)
        $ds9(buttons).file.openrgbimage pbuttons(file,open,rgb,image)
        $ds9(buttons).file.openrgbcube pbuttons(file,open,rgb,cube)
        $ds9(buttons).file.openmecube pbuttons(file,open,me,cube)
        $ds9(buttons).file.openmeframes pbuttons(file,open,me,frames)
        $ds9(buttons).file.openmosaicwcs pbuttons(file,open,mosaic,wcs)
        $ds9(buttons).file.openmosaicwcsseg pbuttons(file,open,mosaic,wcs,seg)
        $ds9(buttons).file.openmosaiciraf pbuttons(file,open,mosaic,iraf)
        $ds9(buttons).file.openmosaicirafseg pbuttons(file,open,mosaic,iraf,seg)
        $ds9(buttons).file.openmosaicwfpc2 pbuttons(file,open,mosaic,wfpc2)
        $ds9(buttons).file.openurl pbuttons(file,open,url)

        $ds9(buttons).file.save pbuttons(file,save)
        $ds9(buttons).file.saveslice pbuttons(file,save,slice)
        $ds9(buttons).file.savergbimage pbuttons(file,save,rgb,image)
        $ds9(buttons).file.savergbcube pbuttons(file,save,rgb,cube)
        $ds9(buttons).file.savemecube pbuttons(file,save,me,cube)
        $ds9(buttons).file.savemosaicwcs pbuttons(file,save,mosaic,wcs)
        $ds9(buttons).file.savemosaicwcsseg pbuttons(file,save,mosaic,wcs,seg)

        $ds9(buttons).file.importarray pbuttons(file,import,array)
        $ds9(buttons).file.importnrrd pbuttons(file,import,nrrd)
        $ds9(buttons).file.importenvi pbuttons(file,import,envi)
        $ds9(buttons).file.importrgbarray pbuttons(file,import,rgbarray)
        $ds9(buttons).file.importgif pbuttons(file,import,gif)
        $ds9(buttons).file.importtiff pbuttons(file,import,tiff)
        $ds9(buttons).file.importjpeg pbuttons(file,import,jpeg)
        $ds9(buttons).file.importpng pbuttons(file,import,png)

        $ds9(buttons).file.importslicegif pbuttons(file,import,slice,gif)
        $ds9(buttons).file.importslicetiff pbuttons(file,import,slice,tiff)
        $ds9(buttons).file.importslicejpeg pbuttons(file,import,slice,jpeg)
        $ds9(buttons).file.importslicepng pbuttons(file,import,slice,png)

        $ds9(buttons).file.exportarray pbuttons(file,export,array)
        $ds9(buttons).file.exportnrrd pbuttons(file,export,nrrd)
        $ds9(buttons).file.exportenvi pbuttons(file,export,envi)
        $ds9(buttons).file.exportrgbarray pbuttons(file,export,rgbarray)
        $ds9(buttons).file.exportgif pbuttons(file,export,gif)
        $ds9(buttons).file.exporttiff pbuttons(file,export,tiff)
        $ds9(buttons).file.exportjpeg pbuttons(file,export,jpeg)
        $ds9(buttons).file.exportpng pbuttons(file,export,png)

        $ds9(buttons).file.saveimagefits pbuttons(file,saveimage,fits)
        $ds9(buttons).file.saveimageeps pbuttons(file,saveimage,eps)
        $ds9(buttons).file.saveimagegif pbuttons(file,saveimage,gif)
        $ds9(buttons).file.saveimagetiff pbuttons(file,saveimage,tiff)
        $ds9(buttons).file.saveimagejpeg pbuttons(file,saveimage,jpeg)
        $ds9(buttons).file.saveimagepng pbuttons(file,saveimage,png)

        $ds9(buttons).file.movie pbuttons(file,movie)
        $ds9(buttons).file.backup pbuttons(file,backup)
        $ds9(buttons).file.restore pbuttons(file,restore)
        $ds9(buttons).file.header pbuttons(file,header)
        $ds9(buttons).file.notes pbuttons(file,notes)
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
    ThemeMenu $m
    $m add checkbutton -label "[msgcat::mc {Open}]..." \
	-variable pbuttons(file,open) -command {UpdateButtons buttons(file)}
    $m add cascade -label [msgcat::mc {Open as}] -menu $m.open
    $m add separator
    $m add checkbutton -label "[msgcat::mc {Save}]..." \
	-variable pbuttons(file,save) -command {UpdateButtons buttons(file)}
    $m add cascade -label [msgcat::mc {Save as}] -menu $m.save
    $m add separator
    $m add cascade -label [msgcat::mc {Import}] -menu $m.import
    $m add cascade -label [msgcat::mc {Export}] -menu $m.export
    $m add separator
    $m add cascade -label [msgcat::mc {Save Image}] -menu $m.saveimage
    $m add checkbutton -label "[msgcat::mc {Create Movie}]..." \
	-variable pbuttons(file,movie) -command {UpdateButtons buttons(file)}
    $m add separator
    $m add checkbutton -label "[msgcat::mc {Backup}]..." \
	-variable pbuttons(file,backup) -command {UpdateButtons buttons(file)}
    $m add checkbutton -label "[msgcat::mc {Restore}]..." \
	-variable pbuttons(file,restore) -command {UpdateButtons buttons(file)}
    $m add separator
    $m add checkbutton -label [msgcat::mc {Header}] \
	-variable pbuttons(file,header) -command {UpdateButtons buttons(file)}
    $m add checkbutton -label [msgcat::mc {Notes}] \
	-variable pbuttons(file,notes) -command {UpdateButtons buttons(file)}
    $m add separator
    $m add cascade -label [msgcat::mc {XPA}] -menu $m.xpa
    $m add cascade -label [msgcat::mc {SAMP}] -menu $m.samp
    $m add separator
    $m add checkbutton -label "[msgcat::mc {Open TCL Console}]..." \
	-variable pbuttons(file,console) -command {UpdateButtons buttons(file)}
    $m add checkbutton -label "[msgcat::mc {Source TCL}]..." \
	-variable pbuttons(file,tcl) -command {UpdateButtons buttons(file)}
    $m add separator
    $m add checkbutton \
	-label "[msgcat::mc {Page Setup}]..." \
	-variable pbuttons(file,page) \
	-command {UpdateButtons buttons(file)}
    $m add checkbutton \
	-label "[msgcat::mc {Print}]..." \
	-variable pbuttons(file,print) \
	-command {UpdateButtons buttons(file)}
    $m add separator
    $m add checkbutton -label [msgcat::mc {Exit}] \
	-variable pbuttons(file,exit) -command {UpdateButtons buttons(filew)}

    ThemeMenu $m.open
    $m.open add checkbutton \
	-label "[msgcat::mc {Slice}]..." \
	-variable pbuttons(file,open,slice) \
	-command {UpdateButtons buttons(file)}
    $m.open add separator
    $m.open add checkbutton \
	-label "[msgcat::mc {RGB Image}]..." \
	-variable pbuttons(file,open,rgb,image) \
	-command {UpdateButtons buttons(file)}
    $m.open add checkbutton \
	-label "[msgcat::mc {RGB Cube}]..." \
	-variable pbuttons(file,open,rgb,cube) \
	-command {UpdateButtons buttons(file)}
    $m.open add separator
    $m.open add checkbutton \
	-label "[msgcat::mc {Muliple Extension Cube}]..." \
	-variable pbuttons(file,open,me,cube) \
	-command {UpdateButtons buttons(file)}
    $m.open add checkbutton \
	-label "[msgcat::mc {Muliple Extension Frames}]..." \
	-variable pbuttons(file,open,me,frames) \
	-command {UpdateButtons buttons(file)}
    $m.open add separator
    $m.open add checkbutton \
	-label "[msgcat::mc {Mosaic WCS}]..." \
	-variable pbuttons(file,open,mosaic,wcs) \
	-command {UpdateButtons buttons(file)}
    $m.open add checkbutton \
	-label "[msgcat::mc {Mosaic WCS Segment}]..." \
	-variable pbuttons(file,open,mosaic,wcs,seg) \
	-command {UpdateButtons buttons(file)}
    $m.open add checkbutton \
	-label "[msgcat::mc {Mosaic IRAF}]..." \
	-variable pbuttons(file,open,mosaic,iraf) \
	-command {UpdateButtons buttons(file)}
    $m.open add checkbutton \
	-label "[msgcat::mc {Mosaic IRAF Segment}]..." \
	-variable pbuttons(file,open,mosaic,iraf,seg) \
	-command {UpdateButtons buttons(file)}
    $m.open add checkbutton \
	-label "[msgcat::mc {Mosaic WFPC2}]..." \
	-variable pbuttons(file,open,mosaic,wfpc2) \
	-command {UpdateButtons buttons(file)}
    $m.open add separator
    $m.open add checkbutton \
	-label "[msgcat::mc {URL}]..." \
	-variable pbuttons(file,open,url) \
	-command {UpdateButtons buttons(file)}

    ThemeMenu $m.save
    $m.save add checkbutton \
	-label "[msgcat::mc {Slice}]..." \
	-variable pbuttons(file,save,slice) \
	-command {UpdateButtons buttons(file)}
    $m.save add separator
    $m.save add checkbutton \
	-label "[msgcat::mc {RGB Image}]..." \
	-variable pbuttons(file,save,rgb,image) \
	-command {UpdateButtons buttons(file)}
    $m.save add checkbutton \
	-label "[msgcat::mc {RGB Cube}]..." \
	-variable pbuttons(file,save,rgb,cube) \
	-command {UpdateButtons buttons(file)}
    $m.save add separator
    $m.save add checkbutton \
	-label "[msgcat::mc {Muliple Extension Cube}]..." \
	-variable pbuttons(file,save,me,cube) \
	-command {UpdateButtons buttons(file)}
    $m.save add separator
    $m.save add checkbutton \
	-label "[msgcat::mc {Mosaic WCS}]..." \
	-variable pbuttons(file,save,mosaic,wcs) \
	-command {UpdateButtons buttons(file)}
    $m.save add checkbutton \
	-label "[msgcat::mc {Mosaic WCS Segment}]..." \
	-variable pbuttons(file,save,mosaic,wcs,seg) \
	-command {UpdateButtons buttons(file)}

    ThemeMenu $m.import
    $m.import add cascade -label [msgcat::mc {Slice}] -menu $m.import.slice
    $m.import add separator
    $m.import add checkbutton \
	-label "[msgcat::mc {Array}]..." \
	-variable pbuttons(file,import,array) \
	-command {UpdateButtons buttons(file)}
    $m.import add checkbutton \
	-label "[msgcat::mc {NRRD}]..." \
	-variable pbuttons(file,import,nrrd) \
	-command {UpdateButtons buttons(file)}
    $m.import add checkbutton \
	-label "[msgcat::mc {ENVI}]..." \
	-variable pbuttons(file,import,envi) \
	-command {UpdateButtons buttons(file)}
    $m.import add separator
    $m.import add checkbutton \
	-label "[msgcat::mc {RGB Array}]..." \
	-variable pbuttons(file,import,rgbarray) \
	-command {UpdateButtons buttons(file)}
    $m.import add separator
    $m.import add checkbutton \
	-label "[msgcat::mc {GIF}]..." \
	-variable pbuttons(file,import,gif) \
	-command {UpdateButtons buttons(file)}
    $m.import add checkbutton \
	-label "[msgcat::mc {TIFF}]..." \
	-variable pbuttons(file,import,tiff) \
	-command {UpdateButtons buttons(file)}
    $m.import add checkbutton \
	-label "[msgcat::mc {JPEG}]..." \
	-variable pbuttons(file,import,jpeg) \
	-command {UpdateButtons buttons(file)}
    $m.import add checkbutton \
	-label "[msgcat::mc {PNG}]..." \
	-variable pbuttons(file,import,png) \
	-command {UpdateButtons buttons(file)}

    ThemeMenu $m.import.slice
    $m.import.slice add checkbutton \
	-label "[msgcat::mc {GIF}]..." \
	-variable pbuttons(file,import,slice,gif) \
	-command {UpdateButtons buttons(file)}
    $m.import.slice add checkbutton \
	-label "[msgcat::mc {TIFF}]..." \
	-variable pbuttons(file,import,slice,tiff) \
	-command {UpdateButtons buttons(file)}
    $m.import.slice add checkbutton \
	-label "[msgcat::mc {JPEG}]..." \
	-variable pbuttons(file,import,slice,jpeg) \
	-command {UpdateButtons buttons(file)}
    $m.import.slice add checkbutton \
	-label "[msgcat::mc {PNG}]..." \
	-variable pbuttons(file,import,slice,png) \
	-command {UpdateButtons buttons(file)}

    ThemeMenu $m.export
    $m.export add checkbutton \
	-label "[msgcat::mc {Array}]..." \
	-variable pbuttons(file,export,array) \
	-command {UpdateButtons buttons(file)}
    $m.export add checkbutton \
	-label "[msgcat::mc {NRRD}]..." \
	-variable pbuttons(file,export,nrrd) \
	-command {UpdateButtons buttons(file)}
    $m.export add checkbutton \
	-label "[msgcat::mc {ENVI}]..." \
	-variable pbuttons(file,export,envi) \
	-command {UpdateButtons buttons(file)}
    $m.export add separator
    $m.export add checkbutton \
	-label "[msgcat::mc {RGB Array}]..." \
	-variable pbuttons(file,export,rgbarray) \
	-command {UpdateButtons buttons(file)}
    $m.export add separator
    $m.export add checkbutton \
	-label "[msgcat::mc {GIF}]..." \
	-variable pbuttons(file,export,gif) \
	-command {UpdateButtons buttons(file)}
    $m.export add checkbutton \
	-label "[msgcat::mc {TIFF}]..." \
	-variable pbuttons(file,export,tiff) \
	-command {UpdateButtons buttons(file)}
    $m.export add checkbutton \
	-label "[msgcat::mc {JPEG}]..." \
	-variable pbuttons(file,export,jpeg) \
	-command {UpdateButtons buttons(file)}
    $m.export add checkbutton \
	-label "[msgcat::mc {PNG}]..." \
	-variable pbuttons(file,export,png) \
	-command {UpdateButtons buttons(file)}

    ThemeMenu $m.saveimage
    $m.saveimage add checkbutton \
	-label "[msgcat::mc {FITS}]..." \
	-variable pbuttons(file,saveimage,fits) \
	-command {UpdateButtons buttons(file)}
    $m.saveimage add checkbutton \
	-label "[msgcat::mc {EPS}]..." \
	-variable pbuttons(file,saveimage,eps) \
	-command {UpdateButtons buttons(file)}
    $m.saveimage add checkbutton \
	-label "[msgcat::mc {GIF}]..." \
	-variable pbuttons(file,saveimage,gif) \
	-command {UpdateButtons buttons(file)}
    $m.saveimage add checkbutton \
	-label "[msgcat::mc {TIFF}]..." \
	-variable pbuttons(file,saveimage,tiff) \
	-command {UpdateButtons buttons(file)}
    $m.saveimage add checkbutton \
	-label "[msgcat::mc {JPEG}]..." \
	-variable pbuttons(file,saveimage,jpeg) \
	-command {UpdateButtons buttons(file)}
    $m.saveimage add checkbutton \
	-label "[msgcat::mc {PNG}]..." \
	-variable pbuttons(file,saveimage,png) \
	-command {UpdateButtons buttons(file)}

    ThemeMenu $m.xpa
    $m.xpa add checkbutton -label "[msgcat::mc {Information}]..." \
	-variable pbuttons(file,xpa,info) \
	-command {UpdateButtons buttons(file)}

    ThemeMenu $m.samp
    $m.samp add checkbutton -label [msgcat::mc {Image}] \
	-variable pbuttons(file,samp,image) \
	-command {UpdateButtons buttons(file)}
    $m.samp add checkbutton -label [msgcat::mc {Table}] \
	-variable pbuttons(file,samp,table) \
	-command {UpdateButtons buttons(file)}
}

# Support

proc UpdateFileMenu {} {
    global debug
    if {$debug(tcl,update)} {
	puts stderr "UpdateFileMenu"
    }

    UpdateFileMenuOpen
    UpdateFileMenuSave
    UpdateFileMenuImport
    UpdateFileMenuExport
    UpdateFileMenuSaveImage
    UpdateFileMenuMovie
    UpdateFileMenuHeader
    UpdateFileMenuXPA
    UpdateFileMenuSAMP
}

proc UpdateFileMenuOpen {} {
    global ds9
    global current
 
    set mm $ds9(mb).file
    set bb $ds9(buttons).file

    $mm entryconfig "[msgcat::mc {Open}]..." -state disabled
    $mm entryconfig [msgcat::mc {Open as}] -state disabled

    $bb.open configure -state disabled
    $bb.openslice configure -state disabled
    $bb.openrgbimage configure -state disabled
    $bb.openrgbcube configure -state disabled
    $bb.openmecube configure -state disabled
    $bb.openmeframes configure -state disabled
    $bb.openmosaicwcs configure -state disabled
    $bb.openmosaicwcsseg configure -state disabled
    $bb.openmosaiciraf configure -state disabled
    $bb.openmosaicirafseg configure -state disabled
    $bb.openmosaicwfpc2 configure -state disabled
    $bb.openurl configure -state disabled

    if {$current(frame) == {}} {
	return
    }

    $mm entryconfig "[msgcat::mc {Open}]..." -state normal
    $mm entryconfig [msgcat::mc {Open as}] -state normal

    $bb.open configure -state normal
    $bb.openslice configure -state normal
    $bb.openmecube configure -state normal
    $bb.openmeframes configure -state normal
    $bb.openmosaicwcs configure -state normal
    $bb.openmosaicwcsseg configure -state normal
    $bb.openmosaiciraf configure -state normal
    $bb.openmosaicirafseg configure -state normal
    $bb.openmosaicwfpc2 configure -state normal
    $bb.openurl configure -state normal

    switch -- [$current(frame) get type] {
	base {
	    $mm.open entryconfig "[msgcat::mc {RGB Image}]..." -state disabled
	    $mm.open entryconfig "[msgcat::mc {RGB Cube}]..." -state disabled
	    $bb.openrgbimage configure -state disabled
	    $bb.openrgbcube configure -state disabled
	}
	rgb {
	    $mm.open entryconfig "[msgcat::mc {RGB Image}]..." -state normal
	    $mm.open entryconfig "[msgcat::mc {RGB Cube}]..." -state normal
	    $bb.openrgbimage configure -state normal
	    $bb.openrgbcube configure -state normal
	}
	3d {
	    $mm.open entryconfig "[msgcat::mc {RGB Image}]..." -state disabled
	    $mm.open entryconfig "[msgcat::mc {RGB Cube}]..." -state disabled
	    $bb.openrgbimage configure -state disabled
	    $bb.openrgbcube configure -state disabled
	}
    }

}

proc UpdateFileMenuSave {} {
    global ds9
    global current
 
    set mm $ds9(mb).file
    set bb $ds9(buttons).file

    $mm entryconfig "[msgcat::mc {Save}]..." -state disabled
    $mm entryconfig [msgcat::mc {Save as}] -state disabled

    $bb.save configure -state disabled
    $bb.saveslice configure -state disabled
    $bb.savergbimage configure -state disabled
    $bb.savergbcube configure -state disabled
    $bb.savemecube configure -state disabled
    $bb.savemosaicwcs configure -state disabled
    $bb.savemosaicwcsseg configure -state disabled

    if {$current(frame) == {}} {
	return
    }

    if {![$current(frame) has fits]} {
	return
    }

    $mm entryconfig "[msgcat::mc {Save}]..." -state normal
    $mm entryconfig [msgcat::mc {Save as}] -state normal

    $bb.save configure -state normal
    $bb.saveslice configure -state normal
    $bb.savemecube configure -state normal

    if {[$current(frame) has fits mosaic]} {
	$mm.save entryconfig "[msgcat::mc {Mosaic WCS}]..." -state normal
	$mm.save entryconfig "[msgcat::mc {Mosaic WCS Segment}]..." \
	    -state normal
	$bb.savemosaicwcs configure -state normal
	$bb.savemosaicwcsseg configure -state normal
    } else {
	$mm.save entryconfig "[msgcat::mc {Mosaic WCS}]..." -state disabled
	$mm.save entryconfig "[msgcat::mc {Mosaic WCS Segment}]..." \
	    -state disabled
	$bb.savemosaicwcs configure -state disabled
	$bb.savemosaicwcsseg configure -state disabled
    }

    switch -- [$current(frame) get type] {
	base {
	    $mm.save entryconfig "[msgcat::mc {RGB Image}]..." -state disabled
	    $mm.save entryconfig "[msgcat::mc {RGB Cube}]..." -state disabled
	    $bb.savergbimage configure -state disabled
	    $bb.savergbcube configure -state disabled
	}
	rgb {
	    $mm.save entryconfig "[msgcat::mc {RGB Image}]..." -state normal
	    $mm.save entryconfig "[msgcat::mc {RGB Cube}]..." -state normal
	    $bb.savergbimage configure -state normal
	    $bb.savergbcube configure -state normal
	}
	3d {
	    $mm.save entryconfig "[msgcat::mc {RGB Image}]..." -state disabled
	    $mm.save entryconfig "[msgcat::mc {RGB Cube}]..." -state disabled
	    $bb.savergbimage configure -state disabled
	    $bb.savergbcube configure -state disabled
	}
    }
}

proc UpdateFileMenuImport {} {
    global ds9
    global current

    set mm $ds9(mb).file
    set bb $ds9(buttons).file

    $mm entryconfig [msgcat::mc {Import}] -state disabled
    if {$current(frame) != {}} {
	$mm entryconfig [msgcat::mc {Import}] -state normal
	switch -- [$current(frame) get type] {
	    base {
		$mm.import entryconfig \
		    "[msgcat::mc {RGB Array}]..." -state disabled
	    }
	    rgb {
		$mm.import entryconfig \
		    "[msgcat::mc {RGB Array}]..." -state normal
	    }
	    3d {
		$mm.import entryconfig \
		    "[msgcat::mc {RGB Array}]..." -state disabled
	    }
	}
    }
}

proc UpdateFileMenuExport {} {
    global ds9
    global current

    set mm $ds9(mb).file
    set bb $ds9(buttons).file

    $mm entryconfig [msgcat::mc {Export}] -state disabled
    $bb.exportarray configure -state disabled
    $bb.exportnrrd configure -state disabled
    $bb.exportenvi configure -state disabled
    $bb.exportrgbarray configure -state disabled
    $bb.exportgif configure -state disabled
    $bb.exporttiff configure -state disabled
    $bb.exportjpeg configure -state disabled
    $bb.exportpng configure -state disabled

    if {$current(frame) != {}} {
	if {[$current(frame) has fits]} {
	    $mm entryconfig [msgcat::mc {Export}] -state normal
	    $bb.exportarray configure -state normal
	    $bb.exportnrrd configure -state normal
	    $bb.exportenvi configure -state normal
	    $bb.exportrgbarray configure -state normal
	    $bb.exportgif configure -state normal
	    $bb.exporttiff configure -state normal
	    $bb.exportjpeg configure -state normal
	    $bb.exportpng configure -state normal

	    switch -- [$current(frame) get type] {
		base {
		    $mm.export entryconfig \
			"[msgcat::mc {RGB Array}]..." -state disabled
		    $bb.exportrgbarray configure -state disabled
		}
		rgb {
		    $mm.export entryconfig \
			"[msgcat::mc {RGB Array}]..." -state normal
		}
		3d {
		    $mm.export entryconfig \
			"[msgcat::mc {RGB Array}]..." -state disabled
		    $bb.exportrgbarray configure -state disabled
		}
	    }
	}
    }
}

proc UpdateFileMenuSaveImage {} {
    global ds9
    global current

    set mm $ds9(mb).file
    set bb $ds9(buttons).file

    if {$current(frame) != {}} {
	$mm entryconfig [msgcat::mc {Save Image}] -state normal
	$bb.saveimagefits configure -state normal
	$bb.saveimageeps configure -state normal
	$bb.saveimagegif configure -state normal
	$bb.saveimagetiff configure -state normal
	$bb.saveimagejpeg configure -state normal
	$bb.saveimagepng configure -state normal
    } else {
	$mm entryconfig [msgcat::mc {Save Image}] -state disabled
	$bb.saveimagefits configure -state disabled
	$bb.saveimageeps configure -state disabled
	$bb.saveimagegif configure -state disabled
	$bb.saveimagetiff configure -state disabled
	$bb.saveimagejpeg configure -state disabled
	$bb.saveimagepng configure -state disabled
    }
}

proc UpdateFileMenuMovie {} {
    global ds9
    global current

    set mm $ds9(mb).file
    set bb $ds9(buttons).file

    if {$current(frame) != {}} {
	$mm entryconfig "[msgcat::mc {Create Movie}]..." -state normal
	$bb.movie configure -state normal
    } else {
	$mm entryconfig "[msgcat::mc {Create Movie}]..." -state disabled
	$bb.movie configure -state disabled
    }
}

proc UpdateFileMenuHeader {} {
    global ds9
    global current

    set mm $ds9(mb).file
    set bb $ds9(buttons).file

    $mm entryconfig [msgcat::mc {Header}] -state disabled
    $bb.header configure -state disabled
    if {$current(frame) != {}} {
	if {[$current(frame) has fits]} {
	    $mm entryconfig [msgcat::mc {Header}] -state normal
	    $bb.header configure -state normal
	}
    }
}

    
proc UpdateFileMenuXPA {} {
    global ds9
    global current
    global xpa

    set mm $ds9(mb).file
    set bb $ds9(buttons).file

    if {[info exists xpa]} {
	$mm.xpa entryconfig "[msgcat::mc {Information}]..." -state normal
	$mm.xpa entryconfig [msgcat::mc {Disconnect}] -state normal
    } else {
	$mm.xpa entryconfig "[msgcat::mc {Information}]..." -state disabled
	$mm.xpa entryconfig [msgcat::mc {Disconnect}] -state disabled
    }
}

proc UpdateFileMenuSAMP {} {
    global pds9
    global ds9
    global current
    global samp
 
    set mm $ds9(mb).file
    set bb $ds9(buttons).file

    if {!$pds9(samp)} {
	$mm.samp entryconfig [msgcat::mc {Connect}] -state disabled
	$mm.samp entryconfig [msgcat::mc {Disconnect}] -state disabled

	$mm.samp entryconfig [msgcat::mc {Image}] -state disabled
	$mm.samp entryconfig [msgcat::mc {Table}] -state disabled
	$bb.sampimage configure -state disabled
	$bb.samptable configure -state disabled
	return
    }

    if {[info exists samp]} {
	$mm.samp entryconfig [msgcat::mc {Connect}] -state disabled
	$mm.samp entryconfig [msgcat::mc {Disconnect}] -state normal
    } else {
	$mm.samp entryconfig [msgcat::mc {Connect}] -state normal
	$mm.samp entryconfig [msgcat::mc {Disconnect}] -state disabled
    }

    $mm.samp entryconfig [msgcat::mc {Image}] -state disabled
    $mm.samp entryconfig [msgcat::mc {Table}] -state disabled
    $bb.sampimage configure -state disabled
    $bb.samptable configure -state disabled

    if {$current(frame) == {}} {
	return
    }
    
    if {[info exists samp]} {
	if {[$current(frame) has fits]} {
	    set ss [expr $ds9(menu,start)+2]

	    $mm.samp entryconfig [msgcat::mc {Image}] -state normal
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
	}

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
	}
    }
}
