#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc FPDialog {varname title url instr format action} {
    global fp
    global ifp
    global pfp

    global ds9
    global wcs
    global current
   
    global debug
    if {$debug(tcl,fp)} {
	puts stderr "FPDialog $varname:$title:$url:$instr:$format:$action"
    }

    if {$current(frame) == {}} {
	return
    }

    # first determine if aready in use, then increment
    if {[lsearch $ifp(fps) $varname] >= 0} {
	incr fp(id)
	append varname $fp(id)
    }

    upvar #0 $varname var
    global $varname

    # main dialog
    set var(top) ".${varname}"
    set var(mb) ".${varname}mb"

    # AR variables
    ARInit $varname FPServer

    # procs
    set var(proc,exec) FPExec
    set var(proc,load) FPLoad
    set var(proc,table) FPTable
    set var(proc,error) ARError

    # format
    switch $format {
	cxc {
	    set var(proc,reg) FPRegCXC
	    set var(colid) ObsId
	    set var(colreg) stcs
	}
	hla {
	    set var(proc,reg) FPRegHLA
	    set var(colid) PropID
	    set var(colreg) regionSTCS
	}
	cxcpublic {
	    set var(proc,reg) FPRegCXC
	    set var(colid) ObsId
	    set var(colreg) stcs
	}
    }

    # FP variables
    lappend ifp(fps) $varname

    set var(format) $format
    set var(catdb) ${varname}catdb
    set var(tbldb) ${varname}tbldb
    set var(frame) $current(frame)
    set var(hv) ${varname}hv

    set var(system) $wcs(system)
    set var(sky) $wcs(sky)
    set var(skyformat) $wcs(skyformat)
    set var(rformat) $ifp(rformat)
    set var(radius) $ifp(radius)
    set var(show) $ifp(show)
    set var(panto) $ifp(panto)

    set var(psystem) $var(system)
    set var(psky) $var(sky)

    set var(blink) 0
    set var(blink,count) 0
    set var(blink,marker) {}

    set var(url) $url
    set var(title) $title

    # instruments
    set var(instr) $instr
    foreach ss $var(instr) {
	set ll [string tolower $ss]
	set ${varname}(instr,$ll) 1
    }

    set var(filter) {}
    set var(sort) {}
    set var(sort,dir) "-increasing"

    # create the window
    set w $var(top)
    set mb $var(mb)

    set tt $title
    
    Toplevel $w $mb 7 $tt "FPDestroy $varname"
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
	-command [list FPApply $varname 0]
    $mb.file add command -label [msgcat::mc {Cancel}] \
	-command [list ARCancel $varname]
    $mb.file add separator
    $mb.file add command -label [msgcat::mc {Filter}] \
	-command [list TBLTable $varname]
    $mb.file add command -label [msgcat::mc {Clear}] \
	-command [list FPOff $varname]
    switch $var(format) {
	cxc -
	hla {
	    $mb.file add separator
	    $mb.file add checkbutton -label [msgcat::mc {Show}] \
		-variable ${varname}(show) -command [list FPGenerate $varname]
	}
	cxcpublic {}
    }
    $mb.file add separator
    $mb.file add command -label [msgcat::mc {Update from Current Frame}] \
	-command [list TBLUpdate $varname]
    $mb.file add command \
	-label [msgcat::mc {Update from Current Crosshair}] \
	-command [list TBLCrosshair $varname]
    switch $var(format) {
	cxc -
	hla {
	    $mb.file add separator
	    $mb.file add command -label [msgcat::mc {Copy to Regions}] \
		-command [list FPGenerateRegions $varname]
	}
	cxcpublic {}
    }
    $mb.file add separator
    $mb.file add command -label "[msgcat::mc {Print}]..." \
	-command [list TBLPrint $varname] -accelerator "${ds9(ctrl)}P"
    $mb.file add separator
    $mb.file add command -label [msgcat::mc {Close}] \
	-command [list FPDestroy $varname] -accelerator "${ds9(ctrl)}W"

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

    ThemeMenu $mb.prefs
    $mb.prefs add checkbutton -label [msgcat::mc {Pan To}] \
	-variable ${varname}(panto)

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

    ttk::button $f.update -text [msgcat::mc {Update}] \
	-command [list TBLUpdate $varname]

    ttk::label $f.rtitle -text [msgcat::mc {Radius}]
    ttk::entry $f.r -textvariable ${varname}(radius) -width 14

    ARRFormat $f.rformat $varname

    grid $f.nametitle $f.name - - - - -padx 2 -pady 2 -sticky w
    grid $f.xtitle $f.x $f.ytitle $f.y $f.coord $f.update \
	-padx 2 -pady 2 -sticky w
    grid $f.rtitle $f.r $f.rformat -padx 2 -pady 2 -sticky w

    # Instruments
    set f [ttk::labelframe $w.instr -text [msgcat::mc {Instrument}] -padding 2]
    set ii 0
    foreach ss $var(instr) {
	set ll [string tolower $ss]
	set ${varname}(instr,$ll) 1
	ttk::checkbutton $f.$ll -text $ss -variable ${varname}(instr,$ll)
	grid $f.$ll -row 0 -column $ii -padx 2
	incr ii
    }

    # Param
    set f [ttk::labelframe $w.param -text [msgcat::mc {Table}] -padding 2]

    ttk::label $f.mfilter -text [msgcat::mc {Filter}]
    ttk::entry $f.filter -textvariable ${varname}(filter) -width 50
    ttk::button $f.bfilter -text [msgcat::mc {Edit}] \
	-command [list TBLEditDialog $varname filter $var(catdb)]

    ttk::label $f.msort -text [msgcat::mc {Sort}]
    set var(sortmenu) [ttk::menubutton $f.sort \
			   -textvariable ${varname}(sort) \
			   -menu $f.sort.menu -width 14]
    ttk::radiobutton $f.isort -text [msgcat::mc {Increase}] \
	-variable ${varname}(sort,dir) -value "-increasing" \
	-command [list TBLTable $varname]
    ttk::radiobutton $f.dsort -text [msgcat::mc {Decrease}] \
	-variable ${varname}(sort,dir) -value "-decreasing" \
	-command [list TBLTable $varname]

    ttk::label $f.ftitle -text [msgcat::mc {Found}] 
    set var(found) [ttk::label $f.found \
			-width 14 -relief groove -anchor w]

    grid $f.mfilter $f.filter - - $f.bfilter \
	-padx 2 -pady 2 -sticky w
    grid $f.msort $f.sort $f.isort $f.dsort \
	-padx 2 -pady 2 -sticky w
    grid $f.ftitle $f.found -padx 2 -pady 2 -sticky w

    # Table
    set f [ttk::frame $w.tbl]

    set var(tbl) [table $f.t \
		      -state disabled \
		      -usecommand 0 \
		      -variable $var(tbldb) \
		      -colorigin 1 \
		      -roworigin 0 \
		      -cols $ifp(mincols) \
		      -rows $ifp(minrows) \
		      -width -1 \
		      -height -1 \
		      -maxwidth 300 \
		      -maxheight 300 \
		      -titlerows 1 \
		      -resizeborders col \
		      -xscrollcommand [list $f.xscroll set]\
		      -yscrollcommand [list $f.yscroll set]\
		      -selecttype row \
		      -anchor w \
		      -font [font actual TkDefaultFont] \
		      -browsecommand [list FPSelectCmd $varname %s %S] \
		      -fg [ThemeTreeForeground] \
		      -bg [ThemeTreeBackground] \
		     ]

    switch $var(format) {
	cxc -
	hla {
	    $var(tbl) configure -selectmode extended \
		-browsecommand [list FPSelectCmd $varname %s %S]
	}
	cxcpublic {
	    $var(tbl) configure -selectmode single \
		-browsecommand [list CXCPublicSelectCmd $varname %s %S]
	}
    }

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
			-command [list FPApply $varname 0]]
    set var(cancel) [ttk::button $f.cancel -text \
			 [msgcat::mc {Cancel}] \
			 -command [list ARCancel $varname] \
			 -state disabled]
    ttk::button $f.filter -text [msgcat::mc {Filter}] \
	-command [list TBLTable $varname]
    ttk::button $f.clear -text [msgcat::mc {Clear}] \
	-command [list FPOff $varname]
    ttk::button $f.close -text [msgcat::mc {Close}] \
	-command [list FPDestroy $varname]

    pack $f.apply $f.cancel $f.filter $f.clear $f.close \
	-side left -expand true -padx 2 -pady 4

    # Fini
    ttk::separator $w.stbl -orient horizontal
    ttk::separator $w.sstatus -orient horizontal
    pack $w.buttons $w.sstatus $w.status $w.stbl -side bottom -fill x
    pack $w.obj $w.instr $w.param -side top -fill x
    pack $w.tbl -side top -fill both -expand true

    bind $w <<Print>> PSPrint
    bind $w <<Close>> [list FPDestroy $varname]

    # needs to go after sort menu button is defined
    TBLSortMenu $varname

    ARCoord $varname
    TBLUpdate $varname
    FPDialogUpdate $varname

    ARStatus $varname {}

    switch -- $action {
	apply {FPApply $varname 0}
	sync {FPApply $varname 1}
	none {}
    }

    # return the actual varname
    return $varname
}

proc FPApply {varname sync} {
    upvar #0 $varname var
    global $varname

    set var(sync) $sync
    ARApply $varname

    if {$var(name) != {}} {
	set var(sky) fk5
	CoordMenuButtonCmd $varname system sky {}
	TBLWCSMenuUpdate $varname

	NSVRServer $varname
    } else {
	FPServer $varname
    }
}

proc FPServer {varname} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,fp)} {
	puts stderr "FPServer $varname"
    }

    if {($var(x) != {}) && ($var(y) != {}) && ($var(radius) != {})} {
	ARStatus $varname [msgcat::mc {Contacting Server}]
	FPVOT $varname
    } else {
	eval [list $var(proc,error) $varname [msgcat::mc {Please specify radius and either name or (ra,dec)}]]
    }
}

proc FPVOT {varname} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,fp)} {
	puts stderr "FPVOT $varname"
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
    set instr {}
    set first 1
    foreach ss $var(instr) {
	set ll [string tolower $ss]
	if {$var(instr,$ll)} {
	    if {!$first} {
		append instr ",$ss"
	    } else {
		append instr "$ss"
		set first 0
	    }
	}
    }

    if {$instr != {}} {
	set query [http::formatQuery pos "$xx,$yy" size $rr inst "$instr"]
    } elseif {$var(instr) != {}} {
	$var(proc,error) $varname [msgcat::mc {Please specify instruments}]
	return
    } else {
	set query [http::formatQuery pos "$xx,$yy" size $rr]
    }

    FPLoad $varname $var(url) $query
}

proc FPDestroy {varname} {
    upvar #0 $varname var
    global $varname

    global $var(catdb)
    global $var(tbldb)
    global ifp

    global debug
    if {$debug(tcl,fp)} {
	puts stderr "FPDestroy $varname"
    }

    # stop timer if needed
    if {$var(blink)} {
	set var(blink) 0
	after cancel [list TBLSelectTimer $varname footprint]
    }

    switch $var(format) {
	cxc -
	hla {
	    # frame may have been deleted
	    if {[info commands $var(frame)] != {}} {
		# unhighlite any makers
		if {[$var(frame) has fits]} {
		    $var(frame) marker footprint $varname unhighlite
		}
	    }
	}
	cxcpublic {
	    global $var(hv)
	    if {[info exists $var(hv)]} {
		HVDestroy $var(hv)
	    }
	}
    }	    

    if {[info exists $var(tbldb)]} {
	unset $var(tbldb)
    }
    if {[info exists $var(catdb)]} {
	unset $var(catdb)
    }
    
    set ii [lsearch $ifp(fps) $varname]
    if {$ii>=0} {
	set ifp(fps) [lreplace $ifp(fps) $ii $ii]
    }

    ARDestroy $varname
}

proc FPDialogUpdate {varname} {
    upvar #0 $varname var
    global $varname

    global ds9

    global debug
    if {$debug(tcl,fp)} {
	puts stderr "FPDialogUpdate $varname"
    }

    # do we have a db?
    if {[TBLValidDB $var(tbldb)]} {
	$var(mb).file entryconfig [msgcat::mc {Clear}] -state normal
	switch $var(format) {
	    cxc -
	    hla {$var(mb).file entryconfig [msgcat::mc {Copy to Regions}] -state normal}
	    cxcpublic {}
	}
	$var(mb).file entryconfig "[msgcat::mc {Print}]..." -state normal

	$var(top).buttons.clear configure -state normal
    } else {
	$var(mb).file entryconfig [msgcat::mc {Clear}] -state disabled
	switch $var(format) {
	    cxc -
	    hla {$var(mb).file entryconfig [msgcat::mc {Copy to Regions}] -state disabled}
	    cxcpublic {}
	}
	$var(mb).file entryconfig "[msgcat::mc {Print}]..." -state disabled

	$var(top).buttons.clear configure -state disabled
    }
}

