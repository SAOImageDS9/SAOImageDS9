#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc PrefsDialog {{which {}}} {
    global ds9
    global iprefs
    global dprefs

    # see if we already have a window visible
    if {[winfo exists $iprefs(top)]} {
	raise $iprefs(top)
	return
    }

    # create the window
    set w $iprefs(top)
    set mb $iprefs(mb)

    Toplevel $w $mb 6 [msgcat::mc {Preferences}] PrefsDialogSave

    $mb add cascade -label [msgcat::mc {File}] -menu $mb.file
    $mb add cascade -label [msgcat::mc {Edit}] -menu $mb.edit

    menu $mb.file
    $mb.file add command -label [msgcat::mc {Clear Preferences}] \
	-command PrefsDialogClear
    $mb.file add separator
    $mb.file add command -label [msgcat::mc {Save}] -command PrefsDialogSave
    $mb.file add command -label [msgcat::mc {Close}] -command PrefsDialogClose

    EditMenu $mb iprefs

    # List
    set f [ttk::frame $w.param]

    ttk::scrollbar $f.scroll -command [list $f.box yview]
    set dprefs(list) [listbox $f.box \
			  -yscroll [list $f.scroll set] \
			  -selectmode browse \
			  -setgrid true \
			  -width 18 -height 28 \
			 ]
    grid $f.box $f.scroll -sticky news
    grid rowconfigure $f 0 -weight 1
    grid columnconfigure $f 2 -weight 1

    bind $dprefs(list) <<ListboxSelect>> [list PrefsDialogListUpdate]

    set dprefs(tab) $f
    set dprefs(tabs) {}

    PrefsDialogGeneral
    PrefsDialogPrecision
    PrefsDialogStartup
    PrefsDialogMenu
    PrefsDialogPanner
    PrefsDialogMagnifier
    PrefsDialog3d
    PrefsDialogGraph
    PrefsDialogScale
    PrefsDialogColor
    PrefsDialogBin
    PrefsDialogZoom
    PrefsDialogRegion
    PrefsDialogAnnulus
    PrefsDialogPanda
    PrefsDialogAnalysis
    PrefsDialogPixelTable
    PrefsDialogContour
    PrefsDialogSmooth
    PrefsDialogCatalog
    PrefsDialogNRES
    PrefsDialogPlot
    PrefsDialogVO
    PrefsDialogPrint
    PrefsDialogPageSetup
    PrefsDialogCoord
    PrefsDialogExamine
    PrefsDialogHTTP

    # Buttons
    set f [ttk::frame $w.buttons]
    ttk::button $f.save -text [msgcat::mc {Save}] \
	-command PrefsDialogSave
    ttk::button $f.close -text [msgcat::mc {Close}] \
	-command PrefsDialogClose
    ttk::button $f.clear -text [msgcat::mc {Clear Preferences}] \
	-command PrefsDialogClear
    pack $f.clear $f.save $f.close \
	-side left -expand true -padx 2 -pady 4

    # Fini
    ttk::separator $w.sep -orient horizontal
    pack $w.buttons $w.sep -side bottom -fill x
    pack $w.param -fill both -expand true

    # http is hard coded to be last
    switch $which {
	http {$dprefs(list) selection set end}
	default {$dprefs(list) selection set 0}
    }

    PrefsDialogListUpdate
}

proc PrefsDialogListUpdate {} {
    global dprefs

    set which [$dprefs(list) curselection]
    if {$which == {}} {
	set which 0
    }
    foreach tab $dprefs(tabs) {
	grid forget $tab
    }

    grid [lindex $dprefs(tabs) $which] -row 0 -column 2 -sticky new
}

proc PrefsDialogSave {} {
    global iprefs

    if {[winfo exists $iprefs(top)]} {
	destroy $iprefs(top)
	destroy $iprefs(mb)
    }

    SavePrefs
}

proc PrefsDialogClose {} {
    global iprefs
    global dprefs

    if {[winfo exists $iprefs(top)]} {
	destroy $iprefs(top)
	destroy $iprefs(mb)
    }

    unset dprefs
}

proc PrefsDialogClear {} {
    global iprefs
    global dprefs
    global pds9

    if {$pds9(confirm)} {
	if {[tk_messageBox -type okcancel -icon question -message [msgcat::mc {Clear Preferences?}]] != {ok}} {
	    return
	}
    }
    
    ClearPrefs
    PrefsDialogClose
}

# Pref Frames

proc PrefsDialogGeneral {} {
    global dprefs
    global ds9
    global pds9
    global pmagnifier

    set w $dprefs(tab)

    $dprefs(list) insert end [msgcat::mc {General}]
    lappend dprefs(tabs) [ttk::frame $w.general]

    # General
    set f [ttk::labelframe $w.general.misc -text [msgcat::mc {General}]]

    ttk::checkbutton $f.backup \
	-text [msgcat::mc {Always save files during Backup}] \
	-variable pds9(backup)
    ttk::checkbutton $f.auto -text [msgcat::mc {Autoload FITS Regions}] \
	-variable pds9(automarker)
    ttk::checkbutton $f.confirm \
	-text [msgcat::mc {Enable Confirmation Dialogs}] \
	-variable pds9(confirm)
    ttk::label $f.tthreads -text [msgcat::mc {Number of Threads}]
    ttk::entry $f.threads -textvariable ds9(threads) \
	-validate focusout -validatecommand ChangeThreads -width 8

    grid $f.backup -padx 2 -pady 2 -sticky w
    grid $f.auto -padx 2 -pady 2 -sticky w
    grid $f.confirm -padx 2 -pady 2 -sticky w
    grid $f.tthreads $f.threads -padx 2 -pady 2 -sticky w

    # Language
    set f [ttk::labelframe $w.general.lang -text [msgcat::mc {Language}]]

    ttk::menubutton $f.lang -textvariable pds9(language,name) -menu $f.lang.menu

    set m $f.lang.menu
    menu $m
    $m add radiobutton -label [LanguageToName locale] \
	-variable pds9(language,name) -command "set pds9(language) locale"
    $m add separator
    $m add radiobutton -label [LanguageToName cs] \
	-variable pds9(language,name) -command "set pds9(language) cs"
    $m add radiobutton -label [LanguageToName da] \
	-variable pds9(language,name) -command "set pds9(language) da"
    $m add radiobutton -label [LanguageToName de] \
	-variable pds9(language,name) -command "set pds9(language) de"
    $m add radiobutton -label [LanguageToName en] \
	-variable pds9(language,name) -command "set pds9(language) en"
    $m add radiobutton -label [LanguageToName es] \
	-variable pds9(language,name) -command "set pds9(language) es"
    $m add radiobutton -label [LanguageToName fr] \
	-variable pds9(language,name) -command "set pds9(language) fr"
    $m add radiobutton -label [LanguageToName ja] \
        -variable pds9(language,name) -command "set pds9(language) ja"
    $m add radiobutton -label [LanguageToName pt] \
	-variable pds9(language,name) -command "set pds9(language) pt"
    $m add radiobutton -label [LanguageToName zh] \
	-variable pds9(language,name) -command "set pds9(language) zh"

    grid $f.lang -padx 2 -pady 2 -sticky w

    # GUI Font
    set f [ttk::labelframe $w.general.font -text [msgcat::mc {GUI Font}]]

    FontMenuButton $f.font pds9 font \
	font,size font,weight font,slant \
	[list SetDefaultFont true]
    ttk::button $f.reset -text [msgcat::mc {Reset}] \
	-command ResetDefaultFont

    grid $f.font $f.reset -padx 2 -pady 2 -sticky w

    # Text Font
    set f [ttk::labelframe $w.general.textfont -text [msgcat::mc {Text Font}]]

    FontMenuButton $f.textfont pds9 text,font \
	text,font,size text,font,weight text,font,slant \
	[list SetDefaultTextFont true]
    ttk::button $f.textreset -text [msgcat::mc {Reset}] \
	-command ResetDefaultTextFont

    grid $f.textfont $f.textreset -padx 2 -pady 2 -sticky w

    # Color
    set f [ttk::labelframe $w.general.color -text [msgcat::mc {Color}]]

    ttk::label $f.tbg -text [msgcat::mc {Background Color}]
    ColorMenuButton $f.bg pds9 bg PrefsBgColor

    ttk::label $f.tnan -text [msgcat::mc {Blank/Inf/NaN Color}]
    ColorMenuButton $f.nan pds9 nan PrefsNanColor

    grid $f.tbg $f.bg -padx 2 -pady 2 -sticky w
    grid $f.tnan $f.nan -padx 2 -pady 2 -sticky w

    # Mosaic
    set f [ttk::labelframe $w.general.mosaic -text [msgcat::mc {Mosaic}]]
    ttk::checkbutton $f.align -text {IRAF DETSEC Align} -variable pds9(iraf) \
	-command PrefsIRAFAlign

    grid $f.align -padx 2 -pady 2 -sticky w

    # Dialog Box
    set f [ttk::labelframe $w.general.box -text [msgcat::mc {Dialog Box}]]

    ttk::radiobutton $f.motif -text {Motif} -variable pds9(dialog) \
	-value motif
    ttk::radiobutton $f.windows -text {Windows} -variable pds9(dialog) \
	-value windows
    grid $f.motif $f.windows -padx 2 -pady 2 -sticky w

    switch $ds9(wm) {
	x11 {}
	aqua -
	win32 {
	    ttk::radiobutton $f.native -text [msgcat::mc {Native Dialog}] \
		-variable pds9(dialog) -value native
	    grid $f.native -row 0 -column 2 -padx 2 -pady 2 -sticky w
	}
    }

    ttk::checkbutton $f.center -text [msgcat::mc {Center Non-modal Dialogs}] \
	-variable pds9(dialog,center)
    ttk::checkbutton $f.all -text [msgcat::mc {Default All Files}] \
	-variable pds9(dialog,all)

    grid $f.center - -padx 2 -pady 2 -sticky w
    grid $f.all - -padx 2 -pady 2 -sticky w

    pack $w.general.misc $w.general.lang $w.general.font \
	$w.general.textfont $w.general.color $w.general.mosaic \
	$w.general.box \
	-side top -fill both -expand true
}

proc PrefsDialogPrecision {} {
    global dprefs
    global ds9
    global pds9

    set w $dprefs(tab)

    $dprefs(list) insert end [msgcat::mc {Precision}]
    lappend dprefs(tabs) [ttk::frame $w.precision]

    # Coordinates
    set f [ttk::labelframe $w.precision.coord -text [msgcat::mc {Coordinates}]]

    ttk::label $f.tlinear -text [msgcat::mc {Linear}]
    ttk::entry $f.linear -textvariable pds9(prec,linear) \
	-validate focusout -validatecommand PrefsPrecision -width 8
    ttk::label $f.tdeg -text [msgcat::mc {Degrees}]
    ttk::entry $f.deg -textvariable pds9(prec,deg) \
	-validate focusout -validatecommand PrefsPrecision -width 8
    ttk::label $f.thms -text [msgcat::mc {HMS}]
    ttk::entry $f.hms -textvariable pds9(prec,hms) \
	-validate focusout -validatecommand PrefsPrecision -width 8
    ttk::label $f.tdms -text [msgcat::mc {DMS}]
    ttk::entry $f.dms -textvariable pds9(prec,dms) \
	-validate focusout -validatecommand PrefsPrecision -width 8

    grid $f.tlinear $f.linear -padx 2 -pady 2 -sticky w
    grid $f.tdeg $f.deg -padx 2 -pady 2 -sticky w
    grid $f.thms $f.hms -padx 2 -pady 2 -sticky w
    grid $f.tdms $f.dms -padx 2 -pady 2 -sticky w

    # Length
    set f [ttk::labelframe $w.precision.length -text [msgcat::mc {Length}]]

    ttk::label $f.tarcmin -text [msgcat::mc {ArcMin}]
    ttk::entry $f.arcmin -textvariable pds9(prec,arcmin) \
	-validate focusout -validatecommand PrefsPrecision -width 8
    ttk::label $f.tarcsec -text [msgcat::mc {ArcSec}]
    ttk::entry $f.arcsec -textvariable pds9(prec,arcsec) \
	-validate focusout -validatecommand PrefsPrecision -width 8

    grid $f.tarcmin $f.arcmin -padx 2 -pady 2 -sticky w
    grid $f.tarcsec $f.arcsec -padx 2 -pady 2 -sticky w

    pack $w.precision.coord $w.precision.length \
	-side top -fill both -expand true
}

proc PrefsDialogStartup {} {
    global dprefs

    set w $dprefs(tab)

    $dprefs(list) insert end [msgcat::mc {Startup}]
    lappend dprefs(tabs) [ttk::frame $w.startup]

    set f [ttk::labelframe $w.startup.params -text [msgcat::mc {At Startup}]]

    ttk::checkbutton $f.xpa -text [msgcat::mc {Initialize XPA}] \
	-variable pds9(xpa)
    ttk::checkbutton $f.samp -text [msgcat::mc {Connect SAMP}] \
	-variable pds9(samp)

    grid $f.xpa -padx 2 -pady 2 -sticky w
    grid $f.samp -padx 2 -pady 2 -sticky w

    pack $w.startup.params -side top -fill both -expand true
}
