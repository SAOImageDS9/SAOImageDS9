#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

# used by backup
proc SIADialog {varname title url opts action} {
    global sia
    global isia
    global psia
    global ds9

    global wcs

    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,sia)} {
	puts stderr "SIADialog $varname:$title:$url:$opts:$action:"
    }

    # main dialog
    set var(top) ".${varname}"
    set var(mb) ".${varname}mb"

    if {[winfo exists $var(top)]} {
	raise $var(top)
	return
    }

    global current
    if {$current(frame) == {}} {
	return
    }

    # AR variables
    ARInit $varname SIAServer

    # procs
    set var(proc,exec) SIAExec
    set var(proc,load) SIALoad
    set var(proc,error) SIAError
    set var(proc,done) SIADone

    # SIA variables
    lappend isia(sias) $varname

    set var(tbldb) ${varname}db

    set var(system) $wcs(system)
    set var(sky) $wcs(sky)
    set var(skyformat) $wcs(skyformat)
    set var(rformat) $isia(rformat)
    set var(radius) $isia(radius)
    set var(save) $isia(save)
    set var(mode) $isia(mode)

    set var(url) $url
    set var(title) $title
    set var(opts) $opts

    # create the window
    set w $var(top)
    set mb $var(mb)

    set tt $title

    Toplevel $w $mb 7 $tt "SIADestroy $varname"
    $mb add cascade -label [msgcat::mc {File}] -menu $mb.file
    $mb add cascade -label [msgcat::mc {Edit}] -menu $mb.edit
    NSVRServerMenu $varname
    $mb add cascade -label [msgcat::mc {Preferences}] -menu $mb.prefs

    # file
    ThemeMenu $mb.file
    $mb.file add command -label "[msgcat::mc {Save}]..." \
	-command [list TBLSaveVOTFile $varname] -accelerator "${ds9(ctrl)}S"
    $mb.file add separator
    $mb.file add cascade -label [msgcat::mc {Export}] -menu $mb.file.export
    $mb.file add separator
    $mb.file add command -label [msgcat::mc {Retrieve}] \
	-command [list SIAApply $varname 0]
    $mb.file add command -label [msgcat::mc {Cancel}] \
	-command [list ARCancel $varname]
    $mb.file add separator
    $mb.file add command -label [msgcat::mc {Load}] \
	-command [list SIAImageCmd $varname]
    $mb.file add command -label [msgcat::mc {Clear}] \
	-command [list SIAOff $varname]
    $mb.file add separator
    $mb.file add command -label [msgcat::mc {Update from Current Frame}] \
	-command [list SIAUpdate $varname]
    $mb.file add command \
	-label [msgcat::mc {Update from Current Crosshair}] \
	-command [list SIACrosshair $varname]
    $mb.file add separator
    $mb.file add command -label "[msgcat::mc {Print}]..." \
	-command [list TBLPrint $varname] -accelerator "${ds9(ctrl)}P"
    $mb.file add separator
    $mb.file add command -label [msgcat::mc {Close}] \
	-command [list SIADestroy $varname] -accelerator "${ds9(ctrl)}W"

    # Export
    ThemeMenu $mb.file.export
    $mb.file.export add command -label "[msgcat::mc {Starbase}]..." \
	-command [list TBLSaveRDBFile $varname]
    $mb.file.export add command -label "[msgcat::mc {Tab-Separated-Value}]..." \
	-command [list TBLSaveTSVFile $varname]

    # edit
    ThemeMenu $mb.edit
    $mb.edit add command -label [msgcat::mc {Cut}] \
	-command "TBLCut $varname" -accelerator "${ds9(ctrl)}X"
    $mb.edit add command -label [msgcat::mc {Copy}] \
	-command "TBLCopy $varname" -accelerator "${ds9(ctrl)}C"
    $mb.edit add command -label [msgcat::mc {Paste}] \
	-command "EntryPaste $var(top)" -accelerator "${ds9(ctrl)}V"
    $mb.edit add separator
    $mb.edit add command -label [msgcat::mc {Clear}] \
	-command [list ARClear $varname]

    # prefs
    ThemeMenu $mb.prefs
    $mb.prefs add checkbutton -label [msgcat::mc {Save Image on Download}] \
	-variable ${varname}(save)
    $mb.prefs add separator
    $mb.prefs add radiobutton -label [msgcat::mc {New Frame}] \
	-variable ${varname}(mode) -value new
    $mb.prefs add radiobutton -label [msgcat::mc {Current Frame}] \
	-variable ${varname}(mode) -value current

    # Object
    set f [ttk::labelframe $w.obj -text [msgcat::mc {Object}] -padding 2]

    ttk::label $f.nametitle -text [msgcat::mc {Name}]
    ttk::entry $f.name -textvariable ${varname}(name) -width 60

    set var(xname) [ttk::label $f.xtitle -text {} -width 1]
    ttk::entry $f.x -textvariable ${varname}(x) -width 14
    set var(yname) [ttk::label $f.ytitle -text {} -width 1]
    ttk::entry $f.y -textvariable ${varname}(y) -width 14

    CoordMenuButton $f.coord $varname system 0 sky skyformat \
	[list TBLWCSMenuUpdate $varname]
    CoordMenuEnable $f.coord.menu $varname system sky skyformat

    ttk::label $f.rtitle -text [msgcat::mc {Radius}]
    ttk::entry $f.r -textvariable ${varname}(radius) -width 14

    ARRFormat $f.rformat $varname

    grid $f.nametitle $f.name - - - - -padx 2 -pady 2 -sticky w
    grid $f.xtitle $f.x $f.ytitle $f.y $f.coord -padx 2 -pady 2 -sticky w
    grid $f.rtitle $f.r $f.rformat -padx 2 -pady 2 -sticky w

    # Param
    set f [ttk::labelframe $w.param -text [msgcat::mc {Table}] -padding 2]

    ttk::label $f.ftitle -text [msgcat::mc {Found}] 
    set var(found) [ttk::label $f.found \
			-width 14 -relief groove -anchor w]

    grid $f.ftitle $f.found -padx 2 -pady 2 -sticky w

    # Table
    set f [ttk::frame $w.tbl]

    set var(tbl) [table $f.t \
		      -state disabled \
		      -usecommand 0 \
		      -variable $var(tbldb) \
		      -colorigin 1 \
		      -roworigin 0 \
		      -cols $isia(mincols) \
		      -rows $isia(minrows) \
		      -width -1 \
		      -height -1 \
		      -maxwidth 300 \
		      -maxheight 300 \
		      -titlerows 1 \
		      -resizeborders col \
		      -xscrollcommand [list $f.xscroll set]\
		      -yscrollcommand [list $f.yscroll set]\
		      -selecttype row \
		      -selectmode single \
		      -anchor w \
		      -font [font actual TkDefaultFont] \
		      -browsecommand [list SIASelectCmd $varname %s %S] \
		      -fg [ThemeTreeForeground] \
		      -bg [ThemeTreeBackground] \
		     ]

    $var(tbl) tag configure sel \
	-fg [ThemeSelectedForeground] -bg [ThemeSelectedBackground]
    $var(tbl) tag configure title -fg [ThemeForeground] -bg [ThemeBackground]

    ttk::scrollbar $f.yscroll -command [list $var(tbl) yview] -orient vertical
    ttk::scrollbar $f.xscroll -command [list $var(tbl) xview] -orient horizontal

    grid $var(tbl) $f.yscroll -sticky news
    grid $f.xscroll -stick news
    grid rowconfigure $f 0 -weight 1
    grid columnconfigure $f 0 -weight 1

    TBLBindMouseWheel $varname

    # Status
    set f [ttk::frame $w.status]

    ttk::label $f.title -text [msgcat::mc {Status}]
    ttk::label $f.item -textvariable ${varname}(status)

    grid $f.title $f.item -padx 2 -pady 2 -sticky w

    # Buttons
    set f [ttk::frame $w.buttons]

    set var(apply) [ttk::button $f.apply \
			-text [msgcat::mc {Retrieve}] \
			-command [list SIAApply $varname 0]]
    set var(cancel) [ttk::button $f.cancel -text \
			 [msgcat::mc {Cancel}] \
			 -command [list ARCancel $varname] \
			 -state disabled]
    set var(load) [ttk::button $f.load \
		       -text [msgcat::mc {Load}] \
		       -command [list SIAImageCmd $varname]]
    ttk::button $f.clear -text [msgcat::mc {Clear}] \
	-command [list SIAOff $varname]
    ttk::button $f.close -text [msgcat::mc {Close}] \
	-command [list SIADestroy $varname]

    pack $f.apply $f.cancel $f.load $f.clear $f.close \
	-side left -expand true -padx 2 -pady 4

    # Fini
    ttk::separator $w.stbl -orient horizontal
    ttk::separator $w.sstatus -orient horizontal
    pack $w.buttons $w.sstatus $w.status $w.stbl -side bottom -fill x
    pack $w.obj $w.param -side top -fill x
    pack $w.tbl -side top -fill both -expand true

    bind $w <<Save>> [list TBLSaveVOTFile $varname]
    bind $w <<Close>> [list SIADestroy $varname]
    bind $w <<Print>> [list TBLPrint $varname]

    ARCoord $varname
    SIAUpdate $varname
    SIADialogUpdate $varname

    ARStatus $varname {}

    switch -- $action {
	apply {SIAApply $varname 0}
	sync {SIAApply $varname 1}
	none {}
    }

    # return the actual varname
    return $varname
}

proc SIAApply {varname sync} {
    upvar #0 $varname var
    global $varname

    set var(sync) $sync
    ARApply $varname
    $var(mb).file entryconfig [msgcat::mc {Load}] -state disabled
    $var(load) configure -state disabled

    if {$var(name) != {}} {
	set var(sky) fk5
	CoordMenuButtonCmd $varname system sky {}
	TBLWCSMenuUpdate $varname

	NSVRServer $varname
    } else {
	SIAServer $varname
    }
}

proc SIAServer {varname} {
    upvar #0 $varname var
    global $varname
    global current

    global debug
    if {$debug(tcl,image)} {
	puts stderr "SIAServer $varname"
    }

    if {($var(x) != {}) && ($var(y) != {}) && ($var(radius) != {})} {
	ARStatus $varname [msgcat::mc {Contacting Server}]
	SIAVOT $varname
    } else {
	eval [list $var(proc,error) $varname [msgcat::mc {Please specify radius and either name or (ra,dec)}]]
    }
}

proc SIAVOT {varname} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,sia)} {
	puts stderr "SIAVOT $varname"
    }

    # coord (degrees)
    switch $var(skyformat) {
	degrees {
	    set xx $var(x)
	    set yy $var(y)
	}
	sexagesimal {
	    set xx [h2d [Sex2H $var(x)]]
	    set yy [Sex2D $var(y)]
	}
    }

    # radius (degrees)
    switch $var(rformat) {
	degrees {
	    set rr $var(radius)
	}
	arcmin {
	    set rr [expr $var(radius)/60.]
	}
	arcsec {
	    set rr [expr $var(radius)/60./60.]
	}
    }

    # query
    set query "$var(opts)[http::formatQuery POS "$xx,$yy" SIZE $rr FORMAT image/fits]"

    SIALoad $varname $var(url) $query
}

proc SIADestroy {varname} {
    upvar #0 $varname var
    global $varname
    global $var(tbldb)
    global isia

    global debug
    if {$debug(tcl,sia)} {
	puts stderr "SIADestroy $varname"
    }

    if {[info exists $var(tbldb)]} {
	unset $var(tbldb)
    }

    set ii [lsearch $isia(sias) $varname]
    if {$ii>=0} {
	set isia(sias) [lreplace $isia(sias) $ii $ii]
    }

    ARDestroy $varname
}

proc SIAApplyLoad {varname} {
    upvar #0 $varname var
    global $varname

    ARApply $varname
    $var(mb).file entryconfig [msgcat::mc {Load}] -state disabled
    $var(load) configure -state disabled
}

proc SIADone {varname} {
    upvar #0 $varname var
    global $varname

    ARDone $varname
    $var(mb).file entryconfig [msgcat::mc {Load}] -state normal
    $var(load) configure -state normal
}

proc SIACancelled {varname} {
    upvar #0 $varname var
    global $varname

    ARCancelled $varname
    $var(mb).file entryconfig [msgcat::mc {Load}] -state normal
    $var(load) configure -state normal
}

proc SIAError {varname message} {
    upvar #0 $varname var
    global $varname

    ARError $varname $message
    $var(mb).file entryconfig [msgcat::mc {Load}] -state normal
    $var(load) configure -state normal
}

proc SIADialogUpdate {varname} {
    upvar #0 $varname var
    global $varname

    global ds9
    global samp

    global debug
    if {$debug(tcl,sia)} {
	puts stderr "SIADialogUpdate $varname"
    }

    # do we have a db?
    if {[TBLValidDB $var(tbldb)]} {
	$var(mb).file entryconfig [msgcat::mc {Clear}] -state normal
	$var(mb).file entryconfig "[msgcat::mc {Print}]..." -state normal

	$var(top).buttons.clear configure -state normal
    } else {
	$var(mb).file entryconfig [msgcat::mc {Clear}] -state disabled
	$var(mb).file entryconfig "[msgcat::mc {Print}]..." -state disabled

	$var(top).buttons.clear configure -state disabled
    }
}

proc SIAImageCmd {varname} {
    upvar #0 $varname var
    global $varname

    global ds9

    global debug
    if {$debug(tcl,sia)} {
	puts stderr "SIAImage $varname"
    }

    global $var(tbldb)
    if {![TBLValidDB $var(tbldb)]} {
	return
    }

    set rowlist {}
    foreach sel [$var(tbl) curselection] {
	set rr [lindex [split $sel ,] 0]
	lappend rowlist $rr
    }
    set rowlist [lsort -unique $rowlist]

    set col [expr [lsearch [subst $${varname}db(Ucd)] {VOX:Image_AccessReference}] +1]
    if {$col == 0} {
	ARError $varname [msgcat::mc {Unable to find URL column}]
	return
    }

    if {$rowlist != {}} {
	set url [starbase_get $var(tbldb) $rowlist $col]
	SIAApplyLoad $varname
	ParseURL $url r
	switch -- $r(scheme) {
	    http -
	    https {
		if {$var(save)} {
		    set var(fn) [SaveFileDialog savefitsfbox $var(top)]
		    if {$var(fn) == {}} {
			SIADone $varname
			return
		    }
		} else {
		    set var(fn) [tmpnam [file extension $r(path)]]
		}

		IMGSVRGetURL $varname $url {}
	    }
	    default {
		eval [list $var(proc,error) $varname "$r(scheme) [msgcat::mc {Not Supported}]"]
		return
	    }
	}
    }
}

proc SIASelectCmd {varname ss rc} {
    upvar #0 $varname var
    global $varname

    # starts at 1
    global debug
    if {$debug(tcl,sia)} {
	puts stderr "SIASelectCmd $varname ss=$ss rc=$rc"
    }
}

proc SIAUpdate {varname} {
    upvar #0 $varname var
    global $varname

    global current
    global wcs

    global debug
    if {$debug(tcl,image)} {
	puts stderr "SIAUpdate $varname"
    }

    if {[winfo exists $var(top)]} {
	set var(name) {}
	if {$current(frame) != {} } {
	    if {[$current(frame) has wcs celestial $wcs(system)]} {
		set coord [$current(frame) get fits center \
			       $wcs(system) $var(sky) $var(skyformat)]
		set var(x) [lindex $coord 0]
		set var(y) [lindex $coord 1]

		set size [$current(frame) get fits size \
			      $wcs(system) $var(sky) $var(rformat)]
		set ww [lindex $size 0]
		set hh [lindex $size 1]
		set var(radius) [expr ($ww+$hh)/4]

		return
	    }
	} else {
	    set var(x) {}
	    set var(y) {}
	    set var(radius) {}
	}
    }
}

proc SIACrosshair {varname} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,image)} {
	puts stderr "SIACrosshair $varname"
    }

    global current
    global wcs

    if {[winfo exists $var(top)]} {
	set var(name) {}
	if {$current(frame) != {} } {
	    if {[$current(frame) has wcs celestial $wcs(system)]} {
		set coord [$current(frame) get crosshair \
			       $wcs(system) $var(sky) $var(skyformat)]
		set var(x) [lindex $coord 0]
		set var(y) [lindex $coord 1]

		return
	    }
	}
	set var(x) {}
	set var(y) {}
    }
}

