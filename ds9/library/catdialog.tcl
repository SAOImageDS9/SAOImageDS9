#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

# used by backup
proc CATDialog {varname format catalog title action} {
    global cat
    global icat
    global pcat
    global ds9

    global pds9
    global wcs
   
    # first determine if aready in use, then increment
    if {[lsearch $icat(cats) $varname] >= 0} {
	incr cat(id)
	append varname $cat(id)
    }

    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,cat)} {
	puts stderr "CATDialog $varname:$format:$catalog:$title:$action"
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
    ARInit $varname CATServer

    # procs
    set var(proc,exec) CATExec
    set var(proc,load) CATLoad
    set var(proc,error) ARError
    set var(proc,table) CATTable

    # CAT variables
    lappend icat(cats) $varname

    set var(catdb) ${varname}catdb
    set var(tbldb) ${varname}tbldb
    set var(symdb) ${varname}symdb
    set var(symdl) ${varname}symdl
    set var(fltdl) ${varname}fltdl

    set var(frame) $current(frame)

    set var(server) $pcat(server)

    # Skybot
    set var(loc) $pcat(loc)
    set var(asteroids) 1
    set var(planets) 1
    set var(comets) 1

    set var(system) $wcs(system)
    set var(sky) $wcs(sky)
    set var(skyformat) $wcs(skyformat)
    set var(rformat) $icat(rformat)
    set var(radius) $icat(radius)
    set var(max) $icat(max)
    set var(allrows) $icat(allrows)
    set var(allcols) $icat(allcols)
    set var(show) $icat(show)
    set var(edit) $icat(edit)
    set var(panto) $icat(panto)

    set var(psystem) $var(system)
    set var(psky) $var(sky)

    set var(blink) 0
    set var(blink,count) 0
    set var(blink,marker) {}

    set var(plot) 0
    set var(plot,var) {}
    set var(plot,x) {}
    set var(plot,xerr) {}
    set var(plot,y) {}
    set var(plot,yerr) {}

    CATSet $varname $format $catalog $title
    CATSymDBInit $varname

    # create the window
    set w $var(top)
    set mb $var(mb)

    set tt $title
    
    Toplevel $w $mb 7 $tt "CATDestroy $varname"
    $mb add cascade -label [msgcat::mc {File}] -menu $mb.file
    $mb add cascade -label [msgcat::mc {Edit}] -menu $mb.edit
    CATServerMenu $varname
    NSVRServerMenu $varname
    $mb add cascade -label [msgcat::mc {Symbol}] -menu $mb.symbol
    $mb add cascade -label [msgcat::mc {Preferences}] -menu $mb.prefs

    # file
    ThemeMenu $mb.file
    $mb.file add command -label "[msgcat::mc {Open}]..." \
	-command [list CATLoadVOTFile $varname] -accelerator "${ds9(ctrl)}O"
    $mb.file add command -label "[msgcat::mc {Save}]..." \
	-command [list TBLSaveVOTFile $varname] -accelerator "${ds9(ctrl)}S"
    $mb.file add separator
    $mb.file add cascade -label [msgcat::mc {Import}] -menu $mb.file.import
    $mb.file add cascade -label [msgcat::mc {Export}] -menu $mb.file.export
    $mb.file add separator
    $mb.file add command -label [msgcat::mc {Retrieve}] \
	-command [list CATApply $varname 0]
    $mb.file add command -label [msgcat::mc {Cancel}] \
	-command [list ARCancel $varname]
    $mb.file add separator
    $mb.file add command -label [msgcat::mc {Filter}] \
	-command [list CATTable $varname]
    $mb.file add command -label [msgcat::mc {Clear}] \
	-command [list CATOff $varname]
    $mb.file add separator
    $mb.file add checkbutton -label [msgcat::mc {Show}] \
	-variable ${varname}(show) -command [list CATGenerate $varname]
    $mb.file add checkbutton -label [msgcat::mc {Edit}] \
	-variable ${varname}(edit) -command [list CATEdit $varname]
    $mb.file add separator
    $mb.file add cascade -label [msgcat::mc {SAMP}] -menu $mb.file.samp
    $mb.file add command -label [msgcat::mc {Plot}] \
	-command [list CATPlot $varname]
    $mb.file add separator
    $mb.file add command -label [msgcat::mc {Header}] \
	-command [list CATHeader $varname]
    $mb.file add command -label [msgcat::mc {Acknowledgment}] \
	-command [list CATAck $varname]
    $mb.file add separator
    $mb.file add command -label [msgcat::mc {Update from Current Frame}] \
	-command [list TBLUpdate $varname]
    $mb.file add command \
	-label [msgcat::mc {Update from Current Crosshair}] \
	-command [list TBLCrosshair $varname]
    $mb.file add separator
	$mb.file add command -label [msgcat::mc {Copy to Regions}] \
	-command [list CATGenerateRegions $varname]
    $mb.file add separator
    $mb.file add command -label "[msgcat::mc {Print}]..." \
	-command [list TBLPrint $varname] -accelerator "${ds9(ctrl)}P"
    $mb.file add separator
    $mb.file add command -label [msgcat::mc {Close}] \
	-command [list CATDestroy $varname] -accelerator "${ds9(ctrl)}W"

    # Import
    ThemeMenu $mb.file.import
    $mb.file.import add command -label "[msgcat::mc {Starbase}]..." \
	-command [list CATLoadRDBFile $varname]
    $mb.file.import add command -label "[msgcat::mc {Tab-Separated-Value}]..." \
	-command [list CATLoadTSVFile $varname]
    $mb.file.import add command -label "[msgcat::mc {FITS}]..." \
	-command [list CATLoadFITSFile $varname]

    # Export
    ThemeMenu $mb.file.export
    $mb.file.export add command -label "[msgcat::mc {Starbase}]..." \
	-command [list TBLSaveRDBFile $varname]
    $mb.file.export add command -label "[msgcat::mc {Tab-Separated-Value}]..." \
	-command [list TBLSaveTSVFile $varname]

    # SAMP
    ThemeMenu $mb.file.samp
    $mb.file.samp add command -label [msgcat::mc {Connect}] \
	-command SAMPConnect
    $mb.file.samp add command -label [msgcat::mc {Disconnect}] \
	-command SAMPDisconnect
    $mb.file.samp add separator
    $mb.file.samp add cascade -label [msgcat::mc {Send}] \
	-menu $mb.file.samp.send

    ThemeMenu $mb.file.samp.send
    $mb.file.samp.send add command -label [msgcat::mc {Broadcast}] \
	-command [list SAMPSendTableLoadVotable {} $varname]
    $mb.file.samp.send add separator

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

    # symbol
    global $var(symdb)
    set flt $var(symdb)
    set sn [starbase_colnum $var(symdb) shape]
    set cn [starbase_colnum $var(symdb) color]
    set wn [starbase_colnum $var(symdb) width]
    set dn [starbase_colnum $var(symdb) dash]
    set fn [starbase_colnum $var(symdb) font]
    set fs [starbase_colnum $var(symdb) fontsize]
    set fw [starbase_colnum $var(symdb) fontweight]
    set fl [starbase_colnum $var(symdb) fontslant]

    ThemeMenu $mb.symbol
    $mb.symbol add cascade -label [msgcat::mc {Shape}] -menu $mb.symbol.shape
    $mb.symbol add cascade -label [msgcat::mc {Color}] -menu $mb.symbol.color
    $mb.symbol add cascade -label [msgcat::mc {Width}] -menu $mb.symbol.width
    $mb.symbol add cascade -label [msgcat::mc {Font}] -menu $mb.symbol.font
    $mb.symbol add separator
    $mb.symbol add command -label "[msgcat::mc {Advanced}]..." \
	-command [list CATSymDialog $varname]

    ThemeMenu $mb.symbol.shape
    $mb.symbol.shape add radiobutton -label [msgcat::mc {Circle}] \
	-variable ${flt}(1,$sn) -value circle \
	-command [list CATGenerate $varname]
    $mb.symbol.shape add radiobutton -label [msgcat::mc {Ellipse}] \
	-variable ${flt}(1,$sn) -value ellipse \
	-command [list CATGenerate $varname]
    $mb.symbol.shape add radiobutton -label [msgcat::mc {Box}] \
	-variable ${flt}(1,$sn) -value box \
	-command [list CATGenerate $varname]
    $mb.symbol.shape add radiobutton -label [msgcat::mc {Text}] \
	-variable ${flt}(1,$sn) -value text \
	-command [list CATGenerate $varname]
    $mb.symbol.shape add cascade -label [msgcat::mc {Point}] \
	-menu $mb.symbol.shape.point

    ThemeMenu $mb.symbol.shape.point
    $mb.symbol.shape.point add radiobutton -label [msgcat::mc {Circle}] \
	-variable ${flt}(1,$sn) -value {circle point} \
	-command [list CATGenerate $varname]
    $mb.symbol.shape.point add radiobutton -label [msgcat::mc {Box}] \
	-variable ${flt}(1,$sn) -value {box point} \
	-command [list CATGenerate $varname]
    $mb.symbol.shape.point add radiobutton -label [msgcat::mc {Diamond}] \
	-variable ${flt}(1,$sn) -value {diamond point} \
	-command [list CATGenerate $varname]
    $mb.symbol.shape.point add radiobutton -label [msgcat::mc {Cross}] \
	-variable ${flt}(1,$sn) -value {cross point} \
	-command [list CATGenerate $varname]
    $mb.symbol.shape.point add radiobutton -label [msgcat::mc {X}] \
	-variable ${flt}(1,$sn) -value {x point} \
	-command [list CATGenerate $varname]
    $mb.symbol.shape.point add radiobutton -label [msgcat::mc {Arrow}] \
	-variable ${flt}(1,$sn) -value {arrow point} \
	-command [list CATGenerate $varname]
    $mb.symbol.shape.point add radiobutton -label [msgcat::mc {BoxCircle}]\
	-variable ${flt}(1,$sn) -value {boxcircle point} \
	-command [list CATGenerate $varname]

    ColorMenu $mb.symbol.color $flt 1,$cn [list CATGenerate $varname]

    WidthDashMenu $mb.symbol.width $flt 1,$wn 1,$dn \
	[list CATGenerate $varname] [list CATGenerate $varname]

    FontMenu $mb.symbol.font $flt 1,$fn 1,$fs 1,$fw 1,$fl \
	[list CATGenerate $varname]

    ThemeMenu $mb.prefs
    $mb.prefs add checkbutton -label [msgcat::mc {Pan To}] \
	-variable ${varname}(panto)
    $mb.prefs add separator
    $mb.prefs add checkbutton -label [msgcat::mc {All Rows}] \
	-variable ${varname}(allrows)
    $mb.prefs add checkbutton -label [msgcat::mc {All Columns}] \
	-variable ${varname}(allcols)

    # Catalog
    set f [ttk::labelframe $w.cat -text [msgcat::mc {Catalog}] -padding 2]

    ttk::label $f.ttitle -text [msgcat::mc {Name}]
    ttk::label $f.title -textvariable ${varname}(title) \
	-relief groove -width 60 -anchor w

    ttk::label $f.tcat -text [msgcat::mc {Identification}]
    ttk::label $f.cat -textvariable ${varname}(catalog) \
	-relief groove -width 60 -anchor w

    ttk::label $f.tref -text [msgcat::mc {Reference}]
    ttk::label $f.ref -text [string range $varname 3 end] \
	-relief groove -width 13 -anchor w

    grid $f.ttitle $f.title -padx 2 -pady 2 -sticky w
    grid $f.tcat $f.cat -padx 2 -pady 2 -sticky w
    grid $f.tref $f.ref -padx 2 -pady 2 -sticky w
    switch $var(format) {
	skybot {
	    ttk::label $f.loctitle -text [msgcat::mc {IAU Location Code}]
	    ttk::entry $f.loc -textvariable ${varname}(loc) -width 7
	    grid $f.loctitle $f.loc -padx 2 -pady 2 -sticky w
	}
	default {}
    }

    # Object
    set f [ttk::labelframe $w.obj -text [msgcat::mc {Object}] -padding 2]

    ttk::label $f.nametitle -text [msgcat::mc {Name}]
    ttk::entry $f.name -textvariable ${varname}(name) -width 60

    set var(xname) [ttk::label $f.xtitle -text {} -width 1]
    ttk::entry $f.x -textvariable ${varname}(x) -width 14
    set var(yname) [ttk::label $f.ytitle -text {} -width 1]
    ttk::entry $f.y -textvariable ${varname}(y) -width 14

    CoordMenuButton $f.coord $varname system 0 sky skyformat \
	[list CATWCSMenuUpdate $varname]
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

    switch $var(format) {
	skybot {
	    ttk::checkbutton $f.asteroids -text [msgcat::mc {Asteroids}] \
		-variable ${varname}(asteroids)
	    ttk::checkbutton $f.planets -text [msgcat::mc {Planets}] \
		-variable ${varname}(planets)
	    ttk::checkbutton $f.comets -text [msgcat::mc {Comets}] \
		-variable ${varname}(comets)
	    grid x $f.asteroids $f.planets $f.comets -padx 2 -pady 2 -sticky w
	}
	default {}
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
	-command [list CATTable $varname]
    ttk::radiobutton $f.dsort -text [msgcat::mc {Decrease}] \
	-variable ${varname}(sort,dir) -value "-decreasing" \
	-command [list CATTable $varname]

    ttk::label $f.mtitle -text [msgcat::mc {Max Rows}]
    ttk::entry $f.max -textvariable ${varname}(max) -width 14

    ttk::label $f.ftitle -text [msgcat::mc {Found}] 
    set var(found) [ttk::label $f.found \
			-width 14 -relief groove -anchor w]

    set var(raname) [ttk::label $f.ra -text {} -width 3]
    set var(ramenu) [ttk::menubutton $f.ram -textvariable \
			 ${varname}(colx) -menu $f.ram.menu -width 14]
    set var(decname) [ttk::label $f.dec -text {} -width 3]
    set var(decmenu) [ttk::menubutton $f.decm -textvariable \
			  ${varname}(coly) -menu $f.decm.menu -width 14]

    CoordMenuButton $f.pcoord $varname psystem 1 psky {} \
	[list CATColsCmd $varname]
    CoordMenuEnable $f.pcoord.menu $varname psystem psky {}

    grid $f.mfilter $f.filter - - $f.bfilter \
	-padx 2 -pady 2 -sticky w
    grid $f.msort $f.sort $f.isort $f.dsort \
	-padx 2 -pady 2 -sticky w
    grid $f.mtitle $f.max $f.ftitle $f.found \
	-padx 2 -pady 2 -sticky w
    grid $var(raname) $var(ramenu) $var(decname) $var(decmenu) $f.pcoord \
	-padx 2 -pady 2 -sticky w

    # Table
    set f [ttk::frame $w.tbl]

    # set the col width
    switch $var(format) {
	cxc {set cw 18}
	default {set cw 14}
    }

    set var(tbl) [table $f.t \
		      -state disabled \
		      -usecommand 0 \
		      -variable $var(tbldb) \
		      -colorigin 1 \
		      -roworigin 0 \
		      -cols $icat(mincols) \
		      -rows $icat(minrows) \
		      -width -1 \
		      -height -1 \
		      -colwidth $cw \
		      -maxwidth 300 \
		      -maxheight 300 \
		      -titlerows 1 \
		      -resizeborders col \
		      -xscrollcommand [list $f.xscroll set]\
		      -yscrollcommand [list $f.yscroll set]\
		      -selecttype row \
		      -selectmode extended \
		      -anchor w \
		      -font [font actual TkDefaultFont] \
		      -browsecommand [list CATSelectCmd $varname %s %S] \
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

    ButtonButton $f.load [msgcat::mc {Open}] [list CATLoadVOTFile $varname]
    ButtonButton $f.save [msgcat::mc {Save}] [list TBLSaveVOTFile $varname]

    set var(apply) [ttk::button $f.apply \
			-text [msgcat::mc {Retrieve}] \
			-command "CATApply $varname 0"]
    set var(cancel) [ttk::button $f.cancel -text \
			 [msgcat::mc {Cancel}] \
			 -command "ARCancel $varname" -state disabled]
    ttk::button $f.filter -text [msgcat::mc {Filter}] \
	-command [list CATTable $varname]
    ttk::button $f.clear -text [msgcat::mc {Clear}] \
	-command [list CATOff $varname]
    set var(samp) [ttk::button $f.samp \
		       -text [msgcat::mc {SAMP}] \
		       -command "SAMPSendTableLoadVotable {} $varname"]
    ttk::button $f.plot -text [msgcat::mc {Plot}] \
	-command [list CATPlot $varname]
    ttk::button $f.close -text [msgcat::mc {Close}] \
	-command [list CATDestroy $varname]

    pack $f.apply $f.cancel $f.filter $f.clear $f.samp $f.plot $f.close \
	-side left -expand true -padx 2 -pady 4

    # Fini
    ttk::separator $w.stbl -orient horizontal
    ttk::separator $w.sstatus -orient horizontal
    pack $w.buttons $w.sstatus $w.status $w.stbl -side bottom -fill x
    pack $w.cat $w.obj $w.param -side top -fill x
    pack $w.tbl -side top -fill both -expand true

    bind $w <<Open>> [list CATLoadVOTFile $varname]
    bind $w <<Save>> [list TBLSaveVOTFile $varname]
    bind $w <<Print>> PSPrint
    bind $w <<Close>> [list CATDestroy $varname]

    # needs to go after sort menu button is defined
    TBLSortMenu $varname
    CATColsMenu $varname
    CATColsUpdate $varname
    switch $var(format) {
	cds {$mb entryconfig [msgcat::mc {Catalog Server}] -state normal}
	cxc -
	ned -
	skybot -
	simbad {
	    $mb entryconfig [msgcat::mc {Catalog Server}] -state disabled
	}
    }

    ARCoord $varname
    TBLUpdate $varname
    CATDialogUpdate $varname

    ARStatus $varname {}

    switch -- $action {
	apply {CATApply $varname 0}
	sync {CATApply $varname 1}
	none {}
    }

    # return the actual varname
    return $varname
}

proc CATDialogUpdate {varname} {
    upvar #0 $varname var
    global $varname

    global ds9
    global samp

    global debug
    if {$debug(tcl,cat)} {
	puts stderr "CATDialogUpdate $varname"
    }

    # do we have a db?
    if {[TBLValidDB $var(tbldb)]} {
	$var(mb).file entryconfig [msgcat::mc {Filter}] -state normal
	$var(mb).file entryconfig [msgcat::mc {Clear}] -state normal
	$var(mb).file entryconfig [msgcat::mc {Plot}] -state normal
	$var(mb).file entryconfig [msgcat::mc {Header}] -state normal
	$var(mb).file entryconfig [msgcat::mc {Copy to Regions}] -state normal
	$var(mb).file entryconfig "[msgcat::mc {Print}]..." -state normal

	$var(top).buttons.filter configure -state normal
	$var(top).buttons.clear configure -state normal
	$var(top).buttons.plot configure -state normal
    } else {
	$var(mb).file entryconfig [msgcat::mc {Filter}] -state disabled
	$var(mb).file entryconfig [msgcat::mc {Clear}] -state disabled
	$var(mb).file entryconfig [msgcat::mc {Plot}] -state disabled
	$var(mb).file entryconfig [msgcat::mc {Header}] -state disabled
	$var(mb).file entryconfig [msgcat::mc {Copy to Regions}] -state disabled
	$var(mb).file entryconfig "[msgcat::mc {Print}]..." -state disabled

	$var(top).buttons.filter configure -state disabled
	$var(top).buttons.clear configure -state disabled
	$var(top).buttons.plot configure -state disabled
    }

    set m $var(mb).file.samp
    set ss [expr $ds9(menu,start)+2]

    if {[info exists samp]} {
	# menu
	$m entryconfig [msgcat::mc {Send}] -state normal
	$m entryconfig [msgcat::mc {Connect}] -state disabled
	$m entryconfig [msgcat::mc {Disconnect}] -state normal

	if {[$m.send index end] >= $ss} {
	    $m.send delete $ss end
	}

	foreach args $samp(apps,votable) {
	    foreach {id name} $args {
		$m.send add command -label $name \
		    -command "SAMPSendTableLoadVotable $id $varname"
	    }
	}

	# button
	$var(samp) configure -state normal
    } else {
	# menu
	$m entryconfig [msgcat::mc {Send}] -state disabled
	$m entryconfig [msgcat::mc {Connect}] -state normal
	$m entryconfig [msgcat::mc {Disconnect}] -state disabled

	# button
	$var(samp) configure -state disabled
    }

}

proc CATAck {varname} {
    upvar #0 $varname var
    global $varname

    switch $var(format) {
	cds {CATCDSAck $varname}
	cxc {CATCXCAck $varname}
	ned {CATNEDAck $varname}
	skybot {CATSkyBotAck $varname}
	simbad {CATSIMBADAck $varname}
	default {CATDefaultAck $varname}
    }
}

proc CATDefaultAck {varname} {
    upvar #0 $varname var
    global $varname

    set msg {No Acknowledgment available}
    SimpleTextDialog ${varname}ack [msgcat::mc {Acknowledgment}] \
	80 10 insert top $msg
}

proc CATApply {varname sync} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,cat)} {
	puts stderr "CATApply $varname $sync"
    }

    if {$var(catalog) == {}} {
	Error [msgcat::mc {No Catalog specified}]
	return
    }

    set var(sync) $sync
    ARApply $varname
    if {$var(name) != {}} {
	set var(sky) fk5
	CoordMenuButtonCmd $varname system sky {}
	CATWCSMenuUpdate $varname

	NSVRServer $varname
    } else {
	CATServer $varname
    }
}

proc CATServer {varname} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,cat)} {
	puts stderr "CATServer $varname"
    }

    if {($var(x) != {}) && ($var(y) != {}) && ($var(radius) != {})} {
	ARStatus $varname [msgcat::mc {Contacting Server}]

	switch $var(format) {
	    cds {CATCDS $varname}
	    cxc {CATCXC $varname}
	    ned {CATNED $varname}
	    skybot {CATSkyBot $varname}
	    simbad {CATSIMBAD $varname}
	}
    } else {
	eval [list $var(proc,error) $varname [msgcat::mc {Please specify radius and either name or (ra,dec)}]]
    }
}

proc CATDestroy {varname} {
    upvar #0 $varname var

    global $varname
    global $var(catdb)
    global $var(tbldb)
    global $var(symdb)
    global $var(symdl)
    global icat

    global debug
    if {$debug(tcl,cat)} {
	puts stderr "CATDestroy $varname"
    }

    # stop timer if needed
    if {$var(blink)} {
	set var(blink) 0
	after cancel [list TBLSelectTimer $varname catalog]
    }

    # frame may have been deleted
    if {[info commands $var(frame)] != {}} {
	# unhighlite any makers
	if {[$var(frame) has fits]} {
	    $var(frame) marker catalog $varname unhighlite
	}
    }

    upvar #0 $var(symdl) svar
    if {[info exists svar(top)]} {
	if {[winfo exists $svar(top)]} {
	    CATSymDestroy $var(symdl)
	}
    }

    if {[info exists $var(symdb)]} {
	unset $var(symdb)
    }
    if {[info exists $var(tbldb)]} {
	unset $var(tbldb)
    }
    if {[info exists $var(catdb)]} {
	unset $var(catdb)
    }

    set ii [lsearch $icat(cats) $varname]
    if {$ii>=0} {
	set icat(cats) [lreplace $icat(cats) $ii $ii]
    }

    # plot window?
    if {$var(plot)} {
	PlotDestroy $var(plot,var)
    }

    # cat header?
    set vvarname ${varname}hdr
    global $vvarname
    if {[info exists $vvarname]} {
	SimpleTextDestroy $vvarname
    }

    ARDestroy $varname
}

proc CATEdit {varname} {
    upvar #0 $varname var
    global $varname
    global $var(tbldb)

    if {[info commands $var(frame)] == {}} {
	return
    }

    if {![$var(frame) has fits]} {
	return
    }

    $var(frame) marker catalog unselect all
    $var(frame) marker catalog unhighlite all

    CATGenerate $varname

    # regenerate the plot if needed
    if {$var(plot)} {
	CATPlotGenerate $varname
    }

    if {$var(edit)} {
	$var(tbl) configure \
	    -state normal \
	    -selectmode single
    } else {
	$var(tbl) configure \
	    -state disabled \
	    -selectmode extended
    }
}

proc CATHeader {varname} {
    upvar #0 $varname var
    global $varname
    global $var(tbldb)

    SimpleTextDialog ${varname}hdr "$var(title) [msgcat::mc {Header}]" \
	80 20 insert top [TBLGetHeader $varname]
}

proc CATKey {which key} {
    global icat
    global ds9

    set icat(key) $key
    set icat(key,update) {}

    $which marker catalog key
    foreach rr $icat(key,update) {
	eval "CATGenerateUpdate [lindex $rr 0] [lindex $rr 1]"
    }

    set icat(key) {}
    set icat(key,update) {}
}

proc CATWCSMenuUpdate {varname} {
    upvar #0 $varname var
    global $varname

    ARCoord $varname

    set var(psystem) $var(system)
    set var(psky) $var(sky)
    CoordMenuButtonCmd $varname psystem psky {}
    CATColsUpdate $varname
}

proc CATColsUpdate {varname} {
    upvar #0 $varname var
    global $varname

    global ds9
    global pds9

    switch $var(psystem) {
	image -
	physical -
	detector -
	amplifier {
	    $var(raname) configure -text {X} -font [font actual TkDefaultFont]
	    $var(decname) configure -text {Y} -font [font actual TkDefaultFont]
	}
	default {
	    if {[$var(frame) has wcs celestial $var(psystem)]} {
		switch $var(psky) {
		    fk4 -
		    fk5 -
		    icrs {
			$var(raname) configure -text "\u03b1" \
			    -font "$ds9(times) $pds9(font,size)"
			$var(decname) configure -text "\u03b4" \
			    -font "$ds9(times) $pds9(font,size)"
		    }
		    galactic {
			$var(raname) configure -text {l} \
			    -font "{$ds9(times)} $pds9(font,size) normal italic"
			$var(decname) configure -text {b} \
			    -font "{$ds9(times)} $pds9(font,size) normal italic"
		    }
		    ecliptic {
			$var(raname) configure -text "\u03bb" \
			    -font "$ds9(times) $pds9(font,size)"
			$var(decname) configure -text "\u03b2" \
			    -font "$ds9(times) $pds9(font,size)"
		    }
		}
	    } else {
		$var(raname) configure -text {X} \
		    -font [font actual TkDefaultFont]
		$var(decname) configure -text {Y} \
		    -font [font actual TkDefaultFont]
	    }
	}
    }
}

proc UpdateCATDialog {} {
    global icat

    foreach varname $icat(cats) {
	CATDialogUpdate $varname
    }
}


